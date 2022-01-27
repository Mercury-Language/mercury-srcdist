/*
** Automatically generated from `lco.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "hlds.status.mih"
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



#line 1443 "lco.m"
struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s {
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12;
#line 1448 "lco.m"
  MR_bool transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded;
#line 1512 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42;
#line 1499 "lco.m"
  jmp_buf transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0;
#line 1499 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115;
#line 1499 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44;
#line 1499 "lco.m"
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114;
#line 1499 "lco.m"
  MR_Box transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44;
#line 1443 "lco.m"
};


#line 178 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 181 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 184 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 187 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 190 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 193 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0;

#line 196 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 199 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 202 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 211 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 214 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0;

#line 217 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 220 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 223 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 226 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 229 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 232 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0;

#line 235 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0;

#line 238 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1;

#line 241 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2];

#line 244 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2];

#line 247 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2];

#line 250 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3];

#line 253 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3];

#line 256 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0;

#line 259 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1];

#line 262 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1];

#line 265 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1];

#line 268 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1];

#line 271 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

#line 274 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 277 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 280 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[9];

#line 283 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0[9];

#line 286 "transform_hlds.lco.c"
static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_const_info_0_0[9];

#line 289 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0;

#line 292 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1];

#line 295 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1];

#line 298 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1];

#line 301 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1];

#line 304 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 307 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 310 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[6];

#line 313 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[6];

#line 316 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0;

#line 319 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1];

#line 322 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1];

#line 325 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1];

#line 328 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1];

#line 331 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0;

#line 334 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1;

#line 337 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2];

#line 340 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2];

#line 343 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2];

#line 346 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0;

#line 349 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1;

#line 352 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2];

#line 355 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2];

#line 358 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2];

#line 361 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0;

#line 364 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2];

#line 367 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0;

#line 370 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1];

#line 373 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1];

#line 376 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1];

#line 379 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1];

#line 382 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

#line 385 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2];

#line 388 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2];

#line 391 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0;

#line 394 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1];

#line 397 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1];

#line 400 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1];

#line 403 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1];

#line 406 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0;

#line 409 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3];

#line 412 "transform_hlds.lco.c"
static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0;

#line 415 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1];

#line 418 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1];

#line 421 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1];

#line 424 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1];

#line 427 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 430 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 432 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 435 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 438 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 440 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 442 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 445 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 448 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 450 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 453 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 456 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 458 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 460 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 463 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 466 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 468 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 471 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 474 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 476 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 478 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 481 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 484 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 486 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 489 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 492 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 494 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 496 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 499 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 502 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 504 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 507 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 510 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 512 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 514 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 517 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 520 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 522 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 525 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 528 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 530 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 532 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 535 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 538 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 540 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 543 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 546 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 548 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 550 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 553 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 556 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 558 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 561 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 564 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 566 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 568 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 571 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 574 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 576 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 579 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 582 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 584 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 586 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 589 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 592 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 594 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 597 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 600 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 602 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 604 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 607 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 610 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 612 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2);

#line 615 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 618 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 620 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 622 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3);

#line 752 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 752 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 1664 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1664__1_2_p_0(
#line 1664 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1664 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70);

#line 1382 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1382__1_2_p_0(
#line 1382 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1382 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25);

#line 1256 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1256__1_2_p_0(
#line 1256 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1256 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43);

#line 1110 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1110__1_2_f_0(
#line 1110 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1110 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14);

#line 1107 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1107__1_1_f_0(
#line 1107 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_17);

#line 949 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__949__1_2_p_0(
#line 949 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 949 "lco.m"
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

#line 268 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 268 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 268 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 268 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3);

#line 268 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 268 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 268 "lco.m"
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

#line 1757 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1757 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1757 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1757 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1757 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1757 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1757 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1757 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1757 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1714 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1714 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1714 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1714 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1714 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1714 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
#line 1714 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);

#line 1689 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1689 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1689 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1689 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1689 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1689 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10);

#line 1679 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1679 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1679 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1679 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1679 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4);

#line 1664 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1664 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1664 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1664 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2);

#line 1621 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1621 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1621 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1612 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1612 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1612 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1612 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1612 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);

#line 1605 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1605 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1605 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1605 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1605 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1605 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4);

#line 1597 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1597 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1589 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1589 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1589 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1589 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24);

#line 1578 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1578 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1578 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1578 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

#line 1559 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1559 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1559 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1559 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);

#line 1474 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
#line 1474 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1474 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1474 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1474 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1474 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1474 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1465 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1465 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1465 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1465 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1465 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1465 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1465 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 1499 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1499 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1499 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
#line 1499 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1499 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
#line 1499 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1499 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
#line 1499 "lco.m"
  void * transform_hlds__lco__env_ptr_arg);

#line 1443 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1443 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1443 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
#line 1443 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);

#line 1382 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1382 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1375 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1375 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12);

#line 1330 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1330 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1330 "lco.m"
  MR_Word transform_hlds__lco__Var_4);

#line 1321 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4);

#line 1311 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1311 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1311 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5);

#line 1276 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1276 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14);

#line 1256 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1256 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 1210 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1210 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1210 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1210 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62);

#line 1195 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1195 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1195 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1195 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1195 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8);

#line 1158 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1158 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1158 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1158 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7);

#line 1116 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1116 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1116 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1116 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1116 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1116 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1116 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1116 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1116 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31);

#line 1110 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1110 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1110 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1107 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1107 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1107 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 1101 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1101 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8);

#line 1092 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1092 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3);

#line 1069 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1069 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1069 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1069 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1069 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1069 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20);

#line 1010 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1010 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 1010 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 1010 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 1010 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 1010 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10);

#line 982 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 982 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 982 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 982 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 982 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 982 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 982 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 982 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7);

#line 949 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 949 "lco.m"
  MR_Box transform_hlds__lco__closure_arg);

#line 945 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 945 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6);

#line 866 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 866 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 866 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 866 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 866 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 866 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 866 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 866 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6);

#line 864 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 864 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 864 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 824 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 824 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 824 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_57,
#line 824 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_58,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15);

#line 788 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 788 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 788 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1);

#line 774 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 774 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 774 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 774 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 774 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 774 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33);

#line 752 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 752 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 752 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

#line 717 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 717 "lco.m"
  MR_Word transform_hlds__lco__Goal_2);

#line 679 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(
#line 679 "lco.m"
  MR_Word transform_hlds__lco__Info_5,
#line 679 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 679 "lco.m"
  MR_Word transform_hlds__lco__Goal_7,
#line 679 "lco.m"
  MR_Word * transform_hlds__lco__OutArgs_8);

#line 649 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 649 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 649 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 649 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 649 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 649 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 649 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 649 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 649 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15);

#line 619 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 619 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 619 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 619 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 619 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 619 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 619 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5);

#line 615 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 615 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 615 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 615 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 615 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 615 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 615 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 615 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 615 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7);

#line 605 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 605 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 605 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 605 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 605 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 605 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 580 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 580 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 580 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 580 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 580 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 580 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5);

#line 492 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 492 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 492 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 492 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 492 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 492 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9);

#line 411 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_12_p_0(
#line 411 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_13,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__SCC_14,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__CurProc_15,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__PredInfo_16,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__ProcInfo0_17,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44,
#line 411 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46,
#line 411 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48,
#line 411 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49,
#line 411 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_50);

#line 381 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_if_permitted_11_p_0(
#line 381 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_32,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_33);

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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2236 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2244 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2252 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2261 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2270 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2279 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2288 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2296 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2304 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2312 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2320 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2328 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2337 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2346 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2354 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2363 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 2371 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2380 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2388 "transform_hlds.lco.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2397 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
  (MR_String) "do_not_allow_float_addr",
  (MR_Integer) 0
};

#line 2403 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
  (MR_String) "allow_float_addr",
  (MR_Integer) 1
};

#line 2409 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1
};

#line 2415 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0
};

#line 2421 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2427 "transform_hlds.lco.c"
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

#line 2444 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2451 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3] = {
  (MR_String) "fi_type",
  (MR_String) "fi_cons_id",
  (MR_String) "fi_arg"
};

#line 2458 "transform_hlds.lco.c"
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

#line 2473 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2478 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0
  }
};

#line 2487 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

#line 2492 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1] = {
  (MR_Integer) 0
};

#line 2497 "transform_hlds.lco.c"
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

#line 2514 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

#line 2523 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2531 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2539 "transform_hlds.lco.c"
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

#line 2552 "transform_hlds.lco.c"
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

#line 2565 "transform_hlds.lco.c"
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

#line 2614 "transform_hlds.lco.c"
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

#line 2629 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2634 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0
  }
};

#line 2643 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

#line 2648 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1] = {
  (MR_Integer) 0
};

#line 2653 "transform_hlds.lco.c"
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

#line 2670 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2678 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2687 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0
};

#line 2697 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[6] = {
  (MR_String) "lco_module_info",
  (MR_String) "lco_cur_scc_variants",
  (MR_String) "lco_var_set",
  (MR_String) "lco_var_types",
  (MR_String) "lco_permitted",
  (MR_String) "lco_changed"
};

#line 2707 "transform_hlds.lco.c"
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

#line 2722 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2727 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0
  }
};

#line 2736 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

#line 2741 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1] = {
  (MR_Integer) 0
};

#line 2746 "transform_hlds.lco.c"
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

#line 2763 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
  (MR_String) "lco_is_not_permitted_on_scc",
  (MR_Integer) 0
};

#line 2769 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
  (MR_String) "lco_is_permitted_on_scc",
  (MR_Integer) 1
};

#line 2775 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2781 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

#line 2787 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2793 "transform_hlds.lco.c"
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

#line 2810 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
  (MR_String) "proc_not_changed",
  (MR_Integer) 0
};

#line 2816 "transform_hlds.lco.c"
static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
  (MR_String) "proc_changed",
  (MR_Integer) 1
};

#line 2822 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1
};

#line 2828 "transform_hlds.lco.c"
static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0
};

#line 2834 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2840 "transform_hlds.lco.c"
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

#line 2857 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

#line 2865 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2871 "transform_hlds.lco.c"
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

#line 2886 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2891 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0
  }
};

#line 2900 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

#line 2905 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1] = {
  (MR_Integer) 0
};

#line 2910 "transform_hlds.lco.c"
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

#line 2927 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

#line 2935 "transform_hlds.lco.c"
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

#line 2952 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

#line 2958 "transform_hlds.lco.c"
static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2] = {
  (MR_String) "va_pos",
  (MR_String) "va_field"
};

#line 2964 "transform_hlds.lco.c"
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

#line 2979 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2984 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0
  }
};

#line 2993 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

#line 2998 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1] = {
  (MR_Integer) 0
};

#line 3003 "transform_hlds.lco.c"
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

#line 3020 "transform_hlds.lco.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

#line 3028 "transform_hlds.lco.c"
static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3035 "transform_hlds.lco.c"
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

#line 3050 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3055 "transform_hlds.lco.c"
static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0
  }
};

#line 3064 "transform_hlds.lco.c"
static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

#line 3069 "transform_hlds.lco.c"
static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1] = {
  (MR_Integer) 0
};

#line 3074 "transform_hlds.lco.c"
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

#line 3091 "transform_hlds.lco.c"
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

#line 3108 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
#line 3111 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3113 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3115 "transform_hlds.lco.c"
{
#line 3117 "transform_hlds.lco.c"
  {
#line 3119 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3122 "transform_hlds.lco.c"
    {
#line 3124 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____allow_float_addr_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3127 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3129 "transform_hlds.lco.c"
  }
#line 3131 "transform_hlds.lco.c"
}

#line 3134 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
#line 3137 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3139 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3141 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3143 "transform_hlds.lco.c"
{
#line 3145 "transform_hlds.lco.c"
  {
#line 3147 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3150 "transform_hlds.lco.c"
    {
#line 3152 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____allow_float_addr_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3155 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3157 "transform_hlds.lco.c"
  }
#line 3159 "transform_hlds.lco.c"
}

#line 3162 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
#line 3165 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3167 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3169 "transform_hlds.lco.c"
{
#line 3171 "transform_hlds.lco.c"
  {
#line 3173 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3176 "transform_hlds.lco.c"
    {
#line 3178 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____field_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3181 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3183 "transform_hlds.lco.c"
  }
#line 3185 "transform_hlds.lco.c"
}

#line 3188 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
#line 3191 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3193 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3195 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3197 "transform_hlds.lco.c"
{
#line 3199 "transform_hlds.lco.c"
  {
#line 3201 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3204 "transform_hlds.lco.c"
    {
#line 3206 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____field_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3209 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3211 "transform_hlds.lco.c"
  }
#line 3213 "transform_hlds.lco.c"
}

#line 3216 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
#line 3219 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3221 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3223 "transform_hlds.lco.c"
{
#line 3225 "transform_hlds.lco.c"
  {
#line 3227 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3230 "transform_hlds.lco.c"
    {
#line 3232 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_const_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3235 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3237 "transform_hlds.lco.c"
  }
#line 3239 "transform_hlds.lco.c"
}

#line 3242 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
#line 3245 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3247 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3249 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3251 "transform_hlds.lco.c"
{
#line 3253 "transform_hlds.lco.c"
  {
#line 3255 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3258 "transform_hlds.lco.c"
    {
#line 3260 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_const_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3263 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3265 "transform_hlds.lco.c"
  }
#line 3267 "transform_hlds.lco.c"
}

#line 3270 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
#line 3273 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3275 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3277 "transform_hlds.lco.c"
{
#line 3279 "transform_hlds.lco.c"
  {
#line 3281 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3284 "transform_hlds.lco.c"
    {
#line 3286 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3289 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3291 "transform_hlds.lco.c"
  }
#line 3293 "transform_hlds.lco.c"
}

#line 3296 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
#line 3299 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3301 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3303 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3305 "transform_hlds.lco.c"
{
#line 3307 "transform_hlds.lco.c"
  {
#line 3309 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3312 "transform_hlds.lco.c"
    {
#line 3314 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3317 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3319 "transform_hlds.lco.c"
  }
#line 3321 "transform_hlds.lco.c"
}

#line 3324 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
#line 3327 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3329 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3331 "transform_hlds.lco.c"
{
#line 3333 "transform_hlds.lco.c"
  {
#line 3335 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3338 "transform_hlds.lco.c"
    {
#line 3340 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3343 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3345 "transform_hlds.lco.c"
  }
#line 3347 "transform_hlds.lco.c"
}

#line 3350 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
#line 3353 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3355 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3357 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3359 "transform_hlds.lco.c"
{
#line 3361 "transform_hlds.lco.c"
  {
#line 3363 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3366 "transform_hlds.lco.c"
    {
#line 3368 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3371 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3373 "transform_hlds.lco.c"
  }
#line 3375 "transform_hlds.lco.c"
}

#line 3378 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
#line 3381 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3383 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3385 "transform_hlds.lco.c"
{
#line 3387 "transform_hlds.lco.c"
  {
#line 3389 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3392 "transform_hlds.lco.c"
    {
#line 3394 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____proc_changed_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3397 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3399 "transform_hlds.lco.c"
  }
#line 3401 "transform_hlds.lco.c"
}

#line 3404 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
#line 3407 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3409 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3411 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3413 "transform_hlds.lco.c"
{
#line 3415 "transform_hlds.lco.c"
  {
#line 3417 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3420 "transform_hlds.lco.c"
    {
#line 3422 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____proc_changed_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3425 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3427 "transform_hlds.lco.c"
  }
#line 3429 "transform_hlds.lco.c"
}

#line 3432 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
#line 3435 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3437 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3439 "transform_hlds.lco.c"
{
#line 3441 "transform_hlds.lco.c"
  {
#line 3443 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3446 "transform_hlds.lco.c"
    {
#line 3448 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____store_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3451 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3453 "transform_hlds.lco.c"
  }
#line 3455 "transform_hlds.lco.c"
}

#line 3458 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
#line 3461 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3463 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3465 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3467 "transform_hlds.lco.c"
{
#line 3469 "transform_hlds.lco.c"
  {
#line 3471 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3474 "transform_hlds.lco.c"
    {
#line 3476 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____store_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3479 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3481 "transform_hlds.lco.c"
  }
#line 3483 "transform_hlds.lco.c"
}

#line 3486 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
#line 3489 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3491 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3493 "transform_hlds.lco.c"
{
#line 3495 "transform_hlds.lco.c"
  {
#line 3497 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3500 "transform_hlds.lco.c"
    {
#line 3502 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____var_to_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3505 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3507 "transform_hlds.lco.c"
  }
#line 3509 "transform_hlds.lco.c"
}

#line 3512 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
#line 3515 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3517 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3519 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3521 "transform_hlds.lco.c"
{
#line 3523 "transform_hlds.lco.c"
  {
#line 3525 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3528 "transform_hlds.lco.c"
    {
#line 3530 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____var_to_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3533 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3535 "transform_hlds.lco.c"
  }
#line 3537 "transform_hlds.lco.c"
}

#line 3540 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
#line 3543 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3545 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3547 "transform_hlds.lco.c"
{
#line 3549 "transform_hlds.lco.c"
  {
#line 3551 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3554 "transform_hlds.lco.c"
    {
#line 3556 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_arg_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3559 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3561 "transform_hlds.lco.c"
  }
#line 3563 "transform_hlds.lco.c"
}

#line 3566 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
#line 3569 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3571 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3573 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3575 "transform_hlds.lco.c"
{
#line 3577 "transform_hlds.lco.c"
  {
#line 3579 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3582 "transform_hlds.lco.c"
    {
#line 3584 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_arg_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3587 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3589 "transform_hlds.lco.c"
  }
#line 3591 "transform_hlds.lco.c"
}

#line 3594 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
#line 3597 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3599 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3601 "transform_hlds.lco.c"
{
#line 3603 "transform_hlds.lco.c"
  {
#line 3605 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3608 "transform_hlds.lco.c"
    {
#line 3610 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3613 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3615 "transform_hlds.lco.c"
  }
#line 3617 "transform_hlds.lco.c"
}

#line 3620 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
#line 3623 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3625 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3627 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3629 "transform_hlds.lco.c"
{
#line 3631 "transform_hlds.lco.c"
  {
#line 3633 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3636 "transform_hlds.lco.c"
    {
#line 3638 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3641 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3643 "transform_hlds.lco.c"
  }
#line 3645 "transform_hlds.lco.c"
}

#line 3648 "transform_hlds.lco.c"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
#line 3651 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 3653 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2)
#line 3655 "transform_hlds.lco.c"
{
#line 3657 "transform_hlds.lco.c"
  {
#line 3659 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded;

#line 3662 "transform_hlds.lco.c"
    {
#line 3664 "transform_hlds.lco.c"
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_map_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
#line 3667 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 3669 "transform_hlds.lco.c"
  }
#line 3671 "transform_hlds.lco.c"
}

#line 3674 "transform_hlds.lco.c"
static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
#line 3677 "transform_hlds.lco.c"
  MR_Box * transform_hlds__lco__wrapper_arg_1,
#line 3679 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 3681 "transform_hlds.lco.c"
  MR_Box transform_hlds__lco__wrapper_arg_3)
#line 3683 "transform_hlds.lco.c"
{
#line 3685 "transform_hlds.lco.c"
  {
#line 3687 "transform_hlds.lco.c"
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

#line 3690 "transform_hlds.lco.c"
    {
#line 3692 "transform_hlds.lco.c"
      transform_hlds__lco____Compare____variant_map_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
#line 3695 "transform_hlds.lco.c"
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
#line 3697 "transform_hlds.lco.c"
  }
#line 3699 "transform_hlds.lco.c"
}

#line 752 "lco.m"
static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
#line 752 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 752 "lco.m"
{
#line 758 "lco.m"
  {
#line 758 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 758 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_31_31;
#line 758 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 1)));
#line 758 "lco.m"
    MR_Word transform_hlds__lco__GoalVars_18;
#line 758 "lco.m"
    MR_Word transform_hlds__lco__Intersection_19;
#line 759 "lco.m"
    MR_Word transform_hlds__lco___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 0)));

#line 760 "lco.m"
    {
#line 760 "lco.m"
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__lco__Goal_12, &transform_hlds__lco__GoalVars_18);
    }
#line 3741 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 761 "lco.m"
    {
#line 761 "lco.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__GoalVars_18, &transform_hlds__lco__Intersection_19);
    }
#line 762 "lco.m"
    {
#line 762 "lco.m"
      transform_hlds__lco__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__Intersection_19);
    }
#line 764 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 763 "lco.m"
      {
#line 763 "lco.m"
        {
#line 763 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25);
        }
#line 763 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_DelayForVars_27 = transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26;
#line 763 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23 = transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22;
#line 763 "lco.m"
      }
#line 764 "lco.m"
    else
#line 765 "lco.m"
      {
#line 765 "lco.m"
        MR_Word transform_hlds__lco__InstmapDelta_20;
#line 765 "lco.m"
        MR_Word transform_hlds__lco__ChangedVars_21;

#line 765 "lco.m"
        {
#line 765 "lco.m"
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23);
        }
#line 767 "lco.m"
        {
#line 767 "lco.m"
          transform_hlds__lco__InstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo_17);
        }
#line 768 "lco.m"
        {
#line 768 "lco.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__lco__InstmapDelta_20, &transform_hlds__lco__ChangedVars_21);
        }
#line 769 "lco.m"
        {
#line 769 "lco.m"
          parse_tree__set_of_var__union_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__ChangedVars_21, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
        }
#line 765 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25 = transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24;
#line 765 "lco.m"
      }
#line 758 "lco.m"
  }
#line 752 "lco.m"
}

#line 1664 "lco.m"
static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1664__1_2_p_0(
#line 1664 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_69,
#line 1664 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_70)
#line 1664 "lco.m"
{
#line 1664 "lco.m"
  {
#line 1664 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1664 "lco.m"
    MR_Box transform_hlds__lco__conv0_HeadVar__2_70;

#line 1664 "lco.m"
    {
#line 1664 "lco.m"
      mercury__pair__fst_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__HeadVar__1_69, &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1664 "lco.m"
    *transform_hlds__lco__HeadVar__2_70 = ((MR_Word) transform_hlds__lco__conv0_HeadVar__2_70);
#line 1664 "lco.m"
  }
#line 1664 "lco.m"
}

#line 1382 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1382__1_2_p_0(
#line 1382 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1382 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_25)
#line 1382 "lco.m"
{
#line 1382 "lco.m"
  {
#line 1382 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1382 "lco.m"
    {
#line 1382 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_25)));
    }
#line 1382 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1382 "lco.m"
  }
#line 1382 "lco.m"
}

#line 1256 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1256__1_2_p_0(
#line 1256 "lco.m"
  MR_Word transform_hlds__lco__ConsId_23,
#line 1256 "lco.m"
  MR_Word transform_hlds__lco__RHSConsId_43)
#line 1256 "lco.m"
{
#line 1256 "lco.m"
  {
#line 1256 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1256 "lco.m"
    {
#line 1256 "lco.m"
      return transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__ConsId_23, transform_hlds__lco__RHSConsId_43);
    }
#line 1256 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1256 "lco.m"
  }
#line 1256 "lco.m"
}

#line 1110 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1110__1_2_f_0(
#line 1110 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1110 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14)
#line 1110 "lco.m"
{
#line 1110 "lco.m"
  {
#line 1110 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1110 "lco.m"
    MR_Word transform_hlds__lco__HeadVar__3_15;
#line 1110 "lco.m"
    MR_Word transform_hlds__lco__FieldId_13;
#line 1110 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 1110 "lco.m"
    MR_Integer transform_hlds__lco__Pos_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_14, (MR_Integer) 0)));
#line 1110 "lco.m"
    MR_Word transform_hlds__lco__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_14, (MR_Integer) 1)));
#line 1111 "lco.m"
    MR_Box transform_hlds__lco__conv0_FieldId_13;

#line 1111 "lco.m"
    {
#line 1111 "lco.m"
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, transform_hlds__lco__AddrVarFieldIds_6, ((MR_Box) (transform_hlds__lco__Var_24)), &transform_hlds__lco__conv0_FieldId_13);
    }
#line 1111 "lco.m"
    transform_hlds__lco__FieldId_13 = ((MR_Word) transform_hlds__lco__conv0_FieldId_13);
#line 1110 "lco.m"
    {
#line 1110 "lco.m"
      transform_hlds__lco__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_16_16, 0) = ((MR_Box) (transform_hlds__lco__FieldId_13));
#line 1110 "lco.m"
    }
#line 1110 "lco.m"
    {
#line 1110 "lco.m"
      transform_hlds__lco__HeadVar__3_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_15, 0) = ((MR_Box) (transform_hlds__lco__Pos_23));
#line 1110 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_15, 1) = ((MR_Box) (transform_hlds__lco__V_16_16));
#line 1110 "lco.m"
    }
#line 1110 "lco.m"
    return transform_hlds__lco__HeadVar__3_15;
#line 1110 "lco.m"
  }
#line 1110 "lco.m"
}

#line 1107 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1107__1_1_f_0(
#line 1107 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_17)
#line 1107 "lco.m"
{
#line 1107 "lco.m"
  {
#line 1107 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1107 "lco.m"
    MR_Word transform_hlds__lco__HeadVar__2_18;
#line 1107 "lco.m"
    MR_Integer transform_hlds__lco__Pos_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_17, (MR_Integer) 0)));
#line 1107 "lco.m"
    MR_Word transform_hlds__lco___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_17, (MR_Integer) 1)));

#line 1107 "lco.m"
    {
#line 1107 "lco.m"
      transform_hlds__lco__HeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_18, 0) = ((MR_Box) (transform_hlds__lco__Pos_21));
#line 1107 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1107 "lco.m"
    }
#line 1107 "lco.m"
    return transform_hlds__lco__HeadVar__2_18;
#line 1107 "lco.m"
  }
#line 1107 "lco.m"
}

#line 949 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__949__1_2_p_0(
#line 949 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 949 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_14)
#line 949 "lco.m"
{
#line 949 "lco.m"
  {
#line 949 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 949 "lco.m"
    {
#line 949 "lco.m"
      return transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_14)));
    }
#line 949 "lco.m"
    return transform_hlds__lco__succeeded;
#line 949 "lco.m"
  }
#line 949 "lco.m"
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
#line 4091 "transform_hlds.lco.c"
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
#line 4117 "transform_hlds.lco.c"
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
#line 4137 "transform_hlds.lco.c"
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

#line 4204 "transform_hlds.lco.c"
        {
#line 4206 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_6_6)));
        }
#line 216 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 216 "lco.m"
          {
#line 4213 "transform_hlds.lco.c"
            {
#line 4215 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 216 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 4220 "transform_hlds.lco.c"
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
#line 4257 "transform_hlds.lco.c"
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
#line 4279 "transform_hlds.lco.c"
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

#line 4346 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_3_3 == transform_hlds__lco__V_5_5);
#line 223 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 223 "lco.m"
          {
#line 4352 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_9_9 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4354 "transform_hlds.lco.c"
            {
#line 4356 "transform_hlds.lco.c"
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
#line 4456 "transform_hlds.lco.c"
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
#line 4478 "transform_hlds.lco.c"
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

#line 4545 "transform_hlds.lco.c"
        {
#line 4547 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_5_5)));
        }
#line 283 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 283 "lco.m"
          {
#line 4554 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_10_10 = (MR_Word) &transform_hlds__lco_scalar_common_1[10];
#line 4556 "transform_hlds.lco.c"
            {
#line 4558 "transform_hlds.lco.c"
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
#line 4613 "transform_hlds.lco.c"
  {
#line 4615 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4618 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4620 "transform_hlds.lco.c"
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
#line 4666 "transform_hlds.lco.c"
  {
#line 4668 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 4671 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 4673 "transform_hlds.lco.c"
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
    MR_Integer transform_hlds__lco__CastX_21 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 258 "lco.m"
    MR_Integer transform_hlds__lco__CastY_22 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 258 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_21 == transform_hlds__lco__CastY_22);
#line 258 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 4702 "transform_hlds.lco.c"
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
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_16_16;

#line 258 "lco.m"
        {
#line 258 "lco.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lco__V_16_16, transform_hlds__lco__V_4_4, transform_hlds__lco__V_10_10);
        }
#line 4740 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_16_16 == (MR_Integer) 0);
#line 258 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 258 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_16_16;
#line 258 "lco.m"
        else
#line 258 "lco.m"
          {
#line 258 "lco.m"
            MR_Word transform_hlds__lco__V_17_17;

#line 258 "lco.m"
            {
#line 258 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_17_17, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_11_11)));
            }
#line 4760 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_17_17 == (MR_Integer) 0);
#line 258 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 258 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_17_17;
#line 258 "lco.m"
            else
#line 258 "lco.m"
              {
#line 258 "lco.m"
                MR_Word transform_hlds__lco__V_18_18;

#line 258 "lco.m"
                {
#line 258 "lco.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[9], &transform_hlds__lco__V_18_18, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_12_12)));
                }
#line 4780 "transform_hlds.lco.c"
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
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[7], &transform_hlds__lco__V_19_19, ((MR_Box) (transform_hlds__lco__V_7_7)), ((MR_Box) (transform_hlds__lco__V_13_13)));
                    }
#line 4800 "transform_hlds.lco.c"
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
                        MR_Integer transform_hlds__lco__V_29_29 = (MR_Integer) transform_hlds__lco__V_8_8;
#line 258 "lco.m"
                        MR_Integer transform_hlds__lco__V_30_30 = (MR_Integer) transform_hlds__lco__V_14_14;

#line 258 "lco.m"
                        {
#line 258 "lco.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_20_20, transform_hlds__lco__V_29_29, transform_hlds__lco__V_30_30);
                        }
#line 4824 "transform_hlds.lco.c"
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
                            MR_Integer transform_hlds__lco__V_31_31 = (MR_Integer) transform_hlds__lco__V_9_9;
#line 258 "lco.m"
                            MR_Integer transform_hlds__lco__V_32_32 = (MR_Integer) transform_hlds__lco__V_15_15;

#line 258 "lco.m"
                            {
#line 258 "lco.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_31_31, transform_hlds__lco__V_32_32);
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
    MR_Integer transform_hlds__lco__CastX_15 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 258 "lco.m"
    MR_Integer transform_hlds__lco__CastY_16 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 258 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_15 == transform_hlds__lco__CastY_16);
#line 258 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 258 "lco.m"
    else
#line 258 "lco.m"
      {
#line 258 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_18_18;
#line 258 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_19_19;
#line 258 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_20_20;
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 258 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));

#line 4924 "transform_hlds.lco.c"
        {
#line 4926 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_9_9);
        }
#line 258 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
          {
#line 4933 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_18_18 = (MR_Word) &transform_hlds__lco_scalar_common_2[0];
#line 4935 "transform_hlds.lco.c"
            {
#line 4937 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_18_18, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_10_10)));
            }
#line 258 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
              {
#line 4944 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_19_19 = (MR_Word) &transform_hlds__lco_scalar_common_1[9];
#line 4946 "transform_hlds.lco.c"
                {
#line 4948 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_19_19, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_11_11)));
                }
#line 258 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                  {
#line 4955 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeInfo_20_20 = (MR_Word) &transform_hlds__lco_scalar_common_2[7];
#line 4957 "transform_hlds.lco.c"
                    {
#line 4959 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_20_20, ((MR_Box) (transform_hlds__lco__V_6_6)), ((MR_Box) (transform_hlds__lco__V_12_12)));
                    }
#line 258 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 258 "lco.m"
                      {
#line 4966 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_7_7 == transform_hlds__lco__V_13_13);
#line 258 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 4970 "transform_hlds.lco.c"
                          transform_hlds__lco__succeeded = (transform_hlds__lco__V_8_8 == transform_hlds__lco__V_14_14);
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

#line 268 "lco.m"
static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
#line 268 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__1_1,
#line 268 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 268 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3)
#line 268 "lco.m"
{
#line 268 "lco.m"
  {
#line 268 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 268 "lco.m"
    MR_Integer transform_hlds__lco__CastX_30 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
#line 268 "lco.m"
    MR_Integer transform_hlds__lco__CastY_31 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

#line 268 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_30 == transform_hlds__lco__CastY_31);
#line 268 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 5013 "transform_hlds.lco.c"
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "lco.m"
    else
#line 268 "lco.m"
      {
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_22_22;

#line 268 "lco.m"
        {
#line 268 "lco.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__V_22_22, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_13_13)));
        }
#line 5063 "transform_hlds.lco.c"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_22_22 == (MR_Integer) 0);
#line 268 "lco.m"
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 268 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_22_22;
#line 268 "lco.m"
        else
#line 268 "lco.m"
          {
#line 268 "lco.m"
            MR_Word transform_hlds__lco__V_23_23;

#line 268 "lco.m"
            {
#line 268 "lco.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[8], &transform_hlds__lco__V_23_23, ((MR_Box) (transform_hlds__lco__V_5_5)), ((MR_Box) (transform_hlds__lco__V_14_14)));
            }
#line 5083 "transform_hlds.lco.c"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_23_23 == (MR_Integer) 0);
#line 268 "lco.m"
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 268 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_23_23;
#line 268 "lco.m"
            else
#line 268 "lco.m"
              {
#line 268 "lco.m"
                MR_Word transform_hlds__lco__V_24_24;

#line 268 "lco.m"
                {
#line 268 "lco.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__V_24_24, transform_hlds__lco__V_6_6, transform_hlds__lco__V_15_15);
                }
#line 5103 "transform_hlds.lco.c"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_24_24 == (MR_Integer) 0);
#line 268 "lco.m"
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 268 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_24_24;
#line 268 "lco.m"
                else
#line 268 "lco.m"
                  {
#line 268 "lco.m"
                    MR_Word transform_hlds__lco__V_25_25;

#line 268 "lco.m"
                    {
#line 268 "lco.m"
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lco__V_25_25, transform_hlds__lco__V_7_7, transform_hlds__lco__V_16_16);
                    }
#line 5123 "transform_hlds.lco.c"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_25_25 == (MR_Integer) 0);
#line 268 "lco.m"
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 268 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_25_25;
#line 268 "lco.m"
                    else
#line 268 "lco.m"
                      {
#line 268 "lco.m"
                        MR_Word transform_hlds__lco__V_26_26;

#line 268 "lco.m"
                        {
#line 268 "lco.m"
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__lco__V_26_26, transform_hlds__lco__V_8_8, transform_hlds__lco__V_17_17);
                        }
#line 5143 "transform_hlds.lco.c"
                        transform_hlds__lco__succeeded = (transform_hlds__lco__V_26_26 == (MR_Integer) 0);
#line 268 "lco.m"
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 268 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_26_26;
#line 268 "lco.m"
                        else
#line 268 "lco.m"
                          {
#line 268 "lco.m"
                            MR_Word transform_hlds__lco__V_27_27;

#line 268 "lco.m"
                            {
#line 268 "lco.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], &transform_hlds__lco__V_27_27, ((MR_Box) (transform_hlds__lco__V_9_9)), ((MR_Box) (transform_hlds__lco__V_18_18)));
                            }
#line 5163 "transform_hlds.lco.c"
                            transform_hlds__lco__succeeded = (transform_hlds__lco__V_27_27 == (MR_Integer) 0);
#line 268 "lco.m"
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 268 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_27_27;
#line 268 "lco.m"
                            else
#line 268 "lco.m"
                              {
#line 268 "lco.m"
                                MR_Word transform_hlds__lco__V_28_28;
#line 268 "lco.m"
                                MR_Integer transform_hlds__lco__V_41_41 = (MR_Integer) transform_hlds__lco__V_10_10;
#line 268 "lco.m"
                                MR_Integer transform_hlds__lco__V_42_42 = (MR_Integer) transform_hlds__lco__V_19_19;

#line 268 "lco.m"
                                {
#line 268 "lco.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_28_28, transform_hlds__lco__V_41_41, transform_hlds__lco__V_42_42);
                                }
#line 5187 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_28_28 == (MR_Integer) 0);
#line 268 "lco.m"
                                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 268 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_28_28;
#line 268 "lco.m"
                                else
#line 268 "lco.m"
                                  {
#line 268 "lco.m"
                                    MR_Word transform_hlds__lco__V_29_29;
#line 268 "lco.m"
                                    MR_Integer transform_hlds__lco__V_43_43 = (MR_Integer) transform_hlds__lco__V_11_11;
#line 268 "lco.m"
                                    MR_Integer transform_hlds__lco__V_44_44 = (MR_Integer) transform_hlds__lco__V_20_20;

#line 268 "lco.m"
                                    {
#line 268 "lco.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__V_29_29, transform_hlds__lco__V_43_43, transform_hlds__lco__V_44_44);
                                    }
#line 5211 "transform_hlds.lco.c"
                                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_29_29 == (MR_Integer) 0);
#line 268 "lco.m"
                                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 268 "lco.m"
                                    if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__V_29_29;
#line 268 "lco.m"
                                    else
#line 268 "lco.m"
                                      {
#line 268 "lco.m"
                                        MR_Integer transform_hlds__lco__V_45_45 = (MR_Integer) transform_hlds__lco__V_12_12;
#line 268 "lco.m"
                                        MR_Integer transform_hlds__lco__V_46_46 = (MR_Integer) transform_hlds__lco__V_21_21;

#line 268 "lco.m"
                                        {
#line 268 "lco.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_45_45, transform_hlds__lco__V_46_46);
#line 268 "lco.m"
                                          return;
                                        }
#line 268 "lco.m"
                                      }
#line 268 "lco.m"
                                  }
#line 268 "lco.m"
                              }
#line 268 "lco.m"
                          }
#line 268 "lco.m"
                      }
#line 268 "lco.m"
                  }
#line 268 "lco.m"
              }
#line 268 "lco.m"
          }
#line 268 "lco.m"
      }
#line 268 "lco.m"
  }
#line 268 "lco.m"
}

#line 268 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
#line 268 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 268 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2)
#line 268 "lco.m"
{
#line 268 "lco.m"
  {
#line 268 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 268 "lco.m"
    MR_Integer transform_hlds__lco__CastX_21 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
#line 268 "lco.m"
    MR_Integer transform_hlds__lco__CastY_22 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

#line 268 "lco.m"
    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_21 == transform_hlds__lco__CastY_22);
#line 268 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
      transform_hlds__lco__succeeded = MR_TRUE;
#line 268 "lco.m"
    else
#line 268 "lco.m"
      {
#line 268 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_24_24;
#line 268 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_28_28;
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 268 "lco.m"
        MR_Word transform_hlds__lco__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 5327 "transform_hlds.lco.c"
        {
#line 5329 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__V_3_3)), ((MR_Box) (transform_hlds__lco__V_12_12)));
        }
#line 268 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
          {
#line 5336 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[8];
#line 5338 "transform_hlds.lco.c"
            {
#line 5340 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__V_4_4)), ((MR_Box) (transform_hlds__lco__V_13_13)));
            }
#line 268 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
              {
#line 5347 "transform_hlds.lco.c"
                {
#line 5349 "transform_hlds.lco.c"
                  transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__V_5_5, transform_hlds__lco__V_14_14);
                }
#line 268 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                  {
#line 5356 "transform_hlds.lco.c"
                    {
#line 5358 "transform_hlds.lco.c"
                      transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lco__V_6_6, transform_hlds__lco__V_15_15);
                    }
#line 268 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                      {
#line 5365 "transform_hlds.lco.c"
                        {
#line 5367 "transform_hlds.lco.c"
                          transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__lco__V_7_7, transform_hlds__lco__V_16_16);
                        }
#line 268 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                          {
#line 5374 "transform_hlds.lco.c"
                            transform_hlds__lco__TypeInfo_28_28 = (MR_Word) &transform_hlds__lco_scalar_common_1[6];
#line 5376 "transform_hlds.lco.c"
                            {
#line 5378 "transform_hlds.lco.c"
                              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_28_28, ((MR_Box) (transform_hlds__lco__V_8_8)), ((MR_Box) (transform_hlds__lco__V_17_17)));
                            }
#line 268 "lco.m"
                            if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                              {
#line 5385 "transform_hlds.lco.c"
                                transform_hlds__lco__succeeded = (transform_hlds__lco__V_9_9 == transform_hlds__lco__V_18_18);
#line 268 "lco.m"
                                if (transform_hlds__lco__succeeded)
#line 268 "lco.m"
                                  {
#line 5391 "transform_hlds.lco.c"
                                    transform_hlds__lco__succeeded = (transform_hlds__lco__V_10_10 == transform_hlds__lco__V_19_19);
#line 268 "lco.m"
                                    if (transform_hlds__lco__succeeded)
#line 5395 "transform_hlds.lco.c"
                                      transform_hlds__lco__succeeded = (transform_hlds__lco__V_11_11 == transform_hlds__lco__V_20_20);
#line 268 "lco.m"
                                  }
#line 268 "lco.m"
                              }
#line 268 "lco.m"
                          }
#line 268 "lco.m"
                      }
#line 268 "lco.m"
                  }
#line 268 "lco.m"
              }
#line 268 "lco.m"
          }
#line 268 "lco.m"
      }
#line 268 "lco.m"
    return transform_hlds__lco__succeeded;
#line 268 "lco.m"
  }
#line 268 "lco.m"
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
#line 5444 "transform_hlds.lco.c"
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
#line 5470 "transform_hlds.lco.c"
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
#line 5490 "transform_hlds.lco.c"
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

#line 5557 "transform_hlds.lco.c"
        {
#line 5559 "transform_hlds.lco.c"
          transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__lco__V_3_3, transform_hlds__lco__V_6_6);
        }
#line 237 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 237 "lco.m"
          {
#line 5566 "transform_hlds.lco.c"
            {
#line 5568 "transform_hlds.lco.c"
              transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__V_4_4, transform_hlds__lco__V_7_7);
            }
#line 237 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 5573 "transform_hlds.lco.c"
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
#line 5627 "transform_hlds.lco.c"
  {
#line 5629 "transform_hlds.lco.c"
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

#line 5632 "transform_hlds.lco.c"
    return transform_hlds__lco__succeeded;
#line 5634 "transform_hlds.lco.c"
  }
#line 254 "lco.m"
}

#line 1757 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
#line 1757 "lco.m"
  MR_Word transform_hlds__lco__GroundVar_9,
#line 1757 "lco.m"
  MR_Integer transform_hlds__lco__TargetArgNum_10,
#line 1757 "lco.m"
  MR_Integer transform_hlds__lco__CurArgNum_11,
#line 1757 "lco.m"
  MR_Word transform_hlds__lco__ArgTypes_12,
#line 1757 "lco.m"
  MR_Word * transform_hlds__lco__ArgVars_13,
#line 1757 "lco.m"
  MR_Word * transform_hlds__lco__ArgModes_14,
#line 1757 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1757 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1757 "lco.m"
{
#line 1764 "lco.m"
  {
#line 1764 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1764 "lco.m"
    if ((transform_hlds__lco__ArgTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1764 "lco.m"
      {
#line 1765 "lco.m"
        *transform_hlds__lco__ArgVars_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1766 "lco.m"
        *transform_hlds__lco__ArgModes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1764 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22;
#line 1764 "lco.m"
      }
#line 1764 "lco.m"
    else
#line 1768 "lco.m"
      {
#line 1768 "lco.m"
        MR_Word transform_hlds__lco__ArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 0)));
#line 1768 "lco.m"
        MR_Word transform_hlds__lco__ArgTypesTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 1)));
#line 1768 "lco.m"
        MR_Word transform_hlds__lco__ArgVarsTail_18;
#line 1768 "lco.m"
        MR_Word transform_hlds__lco__ArgModesTail_19;
#line 1768 "lco.m"
        MR_Word transform_hlds__lco__Var_20;
#line 1768 "lco.m"
        MR_Word transform_hlds__lco__UniMode_21;
#line 1768 "lco.m"
        MR_Integer transform_hlds__lco__V_24_24 = (transform_hlds__lco__CurArgNum_11 + (MR_Integer) 1);
#line 1768 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;

#line 1769 "lco.m"
        {
#line 1769 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__TargetArgNum_10, transform_hlds__lco__V_24_24, transform_hlds__lco__ArgTypesTail_17, &transform_hlds__lco__ArgVarsTail_18, &transform_hlds__lco__ArgModesTail_19, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 1782 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__CurArgNum_11 == transform_hlds__lco__TargetArgNum_10);
#line 1785 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1783 "lco.m"
          {
#line 1783 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 1783 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;
#line 1783 "lco.m"
            MR_Word transform_hlds__lco__V_39_39;
#line 1783 "lco.m"
            MR_Word transform_hlds__lco__V_40_40;
#line 1783 "lco.m"
            MR_Word transform_hlds__lco__V_41_41;
#line 1783 "lco.m"
            MR_Word transform_hlds__lco__V_42_42;

#line 1783 "lco.m"
            transform_hlds__lco__Var_20 = transform_hlds__lco__GroundVar_9;
#line 1784 "lco.m"
            {
#line 1784 "lco.m"
              transform_hlds__lco__V_38_38 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1784 "lco.m"
            {
#line 1784 "lco.m"
              transform_hlds__lco__V_39_39 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1784 "lco.m"
            {
#line 1784 "lco.m"
              transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1784 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1784 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1784 "lco.m"
            }
#line 1784 "lco.m"
            {
#line 1784 "lco.m"
              transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1784 "lco.m"
            {
#line 1784 "lco.m"
              transform_hlds__lco__V_42_42 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1784 "lco.m"
            {
#line 1784 "lco.m"
              transform_hlds__lco__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1784 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 0) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1784 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_40_40, 1) = ((MR_Box) (transform_hlds__lco__V_42_42));
#line 1784 "lco.m"
            }
#line 1784 "lco.m"
            {
#line 1784 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1784 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1784 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1784 "lco.m"
            }
#line 1783 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;
#line 1783 "lco.m"
          }
#line 1785 "lco.m"
        else
#line 1787 "lco.m"
          {
#line 1787 "lco.m"
            MR_Word transform_hlds__lco__V_45_45;
#line 1787 "lco.m"
            MR_Word transform_hlds__lco__V_46_46;
#line 1787 "lco.m"
            MR_Word transform_hlds__lco__V_47_47;
#line 1787 "lco.m"
            MR_Word transform_hlds__lco__V_48_48;
#line 1787 "lco.m"
            MR_Word transform_hlds__lco__V_49_49;
#line 1787 "lco.m"
            MR_Word transform_hlds__lco__V_50_50;

#line 1787 "lco.m"
            {
#line 1787 "lco.m"
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__lco__ArgType_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__Var_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
            }
#line 1788 "lco.m"
            {
#line 1788 "lco.m"
              transform_hlds__lco__V_46_46 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1788 "lco.m"
            {
#line 1788 "lco.m"
              transform_hlds__lco__V_47_47 = parse_tree__prog_mode__free_inst_0_f_0();
            }
#line 1788 "lco.m"
            {
#line 1788 "lco.m"
              transform_hlds__lco__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1788 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 0) = ((MR_Box) (transform_hlds__lco__V_46_46));
#line 1788 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, 1) = ((MR_Box) (transform_hlds__lco__V_47_47));
#line 1788 "lco.m"
            }
#line 1788 "lco.m"
            {
#line 1788 "lco.m"
              transform_hlds__lco__V_49_49 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1788 "lco.m"
            {
#line 1788 "lco.m"
              transform_hlds__lco__V_50_50 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
#line 1788 "lco.m"
            {
#line 1788 "lco.m"
              transform_hlds__lco__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1788 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_49_49));
#line 1788 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_50_50));
#line 1788 "lco.m"
            }
#line 1788 "lco.m"
            {
#line 1788 "lco.m"
              transform_hlds__lco__UniMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1788 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 0) = ((MR_Box) (transform_hlds__lco__V_45_45));
#line 1788 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_21, 1) = ((MR_Box) (transform_hlds__lco__V_48_48));
#line 1788 "lco.m"
            }
#line 1787 "lco.m"
          }
#line 1773 "lco.m"
        {
#line 1773 "lco.m"
          MR_Word base;
#line 1773 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "lco.m"
          *transform_hlds__lco__ArgVars_13 = base;
#line 1773 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 1773 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgVarsTail_18));
#line 1773 "lco.m"
        }
#line 1774 "lco.m"
        {
#line 1774 "lco.m"
          MR_Word base;
#line 1774 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1774 "lco.m"
          *transform_hlds__lco__ArgModes_14 = base;
#line 1774 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UniMode_21));
#line 1774 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgModesTail_19));
#line 1774 "lco.m"
        }
#line 1768 "lco.m"
      }
#line 1764 "lco.m"
  }
#line 1757 "lco.m"
}

#line 1714 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
#line 1714 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1714 "lco.m"
  MR_Word transform_hlds__lco__InstMap_8,
#line 1714 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1714 "lco.m"
  MR_Word * transform_hlds__lco__Goal_11,
#line 1714 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
#line 1714 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32)
#line 1714 "lco.m"
{
#line 1719 "lco.m"
  {
#line 1719 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1719 "lco.m"
    MR_Word transform_hlds__lco__GroundVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 1719 "lco.m"
    MR_Word transform_hlds__lco__StoreTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 1719 "lco.m"
    MR_Word transform_hlds__lco__AddrVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 0)));
#line 1719 "lco.m"
    MR_Word transform_hlds__lco__MaybeFieldId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 1)));

#line 1730 "lco.m"
    if ((transform_hlds__lco__MaybeFieldId_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1723 "lco.m"
      {
#line 1723 "lco.m"
        MR_Word transform_hlds__lco__V_49_49;
#line 1723 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1723 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1723 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1723 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;

#line 1724 "lco.m"
        {
#line 1724 "lco.m"
          transform_hlds__lco__V_49_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 1727 "lco.m"
        {
#line 1727 "lco.m"
          transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__GroundVar_9));
#line 1727 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1727 "lco.m"
        }
#line 1727 "lco.m"
        {
#line 1727 "lco.m"
          transform_hlds__lco__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1727 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1727 "lco.m"
        }
#line 1728 "lco.m"
        {
#line 1728 "lco.m"
          transform_hlds__lco__V_57_57 = hlds__instmap__instmap_delta_bind_vars_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1728 "lco.m"
        {
#line 1728 "lco.m"
          transform_hlds__lco__V_58_58 = mercury__term__context_init_0_f_0();
        }
#line 1724 "lco.m"
        {
#line 1724 "lco.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__lco__V_49_49, (MR_String) "store_at_ref_impure", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__lco__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lco__V_57_57, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__V_58_58, transform_hlds__lco__Goal_11);
        }
#line 1723 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_32 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31;
#line 1723 "lco.m"
      }
#line 1730 "lco.m"
    else
#line 1732 "lco.m"
      {
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__AddrVarType_15;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__ConsId_16;
#line 1732 "lco.m"
        MR_Integer transform_hlds__lco__ArgNum_17;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__ArgTypes_18;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__ArgVars_19;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__ArgModes_20;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__RHS_21;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst0_22;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__AddrVarInst_23;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__UniMode_24;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__Unification_25;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_27;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo0_28;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo1_29;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_30;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_14, (MR_Integer) 0)));
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__V_39_39;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__V_40_40;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__V_41_41;
#line 1732 "lco.m"
        MR_Word transform_hlds__lco__V_48_48;

#line 1732 "lco.m"
        transform_hlds__lco__AddrVarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 0)));
#line 1732 "lco.m"
        transform_hlds__lco__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 1)));
#line 1732 "lco.m"
        transform_hlds__lco__ArgNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_33_33, (MR_Integer) 2)));
#line 1733 "lco.m"
        {
#line 1733 "lco.m"
          check_hlds__type_util__get_cons_id_arg_types_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarType_15, transform_hlds__lco__ConsId_16, &transform_hlds__lco__ArgTypes_18);
        }
#line 1734 "lco.m"
        {
#line 1734 "lco.m"
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__ArgNum_17, (MR_Integer) 1, transform_hlds__lco__ArgTypes_18, &transform_hlds__lco__ArgVars_19, &transform_hlds__lco__ArgModes_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31, transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);
        }
#line 1737 "lco.m"
        {
#line 1737 "lco.m"
          transform_hlds__lco__RHS_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 0) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1737 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1737 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1737 "lco.m"
        }
#line 1739 "lco.m"
        {
#line 1739 "lco.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_8, transform_hlds__lco__AddrVar_13, &transform_hlds__lco__AddrVarInst0_22);
        }
#line 1740 "lco.m"
        {
#line 1740 "lco.m"
          check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarInst0_22, &transform_hlds__lco__AddrVarInst_23);
        }
#line 1741 "lco.m"
        {
#line 1741 "lco.m"
          transform_hlds__lco__V_38_38 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1741 "lco.m"
        {
#line 1741 "lco.m"
          transform_hlds__lco__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1741 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 0) = ((MR_Box) (transform_hlds__lco__AddrVarInst_23));
#line 1741 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_37_37, 1) = ((MR_Box) (transform_hlds__lco__V_38_38));
#line 1741 "lco.m"
        }
#line 1741 "lco.m"
        {
#line 1741 "lco.m"
          transform_hlds__lco__V_40_40 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1741 "lco.m"
        {
#line 1741 "lco.m"
          transform_hlds__lco__V_41_41 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 1741 "lco.m"
        {
#line 1741 "lco.m"
          transform_hlds__lco__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1741 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 0) = ((MR_Box) (transform_hlds__lco__V_40_40));
#line 1741 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_39_39, 1) = ((MR_Box) (transform_hlds__lco__V_41_41));
#line 1741 "lco.m"
        }
#line 1741 "lco.m"
        {
#line 1741 "lco.m"
          transform_hlds__lco__UniMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1741 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_24, 0) = ((MR_Box) (transform_hlds__lco__V_37_37));
#line 1741 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_24, 1) = ((MR_Box) (transform_hlds__lco__V_39_39));
#line 1741 "lco.m"
        }
#line 1743 "lco.m"
        {
#line 1743 "lco.m"
          transform_hlds__lco__Unification_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 1) = ((MR_Box) (transform_hlds__lco__ConsId_16));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 3) = ((MR_Box) (transform_hlds__lco__ArgModes_20));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1743 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1743 "lco.m"
        }
#line 1747 "lco.m"
        {
#line 1747 "lco.m"
          transform_hlds__lco__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1747 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
#line 1747 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__lco__RHS_21));
#line 1747 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__lco__UniMode_24));
#line 1747 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__lco__Unification_25));
#line 1747 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 4) = ((MR_Box) (&transform_hlds__lco_scalar_common_1[12]));
#line 1747 "lco.m"
        }
#line 1749 "lco.m"
        {
#line 1749 "lco.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__lco__GoalInfo0_28);
        }
#line 1750 "lco.m"
        {
#line 1750 "lco.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__lco__GoalInfo0_28, &transform_hlds__lco__GoalInfo1_29);
        }
#line 1751 "lco.m"
        {
#line 1751 "lco.m"
          transform_hlds__lco__V_48_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__lco__AddrVar_13);
        }
#line 1751 "lco.m"
        {
#line 1751 "lco.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__V_48_48, transform_hlds__lco__GoalInfo1_29, &transform_hlds__lco__GoalInfo_30);
        }
#line 1754 "lco.m"
        {
#line 1754 "lco.m"
          MR_Word base;
#line 1754 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1754 "lco.m"
          *transform_hlds__lco__Goal_11 = base;
#line 1754 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_27));
#line 1754 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_30));
#line 1754 "lco.m"
        }
#line 1732 "lco.m"
      }
#line 1719 "lco.m"
  }
#line 1714 "lco.m"
}

#line 1689 "lco.m"
static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
#line 1689 "lco.m"
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
#line 1689 "lco.m"
  MR_Integer transform_hlds__lco__OutArgNum_7,
#line 1689 "lco.m"
  MR_Word transform_hlds__lco__OutArgs_8,
#line 1689 "lco.m"
  MR_Word * transform_hlds__lco__Subst_9,
#line 1689 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_10)
#line 1689 "lco.m"
{
#line 1696 "lco.m"
  {
#line 1696 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1696 "lco.m"
    if ((transform_hlds__lco__OutArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1696 "lco.m"
      {
#line 1696 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];

#line 1697 "lco.m"
        {
#line 1697 "lco.m"
          *transform_hlds__lco__Subst_9 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_21_21, transform_hlds__lco__TypeInfo_21_21);
        }
#line 1698 "lco.m"
        *transform_hlds__lco__VariantArgs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1696 "lco.m"
      }
#line 1696 "lco.m"
    else
#line 1700 "lco.m"
      {
#line 1700 "lco.m"
        MR_Word transform_hlds__lco__OutArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 0)));
#line 1700 "lco.m"
        MR_Word transform_hlds__lco__OutArgsTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 1)));
#line 1700 "lco.m"
        MR_Word transform_hlds__lco__Subst0_13;
#line 1700 "lco.m"
        MR_Word transform_hlds__lco__VariantArgsTail_14;
#line 1700 "lco.m"
        MR_Integer transform_hlds__lco__V_19_19 = (transform_hlds__lco__OutArgNum_7 + (MR_Integer) 1);
#line 1708 "lco.m"
        MR_Word transform_hlds__lco__StoreTarget_15;
#line 1703 "lco.m"
        MR_Box transform_hlds__lco__conv0_StoreTarget_15;

#line 1701 "lco.m"
        {
#line 1701 "lco.m"
          transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_6, transform_hlds__lco__V_19_19, transform_hlds__lco__OutArgsTail_12, &transform_hlds__lco__Subst0_13, &transform_hlds__lco__VariantArgsTail_14);
        }
#line 1703 "lco.m"
        {
#line 1703 "lco.m"
          transform_hlds__lco__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__GroundingVarToAddr_6, ((MR_Box) (transform_hlds__lco__OutArg_11)), &transform_hlds__lco__conv0_StoreTarget_15);
        }
#line 1703 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1703 "lco.m"
          {
#line 1703 "lco.m"
            transform_hlds__lco__StoreTarget_15 = ((MR_Word) transform_hlds__lco__conv0_StoreTarget_15);
#line 1703 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1703 "lco.m"
          }
#line 1708 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1704 "lco.m"
          {
#line 1704 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1704 "lco.m"
            MR_Word transform_hlds__lco__StoreArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 0)));
#line 1704 "lco.m"
            MR_Word transform_hlds__lco__MaybeFieldId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 1)));
#line 1704 "lco.m"
            MR_Word transform_hlds__lco__VariantArg_18;

#line 1705 "lco.m"
            {
#line 1705 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_24_24, transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__OutArg_11)), ((MR_Box) (transform_hlds__lco__StoreArg_16)), transform_hlds__lco__Subst0_13, transform_hlds__lco__Subst_9);
            }
#line 1706 "lco.m"
            {
#line 1706 "lco.m"
              transform_hlds__lco__VariantArg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1706 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 0) = ((MR_Box) (transform_hlds__lco__OutArgNum_7));
#line 1706 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_17));
#line 1706 "lco.m"
            }
#line 1707 "lco.m"
            {
#line 1707 "lco.m"
              MR_Word base;
#line 1707 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "lco.m"
              *transform_hlds__lco__VariantArgs_10 = base;
#line 1707 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VariantArg_18));
#line 1707 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantArgsTail_14));
#line 1707 "lco.m"
            }
#line 1704 "lco.m"
          }
#line 1708 "lco.m"
        else
#line 1709 "lco.m"
          {
#line 1709 "lco.m"
            *transform_hlds__lco__Subst_9 = transform_hlds__lco__Subst0_13;
#line 1710 "lco.m"
            *transform_hlds__lco__VariantArgs_10 = transform_hlds__lco__VariantArgsTail_14;
#line 1709 "lco.m"
          }
#line 1700 "lco.m"
      }
#line 1696 "lco.m"
  }
#line 1689 "lco.m"
}

#line 1679 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
#line 1679 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_5,
#line 1679 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_6,
#line 1679 "lco.m"
  MR_Word transform_hlds__lco__InstMap_7,
#line 1679 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4)
#line 1679 "lco.m"
{
#line 1682 "lco.m"
  {
#line 1682 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1682 "lco.m"
    MR_Word transform_hlds__lco__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 1682 "lco.m"
    MR_Word transform_hlds__lco__Inst0_10;
#line 1682 "lco.m"
    MR_Word transform_hlds__lco__Inst_11;
#line 1682 "lco.m"
    MR_Word transform_hlds__lco___StoreTarget_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));

#line 1683 "lco.m"
    {
#line 1683 "lco.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap0_6, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst0_10);
    }
#line 1684 "lco.m"
    {
#line 1684 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst0_10);
    }
#line 1684 "lco.m"
    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
#line 1682 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1682 "lco.m"
      {
#line 1685 "lco.m"
        {
#line 1685 "lco.m"
          transform_hlds__lco__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__lco__InstMap_7);
        }
#line 1682 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1682 "lco.m"
          {
#line 1686 "lco.m"
            {
#line 1686 "lco.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_7, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst_11);
            }
#line 1687 "lco.m"
            {
#line 1687 "lco.m"
              return transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst_11);
            }
#line 1682 "lco.m"
          }
#line 1682 "lco.m"
      }
#line 1682 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1682 "lco.m"
  }
#line 1679 "lco.m"
}

#line 1664 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
#line 1664 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1664 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1664 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2)
#line 1664 "lco.m"
{
#line 1664 "lco.m"
  {
#line 1664 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1664 "lco.m"
    MR_Word transform_hlds__lco__conv0_HeadVar__2_70;

#line 1664 "lco.m"
    {
#line 1664 "lco.m"
      transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1664__1_2_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv0_HeadVar__2_70);
    }
#line 1664 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_70));
#line 1664 "lco.m"
  }
#line 1664 "lco.m"
}

#line 1621 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
#line 1621 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1621 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1621 "lco.m"
{
#line 1621 "lco.m"
  {
#line 1621 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1621 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1621 "lco.m"
    {
#line 1621 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1621 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1621 "lco.m"
  }
#line 1621 "lco.m"
}

#line 1612 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_12,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_13,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_14,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_15,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_16,
#line 1612 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_17,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo0_18,
#line 1612 "lco.m"
  MR_Word * transform_hlds__lco__GoalInfo_19,
#line 1612 "lco.m"
  MR_Word * transform_hlds__lco__Changed_20,
#line 1612 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
#line 1612 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54)
#line 1612 "lco.m"
{
#line 1619 "lco.m"
  {
#line 1619 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1619 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1619 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_22;
#line 1619 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_23;
#line 1619 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 1619 "lco.m"
    MR_Word transform_hlds__lco__V_56_56;

#line 1620 "lco.m"
    {
#line 1620 "lco.m"
      transform_hlds__lco__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1620 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_16));
#line 1620 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_55_55, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo0_18));
#line 1620 "lco.m"
    }
#line 1620 "lco.m"
    {
#line 1620 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_55_55, transform_hlds__lco__InstMap0_15, &transform_hlds__lco__InstMap1_22);
    }
#line 1621 "lco.m"
    {
#line 1621 "lco.m"
      transform_hlds__lco__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1621 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1621 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1));
#line 1621 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1621 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_12));
#line 1621 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_15));
#line 1621 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_56_56, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_22));
#line 1621 "lco.m"
    }
#line 6524 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1621 "lco.m"
    {
#line 1621 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__V_56_56, transform_hlds__lco__VarToAddr_14, &transform_hlds__lco__GroundingVarToAddr_23);
    }
#line 1628 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1624 "lco.m"
      {
#line 1625 "lco.m"
        *transform_hlds__lco__GoalExpr_17 = transform_hlds__lco__GoalExpr0_16;
#line 1626 "lco.m"
        *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1627 "lco.m"
        *transform_hlds__lco__Changed_20 = (MR_Integer) 0;
#line 1624 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1624 "lco.m"
      }
#line 1628 "lco.m"
    else
#line 1629 "lco.m"
      {
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__CallPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 0)));
#line 1629 "lco.m"
        MR_Integer transform_hlds__lco__CallProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 1)));
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 2)));
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__Builtin_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 3)));
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__UnifyContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 4)));
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__SymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 5)));
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__CallPredProcId_32;
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_33;
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_34;
#line 1629 "lco.m"
        MR_Word transform_hlds__lco__CalleeArgModes_35;
#line 1672 "lco.m"
        MR_Word transform_hlds__lco__Subst_40;
#line 1672 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariant_42;
#line 1641 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_36;
#line 1641 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_38;
#line 1641 "lco.m"
        MR_Word transform_hlds__lco__VariantArgs_41;
#line 1641 "lco.m"
        MR_Integer transform_hlds__lco__V_57_57;
#line 1642 "lco.m"
        MR_Word transform_hlds__lco___InArgs_37;
#line 1642 "lco.m"
        MR_Word transform_hlds__lco___UnusedArgs_39;

#line 1635 "lco.m"
        {
#line 1635 "lco.m"
          transform_hlds__lco__CallPredProcId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1635 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 0) = ((MR_Box) (transform_hlds__lco__CallPredId_26));
#line 1635 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 1) = ((MR_Box) (transform_hlds__lco__CallProcId_27));
#line 1635 "lco.m"
        }
#line 1636 "lco.m"
        {
#line 1636 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__CallPredId_26, transform_hlds__lco__CallProcId_27, &transform_hlds__lco__CalleeProcInfo_33);
        }
#line 1638 "lco.m"
        {
#line 1638 "lco.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, &transform_hlds__lco__VarTypes_34);
        }
#line 1639 "lco.m"
        {
#line 1639 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_33, &transform_hlds__lco__CalleeArgModes_35);
        }
#line 1641 "lco.m"
        {
#line 1641 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__VariantMap_13, ((MR_Box) (transform_hlds__lco__CallPredProcId_32)), &transform_hlds__lco__ExistingVariants_36);
        }
#line 1641 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1641 "lco.m"
          {
#line 1642 "lco.m"
            {
#line 1642 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarTypes_34, transform_hlds__lco__Args_28, transform_hlds__lco__CalleeArgModes_35, &transform_hlds__lco___InArgs_37, &transform_hlds__lco__OutArgs_38, &transform_hlds__lco___UnusedArgs_39);
            }
#line 1644 "lco.m"
            transform_hlds__lco__V_57_57 = (MR_Integer) 1;
#line 1644 "lco.m"
            {
#line 1644 "lco.m"
              transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_23, transform_hlds__lco__V_57_57, transform_hlds__lco__OutArgs_38, &transform_hlds__lco__Subst_40, &transform_hlds__lco__VariantArgs_41);
            }
#line 1646 "lco.m"
            {
#line 1646 "lco.m"
              transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_36, transform_hlds__lco__VariantArgs_41, &transform_hlds__lco__ExistingVariant_42);
            }
#line 1641 "lco.m"
          }
#line 1672 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1649 "lco.m"
          {
#line 1649 "lco.m"
            MR_Word transform_hlds__lco__CallArgs_43;
#line 1649 "lco.m"
            MR_Word transform_hlds__lco__VariantPredId_44;
#line 1649 "lco.m"
            MR_Integer transform_hlds__lco__VariantProcId_45;
#line 1649 "lco.m"
            MR_Word transform_hlds__lco__VariantSymName_46;
#line 1649 "lco.m"
            MR_Word transform_hlds__lco__Globals_47;
#line 1649 "lco.m"
            MR_Word transform_hlds__lco__HighLevelData_48;
#line 1649 "lco.m"
            MR_Word transform_hlds__lco__V_59_59;
#line 1649 "lco.m"
            MR_String transform_hlds__lco__VariantName_79;
#line 1172 "lco.m"
            MR_Word transform_hlds__lco__V_78_78;

#line 1649 "lco.m"
            {
#line 1649 "lco.m"
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_40, transform_hlds__lco__Args_28, &transform_hlds__lco__CallArgs_43);
            }
#line 1172 "lco.m"
            transform_hlds__lco__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 0)));
#line 1172 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 1)));
#line 1172 "lco.m"
            transform_hlds__lco__VariantName_79 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 2)));
#line 1176 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_31)) == (MR_mktag((MR_Integer) 1))))
#line 1177 "lco.m"
              {
#line 1177 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 0)));
#line 1177 "lco.m"
                MR_String transform_hlds__lco___Name_82 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 1)));

#line 1178 "lco.m"
                {
#line 1178 "lco.m"
                  transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_81));
#line 1178 "lco.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 1) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1178 "lco.m"
                }
#line 1177 "lco.m"
              }
#line 1176 "lco.m"
            else
#line 1175 "lco.m"
              {
#line 1175 "lco.m"
                transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "lco.m"
                MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__VariantName_79));
#line 1175 "lco.m"
              }
#line 1651 "lco.m"
            transform_hlds__lco__VariantPredId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 0)));
#line 1651 "lco.m"
            transform_hlds__lco__VariantProcId_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_59_59, (MR_Integer) 1)));
#line 1652 "lco.m"
            {
#line 1652 "lco.m"
              MR_Word base;
#line 1652 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "lco.m"
              *transform_hlds__lco__GoalExpr_17 = base;
#line 1652 "lco.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_44));
#line 1652 "lco.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_45));
#line 1652 "lco.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__lco__CallArgs_43));
#line 1652 "lco.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__lco__Builtin_29));
#line 1652 "lco.m"
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_30));
#line 1652 "lco.m"
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_46));
#line 1652 "lco.m"
            }
#line 1655 "lco.m"
            {
#line 1655 "lco.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__ModuleInfo_12, &transform_hlds__lco__Globals_47);
            }
#line 1656 "lco.m"
            {
#line 1656 "lco.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_47, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_48);
            }
#line 1660 "lco.m"
#line 1660 "lco.m"
            switch (transform_hlds__lco__HighLevelData_48) {
#line 1660 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1660 "lco.m"
              case (MR_Integer) 0:
#line 1659 "lco.m"
                *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1660 "lco.m"
                break;
#line 1660 "lco.m"
              case (MR_Integer) 1:
#line 1661 "lco.m"
                {
#line 1661 "lco.m"
                  MR_Word transform_hlds__lco__TypeInfo_73_73 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1661 "lco.m"
                  MR_Word transform_hlds__lco__GroundVars_49;
#line 1661 "lco.m"
                  MR_Word transform_hlds__lco__AddrVars_50;
#line 1661 "lco.m"
                  MR_Word transform_hlds__lco__InstMapDelta0_51;
#line 1661 "lco.m"
                  MR_Word transform_hlds__lco__InstMapDelta_52;
#line 1661 "lco.m"
                  MR_Word transform_hlds__lco__V_62_62;

#line 1664 "lco.m"
                  {
#line 1664 "lco.m"
                    mercury__list__map_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_73_73, (MR_Word) &transform_hlds__lco_scalar_common_2[13], transform_hlds__lco__GroundingVarToAddr_23, &transform_hlds__lco__GroundVars_49);
                  }
#line 1665 "lco.m"
                  {
#line 1665 "lco.m"
                    mercury__map__apply_to_list_3_p_0(transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__GroundVars_49, transform_hlds__lco__Subst_40, &transform_hlds__lco__AddrVars_50);
                  }
#line 1666 "lco.m"
                  {
#line 1666 "lco.m"
                    transform_hlds__lco__InstMapDelta0_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_18);
                  }
#line 1667 "lco.m"
                  {
#line 1667 "lco.m"
                    transform_hlds__lco__V_62_62 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 1667 "lco.m"
                  {
#line 1667 "lco.m"
                    hlds__instmap__instmap_delta_set_vars_same_4_p_0(transform_hlds__lco__V_62_62, transform_hlds__lco__AddrVars_50, transform_hlds__lco__InstMapDelta0_51, &transform_hlds__lco__InstMapDelta_52);
                  }
#line 1669 "lco.m"
                  {
#line 1669 "lco.m"
                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_52, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalInfo_19);
                  }
#line 1661 "lco.m"
                }
#line 1660 "lco.m"
                break;
#line 1660 "lco.m"
            }
#line 1671 "lco.m"
            *transform_hlds__lco__Changed_20 = (MR_Integer) 1;
#line 1649 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
#line 1649 "lco.m"
          }
#line 1672 "lco.m"
        else
#line 1674 "lco.m"
          {
#line 1673 "lco.m"
            {
#line 1673 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarToAddr_14, transform_hlds__lco__InstMap0_15, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalExpr0_16, transform_hlds__lco__GoalExpr_17, transform_hlds__lco__Changed_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);
            }
#line 1675 "lco.m"
            *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
#line 1674 "lco.m"
          }
#line 1629 "lco.m"
      }
#line 1619 "lco.m"
  }
#line 1612 "lco.m"
}

#line 1605 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
#line 1605 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1605 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1605 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1605 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 1605 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4)
#line 1605 "lco.m"
{
#line 1605 "lco.m"
  {
#line 1605 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1605 "lco.m"
    MR_Word transform_hlds__lco__conv1_Goal_11;
#line 1605 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32;

#line 1605 "lco.m"
    {
#line 1605 "lco.m"
      transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv1_Goal_11, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32);
    }
#line 1605 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_Goal_11));
#line 1605 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32));
#line 1605 "lco.m"
  }
#line 1605 "lco.m"
}

#line 1597 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
#line 1597 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1597 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1597 "lco.m"
{
#line 1597 "lco.m"
  {
#line 1597 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1597 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1597 "lco.m"
    {
#line 1597 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1597 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1597 "lco.m"
  }
#line 1597 "lco.m"
}

#line 1589 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_11,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_12,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__GoalInfo_13,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__GoalExpr0_14,
#line 1589 "lco.m"
  MR_Word * transform_hlds__lco__GoalExpr_15,
#line 1589 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1589 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
#line 1589 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24)
#line 1589 "lco.m"
{
#line 1595 "lco.m"
  {
#line 1595 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1595 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_33_33;
#line 1595 "lco.m"
    MR_Word transform_hlds__lco__InstMap1_18;
#line 1595 "lco.m"
    MR_Word transform_hlds__lco__GroundingVarToAddr_19;
#line 1595 "lco.m"
    MR_Word transform_hlds__lco__V_25_25;
#line 1595 "lco.m"
    MR_Word transform_hlds__lco__V_26_26;

#line 1596 "lco.m"
    {
#line 1596 "lco.m"
      transform_hlds__lco__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1596 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_14));
#line 1596 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_25_25, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_13));
#line 1596 "lco.m"
    }
#line 1596 "lco.m"
    {
#line 1596 "lco.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__V_25_25, transform_hlds__lco__InstMap0_12, &transform_hlds__lco__InstMap1_18);
    }
#line 1597 "lco.m"
    {
#line 1597 "lco.m"
      transform_hlds__lco__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1597 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
#line 1597 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1));
#line 1597 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1597 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1597 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_12));
#line 1597 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__V_26_26, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1597 "lco.m"
    }
#line 6967 "transform_hlds.lco.c"
    transform_hlds__lco__TypeInfo_33_33 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
#line 1597 "lco.m"
    {
#line 1597 "lco.m"
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_33_33, transform_hlds__lco__V_26_26, transform_hlds__lco__VarToAddr_11, &transform_hlds__lco__GroundingVarToAddr_19);
    }
#line 1603 "lco.m"
    if ((transform_hlds__lco__GroundingVarToAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "lco.m"
      {
#line 1601 "lco.m"
        *transform_hlds__lco__GoalExpr_15 = transform_hlds__lco__GoalExpr0_14;
#line 1602 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1600 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23;
#line 1600 "lco.m"
      }
#line 1603 "lco.m"
    else
#line 1604 "lco.m"
      {
#line 1604 "lco.m"
        MR_Word transform_hlds__lco__StoreGoals_22;
#line 1604 "lco.m"
        MR_Word transform_hlds__lco__V_27_27;
#line 1604 "lco.m"
        MR_Word transform_hlds__lco__V_30_30;
#line 1605 "lco.m"
        MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24;

#line 1605 "lco.m"
        {
#line 1605 "lco.m"
          transform_hlds__lco__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1605 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_10[0]));
#line 1605 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2));
#line 1605 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1605 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1605 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_27_27, 4) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
#line 1605 "lco.m"
        }
#line 1605 "lco.m"
        {
#line 1605 "lco.m"
          mercury__list__map_foldl_5_p_0(transform_hlds__lco__TypeInfo_33_33, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_27_27, transform_hlds__lco__GroundingVarToAddr_19, &transform_hlds__lco__StoreGoals_22, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23)), &transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
        }
#line 1605 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
#line 1608 "lco.m"
        {
#line 1608 "lco.m"
          transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 0) = ((MR_Box) (transform_hlds__lco__V_25_25));
#line 1608 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_30_30, 1) = ((MR_Box) (transform_hlds__lco__StoreGoals_22));
#line 1608 "lco.m"
        }
#line 1607 "lco.m"
        {
#line 1607 "lco.m"
          MR_Word base;
#line 1607 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "lco.m"
          *transform_hlds__lco__GoalExpr_15 = base;
#line 1607 "lco.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1607 "lco.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1607 "lco.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__lco__V_30_30));
#line 1607 "lco.m"
        }
#line 1609 "lco.m"
        *transform_hlds__lco__Changed_16 = (MR_Integer) 1;
#line 1604 "lco.m"
      }
#line 1595 "lco.m"
  }
#line 1589 "lco.m"
}

#line 1578 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__Case0_14,
#line 1578 "lco.m"
  MR_Word * transform_hlds__lco__Case_15,
#line 1578 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1578 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
#line 1578 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
#line 1578 "lco.m"
{
#line 1583 "lco.m"
  {
#line 1583 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1583 "lco.m"
    MR_Word transform_hlds__lco__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 0)));
#line 1583 "lco.m"
    MR_Word transform_hlds__lco__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 1)));
#line 1583 "lco.m"
    MR_Word transform_hlds__lco__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 2)));
#line 1583 "lco.m"
    MR_Word transform_hlds__lco__Goal_21;

#line 1585 "lco.m"
    {
#line 1585 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goal0_20, &transform_hlds__lco__Goal_21, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
    }
#line 1587 "lco.m"
    {
#line 1587 "lco.m"
      MR_Word base;
#line 1587 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1587 "lco.m"
      *transform_hlds__lco__Case_15 = base;
#line 1587 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_18));
#line 1587 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_19));
#line 1587 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Goal_21));
#line 1587 "lco.m"
    }
#line 1583 "lco.m"
  }
#line 1578 "lco.m"
}

#line 1559 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_1,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_2,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_3,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_4,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1559 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1559 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1559 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
#line 1559 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9)
#line 1559 "lco.m"
{
#line 1563 "lco.m"
  {
#line 1563 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1563 "lco.m"
    if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1563 "lco.m"
      {
#line 1563 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1563 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Integer) 0;
#line 1563 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_9 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8;
#line 1563 "lco.m"
      }
#line 1563 "lco.m"
    else
#line 1565 "lco.m"
      {
#line 1565 "lco.m"
        MR_Word transform_hlds__lco__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1565 "lco.m"
        MR_Word transform_hlds__lco__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1565 "lco.m"
        MR_Word transform_hlds__lco__Goal_26;
#line 1565 "lco.m"
        MR_Word transform_hlds__lco__HeadChanged_27;
#line 1565 "lco.m"
        MR_Word transform_hlds__lco__InstMap1_28;
#line 1565 "lco.m"
        MR_Word transform_hlds__lco__Goals_29;
#line 1565 "lco.m"
        MR_Word transform_hlds__lco__TailChanged_30;
#line 1565 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35;
#line 1574 "lco.m"
        MR_Word transform_hlds__lco__SubConj_31;
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__V_37_37;
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__V_38_38;
#line 1572 "lco.m"
        MR_Word transform_hlds__lco__V_32_32;

#line 1566 "lco.m"
        {
#line 1566 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap0_4, transform_hlds__lco__Goal0_21, &transform_hlds__lco__Goal_26, &transform_hlds__lco__HeadChanged_27, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35);
        }
#line 1568 "lco.m"
        {
#line 1568 "lco.m"
          hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Goal0_21, transform_hlds__lco__InstMap0_4, &transform_hlds__lco__InstMap1_28);
        }
#line 1569 "lco.m"
        {
#line 1569 "lco.m"
          transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap1_28, transform_hlds__lco__Goals0_22, &transform_hlds__lco__Goals_29, &transform_hlds__lco__TailChanged_30, transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);
        }
#line 1571 "lco.m"
        {
#line 1571 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = mercury__bool__or_2_f_0(transform_hlds__lco__HeadChanged_27, transform_hlds__lco__TailChanged_30);
        }
#line 1572 "lco.m"
        transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 0)));
#line 1572 "lco.m"
        transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 1)));
#line 1572 "lco.m"
        transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1572 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1572 "lco.m"
          {
#line 1572 "lco.m"
            transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 1)));
#line 1572 "lco.m"
            transform_hlds__lco__SubConj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__V_37_37, (MR_Integer) 2)));
#line 1572 "lco.m"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_38_38 == (MR_Integer) 0);
#line 1572 "lco.m"
          }
#line 1574 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1573 "lco.m"
          {
#line 1573 "lco.m"
            {
#line 1573 "lco.m"
              *transform_hlds__lco__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__SubConj_31, transform_hlds__lco__Goals_29);
            }
#line 1573 "lco.m"
          }
#line 1574 "lco.m"
        else
#line 1575 "lco.m"
          {
#line 1575 "lco.m"
            MR_Word base;
#line 1575 "lco.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "lco.m"
            *transform_hlds__lco__HeadVar__6_6 = base;
#line 1575 "lco.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goal_26));
#line 1575 "lco.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Goals_29));
#line 1575 "lco.m"
          }
#line 1565 "lco.m"
      }
#line 1563 "lco.m"
  }
#line 1559 "lco.m"
}

#line 1474 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
#line 1474 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1474 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1474 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1474 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1474 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1474 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1474 "lco.m"
{
#line 1474 "lco.m"
  {
#line 1474 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1474 "lco.m"
    MR_Word transform_hlds__lco__conv7_Case_15;
#line 1474 "lco.m"
    MR_Word transform_hlds__lco__conv6_Changed_16;
#line 1474 "lco.m"
    MR_Word transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23;

#line 1474 "lco.m"
    {
#line 1474 "lco.m"
      transform_hlds__lco__lco_transform_variant_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv7_Case_15, &transform_hlds__lco__conv6_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23);
    }
#line 1474 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv7_Case_15));
#line 1474 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv6_Changed_16));
#line 1474 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23));
#line 1474 "lco.m"
  }
#line 1474 "lco.m"
}

#line 1465 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
#line 1465 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1465 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 1465 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 1465 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 1465 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 1465 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 1465 "lco.m"
{
#line 1465 "lco.m"
  {
#line 1465 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1465 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_15;
#line 1465 "lco.m"
    MR_Word transform_hlds__lco__conv1_Changed_16;
#line 1465 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74;

#line 1465 "lco.m"
    {
#line 1465 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_15, &transform_hlds__lco__conv1_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74);
    }
#line 1465 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_15));
#line 1465 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_Changed_16));
#line 1465 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74));
#line 1465 "lco.m"
  }
#line 1465 "lco.m"
}

#line 1499 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
#line 1499 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1499 "lco.m"
{
#line 1499 "lco.m"
  {
#line 1499 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1499 "lco.m"
    MR_builtin_longjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0, 1);
#line 1499 "lco.m"
  }
#line 1499 "lco.m"
}

#line 1499 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
#line 1499 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1499 "lco.m"
{
#line 1499 "lco.m"
  {
#line 1499 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1499 "lco.m"
    (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44 = ((MR_Word) (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44);
#line 1499 "lco.m"
    {
#line 1499 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(transform_hlds__lco__env_ptr);
#line 1499 "lco.m"
      return;
    }
#line 1499 "lco.m"
  }
#line 1499 "lco.m"
}

#line 1499 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
#line 1499 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1499 "lco.m"
{
#line 1499 "lco.m"
  {
#line 1499 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1499 "lco.m"
    {
#line 1500 "lco.m"
      MR_Word transform_hlds__lco__V_45_45;

#line 1500 "lco.m"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 0)));
#line 1500 "lco.m"
      transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 1)));
#line 7414 "transform_hlds.lco.c"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1500 "lco.m"
      {
#line 1500 "lco.m"
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115, ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42)), ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__V_114_114)));
      }
#line 1500 "lco.m"
      if ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1500 "lco.m"
        {
#line 1500 "lco.m"
          transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(transform_hlds__lco__env_ptr);
#line 1500 "lco.m"
          return;
        }
#line 1499 "lco.m"
    }
#line 1499 "lco.m"
  }
#line 1499 "lco.m"
}

#line 1499 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
#line 1499 "lco.m"
  void * transform_hlds__lco__env_ptr_arg)
#line 1499 "lco.m"
{
#line 1499 "lco.m"
  {
#line 1499 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

#line 1499 "lco.m"
    if (MR_builtin_setjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0) == 0)
#line 1499 "lco.m"
      {
#line 1499 "lco.m"
        {
#line 1499 "lco.m"
          {
#line 1499 "lco.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__lco_scalar_common_2[6], &(transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44, (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__lco_transform_variant_goal_9_p_0_4, transform_hlds__lco__env_ptr);
          }
#line 1499 "lco.m"
        }
#line 1499 "lco.m"
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
#line 1499 "lco.m"
      }
#line 1499 "lco.m"
    else
#line 1499 "lco.m"
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1499 "lco.m"
  }
#line 1499 "lco.m"
}

#line 1443 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_10,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__VariantMap_11,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__VarToAddr_12,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__InstMap0_13,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__Goal0_14,
#line 1443 "lco.m"
  MR_Word * transform_hlds__lco__Goal_15,
#line 1443 "lco.m"
  MR_Word * transform_hlds__lco__Changed_16,
#line 1443 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
#line 1443 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74)
#line 1443 "lco.m"
{
#line 1443 "lco.m"
  {
#line 1443 "lco.m"
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s transform_hlds__lco__env;

#line 1443 "lco.m"
    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12 = transform_hlds__lco__VarToAddr_12;
#line 1448 "lco.m"
    {
#line 1448 "lco.m"
      MR_Word transform_hlds__lco__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 0)));
#line 1448 "lco.m"
      MR_Word transform_hlds__lco__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 1)));
#line 1448 "lco.m"
      MR_Word transform_hlds__lco__GoalExpr_23;
#line 1448 "lco.m"
      MR_Word transform_hlds__lco__GoalInfo_24;

#line 1462 "lco.m"
#line 1462 "lco.m"
      switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) {
#line 1462 "lco.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1462 "lco.m"
        case (MR_Integer) 0:
#line 1519 "lco.m"
          {
#line 1520 "lco.m"
            transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1521 "lco.m"
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1522 "lco.m"
            *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1519 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
#line 1519 "lco.m"
          }
#line 1462 "lco.m"
          break;
#line 1462 "lco.m"
        case (MR_Integer) 1:
#line 1534 "lco.m"
          {
#line 1535 "lco.m"
            {
#line 1535 "lco.m"
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
            }
#line 1537 "lco.m"
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1534 "lco.m"
          }
#line 1462 "lco.m"
          break;
#line 1462 "lco.m"
        case (MR_Integer) 2:
#line 1530 "lco.m"
          {
#line 1530 "lco.m"
            transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__GoalInfo0_19, &transform_hlds__lco__GoalInfo_24, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
          }
#line 1462 "lco.m"
          break;
#line 1462 "lco.m"
        case (MR_Integer) 3:
#line 1462 "lco.m"
#line 1462 "lco.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) {
#line 1462 "lco.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1462 "lco.m"
            case (MR_Integer) 0:
#line 1524 "lco.m"
              {
#line 1525 "lco.m"
                {
#line 1525 "lco.m"
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1527 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1524 "lco.m"
              }
#line 1462 "lco.m"
              break;
#line 1462 "lco.m"
            case (MR_Integer) 1:
#line 1539 "lco.m"
              {
#line 1540 "lco.m"
                {
#line 1540 "lco.m"
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1542 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1539 "lco.m"
              }
#line 1462 "lco.m"
              break;
#line 1462 "lco.m"
            case (MR_Integer) 2:
#line 1451 "lco.m"
              {
#line 1451 "lco.m"
                MR_Word transform_hlds__lco__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1451 "lco.m"
                MR_Word transform_hlds__lco__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));

#line 1458 "lco.m"
#line 1458 "lco.m"
                switch (transform_hlds__lco__ConjType_20) {
#line 1458 "lco.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1458 "lco.m"
                  case (MR_Integer) 1:
#line 1459 "lco.m"
                    {
#line 1460 "lco.m"
                      {
#line 1460 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "parallel_conj");
#line 1460 "lco.m"
                        return;
                      }
#line 1459 "lco.m"
                    }
#line 1458 "lco.m"
                    break;
#line 1458 "lco.m"
                  case (MR_Integer) 0:
#line 1453 "lco.m"
                    {
#line 1453 "lco.m"
                      MR_Word transform_hlds__lco__Goals_22;

#line 1454 "lco.m"
                      {
#line 1454 "lco.m"
                        transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goals0_21, &transform_hlds__lco__Goals_22, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
#line 1456 "lco.m"
                      {
#line 1456 "lco.m"
                        transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1456 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__ConjType_20));
#line 1456 "lco.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Goals_22));
#line 1456 "lco.m"
                      }
#line 1457 "lco.m"
                      transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1453 "lco.m"
                    }
#line 1458 "lco.m"
                    break;
#line 1458 "lco.m"
                }
#line 1451 "lco.m"
              }
#line 1462 "lco.m"
              break;
#line 1462 "lco.m"
            case (MR_Integer) 3:
#line 1463 "lco.m"
              {
#line 1463 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_102_102;
#line 1463 "lco.m"
                MR_Word transform_hlds__lco__DisjsChanged_25;
#line 1463 "lco.m"
                MR_Word transform_hlds__lco__V_88_88;
#line 1463 "lco.m"
                MR_Word transform_hlds__lco__Goals0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1463 "lco.m"
                MR_Word transform_hlds__lco__Goals_96;
#line 1464 "lco.m"
                MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74;

#line 1465 "lco.m"
                {
#line 1465 "lco.m"
                  transform_hlds__lco__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[1]));
#line 1465 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_1));
#line 1465 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1465 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1465 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1465 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
#line 1465 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_88_88, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1465 "lco.m"
                }
#line 7700 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1464 "lco.m"
                {
#line 1464 "lco.m"
                  mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_102_102, transform_hlds__lco__TypeCtorInfo_102_102, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_88_88, transform_hlds__lco__Goals0_95, &transform_hlds__lco__Goals_96, &transform_hlds__lco__DisjsChanged_25, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
                }
#line 1464 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
#line 1468 "lco.m"
                {
#line 1468 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__DisjsChanged_25);
                }
#line 1469 "lco.m"
                {
#line 1469 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1469 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Goals_96));
#line 1469 "lco.m"
                }
#line 1470 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1463 "lco.m"
              }
#line 1462 "lco.m"
              break;
#line 1462 "lco.m"
            case (MR_Integer) 4:
#line 1472 "lco.m"
              {
#line 1472 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_110_110;
#line 1472 "lco.m"
                MR_Word transform_hlds__lco__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1472 "lco.m"
                MR_Word transform_hlds__lco__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1472 "lco.m"
                MR_Word transform_hlds__lco__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1472 "lco.m"
                MR_Word transform_hlds__lco__Cases_29;
#line 1472 "lco.m"
                MR_Word transform_hlds__lco__CasesChanged_30;
#line 1472 "lco.m"
                MR_Word transform_hlds__lco__V_86_86;
#line 1473 "lco.m"
                MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74;

#line 1474 "lco.m"
                {
#line 1474 "lco.m"
                  transform_hlds__lco__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1474 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[2]));
#line 1474 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_6));
#line 1474 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1474 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
#line 1474 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
#line 1474 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
#line 1474 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_86_86, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
#line 1474 "lco.m"
                }
#line 7771 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1473 "lco.m"
                {
#line 1473 "lco.m"
                  mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_110_110, transform_hlds__lco__TypeCtorInfo_110_110, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__V_86_86, transform_hlds__lco__Cases0_28, &transform_hlds__lco__Cases_29, &transform_hlds__lco__CasesChanged_30, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
                }
#line 1473 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
#line 1477 "lco.m"
                {
#line 1477 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__CasesChanged_30);
                }
#line 1478 "lco.m"
                {
#line 1478 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1478 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Var_26));
#line 1478 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__CanFail_27));
#line 1478 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Cases_29));
#line 1478 "lco.m"
                }
#line 1479 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1472 "lco.m"
              }
#line 1462 "lco.m"
              break;
#line 1462 "lco.m"
            case (MR_Integer) 5:
#line 1491 "lco.m"
              {
#line 1491 "lco.m"
                MR_Word transform_hlds__lco__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1491 "lco.m"
                MR_Word transform_hlds__lco__SubGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1493 "lco.m"
                MR_Word transform_hlds__lco__FGT_43;

#line 1493 "lco.m"
                (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1493 "lco.m"
                if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1493 "lco.m"
                  {
#line 1493 "lco.m"
                    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 1)));
#line 1493 "lco.m"
                    transform_hlds__lco__FGT_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 2)));
#line 1495 "lco.m"
#line 1495 "lco.m"
                    switch (transform_hlds__lco__FGT_43) {
#line 1495 "lco.m"
                      default:
#line 1495 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
#line 1495 "lco.m"
                        break;
#line 1495 "lco.m"
                      case (MR_Integer) 1:
#line 1494 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1495 "lco.m"
                        break;
#line 1495 "lco.m"
                      case (MR_Integer) 2:
#line 1495 "lco.m"
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
#line 1495 "lco.m"
                        break;
#line 1495 "lco.m"
                    }
#line 1493 "lco.m"
                  }
#line 1512 "lco.m"
                if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1508 "lco.m"
                  {
#line 1499 "lco.m"
                    {
#line 1499 "lco.m"
                      transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(&transform_hlds__lco__env);
                    }
#line 1508 "lco.m"
                    if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
#line 1505 "lco.m"
                      {
#line 1505 "lco.m"
                        transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
#line 1508 "lco.m"
                    else
#line 1509 "lco.m"
                      {
#line 1509 "lco.m"
                        transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
#line 1510 "lco.m"
                        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
#line 1509 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
#line 1509 "lco.m"
                      }
#line 1508 "lco.m"
                  }
#line 1512 "lco.m"
                else
#line 1514 "lco.m"
                  {
#line 1514 "lco.m"
                    MR_Word transform_hlds__lco__SubGoal_46;

#line 1513 "lco.m"
                    {
#line 1513 "lco.m"
                      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__SubGoal0_41, &transform_hlds__lco__SubGoal_46, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                    }
#line 1515 "lco.m"
                    {
#line 1515 "lco.m"
                      transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1515 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Reason_40));
#line 1515 "lco.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_46));
#line 1515 "lco.m"
                    }
#line 1514 "lco.m"
                  }
#line 1517 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1491 "lco.m"
              }
#line 1462 "lco.m"
              break;
#line 1462 "lco.m"
            case (MR_Integer) 6:
#line 1481 "lco.m"
              {
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__Vars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__Cond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 4)));
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__InstMap1_35;
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__Then_36;
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__ThenChanged_37;
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__Else_38;
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__ElseChanged_39;
#line 1481 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84;

#line 1482 "lco.m"
                {
#line 1482 "lco.m"
                  hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Cond_32, transform_hlds__lco__InstMap0_13, &transform_hlds__lco__InstMap1_35);
                }
#line 1483 "lco.m"
                {
#line 1483 "lco.m"
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap1_35, transform_hlds__lco__Then0_33, &transform_hlds__lco__Then_36, &transform_hlds__lco__ThenChanged_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84);
                }
#line 1485 "lco.m"
                {
#line 1485 "lco.m"
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Else0_34, &transform_hlds__lco__Else_38, &transform_hlds__lco__ElseChanged_39, transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
#line 1487 "lco.m"
                {
#line 1487 "lco.m"
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_2_f_0(transform_hlds__lco__ThenChanged_37, transform_hlds__lco__ElseChanged_39);
                }
#line 1488 "lco.m"
                {
#line 1488 "lco.m"
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1488 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Vars_31));
#line 1488 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Cond_32));
#line 1488 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Then_36));
#line 1488 "lco.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 4) = ((MR_Box) (transform_hlds__lco__Else_38));
#line 1488 "lco.m"
                }
#line 1489 "lco.m"
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
#line 1481 "lco.m"
              }
#line 1462 "lco.m"
              break;
#line 1462 "lco.m"
            case (MR_Integer) 7:
#line 1544 "lco.m"
              {
#line 1546 "lco.m"
                {
#line 1546 "lco.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "shorthand");
#line 1546 "lco.m"
                  return;
                }
#line 1544 "lco.m"
              }
#line 1462 "lco.m"
              break;
#line 1462 "lco.m"
          }
#line 1462 "lco.m"
          break;
#line 1462 "lco.m"
      }
#line 1554 "lco.m"
#line 1554 "lco.m"
      switch (*transform_hlds__lco__Changed_16) {
#line 1554 "lco.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1554 "lco.m"
        case (MR_Integer) 0:
#line 1556 "lco.m"
          *transform_hlds__lco__Goal_15 = transform_hlds__lco__Goal0_14;
#line 1554 "lco.m"
          break;
#line 1554 "lco.m"
        case (MR_Integer) 1:
#line 1549 "lco.m"
          {
#line 1549 "lco.m"
            MR_Word transform_hlds__lco__GoalInfoImpure_72;

#line 1552 "lco.m"
            {
#line 1552 "lco.m"
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__GoalInfo_24, &transform_hlds__lco__GoalInfoImpure_72);
            }
#line 1553 "lco.m"
            {
#line 1553 "lco.m"
              MR_Word base;
#line 1553 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1553 "lco.m"
              *transform_hlds__lco__Goal_15 = base;
#line 1553 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_23));
#line 1553 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfoImpure_72));
#line 1553 "lco.m"
            }
#line 1549 "lco.m"
          }
#line 1554 "lco.m"
          break;
#line 1554 "lco.m"
      }
#line 1448 "lco.m"
    }
#line 1443 "lco.m"
  }
#line 1443 "lco.m"
}

#line 1382 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
#line 1382 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1382 "lco.m"
{
#line 1382 "lco.m"
  {
#line 1382 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1382 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1382 "lco.m"
    {
#line 1382 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1382__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1382 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1382 "lco.m"
  }
#line 1382 "lco.m"
}

#line 1375 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__3_3,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__4_4,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 1375 "lco.m"
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_7,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
#line 1375 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
#line 1375 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12)
#line 1375 "lco.m"
{
#line 1381 "lco.m"
  {
#line 1381 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1381 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1381 "lco.m"
      if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1381 "lco.m"
        {
#line 1381 "lco.m"
          MR_Word transform_hlds__lco__V_22_22;

#line 1380 "lco.m"
          *transform_hlds__lco__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1380 "lco.m"
          *transform_hlds__lco__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1380 "lco.m"
          *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1382 "lco.m"
          {
#line 1382 "lco.m"
            transform_hlds__lco__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[6]));
#line 1382 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 1) = ((MR_Box) (transform_hlds__lco__make_addr_vars_12_p_0_1));
#line 1382 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1382 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 1382 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_22_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1382 "lco.m"
          }
#line 1382 "lco.m"
          {
#line 1382 "lco.m"
            mercury__require__expect_3_p_0(transform_hlds__lco__V_22_22, (MR_String) "transform_hlds.lco", (MR_String) "make_addr_vars: AddrOutArgs != []");
          }
#line 1381 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarTypes_12 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11;
#line 1381 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_VarSet_10 = transform_hlds__lco__STATE_VARIABLE_VarSet_0_9;
#line 1381 "lco.m"
        }
#line 1381 "lco.m"
      else
#line 1384 "lco.m"
        {
#line 1385 "lco.m"
          {
#line 1385 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
#line 1385 "lco.m"
            return;
          }
#line 1384 "lco.m"
        }
#line 1381 "lco.m"
    else
#line 1381 "lco.m"
      {
#line 1381 "lco.m"
        MR_Word transform_hlds__lco__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1381 "lco.m"
        MR_Word transform_hlds__lco__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));

#line 1381 "lco.m"
        if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 1381 "lco.m"
        else
#line 1390 "lco.m"
          {
#line 1390 "lco.m"
            MR_Word transform_hlds__lco__Mode0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
#line 1390 "lco.m"
            MR_Word transform_hlds__lco__Modes0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
#line 1390 "lco.m"
            MR_Word transform_hlds__lco__HeadVar_64;
#line 1390 "lco.m"
            MR_Word transform_hlds__lco__HeadVars_65;
#line 1390 "lco.m"
            MR_Word transform_hlds__lco__Mode_66;
#line 1390 "lco.m"
            MR_Word transform_hlds__lco__Modes_67;
#line 1390 "lco.m"
            MR_Word transform_hlds__lco__HeadVarType_74;
#line 1390 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_75;

#line 1391 "lco.m"
            {
#line 1391 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__HeadVarType_74);
            }
#line 1392 "lco.m"
            {
#line 1392 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__Mode0_62, transform_hlds__lco__HeadVarType_74, &transform_hlds__lco__ArgMode_75);
            }
#line 1399 "lco.m"
#line 1399 "lco.m"
            switch (transform_hlds__lco__ArgMode_75) {
#line 1399 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1399 "lco.m"
              case (MR_Integer) 0:
#line 1394 "lco.m"
                {
#line 1395 "lco.m"
                  transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1396 "lco.m"
                  transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1397 "lco.m"
                  {
#line 1397 "lco.m"
                    transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__NextOutArgNum_6, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                  }
#line 1394 "lco.m"
                }
#line 1399 "lco.m"
                break;
#line 1399 "lco.m"
              case (MR_Integer) 1:
#line 1400 "lco.m"
                {
#line 1400 "lco.m"
                  MR_Word transform_hlds__lco__MaybeFieldId_77;
#line 1400 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97;
#line 1402 "lco.m"
                  MR_Word transform_hlds__lco__AddrOutArg_76;
#line 1402 "lco.m"
                  MR_Integer transform_hlds__lco__V_131_131;

#line 1402 "lco.m"
                  transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 1402 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1402 "lco.m"
                    {
#line 1402 "lco.m"
                      transform_hlds__lco__AddrOutArg_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 1402 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 1403 "lco.m"
                      transform_hlds__lco__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 0)));
#line 1403 "lco.m"
                      transform_hlds__lco__MaybeFieldId_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 1)));
#line 1403 "lco.m"
                      transform_hlds__lco__succeeded = (transform_hlds__lco__NextOutArgNum_6 == transform_hlds__lco__V_131_131);
#line 1402 "lco.m"
                    }
#line 1400 "lco.m"
                  if (transform_hlds__lco__succeeded)
#line 1405 "lco.m"
                    {
#line 1405 "lco.m"
                      MR_Word transform_hlds__lco__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1405 "lco.m"
                      MR_String transform_hlds__lco__Name_78;
#line 1405 "lco.m"
                      MR_String transform_hlds__lco__AddrName_79;
#line 1405 "lco.m"
                      MR_Word transform_hlds__lco__OldType_81;
#line 1405 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrTail_87;
#line 1405 "lco.m"
                      MR_Word transform_hlds__lco__VarToAddrHead_88;
#line 1405 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_99_99;
#line 1405 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108;
#line 1405 "lco.m"
                      MR_Integer transform_hlds__lco__V_109_109;
#line 1405 "lco.m"
                      MR_Word transform_hlds__lco__V_113_113;

#line 1405 "lco.m"
                      {
#line 1405 "lco.m"
                        mercury__varset__lookup_name_3_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__V_133_133, &transform_hlds__lco__Name_78);
                      }
#line 1406 "lco.m"
                      {
#line 1406 "lco.m"
                        transform_hlds__lco__AddrName_79 = mercury__string__f_43_43_2_f_0((MR_String) "AddrOf", transform_hlds__lco__Name_78);
                      }
#line 1407 "lco.m"
                      {
#line 1407 "lco.m"
                        mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__AddrName_79, &transform_hlds__lco__HeadVar_64, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, &transform_hlds__lco__STATE_VARIABLE_VarSet_99_99);
                      }
#line 1409 "lco.m"
                      {
#line 1409 "lco.m"
                        hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__V_133_133, &transform_hlds__lco__OldType_81);
                      }
#line 1416 "lco.m"
                      if ((transform_hlds__lco__MaybeFieldId_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1411 "lco.m"
                        {
#line 1411 "lco.m"
                          MR_Word transform_hlds__lco__V_107_107;

#line 1414 "lco.m"
                          {
#line 1414 "lco.m"
                            transform_hlds__lco__V_107_107 = transform_hlds__lco__make_ref_type_1_f_0(transform_hlds__lco__OldType_81);
                          }
#line 1414 "lco.m"
                          {
#line 1414 "lco.m"
                            hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__V_107_107, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1415 "lco.m"
                          {
#line 1415 "lco.m"
                            transform_hlds__lco__Mode_66 = parse_tree__prog_mode__in_mode_0_f_0();
                          }
#line 1411 "lco.m"
                        }
#line 1416 "lco.m"
                      else
#line 1417 "lco.m"
                        {
#line 1417 "lco.m"
                          MR_Word transform_hlds__lco__AddrVarType_82;
#line 1417 "lco.m"
                          MR_Word transform_hlds__lco__ConsId_83;
#line 1417 "lco.m"
                          MR_Integer transform_hlds__lco__ArgNum_84;
#line 1417 "lco.m"
                          MR_Word transform_hlds__lco__BoundInst_85;
#line 1417 "lco.m"
                          MR_Word transform_hlds__lco__InitialInst_86;
#line 1417 "lco.m"
                          MR_Word transform_hlds__lco__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_77, (MR_Integer) 0)));
#line 1417 "lco.m"
                          MR_Word transform_hlds__lco__V_104_104;
#line 1417 "lco.m"
                          MR_Word transform_hlds__lco__V_106_106;

#line 1417 "lco.m"
                          transform_hlds__lco__AddrVarType_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 0)));
#line 1417 "lco.m"
                          transform_hlds__lco__ConsId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 1)));
#line 1417 "lco.m"
                          transform_hlds__lco__ArgNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_100_100, (MR_Integer) 2)));
#line 1421 "lco.m"
                          {
#line 1421 "lco.m"
                            hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__AddrVarType_82, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
#line 1422 "lco.m"
                          {
#line 1422 "lco.m"
                            transform_hlds__lco__BoundInst_85 = transform_hlds__lco__bound_inst_with_free_arg_2_f_0(transform_hlds__lco__ConsId_83, transform_hlds__lco__ArgNum_84);
                          }
#line 1423 "lco.m"
                          {
#line 1423 "lco.m"
                            transform_hlds__lco__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_85));
#line 1423 "lco.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1423 "lco.m"
                          }
#line 1423 "lco.m"
                          {
#line 1423 "lco.m"
                            transform_hlds__lco__InitialInst_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1423 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1423 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1423 "lco.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 3) = ((MR_Box) (transform_hlds__lco__V_104_104));
#line 1423 "lco.m"
                          }
#line 1424 "lco.m"
                          {
#line 1424 "lco.m"
                            transform_hlds__lco__V_106_106 = parse_tree__prog_mode__ground_inst_0_f_0();
                          }
#line 1424 "lco.m"
                          {
#line 1424 "lco.m"
                            transform_hlds__lco__Mode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1424 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 0) = ((MR_Box) (transform_hlds__lco__InitialInst_86));
#line 1424 "lco.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 1) = ((MR_Box) (transform_hlds__lco__V_106_106));
#line 1424 "lco.m"
                          }
#line 1417 "lco.m"
                        }
#line 1427 "lco.m"
                      transform_hlds__lco__V_109_109 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1426 "lco.m"
                      {
#line 1426 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97, transform_hlds__lco__V_109_109, transform_hlds__lco__ModuleInfo_7, &transform_hlds__lco__VarToAddrTail_87, transform_hlds__lco__STATE_VARIABLE_VarSet_99_99, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1429 "lco.m"
                      {
#line 1429 "lco.m"
                        transform_hlds__lco__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__V_113_113, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_77));
#line 1429 "lco.m"
                      }
#line 1429 "lco.m"
                      {
#line 1429 "lco.m"
                        transform_hlds__lco__VarToAddrHead_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 0) = ((MR_Box) (transform_hlds__lco__V_133_133));
#line 1429 "lco.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 1) = ((MR_Box) (transform_hlds__lco__V_113_113));
#line 1429 "lco.m"
                      }
#line 1430 "lco.m"
                      {
#line 1430 "lco.m"
                        MR_Word base;
#line 1430 "lco.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "lco.m"
                        *transform_hlds__lco__HeadVar__8_8 = base;
#line 1430 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VarToAddrHead_88));
#line 1430 "lco.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VarToAddrTail_87));
#line 1430 "lco.m"
                      }
#line 1405 "lco.m"
                    }
#line 1400 "lco.m"
                  else
#line 1432 "lco.m"
                    {
#line 1432 "lco.m"
                      MR_Integer transform_hlds__lco__V_114_114;

#line 1432 "lco.m"
                      transform_hlds__lco__HeadVar_64 = transform_hlds__lco__V_133_133;
#line 1433 "lco.m"
                      transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
#line 1435 "lco.m"
                      transform_hlds__lco__V_114_114 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
#line 1434 "lco.m"
                      {
#line 1434 "lco.m"
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__V_132_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__V_114_114, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
#line 1432 "lco.m"
                    }
#line 1400 "lco.m"
                }
#line 1399 "lco.m"
                break;
#line 1399 "lco.m"
              case (MR_Integer) 2:
#line 1439 "lco.m"
                {
#line 1440 "lco.m"
                  {
#line 1440 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "top_unused");
#line 1440 "lco.m"
                    return;
                  }
#line 1439 "lco.m"
                }
#line 1399 "lco.m"
                break;
#line 1399 "lco.m"
            }
#line 1389 "lco.m"
            {
#line 1389 "lco.m"
              MR_Word base;
#line 1389 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "lco.m"
              *transform_hlds__lco__HeadVar__3_3 = base;
#line 1389 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
#line 1389 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__HeadVars_65));
#line 1389 "lco.m"
            }
#line 1389 "lco.m"
            {
#line 1389 "lco.m"
              MR_Word base;
#line 1389 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "lco.m"
              *transform_hlds__lco__HeadVar__4_4 = base;
#line 1389 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Mode_66));
#line 1389 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Modes_67));
#line 1389 "lco.m"
            }
#line 1390 "lco.m"
          }
#line 1381 "lco.m"
      }
#line 1381 "lco.m"
  }
#line 1375 "lco.m"
}

#line 1330 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
#line 1330 "lco.m"
  MR_Word transform_hlds__lco__Bag_3,
#line 1330 "lco.m"
  MR_Word transform_hlds__lco__Var_4)
#line 1330 "lco.m"
{
#line 1332 "lco.m"
  {
#line 1332 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1332 "lco.m"
    MR_Integer transform_hlds__lco__V_7_7;

#line 1333 "lco.m"
    {
#line 1333 "lco.m"
      mercury__bag__count_value_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], transform_hlds__lco__Bag_3, ((MR_Box) (transform_hlds__lco__Var_4)), &transform_hlds__lco__V_7_7);
    }
#line 1333 "lco.m"
    transform_hlds__lco__succeeded = ((MR_Integer) 1 == transform_hlds__lco__V_7_7);
#line 1332 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1332 "lco.m"
  }
#line 1330 "lco.m"
}

#line 1321 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__ModuleInfo_3,
#line 1321 "lco.m"
  MR_Word transform_hlds__lco__UniMode_4)
#line 1321 "lco.m"
{
#line 1323 "lco.m"
  {
#line 1323 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1323 "lco.m"
    MR_Word transform_hlds__lco__InitInstX_5;
#line 1323 "lco.m"
    MR_Word transform_hlds__lco__InitInstY_6;
#line 1323 "lco.m"
    MR_Word transform_hlds__lco__FinalInstX_7;
#line 1323 "lco.m"
    MR_Word transform_hlds__lco__FinalInstY_8;
#line 1323 "lco.m"
    MR_Word transform_hlds__lco__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 0)));
#line 1323 "lco.m"
    MR_Word transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UniMode_4, (MR_Integer) 1)));

#line 1324 "lco.m"
    transform_hlds__lco__InitInstX_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 0)));
#line 1324 "lco.m"
    transform_hlds__lco__InitInstY_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_9_9, (MR_Integer) 1)));
#line 1324 "lco.m"
    transform_hlds__lco__FinalInstX_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 0)));
#line 1324 "lco.m"
    transform_hlds__lco__FinalInstY_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, (MR_Integer) 1)));
#line 1325 "lco.m"
    {
#line 1325 "lco.m"
      transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstX_5);
    }
#line 1323 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1323 "lco.m"
      {
#line 1326 "lco.m"
        {
#line 1326 "lco.m"
          transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstY_6);
        }
#line 1323 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1323 "lco.m"
          {
#line 1327 "lco.m"
            {
#line 1327 "lco.m"
              transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstX_7);
            }
#line 1323 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1328 "lco.m"
              {
#line 1328 "lco.m"
                return transform_hlds__lco__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstY_8);
              }
#line 1323 "lco.m"
          }
#line 1323 "lco.m"
      }
#line 1323 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1323 "lco.m"
  }
#line 1321 "lco.m"
}

#line 1311 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
#line 1311 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1311 "lco.m"
  MR_Integer transform_hlds__lco__FreeArg_5)
#line 1311 "lco.m"
{
#line 1313 "lco.m"
  {
#line 1313 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1313 "lco.m"
    MR_Word transform_hlds__lco__Inst_6;
#line 1313 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_12_12;
#line 1313 "lco.m"
    MR_Integer transform_hlds__lco__Arity_7;
#line 1313 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts0_8;
#line 1313 "lco.m"
    MR_Word transform_hlds__lco__ArgInsts_9;
#line 1313 "lco.m"
    MR_Word transform_hlds__lco__V_10_10;
#line 1313 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;

#line 1314 "lco.m"
    {
#line 1314 "lco.m"
      transform_hlds__lco__Arity_7 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
    }
#line 1315 "lco.m"
    {
#line 1315 "lco.m"
      transform_hlds__lco__V_10_10 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 8683 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1315 "lco.m"
    {
#line 1315 "lco.m"
      mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__Arity_7, ((MR_Box) (transform_hlds__lco__V_10_10)), &transform_hlds__lco__ArgInsts0_8);
    }
#line 1316 "lco.m"
    {
#line 1316 "lco.m"
      transform_hlds__lco__V_11_11 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 1316 "lco.m"
    {
#line 1316 "lco.m"
      mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__ArgInsts0_8, transform_hlds__lco__FreeArg_5, ((MR_Box) (transform_hlds__lco__V_11_11)), &transform_hlds__lco__ArgInsts_9);
    }
#line 1317 "lco.m"
    {
#line 1317 "lco.m"
      transform_hlds__lco__Inst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1317 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_9));
#line 1317 "lco.m"
    }
#line 1313 "lco.m"
    return transform_hlds__lco__Inst_6;
#line 1313 "lco.m"
  }
#line 1311 "lco.m"
}

#line 1276 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__Subst_1,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_2,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__VarType_3,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__ConsId_4,
#line 1276 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_5,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__6_6,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__8_8,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
#line 1276 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
#line 1276 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14)
#line 1276 "lco.m"
{
#line 1282 "lco.m"
  {
#line 1282 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1282 "lco.m"
    if ((transform_hlds__lco__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1282 "lco.m"
      {
#line 1282 "lco.m"
        *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1282 "lco.m"
        *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1283 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13;
#line 1283 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11;
#line 1283 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9;
#line 1282 "lco.m"
      }
#line 1282 "lco.m"
    else
#line 1286 "lco.m"
      {
#line 1286 "lco.m"
        MR_Word transform_hlds__lco__OrigVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 0)));
#line 1286 "lco.m"
        MR_Word transform_hlds__lco__OrigVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 1)));
#line 1286 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVar_36;
#line 1286 "lco.m"
        MR_Word transform_hlds__lco__UpdatedVars_37;
#line 1286 "lco.m"
        MR_Word transform_hlds__lco__AddrArgsTail_42;
#line 1286 "lco.m"
        MR_Integer transform_hlds__lco__V_52_52 = (transform_hlds__lco__ArgNum_5 + (MR_Integer) 1);
#line 1286 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1286 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1286 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1306 "lco.m"
        MR_Word transform_hlds__lco__AddrVar_43;
#line 1290 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_65_65;
#line 1290 "lco.m"
        MR_Box transform_hlds__lco__conv0_AddrVar_43;

#line 1287 "lco.m"
        {
#line 1287 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_1, transform_hlds__lco__HighLevelData_2, transform_hlds__lco__VarType_3, transform_hlds__lco__ConsId_4, transform_hlds__lco__V_52_52, transform_hlds__lco__OrigVars_35, &transform_hlds__lco__UpdatedVars_37, &transform_hlds__lco__AddrArgsTail_42, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9, &transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11, &transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13, &transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55);
        }
#line 8805 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1290 "lco.m"
        {
#line 1290 "lco.m"
          transform_hlds__lco__succeeded = mercury__map__search_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__Subst_1, ((MR_Box) (transform_hlds__lco__OrigVar_34)), &transform_hlds__lco__conv0_AddrVar_43);
        }
#line 1290 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1290 "lco.m"
          {
#line 1290 "lco.m"
            transform_hlds__lco__AddrVar_43 = ((MR_Word) transform_hlds__lco__conv0_AddrVar_43);
#line 1290 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1290 "lco.m"
          }
#line 1306 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1291 "lco.m"
          {
#line 1291 "lco.m"
            MR_Word transform_hlds__lco__FinalInst_44;
#line 1291 "lco.m"
            MR_Word transform_hlds__lco__V_63_63;

#line 1291 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__AddrVar_43;
#line 1295 "lco.m"
#line 1295 "lco.m"
            switch (transform_hlds__lco__HighLevelData_2) {
#line 1295 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1295 "lco.m"
              case (MR_Integer) 0:
#line 1293 "lco.m"
                {
#line 1294 "lco.m"
                  {
#line 1294 "lco.m"
                    transform_hlds__lco__FinalInst_44 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 1293 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1293 "lco.m"
                }
#line 1295 "lco.m"
                break;
#line 1295 "lco.m"
              case (MR_Integer) 1:
#line 1296 "lco.m"
                {
#line 1296 "lco.m"
                  MR_Word transform_hlds__lco__TypeCtorInfo_12_76;
#line 1296 "lco.m"
                  MR_Word transform_hlds__lco__BoundInst_45;
#line 1296 "lco.m"
                  MR_Word transform_hlds__lco__V_59_59;
#line 1296 "lco.m"
                  MR_Integer transform_hlds__lco__Arity_71;
#line 1296 "lco.m"
                  MR_Word transform_hlds__lco__ArgInsts0_72;
#line 1296 "lco.m"
                  MR_Word transform_hlds__lco__ArgInsts_73;
#line 1296 "lco.m"
                  MR_Word transform_hlds__lco__V_74_74;
#line 1296 "lco.m"
                  MR_Word transform_hlds__lco__V_75_75;

#line 1314 "lco.m"
                  {
#line 1314 "lco.m"
                    transform_hlds__lco__Arity_71 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
                  }
#line 1315 "lco.m"
                  {
#line 1315 "lco.m"
                    transform_hlds__lco__V_74_74 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
#line 8884 "transform_hlds.lco.c"
                  transform_hlds__lco__TypeCtorInfo_12_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1315 "lco.m"
                  {
#line 1315 "lco.m"
                    mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__Arity_71, ((MR_Box) (transform_hlds__lco__V_74_74)), &transform_hlds__lco__ArgInsts0_72);
                  }
#line 1316 "lco.m"
                  {
#line 1316 "lco.m"
                    transform_hlds__lco__V_75_75 = parse_tree__prog_mode__free_inst_0_f_0();
                  }
#line 1316 "lco.m"
                  {
#line 1316 "lco.m"
                    mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__ArgInsts0_72, transform_hlds__lco__ArgNum_5, ((MR_Box) (transform_hlds__lco__V_75_75)), &transform_hlds__lco__ArgInsts_73);
                  }
#line 1317 "lco.m"
                  {
#line 1317 "lco.m"
                    transform_hlds__lco__BoundInst_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1317 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_73));
#line 1317 "lco.m"
                  }
#line 1298 "lco.m"
                  {
#line 1298 "lco.m"
                    transform_hlds__lco__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_45));
#line 1298 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "lco.m"
                  }
#line 1298 "lco.m"
                  {
#line 1298 "lco.m"
                    transform_hlds__lco__FinalInst_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1298 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1298 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 3) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1298 "lco.m"
                  }
#line 1300 "lco.m"
                  {
#line 1300 "lco.m"
                    hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__VarType_3, transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55, transform_hlds__lco__STATE_VARIABLE_VarTypes_14);
                  }
#line 1296 "lco.m"
                }
#line 1295 "lco.m"
                break;
#line 1295 "lco.m"
            }
#line 1302 "lco.m"
            {
#line 1302 "lco.m"
              hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__FinalInst_44, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10);
            }
#line 1303 "lco.m"
            {
#line 1303 "lco.m"
              transform_hlds__lco__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 0) = ((MR_Box) (transform_hlds__lco__VarType_3));
#line 1303 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 1) = ((MR_Box) (transform_hlds__lco__ConsId_4));
#line 1303 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_63_63, 2) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1303 "lco.m"
            }
#line 1303 "lco.m"
            {
#line 1303 "lco.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, ((MR_Box) (transform_hlds__lco__OrigVar_34)), ((MR_Box) (transform_hlds__lco__V_63_63)), transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12);
            }
#line 1305 "lco.m"
            {
#line 1305 "lco.m"
              MR_Word base;
#line 1305 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "lco.m"
              *transform_hlds__lco__HeadVar__8_8 = base;
#line 1305 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
#line 1305 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__AddrArgsTail_42));
#line 1305 "lco.m"
            }
#line 1291 "lco.m"
          }
#line 1306 "lco.m"
        else
#line 1307 "lco.m"
          {
#line 1307 "lco.m"
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__OrigVar_34;
#line 1308 "lco.m"
            *transform_hlds__lco__HeadVar__8_8 = transform_hlds__lco__AddrArgsTail_42;
#line 1307 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
#line 1307 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
#line 1307 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
#line 1307 "lco.m"
          }
#line 1285 "lco.m"
        {
#line 1285 "lco.m"
          MR_Word base;
#line 1285 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = base;
#line 1285 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedVar_36));
#line 1285 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedVars_37));
#line 1285 "lco.m"
        }
#line 1286 "lco.m"
      }
#line 1282 "lco.m"
  }
#line 1276 "lco.m"
}

#line 1256 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
#line 1256 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 1256 "lco.m"
{
#line 1256 "lco.m"
  {
#line 1256 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1256 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 1256 "lco.m"
    {
#line 1256 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_construct__1256__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 1256 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1256 "lco.m"
  }
#line 1256 "lco.m"
}

#line 1210 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9,
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__Subst_10,
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__Goal0_11,
#line 1210 "lco.m"
  MR_Word * transform_hlds__lco__Goal_12,
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
#line 1210 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
#line 1210 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
#line 1210 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62)
#line 1210 "lco.m"
{
#line 1215 "lco.m"
  {
#line 1215 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 0)));
#line 1215 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 1)));
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__LHS_17;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__RHS0_18;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__Mode_19;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_21;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__Var_22;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__ConsId_23;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__ArgVars_24;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__UniModes_25;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__How_26;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__IsUnique_27;
#line 1272 "lco.m"
    MR_Word transform_hlds__lco__TermSizeSlot_29;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__Unification0_20;
#line 1218 "lco.m"
    MR_Word transform_hlds__lco__SubInfo0_28;

#line 1218 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1)));
#line 1218 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1218 "lco.m"
      {
#line 1218 "lco.m"
        transform_hlds__lco__LHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 0)));
#line 1218 "lco.m"
        transform_hlds__lco__RHS0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 1)));
#line 1218 "lco.m"
        transform_hlds__lco__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 2)));
#line 1218 "lco.m"
        transform_hlds__lco__Unification0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 3)));
#line 1218 "lco.m"
        transform_hlds__lco__UnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 4)));
#line 1219 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification0_20)) == (MR_mktag((MR_Integer) 0)));
#line 1219 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1219 "lco.m"
          {
#line 1219 "lco.m"
            transform_hlds__lco__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 0)));
#line 1219 "lco.m"
            transform_hlds__lco__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 1)));
#line 1219 "lco.m"
            transform_hlds__lco__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 2)));
#line 1219 "lco.m"
            transform_hlds__lco__UniModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 3)));
#line 1219 "lco.m"
            transform_hlds__lco__How_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 4)));
#line 1219 "lco.m"
            transform_hlds__lco__IsUnique_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 5)));
#line 1219 "lco.m"
            transform_hlds__lco__SubInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 6)));
#line 1224 "lco.m"
            if ((transform_hlds__lco__SubInfo0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "lco.m"
              {
#line 1223 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1223 "lco.m"
              }
#line 1224 "lco.m"
            else
#line 1225 "lco.m"
              {
#line 1225 "lco.m"
                MR_Word transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 0)));

#line 1225 "lco.m"
                transform_hlds__lco__TermSizeSlot_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 1)));
#line 1225 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1225 "lco.m"
              }
#line 1219 "lco.m"
          }
#line 1218 "lco.m"
      }
#line 1272 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1233 "lco.m"
      {
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__HighLevelData_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__VarTypes0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__VarType_32;
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta0_33;
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgVars_34;
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__AddrFields_35;
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__InstMapDelta_36;
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__VarTypes_37;
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 0)));
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 1)));
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 2)));
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 3)));
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 4)));
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 5)));
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__V_87_87 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 1233 "lco.m"
        MR_Word transform_hlds__lco__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1234 "lco.m"
        MR_Word transform_hlds__lco__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1234 "lco.m"
        MR_Word transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1234 "lco.m"
        MR_Word transform_hlds__lco__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1234 "lco.m"
        MR_Word transform_hlds__lco__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 1234 "lco.m"
        MR_Word transform_hlds__lco__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 1240 "lco.m"
        MR_Word transform_hlds__lco__V_94_94;
#line 1240 "lco.m"
        MR_Word transform_hlds__lco__V_95_95;
#line 1240 "lco.m"
        MR_Word transform_hlds__lco__V_96_96;
#line 1240 "lco.m"
        MR_Word transform_hlds__lco__V_98_98;
#line 1240 "lco.m"
        MR_Word transform_hlds__lco__V_99_99;
#line 1240 "lco.m"
        MR_Word transform_hlds__lco__V_97_97;

#line 1235 "lco.m"
        {
#line 1235 "lco.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_31, transform_hlds__lco__Var_22, &transform_hlds__lco__VarType_32);
        }
#line 1236 "lco.m"
        {
#line 1236 "lco.m"
          transform_hlds__lco__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_16);
        }
#line 1237 "lco.m"
        {
#line 1237 "lco.m"
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_10, transform_hlds__lco__HighLevelData_30, transform_hlds__lco__VarType_32, transform_hlds__lco__ConsId_23, (MR_Integer) 1, transform_hlds__lco__ArgVars_24, &transform_hlds__lco__UpdatedArgVars_34, &transform_hlds__lco__AddrFields_35, transform_hlds__lco__InstMapDelta0_33, &transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60, transform_hlds__lco__VarTypes0_31, &transform_hlds__lco__VarTypes_37);
        }
#line 1240 "lco.m"
        transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
#line 1240 "lco.m"
        transform_hlds__lco__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 1240 "lco.m"
        transform_hlds__lco__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 1240 "lco.m"
        transform_hlds__lco__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 1240 "lco.m"
        transform_hlds__lco__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 1240 "lco.m"
        transform_hlds__lco__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 1240 "lco.m"
        {
#line 1240 "lco.m"
          MR_Word base;
#line 1240 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_62 = base;
#line 1240 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_94_94));
#line 1240 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_95_95));
#line 1240 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_96_96));
#line 1240 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_37));
#line 1240 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__V_98_98));
#line 1240 "lco.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_99_99));
#line 1240 "lco.m"
        }
#line 1244 "lco.m"
        if ((transform_hlds__lco__AddrFields_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1243 "lco.m"
          *transform_hlds__lco__Goal_12 = transform_hlds__lco__Goal0_11;
#line 1244 "lco.m"
        else
#line 1245 "lco.m"
          {
#line 1245 "lco.m"
            MR_Word transform_hlds__lco__SubInfo_40;
#line 1245 "lco.m"
            MR_Word transform_hlds__lco__Unification_41;
#line 1245 "lco.m"
            MR_Word transform_hlds__lco__RHS_47;
#line 1245 "lco.m"
            MR_Word transform_hlds__lco__GoalExpr_57;
#line 1245 "lco.m"
            MR_Word transform_hlds__lco__GoalInfo_58;
#line 1245 "lco.m"
            MR_Word transform_hlds__lco__V_67_67;

#line 1246 "lco.m"
            {
#line 1246 "lco.m"
              transform_hlds__lco__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_67_67, 0) = ((MR_Box) (transform_hlds__lco__AddrFields_35));
#line 1246 "lco.m"
            }
#line 1246 "lco.m"
            {
#line 1246 "lco.m"
              transform_hlds__lco__SubInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 0) = ((MR_Box) (transform_hlds__lco__V_67_67));
#line 1246 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 1) = ((MR_Box) (transform_hlds__lco__TermSizeSlot_29));
#line 1246 "lco.m"
            }
#line 1247 "lco.m"
            {
#line 1247 "lco.m"
              transform_hlds__lco__Unification_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 0) = ((MR_Box) (transform_hlds__lco__Var_22));
#line 1247 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 1) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1247 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgVars_34));
#line 1247 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 3) = ((MR_Box) (transform_hlds__lco__UniModes_25));
#line 1247 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 4) = ((MR_Box) (transform_hlds__lco__How_26));
#line 1247 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 5) = ((MR_Box) (transform_hlds__lco__IsUnique_27));
#line 1247 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 6) = ((MR_Box) (transform_hlds__lco__SubInfo_40));
#line 1247 "lco.m"
            }
#line 1254 "lco.m"
#line 1254 "lco.m"
            switch (MR_tag((MR_Word) transform_hlds__lco__RHS0_18)) {
#line 1254 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1254 "lco.m"
              case (MR_Integer) 0:
#line 1252 "lco.m"
                {
#line 1253 "lco.m"
                  {
#line 1253 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "var RHS");
#line 1253 "lco.m"
                    return;
                  }
#line 1252 "lco.m"
                }
#line 1254 "lco.m"
                break;
#line 1254 "lco.m"
              case (MR_Integer) 1:
#line 1255 "lco.m"
                {
#line 1255 "lco.m"
                  MR_Word transform_hlds__lco__RHSConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 0)));
#line 1255 "lco.m"
                  MR_Word transform_hlds__lco__IsExistConstr_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 1)));
#line 1255 "lco.m"
                  MR_Word transform_hlds__lco__RHSVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 2)));
#line 1255 "lco.m"
                  MR_Word transform_hlds__lco__RHSVars_46;
#line 1255 "lco.m"
                  MR_Word transform_hlds__lco__V_71_71;

#line 1256 "lco.m"
                  {
#line 1256 "lco.m"
                    transform_hlds__lco__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1256 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[5]));
#line 1256 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (transform_hlds__lco__update_construct_8_p_0_1));
#line 1256 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1256 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 3) = ((MR_Box) (transform_hlds__lco__ConsId_23));
#line 1256 "lco.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__V_71_71, 4) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1256 "lco.m"
                  }
#line 1256 "lco.m"
                  {
#line 1256 "lco.m"
                    mercury__require__expect_3_p_0(transform_hlds__lco__V_71_71, (MR_String) "transform_hlds.lco", (MR_String) "update_construct: cons_id mismatch");
                  }
#line 1258 "lco.m"
                  {
#line 1258 "lco.m"
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_10, transform_hlds__lco__RHSVars0_45, &transform_hlds__lco__RHSVars_46);
                  }
#line 1259 "lco.m"
                  {
#line 1259 "lco.m"
                    transform_hlds__lco__RHS_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 0) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
#line 1259 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 1) = ((MR_Box) (transform_hlds__lco__IsExistConstr_44));
#line 1259 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 2) = ((MR_Box) (transform_hlds__lco__RHSVars_46));
#line 1259 "lco.m"
                  }
#line 1255 "lco.m"
                }
#line 1254 "lco.m"
                break;
#line 1254 "lco.m"
              case (MR_Integer) 2:
#line 1261 "lco.m"
                {
#line 1262 "lco.m"
                  {
#line 1262 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "lambda RHS");
#line 1262 "lco.m"
                    return;
                  }
#line 1261 "lco.m"
                }
#line 1254 "lco.m"
                break;
#line 1254 "lco.m"
            }
#line 1264 "lco.m"
            {
#line 1264 "lco.m"
              transform_hlds__lco__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 0) = ((MR_Box) (transform_hlds__lco__LHS_17));
#line 1264 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 1) = ((MR_Box) (transform_hlds__lco__RHS_47));
#line 1264 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 2) = ((MR_Box) (transform_hlds__lco__Mode_19));
#line 1264 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 3) = ((MR_Box) (transform_hlds__lco__Unification_41));
#line 1264 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_21));
#line 1264 "lco.m"
            }
#line 1269 "lco.m"
            {
#line 1269 "lco.m"
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__GoalInfo0_16, &transform_hlds__lco__GoalInfo_58);
            }
#line 1270 "lco.m"
            {
#line 1270 "lco.m"
              MR_Word base;
#line 1270 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "lco.m"
              *transform_hlds__lco__Goal_12 = base;
#line 1270 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_57));
#line 1270 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_58));
#line 1270 "lco.m"
            }
#line 1245 "lco.m"
          }
#line 1233 "lco.m"
      }
#line 1272 "lco.m"
    else
#line 1273 "lco.m"
      {
#line 1273 "lco.m"
        {
#line 1273 "lco.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "not construct");
#line 1273 "lco.m"
          return;
        }
#line 1273 "lco.m"
      }
#line 1215 "lco.m"
  }
#line 1210 "lco.m"
}

#line 1195 "lco.m"
static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
#line 1195 "lco.m"
  MR_Word transform_hlds__lco__PredOrFunc_5,
#line 1195 "lco.m"
  MR_Integer transform_hlds__lco__VariantNumber_6,
#line 1195 "lco.m"
  MR_String transform_hlds__lco__OrigName_7,
#line 1195 "lco.m"
  MR_String * transform_hlds__lco__VariantName_8)
#line 1195 "lco.m"
{
#line 1198 "lco.m"
  {
#line 1198 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1198 "lco.m"
    MR_String transform_hlds__lco__Prefix_9;
#line 1198 "lco.m"
    MR_String transform_hlds__lco__V_10_10;
#line 1198 "lco.m"
    MR_String transform_hlds__lco__V_11_11;
#line 1198 "lco.m"
    MR_String transform_hlds__lco__V_13_13;

#line 1202 "lco.m"
#line 1202 "lco.m"
    switch (transform_hlds__lco__PredOrFunc_5) {
#line 1202 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1202 "lco.m"
      case (MR_Integer) 1:
#line 1201 "lco.m"
        transform_hlds__lco__Prefix_9 = (MR_String) "LCMCfn_";
#line 1202 "lco.m"
        break;
#line 1202 "lco.m"
      case (MR_Integer) 0:
#line 1204 "lco.m"
        transform_hlds__lco__Prefix_9 = (MR_String) "LCMCpr_";
#line 1202 "lco.m"
        break;
#line 1202 "lco.m"
    }
#line 1206 "lco.m"
    {
#line 1206 "lco.m"
      transform_hlds__lco__V_13_13 = mercury__string__int_to_string_1_f_0(transform_hlds__lco__VariantNumber_6);
    }
#line 1206 "lco.m"
    {
#line 1206 "lco.m"
      transform_hlds__lco__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__lco__V_13_13);
    }
#line 1206 "lco.m"
    {
#line 1206 "lco.m"
      transform_hlds__lco__V_10_10 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__OrigName_7, transform_hlds__lco__V_11_11);
    }
#line 1206 "lco.m"
    {
#line 1206 "lco.m"
      *transform_hlds__lco__VariantName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__Prefix_9, transform_hlds__lco__V_10_10);
    }
#line 1198 "lco.m"
  }
#line 1195 "lco.m"
}

#line 1158 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
#line 1158 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1158 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_6,
#line 1158 "lco.m"
  MR_Word * transform_hlds__lco__Variant_7)
#line 1158 "lco.m"
{
#line 1161 "lco.m"
  while (MR_TRUE)
#line 1161 "lco.m"
    {
#line 1161 "lco.m"
      /* tailcall optimized into a loop */
#line 1161 "lco.m"
      {
#line 1161 "lco.m"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1161 "lco.m"
        MR_Word transform_hlds__lco__Variant0_4;
#line 1161 "lco.m"
        MR_Word transform_hlds__lco__Variants_5;
#line 1162 "lco.m"
        MR_Word transform_hlds__lco__TypeInfo_11_11;
#line 1162 "lco.m"
        MR_Word transform_hlds__lco__V_10_10;
#line 1162 "lco.m"
        MR_Word transform_hlds__lco__V_8_8;
#line 1162 "lco.m"
        MR_String transform_hlds__lco__V_9_9;

#line 1161 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1161 "lco.m"
          {
#line 1161 "lco.m"
            transform_hlds__lco__Variant0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 1161 "lco.m"
            transform_hlds__lco__Variants_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1162 "lco.m"
            transform_hlds__lco__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 0)));
#line 1162 "lco.m"
            transform_hlds__lco__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 1)));
#line 1162 "lco.m"
            transform_hlds__lco__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 2)));
#line 9602 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_11_11 = (MR_Word) &transform_hlds__lco_scalar_common_1[7];
#line 1162 "lco.m"
            {
#line 1162 "lco.m"
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_11_11, ((MR_Box) (transform_hlds__lco__AddrArgNums_6)), ((MR_Box) (transform_hlds__lco__V_10_10)));
            }
#line 1164 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1163 "lco.m"
              {
#line 1163 "lco.m"
                *transform_hlds__lco__Variant_7 = transform_hlds__lco__Variant0_4;
#line 1163 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 1163 "lco.m"
              }
#line 1164 "lco.m"
            else
#line 1165 "lco.m"
              {
#line 1165 "lco.m"
                /* direct tailcall eliminated */
#line 1165 "lco.m"
                {
#line 1165 "lco.m"
                  MR_Word transform_hlds__lco__HeadVar__1__tmp_copy_1 = transform_hlds__lco__Variants_5;

#line 1165 "lco.m"
                  transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__HeadVar__1__tmp_copy_1;
#line 1165 "lco.m"
                }
#line 1165 "lco.m"
                continue;
#line 1165 "lco.m"
              }
#line 1161 "lco.m"
          }
#line 1161 "lco.m"
        return transform_hlds__lco__succeeded;
#line 1161 "lco.m"
      }
#line 1161 "lco.m"
      break;
#line 1161 "lco.m"
    }
#line 1158 "lco.m"
}

#line 1116 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
#line 1116 "lco.m"
  MR_Word transform_hlds__lco__PredId_9,
#line 1116 "lco.m"
  MR_Integer transform_hlds__lco__ProcId_10,
#line 1116 "lco.m"
  MR_Word transform_hlds__lco__AddrArgNums_11,
#line 1116 "lco.m"
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
#line 1116 "lco.m"
  MR_Word transform_hlds__lco__SymName_13,
#line 1116 "lco.m"
  MR_Word * transform_hlds__lco__VariantSymName_14,
#line 1116 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
#line 1116 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31)
#line 1116 "lco.m"
{
#line 1121 "lco.m"
  {
#line 1121 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1121 "lco.m"
    MR_Word transform_hlds__lco__PredProcId_16;
#line 1121 "lco.m"
    MR_Word transform_hlds__lco__CurSCCVariants0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1123 "lco.m"
    MR_Word transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1123 "lco.m"
    MR_Word transform_hlds__lco__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1123 "lco.m"
    MR_Word transform_hlds__lco__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1123 "lco.m"
    MR_Word transform_hlds__lco__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 1123 "lco.m"
    MR_Word transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 1130 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariant_19;
#line 1125 "lco.m"
    MR_Word transform_hlds__lco__ExistingVariants_18;

#line 1122 "lco.m"
    {
#line 1122 "lco.m"
      transform_hlds__lco__PredProcId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 0) = ((MR_Box) (transform_hlds__lco__PredId_9));
#line 1122 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1122 "lco.m"
    }
#line 1125 "lco.m"
    {
#line 1125 "lco.m"
      transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_18);
    }
#line 1125 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1126 "lco.m"
      {
#line 1126 "lco.m"
        transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_18, transform_hlds__lco__AddrArgNums_11, &transform_hlds__lco__ExistingVariant_19);
      }
#line 1130 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 1128 "lco.m"
      {
#line 1128 "lco.m"
        MR_String transform_hlds__lco__VariantName_74;
#line 1172 "lco.m"
        MR_Word transform_hlds__lco__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 0)));

#line 1172 "lco.m"
        *transform_hlds__lco__VariantPredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 1)));
#line 1172 "lco.m"
        transform_hlds__lco__VariantName_74 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 2)));
#line 1176 "lco.m"
        if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1177 "lco.m"
          {
#line 1177 "lco.m"
            MR_Word transform_hlds__lco__ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1177 "lco.m"
            MR_String transform_hlds__lco___Name_77 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1178 "lco.m"
            {
#line 1178 "lco.m"
              MR_Word base;
#line 1178 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "lco.m"
              *transform_hlds__lco__VariantSymName_14 = base;
#line 1178 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_76));
#line 1178 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_74));
#line 1178 "lco.m"
            }
#line 1177 "lco.m"
          }
#line 1176 "lco.m"
        else
#line 1175 "lco.m"
          {
#line 1175 "lco.m"
            MR_Word base;
#line 1175 "lco.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "lco.m"
            *transform_hlds__lco__VariantSymName_14 = base;
#line 1175 "lco.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_74));
#line 1175 "lco.m"
          }
#line 1128 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_31 = transform_hlds__lco__STATE_VARIABLE_Info_0_30;
#line 1128 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 1128 "lco.m"
      }
#line 1130 "lco.m"
    else
#line 1131 "lco.m"
      {
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_67_67;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__TypeCtorInfo_68_68;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__ClonePredId_21;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__PredOrFunc_22;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__ModuleInfo_23;
#line 1131 "lco.m"
        MR_Integer transform_hlds__lco__VariantNumber_24;
#line 1131 "lco.m"
        MR_String transform_hlds__lco__VariantName_26;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__NewVariant_28;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__CurSCCVariants_29;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_32_32;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__PredInfo_85;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__PredTable0_86;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__PredTable_87;
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 1131 "lco.m"
        MR_Word transform_hlds__lco__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 1135 "lco.m"
        MR_Word transform_hlds__lco__V_51_51;
#line 1135 "lco.m"
        MR_Word transform_hlds__lco__V_52_52;
#line 1135 "lco.m"
        MR_Word transform_hlds__lco__V_53_53;
#line 1135 "lco.m"
        MR_Word transform_hlds__lco__V_54_54;
#line 1135 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1135 "lco.m"
        MR_Word transform_hlds__lco__V_50_50;
#line 1140 "lco.m"
        MR_Word transform_hlds__lco__ExistingVariants_37;
#line 1155 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 1155 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1155 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 1155 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;
#line 1155 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 1155 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;

#line 1189 "lco.m"
        {
#line 1189 "lco.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lco__ModuleInfo0_20, transform_hlds__lco__PredId_9, &transform_hlds__lco__PredInfo_85);
        }
#line 1190 "lco.m"
        {
#line 1190 "lco.m"
          transform_hlds__lco__PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lco__PredInfo_85);
        }
#line 1191 "lco.m"
        {
#line 1191 "lco.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__PredTable0_86);
        }
#line 1192 "lco.m"
        {
#line 1192 "lco.m"
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lco__PredInfo_85, &transform_hlds__lco__ClonePredId_21, transform_hlds__lco__PredTable0_86, &transform_hlds__lco__PredTable_87);
        }
#line 1193 "lco.m"
        {
#line 1193 "lco.m"
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lco__PredTable_87, transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__ModuleInfo_23);
        }
#line 1134 "lco.m"
        {
#line 1134 "lco.m"
          MR_Word base;
#line 1134 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1134 "lco.m"
          *transform_hlds__lco__VariantPredProcId_12 = base;
#line 1134 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__ClonePredId_21));
#line 1134 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
#line 1134 "lco.m"
        }
#line 1135 "lco.m"
        transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 1135 "lco.m"
        transform_hlds__lco__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 1135 "lco.m"
        transform_hlds__lco__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 1135 "lco.m"
        transform_hlds__lco__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1135 "lco.m"
        transform_hlds__lco__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 1135 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 1135 "lco.m"
        {
#line 1135 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__lco__ModuleInfo_23));
#line 1135 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 1135 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__lco__V_52_52));
#line 1135 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1135 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (transform_hlds__lco__V_54_54));
#line 1135 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (transform_hlds__lco__V_55_55));
#line 1135 "lco.m"
        }
#line 1137 "lco.m"
        {
#line 1137 "lco.m"
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_37);
        }
#line 1140 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1139 "lco.m"
          {
#line 1139 "lco.m"
            MR_Integer transform_hlds__lco__V_33_33;

#line 1139 "lco.m"
            {
#line 1139 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__ExistingVariants_37);
            }
#line 1139 "lco.m"
            transform_hlds__lco__VariantNumber_24 = (transform_hlds__lco__V_33_33 + (MR_Integer) 1);
#line 1139 "lco.m"
          }
#line 1140 "lco.m"
        else
#line 1141 "lco.m"
          transform_hlds__lco__VariantNumber_24 = (MR_Integer) 1;
#line 1143 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__VariantNumber_24 <= (MR_Integer) 4);
#line 1131 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1131 "lco.m"
          {
#line 1148 "lco.m"
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 1149 "lco.m"
              {
#line 1149 "lco.m"
                MR_Word transform_hlds__lco__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
#line 1149 "lco.m"
                MR_String transform_hlds__lco__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

#line 1150 "lco.m"
                {
#line 1150 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_38, &transform_hlds__lco__VariantName_26);
                }
#line 1151 "lco.m"
                {
#line 1151 "lco.m"
                  MR_Word base;
#line 1151 "lco.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1151 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_27));
#line 1151 "lco.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1151 "lco.m"
                }
#line 1149 "lco.m"
              }
#line 1148 "lco.m"
            else
#line 1145 "lco.m"
              {
#line 1145 "lco.m"
                MR_String transform_hlds__lco__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__SymName_13, (MR_Integer) 0)));

#line 1146 "lco.m"
                {
#line 1146 "lco.m"
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_25, &transform_hlds__lco__VariantName_26);
                }
#line 1147 "lco.m"
                {
#line 1147 "lco.m"
                  MR_Word base;
#line 1147 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "lco.m"
                  *transform_hlds__lco__VariantSymName_14 = base;
#line 1147 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1147 "lco.m"
                }
#line 1145 "lco.m"
              }
#line 10000 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 10002 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_68_68 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0;
#line 1153 "lco.m"
            {
#line 1153 "lco.m"
              transform_hlds__lco__NewVariant_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 0) = ((MR_Box) (transform_hlds__lco__AddrArgNums_11));
#line 1153 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 1) = ((MR_Box) (*transform_hlds__lco__VariantPredProcId_12));
#line 1153 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 2) = ((MR_Box) (transform_hlds__lco__VariantName_26));
#line 1153 "lco.m"
            }
#line 1154 "lco.m"
            {
#line 1154 "lco.m"
              mercury__multi_map__set_4_p_0(transform_hlds__lco__TypeCtorInfo_67_67, transform_hlds__lco__TypeCtorInfo_68_68, ((MR_Box) (transform_hlds__lco__PredProcId_16)), ((MR_Box) (transform_hlds__lco__NewVariant_28)), transform_hlds__lco__CurSCCVariants0_17, &transform_hlds__lco__CurSCCVariants_29);
            }
#line 1155 "lco.m"
            transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
#line 1155 "lco.m"
            transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
#line 1155 "lco.m"
            transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
#line 1155 "lco.m"
            transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
#line 1155 "lco.m"
            transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
#line 1155 "lco.m"
            transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
#line 1155 "lco.m"
            {
#line 1155 "lco.m"
              MR_Word base;
#line 1155 "lco.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_31 = base;
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_56_56));
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__CurSCCVariants_29));
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_58_58));
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__V_60_60));
#line 1155 "lco.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_61_61));
#line 1155 "lco.m"
            }
#line 1155 "lco.m"
            transform_hlds__lco__succeeded = MR_TRUE;
#line 1131 "lco.m"
          }
#line 1131 "lco.m"
      }
#line 1121 "lco.m"
    return transform_hlds__lco__succeeded;
#line 1121 "lco.m"
  }
#line 1116 "lco.m"
}

#line 1110 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
#line 1110 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1110 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1110 "lco.m"
{
#line 1110 "lco.m"
  {
#line 1110 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1110 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1110 "lco.m"
    MR_Word transform_hlds__lco__conv1_HeadVar__3_15;

#line 1110 "lco.m"
    {
#line 1110 "lco.m"
      transform_hlds__lco__conv1_HeadVar__3_15 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1110__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1110 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__3_15));
#line 1110 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1110 "lco.m"
  }
#line 1110 "lco.m"
}

#line 1107 "lco.m"
static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
#line 1107 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 1107 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 1107 "lco.m"
{
#line 1107 "lco.m"
  {
#line 1107 "lco.m"
    MR_Box transform_hlds__lco__wrapper_arg_2;
#line 1107 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 1107 "lco.m"
    MR_Word transform_hlds__lco__conv0_HeadVar__2_18;

#line 1107 "lco.m"
    {
#line 1107 "lco.m"
      transform_hlds__lco__conv0_HeadVar__2_18 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1107__1_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 1107 "lco.m"
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_18));
#line 1107 "lco.m"
    return transform_hlds__lco__wrapper_arg_2;
#line 1107 "lco.m"
  }
#line 1107 "lco.m"
}

#line 1101 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__HighLevelData_5,
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
#line 1101 "lco.m"
  MR_Word transform_hlds__lco__Mismatches_7,
#line 1101 "lco.m"
  MR_Word * transform_hlds__lco__VariantArgs_8)
#line 1101 "lco.m"
{
#line 1104 "lco.m"
  {
#line 1104 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1104 "lco.m"
    MR_Word transform_hlds__lco__MakeArg_9;

#line 1108 "lco.m"
#line 1108 "lco.m"
    switch (transform_hlds__lco__HighLevelData_5) {
#line 1108 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1108 "lco.m"
      case (MR_Integer) 0:
#line 1107 "lco.m"
        transform_hlds__lco__MakeArg_9 = (MR_Word) &transform_hlds__lco_scalar_common_2[12];
#line 1108 "lco.m"
        break;
#line 1108 "lco.m"
      case (MR_Integer) 1:
#line 1110 "lco.m"
        {
#line 1110 "lco.m"
          transform_hlds__lco__MakeArg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_5[1]));
#line 1110 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 1) = ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_2));
#line 1110 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1110 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 3) = ((MR_Box) (transform_hlds__lco__AddrVarFieldIds_6));
#line 1110 "lco.m"
        }
#line 1108 "lco.m"
        break;
#line 1108 "lco.m"
    }
#line 1114 "lco.m"
    {
#line 1114 "lco.m"
      *transform_hlds__lco__VariantArgs_8 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco_scalar_common_2[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__MakeArg_9, transform_hlds__lco__Mismatches_7);
    }
#line 1104 "lco.m"
  }
#line 1101 "lco.m"
}

#line 1092 "lco.m"
static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
#line 1092 "lco.m"
  MR_Word transform_hlds__lco__FieldType_3)
#line 1092 "lco.m"
{
#line 1094 "lco.m"
  {
#line 1094 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1094 "lco.m"
    MR_Word transform_hlds__lco__PtrType_4;
#line 1094 "lco.m"
    MR_Word transform_hlds__lco__RefTypeName_5;
#line 1094 "lco.m"
    MR_Word transform_hlds__lco__V_6_6;
#line 1094 "lco.m"
    MR_Word transform_hlds__lco__V_8_8;

#line 1095 "lco.m"
    {
#line 1095 "lco.m"
      transform_hlds__lco__V_6_6 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 1095 "lco.m"
    {
#line 1095 "lco.m"
      transform_hlds__lco__RefTypeName_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 0) = ((MR_Box) (transform_hlds__lco__V_6_6));
#line 1095 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1095 "lco.m"
    }
#line 1097 "lco.m"
    {
#line 1097 "lco.m"
      transform_hlds__lco__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 0) = ((MR_Box) (transform_hlds__lco__FieldType_3));
#line 1097 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "lco.m"
    }
#line 1097 "lco.m"
    {
#line 1097 "lco.m"
      transform_hlds__lco__PtrType_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_5));
#line 1097 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 1) = ((MR_Box) (transform_hlds__lco__V_8_8));
#line 1097 "lco.m"
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "lco.m"
    }
#line 1094 "lco.m"
    return transform_hlds__lco__PtrType_4;
#line 1094 "lco.m"
  }
#line 1092 "lco.m"
}

#line 1069 "lco.m"
static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
#line 1069 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 1069 "lco.m"
  MR_Word transform_hlds__lco__Var_7,
#line 1069 "lco.m"
  MR_Word * transform_hlds__lco__AddrVar_8,
#line 1069 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
#line 1069 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20)
#line 1069 "lco.m"
{
#line 1072 "lco.m"
  {
#line 1072 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1072 "lco.m"
    MR_String transform_hlds__lco__Name_12;
#line 1072 "lco.m"
    MR_String transform_hlds__lco__AddrName_13;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__VarSet_14;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_15;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_18;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__V_43_43;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__V_44_44;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__V_47_47;
#line 1072 "lco.m"
    MR_Word transform_hlds__lco__V_48_48;
#line 1073 "lco.m"
    MR_Word transform_hlds__lco__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1073 "lco.m"
    MR_Word transform_hlds__lco__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1073 "lco.m"
    MR_Word transform_hlds__lco__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1073 "lco.m"
    MR_Word transform_hlds__lco__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__V_35_35;
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__V_36_36;
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__V_37_37;
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__V_38_38;
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__V_39_39;
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__V_40_40;
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__V_41_41;
#line 1078 "lco.m"
    MR_Word transform_hlds__lco__V_42_42;
#line 1089 "lco.m"
    MR_Word transform_hlds__lco__V_45_45;
#line 1089 "lco.m"
    MR_Word transform_hlds__lco__V_46_46;

#line 1075 "lco.m"
    {
#line 1075 "lco.m"
      mercury__varset__lookup_name_4_p_0(transform_hlds__lco__TypeCtorInfo_55_55, transform_hlds__lco__VarSet0_10, transform_hlds__lco__Var_7, (MR_String) "SCCcallarg", &transform_hlds__lco__Name_12);
    }
#line 1076 "lco.m"
    {
#line 1076 "lco.m"
      transform_hlds__lco__AddrName_13 = mercury__string__f_43_43_2_f_0((MR_String) "Addr", transform_hlds__lco__Name_12);
    }
#line 1077 "lco.m"
    {
#line 1077 "lco.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_55_55, transform_hlds__lco__AddrName_13, transform_hlds__lco__AddrVar_8, transform_hlds__lco__VarSet0_10, &transform_hlds__lco__VarSet_14);
    }
#line 1078 "lco.m"
    transform_hlds__lco__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 1078 "lco.m"
    transform_hlds__lco__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 1078 "lco.m"
    transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 1078 "lco.m"
    transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 1078 "lco.m"
    transform_hlds__lco__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 1078 "lco.m"
    transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 1078 "lco.m"
    transform_hlds__lco__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 1078 "lco.m"
    transform_hlds__lco__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1078 "lco.m"
    transform_hlds__lco__HighLevelData_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1084 "lco.m"
#line 1084 "lco.m"
    switch (transform_hlds__lco__HighLevelData_15) {
#line 1084 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1084 "lco.m"
      case (MR_Integer) 0:
#line 1080 "lco.m"
        {
#line 1080 "lco.m"
          MR_Word transform_hlds__lco__FieldType_16;
#line 1080 "lco.m"
          MR_Word transform_hlds__lco__AddrVarType_17;
#line 1080 "lco.m"
          MR_Word transform_hlds__lco__RefTypeName_58;
#line 1080 "lco.m"
          MR_Word transform_hlds__lco__V_59_59;
#line 1080 "lco.m"
          MR_Word transform_hlds__lco__V_61_61;

#line 1081 "lco.m"
          {
#line 1081 "lco.m"
            hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_11, transform_hlds__lco__Var_7, &transform_hlds__lco__FieldType_16);
          }
#line 1095 "lco.m"
          {
#line 1095 "lco.m"
            transform_hlds__lco__V_59_59 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 1095 "lco.m"
          {
#line 1095 "lco.m"
            transform_hlds__lco__RefTypeName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_58, 0) = ((MR_Box) (transform_hlds__lco__V_59_59));
#line 1095 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_58, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
#line 1095 "lco.m"
          }
#line 1097 "lco.m"
          {
#line 1097 "lco.m"
            transform_hlds__lco__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_61_61, 0) = ((MR_Box) (transform_hlds__lco__FieldType_16));
#line 1097 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "lco.m"
          }
#line 1097 "lco.m"
          {
#line 1097 "lco.m"
            transform_hlds__lco__AddrVarType_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_58));
#line 1097 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 1) = ((MR_Box) (transform_hlds__lco__V_61_61));
#line 1097 "lco.m"
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "lco.m"
          }
#line 1083 "lco.m"
          {
#line 1083 "lco.m"
            hlds__vartypes__add_var_type_4_p_0(*transform_hlds__lco__AddrVar_8, transform_hlds__lco__AddrVarType_17, transform_hlds__lco__VarTypes0_11, &transform_hlds__lco__VarTypes_18);
          }
#line 1080 "lco.m"
        }
#line 1084 "lco.m"
        break;
#line 1084 "lco.m"
      case (MR_Integer) 1:
#line 1087 "lco.m"
        transform_hlds__lco__VarTypes_18 = transform_hlds__lco__VarTypes0_11;
#line 1084 "lco.m"
        break;
#line 1084 "lco.m"
    }
#line 1089 "lco.m"
    transform_hlds__lco__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1089 "lco.m"
    transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1089 "lco.m"
    transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1089 "lco.m"
    transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1089 "lco.m"
    transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1089 "lco.m"
    transform_hlds__lco__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1090 "lco.m"
    {
#line 1090 "lco.m"
      MR_Word base;
#line 1090 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "lco.m"
      *transform_hlds__lco__STATE_VARIABLE_Info_20 = base;
#line 1090 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_43_43));
#line 1090 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_44_44));
#line 1090 "lco.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__VarSet_14));
#line 1090 "lco.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_18));
#line 1090 "lco.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__V_47_47));
#line 1090 "lco.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_48_48));
#line 1090 "lco.m"
    }
#line 1072 "lco.m"
  }
#line 1069 "lco.m"
}

#line 1010 "lco.m"
static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_2,
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 1010 "lco.m"
  MR_Integer transform_hlds__lco__ArgNum_4,
#line 1010 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 1010 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
#line 1010 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
#line 1010 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
#line 1010 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10)
#line 1010 "lco.m"
{
#line 1016 "lco.m"
  {
#line 1016 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 1016 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "lco.m"
      {
#line 1016 "lco.m"
        *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "lco.m"
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_0_9;
#line 1016 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_0_7;
#line 1016 "lco.m"
      }
#line 1016 "lco.m"
    else
#line 1019 "lco.m"
      {
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__CallArg_22;
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__HeadArg_23;
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__CallHeadArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArg_27;
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__UpdatedCallArgs_28;
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__MismatchesTail_31;
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
#line 1019 "lco.m"
        MR_Integer transform_hlds__lco__V_39_39;
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 1019 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__CallArgType_32;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__CallArgTypeCtor_33;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_43_43;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_44_44;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_45_45;
#line 1023 "lco.m"
        MR_String transform_hlds__lco__V_46_46;
#line 1023 "lco.m"
        MR_Integer transform_hlds__lco__V_47_47;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_55_55;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_56_56;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_57_57;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_58_58;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_59_59;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_60_60;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_61_61;
#line 1023 "lco.m"
        MR_Word transform_hlds__lco__V_62_62;
#line 1024 "lco.m"
        MR_Word transform_hlds__lco__V_63_63;
#line 1024 "lco.m"
        MR_Word transform_hlds__lco__V_64_64;
#line 1024 "lco.m"
        MR_Word transform_hlds__lco__V_65_65;
#line 1024 "lco.m"
        MR_Word transform_hlds__lco__V_66_66;
#line 1024 "lco.m"
        MR_Word transform_hlds__lco__V_67_67;

#line 1018 "lco.m"
        transform_hlds__lco__CallArg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 0)));
#line 1018 "lco.m"
        transform_hlds__lco__HeadArg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_38_38, (MR_Integer) 1)));
#line 1021 "lco.m"
        transform_hlds__lco__V_39_39 = (transform_hlds__lco__ArgNum_4 + (MR_Integer) 1);
#line 1020 "lco.m"
        {
#line 1020 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__UnifyInputVars_2, transform_hlds__lco__CallHeadArgs_24, transform_hlds__lco__V_39_39, &transform_hlds__lco__MismatchesTail_31, &transform_hlds__lco__UpdatedCallArgs_28, transform_hlds__lco__STATE_VARIABLE_Subst_0_7, &transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Info_0_9, &transform_hlds__lco__STATE_VARIABLE_Info_41_41);
        }
#line 1023 "lco.m"
        transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 1023 "lco.m"
        transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 1023 "lco.m"
        transform_hlds__lco__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
#line 1023 "lco.m"
        transform_hlds__lco__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
#line 1023 "lco.m"
        transform_hlds__lco__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
#line 1023 "lco.m"
        transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
#line 1023 "lco.m"
        transform_hlds__lco__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 1023 "lco.m"
        transform_hlds__lco__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1023 "lco.m"
        transform_hlds__lco__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1023 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_43_43 == (MR_Integer) 0);
#line 1023 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1023 "lco.m"
          {
#line 1024 "lco.m"
            transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 1024 "lco.m"
            transform_hlds__lco__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 1024 "lco.m"
            transform_hlds__lco__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 1024 "lco.m"
            transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 1024 "lco.m"
            transform_hlds__lco__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
#line 1024 "lco.m"
            transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
#line 1024 "lco.m"
            {
#line 1024 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__V_44_44, transform_hlds__lco__CallArg_22, &transform_hlds__lco__CallArgType_32);
            }
#line 1025 "lco.m"
            {
#line 1025 "lco.m"
              transform_hlds__lco__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(transform_hlds__lco__CallArgType_32, &transform_hlds__lco__CallArgTypeCtor_33);
            }
#line 1023 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1023 "lco.m"
              {
#line 1026 "lco.m"
                transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 0)));
#line 1026 "lco.m"
                transform_hlds__lco__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 1)));
#line 1026 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_47_47 == (MR_Integer) 0);
#line 1023 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 1023 "lco.m"
                  {
#line 1026 "lco.m"
                    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 1026 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 1026 "lco.m"
                      {
#line 1026 "lco.m"
                        transform_hlds__lco__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__V_45_45, (MR_Integer) 0)));
#line 1026 "lco.m"
                        transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__V_46_46, (MR_String) "float") == 0);
#line 1026 "lco.m"
                      }
#line 1023 "lco.m"
                  }
#line 1023 "lco.m"
              }
#line 1023 "lco.m"
          }
#line 1029 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1028 "lco.m"
          {
#line 1028 "lco.m"
            MR_Word transform_hlds__lco__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 1028 "lco.m"
            MR_Word transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 1028 "lco.m"
            MR_Word transform_hlds__lco__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 1028 "lco.m"
            MR_Word transform_hlds__lco__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 1028 "lco.m"
            MR_Word transform_hlds__lco__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
#line 1028 "lco.m"
            MR_Word transform_hlds__lco__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));

#line 1028 "lco.m"
            {
#line 1028 "lco.m"
              transform_hlds__lco__STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (transform_hlds__lco__V_68_68));
#line 1028 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (transform_hlds__lco__V_69_69));
#line 1028 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 1028 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (transform_hlds__lco__V_71_71));
#line 1028 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1028 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 5) = ((MR_Box) (transform_hlds__lco__V_73_73));
#line 1028 "lco.m"
            }
#line 1028 "lco.m"
          }
#line 1029 "lco.m"
        else
#line 1029 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_Info_48_48 = transform_hlds__lco__STATE_VARIABLE_Info_41_41;
#line 1032 "lco.m"
        {
#line 1032 "lco.m"
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__HeadArg_23)));
        }
#line 1063 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 1033 "lco.m"
          {
#line 1033 "lco.m"
            transform_hlds__lco__UpdatedCallArg_27 = transform_hlds__lco__CallArg_22;
#line 1034 "lco.m"
            *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__MismatchesTail_31;
#line 1035 "lco.m"
            {
#line 1035 "lco.m"
              transform_hlds__lco__succeeded = mercury__bag__member_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__HeadArg_23)), transform_hlds__lco__UnifyInputVars_2);
            }
#line 1060 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 1059 "lco.m"
              {
#line 1059 "lco.m"
                MR_Word transform_hlds__lco__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 1059 "lco.m"
                MR_Word transform_hlds__lco__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 1059 "lco.m"
                MR_Word transform_hlds__lco__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 1059 "lco.m"
                MR_Word transform_hlds__lco__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 1059 "lco.m"
                MR_Word transform_hlds__lco__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 1059 "lco.m"
                MR_Word transform_hlds__lco__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));

#line 1059 "lco.m"
                {
#line 1059 "lco.m"
                  MR_Word base;
#line 1059 "lco.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_10 = base;
#line 1059 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_74_74));
#line 1059 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_75_75));
#line 1059 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_76_76));
#line 1059 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_77_77));
#line 1059 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1059 "lco.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_79_79));
#line 1059 "lco.m"
                }
#line 1059 "lco.m"
              }
#line 1060 "lco.m"
            else
#line 1060 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_48_48;
#line 1033 "lco.m"
            *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
#line 1033 "lco.m"
          }
#line 1063 "lco.m"
        else
#line 1064 "lco.m"
          {
#line 1064 "lco.m"
            MR_Word transform_hlds__lco__TypeInfo_81_81;
#line 1064 "lco.m"
            MR_Word transform_hlds__lco__V_53_53;

#line 1064 "lco.m"
            {
#line 1064 "lco.m"
              transform_hlds__lco__make_address_var_5_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CallArg_22, &transform_hlds__lco__UpdatedCallArg_27, transform_hlds__lco__STATE_VARIABLE_Info_48_48, transform_hlds__lco__STATE_VARIABLE_Info_10);
            }
#line 1065 "lco.m"
            {
#line 1065 "lco.m"
              transform_hlds__lco__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_4));
#line 1065 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_53_53, 1) = ((MR_Box) (transform_hlds__lco__CallArg_22));
#line 1065 "lco.m"
            }
#line 1065 "lco.m"
            {
#line 1065 "lco.m"
              MR_Word base;
#line 1065 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "lco.m"
              *transform_hlds__lco__HeadVar__5_5 = base;
#line 1065 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 1065 "lco.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__MismatchesTail_31));
#line 1065 "lco.m"
            }
#line 10826 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_81_81 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 1066 "lco.m"
            {
#line 1066 "lco.m"
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_81_81, transform_hlds__lco__TypeInfo_81_81, ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27)), transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Subst_8);
            }
#line 1064 "lco.m"
          }
#line 1019 "lco.m"
        {
#line 1019 "lco.m"
          MR_Word base;
#line 1019 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = base;
#line 1019 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27));
#line 1019 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedCallArgs_28));
#line 1019 "lco.m"
        }
#line 1019 "lco.m"
      }
#line 1016 "lco.m"
  }
#line 1010 "lco.m"
}

#line 982 "lco.m"
static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
#line 982 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 982 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 982 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 982 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 982 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__5_5,
#line 982 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6,
#line 982 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__7_7)
#line 982 "lco.m"
{
#line 986 "lco.m"
  {
#line 986 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 986 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "lco.m"
        {
#line 986 "lco.m"
          *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "lco.m"
          *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "lco.m"
        }
#line 986 "lco.m"
      else
#line 987 "lco.m"
        {
#line 988 "lco.m"
          {
#line 988 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
#line 988 "lco.m"
            return;
          }
#line 987 "lco.m"
        }
#line 986 "lco.m"
    else
#line 986 "lco.m"
      {
#line 986 "lco.m"
        MR_Word transform_hlds__lco__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 986 "lco.m"
        MR_Word transform_hlds__lco__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 986 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 986 "lco.m"
        else
#line 992 "lco.m"
          {
#line 992 "lco.m"
            MR_Word transform_hlds__lco__CalleeMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 992 "lco.m"
            MR_Word transform_hlds__lco__CalleeModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 992 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_39;
#line 992 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_40;
#line 992 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 992 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 992 "lco.m"
            MR_Word transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;

#line 993 "lco.m"
            {
#line 993 "lco.m"
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_50_50, transform_hlds__lco__CalleeModes_35, &transform_hlds__lco__STATE_VARIABLE_InArgs_44_44, &transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45, &transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46);
            }
#line 995 "lco.m"
            {
#line 995 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_51_51, &transform_hlds__lco__CalleeType_39);
            }
#line 996 "lco.m"
            {
#line 996 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CalleeMode_34, transform_hlds__lco__CalleeType_39, &transform_hlds__lco__ArgMode_40);
            }
#line 1000 "lco.m"
#line 1000 "lco.m"
            switch (transform_hlds__lco__ArgMode_40) {
#line 1000 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1000 "lco.m"
              case (MR_Integer) 0:
#line 998 "lco.m"
                {
#line 999 "lco.m"
                  {
#line 999 "lco.m"
                    MR_Word base;
#line 999 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "lco.m"
                    *transform_hlds__lco__HeadVar__5_5 = base;
#line 999 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 999 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_InArgs_44_44));
#line 999 "lco.m"
                  }
#line 998 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 998 "lco.m"
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 998 "lco.m"
                }
#line 1000 "lco.m"
                break;
#line 1000 "lco.m"
              case (MR_Integer) 1:
#line 1001 "lco.m"
                {
#line 1002 "lco.m"
                  {
#line 1002 "lco.m"
                    MR_Word base;
#line 1002 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 1002 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 1002 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45));
#line 1002 "lco.m"
                  }
#line 1001 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 1001 "lco.m"
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
#line 1001 "lco.m"
                }
#line 1000 "lco.m"
                break;
#line 1000 "lco.m"
              case (MR_Integer) 2:
#line 1004 "lco.m"
                {
#line 1005 "lco.m"
                  {
#line 1005 "lco.m"
                    MR_Word base;
#line 1005 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "lco.m"
                    *transform_hlds__lco__HeadVar__7_7 = base;
#line 1005 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_51_51));
#line 1005 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46));
#line 1005 "lco.m"
                  }
#line 1004 "lco.m"
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
#line 1004 "lco.m"
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
#line 1004 "lco.m"
                }
#line 1000 "lco.m"
                break;
#line 1000 "lco.m"
            }
#line 992 "lco.m"
          }
#line 986 "lco.m"
      }
#line 986 "lco.m"
  }
#line 982 "lco.m"
}

#line 949 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
#line 949 "lco.m"
  MR_Box transform_hlds__lco__closure_arg)
#line 949 "lco.m"
{
#line 949 "lco.m"
  {
#line 949 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 949 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 949 "lco.m"
    {
#line 949 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_call_args__949__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
#line 949 "lco.m"
    return transform_hlds__lco__succeeded;
#line 949 "lco.m"
  }
#line 949 "lco.m"
}

#line 945 "lco.m"
static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__2_2,
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__3_3,
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__4_4,
#line 945 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5,
#line 945 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__6_6)
#line 945 "lco.m"
{
#line 948 "lco.m"
  {
#line 948 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 948 "lco.m"
    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "lco.m"
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "lco.m"
        {
#line 948 "lco.m"
          MR_Word transform_hlds__lco__V_10_10;

#line 948 "lco.m"
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 949 "lco.m"
          {
#line 949 "lco.m"
            transform_hlds__lco__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 949 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[3]));
#line 949 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 1) = ((MR_Box) (transform_hlds__lco__update_call_args_6_p_0_1));
#line 949 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 949 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
#line 949 "lco.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lco__V_10_10, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "lco.m"
          }
#line 949 "lco.m"
          {
#line 949 "lco.m"
            mercury__require__expect_4_p_0(transform_hlds__lco__V_10_10, (MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "updating nonexistent arg");
#line 949 "lco.m"
            return;
          }
#line 948 "lco.m"
        }
#line 948 "lco.m"
      else
#line 951 "lco.m"
        {
#line 952 "lco.m"
          {
#line 952 "lco.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
#line 952 "lco.m"
            return;
          }
#line 951 "lco.m"
        }
#line 948 "lco.m"
    else
#line 948 "lco.m"
      {
#line 948 "lco.m"
        MR_Word transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
#line 948 "lco.m"
        MR_Word transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

#line 948 "lco.m"
        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 948 "lco.m"
        else
#line 956 "lco.m"
          {
#line 956 "lco.m"
            MR_Word transform_hlds__lco__Arg_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
#line 956 "lco.m"
            MR_Word transform_hlds__lco__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
#line 956 "lco.m"
            MR_Word transform_hlds__lco__CalleeType_41;
#line 956 "lco.m"
            MR_Word transform_hlds__lco__ArgMode_42;

#line 957 "lco.m"
            {
#line 957 "lco.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Arg_37, &transform_hlds__lco__CalleeType_41);
            }
#line 958 "lco.m"
            {
#line 958 "lco.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__V_62_62, transform_hlds__lco__CalleeType_41, &transform_hlds__lco__ArgMode_42);
            }
#line 964 "lco.m"
#line 964 "lco.m"
            switch (transform_hlds__lco__ArgMode_42) {
#line 964 "lco.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 964 "lco.m"
              case (MR_Integer) 0:
#line 960 "lco.m"
                {
#line 960 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55;

#line 961 "lco.m"
                  {
#line 961 "lco.m"
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_61_61, transform_hlds__lco__Args_38, transform_hlds__lco__HeadVar__5_5, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55);
                  }
#line 963 "lco.m"
                  {
#line 963 "lco.m"
                    MR_Word base;
#line 963 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 963 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Arg_37));
#line 963 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55));
#line 963 "lco.m"
                  }
#line 960 "lco.m"
                }
#line 964 "lco.m"
                break;
#line 964 "lco.m"
              case (MR_Integer) 1:
#line 965 "lco.m"
                {
#line 965 "lco.m"
                  MR_Word transform_hlds__lco__UpdatedArg_43;
#line 965 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53;
#line 965 "lco.m"
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57;

#line 968 "lco.m"
                  if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "lco.m"
                    {
#line 970 "lco.m"
                      {
#line 970 "lco.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "no UpdatedCallOutArgs");
#line 970 "lco.m"
                        return;
                      }
#line 969 "lco.m"
                    }
#line 968 "lco.m"
                  else
#line 967 "lco.m"
                    {
#line 967 "lco.m"
                      transform_hlds__lco__UpdatedArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
#line 967 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
#line 967 "lco.m"
                    }
#line 972 "lco.m"
                  {
#line 972 "lco.m"
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__V_61_61, transform_hlds__lco__Args_38, transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53);
                  }
#line 974 "lco.m"
                  {
#line 974 "lco.m"
                    MR_Word base;
#line 974 "lco.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "lco.m"
                    *transform_hlds__lco__HeadVar__6_6 = base;
#line 974 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedArg_43));
#line 974 "lco.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53));
#line 974 "lco.m"
                  }
#line 965 "lco.m"
                }
#line 964 "lco.m"
                break;
#line 964 "lco.m"
              case (MR_Integer) 2:
#line 976 "lco.m"
                {
#line 977 "lco.m"
                  {
#line 977 "lco.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "top_unused");
#line 977 "lco.m"
                    return;
                  }
#line 976 "lco.m"
                }
#line 964 "lco.m"
                break;
#line 964 "lco.m"
            }
#line 956 "lco.m"
          }
#line 948 "lco.m"
      }
#line 948 "lco.m"
  }
#line 945 "lco.m"
}

#line 866 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
#line 866 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 866 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 866 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_2,
#line 866 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_3,
#line 866 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_4,
#line 866 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_5,
#line 866 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_6)
#line 866 "lco.m"
{
#line 866 "lco.m"
  {
#line 866 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__conv2_Goal_12;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60;
#line 866 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Info_62;

#line 866 "lco.m"
    {
#line 866 "lco.m"
      transform_hlds__lco__update_construct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_12, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60, ((MR_Word) transform_hlds__lco__wrapper_arg_5), &transform_hlds__lco__conv0_STATE_VARIABLE_Info_62);
    }
#line 866 "lco.m"
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_12));
#line 866 "lco.m"
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60));
#line 866 "lco.m"
    *transform_hlds__lco__wrapper_arg_6 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Info_62));
#line 866 "lco.m"
  }
#line 866 "lco.m"
}

#line 864 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
#line 864 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 864 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 864 "lco.m"
{
#line 864 "lco.m"
  {
#line 864 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 864 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 864 "lco.m"
    {
#line 864 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__occurs_once_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 864 "lco.m"
    return transform_hlds__lco__succeeded;
#line 864 "lco.m"
  }
#line 864 "lco.m"
}

#line 824 "lco.m"
static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
#line 824 "lco.m"
  MR_Word transform_hlds__lco__CallGoal_9,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__CallOutArgs_10,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__UnifyGoals_11,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__UnifyInputVars_12,
#line 824 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_13,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_57,
#line 824 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_58,
#line 824 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_15)
#line 824 "lco.m"
{
#line 829 "lco.m"
  {
#line 829 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 829 "lco.m"
    MR_Word transform_hlds__lco__CallGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 0)));
#line 829 "lco.m"
    MR_Word transform_hlds__lco__CallGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 1)));
#line 829 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 0)));
#line 829 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 829 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_20;
#line 831 "lco.m"
    MR_Word transform_hlds__lco__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 1)));
#line 831 "lco.m"
    MR_Word transform_hlds__lco__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 2)));
#line 831 "lco.m"
    MR_Word transform_hlds__lco__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 3)));
#line 831 "lco.m"
    MR_Word transform_hlds__lco__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 4)));
#line 831 "lco.m"
    MR_Word transform_hlds__lco__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 5)));
#line 832 "lco.m"
    MR_Word transform_hlds__lco__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 832 "lco.m"
    MR_Word transform_hlds__lco__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 832 "lco.m"
    MR_Word transform_hlds__lco__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 832 "lco.m"
    MR_Word transform_hlds__lco__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 832 "lco.m"
    MR_Word transform_hlds__lco__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 832 "lco.m"
    MR_Word transform_hlds__lco__V_123_123 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 832 "lco.m"
    MR_Word transform_hlds__lco__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 832 "lco.m"
    MR_Word transform_hlds__lco__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 939 "lco.m"
    MR_Word transform_hlds__lco__PredId_21;
#line 939 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_22;
#line 939 "lco.m"
    MR_Word transform_hlds__lco__Args_23;
#line 939 "lco.m"
    MR_Word transform_hlds__lco__Builtin_24;
#line 939 "lco.m"
    MR_Word transform_hlds__lco__UnifyContext_25;
#line 939 "lco.m"
    MR_Word transform_hlds__lco__UpdatedCallOutArgs_30;
#line 939 "lco.m"
    MR_Word transform_hlds__lco__UpdatedUnifyGoals_36;
#line 939 "lco.m"
    MR_Word transform_hlds__lco__VariantPredProcId_41;
#line 939 "lco.m"
    MR_Word transform_hlds__lco__VariantSymName_42;
#line 939 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_103_103;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_153_153;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_158_158;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_166_166;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_167_167;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_168_168;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_169_169;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__SymName_26;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__CurrProcOutArgs_27;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__CallHeadPairs_28;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__Mismatches_29;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__Subst_31;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__MismatchedCallArgs_35;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__AddrFieldIds_37;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_39;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__VariantArgs_40;
#line 836 "lco.m"
    MR_Integer transform_hlds__lco__V_59_59;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__V_60_60;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_61_61;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__V_82_82;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__V_83_83;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__V_84_84;
#line 836 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_85_85;
#line 837 "lco.m"
    MR_Word transform_hlds__lco__V_126_126;
#line 837 "lco.m"
    MR_Word transform_hlds__lco__V_127_127;
#line 837 "lco.m"
    MR_Word transform_hlds__lco__V_128_128;
#line 837 "lco.m"
    MR_Word transform_hlds__lco__V_129_129;
#line 837 "lco.m"
    MR_Word transform_hlds__lco__V_130_130;
#line 837 "lco.m"
    MR_Word transform_hlds__lco__V_131_131;
#line 837 "lco.m"
    MR_Word transform_hlds__lco__V_132_132;
#line 837 "lco.m"
    MR_Word transform_hlds__lco__V_133_133;
#line 860 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 860 "lco.m"
    MR_Word transform_hlds__lco__V_34_34;
#line 866 "lco.m"
    MR_Box transform_hlds__lco__conv4_AddrFieldIds_37;
#line 866 "lco.m"
    MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__V_139_139;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__V_140_140;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__V_141_141;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__V_142_142;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__V_143_143;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__V_144_144;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__V_145_145;
#line 882 "lco.m"
    MR_Word transform_hlds__lco__V_146_146;

#line 833 "lco.m"
    {
#line 833 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_19, &transform_hlds__lco__VarTypes_20);
    }
#line 835 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CallGoalExpr_16)) == (MR_mktag((MR_Integer) 2)));
#line 835 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 835 "lco.m"
      {
#line 835 "lco.m"
        transform_hlds__lco__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 0)));
#line 835 "lco.m"
        transform_hlds__lco__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 1)));
#line 835 "lco.m"
        transform_hlds__lco__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 2)));
#line 835 "lco.m"
        transform_hlds__lco__Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 3)));
#line 835 "lco.m"
        transform_hlds__lco__UnifyContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 4)));
#line 835 "lco.m"
        transform_hlds__lco__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 5)));
#line 837 "lco.m"
        transform_hlds__lco__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 837 "lco.m"
        transform_hlds__lco__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 837 "lco.m"
        transform_hlds__lco__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 837 "lco.m"
        transform_hlds__lco__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 837 "lco.m"
        transform_hlds__lco__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 837 "lco.m"
        transform_hlds__lco__CurrProcOutArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 837 "lco.m"
        transform_hlds__lco__V_131_131 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 837 "lco.m"
        transform_hlds__lco__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 837 "lco.m"
        transform_hlds__lco__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 11598 "transform_hlds.lco.c"
        transform_hlds__lco__TypeInfo_153_153 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 838 "lco.m"
        {
#line 838 "lco.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__CallOutArgs_10, transform_hlds__lco__CurrProcOutArgs_27, &transform_hlds__lco__CallHeadPairs_28);
        }
#line 841 "lco.m"
        transform_hlds__lco__V_59_59 = (MR_Integer) 1;
#line 841 "lco.m"
        {
#line 841 "lco.m"
          transform_hlds__lco__V_60_60 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeInfo_153_153);
        }
#line 840 "lco.m"
        {
#line 840 "lco.m"
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__ConstInfo_15, transform_hlds__lco__UnifyInputVars_12, transform_hlds__lco__CallHeadPairs_28, transform_hlds__lco__V_59_59, &transform_hlds__lco__Mismatches_29, &transform_hlds__lco__UpdatedCallOutArgs_30, transform_hlds__lco__V_60_60, &transform_hlds__lco__Subst_31, transform_hlds__lco__STATE_VARIABLE_Info_0_57, &transform_hlds__lco__STATE_VARIABLE_Info_61_61);
        }
#line 860 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Mismatches_29)) == (MR_mktag((MR_Integer) 1)));
#line 860 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 860 "lco.m"
          {
#line 860 "lco.m"
            transform_hlds__lco__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 0)));
#line 860 "lco.m"
            transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 1)));
#line 11627 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 861 "lco.m"
            {
#line 861 "lco.m"
              mercury__assoc_list__values_2_p_0(transform_hlds__lco__TypeCtorInfo_158_158, transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 864 "lco.m"
            {
#line 864 "lco.m"
              transform_hlds__lco__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 864 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_82_82, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[2]));
#line 864 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_82_82, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_1));
#line 864 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 864 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_82_82, 3) = ((MR_Box) (transform_hlds__lco__UnifyInputVars_12));
#line 864 "lco.m"
            }
#line 864 "lco.m"
            {
#line 864 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__V_82_82, transform_hlds__lco__MismatchedCallArgs_35);
            }
#line 836 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 836 "lco.m"
              {
#line 11657 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_166_166 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0;
#line 866 "lco.m"
                {
#line 866 "lco.m"
                  transform_hlds__lco__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 866 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[0]));
#line 866 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_2));
#line 866 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 866 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 3) = ((MR_Box) (transform_hlds__lco__ConstInfo_15));
#line 866 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_83_83, 4) = ((MR_Box) (transform_hlds__lco__Subst_31));
#line 866 "lco.m"
                }
#line 867 "lco.m"
                {
#line 867 "lco.m"
                  transform_hlds__lco__V_84_84 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeCtorInfo_166_166);
                }
#line 11680 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_167_167 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 11682 "transform_hlds.lco.c"
                transform_hlds__lco__TypeInfo_168_168 = (MR_Word) &transform_hlds__lco_scalar_common_2[5];
#line 11684 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_169_169 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 866 "lco.m"
                {
#line 866 "lco.m"
                  mercury__list__map_foldl2_7_p_0(transform_hlds__lco__TypeCtorInfo_167_167, transform_hlds__lco__TypeCtorInfo_167_167, transform_hlds__lco__TypeInfo_168_168, transform_hlds__lco__TypeCtorInfo_169_169, transform_hlds__lco__V_83_83, transform_hlds__lco__UnifyGoals_11, &transform_hlds__lco__UpdatedUnifyGoals_36, ((MR_Box) (transform_hlds__lco__V_84_84)), &transform_hlds__lco__conv4_AddrFieldIds_37, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_61_61)), &transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85);
                }
#line 866 "lco.m"
                transform_hlds__lco__AddrFieldIds_37 = ((MR_Word) transform_hlds__lco__conv4_AddrFieldIds_37);
#line 866 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_85_85 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85);
#line 882 "lco.m"
                transform_hlds__lco__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
#line 882 "lco.m"
                transform_hlds__lco__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
#line 882 "lco.m"
                transform_hlds__lco__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
#line 882 "lco.m"
                transform_hlds__lco__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
#line 882 "lco.m"
                transform_hlds__lco__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
#line 882 "lco.m"
                transform_hlds__lco__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
#line 882 "lco.m"
                transform_hlds__lco__V_145_145 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 882 "lco.m"
                transform_hlds__lco__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 882 "lco.m"
                transform_hlds__lco__HighLevelData_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 883 "lco.m"
                {
#line 883 "lco.m"
                  transform_hlds__lco__make_variant_args_4_p_0(transform_hlds__lco__HighLevelData_39, transform_hlds__lco__AddrFieldIds_37, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__VariantArgs_40);
                }
#line 885 "lco.m"
                {
#line 885 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__ensure_variant_exists_8_p_0(transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, transform_hlds__lco__VariantArgs_40, &transform_hlds__lco__VariantPredProcId_41, transform_hlds__lco__SymName_26, &transform_hlds__lco__VariantSymName_42, transform_hlds__lco__STATE_VARIABLE_Info_85_85, &transform_hlds__lco__STATE_VARIABLE_Info_103_103);
                }
#line 836 "lco.m"
              }
#line 860 "lco.m"
          }
#line 835 "lco.m"
      }
#line 939 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 888 "lco.m"
      {
#line 888 "lco.m"
        MR_Word transform_hlds__lco__CalleeProcInfo_43;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__CalleeModes_44;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__UpdatedArgs_45;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__VariantPredId_46;
#line 888 "lco.m"
        MR_Integer transform_hlds__lco__VariantProcId_47;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoalExpr_48;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__OrigCallPurity_49;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoalInfo_50;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__UpdatedGoal_51;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__Goals_52;
#line 888 "lco.m"
        MR_Word transform_hlds__lco__V_105_105;
#line 938 "lco.m"
        MR_Word transform_hlds__lco__V_147_147;
#line 938 "lco.m"
        MR_Word transform_hlds__lco__V_148_148;
#line 938 "lco.m"
        MR_Word transform_hlds__lco__V_149_149;
#line 938 "lco.m"
        MR_Word transform_hlds__lco__V_150_150;
#line 938 "lco.m"
        MR_Word transform_hlds__lco__V_151_151;
#line 938 "lco.m"
        MR_Word transform_hlds__lco__V_152_152;

#line 888 "lco.m"
        {
#line 888 "lco.m"
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, &transform_hlds__lco__CalleeProcInfo_43);
        }
#line 889 "lco.m"
        {
#line 889 "lco.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_43, &transform_hlds__lco__CalleeModes_44);
        }
#line 890 "lco.m"
        {
#line 890 "lco.m"
          transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__VarTypes_20, transform_hlds__lco__CalleeModes_44, transform_hlds__lco__Args_23, transform_hlds__lco__UpdatedCallOutArgs_30, &transform_hlds__lco__UpdatedArgs_45);
        }
#line 892 "lco.m"
        transform_hlds__lco__VariantPredId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 0)));
#line 892 "lco.m"
        transform_hlds__lco__VariantProcId_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 1)));
#line 893 "lco.m"
        {
#line 893 "lco.m"
          transform_hlds__lco__UpdatedGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 893 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_46));
#line 893 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_47));
#line 893 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgs_45));
#line 893 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 3) = ((MR_Box) (transform_hlds__lco__Builtin_24));
#line 893 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_25));
#line 893 "lco.m"
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_42));
#line 893 "lco.m"
        }
#line 895 "lco.m"
        {
#line 895 "lco.m"
          transform_hlds__lco__OrigCallPurity_49 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__lco__CallGoalInfo_17);
        }
#line 904 "lco.m"
        {
#line 904 "lco.m"
          hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__CallGoalInfo_17, &transform_hlds__lco__UpdatedGoalInfo_50);
        }
#line 905 "lco.m"
        {
#line 905 "lco.m"
          transform_hlds__lco__UpdatedGoal_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 905 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_51, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoalExpr_48));
#line 905 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_51, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
#line 905 "lco.m"
        }
#line 906 "lco.m"
        {
#line 906 "lco.m"
          transform_hlds__lco__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_105_105, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoal_51));
#line 906 "lco.m"
          MR_hl_field(MR_mktag(1), transform_hlds__lco__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "lco.m"
        }
#line 906 "lco.m"
        {
#line 906 "lco.m"
          transform_hlds__lco__Goals_52 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__UpdatedUnifyGoals_36, transform_hlds__lco__V_105_105);
        }
#line 907 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__OrigCallPurity_49 == (MR_Integer) 2);
#line 910 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 909 "lco.m"
          {
#line 909 "lco.m"
            MR_Word base;
#line 909 "lco.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 909 "lco.m"
            *transform_hlds__lco__MaybeGoals_13 = base;
#line 909 "lco.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_52));
#line 909 "lco.m"
          }
#line 910 "lco.m"
        else
#line 932 "lco.m"
          {
#line 932 "lco.m"
            MR_Word transform_hlds__lco__ConjGoalExpr_53;
#line 932 "lco.m"
            MR_Word transform_hlds__lco__ConjGoal_54;
#line 932 "lco.m"
            MR_Word transform_hlds__lco__PromiseGoalExpr_55;
#line 932 "lco.m"
            MR_Word transform_hlds__lco__PromiseGoal_56;
#line 932 "lco.m"
            MR_Word transform_hlds__lco__V_108_108;
#line 932 "lco.m"
            MR_Word transform_hlds__lco__V_109_109;

#line 932 "lco.m"
            {
#line 932 "lco.m"
              transform_hlds__lco__ConjGoalExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 932 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 932 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 1) = ((MR_Box) ((MR_Integer) 0));
#line 932 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 2) = ((MR_Box) (transform_hlds__lco__Goals_52));
#line 932 "lco.m"
            }
#line 933 "lco.m"
            {
#line 933 "lco.m"
              transform_hlds__lco__ConjGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 933 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConjGoal_54, 0) = ((MR_Box) (transform_hlds__lco__ConjGoalExpr_53));
#line 933 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConjGoal_54, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
#line 933 "lco.m"
            }
#line 934 "lco.m"
            {
#line 934 "lco.m"
              transform_hlds__lco__V_108_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 934 "lco.m"
              MR_hl_field(MR_mktag(2), transform_hlds__lco__V_108_108, 0) = ((MR_Box) (transform_hlds__lco__OrigCallPurity_49));
#line 934 "lco.m"
            }
#line 934 "lco.m"
            {
#line 934 "lco.m"
              transform_hlds__lco__PromiseGoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 934 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 934 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 1) = ((MR_Box) (transform_hlds__lco__V_108_108));
#line 934 "lco.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 2) = ((MR_Box) (transform_hlds__lco__ConjGoal_54));
#line 934 "lco.m"
            }
#line 935 "lco.m"
            {
#line 935 "lco.m"
              transform_hlds__lco__PromiseGoal_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__PromiseGoal_56, 0) = ((MR_Box) (transform_hlds__lco__PromiseGoalExpr_55));
#line 935 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__PromiseGoal_56, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
#line 935 "lco.m"
            }
#line 936 "lco.m"
            {
#line 936 "lco.m"
              transform_hlds__lco__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_109_109, 0) = ((MR_Box) (transform_hlds__lco__PromiseGoal_56));
#line 936 "lco.m"
              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "lco.m"
            }
#line 936 "lco.m"
            {
#line 936 "lco.m"
              MR_Word base;
#line 936 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "lco.m"
              *transform_hlds__lco__MaybeGoals_13 = base;
#line 936 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__V_109_109));
#line 936 "lco.m"
            }
#line 932 "lco.m"
          }
#line 938 "lco.m"
        transform_hlds__lco__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 0)));
#line 938 "lco.m"
        transform_hlds__lco__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 1)));
#line 938 "lco.m"
        transform_hlds__lco__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 2)));
#line 938 "lco.m"
        transform_hlds__lco__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 3)));
#line 938 "lco.m"
        transform_hlds__lco__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 4)));
#line 938 "lco.m"
        transform_hlds__lco__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 5)));
#line 938 "lco.m"
        {
#line 938 "lco.m"
          MR_Word base;
#line 938 "lco.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 938 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_58 = base;
#line 938 "lco.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_147_147));
#line 938 "lco.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_148_148));
#line 938 "lco.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_149_149));
#line 938 "lco.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_150_150));
#line 938 "lco.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__V_151_151));
#line 938 "lco.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 938 "lco.m"
        }
#line 888 "lco.m"
      }
#line 939 "lco.m"
    else
#line 942 "lco.m"
      {
#line 942 "lco.m"
        *transform_hlds__lco__MaybeGoals_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 942 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_58 = transform_hlds__lco__STATE_VARIABLE_Info_0_57;
#line 942 "lco.m"
      }
#line 829 "lco.m"
  }
#line 824 "lco.m"
}

#line 788 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
#line 788 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 788 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1)
#line 788 "lco.m"
{
#line 788 "lco.m"
  {
#line 788 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 788 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

#line 788 "lco.m"
    {
#line 788 "lco.m"
      return transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_mode_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
#line 788 "lco.m"
    return transform_hlds__lco__succeeded;
#line 788 "lco.m"
  }
#line 788 "lco.m"
}

#line 774 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
#line 774 "lco.m"
  MR_Word transform_hlds__lco__Goal_6,
#line 774 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
#line 774 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
#line 774 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
#line 774 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33)
#line 774 "lco.m"
{
#line 777 "lco.m"
  {
#line 777 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_66_66;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_71_71;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 0)));
#line 777 "lco.m"
    MR_Word transform_hlds__lco__Unification_14;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__ConstructedVar_16;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__ConsId_17;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__ConstructArgs_18;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__ArgUniModes_19;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__SubInfo_22;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_24;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__ConsTag_25;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__V_35_35;
#line 777 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53;
#line 778 "lco.m"
    MR_Word transform_hlds__lco___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 1)));
#line 779 "lco.m"
    MR_Word transform_hlds__lco__V_11_11;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__V_12_12;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__V_13_13;
#line 779 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 780 "lco.m"
    MR_Word transform_hlds__lco__V_20_20;
#line 780 "lco.m"
    MR_Word transform_hlds__lco__V_21_21;
#line 787 "lco.m"
    MR_Word transform_hlds__lco__V_60_60;
#line 787 "lco.m"
    MR_Word transform_hlds__lco__V_61_61;
#line 787 "lco.m"
    MR_Word transform_hlds__lco__V_62_62;
#line 787 "lco.m"
    MR_Word transform_hlds__lco__V_63_63;
#line 787 "lco.m"
    MR_Word transform_hlds__lco__V_64_64;

#line 779 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 1)));
#line 779 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 779 "lco.m"
      {
#line 779 "lco.m"
        transform_hlds__lco__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
#line 779 "lco.m"
        transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
#line 779 "lco.m"
        transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
#line 779 "lco.m"
        transform_hlds__lco__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
#line 779 "lco.m"
        transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
#line 780 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification_14)) == (MR_mktag((MR_Integer) 0)));
#line 780 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 780 "lco.m"
          {
#line 780 "lco.m"
            transform_hlds__lco__ConstructedVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 0)));
#line 780 "lco.m"
            transform_hlds__lco__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 1)));
#line 780 "lco.m"
            transform_hlds__lco__ConstructArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 2)));
#line 780 "lco.m"
            transform_hlds__lco__ArgUniModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 3)));
#line 780 "lco.m"
            transform_hlds__lco__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 4)));
#line 780 "lco.m"
            transform_hlds__lco__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 5)));
#line 780 "lco.m"
            transform_hlds__lco__SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 6)));
#line 784 "lco.m"
            if ((transform_hlds__lco__SubInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 784 "lco.m"
            else
#line 785 "lco.m"
              {
#line 785 "lco.m"
                MR_Word transform_hlds__lco__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 0)));
#line 785 "lco.m"
                MR_Word transform_hlds__lco__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 1)));

#line 785 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "lco.m"
              }
#line 777 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 777 "lco.m"
              {
#line 787 "lco.m"
                transform_hlds__lco__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 0)));
#line 787 "lco.m"
                transform_hlds__lco__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 1)));
#line 787 "lco.m"
                transform_hlds__lco__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 2)));
#line 787 "lco.m"
                transform_hlds__lco__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 3)));
#line 787 "lco.m"
                transform_hlds__lco__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)));
#line 787 "lco.m"
                transform_hlds__lco__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 5)));
#line 12167 "transform_hlds.lco.c"
                transform_hlds__lco__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0;
#line 788 "lco.m"
                {
#line 788 "lco.m"
                  transform_hlds__lco__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 788 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[1]));
#line 788 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 1) = ((MR_Box) (transform_hlds__lco__acceptable_construct_unification_5_p_0_1));
#line 788 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 788 "lco.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__V_35_35, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_24));
#line 788 "lco.m"
                }
#line 788 "lco.m"
                {
#line 788 "lco.m"
                  transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeCtorInfo_66_66, transform_hlds__lco__V_35_35, transform_hlds__lco__ArgUniModes_19);
                }
#line 777 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 777 "lco.m"
                  {
#line 789 "lco.m"
                    {
#line 789 "lco.m"
                      transform_hlds__lco__ConsTag_25 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(transform_hlds__lco__ModuleInfo_24, transform_hlds__lco__ConsId_17);
                    }
#line 795 "lco.m"
#line 795 "lco.m"
                    switch (MR_tag((MR_Word) transform_hlds__lco__ConsTag_25)) {
#line 795 "lco.m"
                      default:
#line 795 "lco.m"
                        transform_hlds__lco__succeeded = MR_FALSE;
#line 795 "lco.m"
                        break;
#line 795 "lco.m"
                      case (MR_Integer) 0:
#line 795 "lco.m"
#line 795 "lco.m"
                        switch (MR_unmkbody(transform_hlds__lco__ConsTag_25)) {
#line 795 "lco.m"
                          default:
#line 795 "lco.m"
                            transform_hlds__lco__succeeded = MR_FALSE;
#line 795 "lco.m"
                            break;
#line 795 "lco.m"
                          case (MR_Integer) 0:
#line 794 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 795 "lco.m"
                            break;
#line 795 "lco.m"
                        }
#line 795 "lco.m"
                        break;
#line 795 "lco.m"
                      case (MR_Integer) 3:
#line 795 "lco.m"
#line 795 "lco.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__ConsTag_25, (MR_Integer) 0)))) {
#line 795 "lco.m"
                          default:
#line 795 "lco.m"
                            transform_hlds__lco__succeeded = MR_FALSE;
#line 795 "lco.m"
                            break;
#line 795 "lco.m"
                          case (MR_Integer) 11:
#line 796 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 795 "lco.m"
                            break;
#line 795 "lco.m"
                          case (MR_Integer) 13:
#line 798 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 795 "lco.m"
                            break;
#line 795 "lco.m"
                        }
#line 795 "lco.m"
                        break;
#line 795 "lco.m"
                    }
#line 777 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 777 "lco.m"
                      {
#line 12260 "transform_hlds.lco.c"
                        transform_hlds__lco__TypeInfo_71_71 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 815 "lco.m"
                        {
#line 815 "lco.m"
                          mercury__bag__delete_3_p_0(transform_hlds__lco__TypeInfo_71_71, ((MR_Box) (transform_hlds__lco__ConstructedVar_16)), transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30, &transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53);
                        }
#line 816 "lco.m"
                        {
#line 816 "lco.m"
                          mercury__bag__insert_list_3_p_0(transform_hlds__lco__TypeInfo_71_71, transform_hlds__lco__ConstructArgs_18, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31);
                        }
#line 777 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_Info_33 = transform_hlds__lco__STATE_VARIABLE_Info_0_32;
#line 777 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 777 "lco.m"
                      }
#line 777 "lco.m"
                  }
#line 777 "lco.m"
              }
#line 780 "lco.m"
          }
#line 779 "lco.m"
      }
#line 777 "lco.m"
    return transform_hlds__lco__succeeded;
#line 777 "lco.m"
  }
#line 774 "lco.m"
}

#line 752 "lco.m"
static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
#line 752 "lco.m"
  MR_Word transform_hlds__lco___Info_10,
#line 752 "lco.m"
  MR_Word transform_hlds__lco___ConstInfo_11,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__Goal_12,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
#line 752 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
#line 752 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
#line 752 "lco.m"
{
#line 758 "lco.m"
  {
#line 758 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 758 "lco.m"
    {
#line 758 "lco.m"
      transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(transform_hlds__lco__Goal_12, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
#line 758 "lco.m"
      return;
    }
#line 758 "lco.m"
  }
#line 752 "lco.m"
}

#line 717 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
#line 717 "lco.m"
  MR_Word transform_hlds__lco__Goal_2)
#line 717 "lco.m"
{
#line 719 "lco.m"
  while (MR_TRUE)
#line 719 "lco.m"
    {
#line 719 "lco.m"
      /* tailcall optimized into a loop */
#line 719 "lco.m"
      {
#line 719 "lco.m"
        MR_bool transform_hlds__lco__succeeded;
#line 719 "lco.m"
        MR_Word transform_hlds__lco__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 0)));
#line 719 "lco.m"
        MR_Word transform_hlds__lco__GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 1)));
#line 719 "lco.m"
        MR_Word transform_hlds__lco__V_44_44;

#line 721 "lco.m"
        {
#line 721 "lco.m"
          transform_hlds__lco__V_44_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_4);
        }
#line 721 "lco.m"
        transform_hlds__lco__succeeded = (transform_hlds__lco__V_44_44 == (MR_Integer) 0);
#line 719 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 725 "lco.m"
#line 725 "lco.m"
          switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) {
#line 725 "lco.m"
            default:
#line 725 "lco.m"
              transform_hlds__lco__succeeded = MR_FALSE;
#line 725 "lco.m"
              break;
#line 725 "lco.m"
            case (MR_Integer) 1:
#line 724 "lco.m"
              transform_hlds__lco__succeeded = MR_TRUE;
#line 725 "lco.m"
              break;
#line 725 "lco.m"
            case (MR_Integer) 3:
#line 725 "lco.m"
#line 725 "lco.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 0)))) {
#line 725 "lco.m"
                default:
#line 725 "lco.m"
                  transform_hlds__lco__succeeded = MR_FALSE;
#line 725 "lco.m"
                  break;
#line 725 "lco.m"
                case (MR_Integer) 5:
#line 726 "lco.m"
                  {
#line 726 "lco.m"
                    MR_Word transform_hlds__lco__Reason_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 1)));
#line 726 "lco.m"
                    MR_Word transform_hlds__lco__SubGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 2)));
#line 727 "lco.m"
                    MR_Word transform_hlds__lco__V_12_12;
#line 727 "lco.m"
                    MR_Word transform_hlds__lco__V_13_13;

#line 727 "lco.m"
                    transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 727 "lco.m"
                    if (transform_hlds__lco__succeeded)
#line 727 "lco.m"
                      {
#line 727 "lco.m"
                        transform_hlds__lco__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 1)));
#line 727 "lco.m"
                        transform_hlds__lco__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 2)));
#line 728 "lco.m"
                        transform_hlds__lco__succeeded = MR_TRUE;
#line 727 "lco.m"
                      }
#line 727 "lco.m"
                    else
#line 730 "lco.m"
                      {
#line 730 "lco.m"
                        /* direct tailcall eliminated */
#line 730 "lco.m"
                        {
#line 730 "lco.m"
                          MR_Word transform_hlds__lco__Goal__tmp_copy_2 = transform_hlds__lco__SubGoal_11;

#line 730 "lco.m"
                          transform_hlds__lco__Goal_2 = transform_hlds__lco__Goal__tmp_copy_2;
#line 730 "lco.m"
                        }
#line 730 "lco.m"
                        continue;
#line 730 "lco.m"
                      }
#line 726 "lco.m"
                  }
#line 725 "lco.m"
                  break;
#line 725 "lco.m"
                case (MR_Integer) 7:
#line 744 "lco.m"
                  {
#line 745 "lco.m"
                    {
#line 745 "lco.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.potentially_moveable_goal\'/1", (MR_String) "shorthand");
                    }
#line 744 "lco.m"
                    transform_hlds__lco__succeeded = MR_TRUE;
#line 744 "lco.m"
                  }
#line 725 "lco.m"
                  break;
#line 725 "lco.m"
              }
#line 725 "lco.m"
              break;
#line 725 "lco.m"
          }
#line 719 "lco.m"
        return transform_hlds__lco__succeeded;
#line 719 "lco.m"
      }
#line 719 "lco.m"
      break;
#line 719 "lco.m"
    }
#line 717 "lco.m"
}

#line 679 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(
#line 679 "lco.m"
  MR_Word transform_hlds__lco__Info_5,
#line 679 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_6,
#line 679 "lco.m"
  MR_Word transform_hlds__lco__Goal_7,
#line 679 "lco.m"
  MR_Word * transform_hlds__lco__OutArgs_8)
#line 679 "lco.m"
{
#line 682 "lco.m"
  {
#line 682 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_73_73;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_75_75;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_7, (MR_Integer) 0)));
#line 682 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_7, (MR_Integer) 1)));
#line 682 "lco.m"
    MR_Word transform_hlds__lco__PredId_11;
#line 682 "lco.m"
    MR_Integer transform_hlds__lco__ProcId_12;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__Args_13;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__ModuleInfo_17;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__ProcInfo_18;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_19;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__CalleeProcInfo_20;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__CalleeArgModes_21;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__UnusedArgs_23;
#line 682 "lco.m"
    MR_Integer transform_hlds__lco__NumOutArgs_25;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__CurrProcOutArgs_26;
#line 682 "lco.m"
    MR_Integer transform_hlds__lco__NumCurrProcOutArgs_27;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__V_28_28;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__V_29_29;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__V_30_30;
#line 682 "lco.m"
    MR_Word transform_hlds__lco__V_76_76;
#line 684 "lco.m"
    MR_Word transform_hlds__lco___Builtin_14;
#line 684 "lco.m"
    MR_Word transform_hlds__lco___UnifyContext_15;
#line 684 "lco.m"
    MR_Word transform_hlds__lco___SymName_16;
#line 686 "lco.m"
    MR_Word transform_hlds__lco__V_36_36;
#line 686 "lco.m"
    MR_Word transform_hlds__lco__V_37_37;
#line 686 "lco.m"
    MR_Word transform_hlds__lco__V_38_38;
#line 686 "lco.m"
    MR_Word transform_hlds__lco__V_39_39;
#line 686 "lco.m"
    MR_Word transform_hlds__lco__V_40_40;
#line 686 "lco.m"
    MR_Word transform_hlds__lco__V_41_41;
#line 686 "lco.m"
    MR_Word transform_hlds__lco__V_42_42;
#line 686 "lco.m"
    MR_Word transform_hlds__lco__V_43_43;
#line 687 "lco.m"
    MR_Word transform_hlds__lco__V_44_44;
#line 687 "lco.m"
    MR_Word transform_hlds__lco__V_45_45;
#line 687 "lco.m"
    MR_Word transform_hlds__lco__V_46_46;
#line 687 "lco.m"
    MR_Word transform_hlds__lco__V_47_47;
#line 687 "lco.m"
    MR_Word transform_hlds__lco__V_49_49;
#line 687 "lco.m"
    MR_Word transform_hlds__lco__V_50_50;
#line 687 "lco.m"
    MR_Word transform_hlds__lco__V_51_51;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_52_52;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_53_53;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_54_54;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_55_55;
#line 689 "lco.m"
    MR_Word transform_hlds__lco__V_56_56;
#line 695 "lco.m"
    MR_Word transform_hlds__lco___InArgs_22;
#line 705 "lco.m"
    MR_Word transform_hlds__lco__V_65_65;
#line 705 "lco.m"
    MR_Word transform_hlds__lco__V_66_66;
#line 705 "lco.m"
    MR_Word transform_hlds__lco__V_67_67;
#line 705 "lco.m"
    MR_Word transform_hlds__lco__V_68_68;
#line 705 "lco.m"
    MR_Word transform_hlds__lco__V_69_69;
#line 705 "lco.m"
    MR_Word transform_hlds__lco__V_70_70;
#line 705 "lco.m"
    MR_Word transform_hlds__lco__V_71_71;
#line 705 "lco.m"
    MR_Word transform_hlds__lco__V_72_72;

#line 684 "lco.m"
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 2)));
#line 684 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 684 "lco.m"
      {
#line 684 "lco.m"
        transform_hlds__lco__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
#line 684 "lco.m"
        transform_hlds__lco__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
#line 684 "lco.m"
        transform_hlds__lco__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
#line 684 "lco.m"
        transform_hlds__lco___Builtin_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
#line 684 "lco.m"
        transform_hlds__lco___UnifyContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
#line 684 "lco.m"
        transform_hlds__lco___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 5)));
#line 686 "lco.m"
        transform_hlds__lco__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 686 "lco.m"
        transform_hlds__lco__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 686 "lco.m"
        transform_hlds__lco__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 686 "lco.m"
        transform_hlds__lco__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 686 "lco.m"
        transform_hlds__lco__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 686 "lco.m"
        transform_hlds__lco__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 686 "lco.m"
        transform_hlds__lco__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 686 "lco.m"
        transform_hlds__lco__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 686 "lco.m"
        transform_hlds__lco__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 12632 "transform_hlds.lco.c"
        transform_hlds__lco__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 686 "lco.m"
        {
#line 686 "lco.m"
          transform_hlds__lco__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 0) = ((MR_Box) (transform_hlds__lco__PredId_11));
#line 686 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__V_28_28, 1) = ((MR_Box) (transform_hlds__lco__ProcId_12));
#line 686 "lco.m"
        }
#line 686 "lco.m"
        {
#line 686 "lco.m"
          transform_hlds__lco__succeeded = mercury__set__member_2_p_0(transform_hlds__lco__TypeCtorInfo_73_73, ((MR_Box) (transform_hlds__lco__V_28_28)), transform_hlds__lco__V_29_29);
        }
#line 682 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 682 "lco.m"
          {
#line 687 "lco.m"
            {
#line 687 "lco.m"
              transform_hlds__lco__V_30_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_10);
            }
#line 687 "lco.m"
            transform_hlds__lco__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 687 "lco.m"
            transform_hlds__lco__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 687 "lco.m"
            transform_hlds__lco__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 687 "lco.m"
            transform_hlds__lco__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 687 "lco.m"
            transform_hlds__lco__ProcInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 687 "lco.m"
            transform_hlds__lco__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 687 "lco.m"
            transform_hlds__lco__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 687 "lco.m"
            transform_hlds__lco__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 687 "lco.m"
            transform_hlds__lco__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 687 "lco.m"
            transform_hlds__lco__succeeded = (transform_hlds__lco__V_30_30 == transform_hlds__lco__V_76_76);
#line 682 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 682 "lco.m"
              {
#line 689 "lco.m"
                transform_hlds__lco__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 0)));
#line 689 "lco.m"
                transform_hlds__lco__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 1)));
#line 689 "lco.m"
                transform_hlds__lco__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 2)));
#line 689 "lco.m"
                transform_hlds__lco__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 3)));
#line 689 "lco.m"
                transform_hlds__lco__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 4)));
#line 689 "lco.m"
                transform_hlds__lco__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 5)));
#line 691 "lco.m"
                {
#line 691 "lco.m"
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_18, &transform_hlds__lco__VarTypes_19);
                }
#line 693 "lco.m"
                {
#line 693 "lco.m"
                  hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_17, transform_hlds__lco__PredId_11, transform_hlds__lco__ProcId_12, &transform_hlds__lco__CalleeProcInfo_20);
                }
#line 694 "lco.m"
                {
#line 694 "lco.m"
                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_20, &transform_hlds__lco__CalleeArgModes_21);
                }
#line 695 "lco.m"
                {
#line 695 "lco.m"
                  transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_17, transform_hlds__lco__VarTypes_19, transform_hlds__lco__Args_13, transform_hlds__lco__CalleeArgModes_21, &transform_hlds__lco___InArgs_22, transform_hlds__lco__OutArgs_8, &transform_hlds__lco__UnusedArgs_23);
                }
#line 697 "lco.m"
                transform_hlds__lco__succeeded = (transform_hlds__lco__UnusedArgs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 682 "lco.m"
                  {
#line 12720 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeInfo_75_75 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 704 "lco.m"
                    {
#line 704 "lco.m"
                      mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_75_75, *transform_hlds__lco__OutArgs_8, &transform_hlds__lco__NumOutArgs_25);
                    }
#line 705 "lco.m"
                    transform_hlds__lco__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
#line 705 "lco.m"
                    transform_hlds__lco__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
#line 705 "lco.m"
                    transform_hlds__lco__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
#line 705 "lco.m"
                    transform_hlds__lco__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
#line 705 "lco.m"
                    transform_hlds__lco__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
#line 705 "lco.m"
                    transform_hlds__lco__CurrProcOutArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
#line 705 "lco.m"
                    transform_hlds__lco__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
#line 705 "lco.m"
                    transform_hlds__lco__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 705 "lco.m"
                    transform_hlds__lco__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 706 "lco.m"
                    {
#line 706 "lco.m"
                      mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_75_75, transform_hlds__lco__CurrProcOutArgs_26, &transform_hlds__lco__NumCurrProcOutArgs_27);
                    }
#line 707 "lco.m"
                    transform_hlds__lco__succeeded = (transform_hlds__lco__NumOutArgs_25 == transform_hlds__lco__NumCurrProcOutArgs_27);
#line 682 "lco.m"
                  }
#line 682 "lco.m"
              }
#line 682 "lco.m"
          }
#line 684 "lco.m"
      }
#line 682 "lco.m"
    return transform_hlds__lco__succeeded;
#line 682 "lco.m"
  }
#line 679 "lco.m"
}

#line 649 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
#line 649 "lco.m"
  MR_Word transform_hlds__lco__Info_9,
#line 649 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_10,
#line 649 "lco.m"
  MR_Word transform_hlds__lco__RevGoals0_11,
#line 649 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
#line 649 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
#line 649 "lco.m"
  MR_Word * transform_hlds__lco__RecGoal_13,
#line 649 "lco.m"
  MR_Word * transform_hlds__lco__RecOutArgs_14,
#line 649 "lco.m"
  MR_Word * transform_hlds__lco__RevBeforeGoals_15)
#line 649 "lco.m"
{
#line 12788 "transform_hlds.lco.c"
  while (MR_TRUE)
#line 12790 "transform_hlds.lco.c"
    {
#line 12792 "transform_hlds.lco.c"
      /* tailcall optimized into a loop */
#line 12794 "transform_hlds.lco.c"
      {
#line 12796 "transform_hlds.lco.c"
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__RevGoals0_11)) == (MR_mktag((MR_Integer) 1)));
#line 12798 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoal_16;
#line 12800 "transform_hlds.lco.c"
        MR_Word transform_hlds__lco__RevGoalsTail_17;
#line 668 "lco.m"
        MR_Word transform_hlds__lco__OutArgs_18;

#line 12805 "transform_hlds.lco.c"
        if (transform_hlds__lco__succeeded)
#line 12807 "transform_hlds.lco.c"
          {
#line 12809 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 0)));
#line 12811 "transform_hlds.lco.c"
            transform_hlds__lco__RevGoalsTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 1)));
#line 662 "lco.m"
            {
#line 662 "lco.m"
              transform_hlds__lco__succeeded = transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(transform_hlds__lco__Info_9, transform_hlds__lco__ConstInfo_10, transform_hlds__lco__RevGoal_16, &transform_hlds__lco__OutArgs_18);
            }
#line 668 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 665 "lco.m"
              {
#line 665 "lco.m"
                *transform_hlds__lco__RecGoal_13 = transform_hlds__lco__RevGoal_16;
#line 666 "lco.m"
                *transform_hlds__lco__RecOutArgs_14 = transform_hlds__lco__OutArgs_18;
#line 667 "lco.m"
                *transform_hlds__lco__RevBeforeGoals_15 = transform_hlds__lco__RevGoalsTail_17;
#line 665 "lco.m"
                *transform_hlds__lco__STATE_VARIABLE_AfterGoals_20 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19;
#line 665 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 665 "lco.m"
              }
#line 668 "lco.m"
            else
#line 674 "lco.m"
              {
#line 674 "lco.m"
                MR_Word transform_hlds__lco__TypeCtorInfo_23_23;
#line 674 "lco.m"
                MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 669 "lco.m"
                {
#line 669 "lco.m"
                  transform_hlds__lco__succeeded = transform_hlds__lco__potentially_moveable_goal_1_p_0(transform_hlds__lco__RevGoal_16);
                }
#line 674 "lco.m"
                if (transform_hlds__lco__succeeded)
#line 674 "lco.m"
                  {
#line 12852 "transform_hlds.lco.c"
                    transform_hlds__lco__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 671 "lco.m"
                    {
#line 671 "lco.m"
                      mercury__list__cons_3_p_0(transform_hlds__lco__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__lco__RevGoal_16)), transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19, &transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21);
                    }
#line 672 "lco.m"
                    /* direct tailcall eliminated */
#line 672 "lco.m"
                    {
#line 672 "lco.m"
                      MR_Word transform_hlds__lco__RevGoals0__tmp_copy_11 = transform_hlds__lco__RevGoalsTail_17;
#line 672 "lco.m"
                      MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

#line 672 "lco.m"
                      transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0__tmp_copy_19;
#line 672 "lco.m"
                      transform_hlds__lco__RevGoals0_11 = transform_hlds__lco__RevGoals0__tmp_copy_11;
#line 672 "lco.m"
                    }
#line 672 "lco.m"
                    continue;
#line 674 "lco.m"
                  }
#line 674 "lco.m"
              }
#line 12880 "transform_hlds.lco.c"
          }
#line 12882 "transform_hlds.lco.c"
        return transform_hlds__lco__succeeded;
#line 12884 "transform_hlds.lco.c"
      }
#line 12886 "transform_hlds.lco.c"
      break;
#line 12888 "transform_hlds.lco.c"
    }
#line 649 "lco.m"
}

#line 619 "lco.m"
static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
#line 619 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 619 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 619 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 619 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 619 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 619 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5)
#line 619 "lco.m"
{
#line 619 "lco.m"
  {
#line 619 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 619 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31;
#line 619 "lco.m"
    MR_Word transform_hlds__lco__conv6_STATE_VARIABLE_Info_33;

#line 619 "lco.m"
    {
#line 619 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_unification_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv6_STATE_VARIABLE_Info_33);
    }
#line 619 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 619 "lco.m"
      {
#line 619 "lco.m"
        *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31));
#line 619 "lco.m"
        *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv6_STATE_VARIABLE_Info_33));
#line 619 "lco.m"
        transform_hlds__lco__succeeded = MR_TRUE;
#line 619 "lco.m"
      }
#line 619 "lco.m"
    return transform_hlds__lco__succeeded;
#line 619 "lco.m"
  }
#line 619 "lco.m"
}

#line 615 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
#line 615 "lco.m"
  MR_Box transform_hlds__lco__closure_arg,
#line 615 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_1,
#line 615 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_2,
#line 615 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_3,
#line 615 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_4,
#line 615 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_5,
#line 615 "lco.m"
  MR_Box transform_hlds__lco__wrapper_arg_6,
#line 615 "lco.m"
  MR_Box * transform_hlds__lco__wrapper_arg_7)
#line 615 "lco.m"
{
#line 615 "lco.m"
  {
#line 615 "lco.m"
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
#line 615 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23;
#line 615 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25;
#line 615 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27;

#line 615 "lco.m"
    {
#line 615 "lco.m"
      transform_hlds__lco__partition_dependent_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27);
    }
#line 615 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23));
#line 615 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25));
#line 615 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27));
#line 615 "lco.m"
  }
#line 615 "lco.m"
}

#line 605 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
#line 605 "lco.m"
  MR_Word transform_hlds__lco__Goals0_6,
#line 605 "lco.m"
  MR_Word * transform_hlds__lco__MaybeGoals_7,
#line 605 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
#line 605 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
#line 605 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 605 "lco.m"
{
#line 608 "lco.m"
  {
#line 608 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 608 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 608 "lco.m"
    MR_Word transform_hlds__lco__RevGoals0_10;
#line 635 "lco.m"
    MR_Word transform_hlds__lco__RecGoal_12;
#line 635 "lco.m"
    MR_Word transform_hlds__lco__RecOutArgs_13;
#line 635 "lco.m"
    MR_Word transform_hlds__lco__RevBeforeGoals_14;
#line 635 "lco.m"
    MR_Word transform_hlds__lco__RevAfterDependentGoals_18;
#line 635 "lco.m"
    MR_Word transform_hlds__lco__RevAfterNonDependentGoals_19;
#line 635 "lco.m"
    MR_Word transform_hlds__lco__UnifyInputVars_21;
#line 635 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_34_34;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_48_48;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_49_49;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_55_55;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__TypeInfo_56_56;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_57_57;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__AfterGoals_11;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__DelayForVars0_17;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__V_29_29;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__V_30_30;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__V_31_31;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__V_32_32;
#line 612 "lco.m"
    MR_Word transform_hlds__lco__V_33_33;
#line 613 "lco.m"
    MR_Word transform_hlds__lco__V_15_15;
#line 613 "lco.m"
    MR_Word transform_hlds__lco__V_16_16;
#line 615 "lco.m"
    MR_Word transform_hlds__lco___DelayForVars_20;
#line 615 "lco.m"
    MR_Box transform_hlds__lco__conv5_RevAfterDependentGoals_18;
#line 615 "lco.m"
    MR_Box transform_hlds__lco__conv4_RevAfterNonDependentGoals_19;
#line 615 "lco.m"
    MR_Box transform_hlds__lco__conv3__DelayForVars_20;
#line 619 "lco.m"
    MR_Box transform_hlds__lco__conv9_UnifyInputVars_21;
#line 619 "lco.m"
    MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34;

#line 609 "lco.m"
    {
#line 609 "lco.m"
      mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__Goals0_6, &transform_hlds__lco__RevGoals0_10);
    }
#line 611 "lco.m"
    {
#line 611 "lco.m"
      transform_hlds__lco__succeeded = transform_hlds__lco__divide_rev_conj_8_p_0(transform_hlds__lco__STATE_VARIABLE_Info_0_26, transform_hlds__lco__ConstInfo_9, transform_hlds__lco__RevGoals0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__AfterGoals_11, &transform_hlds__lco__RecGoal_12, &transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__RevBeforeGoals_14);
    }
#line 612 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 612 "lco.m"
      {
#line 613 "lco.m"
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__AfterGoals_11)) == (MR_mktag((MR_Integer) 1)));
#line 613 "lco.m"
        if (transform_hlds__lco__succeeded)
#line 613 "lco.m"
          {
#line 613 "lco.m"
            transform_hlds__lco__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 0)));
#line 613 "lco.m"
            transform_hlds__lco__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 1)));
#line 13097 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 614 "lco.m"
            {
#line 614 "lco.m"
              parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__DelayForVars0_17);
            }
#line 616 "lco.m"
            transform_hlds__lco__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "lco.m"
            transform_hlds__lco__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13108 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_48_48 = (MR_Word) &transform_hlds__lco_scalar_common_1[2];
#line 13110 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_49_49 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
#line 615 "lco.m"
            {
#line 615 "lco.m"
              transform_hlds__lco__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 615 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[0]));
#line 615 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_1));
#line 615 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 615 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26));
#line 615 "lco.m"
              MR_hl_field(MR_mktag(0), transform_hlds__lco__V_29_29, 4) = ((MR_Box) (transform_hlds__lco__ConstInfo_9));
#line 615 "lco.m"
            }
#line 615 "lco.m"
            {
#line 615 "lco.m"
              mercury__list__foldl3_8_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_49_49, transform_hlds__lco__V_29_29, transform_hlds__lco__AfterGoals_11, ((MR_Box) (transform_hlds__lco__V_30_30)), &transform_hlds__lco__conv5_RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_31_31)), &transform_hlds__lco__conv4_RevAfterNonDependentGoals_19, ((MR_Box) (transform_hlds__lco__DelayForVars0_17)), &transform_hlds__lco__conv3__DelayForVars_20);
            }
#line 615 "lco.m"
            transform_hlds__lco__RevAfterDependentGoals_18 = ((MR_Word) transform_hlds__lco__conv5_RevAfterDependentGoals_18);
#line 615 "lco.m"
            transform_hlds__lco__RevAfterNonDependentGoals_19 = ((MR_Word) transform_hlds__lco__conv4_RevAfterNonDependentGoals_19);
#line 615 "lco.m"
            transform_hlds__lco___DelayForVars_20 = ((MR_Word) transform_hlds__lco__conv3__DelayForVars_20);
#line 619 "lco.m"
            transform_hlds__lco__V_32_32 = (MR_Word) &transform_hlds__lco_scalar_common_2[11];
#line 13141 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_55_55 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
#line 620 "lco.m"
            {
#line 620 "lco.m"
              transform_hlds__lco__V_33_33 = mercury__bag__init_0_f_0(transform_hlds__lco__TypeInfo_55_55);
            }
#line 13148 "transform_hlds.lco.c"
            transform_hlds__lco__TypeInfo_56_56 = (MR_Word) &transform_hlds__lco_scalar_common_1[5];
#line 13150 "transform_hlds.lco.c"
            transform_hlds__lco__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
#line 619 "lco.m"
            {
#line 619 "lco.m"
              transform_hlds__lco__succeeded = mercury__list__foldl2_6_p_4(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_56_56, transform_hlds__lco__TypeCtorInfo_57_57, transform_hlds__lco__V_32_32, transform_hlds__lco__RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__V_33_33)), &transform_hlds__lco__conv9_UnifyInputVars_21, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26)), &transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
            }
#line 619 "lco.m"
            if (transform_hlds__lco__succeeded)
#line 619 "lco.m"
              {
#line 619 "lco.m"
                transform_hlds__lco__UnifyInputVars_21 = ((MR_Word) transform_hlds__lco__conv9_UnifyInputVars_21);
#line 619 "lco.m"
                transform_hlds__lco__STATE_VARIABLE_Info_34_34 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
#line 619 "lco.m"
                transform_hlds__lco__succeeded = MR_TRUE;
#line 619 "lco.m"
              }
#line 613 "lco.m"
          }
#line 612 "lco.m"
      }
#line 635 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 622 "lco.m"
      {
#line 622 "lco.m"
        MR_Word transform_hlds__lco__UnifyGoals_22;
#line 622 "lco.m"
        MR_Word transform_hlds__lco__MaybeGoals1_23;

#line 622 "lco.m"
        {
#line 622 "lco.m"
          mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterDependentGoals_18, &transform_hlds__lco__UnifyGoals_22);
        }
#line 623 "lco.m"
        {
#line 623 "lco.m"
          transform_hlds__lco__transform_call_and_unifies_8_p_0(transform_hlds__lco__RecGoal_12, transform_hlds__lco__RecOutArgs_13, transform_hlds__lco__UnifyGoals_22, transform_hlds__lco__UnifyInputVars_21, &transform_hlds__lco__MaybeGoals1_23, transform_hlds__lco__STATE_VARIABLE_Info_34_34, transform_hlds__lco__STATE_VARIABLE_Info_27, transform_hlds__lco__ConstInfo_9);
        }
#line 631 "lco.m"
        if ((transform_hlds__lco__MaybeGoals1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "lco.m"
          *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "lco.m"
        else
#line 626 "lco.m"
          {
#line 626 "lco.m"
            MR_Word transform_hlds__lco__UpdatedRecAndUnifies_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals1_23, (MR_Integer) 0)));
#line 626 "lco.m"
            MR_Word transform_hlds__lco__Goals_25;
#line 626 "lco.m"
            MR_Word transform_hlds__lco__V_36_36;
#line 626 "lco.m"
            MR_Word transform_hlds__lco__V_37_37;
#line 626 "lco.m"
            MR_Word transform_hlds__lco__V_38_38;

#line 627 "lco.m"
            {
#line 627 "lco.m"
              transform_hlds__lco__V_36_36 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevBeforeGoals_14);
            }
#line 628 "lco.m"
            {
#line 628 "lco.m"
              transform_hlds__lco__V_38_38 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterNonDependentGoals_19);
            }
#line 629 "lco.m"
            {
#line 629 "lco.m"
              transform_hlds__lco__V_37_37 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_38_38, transform_hlds__lco__UpdatedRecAndUnifies_24);
            }
#line 628 "lco.m"
            {
#line 628 "lco.m"
              transform_hlds__lco__Goals_25 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__V_36_36, transform_hlds__lco__V_37_37);
            }
#line 630 "lco.m"
            {
#line 630 "lco.m"
              MR_Word base;
#line 630 "lco.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "lco.m"
              *transform_hlds__lco__MaybeGoals_7 = base;
#line 630 "lco.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_25));
#line 630 "lco.m"
            }
#line 626 "lco.m"
          }
#line 622 "lco.m"
      }
#line 635 "lco.m"
    else
#line 636 "lco.m"
      {
#line 636 "lco.m"
        *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_27 = transform_hlds__lco__STATE_VARIABLE_Info_0_26;
#line 636 "lco.m"
      }
#line 608 "lco.m"
  }
#line 605 "lco.m"
}

#line 580 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
#line 580 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__1_1,
#line 580 "lco.m"
  MR_Word * transform_hlds__lco__HeadVar__2_2,
#line 580 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
#line 580 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
#line 580 "lco.m"
  MR_Word transform_hlds__lco__HeadVar__5_5)
#line 580 "lco.m"
{
#line 583 "lco.m"
  {
#line 583 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 583 "lco.m"
    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "lco.m"
      {
#line 583 "lco.m"
        *transform_hlds__lco__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 583 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_Info_4 = transform_hlds__lco__STATE_VARIABLE_Info_0_3;
#line 583 "lco.m"
      }
#line 583 "lco.m"
    else
#line 584 "lco.m"
      {
#line 584 "lco.m"
        MR_Word transform_hlds__lco__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
#line 584 "lco.m"
        MR_Word transform_hlds__lco__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
#line 584 "lco.m"
        MR_Word transform_hlds__lco__Case_12;
#line 584 "lco.m"
        MR_Word transform_hlds__lco__Cases_13;
#line 584 "lco.m"
        MR_Word transform_hlds__lco__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 0)));
#line 584 "lco.m"
        MR_Word transform_hlds__lco__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 1)));
#line 584 "lco.m"
        MR_Word transform_hlds__lco__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 2)));
#line 584 "lco.m"
        MR_Word transform_hlds__lco__Goal_19;
#line 584 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_22_22;

#line 586 "lco.m"
        {
#line 586 "lco.m"
          transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_18, &transform_hlds__lco__Goal_19, transform_hlds__lco__STATE_VARIABLE_Info_0_3, &transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__HeadVar__5_5);
        }
#line 587 "lco.m"
        {
#line 587 "lco.m"
          transform_hlds__lco__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 587 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_16));
#line 587 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_17));
#line 587 "lco.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 2) = ((MR_Box) (transform_hlds__lco__Goal_19));
#line 587 "lco.m"
        }
#line 588 "lco.m"
        {
#line 588 "lco.m"
          transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_11, &transform_hlds__lco__Cases_13, transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__STATE_VARIABLE_Info_4, transform_hlds__lco__HeadVar__5_5);
        }
#line 584 "lco.m"
        {
#line 584 "lco.m"
          MR_Word base;
#line 584 "lco.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "lco.m"
          *transform_hlds__lco__HeadVar__2_2 = base;
#line 584 "lco.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Case_12));
#line 584 "lco.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Cases_13));
#line 584 "lco.m"
        }
#line 584 "lco.m"
      }
#line 583 "lco.m"
  }
#line 580 "lco.m"
}

#line 492 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
#line 492 "lco.m"
  MR_Word transform_hlds__lco__Goal0_6,
#line 492 "lco.m"
  MR_Word * transform_hlds__lco__Goal_7,
#line 492 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
#line 492 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
#line 492 "lco.m"
  MR_Word transform_hlds__lco__ConstInfo_9)
#line 492 "lco.m"
{
#line 495 "lco.m"
  {
#line 495 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 495 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 0)));
#line 495 "lco.m"
    MR_Word transform_hlds__lco__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 1)));
#line 495 "lco.m"
    MR_Word transform_hlds__lco__GoalExpr_16;

#line 523 "lco.m"
#line 523 "lco.m"
    switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) {
#line 523 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 523 "lco.m"
      case (MR_Integer) 0:
#line 561 "lco.m"
        {
#line 562 "lco.m"
          transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 561 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 561 "lco.m"
        }
#line 523 "lco.m"
        break;
#line 523 "lco.m"
      case (MR_Integer) 1:
#line 523 "lco.m"
      case (MR_Integer) 2:
#line 561 "lco.m"
        {
#line 562 "lco.m"
          transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 561 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 561 "lco.m"
        }
#line 523 "lco.m"
        break;
#line 523 "lco.m"
      case (MR_Integer) 3:
#line 523 "lco.m"
#line 523 "lco.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) {
#line 523 "lco.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 523 "lco.m"
          case (MR_Integer) 0:
#line 523 "lco.m"
          case (MR_Integer) 1:
#line 561 "lco.m"
            {
#line 562 "lco.m"
              transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 561 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 561 "lco.m"
            }
#line 523 "lco.m"
            break;
#line 523 "lco.m"
          case (MR_Integer) 2:
#line 498 "lco.m"
            {
#line 498 "lco.m"
              MR_Word transform_hlds__lco__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 498 "lco.m"
              MR_Word transform_hlds__lco__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));

#line 518 "lco.m"
#line 518 "lco.m"
              switch (transform_hlds__lco__ConjType_12) {
#line 518 "lco.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 518 "lco.m"
                case (MR_Integer) 1:
#line 519 "lco.m"
                  {
#line 521 "lco.m"
                    MR_Word transform_hlds__lco__V_90_90;
#line 521 "lco.m"
                    MR_Word transform_hlds__lco__V_91_91;
#line 521 "lco.m"
                    MR_Word transform_hlds__lco__V_92_92;
#line 521 "lco.m"
                    MR_Word transform_hlds__lco__V_93_93;
#line 521 "lco.m"
                    MR_Word transform_hlds__lco__V_95_95;
#line 521 "lco.m"
                    MR_Word transform_hlds__lco__V_94_94;

#line 520 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 521 "lco.m"
                    transform_hlds__lco__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
#line 521 "lco.m"
                    transform_hlds__lco__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)));
#line 521 "lco.m"
                    transform_hlds__lco__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
#line 521 "lco.m"
                    transform_hlds__lco__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
#line 521 "lco.m"
                    transform_hlds__lco__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)));
#line 521 "lco.m"
                    transform_hlds__lco__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 5)));
#line 521 "lco.m"
                    {
#line 521 "lco.m"
                      MR_Word base;
#line 521 "lco.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 521 "lco.m"
                      *transform_hlds__lco__STATE_VARIABLE_Info_61 = base;
#line 521 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__V_90_90));
#line 521 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__V_91_91));
#line 521 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__V_92_92));
#line 521 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__V_93_93));
#line 521 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 521 "lco.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__V_95_95));
#line 521 "lco.m"
                    }
#line 519 "lco.m"
                  }
#line 518 "lco.m"
                  break;
#line 518 "lco.m"
                case (MR_Integer) 0:
#line 500 "lco.m"
                  {
#line 500 "lco.m"
                    MR_Word transform_hlds__lco__MaybeGoals_14;
#line 500 "lco.m"
                    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_75_75;

#line 501 "lco.m"
                    {
#line 501 "lco.m"
                      transform_hlds__lco__lco_in_conj_5_p_0(transform_hlds__lco__Goals0_13, &transform_hlds__lco__MaybeGoals_14, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__ConstInfo_9);
                    }
#line 505 "lco.m"
                    if ((transform_hlds__lco__MaybeGoals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "lco.m"
                      {
#line 514 "lco.m"
                        MR_Word transform_hlds__lco__AllButLast_17;
#line 514 "lco.m"
                        MR_Word transform_hlds__lco__Last0_18;
#line 511 "lco.m"
                        MR_Box transform_hlds__lco__conv0_Last0_18;

#line 511 "lco.m"
                        {
#line 511 "lco.m"
                          transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_13, &transform_hlds__lco__AllButLast_17, &transform_hlds__lco__conv0_Last0_18);
                        }
#line 511 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 511 "lco.m"
                          {
#line 511 "lco.m"
                            transform_hlds__lco__Last0_18 = ((MR_Word) transform_hlds__lco__conv0_Last0_18);
#line 511 "lco.m"
                            transform_hlds__lco__succeeded = MR_TRUE;
#line 511 "lco.m"
                          }
#line 514 "lco.m"
                        if (transform_hlds__lco__succeeded)
#line 512 "lco.m"
                          {
#line 512 "lco.m"
                            MR_Word transform_hlds__lco__Last_19;
#line 512 "lco.m"
                            MR_Word transform_hlds__lco__V_78_78;
#line 512 "lco.m"
                            MR_Word transform_hlds__lco__V_79_79;

#line 512 "lco.m"
                            {
#line 512 "lco.m"
                              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_18, &transform_hlds__lco__Last_19, transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                            }
#line 513 "lco.m"
                            {
#line 513 "lco.m"
                              transform_hlds__lco__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "lco.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 0) = ((MR_Box) (transform_hlds__lco__Last_19));
#line 513 "lco.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__lco__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "lco.m"
                            }
#line 513 "lco.m"
                            {
#line 513 "lco.m"
                              transform_hlds__lco__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_17, transform_hlds__lco__V_79_79);
                            }
#line 513 "lco.m"
                            {
#line 513 "lco.m"
                              transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 513 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 513 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 513 "lco.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__V_78_78));
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
                            *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 515 "lco.m"
                          }
#line 514 "lco.m"
                      }
#line 505 "lco.m"
                    else
#line 503 "lco.m"
                      {
#line 503 "lco.m"
                        MR_Word transform_hlds__lco__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals_14, (MR_Integer) 0)));

#line 504 "lco.m"
                        {
#line 504 "lco.m"
                          transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 504 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 504 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 504 "lco.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Goals_15));
#line 504 "lco.m"
                        }
#line 503 "lco.m"
                        *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
#line 503 "lco.m"
                      }
#line 500 "lco.m"
                  }
#line 518 "lco.m"
                  break;
#line 518 "lco.m"
              }
#line 498 "lco.m"
            }
#line 523 "lco.m"
            break;
#line 523 "lco.m"
          case (MR_Integer) 3:
#line 524 "lco.m"
            {
#line 524 "lco.m"
              MR_Word transform_hlds__lco__Goals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 530 "lco.m"
              MR_Word transform_hlds__lco__AllButLast_83;
#line 530 "lco.m"
              MR_Word transform_hlds__lco__Last0_84;
#line 527 "lco.m"
              MR_Box transform_hlds__lco__conv1_Last0_84;

#line 527 "lco.m"
              {
#line 527 "lco.m"
                transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_86, &transform_hlds__lco__AllButLast_83, &transform_hlds__lco__conv1_Last0_84);
              }
#line 527 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 527 "lco.m"
                {
#line 527 "lco.m"
                  transform_hlds__lco__Last0_84 = ((MR_Word) transform_hlds__lco__conv1_Last0_84);
#line 527 "lco.m"
                  transform_hlds__lco__succeeded = MR_TRUE;
#line 527 "lco.m"
                }
#line 530 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 528 "lco.m"
                {
#line 528 "lco.m"
                  MR_Word transform_hlds__lco__V_70_70;
#line 528 "lco.m"
                  MR_Word transform_hlds__lco__V_71_71;
#line 528 "lco.m"
                  MR_Word transform_hlds__lco__Last_82;

#line 528 "lco.m"
                  {
#line 528 "lco.m"
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_84, &transform_hlds__lco__Last_82, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 529 "lco.m"
                  {
#line 529 "lco.m"
                    transform_hlds__lco__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 0) = ((MR_Box) (transform_hlds__lco__Last_82));
#line 529 "lco.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "lco.m"
                  }
#line 529 "lco.m"
                  {
#line 529 "lco.m"
                    transform_hlds__lco__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_83, transform_hlds__lco__V_71_71);
                  }
#line 529 "lco.m"
                  {
#line 529 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 529 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__V_70_70));
#line 529 "lco.m"
                  }
#line 528 "lco.m"
                }
#line 530 "lco.m"
              else
#line 531 "lco.m"
                {
#line 531 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 531 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 531 "lco.m"
                }
#line 524 "lco.m"
            }
#line 523 "lco.m"
            break;
#line 523 "lco.m"
          case (MR_Integer) 4:
#line 534 "lco.m"
            {
#line 534 "lco.m"
              MR_Word transform_hlds__lco__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 534 "lco.m"
              MR_Word transform_hlds__lco__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 534 "lco.m"
              MR_Word transform_hlds__lco__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 534 "lco.m"
              MR_Word transform_hlds__lco__Cases_23;

#line 535 "lco.m"
              {
#line 535 "lco.m"
                transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_22, &transform_hlds__lco__Cases_23, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
#line 536 "lco.m"
              {
#line 536 "lco.m"
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 536 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 536 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Var_20));
#line 536 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__CanFail_21));
#line 536 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Cases_23));
#line 536 "lco.m"
              }
#line 534 "lco.m"
            }
#line 523 "lco.m"
            break;
#line 523 "lco.m"
          case (MR_Integer) 5:
#line 543 "lco.m"
            {
#line 543 "lco.m"
              MR_Word transform_hlds__lco__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 543 "lco.m"
              MR_Word transform_hlds__lco__SubGoal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 545 "lco.m"
              MR_Word transform_hlds__lco__FGT_33;
#line 545 "lco.m"
              MR_Word transform_hlds__lco__V_32_32;

#line 545 "lco.m"
              transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 545 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 545 "lco.m"
                {
#line 545 "lco.m"
                  transform_hlds__lco__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 1)));
#line 545 "lco.m"
                  transform_hlds__lco__FGT_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 2)));
#line 547 "lco.m"
#line 547 "lco.m"
                  switch (transform_hlds__lco__FGT_33) {
#line 547 "lco.m"
                    default:
#line 547 "lco.m"
                      transform_hlds__lco__succeeded = MR_FALSE;
#line 547 "lco.m"
                      break;
#line 547 "lco.m"
                    case (MR_Integer) 1:
#line 546 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 547 "lco.m"
                      break;
#line 547 "lco.m"
                    case (MR_Integer) 2:
#line 547 "lco.m"
                      transform_hlds__lco__succeeded = MR_TRUE;
#line 547 "lco.m"
                      break;
#line 547 "lco.m"
                  }
#line 545 "lco.m"
                }
#line 551 "lco.m"
              if (transform_hlds__lco__succeeded)
#line 550 "lco.m"
                {
#line 550 "lco.m"
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
#line 550 "lco.m"
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
#line 550 "lco.m"
                }
#line 551 "lco.m"
              else
#line 552 "lco.m"
                {
#line 552 "lco.m"
                  MR_Word transform_hlds__lco__SubGoal_34;

#line 552 "lco.m"
                  {
#line 552 "lco.m"
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__SubGoal0_31, &transform_hlds__lco__SubGoal_34, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
#line 553 "lco.m"
                  {
#line 553 "lco.m"
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 553 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 553 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Reason_30));
#line 553 "lco.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_34));
#line 553 "lco.m"
                  }
#line 552 "lco.m"
                }
#line 543 "lco.m"
            }
#line 523 "lco.m"
            break;
#line 523 "lco.m"
          case (MR_Integer) 6:
#line 538 "lco.m"
            {
#line 538 "lco.m"
              MR_Word transform_hlds__lco__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
#line 538 "lco.m"
              MR_Word transform_hlds__lco__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
#line 538 "lco.m"
              MR_Word transform_hlds__lco__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
#line 538 "lco.m"
              MR_Word transform_hlds__lco__Else0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 4)));
#line 538 "lco.m"
              MR_Word transform_hlds__lco__Then_28;
#line 538 "lco.m"
              MR_Word transform_hlds__lco__Else_29;
#line 538 "lco.m"
              MR_Word transform_hlds__lco__STATE_VARIABLE_Info_66_66;

#line 539 "lco.m"
              {
#line 539 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Then0_26, &transform_hlds__lco__Then_28, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__ConstInfo_9);
              }
#line 540 "lco.m"
              {
#line 540 "lco.m"
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Else0_27, &transform_hlds__lco__Else_29, transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
#line 541 "lco.m"
              {
#line 541 "lco.m"
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 541 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 541 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Vars_24));
#line 541 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Cond_25));
#line 541 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Then_28));
#line 541 "lco.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__lco__Else_29));
#line 541 "lco.m"
              }
#line 538 "lco.m"
            }
#line 523 "lco.m"
            break;
#line 523 "lco.m"
          case (MR_Integer) 7:
#line 564 "lco.m"
            {
#line 566 "lco.m"
              {
#line 566 "lco.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_in_goal\'/5", (MR_String) "shorthand");
#line 566 "lco.m"
                return;
              }
#line 564 "lco.m"
            }
#line 523 "lco.m"
            break;
#line 523 "lco.m"
        }
#line 523 "lco.m"
        break;
#line 523 "lco.m"
    }
#line 568 "lco.m"
    {
#line 568 "lco.m"
      MR_Word base;
#line 568 "lco.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "lco.m"
      *transform_hlds__lco__Goal_7 = base;
#line 568 "lco.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_16));
#line 568 "lco.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_11));
#line 568 "lco.m"
    }
#line 495 "lco.m"
  }
#line 492 "lco.m"
}

#line 411 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_12_p_0(
#line 411 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_13,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__SCC_14,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__CurProc_15,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__PredInfo_16,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__ProcInfo0_17,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44,
#line 411 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46,
#line 411 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47,
#line 411 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48,
#line 411 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49,
#line 411 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_50)
#line 411 "lco.m"
{
#line 418 "lco.m"
  {
#line 418 "lco.m"
    MR_bool transform_hlds__lco__succeeded;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__TypeCtorInfo_78_78;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__VarSet0_22;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__VarTypes0_23;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__HeadVars_24;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__ArgModes_25;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__ArgTypes_26;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__OutputHeadVars_28;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__CurProcDetism_29;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__Globals_30;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__HighLevelData_31;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__UnboxedFloat_32;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__AllowFloatAddr_33;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__ConstInfo_34;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__Info0_35;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__Goal0_36;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__Goal_37;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__Info_38;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__VarSet_39;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__VarTypes_40;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__Changed_41;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__V_53_53;
#line 418 "lco.m"
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_56_56;
#line 424 "lco.m"
    MR_Word transform_hlds__lco___InputHeadVars_27;

#line 419 "lco.m"
    {
#line 419 "lco.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__VarSet0_22);
    }
#line 420 "lco.m"
    {
#line 420 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__VarTypes0_23);
    }
#line 421 "lco.m"
    {
#line 421 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__HeadVars_24);
    }
#line 422 "lco.m"
    {
#line 422 "lco.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__ArgModes_25);
    }
#line 423 "lco.m"
    {
#line 423 "lco.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes0_23, transform_hlds__lco__HeadVars_24, &transform_hlds__lco__ArgTypes_26);
    }
#line 424 "lco.m"
    {
#line 424 "lco.m"
      hlds__arg_info__compute_in_and_out_vars_6_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44, transform_hlds__lco__HeadVars_24, transform_hlds__lco__ArgModes_25, transform_hlds__lco__ArgTypes_26, &transform_hlds__lco___InputHeadVars_27, &transform_hlds__lco__OutputHeadVars_28);
    }
#line 426 "lco.m"
    {
#line 426 "lco.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__CurProcDetism_29);
    }
#line 428 "lco.m"
    {
#line 428 "lco.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__lco__Globals_30);
    }
#line 427 "lco.m"
    {
#line 427 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_30, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_31);
    }
#line 429 "lco.m"
    {
#line 429 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_30, (MR_Integer) 240, &transform_hlds__lco__UnboxedFloat_32);
    }
#line 437 "lco.m"
#line 437 "lco.m"
    switch (transform_hlds__lco__UnboxedFloat_32) {
#line 437 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 437 "lco.m"
      case (MR_Integer) 0:
#line 436 "lco.m"
        transform_hlds__lco__AllowFloatAddr_33 = (MR_Integer) 0;
#line 437 "lco.m"
        break;
#line 437 "lco.m"
      case (MR_Integer) 1:
#line 439 "lco.m"
        transform_hlds__lco__AllowFloatAddr_33 = (MR_Integer) 1;
#line 437 "lco.m"
        break;
#line 437 "lco.m"
    }
#line 14084 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_78_78 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 441 "lco.m"
    {
#line 441 "lco.m"
      transform_hlds__lco__V_53_53 = mercury__set__list_to_set_1_f_0(transform_hlds__lco__TypeCtorInfo_78_78, transform_hlds__lco__SCC_14);
    }
#line 441 "lco.m"
    {
#line 441 "lco.m"
      transform_hlds__lco__ConstInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 441 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 0) = ((MR_Box) (transform_hlds__lco__LowerSCCVariants_13));
#line 441 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 1) = ((MR_Box) (transform_hlds__lco__V_53_53));
#line 441 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 2) = ((MR_Box) (transform_hlds__lco__CurProc_15));
#line 441 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 3) = ((MR_Box) (transform_hlds__lco__PredInfo_16));
#line 441 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 4) = ((MR_Box) (transform_hlds__lco__ProcInfo0_17));
#line 441 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 5) = ((MR_Box) (transform_hlds__lco__OutputHeadVars_28));
#line 441 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 6) = ((MR_Box) ((transform_hlds__lco__CurProcDetism_29 | ((((transform_hlds__lco__AllowFloatAddr_33 << (MR_Integer) 3)) | ((transform_hlds__lco__HighLevelData_31 << (MR_Integer) 4)))))));
#line 441 "lco.m"
    }
#line 444 "lco.m"
    {
#line 444 "lco.m"
      transform_hlds__lco__Info0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 444 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 0) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44));
#line 444 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46));
#line 444 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 2) = ((MR_Box) (transform_hlds__lco__VarSet0_22));
#line 444 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 3) = ((MR_Box) (transform_hlds__lco__VarTypes0_23));
#line 444 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 4) = ((MR_Box) ((MR_Integer) 1));
#line 444 "lco.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 5) = ((MR_Box) ((MR_Integer) 0));
#line 444 "lco.m"
    }
#line 446 "lco.m"
    {
#line 446 "lco.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__Goal0_36);
    }
#line 447 "lco.m"
    {
#line 447 "lco.m"
      transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_36, &transform_hlds__lco__Goal_37, transform_hlds__lco__Info0_35, &transform_hlds__lco__Info_38, transform_hlds__lco__ConstInfo_34);
    }
#line 448 "lco.m"
    transform_hlds__lco__STATE_VARIABLE_ModuleInfo_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 0)));
#line 448 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 1)));
#line 448 "lco.m"
    transform_hlds__lco__VarSet_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 2)));
#line 448 "lco.m"
    transform_hlds__lco__VarTypes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 3)));
#line 448 "lco.m"
    *transform_hlds__lco__STATE_VARIABLE_Permitted_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 4)));
#line 448 "lco.m"
    transform_hlds__lco__Changed_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 5)));
#line 451 "lco.m"
    transform_hlds__lco__succeeded = (*transform_hlds__lco__STATE_VARIABLE_Permitted_50 == (MR_Integer) 1);
#line 451 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 452 "lco.m"
      transform_hlds__lco__succeeded = (transform_hlds__lco__Changed_41 == (MR_Integer) 1);
#line 474 "lco.m"
    if (transform_hlds__lco__succeeded)
#line 461 "lco.m"
      {
#line 461 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69;
#line 461 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70;
#line 461 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_71_71;
#line 461 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_73_73;
#line 461 "lco.m"
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_75_75;

#line 464 "lco.m"
        {
#line 464 "lco.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_39, transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69);
        }
#line 465 "lco.m"
        {
#line 465 "lco.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_40, transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70);
        }
#line 466 "lco.m"
        {
#line 466 "lco.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_71_71);
        }
#line 469 "lco.m"
        {
#line 469 "lco.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ProcInfo_71_71, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_73_73);
        }
#line 470 "lco.m"
        {
#line 470 "lco.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__lco__STATE_VARIABLE_ProcInfo_73_73, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_75_75, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_56_56, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45);
        }
#line 472 "lco.m"
        {
#line 472 "lco.m"
          mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeCtorInfo_78_78, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__CurProc_15)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_75_75)), transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49);
#line 472 "lco.m"
          return;
        }
#line 461 "lco.m"
      }
#line 474 "lco.m"
    else
#line 475 "lco.m"
      {
#line 475 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48;
#line 475 "lco.m"
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_56_56;
#line 475 "lco.m"
      }
#line 418 "lco.m"
  }
#line 411 "lco.m"
}

#line 381 "lco.m"
static void MR_CALL 
transform_hlds__lco__lco_proc_if_permitted_11_p_0(
#line 381 "lco.m"
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__SCC_13,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__CurProc_14,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31,
#line 381 "lco.m"
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_32,
#line 381 "lco.m"
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_33)
#line 381 "lco.m"
{
#line 390 "lco.m"
  {
#line 390 "lco.m"
    MR_bool transform_hlds__lco__succeeded;

#line 390 "lco.m"
#line 390 "lco.m"
    switch (transform_hlds__lco__STATE_VARIABLE_Permitted_0_32) {
#line 390 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 390 "lco.m"
      case (MR_Integer) 0:
#line 390 "lco.m"
        {
#line 390 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26;
#line 390 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28;
#line 390 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30;
#line 390 "lco.m"
          *transform_hlds__lco__STATE_VARIABLE_Permitted_33 = transform_hlds__lco__STATE_VARIABLE_Permitted_0_32;
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
          MR_Word transform_hlds__lco__PredStatus_23;
#line 392 "lco.m"
          MR_Word transform_hlds__lco__DefInThisModule_24;
#line 392 "lco.m"
          MR_Word transform_hlds__lco__Detism_25;

#line 394 "lco.m"
          {
#line 394 "lco.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__lco__PredId_19, transform_hlds__lco__ProcId_20, &transform_hlds__lco__PredInfo_21, &transform_hlds__lco__ProcInfo0_22);
          }
#line 396 "lco.m"
          {
#line 396 "lco.m"
            hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__lco__PredInfo_21, &transform_hlds__lco__PredStatus_23);
          }
#line 397 "lco.m"
          {
#line 397 "lco.m"
            transform_hlds__lco__DefInThisModule_24 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__lco__PredStatus_23);
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
#line 484 "lco.m"
              if (((MR_Integer) 51 & (((MR_Integer) 1 << transform_hlds__lco__Detism_25))))
#line 484 "lco.m"
                {
#line 484 "lco.m"
                  transform_hlds__lco__succeeded = MR_TRUE;
#line 484 "lco.m"
                }
#line 484 "lco.m"
              else
#line 484 "lco.m"
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
              *transform_hlds__lco__STATE_VARIABLE_Permitted_33 = (MR_Integer) 0;
#line 404 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30;
#line 404 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28;
#line 404 "lco.m"
              *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26;
#line 404 "lco.m"
            }
#line 405 "lco.m"
          else
#line 406 "lco.m"
            {
#line 406 "lco.m"
              transform_hlds__lco__lco_proc_12_p_0(transform_hlds__lco__LowerSCCVariants_12, transform_hlds__lco__SCC_13, transform_hlds__lco__CurProc_14, transform_hlds__lco__PredInfo_21, transform_hlds__lco__ProcInfo0_22, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27, transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28, transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31, transform_hlds__lco__STATE_VARIABLE_Permitted_33);
#line 406 "lco.m"
              return;
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
#line 1357 "lco.m"
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
#line 1343 "lco.m"
    {
#line 1343 "lco.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarSet0_61);
    }
#line 1344 "lco.m"
    {
#line 1344 "lco.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarTypes0_62);
    }
#line 1345 "lco.m"
    {
#line 1345 "lco.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__HeadVars0_63);
    }
#line 1346 "lco.m"
    {
#line 1346 "lco.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__ArgModes0_64);
    }
#line 1347 "lco.m"
    {
#line 1347 "lco.m"
      transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__HeadVars0_63, transform_hlds__lco__ArgModes0_64, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__ArgModes_66, transform_hlds__lco__AddrOutArgs_9, (MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__VarToAddr_67, transform_hlds__lco__VarSet0_61, &transform_hlds__lco__VarSet_68, transform_hlds__lco__VarTypes0_62, &transform_hlds__lco__VarTypes_69);
    }
#line 1350 "lco.m"
    {
#line 1350 "lco.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__lco__HeadVars_65, transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78);
    }
#line 1351 "lco.m"
    {
#line 1351 "lco.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__lco__ArgModes_66, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79);
    }
#line 1352 "lco.m"
    {
#line 1352 "lco.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_68, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80);
    }
#line 1353 "lco.m"
    {
#line 1353 "lco.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_69, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81);
    }
#line 1355 "lco.m"
    {
#line 1355 "lco.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lco__ProcInfo_17, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__InstMap0_70);
    }
#line 1356 "lco.m"
    {
#line 1356 "lco.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__Goal0_71);
    }
#line 1357 "lco.m"
    {
#line 1357 "lco.m"
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__VariantMap_5, transform_hlds__lco__VarToAddr_67, transform_hlds__lco__InstMap0_70, transform_hlds__lco__Goal0_71, &transform_hlds__lco__Goal_72, &transform_hlds__lco___Changed_73, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82);
    }
#line 1359 "lco.m"
    {
#line 1359 "lco.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_72, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83);
    }
#line 1361 "lco.m"
    {
#line 1361 "lco.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85);
    }
#line 1365 "lco.m"
    {
#line 1365 "lco.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__Globals_74);
    }
#line 1366 "lco.m"
    {
#line 1366 "lco.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_74, (MR_Integer) 252, &transform_hlds__lco__HighLevelData_75);
    }
#line 1371 "lco.m"
#line 1371 "lco.m"
    switch (transform_hlds__lco__HighLevelData_75) {
#line 1371 "lco.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1371 "lco.m"
      case (MR_Integer) 0:
#line 1372 "lco.m"
        {
#line 1372 "lco.m"
          transform_hlds__lco__VariantProcInfo_18 = transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85;
#line 1372 "lco.m"
          transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32;
#line 1372 "lco.m"
        }
#line 1371 "lco.m"
        break;
#line 1371 "lco.m"
      case (MR_Integer) 1:
#line 1368 "lco.m"
        {
#line 1369 "lco.m"
          {
#line 1369 "lco.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85, &transform_hlds__lco__VariantProcInfo_18, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34);
          }
#line 1368 "lco.m"
        }
#line 1371 "lco.m"
        break;
#line 1371 "lco.m"
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
#line 14695 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14697 "transform_hlds.lco.c"
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
#line 14731 "transform_hlds.lco.c"
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
#line 14841 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14843 "transform_hlds.lco.c"
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
    MR_Word transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27;
#line 302 "lco.m"
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29;
#line 302 "lco.m"
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31;
#line 302 "lco.m"
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33;

#line 302 "lco.m"
    {
#line 302 "lco.m"
      transform_hlds__lco__lco_proc_if_permitted_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31, ((MR_Word) transform_hlds__lco__wrapper_arg_8), &transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33);
    }
#line 302 "lco.m"
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27));
#line 302 "lco.m"
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29));
#line 302 "lco.m"
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31));
#line 302 "lco.m"
    *transform_hlds__lco__wrapper_arg_9 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33));
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
#line 15076 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 303 "lco.m"
    {
#line 303 "lco.m"
      transform_hlds__lco__V_23_23 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
#line 15083 "transform_hlds.lco.c"
    transform_hlds__lco__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 303 "lco.m"
    {
#line 303 "lco.m"
      transform_hlds__lco__V_24_24 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__TypeCtorInfo_42_42);
    }
#line 15090 "transform_hlds.lco.c"
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
#line 15264 "transform_hlds.lco.c"
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
