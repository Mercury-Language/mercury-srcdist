/*
** Automatically generated from `lco.m'
** by the Mercury compiler,
** version rotd-2020-06-04
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.lco.
// :- implementation.

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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
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
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s {
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12;
  MR_bool transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42;
  jmp_buf transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_113_113;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__Var_112;
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

static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0[6];

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
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1756__1_2_p_0(
  MR_Word HeadVar__1_68,
  MR_Word * HeadVar__2_69);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1471__1_2_p_0(
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__2_25);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1341__1_2_p_0(
  MR_Word ConsId_23,
  MR_Word RHSConsId_43);

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1195__1_2_f_0(
  MR_Word AddrVarFieldIds_6,
  MR_Word LambdaHeadVar__1_14);

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1192__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__1032__1_2_p_0(
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__2_13);

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstMap_8,
  MR_Word HeadVar__3_3,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcInfo_32);

static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
  MR_Word GroundVar_9,
  MR_Integer TargetArgNum_10,
  MR_Integer CurArgNum_11,
  MR_Word ArgTypes_12,
  MR_Word * ArgVars_13,
  MR_Word * ArgModes_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23);

static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstMap0_6,
  MR_Word InstMap_7,
  MR_Word HeadVar__4_4);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word VariantMap_11,
  MR_Word VarToAddr_12,
  MR_Word InstMap0_13,
  MR_Word Case0_14,
  MR_Word * Case_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23);

static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
  MR_Word Bag_3,
  MR_Word Var_4);

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word UnifyMode_4);

static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
  MR_Word ConstInfo_9,
  MR_Word Subst_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_AddrVarFieldIds_0_59,
  MR_Word * STATE_VARIABLE_AddrVarFieldIds_60,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62);

static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
  MR_Word Subst_1,
  MR_Word HighLevelData_2,
  MR_Word VarType_3,
  MR_Word ConsId_4,
  MR_Integer ArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_InstMapDelta_0_9,
  MR_Word * STATE_VARIABLE_InstMapDelta_10,
  MR_Word STATE_VARIABLE_AddrFieldIds_0_11,
  MR_Word * STATE_VARIABLE_AddrFieldIds_12,
  MR_Word STATE_VARIABLE_VarTypes_0_13,
  MR_Word * STATE_VARIABLE_VarTypes_14);

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_6_p_0(
  MR_Word DelayForVars_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_UnifyInputVars_0_32,
  MR_Word * STATE_VARIABLE_UnifyInputVars_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static MR_bool MR_CALL 
transform_hlds__lco__all_delayed_arg_vars_are_full_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word DelayForVars_3);

static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
  MR_Word _Info_10,
  MR_Word _ConstInfo_11,
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_RevDependentGoals_0_22,
  MR_Word * STATE_VARIABLE_RevDependentGoals_23,
  MR_Word STATE_VARIABLE_RevNonDependentGoals_0_24,
  MR_Word * STATE_VARIABLE_RevNonDependentGoals_25,
  MR_Word STATE_VARIABLE_DelayForVars_0_26,
  MR_Word * STATE_VARIABLE_DelayForVars_27);

static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_RevDependentGoals_0_22,
  MR_Word * STATE_VARIABLE_RevDependentGoals_23,
  MR_Word STATE_VARIABLE_RevNonDependentGoals_0_24,
  MR_Word * STATE_VARIABLE_RevNonDependentGoals_25,
  MR_Word STATE_VARIABLE_DelayForVars_0_26,
  MR_Word * STATE_VARIABLE_DelayForVars_27);

static void MR_CALL 
transform_hlds__lco__lco_proc_if_permitted_11_p_0(
  MR_Word LowerSCCVariants_12,
  MR_Word SCC_13,
  MR_Word CurProc_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_CurSCCVariants_0_28,
  MR_Word * STATE_VARIABLE_CurSCCVariants_29,
  MR_Word STATE_VARIABLE_CurSCCUpdates_0_30,
  MR_Word * STATE_VARIABLE_CurSCCUpdates_31,
  MR_Word STATE_VARIABLE_Permitted_0_32,
  MR_Word * STATE_VARIABLE_Permitted_33);

static void MR_CALL 
transform_hlds__lco__lco_proc_12_p_0(
  MR_Word LowerSCCVariants_13,
  MR_Word SCC_14,
  MR_Word CurProc_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo0_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_CurSCCVariants_0_47,
  MR_Word * STATE_VARIABLE_CurSCCVariants_48,
  MR_Word STATE_VARIABLE_CurSCCUpdates_0_49,
  MR_Word * STATE_VARIABLE_CurSCCUpdates_50,
  MR_Word * STATE_VARIABLE_Permitted_51);

static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61,
  MR_Word ConstInfo_9);

static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
  MR_Word Goals0_6,
  MR_Word * MaybeGoals_7,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word ConstInfo_9);

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
  MR_Word CallGoal_9,
  MR_Word CallOutArgVars_10,
  MR_Word UnifyGoals_11,
  MR_Word UnifyInputVars_12,
  MR_Word * MaybeGoals_13,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58,
  MR_Word ConstInfo_15);

static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word AddrArgNums_11,
  MR_Word * VariantPredProcId_12,
  MR_Word SymName_13,
  MR_Word * VariantSymName_14,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Integer VariantNumber_6,
  MR_String OrigName_7,
  MR_String * VariantName_8);

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
  MR_Word HighLevelData_5,
  MR_Word AddrVarFieldIds_6,
  MR_Word Mismatches_7,
  MR_Word * VariantArgs_8);

static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word UnifyInputVars_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Subst_0_7,
  MR_Word * STATE_VARIABLE_Subst_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
  MR_Word ConstInfo_6,
  MR_Word Var_7,
  MR_Word * AddrVar_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
  MR_Word Info_9,
  MR_Word ConstInfo_10,
  MR_Word RevGoals0_11,
  MR_Word STATE_VARIABLE_AfterGoals_0_19,
  MR_Word * STATE_VARIABLE_AfterGoals_20,
  MR_Word * RecGoal_13,
  MR_Word * RecOutArgs_14,
  MR_Word * RevBeforeGoals_15);

static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
  MR_Word Goal_2);

static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
  MR_Word VariantMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VariantMap_2,
  MR_Word VarToAddr_3,
  MR_Word InstMap0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word VariantMap_11,
  MR_Word VarToAddr_12,
  MR_Word InstMap0_13,
  MR_Word Goal0_14,
  MR_Word * Goal_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_73,
  MR_Word * STATE_VARIABLE_ProcInfo_74);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word VariantMap_13,
  MR_Word VarToAddr_14,
  MR_Word InstMap0_15,
  MR_Word GoalExpr0_16,
  MR_Word * GoalExpr_17,
  MR_Word GoalInfo0_18,
  MR_Word * GoalInfo_19,
  MR_Word * Changed_20,
  MR_Word STATE_VARIABLE_ProcInfo_0_53,
  MR_Word * STATE_VARIABLE_ProcInfo_54);

static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
  MR_Word GroundingVarToAddr_6,
  MR_Integer OutArgNum_7,
  MR_Word OutArgs_8,
  MR_Word * Subst_9,
  MR_Word * VariantArgs_10);

static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AddrArgNums_6,
  MR_Word * Variant_7);

static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word VarToAddr_11,
  MR_Word InstMap0_12,
  MR_Word GoalInfo_13,
  MR_Word GoalExpr0_14,
  MR_Word * GoalExpr_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * STATE_VARIABLE_ProcInfo_24);

static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Integer NextOutArgNum_6,
  MR_Word ModuleInfo_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12);

static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
  MR_Word ConsId_4,
  MR_Integer FreeArg_5);

static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
  MR_Word FieldType_3);

static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_VariantMap_0_21,
  MR_Word * STATE_VARIABLE_VariantMap_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__lco_scalar_common_1[12][2];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[12][3];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_4[1][14];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_5[2][6];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_6[2][7];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_7[8][5];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_8[2][9];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_9[3][12];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_10[1][11];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_12[1][1];


/* sealed */ struct transform_hlds__lco__vector_common_type_11_0_s {
  const MR_Word transform_hlds__lco__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct transform_hlds__lco__vector_common_type_11_0_s transform_hlds__lco_vector_common_11[4];



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
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__lco_scalar_common_12[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[12][3] = {
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__lco__lco_process_proc_variant_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_7[4])),
    ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__lco__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
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
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_9[3][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
    ((MR_Box) ((MR_Integer) 9)),
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
    ((MR_Box) ((MR_Integer) 9)),
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
    ((MR_Box) ((MR_Integer) 8)),
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

static /* final */ const MR_Box transform_hlds__lco_scalar_common_12[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "lcmc"))
  },
};


static /* final */ const struct transform_hlds__lco__vector_common_type_11_0_s transform_hlds__lco_vector_common_11[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
  (MR_String) "do_not_allow_float_addr",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
  (MR_String) "allow_float_addr",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____allow_float_addr_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____allow_float_addr_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "allow_float_addr",
  {     transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0 },
  {     transform_hlds__lco__transform_hlds__lco__enum_value_ordered_allow_float_addr_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3] = {
  (MR_String) "fi_type",
  (MR_String) "fi_cons_id",
  (MR_String) "fi_arg"
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0 = {
  (MR_String) "field_id",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____field_id_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____field_id_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "field_id",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_allow_float_addr_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
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
    (MR_Integer) 2,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0 = {
  (MR_String) "lco_const_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lco__transform_hlds__lco__field_types_lco_const_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_lco_const_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_locns_lco_const_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____lco_const_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_const_info_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_const_info",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0)
};

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[6] = {
  (MR_String) "lco_module_info",
  (MR_String) "lco_cur_scc_variants",
  (MR_String) "lco_var_set",
  (MR_String) "lco_var_types",
  (MR_String) "lco_permitted",
  (MR_String) "lco_changed"
};

static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0[6] = {
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
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0 = {
  (MR_String) "lco_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0,
  transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____lco_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_info_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_info",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
  (MR_String) "lco_is_not_permitted_on_scc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
  (MR_String) "lco_is_permitted_on_scc",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_is_permitted_on_scc",
  {     transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0 },
  {     transform_hlds__lco__transform_hlds__lco__enum_value_ordered_lco_is_permitted_on_scc_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
  (MR_String) "proc_not_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
  (MR_String) "proc_changed",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____proc_changed_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____proc_changed_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "proc_changed",
  {     transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0 },
  {     transform_hlds__lco__transform_hlds__lco__enum_value_ordered_proc_changed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0)
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0 = {
  (MR_String) "store_target",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lco__transform_hlds__lco__field_types_store_target_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____store_target_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____store_target_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "store_target",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_var_to_target_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__lco____Unify____var_to_target_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____var_to_target_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "var_to_target",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0)
};

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0[2] = {
  (MR_String) "va_pos",
  (MR_String) "va_field"
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0 = {
  (MR_String) "variant_arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lco__transform_hlds__lco__field_types_variant_arg_0_0,
  transform_hlds__lco__transform_hlds__lco__field_names_variant_arg_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_arg_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_arg_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_arg",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0 = {
  (MR_String) "variant_id",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0
};

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_id_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_id_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_id",
  {     transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0 },
  {     transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__lco____Unify____variant_map_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_map_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1756__1_2_p_0(
  MR_Word HeadVar__1_68,
  MR_Word * HeadVar__2_69)
{
  {
    MR_Box conv0_HeadVar__2_69;

    mercury__pair__fst_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0), HeadVar__1_68, &conv0_HeadVar__2_69);
    *HeadVar__2_69 = ((MR_Word) (conv0_HeadVar__2_69));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1471__1_2_p_0(
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__2_25)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[7]), ((MR_Box) (HeadVar__5_5)), ((MR_Box) (HeadVar__2_25)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1341__1_2_p_0(
  MR_Word ConsId_23,
  MR_Word RHSConsId_43)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_23, RHSConsId_43);
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1195__1_2_f_0(
  MR_Word AddrVarFieldIds_6,
  MR_Word LambdaHeadVar__1_14)
{
  {
    MR_Word LambdaHeadVar__2_15;
    MR_Word FieldId_13;
    MR_Word Var_16;
    MR_Integer Pos_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_14, (MR_Integer) 0))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_14, (MR_Integer) 1))));
    MR_Box conv0_FieldId_13;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0), AddrVarFieldIds_6, ((MR_Box) (Var_24)), &conv0_FieldId_13);
    FieldId_13 = ((MR_Word) (conv0_FieldId_13));
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (FieldId_13));
    }
    {
      LambdaHeadVar__2_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_15, 0) = ((MR_Box) (Pos_23));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_15, 1) = ((MR_Box) (Var_16));
    }
    return LambdaHeadVar__2_15;
  }
}

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1192__1_1_f_0(
  MR_Word LambdaHeadVar__1_17)
{
  {
    MR_Word LambdaHeadVar__2_18;
    MR_Integer Pos_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_17, (MR_Integer) 0))));

    {
      LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_18, 0) = ((MR_Box) (Pos_21));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return LambdaHeadVar__2_18;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__1032__1_2_p_0(
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__2_13)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[6]), ((MR_Box) (HeadVar__5_5)), ((MR_Box) (HeadVar__2_13)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&transform_hlds__lco_scalar_common_1[9]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&transform_hlds__lco_scalar_common_1[9]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[8]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_29 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_30 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_29 < Var_30);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_29 > Var_30);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Integer Var_31 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_32 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_31 < Var_32);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_31 > Var_32);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeCtorInfo_20_20;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&transform_hlds__lco_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&transform_hlds__lco_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeCtorInfo_20_20 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
                succeeded = (ArgX6_13 == ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 2)) & (MR_Integer) 7);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) >> 2)) & (MR_Integer) 7);
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_pred____Compare____pred_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              hlds__hlds_pred____Compare____proc_info_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[6]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;
                  MR_Integer Var_41 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_42 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_41 < Var_42);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_41 > Var_42);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_43 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_44 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_43 < Var_44);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_43 > Var_44);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Integer Var_45 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_46 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_45 < Var_46);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_45 > Var_46);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_28_28;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) >> 2)) & (MR_Integer) 7);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 2)) & (MR_Integer) 7);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_24_24 = (MR_Word) (&transform_hlds__lco_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&transform_hlds__lco_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                      succeeded = (ArgX9_19 == ArgY9_20);
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__prog_data____Compare____cons_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstMap_8,
  MR_Word HeadVar__3_3,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcInfo_32)
{
  {
    MR_Word GroundVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word StoreTarget_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word AddrVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StoreTarget_10, (MR_Integer) 0))));
    MR_Word MaybeFieldId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StoreTarget_10, (MR_Integer) 1))));

    if ((MaybeFieldId_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_47;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;

      Var_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (GroundVar_9));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (AddrVar_13));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_57));
      }
      Var_55 = hlds__instmap__instmap_delta_bind_vars_1_f_0((MR_Word) ((MR_Unsigned) 0U));
      Var_56 = mercury__term__context_init_0_f_0();
      hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_7, Var_47, (MR_String) "store_at_ref_impure", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_53, (MR_Word) ((MR_Unsigned) 0U), Var_55, Var_56, Goal_11);
      *STATE_VARIABLE_ProcInfo_32 = STATE_VARIABLE_ProcInfo_0_31;
    }
    else
    {
      MR_Word AddrVarType_15;
      MR_Word ConsId_16;
      MR_Integer ArgNum_17;
      MR_Word ArgTypes_18;
      MR_Word ArgVars_19;
      MR_Word ArgModes_20;
      MR_Word RHS_21;
      MR_Word AddrVarInst0_22;
      MR_Word AddrVarInst_23;
      MR_Word UnifyMode_24;
      MR_Word Unification_25;
      MR_Word GoalExpr_27;
      MR_Word GoalInfo0_28;
      MR_Word GoalInfo1_29;
      MR_Word GoalInfo_30;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldId_14, (MR_Integer) 0))));
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_46;

      AddrVarType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
      ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
      ArgNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 2))));
      check_hlds__type_util__get_cons_id_arg_types_4_p_0(ModuleInfo_7, AddrVarType_15, ConsId_16, &ArgTypes_18);
      transform_hlds__lco__make_unification_args_8_p_0(GroundVar_9, ArgNum_17, (MR_Integer) 1, ArgTypes_18, &ArgVars_19, &ArgModes_20, STATE_VARIABLE_ProcInfo_0_31, STATE_VARIABLE_ProcInfo_32);
      {
        RHS_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_21, 0) = ((MR_Box) (ConsId_16));
        MR_hl_field(MR_mktag(1), RHS_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_21, 2) = ((MR_Box) (ArgVars_19));
      }
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, AddrVar_13, &AddrVarInst0_22);
      check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_7, AddrVarInst0_22, &AddrVarInst_23);
      Var_37 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_38 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_39 = parse_tree__prog_mode__ground_inst_0_f_0();
      {
        UnifyMode_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_24, 0) = ((MR_Box) (AddrVarInst_23));
        MR_hl_field(MR_mktag(0), UnifyMode_24, 1) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), UnifyMode_24, 2) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), UnifyMode_24, 3) = ((MR_Box) (Var_39));
      }
      {
        Unification_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Unification_25, 0) = ((MR_Box) (AddrVar_13));
        MR_hl_field(MR_mktag(1), Unification_25, 1) = ((MR_Box) (ConsId_16));
        MR_hl_field(MR_mktag(1), Unification_25, 2) = ((MR_Box) (ArgVars_19));
        MR_hl_field(MR_mktag(1), Unification_25, 3) = ((MR_Box) (ArgModes_20));
        MR_hl_field(MR_mktag(1), Unification_25, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
      {
        GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 0) = ((MR_Box) (AddrVar_13));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 1) = ((MR_Box) (RHS_21));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 2) = ((MR_Box) (UnifyMode_24));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 3) = ((MR_Box) (Unification_25));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 4) = ((MR_Box) (&transform_hlds__lco_scalar_common_1[11]));
      }
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_28);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo0_28, &GoalInfo1_29);
      Var_46 = hlds__instmap__instmap_delta_bind_var_1_f_0(AddrVar_13);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Var_46, GoalInfo1_29, &GoalInfo_30);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_30));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__make_unification_args_8_p_0(
  MR_Word GroundVar_9,
  MR_Integer TargetArgNum_10,
  MR_Integer CurArgNum_11,
  MR_Word ArgTypes_12,
  MR_Word * ArgVars_13,
  MR_Word * ArgModes_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23)
{
  {
    MR_bool succeeded;

    if ((ArgTypes_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *ArgVars_13 = (MR_Word) ((MR_Unsigned) 0U);
      *ArgModes_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ProcInfo_23 = STATE_VARIABLE_ProcInfo_0_22;
    }
    else
    {
      MR_Word ArgType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_12, (MR_Integer) 0))));
      MR_Word ArgTypesTail_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_12, (MR_Integer) 1))));
      MR_Word ArgVarsTail_18;
      MR_Word ArgModesTail_19;
      MR_Word Var_20;
      MR_Word ArgMode_21;
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) CurArgNum_11 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_ProcInfo_25_25;

      transform_hlds__lco__make_unification_args_8_p_0(GroundVar_9, TargetArgNum_10, Var_24, ArgTypesTail_17, &ArgVarsTail_18, &ArgModesTail_19, STATE_VARIABLE_ProcInfo_0_22, &STATE_VARIABLE_ProcInfo_25_25);
      succeeded = (CurArgNum_11 == TargetArgNum_10);
      if (succeeded)
      {
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;

        Var_20 = GroundVar_9;
        Var_37 = parse_tree__prog_mode__free_inst_0_f_0();
        Var_38 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_39 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_40 = parse_tree__prog_mode__ground_inst_0_f_0();
        {
          ArgMode_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgMode_21, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), ArgMode_21, 1) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), ArgMode_21, 2) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), ArgMode_21, 3) = ((MR_Box) (Var_40));
        }
        *STATE_VARIABLE_ProcInfo_23 = STATE_VARIABLE_ProcInfo_25_25;
      }
      else
      {
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;

        hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(ArgType_16, (MR_Word) ((MR_Unsigned) 0U), &Var_20, STATE_VARIABLE_ProcInfo_25_25, STATE_VARIABLE_ProcInfo_23);
        Var_43 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_44 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_45 = parse_tree__prog_mode__free_inst_0_f_0();
        Var_46 = parse_tree__prog_mode__ground_inst_0_f_0();
        {
          ArgMode_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgMode_21, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(0), ArgMode_21, 1) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(0), ArgMode_21, 2) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(0), ArgMode_21, 3) = ((MR_Box) (Var_46));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgVars_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgVarsTail_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgModes_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgModesTail_19));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstMap0_6,
  MR_Word InstMap_7,
  MR_Word HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Inst0_10;
    MR_Word Inst_11;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_6, Var_8, &Inst0_10);
    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_5, Inst0_10);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_7);
      if (succeeded)
      {
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_7, Var_8, &Inst_11);
        succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_5, Inst_11);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word VariantMap_11,
  MR_Word VarToAddr_12,
  MR_Word InstMap0_13,
  MR_Word Case0_14,
  MR_Word * Case_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23)
{
  {
    MR_Word MainConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 2))));
    MR_Word Goal_21;

    transform_hlds__lco__lco_transform_variant_goal_9_p_0(ModuleInfo_10, VariantMap_11, VarToAddr_12, InstMap0_13, Goal0_20, &Goal_21, Changed_16, STATE_VARIABLE_ProcInfo_0_22, STATE_VARIABLE_ProcInfo_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_21));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
  MR_Word Bag_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_Integer Var_7;

    mercury__bag__count_value_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), Bag_3, ((MR_Box) (Var_4)), &Var_7);
    succeeded = ((MR_Integer) 1 == Var_7);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_mode_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word UnifyMode_4)
{
  {
    MR_bool succeeded;
    MR_Word InitInstX_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 0))));
    MR_Word FinalInstX_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 1))));
    MR_Word InitInstY_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 2))));
    MR_Word FinalInstY_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 3))));

    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitInstX_5);
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, InitInstY_7);
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, FinalInstX_6);
        if (succeeded)
          succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, FinalInstY_8);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lco__IntroducedFrom__pred__update_construct__1341__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
  MR_Word ConstInfo_9,
  MR_Word Subst_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_AddrVarFieldIds_0_59,
  MR_Word * STATE_VARIABLE_AddrVarFieldIds_60,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0))));
    MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1))));
    MR_Word LHS_17;
    MR_Word RHS0_18;
    MR_Word Mode_19;
    MR_Word UnifyContext_21;
    MR_Word Var_22;
    MR_Word ConsId_23;
    MR_Word ArgVars_24;
    MR_Word ArgModes_25;
    MR_Word How_26;
    MR_Word IsUnique_27;
    MR_Word TermSizeSlot_29;
    MR_Word Unification0_20;
    MR_Word SubInfo0_28;

    succeeded = ((MR_tag((MR_Word) GoalExpr0_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      LHS_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 0))));
      RHS0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 1))));
      Mode_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 2))));
      Unification0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 3))));
      UnifyContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 4))));
      succeeded = ((MR_tag((MR_Word) Unification0_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_20, (MR_Integer) 0))));
        ConsId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_20, (MR_Integer) 1))));
        ArgVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_20, (MR_Integer) 2))));
        ArgModes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_20, (MR_Integer) 3))));
        How_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_20, (MR_Integer) 4))));
        IsUnique_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification0_20, (MR_Integer) 5))) & (MR_Integer) 1);
        SubInfo0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_20, (MR_Integer) 6))));
        if ((SubInfo0_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          TermSizeSlot_29 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo0_28, (MR_Integer) 0))));

          TermSizeSlot_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo0_28, (MR_Integer) 1))));
          succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word HighLevelData_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ConstInfo_9, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word VarTypes0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_61, (MR_Integer) 3))));
      MR_Word VarType_32;
      MR_Word InstMapDelta0_33;
      MR_Word UpdatedArgVars_34;
      MR_Word AddrFields_35;
      MR_Word InstMapDelta_36;
      MR_Word VarTypes_37;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Unsigned packed_word_3;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_31, Var_22, &VarType_32);
      InstMapDelta0_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_16);
      transform_hlds__lco__update_construct_args_14_p_0(Subst_10, HighLevelData_30, VarType_32, ConsId_23, (MR_Integer) 1, ArgVars_24, &UpdatedArgVars_34, &AddrFields_35, InstMapDelta0_33, &InstMapDelta_36, STATE_VARIABLE_AddrVarFieldIds_0_59, STATE_VARIABLE_AddrVarFieldIds_60, VarTypes0_31, &VarTypes_37);
      Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_61, (MR_Integer) 0))));
      Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_61, (MR_Integer) 1))));
      Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_61, (MR_Integer) 2))));
      packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_62 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_37));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_3);
      }
      if ((AddrFields_35 == (MR_Word) ((MR_Unsigned) 0U)))
        *Goal_12 = Goal0_11;
      else
      {
        MR_Word SubInfo_40;
        MR_Word Unification_41;
        MR_Word RHS_47;
        MR_Word GoalExpr_57;
        MR_Word GoalInfo_58;
        MR_Word Var_67;

        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (AddrFields_35));
        }
        {
          SubInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SubInfo_40, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), SubInfo_40, 1) = ((MR_Box) (TermSizeSlot_29));
        }
        {
          Unification_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unification_41, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(0), Unification_41, 1) = ((MR_Box) (ConsId_23));
          MR_hl_field(MR_mktag(0), Unification_41, 2) = ((MR_Box) (UpdatedArgVars_34));
          MR_hl_field(MR_mktag(0), Unification_41, 3) = ((MR_Box) (ArgModes_25));
          MR_hl_field(MR_mktag(0), Unification_41, 4) = ((MR_Box) (How_26));
          MR_hl_field(MR_mktag(0), Unification_41, 5) = (MR_Box) ((MR_Unsigned) (IsUnique_27));
          MR_hl_field(MR_mktag(0), Unification_41, 6) = ((MR_Box) (SubInfo_40));
        }
        switch (MR_tag((MR_Word) RHS0_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "var RHS");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSConsId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_18, (MR_Integer) 0))));
              MR_Word IsExistConstr_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RHS0_18, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word RHSVars0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_18, (MR_Integer) 2))));
              MR_Word RHSVars_46;
              MR_Word Var_70;

              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[7]));
                MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (transform_hlds__lco__update_construct_8_p_0_1));
                MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (ConsId_23));
                MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (RHSConsId_43));
              }
              mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "cons_id mismatch");
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Subst_10, RHSVars0_45, &RHSVars_46);
              {
                RHS_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RHS_47, 0) = ((MR_Box) (RHSConsId_43));
                MR_hl_field(MR_mktag(1), RHS_47, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstr_44));
                MR_hl_field(MR_mktag(1), RHS_47, 2) = ((MR_Box) (RHSVars_46));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "lambda RHS");
              return;
            }
            break;
        }
        {
          GoalExpr_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr_57, 0) = ((MR_Box) (LHS_17));
          MR_hl_field(MR_mktag(1), GoalExpr_57, 1) = ((MR_Box) (RHS_47));
          MR_hl_field(MR_mktag(1), GoalExpr_57, 2) = ((MR_Box) (Mode_19));
          MR_hl_field(MR_mktag(1), GoalExpr_57, 3) = ((MR_Box) (Unification_41));
          MR_hl_field(MR_mktag(1), GoalExpr_57, 4) = ((MR_Box) (UnifyContext_21));
        }
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_36, GoalInfo0_16, &GoalInfo_58);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_57));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_58));
        }
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "not construct");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__lco__update_construct_args_14_p_0(
  MR_Word Subst_1,
  MR_Word HighLevelData_2,
  MR_Word VarType_3,
  MR_Word ConsId_4,
  MR_Integer ArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_InstMapDelta_0_9,
  MR_Word * STATE_VARIABLE_InstMapDelta_10,
  MR_Word STATE_VARIABLE_AddrFieldIds_0_11,
  MR_Word * STATE_VARIABLE_AddrFieldIds_12,
  MR_Word STATE_VARIABLE_VarTypes_0_13,
  MR_Word * STATE_VARIABLE_VarTypes_14)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_14 = STATE_VARIABLE_VarTypes_0_13;
      *STATE_VARIABLE_AddrFieldIds_12 = STATE_VARIABLE_AddrFieldIds_0_11;
      *STATE_VARIABLE_InstMapDelta_10 = STATE_VARIABLE_InstMapDelta_0_9;
    }
    else
    {
      MR_Word OrigVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word OrigVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word UpdatedVar_36;
      MR_Word UpdatedVars_37;
      MR_Word AddrArgsTail_42;
      MR_Integer Var_52 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_InstMapDelta_53_53;
      MR_Word STATE_VARIABLE_AddrFieldIds_54_54;
      MR_Word STATE_VARIABLE_VarTypes_55_55;
      MR_Word AddrVar_43;
      MR_Box conv0_AddrVar_43;

      transform_hlds__lco__update_construct_args_14_p_0(Subst_1, HighLevelData_2, VarType_3, ConsId_4, Var_52, OrigVars_35, &UpdatedVars_37, &AddrArgsTail_42, STATE_VARIABLE_InstMapDelta_0_9, &STATE_VARIABLE_InstMapDelta_53_53, STATE_VARIABLE_AddrFieldIds_0_11, &STATE_VARIABLE_AddrFieldIds_54_54, STATE_VARIABLE_VarTypes_0_13, &STATE_VARIABLE_VarTypes_55_55);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), Subst_1, ((MR_Box) (OrigVar_34)), &conv0_AddrVar_43);
      if (succeeded)
      {
        AddrVar_43 = ((MR_Word) (conv0_AddrVar_43));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FinalInst_44;
        MR_Word Var_63;

        UpdatedVar_36 = AddrVar_43;
        switch (HighLevelData_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              FinalInst_44 = parse_tree__prog_mode__ground_inst_0_f_0();
              *STATE_VARIABLE_VarTypes_14 = STATE_VARIABLE_VarTypes_55_55;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word BoundInst_45;
              MR_Word Var_59;
              MR_Integer Arity_71;
              MR_Word ArgInsts0_72;
              MR_Word ArgInsts_73;
              MR_Word Var_74;
              MR_Word Var_75;

              Arity_71 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_4);
              Var_74 = parse_tree__prog_mode__ground_inst_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_71, ((MR_Box) (Var_74)), &ArgInsts0_72);
              Var_75 = parse_tree__prog_mode__free_inst_0_f_0();
              mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts0_72, ArgNum_5, ((MR_Box) (Var_75)), &ArgInsts_73);
              {
                BoundInst_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BoundInst_45, 0) = ((MR_Box) (ConsId_4));
                MR_hl_field(MR_mktag(0), BoundInst_45, 1) = ((MR_Box) (ArgInsts_73));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (BoundInst_45));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                FinalInst_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), FinalInst_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), FinalInst_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), FinalInst_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), FinalInst_44, 3) = ((MR_Box) (Var_59));
              }
              hlds__vartypes__add_var_type_4_p_0(AddrVar_43, VarType_3, STATE_VARIABLE_VarTypes_55_55, STATE_VARIABLE_VarTypes_14);
            }
            break;
        }
        hlds__instmap__instmap_delta_set_var_4_p_0(AddrVar_43, FinalInst_44, STATE_VARIABLE_InstMapDelta_53_53, STATE_VARIABLE_InstMapDelta_10);
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (VarType_3));
          MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ConsId_4));
          MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (ArgNum_5));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0), ((MR_Box) (OrigVar_34)), ((MR_Box) (Var_63)), STATE_VARIABLE_AddrFieldIds_54_54, STATE_VARIABLE_AddrFieldIds_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgNum_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AddrArgsTail_42));
        }
      }
      else
      {
        UpdatedVar_36 = OrigVar_34;
        *HeadVar__8_8 = AddrArgsTail_42;
        *STATE_VARIABLE_VarTypes_14 = STATE_VARIABLE_VarTypes_55_55;
        *STATE_VARIABLE_AddrFieldIds_12 = STATE_VARIABLE_AddrFieldIds_54_54;
        *STATE_VARIABLE_InstMapDelta_10 = STATE_VARIABLE_InstMapDelta_53_53;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UpdatedVar_36));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UpdatedVars_37));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lco__acceptable_construct_mode_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_6_p_0(
  MR_Word DelayForVars_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_UnifyInputVars_0_32,
  MR_Word * STATE_VARIABLE_UnifyInputVars_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_80_80;
    MR_Word TypeInfo_85_85;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    MR_Word Unification_16;
    MR_Word ConstructedVar_18;
    MR_Word ConsId_19;
    MR_Word ConstructArgVars_20;
    MR_Word ArgModes_21;
    MR_Word SubInfo_24;
    MR_Word ModuleInfo_27;
    MR_Word CtorRepn_28;
    MR_Word ConsTag_29;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_UnifyInputVars_55_55;
    MR_Word Var_70;

    succeeded = ((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      Unification_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_11, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) Unification_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        ConstructedVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 0))));
        ConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 1))));
        ConstructArgVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 2))));
        ArgModes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 3))));
        SubInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 6))));
        if ((SubInfo_24 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Word MaybeTakeAddrs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_24, (MR_Integer) 0))));

          succeeded = (MaybeTakeAddrs_25 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          ModuleInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
          TypeCtorInfo_80_80 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0);
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[6]));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__lco__acceptable_construct_unification_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (ModuleInfo_27));
          }
          succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_80_80, Var_36, ArgModes_21);
          if (succeeded)
          {
            succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_27, ConsId_19, &CtorRepn_28);
            if (succeeded)
            {
              ConsTag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_28, (MR_Integer) 3))));
              Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_28, (MR_Integer) 4))));
              succeeded = ((((MR_tag((MR_Word) ConsTag_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_29, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                succeeded = transform_hlds__lco__all_delayed_arg_vars_are_full_words_3_p_0(ConstructArgVars_20, Var_70, DelayForVars_7);
                if (succeeded)
                {
                  TypeInfo_85_85 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
                  mercury__bag__delete_3_p_0(TypeInfo_85_85, ((MR_Box) (ConstructedVar_18)), STATE_VARIABLE_UnifyInputVars_0_32, &STATE_VARIABLE_UnifyInputVars_55_55);
                  mercury__bag__insert_list_3_p_0(TypeInfo_85_85, ConstructArgVars_20, STATE_VARIABLE_UnifyInputVars_55_55, STATE_VARIABLE_UnifyInputVars_33);
                  *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__all_delayed_arg_vars_are_full_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word DelayForVars_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word ArgVar_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgRepn_7;
      MR_Word ArgRepns_8;
      MR_Word ArgWidth_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgRepn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgRepns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRepn_7, (MR_Integer) 2))));
        switch (MR_tag((MR_Word) ArgWidth_10)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgWidth_10, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DelayForVars_3, ArgVar_5);
                  succeeded = !(succeeded);
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = ArgVars_6;
          next_value_of_HeadVar__2_2 = ArgRepns_8;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__lco__partition_dependent_goal_9_p_0(
  MR_Word _Info_10,
  MR_Word _ConstInfo_11,
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_RevDependentGoals_0_22,
  MR_Word * STATE_VARIABLE_RevDependentGoals_23,
  MR_Word STATE_VARIABLE_RevNonDependentGoals_0_24,
  MR_Word * STATE_VARIABLE_RevNonDependentGoals_25,
  MR_Word STATE_VARIABLE_DelayForVars_0_26,
  MR_Word * STATE_VARIABLE_DelayForVars_27)
{
  transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(Goal_12, STATE_VARIABLE_RevDependentGoals_0_22, STATE_VARIABLE_RevDependentGoals_23, STATE_VARIABLE_RevNonDependentGoals_0_24, STATE_VARIABLE_RevNonDependentGoals_25, STATE_VARIABLE_DelayForVars_0_26, STATE_VARIABLE_DelayForVars_27);
}

static void MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_116_105_116_105_111_110_95_100_101_112_101_110_100_101_110_116_95_103_111_97_108_95_95_91_49_44_32_50_93_95_48_9_p_0(
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_RevDependentGoals_0_22,
  MR_Word * STATE_VARIABLE_RevDependentGoals_23,
  MR_Word STATE_VARIABLE_RevNonDependentGoals_0_24,
  MR_Word * STATE_VARIABLE_RevNonDependentGoals_25,
  MR_Word STATE_VARIABLE_DelayForVars_0_26,
  MR_Word * STATE_VARIABLE_DelayForVars_27)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 1))));
    MR_Word GoalVars_18;
    MR_Word Intersection_19;

    hlds__goal_util__goal_vars_2_p_0(Goal_12, &GoalVars_18);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_DelayForVars_0_26, GoalVars_18, &Intersection_19);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Intersection_19);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevNonDependentGoals_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevNonDependentGoals_0_24));
      }
      *STATE_VARIABLE_DelayForVars_27 = STATE_VARIABLE_DelayForVars_0_26;
      *STATE_VARIABLE_RevDependentGoals_23 = STATE_VARIABLE_RevDependentGoals_0_22;
    }
    else
    {
      MR_Word InstmapDelta_20;
      MR_Word ChangedVars_21;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevDependentGoals_23 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevDependentGoals_0_22));
      }
      InstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_17);
      hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta_20, &ChangedVars_21);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_21, STATE_VARIABLE_DelayForVars_0_26, STATE_VARIABLE_DelayForVars_27);
      *STATE_VARIABLE_RevNonDependentGoals_25 = STATE_VARIABLE_RevNonDependentGoals_0_24;
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_proc_if_permitted_11_p_0(
  MR_Word LowerSCCVariants_12,
  MR_Word SCC_13,
  MR_Word CurProc_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_CurSCCVariants_0_28,
  MR_Word * STATE_VARIABLE_CurSCCVariants_29,
  MR_Word STATE_VARIABLE_CurSCCUpdates_0_30,
  MR_Word * STATE_VARIABLE_CurSCCUpdates_31,
  MR_Word STATE_VARIABLE_Permitted_0_32,
  MR_Word * STATE_VARIABLE_Permitted_33)
{
  {
    MR_bool succeeded;

    switch (STATE_VARIABLE_Permitted_0_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
          *STATE_VARIABLE_CurSCCVariants_29 = STATE_VARIABLE_CurSCCVariants_0_28;
          *STATE_VARIABLE_CurSCCUpdates_31 = STATE_VARIABLE_CurSCCUpdates_0_30;
          *STATE_VARIABLE_Permitted_33 = STATE_VARIABLE_Permitted_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurProc_14, (MR_Integer) 0))));
          MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CurProc_14, (MR_Integer) 1))));
          MR_Word PredInfo_21;
          MR_Word ProcInfo0_22;
          MR_Word PredStatus_23;
          MR_Word DefInThisModule_24;
          MR_Word Detism_25;

          hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_26, PredId_19, ProcId_20, &PredInfo_21, &ProcInfo0_22);
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_21, &PredStatus_23);
          DefInThisModule_24 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_23);
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_22, &Detism_25);
          succeeded = (DefInThisModule_24 == (MR_Integer) 1);
          if (succeeded)
          {
            if (((MR_Unsigned) 51U & (((MR_Integer) 1 << Detism_25))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          if (succeeded)
            transform_hlds__lco__lco_proc_12_p_0(LowerSCCVariants_12, SCC_13, CurProc_14, PredInfo_21, ProcInfo0_22, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_CurSCCVariants_0_28, STATE_VARIABLE_CurSCCVariants_29, STATE_VARIABLE_CurSCCUpdates_0_30, STATE_VARIABLE_CurSCCUpdates_31, STATE_VARIABLE_Permitted_33);
          else
          {
            *STATE_VARIABLE_Permitted_33 = (MR_Integer) 0;
            *STATE_VARIABLE_CurSCCUpdates_31 = STATE_VARIABLE_CurSCCUpdates_0_30;
            *STATE_VARIABLE_CurSCCVariants_29 = STATE_VARIABLE_CurSCCVariants_0_28;
            *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_proc_12_p_0(
  MR_Word LowerSCCVariants_13,
  MR_Word SCC_14,
  MR_Word CurProc_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo0_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_CurSCCVariants_0_47,
  MR_Word * STATE_VARIABLE_CurSCCVariants_48,
  MR_Word STATE_VARIABLE_CurSCCUpdates_0_49,
  MR_Word * STATE_VARIABLE_CurSCCUpdates_50,
  MR_Word * STATE_VARIABLE_Permitted_51)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_22;
    MR_Word VarTypes0_23;
    MR_Word HeadVars_24;
    MR_Word ArgModes_25;
    MR_Word ArgTypes_26;
    MR_Word OutputHeadVars_28;
    MR_Word CurProcDetism_29;
    MR_Word Globals_30;
    MR_Word Target_31;
    MR_Word HighLevelData_32;
    MR_Word UnboxedFloat_33;
    MR_Word AllowFloatAddr_34;
    MR_Word ConstInfo_35;
    MR_Word Info0_36;
    MR_Word Goal0_37;
    MR_Word Goal_38;
    MR_Word Info_39;
    MR_Word VarSet_40;
    MR_Word VarTypes_41;
    MR_Word Changed_42;
    MR_Word STATE_VARIABLE_ModuleInfo_55_55;
    MR_Word _InputHeadVars_27;

    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_17, &VarSet0_22);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_17, &VarTypes0_23);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_17, &HeadVars_24);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_17, &ArgModes_25);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_23, HeadVars_24, &ArgTypes_26);
    hlds__arg_info__compute_in_and_out_vars_6_p_0(STATE_VARIABLE_ModuleInfo_0_45, HeadVars_24, ArgModes_25, ArgTypes_26, &_InputHeadVars_27, &OutputHeadVars_28);
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_17, &CurProcDetism_29);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &Globals_30);
    libs__globals__get_target_2_p_0(Globals_30, &Target_31);
    HighLevelData_32 = ((&transform_hlds__lco_vector_common_11[0 + Target_31]))->transform_hlds__lco__vector_common_type_11_0__vct_11_f_0;
    libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 267, &UnboxedFloat_33);
    switch (UnboxedFloat_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AllowFloatAddr_34 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        AllowFloatAddr_34 = (MR_Integer) 1;
        break;
    }
    {
      ConstInfo_35 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstInfo_35, 0) = ((MR_Box) (LowerSCCVariants_13));
      MR_hl_field(MR_mktag(0), ConstInfo_35, 1) = ((MR_Box) (SCC_14));
      MR_hl_field(MR_mktag(0), ConstInfo_35, 2) = ((MR_Box) (CurProc_15));
      MR_hl_field(MR_mktag(0), ConstInfo_35, 3) = ((MR_Box) (PredInfo_16));
      MR_hl_field(MR_mktag(0), ConstInfo_35, 4) = ((MR_Box) (ProcInfo0_17));
      MR_hl_field(MR_mktag(0), ConstInfo_35, 5) = ((MR_Box) (OutputHeadVars_28));
      MR_hl_field(MR_mktag(0), ConstInfo_35, 6) = (MR_Box) (((((MR_Unsigned) (CurProcDetism_29) << 2)) | (((((MR_Unsigned) (AllowFloatAddr_34) << 1)) | (MR_Unsigned) (HighLevelData_32)))));
    }
    {
      Info0_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_36, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_45));
      MR_hl_field(MR_mktag(0), Info0_36, 1) = ((MR_Box) (STATE_VARIABLE_CurSCCVariants_0_47));
      MR_hl_field(MR_mktag(0), Info0_36, 2) = ((MR_Box) (VarSet0_22));
      MR_hl_field(MR_mktag(0), Info0_36, 3) = ((MR_Box) (VarTypes0_23));
      MR_hl_field(MR_mktag(0), Info0_36, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_17, &Goal0_37);
    transform_hlds__lco__lco_in_goal_5_p_0(Goal0_37, &Goal_38, Info0_36, &Info_39, ConstInfo_35);
    STATE_VARIABLE_ModuleInfo_55_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_39, (MR_Integer) 0))));
    *STATE_VARIABLE_CurSCCVariants_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_39, (MR_Integer) 1))));
    VarSet_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_39, (MR_Integer) 2))));
    VarTypes_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_39, (MR_Integer) 3))));
    *STATE_VARIABLE_Permitted_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_39, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    Changed_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_39, (MR_Integer) 4))) & (MR_Integer) 1);
    succeeded = (*STATE_VARIABLE_Permitted_51 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Changed_42 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_ProcInfo_68_68;
      MR_Word STATE_VARIABLE_ProcInfo_69_69;
      MR_Word STATE_VARIABLE_ProcInfo_70_70;
      MR_Word STATE_VARIABLE_ProcInfo_72_72;
      MR_Word STATE_VARIABLE_ProcInfo_74_74;

      hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_40, ProcInfo0_17, &STATE_VARIABLE_ProcInfo_68_68);
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_41, STATE_VARIABLE_ProcInfo_68_68, &STATE_VARIABLE_ProcInfo_69_69);
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_38, STATE_VARIABLE_ProcInfo_69_69, &STATE_VARIABLE_ProcInfo_70_70);
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_70_70, &STATE_VARIABLE_ProcInfo_72_72);
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_72_72, &STATE_VARIABLE_ProcInfo_74_74, STATE_VARIABLE_ModuleInfo_55_55, STATE_VARIABLE_ModuleInfo_46);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (CurProc_15)), ((MR_Box) (STATE_VARIABLE_ProcInfo_74_74)), STATE_VARIABLE_CurSCCUpdates_0_49, STATE_VARIABLE_CurSCCUpdates_50);
    }
    else
    {
      *STATE_VARIABLE_CurSCCUpdates_50 = STATE_VARIABLE_CurSCCUpdates_0_49;
      *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_55_55;
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word HeadVar__5_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_22_22;

    transform_hlds__lco__lco_in_goal_5_p_0(Goal0_18, &Goal_19, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_22_22, HeadVar__5_5);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_19));
    }
    transform_hlds__lco__lco_in_cases_5_p_0(Cases0_11, &Cases_13, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_4, HeadVar__5_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_13));
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61,
  MR_Word ConstInfo_9)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
    MR_Word GoalExpr_16;

    switch (MR_tag((MR_Word) GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          GoalExpr_16 = GoalExpr0_10;
          *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          GoalExpr_16 = GoalExpr0_10;
          *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_16 = GoalExpr0_10;
              *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));

              switch (ConjType_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Word Var_92;
                    MR_Word Var_94;

                    GoalExpr_16 = GoalExpr0_10;
                    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 0))));
                    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 1))));
                    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 2))));
                    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 3))));
                    Var_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 4))) & (MR_Integer) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Info_61 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_90));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_91));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_92));
                      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_94)));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word MaybeGoals_14;
                    MR_Word STATE_VARIABLE_Info_74_74;

                    transform_hlds__lco__lco_in_conj_5_p_0(Goals0_13, &MaybeGoals_14, STATE_VARIABLE_Info_0_60, &STATE_VARIABLE_Info_74_74, ConstInfo_9);
                    if ((MaybeGoals_14 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word AllButLast_17;
                      MR_Word Last0_18;
                      MR_Box conv0_Last0_18;

                      succeeded = mercury__list__split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_13, &AllButLast_17, &conv0_Last0_18);
                      if (succeeded)
                      {
                        Last0_18 = ((MR_Word) (conv0_Last0_18));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_Word Last_19;
                        MR_Word Var_77;
                        MR_Word Var_78;

                        transform_hlds__lco__lco_in_goal_5_p_0(Last0_18, &Last_19, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_61, ConstInfo_9);
                        {
                          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Last_19));
                          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AllButLast_17, Var_78);
                        {
                          GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), GoalExpr_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), GoalExpr_16, 2) = ((MR_Box) (Var_77));
                        }
                      }
                      else
                      {
                        GoalExpr_16 = GoalExpr0_10;
                        *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_74_74;
                      }
                    }
                    else
                    {
                      MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoals_14, (MR_Integer) 0))));

                      {
                        GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), GoalExpr_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), GoalExpr_16, 2) = ((MR_Box) (Goals_15));
                      }
                      *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_74_74;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word AllButLast_82;
              MR_Word Last0_83;
              MR_Box conv1_Last0_83;

              succeeded = mercury__list__split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_85, &AllButLast_82, &conv1_Last0_83);
              if (succeeded)
              {
                Last0_83 = ((MR_Word) (conv1_Last0_83));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Last_81;

                transform_hlds__lco__lco_in_goal_5_p_0(Last0_83, &Last_81, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61, ConstInfo_9);
                {
                  Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Last_81));
                  MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AllButLast_82, Var_70);
                {
                  GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), GoalExpr_16, 1) = ((MR_Box) (Var_69));
                }
              }
              else
              {
                GoalExpr_16 = GoalExpr0_10;
                *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word CanFail_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Cases_23;

              transform_hlds__lco__lco_in_cases_5_p_0(Cases0_22, &Cases_23, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61, ConstInfo_9);
              {
                GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 1) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 2) = (MR_Box) ((MR_Unsigned) (CanFail_21));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 3) = ((MR_Box) (Cases_23));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word SubGoal0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word FGT_33;

              succeeded = ((((MR_tag((MR_Word) Reason_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_33) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                GoalExpr_16 = GoalExpr0_10;
                *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
              }
              else
              {
                MR_Word SubGoal_34;

                transform_hlds__lco__lco_in_goal_5_p_0(SubGoal0_31, &SubGoal_34, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61, ConstInfo_9);
                {
                  GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_16, 1) = ((MR_Box) (Reason_30));
                  MR_hl_field(MR_mktag(3), GoalExpr_16, 2) = ((MR_Box) (SubGoal_34));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Cond_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Then0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Else0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4))));
              MR_Word Then_28;
              MR_Word Else_29;
              MR_Word STATE_VARIABLE_Info_65_65;

              transform_hlds__lco__lco_in_goal_5_p_0(Then0_26, &Then_28, STATE_VARIABLE_Info_0_60, &STATE_VARIABLE_Info_65_65, ConstInfo_9);
              transform_hlds__lco__lco_in_goal_5_p_0(Else0_27, &Else_29, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_61, ConstInfo_9);
              {
                GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 1) = ((MR_Box) (Vars_24));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 2) = ((MR_Box) (Cond_25));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 3) = ((MR_Box) (Then_28));
                MR_hl_field(MR_mktag(3), GoalExpr_16, 4) = ((MR_Box) (Else_29));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.lco_in_goal\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_UnifyInputVars_33;
    MR_Word conv6_STATE_VARIABLE_Info_35;

    succeeded = transform_hlds__lco__acceptable_construct_unification_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_UnifyInputVars_33, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Info_35);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_UnifyInputVars_33));
      *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Info_35));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_RevDependentGoals_23;
    MR_Word conv1_STATE_VARIABLE_RevNonDependentGoals_25;
    MR_Word conv0_STATE_VARIABLE_DelayForVars_27;

    transform_hlds__lco__partition_dependent_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RevDependentGoals_23, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_RevNonDependentGoals_25, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DelayForVars_27);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RevDependentGoals_23));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_RevNonDependentGoals_25));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DelayForVars_27));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
  MR_Word Goals0_6,
  MR_Word * MaybeGoals_7,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word ConstInfo_9)
{
  {
    MR_bool succeeded;
    MR_Word RevGoals0_10;
    MR_Word RecGoal_12;
    MR_Word RecOutArgs_13;
    MR_Word RevBeforeGoals_14;
    MR_Word RevAfterDependentGoals_18;
    MR_Word RevAfterNonDependentGoals_19;
    MR_Word UnifyInputVars_21;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word TypeCtorInfo_40_40;
    MR_Word TypeInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word TypeInfo_55_55;
    MR_Word TypeInfo_56_56;
    MR_Word TypeCtorInfo_57_57;
    MR_Word AfterGoals_11;
    MR_Word DelayForVars0_17;
    MR_Word DelayForVars_20;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Box conv5_RevAfterDependentGoals_18;
    MR_Box conv4_RevAfterNonDependentGoals_19;
    MR_Box conv3_DelayForVars_20;
    MR_Box conv9_UnifyInputVars_21;
    MR_Box conv8_STATE_VARIABLE_Info_34_34;

    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_6, &RevGoals0_10);
    succeeded = transform_hlds__lco__divide_rev_conj_8_p_0(STATE_VARIABLE_Info_0_26, ConstInfo_9, RevGoals0_10, (MR_Word) ((MR_Unsigned) 0U), &AfterGoals_11, &RecGoal_12, &RecOutArgs_13, &RevBeforeGoals_14);
    if (succeeded)
    {
      succeeded = (AfterGoals_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeCtorInfo_40_40 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        parse_tree__set_of_var__list_to_set_2_p_0(TypeCtorInfo_40_40, RecOutArgs_13, &DelayForVars0_17);
        Var_30 = (MR_Word) ((MR_Unsigned) 0U);
        Var_31 = (MR_Word) ((MR_Unsigned) 0U);
        TypeInfo_48_48 = (MR_Word) (&transform_hlds__lco_scalar_common_1[2]);
        TypeInfo_49_49 = (MR_Word) (&transform_hlds__lco_scalar_common_1[3]);
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[2]));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_26));
          MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (ConstInfo_9));
        }
        mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfo_48_48, TypeInfo_48_48, TypeInfo_49_49, Var_29, AfterGoals_11, ((MR_Box) (Var_30)), &conv5_RevAfterDependentGoals_18, ((MR_Box) (Var_31)), &conv4_RevAfterNonDependentGoals_19, ((MR_Box) (DelayForVars0_17)), &conv3_DelayForVars_20);
        RevAfterDependentGoals_18 = ((MR_Word) (conv5_RevAfterDependentGoals_18));
        RevAfterNonDependentGoals_19 = ((MR_Word) (conv4_RevAfterNonDependentGoals_19));
        DelayForVars_20 = ((MR_Word) (conv3_DelayForVars_20));
        TypeInfo_55_55 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[1]));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (DelayForVars_20));
        }
        Var_33 = mercury__bag__init_0_f_0(TypeInfo_55_55);
        TypeInfo_56_56 = (MR_Word) (&transform_hlds__lco_scalar_common_1[5]);
        TypeCtorInfo_57_57 = (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0);
        succeeded = mercury__list__foldl2_6_p_4((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfo_56_56, TypeCtorInfo_57_57, Var_32, RevAfterDependentGoals_18, ((MR_Box) (Var_33)), &conv9_UnifyInputVars_21, ((MR_Box) (STATE_VARIABLE_Info_0_26)), &conv8_STATE_VARIABLE_Info_34_34);
        if (succeeded)
        {
          UnifyInputVars_21 = ((MR_Word) (conv9_UnifyInputVars_21));
          STATE_VARIABLE_Info_34_34 = ((MR_Word) (conv8_STATE_VARIABLE_Info_34_34));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word UnifyGoals_22;
      MR_Word MaybeGoals1_23;

      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevAfterDependentGoals_18, &UnifyGoals_22);
      transform_hlds__lco__transform_call_and_unifies_8_p_0(RecGoal_12, RecOutArgs_13, UnifyGoals_22, UnifyInputVars_21, &MaybeGoals1_23, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_27, ConstInfo_9);
      if ((MaybeGoals1_23 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeGoals_7 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word UpdatedRecAndUnifies_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoals1_23, (MR_Integer) 0))));
        MR_Word Goals_25;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;

        Var_36 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevBeforeGoals_14);
        Var_38 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevAfterNonDependentGoals_19);
        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_38, UpdatedRecAndUnifies_24);
        Goals_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_36, Var_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoals_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goals_25));
        }
      }
    }
    else
    {
      *MaybeGoals_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
    }
  }
}

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_12;
    MR_Word conv1_STATE_VARIABLE_AddrVarFieldIds_60;
    MR_Word conv0_STATE_VARIABLE_Info_62;

    transform_hlds__lco__update_construct_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_12, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_AddrVarFieldIds_60, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_62);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_12));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_AddrVarFieldIds_60));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_62));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lco__occurs_once_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
  MR_Word CallGoal_9,
  MR_Word CallOutArgVars_10,
  MR_Word UnifyGoals_11,
  MR_Word UnifyInputVars_12,
  MR_Word * MaybeGoals_13,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58,
  MR_Word ConstInfo_15)
{
  {
    MR_bool succeeded;
    MR_Word CallGoalExpr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallGoal_9, (MR_Integer) 0))));
    MR_Word CallGoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallGoal_9, (MR_Integer) 1))));
    MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_57, (MR_Integer) 0))));
    MR_Word ProcInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstInfo_15, (MR_Integer) 4))));
    MR_Word VarTypes_20;
    MR_Word PredId_21;
    MR_Integer ProcId_22;
    MR_Word ArgVars_23;
    MR_Word Builtin_24;
    MR_Word UnifyContext_25;
    MR_Word UpdatedCallOutArgs_30;
    MR_Word UpdatedUnifyGoals_36;
    MR_Word VariantPredProcId_41;
    MR_Word VariantSymName_42;
    MR_Word STATE_VARIABLE_Info_103_103;
    MR_Word TypeInfo_153_153;
    MR_Word TypeCtorInfo_158_158;
    MR_Word TypeCtorInfo_166_166;
    MR_Word TypeCtorInfo_167_167;
    MR_Word TypeInfo_168_168;
    MR_Word TypeCtorInfo_169_169;
    MR_Word SymName_26;
    MR_Word CurrProcOutArgs_27;
    MR_Word CallHeadPairs_28;
    MR_Word Mismatches_29;
    MR_Word Subst_31;
    MR_Word MismatchedCallArgs_35;
    MR_Word AddrFieldIds_37;
    MR_Word HighLevelData_39;
    MR_Word VariantArgs_40;
    MR_Integer Var_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_Info_61_61;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word STATE_VARIABLE_Info_85_85;
    MR_Box conv4_AddrFieldIds_37;
    MR_Box conv3_STATE_VARIABLE_Info_85_85;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_19, &VarTypes_20);
    succeeded = ((MR_tag((MR_Word) CallGoalExpr_16)) == (MR_Integer) 2);
    if (succeeded)
    {
      PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallGoalExpr_16, (MR_Integer) 0))));
      ProcId_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), CallGoalExpr_16, (MR_Integer) 1))));
      ArgVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallGoalExpr_16, (MR_Integer) 2))));
      Builtin_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CallGoalExpr_16, (MR_Integer) 3))) & (MR_Integer) 1);
      UnifyContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallGoalExpr_16, (MR_Integer) 4))));
      SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallGoalExpr_16, (MR_Integer) 5))));
      CurrProcOutArgs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstInfo_15, (MR_Integer) 5))));
      TypeInfo_153_153 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
      mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_153_153, TypeInfo_153_153, CallOutArgVars_10, CurrProcOutArgs_27, &CallHeadPairs_28);
      Var_59 = (MR_Integer) 1;
      Var_60 = mercury__map__init_0_f_0(TypeInfo_153_153, TypeInfo_153_153);
      transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(ConstInfo_15, UnifyInputVars_12, CallHeadPairs_28, Var_59, &Mismatches_29, &UpdatedCallOutArgs_30, Var_60, &Subst_31, STATE_VARIABLE_Info_0_57, &STATE_VARIABLE_Info_61_61);
      succeeded = (Mismatches_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeCtorInfo_158_158 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        mercury__assoc_list__values_2_p_0(TypeCtorInfo_158_158, TypeInfo_153_153, Mismatches_29, &MismatchedCallArgs_35);
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[5]));
          MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (UnifyInputVars_12));
        }
        succeeded = mercury__list__all_true_2_p_0(TypeInfo_153_153, Var_82, MismatchedCallArgs_35);
        if (succeeded)
        {
          TypeCtorInfo_166_166 = (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0);
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (ConstInfo_15));
            MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (Subst_31));
          }
          Var_84 = mercury__map__init_0_f_0(TypeInfo_153_153, TypeCtorInfo_166_166);
          TypeCtorInfo_167_167 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
          TypeInfo_168_168 = (MR_Word) (&transform_hlds__lco_scalar_common_2[5]);
          TypeCtorInfo_169_169 = (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0);
          mercury__list__map_foldl2_7_p_0(TypeCtorInfo_167_167, TypeCtorInfo_167_167, TypeInfo_168_168, TypeCtorInfo_169_169, Var_83, UnifyGoals_11, &UpdatedUnifyGoals_36, ((MR_Box) (Var_84)), &conv4_AddrFieldIds_37, ((MR_Box) (STATE_VARIABLE_Info_61_61)), &conv3_STATE_VARIABLE_Info_85_85);
          AddrFieldIds_37 = ((MR_Word) (conv4_AddrFieldIds_37));
          STATE_VARIABLE_Info_85_85 = ((MR_Word) (conv3_STATE_VARIABLE_Info_85_85));
          HighLevelData_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ConstInfo_15, (MR_Integer) 6))) & (MR_Integer) 1);
          transform_hlds__lco__make_variant_args_4_p_0(HighLevelData_39, AddrFieldIds_37, Mismatches_29, &VariantArgs_40);
          succeeded = transform_hlds__lco__ensure_variant_exists_8_p_0(PredId_21, ProcId_22, VariantArgs_40, &VariantPredProcId_41, SymName_26, &VariantSymName_42, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_103_103);
        }
      }
    }
    if (succeeded)
    {
      MR_Word CalleeProcInfo_43;
      MR_Word CalleeModes_44;
      MR_Word UpdatedArgs_45;
      MR_Word VariantPredId_46;
      MR_Integer VariantProcId_47;
      MR_Word UpdatedGoalExpr_48;
      MR_Word OrigCallPurity_49;
      MR_Word UpdatedGoalInfo_50;
      MR_Word UpdatedGoal_51;
      MR_Word Goals_52;
      MR_Word Var_105;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_151;

      hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_18, PredId_21, ProcId_22, &CalleeProcInfo_43);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_43, &CalleeModes_44);
      transform_hlds__lco__update_call_args_6_p_0(ModuleInfo_18, VarTypes_20, CalleeModes_44, ArgVars_23, UpdatedCallOutArgs_30, &UpdatedArgs_45);
      VariantPredId_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VariantPredProcId_41, (MR_Integer) 0))));
      VariantProcId_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VariantPredProcId_41, (MR_Integer) 1))));
      {
        UpdatedGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), UpdatedGoalExpr_48, 0) = ((MR_Box) (VariantPredId_46));
        MR_hl_field(MR_mktag(2), UpdatedGoalExpr_48, 1) = ((MR_Box) (VariantProcId_47));
        MR_hl_field(MR_mktag(2), UpdatedGoalExpr_48, 2) = ((MR_Box) (UpdatedArgs_45));
        MR_hl_field(MR_mktag(2), UpdatedGoalExpr_48, 3) = (MR_Box) ((MR_Unsigned) (Builtin_24));
        MR_hl_field(MR_mktag(2), UpdatedGoalExpr_48, 4) = ((MR_Box) (UnifyContext_25));
        MR_hl_field(MR_mktag(2), UpdatedGoalExpr_48, 5) = ((MR_Box) (VariantSymName_42));
      }
      OrigCallPurity_49 = hlds__hlds_goal__goal_info_get_purity_1_f_0(CallGoalInfo_17);
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, CallGoalInfo_17, &UpdatedGoalInfo_50);
      {
        UpdatedGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UpdatedGoal_51, 0) = ((MR_Box) (UpdatedGoalExpr_48));
        MR_hl_field(MR_mktag(0), UpdatedGoal_51, 1) = ((MR_Box) (UpdatedGoalInfo_50));
      }
      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (UpdatedGoal_51));
        MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Goals_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UpdatedUnifyGoals_36, Var_105);
      succeeded = (OrigCallPurity_49 == (MR_Integer) 2);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoals_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goals_52));
        }
      else
      {
        MR_Word ConjGoalExpr_53;
        MR_Word ConjGoal_54;
        MR_Word PromiseGoalExpr_55;
        MR_Word PromiseGoal_56;
        MR_Word Var_108;
        MR_Word Var_109;

        {
          ConjGoalExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConjGoalExpr_53, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConjGoalExpr_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ConjGoalExpr_53, 2) = ((MR_Box) (Goals_52));
        }
        {
          ConjGoal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConjGoal_54, 0) = ((MR_Box) (ConjGoalExpr_53));
          MR_hl_field(MR_mktag(0), ConjGoal_54, 1) = ((MR_Box) (UpdatedGoalInfo_50));
        }
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_108, 1) = (MR_Box) ((MR_Unsigned) (OrigCallPurity_49));
        }
        {
          PromiseGoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), PromiseGoalExpr_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), PromiseGoalExpr_55, 1) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(3), PromiseGoalExpr_55, 2) = ((MR_Box) (ConjGoal_54));
        }
        {
          PromiseGoal_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PromiseGoal_56, 0) = ((MR_Box) (PromiseGoalExpr_55));
          MR_hl_field(MR_mktag(0), PromiseGoal_56, 1) = ((MR_Box) (UpdatedGoalInfo_50));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (PromiseGoal_56));
          MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoals_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_109));
        }
      }
      Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, (MR_Integer) 0))));
      Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, (MR_Integer) 1))));
      Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, (MR_Integer) 2))));
      Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, (MR_Integer) 3))));
      Var_151 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_103_103, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_58 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_147));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) (Var_151) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
    }
    else
    {
      *MaybeGoals_13 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_58 = STATE_VARIABLE_Info_0_57;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word AddrArgNums_11,
  MR_Word * VariantPredProcId_12,
  MR_Word SymName_13,
  MR_Word * VariantSymName_14,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_16;
    MR_Word CurSCCVariants0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 1))));
    MR_Word ExistingVariant_19;
    MR_Word ExistingVariants_18;

    {
      PredProcId_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_16, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), PredProcId_16, 1) = ((MR_Box) (ProcId_10));
    }
    succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), CurSCCVariants0_17, ((MR_Box) (PredProcId_16)), &ExistingVariants_18);
    if (succeeded)
      succeeded = transform_hlds__lco__match_existing_variant_3_p_0(ExistingVariants_18, AddrArgNums_11, &ExistingVariant_19);
    if (succeeded)
    {
      MR_String VariantName_74;

      *VariantPredProcId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistingVariant_19, (MR_Integer) 1))));
      VariantName_74 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExistingVariant_19, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *VariantSymName_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_76));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VariantName_74));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *VariantSymName_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VariantName_74));
        }
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_67_67;
      MR_Word TypeCtorInfo_68_68;
      MR_Word ModuleInfo0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
      MR_Word ClonePredId_21;
      MR_Word PredOrFunc_22;
      MR_Word ModuleInfo_23;
      MR_Integer VariantNumber_24;
      MR_String VariantName_26;
      MR_Word NewVariant_28;
      MR_Word CurSCCVariants_29;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word PredInfo_85;
      MR_Word PredTable0_86;
      MR_Word PredTable_87;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Unsigned packed_word_2;
      MR_Word ExistingVariants_37;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Unsigned packed_word_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_20, PredId_9, &PredInfo_85);
      PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_85);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_20, &PredTable0_86);
      hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_85, &ClonePredId_21, PredTable0_86, &PredTable_87);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_87, ModuleInfo0_20, &ModuleInfo_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *VariantPredProcId_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClonePredId_21));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_10));
      }
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 1))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 2))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 3))));
      packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
      {
        STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (ModuleInfo_23));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 4) = (MR_Box) (packed_word_2);
      }
      succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), CurSCCVariants0_17, ((MR_Box) (PredProcId_16)), &ExistingVariants_37);
      if (succeeded)
      {
        MR_Integer Var_33;

        Var_33 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), ExistingVariants_37);
        VariantNumber_24 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) 1);
      }
      else
        VariantNumber_24 = (MR_Integer) 1;
      succeeded = (VariantNumber_24 <= (MR_Integer) 4);
      if (succeeded)
      {
        if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
        {
          MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0))));
          MR_String Name_38 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 1))));

          transform_hlds__lco__create_variant_name_4_p_0(PredOrFunc_22, VariantNumber_24, Name_38, &VariantName_26);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *VariantSymName_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VariantName_26));
          }
        }
        else
        {
          MR_String Name_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_13, (MR_Integer) 0))));

          transform_hlds__lco__create_variant_name_4_p_0(PredOrFunc_22, VariantNumber_24, Name_25, &VariantName_26);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *VariantSymName_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VariantName_26));
          }
        }
        TypeCtorInfo_67_67 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
        TypeCtorInfo_68_68 = (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0);
        {
          NewVariant_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewVariant_28, 0) = ((MR_Box) (AddrArgNums_11));
          MR_hl_field(MR_mktag(0), NewVariant_28, 1) = ((MR_Box) (*VariantPredProcId_12));
          MR_hl_field(MR_mktag(0), NewVariant_28, 2) = ((MR_Box) (VariantName_26));
        }
        mercury__multi_map__set_4_p_0(TypeCtorInfo_67_67, TypeCtorInfo_68_68, ((MR_Box) (PredProcId_16)), ((MR_Box) (NewVariant_28)), CurSCCVariants0_17, &CurSCCVariants_29);
        Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 0))));
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 2))));
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 3))));
        packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_31 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CurSCCVariants_29));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_3);
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__create_variant_name_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Integer VariantNumber_6,
  MR_String OrigName_7,
  MR_String * VariantName_8)
{
  {
    MR_String Prefix_9;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    switch (PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Prefix_9 = (MR_String) "LCMCfn_";
        break;
      case (MR_Integer) 0:
        Prefix_9 = (MR_String) "LCMCpr_";
        break;
    }
    Var_13 = mercury__string__int_to_string_1_f_0(VariantNumber_6);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_13);
    Var_10 = mercury__string__f_43_43_2_f_0(OrigName_7, Var_11);
    *VariantName_8 = mercury__string__f_43_43_2_f_0(Prefix_9, Var_10);
  }
}

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_15;

    conv1_LambdaHeadVar__2_15 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1195__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_18;

    conv0_LambdaHeadVar__2_18 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1192__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
  MR_Word HighLevelData_5,
  MR_Word AddrVarFieldIds_6,
  MR_Word Mismatches_7,
  MR_Word * VariantArgs_8)
{
  {
    MR_Word MakeArg_9;

    switch (HighLevelData_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MakeArg_9 = (MR_Word) (&transform_hlds__lco_scalar_common_2[11]);
        break;
      case (MR_Integer) 1:
        {
          MakeArg_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MakeArg_9, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), MakeArg_9, 1) = ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_2));
          MR_hl_field(MR_mktag(0), MakeArg_9, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), MakeArg_9, 3) = ((MR_Box) (AddrVarFieldIds_6));
        }
        break;
    }
    *VariantArgs_8 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__lco_scalar_common_2[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0), MakeArg_9, Mismatches_7);
  }
}

static void MR_CALL 
transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word UnifyInputVars_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Subst_0_7,
  MR_Word * STATE_VARIABLE_Subst_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Subst_8 = STATE_VARIABLE_Subst_0_7;
    }
    else
    {
      MR_Word CallArg_22;
      MR_Word HeadArg_23;
      MR_Word CallHeadArgs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word UpdatedCallArg_27;
      MR_Word UpdatedCallArgs_28;
      MR_Word MismatchesTail_31;
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer Var_39;
      MR_Word STATE_VARIABLE_Subst_40_40;
      MR_Word STATE_VARIABLE_Info_41_41;
      MR_Word STATE_VARIABLE_Info_48_48;
      MR_Word CallArgType_32;
      MR_Word CallArgTypeCtor_33;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_String Var_46;
      MR_Integer Var_47;

      CallArg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
      HeadArg_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));
      Var_39 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
      transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(HeadVar__1_1, UnifyInputVars_2, CallHeadArgs_24, Var_39, &MismatchesTail_31, &UpdatedCallArgs_28, STATE_VARIABLE_Subst_0_7, &STATE_VARIABLE_Subst_40_40, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_41_41);
      Var_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      succeeded = (Var_43 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 3))));
        hlds__vartypes__lookup_var_type_3_p_0(Var_44, CallArg_22, &CallArgType_32);
        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(CallArgType_32, &CallArgTypeCtor_33);
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallArgTypeCtor_33, (MR_Integer) 0))));
          Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallArgTypeCtor_33, (MR_Integer) 1))));
          succeeded = (Var_47 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
              succeeded = (strcmp(Var_46, (MR_String) "float") == 0);
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 0))));
        MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 1))));
        MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 2))));
        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 3))));
        MR_Word Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 4))) & (MR_Integer) 1);

        {
          STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_73)));
        }
      }
      else
        STATE_VARIABLE_Info_48_48 = STATE_VARIABLE_Info_41_41;
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (CallArg_22)), ((MR_Box) (HeadArg_23)));
      if (succeeded)
      {
        UpdatedCallArg_27 = CallArg_22;
        *HeadVar__5_5 = MismatchesTail_31;
        succeeded = mercury__bag__member_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (HeadArg_23)), UnifyInputVars_2);
        if (succeeded)
        {
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 0))));
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 1))));
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 2))));
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 3))));
          MR_Word Var_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 4))) & (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_79)));
          }
        }
        else
          *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_48_48;
        *STATE_VARIABLE_Subst_8 = STATE_VARIABLE_Subst_40_40;
      }
      else
      {
        MR_Word Var_53;

        transform_hlds__lco__make_address_var_5_p_0(HeadVar__1_1, CallArg_22, &UpdatedCallArg_27, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_10);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ArgNum_4));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (CallArg_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MismatchesTail_31));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (CallArg_22)), ((MR_Box) (UpdatedCallArg_27)), STATE_VARIABLE_Subst_40_40, STATE_VARIABLE_Subst_8);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UpdatedCallArg_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UpdatedCallArgs_28));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
  MR_Word ConstInfo_6,
  MR_Word Var_7,
  MR_Word * AddrVar_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word VarSet0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
    MR_Word VarTypes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
    MR_String Name_12;
    MR_String AddrName_13;
    MR_Word VarSet_14;
    MR_Word HighLevelData_15;
    MR_Word VarTypes_18;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Unsigned packed_word_2;

    mercury__varset__lookup_name_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_10, Var_7, (MR_String) "SCCcallarg", &Name_12);
    AddrName_13 = mercury__string__f_43_43_2_f_0((MR_String) "Addr", Name_12);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AddrName_13, AddrVar_8, VarSet0_10, &VarSet_14);
    HighLevelData_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ConstInfo_6, (MR_Integer) 6))) & (MR_Integer) 1);
    switch (HighLevelData_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FieldType_16;
          MR_Word AddrVarType_17;
          MR_Word RefTypeName_58;
          MR_Word Var_59;
          MR_Word Var_61;

          hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_11, Var_7, &FieldType_16);
          Var_59 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          {
            RefTypeName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RefTypeName_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), RefTypeName_58, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (FieldType_16));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            AddrVarType_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AddrVarType_17, 0) = ((MR_Box) (RefTypeName_58));
            MR_hl_field(MR_mktag(1), AddrVarType_17, 1) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(1), AddrVarType_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__vartypes__add_var_type_4_p_0(*AddrVar_8, AddrVarType_17, VarTypes0_11, &VarTypes_18);
        }
        break;
      case (MR_Integer) 1:
        VarTypes_18 = VarTypes0_11;
        break;
    }
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_18));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_2);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lco__IntroducedFrom__pred__update_call_args__1032__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__update_call_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_10;

        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[3]));
          MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__lco__update_call_args_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (HeadVar__5_5));
          MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_10, (MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "updating nonexistent arg");
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word ArgVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word ArgVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word CalleeType_38;
        MR_Word TopFunctorMode_39;

        hlds__vartypes__lookup_var_type_3_p_0(HeadVar__2_2, ArgVar_34, &CalleeType_38);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(HeadVar__1_1, Var_54, CalleeType_38, &TopFunctorMode_39);
        switch (TopFunctorMode_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_UpdatedArgVars_50_50;

              transform_hlds__lco__update_call_args_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_53, ArgVars_35, HeadVar__5_5, &STATE_VARIABLE_UpdatedArgVars_50_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgVar_34));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UpdatedArgVars_50_50));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word UpdatedArgVar_40;
              MR_Word STATE_VARIABLE_UpdatedCallOutArgVars_47_47;
              MR_Word STATE_VARIABLE_UpdatedArgVars_48_48;

              if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "no UpdatedCallOutArgs");
                  return;
                }
              else
              {
                UpdatedArgVar_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
                STATE_VARIABLE_UpdatedCallOutArgVars_47_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
              }
              transform_hlds__lco__update_call_args_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_53, ArgVars_35, STATE_VARIABLE_UpdatedCallOutArgVars_47_47, &STATE_VARIABLE_UpdatedArgVars_48_48);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UpdatedArgVar_40));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UpdatedArgVars_48_48));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "top_unused");
              return;
            }
            break;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__divide_rev_conj_8_p_0(
  MR_Word Info_9,
  MR_Word ConstInfo_10,
  MR_Word RevGoals0_11,
  MR_Word STATE_VARIABLE_AfterGoals_0_19,
  MR_Word * STATE_VARIABLE_AfterGoals_20,
  MR_Word * RecGoal_13,
  MR_Word * RecOutArgs_14,
  MR_Word * RevBeforeGoals_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (RevGoals0_11 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word RevGoal_16;
    MR_Word RevGoalsTail_17;
    MR_Word OutArgs_18;
    MR_Word TypeCtorInfo_73_93;
    MR_Word TypeInfo_75_95;
    MR_Word GoalExpr_29;
    MR_Word GoalInfo_30;
    MR_Word PredId_31;
    MR_Integer ProcId_32;
    MR_Word Args_33;
    MR_Word ModuleInfo_37;
    MR_Word ProcInfo_38;
    MR_Word VarTypes_39;
    MR_Word CalleeProcInfo_40;
    MR_Word CalleeArgModes_41;
    MR_Word UnusedArgs_43;
    MR_Integer NumOutArgs_45;
    MR_Word CurrProcOutArgs_46;
    MR_Integer NumCurrProcOutArgs_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_96;
    MR_Word _InArgs_42;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      RevGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevGoals0_11, (MR_Integer) 0))));
      RevGoalsTail_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevGoals0_11, (MR_Integer) 1))));
      GoalExpr_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RevGoal_16, (MR_Integer) 0))));
      GoalInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RevGoal_16, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) GoalExpr_29)) == (MR_Integer) 2);
      if (succeeded)
      {
        PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_29, (MR_Integer) 0))));
        ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_29, (MR_Integer) 1))));
        Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_29, (MR_Integer) 2))));
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstInfo_10, (MR_Integer) 1))));
        TypeCtorInfo_73_93 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (PredId_31));
          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ProcId_32));
        }
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_73_93, ((MR_Box) (Var_48)), Var_49);
        if (succeeded)
        {
          Var_50 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_30);
          ProcInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstInfo_10, (MR_Integer) 4))));
          Var_96 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ConstInfo_10, (MR_Integer) 6))) >> 2)) & (MR_Integer) 7);
          succeeded = (Var_50 == Var_96);
          if (succeeded)
          {
            ModuleInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_38, &VarTypes_39);
            hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_37, PredId_31, ProcId_32, &CalleeProcInfo_40);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_40, &CalleeArgModes_41);
            transform_hlds__lco__classify_proc_call_args_7_p_0(ModuleInfo_37, VarTypes_39, Args_33, CalleeArgModes_41, &_InArgs_42, &OutArgs_18, &UnusedArgs_43);
            succeeded = (UnusedArgs_43 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeInfo_75_95 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
              mercury__list__length_2_p_0(TypeInfo_75_95, OutArgs_18, &NumOutArgs_45);
              CurrProcOutArgs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstInfo_10, (MR_Integer) 5))));
              mercury__list__length_2_p_0(TypeInfo_75_95, CurrProcOutArgs_46, &NumCurrProcOutArgs_47);
              succeeded = (NumOutArgs_45 == NumCurrProcOutArgs_47);
            }
          }
        }
      }
      if (succeeded)
      {
        *RecGoal_13 = RevGoal_16;
        *RecOutArgs_14 = OutArgs_18;
        *RevBeforeGoals_15 = RevGoalsTail_17;
        *STATE_VARIABLE_AfterGoals_20 = STATE_VARIABLE_AfterGoals_0_19;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word STATE_VARIABLE_AfterGoals_21_21;
        MR_Word next_value_of_RevGoals0_11;
        MR_Word next_value_of_STATE_VARIABLE_AfterGoals_0_19;

        succeeded = transform_hlds__lco__potentially_moveable_goal_1_p_0(RevGoal_16);
        if (succeeded)
        {
          {
            STATE_VARIABLE_AfterGoals_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_AfterGoals_21_21, 0) = ((MR_Box) (RevGoal_16));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_AfterGoals_21_21, 1) = ((MR_Box) (STATE_VARIABLE_AfterGoals_0_19));
          }
          // direct tailcall eliminated
          ;
          next_value_of_RevGoals0_11 = RevGoalsTail_17;
          next_value_of_STATE_VARIABLE_AfterGoals_0_19 = STATE_VARIABLE_AfterGoals_21_21;
          RevGoals0_11 = next_value_of_RevGoals0_11;
          STATE_VARIABLE_AfterGoals_0_19 = next_value_of_STATE_VARIABLE_AfterGoals_0_19;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
  MR_Word Goal_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 0))));
    MR_Word GoalInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 1))));
    MR_Word Var_44;

    // setup for model_semi tailcalls optimized into a loop
    ;
    Var_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_4);
    succeeded = (Var_44 == (MR_Integer) 0);
    if (succeeded)
      switch (MR_tag((MR_Word) GoalExpr_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
                MR_Word SubGoal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

                succeeded = ((((MR_tag((MR_Word) Reason_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word next_value_of_Goal_2 = SubGoal_11;

                  // direct tailcall eliminated
                  ;
                  Goal_2 = next_value_of_Goal_2;
                  continue;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.potentially_moveable_goal\'/1", (MR_String) "shorthand");
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    return succeeded;
    break;
  }
}

static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = transform_hlds__lco__va_pos_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_process_proc_variant_4_p_0(
  MR_Word VariantMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33)
{
  {
    MR_Word PredProcId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word VariantId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word AddrOutArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VariantId_7, (MR_Integer) 0))));
    MR_Word VariantPredProcId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VariantId_7, (MR_Integer) 1))));
    MR_String VariantName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), VariantId_7, (MR_Integer) 2))));
    MR_Word VariantPredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VariantPredProcId_10, (MR_Integer) 0))));
    MR_Integer VariantProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VariantPredProcId_10, (MR_Integer) 1))));
    MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    MR_Word ProcInfo_17;
    MR_Word VariantProcInfo_18;
    MR_Word HeadVars_19;
    MR_Word VarTypes_20;
    MR_Word ArgTypes_21;
    MR_Word TVarSet_24;
    MR_Word ExistQVars_25;
    MR_Word Origin0_27;
    MR_Word AddrOutArgPosns_28;
    MR_Word Transform_29;
    MR_Word Origin_30;
    MR_Word VariantProcs_31;
    MR_Word STATE_VARIABLE_ModuleInfo_34_34;
    MR_Word STATE_VARIABLE_PredTable_35_35;
    MR_Word STATE_VARIABLE_VariantPredInfo_36_36;
    MR_Word STATE_VARIABLE_VariantPredInfo_37_37;
    MR_Word STATE_VARIABLE_VariantPredInfo_39_39;
    MR_Word STATE_VARIABLE_VariantPredInfo_40_40;
    MR_Word STATE_VARIABLE_VariantPredInfo_42_42;
    MR_Word STATE_VARIABLE_VariantPredInfo_43_43;
    MR_Word STATE_VARIABLE_PredTable_44_44;
    MR_Word VarSet0_62;
    MR_Word VarTypes0_63;
    MR_Word HeadVars0_64;
    MR_Word ArgModes0_65;
    MR_Word HeadVars_66;
    MR_Word ArgModes_67;
    MR_Word VarToAddr_68;
    MR_Word VarSet_69;
    MR_Word VarTypes_70;
    MR_Word InstMap0_71;
    MR_Word Goal0_72;
    MR_Word Goal_73;
    MR_Word Globals_75;
    MR_Word Target_76;
    MR_Word STATE_VARIABLE_VariantProcInfo_32_79;
    MR_Word STATE_VARIABLE_VariantProcInfo_33_80;
    MR_Word STATE_VARIABLE_VariantProcInfo_34_81;
    MR_Word STATE_VARIABLE_VariantProcInfo_35_82;
    MR_Word STATE_VARIABLE_VariantProcInfo_36_83;
    MR_Word STATE_VARIABLE_VariantProcInfo_37_84;
    MR_Word STATE_VARIABLE_VariantProcInfo_39_86;
    MR_Word _PredInfo_16;
    MR_Word _Changed_74;
    MR_Box conv0_STATE_VARIABLE_VariantPredInfo_36_36;
    MR_Word _ArgTypes0_26;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_32, PredId_14, ProcId_15, &_PredInfo_16, &ProcInfo_17);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_17, &VarSet0_62);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_17, &VarTypes0_63);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars0_64);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_17, &ArgModes0_65);
    transform_hlds__lco__make_addr_vars_12_p_0(HeadVars0_64, ArgModes0_65, &HeadVars_66, &ArgModes_67, AddrOutArgs_9, (MR_Integer) 1, STATE_VARIABLE_ModuleInfo_0_32, &VarToAddr_68, VarSet0_62, &VarSet_69, VarTypes0_63, &VarTypes_70);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_66, ProcInfo_17, &STATE_VARIABLE_VariantProcInfo_32_79);
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_67, STATE_VARIABLE_VariantProcInfo_32_79, &STATE_VARIABLE_VariantProcInfo_33_80);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_69, STATE_VARIABLE_VariantProcInfo_33_80, &STATE_VARIABLE_VariantProcInfo_34_81);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_70, STATE_VARIABLE_VariantProcInfo_34_81, &STATE_VARIABLE_VariantProcInfo_35_82);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo_17, STATE_VARIABLE_ModuleInfo_0_32, &InstMap0_71);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_17, &Goal0_72);
    transform_hlds__lco__lco_transform_variant_goal_9_p_0(STATE_VARIABLE_ModuleInfo_0_32, VariantMap_5, VarToAddr_68, InstMap0_71, Goal0_72, &Goal_73, &_Changed_74, STATE_VARIABLE_VariantProcInfo_35_82, &STATE_VARIABLE_VariantProcInfo_36_83);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_73, STATE_VARIABLE_VariantProcInfo_36_83, &STATE_VARIABLE_VariantProcInfo_37_84);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_VariantProcInfo_37_84, &STATE_VARIABLE_VariantProcInfo_39_86);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &Globals_75);
    libs__globals__get_target_2_p_0(Globals_75, &Target_76);
    switch (Target_76) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          VariantProcInfo_18 = STATE_VARIABLE_VariantProcInfo_39_86;
          STATE_VARIABLE_ModuleInfo_34_34 = STATE_VARIABLE_ModuleInfo_0_32;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_VariantProcInfo_39_86, &VariantProcInfo_18, STATE_VARIABLE_ModuleInfo_0_32, &STATE_VARIABLE_ModuleInfo_34_34);
        break;
      case (MR_Integer) 3:
        {
          VariantProcInfo_18 = STATE_VARIABLE_VariantProcInfo_39_86;
          STATE_VARIABLE_ModuleInfo_34_34 = STATE_VARIABLE_ModuleInfo_0_32;
        }
        break;
    }
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(VariantProcInfo_18, &HeadVars_19);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(VariantProcInfo_18, &VarTypes_20);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_20, HeadVars_19, &ArgTypes_21);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_PredTable_35_35);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_35_35, ((MR_Box) (VariantPredId_12)), &conv0_STATE_VARIABLE_VariantPredInfo_36_36);
    STATE_VARIABLE_VariantPredInfo_36_36 = ((MR_Word) (conv0_STATE_VARIABLE_VariantPredInfo_36_36));
    hlds__hlds_pred__pred_info_set_name_3_p_0(VariantName_11, STATE_VARIABLE_VariantPredInfo_36_36, &STATE_VARIABLE_VariantPredInfo_37_37);
    hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0((MR_Integer) 0, STATE_VARIABLE_VariantPredInfo_37_37, &STATE_VARIABLE_VariantPredInfo_39_39);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_VariantPredInfo_39_39, &TVarSet_24, &ExistQVars_25, &_ArgTypes0_26);
    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TVarSet_24, ExistQVars_25, ArgTypes_21, STATE_VARIABLE_VariantPredInfo_39_39, &STATE_VARIABLE_VariantPredInfo_40_40);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_VariantPredInfo_40_40, &Origin0_27);
    AddrOutArgPosns_28 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__lco_scalar_common_2[10]), AddrOutArgs_9);
    {
      Transform_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Transform_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Transform_29, 1) = ((MR_Box) (ProcId_15));
      MR_hl_field(MR_mktag(3), Transform_29, 2) = ((MR_Box) (AddrOutArgPosns_28));
    }
    {
      Origin_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Origin_30, 1) = ((MR_Box) (Transform_29));
      MR_hl_field(MR_mktag(3), Origin_30, 2) = ((MR_Box) (Origin0_27));
      MR_hl_field(MR_mktag(3), Origin_30, 3) = ((MR_Box) (PredId_14));
    }
    hlds__hlds_pred__pred_info_set_origin_3_p_0(Origin_30, STATE_VARIABLE_VariantPredInfo_40_40, &STATE_VARIABLE_VariantPredInfo_42_42);
    VariantProcs_31 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (VariantProcId_13)), ((MR_Box) (VariantProcInfo_18)));
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(VariantProcs_31, STATE_VARIABLE_VariantPredInfo_42_42, &STATE_VARIABLE_VariantPredInfo_43_43);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (VariantPredId_12)), ((MR_Box) (STATE_VARIABLE_VariantPredInfo_43_43)), STATE_VARIABLE_PredTable_35_35, &STATE_VARIABLE_PredTable_44_44);
    hlds__hlds_module__module_info_set_preds_3_p_0(STATE_VARIABLE_PredTable_44_44, STATE_VARIABLE_ModuleInfo_34_34, STATE_VARIABLE_ModuleInfo_33);
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_conj_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VariantMap_2,
  MR_Word VarToAddr_3,
  MR_Word InstMap0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 0;
      *STATE_VARIABLE_ProcInfo_9 = STATE_VARIABLE_ProcInfo_0_8;
    }
    else
    {
      MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Goals0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Goal_26;
      MR_Word HeadChanged_27;
      MR_Word InstMap1_28;
      MR_Word Goals_29;
      MR_Word TailChanged_30;
      MR_Word STATE_VARIABLE_ProcInfo_35_35;
      MR_Word SubConj_31;
      MR_Word Var_37;
      MR_Word Var_38;

      transform_hlds__lco__lco_transform_variant_goal_9_p_0(ModuleInfo_1, VariantMap_2, VarToAddr_3, InstMap0_4, Goal0_21, &Goal_26, &HeadChanged_27, STATE_VARIABLE_ProcInfo_0_8, &STATE_VARIABLE_ProcInfo_35_35);
      hlds__goal_util__update_instmap_3_p_0(Goal0_21, InstMap0_4, &InstMap1_28);
      transform_hlds__lco__lco_transform_variant_conj_9_p_0(ModuleInfo_1, VariantMap_2, VarToAddr_3, InstMap1_28, Goals0_22, &Goals_29, &TailChanged_30, STATE_VARIABLE_ProcInfo_35_35, STATE_VARIABLE_ProcInfo_9);
      *HeadVar__7_7 = mercury__bool__or_2_f_0(HeadChanged_27, TailChanged_30);
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_26, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 1))) & (MR_Integer) 1);
        SubConj_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_37, (MR_Integer) 2))));
        succeeded = (Var_38 == (MR_Integer) 0);
      }
      if (succeeded)
        *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubConj_31, Goals_29);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_29));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Case_15;
    MR_Word conv6_Changed_16;
    MR_Word conv5_STATE_VARIABLE_ProcInfo_23;

    transform_hlds__lco__lco_transform_variant_case_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv7_Case_15, &conv6_Changed_16, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_ProcInfo_23);
    *wrapper_arg_2 = ((MR_Box) (conv7_Case_15));
    *wrapper_arg_3 = ((MR_Box) (conv6_Changed_16));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_ProcInfo_23));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_15;
    MR_Word conv1_Changed_16;
    MR_Word conv0_STATE_VARIABLE_ProcInfo_74;

    transform_hlds__lco__lco_transform_variant_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_15, &conv1_Changed_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ProcInfo_74);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_15));
    *wrapper_arg_3 = ((MR_Box) (conv1_Changed_16));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_74));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44 = ((MR_Word) ((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44));
    transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_45;

      (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVarPair_44, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_113_113 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
      (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__TypeInfo_113_113, ((MR_Box) ((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42)), ((MR_Box) ((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__Var_112)));
      if ((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
        transform_hlds__lco__lco_transform_variant_goal_9_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s * env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), &(env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__conv4_FGTVarPair_44, (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, transform_hlds__lco__lco_transform_variant_goal_9_p_0_4, env_ptr);
        (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word VariantMap_11,
  MR_Word VarToAddr_12,
  MR_Word InstMap0_13,
  MR_Word Goal0_14,
  MR_Word * Goal_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_73,
  MR_Word * STATE_VARIABLE_ProcInfo_74)
{
  {
    struct transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0_s env;

    (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12 = VarToAddr_12;
    {
      MR_Word GoalExpr0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 0))));
      MR_Word GoalInfo0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 1))));
      MR_Word GoalExpr_23;
      MR_Word GoalInfo_24;

      switch (MR_tag((MR_Word) GoalExpr0_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            GoalExpr_23 = GoalExpr0_18;
            GoalInfo_24 = GoalInfo0_19;
            *Changed_16 = (MR_Integer) 0;
            *STATE_VARIABLE_ProcInfo_74 = STATE_VARIABLE_ProcInfo_0_73;
          }
          break;
        case (MR_Integer) 1:
          {
            transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(ModuleInfo_10, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap0_13, GoalInfo0_19, GoalExpr0_18, &GoalExpr_23, Changed_16, STATE_VARIABLE_ProcInfo_0_73, STATE_VARIABLE_ProcInfo_74);
            GoalInfo_24 = GoalInfo0_19;
          }
          break;
        case (MR_Integer) 2:
          transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(ModuleInfo_10, VariantMap_11, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap0_13, GoalExpr0_18, &GoalExpr_23, GoalInfo0_19, &GoalInfo_24, Changed_16, STATE_VARIABLE_ProcInfo_0_73, STATE_VARIABLE_ProcInfo_74);
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(ModuleInfo_10, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap0_13, GoalInfo0_19, GoalExpr0_18, &GoalExpr_23, Changed_16, STATE_VARIABLE_ProcInfo_0_73, STATE_VARIABLE_ProcInfo_74);
                GoalInfo_24 = GoalInfo0_19;
              }
              break;
            case (MR_Integer) 1:
              {
                transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(ModuleInfo_10, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap0_13, GoalInfo0_19, GoalExpr0_18, &GoalExpr_23, Changed_16, STATE_VARIABLE_ProcInfo_0_73, STATE_VARIABLE_ProcInfo_74);
                GoalInfo_24 = GoalInfo0_19;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 2))));
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 1)));

                switch (ConjType_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "parallel_conj");
                      return;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Goals_22;

                      transform_hlds__lco__lco_transform_variant_conj_9_p_0(ModuleInfo_10, VariantMap_11, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap0_13, Goals0_21, &Goals_22, Changed_16, STATE_VARIABLE_ProcInfo_0_73, STATE_VARIABLE_ProcInfo_74);
                      {
                        GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = (MR_Box) ((MR_Unsigned) (ConjType_20));
                        MR_hl_field(MR_mktag(3), GoalExpr_23, 2) = ((MR_Box) (Goals_22));
                      }
                      GoalInfo_24 = GoalInfo0_19;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word DisjsChanged_25;
                MR_Word Var_87;
                MR_Word Goals0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 1))));
                MR_Word Goals_94;
                MR_Box conv3_STATE_VARIABLE_ProcInfo_74;

                {
                  Var_87 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[0]));
                  MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (ModuleInfo_10));
                  MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) (VariantMap_11));
                  MR_hl_field(MR_mktag(0), Var_87, 5) = ((MR_Box) ((env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
                  MR_hl_field(MR_mktag(0), Var_87, 6) = ((MR_Box) (InstMap0_13));
                }
                mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_87, Goals0_93, &Goals_94, &DisjsChanged_25, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_73)), &conv3_STATE_VARIABLE_ProcInfo_74);
                *STATE_VARIABLE_ProcInfo_74 = ((MR_Word) (conv3_STATE_VARIABLE_ProcInfo_74));
                *Changed_16 = mercury__bool__or_list_1_f_0(DisjsChanged_25);
                {
                  GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = ((MR_Box) (Goals_94));
                }
                GoalInfo_24 = GoalInfo0_19;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 1))));
                MR_Word CanFail_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 3))));
                MR_Word Cases_29;
                MR_Word CasesChanged_30;
                MR_Word Var_85;
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 2)));
                MR_Box conv8_STATE_VARIABLE_ProcInfo_74;

                {
                  Var_85 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[1]));
                  MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_9_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleInfo_10));
                  MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (VariantMap_11));
                  MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) ((env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12));
                  MR_hl_field(MR_mktag(0), Var_85, 6) = ((MR_Box) (InstMap0_13));
                }
                mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_85, Cases0_28, &Cases_29, &CasesChanged_30, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_73)), &conv8_STATE_VARIABLE_ProcInfo_74);
                *STATE_VARIABLE_ProcInfo_74 = ((MR_Word) (conv8_STATE_VARIABLE_ProcInfo_74));
                *Changed_16 = mercury__bool__or_list_1_f_0(CasesChanged_30);
                {
                  GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = ((MR_Box) (Var_26));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 2) = (MR_Box) ((MR_Unsigned) (CanFail_27));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 3) = ((MR_Box) (Cases_29));
                }
                GoalInfo_24 = GoalInfo0_19;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 1))));
                MR_Word SubGoal0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 2))));
                MR_Word FGT_43;
                MR_Unsigned packed_word_1;

                (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if ((env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
                {
                  (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__FGTVar_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 1))));
                  packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 2)));
                  FGT_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_43) {
                    default:
                      (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded = MR_TRUE;
                      break;
                  }
                }
                if ((env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
                {
                  transform_hlds__lco__lco_transform_variant_goal_9_p_0_5(&env);
                  if ((env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__succeeded)
                    transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(ModuleInfo_10, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap0_13, GoalInfo0_19, GoalExpr0_18, &GoalExpr_23, Changed_16, STATE_VARIABLE_ProcInfo_0_73, STATE_VARIABLE_ProcInfo_74);
                  else
                  {
                    GoalExpr_23 = GoalExpr0_18;
                    *Changed_16 = (MR_Integer) 0;
                    *STATE_VARIABLE_ProcInfo_74 = STATE_VARIABLE_ProcInfo_0_73;
                  }
                }
                else
                {
                  MR_Word SubGoal_46;

                  transform_hlds__lco__lco_transform_variant_goal_9_p_0(ModuleInfo_10, VariantMap_11, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap0_13, SubGoal0_41, &SubGoal_46, Changed_16, STATE_VARIABLE_ProcInfo_0_73, STATE_VARIABLE_ProcInfo_74);
                  {
                    GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = ((MR_Box) (Reason_40));
                    MR_hl_field(MR_mktag(3), GoalExpr_23, 2) = ((MR_Box) (SubGoal_46));
                  }
                }
                GoalInfo_24 = GoalInfo0_19;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Vars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 1))));
                MR_Word Cond_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 2))));
                MR_Word Then0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 3))));
                MR_Word Else0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_18, (MR_Integer) 4))));
                MR_Word InstMap1_35;
                MR_Word Then_36;
                MR_Word ThenChanged_37;
                MR_Word Else_38;
                MR_Word ElseChanged_39;
                MR_Word STATE_VARIABLE_ProcInfo_83_83;

                hlds__goal_util__update_instmap_3_p_0(Cond_32, InstMap0_13, &InstMap1_35);
                transform_hlds__lco__lco_transform_variant_goal_9_p_0(ModuleInfo_10, VariantMap_11, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap1_35, Then0_33, &Then_36, &ThenChanged_37, STATE_VARIABLE_ProcInfo_0_73, &STATE_VARIABLE_ProcInfo_83_83);
                transform_hlds__lco__lco_transform_variant_goal_9_p_0(ModuleInfo_10, VariantMap_11, (env).transform_hlds__lco__lco_transform_variant_goal_9_p_0_env_0__VarToAddr_12, InstMap0_13, Else0_34, &Else_38, &ElseChanged_39, STATE_VARIABLE_ProcInfo_83_83, STATE_VARIABLE_ProcInfo_74);
                *Changed_16 = mercury__bool__or_2_f_0(ThenChanged_37, ElseChanged_39);
                {
                  GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = ((MR_Box) (Vars_31));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 2) = ((MR_Box) (Cond_32));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 3) = ((MR_Box) (Then_36));
                  MR_hl_field(MR_mktag(3), GoalExpr_23, 4) = ((MR_Box) (Else_38));
                }
                GoalInfo_24 = GoalInfo0_19;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/9", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      switch (*Changed_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Goal_15 = Goal0_14;
          break;
        case (MR_Integer) 1:
          {
            MR_Word GoalInfoImpure_72;

            hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo_24, &GoalInfoImpure_72);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_15 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_23));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfoImpure_72));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_69;

    transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1756__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_69);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_69));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word VariantMap_13,
  MR_Word VarToAddr_14,
  MR_Word InstMap0_15,
  MR_Word GoalExpr0_16,
  MR_Word * GoalExpr_17,
  MR_Word GoalInfo0_18,
  MR_Word * GoalInfo_19,
  MR_Word * Changed_20,
  MR_Word STATE_VARIABLE_ProcInfo_0_53,
  MR_Word * STATE_VARIABLE_ProcInfo_54)
{
  {
    MR_bool succeeded;
    MR_Word InstMap1_22;
    MR_Word GroundingVarToAddr_23;
    MR_Word Var_55;
    MR_Word Var_56;

    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (GoalExpr0_16));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (GoalInfo0_18));
    }
    hlds__goal_util__update_instmap_3_p_0(Var_55, InstMap0_15, &InstMap1_22);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ModuleInfo_12));
      MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (InstMap0_15));
      MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (InstMap1_22));
    }
    mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), Var_56, VarToAddr_14, &GroundingVarToAddr_23);
    if ((GroundingVarToAddr_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *GoalExpr_17 = GoalExpr0_16;
      *GoalInfo_19 = GoalInfo0_18;
      *Changed_20 = (MR_Integer) 0;
      *STATE_VARIABLE_ProcInfo_54 = STATE_VARIABLE_ProcInfo_0_53;
    }
    else
    {
      MR_Word CallPredId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 0))));
      MR_Integer CallProcId_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 1))));
      MR_Word Args_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 2))));
      MR_Word Builtin_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word UnifyContext_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 4))));
      MR_Word SymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 5))));
      MR_Word CallPredProcId_32;
      MR_Word CalleeProcInfo_33;
      MR_Word VarTypes_34;
      MR_Word CalleeArgModes_35;
      MR_Word Subst_40;
      MR_Word ExistingVariant_42;
      MR_Word ExistingVariants_36;
      MR_Word OutArgs_38;
      MR_Word VariantArgs_41;
      MR_Integer Var_57;
      MR_Word _InArgs_37;
      MR_Word _UnusedArgs_39;

      {
        CallPredProcId_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CallPredProcId_32, 0) = ((MR_Box) (CallPredId_26));
        MR_hl_field(MR_mktag(0), CallPredProcId_32, 1) = ((MR_Box) (CallProcId_27));
      }
      hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_12, CallPredId_26, CallProcId_27, &CalleeProcInfo_33);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_53, &VarTypes_34);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_33, &CalleeArgModes_35);
      succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), VariantMap_13, ((MR_Box) (CallPredProcId_32)), &ExistingVariants_36);
      if (succeeded)
      {
        transform_hlds__lco__classify_proc_call_args_7_p_0(ModuleInfo_12, VarTypes_34, Args_28, CalleeArgModes_35, &_InArgs_37, &OutArgs_38, &_UnusedArgs_39);
        Var_57 = (MR_Integer) 1;
        transform_hlds__lco__grounding_to_variant_args_5_p_0(GroundingVarToAddr_23, Var_57, OutArgs_38, &Subst_40, &VariantArgs_41);
        succeeded = transform_hlds__lco__match_existing_variant_3_p_0(ExistingVariants_36, VariantArgs_41, &ExistingVariant_42);
      }
      if (succeeded)
      {
        MR_Word CallArgs_43;
        MR_Word VariantPredId_44;
        MR_Integer VariantProcId_45;
        MR_Word VariantSymName_46;
        MR_Word Globals_47;
        MR_Word Target_48;
        MR_Word Var_59;
        MR_String VariantName_78;

        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Subst_40, Args_28, &CallArgs_43);
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistingVariant_42, (MR_Integer) 1))));
        VariantName_78 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExistingVariant_42, (MR_Integer) 2))));
        if (((MR_tag((MR_Word) SymName_31)) == (MR_Integer) 1))
        {
          MR_Word ModuleName_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_31, (MR_Integer) 0))));

          {
            VariantSymName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), VariantSymName_46, 0) = ((MR_Box) (ModuleName_80));
            MR_hl_field(MR_mktag(1), VariantSymName_46, 1) = ((MR_Box) (VariantName_78));
          }
        }
        else
          {
            VariantSymName_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), VariantSymName_46, 0) = ((MR_Box) (VariantName_78));
          }
        VariantPredId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 0))));
        VariantProcId_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 1))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_17 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VariantPredId_44));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (VariantProcId_45));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (CallArgs_43));
          MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_29));
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (UnifyContext_30));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (VariantSymName_46));
        }
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_47);
        libs__globals__get_target_2_p_0(Globals_47, &Target_48);
        switch (Target_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *GoalInfo_19 = GoalInfo0_18;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word GroundVars_49;
              MR_Word AddrVars_50;
              MR_Word InstMapDelta0_51;
              MR_Word InstMapDelta_52;
              MR_Word Var_61;

              mercury__list__map_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_2[9]), GroundingVarToAddr_23, &GroundVars_49);
              mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), GroundVars_49, Subst_40, &AddrVars_50);
              InstMapDelta0_51 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_18);
              Var_61 = parse_tree__prog_mode__ground_inst_0_f_0();
              hlds__instmap__instmap_delta_set_vars_same_4_p_0(Var_61, AddrVars_50, InstMapDelta0_51, &InstMapDelta_52);
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_52, GoalInfo0_18, GoalInfo_19);
            }
            break;
        }
        *Changed_20 = (MR_Integer) 1;
        *STATE_VARIABLE_ProcInfo_54 = STATE_VARIABLE_ProcInfo_0_53;
      }
      else
      {
        transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(ModuleInfo_12, VarToAddr_14, InstMap0_15, GoalInfo0_18, GoalExpr0_16, GoalExpr_17, Changed_20, STATE_VARIABLE_ProcInfo_0_53, STATE_VARIABLE_ProcInfo_54);
        *GoalInfo_19 = GoalInfo0_18;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_5_p_0(
  MR_Word GroundingVarToAddr_6,
  MR_Integer OutArgNum_7,
  MR_Word OutArgs_8,
  MR_Word * Subst_9,
  MR_Word * VariantArgs_10)
{
  {
    MR_bool succeeded;

    if ((OutArgs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Subst_9 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]));
      *VariantArgs_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word OutArg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutArgs_8, (MR_Integer) 0))));
      MR_Word OutArgsTail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutArgs_8, (MR_Integer) 1))));
      MR_Word Subst0_13;
      MR_Word VariantArgsTail_14;
      MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) OutArgNum_7 + (MR_Unsigned) 1);
      MR_Word StoreTarget_15;
      MR_Box conv0_StoreTarget_15;

      transform_hlds__lco__grounding_to_variant_args_5_p_0(GroundingVarToAddr_6, Var_19, OutArgsTail_12, &Subst0_13, &VariantArgsTail_14);
      succeeded = mercury__assoc_list__search_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0), GroundingVarToAddr_6, ((MR_Box) (OutArg_11)), &conv0_StoreTarget_15);
      if (succeeded)
      {
        StoreTarget_15 = ((MR_Word) (conv0_StoreTarget_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word StoreArg_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StoreTarget_15, (MR_Integer) 0))));
        MR_Word MaybeFieldId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StoreTarget_15, (MR_Integer) 1))));
        MR_Word VariantArg_18;

        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (OutArg_11)), ((MR_Box) (StoreArg_16)), Subst0_13, Subst_9);
        {
          VariantArg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), VariantArg_18, 0) = ((MR_Box) (OutArgNum_7));
          MR_hl_field(MR_mktag(0), VariantArg_18, 1) = ((MR_Box) (MaybeFieldId_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *VariantArgs_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VariantArg_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VariantArgsTail_14));
        }
      }
      else
      {
        *Subst_9 = Subst0_13;
        *VariantArgs_10 = VariantArgsTail_14;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AddrArgNums_6,
  MR_Word * Variant_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Variant0_4;
    MR_Word Variants_5;
    MR_Word TypeInfo_11_11;
    MR_Word Var_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Variant0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Variants_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Variant0_4, (MR_Integer) 0))));
      TypeInfo_11_11 = (MR_Word) (&transform_hlds__lco_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (AddrArgNums_6)), ((MR_Box) (Var_10)));
      if (succeeded)
      {
        *Variant_7 = Variant0_4;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Variants_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word CalleeMode_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word CalleeModes_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word CalleeType_37;
      MR_Word TopFunctorMode_38;
      MR_Word STATE_VARIABLE_InArgs_42_42;
      MR_Word STATE_VARIABLE_OutArgs_43_43;
      MR_Word STATE_VARIABLE_UnusedArgs_44_44;

      transform_hlds__lco__classify_proc_call_args_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_48, CalleeModes_33, &STATE_VARIABLE_InArgs_42_42, &STATE_VARIABLE_OutArgs_43_43, &STATE_VARIABLE_UnusedArgs_44_44);
      hlds__vartypes__lookup_var_type_3_p_0(HeadVar__2_2, Var_49, &CalleeType_37);
      check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(HeadVar__1_1, CalleeMode_32, CalleeType_37, &TopFunctorMode_38);
      switch (TopFunctorMode_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InArgs_42_42));
            }
            *HeadVar__6_6 = STATE_VARIABLE_OutArgs_43_43;
            *HeadVar__7_7 = STATE_VARIABLE_UnusedArgs_44_44;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutArgs_43_43));
            }
            *HeadVar__5_5 = STATE_VARIABLE_InArgs_42_42;
            *HeadVar__7_7 = STATE_VARIABLE_UnusedArgs_44_44;
          }
          break;
        case (MR_Integer) 2:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UnusedArgs_44_44));
            }
            *HeadVar__5_5 = STATE_VARIABLE_InArgs_42_42;
            *HeadVar__6_6 = STATE_VARIABLE_OutArgs_43_43;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_11;
    MR_Word conv0_STATE_VARIABLE_ProcInfo_32;

    transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_11, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ProcInfo_32);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_11));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_32));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lco__is_grounding_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word VarToAddr_11,
  MR_Word InstMap0_12,
  MR_Word GoalInfo_13,
  MR_Word GoalExpr0_14,
  MR_Word * GoalExpr_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * STATE_VARIABLE_ProcInfo_24)
{
  {
    MR_bool succeeded;
    MR_Word InstMap1_18;
    MR_Word GroundingVarToAddr_19;
    MR_Word Var_25;
    MR_Word Var_26;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (GoalExpr0_14));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (GoalInfo_13));
    }
    hlds__goal_util__update_instmap_3_p_0(Var_25, InstMap0_12, &InstMap1_18);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (InstMap0_12));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (InstMap1_18));
    }
    mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), Var_26, VarToAddr_11, &GroundingVarToAddr_19);
    if ((GroundingVarToAddr_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *GoalExpr_15 = GoalExpr0_14;
      *Changed_16 = (MR_Integer) 0;
      *STATE_VARIABLE_ProcInfo_24 = STATE_VARIABLE_ProcInfo_0_23;
    }
    else
    {
      MR_Word StoreGoals_22;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Box conv2_STATE_VARIABLE_ProcInfo_24;

      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (ModuleInfo_10));
        MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (InstMap1_18));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_27, GroundingVarToAddr_19, &StoreGoals_22, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_23)), &conv2_STATE_VARIABLE_ProcInfo_24);
      *STATE_VARIABLE_ProcInfo_24 = ((MR_Word) (conv2_STATE_VARIABLE_ProcInfo_24));
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (StoreGoals_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_15 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_30));
      }
      *Changed_16 = (MR_Integer) 1;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1471__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco__make_addr_vars_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Integer NextOutArgNum_6,
  MR_Word ModuleInfo_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_22;

        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__lco__make_addr_vars_12_p_0_1));
          MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (HeadVar__5_5));
          MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_22, (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "AddrOutArgs != []");
        *STATE_VARIABLE_VarTypes_12 = STATE_VARIABLE_VarTypes_0_11;
        *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word Mode0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Modes0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word HeadVar_62;
        MR_Word HeadVars_63;
        MR_Word Mode_64;
        MR_Word Modes_65;
        MR_Word HeadVarType_72;
        MR_Word TopFunctorMode_73;

        hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_11, Var_122, &HeadVarType_72);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_7, Mode0_60, HeadVarType_72, &TopFunctorMode_73);
        switch (TopFunctorMode_73) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              HeadVar_62 = Var_122;
              Mode_64 = Mode0_60;
              transform_hlds__lco__make_addr_vars_12_p_0(Var_121, Modes0_61, &HeadVars_63, &Modes_65, HeadVar__5_5, NextOutArgNum_6, ModuleInfo_7, HeadVar__8_8, STATE_VARIABLE_VarSet_0_9, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_VarTypes_0_11, STATE_VARIABLE_VarTypes_12);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeFieldId_75;
              MR_Word STATE_VARIABLE_AddrOutArgs_94_94;
              MR_Word AddrOutArg_74;
              MR_Integer Var_120;

              succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                AddrOutArg_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
                STATE_VARIABLE_AddrOutArgs_94_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
                Var_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AddrOutArg_74, (MR_Integer) 0))));
                MaybeFieldId_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AddrOutArg_74, (MR_Integer) 1))));
                succeeded = (NextOutArgNum_6 == Var_120);
              }
              if (succeeded)
              {
                MR_String Name_76;
                MR_String AddrName_77;
                MR_Word OldType_79;
                MR_Word VarToAddrTail_85;
                MR_Word VarToAddrHead_86;
                MR_Word STATE_VARIABLE_VarSet_96_96;
                MR_Word STATE_VARIABLE_VarTypes_105_105;
                MR_Integer Var_106;
                MR_Word Var_110;

                mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_9, Var_122, &Name_76);
                AddrName_77 = mercury__string__f_43_43_2_f_0((MR_String) "AddrOf", Name_76);
                mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AddrName_77, &HeadVar_62, STATE_VARIABLE_VarSet_0_9, &STATE_VARIABLE_VarSet_96_96);
                hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_11, Var_122, &OldType_79);
                if ((MaybeFieldId_75 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_104;

                  Var_104 = transform_hlds__lco__make_ref_type_1_f_0(OldType_79);
                  hlds__vartypes__add_var_type_4_p_0(HeadVar_62, Var_104, STATE_VARIABLE_VarTypes_0_11, &STATE_VARIABLE_VarTypes_105_105);
                  Mode_64 = parse_tree__prog_mode__in_mode_0_f_0();
                }
                else
                {
                  MR_Word AddrVarType_80;
                  MR_Word ConsId_81;
                  MR_Integer ArgNum_82;
                  MR_Word BoundInst_83;
                  MR_Word InitialInst_84;
                  MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldId_75, (MR_Integer) 0))));
                  MR_Word Var_101;
                  MR_Word Var_103;

                  AddrVarType_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_97, (MR_Integer) 0))));
                  ConsId_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_97, (MR_Integer) 1))));
                  ArgNum_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_97, (MR_Integer) 2))));
                  hlds__vartypes__add_var_type_4_p_0(HeadVar_62, AddrVarType_80, STATE_VARIABLE_VarTypes_0_11, &STATE_VARIABLE_VarTypes_105_105);
                  BoundInst_83 = transform_hlds__lco__bound_inst_with_free_arg_2_f_0(ConsId_81, ArgNum_82);
                  {
                    Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (BoundInst_83));
                    MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    InitialInst_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), InitialInst_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), InitialInst_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), InitialInst_84, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), InitialInst_84, 3) = ((MR_Box) (Var_101));
                  }
                  Var_103 = parse_tree__prog_mode__ground_inst_0_f_0();
                  {
                    Mode_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Mode_64, 0) = ((MR_Box) (InitialInst_84));
                    MR_hl_field(MR_mktag(0), Mode_64, 1) = ((MR_Box) (Var_103));
                  }
                }
                Var_106 = (MR_Integer) ((MR_Unsigned) NextOutArgNum_6 + (MR_Unsigned) 1);
                transform_hlds__lco__make_addr_vars_12_p_0(Var_121, Modes0_61, &HeadVars_63, &Modes_65, STATE_VARIABLE_AddrOutArgs_94_94, Var_106, ModuleInfo_7, &VarToAddrTail_85, STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_VarTypes_105_105, STATE_VARIABLE_VarTypes_12);
                {
                  Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (HeadVar_62));
                  MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (MaybeFieldId_75));
                }
                {
                  VarToAddrHead_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), VarToAddrHead_86, 0) = ((MR_Box) (Var_122));
                  MR_hl_field(MR_mktag(0), VarToAddrHead_86, 1) = ((MR_Box) (Var_110));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__8_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarToAddrHead_86));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarToAddrTail_85));
                }
              }
              else
              {
                MR_Integer Var_111;

                HeadVar_62 = Var_122;
                Mode_64 = Mode0_60;
                Var_111 = (MR_Integer) ((MR_Unsigned) NextOutArgNum_6 + (MR_Unsigned) 1);
                transform_hlds__lco__make_addr_vars_12_p_0(Var_121, Modes0_61, &HeadVars_63, &Modes_65, HeadVar__5_5, Var_111, ModuleInfo_7, HeadVar__8_8, STATE_VARIABLE_VarSet_0_9, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_VarTypes_0_11, STATE_VARIABLE_VarTypes_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/12", (MR_String) "top_unused");
              return;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_62));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVars_63));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_64));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_65));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__lco__bound_inst_with_free_arg_2_f_0(
  MR_Word ConsId_4,
  MR_Integer FreeArg_5)
{
  {
    MR_Word Inst_6;
    MR_Integer Arity_7;
    MR_Word ArgInsts0_8;
    MR_Word ArgInsts_9;
    MR_Word Var_10;
    MR_Word Var_11;

    Arity_7 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_4);
    Var_10 = parse_tree__prog_mode__ground_inst_0_f_0();
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_7, ((MR_Box) (Var_10)), &ArgInsts0_8);
    Var_11 = parse_tree__prog_mode__free_inst_0_f_0();
    mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts0_8, FreeArg_5, ((MR_Box) (Var_11)), &ArgInsts_9);
    {
      Inst_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Inst_6, 0) = ((MR_Box) (ConsId_4));
      MR_hl_field(MR_mktag(0), Inst_6, 1) = ((MR_Box) (ArgInsts_9));
    }
    return Inst_6;
  }
}

static MR_Word MR_CALL 
transform_hlds__lco__make_ref_type_1_f_0(
  MR_Word FieldType_3)
{
  {
    MR_Word PtrType_4;
    MR_Word RefTypeName_5;
    MR_Word Var_6;
    MR_Word Var_8;

    Var_6 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      RefTypeName_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RefTypeName_5, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), RefTypeName_5, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (FieldType_3));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      PtrType_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PtrType_4, 0) = ((MR_Box) (RefTypeName_5));
      MR_hl_field(MR_mktag(1), PtrType_4, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), PtrType_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return PtrType_4;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_process_proc_update_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_Word PredProcId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word NewProcInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_4, (MR_Integer) 0))));
    MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_4, (MR_Integer) 1))));
    MR_Word PredTable0_9;
    MR_Word PredInfo0_10;
    MR_Word Procs0_11;
    MR_Word Procs_12;
    MR_Word PredInfo_13;
    MR_Word PredTable_14;
    MR_Box conv0_PredInfo0_10;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_15, &PredTable0_9);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_9, ((MR_Box) (PredId_7)), &conv0_PredInfo0_10);
    PredInfo0_10 = ((MR_Word) (conv0_PredInfo0_10));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_10, &Procs0_11);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_8)), ((MR_Box) (NewProcInfo_5)), Procs0_11, &Procs_12);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_12, PredInfo0_10, &PredInfo_13);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_13)), PredTable0_9, &PredTable_14);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
  }
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ModuleInfo_33;

    transform_hlds__lco__lco_process_proc_variant_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ModuleInfo_33);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ModuleInfo_33));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ModuleInfo_16;

    transform_hlds__lco__lco_process_proc_update_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ModuleInfo_16);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_16));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_ModuleInfo_27;
    MR_Word conv2_STATE_VARIABLE_CurSCCVariants_29;
    MR_Word conv1_STATE_VARIABLE_CurSCCUpdates_31;
    MR_Word conv0_STATE_VARIABLE_Permitted_33;

    transform_hlds__lco__lco_proc_if_permitted_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_CurSCCVariants_29, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_CurSCCUpdates_31, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_Permitted_33);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_27));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_CurSCCVariants_29));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_CurSCCUpdates_31));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Permitted_33));
  }
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_VariantMap_0_21,
  MR_Word * STATE_VARIABLE_VariantMap_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool succeeded;
    MR_Word CurSCCVariantMap_10;
    MR_Word CurSCCUpdateMap_11;
    MR_Word Permitted_12;
    MR_Word CurSCCVariants_13;
    MR_Word CurSCCUpdates_14;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box conv7_STATE_VARIABLE_ModuleInfo_26_26;
    MR_Box conv6_CurSCCVariantMap_10;
    MR_Box conv5_CurSCCUpdateMap_11;
    MR_Box conv4_Permitted_12;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (STATE_VARIABLE_VariantMap_0_21));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (SCC_6));
    }
    Var_27 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco_scalar_common_1[0]));
    Var_28 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0));
    mercury__set__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lco_scalar_common_2[0]), (MR_Word) (&transform_hlds__lco_scalar_common_2[1]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0), Var_25, SCC_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_23)), &conv7_STATE_VARIABLE_ModuleInfo_26_26, ((MR_Box) (Var_27)), &conv6_CurSCCVariantMap_10, ((MR_Box) (Var_28)), &conv5_CurSCCUpdateMap_11, ((MR_Box) ((MR_Integer) 1)), &conv4_Permitted_12);
    STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_26_26));
    CurSCCVariantMap_10 = ((MR_Word) (conv6_CurSCCVariantMap_10));
    CurSCCUpdateMap_11 = ((MR_Word) (conv5_CurSCCUpdateMap_11));
    Permitted_12 = ((MR_Word) (conv4_Permitted_12));
    mercury__multi_map__to_flat_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), CurSCCVariantMap_10, &CurSCCVariants_13);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), CurSCCUpdateMap_11, &CurSCCUpdates_14);
    succeeded = (Permitted_12 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (CurSCCUpdates_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_ModuleInfo_39_39;
      MR_Word Var_40;
      MR_Box conv9_STATE_VARIABLE_ModuleInfo_39_39;
      MR_Box conv11_STATE_VARIABLE_ModuleInfo_24;

      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lco_scalar_common_2[8]), CurSCCUpdates_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_26_26)), &conv9_STATE_VARIABLE_ModuleInfo_39_39);
      STATE_VARIABLE_ModuleInfo_39_39 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_39_39));
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (CurSCCVariantMap_10));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_40, CurSCCVariants_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_39_39)), &conv11_STATE_VARIABLE_ModuleInfo_24);
      *STATE_VARIABLE_ModuleInfo_24 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_24));
    }
    else
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
    *STATE_VARIABLE_VariantMap_22 = STATE_VARIABLE_VariantMap_0_21;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_VariantMap_22;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_24;

    transform_hlds__lco__lco_scc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VariantMap_22, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_24);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VariantMap_22));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_24));
  }
}

void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_Word DepInfo_4;
    MR_Word SCCs_5;
    MR_Word STATE_VARIABLE_ModuleInfo_9_9;
    MR_Word Var_11;
    MR_Box conv3_Var_6;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_8;

    hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_9_9, &DepInfo_4);
    SCCs_5 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_4);
    Var_11 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco_scalar_common_1[0]));
    mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[1]), (MR_Word) (&transform_hlds__lco_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lco_scalar_common_2[7]), SCCs_5, ((MR_Box) (Var_11)), &conv3_Var_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_9_9)), &conv2_STATE_VARIABLE_ModuleInfo_8);
    *STATE_VARIABLE_ModuleInfo_8 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_8));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____allow_float_addr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____allow_float_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____field_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____field_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____lco_const_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____lco_const_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____lco_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____lco_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____proc_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____proc_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____store_target_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____store_target_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____var_to_target_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____var_to_target_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____variant_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____variant_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____variant_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____variant_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lco____Unify____variant_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lco____Compare____variant_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module transform_hlds.lco.
