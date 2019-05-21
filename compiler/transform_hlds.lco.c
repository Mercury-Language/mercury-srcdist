/*
** Automatically generated from `lco.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s {
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12;
  MR_bool transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42;
  jmp_buf transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__Var_114;
  MR_Box transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0;

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2];

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3];

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[9];

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0[9];

static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_const_info_0_0[9];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[6];

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0;

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2];

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0;

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0;

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2];

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0;

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1];

static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1691__1_2_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_69,
  MR_Word * transform_hlds__lco__HeadVar__2_70);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1409__1_2_p_0(
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Word transform_hlds__lco__HeadVar__2_25);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1281__1_2_p_0(
  MR_Word transform_hlds__lco__ConsId_23,
  MR_Word transform_hlds__lco__RHSConsId_43);

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1135__1_2_f_0(
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
  MR_Word transform_hlds__lco__LambdaHeadVar__1_14);

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1132__1_1_f_0(
  MR_Word transform_hlds__lco__LambdaHeadVar__1_17);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__972__1_2_p_0(
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Word transform_hlds__lco__HeadVar__2_14);

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
  MR_Word transform_hlds__lco__HeadVar__2_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
  MR_Word transform_hlds__lco__HeadVar__2_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
  MR_Word transform_hlds__lco__HeadVar__2_1,
  MR_Word transform_hlds__lco__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_7,
  MR_Word transform_hlds__lco__InstMap_8,
  MR_Word transform_hlds__lco__HeadVar__3_3,
  MR_Word * transform_hlds__lco__Goal_11,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);

static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
  MR_Word transform_hlds__lco__GroundVar_9,
  MR_Integer transform_hlds__lco__TargetArgNum_10,
  MR_Integer transform_hlds__lco__CurArgNum_11,
  MR_Word transform_hlds__lco__ArgTypes_12,
  MR_Word * transform_hlds__lco__ArgVars_13,
  MR_Word * transform_hlds__lco__ArgModes_14,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_5,
  MR_Word transform_hlds__lco__InstMap0_6,
  MR_Word transform_hlds__lco__InstMap_7,
  MR_Word transform_hlds__lco__HeadVar__4_4);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_10,
  MR_Word transform_hlds__lco__VariantMap_11,
  MR_Word transform_hlds__lco__VarToAddr_12,
  MR_Word transform_hlds__lco__InstMap0_13,
  MR_Word transform_hlds__lco__Case0_14,
  MR_Word * transform_hlds__lco__Case_15,
  MR_Word * transform_hlds__lco__Changed_16,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);

static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
  MR_Word transform_hlds__lco__Bag_3,
  MR_Word transform_hlds__lco__Var_4);

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_3,
  MR_Word transform_hlds__lco__UnifyMode_4);

static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
  MR_Box transform_hlds__lco__closure_arg);

static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
  MR_Word transform_hlds__lco__ConstInfo_9,
  MR_Word transform_hlds__lco__Subst_10,
  MR_Word transform_hlds__lco__Goal0_11,
  MR_Word * transform_hlds__lco__Goal_12,
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62);

static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
  MR_Word transform_hlds__lco__Subst_1,
  MR_Word transform_hlds__lco__HighLevelData_2,
  MR_Word transform_hlds__lco__VarType_3,
  MR_Word transform_hlds__lco__ConsId_4,
  MR_Integer transform_hlds__lco__ArgNum_5,
  MR_Word transform_hlds__lco__HeadVar__6_6,
  MR_Word * transform_hlds__lco__HeadVar__7_7,
  MR_Word * transform_hlds__lco__HeadVar__8_8,
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14);

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
  MR_Word transform_hlds__lco__Goal_6,
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33);

static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
  MR_Word transform_hlds__lco___Info_10,
  MR_Word transform_hlds__lco___ConstInfo_11,
  MR_Word transform_hlds__lco__Goal_12,
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
  MR_Word transform_hlds__lco__Goal_12,
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);

static void MR_CALL 
transform_hlds__lco__lco_proc_if_permitted_11_p_0(
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
  MR_Word transform_hlds__lco__SCC_13,
  MR_Word transform_hlds__lco__CurProc_14,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27,
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29,
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_32,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_33);

static void MR_CALL 
transform_hlds__lco__lco_proc_12_p_0(
  MR_Word transform_hlds__lco__LowerSCCVariants_13,
  MR_Word transform_hlds__lco__SCC_14,
  MR_Word transform_hlds__lco__CurProc_15,
  MR_Word transform_hlds__lco__PredInfo_16,
  MR_Word transform_hlds__lco__ProcInfo0_17,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45,
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47,
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_50);

static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word * transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
  MR_Word transform_hlds__lco__HeadVar__5_5);

static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
  MR_Word transform_hlds__lco__Goal0_6,
  MR_Word * transform_hlds__lco__Goal_7,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
  MR_Word transform_hlds__lco__ConstInfo_9);

static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5);

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5,
  MR_Box transform_hlds__lco__wrapper_arg_6,
  MR_Box * transform_hlds__lco__wrapper_arg_7);

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
  MR_Word transform_hlds__lco__Goals0_6,
  MR_Word * transform_hlds__lco__MaybeGoals_7,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
  MR_Word transform_hlds__lco__ConstInfo_9);

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3,
  MR_Box * transform_hlds__lco__wrapper_arg_4,
  MR_Box transform_hlds__lco__wrapper_arg_5,
  MR_Box * transform_hlds__lco__wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
  MR_Word transform_hlds__lco__CallGoal_9,
  MR_Word transform_hlds__lco__CallOutArgs_10,
  MR_Word transform_hlds__lco__UnifyGoals_11,
  MR_Word transform_hlds__lco__UnifyInputVars_12,
  MR_Word * transform_hlds__lco__MaybeGoals_13,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_57,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_58,
  MR_Word transform_hlds__lco__ConstInfo_15);

static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
  MR_Word transform_hlds__lco__PredId_9,
  MR_Integer transform_hlds__lco__ProcId_10,
  MR_Word transform_hlds__lco__AddrArgNums_11,
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
  MR_Word transform_hlds__lco__SymName_13,
  MR_Word * transform_hlds__lco__VariantSymName_14,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31);

static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
  MR_Word transform_hlds__lco__PredOrFunc_5,
  MR_Integer transform_hlds__lco__VariantNumber_6,
  MR_String transform_hlds__lco__OrigName_7,
  MR_String * transform_hlds__lco__VariantName_8);

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
  MR_Word transform_hlds__lco__HighLevelData_5,
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
  MR_Word transform_hlds__lco__Mismatches_7,
  MR_Word * transform_hlds__lco__VariantArgs_8);

static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__UnifyInputVars_2,
  MR_Word transform_hlds__lco__HeadVar__3_3,
  MR_Integer transform_hlds__lco__ArgNum_4,
  MR_Word * transform_hlds__lco__HeadVar__5_5,
  MR_Word * transform_hlds__lco__HeadVar__6_6,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10);

static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
  MR_Word transform_hlds__lco__ConstInfo_6,
  MR_Word transform_hlds__lco__Var_7,
  MR_Word * transform_hlds__lco__AddrVar_8,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20);

static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
  MR_Box transform_hlds__lco__closure_arg);

static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3,
  MR_Word transform_hlds__lco__HeadVar__4_4,
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Word * transform_hlds__lco__HeadVar__6_6);

static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
  MR_Word transform_hlds__lco__Info_9,
  MR_Word transform_hlds__lco__ConstInfo_10,
  MR_Word transform_hlds__lco__RevGoals0_11,
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
  MR_Word * transform_hlds__lco__RecGoal_13,
  MR_Word * transform_hlds__lco__RecOutArgs_14,
  MR_Word * transform_hlds__lco__RevBeforeGoals_15);

static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
  MR_Word transform_hlds__lco__Goal_2);

static MR_bool MR_CALL 
transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(
  MR_Word transform_hlds__lco__Info_5,
  MR_Word transform_hlds__lco__ConstInfo_6,
  MR_Word transform_hlds__lco__Goal_7,
  MR_Word * transform_hlds__lco__OutArgs_8);

static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
  MR_Word transform_hlds__lco__HeadVar__1_1);

static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
  MR_Word transform_hlds__lco__VariantMap_5,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_1,
  MR_Word transform_hlds__lco__VariantMap_2,
  MR_Word transform_hlds__lco__VarToAddr_3,
  MR_Word transform_hlds__lco__InstMap0_4,
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Word * transform_hlds__lco__HeadVar__6_6,
  MR_Word * transform_hlds__lco__HeadVar__7_7,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
  void * transform_hlds__lco__env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
  void * transform_hlds__lco__env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
  void * transform_hlds__lco__env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
  void * transform_hlds__lco__env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_10,
  MR_Word transform_hlds__lco__VariantMap_11,
  MR_Word transform_hlds__lco__VarToAddr_12,
  MR_Word transform_hlds__lco__InstMap0_13,
  MR_Word transform_hlds__lco__Goal0_14,
  MR_Word * transform_hlds__lco__Goal_15,
  MR_Word * transform_hlds__lco__Changed_16,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_12,
  MR_Word transform_hlds__lco__VariantMap_13,
  MR_Word transform_hlds__lco__VarToAddr_14,
  MR_Word transform_hlds__lco__InstMap0_15,
  MR_Word transform_hlds__lco__GoalExpr0_16,
  MR_Word * transform_hlds__lco__GoalExpr_17,
  MR_Word transform_hlds__lco__GoalInfo0_18,
  MR_Word * transform_hlds__lco__GoalInfo_19,
  MR_Word * transform_hlds__lco__Changed_20,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);

static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
  MR_Integer transform_hlds__lco__OutArgNum_7,
  MR_Word transform_hlds__lco__OutArgs_8,
  MR_Word * transform_hlds__lco__Subst_9,
  MR_Word * transform_hlds__lco__VariantArgs_10);

static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__AddrArgNums_6,
  MR_Word * transform_hlds__lco__Variant_7);

static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3,
  MR_Word transform_hlds__lco__HeadVar__4_4,
  MR_Word * transform_hlds__lco__HeadVar__5_5,
  MR_Word * transform_hlds__lco__HeadVar__6_6,
  MR_Word * transform_hlds__lco__HeadVar__7_7);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3,
  MR_Box * transform_hlds__lco__wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_10,
  MR_Word transform_hlds__lco__VarToAddr_11,
  MR_Word transform_hlds__lco__InstMap0_12,
  MR_Word transform_hlds__lco__GoalInfo_13,
  MR_Word transform_hlds__lco__GoalExpr0_14,
  MR_Word * transform_hlds__lco__GoalExpr_15,
  MR_Word * transform_hlds__lco__Changed_16,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24);

static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
  MR_Box transform_hlds__lco__closure_arg);

static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word * transform_hlds__lco__HeadVar__3_3,
  MR_Word * transform_hlds__lco__HeadVar__4_4,
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
  MR_Word transform_hlds__lco__ModuleInfo_7,
  MR_Word * transform_hlds__lco__HeadVar__8_8,
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12);

static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
  MR_Word transform_hlds__lco__ConsId_4,
  MR_Integer transform_hlds__lco__FreeArg_5);

static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
  MR_Word transform_hlds__lco__FieldType_3);

static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3);

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3);

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5,
  MR_Box transform_hlds__lco__wrapper_arg_6,
  MR_Box * transform_hlds__lco__wrapper_arg_7,
  MR_Box transform_hlds__lco__wrapper_arg_8,
  MR_Box * transform_hlds__lco__wrapper_arg_9);

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
  MR_Word transform_hlds__lco__SCC_6,
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_21,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_22,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_24);

static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__lco_scalar_common_1[12][2];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_3[2][8];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_4[1][14];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_5[2][6];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_6[2][7];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_7[8][5];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_8[1][9];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_9[3][12];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_10[1][11];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_11[1][1];




static /* final */ const MR_Box transform_hlds__lco_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_2[6]))
  },
  /* row 11 */
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
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__lco__lco_process_proc_variant_4_p_0_1)),
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
    ((MR_Box) (&transform_hlds__lco_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__lco__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
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
    ((MR_Box) (&transform_hlds__lco__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
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
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_8[1][9] = {
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

static /* final */ const MR_Box transform_hlds__lco_scalar_common_9[3][12] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_10[1][11] = {
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



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
  (MR_String) "do_not_allow_float_addr",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
  (MR_String) "allow_float_addr",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3] = {
  (MR_String) "fi_type",
  (MR_String) "fi_cons_id",
  (MR_String) "fi_arg"
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0 = {
  (MR_String) "field_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

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

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0 = {
  (MR_String) "lco_const_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_locns_lco_const_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0
};

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[6] = {
  (MR_String) "lco_module_info",
  (MR_String) "lco_cur_scc_variants",
  (MR_String) "lco_var_set",
  (MR_String) "lco_var_types",
  (MR_String) "lco_permitted",
  (MR_String) "lco_changed"
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0 = {
  (MR_String) "lco_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
  (MR_String) "lco_is_not_permitted_on_scc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
  (MR_String) "lco_is_permitted_on_scc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
  (MR_String) "proc_not_changed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
  (MR_String) "proc_changed",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1,
  &transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0 = {
  (MR_String) "store_target",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_var_to_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0
};

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2] = {
  (MR_String) "va_pos",
  (MR_String) "va_field"
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0 = {
  (MR_String) "variant_arg",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0 = {
  (MR_String) "variant_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1691__1_2_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_69,
  MR_Word * transform_hlds__lco__HeadVar__2_70)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__conv0_HeadVar__2_70;

    {
      mercury__pair__fst_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__HeadVar__1_69, &transform_hlds__lco__conv0_HeadVar__2_70);
    }
    *transform_hlds__lco__HeadVar__2_70 = ((MR_Word) transform_hlds__lco__conv0_HeadVar__2_70);
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1409__1_2_p_0(
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Word transform_hlds__lco__HeadVar__2_25)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_25)));
    }
    return transform_hlds__lco__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1281__1_2_p_0(
  MR_Word transform_hlds__lco__ConsId_23,
  MR_Word transform_hlds__lco__RHSConsId_43)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__ConsId_23, transform_hlds__lco__RHSConsId_43);
    }
    return transform_hlds__lco__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1135__1_2_f_0(
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
  MR_Word transform_hlds__lco__LambdaHeadVar__1_14)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__LambdaHeadVar__2_15;
    MR_Word transform_hlds__lco__FieldId_13;
    MR_Word transform_hlds__lco__Var_16;
    MR_Integer transform_hlds__lco__Pos_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__1_14, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__1_14, (MR_Integer) 1)));
    MR_Box transform_hlds__lco__conv0_FieldId_13;

    {
      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, transform_hlds__lco__AddrVarFieldIds_6, ((MR_Box) (transform_hlds__lco__Var_24)), &transform_hlds__lco__conv0_FieldId_13);
    }
    transform_hlds__lco__FieldId_13 = ((MR_Word) transform_hlds__lco__conv0_FieldId_13);
    {
      transform_hlds__lco__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_16, 0) = ((MR_Box) (transform_hlds__lco__FieldId_13));
    }
    {
      transform_hlds__lco__LambdaHeadVar__2_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__2_15, 0) = ((MR_Box) (transform_hlds__lco__Pos_23));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__2_15, 1) = ((MR_Box) (transform_hlds__lco__Var_16));
    }
    return transform_hlds__lco__LambdaHeadVar__2_15;
  }
}

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1132__1_1_f_0(
  MR_Word transform_hlds__lco__LambdaHeadVar__1_17)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__LambdaHeadVar__2_18;
    MR_Integer transform_hlds__lco__Pos_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__1_17, (MR_Integer) 0)));
    MR_Word transform_hlds__lco___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__1_17, (MR_Integer) 1)));

    {
      transform_hlds__lco__LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__2_18, 0) = ((MR_Box) (transform_hlds__lco__Pos_21));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__LambdaHeadVar__2_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return transform_hlds__lco__LambdaHeadVar__2_18;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__972__1_2_p_0(
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Word transform_hlds__lco__HeadVar__2_14)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], ((MR_Box) (transform_hlds__lco__HeadVar__5_5)), ((MR_Box) (transform_hlds__lco__HeadVar__2_14)));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

    {
      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
    if (transform_hlds__lco__succeeded)
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__lco__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_String transform_hlds__lco__ArgX3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
        MR_String transform_hlds__lco__ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], &transform_hlds__lco__Var_10, ((MR_Box) (transform_hlds__lco__ArgX1_4)), ((MR_Box) (transform_hlds__lco__ArgY1_5)));
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_10 == (MR_Integer) 0);
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
        if (transform_hlds__lco__succeeded)
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_10;
        else
          {
            MR_Word transform_hlds__lco__Var_11;

            {
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__Var_11, transform_hlds__lco__ArgX2_6, transform_hlds__lco__ArgY2_7);
            }
            transform_hlds__lco__succeeded = (transform_hlds__lco__Var_11 == (MR_Integer) 0);
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
            if (transform_hlds__lco__succeeded)
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_string_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__ArgX3_8, transform_hlds__lco__ArgY3_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
    if (transform_hlds__lco__succeeded)
      transform_hlds__lco__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__lco__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_String transform_hlds__lco__ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
        MR_String transform_hlds__lco__ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

        {
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[7], ((MR_Box) (transform_hlds__lco__ArgX1_3)), ((MR_Box) (transform_hlds__lco__ArgY1_4)));
        }
        if (transform_hlds__lco__succeeded)
          {
            {
              transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__ArgX2_5, transform_hlds__lco__ArgY2_6);
            }
            if (transform_hlds__lco__succeeded)
              transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__ArgX3_7, transform_hlds__lco__ArgY3_8) == 0);
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
    if (transform_hlds__lco__succeeded)
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer transform_hlds__lco__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer transform_hlds__lco__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__Var_8, transform_hlds__lco__ArgX1_4, transform_hlds__lco__ArgY1_5);
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_8 == (MR_Integer) 0);
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
        if (transform_hlds__lco__succeeded)
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[9], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__ArgX2_6)), ((MR_Box) (transform_hlds__lco__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
    if (transform_hlds__lco__succeeded)
      transform_hlds__lco__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__lco__TypeInfo_9_9;
        MR_Integer transform_hlds__lco__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer transform_hlds__lco__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

        transform_hlds__lco__succeeded = (transform_hlds__lco__ArgX1_3 == transform_hlds__lco__ArgY1_4);
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__TypeInfo_9_9 = (MR_Word) &transform_hlds__lco_scalar_common_1[9];
            {
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_9_9, ((MR_Box) (transform_hlds__lco__ArgX2_5)), ((MR_Box) (transform_hlds__lco__ArgY2_6)));
            }
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__Cast_HeadVar1_4 = transform_hlds__lco__HeadVar__2_2;
    MR_Word transform_hlds__lco__Cast_HeadVar2_5 = transform_hlds__lco__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__Cast_HeadVar1_3 = transform_hlds__lco__HeadVar__1_1;
    MR_Word transform_hlds__lco__Cast_HeadVar2_4 = transform_hlds__lco__HeadVar__2_2;

    {
      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[10], ((MR_Box) (transform_hlds__lco__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__lco__Cast_HeadVar2_4)));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
    if (transform_hlds__lco__succeeded)
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__lco__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], &transform_hlds__lco__Var_8, ((MR_Box) (transform_hlds__lco__ArgX1_4)), ((MR_Box) (transform_hlds__lco__ArgY1_5)));
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_8 == (MR_Integer) 0);
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
        if (transform_hlds__lco__succeeded)
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[9], transform_hlds__lco__HeadVar__1_1, ((MR_Box) (transform_hlds__lco__ArgX2_6)), ((MR_Box) (transform_hlds__lco__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_7 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
    MR_Integer transform_hlds__lco__CastY_8 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_7 == transform_hlds__lco__CastY_8);
    if (transform_hlds__lco__succeeded)
      transform_hlds__lco__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__lco__TypeInfo_10_10;
        MR_Word transform_hlds__lco__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));

        {
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__ArgX1_3)), ((MR_Box) (transform_hlds__lco__ArgY1_4)));
        }
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__TypeInfo_10_10 = (MR_Word) &transform_hlds__lco_scalar_common_1[9];
            {
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_10_10, ((MR_Box) (transform_hlds__lco__ArgX2_5)), ((MR_Box) (transform_hlds__lco__ArgY2_6)));
            }
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
  MR_Word transform_hlds__lco__HeadVar__2_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
  MR_Word transform_hlds__lco__HeadVar__2_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_21 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__CastY_22 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_21 == transform_hlds__lco__CastY_22);
    if (transform_hlds__lco__succeeded)
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__lco__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__Var_16;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lco__Var_16, transform_hlds__lco__ArgX1_4, transform_hlds__lco__ArgY1_5);
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_16 == (MR_Integer) 0);
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
        if (transform_hlds__lco__succeeded)
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_16;
        else
          {
            MR_Word transform_hlds__lco__Var_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__Var_17, ((MR_Box) (transform_hlds__lco__ArgX2_6)), ((MR_Box) (transform_hlds__lco__ArgY2_7)));
            }
            transform_hlds__lco__succeeded = (transform_hlds__lco__Var_17 == (MR_Integer) 0);
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
            if (transform_hlds__lco__succeeded)
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_17;
            else
              {
                MR_Word transform_hlds__lco__Var_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[8], &transform_hlds__lco__Var_18, ((MR_Box) (transform_hlds__lco__ArgX3_8)), ((MR_Box) (transform_hlds__lco__ArgY3_9)));
                }
                transform_hlds__lco__succeeded = (transform_hlds__lco__Var_18 == (MR_Integer) 0);
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                if (transform_hlds__lco__succeeded)
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_18;
                else
                  {
                    MR_Word transform_hlds__lco__Var_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[7], &transform_hlds__lco__Var_19, ((MR_Box) (transform_hlds__lco__ArgX4_10)), ((MR_Box) (transform_hlds__lco__ArgY4_11)));
                    }
                    transform_hlds__lco__succeeded = (transform_hlds__lco__Var_19 == (MR_Integer) 0);
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                    if (transform_hlds__lco__succeeded)
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_19;
                    else
                      {
                        MR_Word transform_hlds__lco__Var_20;
                        MR_Integer transform_hlds__lco__Var_29 = (MR_Integer) transform_hlds__lco__ArgX5_12;
                        MR_Integer transform_hlds__lco__Var_30 = (MR_Integer) transform_hlds__lco__ArgY5_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__Var_20, transform_hlds__lco__Var_29, transform_hlds__lco__Var_30);
                        }
                        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_20 == (MR_Integer) 0);
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                        if (transform_hlds__lco__succeeded)
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_20;
                        else
                          {
                            MR_Integer transform_hlds__lco__Var_31 = (MR_Integer) transform_hlds__lco__ArgX6_14;
                            MR_Integer transform_hlds__lco__Var_32 = (MR_Integer) transform_hlds__lco__ArgY6_15;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Var_31, transform_hlds__lco__Var_32);
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_15 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
    MR_Integer transform_hlds__lco__CastY_16 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_15 == transform_hlds__lco__CastY_16);
    if (transform_hlds__lco__succeeded)
      transform_hlds__lco__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__lco__TypeInfo_18_18;
        MR_Word transform_hlds__lco__TypeInfo_19_19;
        MR_Word transform_hlds__lco__TypeInfo_20_20;
        MR_Word transform_hlds__lco__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));

        {
          transform_hlds__lco__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lco__ArgX1_3, transform_hlds__lco__ArgY1_4);
        }
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__TypeInfo_18_18 = (MR_Word) &transform_hlds__lco_scalar_common_2[0];
            {
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_18_18, ((MR_Box) (transform_hlds__lco__ArgX2_5)), ((MR_Box) (transform_hlds__lco__ArgY2_6)));
            }
            if (transform_hlds__lco__succeeded)
              {
                transform_hlds__lco__TypeInfo_19_19 = (MR_Word) &transform_hlds__lco_scalar_common_1[8];
                {
                  transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_19_19, ((MR_Box) (transform_hlds__lco__ArgX3_7)), ((MR_Box) (transform_hlds__lco__ArgY3_8)));
                }
                if (transform_hlds__lco__succeeded)
                  {
                    transform_hlds__lco__TypeInfo_20_20 = (MR_Word) &transform_hlds__lco_scalar_common_2[7];
                    {
                      transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_20_20, ((MR_Box) (transform_hlds__lco__ArgX4_9)), ((MR_Box) (transform_hlds__lco__ArgY4_10)));
                    }
                    if (transform_hlds__lco__succeeded)
                      {
                        transform_hlds__lco__succeeded = (transform_hlds__lco__ArgX5_11 == transform_hlds__lco__ArgY5_12);
                        if (transform_hlds__lco__succeeded)
                          transform_hlds__lco__succeeded = (transform_hlds__lco__ArgX6_13 == transform_hlds__lco__ArgY6_14);
                      }
                  }
              }
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_30 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__CastY_31 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_30 == transform_hlds__lco__CastY_31);
    if (transform_hlds__lco__succeeded)
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__lco__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__ArgX7_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 7);
        MR_Word transform_hlds__lco__ArgY7_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 7);
        MR_Word transform_hlds__lco__ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__ArgX9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__ArgY9_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__Var_22;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], &transform_hlds__lco__Var_22, ((MR_Box) (transform_hlds__lco__ArgX1_4)), ((MR_Box) (transform_hlds__lco__ArgY1_5)));
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_22 == (MR_Integer) 0);
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
        if (transform_hlds__lco__succeeded)
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_22;
        else
          {
            MR_Word transform_hlds__lco__Var_23;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[1], &transform_hlds__lco__Var_23, ((MR_Box) (transform_hlds__lco__ArgX2_6)), ((MR_Box) (transform_hlds__lco__ArgY2_7)));
            }
            transform_hlds__lco__succeeded = (transform_hlds__lco__Var_23 == (MR_Integer) 0);
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
            if (transform_hlds__lco__succeeded)
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_23;
            else
              {
                MR_Word transform_hlds__lco__Var_24;

                {
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__lco__Var_24, transform_hlds__lco__ArgX3_8, transform_hlds__lco__ArgY3_9);
                }
                transform_hlds__lco__succeeded = (transform_hlds__lco__Var_24 == (MR_Integer) 0);
                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                if (transform_hlds__lco__succeeded)
                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_24;
                else
                  {
                    MR_Word transform_hlds__lco__Var_25;

                    {
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lco__Var_25, transform_hlds__lco__ArgX4_10, transform_hlds__lco__ArgY4_11);
                    }
                    transform_hlds__lco__succeeded = (transform_hlds__lco__Var_25 == (MR_Integer) 0);
                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                    if (transform_hlds__lco__succeeded)
                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_25;
                    else
                      {
                        MR_Word transform_hlds__lco__Var_26;

                        {
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__lco__Var_26, transform_hlds__lco__ArgX5_12, transform_hlds__lco__ArgY5_13);
                        }
                        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_26 == (MR_Integer) 0);
                        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                        if (transform_hlds__lco__succeeded)
                          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_26;
                        else
                          {
                            MR_Word transform_hlds__lco__Var_27;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[6], &transform_hlds__lco__Var_27, ((MR_Box) (transform_hlds__lco__ArgX6_14)), ((MR_Box) (transform_hlds__lco__ArgY6_15)));
                            }
                            transform_hlds__lco__succeeded = (transform_hlds__lco__Var_27 == (MR_Integer) 0);
                            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                            if (transform_hlds__lco__succeeded)
                              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_27;
                            else
                              {
                                MR_Word transform_hlds__lco__Var_28;
                                MR_Integer transform_hlds__lco__Var_41 = (MR_Integer) transform_hlds__lco__ArgX7_16;
                                MR_Integer transform_hlds__lco__Var_42 = (MR_Integer) transform_hlds__lco__ArgY7_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__Var_28, transform_hlds__lco__Var_41, transform_hlds__lco__Var_42);
                                }
                                transform_hlds__lco__succeeded = (transform_hlds__lco__Var_28 == (MR_Integer) 0);
                                transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                                if (transform_hlds__lco__succeeded)
                                  *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_28;
                                else
                                  {
                                    MR_Word transform_hlds__lco__Var_29;
                                    MR_Integer transform_hlds__lco__Var_43 = (MR_Integer) transform_hlds__lco__ArgX8_18;
                                    MR_Integer transform_hlds__lco__Var_44 = (MR_Integer) transform_hlds__lco__ArgY8_19;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lco__Var_29, transform_hlds__lco__Var_43, transform_hlds__lco__Var_44);
                                    }
                                    transform_hlds__lco__succeeded = (transform_hlds__lco__Var_29 == (MR_Integer) 0);
                                    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
                                    if (transform_hlds__lco__succeeded)
                                      *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_29;
                                    else
                                      {
                                        MR_Integer transform_hlds__lco__Var_45 = (MR_Integer) transform_hlds__lco__ArgX9_20;
                                        MR_Integer transform_hlds__lco__Var_46 = (MR_Integer) transform_hlds__lco__ArgY9_21;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Var_45, transform_hlds__lco__Var_46);
                                        }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_21 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
    MR_Integer transform_hlds__lco__CastY_22 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_21 == transform_hlds__lco__CastY_22);
    if (transform_hlds__lco__succeeded)
      transform_hlds__lco__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__lco__TypeInfo_24_24;
        MR_Word transform_hlds__lco__TypeInfo_28_28;
        MR_Word transform_hlds__lco__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__ArgX7_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 7);
        MR_Word transform_hlds__lco__ArgY7_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 7);
        MR_Word transform_hlds__lco__ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__ArgX9_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__ArgY9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

        {
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[0], ((MR_Box) (transform_hlds__lco__ArgX1_3)), ((MR_Box) (transform_hlds__lco__ArgY1_4)));
        }
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[1];
            {
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__ArgX2_5)), ((MR_Box) (transform_hlds__lco__ArgY2_6)));
            }
            if (transform_hlds__lco__succeeded)
              {
                {
                  transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__lco__ArgX3_7, transform_hlds__lco__ArgY3_8);
                }
                if (transform_hlds__lco__succeeded)
                  {
                    {
                      transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lco__ArgX4_9, transform_hlds__lco__ArgY4_10);
                    }
                    if (transform_hlds__lco__succeeded)
                      {
                        {
                          transform_hlds__lco__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__lco__ArgX5_11, transform_hlds__lco__ArgY5_12);
                        }
                        if (transform_hlds__lco__succeeded)
                          {
                            transform_hlds__lco__TypeInfo_28_28 = (MR_Word) &transform_hlds__lco_scalar_common_1[6];
                            {
                              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_28_28, ((MR_Box) (transform_hlds__lco__ArgX6_13)), ((MR_Box) (transform_hlds__lco__ArgY6_14)));
                            }
                            if (transform_hlds__lco__succeeded)
                              {
                                transform_hlds__lco__succeeded = (transform_hlds__lco__ArgX7_15 == transform_hlds__lco__ArgY7_16);
                                if (transform_hlds__lco__succeeded)
                                  {
                                    transform_hlds__lco__succeeded = (transform_hlds__lco__ArgX8_17 == transform_hlds__lco__ArgY8_18);
                                    if (transform_hlds__lco__succeeded)
                                      transform_hlds__lco__succeeded = (transform_hlds__lco__ArgX9_19 == transform_hlds__lco__ArgY9_20);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_12 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__CastY_13 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_12 == transform_hlds__lco__CastY_13);
    if (transform_hlds__lco__succeeded)
      *transform_hlds__lco__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__lco__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer transform_hlds__lco__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer transform_hlds__lco__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__Var_10;

        {
          parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__lco__Var_10, transform_hlds__lco__ArgX1_4, transform_hlds__lco__ArgY1_5);
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_10 == (MR_Integer) 0);
        transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
        if (transform_hlds__lco__succeeded)
          *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_10;
        else
          {
            MR_Word transform_hlds__lco__Var_11;

            {
              parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__lco__Var_11, transform_hlds__lco__ArgX2_6, transform_hlds__lco__ArgY2_7);
            }
            transform_hlds__lco__succeeded = (transform_hlds__lco__Var_11 == (MR_Integer) 0);
            transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
            if (transform_hlds__lco__succeeded)
              *transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__ArgX3_8, transform_hlds__lco__ArgY3_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__CastX_9 = (MR_Integer) transform_hlds__lco__HeadVar__1_1;
    MR_Integer transform_hlds__lco__CastY_10 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;

    transform_hlds__lco__succeeded = (transform_hlds__lco__CastX_9 == transform_hlds__lco__CastY_10);
    if (transform_hlds__lco__succeeded)
      transform_hlds__lco__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__lco__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__lco__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer transform_hlds__lco__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 2)));

        {
          transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__lco__ArgX1_3, transform_hlds__lco__ArgY1_4);
        }
        if (transform_hlds__lco__succeeded)
          {
            {
              transform_hlds__lco__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__lco__ArgX2_5, transform_hlds__lco__ArgY2_6);
            }
            if (transform_hlds__lco__succeeded)
              transform_hlds__lco__succeeded = (transform_hlds__lco__ArgX3_7 == transform_hlds__lco__ArgY3_8);
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
  MR_Word * transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__lco__HeadVar__2_2;
    MR_Integer transform_hlds__lco__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__lco__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Cast_HeadVar1_4, transform_hlds__lco__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
  MR_Word transform_hlds__lco__HeadVar__2_1,
  MR_Word transform_hlds__lco__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lco__succeeded = (transform_hlds__lco__HeadVar__2_1 == transform_hlds__lco__HeadVar__2_2);

    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_7,
  MR_Word transform_hlds__lco__InstMap_8,
  MR_Word transform_hlds__lco__HeadVar__3_3,
  MR_Word * transform_hlds__lco__Goal_11,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_32)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__GroundVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__StoreTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__AddrVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__MaybeFieldId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_10, (MR_Integer) 1)));

    if ((transform_hlds__lco__MaybeFieldId_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__lco__Var_49;
        MR_Word transform_hlds__lco__Var_55;
        MR_Word transform_hlds__lco__Var_57;
        MR_Word transform_hlds__lco__Var_58;
        MR_Word transform_hlds__lco__Var_59;

        {
          transform_hlds__lco__Var_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
        {
          transform_hlds__lco__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_59, 0) = ((MR_Box) (transform_hlds__lco__GroundVar_9));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__lco__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_55, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_55, 1) = ((MR_Box) (transform_hlds__lco__Var_59));
        }
        {
          transform_hlds__lco__Var_57 = hlds__instmap__instmap_delta_bind_vars_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          transform_hlds__lco__Var_58 = mercury__term__context_init_0_f_0();
        }
        {
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__lco__Var_49, (MR_String) "store_at_ref_impure", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__lco__Var_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lco__Var_57, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__Var_58, transform_hlds__lco__Goal_11);
        }
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_32 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31;
      }
    else
      {
        MR_Word transform_hlds__lco__AddrVarType_15;
        MR_Word transform_hlds__lco__ConsId_16;
        MR_Integer transform_hlds__lco__ArgNum_17;
        MR_Word transform_hlds__lco__ArgTypes_18;
        MR_Word transform_hlds__lco__ArgVars_19;
        MR_Word transform_hlds__lco__ArgModes_20;
        MR_Word transform_hlds__lco__RHS_21;
        MR_Word transform_hlds__lco__AddrVarInst0_22;
        MR_Word transform_hlds__lco__AddrVarInst_23;
        MR_Word transform_hlds__lco__UnifyMode_24;
        MR_Word transform_hlds__lco__Unification_25;
        MR_Word transform_hlds__lco__GoalExpr_27;
        MR_Word transform_hlds__lco__GoalInfo0_28;
        MR_Word transform_hlds__lco__GoalInfo1_29;
        MR_Word transform_hlds__lco__GoalInfo_30;
        MR_Word transform_hlds__lco__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_14, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__Var_37;
        MR_Word transform_hlds__lco__Var_38;
        MR_Word transform_hlds__lco__Var_39;
        MR_Word transform_hlds__lco__Var_40;
        MR_Word transform_hlds__lco__Var_41;
        MR_Word transform_hlds__lco__Var_48;

        transform_hlds__lco__AddrVarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_33, (MR_Integer) 0)));
        transform_hlds__lco__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_33, (MR_Integer) 1)));
        transform_hlds__lco__ArgNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_33, (MR_Integer) 2)));
        {
          check_hlds__type_util__get_cons_id_arg_types_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarType_15, transform_hlds__lco__ConsId_16, &transform_hlds__lco__ArgTypes_18);
        }
        {
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__ArgNum_17, (MR_Integer) 1, transform_hlds__lco__ArgTypes_18, &transform_hlds__lco__ArgVars_19, &transform_hlds__lco__ArgModes_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_31, transform_hlds__lco__STATE_VARIABLE_ProcInfo_32);
        }
        {
          transform_hlds__lco__RHS_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 0) = ((MR_Box) (transform_hlds__lco__ConsId_16));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_21, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
        }
        {
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_8, transform_hlds__lco__AddrVar_13, &transform_hlds__lco__AddrVarInst0_22);
        }
        {
          check_hlds__inst_util__inst_expand_3_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__AddrVarInst0_22, &transform_hlds__lco__AddrVarInst_23);
        }
        {
          transform_hlds__lco__Var_38 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
        {
          transform_hlds__lco__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_37, 0) = ((MR_Box) (transform_hlds__lco__AddrVarInst_23));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_37, 1) = ((MR_Box) (transform_hlds__lco__Var_38));
        }
        {
          transform_hlds__lco__Var_40 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
        {
          transform_hlds__lco__Var_41 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
        {
          transform_hlds__lco__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_39, 0) = ((MR_Box) (transform_hlds__lco__Var_40));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_39, 1) = ((MR_Box) (transform_hlds__lco__Var_41));
        }
        {
          transform_hlds__lco__UnifyMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UnifyMode_24, 0) = ((MR_Box) (transform_hlds__lco__Var_37));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UnifyMode_24, 1) = ((MR_Box) (transform_hlds__lco__Var_39));
        }
        {
          transform_hlds__lco__Unification_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 1) = ((MR_Box) (transform_hlds__lco__ConsId_16));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 2) = ((MR_Box) (transform_hlds__lco__ArgVars_19));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 3) = ((MR_Box) (transform_hlds__lco__ArgModes_20));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Unification_25, 5) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          transform_hlds__lco__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 0) = ((MR_Box) (transform_hlds__lco__AddrVar_13));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 1) = ((MR_Box) (transform_hlds__lco__RHS_21));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 2) = ((MR_Box) (transform_hlds__lco__UnifyMode_24));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 3) = ((MR_Box) (transform_hlds__lco__Unification_25));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_27, 4) = ((MR_Box) (&transform_hlds__lco_scalar_common_1[11]));
        }
        {
          hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__lco__GoalInfo0_28);
        }
        {
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__lco__GoalInfo0_28, &transform_hlds__lco__GoalInfo1_29);
        }
        {
          transform_hlds__lco__Var_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__lco__AddrVar_13);
        }
        {
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__Var_48, transform_hlds__lco__GoalInfo1_29, &transform_hlds__lco__GoalInfo_30);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__lco__Goal_11 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_27));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_30));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
  MR_Word transform_hlds__lco__GroundVar_9,
  MR_Integer transform_hlds__lco__TargetArgNum_10,
  MR_Integer transform_hlds__lco__CurArgNum_11,
  MR_Word transform_hlds__lco__ArgTypes_12,
  MR_Word * transform_hlds__lco__ArgVars_13,
  MR_Word * transform_hlds__lco__ArgModes_14,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__ArgTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__lco__ArgVars_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__ArgModes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22;
      }
    else
      {
        MR_Word transform_hlds__lco__ArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ArgTypesTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__ArgTypes_12, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__ArgVarsTail_18;
        MR_Word transform_hlds__lco__ArgModesTail_19;
        MR_Word transform_hlds__lco__Var_20;
        MR_Word transform_hlds__lco__ArgMode_21;
        MR_Integer transform_hlds__lco__Var_24 = (transform_hlds__lco__CurArgNum_11 + (MR_Integer) 1);
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;

        {
          transform_hlds__lco__make_unification_args_8_p_0(transform_hlds__lco__GroundVar_9, transform_hlds__lco__TargetArgNum_10, transform_hlds__lco__Var_24, transform_hlds__lco__ArgTypesTail_17, &transform_hlds__lco__ArgVarsTail_18, &transform_hlds__lco__ArgModesTail_19, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25);
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__CurArgNum_11 == transform_hlds__lco__TargetArgNum_10);
        if (transform_hlds__lco__succeeded)
          {
            MR_Word transform_hlds__lco__Var_37;
            MR_Word transform_hlds__lco__Var_38;
            MR_Word transform_hlds__lco__Var_39;
            MR_Word transform_hlds__lco__Var_40;
            MR_Word transform_hlds__lco__Var_41;
            MR_Word transform_hlds__lco__Var_42;

            transform_hlds__lco__Var_20 = transform_hlds__lco__GroundVar_9;
            {
              transform_hlds__lco__Var_38 = parse_tree__prog_mode__free_inst_0_f_0();
            }
            {
              transform_hlds__lco__Var_39 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              transform_hlds__lco__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_37, 0) = ((MR_Box) (transform_hlds__lco__Var_38));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_37, 1) = ((MR_Box) (transform_hlds__lco__Var_39));
            }
            {
              transform_hlds__lco__Var_41 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              transform_hlds__lco__Var_42 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              transform_hlds__lco__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_40, 0) = ((MR_Box) (transform_hlds__lco__Var_41));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_40, 1) = ((MR_Box) (transform_hlds__lco__Var_42));
            }
            {
              transform_hlds__lco__ArgMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ArgMode_21, 0) = ((MR_Box) (transform_hlds__lco__Var_37));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ArgMode_21, 1) = ((MR_Box) (transform_hlds__lco__Var_40));
            }
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_23 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25;
          }
        else
          {
            MR_Word transform_hlds__lco__Var_45;
            MR_Word transform_hlds__lco__Var_46;
            MR_Word transform_hlds__lco__Var_47;
            MR_Word transform_hlds__lco__Var_48;
            MR_Word transform_hlds__lco__Var_49;
            MR_Word transform_hlds__lco__Var_50;

            {
              hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__lco__ArgType_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__Var_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_25_25, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
            }
            {
              transform_hlds__lco__Var_46 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              transform_hlds__lco__Var_47 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              transform_hlds__lco__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_45, 0) = ((MR_Box) (transform_hlds__lco__Var_46));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_45, 1) = ((MR_Box) (transform_hlds__lco__Var_47));
            }
            {
              transform_hlds__lco__Var_49 = parse_tree__prog_mode__free_inst_0_f_0();
            }
            {
              transform_hlds__lco__Var_50 = parse_tree__prog_mode__ground_inst_0_f_0();
            }
            {
              transform_hlds__lco__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_48, 0) = ((MR_Box) (transform_hlds__lco__Var_49));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_48, 1) = ((MR_Box) (transform_hlds__lco__Var_50));
            }
            {
              transform_hlds__lco__ArgMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ArgMode_21, 0) = ((MR_Box) (transform_hlds__lco__Var_45));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ArgMode_21, 1) = ((MR_Box) (transform_hlds__lco__Var_48));
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__lco__ArgVars_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgVarsTail_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__lco__ArgModes_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ArgMode_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__ArgModesTail_19));
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_5,
  MR_Word transform_hlds__lco__InstMap0_6,
  MR_Word transform_hlds__lco__InstMap_7,
  MR_Word transform_hlds__lco__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__Inst0_10;
    MR_Word transform_hlds__lco__Inst_11;
    MR_Word transform_hlds__lco___StoreTarget_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));

    {
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap0_6, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst0_10);
    }
    {
      transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst0_10);
    }
    transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
    if (transform_hlds__lco__succeeded)
      {
        {
          transform_hlds__lco__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__lco__InstMap_7);
        }
        if (transform_hlds__lco__succeeded)
          {
            {
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__lco__InstMap_7, transform_hlds__lco__Var_8, &transform_hlds__lco__Inst_11);
            }
            {
              transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_5, transform_hlds__lco__Inst_11);
            }
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_10,
  MR_Word transform_hlds__lco__VariantMap_11,
  MR_Word transform_hlds__lco__VarToAddr_12,
  MR_Word transform_hlds__lco__InstMap0_13,
  MR_Word transform_hlds__lco__Case0_14,
  MR_Word * transform_hlds__lco__Case_15,
  MR_Word * transform_hlds__lco__Changed_16,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_23)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_14, (MR_Integer) 2)));
    MR_Word transform_hlds__lco__Goal_21;

    {
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, transform_hlds__lco__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goal0_20, &transform_hlds__lco__Goal_21, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__lco__STATE_VARIABLE_ProcInfo_23);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lco__Case_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Goal_21));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
  MR_Word transform_hlds__lco__Bag_3,
  MR_Word transform_hlds__lco__Var_4)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__Var_7;

    {
      mercury__bag__count_value_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], transform_hlds__lco__Bag_3, ((MR_Box) (transform_hlds__lco__Var_4)), &transform_hlds__lco__Var_7);
    }
    transform_hlds__lco__succeeded = ((MR_Integer) 1 == transform_hlds__lco__Var_7);
    return transform_hlds__lco__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_3,
  MR_Word transform_hlds__lco__UnifyMode_4)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__InitInstX_5;
    MR_Word transform_hlds__lco__FinalInstX_6;
    MR_Word transform_hlds__lco__InitInstY_7;
    MR_Word transform_hlds__lco__FinalInstY_8;
    MR_Word transform_hlds__lco__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UnifyMode_4, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__UnifyMode_4, (MR_Integer) 1)));

    transform_hlds__lco__InitInstX_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_9, (MR_Integer) 0)));
    transform_hlds__lco__FinalInstX_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_9, (MR_Integer) 1)));
    transform_hlds__lco__InitInstY_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_10, (MR_Integer) 0)));
    transform_hlds__lco__FinalInstY_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_10, (MR_Integer) 1)));
    {
      transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstX_5);
    }
    if (transform_hlds__lco__succeeded)
      {
        {
          transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__InitInstY_7);
        }
        if (transform_hlds__lco__succeeded)
          {
            {
              transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstX_6);
            }
            if (transform_hlds__lco__succeeded)
              {
                transform_hlds__lco__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__lco__ModuleInfo_3, transform_hlds__lco__FinalInstY_8);
              }
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
  MR_Box transform_hlds__lco__closure_arg)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_construct__1281__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
  MR_Word transform_hlds__lco__ConstInfo_9,
  MR_Word transform_hlds__lco__Subst_10,
  MR_Word transform_hlds__lco__Goal0_11,
  MR_Word * transform_hlds__lco__Goal_12,
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_61,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_62)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_11, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__LHS_17;
    MR_Word transform_hlds__lco__RHS0_18;
    MR_Word transform_hlds__lco__Mode_19;
    MR_Word transform_hlds__lco__UnifyContext_21;
    MR_Word transform_hlds__lco__Var_22;
    MR_Word transform_hlds__lco__ConsId_23;
    MR_Word transform_hlds__lco__ArgVars_24;
    MR_Word transform_hlds__lco__ArgModes_25;
    MR_Word transform_hlds__lco__How_26;
    MR_Word transform_hlds__lco__IsUnique_27;
    MR_Word transform_hlds__lco__TermSizeSlot_29;
    MR_Word transform_hlds__lco__Unification0_20;
    MR_Word transform_hlds__lco__SubInfo0_28;

    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__lco__succeeded)
      {
        transform_hlds__lco__LHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 0)));
        transform_hlds__lco__RHS0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 1)));
        transform_hlds__lco__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 2)));
        transform_hlds__lco__Unification0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 3)));
        transform_hlds__lco__UnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr0_15, (MR_Integer) 4)));
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification0_20)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 0)));
            transform_hlds__lco__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 1)));
            transform_hlds__lco__ArgVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 2)));
            transform_hlds__lco__ArgModes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 3)));
            transform_hlds__lco__How_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 4)));
            transform_hlds__lco__IsUnique_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 5)));
            transform_hlds__lco__SubInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification0_20, (MR_Integer) 6)));
            if ((transform_hlds__lco__SubInfo0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                transform_hlds__lco__TermSizeSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                transform_hlds__lco__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__lco__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 0)));

                transform_hlds__lco__TermSizeSlot_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo0_28, (MR_Integer) 1)));
                transform_hlds__lco__succeeded = (transform_hlds__lco__Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (transform_hlds__lco__succeeded)
      {
        MR_Word transform_hlds__lco__HighLevelData_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__VarTypes0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__VarType_32;
        MR_Word transform_hlds__lco__InstMapDelta0_33;
        MR_Word transform_hlds__lco__UpdatedArgVars_34;
        MR_Word transform_hlds__lco__AddrFields_35;
        MR_Word transform_hlds__lco__InstMapDelta_36;
        MR_Word transform_hlds__lco__VarTypes_37;
        MR_Word transform_hlds__lco__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__Var_87 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) & (MR_Integer) 7);
        MR_Word transform_hlds__lco__Var_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_9, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__lco__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__Var_94;
        MR_Word transform_hlds__lco__Var_95;
        MR_Word transform_hlds__lco__Var_96;
        MR_Word transform_hlds__lco__Var_98;
        MR_Word transform_hlds__lco__Var_99;
        MR_Word transform_hlds__lco__Var_97;

        {
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_31, transform_hlds__lco__Var_22, &transform_hlds__lco__VarType_32);
        }
        {
          transform_hlds__lco__InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_16);
        }
        {
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_10, transform_hlds__lco__HighLevelData_30, transform_hlds__lco__VarType_32, transform_hlds__lco__ConsId_23, (MR_Integer) 1, transform_hlds__lco__ArgVars_24, &transform_hlds__lco__UpdatedArgVars_34, &transform_hlds__lco__AddrFields_35, transform_hlds__lco__InstMapDelta0_33, &transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_0_59, transform_hlds__lco__STATE_VARIABLE_AddrVarFieldIds_60, transform_hlds__lco__VarTypes0_31, &transform_hlds__lco__VarTypes_37);
        }
        transform_hlds__lco__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
        transform_hlds__lco__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
        transform_hlds__lco__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
        transform_hlds__lco__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
        transform_hlds__lco__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
        transform_hlds__lco__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__lco__STATE_VARIABLE_Info_62 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__Var_94));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__Var_95));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Var_96));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_37));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__Var_98));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__Var_99));
        }
        if ((transform_hlds__lco__AddrFields_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__lco__Goal_12 = transform_hlds__lco__Goal0_11;
        else
          {
            MR_Word transform_hlds__lco__SubInfo_40;
            MR_Word transform_hlds__lco__Unification_41;
            MR_Word transform_hlds__lco__RHS_47;
            MR_Word transform_hlds__lco__GoalExpr_57;
            MR_Word transform_hlds__lco__GoalInfo_58;
            MR_Word transform_hlds__lco__Var_67;

            {
              transform_hlds__lco__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_67, 0) = ((MR_Box) (transform_hlds__lco__AddrFields_35));
            }
            {
              transform_hlds__lco__SubInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 0) = ((MR_Box) (transform_hlds__lco__Var_67));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_40, 1) = ((MR_Box) (transform_hlds__lco__TermSizeSlot_29));
            }
            {
              transform_hlds__lco__Unification_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 0) = ((MR_Box) (transform_hlds__lco__Var_22));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 1) = ((MR_Box) (transform_hlds__lco__ConsId_23));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgVars_34));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 3) = ((MR_Box) (transform_hlds__lco__ArgModes_25));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 4) = ((MR_Box) (transform_hlds__lco__How_26));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 5) = ((MR_Box) (transform_hlds__lco__IsUnique_27));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_41, 6) = ((MR_Box) (transform_hlds__lco__SubInfo_40));
            }
            switch (MR_tag((MR_Word) transform_hlds__lco__RHS0_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "var RHS");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__lco__RHSConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 0)));
                  MR_Word transform_hlds__lco__IsExistConstr_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 1)));
                  MR_Word transform_hlds__lco__RHSVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS0_18, (MR_Integer) 2)));
                  MR_Word transform_hlds__lco__RHSVars_46;
                  MR_Word transform_hlds__lco__Var_71;

                  {
                    transform_hlds__lco__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_71, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[7]));
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_71, 1) = ((MR_Box) (transform_hlds__lco__update_construct_8_p_0_1));
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_71, 3) = ((MR_Box) (transform_hlds__lco__ConsId_23));
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_71, 4) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
                  }
                  {
                    mercury__require__expect_3_p_0(transform_hlds__lco__Var_71, (MR_String) "transform_hlds.lco", (MR_String) "update_construct: cons_id mismatch");
                  }
                  {
                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_10, transform_hlds__lco__RHSVars0_45, &transform_hlds__lco__RHSVars_46);
                  }
                  {
                    transform_hlds__lco__RHS_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 0) = ((MR_Box) (transform_hlds__lco__RHSConsId_43));
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 1) = ((MR_Box) (transform_hlds__lco__IsExistConstr_44));
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__RHS_47, 2) = ((MR_Box) (transform_hlds__lco__RHSVars_46));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "lambda RHS");
                    return;
                  }
                }
                break;
            }
            {
              transform_hlds__lco__GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 0) = ((MR_Box) (transform_hlds__lco__LHS_17));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 1) = ((MR_Box) (transform_hlds__lco__RHS_47));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 2) = ((MR_Box) (transform_hlds__lco__Mode_19));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 3) = ((MR_Box) (transform_hlds__lco__Unification_41));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_57, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_21));
            }
            {
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_36, transform_hlds__lco__GoalInfo0_16, &transform_hlds__lco__GoalInfo_58);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__lco__Goal_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_57));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_58));
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "not construct");
          return;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
  MR_Word transform_hlds__lco__Subst_1,
  MR_Word transform_hlds__lco__HighLevelData_2,
  MR_Word transform_hlds__lco__VarType_3,
  MR_Word transform_hlds__lco__ConsId_4,
  MR_Integer transform_hlds__lco__ArgNum_5,
  MR_Word transform_hlds__lco__HeadVar__6_6,
  MR_Word * transform_hlds__lco__HeadVar__7_7,
  MR_Word * transform_hlds__lco__HeadVar__8_8,
  MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10,
  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12,
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_14)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13;
        *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11;
        *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9;
      }
    else
      {
        MR_Word transform_hlds__lco__OrigVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__OrigVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__UpdatedVar_36;
        MR_Word transform_hlds__lco__UpdatedVars_37;
        MR_Word transform_hlds__lco__AddrArgsTail_42;
        MR_Integer transform_hlds__lco__Var_52 = (transform_hlds__lco__ArgNum_5 + (MR_Integer) 1);
        MR_Word transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
        MR_Word transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
        MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
        MR_Word transform_hlds__lco__AddrVar_43;
        MR_Word transform_hlds__lco__TypeInfo_65_65;
        MR_Box transform_hlds__lco__conv0_AddrVar_43;

        {
          transform_hlds__lco__update_construct_args_14_p_0(transform_hlds__lco__Subst_1, transform_hlds__lco__HighLevelData_2, transform_hlds__lco__VarType_3, transform_hlds__lco__ConsId_4, transform_hlds__lco__Var_52, transform_hlds__lco__OrigVars_35, &transform_hlds__lco__UpdatedVars_37, &transform_hlds__lco__AddrArgsTail_42, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_0_9, &transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_0_11, &transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_13, &transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55);
        }
        transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
        {
          transform_hlds__lco__succeeded = mercury__map__search_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__Subst_1, ((MR_Box) (transform_hlds__lco__OrigVar_34)), &transform_hlds__lco__conv0_AddrVar_43);
        }
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__AddrVar_43 = ((MR_Word) transform_hlds__lco__conv0_AddrVar_43);
            transform_hlds__lco__succeeded = MR_TRUE;
          }
        if (transform_hlds__lco__succeeded)
          {
            MR_Word transform_hlds__lco__FinalInst_44;
            MR_Word transform_hlds__lco__Var_63;

            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__AddrVar_43;
            switch (transform_hlds__lco__HighLevelData_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    transform_hlds__lco__FinalInst_44 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
                  *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__lco__TypeCtorInfo_12_76;
                  MR_Word transform_hlds__lco__BoundInst_45;
                  MR_Word transform_hlds__lco__Var_59;
                  MR_Integer transform_hlds__lco__Arity_71;
                  MR_Word transform_hlds__lco__ArgInsts0_72;
                  MR_Word transform_hlds__lco__ArgInsts_73;
                  MR_Word transform_hlds__lco__Var_74;
                  MR_Word transform_hlds__lco__Var_75;

                  {
                    transform_hlds__lco__Arity_71 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
                  }
                  {
                    transform_hlds__lco__Var_74 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
                  transform_hlds__lco__TypeCtorInfo_12_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                  {
                    mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__Arity_71, ((MR_Box) (transform_hlds__lco__Var_74)), &transform_hlds__lco__ArgInsts0_72);
                  }
                  {
                    transform_hlds__lco__Var_75 = parse_tree__prog_mode__free_inst_0_f_0();
                  }
                  {
                    mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_76, transform_hlds__lco__ArgInsts0_72, transform_hlds__lco__ArgNum_5, ((MR_Box) (transform_hlds__lco__Var_75)), &transform_hlds__lco__ArgInsts_73);
                  }
                  {
                    transform_hlds__lco__BoundInst_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
                    MR_hl_field(MR_mktag(0), transform_hlds__lco__BoundInst_45, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_73));
                  }
                  {
                    transform_hlds__lco__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_59, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_45));
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__lco__FinalInst_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__FinalInst_44, 3) = ((MR_Box) (transform_hlds__lco__Var_59));
                  }
                  {
                    hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__VarType_3, transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55, transform_hlds__lco__STATE_VARIABLE_VarTypes_14);
                  }
                }
                break;
            }
            {
              hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__lco__AddrVar_43, transform_hlds__lco__FinalInst_44, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53, transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10);
            }
            {
              transform_hlds__lco__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_63, 0) = ((MR_Box) (transform_hlds__lco__VarType_3));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_63, 1) = ((MR_Box) (transform_hlds__lco__ConsId_4));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_63, 2) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0, ((MR_Box) (transform_hlds__lco__OrigVar_34)), ((MR_Box) (transform_hlds__lco__Var_63)), transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54, transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_5));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__AddrArgsTail_42));
            }
          }
        else
          {
            transform_hlds__lco__UpdatedVar_36 = transform_hlds__lco__OrigVar_34;
            *transform_hlds__lco__HeadVar__8_8 = transform_hlds__lco__AddrArgsTail_42;
            *transform_hlds__lco__STATE_VARIABLE_VarTypes_14 = transform_hlds__lco__STATE_VARIABLE_VarTypes_55_55;
            *transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_12 = transform_hlds__lco__STATE_VARIABLE_AddrFieldIds_54_54;
            *transform_hlds__lco__STATE_VARIABLE_InstMapDelta_10 = transform_hlds__lco__STATE_VARIABLE_InstMapDelta_53_53;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__lco__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedVar_36));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedVars_37));
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_mode_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
    return transform_hlds__lco__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_5_p_0(
  MR_Word transform_hlds__lco__Goal_6,
  MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_32,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_33)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_66_66;
    MR_Word transform_hlds__lco__TypeInfo_71_71;
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__Unification_14;
    MR_Word transform_hlds__lco__ConstructedVar_16;
    MR_Word transform_hlds__lco__ConsId_17;
    MR_Word transform_hlds__lco__ConstructArgs_18;
    MR_Word transform_hlds__lco__ArgModes_19;
    MR_Word transform_hlds__lco__SubInfo_22;
    MR_Word transform_hlds__lco__ModuleInfo_24;
    MR_Word transform_hlds__lco__ConsTag_25;
    MR_Word transform_hlds__lco__Var_35;
    MR_Word transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53;
    MR_Word transform_hlds__lco___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_6, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__Var_11;
    MR_Word transform_hlds__lco__Var_12;
    MR_Word transform_hlds__lco__Var_13;
    MR_Word transform_hlds__lco__Var_15;
    MR_Word transform_hlds__lco__Var_20;
    MR_Word transform_hlds__lco__Var_21;
    MR_Word transform_hlds__lco__Var_60;
    MR_Word transform_hlds__lco__Var_61;
    MR_Word transform_hlds__lco__Var_62;
    MR_Word transform_hlds__lco__Var_63;
    MR_Word transform_hlds__lco__Var_64;

    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__lco__succeeded)
      {
        transform_hlds__lco__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
        transform_hlds__lco__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
        transform_hlds__lco__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
        transform_hlds__lco__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
        transform_hlds__lco__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Unification_14)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__ConstructedVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 0)));
            transform_hlds__lco__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 1)));
            transform_hlds__lco__ConstructArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 2)));
            transform_hlds__lco__ArgModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 3)));
            transform_hlds__lco__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 4)));
            transform_hlds__lco__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 5)));
            transform_hlds__lco__SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Unification_14, (MR_Integer) 6)));
            if ((transform_hlds__lco__SubInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              transform_hlds__lco__succeeded = MR_TRUE;
            else
              {
                MR_Word transform_hlds__lco__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 0)));
                MR_Word transform_hlds__lco__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SubInfo_22, (MR_Integer) 1)));

                transform_hlds__lco__succeeded = (transform_hlds__lco__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (transform_hlds__lco__succeeded)
              {
                transform_hlds__lco__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 0)));
                transform_hlds__lco__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 1)));
                transform_hlds__lco__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 2)));
                transform_hlds__lco__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 3)));
                transform_hlds__lco__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 4)));
                transform_hlds__lco__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_32, (MR_Integer) 5)));
                transform_hlds__lco__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0;
                {
                  transform_hlds__lco__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_35, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[6]));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_35, 1) = ((MR_Box) (transform_hlds__lco__acceptable_construct_unification_5_p_0_1));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_35, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_24));
                }
                {
                  transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeCtorInfo_66_66, transform_hlds__lco__Var_35, transform_hlds__lco__ArgModes_19);
                }
                if (transform_hlds__lco__succeeded)
                  {
                    {
                      transform_hlds__lco__ConsTag_25 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(transform_hlds__lco__ModuleInfo_24, transform_hlds__lco__ConsId_17);
                    }
                    switch (MR_tag((MR_Word) transform_hlds__lco__ConsTag_25)) {
                      default:
                        transform_hlds__lco__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(transform_hlds__lco__ConsTag_25)) {
                          default:
                            transform_hlds__lco__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            transform_hlds__lco__succeeded = MR_TRUE;
                            break;
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__ConsTag_25, (MR_Integer) 0)))) {
                          default:
                            transform_hlds__lco__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 11:
                            transform_hlds__lco__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 13:
                            transform_hlds__lco__succeeded = MR_TRUE;
                            break;
                        }
                        break;
                    }
                    if (transform_hlds__lco__succeeded)
                      {
                        transform_hlds__lco__TypeInfo_71_71 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
                        {
                          mercury__bag__delete_3_p_0(transform_hlds__lco__TypeInfo_71_71, ((MR_Box) (transform_hlds__lco__ConstructedVar_16)), transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_0_30, &transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53);
                        }
                        {
                          mercury__bag__insert_list_3_p_0(transform_hlds__lco__TypeInfo_71_71, transform_hlds__lco__ConstructArgs_18, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_53_53, transform_hlds__lco__STATE_VARIABLE_UnifyInputVars_31);
                        }
                        *transform_hlds__lco__STATE_VARIABLE_Info_33 = transform_hlds__lco__STATE_VARIABLE_Info_0_32;
                        transform_hlds__lco__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
  MR_Word transform_hlds__lco___Info_10,
  MR_Word transform_hlds__lco___ConstInfo_11,
  MR_Word transform_hlds__lco__Goal_12,
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(transform_hlds__lco__Goal_12, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
    }
  }
}

static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
  MR_Word transform_hlds__lco__Goal_12,
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23,
  MR_Word transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25,
  MR_Word transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_DelayForVars_27)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_31_31;
    MR_Word transform_hlds__lco__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__GoalVars_18;
    MR_Word transform_hlds__lco__Intersection_19;
    MR_Word transform_hlds__lco___GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_12, (MR_Integer) 0)));

    {
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__lco__Goal_12, &transform_hlds__lco__GoalVars_18);
    }
    transform_hlds__lco__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__GoalVars_18, &transform_hlds__lco__Intersection_19);
    }
    {
      transform_hlds__lco__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__Intersection_19);
    }
    if (transform_hlds__lco__succeeded)
      {
        {
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24, transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25);
        }
        *transform_hlds__lco__STATE_VARIABLE_DelayForVars_27 = transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26;
        *transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23 = transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22;
      }
    else
      {
        MR_Word transform_hlds__lco__InstmapDelta_20;
        MR_Word transform_hlds__lco__ChangedVars_21;

        {
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__lco__Goal_12)), transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_0_22, transform_hlds__lco__STATE_VARIABLE_RevDependentGoals_23);
        }
        {
          transform_hlds__lco__InstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo_17);
        }
        {
          hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__lco__InstmapDelta_20, &transform_hlds__lco__ChangedVars_21);
        }
        {
          parse_tree__set_of_var__union_3_p_0(transform_hlds__lco__TypeCtorInfo_31_31, transform_hlds__lco__ChangedVars_21, transform_hlds__lco__STATE_VARIABLE_DelayForVars_0_26, transform_hlds__lco__STATE_VARIABLE_DelayForVars_27);
        }
        *transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_25 = transform_hlds__lco__STATE_VARIABLE_RevNonDependentGoals_0_24;
      }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_proc_if_permitted_11_p_0(
  MR_Word transform_hlds__lco__LowerSCCVariants_12,
  MR_Word transform_hlds__lco__SCC_13,
  MR_Word transform_hlds__lco__CurProc_14,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27,
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29,
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Permitted_0_32,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_33)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    switch (transform_hlds__lco__STATE_VARIABLE_Permitted_0_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26;
          *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28;
          *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30;
          *transform_hlds__lco__STATE_VARIABLE_Permitted_33 = transform_hlds__lco__STATE_VARIABLE_Permitted_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__lco__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 0)));
          MR_Integer transform_hlds__lco__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CurProc_14, (MR_Integer) 1)));
          MR_Word transform_hlds__lco__PredInfo_21;
          MR_Word transform_hlds__lco__ProcInfo0_22;
          MR_Word transform_hlds__lco__PredStatus_23;
          MR_Word transform_hlds__lco__DefInThisModule_24;
          MR_Word transform_hlds__lco__Detism_25;

          {
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__lco__PredId_19, transform_hlds__lco__ProcId_20, &transform_hlds__lco__PredInfo_21, &transform_hlds__lco__ProcInfo0_22);
          }
          {
            hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__lco__PredInfo_21, &transform_hlds__lco__PredStatus_23);
          }
          {
            transform_hlds__lco__DefInThisModule_24 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__lco__PredStatus_23);
          }
          {
            hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_22, &transform_hlds__lco__Detism_25);
          }
          transform_hlds__lco__succeeded = (transform_hlds__lco__DefInThisModule_24 == (MR_Integer) 0);
          if (!(transform_hlds__lco__succeeded))
            {
              if (((MR_Integer) 51 & (((MR_Integer) 1 << transform_hlds__lco__Detism_25))))
                {
                  transform_hlds__lco__succeeded = MR_TRUE;
                }
              else
                transform_hlds__lco__succeeded = MR_FALSE;
              transform_hlds__lco__succeeded = !(transform_hlds__lco__succeeded);
            }
          if (transform_hlds__lco__succeeded)
            {
              *transform_hlds__lco__STATE_VARIABLE_Permitted_33 = (MR_Integer) 0;
              *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30;
              *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29 = transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28;
              *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26;
            }
          else
            {
              transform_hlds__lco__lco_proc_12_p_0(transform_hlds__lco__LowerSCCVariants_12, transform_hlds__lco__SCC_13, transform_hlds__lco__CurProc_14, transform_hlds__lco__PredInfo_21, transform_hlds__lco__ProcInfo0_22, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_27, transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_28, transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_29, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_30, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_31, transform_hlds__lco__STATE_VARIABLE_Permitted_33);
            }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_proc_12_p_0(
  MR_Word transform_hlds__lco__LowerSCCVariants_13,
  MR_Word transform_hlds__lco__SCC_14,
  MR_Word transform_hlds__lco__CurProc_15,
  MR_Word transform_hlds__lco__PredInfo_16,
  MR_Word transform_hlds__lco__ProcInfo0_17,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45,
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47,
  MR_Word transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Permitted_50)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__VarSet0_22;
    MR_Word transform_hlds__lco__VarTypes0_23;
    MR_Word transform_hlds__lco__HeadVars_24;
    MR_Word transform_hlds__lco__ArgModes_25;
    MR_Word transform_hlds__lco__ArgTypes_26;
    MR_Word transform_hlds__lco__OutputHeadVars_28;
    MR_Word transform_hlds__lco__CurProcDetism_29;
    MR_Word transform_hlds__lco__Globals_30;
    MR_Word transform_hlds__lco__HighLevelData_31;
    MR_Word transform_hlds__lco__UnboxedFloat_32;
    MR_Word transform_hlds__lco__AllowFloatAddr_33;
    MR_Word transform_hlds__lco__ConstInfo_34;
    MR_Word transform_hlds__lco__Info0_35;
    MR_Word transform_hlds__lco__Goal0_36;
    MR_Word transform_hlds__lco__Goal_37;
    MR_Word transform_hlds__lco__Info_38;
    MR_Word transform_hlds__lco__VarSet_39;
    MR_Word transform_hlds__lco__VarTypes_40;
    MR_Word transform_hlds__lco__Changed_41;
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_55_55;
    MR_Word transform_hlds__lco___InputHeadVars_27;

    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__VarSet0_22);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__VarTypes0_23);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__HeadVars_24);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__ArgModes_25);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes0_23, transform_hlds__lco__HeadVars_24, &transform_hlds__lco__ArgTypes_26);
    }
    {
      hlds__arg_info__compute_in_and_out_vars_6_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44, transform_hlds__lco__HeadVars_24, transform_hlds__lco__ArgModes_25, transform_hlds__lco__ArgTypes_26, &transform_hlds__lco___InputHeadVars_27, &transform_hlds__lco__OutputHeadVars_28);
    }
    {
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__CurProcDetism_29);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__lco__Globals_30);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_30, (MR_Integer) 264, &transform_hlds__lco__HighLevelData_31);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_30, (MR_Integer) 253, &transform_hlds__lco__UnboxedFloat_32);
    }
    switch (transform_hlds__lco__UnboxedFloat_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__lco__AllowFloatAddr_33 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        transform_hlds__lco__AllowFloatAddr_33 = (MR_Integer) 1;
        break;
    }
    {
      transform_hlds__lco__ConstInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 0) = ((MR_Box) (transform_hlds__lco__LowerSCCVariants_13));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 1) = ((MR_Box) (transform_hlds__lco__SCC_14));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 2) = ((MR_Box) (transform_hlds__lco__CurProc_15));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 3) = ((MR_Box) (transform_hlds__lco__PredInfo_16));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 4) = ((MR_Box) (transform_hlds__lco__ProcInfo0_17));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 5) = ((MR_Box) (transform_hlds__lco__OutputHeadVars_28));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_34, 6) = ((MR_Box) ((transform_hlds__lco__CurProcDetism_29 | ((((transform_hlds__lco__AllowFloatAddr_33 << (MR_Integer) 3)) | ((transform_hlds__lco__HighLevelData_31 << (MR_Integer) 4)))))));
    }
    {
      transform_hlds__lco__Info0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 0) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_44));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_0_46));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 2) = ((MR_Box) (transform_hlds__lco__VarSet0_22));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 3) = ((MR_Box) (transform_hlds__lco__VarTypes0_23));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Info0_35, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__Goal0_36);
    }
    {
      transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_36, &transform_hlds__lco__Goal_37, transform_hlds__lco__Info0_35, &transform_hlds__lco__Info_38, transform_hlds__lco__ConstInfo_34);
    }
    transform_hlds__lco__STATE_VARIABLE_ModuleInfo_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 0)));
    *transform_hlds__lco__STATE_VARIABLE_CurSCCVariants_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 1)));
    transform_hlds__lco__VarSet_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 2)));
    transform_hlds__lco__VarTypes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 3)));
    *transform_hlds__lco__STATE_VARIABLE_Permitted_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 4)));
    transform_hlds__lco__Changed_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_38, (MR_Integer) 5)));
    transform_hlds__lco__succeeded = (*transform_hlds__lco__STATE_VARIABLE_Permitted_50 == (MR_Integer) 1);
    if (transform_hlds__lco__succeeded)
      transform_hlds__lco__succeeded = (transform_hlds__lco__Changed_41 == (MR_Integer) 1);
    if (transform_hlds__lco__succeeded)
      {
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_68_68;
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69;
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70;
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_72_72;
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_74_74;

        {
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_39, transform_hlds__lco__ProcInfo0_17, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_68_68);
        }
        {
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_40, transform_hlds__lco__STATE_VARIABLE_ProcInfo_68_68, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69);
        }
        {
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_69_69, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70);
        }
        {
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ProcInfo_70_70, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_72_72);
        }
        {
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__lco__STATE_VARIABLE_ProcInfo_72_72, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_74_74, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__CurProc_15)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_74_74)), transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48, transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49);
        }
      }
    else
      {
        *transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_49 = transform_hlds__lco__STATE_VARIABLE_CurSCCUpdates_0_48;
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_45 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_55_55;
      }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word * transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_4,
  MR_Word transform_hlds__lco__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__lco__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__STATE_VARIABLE_Info_4 = transform_hlds__lco__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word transform_hlds__lco__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Case_12;
        MR_Word transform_hlds__lco__Cases_13;
        MR_Word transform_hlds__lco__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Case0_10, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__Goal_19;
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_22_22;

        {
          transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Goal0_18, &transform_hlds__lco__Goal_19, transform_hlds__lco__STATE_VARIABLE_Info_0_3, &transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__HeadVar__5_5);
        }
        {
          transform_hlds__lco__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 0) = ((MR_Box) (transform_hlds__lco__MainConsId_16));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 1) = ((MR_Box) (transform_hlds__lco__OtherConsIds_17));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Case_12, 2) = ((MR_Box) (transform_hlds__lco__Goal_19));
        }
        {
          transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_11, &transform_hlds__lco__Cases_13, transform_hlds__lco__STATE_VARIABLE_Info_22_22, transform_hlds__lco__STATE_VARIABLE_Info_4, transform_hlds__lco__HeadVar__5_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__lco__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Case_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Cases_13));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
  MR_Word transform_hlds__lco__Goal0_6,
  MR_Word * transform_hlds__lco__Goal_7,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_60,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_61,
  MR_Word transform_hlds__lco__ConstInfo_9)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__GoalExpr_16;

    switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
          *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
          *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
              *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__lco__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__lco__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));

              switch (transform_hlds__lco__ConjType_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__lco__Var_90;
                    MR_Word transform_hlds__lco__Var_91;
                    MR_Word transform_hlds__lco__Var_92;
                    MR_Word transform_hlds__lco__Var_93;
                    MR_Word transform_hlds__lco__Var_95;
                    MR_Word transform_hlds__lco__Var_94;

                    transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
                    transform_hlds__lco__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
                    transform_hlds__lco__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)));
                    transform_hlds__lco__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
                    transform_hlds__lco__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
                    transform_hlds__lco__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)));
                    transform_hlds__lco__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_60, (MR_Integer) 5)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      *transform_hlds__lco__STATE_VARIABLE_Info_61 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__Var_90));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__Var_91));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Var_92));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__Var_93));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__Var_95));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__lco__MaybeGoals_14;
                    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_75_75;

                    {
                      transform_hlds__lco__lco_in_conj_5_p_0(transform_hlds__lco__Goals0_13, &transform_hlds__lco__MaybeGoals_14, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__ConstInfo_9);
                    }
                    if ((transform_hlds__lco__MaybeGoals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word transform_hlds__lco__AllButLast_17;
                        MR_Word transform_hlds__lco__Last0_18;
                        MR_Box transform_hlds__lco__conv0_Last0_18;

                        {
                          transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_13, &transform_hlds__lco__AllButLast_17, &transform_hlds__lco__conv0_Last0_18);
                        }
                        if (transform_hlds__lco__succeeded)
                          {
                            transform_hlds__lco__Last0_18 = ((MR_Word) transform_hlds__lco__conv0_Last0_18);
                            transform_hlds__lco__succeeded = MR_TRUE;
                          }
                        if (transform_hlds__lco__succeeded)
                          {
                            MR_Word transform_hlds__lco__Last_19;
                            MR_Word transform_hlds__lco__Var_78;
                            MR_Word transform_hlds__lco__Var_79;

                            {
                              transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_18, &transform_hlds__lco__Last_19, transform_hlds__lco__STATE_VARIABLE_Info_75_75, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                            }
                            {
                              transform_hlds__lco__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_79, 0) = ((MR_Box) (transform_hlds__lco__Last_19));
                              MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              transform_hlds__lco__Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_17, transform_hlds__lco__Var_79);
                            }
                            {
                              transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Var_78));
                            }
                          }
                        else
                          {
                            transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
                            *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
                          }
                      }
                    else
                      {
                        MR_Word transform_hlds__lco__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals_14, (MR_Integer) 0)));

                        {
                          transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Goals_15));
                        }
                        *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_75_75;
                      }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__lco__Goals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__lco__AllButLast_83;
              MR_Word transform_hlds__lco__Last0_84;
              MR_Box transform_hlds__lco__conv1_Last0_84;

              {
                transform_hlds__lco__succeeded = mercury__list__split_last_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__Goals0_86, &transform_hlds__lco__AllButLast_83, &transform_hlds__lco__conv1_Last0_84);
              }
              if (transform_hlds__lco__succeeded)
                {
                  transform_hlds__lco__Last0_84 = ((MR_Word) transform_hlds__lco__conv1_Last0_84);
                  transform_hlds__lco__succeeded = MR_TRUE;
                }
              if (transform_hlds__lco__succeeded)
                {
                  MR_Word transform_hlds__lco__Var_70;
                  MR_Word transform_hlds__lco__Var_71;
                  MR_Word transform_hlds__lco__Last_82;

                  {
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Last0_84, &transform_hlds__lco__Last_82, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
                  {
                    transform_hlds__lco__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_71, 0) = ((MR_Box) (transform_hlds__lco__Last_82));
                    MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__lco__Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__AllButLast_83, transform_hlds__lco__Var_71);
                  }
                  {
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Var_70));
                  }
                }
              else
                {
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__lco__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__lco__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__lco__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__lco__Cases_23;

              {
                transform_hlds__lco__lco_in_cases_5_p_0(transform_hlds__lco__Cases0_22, &transform_hlds__lco__Cases_23, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
              {
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Var_20));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__CanFail_21));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Cases_23));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__lco__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__lco__SubGoal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__lco__FGT_33;
              MR_Word transform_hlds__lco__Var_32;

              transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__lco__succeeded)
                {
                  transform_hlds__lco__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 1)));
                  transform_hlds__lco__FGT_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_30, (MR_Integer) 2)));
                  switch (transform_hlds__lco__FGT_33) {
                    default:
                      transform_hlds__lco__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__lco__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      transform_hlds__lco__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (transform_hlds__lco__succeeded)
                {
                  transform_hlds__lco__GoalExpr_16 = transform_hlds__lco__GoalExpr0_10;
                  *transform_hlds__lco__STATE_VARIABLE_Info_61 = transform_hlds__lco__STATE_VARIABLE_Info_0_60;
                }
              else
                {
                  MR_Word transform_hlds__lco__SubGoal_34;

                  {
                    transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__SubGoal0_31, &transform_hlds__lco__SubGoal_34, transform_hlds__lco__STATE_VARIABLE_Info_0_60, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
                  }
                  {
                    transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Reason_30));
                    MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_34));
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__lco__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__lco__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__lco__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__lco__Else0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word transform_hlds__lco__Then_28;
              MR_Word transform_hlds__lco__Else_29;
              MR_Word transform_hlds__lco__STATE_VARIABLE_Info_66_66;

              {
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Then0_26, &transform_hlds__lco__Then_28, transform_hlds__lco__STATE_VARIABLE_Info_0_60, &transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__ConstInfo_9);
              }
              {
                transform_hlds__lco__lco_in_goal_5_p_0(transform_hlds__lco__Else0_27, &transform_hlds__lco__Else_29, transform_hlds__lco__STATE_VARIABLE_Info_66_66, transform_hlds__lco__STATE_VARIABLE_Info_61, transform_hlds__lco__ConstInfo_9);
              }
              {
                transform_hlds__lco__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__lco__Vars_24));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__lco__Cond_25));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__lco__Then_28));
                MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__lco__Else_29));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_in_goal\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lco__Goal_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_11));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31;
    MR_Word transform_hlds__lco__conv6_STATE_VARIABLE_Info_33;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco__acceptable_construct_unification_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv6_STATE_VARIABLE_Info_33);
    }
    if (transform_hlds__lco__succeeded)
      {
        *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv7_STATE_VARIABLE_UnifyInputVars_31));
        *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv6_STATE_VARIABLE_Info_33));
        transform_hlds__lco__succeeded = MR_TRUE;
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5,
  MR_Box transform_hlds__lco__wrapper_arg_6,
  MR_Box * transform_hlds__lco__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23;
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25;
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27;

    {
      transform_hlds__lco__partition_dependent_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27);
    }
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_RevDependentGoals_23));
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_RevNonDependentGoals_25));
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_DelayForVars_27));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
  MR_Word transform_hlds__lco__Goals0_6,
  MR_Word * transform_hlds__lco__MaybeGoals_7,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_26,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_27,
  MR_Word transform_hlds__lco__ConstInfo_9)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Word transform_hlds__lco__RevGoals0_10;
    MR_Word transform_hlds__lco__RecGoal_12;
    MR_Word transform_hlds__lco__RecOutArgs_13;
    MR_Word transform_hlds__lco__RevBeforeGoals_14;
    MR_Word transform_hlds__lco__RevAfterDependentGoals_18;
    MR_Word transform_hlds__lco__RevAfterNonDependentGoals_19;
    MR_Word transform_hlds__lco__UnifyInputVars_21;
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_34_34;
    MR_Word transform_hlds__lco__TypeCtorInfo_40_40;
    MR_Word transform_hlds__lco__TypeInfo_48_48;
    MR_Word transform_hlds__lco__TypeInfo_49_49;
    MR_Word transform_hlds__lco__TypeInfo_55_55;
    MR_Word transform_hlds__lco__TypeInfo_56_56;
    MR_Word transform_hlds__lco__TypeCtorInfo_57_57;
    MR_Word transform_hlds__lco__AfterGoals_11;
    MR_Word transform_hlds__lco__DelayForVars0_17;
    MR_Word transform_hlds__lco__Var_29;
    MR_Word transform_hlds__lco__Var_30;
    MR_Word transform_hlds__lco__Var_31;
    MR_Word transform_hlds__lco__Var_32;
    MR_Word transform_hlds__lco__Var_33;
    MR_Word transform_hlds__lco__Var_15;
    MR_Word transform_hlds__lco__Var_16;
    MR_Word transform_hlds__lco___DelayForVars_20;
    MR_Box transform_hlds__lco__conv5_RevAfterDependentGoals_18;
    MR_Box transform_hlds__lco__conv4_RevAfterNonDependentGoals_19;
    MR_Box transform_hlds__lco__conv3__DelayForVars_20;
    MR_Box transform_hlds__lco__conv9_UnifyInputVars_21;
    MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34;

    {
      mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__Goals0_6, &transform_hlds__lco__RevGoals0_10);
    }
    {
      transform_hlds__lco__succeeded = transform_hlds__lco__divide_rev_conj_8_p_0(transform_hlds__lco__STATE_VARIABLE_Info_0_26, transform_hlds__lco__ConstInfo_9, transform_hlds__lco__RevGoals0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lco__AfterGoals_11, &transform_hlds__lco__RecGoal_12, &transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__RevBeforeGoals_14);
    }
    if (transform_hlds__lco__succeeded)
      {
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__AfterGoals_11)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 0)));
            transform_hlds__lco__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__AfterGoals_11, (MR_Integer) 1)));
            transform_hlds__lco__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__lco__TypeCtorInfo_40_40, transform_hlds__lco__RecOutArgs_13, &transform_hlds__lco__DelayForVars0_17);
            }
            transform_hlds__lco__Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            transform_hlds__lco__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            transform_hlds__lco__TypeInfo_48_48 = (MR_Word) &transform_hlds__lco_scalar_common_1[2];
            transform_hlds__lco__TypeInfo_49_49 = (MR_Word) &transform_hlds__lco_scalar_common_1[4];
            {
              transform_hlds__lco__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_29, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[2]));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_29, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_29, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_29, 4) = ((MR_Box) (transform_hlds__lco__ConstInfo_9));
            }
            {
              mercury__list__foldl3_8_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_48_48, transform_hlds__lco__TypeInfo_49_49, transform_hlds__lco__Var_29, transform_hlds__lco__AfterGoals_11, ((MR_Box) (transform_hlds__lco__Var_30)), &transform_hlds__lco__conv5_RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__Var_31)), &transform_hlds__lco__conv4_RevAfterNonDependentGoals_19, ((MR_Box) (transform_hlds__lco__DelayForVars0_17)), &transform_hlds__lco__conv3__DelayForVars_20);
            }
            transform_hlds__lco__RevAfterDependentGoals_18 = ((MR_Word) transform_hlds__lco__conv5_RevAfterDependentGoals_18);
            transform_hlds__lco__RevAfterNonDependentGoals_19 = ((MR_Word) transform_hlds__lco__conv4_RevAfterNonDependentGoals_19);
            transform_hlds__lco___DelayForVars_20 = ((MR_Word) transform_hlds__lco__conv3__DelayForVars_20);
            transform_hlds__lco__Var_32 = (MR_Word) &transform_hlds__lco_scalar_common_2[13];
            transform_hlds__lco__TypeInfo_55_55 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
            {
              transform_hlds__lco__Var_33 = mercury__bag__init_0_f_0(transform_hlds__lco__TypeInfo_55_55);
            }
            transform_hlds__lco__TypeInfo_56_56 = (MR_Word) &transform_hlds__lco_scalar_common_1[5];
            transform_hlds__lco__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
            {
              transform_hlds__lco__succeeded = mercury__list__foldl2_6_p_4(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__TypeInfo_56_56, transform_hlds__lco__TypeCtorInfo_57_57, transform_hlds__lco__Var_32, transform_hlds__lco__RevAfterDependentGoals_18, ((MR_Box) (transform_hlds__lco__Var_33)), &transform_hlds__lco__conv9_UnifyInputVars_21, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_0_26)), &transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
            }
            if (transform_hlds__lco__succeeded)
              {
                transform_hlds__lco__UnifyInputVars_21 = ((MR_Word) transform_hlds__lco__conv9_UnifyInputVars_21);
                transform_hlds__lco__STATE_VARIABLE_Info_34_34 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_Info_34_34);
                transform_hlds__lco__succeeded = MR_TRUE;
              }
          }
      }
    if (transform_hlds__lco__succeeded)
      {
        MR_Word transform_hlds__lco__UnifyGoals_22;
        MR_Word transform_hlds__lco__MaybeGoals1_23;

        {
          mercury__list__reverse_2_p_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterDependentGoals_18, &transform_hlds__lco__UnifyGoals_22);
        }
        {
          transform_hlds__lco__transform_call_and_unifies_8_p_0(transform_hlds__lco__RecGoal_12, transform_hlds__lco__RecOutArgs_13, transform_hlds__lco__UnifyGoals_22, transform_hlds__lco__UnifyInputVars_21, &transform_hlds__lco__MaybeGoals1_23, transform_hlds__lco__STATE_VARIABLE_Info_34_34, transform_hlds__lco__STATE_VARIABLE_Info_27, transform_hlds__lco__ConstInfo_9);
        }
        if ((transform_hlds__lco__MaybeGoals1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word transform_hlds__lco__UpdatedRecAndUnifies_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeGoals1_23, (MR_Integer) 0)));
            MR_Word transform_hlds__lco__Goals_25;
            MR_Word transform_hlds__lco__Var_36;
            MR_Word transform_hlds__lco__Var_37;
            MR_Word transform_hlds__lco__Var_38;

            {
              transform_hlds__lco__Var_36 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevBeforeGoals_14);
            }
            {
              transform_hlds__lco__Var_38 = mercury__list__reverse_1_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__RevAfterNonDependentGoals_19);
            }
            {
              transform_hlds__lco__Var_37 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__Var_38, transform_hlds__lco__UpdatedRecAndUnifies_24);
            }
            {
              transform_hlds__lco__Goals_25 = mercury__list__f_43_43_2_f_0(transform_hlds__lco__TypeCtorInfo_39_39, transform_hlds__lco__Var_36, transform_hlds__lco__Var_37);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__MaybeGoals_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_25));
            }
          }
      }
    else
      {
        *transform_hlds__lco__MaybeGoals_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__STATE_VARIABLE_Info_27 = transform_hlds__lco__STATE_VARIABLE_Info_0_26;
      }
  }
}

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3,
  MR_Box * transform_hlds__lco__wrapper_arg_4,
  MR_Box transform_hlds__lco__wrapper_arg_5,
  MR_Box * transform_hlds__lco__wrapper_arg_6)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv2_Goal_12;
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60;
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Info_62;

    {
      transform_hlds__lco__update_construct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_12, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60, ((MR_Word) transform_hlds__lco__wrapper_arg_5), &transform_hlds__lco__conv0_STATE_VARIABLE_Info_62);
    }
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_12));
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_AddrVarFieldIds_60));
    *transform_hlds__lco__wrapper_arg_6 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Info_62));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco__occurs_once_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
  MR_Word transform_hlds__lco__CallGoal_9,
  MR_Word transform_hlds__lco__CallOutArgs_10,
  MR_Word transform_hlds__lco__UnifyGoals_11,
  MR_Word transform_hlds__lco__UnifyInputVars_12,
  MR_Word * transform_hlds__lco__MaybeGoals_13,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_57,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_58,
  MR_Word transform_hlds__lco__ConstInfo_15)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__CallGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__CallGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallGoal_9, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
    MR_Word transform_hlds__lco__VarTypes_20;
    MR_Word transform_hlds__lco__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 2)));
    MR_Word transform_hlds__lco__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 3)));
    MR_Word transform_hlds__lco__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 4)));
    MR_Word transform_hlds__lco__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_57, (MR_Integer) 5)));
    MR_Word transform_hlds__lco__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
    MR_Word transform_hlds__lco__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
    MR_Word transform_hlds__lco__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
    MR_Word transform_hlds__lco__Var_123 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
    MR_Word transform_hlds__lco__Var_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word transform_hlds__lco__Var_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word transform_hlds__lco__PredId_21;
    MR_Integer transform_hlds__lco__ProcId_22;
    MR_Word transform_hlds__lco__Args_23;
    MR_Word transform_hlds__lco__Builtin_24;
    MR_Word transform_hlds__lco__UnifyContext_25;
    MR_Word transform_hlds__lco__UpdatedCallOutArgs_30;
    MR_Word transform_hlds__lco__UpdatedUnifyGoals_36;
    MR_Word transform_hlds__lco__VariantPredProcId_41;
    MR_Word transform_hlds__lco__VariantSymName_42;
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_103_103;
    MR_Word transform_hlds__lco__TypeInfo_153_153;
    MR_Word transform_hlds__lco__TypeCtorInfo_158_158;
    MR_Word transform_hlds__lco__TypeCtorInfo_166_166;
    MR_Word transform_hlds__lco__TypeCtorInfo_167_167;
    MR_Word transform_hlds__lco__TypeInfo_168_168;
    MR_Word transform_hlds__lco__TypeCtorInfo_169_169;
    MR_Word transform_hlds__lco__SymName_26;
    MR_Word transform_hlds__lco__CurrProcOutArgs_27;
    MR_Word transform_hlds__lco__CallHeadPairs_28;
    MR_Word transform_hlds__lco__Mismatches_29;
    MR_Word transform_hlds__lco__Subst_31;
    MR_Word transform_hlds__lco__MismatchedCallArgs_35;
    MR_Word transform_hlds__lco__AddrFieldIds_37;
    MR_Word transform_hlds__lco__HighLevelData_39;
    MR_Word transform_hlds__lco__VariantArgs_40;
    MR_Integer transform_hlds__lco__Var_59;
    MR_Word transform_hlds__lco__Var_60;
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_61_61;
    MR_Word transform_hlds__lco__Var_82;
    MR_Word transform_hlds__lco__Var_83;
    MR_Word transform_hlds__lco__Var_84;
    MR_Word transform_hlds__lco__STATE_VARIABLE_Info_85_85;
    MR_Word transform_hlds__lco__Var_126;
    MR_Word transform_hlds__lco__Var_127;
    MR_Word transform_hlds__lco__Var_128;
    MR_Word transform_hlds__lco__Var_129;
    MR_Word transform_hlds__lco__Var_130;
    MR_Word transform_hlds__lco__Var_131;
    MR_Word transform_hlds__lco__Var_132;
    MR_Word transform_hlds__lco__Var_133;
    MR_Word transform_hlds__lco__Var_33;
    MR_Word transform_hlds__lco__Var_34;
    MR_Box transform_hlds__lco__conv4_AddrFieldIds_37;
    MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85;
    MR_Word transform_hlds__lco__Var_139;
    MR_Word transform_hlds__lco__Var_140;
    MR_Word transform_hlds__lco__Var_141;
    MR_Word transform_hlds__lco__Var_142;
    MR_Word transform_hlds__lco__Var_143;
    MR_Word transform_hlds__lco__Var_144;
    MR_Word transform_hlds__lco__Var_145;
    MR_Word transform_hlds__lco__Var_146;

    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_19, &transform_hlds__lco__VarTypes_20);
    }
    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CallGoalExpr_16)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__lco__succeeded)
      {
        transform_hlds__lco__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 0)));
        transform_hlds__lco__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 1)));
        transform_hlds__lco__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 2)));
        transform_hlds__lco__Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 3)));
        transform_hlds__lco__UnifyContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 4)));
        transform_hlds__lco__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__CallGoalExpr_16, (MR_Integer) 5)));
        transform_hlds__lco__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
        transform_hlds__lco__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
        transform_hlds__lco__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
        transform_hlds__lco__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
        transform_hlds__lco__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
        transform_hlds__lco__CurrProcOutArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
        transform_hlds__lco__Var_131 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
        transform_hlds__lco__Var_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        transform_hlds__lco__Var_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        transform_hlds__lco__TypeInfo_153_153 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
        {
          mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__CallOutArgs_10, transform_hlds__lco__CurrProcOutArgs_27, &transform_hlds__lco__CallHeadPairs_28);
        }
        transform_hlds__lco__Var_59 = (MR_Integer) 1;
        {
          transform_hlds__lco__Var_60 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeInfo_153_153);
        }
        {
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__ConstInfo_15, transform_hlds__lco__UnifyInputVars_12, transform_hlds__lco__CallHeadPairs_28, transform_hlds__lco__Var_59, &transform_hlds__lco__Mismatches_29, &transform_hlds__lco__UpdatedCallOutArgs_30, transform_hlds__lco__Var_60, &transform_hlds__lco__Subst_31, transform_hlds__lco__STATE_VARIABLE_Info_0_57, &transform_hlds__lco__STATE_VARIABLE_Info_61_61);
        }
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Mismatches_29)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 0)));
            transform_hlds__lco__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__Mismatches_29, (MR_Integer) 1)));
            transform_hlds__lco__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              mercury__assoc_list__values_2_p_0(transform_hlds__lco__TypeCtorInfo_158_158, transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__MismatchedCallArgs_35);
            }
            {
              transform_hlds__lco__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_82, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[5]));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_82, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_1));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_82, 3) = ((MR_Box) (transform_hlds__lco__UnifyInputVars_12));
            }
            {
              transform_hlds__lco__succeeded = mercury__list__all_true_2_p_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__Var_82, transform_hlds__lco__MismatchedCallArgs_35);
            }
            if (transform_hlds__lco__succeeded)
              {
                transform_hlds__lco__TypeCtorInfo_166_166 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0;
                {
                  transform_hlds__lco__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_83, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_10[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_83, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_2));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_83, 3) = ((MR_Box) (transform_hlds__lco__ConstInfo_15));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_83, 4) = ((MR_Box) (transform_hlds__lco__Subst_31));
                }
                {
                  transform_hlds__lco__Var_84 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_153_153, transform_hlds__lco__TypeCtorInfo_166_166);
                }
                transform_hlds__lco__TypeCtorInfo_167_167 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                transform_hlds__lco__TypeInfo_168_168 = (MR_Word) &transform_hlds__lco_scalar_common_2[5];
                transform_hlds__lco__TypeCtorInfo_169_169 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0;
                {
                  mercury__list__map_foldl2_7_p_0(transform_hlds__lco__TypeCtorInfo_167_167, transform_hlds__lco__TypeCtorInfo_167_167, transform_hlds__lco__TypeInfo_168_168, transform_hlds__lco__TypeCtorInfo_169_169, transform_hlds__lco__Var_83, transform_hlds__lco__UnifyGoals_11, &transform_hlds__lco__UpdatedUnifyGoals_36, ((MR_Box) (transform_hlds__lco__Var_84)), &transform_hlds__lco__conv4_AddrFieldIds_37, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_Info_61_61)), &transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85);
                }
                transform_hlds__lco__AddrFieldIds_37 = ((MR_Word) transform_hlds__lco__conv4_AddrFieldIds_37);
                transform_hlds__lco__STATE_VARIABLE_Info_85_85 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_Info_85_85);
                transform_hlds__lco__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 0)));
                transform_hlds__lco__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 1)));
                transform_hlds__lco__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 2)));
                transform_hlds__lco__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 3)));
                transform_hlds__lco__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 4)));
                transform_hlds__lco__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 5)));
                transform_hlds__lco__Var_145 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) & (MR_Integer) 7);
                transform_hlds__lco__Var_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                transform_hlds__lco__HighLevelData_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_15, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                {
                  transform_hlds__lco__make_variant_args_4_p_0(transform_hlds__lco__HighLevelData_39, transform_hlds__lco__AddrFieldIds_37, transform_hlds__lco__Mismatches_29, &transform_hlds__lco__VariantArgs_40);
                }
                {
                  transform_hlds__lco__succeeded = transform_hlds__lco__ensure_variant_exists_8_p_0(transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, transform_hlds__lco__VariantArgs_40, &transform_hlds__lco__VariantPredProcId_41, transform_hlds__lco__SymName_26, &transform_hlds__lco__VariantSymName_42, transform_hlds__lco__STATE_VARIABLE_Info_85_85, &transform_hlds__lco__STATE_VARIABLE_Info_103_103);
                }
              }
          }
      }
    if (transform_hlds__lco__succeeded)
      {
        MR_Word transform_hlds__lco__CalleeProcInfo_43;
        MR_Word transform_hlds__lco__CalleeModes_44;
        MR_Word transform_hlds__lco__UpdatedArgs_45;
        MR_Word transform_hlds__lco__VariantPredId_46;
        MR_Integer transform_hlds__lco__VariantProcId_47;
        MR_Word transform_hlds__lco__UpdatedGoalExpr_48;
        MR_Word transform_hlds__lco__OrigCallPurity_49;
        MR_Word transform_hlds__lco__UpdatedGoalInfo_50;
        MR_Word transform_hlds__lco__UpdatedGoal_51;
        MR_Word transform_hlds__lco__Goals_52;
        MR_Word transform_hlds__lco__Var_105;
        MR_Word transform_hlds__lco__Var_147;
        MR_Word transform_hlds__lco__Var_148;
        MR_Word transform_hlds__lco__Var_149;
        MR_Word transform_hlds__lco__Var_150;
        MR_Word transform_hlds__lco__Var_151;
        MR_Word transform_hlds__lco__Var_152;

        {
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__PredId_21, transform_hlds__lco__ProcId_22, &transform_hlds__lco__CalleeProcInfo_43);
        }
        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_43, &transform_hlds__lco__CalleeModes_44);
        }
        {
          transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__ModuleInfo_18, transform_hlds__lco__VarTypes_20, transform_hlds__lco__CalleeModes_44, transform_hlds__lco__Args_23, transform_hlds__lco__UpdatedCallOutArgs_30, &transform_hlds__lco__UpdatedArgs_45);
        }
        transform_hlds__lco__VariantPredId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 0)));
        transform_hlds__lco__VariantProcId_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_41, (MR_Integer) 1)));
        {
          transform_hlds__lco__UpdatedGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_46));
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_47));
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 2) = ((MR_Box) (transform_hlds__lco__UpdatedArgs_45));
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 3) = ((MR_Box) (transform_hlds__lco__Builtin_24));
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_25));
          MR_hl_field(MR_mktag(2), transform_hlds__lco__UpdatedGoalExpr_48, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_42));
        }
        {
          transform_hlds__lco__OrigCallPurity_49 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__lco__CallGoalInfo_17);
        }
        {
          hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__CallGoalInfo_17, &transform_hlds__lco__UpdatedGoalInfo_50);
        }
        {
          transform_hlds__lco__UpdatedGoal_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_51, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoalExpr_48));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__UpdatedGoal_51, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
        }
        {
          transform_hlds__lco__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_105, 0) = ((MR_Box) (transform_hlds__lco__UpdatedGoal_51));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__lco__Goals_52 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__UpdatedUnifyGoals_36, transform_hlds__lco__Var_105);
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__OrigCallPurity_49 == (MR_Integer) 2);
        if (transform_hlds__lco__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__lco__MaybeGoals_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goals_52));
          }
        else
          {
            MR_Word transform_hlds__lco__ConjGoalExpr_53;
            MR_Word transform_hlds__lco__ConjGoal_54;
            MR_Word transform_hlds__lco__PromiseGoalExpr_55;
            MR_Word transform_hlds__lco__PromiseGoal_56;
            MR_Word transform_hlds__lco__Var_108;
            MR_Word transform_hlds__lco__Var_109;

            {
              transform_hlds__lco__ConjGoalExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), transform_hlds__lco__ConjGoalExpr_53, 2) = ((MR_Box) (transform_hlds__lco__Goals_52));
            }
            {
              transform_hlds__lco__ConjGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConjGoal_54, 0) = ((MR_Box) (transform_hlds__lco__ConjGoalExpr_53));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__ConjGoal_54, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
            }
            {
              transform_hlds__lco__Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__lco__Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), transform_hlds__lco__Var_108, 1) = ((MR_Box) (transform_hlds__lco__OrigCallPurity_49));
            }
            {
              transform_hlds__lco__PromiseGoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 1) = ((MR_Box) (transform_hlds__lco__Var_108));
              MR_hl_field(MR_mktag(3), transform_hlds__lco__PromiseGoalExpr_55, 2) = ((MR_Box) (transform_hlds__lco__ConjGoal_54));
            }
            {
              transform_hlds__lco__PromiseGoal_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__PromiseGoal_56, 0) = ((MR_Box) (transform_hlds__lco__PromiseGoalExpr_55));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__PromiseGoal_56, 1) = ((MR_Box) (transform_hlds__lco__UpdatedGoalInfo_50));
            }
            {
              transform_hlds__lco__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_109, 0) = ((MR_Box) (transform_hlds__lco__PromiseGoal_56));
              MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__MaybeGoals_13 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_109));
            }
          }
        transform_hlds__lco__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 0)));
        transform_hlds__lco__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 1)));
        transform_hlds__lco__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 2)));
        transform_hlds__lco__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 3)));
        transform_hlds__lco__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 4)));
        transform_hlds__lco__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_103_103, (MR_Integer) 5)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__lco__STATE_VARIABLE_Info_58 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__Var_147));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__Var_148));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Var_149));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__Var_150));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__Var_151));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
        }
      }
    else
      {
        *transform_hlds__lco__MaybeGoals_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__STATE_VARIABLE_Info_58 = transform_hlds__lco__STATE_VARIABLE_Info_0_57;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
  MR_Word transform_hlds__lco__PredId_9,
  MR_Integer transform_hlds__lco__ProcId_10,
  MR_Word transform_hlds__lco__AddrArgNums_11,
  MR_Word * transform_hlds__lco__VariantPredProcId_12,
  MR_Word transform_hlds__lco__SymName_13,
  MR_Word * transform_hlds__lco__VariantSymName_14,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_30,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_31)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__PredProcId_16;
    MR_Word transform_hlds__lco__CurSCCVariants0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
    MR_Word transform_hlds__lco__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
    MR_Word transform_hlds__lco__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
    MR_Word transform_hlds__lco__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
    MR_Word transform_hlds__lco__ExistingVariant_19;
    MR_Word transform_hlds__lco__ExistingVariants_18;

    {
      transform_hlds__lco__PredProcId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 0) = ((MR_Box) (transform_hlds__lco__PredId_9));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_16, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
    }
    {
      transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_18);
    }
    if (transform_hlds__lco__succeeded)
      {
        transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_18, transform_hlds__lco__AddrArgNums_11, &transform_hlds__lco__ExistingVariant_19);
      }
    if (transform_hlds__lco__succeeded)
      {
        MR_String transform_hlds__lco__VariantName_74;
        MR_Word transform_hlds__lco__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 0)));

        *transform_hlds__lco__VariantPredProcId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 1)));
        transform_hlds__lco__VariantName_74 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_19, (MR_Integer) 2)));
        if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__lco__ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
            MR_String transform_hlds__lco___Name_77 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__VariantSymName_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_76));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_74));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__lco__VariantSymName_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_74));
          }
        *transform_hlds__lco__STATE_VARIABLE_Info_31 = transform_hlds__lco__STATE_VARIABLE_Info_0_30;
        transform_hlds__lco__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__lco__TypeCtorInfo_67_67;
        MR_Word transform_hlds__lco__TypeCtorInfo_68_68;
        MR_Word transform_hlds__lco__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__ClonePredId_21;
        MR_Word transform_hlds__lco__PredOrFunc_22;
        MR_Word transform_hlds__lco__ModuleInfo_23;
        MR_Integer transform_hlds__lco__VariantNumber_24;
        MR_String transform_hlds__lco__VariantName_26;
        MR_Word transform_hlds__lco__NewVariant_28;
        MR_Word transform_hlds__lco__CurSCCVariants_29;
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_32_32;
        MR_Word transform_hlds__lco__PredInfo_85;
        MR_Word transform_hlds__lco__PredTable0_86;
        MR_Word transform_hlds__lco__PredTable_87;
        MR_Word transform_hlds__lco__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__Var_51;
        MR_Word transform_hlds__lco__Var_52;
        MR_Word transform_hlds__lco__Var_53;
        MR_Word transform_hlds__lco__Var_54;
        MR_Word transform_hlds__lco__Var_55;
        MR_Word transform_hlds__lco__Var_50;
        MR_Word transform_hlds__lco__ExistingVariants_37;
        MR_Word transform_hlds__lco__Var_56;
        MR_Word transform_hlds__lco__Var_58;
        MR_Word transform_hlds__lco__Var_59;
        MR_Word transform_hlds__lco__Var_60;
        MR_Word transform_hlds__lco__Var_61;
        MR_Word transform_hlds__lco__Var_57;

        {
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lco__ModuleInfo0_20, transform_hlds__lco__PredId_9, &transform_hlds__lco__PredInfo_85);
        }
        {
          transform_hlds__lco__PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lco__PredInfo_85);
        }
        {
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__PredTable0_86);
        }
        {
          hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lco__PredInfo_85, &transform_hlds__lco__ClonePredId_21, transform_hlds__lco__PredTable0_86, &transform_hlds__lco__PredTable_87);
        }
        {
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lco__PredTable_87, transform_hlds__lco__ModuleInfo0_20, &transform_hlds__lco__ModuleInfo_23);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__lco__VariantPredProcId_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__ClonePredId_21));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__ProcId_10));
        }
        transform_hlds__lco__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
        transform_hlds__lco__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
        transform_hlds__lco__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
        transform_hlds__lco__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
        transform_hlds__lco__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
        transform_hlds__lco__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
        {
          transform_hlds__lco__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__lco__ModuleInfo_23));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__lco__Var_51));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__lco__Var_52));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__lco__Var_53));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (transform_hlds__lco__Var_54));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) (transform_hlds__lco__Var_55));
        }
        {
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariants0_17, ((MR_Box) (transform_hlds__lco__PredProcId_16)), &transform_hlds__lco__ExistingVariants_37);
        }
        if (transform_hlds__lco__succeeded)
          {
            MR_Integer transform_hlds__lco__Var_33;

            {
              transform_hlds__lco__Var_33 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__ExistingVariants_37);
            }
            transform_hlds__lco__VariantNumber_24 = (transform_hlds__lco__Var_33 + (MR_Integer) 1);
          }
        else
          transform_hlds__lco__VariantNumber_24 = (MR_Integer) 1;
        transform_hlds__lco__succeeded = (transform_hlds__lco__VariantNumber_24 <= (MR_Integer) 4);
        if (transform_hlds__lco__succeeded)
          {
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_13)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word transform_hlds__lco__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 0)));
                MR_String transform_hlds__lco__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_13, (MR_Integer) 1)));

                {
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_38, &transform_hlds__lco__VariantName_26);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__lco__VariantSymName_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_27));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantName_26));
                }
              }
            else
              {
                MR_String transform_hlds__lco__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__SymName_13, (MR_Integer) 0)));

                {
                  transform_hlds__lco__create_variant_name_4_p_0(transform_hlds__lco__PredOrFunc_22, transform_hlds__lco__VariantNumber_24, transform_hlds__lco__Name_25, &transform_hlds__lco__VariantName_26);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__lco__VariantSymName_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__VariantName_26));
                }
              }
            transform_hlds__lco__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            transform_hlds__lco__TypeCtorInfo_68_68 = (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0;
            {
              transform_hlds__lco__NewVariant_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 0) = ((MR_Box) (transform_hlds__lco__AddrArgNums_11));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 1) = ((MR_Box) (*transform_hlds__lco__VariantPredProcId_12));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__NewVariant_28, 2) = ((MR_Box) (transform_hlds__lco__VariantName_26));
            }
            {
              mercury__multi_map__set_4_p_0(transform_hlds__lco__TypeCtorInfo_67_67, transform_hlds__lco__TypeCtorInfo_68_68, ((MR_Box) (transform_hlds__lco__PredProcId_16)), ((MR_Box) (transform_hlds__lco__NewVariant_28)), transform_hlds__lco__CurSCCVariants0_17, &transform_hlds__lco__CurSCCVariants_29);
            }
            transform_hlds__lco__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
            transform_hlds__lco__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
            transform_hlds__lco__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
            transform_hlds__lco__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
            transform_hlds__lco__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
            transform_hlds__lco__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__lco__STATE_VARIABLE_Info_31 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__Var_56));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__CurSCCVariants_29));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Var_58));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__Var_59));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__Var_60));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__Var_61));
            }
            transform_hlds__lco__succeeded = MR_TRUE;
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
  MR_Word transform_hlds__lco__PredOrFunc_5,
  MR_Integer transform_hlds__lco__VariantNumber_6,
  MR_String transform_hlds__lco__OrigName_7,
  MR_String * transform_hlds__lco__VariantName_8)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_String transform_hlds__lco__Prefix_9;
    MR_String transform_hlds__lco__Var_10;
    MR_String transform_hlds__lco__Var_11;
    MR_String transform_hlds__lco__Var_13;

    switch (transform_hlds__lco__PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        transform_hlds__lco__Prefix_9 = (MR_String) "LCMCfn_";
        break;
      case (MR_Integer) 0:
        transform_hlds__lco__Prefix_9 = (MR_String) "LCMCpr_";
        break;
    }
    {
      transform_hlds__lco__Var_13 = mercury__string__int_to_string_1_f_0(transform_hlds__lco__VariantNumber_6);
    }
    {
      transform_hlds__lco__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__lco__Var_13);
    }
    {
      transform_hlds__lco__Var_10 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__OrigName_7, transform_hlds__lco__Var_11);
    }
    {
      *transform_hlds__lco__VariantName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__lco__Prefix_9, transform_hlds__lco__Var_10);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__lco__wrapper_arg_2;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv1_LambdaHeadVar__2_15;

    {
      transform_hlds__lco__conv1_LambdaHeadVar__2_15 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1135__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_LambdaHeadVar__2_15));
    return transform_hlds__lco__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__lco__wrapper_arg_2;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv0_LambdaHeadVar__2_18;

    {
      transform_hlds__lco__conv0_LambdaHeadVar__2_18 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1132__1_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_LambdaHeadVar__2_18));
    return transform_hlds__lco__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
  MR_Word transform_hlds__lco__HighLevelData_5,
  MR_Word transform_hlds__lco__AddrVarFieldIds_6,
  MR_Word transform_hlds__lco__Mismatches_7,
  MR_Word * transform_hlds__lco__VariantArgs_8)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__MakeArg_9;

    switch (transform_hlds__lco__HighLevelData_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__lco__MakeArg_9 = (MR_Word) &transform_hlds__lco_scalar_common_2[12];
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__lco__MakeArg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 1) = ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__MakeArg_9, 3) = ((MR_Box) (transform_hlds__lco__AddrVarFieldIds_6));
        }
        break;
    }
    {
      *transform_hlds__lco__VariantArgs_8 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco_scalar_common_2[4], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__MakeArg_9, transform_hlds__lco__Mismatches_7);
    }
  }
}

static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__UnifyInputVars_2,
  MR_Word transform_hlds__lco__HeadVar__3_3,
  MR_Integer transform_hlds__lco__ArgNum_4,
  MR_Word * transform_hlds__lco__HeadVar__5_5,
  MR_Word * transform_hlds__lco__HeadVar__6_6,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_0_7,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Subst_8,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_9,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_10)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_0_9;
        *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_0_7;
      }
    else
      {
        MR_Word transform_hlds__lco__CallArg_22;
        MR_Word transform_hlds__lco__HeadArg_23;
        MR_Word transform_hlds__lco__CallHeadArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__UpdatedCallArg_27;
        MR_Word transform_hlds__lco__UpdatedCallArgs_28;
        MR_Word transform_hlds__lco__MismatchesTail_31;
        MR_Word transform_hlds__lco__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer transform_hlds__lco__Var_39;
        MR_Word transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_41_41;
        MR_Word transform_hlds__lco__STATE_VARIABLE_Info_48_48;
        MR_Word transform_hlds__lco__CallArgType_32;
        MR_Word transform_hlds__lco__CallArgTypeCtor_33;
        MR_Word transform_hlds__lco__Var_43;
        MR_Word transform_hlds__lco__Var_44;
        MR_Word transform_hlds__lco__Var_45;
        MR_String transform_hlds__lco__Var_46;
        MR_Integer transform_hlds__lco__Var_47;
        MR_Word transform_hlds__lco__Var_55;
        MR_Word transform_hlds__lco__Var_56;
        MR_Word transform_hlds__lco__Var_57;
        MR_Word transform_hlds__lco__Var_58;
        MR_Word transform_hlds__lco__Var_59;
        MR_Word transform_hlds__lco__Var_60;
        MR_Word transform_hlds__lco__Var_61;
        MR_Word transform_hlds__lco__Var_62;
        MR_Word transform_hlds__lco__Var_63;
        MR_Word transform_hlds__lco__Var_64;
        MR_Word transform_hlds__lco__Var_65;
        MR_Word transform_hlds__lco__Var_66;
        MR_Word transform_hlds__lco__Var_67;

        transform_hlds__lco__CallArg_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_38, (MR_Integer) 0)));
        transform_hlds__lco__HeadArg_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_38, (MR_Integer) 1)));
        transform_hlds__lco__Var_39 = (transform_hlds__lco__ArgNum_4 + (MR_Integer) 1);
        {
          transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__UnifyInputVars_2, transform_hlds__lco__CallHeadArgs_24, transform_hlds__lco__Var_39, &transform_hlds__lco__MismatchesTail_31, &transform_hlds__lco__UpdatedCallArgs_28, transform_hlds__lco__STATE_VARIABLE_Subst_0_7, &transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Info_0_9, &transform_hlds__lco__STATE_VARIABLE_Info_41_41);
        }
        transform_hlds__lco__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
        transform_hlds__lco__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        transform_hlds__lco__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 2)));
        transform_hlds__lco__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 3)));
        transform_hlds__lco__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 4)));
        transform_hlds__lco__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 5)));
        transform_hlds__lco__Var_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 7);
        transform_hlds__lco__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        transform_hlds__lco__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_43 == (MR_Integer) 0);
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
            transform_hlds__lco__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
            transform_hlds__lco__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
            transform_hlds__lco__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
            transform_hlds__lco__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
            transform_hlds__lco__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
            {
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__Var_44, transform_hlds__lco__CallArg_22, &transform_hlds__lco__CallArgType_32);
            }
            {
              transform_hlds__lco__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(transform_hlds__lco__CallArgType_32, &transform_hlds__lco__CallArgTypeCtor_33);
            }
            if (transform_hlds__lco__succeeded)
              {
                transform_hlds__lco__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 0)));
                transform_hlds__lco__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__CallArgTypeCtor_33, (MR_Integer) 1)));
                transform_hlds__lco__succeeded = (transform_hlds__lco__Var_47 == (MR_Integer) 0);
                if (transform_hlds__lco__succeeded)
                  {
                    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__Var_45)) == (MR_mktag((MR_Integer) 0)));
                    if (transform_hlds__lco__succeeded)
                      {
                        transform_hlds__lco__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_45, (MR_Integer) 0)));
                        transform_hlds__lco__succeeded = (strcmp(transform_hlds__lco__Var_46, (MR_String) "float") == 0);
                      }
                  }
              }
          }
        if (transform_hlds__lco__succeeded)
          {
            MR_Word transform_hlds__lco__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
            MR_Word transform_hlds__lco__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
            MR_Word transform_hlds__lco__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
            MR_Word transform_hlds__lco__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
            MR_Word transform_hlds__lco__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 5)));
            MR_Word transform_hlds__lco__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));

            {
              transform_hlds__lco__STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (transform_hlds__lco__Var_68));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (transform_hlds__lco__Var_69));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (transform_hlds__lco__Var_70));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (transform_hlds__lco__Var_71));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, 5) = ((MR_Box) (transform_hlds__lco__Var_73));
            }
          }
        else
          transform_hlds__lco__STATE_VARIABLE_Info_48_48 = transform_hlds__lco__STATE_VARIABLE_Info_41_41;
        {
          transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__HeadArg_23)));
        }
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__UpdatedCallArg_27 = transform_hlds__lco__CallArg_22;
            *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__MismatchesTail_31;
            {
              transform_hlds__lco__succeeded = mercury__bag__member_2_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], ((MR_Box) (transform_hlds__lco__HeadArg_23)), transform_hlds__lco__UnifyInputVars_2);
            }
            if (transform_hlds__lco__succeeded)
              {
                MR_Word transform_hlds__lco__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
                MR_Word transform_hlds__lco__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
                MR_Word transform_hlds__lco__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
                MR_Word transform_hlds__lco__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
                MR_Word transform_hlds__lco__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
                MR_Word transform_hlds__lco__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__lco__STATE_VARIABLE_Info_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__Var_74));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__Var_75));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__Var_76));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__Var_77));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__Var_79));
                }
              }
            else
              *transform_hlds__lco__STATE_VARIABLE_Info_10 = transform_hlds__lco__STATE_VARIABLE_Info_48_48;
            *transform_hlds__lco__STATE_VARIABLE_Subst_8 = transform_hlds__lco__STATE_VARIABLE_Subst_40_40;
          }
        else
          {
            MR_Word transform_hlds__lco__TypeInfo_81_81;
            MR_Word transform_hlds__lco__Var_53;

            {
              transform_hlds__lco__make_address_var_5_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CallArg_22, &transform_hlds__lco__UpdatedCallArg_27, transform_hlds__lco__STATE_VARIABLE_Info_48_48, transform_hlds__lco__STATE_VARIABLE_Info_10);
            }
            {
              transform_hlds__lco__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_53, 0) = ((MR_Box) (transform_hlds__lco__ArgNum_4));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_53, 1) = ((MR_Box) (transform_hlds__lco__CallArg_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_53));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__MismatchesTail_31));
            }
            transform_hlds__lco__TypeInfo_81_81 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
            {
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_81_81, transform_hlds__lco__TypeInfo_81_81, ((MR_Box) (transform_hlds__lco__CallArg_22)), ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27)), transform_hlds__lco__STATE_VARIABLE_Subst_40_40, transform_hlds__lco__STATE_VARIABLE_Subst_8);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__lco__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedCallArg_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__UpdatedCallArgs_28));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
  MR_Word transform_hlds__lco__ConstInfo_6,
  MR_Word transform_hlds__lco__Var_7,
  MR_Word * transform_hlds__lco__AddrVar_8,
  MR_Word transform_hlds__lco__STATE_VARIABLE_Info_0_19,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_Info_20)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word transform_hlds__lco__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
    MR_Word transform_hlds__lco__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
    MR_String transform_hlds__lco__Name_12;
    MR_String transform_hlds__lco__AddrName_13;
    MR_Word transform_hlds__lco__VarSet_14;
    MR_Word transform_hlds__lco__HighLevelData_15;
    MR_Word transform_hlds__lco__VarTypes_18;
    MR_Word transform_hlds__lco__Var_43;
    MR_Word transform_hlds__lco__Var_44;
    MR_Word transform_hlds__lco__Var_47;
    MR_Word transform_hlds__lco__Var_48;
    MR_Word transform_hlds__lco__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
    MR_Word transform_hlds__lco__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
    MR_Word transform_hlds__lco__Var_35;
    MR_Word transform_hlds__lco__Var_36;
    MR_Word transform_hlds__lco__Var_37;
    MR_Word transform_hlds__lco__Var_38;
    MR_Word transform_hlds__lco__Var_39;
    MR_Word transform_hlds__lco__Var_40;
    MR_Word transform_hlds__lco__Var_41;
    MR_Word transform_hlds__lco__Var_42;
    MR_Word transform_hlds__lco__Var_45;
    MR_Word transform_hlds__lco__Var_46;

    {
      mercury__varset__lookup_name_4_p_0(transform_hlds__lco__TypeCtorInfo_55_55, transform_hlds__lco__VarSet0_10, transform_hlds__lco__Var_7, (MR_String) "SCCcallarg", &transform_hlds__lco__Name_12);
    }
    {
      transform_hlds__lco__AddrName_13 = mercury__string__f_43_43_2_f_0((MR_String) "Addr", transform_hlds__lco__Name_12);
    }
    {
      mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_55_55, transform_hlds__lco__AddrName_13, transform_hlds__lco__AddrVar_8, transform_hlds__lco__VarSet0_10, &transform_hlds__lco__VarSet_14);
    }
    transform_hlds__lco__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
    transform_hlds__lco__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
    transform_hlds__lco__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
    transform_hlds__lco__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
    transform_hlds__lco__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
    transform_hlds__lco__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
    transform_hlds__lco__Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
    transform_hlds__lco__Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    transform_hlds__lco__HighLevelData_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    switch (transform_hlds__lco__HighLevelData_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__lco__FieldType_16;
          MR_Word transform_hlds__lco__AddrVarType_17;
          MR_Word transform_hlds__lco__RefTypeName_58;
          MR_Word transform_hlds__lco__Var_59;
          MR_Word transform_hlds__lco__Var_61;

          {
            hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__VarTypes0_11, transform_hlds__lco__Var_7, &transform_hlds__lco__FieldType_16);
          }
          {
            transform_hlds__lco__Var_59 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            transform_hlds__lco__RefTypeName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_58, 0) = ((MR_Box) (transform_hlds__lco__Var_59));
            MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_58, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
          }
          {
            transform_hlds__lco__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_61, 0) = ((MR_Box) (transform_hlds__lco__FieldType_16));
            MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__lco__AddrVarType_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_58));
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 1) = ((MR_Box) (transform_hlds__lco__Var_61));
            MR_hl_field(MR_mktag(1), transform_hlds__lco__AddrVarType_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__vartypes__add_var_type_4_p_0(*transform_hlds__lco__AddrVar_8, transform_hlds__lco__AddrVarType_17, transform_hlds__lco__VarTypes0_11, &transform_hlds__lco__VarTypes_18);
          }
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__lco__VarTypes_18 = transform_hlds__lco__VarTypes0_11;
        break;
    }
    transform_hlds__lco__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
    transform_hlds__lco__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
    transform_hlds__lco__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
    transform_hlds__lco__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
    transform_hlds__lco__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
    transform_hlds__lco__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lco__STATE_VARIABLE_Info_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__Var_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__Var_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lco__VarSet_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lco__VarTypes_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lco__Var_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lco__Var_48));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
  MR_Box transform_hlds__lco__closure_arg)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__update_call_args__972__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3,
  MR_Word transform_hlds__lco__HeadVar__4_4,
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Word * transform_hlds__lco__HeadVar__6_6)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word transform_hlds__lco__Var_10;

          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            transform_hlds__lco__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_10, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[3]));
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_10, 1) = ((MR_Box) (transform_hlds__lco__update_call_args_6_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_10, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_10, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__require__expect_4_p_0(transform_hlds__lco__Var_10, (MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "updating nonexistent arg");
          }
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__lco__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__lco__Arg_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__lco__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__lco__CalleeType_41;
            MR_Word transform_hlds__lco__TopFunctorMode_42;

            {
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Arg_37, &transform_hlds__lco__CalleeType_41);
            }
            {
              check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__Var_62, transform_hlds__lco__CalleeType_41, &transform_hlds__lco__TopFunctorMode_42);
            }
            switch (transform_hlds__lco__TopFunctorMode_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55;

                  {
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Var_61, transform_hlds__lco__Args_38, transform_hlds__lco__HeadVar__5_5, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__lco__HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Arg_37));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_55_55));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__lco__UpdatedArg_43;
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53;
                  MR_Word transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57;

                  if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "no UpdatedCallOutArgs");
                        return;
                      }
                    }
                  else
                    {
                      transform_hlds__lco__UpdatedArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
                      transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
                    }
                  {
                    transform_hlds__lco__update_call_args_6_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Var_61, transform_hlds__lco__Args_38, transform_hlds__lco__STATE_VARIABLE_UpdatedCallOutArgs_52_57, &transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__lco__HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__UpdatedArg_43));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UpdatedArgs_53_53));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "top_unused");
                    return;
                  }
                }
                break;
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
  MR_Word transform_hlds__lco__Info_9,
  MR_Word transform_hlds__lco__ConstInfo_10,
  MR_Word transform_hlds__lco__RevGoals0_11,
  MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_AfterGoals_20,
  MR_Word * transform_hlds__lco__RecGoal_13,
  MR_Word * transform_hlds__lco__RecOutArgs_14,
  MR_Word * transform_hlds__lco__RevBeforeGoals_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__RevGoals0_11)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__lco__RevGoal_16;
        MR_Word transform_hlds__lco__RevGoalsTail_17;
        MR_Word transform_hlds__lco__OutArgs_18;

        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__RevGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 0)));
            transform_hlds__lco__RevGoalsTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__RevGoals0_11, (MR_Integer) 1)));
            {
              transform_hlds__lco__succeeded = transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(transform_hlds__lco__Info_9, transform_hlds__lco__ConstInfo_10, transform_hlds__lco__RevGoal_16, &transform_hlds__lco__OutArgs_18);
            }
            if (transform_hlds__lco__succeeded)
              {
                *transform_hlds__lco__RecGoal_13 = transform_hlds__lco__RevGoal_16;
                *transform_hlds__lco__RecOutArgs_14 = transform_hlds__lco__OutArgs_18;
                *transform_hlds__lco__RevBeforeGoals_15 = transform_hlds__lco__RevGoalsTail_17;
                *transform_hlds__lco__STATE_VARIABLE_AfterGoals_20 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19;
                transform_hlds__lco__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__lco__TypeCtorInfo_23_23;
                MR_Word transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

                {
                  transform_hlds__lco__succeeded = transform_hlds__lco__potentially_moveable_goal_1_p_0(transform_hlds__lco__RevGoal_16);
                }
                if (transform_hlds__lco__succeeded)
                  {
                    transform_hlds__lco__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    {
                      mercury__list__cons_3_p_0(transform_hlds__lco__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__lco__RevGoal_16)), transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19, &transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__lco__next_value_of_RevGoals0_11 = transform_hlds__lco__RevGoalsTail_17;
                      MR_Word transform_hlds__lco__next_value_of_STATE_VARIABLE_AfterGoals_0_19 = transform_hlds__lco__STATE_VARIABLE_AfterGoals_21_21;

                      transform_hlds__lco__STATE_VARIABLE_AfterGoals_0_19 = transform_hlds__lco__next_value_of_STATE_VARIABLE_AfterGoals_0_19;
                      transform_hlds__lco__RevGoals0_11 = transform_hlds__lco__next_value_of_RevGoals0_11;
                    }
                    continue;
                  }
              }
          }
        return transform_hlds__lco__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
  MR_Word transform_hlds__lco__Goal_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__lco__succeeded;
        MR_Word transform_hlds__lco__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_2, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_44;

        {
          transform_hlds__lco__Var_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_4);
        }
        transform_hlds__lco__succeeded = (transform_hlds__lco__Var_44 == (MR_Integer) 0);
        if (transform_hlds__lco__succeeded)
          switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr_3)) {
            default:
              transform_hlds__lco__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              transform_hlds__lco__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 0)))) {
                default:
                  transform_hlds__lco__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word transform_hlds__lco__Reason_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 1)));
                    MR_Word transform_hlds__lco__SubGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_3, (MR_Integer) 2)));
                    MR_Word transform_hlds__lco__Var_12;
                    MR_Word transform_hlds__lco__Var_13;

                    transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (transform_hlds__lco__succeeded)
                      {
                        transform_hlds__lco__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 1)));
                        transform_hlds__lco__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_10, (MR_Integer) 2)));
                        transform_hlds__lco__succeeded = MR_TRUE;
                      }
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word transform_hlds__lco__next_value_of_Goal_2 = transform_hlds__lco__SubGoal_11;

                          transform_hlds__lco__Goal_2 = transform_hlds__lco__next_value_of_Goal_2;
                        }
                        continue;
                      }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.potentially_moveable_goal\'/1", (MR_String) "shorthand");
                    }
                    transform_hlds__lco__succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
          }
        return transform_hlds__lco__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__lco__potentially_transformable_recursive_call_4_p_0(
  MR_Word transform_hlds__lco__Info_5,
  MR_Word transform_hlds__lco__ConstInfo_6,
  MR_Word transform_hlds__lco__Goal_7,
  MR_Word * transform_hlds__lco__OutArgs_8)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_73_73;
    MR_Word transform_hlds__lco__TypeInfo_75_75;
    MR_Word transform_hlds__lco__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_7, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_7, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__PredId_11;
    MR_Integer transform_hlds__lco__ProcId_12;
    MR_Word transform_hlds__lco__Args_13;
    MR_Word transform_hlds__lco__ModuleInfo_17;
    MR_Word transform_hlds__lco__ProcInfo_18;
    MR_Word transform_hlds__lco__VarTypes_19;
    MR_Word transform_hlds__lco__CalleeProcInfo_20;
    MR_Word transform_hlds__lco__CalleeArgModes_21;
    MR_Word transform_hlds__lco__UnusedArgs_23;
    MR_Integer transform_hlds__lco__NumOutArgs_25;
    MR_Word transform_hlds__lco__CurrProcOutArgs_26;
    MR_Integer transform_hlds__lco__NumCurrProcOutArgs_27;
    MR_Word transform_hlds__lco__Var_28;
    MR_Word transform_hlds__lco__Var_29;
    MR_Word transform_hlds__lco__Var_30;
    MR_Word transform_hlds__lco__Var_76;
    MR_Word transform_hlds__lco___Builtin_14;
    MR_Word transform_hlds__lco___UnifyContext_15;
    MR_Word transform_hlds__lco___SymName_16;
    MR_Word transform_hlds__lco__Var_36;
    MR_Word transform_hlds__lco__Var_37;
    MR_Word transform_hlds__lco__Var_38;
    MR_Word transform_hlds__lco__Var_39;
    MR_Word transform_hlds__lco__Var_40;
    MR_Word transform_hlds__lco__Var_41;
    MR_Word transform_hlds__lco__Var_42;
    MR_Word transform_hlds__lco__Var_43;
    MR_Word transform_hlds__lco__Var_44;
    MR_Word transform_hlds__lco__Var_45;
    MR_Word transform_hlds__lco__Var_46;
    MR_Word transform_hlds__lco__Var_47;
    MR_Word transform_hlds__lco__Var_49;
    MR_Word transform_hlds__lco__Var_50;
    MR_Word transform_hlds__lco__Var_51;
    MR_Word transform_hlds__lco__Var_52;
    MR_Word transform_hlds__lco__Var_53;
    MR_Word transform_hlds__lco__Var_54;
    MR_Word transform_hlds__lco__Var_55;
    MR_Word transform_hlds__lco__Var_56;
    MR_Word transform_hlds__lco___InArgs_22;
    MR_Word transform_hlds__lco__Var_65;
    MR_Word transform_hlds__lco__Var_66;
    MR_Word transform_hlds__lco__Var_67;
    MR_Word transform_hlds__lco__Var_68;
    MR_Word transform_hlds__lco__Var_69;
    MR_Word transform_hlds__lco__Var_70;
    MR_Word transform_hlds__lco__Var_71;
    MR_Word transform_hlds__lco__Var_72;

    transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__GoalExpr_9)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__lco__succeeded)
      {
        transform_hlds__lco__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 0)));
        transform_hlds__lco__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 1)));
        transform_hlds__lco__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 2)));
        transform_hlds__lco___Builtin_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 3)));
        transform_hlds__lco___UnifyContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 4)));
        transform_hlds__lco___SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr_9, (MR_Integer) 5)));
        transform_hlds__lco__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
        transform_hlds__lco__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
        transform_hlds__lco__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
        transform_hlds__lco__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
        transform_hlds__lco__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
        transform_hlds__lco__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
        transform_hlds__lco__Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
        transform_hlds__lco__Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        transform_hlds__lco__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        transform_hlds__lco__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        {
          transform_hlds__lco__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_28, 0) = ((MR_Box) (transform_hlds__lco__PredId_11));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_28, 1) = ((MR_Box) (transform_hlds__lco__ProcId_12));
        }
        {
          transform_hlds__lco__succeeded = mercury__set__member_2_p_0(transform_hlds__lco__TypeCtorInfo_73_73, ((MR_Box) (transform_hlds__lco__Var_28)), transform_hlds__lco__Var_29);
        }
        if (transform_hlds__lco__succeeded)
          {
            {
              transform_hlds__lco__Var_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__lco__GoalInfo_10);
            }
            transform_hlds__lco__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
            transform_hlds__lco__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
            transform_hlds__lco__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
            transform_hlds__lco__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
            transform_hlds__lco__ProcInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
            transform_hlds__lco__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
            transform_hlds__lco__Var_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
            transform_hlds__lco__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            transform_hlds__lco__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            transform_hlds__lco__succeeded = (transform_hlds__lco__Var_30 == transform_hlds__lco__Var_76);
            if (transform_hlds__lco__succeeded)
              {
                transform_hlds__lco__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 0)));
                transform_hlds__lco__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 1)));
                transform_hlds__lco__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 2)));
                transform_hlds__lco__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 3)));
                transform_hlds__lco__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 4)));
                transform_hlds__lco__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Info_5, (MR_Integer) 5)));
                {
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_18, &transform_hlds__lco__VarTypes_19);
                }
                {
                  hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_17, transform_hlds__lco__PredId_11, transform_hlds__lco__ProcId_12, &transform_hlds__lco__CalleeProcInfo_20);
                }
                {
                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_20, &transform_hlds__lco__CalleeArgModes_21);
                }
                {
                  transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_17, transform_hlds__lco__VarTypes_19, transform_hlds__lco__Args_13, transform_hlds__lco__CalleeArgModes_21, &transform_hlds__lco___InArgs_22, transform_hlds__lco__OutArgs_8, &transform_hlds__lco__UnusedArgs_23);
                }
                transform_hlds__lco__succeeded = (transform_hlds__lco__UnusedArgs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (transform_hlds__lco__succeeded)
                  {
                    transform_hlds__lco__TypeInfo_75_75 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
                    {
                      mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_75_75, *transform_hlds__lco__OutArgs_8, &transform_hlds__lco__NumOutArgs_25);
                    }
                    transform_hlds__lco__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 0)));
                    transform_hlds__lco__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 1)));
                    transform_hlds__lco__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 2)));
                    transform_hlds__lco__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 3)));
                    transform_hlds__lco__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 4)));
                    transform_hlds__lco__CurrProcOutArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 5)));
                    transform_hlds__lco__Var_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) & (MR_Integer) 7);
                    transform_hlds__lco__Var_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    transform_hlds__lco__Var_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ConstInfo_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    {
                      mercury__list__length_2_p_0(transform_hlds__lco__TypeInfo_75_75, transform_hlds__lco__CurrProcOutArgs_26, &transform_hlds__lco__NumCurrProcOutArgs_27);
                    }
                    transform_hlds__lco__succeeded = (transform_hlds__lco__NumOutArgs_25 == transform_hlds__lco__NumCurrProcOutArgs_27);
                  }
              }
          }
      }
    return transform_hlds__lco__succeeded;
  }
}

static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
  MR_Word transform_hlds__lco__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Integer transform_hlds__lco__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));

    return transform_hlds__lco__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__lco__wrapper_arg_2;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Integer transform_hlds__lco__conv1_HeadVar__2_2;

    {
      transform_hlds__lco__conv1_HeadVar__2_2 = transform_hlds__lco__va_pos_1_f_0(((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
    transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_HeadVar__2_2));
    return transform_hlds__lco__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
  MR_Word transform_hlds__lco__VariantMap_5,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_46_46;
    MR_Word transform_hlds__lco__TypeCtorInfo_47_47;
    MR_Word transform_hlds__lco__TypeCtorInfo_49_49;
    MR_Word transform_hlds__lco__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__VariantId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__AddrOutArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__VariantPredProcId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 1)));
    MR_String transform_hlds__lco__VariantName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantId_7, (MR_Integer) 2)));
    MR_Word transform_hlds__lco__VariantPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 0)));
    MR_Integer transform_hlds__lco__VariantProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantPredProcId_10, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 0)));
    MR_Integer transform_hlds__lco__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_6, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__ProcInfo_17;
    MR_Word transform_hlds__lco__VariantProcInfo_18;
    MR_Word transform_hlds__lco__HeadVars_19;
    MR_Word transform_hlds__lco__VarTypes_20;
    MR_Word transform_hlds__lco__ArgTypes_21;
    MR_Word transform_hlds__lco__TVarSet_24;
    MR_Word transform_hlds__lco__ExistQVars_25;
    MR_Word transform_hlds__lco__Origin0_27;
    MR_Word transform_hlds__lco__AddrOutArgPosns_28;
    MR_Word transform_hlds__lco__Transform_29;
    MR_Word transform_hlds__lco__Origin_30;
    MR_Word transform_hlds__lco__VariantProcs_31;
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34;
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_35_35;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43;
    MR_Word transform_hlds__lco__STATE_VARIABLE_PredTable_44_44;
    MR_Word transform_hlds__lco__VarSet0_61;
    MR_Word transform_hlds__lco__VarTypes0_62;
    MR_Word transform_hlds__lco__HeadVars0_63;
    MR_Word transform_hlds__lco__ArgModes0_64;
    MR_Word transform_hlds__lco__HeadVars_65;
    MR_Word transform_hlds__lco__ArgModes_66;
    MR_Word transform_hlds__lco__VarToAddr_67;
    MR_Word transform_hlds__lco__VarSet_68;
    MR_Word transform_hlds__lco__VarTypes_69;
    MR_Word transform_hlds__lco__InstMap0_70;
    MR_Word transform_hlds__lco__Goal0_71;
    MR_Word transform_hlds__lco__Goal_72;
    MR_Word transform_hlds__lco__Globals_74;
    MR_Word transform_hlds__lco__HighLevelData_75;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83;
    MR_Word transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85;
    MR_Word transform_hlds__lco___PredInfo_16;
    MR_Word transform_hlds__lco___Changed_73;
    MR_Box transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36;
    MR_Word transform_hlds__lco___ArgTypes0_26;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__PredId_14, transform_hlds__lco__ProcId_15, &transform_hlds__lco___PredInfo_16, &transform_hlds__lco__ProcInfo_17);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarSet0_61);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__VarTypes0_62);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__HeadVars0_63);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__ArgModes0_64);
    }
    {
      transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__HeadVars0_63, transform_hlds__lco__ArgModes0_64, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__ArgModes_66, transform_hlds__lco__AddrOutArgs_9, (MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__VarToAddr_67, transform_hlds__lco__VarSet0_61, &transform_hlds__lco__VarSet_68, transform_hlds__lco__VarTypes0_62, &transform_hlds__lco__VarTypes_69);
    }
    {
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__lco__HeadVars_65, transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78);
    }
    {
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__lco__ArgModes_66, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_32_78, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lco__VarSet_68, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_33_79, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lco__VarTypes_69, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_34_80, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lco__ProcInfo_17, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__InstMap0_70);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lco__ProcInfo_17, &transform_hlds__lco__Goal0_71);
    }
    {
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__lco__VariantMap_5, transform_hlds__lco__VarToAddr_67, transform_hlds__lco__InstMap0_70, transform_hlds__lco__Goal0_71, &transform_hlds__lco__Goal_72, &transform_hlds__lco___Changed_73, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_35_81, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lco__Goal_72, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_36_82, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_37_83, &transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__Globals_74);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_74, (MR_Integer) 264, &transform_hlds__lco__HighLevelData_75);
    }
    switch (transform_hlds__lco__HighLevelData_75) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__lco__VariantProcInfo_18 = transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85;
          transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__lco__STATE_VARIABLE_VariantProcInfo_39_85, &transform_hlds__lco__VariantProcInfo_18, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_32, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34);
          }
        }
        break;
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__HeadVars_19);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__VariantProcInfo_18, &transform_hlds__lco__VarTypes_20);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lco__VarTypes_20, transform_hlds__lco__HeadVars_19, &transform_hlds__lco__ArgTypes_21);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, &transform_hlds__lco__STATE_VARIABLE_PredTable_35_35);
    }
    transform_hlds__lco__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__lco__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), &transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
    }
    transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36 = ((MR_Word) transform_hlds__lco__conv0_STATE_VARIABLE_VariantPredInfo_36_36);
    {
      hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__lco__VariantName_11, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_36_36, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37);
    }
    {
      hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_37_37, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__TVarSet_24, &transform_hlds__lco__ExistQVars_25, &transform_hlds__lco___ArgTypes0_26);
    }
    {
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__lco__TVarSet_24, transform_hlds__lco__ExistQVars_25, transform_hlds__lco__ArgTypes_21, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_39_39, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__Origin0_27);
    }
    transform_hlds__lco__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      transform_hlds__lco__AddrOutArgPosns_28 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0, transform_hlds__lco__TypeCtorInfo_49_49, (MR_Word) &transform_hlds__lco_scalar_common_2[11], transform_hlds__lco__AddrOutArgs_9);
    }
    {
      transform_hlds__lco__Transform_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 1) = ((MR_Box) (transform_hlds__lco__ProcId_15));
      MR_hl_field(MR_mktag(3), transform_hlds__lco__Transform_29, 2) = ((MR_Box) (transform_hlds__lco__AddrOutArgPosns_28));
    }
    {
      transform_hlds__lco__Origin_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 0) = ((MR_Box) (transform_hlds__lco__Transform_29));
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 1) = ((MR_Box) (transform_hlds__lco__Origin0_27));
      MR_hl_field(MR_mktag(2), transform_hlds__lco__Origin_30, 2) = ((MR_Box) (transform_hlds__lco__PredId_14));
    }
    {
      hlds__hlds_pred__pred_info_set_origin_3_p_0(transform_hlds__lco__Origin_30, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_40_40, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42);
    }
    {
      transform_hlds__lco__VariantProcs_31 = mercury__map__singleton_2_f_0(transform_hlds__lco__TypeCtorInfo_49_49, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__lco__VariantProcId_13)), ((MR_Box) (transform_hlds__lco__VariantProcInfo_18)));
    }
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__lco__VariantProcs_31, transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_42_42, &transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43);
    }
    {
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_46_46, transform_hlds__lco__TypeCtorInfo_47_47, ((MR_Box) (transform_hlds__lco__VariantPredId_12)), ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantPredInfo_43_43)), transform_hlds__lco__STATE_VARIABLE_PredTable_35_35, &transform_hlds__lco__STATE_VARIABLE_PredTable_44_44);
    }
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__STATE_VARIABLE_PredTable_44_44, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_34_34, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_33);
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_1,
  MR_Word transform_hlds__lco__VariantMap_2,
  MR_Word transform_hlds__lco__VarToAddr_3,
  MR_Word transform_hlds__lco__InstMap0_4,
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Word * transform_hlds__lco__HeadVar__6_6,
  MR_Word * transform_hlds__lco__HeadVar__7_7,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_9)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__lco__HeadVar__7_7 = (MR_Integer) 0;
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_9 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8;
      }
    else
      {
        MR_Word transform_hlds__lco__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Goal_26;
        MR_Word transform_hlds__lco__HeadChanged_27;
        MR_Word transform_hlds__lco__InstMap1_28;
        MR_Word transform_hlds__lco__Goals_29;
        MR_Word transform_hlds__lco__TailChanged_30;
        MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35;
        MR_Word transform_hlds__lco__SubConj_31;
        MR_Word transform_hlds__lco__Var_37;
        MR_Word transform_hlds__lco__Var_38;
        MR_Word transform_hlds__lco__Var_32;

        {
          transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap0_4, transform_hlds__lco__Goal0_21, &transform_hlds__lco__Goal_26, &transform_hlds__lco__HeadChanged_27, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35);
        }
        {
          hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Goal0_21, transform_hlds__lco__InstMap0_4, &transform_hlds__lco__InstMap1_28);
        }
        {
          transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_1, transform_hlds__lco__VariantMap_2, transform_hlds__lco__VarToAddr_3, transform_hlds__lco__InstMap1_28, transform_hlds__lco__Goals0_22, &transform_hlds__lco__Goals_29, &transform_hlds__lco__TailChanged_30, transform_hlds__lco__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__lco__STATE_VARIABLE_ProcInfo_9);
        }
        {
          *transform_hlds__lco__HeadVar__7_7 = mercury__bool__or_2_f_0(transform_hlds__lco__HeadChanged_27, transform_hlds__lco__TailChanged_30);
        }
        transform_hlds__lco__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 0)));
        transform_hlds__lco__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal_26, (MR_Integer) 1)));
        transform_hlds__lco__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Var_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Var_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Var_37, (MR_Integer) 1)));
            transform_hlds__lco__SubConj_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Var_37, (MR_Integer) 2)));
            transform_hlds__lco__succeeded = (transform_hlds__lco__Var_38 == (MR_Integer) 0);
          }
        if (transform_hlds__lco__succeeded)
          {
            {
              *transform_hlds__lco__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__lco__SubConj_31, transform_hlds__lco__Goals_29);
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__lco__HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Goal_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Goals_29));
          }
      }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv7_Case_15;
    MR_Word transform_hlds__lco__conv6_Changed_16;
    MR_Word transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23;

    {
      transform_hlds__lco__lco_transform_variant_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv7_Case_15, &transform_hlds__lco__conv6_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23);
    }
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv7_Case_15));
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv6_Changed_16));
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv5_STATE_VARIABLE_ProcInfo_23));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv2_Goal_15;
    MR_Word transform_hlds__lco__conv1_Changed_16;
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74;

    {
      transform_hlds__lco__lco_transform_variant_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv2_Goal_15, &transform_hlds__lco__conv1_Changed_16, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74);
    }
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv2_Goal_15));
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_Changed_16));
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_74));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
  void * transform_hlds__lco__env_ptr_arg)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
  void * transform_hlds__lco__env_ptr_arg)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

    (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44 = ((MR_Word) (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44);
    {
      transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(transform_hlds__lco__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
  void * transform_hlds__lco__env_ptr_arg)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

    {
      MR_Word transform_hlds__lco__Var_45;

      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 0)));
      transform_hlds__lco__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 1)));
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
      {
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_115_115, ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42)), ((MR_Box) ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__Var_114)));
      }
      if ((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
        {
          transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(transform_hlds__lco__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
  void * transform_hlds__lco__env_ptr_arg)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * transform_hlds__lco__env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) transform_hlds__lco__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__lco_scalar_common_2[6], &(transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44, (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__lco_transform_variant_goal_9_p_0_4, transform_hlds__lco__env_ptr);
          }
        }
        (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__lco__env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_10,
  MR_Word transform_hlds__lco__VariantMap_11,
  MR_Word transform_hlds__lco__VarToAddr_12,
  MR_Word transform_hlds__lco__InstMap0_13,
  MR_Word transform_hlds__lco__Goal0_14,
  MR_Word * transform_hlds__lco__Goal_15,
  MR_Word * transform_hlds__lco__Changed_16,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_74)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s transform_hlds__lco__env;

    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12 = transform_hlds__lco__VarToAddr_12;
    {
      MR_Word transform_hlds__lco__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 0)));
      MR_Word transform_hlds__lco__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Goal0_14, (MR_Integer) 1)));
      MR_Word transform_hlds__lco__GoalExpr_23;
      MR_Word transform_hlds__lco__GoalInfo_24;

      switch (MR_tag((MR_Word) transform_hlds__lco__GoalExpr0_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
            *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
            }
            transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
          }
          break;
        case (MR_Integer) 2:
          {
            transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__GoalInfo0_19, &transform_hlds__lco__GoalInfo_24, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__lco__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
                MR_Word transform_hlds__lco__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));

                switch (transform_hlds__lco__ConjType_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "parallel_conj");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word transform_hlds__lco__Goals_22;

                      {
                        transform_hlds__lco__lco_transform_variant_conj_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Goals0_21, &transform_hlds__lco__Goals_22, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
                      {
                        transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__ConjType_20));
                        MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Goals_22));
                      }
                      transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word transform_hlds__lco__TypeCtorInfo_102_102;
                MR_Word transform_hlds__lco__DisjsChanged_25;
                MR_Word transform_hlds__lco__Var_88;
                MR_Word transform_hlds__lco__Goals0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
                MR_Word transform_hlds__lco__Goals_96;
                MR_Box transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74;

                {
                  transform_hlds__lco__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_88, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_88, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_1));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_88, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_88, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_88, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_88, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
                }
                transform_hlds__lco__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                {
                  mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_102_102, transform_hlds__lco__TypeCtorInfo_102_102, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__Var_88, transform_hlds__lco__Goals0_95, &transform_hlds__lco__Goals_96, &transform_hlds__lco__DisjsChanged_25, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
                }
                *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv3_STATE_VARIABLE_ProcInfo_74);
                {
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__DisjsChanged_25);
                }
                {
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Goals_96));
                }
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word transform_hlds__lco__TypeCtorInfo_110_110;
                MR_Word transform_hlds__lco__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
                MR_Word transform_hlds__lco__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
                MR_Word transform_hlds__lco__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
                MR_Word transform_hlds__lco__Cases_29;
                MR_Word transform_hlds__lco__CasesChanged_30;
                MR_Word transform_hlds__lco__Var_86;
                MR_Box transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74;

                {
                  transform_hlds__lco__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_86, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[1]));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_86, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_6));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_86, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_86, 4) = ((MR_Box) (transform_hlds__lco__VariantMap_11));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_86, 5) = ((MR_Box) ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
                  MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_86, 6) = ((MR_Box) (transform_hlds__lco__InstMap0_13));
                }
                transform_hlds__lco__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
                {
                  mercury__list__map2_foldl_6_p_0(transform_hlds__lco__TypeCtorInfo_110_110, transform_hlds__lco__TypeCtorInfo_110_110, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__Var_86, transform_hlds__lco__Cases0_28, &transform_hlds__lco__Cases_29, &transform_hlds__lco__CasesChanged_30, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73)), &transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
                }
                *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = ((MR_Word) transform_hlds__lco__conv8_STATE_VARIABLE_ProcInfo_74);
                {
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_list_1_f_0(transform_hlds__lco__CasesChanged_30);
                }
                {
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Var_26));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__CanFail_27));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Cases_29));
                }
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word transform_hlds__lco__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
                MR_Word transform_hlds__lco__SubGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
                MR_Word transform_hlds__lco__FGT_43;

                (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__lco__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
                  {
                    (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 1)));
                    transform_hlds__lco__FGT_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__Reason_40, (MR_Integer) 2)));
                    switch (transform_hlds__lco__FGT_43) {
                      default:
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 1:
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
                        break;
                    }
                  }
                if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
                  {
                    {
                      transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(&transform_hlds__lco__env);
                    }
                    if ((transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
                      {
                        transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__GoalInfo0_19, transform_hlds__lco__GoalExpr0_18, &transform_hlds__lco__GoalExpr_23, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                      }
                    else
                      {
                        transform_hlds__lco__GoalExpr_23 = transform_hlds__lco__GoalExpr0_18;
                        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
                        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_74 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73;
                      }
                  }
                else
                  {
                    MR_Word transform_hlds__lco__SubGoal_46;

                    {
                      transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__SubGoal0_41, &transform_hlds__lco__SubGoal_46, transform_hlds__lco__Changed_16, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                    }
                    {
                      transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Reason_40));
                      MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__SubGoal_46));
                    }
                  }
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word transform_hlds__lco__Vars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 1)));
                MR_Word transform_hlds__lco__Cond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 2)));
                MR_Word transform_hlds__lco__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 3)));
                MR_Word transform_hlds__lco__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr0_18, (MR_Integer) 4)));
                MR_Word transform_hlds__lco__InstMap1_35;
                MR_Word transform_hlds__lco__Then_36;
                MR_Word transform_hlds__lco__ThenChanged_37;
                MR_Word transform_hlds__lco__Else_38;
                MR_Word transform_hlds__lco__ElseChanged_39;
                MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84;

                {
                  hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Cond_32, transform_hlds__lco__InstMap0_13, &transform_hlds__lco__InstMap1_35);
                }
                {
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap1_35, transform_hlds__lco__Then0_33, &transform_hlds__lco__Then_36, &transform_hlds__lco__ThenChanged_37, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_73, &transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84);
                }
                {
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(transform_hlds__lco__ModuleInfo_10, transform_hlds__lco__VariantMap_11, (transform_hlds__lco__env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__InstMap0_13, transform_hlds__lco__Else0_34, &transform_hlds__lco__Else_38, &transform_hlds__lco__ElseChanged_39, transform_hlds__lco__STATE_VARIABLE_ProcInfo_84_84, transform_hlds__lco__STATE_VARIABLE_ProcInfo_74);
                }
                {
                  *transform_hlds__lco__Changed_16 = mercury__bool__or_2_f_0(transform_hlds__lco__ThenChanged_37, transform_hlds__lco__ElseChanged_39);
                }
                {
                  transform_hlds__lco__GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 1) = ((MR_Box) (transform_hlds__lco__Vars_31));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 2) = ((MR_Box) (transform_hlds__lco__Cond_32));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 3) = ((MR_Box) (transform_hlds__lco__Then_36));
                  MR_hl_field(MR_mktag(3), transform_hlds__lco__GoalExpr_23, 4) = ((MR_Box) (transform_hlds__lco__Else_38));
                }
                transform_hlds__lco__GoalInfo_24 = transform_hlds__lco__GoalInfo0_19;
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      switch (*transform_hlds__lco__Changed_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *transform_hlds__lco__Goal_15 = transform_hlds__lco__Goal0_14;
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__lco__GoalInfoImpure_72;

            {
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__lco__GoalInfo_24, &transform_hlds__lco__GoalInfoImpure_72);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__lco__Goal_15 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr_23));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lco__GoalInfoImpure_72));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv0_HeadVar__2_70;

    {
      transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1691__1_2_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv0_HeadVar__2_70);
    }
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__2_70));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_12,
  MR_Word transform_hlds__lco__VariantMap_13,
  MR_Word transform_hlds__lco__VarToAddr_14,
  MR_Word transform_hlds__lco__InstMap0_15,
  MR_Word transform_hlds__lco__GoalExpr0_16,
  MR_Word * transform_hlds__lco__GoalExpr_17,
  MR_Word transform_hlds__lco__GoalInfo0_18,
  MR_Word * transform_hlds__lco__GoalInfo_19,
  MR_Word * transform_hlds__lco__Changed_20,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_54)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeInfo_65_65;
    MR_Word transform_hlds__lco__InstMap1_22;
    MR_Word transform_hlds__lco__GroundingVarToAddr_23;
    MR_Word transform_hlds__lco__Var_55;
    MR_Word transform_hlds__lco__Var_56;

    {
      transform_hlds__lco__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_55, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_16));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_55, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo0_18));
    }
    {
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Var_55, transform_hlds__lco__InstMap0_15, &transform_hlds__lco__InstMap1_22);
    }
    {
      transform_hlds__lco__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_56, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_56, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_56, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_12));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_56, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_15));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_56, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_22));
    }
    transform_hlds__lco__TypeInfo_65_65 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
    {
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__Var_56, transform_hlds__lco__VarToAddr_14, &transform_hlds__lco__GroundingVarToAddr_23);
    }
    if ((transform_hlds__lco__GroundingVarToAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__lco__GoalExpr_17 = transform_hlds__lco__GoalExpr0_16;
        *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
        *transform_hlds__lco__Changed_20 = (MR_Integer) 0;
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
      }
    else
      {
        MR_Word transform_hlds__lco__CallPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 0)));
        MR_Integer transform_hlds__lco__CallProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 2)));
        MR_Word transform_hlds__lco__Builtin_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 3)));
        MR_Word transform_hlds__lco__UnifyContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 4)));
        MR_Word transform_hlds__lco__SymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lco__GoalExpr0_16, (MR_Integer) 5)));
        MR_Word transform_hlds__lco__CallPredProcId_32;
        MR_Word transform_hlds__lco__CalleeProcInfo_33;
        MR_Word transform_hlds__lco__VarTypes_34;
        MR_Word transform_hlds__lco__CalleeArgModes_35;
        MR_Word transform_hlds__lco__Subst_40;
        MR_Word transform_hlds__lco__ExistingVariant_42;
        MR_Word transform_hlds__lco__ExistingVariants_36;
        MR_Word transform_hlds__lco__OutArgs_38;
        MR_Word transform_hlds__lco__VariantArgs_41;
        MR_Integer transform_hlds__lco__Var_57;
        MR_Word transform_hlds__lco___InArgs_37;
        MR_Word transform_hlds__lco___UnusedArgs_39;

        {
          transform_hlds__lco__CallPredProcId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 0) = ((MR_Box) (transform_hlds__lco__CallPredId_26));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__CallPredProcId_32, 1) = ((MR_Box) (transform_hlds__lco__CallProcId_27));
        }
        {
          hlds__hlds_module__module_info_proc_info_4_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__CallPredId_26, transform_hlds__lco__CallProcId_27, &transform_hlds__lco__CalleeProcInfo_33);
        }
        {
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, &transform_hlds__lco__VarTypes_34);
        }
        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lco__CalleeProcInfo_33, &transform_hlds__lco__CalleeArgModes_35);
        }
        {
          transform_hlds__lco__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__VariantMap_13, ((MR_Box) (transform_hlds__lco__CallPredProcId_32)), &transform_hlds__lco__ExistingVariants_36);
        }
        if (transform_hlds__lco__succeeded)
          {
            {
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarTypes_34, transform_hlds__lco__Args_28, transform_hlds__lco__CalleeArgModes_35, &transform_hlds__lco___InArgs_37, &transform_hlds__lco__OutArgs_38, &transform_hlds__lco___UnusedArgs_39);
            }
            transform_hlds__lco__Var_57 = (MR_Integer) 1;
            {
              transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_23, transform_hlds__lco__Var_57, transform_hlds__lco__OutArgs_38, &transform_hlds__lco__Subst_40, &transform_hlds__lco__VariantArgs_41);
            }
            {
              transform_hlds__lco__succeeded = transform_hlds__lco__match_existing_variant_3_p_0(transform_hlds__lco__ExistingVariants_36, transform_hlds__lco__VariantArgs_41, &transform_hlds__lco__ExistingVariant_42);
            }
          }
        if (transform_hlds__lco__succeeded)
          {
            MR_Word transform_hlds__lco__CallArgs_43;
            MR_Word transform_hlds__lco__VariantPredId_44;
            MR_Integer transform_hlds__lco__VariantProcId_45;
            MR_Word transform_hlds__lco__VariantSymName_46;
            MR_Word transform_hlds__lco__Globals_47;
            MR_Word transform_hlds__lco__HighLevelData_48;
            MR_Word transform_hlds__lco__Var_59;
            MR_String transform_hlds__lco__VariantName_79;
            MR_Word transform_hlds__lco__Var_78;

            {
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, transform_hlds__lco__Subst_40, transform_hlds__lco__Args_28, &transform_hlds__lco__CallArgs_43);
            }
            transform_hlds__lco__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 0)));
            transform_hlds__lco__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 1)));
            transform_hlds__lco__VariantName_79 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__ExistingVariant_42, (MR_Integer) 2)));
            if (((MR_tag((MR_Word) transform_hlds__lco__SymName_31)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word transform_hlds__lco__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 0)));
                MR_String transform_hlds__lco___Name_82 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__lco__SymName_31, (MR_Integer) 1)));

                {
                  transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__ModuleName_81));
                  MR_hl_field(MR_mktag(1), transform_hlds__lco__VariantSymName_46, 1) = ((MR_Box) (transform_hlds__lco__VariantName_79));
                }
              }
            else
              {
                transform_hlds__lco__VariantSymName_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantSymName_46, 0) = ((MR_Box) (transform_hlds__lco__VariantName_79));
              }
            transform_hlds__lco__VariantPredId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_59, (MR_Integer) 0)));
            transform_hlds__lco__VariantProcId_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_59, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__GoalExpr_17 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__lco__VariantPredId_44));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__lco__VariantProcId_45));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__lco__CallArgs_43));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__lco__Builtin_29));
              MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__lco__UnifyContext_30));
              MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__lco__VariantSymName_46));
            }
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__lco__ModuleInfo_12, &transform_hlds__lco__Globals_47);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__lco__Globals_47, (MR_Integer) 264, &transform_hlds__lco__HighLevelData_48);
            }
            switch (transform_hlds__lco__HighLevelData_48) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__lco__TypeInfo_73_73 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
                  MR_Word transform_hlds__lco__GroundVars_49;
                  MR_Word transform_hlds__lco__AddrVars_50;
                  MR_Word transform_hlds__lco__InstMapDelta0_51;
                  MR_Word transform_hlds__lco__InstMapDelta_52;
                  MR_Word transform_hlds__lco__Var_62;

                  {
                    mercury__list__map_3_p_0(transform_hlds__lco__TypeInfo_65_65, transform_hlds__lco__TypeInfo_73_73, (MR_Word) &transform_hlds__lco_scalar_common_2[10], transform_hlds__lco__GroundingVarToAddr_23, &transform_hlds__lco__GroundVars_49);
                  }
                  {
                    mercury__map__apply_to_list_3_p_0(transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__TypeInfo_73_73, transform_hlds__lco__GroundVars_49, transform_hlds__lco__Subst_40, &transform_hlds__lco__AddrVars_50);
                  }
                  {
                    transform_hlds__lco__InstMapDelta0_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__lco__GoalInfo0_18);
                  }
                  {
                    transform_hlds__lco__Var_62 = parse_tree__prog_mode__ground_inst_0_f_0();
                  }
                  {
                    hlds__instmap__instmap_delta_set_vars_same_4_p_0(transform_hlds__lco__Var_62, transform_hlds__lco__AddrVars_50, transform_hlds__lco__InstMapDelta0_51, &transform_hlds__lco__InstMapDelta_52);
                  }
                  {
                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__lco__InstMapDelta_52, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalInfo_19);
                  }
                }
                break;
            }
            *transform_hlds__lco__Changed_20 = (MR_Integer) 1;
            *transform_hlds__lco__STATE_VARIABLE_ProcInfo_54 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53;
          }
        else
          {
            {
              transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(transform_hlds__lco__ModuleInfo_12, transform_hlds__lco__VarToAddr_14, transform_hlds__lco__InstMap0_15, transform_hlds__lco__GoalInfo0_18, transform_hlds__lco__GoalExpr0_16, transform_hlds__lco__GoalExpr_17, transform_hlds__lco__Changed_20, transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_53, transform_hlds__lco__STATE_VARIABLE_ProcInfo_54);
            }
            *transform_hlds__lco__GoalInfo_19 = transform_hlds__lco__GoalInfo0_18;
          }
      }
  }
}

static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
  MR_Word transform_hlds__lco__GroundingVarToAddr_6,
  MR_Integer transform_hlds__lco__OutArgNum_7,
  MR_Word transform_hlds__lco__OutArgs_8,
  MR_Word * transform_hlds__lco__Subst_9,
  MR_Word * transform_hlds__lco__VariantArgs_10)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__OutArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__lco__TypeInfo_21_21 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];

        {
          *transform_hlds__lco__Subst_9 = mercury__map__init_0_f_0(transform_hlds__lco__TypeInfo_21_21, transform_hlds__lco__TypeInfo_21_21);
        }
        *transform_hlds__lco__VariantArgs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word transform_hlds__lco__OutArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 0)));
        MR_Word transform_hlds__lco__OutArgsTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__OutArgs_8, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Subst0_13;
        MR_Word transform_hlds__lco__VariantArgsTail_14;
        MR_Integer transform_hlds__lco__Var_19 = (transform_hlds__lco__OutArgNum_7 + (MR_Integer) 1);
        MR_Word transform_hlds__lco__StoreTarget_15;
        MR_Box transform_hlds__lco__conv0_StoreTarget_15;

        {
          transform_hlds__lco__grounding_to_variant_args_5_p_0(transform_hlds__lco__GroundingVarToAddr_6, transform_hlds__lco__Var_19, transform_hlds__lco__OutArgsTail_12, &transform_hlds__lco__Subst0_13, &transform_hlds__lco__VariantArgsTail_14);
        }
        {
          transform_hlds__lco__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[3], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0, transform_hlds__lco__GroundingVarToAddr_6, ((MR_Box) (transform_hlds__lco__OutArg_11)), &transform_hlds__lco__conv0_StoreTarget_15);
        }
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__StoreTarget_15 = ((MR_Word) transform_hlds__lco__conv0_StoreTarget_15);
            transform_hlds__lco__succeeded = MR_TRUE;
          }
        if (transform_hlds__lco__succeeded)
          {
            MR_Word transform_hlds__lco__TypeInfo_24_24 = (MR_Word) &transform_hlds__lco_scalar_common_1[3];
            MR_Word transform_hlds__lco__StoreArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 0)));
            MR_Word transform_hlds__lco__MaybeFieldId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__StoreTarget_15, (MR_Integer) 1)));
            MR_Word transform_hlds__lco__VariantArg_18;

            {
              mercury__map__det_insert_4_p_0(transform_hlds__lco__TypeInfo_24_24, transform_hlds__lco__TypeInfo_24_24, ((MR_Box) (transform_hlds__lco__OutArg_11)), ((MR_Box) (transform_hlds__lco__StoreArg_16)), transform_hlds__lco__Subst0_13, transform_hlds__lco__Subst_9);
            }
            {
              transform_hlds__lco__VariantArg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 0) = ((MR_Box) (transform_hlds__lco__OutArgNum_7));
              MR_hl_field(MR_mktag(0), transform_hlds__lco__VariantArg_18, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__VariantArgs_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VariantArg_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VariantArgsTail_14));
            }
          }
        else
          {
            *transform_hlds__lco__Subst_9 = transform_hlds__lco__Subst0_13;
            *transform_hlds__lco__VariantArgs_10 = transform_hlds__lco__VariantArgsTail_14;
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__AddrArgNums_6,
  MR_Word * transform_hlds__lco__Variant_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__lco__Variant0_4;
        MR_Word transform_hlds__lco__Variants_5;
        MR_Word transform_hlds__lco__TypeInfo_11_11;
        MR_Word transform_hlds__lco__Var_10;
        MR_Word transform_hlds__lco__Var_8;
        MR_String transform_hlds__lco__Var_9;

        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__Variant0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
            transform_hlds__lco__Variants_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
            transform_hlds__lco__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 0)));
            transform_hlds__lco__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 1)));
            transform_hlds__lco__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Variant0_4, (MR_Integer) 2)));
            transform_hlds__lco__TypeInfo_11_11 = (MR_Word) &transform_hlds__lco_scalar_common_1[7];
            {
              transform_hlds__lco__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lco__TypeInfo_11_11, ((MR_Box) (transform_hlds__lco__AddrArgNums_6)), ((MR_Box) (transform_hlds__lco__Var_10)));
            }
            if (transform_hlds__lco__succeeded)
              {
                *transform_hlds__lco__Variant_7 = transform_hlds__lco__Variant0_4;
                transform_hlds__lco__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__lco__next_value_of_HeadVar__1_1 = transform_hlds__lco__Variants_5;

                  transform_hlds__lco__HeadVar__1_1 = transform_hlds__lco__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return transform_hlds__lco__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word transform_hlds__lco__HeadVar__3_3,
  MR_Word transform_hlds__lco__HeadVar__4_4,
  MR_Word * transform_hlds__lco__HeadVar__5_5,
  MR_Word * transform_hlds__lco__HeadVar__6_6,
  MR_Word * transform_hlds__lco__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__lco__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__lco__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__lco__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__lco__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__3_3, (MR_Integer) 0)));

        if ((transform_hlds__lco__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__lco__CalleeMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__lco__CalleeModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__lco__CalleeType_39;
            MR_Word transform_hlds__lco__TopFunctorMode_40;
            MR_Word transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
            MR_Word transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
            MR_Word transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;

            {
              transform_hlds__lco__classify_proc_call_args_7_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Var_50, transform_hlds__lco__CalleeModes_35, &transform_hlds__lco__STATE_VARIABLE_InArgs_44_44, &transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45, &transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__HeadVar__2_2, transform_hlds__lco__Var_51, &transform_hlds__lco__CalleeType_39);
            }
            {
              check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(transform_hlds__lco__HeadVar__1_1, transform_hlds__lco__CalleeMode_34, transform_hlds__lco__CalleeType_39, &transform_hlds__lco__TopFunctorMode_40);
            }
            switch (transform_hlds__lco__TopFunctorMode_40) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__lco__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_51));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_InArgs_44_44));
                  }
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__lco__HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_51));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45));
                  }
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
                  *transform_hlds__lco__HeadVar__7_7 = transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__lco__HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Var_51));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_UnusedArgs_46_46));
                  }
                  *transform_hlds__lco__HeadVar__5_5 = transform_hlds__lco__STATE_VARIABLE_InArgs_44_44;
                  *transform_hlds__lco__HeadVar__6_6 = transform_hlds__lco__STATE_VARIABLE_OutArgs_45_45;
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box * transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3,
  MR_Box * transform_hlds__lco__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv1_Goal_11;
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32;

    {
      transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), &transform_hlds__lco__conv1_Goal_11, ((MR_Word) transform_hlds__lco__wrapper_arg_3), &transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32);
    }
    *transform_hlds__lco__wrapper_arg_2 = ((MR_Box) (transform_hlds__lco__conv1_Goal_11));
    *transform_hlds__lco__wrapper_arg_4 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ProcInfo_32));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__lco__wrapper_arg_1));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
  MR_Word transform_hlds__lco__ModuleInfo_10,
  MR_Word transform_hlds__lco__VarToAddr_11,
  MR_Word transform_hlds__lco__InstMap0_12,
  MR_Word transform_hlds__lco__GoalInfo_13,
  MR_Word transform_hlds__lco__GoalExpr0_14,
  MR_Word * transform_hlds__lco__GoalExpr_15,
  MR_Word * transform_hlds__lco__Changed_16,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ProcInfo_24)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeInfo_33_33;
    MR_Word transform_hlds__lco__InstMap1_18;
    MR_Word transform_hlds__lco__GroundingVarToAddr_19;
    MR_Word transform_hlds__lco__Var_25;
    MR_Word transform_hlds__lco__Var_26;

    {
      transform_hlds__lco__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_25, 0) = ((MR_Box) (transform_hlds__lco__GoalExpr0_14));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_25, 1) = ((MR_Box) (transform_hlds__lco__GoalInfo_13));
    }
    {
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__lco__Var_25, transform_hlds__lco__InstMap0_12, &transform_hlds__lco__InstMap1_18);
    }
    {
      transform_hlds__lco__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_26, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_26, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_26, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_26, 4) = ((MR_Box) (transform_hlds__lco__InstMap0_12));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_26, 5) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
    }
    transform_hlds__lco__TypeInfo_33_33 = (MR_Word) &transform_hlds__lco_scalar_common_2[6];
    {
      mercury__list__filter_3_p_0(transform_hlds__lco__TypeInfo_33_33, transform_hlds__lco__Var_26, transform_hlds__lco__VarToAddr_11, &transform_hlds__lco__GroundingVarToAddr_19);
    }
    if ((transform_hlds__lco__GroundingVarToAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__lco__GoalExpr_15 = transform_hlds__lco__GoalExpr0_14;
        *transform_hlds__lco__Changed_16 = (MR_Integer) 0;
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23;
      }
    else
      {
        MR_Word transform_hlds__lco__StoreGoals_22;
        MR_Word transform_hlds__lco__Var_27;
        MR_Word transform_hlds__lco__Var_30;
        MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24;

        {
          transform_hlds__lco__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_27, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_27, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_27, 3) = ((MR_Box) (transform_hlds__lco__ModuleInfo_10));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_27, 4) = ((MR_Box) (transform_hlds__lco__InstMap1_18));
        }
        {
          mercury__list__map_foldl_5_p_0(transform_hlds__lco__TypeInfo_33_33, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__Var_27, transform_hlds__lco__GroundingVarToAddr_19, &transform_hlds__lco__StoreGoals_22, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ProcInfo_0_23)), &transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
        }
        *transform_hlds__lco__STATE_VARIABLE_ProcInfo_24 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ProcInfo_24);
        {
          transform_hlds__lco__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_30, 0) = ((MR_Box) (transform_hlds__lco__Var_25));
          MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_30, 1) = ((MR_Box) (transform_hlds__lco__StoreGoals_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__lco__GoalExpr_15 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__lco__Var_30));
        }
        *transform_hlds__lco__Changed_16 = (MR_Integer) 1;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
  MR_Box transform_hlds__lco__closure_arg)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1409__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__HeadVar__2_2,
  MR_Word * transform_hlds__lco__HeadVar__3_3,
  MR_Word * transform_hlds__lco__HeadVar__4_4,
  MR_Word transform_hlds__lco__HeadVar__5_5,
  MR_Integer transform_hlds__lco__NextOutArgNum_6,
  MR_Word transform_hlds__lco__ModuleInfo_7,
  MR_Word * transform_hlds__lco__HeadVar__8_8,
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_0_9,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarSet_10,
  MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VarTypes_12)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    if ((transform_hlds__lco__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word transform_hlds__lco__Var_22;

          *transform_hlds__lco__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__lco__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__lco__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            transform_hlds__lco__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_22, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_22, 1) = ((MR_Box) (transform_hlds__lco__make_addr_vars_12_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_22, 3) = ((MR_Box) (transform_hlds__lco__HeadVar__5_5));
            MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__require__expect_3_p_0(transform_hlds__lco__Var_22, (MR_String) "transform_hlds.lco", (MR_String) "make_addr_vars: AddrOutArgs != []");
          }
          *transform_hlds__lco__STATE_VARIABLE_VarTypes_12 = transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11;
          *transform_hlds__lco__STATE_VARIABLE_VarSet_10 = transform_hlds__lco__STATE_VARIABLE_VarSet_0_9;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__lco__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__lco__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__lco__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__lco__Mode0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__lco__Modes0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__lco__HeadVar_64;
            MR_Word transform_hlds__lco__HeadVars_65;
            MR_Word transform_hlds__lco__Mode_66;
            MR_Word transform_hlds__lco__Modes_67;
            MR_Word transform_hlds__lco__HeadVarType_74;
            MR_Word transform_hlds__lco__TopFunctorMode_75;

            {
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__Var_133, &transform_hlds__lco__HeadVarType_74);
            }
            {
              check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__Mode0_62, transform_hlds__lco__HeadVarType_74, &transform_hlds__lco__TopFunctorMode_75);
            }
            switch (transform_hlds__lco__TopFunctorMode_75) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  transform_hlds__lco__HeadVar_64 = transform_hlds__lco__Var_133;
                  transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
                  {
                    transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__Var_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__NextOutArgNum_6, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__lco__MaybeFieldId_77;
                  MR_Word transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97;
                  MR_Word transform_hlds__lco__AddrOutArg_76;
                  MR_Integer transform_hlds__lco__Var_131;

                  transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__lco__succeeded)
                    {
                      transform_hlds__lco__AddrOutArg_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 0)));
                      transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__HeadVar__5_5, (MR_Integer) 1)));
                      transform_hlds__lco__Var_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 0)));
                      transform_hlds__lco__MaybeFieldId_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__AddrOutArg_76, (MR_Integer) 1)));
                      transform_hlds__lco__succeeded = (transform_hlds__lco__NextOutArgNum_6 == transform_hlds__lco__Var_131);
                    }
                  if (transform_hlds__lco__succeeded)
                    {
                      MR_Word transform_hlds__lco__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      MR_String transform_hlds__lco__Name_78;
                      MR_String transform_hlds__lco__AddrName_79;
                      MR_Word transform_hlds__lco__OldType_81;
                      MR_Word transform_hlds__lco__VarToAddrTail_87;
                      MR_Word transform_hlds__lco__VarToAddrHead_88;
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarSet_99_99;
                      MR_Word transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108;
                      MR_Integer transform_hlds__lco__Var_109;
                      MR_Word transform_hlds__lco__Var_113;

                      {
                        mercury__varset__lookup_name_3_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__Var_133, &transform_hlds__lco__Name_78);
                      }
                      {
                        transform_hlds__lco__AddrName_79 = mercury__string__f_43_43_2_f_0((MR_String) "AddrOf", transform_hlds__lco__Name_78);
                      }
                      {
                        mercury__varset__new_named_var_4_p_0(transform_hlds__lco__TypeCtorInfo_130_130, transform_hlds__lco__AddrName_79, &transform_hlds__lco__HeadVar_64, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, &transform_hlds__lco__STATE_VARIABLE_VarSet_99_99);
                      }
                      {
                        hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__Var_133, &transform_hlds__lco__OldType_81);
                      }
                      if ((transform_hlds__lco__MaybeFieldId_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word transform_hlds__lco__Var_107;

                          {
                            transform_hlds__lco__Var_107 = transform_hlds__lco__make_ref_type_1_f_0(transform_hlds__lco__OldType_81);
                          }
                          {
                            hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__Var_107, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
                          {
                            transform_hlds__lco__Mode_66 = parse_tree__prog_mode__in_mode_0_f_0();
                          }
                        }
                      else
                        {
                          MR_Word transform_hlds__lco__AddrVarType_82;
                          MR_Word transform_hlds__lco__ConsId_83;
                          MR_Integer transform_hlds__lco__ArgNum_84;
                          MR_Word transform_hlds__lco__BoundInst_85;
                          MR_Word transform_hlds__lco__InitialInst_86;
                          MR_Word transform_hlds__lco__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__MaybeFieldId_77, (MR_Integer) 0)));
                          MR_Word transform_hlds__lco__Var_104;
                          MR_Word transform_hlds__lco__Var_106;

                          transform_hlds__lco__AddrVarType_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_100, (MR_Integer) 0)));
                          transform_hlds__lco__ConsId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_100, (MR_Integer) 1)));
                          transform_hlds__lco__ArgNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_100, (MR_Integer) 2)));
                          {
                            hlds__vartypes__add_var_type_4_p_0(transform_hlds__lco__HeadVar_64, transform_hlds__lco__AddrVarType_82, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, &transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108);
                          }
                          {
                            transform_hlds__lco__BoundInst_85 = transform_hlds__lco__bound_inst_with_free_arg_2_f_0(transform_hlds__lco__ConsId_83, transform_hlds__lco__ArgNum_84);
                          }
                          {
                            transform_hlds__lco__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_104, 0) = ((MR_Box) (transform_hlds__lco__BoundInst_85));
                            MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            transform_hlds__lco__InitialInst_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 1) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            MR_hl_field(MR_mktag(3), transform_hlds__lco__InitialInst_86, 3) = ((MR_Box) (transform_hlds__lco__Var_104));
                          }
                          {
                            transform_hlds__lco__Var_106 = parse_tree__prog_mode__ground_inst_0_f_0();
                          }
                          {
                            transform_hlds__lco__Mode_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 0) = ((MR_Box) (transform_hlds__lco__InitialInst_86));
                            MR_hl_field(MR_mktag(0), transform_hlds__lco__Mode_66, 1) = ((MR_Box) (transform_hlds__lco__Var_106));
                          }
                        }
                      transform_hlds__lco__Var_109 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
                      {
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__Var_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__STATE_VARIABLE_AddrOutArgs_97_97, transform_hlds__lco__Var_109, transform_hlds__lco__ModuleInfo_7, &transform_hlds__lco__VarToAddrTail_87, transform_hlds__lco__STATE_VARIABLE_VarSet_99_99, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_108_108, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
                      {
                        transform_hlds__lco__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_113, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_113, 1) = ((MR_Box) (transform_hlds__lco__MaybeFieldId_77));
                      }
                      {
                        transform_hlds__lco__VarToAddrHead_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 0) = ((MR_Box) (transform_hlds__lco__Var_133));
                        MR_hl_field(MR_mktag(0), transform_hlds__lco__VarToAddrHead_88, 1) = ((MR_Box) (transform_hlds__lco__Var_113));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *transform_hlds__lco__HeadVar__8_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__VarToAddrHead_88));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__VarToAddrTail_87));
                      }
                    }
                  else
                    {
                      MR_Integer transform_hlds__lco__Var_114;

                      transform_hlds__lco__HeadVar_64 = transform_hlds__lco__Var_133;
                      transform_hlds__lco__Mode_66 = transform_hlds__lco__Mode0_62;
                      transform_hlds__lco__Var_114 = (transform_hlds__lco__NextOutArgNum_6 + (MR_Integer) 1);
                      {
                        transform_hlds__lco__make_addr_vars_12_p_0(transform_hlds__lco__Var_132, transform_hlds__lco__Modes0_63, &transform_hlds__lco__HeadVars_65, &transform_hlds__lco__Modes_67, transform_hlds__lco__HeadVar__5_5, transform_hlds__lco__Var_114, transform_hlds__lco__ModuleInfo_7, transform_hlds__lco__HeadVar__8_8, transform_hlds__lco__STATE_VARIABLE_VarSet_0_9, transform_hlds__lco__STATE_VARIABLE_VarSet_10, transform_hlds__lco__STATE_VARIABLE_VarTypes_0_11, transform_hlds__lco__STATE_VARIABLE_VarTypes_12);
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lco", (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "top_unused");
                    return;
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__HeadVar_64));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__HeadVars_65));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__lco__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lco__Mode_66));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lco__Modes_67));
            }
          }
      }
  }
}

static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
  MR_Word transform_hlds__lco__ConsId_4,
  MR_Integer transform_hlds__lco__FreeArg_5)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__Inst_6;
    MR_Word transform_hlds__lco__TypeCtorInfo_12_12;
    MR_Integer transform_hlds__lco__Arity_7;
    MR_Word transform_hlds__lco__ArgInsts0_8;
    MR_Word transform_hlds__lco__ArgInsts_9;
    MR_Word transform_hlds__lco__Var_10;
    MR_Word transform_hlds__lco__Var_11;

    {
      transform_hlds__lco__Arity_7 = parse_tree__prog_util__cons_id_arity_1_f_0(transform_hlds__lco__ConsId_4);
    }
    {
      transform_hlds__lco__Var_10 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    transform_hlds__lco__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    {
      mercury__list__duplicate_3_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__Arity_7, ((MR_Box) (transform_hlds__lco__Var_10)), &transform_hlds__lco__ArgInsts0_8);
    }
    {
      transform_hlds__lco__Var_11 = parse_tree__prog_mode__free_inst_0_f_0();
    }
    {
      mercury__list__det_replace_nth_4_p_0(transform_hlds__lco__TypeCtorInfo_12_12, transform_hlds__lco__ArgInsts0_8, transform_hlds__lco__FreeArg_5, ((MR_Box) (transform_hlds__lco__Var_11)), &transform_hlds__lco__ArgInsts_9);
    }
    {
      transform_hlds__lco__Inst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 0) = ((MR_Box) (transform_hlds__lco__ConsId_4));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Inst_6, 1) = ((MR_Box) (transform_hlds__lco__ArgInsts_9));
    }
    return transform_hlds__lco__Inst_6;
  }
}

static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
  MR_Word transform_hlds__lco__FieldType_3)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__PtrType_4;
    MR_Word transform_hlds__lco__RefTypeName_5;
    MR_Word transform_hlds__lco__Var_6;
    MR_Word transform_hlds__lco__Var_8;

    {
      transform_hlds__lco__Var_6 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      transform_hlds__lco__RefTypeName_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 0) = ((MR_Box) (transform_hlds__lco__Var_6));
      MR_hl_field(MR_mktag(1), transform_hlds__lco__RefTypeName_5, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
    }
    {
      transform_hlds__lco__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_8, 0) = ((MR_Box) (transform_hlds__lco__FieldType_3));
      MR_hl_field(MR_mktag(1), transform_hlds__lco__Var_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__lco__PtrType_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 0) = ((MR_Box) (transform_hlds__lco__RefTypeName_5));
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 1) = ((MR_Box) (transform_hlds__lco__Var_8));
      MR_hl_field(MR_mktag(1), transform_hlds__lco__PtrType_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return transform_hlds__lco__PtrType_4;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
  MR_Word transform_hlds__lco__HeadVar__1_1,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_18_18;
    MR_Word transform_hlds__lco__TypeCtorInfo_19_19;
    MR_Word transform_hlds__lco__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__lco__NewProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 0)));
    MR_Integer transform_hlds__lco__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lco__PredProcId_4, (MR_Integer) 1)));
    MR_Word transform_hlds__lco__PredTable0_9;
    MR_Word transform_hlds__lco__PredInfo0_10;
    MR_Word transform_hlds__lco__Procs0_11;
    MR_Word transform_hlds__lco__Procs_12;
    MR_Word transform_hlds__lco__PredInfo_13;
    MR_Word transform_hlds__lco__PredTable_14;
    MR_Box transform_hlds__lco__conv0_PredInfo0_10;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, &transform_hlds__lco__PredTable0_9);
    }
    transform_hlds__lco__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__lco__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, transform_hlds__lco__PredTable0_9, ((MR_Box) (transform_hlds__lco__PredId_7)), &transform_hlds__lco__conv0_PredInfo0_10);
    }
    transform_hlds__lco__PredInfo0_10 = ((MR_Word) transform_hlds__lco__conv0_PredInfo0_10);
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__Procs0_11);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__lco__ProcId_8, ((MR_Box) (transform_hlds__lco__NewProcInfo_5)), transform_hlds__lco__Procs0_11, &transform_hlds__lco__Procs_12);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__lco__Procs_12, transform_hlds__lco__PredInfo0_10, &transform_hlds__lco__PredInfo_13);
    }
    {
      mercury__map__det_update_4_p_0(transform_hlds__lco__TypeCtorInfo_18_18, transform_hlds__lco__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__lco__PredId_7)), ((MR_Box) (transform_hlds__lco__PredInfo_13)), transform_hlds__lco__PredTable0_9, &transform_hlds__lco__PredTable_14);
    }
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lco__PredTable_14, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__lco__STATE_VARIABLE_ModuleInfo_16);
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33;

    {
      transform_hlds__lco__lco_process_proc_variant_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33);
    }
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv10_STATE_VARIABLE_ModuleInfo_33));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16;

    {
      transform_hlds__lco__lco_process_proc_update_3_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16);
    }
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv8_STATE_VARIABLE_ModuleInfo_16));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5,
  MR_Box transform_hlds__lco__wrapper_arg_6,
  MR_Box * transform_hlds__lco__wrapper_arg_7,
  MR_Box transform_hlds__lco__wrapper_arg_8,
  MR_Box * transform_hlds__lco__wrapper_arg_9)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27;
    MR_Word transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29;
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31;
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33;

    {
      transform_hlds__lco__lco_proc_if_permitted_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lco__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29, ((MR_Word) transform_hlds__lco__wrapper_arg_6), &transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31, ((MR_Word) transform_hlds__lco__wrapper_arg_8), &transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33);
    }
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv3_STATE_VARIABLE_ModuleInfo_27));
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv2_STATE_VARIABLE_CurSCCVariants_29));
    *transform_hlds__lco__wrapper_arg_7 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_CurSCCUpdates_31));
    *transform_hlds__lco__wrapper_arg_9 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_Permitted_33));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
  MR_Word transform_hlds__lco__SCC_6,
  MR_Word transform_hlds__lco__STATE_VARIABLE_VariantMap_0_21,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_VariantMap_22,
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_52_52;
    MR_Word transform_hlds__lco__TypeCtorInfo_54_54;
    MR_Word transform_hlds__lco__TypeCtorInfo_55_55;
    MR_Word transform_hlds__lco__CurSCCVariantMap_10;
    MR_Word transform_hlds__lco__CurSCCUpdateMap_11;
    MR_Word transform_hlds__lco__Permitted_12;
    MR_Word transform_hlds__lco__CurSCCVariants_13;
    MR_Word transform_hlds__lco__CurSCCUpdates_14;
    MR_Word transform_hlds__lco__Var_25;
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word transform_hlds__lco__Var_27;
    MR_Word transform_hlds__lco__Var_28;
    MR_Box transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_26_26;
    MR_Box transform_hlds__lco__conv6_CurSCCVariantMap_10;
    MR_Box transform_hlds__lco__conv5_CurSCCUpdateMap_11;
    MR_Box transform_hlds__lco__conv4_Permitted_12;
    MR_Word transform_hlds__lco__Var_15;
    MR_Word transform_hlds__lco__Var_16;

    {
      transform_hlds__lco__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_25, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_25, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_25, 3) = ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_VariantMap_0_21));
      MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_25, 4) = ((MR_Box) (transform_hlds__lco__SCC_6));
    }
    transform_hlds__lco__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      transform_hlds__lco__Var_27 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_52_52, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
    transform_hlds__lco__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      transform_hlds__lco__Var_28 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_52_52, transform_hlds__lco__TypeCtorInfo_54_54);
    }
    transform_hlds__lco__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
    {
      mercury__set__foldl4_10_p_0(transform_hlds__lco__TypeCtorInfo_52_52, transform_hlds__lco__TypeCtorInfo_55_55, (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &transform_hlds__lco_scalar_common_2[1], (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0, transform_hlds__lco__Var_25, transform_hlds__lco__SCC_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_23)), &transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_26_26, ((MR_Box) (transform_hlds__lco__Var_27)), &transform_hlds__lco__conv6_CurSCCVariantMap_10, ((MR_Box) (transform_hlds__lco__Var_28)), &transform_hlds__lco__conv5_CurSCCUpdateMap_11, ((MR_Box) ((MR_Integer) 1)), &transform_hlds__lco__conv4_Permitted_12);
    }
    transform_hlds__lco__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) transform_hlds__lco__conv7_STATE_VARIABLE_ModuleInfo_26_26);
    transform_hlds__lco__CurSCCVariantMap_10 = ((MR_Word) transform_hlds__lco__conv6_CurSCCVariantMap_10);
    transform_hlds__lco__CurSCCUpdateMap_11 = ((MR_Word) transform_hlds__lco__conv5_CurSCCUpdateMap_11);
    transform_hlds__lco__Permitted_12 = ((MR_Word) transform_hlds__lco__conv4_Permitted_12);
    {
      mercury__multi_map__to_flat_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_52_52, (MR_Word) &transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0, transform_hlds__lco__CurSCCVariantMap_10, &transform_hlds__lco__CurSCCVariants_13);
    }
    {
      mercury__map__to_assoc_list_2_p_0(transform_hlds__lco__TypeCtorInfo_52_52, transform_hlds__lco__TypeCtorInfo_54_54, transform_hlds__lco__CurSCCUpdateMap_11, &transform_hlds__lco__CurSCCUpdates_14);
    }
    transform_hlds__lco__succeeded = (transform_hlds__lco__Permitted_12 == (MR_Integer) 1);
    if (transform_hlds__lco__succeeded)
      {
        transform_hlds__lco__succeeded = ((MR_tag((MR_Word) transform_hlds__lco__CurSCCUpdates_14)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__lco__succeeded)
          {
            transform_hlds__lco__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 0)));
            transform_hlds__lco__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lco__CurSCCUpdates_14, (MR_Integer) 1)));
          }
      }
    if (transform_hlds__lco__succeeded)
      {
        MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_39_39;
        MR_Word transform_hlds__lco__Var_40;
        MR_Box transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_39_39;
        MR_Box transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_24;

        {
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[2], transform_hlds__lco__TypeCtorInfo_55_55, (MR_Word) &transform_hlds__lco_scalar_common_2[9], transform_hlds__lco__CurSCCUpdates_14, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_26_26)), &transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_39_39);
        }
        transform_hlds__lco__STATE_VARIABLE_ModuleInfo_39_39 = ((MR_Word) transform_hlds__lco__conv9_STATE_VARIABLE_ModuleInfo_39_39);
        {
          transform_hlds__lco__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_40, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_40, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_3));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__lco__Var_40, 3) = ((MR_Box) (transform_hlds__lco__CurSCCVariantMap_10));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__lco_scalar_common_2[3], transform_hlds__lco__TypeCtorInfo_55_55, transform_hlds__lco__Var_40, transform_hlds__lco__CurSCCVariants_13, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_39_39)), &transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_24);
        }
        *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_24 = ((MR_Word) transform_hlds__lco__conv11_STATE_VARIABLE_ModuleInfo_24);
      }
    else
      *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_23;
    *transform_hlds__lco__STATE_VARIABLE_VariantMap_22 = transform_hlds__lco__STATE_VARIABLE_VariantMap_0_21;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
  MR_Box transform_hlds__lco__closure_arg,
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box * transform_hlds__lco__wrapper_arg_3,
  MR_Box transform_hlds__lco__wrapper_arg_4,
  MR_Box * transform_hlds__lco__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__lco__closure = transform_hlds__lco__closure_arg;
    MR_Word transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_22;
    MR_Word transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_24;

    {
      transform_hlds__lco__lco_scc_5_p_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2), &transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_22, ((MR_Word) transform_hlds__lco__wrapper_arg_4), &transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_24);
    }
    *transform_hlds__lco__wrapper_arg_3 = ((MR_Box) (transform_hlds__lco__conv1_STATE_VARIABLE_VariantMap_22));
    *transform_hlds__lco__wrapper_arg_5 = ((MR_Box) (transform_hlds__lco__conv0_STATE_VARIABLE_ModuleInfo_24));
  }
}

void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0(
  MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * transform_hlds__lco__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool transform_hlds__lco__succeeded;
    MR_Word transform_hlds__lco__TypeCtorInfo_13_13;
    MR_Word transform_hlds__lco__DepInfo_4;
    MR_Word transform_hlds__lco__SCCs_5;
    MR_Word transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9;
    MR_Word transform_hlds__lco__Var_11;
    MR_Word transform_hlds__lco__Var_6;
    MR_Box transform_hlds__lco__conv3_Var_6;
    MR_Box transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8;

    {
      hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__lco__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9, &transform_hlds__lco__DepInfo_4);
    }
    transform_hlds__lco__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      transform_hlds__lco__SCCs_5 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0(transform_hlds__lco__TypeCtorInfo_13_13, transform_hlds__lco__DepInfo_4);
    }
    {
      transform_hlds__lco__Var_11 = mercury__map__init_0_f_0(transform_hlds__lco__TypeCtorInfo_13_13, (MR_Word) &transform_hlds__lco_scalar_common_1[0]);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__lco_scalar_common_1[1], (MR_Word) &transform_hlds__lco_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__lco_scalar_common_2[8], transform_hlds__lco__SCCs_5, ((MR_Box) (transform_hlds__lco__Var_11)), &transform_hlds__lco__conv3_Var_6, ((MR_Box) (transform_hlds__lco__STATE_VARIABLE_ModuleInfo_9_9)), &transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
    }
    transform_hlds__lco__Var_6 = ((MR_Word) transform_hlds__lco__conv3_Var_6);
    *transform_hlds__lco__STATE_VARIABLE_ModuleInfo_8 = ((MR_Word) transform_hlds__lco__conv2_STATE_VARIABLE_ModuleInfo_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____allow_float_addr_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____allow_float_addr_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____field_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____field_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_const_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____lco_const_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_info_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____lco_info_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____proc_changed_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____proc_changed_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____store_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____store_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____var_to_target_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____var_to_target_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_arg_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____variant_arg_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_id_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____variant_id_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
  MR_Box transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lco__succeeded;

    {
      transform_hlds__lco__succeeded = transform_hlds__lco____Unify____variant_map_0_0(((MR_Word) transform_hlds__lco__wrapper_arg_1), ((MR_Word) transform_hlds__lco__wrapper_arg_2));
    }
    return transform_hlds__lco__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
  MR_Box * transform_hlds__lco__wrapper_arg_1,
  MR_Box transform_hlds__lco__wrapper_arg_2,
  MR_Box transform_hlds__lco__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lco__conv0_HeadVar__1_1;

    {
      transform_hlds__lco____Compare____variant_map_0_0(&transform_hlds__lco__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lco__wrapper_arg_2), ((MR_Word) transform_hlds__lco__wrapper_arg_3));
    }
    *transform_hlds__lco__wrapper_arg_1 = ((MR_Box) (transform_hlds__lco__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__lco__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.lco. */
