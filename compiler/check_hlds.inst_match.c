/*
** Automatically generated from `inst_match.m'
** by the Mercury compiler,
** version rotd-2025-10-30
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


// :- module check_hlds.inst_match.
// :- implementation.

/*
INIT mercury__check_hlds__inst_match__init
ENDINIT
*/

#include "check_hlds.inst_match.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_abstract_unify.mih"
#include "check_hlds.inst_merge.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.inst_lookup.mih"
#include "hlds.inst_test.mih"
#include "hlds.inst_util.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_any_matches_any_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_any_matches_any_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_any_matches_any_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_any_matches_any_0[2];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_any_matches_any_0[2];

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2;

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_calculate_sub_0[3];

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3];

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_dir_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_dir_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_calculate_sub_dir_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_dir_0[2];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_dir_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_ground_matches_bound_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0[2];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0[2];

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[6];

static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[6];

static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1];

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3];

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1];

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_var_subs_result_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_var_subs_result_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_var_subs_result_0_1[3];

static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_var_subs_result_0_1[3];

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_var_subs_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_var_subs_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_var_subs_result_0_1[1];

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_var_subs_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_var_subs_result_0[2];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_var_subs_result_0[2];

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_maybe_inst_var_sub_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_maybe_inst_var_sub_0_1[1];

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_maybe_inst_var_sub_0_1;

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_maybe_inst_var_sub_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_maybe_inst_var_sub_0_1[1];

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_maybe_inst_var_sub_0[2];

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_maybe_inst_var_sub_0[2];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_maybe_inst_var_sub_0[2];

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_uniqueness_comparison_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2];

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_var_subs_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_var_subs_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_match____Compare____maybe_inst_var_sub_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____maybe_inst_var_sub_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____any_matches_any_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____any_matches_any_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Expansions_6,
  MR_Word Type_7,
  MR_Word Inst_8);

static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
  MR_Word InstA_6,
  MR_Word Type_7,
  MR_Word InstVar_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_6_p_0(
  MR_Word tscc_proc_1_input_1_CalcSub_7,
  MR_Word tscc_proc_1_input_2_Type_8,
  MR_Word tscc_proc_1_input_3_InstA_9,
  MR_Word tscc_proc_1_input_4_InstB_10,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_2_6_p_0(
  MR_Word tscc_proc_2_input_1_CalcSub_7,
  MR_Word tscc_proc_2_input_2_Type_8,
  MR_Word tscc_proc_2_input_3_InstA_9,
  MR_Word tscc_proc_2_input_4_InstB_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_6_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_matches_binding_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word HOInstInfoA_7,
  MR_Word HOInstInfoB_8);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_6_p_0(
  MR_Word tscc_proc_1_input_1_CalcSub_7,
  MR_Word tscc_proc_1_input_2_Type_8,
  MR_Word tscc_proc_1_input_3_InstA_9,
  MR_Word tscc_proc_1_input_4_InstB_10,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_2_6_p_0(
  MR_Word tscc_proc_2_input_1_CalcSub_7,
  MR_Word tscc_proc_2_input_2_Type_8,
  MR_Word tscc_proc_2_input_3_InstA_9,
  MR_Word tscc_proc_2_input_4_InstB_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_6_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_matches_initial_mt_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Uniq_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_functor_list_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Uniq_2,
  MR_Word Type_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2);

static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstA_2,
  MR_Word InstB_3);

static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_functor_list_uniq_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word BoundFunctors_3,
  MR_Word Uniq_4);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_6_p_0(
  MR_Word CalcSub_7,
  MR_Word Type_8,
  MR_Word HOInstInfoA_9,
  MR_Word HOInstInfoB_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_6_p_0(
  MR_Word tscc_proc_1_input_1_CalcSub_7,
  MR_Word tscc_proc_1_input_2_Type_8,
  MR_Word tscc_proc_1_input_3_InstA_9,
  MR_Word tscc_proc_1_input_4_InstB_10,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_2_6_p_0(
  MR_Word tscc_proc_2_input_1_CalcSub_7,
  MR_Word tscc_proc_2_input_2_Type_8,
  MR_Word tscc_proc_2_input_3_InstA_9,
  MR_Word tscc_proc_2_input_4_InstB_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_1_5_p_0(
  MR_Word CalcSub_6,
  MR_Word Type_7,
  MR_Word HOInstInfo_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_1_6_p_0(
  MR_Word CalcSub_7,
  MR_Word Type_8,
  MR_Word PredInstA_9,
  MR_Word PredInstB_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(
  MR_Word CalcSub_7,
  MR_Word Type_8,
  MR_Word HOInstInfoA_9,
  MR_Word HOInstInfoB_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_1_5_p_0(
  MR_Word CalcSub_6,
  MR_Word Type_7,
  MR_Word PredInst_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(
  MR_Word CalcSub_7,
  MR_Word Type_8,
  MR_Word Inst_9,
  MR_Word * ContainsNonstd_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_7_p_0(
  MR_Word CalcSub_8,
  MR_Word Type_9,
  MR_Word Inst_10,
  MR_Word STATE_VARIABLE_Expansions_0_31,
  MR_Word * ContainsNonstd_12,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_nondefault_func_mode_7_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__inst_match__bound_functor_list_contains_nondefault_func_mode_7_p_0(
  MR_Word CalcSub_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_6_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_matches_final_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static MR_bool MR_CALL 
check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0(
  MR_Word CalcSub_8,
  MR_Word Type_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__do_handle_inst_var_subs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__do_handle_inst_var_subs_7_p_0(
  MR_Word CalcSubDir_8,
  MR_Word Type_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_is_complete_for_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Expansions_6,
  MR_Word Type_7,
  MR_Word BoundFunctors_8);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_is_complete_for_type_loop_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_is_complete_for_type_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_NamesAritiesArgTypes_0_4,
  MR_Word * STATE_VARIABLE_NamesAritiesArgTypes_5);

static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_functor_list_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Uniq_5,
  MR_Word BoundFunctors_6);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_matches_uniq_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Uniq_5,
  MR_Word BoundFunctors_6);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____any_matches_any_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____any_matches_any_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_var_subs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_var_subs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____maybe_inst_var_sub_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____maybe_inst_var_sub_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__inst_match_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_3[1][3];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_5[1][8];




static /* final */ const MR_Box check_hlds__inst_match_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_2[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0))
  },
};



#include "array.mh"
#include "check_hlds.inst_match.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_any_matches_any_0_0 = {
  (MR_String) "any_does_not_match_any",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_any_matches_any_0_1 = {
  (MR_String) "any_does_match_any",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_any_matches_any_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_any_matches_any_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_any_matches_any_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_any_matches_any_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_any_matches_any_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_any_matches_any_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_any_matches_any_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_any_matches_any_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____any_matches_any_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____any_matches_any_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "any_matches_any",
  { check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_any_matches_any_0 },
  { check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_any_matches_any_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_any_matches_any_0,

};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0 = {
  (MR_String) "cs_forward",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1 = {
  (MR_String) "cs_reverse",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2 = {
  (MR_String) "cs_none",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____calculate_sub_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____calculate_sub_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "calculate_sub",
  { check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0 },
  { check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_calculate_sub_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0,

};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_dir_0_0 = {
  (MR_String) "cs_forward",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_dir_0_1 = {
  (MR_String) "cs_reverse",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_calculate_sub_dir_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_dir_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_dir_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_dir_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_dir_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_dir_0_1
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_dir_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____calculate_sub_dir_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____calculate_sub_dir_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "calculate_sub_dir",
  { check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_dir_0 },
  { check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_calculate_sub_dir_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_dir_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____expansions_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____expansions_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "expansions",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0 = {
  (MR_String) "ground_matches_bound_if_complete",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1 = {
  (MR_String) "ground_matches_bound_always",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_ground_matches_bound_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "ground_matches_bound",
  { check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0 },
  { check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_ground_matches_bound_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_maybe_inst_var_sub_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_any_matches_any_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0)
};

static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[6] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_expansions",
  (MR_String) "imi_maybe_sub",
  (MR_String) "imi_uniqueness_comparison",
  (MR_String) "imi_any_matches_any",
  (MR_String) "imi_ground_matches_bound"
};

static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[6] = {
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
    (MR_Integer) 2,
    (MR_Integer) 1
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

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0 = {
  (MR_String) "inst_match_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0,
  check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0,
  check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1] = { &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0 };

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1] = { &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0 };

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_info_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_info_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_info",
  { check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0 },
  { check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0 = {
  (MR_String) "inst_match_inputs",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1] = { &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0 };

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1] = { &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0 };

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_inputs",
  { check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0 },
  { check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_var_subs_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_var_subs_result_0_0 = {
  (MR_String) "ivsr_recurse",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_var_subs_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_var_subs_result_0_1[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_var_subs_result_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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
  }
};

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_var_subs_result_0_1 = {
  (MR_String) "ivsr_continue",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_var_subs_result_0_1,
  NULL,
  check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_var_subs_result_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_var_subs_result_0_0[1] = { &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_var_subs_result_0_0 };

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_var_subs_result_0_1[1] = { &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_var_subs_result_0_1 };

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_var_subs_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_var_subs_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_var_subs_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_var_subs_result_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_var_subs_result_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_var_subs_result_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_var_subs_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_var_subs_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_var_subs_result_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_var_subs_result_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_var_subs_result",
  { check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_var_subs_result_0 },
  { check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_var_subs_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_var_subs_result_0,

};

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_maybe_inst_var_sub_0_0 = {
  (MR_String) "no_inst_var_sub",
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

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_maybe_inst_var_sub_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0) };

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_maybe_inst_var_sub_0_1 = {
  (MR_String) "inst_var_sub",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_match__check_hlds__inst_match__field_types_maybe_inst_var_sub_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_maybe_inst_var_sub_0_0[1] = { &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_maybe_inst_var_sub_0_0 };

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_maybe_inst_var_sub_0_1[1] = { &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_maybe_inst_var_sub_0_1 };

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_maybe_inst_var_sub_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_maybe_inst_var_sub_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_maybe_inst_var_sub_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_maybe_inst_var_sub_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_maybe_inst_var_sub_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_maybe_inst_var_sub_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_maybe_inst_var_sub_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_maybe_inst_var_sub_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____maybe_inst_var_sub_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____maybe_inst_var_sub_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "maybe_inst_var_sub",
  { check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_maybe_inst_var_sub_0 },
  { check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_maybe_inst_var_sub_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_maybe_inst_var_sub_0,

};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0 = {
  (MR_String) "uc_match",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1 = {
  (MR_String) "uc_instantiated",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "uniqueness_comparison",
  { check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0 },
  { check_hlds__inst_match__check_hlds__inst_match__enum_ordinal_ordered_uniqueness_comparison_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0,

};

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
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
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_var_subs_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      MR_Word ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 3);
      MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word SubResult1_11;
      MR_Integer Var_24 = (MR_Integer) (ArgX1_9);
      MR_Integer Var_25 = (MR_Integer) (ArgY1_10);

      succeeded = (Var_24 < Var_25);
      if (succeeded)
      {
        SubResult1_11 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_24 > Var_25);
        if (succeeded)
        {
          SubResult1_11 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_11;
      else
      {
        MR_Word SubResult2_14;

        parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_14, ArgX2_12, ArgY2_13);
        succeeded = (SubResult2_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_14;
        else
          parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX3_15, ArgY3_16);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_var_subs_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_10;
    MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = (ArgX1_7 == ArgY1_8);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_9, ArgY2_10);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_11, ArgY3_12);
      }
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
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

    parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
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

    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
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
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        check_hlds__inst_match____Compare____maybe_inst_var_sub_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_29 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_30 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_29 < Var_30);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_29 > Var_30);
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
            MR_Word SubResult5_18;
            MR_Integer Var_31 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_32 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_31 < Var_32);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_31 > Var_32);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_33 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_34 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_33 < Var_34);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_33 > Var_34);
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

static void MR_CALL 
check_hlds__inst_match____Compare____maybe_inst_var_sub_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = check_hlds__inst_match____Unify____maybe_inst_var_sub_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
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

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____maybe_inst_var_sub_0_0(
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
      TypeInfo_9_9 = (MR_Word) (&check_hlds__inst_match_scalar_common_3[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0(
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

MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);
  MR_Integer Var_7 = (MR_Integer) (Cast_HeadVar1_4);
  MR_Integer Var_8 = (MR_Integer) (Cast_HeadVar2_5);

  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > Var_8);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
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
check_hlds__inst_match____Unify____calculate_sub_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____any_matches_any_0_0(
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
check_hlds__inst_match____Unify____any_matches_any_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Expansions_6,
  MR_Word Type_7,
  MR_Word Inst_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_8)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_8)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_12_27;
          MR_Word BoundFunctors_13 = ((MR_Word) ((MR_hl_field(2, Inst_8, 2))));
          MR_Word NamesAritiesArgTypes0_24;
          MR_Word NamesAritiesArgTypes1_25;
          MR_Word NamesAritiesArgTypes_26;

          succeeded = hlds__type_util__type_is_du_type_2_p_0(ModuleInfo_5, Type_7);
          if (succeeded)
          {
            hlds__type_util__all_du_ctor_arg_types_3_p_0(ModuleInfo_5, Type_7, &NamesAritiesArgTypes0_24);
            TypeInfo_12_27 = (MR_Word) (&check_hlds__inst_match_scalar_common_2[0]);
            mercury__list__sort_2_p_0(TypeInfo_12_27, NamesAritiesArgTypes0_24, &NamesAritiesArgTypes1_25);
            succeeded = check_hlds__inst_match__bound_functor_list_is_complete_for_type_loop_5_p_0(ModuleInfo_5, Expansions_6, BoundFunctors_13, NamesAritiesArgTypes1_25, &NamesAritiesArgTypes_26);
            if (succeeded)
              succeeded = (NamesAritiesArgTypes_26 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Name_9 = ((MR_Word) ((MR_hl_field(3, Inst_8, 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (Name_9)), Expansions_6);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word ExpandedInst_10;
                MR_Word Var_21;
                MR_Word next_value_of_Expansions_6;
                MR_Word next_value_of_Inst_8;

                hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, Name_9, &ExpandedInst_10);
                Var_21 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), Expansions_6, ((MR_Box) (Name_9)));
                // direct tailcall eliminated
                ;
                next_value_of_Expansions_6 = Var_21;
                next_value_of_Inst_8 = ExpandedInst_10;
                Expansions_6 = next_value_of_Expansions_6;
                Inst_8 = next_value_of_Inst_8;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
  MR_Word InstA_6,
  MR_Word Type_7,
  MR_Word InstVar_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 2))));

  if ((Var_79 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_26;
    MR_Word InstVarSub_28;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Unsigned packed_word_0;

    InstVarSub_28 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_8)), ((MR_Box) (InstA_6)));
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (InstVarSub_28));
    }
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 1))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_17 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_63));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 3) = (MR_Box) (packed_word_0);
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word InstVarSub0_10 = ((MR_Word) ((MR_hl_field(1, Var_79, 0))));
    MR_Word InstB_11;
    MR_Box conv0_InstB_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstVarSub0_10, ((MR_Box) (InstVar_8)), &conv0_InstB_11);
    if (succeeded)
    {
      InstB_11 = ((MR_Word) (conv0_InstB_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_70_70;
      MR_Word TypeCtorInfo_71_71;
      MR_Word ModuleInfo0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 0))));
      MR_Word InstAB_13;
      MR_Word ModuleInfo_14;
      MR_Word InstVarSub_15;
      MR_Word STATE_VARIABLE_Info_1_19;
      MR_Word Var_21;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Unsigned packed_word_1;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Unsigned packed_word_2;

      succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, InstA_6, InstB_11, &InstAB_13, ModuleInfo0_12, &ModuleInfo_14);
      if (succeeded)
      {
        Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 1))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 2))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 3)));
        {
          STATE_VARIABLE_Info_1_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_1_19, 0) = ((MR_Box) (ModuleInfo_14));
          MR_hl_field(0, STATE_VARIABLE_Info_1_19, 1) = ((MR_Box) (Var_40));
          MR_hl_field(0, STATE_VARIABLE_Info_1_19, 2) = ((MR_Box) (Var_41));
          MR_hl_field(0, STATE_VARIABLE_Info_1_19, 3) = (MR_Box) (packed_word_1);
        }
        TypeInfo_70_70 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[0]);
        TypeCtorInfo_71_71 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        mercury__map__det_update_4_p_0(TypeInfo_70_70, TypeCtorInfo_71_71, ((MR_Box) (InstVar_8)), ((MR_Box) (InstAB_13)), InstVarSub0_10, &InstVarSub_15);
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (InstVarSub_15));
        }
        Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_19, 0))));
        Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_19, 1))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_19, 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_17 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
          MR_hl_field(0, base, 3) = (MR_Box) (packed_word_2);
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Var_23;
      MR_Word InstVarSub_27;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Unsigned packed_word_3;

      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_8)), ((MR_Box) (InstA_6)), InstVarSub0_10, &InstVarSub_27);
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (InstVarSub_27));
      }
      Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 0))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 1))));
      packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_17 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_52));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
        MR_hl_field(0, base, 3) = (MR_Box) (packed_word_3);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__unique_matches_initial_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      succeeded = (HeadVar__2_2 == (MR_Integer) 3);
      break;
    case (MR_Integer) 4:
      switch (HeadVar__2_2) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 2:
      if (((MR_Unsigned) 29U & (((MR_Integer) 1 << HeadVar__2_2))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word PredInst_6)
{
  MR_bool succeeded;
  MR_Word Info_7;
  MR_Word Var_14;
  MR_Word PredOrFunc_16;
  MR_Word ArgModes_17;

  Var_14 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_6, 0))) & (MR_Integer) 1);
  ArgModes_17 = ((MR_Word) ((MR_hl_field(0, PredInst_6, 1))));
  {
    Info_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_7, 0) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, Info_7, 1) = ((MR_Box) (Var_14));
    MR_hl_field(0, Info_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_7, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  switch (PredOrFunc_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorInfo_22_31;
        MR_Integer Arity_20;
        MR_Word DefaultFunc_21;
        MR_Word PredOrFunc_23;
        MR_Word ModesA_24;
        MR_Word Det_26;
        MR_Word ModesB_27;
        MR_Word Types_29;
        MR_Integer Var_30;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_8;

        Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_17);
        DefaultFunc_21 = hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_20);
        PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_6, 0))) & (MR_Integer) 1);
        ModesA_24 = ((MR_Word) ((MR_hl_field(0, PredInst_6, 1))));
        Det_26 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_6, 3))) & (MR_Integer) 7);
        Var_32 = ((MR_Unsigned) ((MR_hl_field(0, DefaultFunc_21, 0))) & (MR_Integer) 1);
        ModesB_27 = ((MR_Word) ((MR_hl_field(0, DefaultFunc_21, 1))));
        Var_33 = ((MR_Unsigned) ((MR_hl_field(0, DefaultFunc_21, 3))) & (MR_Integer) 7);
        succeeded = (PredOrFunc_23 == Var_32);
        if (succeeded)
        {
          succeeded = (Det_26 == Var_33);
          if (succeeded)
          {
            TypeCtorInfo_22_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            Var_30 = mercury__list__length_1_f_0(TypeCtorInfo_22_31, ModesA_24);
            hlds__inst_util__get_higher_order_arg_types_3_p_0(Type_5, Var_30, &Types_29);
            succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0((MR_Integer) 2, Types_29, ModesA_24, ModesB_27, Info_7, &Var_8);
          }
        }
      }
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word Inst_6)
{
  MR_bool succeeded;
  MR_Word Info_7;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_8;

  Var_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_7, 0) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, Info_7, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Info_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_7, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  check_hlds__inst_match__inst_contains_nondefault_func_mode_2_7_p_0((MR_Integer) 2, Type_5, Inst_6, Var_18, &Var_15, Info_7, &Var_8);
  succeeded = ((MR_Integer) 1 == Var_15);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word InstA_7,
  MR_Word InstB_8)
{
  MR_bool succeeded;
  MR_Word Info0_9;
  MR_Word ThisExpansion_18;
  MR_Word Expansions0_19;
  MR_Word Expansions_20;

  Expansions0_19 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_9, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Info0_9, 1) = ((MR_Box) (Expansions0_19));
    MR_hl_field(0, Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  {
    ThisExpansion_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ThisExpansion_18, 0) = ((MR_Box) (InstA_7));
    MR_hl_field(0, ThisExpansion_18, 1) = ((MR_Box) (InstB_8));
    MR_hl_field(0, ThisExpansion_18, 2) = ((MR_Box) (Type_6));
  }
  succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_18)), Expansions0_19, &Expansions_20);
  if (succeeded)
  {
    MR_Word ExpandedInstA_21;
    MR_Word ExpandedInstB_22;
    MR_Word STATE_VARIABLE_Info_1_23;
    MR_Word Var_25;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Info0_9, 0))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Info0_9, 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_9, 3)));
    MR_Word Var_10;

    {
      STATE_VARIABLE_Info_1_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, STATE_VARIABLE_Info_1_23, 1) = ((MR_Box) (Expansions_20));
      MR_hl_field(0, STATE_VARIABLE_Info_1_23, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, STATE_VARIABLE_Info_1_23, 3) = (MR_Box) (packed_word_0);
    }
    hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_31, InstA_7, &ExpandedInstA_21);
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0))));
    hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_25, InstB_8, &ExpandedInstB_22);
    succeeded = check_hlds__inst_match__inst_matches_binding_2_6_p_0((MR_Integer) 2, Type_6, ExpandedInstA_21, ExpandedInstB_22, STATE_VARIABLE_Info_1_23, &Var_10);
  }
  else
    succeeded = MR_TRUE;
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word InstA_7,
  MR_Word InstB_8)
{
  MR_bool succeeded;
  MR_Word Info0_9;
  MR_Word ThisExpansion_18;
  MR_Word Expansions0_19;
  MR_Word Expansions_20;

  Expansions0_19 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_9, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Info0_9, 1) = ((MR_Box) (Expansions0_19));
    MR_hl_field(0, Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  {
    ThisExpansion_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ThisExpansion_18, 0) = ((MR_Box) (InstA_7));
    MR_hl_field(0, ThisExpansion_18, 1) = ((MR_Box) (InstB_8));
    MR_hl_field(0, ThisExpansion_18, 2) = ((MR_Box) (Type_6));
  }
  succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_18)), Expansions0_19, &Expansions_20);
  if (succeeded)
  {
    MR_Word ExpandedInstA_21;
    MR_Word ExpandedInstB_22;
    MR_Word STATE_VARIABLE_Info_1_23;
    MR_Word Var_25;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Info0_9, 0))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Info0_9, 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_9, 3)));
    MR_Word Var_10;

    {
      STATE_VARIABLE_Info_1_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, STATE_VARIABLE_Info_1_23, 1) = ((MR_Box) (Expansions_20));
      MR_hl_field(0, STATE_VARIABLE_Info_1_23, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, STATE_VARIABLE_Info_1_23, 3) = (MR_Box) (packed_word_0);
    }
    hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_31, InstA_7, &ExpandedInstA_21);
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0))));
    hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_25, InstB_8, &ExpandedInstB_22);
    succeeded = check_hlds__inst_match__inst_matches_binding_2_6_p_0((MR_Integer) 2, Type_6, ExpandedInstA_21, ExpandedInstB_22, STATE_VARIABLE_Info_1_23, &Var_10);
  }
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_6_p_0(
  MR_Word tscc_proc_1_input_1_CalcSub_7,
  MR_Word tscc_proc_1_input_2_Type_8,
  MR_Word tscc_proc_1_input_3_InstA_9,
  MR_Word tscc_proc_1_input_4_InstB_10,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_18)
{
  MR_Word tscc_proc_2_input_1_CalcSub_7;
  MR_Word tscc_proc_2_input_2_Type_8;
  MR_Word tscc_proc_2_input_3_InstA_9;
  MR_Word tscc_proc_2_input_4_InstB_10;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_18;

  // The code for TSCC PROC 1: pred check_hlds.inst_match.inst_matches_binding_mt/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_binding_mt/6-0
  ;
  // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_binding_2/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word CalcSub_7 = tscc_proc_1_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_1_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_1_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_1_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_17 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
    MR_Word STATE_VARIABLE_Info_18;
    MR_bool succeeded = MR_TRUE;
    MR_Word ThisExpansion_12;
    MR_Word Expansions0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 1))));
    MR_Word Expansions_14;

    {
      ThisExpansion_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ThisExpansion_12, 0) = ((MR_Box) (InstA_9));
      MR_hl_field(0, ThisExpansion_12, 1) = ((MR_Box) (InstB_10));
      MR_hl_field(0, ThisExpansion_12, 2) = ((MR_Box) (Type_8));
    }
    succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_12)), Expansions0_13, &Expansions_14);
    if (succeeded)
    {
      MR_Word ExpandedInstA_15;
      MR_Word ExpandedInstB_16;
      MR_Word STATE_VARIABLE_Info_1_19;
      MR_Word Var_21;
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 0))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 2))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 3)));
      MR_Word next_value_of_tscc_proc_2_input_1_CalcSub_7;
      MR_Word next_value_of_tscc_proc_2_input_2_Type_8;
      MR_Word next_value_of_tscc_proc_2_input_3_InstA_9;
      MR_Word next_value_of_tscc_proc_2_input_4_InstB_10;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43;

      {
        STATE_VARIABLE_Info_1_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_1_19, 0) = ((MR_Box) (Var_27));
        MR_hl_field(0, STATE_VARIABLE_Info_1_19, 1) = ((MR_Box) (Expansions_14));
        MR_hl_field(0, STATE_VARIABLE_Info_1_19, 2) = ((MR_Box) (Var_29));
        MR_hl_field(0, STATE_VARIABLE_Info_1_19, 3) = (MR_Box) (packed_word_0);
      }
      hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_27, InstA_9, &ExpandedInstA_15);
      Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_19, 0))));
      hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_21, InstB_10, &ExpandedInstB_16);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_2_input_1_CalcSub_7 = CalcSub_7;
      next_value_of_tscc_proc_2_input_2_Type_8 = Type_8;
      next_value_of_tscc_proc_2_input_3_InstA_9 = ExpandedInstA_15;
      next_value_of_tscc_proc_2_input_4_InstB_10 = ExpandedInstB_16;
      next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43 = STATE_VARIABLE_Info_1_19;
      tscc_proc_2_input_1_CalcSub_7 = next_value_of_tscc_proc_2_input_1_CalcSub_7;
      tscc_proc_2_input_2_Type_8 = next_value_of_tscc_proc_2_input_2_Type_8;
      tscc_proc_2_input_3_InstA_9 = next_value_of_tscc_proc_2_input_3_InstA_9;
      tscc_proc_2_input_4_InstB_10 = next_value_of_tscc_proc_2_input_4_InstB_10;
      tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43;
      goto top_of_proc_2;
    }
    else
    {
      STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      succeeded = MR_TRUE;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_18;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word CalcSub_7 = tscc_proc_2_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_2_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_2_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_2_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_43 = tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43;
    MR_Word STATE_VARIABLE_Info_44;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) InstA_9)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (InstB_10 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfoA_13 = ((MR_Word) ((MR_hl_field(1, InstA_9, 1))));

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfoB_15 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));
                MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));

                succeeded = check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(Var_45, Type_8, HOInstInfoA_13, HOInstInfoB_15);
                if (succeeded)
                {
                  STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeCtorInfo_164_164;
                MR_Word InstResultsB_16 = ((MR_Word) ((MR_hl_field(2, InstB_10, 1))));
                MR_Word BoundFunctorsB_17 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                MR_Word Var_47;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_165;

                succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(Var_46, Type_8, InstResultsB_16, BoundFunctorsB_17);
                if (succeeded)
                {
                  Var_47 = (MR_Integer) 0;
                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstB_10, &Var_165, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_44);
                  succeeded = (Var_47 == Var_165);
                  if (succeeded)
                  {
                    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44, 0))));
                    TypeCtorInfo_164_164 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                    Var_50 = mercury__set__init_0_f_0(TypeCtorInfo_164_164);
                    succeeded = check_hlds__inst_match__bound_functor_list_is_complete_for_type_4_p_0(Var_49, Var_50, Type_8, BoundFunctorsB_17);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word UniqB_18 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word NextInstB_19;
                    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                    MR_Word HOInstInfoB_70 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_51, Type_8, UniqB_18, HOInstInfoB_70, &NextInstB_19);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = InstA_9;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = NextInstB_19;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                      goto top_of_proc_1;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResultsA_23 = ((MR_Word) ((MR_hl_field(2, InstA_9, 1))));
          MR_Word BoundFunctorsA_24 = ((MR_Word) ((MR_hl_field(2, InstA_9, 2))));

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));
                MR_Word Var_57;
                MR_Word Var_58;
                MR_Word Var_166;

                succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                  succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(Var_57, Type_8, InstResultsA_23, BoundFunctorsA_24);
                  if (succeeded)
                  {
                    Var_58 = (MR_Integer) 0;
                    check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_166, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_44);
                    succeeded = (Var_58 == Var_166);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BoundFunctorsB_77 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));

                succeeded = check_hlds__inst_match__bound_functor_list_matches_binding_6_p_0(CalcSub_7, Type_8, BoundFunctorsA_24, BoundFunctorsB_77, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_44);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                    MR_Word HOInstInfoB_72 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                    MR_Word UniqB_73 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word NextInstB_74;
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_53, Type_8, UniqB_73, HOInstInfoB_72, &NextInstB_74);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = InstA_9;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = NextInstB_74;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                      goto top_of_proc_1;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstA_9, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniqA_29 = ((MR_Unsigned) ((MR_hl_field(3, InstA_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfoA_108 = ((MR_Word) ((MR_hl_field(3, InstA_9, 2))));

              switch (MR_tag((MR_Word) InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NextInstA_32;
                    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_60, Type_8, UniqA_29, HOInstInfoA_108, &NextInstA_32);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_32;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                    MR_Word NextInstA_96;
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_62, Type_8, UniqA_29, HOInstInfoA_108, &NextInstA_96);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_96;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word AnyMatchesAny_36 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 3))) >> 1)) & (MR_Integer) 1);
                        MR_Word HOInstInfoB_101 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                        MR_Word UniqB_102 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                        MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));

                        switch (AnyMatchesAny_36) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            succeeded = check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(CalcSub_7, Type_8, HOInstInfoA_108, HOInstInfoB_101, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_44);
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_66;
                              MR_Word NextInstB_97;
                              MR_Word NextInstA_98;
                              MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                              MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                              MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                              MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                              MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                              succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_149, Type_8, UniqA_29, HOInstInfoA_108, &NextInstA_98);
                              if (succeeded)
                              {
                                Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                                succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_66, Type_8, UniqB_102, HOInstInfoB_101, &NextInstB_97);
                                if (succeeded)
                                {
                                  // direct tailcall eliminated
                                  ;
                                  next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                                  next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                                  next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_98;
                                  next_value_of_tscc_proc_1_input_4_InstB_10 = NextInstB_97;
                                  next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                                  tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                                  tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                                  tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                                  tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                                  tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                                  goto top_of_proc_1;
                                }
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_44;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_18 = tscc_output_1_STATE_VARIABLE_Info_18;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_2_6_p_0(
  MR_Word tscc_proc_2_input_1_CalcSub_7,
  MR_Word tscc_proc_2_input_2_Type_8,
  MR_Word tscc_proc_2_input_3_InstA_9,
  MR_Word tscc_proc_2_input_4_InstB_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_18)
{
  MR_Word tscc_proc_1_input_1_CalcSub_7;
  MR_Word tscc_proc_1_input_2_Type_8;
  MR_Word tscc_proc_1_input_3_InstA_9;
  MR_Word tscc_proc_1_input_4_InstB_10;
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_18;

  // The code for TSCC PROC 2: pred check_hlds.inst_match.inst_matches_binding_2/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_binding_mt/6-0
  ;
  // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_binding_2/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word CalcSub_7 = tscc_proc_1_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_1_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_1_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_1_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_17 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
    MR_Word STATE_VARIABLE_Info_18;
    MR_bool succeeded = MR_TRUE;
    MR_Word ThisExpansion_12;
    MR_Word Expansions0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 1))));
    MR_Word Expansions_14;

    {
      ThisExpansion_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ThisExpansion_12, 0) = ((MR_Box) (InstA_9));
      MR_hl_field(0, ThisExpansion_12, 1) = ((MR_Box) (InstB_10));
      MR_hl_field(0, ThisExpansion_12, 2) = ((MR_Box) (Type_8));
    }
    succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_12)), Expansions0_13, &Expansions_14);
    if (succeeded)
    {
      MR_Word ExpandedInstA_15;
      MR_Word ExpandedInstB_16;
      MR_Word STATE_VARIABLE_Info_1_19;
      MR_Word Var_21;
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 0))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 2))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, 3)));
      MR_Word next_value_of_tscc_proc_2_input_1_CalcSub_7;
      MR_Word next_value_of_tscc_proc_2_input_2_Type_8;
      MR_Word next_value_of_tscc_proc_2_input_3_InstA_9;
      MR_Word next_value_of_tscc_proc_2_input_4_InstB_10;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43;

      {
        STATE_VARIABLE_Info_1_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_1_19, 0) = ((MR_Box) (Var_27));
        MR_hl_field(0, STATE_VARIABLE_Info_1_19, 1) = ((MR_Box) (Expansions_14));
        MR_hl_field(0, STATE_VARIABLE_Info_1_19, 2) = ((MR_Box) (Var_29));
        MR_hl_field(0, STATE_VARIABLE_Info_1_19, 3) = (MR_Box) (packed_word_0);
      }
      hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_27, InstA_9, &ExpandedInstA_15);
      Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_19, 0))));
      hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_21, InstB_10, &ExpandedInstB_16);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_2_input_1_CalcSub_7 = CalcSub_7;
      next_value_of_tscc_proc_2_input_2_Type_8 = Type_8;
      next_value_of_tscc_proc_2_input_3_InstA_9 = ExpandedInstA_15;
      next_value_of_tscc_proc_2_input_4_InstB_10 = ExpandedInstB_16;
      next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43 = STATE_VARIABLE_Info_1_19;
      tscc_proc_2_input_1_CalcSub_7 = next_value_of_tscc_proc_2_input_1_CalcSub_7;
      tscc_proc_2_input_2_Type_8 = next_value_of_tscc_proc_2_input_2_Type_8;
      tscc_proc_2_input_3_InstA_9 = next_value_of_tscc_proc_2_input_3_InstA_9;
      tscc_proc_2_input_4_InstB_10 = next_value_of_tscc_proc_2_input_4_InstB_10;
      tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43;
      goto top_of_proc_2;
    }
    else
    {
      STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      succeeded = MR_TRUE;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_18;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word CalcSub_7 = tscc_proc_2_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_2_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_2_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_2_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_43 = tscc_proc_2_input_5_STATE_VARIABLE_Info_0_43;
    MR_Word STATE_VARIABLE_Info_44;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) InstA_9)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (InstB_10 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfoA_13 = ((MR_Word) ((MR_hl_field(1, InstA_9, 1))));

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word HOInstInfoB_15 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));
                MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));

                succeeded = check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(Var_45, Type_8, HOInstInfoA_13, HOInstInfoB_15);
                if (succeeded)
                {
                  STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeCtorInfo_164_164;
                MR_Word InstResultsB_16 = ((MR_Word) ((MR_hl_field(2, InstB_10, 1))));
                MR_Word BoundFunctorsB_17 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                MR_Word Var_47;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_165;

                succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(Var_46, Type_8, InstResultsB_16, BoundFunctorsB_17);
                if (succeeded)
                {
                  Var_47 = (MR_Integer) 0;
                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstB_10, &Var_165, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_44);
                  succeeded = (Var_47 == Var_165);
                  if (succeeded)
                  {
                    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44, 0))));
                    TypeCtorInfo_164_164 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                    Var_50 = mercury__set__init_0_f_0(TypeCtorInfo_164_164);
                    succeeded = check_hlds__inst_match__bound_functor_list_is_complete_for_type_4_p_0(Var_49, Var_50, Type_8, BoundFunctorsB_17);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word UniqB_18 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word NextInstB_19;
                    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                    MR_Word HOInstInfoB_70 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_51, Type_8, UniqB_18, HOInstInfoB_70, &NextInstB_19);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = InstA_9;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = NextInstB_19;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                      goto top_of_proc_1;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResultsA_23 = ((MR_Word) ((MR_hl_field(2, InstA_9, 1))));
          MR_Word BoundFunctorsA_24 = ((MR_Word) ((MR_hl_field(2, InstA_9, 2))));

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));
                MR_Word Var_57;
                MR_Word Var_58;
                MR_Word Var_166;

                succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                  succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(Var_57, Type_8, InstResultsA_23, BoundFunctorsA_24);
                  if (succeeded)
                  {
                    Var_58 = (MR_Integer) 0;
                    check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_166, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_44);
                    succeeded = (Var_58 == Var_166);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BoundFunctorsB_77 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));

                succeeded = check_hlds__inst_match__bound_functor_list_matches_binding_6_p_0(CalcSub_7, Type_8, BoundFunctorsA_24, BoundFunctorsB_77, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_44);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                    MR_Word HOInstInfoB_72 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                    MR_Word UniqB_73 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word NextInstB_74;
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_53, Type_8, UniqB_73, HOInstInfoB_72, &NextInstB_74);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = InstA_9;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = NextInstB_74;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                      goto top_of_proc_1;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstA_9, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniqA_29 = ((MR_Unsigned) ((MR_hl_field(3, InstA_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfoA_108 = ((MR_Word) ((MR_hl_field(3, InstA_9, 2))));

              switch (MR_tag((MR_Word) InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NextInstA_32;
                    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_60, Type_8, UniqA_29, HOInstInfoA_108, &NextInstA_32);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_32;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                    MR_Word NextInstA_96;
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_62, Type_8, UniqA_29, HOInstInfoA_108, &NextInstA_96);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_96;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word AnyMatchesAny_36 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 3))) >> 1)) & (MR_Integer) 1);
                        MR_Word HOInstInfoB_101 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                        MR_Word UniqB_102 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                        MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));

                        switch (AnyMatchesAny_36) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            succeeded = check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(CalcSub_7, Type_8, HOInstInfoA_108, HOInstInfoB_101, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_44);
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_66;
                              MR_Word NextInstB_97;
                              MR_Word NextInstA_98;
                              MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                              MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                              MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                              MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                              MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;

                              succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_149, Type_8, UniqA_29, HOInstInfoA_108, &NextInstA_98);
                              if (succeeded)
                              {
                                Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, 0))));
                                succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_66, Type_8, UniqB_102, HOInstInfoB_101, &NextInstB_97);
                                if (succeeded)
                                {
                                  // direct tailcall eliminated
                                  ;
                                  next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                                  next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                                  next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_98;
                                  next_value_of_tscc_proc_1_input_4_InstB_10 = NextInstB_97;
                                  next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = STATE_VARIABLE_Info_0_43;
                                  tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                                  tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                                  tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                                  tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                                  tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_17;
                                  goto top_of_proc_1;
                                }
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_44;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_18 = tscc_output_1_STATE_VARIABLE_Info_18;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_6_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word ArgType_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgInstA_14;
      MR_Word ArgInstsA_15;
      MR_Word ArgInstB_16;
      MR_Word ArgInstsB_17;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word ThisExpansion_22;
      MR_Word Expansions0_23;
      MR_Word Expansions_24;
      MR_Word TypeCtorInfo_7_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgInstA_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        ArgInstsA_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgInstB_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
          ArgInstsB_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
          Expansions0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 1))));
          {
            ThisExpansion_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ThisExpansion_22, 0) = ((MR_Box) (ArgInstA_14));
            MR_hl_field(0, ThisExpansion_22, 1) = ((MR_Box) (ArgInstB_16));
            MR_hl_field(0, ThisExpansion_22, 2) = ((MR_Box) (ArgType_12));
          }
          TypeCtorInfo_7_51 = (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
          succeeded = mercury__set_tree234__insert_new_3_p_0(TypeCtorInfo_7_51, ((MR_Box) (ThisExpansion_22)), Expansions0_23, &Expansions_24);
          if (succeeded)
          {
            MR_Word ExpandedInstA_25;
            MR_Word ExpandedInstB_26;
            MR_Word STATE_VARIABLE_Info_1_27;
            MR_Word Var_29;
            MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 0))));
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 2))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 3)));

            {
              STATE_VARIABLE_Info_1_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_1_27, 0) = ((MR_Box) (Var_35));
              MR_hl_field(0, STATE_VARIABLE_Info_1_27, 1) = ((MR_Box) (Expansions_24));
              MR_hl_field(0, STATE_VARIABLE_Info_1_27, 2) = ((MR_Box) (Var_37));
              MR_hl_field(0, STATE_VARIABLE_Info_1_27, 3) = (MR_Box) (packed_word_0);
            }
            hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_35, ArgInstA_14, &ExpandedInstA_25);
            Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_27, 0))));
            hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_29, ArgInstB_16, &ExpandedInstB_26);
            succeeded = check_hlds__inst_match__inst_matches_binding_2_6_p_0(CalcSub_1, ArgType_12, ExpandedInstA_25, ExpandedInstB_26, STATE_VARIABLE_Info_1_27, &STATE_VARIABLE_Info_1_21);
          }
          else
          {
            STATE_VARIABLE_Info_1_21 = STATE_VARIABLE_Info_0_5;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = ArgTypes_13;
            next_value_of_HeadVar__3_3 = ArgInstsA_15;
            next_value_of_HeadVar__4_4 = ArgInstsB_17;
            next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_matches_binding_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctorX_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctorXs_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word BoundFunctorY_17;
      MR_Word BoundFunctorYs_18;
      MR_Word ConsIdX_20;
      MR_Word ArgInstsX_21;
      MR_Word ConsIdY_22;
      MR_Word ArgInstsY_23;

      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        BoundFunctorY_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        BoundFunctorYs_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        ConsIdX_20 = ((MR_Word) ((MR_hl_field(0, BoundFunctorX_15, 0))));
        ArgInstsX_21 = ((MR_Word) ((MR_hl_field(0, BoundFunctorX_15, 1))));
        ConsIdY_22 = ((MR_Word) ((MR_hl_field(0, BoundFunctorY_17, 0))));
        ArgInstsY_23 = ((MR_Word) ((MR_hl_field(0, BoundFunctorY_17, 1))));
        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdX_20, ConsIdY_22);
        if (succeeded)
        {
          MR_Word ArgTypes_24;
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 0))));
          MR_Word STATE_VARIABLE_Info_1_28;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

          hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(Var_27, Type_2, BoundFunctorX_15, &ArgTypes_24);
          succeeded = check_hlds__inst_match__inst_list_matches_binding_6_p_0(CalcSub_1, ArgTypes_24, ArgInstsX_21, ArgInstsY_23, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_28);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = BoundFunctorXs_16;
            next_value_of_HeadVar__4_4 = BoundFunctorYs_18;
            next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_28;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
            continue;
          }
        }
        else
        {
          MR_Word QNameA_36;
          MR_Integer ArityA_37;
          MR_Word QNameB_39;
          MR_Integer ArityB_40;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word next_value_of_HeadVar__4_4;

          succeeded = ((MR_tag((MR_Word) ConsIdX_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_47 = (MR_Word) (MR_body((MR_Word) (ConsIdX_20), (MR_Integer) 1));
            QNameA_36 = ((MR_Word) ((MR_hl_field(0, Var_47, 0))));
            ArityA_37 = ((MR_Integer) ((MR_hl_field(0, Var_47, 1))));
            succeeded = ((MR_tag((MR_Word) ConsIdY_22)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_48 = (MR_Word) (MR_body((MR_Word) (ConsIdY_22), (MR_Integer) 1));
              QNameB_39 = ((MR_Word) ((MR_hl_field(0, Var_48, 0))));
              ArityB_40 = ((MR_Integer) ((MR_hl_field(0, Var_48, 1))));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_String NameA_42;
            MR_String NameB_44;
            MR_Word O_46;

            if (((MR_tag((MR_Word) QNameA_36)) == (MR_Integer) 1))
              NameA_42 = ((MR_String) ((MR_hl_field(1, QNameA_36, 1))));
            else
              NameA_42 = ((MR_String) ((MR_hl_field(0, QNameA_36, 0))));
            if (((MR_tag((MR_Word) QNameB_39)) == (MR_Integer) 1))
              NameB_44 = ((MR_String) ((MR_hl_field(1, QNameB_39, 1))));
            else
              NameB_44 = ((MR_String) ((MR_hl_field(0, QNameB_39, 0))));
            mercury__private_builtin__builtin_compare_string_3_p_0(&O_46, NameA_42, NameB_44);
            switch (O_46) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                succeeded = (ArityA_37 > ArityB_40);
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
            }
          }
          else
          {
            MR_Word Var_52;

            parse_tree__prog_data____Compare____cons_id_0_0(&Var_52, ConsIdX_20, ConsIdY_22);
            succeeded = ((MR_Integer) 2 == Var_52);
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = BoundFunctorYs_18;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word HOInstInfoA_7,
  MR_Word HOInstInfoB_8)
{
  MR_bool succeeded;

  if ((HOInstInfoB_8 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(ModuleInfo_5, Type_6, HOInstInfoA_7);
  else
  {
    MR_Word PredInstB_9 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_8), (MR_Integer) 1));
    MR_Word PredInstA_14;

    if ((HOInstInfoA_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word ArgModes_10 = ((MR_Word) ((MR_hl_field(0, PredInstB_9, 1))));
      MR_Integer Arity_13;
      MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_9, 0))) & (MR_Integer) 1);

      succeeded = (Var_15 == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_16_16 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
        Arity_13 = mercury__list__length_1_f_0(TypeCtorInfo_16_16, ArgModes_10);
        PredInstA_14 = hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_13);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      PredInstA_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_7), (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(ModuleInfo_5, Type_6, PredInstA_14, PredInstB_9);
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word PredInstA_7,
  MR_Word PredInstB_8)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_22_26;
  MR_Word Info0_9;
  MR_Word Var_16;
  MR_Word PredOrFunc_18;
  MR_Word ModesA_19;
  MR_Word Det_21;
  MR_Word ModesB_22;
  MR_Word Types_24;
  MR_Integer Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_10;

  Var_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_7, 0))) & (MR_Integer) 1);
  ModesA_19 = ((MR_Word) ((MR_hl_field(0, PredInstA_7, 1))));
  Det_21 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_7, 3))) & (MR_Integer) 7);
  Var_27 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_8, 0))) & (MR_Integer) 1);
  ModesB_22 = ((MR_Word) ((MR_hl_field(0, PredInstB_8, 1))));
  Var_28 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_8, 3))) & (MR_Integer) 7);
  succeeded = (PredOrFunc_18 == Var_27);
  if (succeeded)
  {
    succeeded = (Det_21 == Var_28);
    if (succeeded)
    {
      TypeCtorInfo_22_26 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
      {
        Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Info0_9, 0) = ((MR_Box) (ModuleInfo_5));
        MR_hl_field(0, Info0_9, 1) = ((MR_Box) (Var_16));
        MR_hl_field(0, Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
      }
      Var_25 = mercury__list__length_1_f_0(TypeCtorInfo_22_26, ModesA_19);
      hlds__inst_util__get_higher_order_arg_types_3_p_0(Type_6, Var_25, &Types_24);
      succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0((MR_Integer) 2, Types_24, ModesA_19, ModesB_22, Info0_9, &Var_10);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word HOInstInfo_6)
{
  MR_bool succeeded;
  MR_Word Info_7;
  MR_Word Var_14;

  Var_14 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_7, 0) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, Info_7, 1) = ((MR_Box) (Var_14));
    MR_hl_field(0, Info_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_7, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  if ((HOInstInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word PredInst_16 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_6), (MR_Integer) 1));
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_16, 0))) & (MR_Integer) 1);
    MR_Word ArgModes_18 = ((MR_Word) ((MR_hl_field(0, PredInst_16, 1))));

    switch (PredOrFunc_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Arity_21;
          MR_Word DefaultFunc_22;
          MR_Word Var_8;

          Arity_21 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_18);
          DefaultFunc_22 = hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_21);
          succeeded = check_hlds__inst_match__pred_inst_matches_1_6_p_0((MR_Integer) 2, Type_5, PredInst_16, DefaultFunc_22, Info_7, &Var_8);
        }
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_gmb_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word GroundMatchesBound_7,
  MR_Word Type_8,
  MR_Word InstA_9,
  MR_Word InstB_10)
{
  MR_bool succeeded;
  MR_Word Info0_11;
  MR_Word Var_17;
  MR_Word Var_12;

  Var_17 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_11, 0) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Info0_11, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, Info0_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_11, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (GroundMatchesBound_7)))));
  }
  succeeded = check_hlds__inst_match__inst_matches_final_mt_6_p_0((MR_Integer) 2, Type_8, InstA_9, InstB_10, Info0_11, &Var_12);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word InstA_7,
  MR_Word InstB_8)
{
  MR_bool succeeded;
  MR_Word Info0_9;
  MR_Word Var_16;
  MR_Word Var_10;

  Var_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_9, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Info0_9, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  succeeded = check_hlds__inst_match__inst_matches_final_mt_6_p_0((MR_Integer) 2, Type_6, InstA_7, InstB_8, Info0_9, &Var_10);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word InstA_7,
  MR_Word InstB_8)
{
  MR_bool succeeded;
  MR_Word Info0_9;
  MR_Word Var_16;
  MR_Word Var_10;

  Var_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_9, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Info0_9, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  succeeded = check_hlds__inst_match__inst_matches_initial_mt_6_p_0((MR_Integer) 2, Type_6, InstA_7, InstB_8, Info0_9, &Var_10);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(
  MR_Word Type_8,
  MR_Word InstA_9,
  MR_Word InstB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Sub_0_17,
  MR_Word * STATE_VARIABLE_Sub_18)
{
  MR_bool succeeded;
  MR_Word Info0_13;
  MR_Word Info_14;
  MR_Word Var_19;
  MR_Word Var_27;
  MR_Word Var_36;

  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (STATE_VARIABLE_Sub_0_17));
  }
  Var_36 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_13, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_15));
    MR_hl_field(0, Info0_13, 1) = ((MR_Box) (Var_36));
    MR_hl_field(0, Info0_13, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, Info0_13, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  succeeded = check_hlds__inst_match__inst_matches_final_mt_6_p_0((MR_Integer) 0, Type_8, InstA_9, InstB_10, Info0_13, &Info_14);
  if (succeeded)
  {
    *STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, Info_14, 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, Info_14, 2))));
    succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *STATE_VARIABLE_Sub_18 = ((MR_Word) ((MR_hl_field(1, Var_27, 0))));
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word InstA_7,
  MR_Word InstB_8)
{
  MR_bool succeeded;
  MR_Word Info0_9;
  MR_Word Var_16;
  MR_Word Var_10;

  Var_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_9, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Info0_9, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  succeeded = check_hlds__inst_match__inst_matches_final_mt_6_p_0((MR_Integer) 0, Type_6, InstA_7, InstB_8, Info0_9, &Var_10);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_sub_7_p_0(
  MR_Word Type_8,
  MR_Word InstA_9,
  MR_Word InstB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_Sub_0_16,
  MR_Word * STATE_VARIABLE_Sub_17)
{
  MR_bool succeeded;
  MR_Word MaybeSub_13;
  MR_Word Var_19;
  MR_Word Info0_23;
  MR_Word Info_24;
  MR_Word Var_39;

  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (STATE_VARIABLE_Sub_0_16));
  }
  Var_39 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_23, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14));
    MR_hl_field(0, Info0_23, 1) = ((MR_Box) (Var_39));
    MR_hl_field(0, Info0_23, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, Info0_23, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  succeeded = check_hlds__inst_match__inst_matches_initial_mt_6_p_0((MR_Integer) 0, Type_8, InstA_9, InstB_10, Info0_23, &Info_24);
  if (succeeded)
  {
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) ((MR_hl_field(0, Info_24, 0))));
    MaybeSub_13 = ((MR_Word) ((MR_hl_field(0, Info_24, 2))));
    if ((MaybeSub_13 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_sub\'/7", (MR_String) "missing inst_var_sub");
    else
      *STATE_VARIABLE_Sub_17 = ((MR_Word) ((MR_hl_field(1, MaybeSub_13, 0))));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word InstA_7,
  MR_Word InstB_8)
{
  MR_bool succeeded;
  MR_Word Info0_12;
  MR_Word Var_28;
  MR_Word Info_13;

  Var_28 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
  {
    Info0_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_12, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Info0_12, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, Info0_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_12, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
  succeeded = check_hlds__inst_match__inst_matches_initial_mt_6_p_0((MR_Integer) 0, Type_6, InstA_7, InstB_8, Info0_12, &Info_13);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_6_p_0(
  MR_Word tscc_proc_1_input_1_CalcSub_7,
  MR_Word tscc_proc_1_input_2_Type_8,
  MR_Word tscc_proc_1_input_3_InstA_9,
  MR_Word tscc_proc_1_input_4_InstB_10,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_24)
{
  MR_Word tscc_proc_2_input_1_CalcSub_7;
  MR_Word tscc_proc_2_input_2_Type_8;
  MR_Word tscc_proc_2_input_3_InstA_9;
  MR_Word tscc_proc_2_input_4_InstB_10;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_24;

  // The code for TSCC PROC 1: pred check_hlds.inst_match.inst_matches_initial_mt/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_initial_mt/6-0
  ;
  // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_initial_mt_2/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word CalcSub_7 = tscc_proc_1_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_1_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_1_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_1_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
    MR_Word STATE_VARIABLE_Info_24;
    MR_bool succeeded = MR_TRUE;
    MR_Word ThisExpansion_12;
    MR_Word Expansions0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 1))));
    MR_Word Expansions_14;

    {
      ThisExpansion_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ThisExpansion_12, 0) = ((MR_Box) (InstA_9));
      MR_hl_field(0, ThisExpansion_12, 1) = ((MR_Box) (InstB_10));
      MR_hl_field(0, ThisExpansion_12, 2) = ((MR_Box) (Type_8));
    }
    succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_12)), Expansions0_13, &Expansions_14);
    if (succeeded)
    {
      MR_Word ExpandedInstA_15;
      MR_Word ExpandedInstB_16;
      MR_Word InstVarSubResult_17;
      MR_Word STATE_VARIABLE_Info_1_25;
      MR_Word Var_27;
      MR_Word STATE_VARIABLE_Info_2_28;
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 0))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 2))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 3)));

      {
        STATE_VARIABLE_Info_1_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_1_25, 0) = ((MR_Box) (Var_35));
        MR_hl_field(0, STATE_VARIABLE_Info_1_25, 1) = ((MR_Box) (Expansions_14));
        MR_hl_field(0, STATE_VARIABLE_Info_1_25, 2) = ((MR_Box) (Var_37));
        MR_hl_field(0, STATE_VARIABLE_Info_1_25, 3) = (MR_Box) (packed_word_0);
      }
      hlds__inst_lookup__inst_expand_3_p_0(Var_35, InstA_9, &ExpandedInstA_15);
      Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_25, 0))));
      hlds__inst_lookup__inst_expand_3_p_0(Var_27, InstB_10, &ExpandedInstB_16);
      succeeded = check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0(CalcSub_7, Type_8, ExpandedInstA_15, ExpandedInstB_16, &InstVarSubResult_17, STATE_VARIABLE_Info_1_25, &STATE_VARIABLE_Info_2_28);
      if (succeeded)
      {
        if (((MR_tag((MR_Word) InstVarSubResult_17)) == (MR_Integer) 1))
        {
          MR_Word ContCalcSub_20 = ((MR_Unsigned) ((MR_hl_field(1, InstVarSubResult_17, 0))) & (MR_Integer) 3);
          MR_Word ContinueInstA_21 = ((MR_Word) ((MR_hl_field(1, InstVarSubResult_17, 1))));
          MR_Word ContinueInstB_22 = ((MR_Word) ((MR_hl_field(1, InstVarSubResult_17, 2))));
          MR_Word next_value_of_tscc_proc_2_input_1_CalcSub_7 = ContCalcSub_20;
          MR_Word next_value_of_tscc_proc_2_input_2_Type_8 = Type_8;
          MR_Word next_value_of_tscc_proc_2_input_3_InstA_9 = ContinueInstA_21;
          MR_Word next_value_of_tscc_proc_2_input_4_InstB_10 = ContinueInstB_22;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39 = STATE_VARIABLE_Info_2_28;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_CalcSub_7 = next_value_of_tscc_proc_2_input_1_CalcSub_7;
          tscc_proc_2_input_2_Type_8 = next_value_of_tscc_proc_2_input_2_Type_8;
          tscc_proc_2_input_3_InstA_9 = next_value_of_tscc_proc_2_input_3_InstA_9;
          tscc_proc_2_input_4_InstB_10 = next_value_of_tscc_proc_2_input_4_InstB_10;
          tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39;
          goto top_of_proc_2;
        }
        else
        {
          MR_Word RecurseInstA_18 = ((MR_Word) ((MR_hl_field(0, InstVarSubResult_17, 0))));
          MR_Word RecurseInstB_19 = ((MR_Word) ((MR_hl_field(0, InstVarSubResult_17, 1))));
          MR_Word next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
          MR_Word next_value_of_tscc_proc_1_input_3_InstA_9 = RecurseInstA_18;
          MR_Word next_value_of_tscc_proc_1_input_4_InstB_10 = RecurseInstB_19;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_2_28;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_CalcSub_7 = (MR_Integer) 0;
          tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
          tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
          tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
          goto top_of_proc_1;
        }
      }
    }
    else
    {
      STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
      succeeded = MR_TRUE;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_24;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word CalcSub_7 = tscc_proc_2_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_2_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_2_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_2_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_39 = tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39;
    MR_Word STATE_VARIABLE_Info_40;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) InstA_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (InstB_10 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniqA_96 = ((MR_Unsigned) ((MR_hl_field(1, InstA_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfoA_97 = ((MR_Word) ((MR_hl_field(1, InstA_9, 1))));

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_63 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                MR_Word UniqB_80 = ((MR_Unsigned) ((MR_hl_field(1, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word HOInstInfoB_81 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));

                succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_63, UniqA_96, UniqB_80);
                if (succeeded)
                  succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_6_p_0(CalcSub_7, Type_8, HOInstInfoA_97, HOInstInfoB_81, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeCtorInfo_178_178;
                MR_Word ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                MR_Word Var_65;
                MR_Word Var_66;
                MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(2, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word BoundFunctorsB_85 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));

                succeeded = hlds__type_util__type_is_du_type_2_p_0(ModuleInfo_32, Type_8);
                if (succeeded)
                {
                  Var_65 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                  succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_65, UniqA_96, UniqB_83);
                  if (succeeded)
                  {
                    TypeCtorInfo_178_178 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                    Var_66 = mercury__set__init_0_f_0(TypeCtorInfo_178_178);
                    succeeded = check_hlds__inst_match__bound_functor_list_is_complete_for_type_4_p_0(ModuleInfo_32, Var_66, Type_8, BoundFunctorsB_85);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__ground_matches_initial_bound_functor_list_6_p_0(CalcSub_7, UniqA_96, Type_8, BoundFunctorsB_85, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_68 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                    MR_Word UniqB_86 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_87 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));

                    succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_68, UniqA_96, UniqB_86);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_6_p_0(CalcSub_7, Type_8, HOInstInfoA_97, HOInstInfoB_87, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResultsA_25 = ((MR_Word) ((MR_hl_field(2, InstA_9, 1))));
          MR_Word BoundFunctorsA_26 = ((MR_Word) ((MR_hl_field(2, InstA_9, 2))));
          MR_Word UniqA_78 = ((MR_Unsigned) ((MR_hl_field(2, InstA_9, 0))) & (MR_Integer) 7);

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_53;
                MR_Word UniqB_73 = ((MR_Unsigned) ((MR_hl_field(1, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word Var_130;
                MR_Word Var_179;

                succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_49 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                  succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_49, UniqA_78, UniqB_73);
                  if (succeeded)
                  {
                    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                    succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(Var_50, Type_8, InstResultsA_25, BoundFunctorsA_26);
                    if (succeeded)
                    {
                      Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                      Var_130 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                      succeeded = check_hlds__inst_match__compare_bound_functor_list_uniq_4_p_0(Var_51, Var_130, BoundFunctorsA_26, UniqB_73);
                      if (succeeded)
                      {
                        Var_53 = (MR_Integer) 0;
                        check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_179, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                        succeeded = (Var_53 == Var_179);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BoundFunctorsB_28 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));
                MR_Word UniqB_74 = ((MR_Unsigned) ((MR_hl_field(2, InstB_10, 0))) & (MR_Integer) 7);

                succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(InstA_9, InstB_10);
                if (succeeded)
                  succeeded = (InstResultsA_25 == (MR_Word) ((MR_Unsigned) 4U));
                if (succeeded)
                {
                  STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);

                  succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_55, UniqA_78, UniqB_74);
                  if (succeeded)
                    succeeded = check_hlds__inst_match__bound_functor_list_matches_initial_mt_6_p_0(CalcSub_7, Type_8, BoundFunctorsA_26, BoundFunctorsB_28, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                    MR_Word Var_58;
                    MR_Word Var_59;
                    MR_Word Var_61;
                    MR_Word UniqB_75 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word Var_150;
                    MR_Word Var_180;

                    succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_58 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                      succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_58, UniqA_78, UniqB_75);
                      if (succeeded)
                      {
                        Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                        Var_150 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                        succeeded = check_hlds__inst_match__compare_bound_functor_list_uniq_4_p_0(Var_59, Var_150, BoundFunctorsA_26, UniqB_75);
                        if (succeeded)
                        {
                          Var_61 = (MR_Integer) 0;
                          check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_180, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                          succeeded = (Var_61 == Var_180);
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstA_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_mt_2\'/6", (MR_String) "unexpected InstA");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniqA_12 = ((MR_Unsigned) ((MR_hl_field(3, InstA_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfoA_13 = ((MR_Word) ((MR_hl_field(3, InstA_9, 2))));

              switch (MR_tag((MR_Word) InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstB_10)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NextInstA_16;
                    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_41, Type_8, UniqA_12, HOInstInfoA_13, &NextInstA_16);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_16;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_39;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                    MR_Word NextInstA_72;
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_43, Type_8, UniqA_12, HOInstInfoA_13, &NextInstA_72);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_72;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_39;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word UniqB_20 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                        MR_Word HOInstInfoB_21 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                        MR_Word Var_45 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 1)) & (MR_Integer) 1);
                        MR_Word Var_111 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);

                        succeeded = (Var_45 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_111, UniqA_12, UniqB_20);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_6_p_0(CalcSub_7, Type_8, HOInstInfoA_13, HOInstInfoB_21, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_40;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_24 = tscc_output_1_STATE_VARIABLE_Info_24;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_2_6_p_0(
  MR_Word tscc_proc_2_input_1_CalcSub_7,
  MR_Word tscc_proc_2_input_2_Type_8,
  MR_Word tscc_proc_2_input_3_InstA_9,
  MR_Word tscc_proc_2_input_4_InstB_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_24)
{
  MR_Word tscc_proc_1_input_1_CalcSub_7;
  MR_Word tscc_proc_1_input_2_Type_8;
  MR_Word tscc_proc_1_input_3_InstA_9;
  MR_Word tscc_proc_1_input_4_InstB_10;
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_24;

  // The code for TSCC PROC 2: pred check_hlds.inst_match.inst_matches_initial_mt_2/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_initial_mt/6-0
  ;
  // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_initial_mt_2/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word CalcSub_7 = tscc_proc_1_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_1_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_1_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_1_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
    MR_Word STATE_VARIABLE_Info_24;
    MR_bool succeeded = MR_TRUE;
    MR_Word ThisExpansion_12;
    MR_Word Expansions0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 1))));
    MR_Word Expansions_14;

    {
      ThisExpansion_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ThisExpansion_12, 0) = ((MR_Box) (InstA_9));
      MR_hl_field(0, ThisExpansion_12, 1) = ((MR_Box) (InstB_10));
      MR_hl_field(0, ThisExpansion_12, 2) = ((MR_Box) (Type_8));
    }
    succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_12)), Expansions0_13, &Expansions_14);
    if (succeeded)
    {
      MR_Word ExpandedInstA_15;
      MR_Word ExpandedInstB_16;
      MR_Word InstVarSubResult_17;
      MR_Word STATE_VARIABLE_Info_1_25;
      MR_Word Var_27;
      MR_Word STATE_VARIABLE_Info_2_28;
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 0))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 2))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 3)));

      {
        STATE_VARIABLE_Info_1_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_1_25, 0) = ((MR_Box) (Var_35));
        MR_hl_field(0, STATE_VARIABLE_Info_1_25, 1) = ((MR_Box) (Expansions_14));
        MR_hl_field(0, STATE_VARIABLE_Info_1_25, 2) = ((MR_Box) (Var_37));
        MR_hl_field(0, STATE_VARIABLE_Info_1_25, 3) = (MR_Box) (packed_word_0);
      }
      hlds__inst_lookup__inst_expand_3_p_0(Var_35, InstA_9, &ExpandedInstA_15);
      Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_25, 0))));
      hlds__inst_lookup__inst_expand_3_p_0(Var_27, InstB_10, &ExpandedInstB_16);
      succeeded = check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0(CalcSub_7, Type_8, ExpandedInstA_15, ExpandedInstB_16, &InstVarSubResult_17, STATE_VARIABLE_Info_1_25, &STATE_VARIABLE_Info_2_28);
      if (succeeded)
      {
        if (((MR_tag((MR_Word) InstVarSubResult_17)) == (MR_Integer) 1))
        {
          MR_Word ContCalcSub_20 = ((MR_Unsigned) ((MR_hl_field(1, InstVarSubResult_17, 0))) & (MR_Integer) 3);
          MR_Word ContinueInstA_21 = ((MR_Word) ((MR_hl_field(1, InstVarSubResult_17, 1))));
          MR_Word ContinueInstB_22 = ((MR_Word) ((MR_hl_field(1, InstVarSubResult_17, 2))));
          MR_Word next_value_of_tscc_proc_2_input_1_CalcSub_7 = ContCalcSub_20;
          MR_Word next_value_of_tscc_proc_2_input_2_Type_8 = Type_8;
          MR_Word next_value_of_tscc_proc_2_input_3_InstA_9 = ContinueInstA_21;
          MR_Word next_value_of_tscc_proc_2_input_4_InstB_10 = ContinueInstB_22;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39 = STATE_VARIABLE_Info_2_28;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_CalcSub_7 = next_value_of_tscc_proc_2_input_1_CalcSub_7;
          tscc_proc_2_input_2_Type_8 = next_value_of_tscc_proc_2_input_2_Type_8;
          tscc_proc_2_input_3_InstA_9 = next_value_of_tscc_proc_2_input_3_InstA_9;
          tscc_proc_2_input_4_InstB_10 = next_value_of_tscc_proc_2_input_4_InstB_10;
          tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39;
          goto top_of_proc_2;
        }
        else
        {
          MR_Word RecurseInstA_18 = ((MR_Word) ((MR_hl_field(0, InstVarSubResult_17, 0))));
          MR_Word RecurseInstB_19 = ((MR_Word) ((MR_hl_field(0, InstVarSubResult_17, 1))));
          MR_Word next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
          MR_Word next_value_of_tscc_proc_1_input_3_InstA_9 = RecurseInstA_18;
          MR_Word next_value_of_tscc_proc_1_input_4_InstB_10 = RecurseInstB_19;
          MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_2_28;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_CalcSub_7 = (MR_Integer) 0;
          tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
          tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
          tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
          tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
          goto top_of_proc_1;
        }
      }
    }
    else
    {
      STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
      succeeded = MR_TRUE;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_24;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word CalcSub_7 = tscc_proc_2_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_2_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_2_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_2_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_39 = tscc_proc_2_input_5_STATE_VARIABLE_Info_0_39;
    MR_Word STATE_VARIABLE_Info_40;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) InstA_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (InstB_10 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniqA_96 = ((MR_Unsigned) ((MR_hl_field(1, InstA_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfoA_97 = ((MR_Word) ((MR_hl_field(1, InstA_9, 1))));

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_63 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                MR_Word UniqB_80 = ((MR_Unsigned) ((MR_hl_field(1, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word HOInstInfoB_81 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));

                succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_63, UniqA_96, UniqB_80);
                if (succeeded)
                  succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_6_p_0(CalcSub_7, Type_8, HOInstInfoA_97, HOInstInfoB_81, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeCtorInfo_178_178;
                MR_Word ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                MR_Word Var_65;
                MR_Word Var_66;
                MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(2, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word BoundFunctorsB_85 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));

                succeeded = hlds__type_util__type_is_du_type_2_p_0(ModuleInfo_32, Type_8);
                if (succeeded)
                {
                  Var_65 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                  succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_65, UniqA_96, UniqB_83);
                  if (succeeded)
                  {
                    TypeCtorInfo_178_178 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                    Var_66 = mercury__set__init_0_f_0(TypeCtorInfo_178_178);
                    succeeded = check_hlds__inst_match__bound_functor_list_is_complete_for_type_4_p_0(ModuleInfo_32, Var_66, Type_8, BoundFunctorsB_85);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__ground_matches_initial_bound_functor_list_6_p_0(CalcSub_7, UniqA_96, Type_8, BoundFunctorsB_85, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_68 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                    MR_Word UniqB_86 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_87 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));

                    succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_68, UniqA_96, UniqB_86);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_6_p_0(CalcSub_7, Type_8, HOInstInfoA_97, HOInstInfoB_87, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResultsA_25 = ((MR_Word) ((MR_hl_field(2, InstA_9, 1))));
          MR_Word BoundFunctorsA_26 = ((MR_Word) ((MR_hl_field(2, InstA_9, 2))));
          MR_Word UniqA_78 = ((MR_Unsigned) ((MR_hl_field(2, InstA_9, 0))) & (MR_Integer) 7);

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_53;
                MR_Word UniqB_73 = ((MR_Unsigned) ((MR_hl_field(1, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word Var_130;
                MR_Word Var_179;

                succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_49 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                  succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_49, UniqA_78, UniqB_73);
                  if (succeeded)
                  {
                    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                    succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(Var_50, Type_8, InstResultsA_25, BoundFunctorsA_26);
                    if (succeeded)
                    {
                      Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                      Var_130 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                      succeeded = check_hlds__inst_match__compare_bound_functor_list_uniq_4_p_0(Var_51, Var_130, BoundFunctorsA_26, UniqB_73);
                      if (succeeded)
                      {
                        Var_53 = (MR_Integer) 0;
                        check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_179, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                        succeeded = (Var_53 == Var_179);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BoundFunctorsB_28 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));
                MR_Word UniqB_74 = ((MR_Unsigned) ((MR_hl_field(2, InstB_10, 0))) & (MR_Integer) 7);

                succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(InstA_9, InstB_10);
                if (succeeded)
                  succeeded = (InstResultsA_25 == (MR_Word) ((MR_Unsigned) 4U));
                if (succeeded)
                {
                  STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);

                  succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_55, UniqA_78, UniqB_74);
                  if (succeeded)
                    succeeded = check_hlds__inst_match__bound_functor_list_matches_initial_mt_6_p_0(CalcSub_7, Type_8, BoundFunctorsA_26, BoundFunctorsB_28, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                    MR_Word Var_58;
                    MR_Word Var_59;
                    MR_Word Var_61;
                    MR_Word UniqB_75 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word Var_150;
                    MR_Word Var_180;

                    succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_58 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                      succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_58, UniqA_78, UniqB_75);
                      if (succeeded)
                      {
                        Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                        Var_150 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);
                        succeeded = check_hlds__inst_match__compare_bound_functor_list_uniq_4_p_0(Var_59, Var_150, BoundFunctorsA_26, UniqB_75);
                        if (succeeded)
                        {
                          Var_61 = (MR_Integer) 0;
                          check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_180, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                          succeeded = (Var_61 == Var_180);
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstA_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_mt_2\'/6", (MR_String) "unexpected InstA");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniqA_12 = ((MR_Unsigned) ((MR_hl_field(3, InstA_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfoA_13 = ((MR_Word) ((MR_hl_field(3, InstA_9, 2))));

              switch (MR_tag((MR_Word) InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstB_10)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NextInstA_16;
                    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_41, Type_8, UniqA_12, HOInstInfoA_13, &NextInstA_16);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_16;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_39;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
                    MR_Word NextInstA_72;
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_43, Type_8, UniqA_12, HOInstInfoA_13, &NextInstA_72);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_72;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_39;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word UniqB_20 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                        MR_Word HOInstInfoB_21 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                        MR_Word Var_45 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 1)) & (MR_Integer) 1);
                        MR_Word Var_111 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 3))) >> 2)) & (MR_Integer) 1);

                        succeeded = (Var_45 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_111, UniqA_12, UniqB_20);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_6_p_0(CalcSub_7, Type_8, HOInstInfoA_13, HOInstInfoB_21, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_40);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_40;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_24 = tscc_output_1_STATE_VARIABLE_Info_24;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_6_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Type_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Types_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word InstX_14;
      MR_Word InstXs_15;
      MR_Word InstY_16;
      MR_Word InstYs_17;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InstX_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        InstXs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InstY_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
          InstYs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
          succeeded = check_hlds__inst_match__inst_matches_initial_mt_6_p_0(CalcSub_1, Type_12, InstX_14, InstY_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Types_13;
            next_value_of_HeadVar__3_3 = InstXs_15;
            next_value_of_HeadVar__4_4 = InstYs_17;
            next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_matches_initial_mt_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctorX_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctorXs_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word BoundFunctorY_17;
      MR_Word BoundFunctorYs_18;
      MR_Word ConsIdX_20;
      MR_Word ArgInstsX_21;
      MR_Word ConsIdY_22;
      MR_Word ArgInstsY_23;

      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        BoundFunctorY_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        BoundFunctorYs_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        ConsIdX_20 = ((MR_Word) ((MR_hl_field(0, BoundFunctorX_15, 0))));
        ArgInstsX_21 = ((MR_Word) ((MR_hl_field(0, BoundFunctorX_15, 1))));
        ConsIdY_22 = ((MR_Word) ((MR_hl_field(0, BoundFunctorY_17, 0))));
        ArgInstsY_23 = ((MR_Word) ((MR_hl_field(0, BoundFunctorY_17, 1))));
        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdX_20, ConsIdY_22);
        if (succeeded)
        {
          MR_Word Types_24;
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 0))));
          MR_Word STATE_VARIABLE_Info_1_28;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

          hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(Var_27, Type_2, BoundFunctorX_15, &Types_24);
          succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_6_p_0(CalcSub_1, Types_24, ArgInstsX_21, ArgInstsY_23, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_28);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = BoundFunctorXs_16;
            next_value_of_HeadVar__4_4 = BoundFunctorYs_18;
            next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_28;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
            continue;
          }
        }
        else
        {
          MR_Word QNameA_36;
          MR_Integer ArityA_37;
          MR_Word QNameB_39;
          MR_Integer ArityB_40;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word next_value_of_HeadVar__4_4;

          succeeded = ((MR_tag((MR_Word) ConsIdX_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_47 = (MR_Word) (MR_body((MR_Word) (ConsIdX_20), (MR_Integer) 1));
            QNameA_36 = ((MR_Word) ((MR_hl_field(0, Var_47, 0))));
            ArityA_37 = ((MR_Integer) ((MR_hl_field(0, Var_47, 1))));
            succeeded = ((MR_tag((MR_Word) ConsIdY_22)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_48 = (MR_Word) (MR_body((MR_Word) (ConsIdY_22), (MR_Integer) 1));
              QNameB_39 = ((MR_Word) ((MR_hl_field(0, Var_48, 0))));
              ArityB_40 = ((MR_Integer) ((MR_hl_field(0, Var_48, 1))));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_String NameA_42;
            MR_String NameB_44;
            MR_Word O_46;

            if (((MR_tag((MR_Word) QNameA_36)) == (MR_Integer) 1))
              NameA_42 = ((MR_String) ((MR_hl_field(1, QNameA_36, 1))));
            else
              NameA_42 = ((MR_String) ((MR_hl_field(0, QNameA_36, 0))));
            if (((MR_tag((MR_Word) QNameB_39)) == (MR_Integer) 1))
              NameB_44 = ((MR_String) ((MR_hl_field(1, QNameB_39, 1))));
            else
              NameB_44 = ((MR_String) ((MR_hl_field(0, QNameB_39, 0))));
            mercury__private_builtin__builtin_compare_string_3_p_0(&O_46, NameA_42, NameB_44);
            switch (O_46) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                succeeded = (ArityA_37 > ArityB_40);
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
            }
          }
          else
          {
            MR_Word Var_52;

            parse_tree__prog_data____Compare____cons_id_0_0(&Var_52, ConsIdX_20, ConsIdY_22);
            succeeded = ((MR_Integer) 2 == Var_52);
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = BoundFunctorYs_18;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Uniq_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Type_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Types_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Inst_16;
      MR_Word Insts_17;
      MR_Word Ground_19;
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_Info_1_23;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Inst_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        Insts_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        Var_22 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Ground_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Ground_19, 0) = (MR_Box) ((MR_Unsigned) (Uniq_2));
          MR_hl_field(1, Ground_19, 1) = ((MR_Box) (Var_22));
        }
        succeeded = check_hlds__inst_match__inst_matches_initial_mt_6_p_0(CalcSub_1, Type_14, Ground_19, Inst_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_23);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Types_15;
          next_value_of_HeadVar__4_4 = Insts_17;
          next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_23;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_functor_list_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Uniq_2,
  MR_Word Type_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctor_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word BoundFunctors_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word ArgTypes_19;
      MR_Word ArgInsts_21;
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 0))));
      MR_Word STATE_VARIABLE_Info_1_25;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(Var_24, Type_3, BoundFunctor_16, &ArgTypes_19);
      ArgInsts_21 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_16, 1))));
      succeeded = check_hlds__inst_match__ground_matches_initial_inst_list_6_p_0(CalcSub_1, Uniq_2, ArgTypes_19, ArgInsts_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_25);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = BoundFunctors_17;
        next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_25;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL check_hlds__inst_match__same_addr_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA = InstA_1 ;
	InstB = InstB_2 ;
		{

    SUCCESS_INDICATOR = ((void *) InstA == (void *) InstB);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstA_2,
  MR_Word InstB_3)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (InstB_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          succeeded = (InstA_2 == (MR_Integer) 3);
          break;
        case (MR_Integer) 4:
          switch (InstA_2) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 2:
          if (((MR_Unsigned) 29U & (((MR_Integer) 1 << InstA_2))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (InstA_2) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (InstA_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          succeeded = (InstB_3 == (MR_Integer) 3);
          break;
        case (MR_Integer) 4:
          switch (InstB_3) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 2:
          if (((MR_Unsigned) 29U & (((MR_Integer) 1 << InstB_3))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (InstB_3) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_functor_list_uniq_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word BoundFunctors_3,
  MR_Word Uniq_4)
{
  MR_bool succeeded;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        succeeded = (Uniq_4 == (MR_Integer) 0);
        if (succeeded)
          succeeded = hlds__inst_test__bound_functor_list_is_not_partly_unique_2_p_0(ModuleInfo_1, BoundFunctors_3);
        else
        {
          succeeded = (Uniq_4 == (MR_Integer) 2);
          if (succeeded)
            succeeded = hlds__inst_test__bound_functor_list_is_not_fully_unique_2_p_0(ModuleInfo_1, BoundFunctors_3);
          else
            succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        succeeded = (Uniq_4 == (MR_Integer) 1);
        if (succeeded)
          succeeded = hlds__inst_test__bound_functor_list_is_unique_2_p_0(ModuleInfo_1, BoundFunctors_3);
        else
        {
          succeeded = (Uniq_4 == (MR_Integer) 2);
          if (succeeded)
            succeeded = hlds__inst_test__bound_functor_list_is_mostly_unique_2_p_0(ModuleInfo_1, BoundFunctors_3);
          else
            succeeded = MR_TRUE;
        }
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_6_p_0(
  MR_Word CalcSub_7,
  MR_Word Type_8,
  MR_Word HOInstInfoA_9,
  MR_Word HOInstInfoB_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;

  if ((HOInstInfoB_10 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HOInstInfoA_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word PredInst_34 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_9), (MR_Integer) 1));
      MR_Word PredOrFunc_35 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_34, 0))) & (MR_Integer) 1);
      MR_Word ArgModes_36 = ((MR_Word) ((MR_hl_field(0, PredInst_34, 1))));

      switch (PredOrFunc_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Arity_39;
            MR_Word DefaultFunc_40;

            Arity_39 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_36);
            DefaultFunc_40 = hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_39);
            succeeded = check_hlds__inst_match__pred_inst_matches_1_6_p_0(CalcSub_7, Type_8, PredInst_34, DefaultFunc_40, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
            succeeded = MR_TRUE;
          }
          break;
      }
    }
  else
  {
    MR_Word TypeCtorInfo_22_31;
    MR_Word PredInstB_12 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_10), (MR_Integer) 1));
    MR_Word PredInstA_17;
    MR_Word PredOrFunc_23;
    MR_Word ModesA_24;
    MR_Word Det_26;
    MR_Word ModesB_27;
    MR_Word Types_29;
    MR_Integer Var_30;
    MR_Word Var_32;
    MR_Word Var_33;

    if ((HOInstInfoA_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeCtorInfo_22_22;
      MR_Word ArgModes_13 = ((MR_Word) ((MR_hl_field(0, PredInstB_12, 1))));
      MR_Integer Arity_16;
      MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_12, 0))) & (MR_Integer) 1);

      succeeded = (Var_21 == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
        Arity_16 = mercury__list__length_1_f_0(TypeCtorInfo_22_22, ArgModes_13);
        PredInstA_17 = hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_16);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      PredInstA_17 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_9), (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_17, 0))) & (MR_Integer) 1);
      ModesA_24 = ((MR_Word) ((MR_hl_field(0, PredInstA_17, 1))));
      Det_26 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_17, 3))) & (MR_Integer) 7);
      Var_32 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_12, 0))) & (MR_Integer) 1);
      ModesB_27 = ((MR_Word) ((MR_hl_field(0, PredInstB_12, 1))));
      Var_33 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_12, 3))) & (MR_Integer) 7);
      succeeded = (PredOrFunc_23 == Var_32);
      if (succeeded)
      {
        succeeded = (Det_26 == Var_33);
        if (succeeded)
        {
          TypeCtorInfo_22_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          Var_30 = mercury__list__length_1_f_0(TypeCtorInfo_22_31, ModesA_24);
          hlds__inst_util__get_higher_order_arg_types_3_p_0(Type_8, Var_30, &Types_29);
          succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0(CalcSub_7, Types_29, ModesA_24, ModesB_27, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_6_p_0(
  MR_Word tscc_proc_1_input_1_CalcSub_7,
  MR_Word tscc_proc_1_input_2_Type_8,
  MR_Word tscc_proc_1_input_3_InstA_9,
  MR_Word tscc_proc_1_input_4_InstB_10,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_24)
{
  MR_Word tscc_proc_2_input_1_CalcSub_7;
  MR_Word tscc_proc_2_input_2_Type_8;
  MR_Word tscc_proc_2_input_3_InstA_9;
  MR_Word tscc_proc_2_input_4_InstB_10;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_24;

  // The code for TSCC PROC 1: pred check_hlds.inst_match.inst_matches_final_mt/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_final_mt/6-0
  ;
  // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_final_mt_2/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word CalcSub_7 = tscc_proc_1_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_1_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_1_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_1_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
    MR_Word STATE_VARIABLE_Info_24;
    MR_bool succeeded = MR_TRUE;

    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstA_9, InstB_10);
    if (succeeded)
    {
      STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ThisExpansion_12;
      MR_Word Expansions0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 1))));
      MR_Word Expansions_14;

      {
        ThisExpansion_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ThisExpansion_12, 0) = ((MR_Box) (InstA_9));
        MR_hl_field(0, ThisExpansion_12, 1) = ((MR_Box) (InstB_10));
        MR_hl_field(0, ThisExpansion_12, 2) = ((MR_Box) (Type_8));
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_12)), Expansions0_13, &Expansions_14);
      if (succeeded)
      {
        MR_Word ExpandedInstA_15;
        MR_Word ExpandedInstB_16;
        MR_Word InstVarSubResult_17;
        MR_Word STATE_VARIABLE_Info_1_25;
        MR_Word Var_27;
        MR_Word STATE_VARIABLE_Info_2_28;
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 0))));
        MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 2))));
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 3)));

        {
          STATE_VARIABLE_Info_1_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_1_25, 0) = ((MR_Box) (Var_35));
          MR_hl_field(0, STATE_VARIABLE_Info_1_25, 1) = ((MR_Box) (Expansions_14));
          MR_hl_field(0, STATE_VARIABLE_Info_1_25, 2) = ((MR_Box) (Var_37));
          MR_hl_field(0, STATE_VARIABLE_Info_1_25, 3) = (MR_Box) (packed_word_0);
        }
        hlds__inst_lookup__inst_expand_3_p_0(Var_35, InstA_9, &ExpandedInstA_15);
        Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_25, 0))));
        hlds__inst_lookup__inst_expand_3_p_0(Var_27, InstB_10, &ExpandedInstB_16);
        succeeded = check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0(CalcSub_7, Type_8, ExpandedInstA_15, ExpandedInstB_16, &InstVarSubResult_17, STATE_VARIABLE_Info_1_25, &STATE_VARIABLE_Info_2_28);
        if (succeeded)
        {
          if (((MR_tag((MR_Word) InstVarSubResult_17)) == (MR_Integer) 1))
          {
            MR_Word ContCalcSub_20 = ((MR_Unsigned) ((MR_hl_field(1, InstVarSubResult_17, 0))) & (MR_Integer) 3);
            MR_Word ContinueInstA_21 = ((MR_Word) ((MR_hl_field(1, InstVarSubResult_17, 1))));
            MR_Word ContinueInstB_22 = ((MR_Word) ((MR_hl_field(1, InstVarSubResult_17, 2))));
            MR_Word next_value_of_tscc_proc_2_input_1_CalcSub_7 = ContCalcSub_20;
            MR_Word next_value_of_tscc_proc_2_input_2_Type_8 = Type_8;
            MR_Word next_value_of_tscc_proc_2_input_3_InstA_9 = ContinueInstA_21;
            MR_Word next_value_of_tscc_proc_2_input_4_InstB_10 = ContinueInstB_22;
            MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53 = STATE_VARIABLE_Info_2_28;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_CalcSub_7 = next_value_of_tscc_proc_2_input_1_CalcSub_7;
            tscc_proc_2_input_2_Type_8 = next_value_of_tscc_proc_2_input_2_Type_8;
            tscc_proc_2_input_3_InstA_9 = next_value_of_tscc_proc_2_input_3_InstA_9;
            tscc_proc_2_input_4_InstB_10 = next_value_of_tscc_proc_2_input_4_InstB_10;
            tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word RecurseInstA_18 = ((MR_Word) ((MR_hl_field(0, InstVarSubResult_17, 0))));
            MR_Word RecurseInstB_19 = ((MR_Word) ((MR_hl_field(0, InstVarSubResult_17, 1))));
            MR_Word next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
            MR_Word next_value_of_tscc_proc_1_input_3_InstA_9 = RecurseInstA_18;
            MR_Word next_value_of_tscc_proc_1_input_4_InstB_10 = RecurseInstB_19;
            MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_2_28;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_CalcSub_7 = (MR_Integer) 0;
            tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
            tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
            tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
            tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
            goto top_of_proc_1;
          }
        }
      }
      else
      {
        STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
        succeeded = MR_TRUE;
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_24;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word CalcSub_7 = tscc_proc_2_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_2_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_2_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_2_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_53 = tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53;
    MR_Word STATE_VARIABLE_Info_54;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) InstA_9)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              if ((InstB_10 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) InstB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_10, 0)))) == (MR_Integer) 2))))
              {
                MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);

                switch (Uniq_12) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniqA_22 = ((MR_Unsigned) ((MR_hl_field(1, InstA_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfoA_23 = ((MR_Word) ((MR_hl_field(1, InstA_9, 1))));

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word UniqB_24 = ((MR_Unsigned) ((MR_hl_field(1, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word HOInstInfoB_25 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));

                succeeded = check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(CalcSub_7, Type_8, HOInstInfoA_23, HOInstInfoB_25, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                if (succeeded)
                  succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_22, UniqB_24);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word InstResultsB_26 = ((MR_Word) ((MR_hl_field(2, InstB_10, 1))));
                MR_Word BoundFunctorsB_27 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));
                MR_Word ModuleInfo_28;
                MR_Word STATE_VARIABLE_Info_2_56;
                MR_Word Var_57;
                MR_Word UniqB_79 = ((MR_Unsigned) ((MR_hl_field(2, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word Var_144;

                succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_1_5_p_0(CalcSub_7, Type_8, HOInstInfoA_23, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_2_56);
                if (succeeded)
                {
                  succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_22, UniqB_79);
                  if (succeeded)
                  {
                    ModuleInfo_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_56, 0))));
                    succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(ModuleInfo_28, Type_8, InstResultsB_26, BoundFunctorsB_27);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_match__uniq_matches_bound_functor_list_3_p_0(ModuleInfo_28, UniqA_22, BoundFunctorsB_27);
                      if (succeeded)
                      {
                        Var_57 = (MR_Integer) 0;
                        check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstB_10, &Var_144, STATE_VARIABLE_Info_2_56, &STATE_VARIABLE_Info_54);
                        succeeded = (Var_57 == Var_144);
                        if (succeeded)
                        {
                          {
                            MR_Word Var_59;

                            Var_59 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
                            succeeded = check_hlds__inst_match__bound_functor_list_is_complete_for_type_4_p_0(ModuleInfo_28, Var_59, Type_8, BoundFunctorsB_27);
                          }
                          if (!(succeeded))
                          {
                            MR_Word GroundMatchesBound_29 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_54, 3))) & (MR_Integer) 1);

                            succeeded = (GroundMatchesBound_29 == (MR_Integer) 1);
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word UniqB_80 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_81 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));

                    succeeded = check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(CalcSub_7, Type_8, HOInstInfoA_23, HOInstInfoB_81, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_22, UniqB_80);
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResultsA_33 = ((MR_Word) ((MR_hl_field(2, InstA_9, 1))));
          MR_Word BoundFunctorsA_34 = ((MR_Word) ((MR_hl_field(2, InstA_9, 2))));
          MR_Word UniqA_90 = ((MR_Unsigned) ((MR_hl_field(2, InstA_9, 0))) & (MR_Integer) 7);

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Word Var_64;
                MR_Word UniqB_82 = ((MR_Unsigned) ((MR_hl_field(1, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word Var_145;

                succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_90, UniqB_82);
                  if (succeeded)
                  {
                    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                    succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(Var_62, Type_8, InstResultsA_33, BoundFunctorsA_34);
                    if (succeeded)
                    {
                      Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                      succeeded = check_hlds__inst_match__bound_functor_list_matches_uniq_3_p_0(Var_63, UniqB_82, BoundFunctorsA_34);
                      if (succeeded)
                      {
                        Var_64 = (MR_Integer) 0;
                        check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_145, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                        succeeded = (Var_64 == Var_145);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(2, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word BoundFunctorsB_84 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));

                succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_90, UniqB_83);
                if (succeeded)
                  succeeded = check_hlds__inst_match__bound_functor_list_matches_final_6_p_0(CalcSub_7, Type_8, BoundFunctorsA_34, BoundFunctorsB_84, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_Word UniqB_85 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word Var_146;

                    succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_90, UniqB_85);
                      if (succeeded)
                      {
                        Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                        succeeded = check_hlds__inst_match__bound_functor_list_matches_uniq_3_p_0(Var_68, UniqB_85, BoundFunctorsA_34);
                        if (succeeded)
                        {
                          Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                          succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(Var_69, InstResultsA_33, BoundFunctorsA_34);
                          if (succeeded)
                          {
                            Var_70 = (MR_Integer) 0;
                            check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_146, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                            succeeded = (Var_70 == Var_146);
                          }
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstA_9, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstVarsA_48 = ((MR_Word) ((MR_hl_field(3, InstA_9, 1))));
              MR_Word SubInstA_49 = ((MR_Word) ((MR_hl_field(3, InstA_9, 2))));
              MR_Word InstVarsB_50;
              MR_Word SubInstB_51;

              succeeded = ((((MR_tag((MR_Word) InstB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_10, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                InstVarsB_50 = ((MR_Word) ((MR_hl_field(3, InstB_10, 1))));
                SubInstB_51 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                  MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                  MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                  succeeded = mercury__set__subset_2_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), InstVarsB_50, InstVarsA_48);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                    next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                    next_value_of_tscc_proc_1_input_3_InstA_9 = SubInstA_49;
                    next_value_of_tscc_proc_1_input_4_InstB_10 = SubInstB_51;
                    next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_53;
                    tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                    tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                    tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                    tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                    goto top_of_proc_1;
                  }
                }
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                MR_Word next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                MR_Word next_value_of_tscc_proc_1_input_3_InstA_9 = SubInstA_49;
                MR_Word next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_53;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniqA_100 = ((MR_Unsigned) ((MR_hl_field(3, InstA_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfoA_101 = ((MR_Word) ((MR_hl_field(3, InstA_9, 2))));

              switch (MR_tag((MR_Word) InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NextInstA_41;
                    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_72, Type_8, UniqA_100, HOInstInfoA_101, &NextInstA_41);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_41;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_53;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                    MR_Word NextInstA_93;
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_74, Type_8, UniqA_100, HOInstInfoA_101, &NextInstA_93);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_93;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_53;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word UniqB_94 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                        MR_Word HOInstInfoB_95 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));

                        succeeded = check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(CalcSub_7, Type_8, HOInstInfoA_101, HOInstInfoB_95, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                        if (succeeded)
                          succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_100, UniqB_94);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_54;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_24 = tscc_output_1_STATE_VARIABLE_Info_24;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_2_6_p_0(
  MR_Word tscc_proc_2_input_1_CalcSub_7,
  MR_Word tscc_proc_2_input_2_Type_8,
  MR_Word tscc_proc_2_input_3_InstA_9,
  MR_Word tscc_proc_2_input_4_InstB_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_24)
{
  MR_Word tscc_proc_1_input_1_CalcSub_7;
  MR_Word tscc_proc_1_input_2_Type_8;
  MR_Word tscc_proc_1_input_3_InstA_9;
  MR_Word tscc_proc_1_input_4_InstB_10;
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_24;

  // The code for TSCC PROC 2: pred check_hlds.inst_match.inst_matches_final_mt_2/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_final_mt/6-0
  ;
  // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_final_mt_2/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word CalcSub_7 = tscc_proc_1_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_1_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_1_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_1_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
    MR_Word STATE_VARIABLE_Info_24;
    MR_bool succeeded = MR_TRUE;

    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstA_9, InstB_10);
    if (succeeded)
    {
      STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ThisExpansion_12;
      MR_Word Expansions0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 1))));
      MR_Word Expansions_14;

      {
        ThisExpansion_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ThisExpansion_12, 0) = ((MR_Box) (InstA_9));
        MR_hl_field(0, ThisExpansion_12, 1) = ((MR_Box) (InstB_10));
        MR_hl_field(0, ThisExpansion_12, 2) = ((MR_Box) (Type_8));
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_12)), Expansions0_13, &Expansions_14);
      if (succeeded)
      {
        MR_Word ExpandedInstA_15;
        MR_Word ExpandedInstB_16;
        MR_Word InstVarSubResult_17;
        MR_Word STATE_VARIABLE_Info_1_25;
        MR_Word Var_27;
        MR_Word STATE_VARIABLE_Info_2_28;
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 0))));
        MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 2))));
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 3)));

        {
          STATE_VARIABLE_Info_1_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_1_25, 0) = ((MR_Box) (Var_35));
          MR_hl_field(0, STATE_VARIABLE_Info_1_25, 1) = ((MR_Box) (Expansions_14));
          MR_hl_field(0, STATE_VARIABLE_Info_1_25, 2) = ((MR_Box) (Var_37));
          MR_hl_field(0, STATE_VARIABLE_Info_1_25, 3) = (MR_Box) (packed_word_0);
        }
        hlds__inst_lookup__inst_expand_3_p_0(Var_35, InstA_9, &ExpandedInstA_15);
        Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_25, 0))));
        hlds__inst_lookup__inst_expand_3_p_0(Var_27, InstB_10, &ExpandedInstB_16);
        succeeded = check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0(CalcSub_7, Type_8, ExpandedInstA_15, ExpandedInstB_16, &InstVarSubResult_17, STATE_VARIABLE_Info_1_25, &STATE_VARIABLE_Info_2_28);
        if (succeeded)
        {
          if (((MR_tag((MR_Word) InstVarSubResult_17)) == (MR_Integer) 1))
          {
            MR_Word ContCalcSub_20 = ((MR_Unsigned) ((MR_hl_field(1, InstVarSubResult_17, 0))) & (MR_Integer) 3);
            MR_Word ContinueInstA_21 = ((MR_Word) ((MR_hl_field(1, InstVarSubResult_17, 1))));
            MR_Word ContinueInstB_22 = ((MR_Word) ((MR_hl_field(1, InstVarSubResult_17, 2))));
            MR_Word next_value_of_tscc_proc_2_input_1_CalcSub_7 = ContCalcSub_20;
            MR_Word next_value_of_tscc_proc_2_input_2_Type_8 = Type_8;
            MR_Word next_value_of_tscc_proc_2_input_3_InstA_9 = ContinueInstA_21;
            MR_Word next_value_of_tscc_proc_2_input_4_InstB_10 = ContinueInstB_22;
            MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53 = STATE_VARIABLE_Info_2_28;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_CalcSub_7 = next_value_of_tscc_proc_2_input_1_CalcSub_7;
            tscc_proc_2_input_2_Type_8 = next_value_of_tscc_proc_2_input_2_Type_8;
            tscc_proc_2_input_3_InstA_9 = next_value_of_tscc_proc_2_input_3_InstA_9;
            tscc_proc_2_input_4_InstB_10 = next_value_of_tscc_proc_2_input_4_InstB_10;
            tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53;
            goto top_of_proc_2;
          }
          else
          {
            MR_Word RecurseInstA_18 = ((MR_Word) ((MR_hl_field(0, InstVarSubResult_17, 0))));
            MR_Word RecurseInstB_19 = ((MR_Word) ((MR_hl_field(0, InstVarSubResult_17, 1))));
            MR_Word next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
            MR_Word next_value_of_tscc_proc_1_input_3_InstA_9 = RecurseInstA_18;
            MR_Word next_value_of_tscc_proc_1_input_4_InstB_10 = RecurseInstB_19;
            MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_2_28;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_CalcSub_7 = (MR_Integer) 0;
            tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
            tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
            tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
            tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
            goto top_of_proc_1;
          }
        }
      }
      else
      {
        STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
        succeeded = MR_TRUE;
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_24;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word CalcSub_7 = tscc_proc_2_input_1_CalcSub_7;
    MR_Word Type_8 = tscc_proc_2_input_2_Type_8;
    MR_Word InstA_9 = tscc_proc_2_input_3_InstA_9;
    MR_Word InstB_10 = tscc_proc_2_input_4_InstB_10;
    MR_Word STATE_VARIABLE_Info_0_53 = tscc_proc_2_input_5_STATE_VARIABLE_Info_0_53;
    MR_Word STATE_VARIABLE_Info_54;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) InstA_9)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              if ((InstB_10 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) InstB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_10, 0)))) == (MR_Integer) 2))))
              {
                MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);

                switch (Uniq_12) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniqA_22 = ((MR_Unsigned) ((MR_hl_field(1, InstA_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfoA_23 = ((MR_Word) ((MR_hl_field(1, InstA_9, 1))));

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word UniqB_24 = ((MR_Unsigned) ((MR_hl_field(1, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word HOInstInfoB_25 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));

                succeeded = check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(CalcSub_7, Type_8, HOInstInfoA_23, HOInstInfoB_25, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                if (succeeded)
                  succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_22, UniqB_24);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word InstResultsB_26 = ((MR_Word) ((MR_hl_field(2, InstB_10, 1))));
                MR_Word BoundFunctorsB_27 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));
                MR_Word ModuleInfo_28;
                MR_Word STATE_VARIABLE_Info_2_56;
                MR_Word Var_57;
                MR_Word UniqB_79 = ((MR_Unsigned) ((MR_hl_field(2, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word Var_144;

                succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_1_5_p_0(CalcSub_7, Type_8, HOInstInfoA_23, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_2_56);
                if (succeeded)
                {
                  succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_22, UniqB_79);
                  if (succeeded)
                  {
                    ModuleInfo_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_56, 0))));
                    succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(ModuleInfo_28, Type_8, InstResultsB_26, BoundFunctorsB_27);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_match__uniq_matches_bound_functor_list_3_p_0(ModuleInfo_28, UniqA_22, BoundFunctorsB_27);
                      if (succeeded)
                      {
                        Var_57 = (MR_Integer) 0;
                        check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstB_10, &Var_144, STATE_VARIABLE_Info_2_56, &STATE_VARIABLE_Info_54);
                        succeeded = (Var_57 == Var_144);
                        if (succeeded)
                        {
                          {
                            MR_Word Var_59;

                            Var_59 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
                            succeeded = check_hlds__inst_match__bound_functor_list_is_complete_for_type_4_p_0(ModuleInfo_28, Var_59, Type_8, BoundFunctorsB_27);
                          }
                          if (!(succeeded))
                          {
                            MR_Word GroundMatchesBound_29 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_54, 3))) & (MR_Integer) 1);

                            succeeded = (GroundMatchesBound_29 == (MR_Integer) 1);
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word UniqB_80 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_81 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));

                    succeeded = check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(CalcSub_7, Type_8, HOInstInfoA_23, HOInstInfoB_81, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_22, UniqB_80);
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResultsA_33 = ((MR_Word) ((MR_hl_field(2, InstA_9, 1))));
          MR_Word BoundFunctorsA_34 = ((MR_Word) ((MR_hl_field(2, InstA_9, 2))));
          MR_Word UniqA_90 = ((MR_Unsigned) ((MR_hl_field(2, InstA_9, 0))) & (MR_Integer) 7);

          switch (MR_tag((MR_Word) InstB_10)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, InstB_10, 1))));
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Word Var_64;
                MR_Word UniqB_82 = ((MR_Unsigned) ((MR_hl_field(1, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word Var_145;

                succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_90, UniqB_82);
                  if (succeeded)
                  {
                    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                    succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(Var_62, Type_8, InstResultsA_33, BoundFunctorsA_34);
                    if (succeeded)
                    {
                      Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                      succeeded = check_hlds__inst_match__bound_functor_list_matches_uniq_3_p_0(Var_63, UniqB_82, BoundFunctorsA_34);
                      if (succeeded)
                      {
                        Var_64 = (MR_Integer) 0;
                        check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_145, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                        succeeded = (Var_64 == Var_145);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(2, InstB_10, 0))) & (MR_Integer) 7);
                MR_Word BoundFunctorsB_84 = ((MR_Word) ((MR_hl_field(2, InstB_10, 2))));

                succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_90, UniqB_83);
                if (succeeded)
                  succeeded = check_hlds__inst_match__bound_functor_list_matches_final_6_p_0(CalcSub_7, Type_8, BoundFunctorsA_34, BoundFunctorsB_84, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_Word UniqB_85 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                    MR_Word Var_146;

                    succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_90, UniqB_85);
                      if (succeeded)
                      {
                        Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                        succeeded = check_hlds__inst_match__bound_functor_list_matches_uniq_3_p_0(Var_68, UniqB_85, BoundFunctorsA_34);
                        if (succeeded)
                        {
                          Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                          succeeded = hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(Var_69, InstResultsA_33, BoundFunctorsA_34);
                          if (succeeded)
                          {
                            Var_70 = (MR_Integer) 0;
                            check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(CalcSub_7, Type_8, InstA_9, &Var_146, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                            succeeded = (Var_70 == Var_146);
                          }
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstA_9, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstVarsA_48 = ((MR_Word) ((MR_hl_field(3, InstA_9, 1))));
              MR_Word SubInstA_49 = ((MR_Word) ((MR_hl_field(3, InstA_9, 2))));
              MR_Word InstVarsB_50;
              MR_Word SubInstB_51;

              succeeded = ((((MR_tag((MR_Word) InstB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_10, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                InstVarsB_50 = ((MR_Word) ((MR_hl_field(3, InstB_10, 1))));
                SubInstB_51 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                  MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                  MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                  MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                  MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                  succeeded = mercury__set__subset_2_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), InstVarsB_50, InstVarsA_48);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                    next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                    next_value_of_tscc_proc_1_input_3_InstA_9 = SubInstA_49;
                    next_value_of_tscc_proc_1_input_4_InstB_10 = SubInstB_51;
                    next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_53;
                    tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                    tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                    tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                    tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                    goto top_of_proc_1;
                  }
                }
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                MR_Word next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                MR_Word next_value_of_tscc_proc_1_input_3_InstA_9 = SubInstA_49;
                MR_Word next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_53;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniqA_100 = ((MR_Unsigned) ((MR_hl_field(3, InstA_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfoA_101 = ((MR_Word) ((MR_hl_field(3, InstA_9, 2))));

              switch (MR_tag((MR_Word) InstB_10)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NextInstA_41;
                    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_72, Type_8, UniqA_100, HOInstInfoA_101, &NextInstA_41);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_41;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_53;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_53, 0))));
                    MR_Word NextInstA_93;
                    MR_Word next_value_of_tscc_proc_1_input_1_CalcSub_7;
                    MR_Word next_value_of_tscc_proc_1_input_2_Type_8;
                    MR_Word next_value_of_tscc_proc_1_input_3_InstA_9;
                    MR_Word next_value_of_tscc_proc_1_input_4_InstB_10;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;

                    succeeded = hlds__inst_test__maybe_any_to_bound_5_p_0(Var_74, Type_8, UniqA_100, HOInstInfoA_101, &NextInstA_93);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_CalcSub_7 = CalcSub_7;
                      next_value_of_tscc_proc_1_input_2_Type_8 = Type_8;
                      next_value_of_tscc_proc_1_input_3_InstA_9 = NextInstA_93;
                      next_value_of_tscc_proc_1_input_4_InstB_10 = InstB_10;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_53;
                      tscc_proc_1_input_1_CalcSub_7 = next_value_of_tscc_proc_1_input_1_CalcSub_7;
                      tscc_proc_1_input_2_Type_8 = next_value_of_tscc_proc_1_input_2_Type_8;
                      tscc_proc_1_input_3_InstA_9 = next_value_of_tscc_proc_1_input_3_InstA_9;
                      tscc_proc_1_input_4_InstB_10 = next_value_of_tscc_proc_1_input_4_InstB_10;
                      tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_Info_0_23;
                      goto top_of_proc_1;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstB_10, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word UniqB_94 = ((MR_Unsigned) ((MR_hl_field(3, InstB_10, 1))) & (MR_Integer) 7);
                        MR_Word HOInstInfoB_95 = ((MR_Word) ((MR_hl_field(3, InstB_10, 2))));

                        succeeded = check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(CalcSub_7, Type_8, HOInstInfoA_101, HOInstInfoB_95, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_54);
                        if (succeeded)
                          succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(UniqA_100, UniqB_94);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_54;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_24 = tscc_output_1_STATE_VARIABLE_Info_24;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_1_5_p_0(
  MR_Word CalcSub_6,
  MR_Word Type_7,
  MR_Word HOInstInfo_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_bool succeeded;

  if ((HOInstInfo_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word PredInst_10 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_8), (MR_Integer) 1));
    MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_10, 0))) & (MR_Integer) 1);
    MR_Word ArgModes_14 = ((MR_Word) ((MR_hl_field(0, PredInst_10, 1))));

    switch (PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Arity_17;
          MR_Word DefaultFunc_18;

          Arity_17 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_14);
          DefaultFunc_18 = hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_17);
          succeeded = check_hlds__inst_match__pred_inst_matches_1_6_p_0(CalcSub_6, Type_7, PredInst_10, DefaultFunc_18, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
        }
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_1_6_p_0(
  MR_Word CalcSub_7,
  MR_Word Type_8,
  MR_Word PredInstA_9,
  MR_Word PredInstB_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_22_22;
  MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_9, 0))) & (MR_Integer) 1);
  MR_Word ModesA_13 = ((MR_Word) ((MR_hl_field(0, PredInstA_9, 1))));
  MR_Word Det_15 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_9, 3))) & (MR_Integer) 7);
  MR_Word ModesB_16 = ((MR_Word) ((MR_hl_field(0, PredInstB_10, 1))));
  MR_Word Types_18;
  MR_Integer Var_21;
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_10, 0))) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_10, 3))) & (MR_Integer) 7);

  succeeded = (PredOrFunc_12 == Var_23);
  if (succeeded)
  {
    succeeded = (Det_15 == Var_24);
    if (succeeded)
    {
      TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
      Var_21 = mercury__list__length_1_f_0(TypeCtorInfo_22_22, ModesA_13);
      hlds__inst_util__get_higher_order_arg_types_3_p_0(Type_8, Var_21, &Types_18);
      succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0(CalcSub_7, Types_18, ModesA_13, ModesB_16, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_6_p_0(
  MR_Word CalcSub_7,
  MR_Word Type_8,
  MR_Word HOInstInfoA_9,
  MR_Word HOInstInfoB_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;

  if ((HOInstInfoB_10 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HOInstInfoA_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word PredInst_48 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_9), (MR_Integer) 1));

      succeeded = check_hlds__inst_match__pred_inst_matches_ground_1_5_p_0(CalcSub_7, Type_8, PredInst_48, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
    }
  else
  {
    MR_Word PredInstB_12 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_10), (MR_Integer) 1));

    if ((HOInstInfoA_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeCtorInfo_25_25;
      MR_Word TypeCtorInfo_22_45;
      MR_Word ArgModes_13 = ((MR_Word) ((MR_hl_field(0, PredInstB_12, 1))));
      MR_Integer Arity_16;
      MR_Word PredInstA_17;
      MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_12, 0))) & (MR_Integer) 1);
      MR_Word PredOrFunc_37;
      MR_Word ModesA_38;
      MR_Word Det_40;
      MR_Word ModesB_41;
      MR_Word Types_43;
      MR_Integer Var_44;
      MR_Word Var_46;
      MR_Word Var_47;

      succeeded = (Var_21 == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_25_25 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
        mercury__list__length_2_p_0(TypeCtorInfo_25_25, ArgModes_13, &Arity_16);
        PredInstA_17 = hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_16);
        PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_17, 0))) & (MR_Integer) 1);
        ModesA_38 = ((MR_Word) ((MR_hl_field(0, PredInstA_17, 1))));
        Det_40 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_17, 3))) & (MR_Integer) 7);
        Var_46 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_12, 0))) & (MR_Integer) 1);
        ModesB_41 = ((MR_Word) ((MR_hl_field(0, PredInstB_12, 1))));
        Var_47 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_12, 3))) & (MR_Integer) 7);
        succeeded = (PredOrFunc_37 == Var_46);
        if (succeeded)
        {
          succeeded = (Det_40 == Var_47);
          if (succeeded)
          {
            TypeCtorInfo_22_45 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            Var_44 = mercury__list__length_1_f_0(TypeCtorInfo_22_45, ModesA_38);
            hlds__inst_util__get_higher_order_arg_types_3_p_0(Type_8, Var_44, &Types_43);
            succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0(CalcSub_7, Types_43, ModesA_38, ModesB_41, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
          }
        }
      }
    }
    else
    {
      MR_Word TypeCtorInfo_22_34;
      MR_Word PredInstA_24 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_9), (MR_Integer) 1));
      MR_Word PredOrFunc_26 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_24, 0))) & (MR_Integer) 1);
      MR_Word ModesA_27 = ((MR_Word) ((MR_hl_field(0, PredInstA_24, 1))));
      MR_Word Det_29 = ((MR_Unsigned) ((MR_hl_field(0, PredInstA_24, 3))) & (MR_Integer) 7);
      MR_Word ModesB_30 = ((MR_Word) ((MR_hl_field(0, PredInstB_12, 1))));
      MR_Word Types_32;
      MR_Integer Var_33;
      MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_12, 0))) & (MR_Integer) 1);
      MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, PredInstB_12, 3))) & (MR_Integer) 7);

      succeeded = (PredOrFunc_26 == Var_35);
      if (succeeded)
      {
        succeeded = (Det_29 == Var_36);
        if (succeeded)
        {
          TypeCtorInfo_22_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          Var_33 = mercury__list__length_1_f_0(TypeCtorInfo_22_34, ModesA_27);
          hlds__inst_util__get_higher_order_arg_types_3_p_0(Type_8, Var_33, &Types_32);
          succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0(CalcSub_7, Types_32, ModesA_27, ModesB_30, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_1_5_p_0(
  MR_Word CalcSub_6,
  MR_Word Type_7,
  MR_Word PredInst_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_8, 0))) & (MR_Integer) 1);
  MR_Word ArgModes_11 = ((MR_Word) ((MR_hl_field(0, PredInst_8, 1))));

  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorInfo_22_27;
        MR_Integer Arity_14;
        MR_Word DefaultFunc_15;
        MR_Word PredOrFunc_19;
        MR_Word ModesA_20;
        MR_Word Det_22;
        MR_Word ModesB_23;
        MR_Word Types_25;
        MR_Integer Var_26;
        MR_Word Var_28;
        MR_Word Var_29;

        Arity_14 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_11);
        DefaultFunc_15 = hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_14);
        PredOrFunc_19 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_8, 0))) & (MR_Integer) 1);
        ModesA_20 = ((MR_Word) ((MR_hl_field(0, PredInst_8, 1))));
        Det_22 = ((MR_Unsigned) ((MR_hl_field(0, PredInst_8, 3))) & (MR_Integer) 7);
        Var_28 = ((MR_Unsigned) ((MR_hl_field(0, DefaultFunc_15, 0))) & (MR_Integer) 1);
        ModesB_23 = ((MR_Word) ((MR_hl_field(0, DefaultFunc_15, 1))));
        Var_29 = ((MR_Unsigned) ((MR_hl_field(0, DefaultFunc_15, 3))) & (MR_Integer) 7);
        succeeded = (PredOrFunc_19 == Var_28);
        if (succeeded)
        {
          succeeded = (Det_22 == Var_29);
          if (succeeded)
          {
            TypeCtorInfo_22_27 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            Var_26 = mercury__list__length_1_f_0(TypeCtorInfo_22_27, ModesA_20);
            hlds__inst_util__get_higher_order_arg_types_3_p_0(Type_7, Var_26, &Types_25);
            succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0(CalcSub_6, Types_25, ModesA_20, ModesB_23, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
          }
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_1_6_p_0(
  MR_Word CalcSub_7,
  MR_Word Type_8,
  MR_Word Inst_9,
  MR_Word * ContainsNonstd_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_Word Var_14;

  Var_14 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  check_hlds__inst_match__inst_contains_nondefault_func_mode_2_7_p_0(CalcSub_7, Type_8, Inst_9, Var_14, ContainsNonstd_10, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_7_p_0(
  MR_Word CalcSub_8,
  MR_Word Type_9,
  MR_Word Inst_10,
  MR_Word STATE_VARIABLE_Expansions_0_31,
  MR_Word * ContainsNonstd_12,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ContainsNonstd_12 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_15 = ((MR_Word) ((MR_hl_field(1, Inst_10, 1))));
          MR_Word STATE_VARIABLE_Info_1_34;

          if ((HOInstInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_Info_1_34 = STATE_VARIABLE_Info_0_32;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word PredInst_51 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_15), (MR_Integer) 1));

            succeeded = check_hlds__inst_match__pred_inst_matches_ground_1_5_p_0(CalcSub_8, Type_9, PredInst_51, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_1_34);
          }
          if (succeeded)
          {
            *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_1_34;
            *ContainsNonstd_12 = (MR_Integer) 0;
          }
          else
          {
            *ContainsNonstd_12 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_17 = ((MR_Word) ((MR_hl_field(2, Inst_10, 1))));
          MR_Word BoundFunctors_18 = ((MR_Word) ((MR_hl_field(2, Inst_10, 2))));

          switch (MR_tag((MR_Word) InstResults_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__inst_match__bound_functor_list_contains_nondefault_func_mode_7_p_0(CalcSub_8, Type_9, BoundFunctors_18, STATE_VARIABLE_Expansions_0_31, ContainsNonstd_12, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
                  break;
                case (MR_Integer) 1:
                  {
                    *ContainsNonstd_12 = (MR_Integer) 0;
                    *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              check_hlds__inst_match__bound_functor_list_contains_nondefault_func_mode_7_p_0(CalcSub_8, Type_9, BoundFunctors_18, STATE_VARIABLE_Expansions_0_31, ContainsNonstd_12, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_30 = ((MR_Word) ((MR_hl_field(3, Inst_10, 1))));
              MR_Word STATE_VARIABLE_Expansions_1_40;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_30)), STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_1_40);
              if (succeeded)
              {
                MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_32, 0))));
                MR_Word SubInst_44;
                MR_Word next_value_of_Inst_10;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_31;

                hlds__inst_lookup__inst_lookup_3_p_0(Var_41, InstName_30, &SubInst_44);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_10 = SubInst_44;
                next_value_of_STATE_VARIABLE_Expansions_0_31 = STATE_VARIABLE_Expansions_1_40;
                Inst_10 = next_value_of_Inst_10;
                STATE_VARIABLE_Expansions_0_31 = next_value_of_STATE_VARIABLE_Expansions_0_31;
                continue;
              }
              else
              {
                *ContainsNonstd_12 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_28 = ((MR_Word) ((MR_hl_field(3, Inst_10, 2))));
              MR_Word next_value_of_Inst_10 = SubInst_28;

              // direct tailcall eliminated
              ;
              Inst_10 = next_value_of_Inst_10;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              *ContainsNonstd_12 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_match.inst_contains_nondefault_func_mode_2\'/7", (MR_String) "uninstantiated inst parameter");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_6_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Type_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Types_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ModeA_14;
      MR_Word ModeAs_15;
      MR_Word ModeB_16;
      MR_Word ModeBs_17;
      MR_Word ModuleInfo_19;
      MR_Word InitialA_20;
      MR_Word FinalA0_21;
      MR_Word InitialB_22;
      MR_Word FinalB_23;
      MR_Word InitialCalcSub_24;
      MR_Word FinalA_25;
      MR_Word STATE_VARIABLE_Info_1_28;
      MR_Word STATE_VARIABLE_Info_2_29;
      MR_Word Var_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModeA_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        ModeAs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModeB_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
          ModeBs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
          ModuleInfo_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 0))));
          hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_19, ModeA_14, &InitialA_20, &FinalA0_21);
          hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_19, ModeB_16, &InitialB_22, &FinalB_23);
          switch (CalcSub_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              InitialCalcSub_24 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              InitialCalcSub_24 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              InitialCalcSub_24 = (MR_Integer) 0;
              break;
          }
          succeeded = check_hlds__inst_match__inst_matches_final_mt_6_p_0(InitialCalcSub_24, Type_12, InitialB_22, InitialA_20, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_28);
          if (succeeded)
          {
            Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_28, 2))));
            if ((Var_51 == (MR_Word) ((MR_Unsigned) 0U)))
              FinalA_25 = FinalA0_21;
            else
            {
              MR_Word Subst_35 = ((MR_Word) ((MR_hl_field(1, Var_51, 0))));

              parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_35, FinalA0_21, &FinalA_25);
            }
            succeeded = check_hlds__inst_match__inst_matches_final_mt_6_p_0(CalcSub_1, Type_12, FinalA_25, FinalB_23, STATE_VARIABLE_Info_1_28, &STATE_VARIABLE_Info_2_29);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Types_13;
              next_value_of_HeadVar__3_3 = ModeAs_15;
              next_value_of_HeadVar__4_4 = ModeBs_17;
              next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_2_29;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_nondefault_func_mode_7_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_match.inst_list_contains_nondefault_func_mode\'/7", (MR_String) "list length mismatch");
          return;
        }
    else
    {
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_match.inst_list_contains_nondefault_func_mode\'/7", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Word Inst_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        MR_Word Insts_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        MR_Word HeadContainsNonstd_41;
        MR_Word STATE_VARIABLE_Info_1_44;

        check_hlds__inst_match__inst_contains_nondefault_func_mode_2_7_p_0(CalcSub_1, Var_46, Inst_36, HeadVar__4_4, &HeadContainsNonstd_41, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_44);
        switch (HeadContainsNonstd_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__2_2 = Var_45;
              MR_Word next_value_of_HeadVar__3_3 = Insts_37;
              MR_Word next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_1_44;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              *HeadVar__5_5 = (MR_Integer) 1;
              *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_1_44;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_functor_list_contains_nondefault_func_mode_7_p_0(
  MR_Word CalcSub_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    }
    else
    {
      MR_Word BoundFunctor_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctors_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgInsts_22 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_16, 1))));
      MR_Word ArgTypes_23;
      MR_Word HeadContainsNonstd_24;
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
      MR_Word STATE_VARIABLE_Info_1_28;

      hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(Var_27, Type_2, BoundFunctor_16, &ArgTypes_23);
      check_hlds__inst_match__inst_list_contains_nondefault_func_mode_7_p_0(CalcSub_1, ArgTypes_23, ArgInsts_22, HeadVar__4_4, &HeadContainsNonstd_24, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_28);
      switch (HeadContainsNonstd_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__3_3 = BoundFunctors_17;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_1_28;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__5_5 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_1_28;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_6_p_0(
  MR_Word CalcSub_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word ArgType_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgInstA_14;
      MR_Word ArgInstsA_15;
      MR_Word ArgInstB_16;
      MR_Word ArgInstsB_17;
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgInstA_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        ArgInstsA_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgInstB_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
          ArgInstsB_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
          succeeded = check_hlds__inst_match__inst_matches_final_mt_6_p_0(CalcSub_1, ArgType_12, ArgInstA_14, ArgInstB_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = ArgTypes_13;
            next_value_of_HeadVar__3_3 = ArgInstsA_15;
            next_value_of_HeadVar__4_4 = ArgInstsB_17;
            next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_21;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_matches_final_6_p_0(
  MR_Word CalcSub_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctorX_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctorXs_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word BoundFunctorY_17;
      MR_Word BoundFunctorYs_18;
      MR_Word ConsIdX_20;
      MR_Word ArgInstsX_21;
      MR_Word ConsIdY_22;
      MR_Word ArgInstsY_23;

      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        BoundFunctorY_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        BoundFunctorYs_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        ConsIdX_20 = ((MR_Word) ((MR_hl_field(0, BoundFunctorX_15, 0))));
        ArgInstsX_21 = ((MR_Word) ((MR_hl_field(0, BoundFunctorX_15, 1))));
        ConsIdY_22 = ((MR_Word) ((MR_hl_field(0, BoundFunctorY_17, 0))));
        ArgInstsY_23 = ((MR_Word) ((MR_hl_field(0, BoundFunctorY_17, 1))));
        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdX_20, ConsIdY_22);
        if (succeeded)
        {
          MR_Word ArgTypes_24;
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, 0))));
          MR_Word STATE_VARIABLE_Info_1_28;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

          hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(Var_27, Type_2, BoundFunctorX_15, &ArgTypes_24);
          succeeded = check_hlds__inst_match__inst_list_matches_final_6_p_0(CalcSub_1, ArgTypes_24, ArgInstsX_21, ArgInstsY_23, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_28);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = BoundFunctorXs_16;
            next_value_of_HeadVar__4_4 = BoundFunctorYs_18;
            next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_28;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
            continue;
          }
        }
        else
        {
          MR_Word QNameA_36;
          MR_Integer ArityA_37;
          MR_Word QNameB_39;
          MR_Integer ArityB_40;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word next_value_of_HeadVar__4_4;

          succeeded = ((MR_tag((MR_Word) ConsIdX_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_47 = (MR_Word) (MR_body((MR_Word) (ConsIdX_20), (MR_Integer) 1));
            QNameA_36 = ((MR_Word) ((MR_hl_field(0, Var_47, 0))));
            ArityA_37 = ((MR_Integer) ((MR_hl_field(0, Var_47, 1))));
            succeeded = ((MR_tag((MR_Word) ConsIdY_22)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_48 = (MR_Word) (MR_body((MR_Word) (ConsIdY_22), (MR_Integer) 1));
              QNameB_39 = ((MR_Word) ((MR_hl_field(0, Var_48, 0))));
              ArityB_40 = ((MR_Integer) ((MR_hl_field(0, Var_48, 1))));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_String NameA_42;
            MR_String NameB_44;
            MR_Word O_46;

            if (((MR_tag((MR_Word) QNameA_36)) == (MR_Integer) 1))
              NameA_42 = ((MR_String) ((MR_hl_field(1, QNameA_36, 1))));
            else
              NameA_42 = ((MR_String) ((MR_hl_field(0, QNameA_36, 0))));
            if (((MR_tag((MR_Word) QNameB_39)) == (MR_Integer) 1))
              NameB_44 = ((MR_String) ((MR_hl_field(1, QNameB_39, 1))));
            else
              NameB_44 = ((MR_String) ((MR_hl_field(0, QNameB_39, 0))));
            mercury__private_builtin__builtin_compare_string_3_p_0(&O_46, NameA_42, NameB_44);
            switch (O_46) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                succeeded = (ArityA_37 > ArityB_40);
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
            }
          }
          else
          {
            MR_Word Var_52;

            parse_tree__prog_data____Compare____cons_id_0_0(&Var_52, ConsIdX_20, ConsIdY_22);
            succeeded = ((MR_Integer) 2 == Var_52);
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__4_4 = BoundFunctorYs_18;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0(
  MR_Word CalcSub_8,
  MR_Word Type_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;

  switch (CalcSub_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) InstB_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            switch (MR_tag((MR_Word) InstA_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Result_12 = base;
                  MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(1, base, 1) = ((MR_Box) (InstA_10));
                  MR_hl_field(1, base, 2) = ((MR_Box) (InstB_11));
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, InstA_10, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Inst1_52 = ((MR_Word) ((MR_hl_field(3, InstA_10, 2))));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Result_12 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (Inst1_52));
                        MR_hl_field(0, base, 1) = ((MR_Box) (InstB_11));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Result_12 = base;
                      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(1, base, 1) = ((MR_Box) (InstA_10));
                      MR_hl_field(1, base, 2) = ((MR_Box) (InstB_11));
                    }
                    break;
                }
                break;
            }
            *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstB_11, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word InstVarsB_21 = ((MR_Word) ((MR_hl_field(3, InstB_11, 1))));
                MR_Word SubInstB_22 = ((MR_Word) ((MR_hl_field(3, InstB_11, 2))));
                MR_Word ModuleInfo0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 0))));
                MR_Word UnifyInst_24;
                MR_Word ModuleInfo_26;
                MR_Word Inst1_28;
                MR_Word Inst2_29;
                MR_Word STATE_VARIABLE_Info_1_50;
                MR_Word Var_63;
                MR_Word _Det_25;
                MR_Word Var_62;
                MR_Unsigned packed_word_0;
                MR_Word UnifySubInst_27;
                MR_Word TypeInfo_64_68;
                MR_Word Var_67;

                succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_9, (MR_Integer) 1, (MR_Integer) 1, InstA_10, SubInstB_22, &UnifyInst_24, &_Det_25, ModuleInfo0_23, &ModuleInfo_26);
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 1))));
                  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 2))));
                  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 3)));
                  {
                    STATE_VARIABLE_Info_1_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Info_1_50, 0) = ((MR_Box) (ModuleInfo_26));
                    MR_hl_field(0, STATE_VARIABLE_Info_1_50, 1) = ((MR_Box) (Var_62));
                    MR_hl_field(0, STATE_VARIABLE_Info_1_50, 2) = ((MR_Box) (Var_63));
                    MR_hl_field(0, STATE_VARIABLE_Info_1_50, 3) = (MR_Box) (packed_word_0);
                  }
                  if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_1_50;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_69;
                    MR_Box conv1_STATE_VARIABLE_Info_16;

                    {
                      Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_5[0]));
                      MR_hl_field(0, Var_69, 1) = ((MR_Box) (check_hlds__inst_match__maybe_handle_inst_var_subs_7_p_0_1));
                      MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_69, 3) = ((MR_Box) (UnifyInst_24));
                      MR_hl_field(0, Var_69, 4) = ((MR_Box) (Type_9));
                    }
                    succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_69, InstVarsB_21, ((MR_Box) (STATE_VARIABLE_Info_1_50)), &conv1_STATE_VARIABLE_Info_16);
                    if (succeeded)
                    {
                      *STATE_VARIABLE_Info_16 = ((MR_Word) (conv1_STATE_VARIABLE_Info_16));
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) UnifyInst_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, UnifyInst_24, 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_67 = ((MR_Word) ((MR_hl_field(3, UnifyInst_24, 1))));
                      UnifySubInst_27 = ((MR_Word) ((MR_hl_field(3, UnifyInst_24, 2))));
                      TypeInfo_64_68 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_68, ((MR_Box) (InstVarsB_21)), ((MR_Box) (Var_67)));
                    }
                    if (succeeded)
                    {
                      Inst1_28 = InstA_10;
                      Inst2_29 = UnifySubInst_27;
                    }
                    else
                    {
                      Inst1_28 = InstA_10;
                      Inst2_29 = UnifyInst_24;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Result_12 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Inst1_28));
                      MR_hl_field(0, base, 1) = ((MR_Box) (Inst2_29));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                switch (MR_tag((MR_Word) InstA_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Result_12 = base;
                      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(1, base, 1) = ((MR_Box) (InstA_10));
                      MR_hl_field(1, base, 2) = ((MR_Box) (InstB_11));
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, InstA_10, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word Inst1_52 = ((MR_Word) ((MR_hl_field(3, InstA_10, 2))));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Result_12 = base;
                            MR_hl_field(0, base, 0) = ((MR_Box) (Inst1_52));
                            MR_hl_field(0, base, 1) = ((MR_Box) (InstB_11));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Result_12 = base;
                          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          MR_hl_field(1, base, 1) = ((MR_Box) (InstA_10));
                          MR_hl_field(1, base, 2) = ((MR_Box) (InstB_11));
                        }
                        break;
                    }
                    break;
                }
                *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Result_12 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          MR_hl_field(1, base, 1) = ((MR_Box) (InstA_10));
          MR_hl_field(1, base, 2) = ((MR_Box) (InstB_11));
        }
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CalcSubDir_20 = (MR_Word) (CalcSub_8);

        succeeded = check_hlds__inst_match__do_handle_inst_var_subs_7_p_0(CalcSubDir_20, Type_9, InstB_11, InstA_10, Result_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__do_handle_inst_var_subs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__do_handle_inst_var_subs_7_p_0(
  MR_Word CalcSubDir_8,
  MR_Word Type_9,
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstB_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        switch (MR_tag((MR_Word) InstA_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word Inst1_50;
              MR_Word Inst2_51;

              switch (CalcSubDir_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Inst1_50 = InstA_10;
                    Inst2_51 = InstB_11;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Inst1_50 = InstB_11;
                    Inst2_51 = InstA_10;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Result_12 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(1, base, 1) = ((MR_Box) (Inst1_50));
                MR_hl_field(1, base, 2) = ((MR_Box) (Inst2_51));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, InstA_10, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word SubInstA_32 = ((MR_Word) ((MR_hl_field(3, InstA_10, 2))));
                  MR_Word Inst1_48;
                  MR_Word Inst2_49;

                  switch (CalcSubDir_8) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Inst1_48 = SubInstA_32;
                        Inst2_49 = InstB_11;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Inst1_48 = InstB_11;
                        Inst2_49 = SubInstA_32;
                      }
                      break;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Result_12 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Inst1_48));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Inst2_49));
                  }
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  MR_Word Inst1_50;
                  MR_Word Inst2_51;

                  switch (CalcSubDir_8) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Inst1_50 = InstA_10;
                        Inst2_51 = InstB_11;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Inst1_50 = InstB_11;
                        Inst2_51 = InstA_10;
                      }
                      break;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Result_12 = base;
                    MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Inst1_50));
                    MR_hl_field(1, base, 2) = ((MR_Box) (Inst2_51));
                  }
                }
                break;
            }
            break;
        }
        *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstB_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word InstVarsB_14 = ((MR_Word) ((MR_hl_field(3, InstB_11, 1))));
            MR_Word SubInstB_15 = ((MR_Word) ((MR_hl_field(3, InstB_11, 2))));
            MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, 0))));
            MR_Word UnifyInst_17;
            MR_Word ModuleInfo_19;
            MR_Word Inst1_21;
            MR_Word Inst2_22;
            MR_Word STATE_VARIABLE_Info_1_45;
            MR_Word Var_59;
            MR_Word _Det_18;
            MR_Word Var_58;
            MR_Unsigned packed_word_0;
            MR_Word UnifySubInst_20;
            MR_Word TypeInfo_64_64;
            MR_Word Var_63;

            succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(Type_9, (MR_Integer) 1, (MR_Integer) 1, InstA_10, SubInstB_15, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
            if (succeeded)
            {
              Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, 1))));
              Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, 2))));
              packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, 3)));
              {
                STATE_VARIABLE_Info_1_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_1_45, 0) = ((MR_Box) (ModuleInfo_19));
                MR_hl_field(0, STATE_VARIABLE_Info_1_45, 1) = ((MR_Box) (Var_58));
                MR_hl_field(0, STATE_VARIABLE_Info_1_45, 2) = ((MR_Box) (Var_59));
                MR_hl_field(0, STATE_VARIABLE_Info_1_45, 3) = (MR_Box) (packed_word_0);
              }
              if ((Var_59 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_1_45;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Var_65;
                MR_Box conv1_STATE_VARIABLE_Info_42;

                {
                  Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_65, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_5[0]));
                  MR_hl_field(0, Var_65, 1) = ((MR_Box) (check_hlds__inst_match__do_handle_inst_var_subs_7_p_0_1));
                  MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_65, 3) = ((MR_Box) (UnifyInst_17));
                  MR_hl_field(0, Var_65, 4) = ((MR_Box) (Type_9));
                }
                succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_65, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_1_45)), &conv1_STATE_VARIABLE_Info_42);
                if (succeeded)
                {
                  *STATE_VARIABLE_Info_42 = ((MR_Word) (conv1_STATE_VARIABLE_Info_42));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, UnifyInst_17, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_63 = ((MR_Word) ((MR_hl_field(3, UnifyInst_17, 1))));
                  UnifySubInst_20 = ((MR_Word) ((MR_hl_field(3, UnifyInst_17, 2))));
                  TypeInfo_64_64 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_63)));
                }
                if (succeeded)
                  switch (CalcSubDir_8) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Inst1_21 = InstA_10;
                        Inst2_22 = UnifySubInst_20;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Inst1_21 = UnifySubInst_20;
                        Inst2_22 = InstA_10;
                      }
                      break;
                  }
                else
                  switch (CalcSubDir_8) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Inst1_21 = InstA_10;
                        Inst2_22 = UnifyInst_17;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Inst1_21 = UnifyInst_17;
                        Inst2_22 = InstA_10;
                      }
                      break;
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Result_12 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Inst1_21));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Inst2_22));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            switch (MR_tag((MR_Word) InstA_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word Inst1_50;
                  MR_Word Inst2_51;

                  switch (CalcSubDir_8) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Inst1_50 = InstA_10;
                        Inst2_51 = InstB_11;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Inst1_50 = InstB_11;
                        Inst2_51 = InstA_10;
                      }
                      break;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Result_12 = base;
                    MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Inst1_50));
                    MR_hl_field(1, base, 2) = ((MR_Box) (Inst2_51));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, InstA_10, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word SubInstA_32 = ((MR_Word) ((MR_hl_field(3, InstA_10, 2))));
                      MR_Word Inst1_48;
                      MR_Word Inst2_49;

                      switch (CalcSubDir_8) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            Inst1_48 = SubInstA_32;
                            Inst2_49 = InstB_11;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            Inst1_48 = InstB_11;
                            Inst2_49 = SubInstA_32;
                          }
                          break;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Result_12 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (Inst1_48));
                        MR_hl_field(0, base, 1) = ((MR_Box) (Inst2_49));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      MR_Word Inst1_50;
                      MR_Word Inst2_51;

                      switch (CalcSubDir_8) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            Inst1_50 = InstA_10;
                            Inst2_51 = InstB_11;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            Inst1_50 = InstB_11;
                            Inst2_51 = InstA_10;
                          }
                          break;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *Result_12 = base;
                        MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(1, base, 1) = ((MR_Box) (Inst1_50));
                        MR_hl_field(1, base, 2) = ((MR_Box) (Inst2_51));
                      }
                    }
                    break;
                }
                break;
            }
            *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_is_complete_for_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Expansions_6,
  MR_Word Type_7,
  MR_Word BoundFunctors_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_12_12;
  MR_Word NamesAritiesArgTypes0_9;
  MR_Word NamesAritiesArgTypes1_10;
  MR_Word NamesAritiesArgTypes_11;

  succeeded = hlds__type_util__type_is_du_type_2_p_0(ModuleInfo_5, Type_7);
  if (succeeded)
  {
    hlds__type_util__all_du_ctor_arg_types_3_p_0(ModuleInfo_5, Type_7, &NamesAritiesArgTypes0_9);
    TypeInfo_12_12 = (MR_Word) (&check_hlds__inst_match_scalar_common_2[0]);
    mercury__list__sort_2_p_0(TypeInfo_12_12, NamesAritiesArgTypes0_9, &NamesAritiesArgTypes1_10);
    succeeded = check_hlds__inst_match__bound_functor_list_is_complete_for_type_loop_5_p_0(ModuleInfo_5, Expansions_6, BoundFunctors_8, NamesAritiesArgTypes1_10, &NamesAritiesArgTypes_11);
    if (succeeded)
      succeeded = (NamesAritiesArgTypes_11 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_is_complete_for_type_loop_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_is_complete_for_type_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_NamesAritiesArgTypes_0_4,
  MR_Word * STATE_VARIABLE_NamesAritiesArgTypes_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NamesAritiesArgTypes_5 = STATE_VARIABLE_NamesAritiesArgTypes_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_31_31;
      MR_Word TypeCtorInfo_32_32;
      MR_Word BoundFunctor_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctors_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word InstConsId_16 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_13, 0))));
      MR_Word ArgInsts_17 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_13, 1))));
      MR_Word InstDuCtor_18;
      MR_Word InstSymName_19;
      MR_Integer InstArity_20;
      MR_Tuple NameArityArgTypes_22;
      MR_Word ArgTypes_23;
      MR_Word STATE_VARIABLE_NamesAritiesArgTypes_1_26;
      MR_String Var_27;
      MR_Word Var_28;
      MR_Integer Var_33;
      MR_String Var_34;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_NamesAritiesArgTypes_0_4;

      succeeded = ((MR_tag((MR_Word) InstConsId_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        InstDuCtor_18 = (MR_Word) (MR_body((MR_Word) (InstConsId_16), (MR_Integer) 1));
        InstSymName_19 = ((MR_Word) ((MR_hl_field(0, InstDuCtor_18, 0))));
        InstArity_20 = ((MR_Integer) ((MR_hl_field(0, InstDuCtor_18, 1))));
        succeeded = (STATE_VARIABLE_NamesAritiesArgTypes_0_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameArityArgTypes_22 = ((MR_Tuple) ((MR_hl_field(1, STATE_VARIABLE_NamesAritiesArgTypes_0_4, 0))));
          STATE_VARIABLE_NamesAritiesArgTypes_1_26 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_NamesAritiesArgTypes_0_4, 1))));
          Var_27 = ((MR_String) ((MR_hl_field(0, NameArityArgTypes_22, 0))));
          Var_33 = ((MR_Integer) ((MR_hl_field(0, NameArityArgTypes_22, 1))));
          ArgTypes_23 = ((MR_Word) ((MR_hl_field(0, NameArityArgTypes_22, 2))));
          succeeded = (InstArity_20 == Var_33);
          if (succeeded)
          {
            Var_34 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_19);
            succeeded = (strcmp(Var_27, Var_34) == 0);
            if (succeeded)
            {
              TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              TypeCtorInfo_32_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
              {
                Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__inst_match__bound_functor_list_is_complete_for_type_loop_5_p_0_1));
                MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_28, 3) = ((MR_Box) (HeadVar__1_1));
                MR_hl_field(0, Var_28, 4) = ((MR_Box) (HeadVar__2_2));
              }
              succeeded = mercury__list__map_3_p_5(TypeCtorInfo_31_31, TypeCtorInfo_32_32, Var_28, ArgTypes_23, ArgInsts_17);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__3_3 = BoundFunctors_14;
                next_value_of_STATE_VARIABLE_NamesAritiesArgTypes_0_4 = STATE_VARIABLE_NamesAritiesArgTypes_1_26;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                STATE_VARIABLE_NamesAritiesArgTypes_0_4 = next_value_of_STATE_VARIABLE_NamesAritiesArgTypes_0_4;
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
check_hlds__inst_match__uniq_matches_bound_functor_list_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Uniq_5,
  MR_Word BoundFunctors_6)
{
  MR_bool succeeded = (Uniq_5 == (MR_Integer) 0);

  if (succeeded)
    succeeded = hlds__inst_test__bound_functor_list_is_not_partly_unique_2_p_0(ModuleInfo_4, BoundFunctors_6);
  else
  {
    succeeded = (Uniq_5 == (MR_Integer) 2);
    if (succeeded)
      succeeded = hlds__inst_test__bound_functor_list_is_not_fully_unique_2_p_0(ModuleInfo_4, BoundFunctors_6);
    else
      succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_functor_list_matches_uniq_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Uniq_5,
  MR_Word BoundFunctors_6)
{
  MR_bool succeeded = (Uniq_5 == (MR_Integer) 1);

  if (succeeded)
    succeeded = hlds__inst_test__bound_functor_list_is_unique_2_p_0(ModuleInfo_4, BoundFunctors_6);
  else
  {
    succeeded = (Uniq_5 == (MR_Integer) 2);
    if (succeeded)
      succeeded = hlds__inst_test__bound_functor_list_is_mostly_unique_2_p_0(ModuleInfo_4, BoundFunctors_6);
    else
      succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_match__unique_matches_final_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  MR_bool succeeded;

  switch (A_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      succeeded = (B_4 == (MR_Integer) 3);
      break;
    case (MR_Integer) 4:
      switch (B_4) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 2:
      if (((MR_Unsigned) 29U & (((MR_Integer) 1 << B_4))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (B_4) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____any_matches_any_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____any_matches_any_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____any_matches_any_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____any_matches_any_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____calculate_sub_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____calculate_sub_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____calculate_sub_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____calculate_sub_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____expansions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____expansions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____ground_matches_bound_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____ground_matches_bound_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____inst_match_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____inst_match_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____inst_match_inputs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____inst_match_inputs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_var_subs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____inst_var_subs_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_var_subs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____inst_var_subs_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____maybe_inst_var_sub_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____maybe_inst_var_sub_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____maybe_inst_var_sub_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____maybe_inst_var_sub_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match____Unify____uniqueness_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_match____Compare____uniqueness_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__inst_match__init(void)
{
}

void mercury__check_hlds__inst_match__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_any_matches_any_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_dir_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_expansions_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_var_subs_result_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_maybe_inst_var_sub_0);
  MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0);
}

void mercury__check_hlds__inst_match__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_match__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_match.
