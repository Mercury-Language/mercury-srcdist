/*
** Automatically generated from `lco.m'
** by the Mercury compiler,
** version rotd-2026-08-10
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.goal_vars.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_lookup.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_top_functor.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s {
  MR_Word transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14;
  MR_bool transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__FGTVar_46;
  jmp_buf transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__TypeInfo_120_120;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__FGTVarPair_48;
  MR_Word transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__Var_119;
  MR_Box transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__conv10_FGTVarPair_48;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0;

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0;

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_allow_float_addr_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0[2];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0[2];

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_field_id_0_0[3];

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_field_id_0_0[3];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1];

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_goal_and_init_instmap_0_0[2];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_goal_and_init_instmap_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_goal_and_init_instmap_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_goal_and_init_instmap_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_goal_and_init_instmap_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_goal_and_init_instmap_0[1];

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

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[5];

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[5];

static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0;

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_lco_is_permitted_on_scc_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0[2];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0[2];

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0;

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_proc_changed_0[2];

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

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_transforms_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_transforms_0_1[1];

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_transforms_0_1;

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_transforms_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_transforms_0_1[1];

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_transforms_0[2];

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_transforms_0[2];

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_transforms_0[2];

static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1917__1_2_p_0(
  MR_Word HeadVar__1_74,
  MR_Word * HeadVar__2_75);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1538__1_2_p_0(
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1330__1_2_p_0(
  MR_Word ConsId_23,
  MR_Word RHSConsId_46);

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1186__1_2_f_0(
  MR_Word AddrVarFieldIds_6,
  MR_Word LambdaHeadVar__1_17);

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1183__1_1_f_0(
  MR_Word LambdaHeadVar__1_14);

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__1024__1_2_p_0(
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__2_13);

static void MR_CALL 
transform_hlds__lco____Compare____variant_transforms_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_transforms_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
  MR_Word HeadVar__1_1,
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
transform_hlds__lco____Compare____goal_and_init_instmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__lco____Unify____goal_and_init_instmap_0_0(
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word InstMap0_8,
  MR_Word InstMap_9,
  MR_Word HeadVar__5_5);

static void MR_CALL 
transform_hlds__lco__make_store_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstMap_8,
  MR_Word HeadVar__3_3,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcInfo_32);

static void MR_CALL 
transform_hlds__lco__make_unification_args_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word GroundVar_11,
  MR_Integer TargetArgNum_12,
  MR_Integer CurArgNum_13,
  MR_Word ArgTypes_14,
  MR_Word * ArgVars_15,
  MR_Word * ArgModes_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Transforms_12,
  MR_Word VariantMap_13,
  MR_Word VarToAddr_14,
  MR_Word InstMap0_15,
  MR_Word Case0_16,
  MR_Word * Case_17,
  MR_Word * Changed_18,
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25);

static void MR_CALL 
transform_hlds__lco__update_variant_pred_info_4_p_0(
  MR_Word VariantMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_rev_conj_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Transforms0_2,
  MR_Word VariantMap_3,
  MR_Word VarToAddr_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Conjuncts_0_6,
  MR_Word * STATE_VARIABLE_Conjuncts_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Transforms_12,
  MR_Word VariantMap_13,
  MR_Word VarToAddr_14,
  MR_Word InstMap0_15,
  MR_Word Goal0_16,
  MR_Word * Goal_17,
  MR_Word * Changed_18,
  MR_Word STATE_VARIABLE_ProcInfo_0_77,
  MR_Word * STATE_VARIABLE_ProcInfo_78);

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
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Transforms_14,
  MR_Word VariantMap_15,
  MR_Word VarToAddr_16,
  MR_Word InstMap0_17,
  MR_Word GoalExpr0_18,
  MR_Word * GoalExpr_19,
  MR_Word GoalInfo0_20,
  MR_Word * GoalInfo_21,
  MR_Word * Changed_22,
  MR_Word STATE_VARIABLE_ProcInfo_0_61,
  MR_Word * STATE_VARIABLE_ProcInfo_62);

static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_6_p_0(
  MR_Word GroundingVarToAddr_7,
  MR_Integer OutArgNum_8,
  MR_Word OutArgVars_9,
  MR_Word * Subst_10,
  MR_Word * VariantArgVars_11,
  MR_Word * VariantArgs_12);

static void MR_CALL 
transform_hlds__lco__rev_conj_and_attach_init_instmaps_4_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevGoalIMs_0_3,
  MR_Word * STATE_VARIABLE_RevGoalIMs_4);

static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__lco__make_addr_vars_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer NextOutArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10);

static void MR_CALL 
transform_hlds__lco__store_updated_procs_in_module_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14);

static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
  MR_Word ConstInfo_9,
  MR_Word Subst_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_AddrVarFieldIds_0_60,
  MR_Word * STATE_VARIABLE_AddrVarFieldIds_61,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
transform_hlds__lco__update_construct_args_15_p_0(
  MR_Word Subst_1,
  MR_Word HighLevelData_2,
  MR_Word VarType_3,
  MR_Word IsDummyType_4,
  MR_Word ConsId_5,
  MR_Integer ArgNum_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_InstMapDelta_0_10,
  MR_Word * STATE_VARIABLE_InstMapDelta_11,
  MR_Word STATE_VARIABLE_AddrFieldIds_0_12,
  MR_Word * STATE_VARIABLE_AddrFieldIds_13,
  MR_Word STATE_VARIABLE_VarTable_0_14,
  MR_Word * STATE_VARIABLE_VarTable_15);

static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
  MR_Word Bag_3,
  MR_Word Var_4);

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_6_p_0(
  MR_Word Info_7,
  MR_Word ConstInfo_8,
  MR_Word DelayForVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_UnifyInputVars_0_45,
  MR_Word * STATE_VARIABLE_UnifyInputVars_46);

static MR_bool MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_101_112_116_97_98_108_101_95_99_111_110_115_116_114_117_99_116_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word DelayForVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_UnifyInputVars_0_45,
  MR_Word * STATE_VARIABLE_UnifyInputVars_46);

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_modes_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

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
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65,
  MR_Word ConstInfo_15);

static MR_Box MR_CALL 
transform_hlds__lco__ensure_variant_exists_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word AddrOutArgs_10,
  MR_Word * VariantPredProcId_11,
  MR_Word * VariantSymName_12,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AddrArgNums_6,
  MR_Word * VariantId_7);

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
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

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

static void MR_CALL 
transform_hlds__lco__classify_proc_call_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
  MR_Word Goal_2);

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
  MR_Word VariantMap_7,
  MR_Word * VariantMap_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22);

static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
  MR_Word HeadVar__1_1);

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
transform_hlds__lco____Unify____goal_and_init_instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____goal_and_init_instmap_0_0_10001(
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

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_transforms_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lco____Compare____variant_transforms_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__lco_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[12][3];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_4[2][8];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_5[1][14];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_6[2][6];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_7[1][7];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_8[7][5];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_9[1][11];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_10[1][12];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_11[2][9];

static /* final */ const MR_Box transform_hlds__lco_scalar_common_12[2][13];




static /* final */ const MR_Box transform_hlds__lco_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_2[6]))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__lco_scalar_common_3[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_2[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__lco_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__lco__lco_modulo_constructors_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__lco__ensure_variant_exists_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__lco_scalar_common_8[6])),
    ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "lcmc")) },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_4[2][8] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_5[1][14] = {
  /* row   0 */
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

static /* final */ const MR_Box transform_hlds__lco_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_field_id_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_8[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_9[1][11] = {
  /* row   0 */
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

static /* final */ const MR_Box transform_hlds__lco_scalar_common_10[1][12] = {
  /* row   0 */
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

static /* final */ const MR_Box transform_hlds__lco_scalar_common_11[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0)),
    ((MR_Box) (&transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__lco__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
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
};

static /* final */ const MR_Box transform_hlds__lco_scalar_common_12[2][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_transforms_0)),
    ((MR_Box) (&transform_hlds__lco__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0)),
    ((MR_Box) (&transform_hlds__lco__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_transforms_0)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0) }
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lco__list__pti_list_1__plain_transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__lco__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0)
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
  { (MR_PseudoTypeInfo) (&transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0) }
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_0 = {
  (MR_String) "do_not_allow_float_addr",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_allow_float_addr_0_1 = {
  (MR_String) "allow_float_addr",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_allow_float_addr_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____allow_float_addr_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____allow_float_addr_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "allow_float_addr",
  { transform_hlds__lco__transform_hlds__lco__enum_name_ordered_allow_float_addr_0 },
  { transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_allow_float_addr_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_allow_float_addr_0,

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

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0 };

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_field_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_field_id_0_0 };

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____field_id_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____field_id_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "field_id",
  { transform_hlds__lco__transform_hlds__lco__du_name_ordered_field_id_0 },
  { transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_field_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_field_id_0,

};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_goal_and_init_instmap_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_goal_and_init_instmap_0_0 = {
  (MR_String) "goal_and_init_instmap",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lco__transform_hlds__lco__field_types_goal_and_init_instmap_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_goal_and_init_instmap_0_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_goal_and_init_instmap_0_0 };

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_goal_and_init_instmap_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_goal_and_init_instmap_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_goal_and_init_instmap_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_goal_and_init_instmap_0_0 };

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_goal_and_init_instmap_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_goal_and_init_instmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____goal_and_init_instmap_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____goal_and_init_instmap_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "goal_and_init_instmap",
  { transform_hlds__lco__transform_hlds__lco__du_name_ordered_goal_and_init_instmap_0 },
  { transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_goal_and_init_instmap_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_goal_and_init_instmap_0,

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
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0 };

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_const_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_const_info_0_0 };

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____lco_const_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_const_info_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_const_info",
  { transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_const_info_0 },
  { transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_const_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_const_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_lco_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0)
};

static const MR_ConstString transform_hlds__lco__transform_hlds__lco__field_names_lco_info_0_0[5] = {
  (MR_String) "lco_module_info",
  (MR_String) "lco_cur_scc_variants",
  (MR_String) "lco_var_table",
  (MR_String) "lco_permitted",
  (MR_String) "lco_changed"
};

static const MR_DuArgLocn transform_hlds__lco__transform_hlds__lco__field_locns_lco_info_0_0[5] = {
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
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0 = {
  (MR_String) "lco_info",
  INT16_C(5),
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

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0 };

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_lco_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_lco_info_0_0 };

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____lco_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_info_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_info",
  { transform_hlds__lco__transform_hlds__lco__du_name_ordered_lco_info_0 },
  { transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_lco_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_0 = {
  (MR_String) "lco_is_not_permitted_on_scc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_lco_is_permitted_on_scc_0_1 = {
  (MR_String) "lco_is_permitted_on_scc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_lco_is_permitted_on_scc_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "lco_is_permitted_on_scc",
  { transform_hlds__lco__transform_hlds__lco__enum_name_ordered_lco_is_permitted_on_scc_0 },
  { transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_lco_is_permitted_on_scc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_lco_is_permitted_on_scc_0,

};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_0 = {
  (MR_String) "proc_not_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__lco__transform_hlds__lco__enum_functor_desc_proc_changed_0_1 = {
  (MR_String) "proc_changed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_proc_changed_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__lco____Unify____proc_changed_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____proc_changed_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "proc_changed",
  { transform_hlds__lco__transform_hlds__lco__enum_name_ordered_proc_changed_0 },
  { transform_hlds__lco__transform_hlds__lco__enum_ordinal_ordered_proc_changed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_proc_changed_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__maybe__ti_maybe_1transform_hlds__lco__type_ctor_info_field_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0) }
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

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0 };

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_store_target_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_store_target_0_0 };

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____store_target_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____store_target_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "store_target",
  { transform_hlds__lco__transform_hlds__lco__du_name_ordered_store_target_0 },
  { transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_store_target_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_store_target_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__lco__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_var_to_target_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__lco____Unify____var_to_target_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____var_to_target_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "var_to_target",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__lco__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__lco__type_ctor_info_store_target_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0 };

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_arg_0_0 };

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_arg_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_arg_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_arg",
  { transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_arg_0 },
  { transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_arg_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_arg_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0) }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_id_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__lco__list__ti_list_1transform_hlds__lco__type_ctor_info_variant_arg_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
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

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0 };

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_id_0_0 };

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_id_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_id_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_id",
  { transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_id_0 },
  { transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_id_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__lco____Unify____variant_map_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_map_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__lco__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1transform_hlds__lco__type_ctor_info_variant_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_transforms_0_0 = {
  (MR_String) "groundings_only",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lco__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&transform_hlds__lco__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__lco__transform_hlds__lco__field_types_variant_transforms_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__lco__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_transforms_0_1 = {
  (MR_String) "groundings_and_lco_calls",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__lco__transform_hlds__lco__field_types_variant_transforms_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_transforms_0_0[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_transforms_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_transforms_0_1[1] = { &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_transforms_0_1 };

static const MR_DuPtagLayout transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_transforms_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_transforms_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lco__transform_hlds__lco__du_stag_ordered_variant_transforms_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_transforms_0[2] = {
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_transforms_0_1,
  &transform_hlds__lco__transform_hlds__lco__du_functor_desc_variant_transforms_0_0
};

static const MR_Integer transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_transforms_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_transforms_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lco____Unify____variant_transforms_0_0_10001)),
  ((MR_Box) (transform_hlds__lco____Compare____variant_transforms_0_0_10001)),
  (MR_String) "transform_hlds.lco",
  (MR_String) "variant_transforms",
  { transform_hlds__lco__transform_hlds__lco__du_name_ordered_variant_transforms_0 },
  { transform_hlds__lco__transform_hlds__lco__du_ptag_ordered_variant_transforms_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__lco__transform_hlds__lco__functor_number_map_variant_transforms_0,

};

static void MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1917__1_2_p_0(
  MR_Word HeadVar__1_74,
  MR_Word * HeadVar__2_75)
{
  MR_Box conv0_HeadVar__2_75;

  mercury__pair__fst_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0), HeadVar__1_74, &conv0_HeadVar__2_75);
  *HeadVar__2_75 = ((MR_Word) (conv0_HeadVar__2_75));
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1538__1_2_p_0(
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__2_20)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[7]), ((MR_Box) (HeadVar__7_7)), ((MR_Box) (HeadVar__2_20)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_construct__1330__1_2_p_0(
  MR_Word ConsId_23,
  MR_Word RHSConsId_46)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_23, RHSConsId_46);
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1186__1_2_f_0(
  MR_Word AddrVarFieldIds_6,
  MR_Word LambdaHeadVar__1_17)
{
  MR_Word LambdaHeadVar__2_18;
  MR_Word FieldId_13;
  MR_Word Var_19;
  MR_Integer Pos_23 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_17, 0))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_17, 1))));
  MR_Box conv0_FieldId_13;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0), AddrVarFieldIds_6, ((MR_Box) (Var_24)), &conv0_FieldId_13);
  FieldId_13 = ((MR_Word) (conv0_FieldId_13));
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (FieldId_13));
  }
  {
    LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_18, 0) = ((MR_Box) (Pos_23));
    MR_hl_field(0, LambdaHeadVar__2_18, 1) = ((MR_Box) (Var_19));
  }
  return LambdaHeadVar__2_18;
}

static MR_Word MR_CALL 
transform_hlds__lco__IntroducedFrom__func__make_variant_args__1183__1_1_f_0(
  MR_Word LambdaHeadVar__1_14)
{
  MR_Word LambdaHeadVar__2_15;
  MR_Integer Pos_21 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_14, 0))));

  {
    LambdaHeadVar__2_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_15, 0) = ((MR_Box) (Pos_21));
    MR_hl_field(0, LambdaHeadVar__2_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return LambdaHeadVar__2_15;
}

static MR_bool MR_CALL 
transform_hlds__lco__IntroducedFrom__pred__update_call_args__1024__1_2_p_0(
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__2_13)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[6]), ((MR_Box) (HeadVar__5_5)), ((MR_Box) (HeadVar__2_13)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_transforms_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_transforms_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__lco_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
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
        mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__lco_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[9]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__lco_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
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

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_25 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_26 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_27 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_28 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_27 < Var_28);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_27 > Var_28);
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

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&transform_hlds__lco_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 2)) & (MR_Integer) 7);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) >> 2)) & (MR_Integer) 7);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) & (MR_Integer) 1);
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

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 2)) & (MR_Integer) 7);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 2)) & (MR_Integer) 7);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 1);

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

static void MR_CALL 
transform_hlds__lco____Compare____goal_and_init_instmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__instmap____Compare____instmap_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____goal_and_init_instmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__instmap____Unify____instmap_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
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

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));

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

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__lco__is_grounding_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word InstMap0_8,
  MR_Word InstMap_9,
  MR_Word HeadVar__5_5)
{
  MR_bool succeeded;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, 0))));
  MR_Word Type_12;
  MR_Word Inst0_13;
  MR_Word Inst_14;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_7, Var_10, &Type_12);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_8, Var_10, &Inst0_13);
  succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_6, Type_12, Inst0_13);
  succeeded = !(succeeded);
  if (succeeded)
  {
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_9);
    if (succeeded)
    {
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_9, Var_10, &Inst_14);
      succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_6, Type_12, Inst_14);
    }
  }
  return succeeded;
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
  MR_Word GroundVar_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word StoreTarget_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word AddrVar_13 = ((MR_Word) ((MR_hl_field(0, StoreTarget_10, 0))));
  MR_Word MaybeFieldId_14 = ((MR_Word) ((MR_hl_field(0, StoreTarget_10, 1))));

  if ((MaybeFieldId_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_43;
    MR_Word Var_44;

    Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (GroundVar_9));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (AddrVar_13));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_44));
    }
    Var_38 = hlds__instmap__instmap_delta_bind_vars_1_f_0((MR_Word) ((MR_Unsigned) 0U));
    Var_43 = mercury__term_context__dummy_context_0_f_0();
    hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_7, (MR_Integer) 0, Var_34, (MR_String) "store_at_ref_impure", (MR_Word) ((MR_Unsigned) 0U), Var_37, Var_38, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Var_43, Goal_11);
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
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, MaybeFieldId_14, 0))));
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_60;

    AddrVarType_15 = ((MR_Word) ((MR_hl_field(0, Var_47, 0))));
    ConsId_16 = ((MR_Word) ((MR_hl_field(0, Var_47, 1))));
    ArgNum_17 = ((MR_Integer) ((MR_hl_field(0, Var_47, 2))));
    hlds__type_util__get_cons_id_arg_types_4_p_0(ModuleInfo_7, AddrVarType_15, ConsId_16, &ArgTypes_18);
    transform_hlds__lco__make_unification_args_9_p_0(ModuleInfo_7, GroundVar_9, ArgNum_17, (MR_Integer) 1, ArgTypes_18, &ArgVars_19, &ArgModes_20, STATE_VARIABLE_ProcInfo_0_31, STATE_VARIABLE_ProcInfo_32);
    {
      RHS_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHS_21, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(1, RHS_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHS_21, 2) = ((MR_Box) (ArgVars_19));
    }
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, AddrVar_13, &AddrVarInst0_22);
    hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_7, AddrVarInst0_22, &AddrVarInst_23);
    Var_51 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_52 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_53 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_24, 0) = ((MR_Box) (AddrVarInst_23));
      MR_hl_field(0, UnifyMode_24, 1) = ((MR_Box) (Var_51));
      MR_hl_field(0, UnifyMode_24, 2) = ((MR_Box) (Var_52));
      MR_hl_field(0, UnifyMode_24, 3) = ((MR_Box) (Var_53));
    }
    {
      Unification_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Unification_25, 0) = ((MR_Box) (AddrVar_13));
      MR_hl_field(1, Unification_25, 1) = ((MR_Box) (ConsId_16));
      MR_hl_field(1, Unification_25, 2) = ((MR_Box) (ArgVars_19));
      MR_hl_field(1, Unification_25, 3) = ((MR_Box) (ArgModes_20));
      MR_hl_field(1, Unification_25, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    {
      GoalExpr_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalExpr_27, 0) = ((MR_Box) (AddrVar_13));
      MR_hl_field(1, GoalExpr_27, 1) = ((MR_Box) (RHS_21));
      MR_hl_field(1, GoalExpr_27, 2) = ((MR_Box) (UnifyMode_24));
      MR_hl_field(1, GoalExpr_27, 3) = ((MR_Box) (Unification_25));
      MR_hl_field(1, GoalExpr_27, 4) = ((MR_Box) (&transform_hlds__lco_scalar_common_1[10]));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_28);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo0_28, &GoalInfo1_29);
    Var_60 = hlds__instmap__instmap_delta_bind_var_1_f_0(AddrVar_13);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Var_60, GoalInfo1_29, &GoalInfo_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_27));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_30));
    }
  }
}

static void MR_CALL 
transform_hlds__lco__make_unification_args_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word GroundVar_11,
  MR_Integer TargetArgNum_12,
  MR_Integer CurArgNum_13,
  MR_Word ArgTypes_14,
  MR_Word * ArgVars_15,
  MR_Word * ArgModes_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25)
{
  MR_bool succeeded;

  if ((ArgTypes_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ArgVars_15 = (MR_Word) ((MR_Unsigned) 0U);
    *ArgModes_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ProcInfo_25 = STATE_VARIABLE_ProcInfo_0_24;
  }
  else
  {
    MR_Word ArgType_18 = ((MR_Word) ((MR_hl_field(1, ArgTypes_14, 0))));
    MR_Word ArgTypesTail_19 = ((MR_Word) ((MR_hl_field(1, ArgTypes_14, 1))));
    MR_Word ArgVarsTail_20;
    MR_Word ArgModesTail_21;
    MR_Word Var_22;
    MR_Word ArgMode_23;
    MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) CurArgNum_13 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_ProcInfo_1_27;

    transform_hlds__lco__make_unification_args_9_p_0(ModuleInfo_10, GroundVar_11, TargetArgNum_12, Var_26, ArgTypesTail_19, &ArgVarsTail_20, &ArgModesTail_21, STATE_VARIABLE_ProcInfo_0_24, &STATE_VARIABLE_ProcInfo_1_27);
    succeeded = (CurArgNum_13 == TargetArgNum_12);
    if (succeeded)
    {
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      Var_22 = GroundVar_11;
      Var_30 = parse_tree__prog_mode__free_inst_0_f_0();
      Var_31 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_32 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_33 = parse_tree__prog_mode__ground_inst_0_f_0();
      {
        ArgMode_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgMode_23, 0) = ((MR_Box) (Var_30));
        MR_hl_field(0, ArgMode_23, 1) = ((MR_Box) (Var_31));
        MR_hl_field(0, ArgMode_23, 2) = ((MR_Box) (Var_32));
        MR_hl_field(0, ArgMode_23, 3) = ((MR_Box) (Var_33));
      }
      *STATE_VARIABLE_ProcInfo_25 = STATE_VARIABLE_ProcInfo_1_27;
    }
    else
    {
      MR_Word ArgTypeIsDummy_29;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;

      ArgTypeIsDummy_29 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_10, ArgType_18);
      hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", ArgType_18, ArgTypeIsDummy_29, &Var_22, STATE_VARIABLE_ProcInfo_1_27, STATE_VARIABLE_ProcInfo_25);
      Var_35 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_36 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_37 = parse_tree__prog_mode__free_inst_0_f_0();
      Var_38 = parse_tree__prog_mode__ground_inst_0_f_0();
      {
        ArgMode_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgMode_23, 0) = ((MR_Box) (Var_35));
        MR_hl_field(0, ArgMode_23, 1) = ((MR_Box) (Var_36));
        MR_hl_field(0, ArgMode_23, 2) = ((MR_Box) (Var_37));
        MR_hl_field(0, ArgMode_23, 3) = ((MR_Box) (Var_38));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ArgVars_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgVarsTail_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ArgModes_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArgMode_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgModesTail_21));
    }
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_case_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Transforms_12,
  MR_Word VariantMap_13,
  MR_Word VarToAddr_14,
  MR_Word InstMap0_15,
  MR_Word Case0_16,
  MR_Word * Case_17,
  MR_Word * Changed_18,
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25)
{
  MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(0, Case0_16, 0))));
  MR_Word OtherConsIds_21 = ((MR_Word) ((MR_hl_field(0, Case0_16, 1))));
  MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(0, Case0_16, 2))));
  MR_Word Goal_23;

  transform_hlds__lco__lco_transform_variant_goal_10_p_0(ModuleInfo_11, Transforms_12, VariantMap_13, VarToAddr_14, InstMap0_15, Goal0_22, &Goal_23, Changed_18, STATE_VARIABLE_ProcInfo_0_24, STATE_VARIABLE_ProcInfo_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_23));
  }
}

static void MR_CALL 
transform_hlds__lco__update_variant_pred_info_4_p_0(
  MR_Word VariantMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_Word PredProcId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word VariantId_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word AddrOutArgs_11 = ((MR_Word) ((MR_hl_field(0, VariantId_7, 0))));
  MR_Word VariantPredProcId_12 = ((MR_Word) ((MR_hl_field(0, VariantId_7, 1))));
  MR_Word VariantPredId_14 = ((MR_Word) ((MR_hl_field(0, VariantPredProcId_12, 0))));
  MR_Integer VariantProcId_15 = ((MR_Integer) ((MR_hl_field(0, VariantPredProcId_12, 1))));
  MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, 0))));
  MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, 1))));
  MR_Word ProcInfo_19;
  MR_Word VariantProcInfo_20;
  MR_Word HeadVars_21;
  MR_Word VarTable_22;
  MR_Word ArgTypes_23;
  MR_Word TVarSet_25;
  MR_Word ExistQVars_26;
  MR_Word VariantProcs_28;
  MR_Word STATE_VARIABLE_ModuleInfo_1_37;
  MR_Word STATE_VARIABLE_VariantPredInfo_1_38;
  MR_Word STATE_VARIABLE_VariantPredInfo_2_39;
  MR_Word STATE_VARIABLE_VariantPredInfo_3_40;
  MR_Word VarTable0_45;
  MR_Word HeadVars0_46;
  MR_Word ArgModes0_47;
  MR_Word HeadVars_48;
  MR_Word ArgModes_49;
  MR_Word VarToAddr_50;
  MR_Word VarTable_51;
  MR_Word InstMap0_52;
  MR_Word Goal0_53;
  MR_Word Goal_54;
  MR_Word Globals_59;
  MR_Word Target_60;
  MR_Word STATE_VARIABLE_VariantProcInfo_2_63;
  MR_Word STATE_VARIABLE_VariantProcInfo_3_64;
  MR_Word STATE_VARIABLE_VariantProcInfo_4_65;
  MR_Word Var_66;
  MR_Word STATE_VARIABLE_VariantProcInfo_5_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_VariantProcInfo_6_82;
  MR_Word STATE_VARIABLE_VariantProcInfo_7_84;
  MR_Word PredInfo_18;
  MR_Word Changed_55;
  MR_Word _ArgTypes0_27;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_16, ProcId_17, &PredInfo_18, &ProcInfo_19);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_19, &VarTable0_45);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_19, &HeadVars0_46);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_19, &ArgModes0_47);
  transform_hlds__lco__make_addr_vars_10_p_0(STATE_VARIABLE_ModuleInfo_0_29, (MR_Integer) 1, HeadVars0_46, &HeadVars_48, ArgModes0_47, &ArgModes_49, AddrOutArgs_11, &VarToAddr_50, VarTable0_45, &VarTable_51);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_48, ProcInfo_19, &STATE_VARIABLE_VariantProcInfo_2_63);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_49, STATE_VARIABLE_VariantProcInfo_2_63, &STATE_VARIABLE_VariantProcInfo_3_64);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_51, STATE_VARIABLE_VariantProcInfo_3_64, &STATE_VARIABLE_VariantProcInfo_4_65);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, ProcInfo_19, &InstMap0_52);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_19, &Goal0_53);
  Var_68 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_68));
  }
  transform_hlds__lco__lco_transform_variant_goal_10_p_0(STATE_VARIABLE_ModuleInfo_0_29, Var_66, VariantMap_5, VarToAddr_50, InstMap0_52, Goal0_53, &Goal_54, &Changed_55, STATE_VARIABLE_VariantProcInfo_4_65, &STATE_VARIABLE_VariantProcInfo_5_67);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_54, STATE_VARIABLE_VariantProcInfo_5_67, &STATE_VARIABLE_VariantProcInfo_6_82);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_VariantProcInfo_6_82, &STATE_VARIABLE_VariantProcInfo_7_84);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Globals_59);
  libs__globals__get_target_2_p_0(Globals_59, &Target_60);
  switch (Target_60) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        VariantProcInfo_20 = STATE_VARIABLE_VariantProcInfo_7_84;
        STATE_VARIABLE_ModuleInfo_1_37 = STATE_VARIABLE_ModuleInfo_0_29;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_VariantProcInfo_7_84, &VariantProcInfo_20, STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_1_37);
      break;
  }
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(VariantProcInfo_20, &HeadVars_21);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(VariantProcInfo_20, &VarTable_22);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_22, HeadVars_21, &ArgTypes_23);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_1_37, VariantPredId_14, &STATE_VARIABLE_VariantPredInfo_1_38);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_VariantPredInfo_1_38, &TVarSet_25, &ExistQVars_26, &_ArgTypes0_27);
  hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TVarSet_25, ExistQVars_26, ArgTypes_23, STATE_VARIABLE_VariantPredInfo_1_38, &STATE_VARIABLE_VariantPredInfo_2_39);
  VariantProcs_28 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (VariantProcId_15)), ((MR_Box) (VariantProcInfo_20)));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(VariantProcs_28, STATE_VARIABLE_VariantPredInfo_2_39, &STATE_VARIABLE_VariantPredInfo_3_40);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(VariantPredId_14, STATE_VARIABLE_VariantPredInfo_3_40, STATE_VARIABLE_ModuleInfo_1_37, STATE_VARIABLE_ModuleInfo_30);
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_rev_conj_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Transforms0_2,
  MR_Word VariantMap_3,
  MR_Word VarToAddr_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Conjuncts_0_6,
  MR_Word * STATE_VARIABLE_Conjuncts_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Integer) 0;
    *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_0_9;
    *STATE_VARIABLE_Conjuncts_7 = STATE_VARIABLE_Conjuncts_0_6;
  }
  else
  {
    MR_Word RevGoalIM0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word RevGoalIMs0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word RevGoal0_30 = ((MR_Word) ((MR_hl_field(0, RevGoalIM0_25, 0))));
    MR_Word RevGoalInitInstMap_31 = ((MR_Word) ((MR_hl_field(0, RevGoalIM0_25, 1))));
    MR_Word RevGoal_32;
    MR_Word HeadChanged_33;
    MR_Word RevGoalExpr_34;
    MR_Word RevGoalInfo_35;
    MR_Word Transforms1_36;
    MR_Word TailChanged_40;
    MR_Word STATE_VARIABLE_ProcInfo_1_46;
    MR_Word STATE_VARIABLE_Conjuncts_1_47;
    MR_Word RevGoalSubConjuncts_41;
    MR_Word Var_49;

    transform_hlds__lco__lco_transform_variant_goal_10_p_0(ModuleInfo_1, Transforms0_2, VariantMap_3, VarToAddr_4, RevGoalInitInstMap_31, RevGoal0_30, &RevGoal_32, &HeadChanged_33, STATE_VARIABLE_ProcInfo_0_9, &STATE_VARIABLE_ProcInfo_1_46);
    RevGoalExpr_34 = ((MR_Word) ((MR_hl_field(0, RevGoal_32, 0))));
    RevGoalInfo_35 = ((MR_Word) ((MR_hl_field(0, RevGoal_32, 1))));
    if ((Transforms0_2 == (MR_Word) ((MR_Unsigned) 0U)))
      Transforms1_36 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word NeededLaterVars0_37 = ((MR_Word) ((MR_hl_field(1, Transforms0_2, 0))));
      MR_Word NeededVars_38;
      MR_Word NeededLaterVars1_39;
      MR_Word InstMapVars_53;
      MR_Word NonLocals_54;

      hlds__instmap__instmap_vars_2_p_0(RevGoalInitInstMap_31, &InstMapVars_53);
      NonLocals_54 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(RevGoalInfo_35);
      NeededVars_38 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InstMapVars_53, NonLocals_54);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededVars_38, NeededLaterVars0_37, &NeededLaterVars1_39);
      {
        Transforms1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Transforms1_36, 0) = ((MR_Box) (NeededLaterVars1_39));
      }
    }
    transform_hlds__lco__lco_transform_variant_rev_conj_10_p_0(ModuleInfo_1, Transforms1_36, VariantMap_3, VarToAddr_4, RevGoalIMs0_26, STATE_VARIABLE_Conjuncts_0_6, &STATE_VARIABLE_Conjuncts_1_47, &TailChanged_40, STATE_VARIABLE_ProcInfo_1_46, STATE_VARIABLE_ProcInfo_10);
    *HeadVar__8_8 = mercury__bool__or_2_f_0(HeadChanged_33, TailChanged_40);
    succeeded = ((((MR_tag((MR_Word) RevGoalExpr_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RevGoalExpr_34, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_49 = ((MR_Unsigned) ((MR_hl_field(3, RevGoalExpr_34, 1))) & (MR_Integer) 1);
      RevGoalSubConjuncts_41 = ((MR_Word) ((MR_hl_field(3, RevGoalExpr_34, 2))));
      succeeded = (Var_49 == (MR_Integer) 0);
    }
    if (succeeded)
      mercury__cord__snoc_list_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoalSubConjuncts_41, STATE_VARIABLE_Conjuncts_1_47, STATE_VARIABLE_Conjuncts_7);
    else
      mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (RevGoal_32)), STATE_VARIABLE_Conjuncts_1_47, STATE_VARIABLE_Conjuncts_7);
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_Case_17;
  MR_Word conv12_Changed_18;
  MR_Word conv11_STATE_VARIABLE_ProcInfo_25;

  transform_hlds__lco__lco_transform_variant_case_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv13_Case_17, &conv12_Changed_18, ((MR_Word) (wrapper_arg_4)), &conv11_STATE_VARIABLE_ProcInfo_25);
  *wrapper_arg_2 = ((MR_Box) (conv13_Case_17));
  *wrapper_arg_3 = ((MR_Box) (conv12_Changed_18));
  *wrapper_arg_5 = ((MR_Box) (conv11_STATE_VARIABLE_ProcInfo_25));
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Goal_11;
  MR_Word conv7_STATE_VARIABLE_ProcInfo_32;

  transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv8_Goal_11, ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_ProcInfo_32);
  *wrapper_arg_2 = ((MR_Box) (conv8_Goal_11));
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_ProcInfo_32));
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__is_grounding_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Goal_17;
  MR_Word conv4_Changed_18;
  MR_Word conv3_STATE_VARIABLE_ProcInfo_78;

  transform_hlds__lco__lco_transform_variant_goal_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv5_Goal_17, &conv4_Changed_18, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_ProcInfo_78);
  *wrapper_arg_2 = ((MR_Box) (conv5_Goal_17));
  *wrapper_arg_3 = ((MR_Box) (conv4_Changed_18));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_ProcInfo_78));
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_11;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_32;

  transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_11, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ProcInfo_32);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_11));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_32));
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__is_grounding_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s * env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s * env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__FGTVarPair_48 = ((MR_Word) ((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__conv10_FGTVarPair_48));
  transform_hlds__lco__lco_transform_variant_goal_10_p_0_7(env_ptr);
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s * env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_49;

    (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__Var_119 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__FGTVarPair_48, 0))));
    (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__TypeInfo_120_120 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
    (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__TypeInfo_120_120, ((MR_Box) ((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__FGTVar_46)), ((MR_Box) ((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__Var_119)));
    if ((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded)
      transform_hlds__lco__lco_transform_variant_goal_10_p_0_6(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0_9(
  void * env_ptr_arg)
{
  struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s * env_ptr = (struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), &(env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__conv10_FGTVarPair_48, (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, transform_hlds__lco__lco_transform_variant_goal_10_p_0_8, env_ptr);
      (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_goal_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Transforms_12,
  MR_Word VariantMap_13,
  MR_Word VarToAddr_14,
  MR_Word InstMap0_15,
  MR_Word Goal0_16,
  MR_Word * Goal_17,
  MR_Word * Changed_18,
  MR_Word STATE_VARIABLE_ProcInfo_0_77,
  MR_Word * STATE_VARIABLE_ProcInfo_78)
{
  struct transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0_s env;

  (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14 = VarToAddr_14;
  {
    MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_16, 0))));
    MR_Word GoalInfo0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_16, 1))));
    MR_Word GoalExpr_26;
    MR_Word GoalInfo_27;

    switch (MR_tag((MR_Word) GoalExpr0_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          GoalExpr_26 = GoalExpr0_20;
          GoalInfo_27 = GoalInfo0_21;
          *Changed_18 = (MR_Integer) 0;
          *STATE_VARIABLE_ProcInfo_78 = STATE_VARIABLE_ProcInfo_0_77;
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(ModuleInfo_11, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, InstMap0_15, GoalInfo0_21, GoalExpr0_20, &GoalExpr_26, Changed_18, STATE_VARIABLE_ProcInfo_0_77, STATE_VARIABLE_ProcInfo_78);
          GoalInfo_27 = GoalInfo0_21;
        }
        break;
      case (MR_Integer) 2:
        transform_hlds__lco__lco_transform_variant_plain_call_12_p_0(ModuleInfo_11, Transforms_12, VariantMap_13, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, InstMap0_15, GoalExpr0_20, &GoalExpr_26, GoalInfo0_21, &GoalInfo_27, Changed_18, STATE_VARIABLE_ProcInfo_0_77, STATE_VARIABLE_ProcInfo_78);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_20, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstMap1_133;
              MR_Word VarTable_134;
              MR_Word GroundingVarToAddr_135;
              MR_Word Var_137;

              hlds__goal_util__apply_goal_info_instmap_delta_3_p_0(GoalInfo0_21, InstMap0_15, &InstMap1_133);
              hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_77, &VarTable_134);
              {
                Var_137 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_137, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[1]));
                MR_hl_field(0, Var_137, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_10_p_0_4));
                MR_hl_field(0, Var_137, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_137, 3) = ((MR_Box) (ModuleInfo_11));
                MR_hl_field(0, Var_137, 4) = ((MR_Box) (VarTable_134));
                MR_hl_field(0, Var_137, 5) = ((MR_Box) (InstMap0_15));
                MR_hl_field(0, Var_137, 6) = ((MR_Box) (InstMap1_133));
              }
              mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), Var_137, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, &GroundingVarToAddr_135);
              if ((GroundingVarToAddr_135 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                GoalExpr_26 = GoalExpr0_20;
                *Changed_18 = (MR_Integer) 0;
                *STATE_VARIABLE_ProcInfo_78 = STATE_VARIABLE_ProcInfo_0_77;
              }
              else
              {
                MR_Word StoreGoals_136;
                MR_Word Var_138;
                MR_Word Var_140;
                MR_Box conv9_STATE_VARIABLE_ProcInfo_78;

                {
                  Var_138 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_138, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_11[1]));
                  MR_hl_field(0, Var_138, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_10_p_0_5));
                  MR_hl_field(0, Var_138, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_138, 3) = ((MR_Box) (ModuleInfo_11));
                  MR_hl_field(0, Var_138, 4) = ((MR_Box) (InstMap1_133));
                }
                mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_138, GroundingVarToAddr_135, &StoreGoals_136, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_77)), &conv9_STATE_VARIABLE_ProcInfo_78);
                *STATE_VARIABLE_ProcInfo_78 = ((MR_Word) (conv9_STATE_VARIABLE_ProcInfo_78));
                {
                  Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_140, 0) = ((MR_Box) (Goal0_16));
                  MR_hl_field(1, Var_140, 1) = ((MR_Box) (StoreGoals_136));
                }
                {
                  GoalExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, GoalExpr_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, GoalExpr_26, 2) = ((MR_Box) (Var_140));
                }
                *Changed_18 = (MR_Integer) 1;
              }
              GoalInfo_27 = GoalInfo0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstMap1_121;
              MR_Word VarTable_122;
              MR_Word GroundingVarToAddr_123;
              MR_Word Var_125;

              hlds__goal_util__apply_goal_info_instmap_delta_3_p_0(GoalInfo0_21, InstMap0_15, &InstMap1_121);
              hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_77, &VarTable_122);
              {
                Var_125 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_125, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[1]));
                MR_hl_field(0, Var_125, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_10_p_0_1));
                MR_hl_field(0, Var_125, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_125, 3) = ((MR_Box) (ModuleInfo_11));
                MR_hl_field(0, Var_125, 4) = ((MR_Box) (VarTable_122));
                MR_hl_field(0, Var_125, 5) = ((MR_Box) (InstMap0_15));
                MR_hl_field(0, Var_125, 6) = ((MR_Box) (InstMap1_121));
              }
              mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), Var_125, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, &GroundingVarToAddr_123);
              if ((GroundingVarToAddr_123 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                GoalExpr_26 = GoalExpr0_20;
                *Changed_18 = (MR_Integer) 0;
                *STATE_VARIABLE_ProcInfo_78 = STATE_VARIABLE_ProcInfo_0_77;
              }
              else
              {
                MR_Word StoreGoals_124;
                MR_Word Var_126;
                MR_Word Var_128;
                MR_Box conv2_STATE_VARIABLE_ProcInfo_78;

                {
                  Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_126, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_11[1]));
                  MR_hl_field(0, Var_126, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_10_p_0_2));
                  MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_126, 3) = ((MR_Box) (ModuleInfo_11));
                  MR_hl_field(0, Var_126, 4) = ((MR_Box) (InstMap1_121));
                }
                mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_126, GroundingVarToAddr_123, &StoreGoals_124, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_77)), &conv2_STATE_VARIABLE_ProcInfo_78);
                *STATE_VARIABLE_ProcInfo_78 = ((MR_Word) (conv2_STATE_VARIABLE_ProcInfo_78));
                {
                  Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_128, 0) = ((MR_Box) (Goal0_16));
                  MR_hl_field(1, Var_128, 1) = ((MR_Box) (StoreGoals_124));
                }
                {
                  GoalExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, GoalExpr_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, GoalExpr_26, 2) = ((MR_Box) (Var_128));
                }
                *Changed_18 = (MR_Integer) 1;
              }
              GoalInfo_27 = GoalInfo0_21;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_22 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_20, 1))) & (MR_Integer) 1);
              MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, GoalExpr0_20, 1)));

              switch (ConjType_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/10", (MR_String) "parallel_conj");
                    return;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word RevGoalIMs0_24;
                    MR_Word GoalsCord_25;
                    MR_Word Var_80;
                    MR_Word Var_82;

                    transform_hlds__lco__rev_conj_and_attach_init_instmaps_4_p_0(InstMap0_15, Goals0_23, (MR_Word) ((MR_Unsigned) 0U), &RevGoalIMs0_24);
                    Var_80 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
                    transform_hlds__lco__lco_transform_variant_rev_conj_10_p_0(ModuleInfo_11, Transforms_12, VariantMap_13, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, RevGoalIMs0_24, Var_80, &GoalsCord_25, Changed_18, STATE_VARIABLE_ProcInfo_0_77, STATE_VARIABLE_ProcInfo_78);
                    Var_82 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalsCord_25);
                    {
                      GoalExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, GoalExpr_26, 1) = (MR_Box) ((MR_Unsigned) (ConjType_22));
                      MR_hl_field(3, GoalExpr_26, 2) = ((MR_Box) (Var_82));
                    }
                    GoalInfo_27 = GoalInfo0_21;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_28;
              MR_Word DisjsChanged_29;
              MR_Word Var_85;
              MR_Word Goals0_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
              MR_Box conv6_STATE_VARIABLE_ProcInfo_78;

              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_85, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_12[0]));
                MR_hl_field(0, Var_85, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_10_p_0_3));
                MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_85, 3) = ((MR_Box) (ModuleInfo_11));
                MR_hl_field(0, Var_85, 4) = ((MR_Box) (Transforms_12));
                MR_hl_field(0, Var_85, 5) = ((MR_Box) (VariantMap_13));
                MR_hl_field(0, Var_85, 6) = ((MR_Box) ((env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14));
                MR_hl_field(0, Var_85, 7) = ((MR_Box) (InstMap0_15));
              }
              mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_85, Goals0_100, &Goals_28, &DisjsChanged_29, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_77)), &conv6_STATE_VARIABLE_ProcInfo_78);
              *STATE_VARIABLE_ProcInfo_78 = ((MR_Word) (conv6_STATE_VARIABLE_ProcInfo_78));
              *Changed_18 = mercury__bool__or_list_1_f_0(DisjsChanged_29);
              {
                GoalExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_26, 1) = ((MR_Box) (Goals_28));
              }
              GoalInfo_27 = GoalInfo0_21;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
              MR_Word CanFail_31 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_20, 2))) & (MR_Integer) 1);
              MR_Word Cases0_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 3))));
              MR_Word Cases_33;
              MR_Word CasesChanged_34;
              MR_Word Var_87;
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, GoalExpr0_20, 2)));
              MR_Box conv14_STATE_VARIABLE_ProcInfo_78;

              {
                Var_87 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_87, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_12[1]));
                MR_hl_field(0, Var_87, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_goal_10_p_0_10));
                MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_87, 3) = ((MR_Box) (ModuleInfo_11));
                MR_hl_field(0, Var_87, 4) = ((MR_Box) (Transforms_12));
                MR_hl_field(0, Var_87, 5) = ((MR_Box) (VariantMap_13));
                MR_hl_field(0, Var_87, 6) = ((MR_Box) ((env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14));
                MR_hl_field(0, Var_87, 7) = ((MR_Box) (InstMap0_15));
              }
              mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_87, Cases0_32, &Cases_33, &CasesChanged_34, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_77)), &conv14_STATE_VARIABLE_ProcInfo_78);
              *STATE_VARIABLE_ProcInfo_78 = ((MR_Word) (conv14_STATE_VARIABLE_ProcInfo_78));
              *Changed_18 = mercury__bool__or_list_1_f_0(CasesChanged_34);
              {
                GoalExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_26, 1) = ((MR_Box) (Var_30));
                MR_hl_field(3, GoalExpr_26, 2) = (MR_Box) ((MR_Unsigned) (CanFail_31));
                MR_hl_field(3, GoalExpr_26, 3) = ((MR_Box) (Cases_33));
              }
              GoalInfo_27 = GoalInfo0_21;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
              MR_Word SubGoal0_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));
              MR_Word FGT_47;
              MR_Unsigned packed_word_1;

              (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_44, 0)))) == (MR_Integer) 6)));
              if ((env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded)
              {
                (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__FGTVar_46 = ((MR_Word) ((MR_hl_field(3, Reason_44, 1))));
                packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, Reason_44, 2)));
                FGT_47 = ((MR_Unsigned) ((MR_hl_field(3, Reason_44, 2))) & (MR_Integer) 3);
                switch (FGT_47) {
                  default:
                    (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded = MR_TRUE;
                    break;
                }
              }
              if ((env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded)
              {
                transform_hlds__lco__lco_transform_variant_goal_10_p_0_9(&env);
                if ((env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__succeeded)
                  transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0(ModuleInfo_11, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, InstMap0_15, GoalInfo0_21, GoalExpr0_20, &GoalExpr_26, Changed_18, STATE_VARIABLE_ProcInfo_0_77, STATE_VARIABLE_ProcInfo_78);
                else
                {
                  GoalExpr_26 = GoalExpr0_20;
                  *Changed_18 = (MR_Integer) 0;
                  *STATE_VARIABLE_ProcInfo_78 = STATE_VARIABLE_ProcInfo_0_77;
                }
              }
              else
              {
                MR_Word SubGoal_50;

                transform_hlds__lco__lco_transform_variant_goal_10_p_0(ModuleInfo_11, Transforms_12, VariantMap_13, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, InstMap0_15, SubGoal0_45, &SubGoal_50, Changed_18, STATE_VARIABLE_ProcInfo_0_77, STATE_VARIABLE_ProcInfo_78);
                {
                  GoalExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, GoalExpr_26, 1) = ((MR_Box) (Reason_44));
                  MR_hl_field(3, GoalExpr_26, 2) = ((MR_Box) (SubGoal_50));
                }
              }
              GoalInfo_27 = GoalInfo0_21;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 1))));
              MR_Word Cond_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));
              MR_Word Then0_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 3))));
              MR_Word Else0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 4))));
              MR_Word InstMap1_39;
              MR_Word Then_40;
              MR_Word ThenChanged_41;
              MR_Word Else_42;
              MR_Word ElseChanged_43;
              MR_Word STATE_VARIABLE_ProcInfo_4_89;

              hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond_36, InstMap0_15, &InstMap1_39);
              transform_hlds__lco__lco_transform_variant_goal_10_p_0(ModuleInfo_11, Transforms_12, VariantMap_13, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, InstMap1_39, Then0_37, &Then_40, &ThenChanged_41, STATE_VARIABLE_ProcInfo_0_77, &STATE_VARIABLE_ProcInfo_4_89);
              transform_hlds__lco__lco_transform_variant_goal_10_p_0(ModuleInfo_11, Transforms_12, VariantMap_13, (env).transform_hlds__lco__lco_transform_variant_goal_10_p_0_env_0__VarToAddr_14, InstMap0_15, Else0_38, &Else_42, &ElseChanged_43, STATE_VARIABLE_ProcInfo_4_89, STATE_VARIABLE_ProcInfo_78);
              *Changed_18 = mercury__bool__or_2_f_0(ThenChanged_41, ElseChanged_43);
              {
                GoalExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_26, 1) = ((MR_Box) (Vars_35));
                MR_hl_field(3, GoalExpr_26, 2) = ((MR_Box) (Cond_36));
                MR_hl_field(3, GoalExpr_26, 3) = ((MR_Box) (Then_40));
                MR_hl_field(3, GoalExpr_26, 4) = ((MR_Box) (Else_42));
              }
              GoalInfo_27 = GoalInfo0_21;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.lco_transform_variant_goal\'/10", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    switch (*Changed_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Goal_17 = Goal0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalInfoImpure_76;

          hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo_27, &GoalInfoImpure_76);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_17 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_26));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfoImpure_76));
          }
        }
        break;
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
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_11;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_32;

  transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_11, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ProcInfo_32);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_11));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_32));
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__is_grounding_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
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
  MR_Word STATE_VARIABLE_ProcInfo_0_24,
  MR_Word * STATE_VARIABLE_ProcInfo_25)
{
  MR_bool succeeded;
  MR_Word InstMap1_18;
  MR_Word VarTable_19;
  MR_Word GroundingVarToAddr_20;
  MR_Word Var_26;

  hlds__goal_util__apply_goal_info_instmap_delta_3_p_0(GoalInfo_13, InstMap0_12, &InstMap1_18);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_24, &VarTable_19);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[1]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (VarTable_19));
    MR_hl_field(0, Var_26, 5) = ((MR_Box) (InstMap0_12));
    MR_hl_field(0, Var_26, 6) = ((MR_Box) (InstMap1_18));
  }
  mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), Var_26, VarToAddr_11, &GroundingVarToAddr_20);
  if ((GroundingVarToAddr_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *GoalExpr_15 = GoalExpr0_14;
    *Changed_16 = (MR_Integer) 0;
    *STATE_VARIABLE_ProcInfo_25 = STATE_VARIABLE_ProcInfo_0_24;
  }
  else
  {
    MR_Word StoreGoals_23;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Box conv2_STATE_VARIABLE_ProcInfo_25;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_11[1]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_atomic_goal_9_p_0_2));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(0, Var_27, 4) = ((MR_Box) (InstMap1_18));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_27, GroundingVarToAddr_20, &StoreGoals_23, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_24)), &conv2_STATE_VARIABLE_ProcInfo_25);
    *STATE_VARIABLE_ProcInfo_25 = ((MR_Word) (conv2_STATE_VARIABLE_ProcInfo_25));
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (GoalExpr0_14));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (GoalInfo_13));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (StoreGoals_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_15 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, base, 2) = ((MR_Box) (Var_30));
    }
    *Changed_16 = (MR_Integer) 1;
  }
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_11;
  MR_Word conv1_STATE_VARIABLE_ProcInfo_32;

  transform_hlds__lco__make_store_goal_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_11, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ProcInfo_32);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ProcInfo_32));
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__is_grounding_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_75;

  transform_hlds__lco__IntroducedFrom__pred__lco_transform_variant_plain_call__1917__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_75);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_75));
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__is_grounding_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco__lco_transform_variant_plain_call_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Transforms_14,
  MR_Word VariantMap_15,
  MR_Word VarToAddr_16,
  MR_Word InstMap0_17,
  MR_Word GoalExpr0_18,
  MR_Word * GoalExpr_19,
  MR_Word GoalInfo0_20,
  MR_Word * GoalInfo_21,
  MR_Word * Changed_22,
  MR_Word STATE_VARIABLE_ProcInfo_0_61,
  MR_Word * STATE_VARIABLE_ProcInfo_62)
{
  MR_bool succeeded;
  MR_Word InstMap1_24;
  MR_Word VarTable_25;
  MR_Word GroundingVarToAddr_26;
  MR_Word Var_63;

  hlds__goal_util__apply_goal_info_instmap_delta_3_p_0(GoalInfo0_20, InstMap0_17, &InstMap1_24);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_61, &VarTable_25);
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[1]));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_1));
    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_63, 3) = ((MR_Box) (ModuleInfo_13));
    MR_hl_field(0, Var_63, 4) = ((MR_Box) (VarTable_25));
    MR_hl_field(0, Var_63, 5) = ((MR_Box) (InstMap0_17));
    MR_hl_field(0, Var_63, 6) = ((MR_Box) (InstMap1_24));
  }
  mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), Var_63, VarToAddr_16, &GroundingVarToAddr_26);
  if ((GroundingVarToAddr_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *GoalExpr_19 = GoalExpr0_18;
    *GoalInfo_21 = GoalInfo0_20;
    *Changed_22 = (MR_Integer) 0;
    *STATE_VARIABLE_ProcInfo_62 = STATE_VARIABLE_ProcInfo_0_61;
  }
  else
  {
    MR_Word CallPredId_29 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_18, 0))));
    MR_Integer CallProcId_30 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_18, 1))));
    MR_Word ArgVars_31 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_18, 2))));
    MR_Word Builtin_32 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_18, 3))) & (MR_Integer) 1);
    MR_Word UnifyContext_33 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_18, 4))));
    MR_Word CallPredProcId_35;
    MR_Word CalleeProcInfo_36;
    MR_Word CalleeArgModes_37;
    MR_Word Subst_42;
    MR_Word ExistingVariantId_45;
    MR_Word TypeCtorInfo_72_72;
    MR_Word ExistingVariantIds_38;
    MR_Word OutArgVars_40;
    MR_Word VariantArgVars_43;
    MR_Word VariantArgs_44;
    MR_Word NeededVarsSet_46;
    MR_Word VariantArgVarSet_47;
    MR_Word NeededOutArgVarsSet_48;
    MR_Integer Var_64;
    MR_Word _InArgVars_39;
    MR_Word _UnusedArgVars_41;

    {
      CallPredProcId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallPredProcId_35, 0) = ((MR_Box) (CallPredId_29));
      MR_hl_field(0, CallPredProcId_35, 1) = ((MR_Box) (CallProcId_30));
    }
    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_13, CallPredId_29, CallProcId_30, &CalleeProcInfo_36);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_36, &CalleeArgModes_37);
    succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), VariantMap_15, ((MR_Box) (CallPredProcId_35)), &ExistingVariantIds_38);
    if (succeeded)
    {
      transform_hlds__lco__classify_proc_call_args_7_p_0(ModuleInfo_13, VarTable_25, ArgVars_31, CalleeArgModes_37, &_InArgVars_39, &OutArgVars_40, &_UnusedArgVars_41);
      Var_64 = (MR_Integer) 1;
      transform_hlds__lco__grounding_to_variant_args_6_p_0(GroundingVarToAddr_26, Var_64, OutArgVars_40, &Subst_42, &VariantArgVars_43, &VariantArgs_44);
      succeeded = transform_hlds__lco__match_existing_variant_3_p_0(ExistingVariantIds_38, VariantArgs_44, &ExistingVariantId_45);
      if (succeeded)
      {
        succeeded = (Transforms_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NeededVarsSet_46 = ((MR_Word) ((MR_hl_field(1, Transforms_14, 0))));
          TypeCtorInfo_72_72 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          parse_tree__set_of_var__list_to_set_2_p_0(TypeCtorInfo_72_72, VariantArgVars_43, &VariantArgVarSet_47);
          parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_72_72, NeededVarsSet_46, VariantArgVarSet_47, &NeededOutArgVarsSet_48);
          succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_72_72, NeededOutArgVarsSet_48);
        }
      }
    }
    if (succeeded)
    {
      MR_Word CallArgVars_49;
      MR_Word VariantPredProcId_51;
      MR_Word VariantSymName_52;
      MR_Word VariantPredId_53;
      MR_Integer VariantProcId_54;
      MR_Word Globals_55;
      MR_Word Target_56;

      parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Subst_42, ArgVars_31, &CallArgVars_49);
      VariantPredProcId_51 = ((MR_Word) ((MR_hl_field(0, ExistingVariantId_45, 1))));
      VariantSymName_52 = ((MR_Word) ((MR_hl_field(0, ExistingVariantId_45, 2))));
      VariantPredId_53 = ((MR_Word) ((MR_hl_field(0, VariantPredProcId_51, 0))));
      VariantProcId_54 = ((MR_Integer) ((MR_hl_field(0, VariantPredProcId_51, 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_19 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (VariantPredId_53));
        MR_hl_field(2, base, 1) = ((MR_Box) (VariantProcId_54));
        MR_hl_field(2, base, 2) = ((MR_Box) (CallArgVars_49));
        MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_32));
        MR_hl_field(2, base, 4) = ((MR_Box) (UnifyContext_33));
        MR_hl_field(2, base, 5) = ((MR_Box) (VariantSymName_52));
      }
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_55);
      libs__globals__get_target_2_p_0(Globals_55, &Target_56);
      switch (Target_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *GoalInfo_21 = GoalInfo0_20;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word GroundVars_57;
            MR_Word AddrVars_58;
            MR_Word InstMapDelta0_59;
            MR_Word InstMapDelta_60;
            MR_Word Var_67;

            mercury__list__map_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_2[11]), GroundingVarToAddr_26, &GroundVars_57);
            mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), GroundVars_57, Subst_42, &AddrVars_58);
            InstMapDelta0_59 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_20);
            Var_67 = parse_tree__prog_mode__ground_inst_0_f_0();
            hlds__instmap__instmap_delta_set_vars_same_4_p_0(Var_67, AddrVars_58, InstMapDelta0_59, &InstMapDelta_60);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_60, GoalInfo0_20, GoalInfo_21);
          }
          break;
      }
      *Changed_22 = (MR_Integer) 1;
      *STATE_VARIABLE_ProcInfo_62 = STATE_VARIABLE_ProcInfo_0_61;
    }
    else
    {
      MR_Word InstMap1_79;
      MR_Word VarTable_80;
      MR_Word GroundingVarToAddr_81;
      MR_Word Var_83;

      hlds__goal_util__apply_goal_info_instmap_delta_3_p_0(GoalInfo0_20, InstMap0_17, &InstMap1_79);
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_61, &VarTable_80);
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_83, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_4[1]));
        MR_hl_field(0, Var_83, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_3));
        MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_83, 3) = ((MR_Box) (ModuleInfo_13));
        MR_hl_field(0, Var_83, 4) = ((MR_Box) (VarTable_80));
        MR_hl_field(0, Var_83, 5) = ((MR_Box) (InstMap0_17));
        MR_hl_field(0, Var_83, 6) = ((MR_Box) (InstMap1_79));
      }
      mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), Var_83, VarToAddr_16, &GroundingVarToAddr_81);
      if ((GroundingVarToAddr_81 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *GoalExpr_19 = GoalExpr0_18;
        *Changed_22 = (MR_Integer) 0;
        *STATE_VARIABLE_ProcInfo_62 = STATE_VARIABLE_ProcInfo_0_61;
      }
      else
      {
        MR_Word StoreGoals_82;
        MR_Word Var_84;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Box conv3_STATE_VARIABLE_ProcInfo_62;

        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_11[1]));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) (transform_hlds__lco__lco_transform_variant_plain_call_12_p_0_4));
          MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_84, 3) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(0, Var_84, 4) = ((MR_Box) (InstMap1_79));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[6]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_84, GroundingVarToAddr_81, &StoreGoals_82, ((MR_Box) (STATE_VARIABLE_ProcInfo_0_61)), &conv3_STATE_VARIABLE_ProcInfo_62);
        *STATE_VARIABLE_ProcInfo_62 = ((MR_Word) (conv3_STATE_VARIABLE_ProcInfo_62));
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_87, 0) = ((MR_Box) (GoalExpr0_18));
          MR_hl_field(0, Var_87, 1) = ((MR_Box) (GoalInfo0_20));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) (StoreGoals_82));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_19 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_86));
        }
        *Changed_22 = (MR_Integer) 1;
      }
      *GoalInfo_21 = GoalInfo0_20;
    }
  }
}

static void MR_CALL 
transform_hlds__lco__grounding_to_variant_args_6_p_0(
  MR_Word GroundingVarToAddr_7,
  MR_Integer OutArgNum_8,
  MR_Word OutArgVars_9,
  MR_Word * Subst_10,
  MR_Word * VariantArgVars_11,
  MR_Word * VariantArgs_12)
{
  MR_bool succeeded;

  if ((OutArgVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Subst_10 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]));
    *VariantArgVars_11 = (MR_Word) ((MR_Unsigned) 0U);
    *VariantArgs_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word OutArgVar_13 = ((MR_Word) ((MR_hl_field(1, OutArgVars_9, 0))));
    MR_Word OutArgVarsTail_14 = ((MR_Word) ((MR_hl_field(1, OutArgVars_9, 1))));
    MR_Word Subst0_15;
    MR_Word VariantArgVarsTail_16;
    MR_Word VariantArgsTail_17;
    MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) OutArgNum_8 + (MR_Unsigned) 1);
    MR_Word StoreTarget_18;
    MR_Box conv0_StoreTarget_18;

    transform_hlds__lco__grounding_to_variant_args_6_p_0(GroundingVarToAddr_7, Var_22, OutArgVarsTail_14, &Subst0_15, &VariantArgVarsTail_16, &VariantArgsTail_17);
    succeeded = mercury__assoc_list__search_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0), GroundingVarToAddr_7, ((MR_Box) (OutArgVar_13)), &conv0_StoreTarget_18);
    if (succeeded)
    {
      StoreTarget_18 = ((MR_Word) (conv0_StoreTarget_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word StoreArgVar_19 = ((MR_Word) ((MR_hl_field(0, StoreTarget_18, 0))));
      MR_Word MaybeFieldId_20 = ((MR_Word) ((MR_hl_field(0, StoreTarget_18, 1))));
      MR_Word VariantArg_21;

      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (OutArgVar_13)), ((MR_Box) (StoreArgVar_19)), Subst0_15, Subst_10);
      {
        VariantArg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VariantArg_21, 0) = ((MR_Box) (OutArgNum_8));
        MR_hl_field(0, VariantArg_21, 1) = ((MR_Box) (MaybeFieldId_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *VariantArgVars_11 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (OutArgVar_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (VariantArgVarsTail_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *VariantArgs_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (VariantArg_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (VariantArgsTail_17));
      }
    }
    else
    {
      *Subst_10 = Subst0_15;
      *VariantArgVars_11 = VariantArgVarsTail_16;
      *VariantArgs_12 = VariantArgsTail_17;
    }
  }
}

static void MR_CALL 
transform_hlds__lco__rev_conj_and_attach_init_instmaps_4_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevGoalIMs_0_3,
  MR_Word * STATE_VARIABLE_RevGoalIMs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevGoalIMs_4 = STATE_VARIABLE_RevGoalIMs_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word GoalIM_13;
      MR_Word InstMap1_14;
      MR_Word STATE_VARIABLE_RevGoalIMs_1_17;
      MR_Word next_value_of_InstMap0_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevGoalIMs_0_3;

      {
        GoalIM_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, GoalIM_13, 0) = ((MR_Box) (Goal_10));
        MR_hl_field(0, GoalIM_13, 1) = ((MR_Box) (InstMap0_1));
      }
      {
        STATE_VARIABLE_RevGoalIMs_1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevGoalIMs_1_17, 0) = ((MR_Box) (GoalIM_13));
        MR_hl_field(1, STATE_VARIABLE_RevGoalIMs_1_17, 1) = ((MR_Box) (STATE_VARIABLE_RevGoalIMs_0_3));
      }
      hlds__goal_util__apply_goal_instmap_delta_3_p_0(Goal_10, InstMap0_1, &InstMap1_14);
      // direct tailcall eliminated
      ;
      next_value_of_InstMap0_1 = InstMap1_14;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_RevGoalIMs_0_3 = STATE_VARIABLE_RevGoalIMs_1_17;
      InstMap0_1 = next_value_of_InstMap0_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevGoalIMs_0_3 = next_value_of_STATE_VARIABLE_RevGoalIMs_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__make_addr_vars_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__IntroducedFrom__pred__make_addr_vars__1538__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco__make_addr_vars_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer NextOutArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_17;

      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[5]));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__lco__make_addr_vars_10_p_0_1));
        MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_17, 3) = ((MR_Box) (HeadVar__7_7));
        MR_hl_field(0, Var_17, 4) = ((MR_Box) (*HeadVar__4_4));
      }
      mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/10", (MR_String) "AddrOutArgs != []");
      *STATE_VARIABLE_VarTable_10 = STATE_VARIABLE_VarTable_0_9;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/10", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_104 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/10", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word HeadVar_51;
      MR_Word HeadVars_52;
      MR_Word Mode0_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Modes0_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Mode_55;
      MR_Word Modes_56;
      MR_Word HeadVarEntry0_60;
      MR_Word HeadVarType_61;
      MR_Word TopFunctorMode_62;

      parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_9, Var_105, &HeadVarEntry0_60);
      HeadVarType_61 = ((MR_Word) ((MR_hl_field(0, HeadVarEntry0_60, 1))));
      hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode0_53, HeadVarType_61, &TopFunctorMode_62);
      switch (TopFunctorMode_62) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            HeadVar_51 = Var_105;
            Mode_55 = Mode0_53;
            transform_hlds__lco__make_addr_vars_10_p_0(ModuleInfo_1, NextOutArgNum_2, Var_104, &HeadVars_52, Modes0_54, &Modes_56, HeadVar__7_7, HeadVar__8_8, STATE_VARIABLE_VarTable_0_9, STATE_VARIABLE_VarTable_10);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeFieldId_64;
            MR_Word STATE_VARIABLE_AddrOutArgs_1_81;
            MR_Word AddrOutArg_63;
            MR_Integer Var_103;

            succeeded = (HeadVar__7_7 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              AddrOutArg_63 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
              STATE_VARIABLE_AddrOutArgs_1_81 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
              Var_103 = ((MR_Integer) ((MR_hl_field(0, AddrOutArg_63, 0))));
              MaybeFieldId_64 = ((MR_Word) ((MR_hl_field(0, AddrOutArg_63, 1))));
              succeeded = (NextOutArgNum_2 == Var_103);
            }
            if (succeeded)
            {
              MR_String HeadVarName_65;
              MR_String AddrVarName_66;
              MR_Word AddrVarType_67;
              MR_Word AddrVarTypeIsDummy_68;
              MR_Word AddrVarEntry_73;
              MR_Word VarToAddrTail_75;
              MR_Word VarToAddrHead_76;
              MR_Word STATE_VARIABLE_VarTable_2_89;
              MR_Integer Var_90;
              MR_Word Var_93;

              HeadVarName_65 = parse_tree__var_table__var_entry_name_2_f_0(Var_105, HeadVarEntry0_60);
              AddrVarName_66 = mercury__string__f_43_43_2_f_0((MR_String) "AddrOf", HeadVarName_65);
              if ((MaybeFieldId_64 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word RefTypeName_106;
                MR_Word Var_107;
                MR_Word Var_109;

                Var_107 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                {
                  RefTypeName_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RefTypeName_106, 0) = ((MR_Box) (Var_107));
                  MR_hl_field(1, RefTypeName_106, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
                }
                {
                  Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_109, 0) = ((MR_Box) (HeadVarType_61));
                  MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  AddrVarType_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, AddrVarType_67, 0) = ((MR_Box) (RefTypeName_106));
                  MR_hl_field(1, AddrVarType_67, 1) = ((MR_Box) (Var_109));
                  MR_hl_field(1, AddrVarType_67, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                AddrVarTypeIsDummy_68 = (MR_Integer) 1;
                Mode_55 = parse_tree__prog_mode__in_mode_0_f_0();
              }
              else
              {
                MR_Word ConsId_69;
                MR_Integer ArgNum_70;
                MR_Word BoundFunctor_71;
                MR_Word InitialInst_72;
                MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, MaybeFieldId_64, 0))));
                MR_Word Var_86;
                MR_Word Var_88;
                MR_Integer Arity_112;
                MR_Word ArgInsts0_113;
                MR_Word ArgInsts_114;
                MR_Word Var_115;
                MR_Word Var_116;

                AddrVarType_67 = ((MR_Word) ((MR_hl_field(0, Var_83, 0))));
                ConsId_69 = ((MR_Word) ((MR_hl_field(0, Var_83, 1))));
                ArgNum_70 = ((MR_Integer) ((MR_hl_field(0, Var_83, 2))));
                AddrVarTypeIsDummy_68 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, AddrVarType_67);
                Arity_112 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_69);
                Var_115 = parse_tree__prog_mode__ground_inst_0_f_0();
                mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_112, ((MR_Box) (Var_115)), &ArgInsts0_113);
                Var_116 = parse_tree__prog_mode__free_inst_0_f_0();
                mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts0_113, ArgNum_70, ((MR_Box) (Var_116)), &ArgInsts_114);
                {
                  BoundFunctor_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BoundFunctor_71, 0) = ((MR_Box) (ConsId_69));
                  MR_hl_field(0, BoundFunctor_71, 1) = ((MR_Box) (ArgInsts_114));
                }
                {
                  Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_86, 0) = ((MR_Box) (BoundFunctor_71));
                  MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  InitialInst_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, InitialInst_72, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(2, InitialInst_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(2, InitialInst_72, 2) = ((MR_Box) (Var_86));
                }
                Var_88 = parse_tree__prog_mode__ground_inst_0_f_0();
                {
                  Mode_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Mode_55, 0) = ((MR_Box) (InitialInst_72));
                  MR_hl_field(0, Mode_55, 1) = ((MR_Box) (Var_88));
                }
              }
              {
                AddrVarEntry_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, AddrVarEntry_73, 0) = ((MR_Box) (AddrVarName_66));
                MR_hl_field(0, AddrVarEntry_73, 1) = ((MR_Box) (AddrVarType_67));
                MR_hl_field(0, AddrVarEntry_73, 2) = (MR_Box) ((MR_Unsigned) (AddrVarTypeIsDummy_68));
              }
              parse_tree__var_table__add_var_entry_4_p_0(AddrVarEntry_73, &HeadVar_51, STATE_VARIABLE_VarTable_0_9, &STATE_VARIABLE_VarTable_2_89);
              Var_90 = (MR_Integer) ((MR_Unsigned) NextOutArgNum_2 + (MR_Unsigned) 1);
              transform_hlds__lco__make_addr_vars_10_p_0(ModuleInfo_1, Var_90, Var_104, &HeadVars_52, Modes0_54, &Modes_56, STATE_VARIABLE_AddrOutArgs_1_81, &VarToAddrTail_75, STATE_VARIABLE_VarTable_2_89, STATE_VARIABLE_VarTable_10);
              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_93, 0) = ((MR_Box) (HeadVar_51));
                MR_hl_field(0, Var_93, 1) = ((MR_Box) (MaybeFieldId_64));
              }
              {
                VarToAddrHead_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, VarToAddrHead_76, 0) = ((MR_Box) (Var_105));
                MR_hl_field(0, VarToAddrHead_76, 1) = ((MR_Box) (Var_93));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__8_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (VarToAddrHead_76));
                MR_hl_field(1, base, 1) = ((MR_Box) (VarToAddrTail_75));
              }
            }
            else
            {
              MR_Integer Var_94;

              HeadVar_51 = Var_105;
              Mode_55 = Mode0_53;
              Var_94 = (MR_Integer) ((MR_Unsigned) NextOutArgNum_2 + (MR_Unsigned) 1);
              transform_hlds__lco__make_addr_vars_10_p_0(ModuleInfo_1, Var_94, Var_104, &HeadVars_52, Modes0_54, &Modes_56, HeadVar__7_7, HeadVar__8_8, STATE_VARIABLE_VarTable_0_9, STATE_VARIABLE_VarTable_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.make_addr_vars\'/10", (MR_String) "top_unused");
            return;
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_51));
        MR_hl_field(1, base, 1) = ((MR_Box) (HeadVars_52));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mode_55));
        MR_hl_field(1, base, 1) = ((MR_Box) (Modes_56));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lco__store_updated_procs_in_module_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_Word PredProcId_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word NewProcInfo_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(0, PredProcId_4, 0))));
  MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(0, PredProcId_4, 1))));
  MR_Word PredInfo0_9;
  MR_Word Procs0_10;
  MR_Word Procs_11;
  MR_Word PredInfo_12;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_13, PredId_7, &PredInfo0_9);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_9, &Procs0_10);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_8)), ((MR_Box) (NewProcInfo_5)), Procs0_10, &Procs_11);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_11, PredInfo0_9, &PredInfo_12);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, PredInfo_12, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
}

static MR_bool MR_CALL 
transform_hlds__lco__update_construct_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__IntroducedFrom__pred__update_construct__1330__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco__update_construct_8_p_0(
  MR_Word ConstInfo_9,
  MR_Word Subst_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_AddrVarFieldIds_0_60,
  MR_Word * STATE_VARIABLE_AddrVarFieldIds_61,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 0))));
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 1))));
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
    LHS_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 0))));
    RHS0_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 1))));
    Mode_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 2))));
    Unification0_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 3))));
    UnifyContext_21 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 4))));
    succeeded = ((MR_tag((MR_Word) Unification0_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(0, Unification0_20, 0))));
      ConsId_23 = ((MR_Word) ((MR_hl_field(0, Unification0_20, 1))));
      ArgVars_24 = ((MR_Word) ((MR_hl_field(0, Unification0_20, 2))));
      ArgModes_25 = ((MR_Word) ((MR_hl_field(0, Unification0_20, 3))));
      How_26 = ((MR_Word) ((MR_hl_field(0, Unification0_20, 4))));
      IsUnique_27 = ((MR_Unsigned) ((MR_hl_field(0, Unification0_20, 5))) & (MR_Integer) 1);
      SubInfo0_28 = ((MR_Word) ((MR_hl_field(0, Unification0_20, 6))));
      if ((SubInfo0_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        TermSizeSlot_29 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(1, SubInfo0_28, 0))));

        TermSizeSlot_29 = ((MR_Word) ((MR_hl_field(1, SubInfo0_28, 1))));
        succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word HighLevelData_30 = ((MR_Unsigned) ((MR_hl_field(0, ConstInfo_9, 6))) & (MR_Integer) 1);
    MR_Word VarTable0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_62, 2))));
    MR_Word VarEntry_32;
    MR_Word VarType_34;
    MR_Word IsDummy_35;
    MR_Word InstMapDelta0_36;
    MR_Word UpdatedArgVars_37;
    MR_Word AddrFields_38;
    MR_Word InstMapDelta_39;
    MR_Word VarTable_40;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Unsigned packed_word_2;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_31, Var_22, &VarEntry_32);
    VarType_34 = ((MR_Word) ((MR_hl_field(0, VarEntry_32, 1))));
    IsDummy_35 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry_32, 2))) & (MR_Integer) 1);
    InstMapDelta0_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_16);
    transform_hlds__lco__update_construct_args_15_p_0(Subst_10, HighLevelData_30, VarType_34, IsDummy_35, ConsId_23, (MR_Integer) 1, ArgVars_24, &UpdatedArgVars_37, &AddrFields_38, InstMapDelta0_36, &InstMapDelta_39, STATE_VARIABLE_AddrVarFieldIds_0_60, STATE_VARIABLE_AddrVarFieldIds_61, VarTable0_31, &VarTable_40);
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_62, 0))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_62, 1))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_62, 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_63 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_40));
      MR_hl_field(0, base, 3) = (MR_Box) (packed_word_2);
    }
    if ((AddrFields_38 == (MR_Word) ((MR_Unsigned) 0U)))
      *Goal_12 = Goal0_11;
    else
    {
      MR_Word SubInfo_43;
      MR_Word Unification_44;
      MR_Word RHS_50;
      MR_Word GoalExpr_58;
      MR_Word GoalInfo_59;
      MR_Word Var_68;

      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (AddrFields_38));
      }
      {
        SubInfo_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SubInfo_43, 0) = ((MR_Box) (Var_68));
        MR_hl_field(1, SubInfo_43, 1) = ((MR_Box) (TermSizeSlot_29));
      }
      {
        Unification_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unification_44, 0) = ((MR_Box) (Var_22));
        MR_hl_field(0, Unification_44, 1) = ((MR_Box) (ConsId_23));
        MR_hl_field(0, Unification_44, 2) = ((MR_Box) (UpdatedArgVars_37));
        MR_hl_field(0, Unification_44, 3) = ((MR_Box) (ArgModes_25));
        MR_hl_field(0, Unification_44, 4) = ((MR_Box) (How_26));
        MR_hl_field(0, Unification_44, 5) = (MR_Box) ((MR_Unsigned) (IsUnique_27));
        MR_hl_field(0, Unification_44, 6) = ((MR_Box) (SubInfo_43));
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
            MR_Word RHSConsId_46 = ((MR_Word) ((MR_hl_field(1, RHS0_18, 0))));
            MR_Word IsExistConstr_47 = ((MR_Unsigned) ((MR_hl_field(1, RHS0_18, 1))) & (MR_Integer) 1);
            MR_Word RHSVars0_48 = ((MR_Word) ((MR_hl_field(1, RHS0_18, 2))));
            MR_Word RHSVars_49;
            MR_Word Var_71;

            {
              Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_71, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[4]));
              MR_hl_field(0, Var_71, 1) = ((MR_Box) (transform_hlds__lco__update_construct_8_p_0_1));
              MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_71, 3) = ((MR_Box) (ConsId_23));
              MR_hl_field(0, Var_71, 4) = ((MR_Box) (RHSConsId_46));
            }
            mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "cons_id mismatch");
            parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Subst_10, RHSVars0_48, &RHSVars_49);
            {
              RHS_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RHS_50, 0) = ((MR_Box) (RHSConsId_46));
              MR_hl_field(1, RHS_50, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstr_47));
              MR_hl_field(1, RHS_50, 2) = ((MR_Box) (RHSVars_49));
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
        GoalExpr_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr_58, 0) = ((MR_Box) (LHS_17));
        MR_hl_field(1, GoalExpr_58, 1) = ((MR_Box) (RHS_50));
        MR_hl_field(1, GoalExpr_58, 2) = ((MR_Box) (Mode_19));
        MR_hl_field(1, GoalExpr_58, 3) = ((MR_Box) (Unification_44));
        MR_hl_field(1, GoalExpr_58, 4) = ((MR_Box) (UnifyContext_21));
      }
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_39, GoalInfo0_16, &GoalInfo_59);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_58));
        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_59));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_construct\'/8", (MR_String) "not construct");
      return;
    }
}

static void MR_CALL 
transform_hlds__lco__update_construct_args_15_p_0(
  MR_Word Subst_1,
  MR_Word HighLevelData_2,
  MR_Word VarType_3,
  MR_Word IsDummyType_4,
  MR_Word ConsId_5,
  MR_Integer ArgNum_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_InstMapDelta_0_10,
  MR_Word * STATE_VARIABLE_InstMapDelta_11,
  MR_Word STATE_VARIABLE_AddrFieldIds_0_12,
  MR_Word * STATE_VARIABLE_AddrFieldIds_13,
  MR_Word STATE_VARIABLE_VarTable_0_14,
  MR_Word * STATE_VARIABLE_VarTable_15)
{
  MR_bool succeeded;

  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_15 = STATE_VARIABLE_VarTable_0_14;
    *STATE_VARIABLE_AddrFieldIds_13 = STATE_VARIABLE_AddrFieldIds_0_12;
    *STATE_VARIABLE_InstMapDelta_11 = STATE_VARIABLE_InstMapDelta_0_10;
  }
  else
  {
    MR_Word OrigVar_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
    MR_Word OrigVars_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
    MR_Word UpdatedVar_39;
    MR_Word UpdatedVars_40;
    MR_Word AddrArgsTail_45;
    MR_Integer Var_61 = (MR_Integer) ((MR_Unsigned) ArgNum_6 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_InstMapDelta_1_62;
    MR_Word STATE_VARIABLE_AddrFieldIds_1_63;
    MR_Word STATE_VARIABLE_VarTable_1_64;
    MR_Word AddrVar_46;
    MR_Box conv0_AddrVar_46;

    transform_hlds__lco__update_construct_args_15_p_0(Subst_1, HighLevelData_2, VarType_3, IsDummyType_4, ConsId_5, Var_61, OrigVars_38, &UpdatedVars_40, &AddrArgsTail_45, STATE_VARIABLE_InstMapDelta_0_10, &STATE_VARIABLE_InstMapDelta_1_62, STATE_VARIABLE_AddrFieldIds_0_12, &STATE_VARIABLE_AddrFieldIds_1_63, STATE_VARIABLE_VarTable_0_14, &STATE_VARIABLE_VarTable_1_64);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), Subst_1, ((MR_Box) (OrigVar_37)), &conv0_AddrVar_46);
    if (succeeded)
    {
      AddrVar_46 = ((MR_Word) (conv0_AddrVar_46));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FinalInst_47;
      MR_Word FieldId_54;

      UpdatedVar_39 = AddrVar_46;
      switch (HighLevelData_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            FinalInst_47 = parse_tree__prog_mode__ground_inst_0_f_0();
            *STATE_VARIABLE_VarTable_15 = STATE_VARIABLE_VarTable_1_64;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word BoundFunctor_48;
            MR_Word AddrVarEntry0_49;
            MR_String AddrVarName_50;
            MR_Word AddrVarEntry_53;
            MR_Word Var_68;
            MR_Integer Arity_73;
            MR_Word ArgInsts0_74;
            MR_Word ArgInsts_75;
            MR_Word Var_76;
            MR_Word Var_77;

            Arity_73 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_5);
            Var_76 = parse_tree__prog_mode__ground_inst_0_f_0();
            mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_73, ((MR_Box) (Var_76)), &ArgInsts0_74);
            Var_77 = parse_tree__prog_mode__free_inst_0_f_0();
            mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts0_74, ArgNum_6, ((MR_Box) (Var_77)), &ArgInsts_75);
            {
              BoundFunctor_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BoundFunctor_48, 0) = ((MR_Box) (ConsId_5));
              MR_hl_field(0, BoundFunctor_48, 1) = ((MR_Box) (ArgInsts_75));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (BoundFunctor_48));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              FinalInst_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, FinalInst_47, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(2, FinalInst_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, FinalInst_47, 2) = ((MR_Box) (Var_68));
            }
            parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_1_64, AddrVar_46, &AddrVarEntry0_49);
            AddrVarName_50 = ((MR_String) ((MR_hl_field(0, AddrVarEntry0_49, 0))));
            {
              AddrVarEntry_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AddrVarEntry_53, 0) = ((MR_Box) (AddrVarName_50));
              MR_hl_field(0, AddrVarEntry_53, 1) = ((MR_Box) (VarType_3));
              MR_hl_field(0, AddrVarEntry_53, 2) = (MR_Box) ((MR_Unsigned) (IsDummyType_4));
            }
            parse_tree__var_table__update_var_entry_4_p_0(AddrVar_46, AddrVarEntry_53, STATE_VARIABLE_VarTable_1_64, STATE_VARIABLE_VarTable_15);
          }
          break;
      }
      hlds__instmap__instmap_delta_set_var_4_p_0(AddrVar_46, FinalInst_47, STATE_VARIABLE_InstMapDelta_1_62, STATE_VARIABLE_InstMapDelta_11);
      {
        FieldId_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FieldId_54, 0) = ((MR_Box) (VarType_3));
        MR_hl_field(0, FieldId_54, 1) = ((MR_Box) (ConsId_5));
        MR_hl_field(0, FieldId_54, 2) = ((MR_Box) (ArgNum_6));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0), ((MR_Box) (OrigVar_37)), ((MR_Box) (FieldId_54)), STATE_VARIABLE_AddrFieldIds_1_63, STATE_VARIABLE_AddrFieldIds_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__9_9 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgNum_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (AddrArgsTail_45));
      }
    }
    else
    {
      UpdatedVar_39 = OrigVar_37;
      *HeadVar__9_9 = AddrArgsTail_45;
      *STATE_VARIABLE_VarTable_15 = STATE_VARIABLE_VarTable_1_64;
      *STATE_VARIABLE_AddrFieldIds_13 = STATE_VARIABLE_AddrFieldIds_1_63;
      *STATE_VARIABLE_InstMapDelta_11 = STATE_VARIABLE_InstMapDelta_1_62;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UpdatedVar_39));
      MR_hl_field(1, base, 1) = ((MR_Box) (UpdatedVars_40));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__occurs_once_2_p_0(
  MR_Word Bag_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Integer Var_7;

  mercury__bag__count_value_3_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), Bag_3, ((MR_Box) (Var_4)), &Var_7);
  succeeded = ((MR_Integer) 1 == Var_7);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_unification_6_p_0(
  MR_Word Info_7,
  MR_Word ConstInfo_8,
  MR_Word DelayForVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_UnifyInputVars_0_45,
  MR_Word * STATE_VARIABLE_UnifyInputVars_46)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_101_112_116_97_98_108_101_95_99_111_110_115_116_114_117_99_116_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_6_p_0(Info_7, DelayForVars_9, Goal_10, STATE_VARIABLE_UnifyInputVars_0_45, STATE_VARIABLE_UnifyInputVars_46);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__lco__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_101_112_116_97_98_108_101_95_99_111_110_115_116_114_117_99_116_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word DelayForVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_UnifyInputVars_0_45,
  MR_Word * STATE_VARIABLE_UnifyInputVars_46)
{
  MR_bool succeeded;
  MR_Word TypeInfo_101_101;
  MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Goal_10, 0))));
  MR_Word Unification_17;
  MR_Word ConstructedVar_19;
  MR_Word ConsId_20;
  MR_Word ConstructArgVars_21;
  MR_Word ArgModes_22;
  MR_Word SubInfo_25;
  MR_Word ModuleInfo_28;
  MR_Word VarTable_29;
  MR_Word DuCtor_30;
  MR_Word CtorRepn_31;
  MR_Word ConsTag_32;
  MR_Word STATE_VARIABLE_UnifyInputVars_1_48;
  MR_Word Var_84;

  succeeded = ((MR_tag((MR_Word) GoalExpr_12)) == (MR_Integer) 1);
  if (succeeded)
  {
    Unification_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, 3))));
    succeeded = ((MR_tag((MR_Word) Unification_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      ConstructedVar_19 = ((MR_Word) ((MR_hl_field(0, Unification_17, 0))));
      ConsId_20 = ((MR_Word) ((MR_hl_field(0, Unification_17, 1))));
      ConstructArgVars_21 = ((MR_Word) ((MR_hl_field(0, Unification_17, 2))));
      ArgModes_22 = ((MR_Word) ((MR_hl_field(0, Unification_17, 3))));
      SubInfo_25 = ((MR_Word) ((MR_hl_field(0, Unification_17, 6))));
      if ((SubInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word MaybeTakeAddrs_26 = ((MR_Word) ((MR_hl_field(1, SubInfo_25, 0))));

        succeeded = (MaybeTakeAddrs_26 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        ModuleInfo_28 = ((MR_Word) ((MR_hl_field(0, Info_7, 0))));
        VarTable_29 = ((MR_Word) ((MR_hl_field(0, Info_7, 2))));
        succeeded = transform_hlds__lco__acceptable_construct_modes_4_p_0(ModuleInfo_28, VarTable_29, ConstructArgVars_21, ArgModes_22);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            DuCtor_30 = (MR_Word) (MR_body((MR_Word) (ConsId_20), (MR_Integer) 1));
            succeeded = hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_28, DuCtor_30, &CtorRepn_31);
            if (succeeded)
            {
              ConsTag_32 = ((MR_Word) ((MR_hl_field(0, CtorRepn_31, 3))));
              Var_84 = ((MR_Word) ((MR_hl_field(0, CtorRepn_31, 4))));
              succeeded = ((((MR_tag((MR_Word) ConsTag_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_32, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                succeeded = transform_hlds__lco__all_delayed_arg_vars_are_full_words_3_p_0(ConstructArgVars_21, Var_84, DelayForVars_9);
                if (succeeded)
                {
                  TypeInfo_101_101 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
                  mercury__bag__delete_3_p_0(TypeInfo_101_101, ((MR_Box) (ConstructedVar_19)), STATE_VARIABLE_UnifyInputVars_0_45, &STATE_VARIABLE_UnifyInputVars_1_48);
                  mercury__bag__insert_list_3_p_0(TypeInfo_101_101, ConstructArgVars_21, STATE_VARIABLE_UnifyInputVars_1_48, STATE_VARIABLE_UnifyInputVars_46);
                  succeeded = MR_TRUE;
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

static MR_bool MR_CALL 
transform_hlds__lco__acceptable_construct_modes_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.acceptable_construct_modes\'/4", (MR_String) "list length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.acceptable_construct_modes\'/4", (MR_String) "list length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word UnifyMode_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        MR_Word UnifyModes_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        MR_Word Type_25;
        MR_Word InitInstX_26;
        MR_Word FinalInstX_27;
        MR_Word InitInstY_28;
        MR_Word FinalInstY_29;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_31, &Type_25);
        InitInstX_26 = ((MR_Word) ((MR_hl_field(0, UnifyMode_23, 0))));
        FinalInstX_27 = ((MR_Word) ((MR_hl_field(0, UnifyMode_23, 1))));
        InitInstY_28 = ((MR_Word) ((MR_hl_field(0, UnifyMode_23, 2))));
        FinalInstY_29 = ((MR_Word) ((MR_hl_field(0, UnifyMode_23, 3))));
        succeeded = hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, InitInstX_26);
        if (succeeded)
        {
          succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, Type_25, InitInstY_28);
          if (succeeded)
          {
            succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, Type_25, FinalInstX_27);
            if (succeeded)
            {
              succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, Type_25, FinalInstY_29);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__3_3 = Var_30;
                next_value_of_HeadVar__4_4 = UnifyModes_24;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
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
      MR_Word ArgVar_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ArgVars_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgRepn_7;
      MR_Word ArgRepns_8;
      MR_Word ArgWidth_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgRepn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        ArgRepns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        ArgWidth_10 = ((MR_Word) ((MR_hl_field(0, ArgRepn_7, 3))));
        switch (MR_tag((MR_Word) ArgWidth_10)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgWidth_10, 0))))) {
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
  MR_bool succeeded;
  MR_Word GoalInfo_17 = ((MR_Word) ((MR_hl_field(0, Goal_12, 1))));
  MR_Word GoalVars_18;
  MR_Word Intersection_19;

  hlds__goal_vars__vars_in_goal_2_p_0(Goal_12, &GoalVars_18);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_DelayForVars_0_26, GoalVars_18, &Intersection_19);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Intersection_19);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevNonDependentGoals_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevNonDependentGoals_0_24));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevDependentGoals_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevDependentGoals_0_22));
    }
    InstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_17);
    hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta_20, &ChangedVars_21);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_21, STATE_VARIABLE_DelayForVars_0_26, STATE_VARIABLE_DelayForVars_27);
    *STATE_VARIABLE_RevNonDependentGoals_25 = STATE_VARIABLE_RevNonDependentGoals_0_24;
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
        MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(0, CurProc_14, 0))));
        MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(0, CurProc_14, 1))));
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
        {
          MR_Word VarTable0_35;
          MR_Word HeadVars_36;
          MR_Word ArgModes_37;
          MR_Word OutputHeadVars_39;
          MR_Word CurProcDetism_40;
          MR_Word Globals_41;
          MR_Word Target_42;
          MR_Word HighLevelData_43;
          MR_Word UnboxedFloat_44;
          MR_Word AllowFloatAddr_45;
          MR_Word ConstInfo_46;
          MR_Word Info0_47;
          MR_Word Goal0_48;
          MR_Word Goal_49;
          MR_Word Info_50;
          MR_Word VarTable_51;
          MR_Word Changed_52;
          MR_Word STATE_VARIABLE_ModuleInfo_1_64;
          MR_Word _InputHeadVars_38;

          hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_22, &VarTable0_35);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_22, &HeadVars_36);
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_22, &ArgModes_37);
          hlds__arg_info__compute_in_and_out_vars_6_p_0(STATE_VARIABLE_ModuleInfo_0_26, VarTable0_35, HeadVars_36, ArgModes_37, &_InputHeadVars_38, &OutputHeadVars_39);
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_22, &CurProcDetism_40);
          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &Globals_41);
          libs__globals__get_target_2_p_0(Globals_41, &Target_42);
          HighLevelData_43 = libs__globals__compilation_target_high_level_data_1_f_0(Target_42);
          libs__globals__lookup_bool_option_3_p_0(Globals_41, (MR_Integer) 104, &UnboxedFloat_44);
          switch (UnboxedFloat_44) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              AllowFloatAddr_45 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              AllowFloatAddr_45 = (MR_Integer) 1;
              break;
          }
          {
            ConstInfo_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConstInfo_46, 0) = ((MR_Box) (LowerSCCVariants_12));
            MR_hl_field(0, ConstInfo_46, 1) = ((MR_Box) (SCC_13));
            MR_hl_field(0, ConstInfo_46, 2) = ((MR_Box) (CurProc_14));
            MR_hl_field(0, ConstInfo_46, 3) = ((MR_Box) (PredInfo_21));
            MR_hl_field(0, ConstInfo_46, 4) = ((MR_Box) (ProcInfo0_22));
            MR_hl_field(0, ConstInfo_46, 5) = ((MR_Box) (OutputHeadVars_39));
            MR_hl_field(0, ConstInfo_46, 6) = (MR_Box) (((((MR_Unsigned) (CurProcDetism_40) << 2)) | (((((MR_Unsigned) (AllowFloatAddr_45) << 1)) | (MR_Unsigned) (HighLevelData_43)))));
          }
          {
            Info0_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Info0_47, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26));
            MR_hl_field(0, Info0_47, 1) = ((MR_Box) (STATE_VARIABLE_CurSCCVariants_0_28));
            MR_hl_field(0, Info0_47, 2) = ((MR_Box) (VarTable0_35));
            MR_hl_field(0, Info0_47, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_22, &Goal0_48);
          transform_hlds__lco__lco_in_goal_5_p_0(Goal0_48, &Goal_49, Info0_47, &Info_50, ConstInfo_46);
          STATE_VARIABLE_ModuleInfo_1_64 = ((MR_Word) ((MR_hl_field(0, Info_50, 0))));
          *STATE_VARIABLE_CurSCCVariants_29 = ((MR_Word) ((MR_hl_field(0, Info_50, 1))));
          VarTable_51 = ((MR_Word) ((MR_hl_field(0, Info_50, 2))));
          *STATE_VARIABLE_Permitted_33 = ((((MR_Unsigned) ((MR_hl_field(0, Info_50, 3))) >> 1)) & (MR_Integer) 1);
          Changed_52 = ((MR_Unsigned) ((MR_hl_field(0, Info_50, 3))) & (MR_Integer) 1);
          succeeded = (*STATE_VARIABLE_Permitted_33 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (Changed_52 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_ProcInfo_2_76;
            MR_Word STATE_VARIABLE_ProcInfo_3_77;
            MR_Word STATE_VARIABLE_ProcInfo_4_79;
            MR_Word STATE_VARIABLE_ProcInfo_5_81;

            hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_51, ProcInfo0_22, &STATE_VARIABLE_ProcInfo_2_76);
            hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_49, STATE_VARIABLE_ProcInfo_2_76, &STATE_VARIABLE_ProcInfo_3_77);
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_3_77, &STATE_VARIABLE_ProcInfo_4_79);
            check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_4_79, &STATE_VARIABLE_ProcInfo_5_81, STATE_VARIABLE_ModuleInfo_1_64, STATE_VARIABLE_ModuleInfo_27);
            mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (CurProc_14)), ((MR_Box) (STATE_VARIABLE_ProcInfo_5_81)), STATE_VARIABLE_CurSCCUpdates_0_30, STATE_VARIABLE_CurSCCUpdates_31);
          }
          else
          {
            *STATE_VARIABLE_CurSCCUpdates_31 = STATE_VARIABLE_CurSCCUpdates_0_30;
            *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_1_64;
          }
        }
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
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_10, 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_10, 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_10, 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_1_22;

    transform_hlds__lco__lco_in_goal_5_p_0(Goal0_18, &Goal_19, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_22, HeadVar__5_5);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_12, 2) = ((MR_Box) (Goal_19));
    }
    transform_hlds__lco__lco_in_cases_5_p_0(Cases0_11, &Cases_13, STATE_VARIABLE_Info_1_22, STATE_VARIABLE_Info_4, HeadVar__5_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_13));
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
  MR_bool succeeded;
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 0))));
  MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 1))));
  MR_Word GoalExpr_16;

  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        GoalExpr_16 = GoalExpr0_10;
        *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 0))))) {
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
            MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 1))) & (MR_Integer) 1);
            MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));

            switch (ConjType_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_86;
                  MR_Word Var_87;
                  MR_Word Var_88;
                  MR_Word Var_90;

                  GoalExpr_16 = GoalExpr0_10;
                  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, 0))));
                  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, 1))));
                  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, 2))));
                  Var_90 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, 3))) & (MR_Integer) 1);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Info_61 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_87));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Var_88));
                    MR_hl_field(0, base, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_90)));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word MaybeGoals_14;
                  MR_Word STATE_VARIABLE_Info_1_62;

                  transform_hlds__lco__lco_in_conj_5_p_0(Goals0_13, &MaybeGoals_14, STATE_VARIABLE_Info_0_60, &STATE_VARIABLE_Info_1_62, ConstInfo_9);
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
                      MR_Word Var_66;
                      MR_Word Var_67;

                      transform_hlds__lco__lco_in_goal_5_p_0(Last0_18, &Last_19, STATE_VARIABLE_Info_1_62, STATE_VARIABLE_Info_61, ConstInfo_9);
                      {
                        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_67, 0) = ((MR_Box) (Last_19));
                        MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AllButLast_17, Var_67);
                      {
                        GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, GoalExpr_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(3, GoalExpr_16, 2) = ((MR_Box) (Var_66));
                      }
                    }
                    else
                    {
                      GoalExpr_16 = GoalExpr0_10;
                      *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_1_62;
                    }
                  }
                  else
                  {
                    MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(1, MaybeGoals_14, 0))));

                    {
                      GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, GoalExpr_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, GoalExpr_16, 2) = ((MR_Box) (Goals_15));
                    }
                    *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_1_62;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
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
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Last_81;

              transform_hlds__lco__lco_in_goal_5_p_0(Last0_83, &Last_81, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61, ConstInfo_9);
              {
                Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_73, 0) = ((MR_Box) (Last_81));
                MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AllButLast_82, Var_73);
              {
                GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_16, 1) = ((MR_Box) (Var_72));
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
            MR_Word Var_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word CanFail_21 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 2))) & (MR_Integer) 1);
            MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Cases_23;

            transform_hlds__lco__lco_in_cases_5_p_0(Cases0_22, &Cases_23, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61, ConstInfo_9);
            {
              GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_16, 1) = ((MR_Box) (Var_20));
              MR_hl_field(3, GoalExpr_16, 2) = (MR_Box) ((MR_Unsigned) (CanFail_21));
              MR_hl_field(3, GoalExpr_16, 3) = ((MR_Box) (Cases_23));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word SubGoal0_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word FGT_33;

            succeeded = ((((MR_tag((MR_Word) Reason_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_30, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_33 = ((MR_Unsigned) ((MR_hl_field(3, Reason_30, 2))) & (MR_Integer) 3);
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
                GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_16, 1) = ((MR_Box) (Reason_30));
                MR_hl_field(3, GoalExpr_16, 2) = ((MR_Box) (SubGoal_34));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Cond_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Then0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Else0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word Then_28;
            MR_Word Else_29;
            MR_Word STATE_VARIABLE_Info_6_76;

            transform_hlds__lco__lco_in_goal_5_p_0(Then0_26, &Then_28, STATE_VARIABLE_Info_0_60, &STATE_VARIABLE_Info_6_76, ConstInfo_9);
            transform_hlds__lco__lco_in_goal_5_p_0(Else0_27, &Else_29, STATE_VARIABLE_Info_6_76, STATE_VARIABLE_Info_61, ConstInfo_9);
            {
              GoalExpr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_16, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_16, 1) = ((MR_Box) (Vars_24));
              MR_hl_field(3, GoalExpr_16, 2) = ((MR_Box) (Cond_25));
              MR_hl_field(3, GoalExpr_16, 3) = ((MR_Box) (Then_28));
              MR_hl_field(3, GoalExpr_16, 4) = ((MR_Box) (Else_29));
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
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_UnifyInputVars_46;

  succeeded = transform_hlds__lco__acceptable_construct_unification_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_UnifyInputVars_46);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_UnifyInputVars_46));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_RevDependentGoals_23;
  MR_Word conv1_STATE_VARIABLE_RevNonDependentGoals_25;
  MR_Word conv0_STATE_VARIABLE_DelayForVars_27;

  transform_hlds__lco__partition_dependent_goal_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RevDependentGoals_23, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_RevNonDependentGoals_25, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DelayForVars_27);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RevDependentGoals_23));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_RevNonDependentGoals_25));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DelayForVars_27));
}

static void MR_CALL 
transform_hlds__lco__lco_in_conj_5_p_0(
  MR_Word Goals0_6,
  MR_Word * MaybeGoals_7,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word ConstInfo_9)
{
  MR_bool succeeded;
  MR_Word RevGoals0_10;
  MR_Word RecGoal_12;
  MR_Word RecOutArgs_13;
  MR_Word RevBeforeGoals_14;
  MR_Word RevAfterDependentGoals_18;
  MR_Word RevAfterNonDependentGoals_19;
  MR_Word UnifyInputVars_21;
  MR_Word TypeCtorInfo_39_39;
  MR_Word TypeInfo_47_47;
  MR_Word TypeInfo_48_48;
  MR_Word TypeInfo_52_52;
  MR_Word TypeInfo_53_53;
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
  MR_Box conv7_UnifyInputVars_21;

  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_6, &RevGoals0_10);
  succeeded = transform_hlds__lco__divide_rev_conj_8_p_0(STATE_VARIABLE_Info_0_26, ConstInfo_9, RevGoals0_10, (MR_Word) ((MR_Unsigned) 0U), &AfterGoals_11, &RecGoal_12, &RecOutArgs_13, &RevBeforeGoals_14);
  if (succeeded)
  {
    succeeded = (AfterGoals_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      parse_tree__set_of_var__list_to_set_2_p_0(TypeCtorInfo_39_39, RecOutArgs_13, &DelayForVars0_17);
      Var_30 = (MR_Word) ((MR_Unsigned) 0U);
      Var_31 = (MR_Word) ((MR_Unsigned) 0U);
      TypeInfo_47_47 = (MR_Word) (&transform_hlds__lco_scalar_common_1[2]);
      TypeInfo_48_48 = (MR_Word) (&transform_hlds__lco_scalar_common_1[3]);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_10[0]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_1));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_26));
        MR_hl_field(0, Var_29, 4) = ((MR_Box) (ConstInfo_9));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfo_47_47, TypeInfo_47_47, TypeInfo_48_48, Var_29, AfterGoals_11, ((MR_Box) (Var_30)), &conv5_RevAfterDependentGoals_18, ((MR_Box) (Var_31)), &conv4_RevAfterNonDependentGoals_19, ((MR_Box) (DelayForVars0_17)), &conv3_DelayForVars_20);
      RevAfterDependentGoals_18 = ((MR_Word) (conv5_RevAfterDependentGoals_18));
      RevAfterNonDependentGoals_19 = ((MR_Word) (conv4_RevAfterNonDependentGoals_19));
      DelayForVars_20 = ((MR_Word) (conv3_DelayForVars_20));
      TypeInfo_52_52 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_11[0]));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (transform_hlds__lco__lco_in_conj_5_p_0_2));
        MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_32, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_26));
        MR_hl_field(0, Var_32, 4) = ((MR_Box) (ConstInfo_9));
        MR_hl_field(0, Var_32, 5) = ((MR_Box) (DelayForVars_20));
      }
      Var_33 = mercury__bag__init_0_f_0(TypeInfo_52_52);
      TypeInfo_53_53 = (MR_Word) (&transform_hlds__lco_scalar_common_1[5]);
      succeeded = mercury__list__foldl_4_p_3((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfo_53_53, Var_32, RevAfterDependentGoals_18, ((MR_Box) (Var_33)), &conv7_UnifyInputVars_21);
      if (succeeded)
      {
        UnifyInputVars_21 = ((MR_Word) (conv7_UnifyInputVars_21));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word UnifyGoals_22;
    MR_Word MaybeGoals1_23;

    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevAfterDependentGoals_18, &UnifyGoals_22);
    transform_hlds__lco__transform_call_and_unifies_8_p_0(RecGoal_12, RecOutArgs_13, UnifyGoals_22, UnifyInputVars_21, &MaybeGoals1_23, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27, ConstInfo_9);
    if ((MaybeGoals1_23 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeGoals_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word UpdatedRecAndUnifies_24 = ((MR_Word) ((MR_hl_field(1, MaybeGoals1_23, 0))));
      MR_Word Goals_25;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;

      Var_35 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevBeforeGoals_14);
      Var_37 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevAfterNonDependentGoals_19);
      Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_37, UpdatedRecAndUnifies_24);
      Goals_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_35, Var_36);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoals_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goals_25));
      }
    }
  }
  else
  {
    *MaybeGoals_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
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
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_12;
  MR_Word conv1_STATE_VARIABLE_AddrVarFieldIds_61;
  MR_Word conv0_STATE_VARIABLE_Info_63;

  transform_hlds__lco__update_construct_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_12, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_AddrVarFieldIds_61, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_63);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_12));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_AddrVarFieldIds_61));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_63));
}

static MR_bool MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__occurs_once_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco__transform_call_and_unifies_8_p_0(
  MR_Word CallGoal_9,
  MR_Word CallOutArgVars_10,
  MR_Word UnifyGoals_11,
  MR_Word UnifyInputVars_12,
  MR_Word * MaybeGoals_13,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65,
  MR_Word ConstInfo_15)
{
  MR_bool succeeded;
  MR_Word CallGoalExpr_16 = ((MR_Word) ((MR_hl_field(0, CallGoal_9, 0))));
  MR_Word CallGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, CallGoal_9, 1))));
  MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_64, 0))));
  MR_Word CurProcInfo_19 = ((MR_Word) ((MR_hl_field(0, ConstInfo_15, 4))));
  MR_Word PredId_20;
  MR_Integer ProcId_21;
  MR_Word ArgVars_22;
  MR_Word Builtin_23;
  MR_Word UnifyContext_24;
  MR_Word UpdatedCallOutArgs_29;
  MR_Word UpdatedUnifyGoals_37;
  MR_Word VariantPredProcId_47;
  MR_Word VariantSymName_48;
  MR_Word STATE_VARIABLE_Info_3_103;
  MR_Word TypeInfo_160_160;
  MR_Word TypeCtorInfo_164_164;
  MR_Word TypeCtorInfo_172_172;
  MR_Word TypeCtorInfo_173_173;
  MR_Word TypeInfo_174_174;
  MR_Word TypeCtorInfo_175_175;
  MR_Word CurrProcOutArgs_26;
  MR_Word CallHeadPairs_27;
  MR_Word Mismatches_28;
  MR_Word Subst_30;
  MR_Word MismatchedCallArgs_36;
  MR_Word AddrFieldIds_38;
  MR_Word HighLevelData_45;
  MR_Word VariantArgs_46;
  MR_Integer Var_66;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_Info_1_68;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word STATE_VARIABLE_Info_2_89;
  MR_Box conv4_AddrFieldIds_38;
  MR_Box conv3_STATE_VARIABLE_Info_2_89;

  succeeded = ((MR_tag((MR_Word) CallGoalExpr_16)) == (MR_Integer) 2);
  if (succeeded)
  {
    PredId_20 = ((MR_Word) ((MR_hl_field(2, CallGoalExpr_16, 0))));
    ProcId_21 = ((MR_Integer) ((MR_hl_field(2, CallGoalExpr_16, 1))));
    ArgVars_22 = ((MR_Word) ((MR_hl_field(2, CallGoalExpr_16, 2))));
    Builtin_23 = ((MR_Unsigned) ((MR_hl_field(2, CallGoalExpr_16, 3))) & (MR_Integer) 1);
    UnifyContext_24 = ((MR_Word) ((MR_hl_field(2, CallGoalExpr_16, 4))));
    CurrProcOutArgs_26 = ((MR_Word) ((MR_hl_field(0, ConstInfo_15, 5))));
    TypeInfo_160_160 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_160_160, TypeInfo_160_160, CallOutArgVars_10, CurrProcOutArgs_26, &CallHeadPairs_27);
    Var_66 = (MR_Integer) 1;
    Var_67 = mercury__map__init_0_f_0(TypeInfo_160_160, TypeInfo_160_160);
    transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(ConstInfo_15, UnifyInputVars_12, CallHeadPairs_27, Var_66, &Mismatches_28, &UpdatedCallOutArgs_29, Var_67, &Subst_30, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_1_68);
    succeeded = (Mismatches_28 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_164_164 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      mercury__assoc_list__values_2_p_0(TypeCtorInfo_164_164, TypeInfo_160_160, Mismatches_28, &MismatchedCallArgs_36);
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_86, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[3]));
        MR_hl_field(0, Var_86, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_1));
        MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_86, 3) = ((MR_Box) (UnifyInputVars_12));
      }
      succeeded = mercury__list__all_true_2_p_0(TypeInfo_160_160, Var_86, MismatchedCallArgs_36);
      if (succeeded)
      {
        TypeCtorInfo_172_172 = (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_field_id_0);
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_87, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_9[0]));
          MR_hl_field(0, Var_87, 1) = ((MR_Box) (transform_hlds__lco__transform_call_and_unifies_8_p_0_2));
          MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_87, 3) = ((MR_Box) (ConstInfo_15));
          MR_hl_field(0, Var_87, 4) = ((MR_Box) (Subst_30));
        }
        Var_88 = mercury__map__init_0_f_0(TypeInfo_160_160, TypeCtorInfo_172_172);
        TypeCtorInfo_173_173 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
        TypeInfo_174_174 = (MR_Word) (&transform_hlds__lco_scalar_common_2[5]);
        TypeCtorInfo_175_175 = (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0);
        mercury__list__map_foldl2_7_p_0(TypeCtorInfo_173_173, TypeCtorInfo_173_173, TypeInfo_174_174, TypeCtorInfo_175_175, Var_87, UnifyGoals_11, &UpdatedUnifyGoals_37, ((MR_Box) (Var_88)), &conv4_AddrFieldIds_38, ((MR_Box) (STATE_VARIABLE_Info_1_68)), &conv3_STATE_VARIABLE_Info_2_89);
        AddrFieldIds_38 = ((MR_Word) (conv4_AddrFieldIds_38));
        STATE_VARIABLE_Info_2_89 = ((MR_Word) (conv3_STATE_VARIABLE_Info_2_89));
        HighLevelData_45 = ((MR_Unsigned) ((MR_hl_field(0, ConstInfo_15, 6))) & (MR_Integer) 1);
        transform_hlds__lco__make_variant_args_4_p_0(HighLevelData_45, AddrFieldIds_38, Mismatches_28, &VariantArgs_46);
        succeeded = transform_hlds__lco__ensure_variant_exists_7_p_0(PredId_20, ProcId_21, VariantArgs_46, &VariantPredProcId_47, &VariantSymName_48, STATE_VARIABLE_Info_2_89, &STATE_VARIABLE_Info_3_103);
      }
    }
  }
  if (succeeded)
  {
    MR_Word CurProcVarTable_49;
    MR_Word CalleeProcInfo_50;
    MR_Word CalleeModes_51;
    MR_Word UpdatedArgs_52;
    MR_Word VariantPredId_53;
    MR_Integer VariantProcId_54;
    MR_Word UpdatedGoalExpr_55;
    MR_Word OrigCallPurity_56;
    MR_Word UpdatedGoalInfo_57;
    MR_Word UpdatedGoal_58;
    MR_Word Goals_59;
    MR_Word Var_105;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;

    hlds__hlds_pred__proc_info_get_var_table_2_p_0(CurProcInfo_19, &CurProcVarTable_49);
    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_18, PredId_20, ProcId_21, &CalleeProcInfo_50);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_50, &CalleeModes_51);
    transform_hlds__lco__update_call_args_6_p_0(ModuleInfo_18, CurProcVarTable_49, CalleeModes_51, ArgVars_22, UpdatedCallOutArgs_29, &UpdatedArgs_52);
    VariantPredId_53 = ((MR_Word) ((MR_hl_field(0, VariantPredProcId_47, 0))));
    VariantProcId_54 = ((MR_Integer) ((MR_hl_field(0, VariantPredProcId_47, 1))));
    {
      UpdatedGoalExpr_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, UpdatedGoalExpr_55, 0) = ((MR_Box) (VariantPredId_53));
      MR_hl_field(2, UpdatedGoalExpr_55, 1) = ((MR_Box) (VariantProcId_54));
      MR_hl_field(2, UpdatedGoalExpr_55, 2) = ((MR_Box) (UpdatedArgs_52));
      MR_hl_field(2, UpdatedGoalExpr_55, 3) = (MR_Box) ((MR_Unsigned) (Builtin_23));
      MR_hl_field(2, UpdatedGoalExpr_55, 4) = ((MR_Box) (UnifyContext_24));
      MR_hl_field(2, UpdatedGoalExpr_55, 5) = ((MR_Box) (VariantSymName_48));
    }
    OrigCallPurity_56 = hlds__hlds_goal__goal_info_get_purity_1_f_0(CallGoalInfo_17);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, CallGoalInfo_17, &UpdatedGoalInfo_57);
    {
      UpdatedGoal_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UpdatedGoal_58, 0) = ((MR_Box) (UpdatedGoalExpr_55));
      MR_hl_field(0, UpdatedGoal_58, 1) = ((MR_Box) (UpdatedGoalInfo_57));
    }
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) (UpdatedGoal_58));
      MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Goals_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UpdatedUnifyGoals_37, Var_105);
    succeeded = (OrigCallPurity_56 == (MR_Integer) 2);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoals_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goals_59));
      }
    else
    {
      MR_Word ConjGoalExpr_60;
      MR_Word ConjGoal_61;
      MR_Word PromiseGoalExpr_62;
      MR_Word PromiseGoal_63;
      MR_Word Var_108;
      MR_Word Var_109;

      {
        ConjGoalExpr_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConjGoalExpr_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ConjGoalExpr_60, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, ConjGoalExpr_60, 2) = ((MR_Box) (Goals_59));
      }
      {
        ConjGoal_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConjGoal_61, 0) = ((MR_Box) (ConjGoalExpr_60));
        MR_hl_field(0, ConjGoal_61, 1) = ((MR_Box) (UpdatedGoalInfo_57));
      }
      {
        Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_108, 1) = (MR_Box) ((MR_Unsigned) (OrigCallPurity_56));
      }
      {
        PromiseGoalExpr_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, PromiseGoalExpr_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, PromiseGoalExpr_62, 1) = ((MR_Box) (Var_108));
        MR_hl_field(3, PromiseGoalExpr_62, 2) = ((MR_Box) (ConjGoal_61));
      }
      {
        PromiseGoal_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PromiseGoal_63, 0) = ((MR_Box) (PromiseGoalExpr_62));
        MR_hl_field(0, PromiseGoal_63, 1) = ((MR_Box) (UpdatedGoalInfo_57));
      }
      {
        Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_109, 0) = ((MR_Box) (PromiseGoal_63));
        MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoals_13 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_109));
      }
    }
    Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_103, 0))));
    Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_103, 1))));
    Var_157 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_103, 2))));
    Var_158 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_3_103, 3))) >> 1)) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_65 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_155));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_156));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_157));
      MR_hl_field(0, base, 3) = (MR_Box) (((((MR_Unsigned) (Var_158) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
  }
  else
  {
    *MaybeGoals_13 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_0_64;
  }
}

static MR_Box MR_CALL 
transform_hlds__lco__ensure_variant_exists_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__lco__va_pos_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__lco__ensure_variant_exists_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word AddrOutArgs_10,
  MR_Word * VariantPredProcId_11,
  MR_Word * VariantSymName_12,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_bool succeeded;
  MR_Word PredProcId_14;
  MR_Word CurSCCVariants0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_42, 1))));
  MR_Word ExistingVariantId_17;
  MR_Word ExistingVariantIds_16;

  {
    PredProcId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_14, 0) = ((MR_Box) (PredId_8));
    MR_hl_field(0, PredProcId_14, 1) = ((MR_Box) (ProcId_9));
  }
  succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), CurSCCVariants0_15, ((MR_Box) (PredProcId_14)), &ExistingVariantIds_16);
  if (succeeded)
    succeeded = transform_hlds__lco__match_existing_variant_3_p_0(ExistingVariantIds_16, AddrOutArgs_10, &ExistingVariantId_17);
  if (succeeded)
  {
    *VariantPredProcId_11 = ((MR_Word) ((MR_hl_field(0, ExistingVariantId_17, 1))));
    *VariantSymName_12 = ((MR_Word) ((MR_hl_field(0, ExistingVariantId_17, 2))));
    *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_79_79;
    MR_Word TypeCtorInfo_80_80;
    MR_Word TypeCtorInfo_83_83;
    MR_Word TypeCtorInfo_84_84;
    MR_Word TypeCtorInfo_85_85;
    MR_Word TypeCtorInfo_86_86;
    MR_Integer VariantNumber_20;
    MR_Word ModuleInfo0_21;
    MR_Word ModuleName_22;
    MR_Word PredOrFunc_24;
    MR_String PredName_25;
    MR_Word Transform_26;
    MR_String VariantName_27;
    MR_Word Origin0_29;
    MR_Word AddrOutArgNums_30;
    MR_Word ProcTransform_31;
    MR_Word Origin_32;
    MR_Word ProcTable_33;
    MR_Word ProcInfo_34;
    MR_Word VariantProcTable_35;
    MR_Word PredTable0_36;
    MR_Word VariantPredId_37;
    MR_Word PredTable_38;
    MR_Word ModuleInfo_39;
    MR_Word NewVariant_40;
    MR_Word CurSCCVariants_41;
    MR_Word STATE_VARIABLE_VariantPredInfo_1_47;
    MR_Word STATE_VARIABLE_VariantPredInfo_2_48;
    MR_Word STATE_VARIABLE_VariantPredInfo_3_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_VariantPredInfo_4_51;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_VariantPredInfo_5_53;
    MR_Word STATE_VARIABLE_VariantPredInfo_6_54;
    MR_Word STATE_VARIABLE_Info_1_55;
    MR_Word ExistingVariants_19;
    MR_Box conv1_ProcInfo_34;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Unsigned packed_word_0;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Unsigned packed_word_1;

    succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), CurSCCVariants0_15, ((MR_Box) (PredProcId_14)), &ExistingVariants_19);
    if (succeeded)
    {
      MR_Integer Var_44;

      Var_44 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), ExistingVariants_19);
      VariantNumber_20 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) 1);
    }
    else
      VariantNumber_20 = (MR_Integer) 1;
    succeeded = (VariantNumber_20 <= (MR_Integer) 4);
    if (succeeded)
    {
      ModuleInfo0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_42, 0))));
      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo0_21, &ModuleName_22);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_21, PredId_8, &STATE_VARIABLE_VariantPredInfo_1_47);
      PredOrFunc_24 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_VariantPredInfo_1_47);
      hlds__hlds_pred__pred_info_get_name_2_p_0(STATE_VARIABLE_VariantPredInfo_1_47, &PredName_25);
      {
        Transform_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Transform_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Transform_26, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
        MR_hl_field(3, Transform_26, 2) = ((MR_Box) (VariantNumber_20));
      }
      hlds__pred_name__make_transformed_pred_name_3_p_0(PredName_25, Transform_26, &VariantName_27);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *VariantSymName_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_22));
        MR_hl_field(1, base, 1) = ((MR_Box) (VariantName_27));
      }
      hlds__hlds_pred__pred_info_set_module_name_3_p_0(ModuleName_22, STATE_VARIABLE_VariantPredInfo_1_47, &STATE_VARIABLE_VariantPredInfo_2_48);
      hlds__hlds_pred__pred_info_set_name_3_p_0(VariantName_27, STATE_VARIABLE_VariantPredInfo_2_48, &STATE_VARIABLE_VariantPredInfo_3_49);
      Var_50 = (MR_Integer) 0;
      hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0(Var_50, STATE_VARIABLE_VariantPredInfo_3_49, &STATE_VARIABLE_VariantPredInfo_4_51);
      hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_VariantPredInfo_1_47, &Origin0_29);
      TypeCtorInfo_79_79 = (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0);
      TypeCtorInfo_80_80 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      Var_52 = (MR_Word) (&transform_hlds__lco_scalar_common_2[10]);
      AddrOutArgNums_30 = mercury__list__map_2_f_0(TypeCtorInfo_79_79, TypeCtorInfo_80_80, Var_52, AddrOutArgs_10);
      {
        ProcTransform_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ProcTransform_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, ProcTransform_31, 1) = ((MR_Box) (VariantNumber_20));
        MR_hl_field(3, ProcTransform_31, 2) = ((MR_Box) (AddrOutArgNums_30));
      }
      {
        Origin_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Origin_32, 0) = ((MR_Box) (ProcTransform_31));
        MR_hl_field(3, Origin_32, 1) = ((MR_Box) (Origin0_29));
        MR_hl_field(3, Origin_32, 2) = ((MR_Box) (PredId_8));
        MR_hl_field(3, Origin_32, 3) = ((MR_Box) (ProcId_9));
      }
      hlds__hlds_pred__pred_info_set_origin_3_p_0(Origin_32, STATE_VARIABLE_VariantPredInfo_4_51, &STATE_VARIABLE_VariantPredInfo_5_53);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_VariantPredInfo_1_47, &ProcTable_33);
      TypeCtorInfo_83_83 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
      TypeCtorInfo_84_84 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
      mercury__map__lookup_3_p_0(TypeCtorInfo_83_83, TypeCtorInfo_84_84, ProcTable_33, ((MR_Box) (ProcId_9)), &conv1_ProcInfo_34);
      ProcInfo_34 = ((MR_Word) (conv1_ProcInfo_34));
      VariantProcTable_35 = mercury__map__singleton_2_f_0(TypeCtorInfo_83_83, TypeCtorInfo_84_84, ((MR_Box) (ProcId_9)), ((MR_Box) (ProcInfo_34)));
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(VariantProcTable_35, STATE_VARIABLE_VariantPredInfo_5_53, &STATE_VARIABLE_VariantPredInfo_6_54);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_21, &PredTable0_36);
      hlds__pred_table__predicate_table_insert_4_p_0(STATE_VARIABLE_VariantPredInfo_6_54, &VariantPredId_37, PredTable0_36, &PredTable_38);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_38, ModuleInfo0_21, &ModuleInfo_39);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *VariantPredProcId_11 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (VariantPredId_37));
        MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_9));
      }
      Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_42, 1))));
      Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_42, 2))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_42, 3)));
      {
        STATE_VARIABLE_Info_1_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_1_55, 0) = ((MR_Box) (ModuleInfo_39));
        MR_hl_field(0, STATE_VARIABLE_Info_1_55, 1) = ((MR_Box) (Var_65));
        MR_hl_field(0, STATE_VARIABLE_Info_1_55, 2) = ((MR_Box) (Var_66));
        MR_hl_field(0, STATE_VARIABLE_Info_1_55, 3) = (MR_Box) (packed_word_0);
      }
      TypeCtorInfo_85_85 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
      TypeCtorInfo_86_86 = (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0);
      {
        NewVariant_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewVariant_40, 0) = ((MR_Box) (AddrOutArgs_10));
        MR_hl_field(0, NewVariant_40, 1) = ((MR_Box) (*VariantPredProcId_11));
        MR_hl_field(0, NewVariant_40, 2) = ((MR_Box) (*VariantSymName_12));
      }
      mercury__multi_map__set_4_p_0(TypeCtorInfo_85_85, TypeCtorInfo_86_86, ((MR_Box) (PredProcId_14)), ((MR_Box) (NewVariant_40)), CurSCCVariants0_15, &CurSCCVariants_41);
      Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_55, 0))));
      Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_55, 2))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_55, 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_43 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
        MR_hl_field(0, base, 1) = ((MR_Box) (CurSCCVariants_41));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_71));
        MR_hl_field(0, base, 3) = (MR_Box) (packed_word_1);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__lco__match_existing_variant_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AddrArgNums_6,
  MR_Word * VariantId_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word VariantId0_4;
    MR_Word VariantIds_5;
    MR_Word TypeInfo_11_11;
    MR_Word Var_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      VariantId0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      VariantIds_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Var_10 = ((MR_Word) ((MR_hl_field(0, VariantId0_4, 0))));
      TypeInfo_11_11 = (MR_Word) (&transform_hlds__lco_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (AddrArgNums_6)), ((MR_Box) (Var_10)));
      if (succeeded)
      {
        *VariantId_7 = VariantId0_4;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = VariantIds_5;

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

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_18;

  conv1_LambdaHeadVar__2_18 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1186__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_18));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_15;

  conv0_LambdaHeadVar__2_15 = transform_hlds__lco__IntroducedFrom__func__make_variant_args__1183__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_15));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__lco__make_variant_args_4_p_0(
  MR_Word HighLevelData_5,
  MR_Word AddrVarFieldIds_6,
  MR_Word Mismatches_7,
  MR_Word * VariantArgs_8)
{
  MR_Word MakeArg_9;

  switch (HighLevelData_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MakeArg_9 = (MR_Word) (&transform_hlds__lco_scalar_common_2[9]);
      break;
    case (MR_Integer) 1:
      {
        MakeArg_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MakeArg_9, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_6[1]));
        MR_hl_field(0, MakeArg_9, 1) = ((MR_Box) (transform_hlds__lco__make_variant_args_4_p_0_2));
        MR_hl_field(0, MakeArg_9, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, MakeArg_9, 3) = ((MR_Box) (AddrVarFieldIds_6));
      }
      break;
  }
  *VariantArgs_8 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__lco_scalar_common_2[4]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0), MakeArg_9, Mismatches_7);
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
    MR_Word CallHeadArgs_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word UpdatedCallArg_27;
    MR_Word UpdatedCallArgs_28;
    MR_Word MismatchesTail_31;
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Integer Var_39;
    MR_Word STATE_VARIABLE_Subst_1_40;
    MR_Word STATE_VARIABLE_Info_1_41;
    MR_Word STATE_VARIABLE_Info_2_48;
    MR_Word CallArgType_32;
    MR_Word CallArgTypeCtor_33;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_String Var_46;
    MR_Integer Var_47;

    CallArg_22 = ((MR_Word) ((MR_hl_field(0, Var_38, 0))));
    HeadArg_23 = ((MR_Word) ((MR_hl_field(0, Var_38, 1))));
    Var_39 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
    transform_hlds__lco__find_args_to_pass_by_addr_10_p_0(HeadVar__1_1, UnifyInputVars_2, CallHeadArgs_24, Var_39, &MismatchesTail_31, &UpdatedCallArgs_28, STATE_VARIABLE_Subst_0_7, &STATE_VARIABLE_Subst_1_40, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_1_41);
    Var_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) >> 1)) & (MR_Integer) 1);
    succeeded = (Var_43 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_41, 2))));
      parse_tree__var_table__lookup_var_type_3_p_0(Var_44, CallArg_22, &CallArgType_32);
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(CallArgType_32, &CallArgTypeCtor_33);
      if (succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(0, CallArgTypeCtor_33, 0))));
        Var_47 = ((MR_Integer) ((MR_hl_field(0, CallArgTypeCtor_33, 1))));
        succeeded = (Var_47 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, 0))));
            succeeded = (strcmp(Var_46, (MR_String) "float") == 0);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_41, 0))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_41, 1))));
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_41, 2))));
      MR_Word Var_70 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_41, 3))) & (MR_Integer) 1);

      {
        STATE_VARIABLE_Info_2_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_2_48, 0) = ((MR_Box) (Var_66));
        MR_hl_field(0, STATE_VARIABLE_Info_2_48, 1) = ((MR_Box) (Var_67));
        MR_hl_field(0, STATE_VARIABLE_Info_2_48, 2) = ((MR_Box) (Var_68));
        MR_hl_field(0, STATE_VARIABLE_Info_2_48, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_70)));
      }
    }
    else
      STATE_VARIABLE_Info_2_48 = STATE_VARIABLE_Info_1_41;
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (CallArg_22)), ((MR_Box) (HeadArg_23)));
    if (succeeded)
    {
      UpdatedCallArg_27 = CallArg_22;
      *HeadVar__5_5 = MismatchesTail_31;
      succeeded = mercury__bag__member_2_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (HeadArg_23)), UnifyInputVars_2);
      if (succeeded)
      {
        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_48, 0))));
        MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_48, 1))));
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_48, 2))));
        MR_Word Var_75 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_2_48, 3))) & (MR_Integer) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_72));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_73));
          MR_hl_field(0, base, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_75)));
        }
      }
      else
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_2_48;
      *STATE_VARIABLE_Subst_8 = STATE_VARIABLE_Subst_1_40;
    }
    else
    {
      MR_Word Var_53;

      transform_hlds__lco__make_address_var_5_p_0(HeadVar__1_1, CallArg_22, &UpdatedCallArg_27, STATE_VARIABLE_Info_2_48, STATE_VARIABLE_Info_10);
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (ArgNum_4));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (CallArg_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, base, 1) = ((MR_Box) (MismatchesTail_31));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[4]), (MR_Word) (&transform_hlds__lco_scalar_common_1[4]), ((MR_Box) (CallArg_22)), ((MR_Box) (UpdatedCallArg_27)), STATE_VARIABLE_Subst_1_40, STATE_VARIABLE_Subst_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UpdatedCallArg_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (UpdatedCallArgs_28));
    }
  }
}

static void MR_CALL 
transform_hlds__lco__make_address_var_5_p_0(
  MR_Word ConstInfo_6,
  MR_Word Var_7,
  MR_Word * AddrVar_8,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word VarTable0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 2))));
  MR_Word VarEntry_11;
  MR_String Name_12;
  MR_Word VarType_14;
  MR_Word HighLevelData_16;
  MR_Word AddrVarType_17;
  MR_String AddrName_18;
  MR_Word AddrVarEntry_19;
  MR_Word VarTable_20;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Unsigned packed_word_0;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_10, Var_7, &VarEntry_11);
  Name_12 = parse_tree__var_table__var_entry_name_default_3_f_0(Var_7, VarEntry_11, (MR_String) "SCCcallarg");
  VarType_14 = ((MR_Word) ((MR_hl_field(0, VarEntry_11, 1))));
  HighLevelData_16 = ((MR_Unsigned) ((MR_hl_field(0, ConstInfo_6, 6))) & (MR_Integer) 1);
  switch (HighLevelData_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RefTypeName_43;
        MR_Word Var_44;
        MR_Word Var_46;

        Var_44 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        {
          RefTypeName_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RefTypeName_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, RefTypeName_43, 1) = ((MR_Box) ((MR_String) "store_at_ref_type"));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (VarType_14));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          AddrVarType_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AddrVarType_17, 0) = ((MR_Box) (RefTypeName_43));
          MR_hl_field(1, AddrVarType_17, 1) = ((MR_Box) (Var_46));
          MR_hl_field(1, AddrVarType_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      AddrVarType_17 = parse_tree__builtin_lib_types__void_type_0_f_0();
      break;
  }
  AddrName_18 = mercury__string__f_43_43_2_f_0((MR_String) "Addr", Name_12);
  {
    AddrVarEntry_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AddrVarEntry_19, 0) = ((MR_Box) (AddrName_18));
    MR_hl_field(0, AddrVarEntry_19, 1) = ((MR_Box) (AddrVarType_17));
    MR_hl_field(0, AddrVarEntry_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(AddrVarEntry_19, AddrVar_8, VarTable0_10, &VarTable_20);
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 0))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 1))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 3)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_20));
    MR_hl_field(0, base, 3) = (MR_Box) (packed_word_0);
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__update_call_args_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__lco__IntroducedFrom__pred__update_call_args__1024__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
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
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_10;

      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_8[0]));
        MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__lco__update_call_args_6_p_0_1));
        MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_10, 3) = ((MR_Box) (HeadVar__5_5));
        MR_hl_field(0, Var_10, 4) = ((MR_Box) (*HeadVar__6_6));
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
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word ArgVar_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ArgVars_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word CalleeType_38;
      MR_Word TopFunctorMode_39;

      parse_tree__var_table__lookup_var_type_3_p_0(HeadVar__2_2, ArgVar_34, &CalleeType_38);
      hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(HeadVar__1_1, Var_54, CalleeType_38, &TopFunctorMode_39);
      switch (TopFunctorMode_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_UpdatedArgVars_1_43;

            transform_hlds__lco__update_call_args_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_53, ArgVars_35, HeadVar__5_5, &STATE_VARIABLE_UpdatedArgVars_1_43);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ArgVar_34));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_UpdatedArgVars_1_43));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UpdatedArgVar_40;
            MR_Word STATE_VARIABLE_UpdatedCallOutArgVars_1_45;
            MR_Word STATE_VARIABLE_UpdatedArgVars_3_48;

            if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.update_call_args\'/6", (MR_String) "no UpdatedCallOutArgs");
                return;
              }
            else
            {
              UpdatedArgVar_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
              STATE_VARIABLE_UpdatedCallOutArgVars_1_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
            }
            transform_hlds__lco__update_call_args_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_53, ArgVars_35, STATE_VARIABLE_UpdatedCallOutArgVars_1_45, &STATE_VARIABLE_UpdatedArgVars_3_48);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (UpdatedArgVar_40));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_UpdatedArgVars_3_48));
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
    MR_Word TypeCtorInfo_73_87;
    MR_Word TypeInfo_75_89;
    MR_Word GoalExpr_24;
    MR_Word GoalInfo_25;
    MR_Word PredId_26;
    MR_Integer ProcId_27;
    MR_Word Args_28;
    MR_Word ModuleInfo_32;
    MR_Word ProcInfo_33;
    MR_Word VarTable_34;
    MR_Word CalleeProcInfo_35;
    MR_Word CalleeArgModes_36;
    MR_Word UnusedArgs_38;
    MR_Integer NumOutArgs_40;
    MR_Word CurrProcOutArgs_41;
    MR_Integer NumCurrProcOutArgs_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_90;
    MR_Word _InArgs_37;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      RevGoal_16 = ((MR_Word) ((MR_hl_field(1, RevGoals0_11, 0))));
      RevGoalsTail_17 = ((MR_Word) ((MR_hl_field(1, RevGoals0_11, 1))));
      GoalExpr_24 = ((MR_Word) ((MR_hl_field(0, RevGoal_16, 0))));
      GoalInfo_25 = ((MR_Word) ((MR_hl_field(0, RevGoal_16, 1))));
      succeeded = ((MR_tag((MR_Word) GoalExpr_24)) == (MR_Integer) 2);
      if (succeeded)
      {
        PredId_26 = ((MR_Word) ((MR_hl_field(2, GoalExpr_24, 0))));
        ProcId_27 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_24, 1))));
        Args_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr_24, 2))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, ConstInfo_10, 1))));
        TypeCtorInfo_73_87 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (PredId_26));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (ProcId_27));
        }
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_73_87, ((MR_Box) (Var_43)), Var_44);
        if (succeeded)
        {
          Var_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_25);
          ProcInfo_33 = ((MR_Word) ((MR_hl_field(0, ConstInfo_10, 4))));
          Var_90 = ((((MR_Unsigned) ((MR_hl_field(0, ConstInfo_10, 6))) >> 2)) & (MR_Integer) 7);
          succeeded = (Var_45 == Var_90);
          if (succeeded)
          {
            ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
            hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_33, &VarTable_34);
            hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_32, PredId_26, ProcId_27, &CalleeProcInfo_35);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_35, &CalleeArgModes_36);
            transform_hlds__lco__classify_proc_call_args_7_p_0(ModuleInfo_32, VarTable_34, Args_28, CalleeArgModes_36, &_InArgs_37, &OutArgs_18, &UnusedArgs_38);
            succeeded = (UnusedArgs_38 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeInfo_75_89 = (MR_Word) (&transform_hlds__lco_scalar_common_1[4]);
              mercury__list__length_2_p_0(TypeInfo_75_89, OutArgs_18, &NumOutArgs_40);
              CurrProcOutArgs_41 = ((MR_Word) ((MR_hl_field(0, ConstInfo_10, 5))));
              mercury__list__length_2_p_0(TypeInfo_75_89, CurrProcOutArgs_41, &NumCurrProcOutArgs_42);
              succeeded = (NumOutArgs_40 == NumCurrProcOutArgs_42);
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
        MR_Word STATE_VARIABLE_AfterGoals_1_21;
        MR_Word next_value_of_RevGoals0_11;
        MR_Word next_value_of_STATE_VARIABLE_AfterGoals_0_19;

        succeeded = transform_hlds__lco__potentially_moveable_goal_1_p_0(RevGoal_16);
        if (succeeded)
        {
          {
            STATE_VARIABLE_AfterGoals_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_AfterGoals_1_21, 0) = ((MR_Box) (RevGoal_16));
            MR_hl_field(1, STATE_VARIABLE_AfterGoals_1_21, 1) = ((MR_Box) (STATE_VARIABLE_AfterGoals_0_19));
          }
          // direct tailcall eliminated
          ;
          next_value_of_RevGoals0_11 = RevGoalsTail_17;
          next_value_of_STATE_VARIABLE_AfterGoals_0_19 = STATE_VARIABLE_AfterGoals_1_21;
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
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lco.classify_proc_call_args\'/7", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word CalleeMode_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word CalleeModes_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word CalleeType_37;
      MR_Word TopFunctorMode_38;
      MR_Word STATE_VARIABLE_InArgs_1_42;
      MR_Word STATE_VARIABLE_OutArgs_1_43;
      MR_Word STATE_VARIABLE_UnusedArgs_1_44;

      transform_hlds__lco__classify_proc_call_args_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_45, CalleeModes_33, &STATE_VARIABLE_InArgs_1_42, &STATE_VARIABLE_OutArgs_1_43, &STATE_VARIABLE_UnusedArgs_1_44);
      parse_tree__var_table__lookup_var_type_3_p_0(HeadVar__2_2, Var_46, &CalleeType_37);
      hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(HeadVar__1_1, CalleeMode_32, CalleeType_37, &TopFunctorMode_38);
      switch (TopFunctorMode_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InArgs_1_42));
            }
            *HeadVar__6_6 = STATE_VARIABLE_OutArgs_1_43;
            *HeadVar__7_7 = STATE_VARIABLE_UnusedArgs_1_44;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OutArgs_1_43));
            }
            *HeadVar__5_5 = STATE_VARIABLE_InArgs_1_42;
            *HeadVar__7_7 = STATE_VARIABLE_UnusedArgs_1_44;
          }
          break;
        case (MR_Integer) 2:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_UnusedArgs_1_44));
            }
            *HeadVar__5_5 = STATE_VARIABLE_InArgs_1_42;
            *HeadVar__6_6 = STATE_VARIABLE_OutArgs_1_43;
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__lco__potentially_moveable_goal_1_p_0(
  MR_Word Goal_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, Goal_2, 0))));
    MR_Word GoalInfo_4 = ((MR_Word) ((MR_hl_field(0, Goal_2, 1))));
    MR_Word Var_55;

    // setup for model_semi tailcalls optimized into a loop
    ;
    Var_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_4);
    succeeded = (Var_55 == (MR_Integer) 0);
    if (succeeded)
      switch (MR_tag((MR_Word) GoalExpr_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));
                MR_Word GenericDetism_18 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_3, 5))) & (MR_Integer) 7);

                succeeded = ((MR_tag((MR_Word) GenericCall_14)) == (MR_Integer) 3);
                if (succeeded)
                  succeeded = (GenericDetism_18 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));
                MR_Word SubGoal_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));

                succeeded = ((((MR_tag((MR_Word) Reason_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_10, 0)))) == (MR_Integer) 6)));
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

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_ModuleInfo_30;

  transform_hlds__lco__update_variant_pred_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ModuleInfo_30);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ModuleInfo_30));
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ModuleInfo_14;

  transform_hlds__lco__store_updated_procs_in_module_info_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ModuleInfo_14);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_14));
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
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_27;
  MR_Word conv2_STATE_VARIABLE_CurSCCVariants_29;
  MR_Word conv1_STATE_VARIABLE_CurSCCUpdates_31;
  MR_Word conv0_STATE_VARIABLE_Permitted_33;

  transform_hlds__lco__lco_proc_if_permitted_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_CurSCCVariants_29, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_CurSCCUpdates_31, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_Permitted_33);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_27));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_CurSCCVariants_29));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_CurSCCUpdates_31));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Permitted_33));
}

static void MR_CALL 
transform_hlds__lco__lco_scc_5_p_0(
  MR_Word SCC_6,
  MR_Word VariantMap_7,
  MR_Word * VariantMap_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22)
{
  MR_bool succeeded;
  MR_Word CurSCCVariantMap_10;
  MR_Word CurSCCUpdateMap_11;
  MR_Word Permitted_12;
  MR_Word CurSCCVariants_13;
  MR_Word CurSCCUpdates_14;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_ModuleInfo_1_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Box conv7_STATE_VARIABLE_ModuleInfo_1_24;
  MR_Box conv6_CurSCCVariantMap_10;
  MR_Box conv5_CurSCCUpdateMap_11;
  MR_Box conv4_Permitted_12;

  *VariantMap_3 = VariantMap_7;
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_5[0]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (*VariantMap_3));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (SCC_6));
  }
  Var_25 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco_scalar_common_1[0]));
  Var_26 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0));
  mercury__set__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lco_scalar_common_2[0]), (MR_Word) (&transform_hlds__lco_scalar_common_2[1]), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0), Var_23, SCC_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_21)), &conv7_STATE_VARIABLE_ModuleInfo_1_24, ((MR_Box) (Var_25)), &conv6_CurSCCVariantMap_10, ((MR_Box) (Var_26)), &conv5_CurSCCUpdateMap_11, ((MR_Box) ((MR_Integer) 1)), &conv4_Permitted_12);
  STATE_VARIABLE_ModuleInfo_1_24 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_1_24));
  CurSCCVariantMap_10 = ((MR_Word) (conv6_CurSCCVariantMap_10));
  CurSCCUpdateMap_11 = ((MR_Word) (conv5_CurSCCUpdateMap_11));
  Permitted_12 = ((MR_Word) (conv4_Permitted_12));
  mercury__multi_map__to_flat_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0), CurSCCVariantMap_10, &CurSCCVariants_13);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), CurSCCUpdateMap_11, &CurSCCUpdates_14);
  succeeded = (Permitted_12 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (CurSCCUpdates_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_ModuleInfo_2_37;
    MR_Word Var_38;
    MR_Box conv9_STATE_VARIABLE_ModuleInfo_2_37;
    MR_Box conv11_STATE_VARIABLE_ModuleInfo_22;

    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lco_scalar_common_2[8]), CurSCCUpdates_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_24)), &conv9_STATE_VARIABLE_ModuleInfo_2_37);
    STATE_VARIABLE_ModuleInfo_2_37 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_2_37));
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&transform_hlds__lco_scalar_common_7[0]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (transform_hlds__lco__lco_scc_5_p_0_3));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (CurSCCVariantMap_10));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__lco_scalar_common_2[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_38, CurSCCVariants_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_37)), &conv11_STATE_VARIABLE_ModuleInfo_22);
    *STATE_VARIABLE_ModuleInfo_22 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_22));
  }
  else
    *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
}

static MR_Integer MR_CALL 
transform_hlds__lco__va_pos_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));

  return HeadVar__2_2;
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
  MR_Box closure = closure_arg;
  MR_Word conv1_VariantMap_3;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_22;

  transform_hlds__lco__lco_scc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_VariantMap_3, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_VariantMap_3));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_22));
}

void MR_CALL 
transform_hlds__lco__lco_modulo_constructors_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_Word DepInfo_4;
  MR_Word SCCs_5;
  MR_Word STATE_VARIABLE_ModuleInfo_1_9;
  MR_Word Var_11;
  MR_Box conv3_Var_6;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_8;

  hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_1_9, &DepInfo_4);
  SCCs_5 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_4);
  Var_11 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__lco_scalar_common_1[0]));
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__lco_scalar_common_1[1]), (MR_Word) (&transform_hlds__lco_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lco_scalar_common_2[7]), SCCs_5, ((MR_Box) (Var_11)), &conv3_Var_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_9)), &conv2_STATE_VARIABLE_ModuleInfo_8);
  *STATE_VARIABLE_ModuleInfo_8 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_8));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____allow_float_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____allow_float_addr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____allow_float_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____allow_float_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____field_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____field_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____field_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____field_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____goal_and_init_instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____goal_and_init_instmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____goal_and_init_instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____goal_and_init_instmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_const_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____lco_const_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_const_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____lco_const_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____lco_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____lco_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____lco_is_permitted_on_scc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____lco_is_permitted_on_scc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____proc_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____proc_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____proc_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____proc_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____store_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____store_target_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____store_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____store_target_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____var_to_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____var_to_target_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____var_to_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____var_to_target_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____variant_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____variant_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____variant_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____variant_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____variant_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____variant_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__lco____Unify____variant_transforms_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__lco____Unify____variant_transforms_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__lco____Compare____variant_transforms_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__lco____Compare____variant_transforms_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_goal_and_init_instmap_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_const_info_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_info_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_lco_is_permitted_on_scc_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_proc_changed_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_store_target_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_var_to_target_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_arg_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_id_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_map_0);
  MR_register_type_ctor_info(&transform_hlds__lco__transform_hlds__lco__type_ctor_info_variant_transforms_0);
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
