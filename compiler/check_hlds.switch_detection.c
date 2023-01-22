/*
** Automatically generated from `switch_detection.m'
** by the Mercury compiler,
** version rotd-2023-01-22
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


// :- module check_hlds.switch_detection.
// :- implementation.

/*
INIT mercury__check_hlds__switch_detection__init
ENDINIT
*/

#include "check_hlds.switch_detection.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "term_subst.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_allow_multi_arm_0[2];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0[2];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_0_0[6];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_candidate_switch_0_0[6];

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_candidate_switch_0_0[6];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_candidate_switch_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_candidate_switch_0[1];

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_0[1];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_1[1];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_1;

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_2;

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_3;

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_4;

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_5;

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_6;

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_7;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_0[6];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_2[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_rank_0[3];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_candidate_switch_rank_0[8];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_candidate_switch_rank_0[8];

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0[2];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0[2];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0[2];

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_1;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_2;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cases_missing_0[3];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cases_missing_0[3];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_missing_0[3];

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2];

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_cons_id_entry_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1];

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cons_id_state_0[3];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3];

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_deconstruct_search_0[3];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0[3];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0[3];

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_found_deconstruct_0[2];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0[2];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[5];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[5];

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_local_switch_detect_info_0_0[5];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1];

static const MR_VA_PseudoTypeInfo_Struct7 check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0[2];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0[2];

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_switch_detect_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1];

static void MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1508__1_3_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_20,
  MR_Word * HeadVar__3_21);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__534__1_2_p_0(
  MR_Word ConflictConsIds_9,
  MR_Word HeadVar__2_87);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__497__1_2_p_0(
  MR_Word IsMember_18,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__507__1_2_p_0(
  MR_Word HeadVar__1_49,
  MR_Word IsMember_61);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__489__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word HeadVar__2_91);

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_missing_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_missing_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_rank_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_rank_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(
  MR_Word SwitchVar_8,
  MR_Word Goal0_9,
  MR_Word * Goals_10,
  MR_Word _Result0_11,
  MR_Word * Result_12);

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(
  MR_Word SwitchVar_8,
  MR_Word Goal0_9,
  MR_Word * Goals_10,
  MR_Word * Result_12);

static void MR_CALL 
check_hlds__switch_detection__create_expanded_conjunction_5_p_0(
  MR_Word Unifies_6,
  MR_Word LaterGoals_7,
  MR_Word GoalInfo_8,
  MR_Word Disjunct_9,
  MR_Word * Goal_10);

static void MR_CALL 
check_hlds__switch_detection__add_multi_entry_for_cons_id_4_p_0(
  MR_Word Arm_5,
  MR_Word ConsId_6,
  MR_Word CasesTable0_7,
  MR_Word * CasesTable_8);

static MR_Word MR_CALL 
check_hlds__switch_detection__project_single_arm_goal_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__switch_detection__project_arm_goal_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_4(
  MR_Box closure_arg);

static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0(
  MR_Word GoalInfo0_8,
  MR_Word ConflictConsIds_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Cases_0_31,
  MR_Word * STATE_VARIABLE_Cases_32,
  MR_Word STATE_VARIABLE_AlreadyHandledConsIds_0_33,
  MR_Word * STATE_VARIABLE_AlreadyHandledConsIds_34);

static void MR_CALL 
check_hlds__switch_detection__gather_smallest_context_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SmallestContext_0_2,
  MR_Word * STATE_VARIABLE_SmallestContext_3);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_5_p_0(
  MR_Word ProgressStream_1,
  MR_Word Info_2,
  MR_Word ValidPredIdSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(
  MR_Word InstMap0_8,
  MR_Word MaybeRequiredVar_9,
  MR_Word GoalInfo_10,
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_111,
  MR_Word * STATE_VARIABLE_LocalInfo_112);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_disj_7_p_0(
  MR_Word GoalInfo_8,
  MR_Word Disjuncts0_9,
  MR_Word InstMap0_10,
  MR_Word MaybeRequiredVar_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_35,
  MR_Word * STATE_VARIABLE_LocalInfo_36);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(
  MR_Word InstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_conj_5_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_cases_6_p_0(
  MR_Word Var_1,
  MR_Word InstMap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_LocalInfo_0_5,
  MR_Word * STATE_VARIABLE_LocalInfo_6);

static void MR_CALL 
check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(
  MR_Word InstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(
  MR_Word STATE_VARIABLE_InstMap_0_14,
  MR_Word * STATE_VARIABLE_InstMap_15,
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_LocalInfo_0_16,
  MR_Word * STATE_VARIABLE_LocalInfo_17);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_6_p_0(
  MR_Word InstMap0_7,
  MR_Word MaybeRequiredVar_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_LocalInfo_0_15,
  MR_Word * STATE_VARIABLE_LocalInfo_16);

static void MR_CALL 
check_hlds__switch_detection__select_best_candidate_switch_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BestCandidate_0_2,
  MR_Word * STATE_VARIABLE_BestCandidate_3);

static void MR_CALL 
check_hlds__switch_detection__detect_switch_candidates_in_disj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Candidates_0_6,
  MR_Word * STATE_VARIABLE_Candidates_7,
  MR_Word STATE_VARIABLE_LocalInfo_0_8,
  MR_Word * STATE_VARIABLE_LocalInfo_9);

static MR_Integer MR_CALL 
check_hlds__switch_detection__count_covered_cons_ids_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UncoveredConsIds_0_2,
  MR_Word * STATE_VARIABLE_UncoveredConsIds_3);

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0(
  MR_Word Disjuncts0_8,
  MR_Word Var_9,
  MR_Word GoalInfo_10,
  MR_Word * Left_11,
  MR_Word * Cases_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_21,
  MR_Word * STATE_VARIABLE_LocalInfo_22);

static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disjs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CasesTable_0_4,
  MR_Word * STATE_VARIABLE_CasesTable_5);

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(
  MR_Word AllowMulti_8,
  MR_Word Var_9,
  MR_Word ConjGoals_10,
  MR_Word STATE_VARIABLE_RevUnifies_0_36,
  MR_Word GoalInfo_12,
  MR_Word STATE_VARIABLE_CasesTable_0_37,
  MR_Word * STATE_VARIABLE_CasesTable_38);

static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Left_0_3,
  MR_Word * STATE_VARIABLE_Left_4,
  MR_Word STATE_VARIABLE_CasesTable_0_5,
  MR_Word * STATE_VARIABLE_CasesTable_6);

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcessUnify_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Subst_0_5,
  MR_Word * STATE_VARIABLE_Subst_6,
  MR_Box STATE_VARIABLE_Result_0_7,
  MR_Box * STATE_VARIABLE_Result_8,
  MR_Box STATE_VARIABLE_Info_0_9,
  MR_Box * STATE_VARIABLE_Info_10,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word Var_12,
  MR_Word ProcessUnify_13,
  MR_Word Goal0_14,
  MR_Word * Goal_15,
  MR_Word STATE_VARIABLE_Subst_0_87,
  MR_Word * STATE_VARIABLE_Subst_88,
  MR_Box STATE_VARIABLE_Result_0_89,
  MR_Box * STATE_VARIABLE_Result_90,
  MR_Box STATE_VARIABLE_Info_0_91,
  MR_Box * STATE_VARIABLE_Info_92,
  MR_Word * FoundDeconstruct_19);

static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_rank_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_rank_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_missing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_missing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[9][2];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[6][3];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[2][10];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[1][6];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[4][5];




static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__switch_detection__partition_disj_trial_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[0])),
    ((MR_Box) (check_hlds__switch_detection__delete_covered_functors_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[2])),
    ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[2])),
    ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0 = {
  (MR_String) "allow_multi_arm",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1 = {
  (MR_String) "dont_allow_multi_arm",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_allow_multi_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "allow_multi_arm",
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_allow_multi_arm_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_rank_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_candidate_switch_0_0[6] = {
  (MR_String) "cs_var",
  (MR_String) "cs_cases",
  (MR_String) "cs_unreachable_case_goals",
  (MR_String) "cs_left_over_disjuncts",
  (MR_String) "cs_rank",
  (MR_String) "cs_can_fail"
};

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_candidate_switch_0_0[6] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_0_0 = {
  (MR_String) "candidate_switch",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_candidate_switch_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_locns_candidate_switch_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_candidate_switch_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_0_0
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_candidate_switch_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____candidate_switch_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____candidate_switch_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "candidate_switch",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_candidate_switch_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_candidate_switch_0,

};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_0 = {
  (MR_String) "some_leftover_can_fail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_1 = {
  (MR_String) "some_leftover_cannot_fail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_2 = {
  (MR_String) "no_leftover_twoplus_cases_finite_can_fail",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_3 = {
  (MR_String) "no_leftover_one_case",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_4 = {
  (MR_String) "no_leftover_twoplus_cases_infinite_can_fail",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_5 = {
  (MR_String) "no_leftover_twoplus_cases_finite_cannot_fail",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_6 = {
  (MR_String) "all_disjuncts_are_unreachable",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_7 = {
  (MR_String) "no_leftover_twoplus_cases_explicitly_selected",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_0[6] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_2,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_3,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_4,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_5,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_6,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_7
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_1[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_0
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_2[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_1
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_rank_0[3] = {
  {
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_candidate_switch_rank_0[8] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_6,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_3,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_7,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_2,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_5,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_4,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_1
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_candidate_switch_rank_0[8] = {
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_rank_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____candidate_switch_rank_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____candidate_switch_rank_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "candidate_switch_rank",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_candidate_switch_rank_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_rank_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_candidate_switch_rank_0,

};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0 = {
  (MR_String) "single_cons_id_arm",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1 = {
  (MR_String) "multi_cons_id_arm",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____case_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____case_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "case_arm",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0,

};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_0 = {
  (MR_String) "no_cases_missing",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_1 = {
  (MR_String) "some_cases_missing",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_2 = {
  (MR_String) "unbounded_cases",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cases_missing_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cases_missing_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_2
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_missing_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_missing_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____cases_missing_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cases_missing_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cases_missing",
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cases_missing_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cases_missing_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_missing_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2] = {
  (MR_String) "cases_map",
  (MR_String) "conflict_cons_ids"
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0 = {
  (MR_String) "cases_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cases_table_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cases_table_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cases_table",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2] = {
  (MR_String) "cons_id_state",
  (MR_String) "cons_id_arms"
};

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_cons_id_entry_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0 = {
  (MR_String) "cons_id_entry",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_locns_cons_id_entry_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_entry",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0,

};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0 = {
  (MR_String) "cons_id_has_all_singles",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1 = {
  (MR_String) "cons_id_has_one_multi",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2 = {
  (MR_String) "cons_id_has_conflict",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cons_id_state_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_state_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_state_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_state",
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_cons_id_state_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0,

};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0 = {
  (MR_String) "before_deconstruct",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1 = {
  (MR_String) "found_deconstruct",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2 = {
  (MR_String) "given_up_search",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_deconstruct_search_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_deconstruct_search_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "deconstruct_search",
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_deconstruct_search_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0,

};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0 = {
  (MR_String) "did_find_deconstruct",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1 = {
  (MR_String) "did_not_find_deconstruct",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_found_deconstruct_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_found_deconstruct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "found_deconstruct",
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__enum_ordinal_ordered_found_deconstruct_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[5] = {
  (MR_String) "lsdi_module_info",
  (MR_String) "lsdi_allow_multi_arm",
  (MR_String) "lsdi_requant",
  (MR_String) "lsdi_var_table",
  (MR_String) "lsdi_deleted_callees"
};

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_local_switch_detect_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0 = {
  (MR_String) "local_switch_detect_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_locns_local_switch_detect_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "local_switch_detect_info",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0,

};

static const MR_VA_PseudoTypeInfo_Struct7 check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_process_unify_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (check_hlds__switch_detection____Unify____process_unify_2_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____process_unify_2_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "process_unify",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0)
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0[2] = {
  (MR_String) "sdi_module_info",
  (MR_String) "sdi_allow_multi_arm"
};

static const MR_DuArgLocn check_hlds__switch_detection__check_hlds__switch_detection__field_locns_switch_detect_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0 = {
  (MR_String) "switch_detect_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_locns_switch_detect_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0
};

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_switch_detect_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "switch_detect_info",
  { check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0 },
  { check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0,

};

static void MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1508__1_3_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_20,
  MR_Word * HeadVar__3_21)
{
  mercury__set_tree234__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (HeadVar__1_19)), HeadVar__2_20, HeadVar__3_21);
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__534__1_2_p_0(
  MR_Word ConflictConsIds_9,
  MR_Word HeadVar__2_87)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_9, ((MR_Box) (HeadVar__2_87)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__497__1_2_p_0(
  MR_Word IsMember_18,
  MR_Word HeadVar__2_42)
{
  MR_bool succeeded = (IsMember_18 == HeadVar__2_42);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__507__1_2_p_0(
  MR_Word HeadVar__1_49,
  MR_Word IsMember_61)
{
  MR_bool succeeded = (IsMember_61 == HeadVar__1_49);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__489__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word HeadVar__2_91)
{
  MR_bool succeeded = (HeadVar__2_91 == HeadVar__1_38);

  return succeeded;
}

void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0(
  MR_Word TypeInfo_for_Result_6,
  MR_Word TypeInfo_for_Info_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0(
  MR_Word TypeInfo_for_Result_5,
  MR_Word TypeInfo_for_Info_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_25 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_26 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_25 < Var_26);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_25 > Var_26);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_27 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_28 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_27 < Var_28);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_27 > Var_28);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__var_table____Compare____var_table_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(
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
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0(
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
check_hlds__switch_detection____Unify____found_deconstruct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0(
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
check_hlds__switch_detection____Unify____deconstruct_search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
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
check_hlds__switch_detection____Unify____cons_id_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
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
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_missing_0_0(
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
check_hlds__switch_detection____Unify____cases_missing_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_21;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_21, Var_36, ArgY1_20);
      succeeded = (SubResult1_21 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_21;
      else
      {
        MR_Word SubResult2_24;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[5]), &SubResult2_24, ((MR_Box) (Var_35)), ((MR_Box) (ArgY2_23)));
        succeeded = (SubResult2_24 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_24;
        else
          hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, Var_34, ArgY3_26);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, Var_38, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, Var_37, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
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
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_10;
    MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_7, ArgY1_8);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX3_11, ArgY3_12);
      }
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_rank_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_36 == CastY_37);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_40 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_40 > ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_17 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_41 < ArgY1_17);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_41 > ArgY1_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
          }
        }
        break;
    }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer CastX_63 = (MR_Integer) (ArgX5_16);
            MR_Integer CastY_64 = (MR_Integer) (ArgY5_17);

            succeeded = (CastX_63 == CastY_64);
            if (succeeded)
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
            else
              switch (MR_tag((MR_Word) ArgX5_16)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ArgX5_16)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_tag((MR_Word) ArgY5_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgY5_17)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult5_18 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      switch (MR_tag((MR_Word) ArgY5_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgY5_17)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult5_18 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 2:
                      switch (MR_tag((MR_Word) ArgY5_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgY5_17)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult5_18 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (MR_tag((MR_Word) ArgY5_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgY5_17)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult5_18 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 4:
                      switch (MR_tag((MR_Word) ArgY5_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgY5_17)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult5_18 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                SubResult5_18 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 5:
                      switch (MR_tag((MR_Word) ArgY5_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgY5_17)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                SubResult5_18 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult5_18 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer Var_67 = ((MR_Integer) ((MR_hl_field(1, ArgX5_16, (MR_Integer) 0))));

                    switch (MR_tag((MR_Word) ArgY5_17)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ArgY5_17)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer ArgY1_32 = ((MR_Integer) ((MR_hl_field(1, ArgY5_17, (MR_Integer) 0))));

                          succeeded = (Var_67 < ArgY1_32);
                          if (succeeded)
                          {
                            SubResult5_18 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_67 > ArgY1_32);
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
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          SubResult5_18 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer Var_68 = ((MR_Integer) ((MR_hl_field(2, ArgX5_16, (MR_Integer) 0))));

                    switch (MR_tag((MR_Word) ArgY5_17)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ArgY5_17)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              SubResult5_18 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          SubResult5_18 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer ArgY1_44 = ((MR_Integer) ((MR_hl_field(2, ArgY5_17, (MR_Integer) 0))));

                          succeeded = (Var_68 < ArgY1_44);
                          if (succeeded)
                          {
                            SubResult5_18 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_68 > ArgY1_44);
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
                        }
                        break;
                    }
                  }
                  break;
              }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_29 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_30 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_29 < Var_30);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_29 > Var_30);
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

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_0_0(
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
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = check_hlds__switch_detection____Unify____candidate_switch_rank_0_0(ArgX5_11, ArgY5_12);
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
check_hlds__switch_detection____Unify____candidate_switch_rank_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0(
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
check_hlds__switch_detection____Unify____allow_multi_arm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(
  MR_Word SwitchVar_8,
  MR_Word Goal0_9,
  MR_Word * Goals_10,
  MR_Word _Result0_11,
  MR_Word * Result_12)
{
  check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(SwitchVar_8, Goal0_9, Goals_10, Result_12);
}

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(
  MR_Word SwitchVar_8,
  MR_Word Goal0_9,
  MR_Word * Goals_10,
  MR_Word * Result_12)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_14;
  MR_Word GoalInfo_15;
  MR_Word Unification0_19;
  MR_Word UnifyVar_21;
  MR_Word Functor_22;
  MR_Word ArgVars_23;

  GoalExpr0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  succeeded = ((MR_tag((MR_Word) GoalExpr0_14)) == (MR_Integer) 1);
  if (succeeded)
  {
    Unification0_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_14, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) Unification0_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      UnifyVar_21 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 0))));
      Functor_22 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 1))));
      ArgVars_23 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 2))));
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_45_45;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Functor_22));
    }
    succeeded = (ArgVars_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeInfo_45_45 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (SwitchVar_8)), ((MR_Box) (UnifyVar_21)));
    }
    if (succeeded)
      *Goals_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Unification_27;
      MR_Word GoalExpr_28;
      MR_Word Goal_29;
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 0))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 2))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 3))));
      MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(1, Unification0_19, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;

      {
        Unification_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Unification_27, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Unification_27, 1) = ((MR_Box) (Var_35));
        MR_hl_field(1, Unification_27, 2) = ((MR_Box) (Var_36));
        MR_hl_field(1, Unification_27, 3) = ((MR_Box) (Var_37));
        MR_hl_field(1, Unification_27, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_39)));
      }
      Var_40 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_14, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_14, (MR_Integer) 1))));
      Var_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_14, (MR_Integer) 2))));
      Var_44 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_14, (MR_Integer) 4))));
      {
        GoalExpr_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr_28, 0) = ((MR_Box) (Var_40));
        MR_hl_field(1, GoalExpr_28, 1) = ((MR_Box) (Var_41));
        MR_hl_field(1, GoalExpr_28, 2) = ((MR_Box) (Var_42));
        MR_hl_field(1, GoalExpr_28, 3) = ((MR_Box) (Unification_27));
        MR_hl_field(1, GoalExpr_28, 4) = ((MR_Box) (Var_44));
      }
      {
        Goal_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_29, 0) = ((MR_Box) (GoalExpr_28));
        MR_hl_field(0, Goal_29, 1) = ((MR_Box) (GoalInfo_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.switch_detection.find_bind_var_for_switch_in_deconstruct\'/7", (MR_String) "goal is not a deconstruct unification");
      return;
    }
}

static void MR_CALL 
check_hlds__switch_detection__create_expanded_conjunction_5_p_0(
  MR_Word Unifies_6,
  MR_Word LaterGoals_7,
  MR_Word GoalInfo_8,
  MR_Word Disjunct_9,
  MR_Word * Goal_10)
{
  MR_bool succeeded;
  MR_Word Conjuncts_13;
  MR_Word Var_20;
  MR_Word DisjunctGoals_11;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Disjunct_9, (MR_Integer) 0))));
  MR_Word Var_15;

  succeeded = ((((MR_tag((MR_Word) Var_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_15 = ((MR_Unsigned) ((MR_hl_field(3, Var_14, (MR_Integer) 1))) & (MR_Integer) 1);
    DisjunctGoals_11 = ((MR_Word) ((MR_hl_field(3, Var_14, (MR_Integer) 2))));
    succeeded = (Var_15 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Var_16;

    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), DisjunctGoals_11, LaterGoals_7);
    Conjuncts_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Unifies_6, Var_16);
  }
  else
  {
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Disjunct_9));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_18, LaterGoals_7);
    Conjuncts_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Unifies_6, Var_17);
  }
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_20, 2) = ((MR_Box) (Conjuncts_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_8));
  }
}

static void MR_CALL 
check_hlds__switch_detection__add_multi_entry_for_cons_id_4_p_0(
  MR_Word Arm_5,
  MR_Word ConsId_6,
  MR_Word CasesTable0_7,
  MR_Word * CasesTable_8)
{
  MR_bool succeeded;
  MR_Word CasesMap0_9 = ((MR_Word) ((MR_hl_field(0, CasesTable0_7, (MR_Integer) 0))));
  MR_Word ConflictConsIds0_10 = ((MR_Word) ((MR_hl_field(0, CasesTable0_7, (MR_Integer) 1))));
  MR_Word ConflictConsIds_14;
  MR_Word CasesMap_18;
  MR_Word Entry0_11;
  MR_Box conv0_Entry0_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap0_9, ((MR_Box) (ConsId_6)), &conv0_Entry0_11);
  if (succeeded)
  {
    Entry0_11 = ((MR_Word) (conv0_Entry0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word State0_12 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_11, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Arms0_13 = ((MR_Word) ((MR_hl_field(0, Entry0_11, (MR_Integer) 1))));
    MR_Word Arms_16;
    MR_Word Entry_17;

    switch (State0_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_6)), ConflictConsIds0_10, &ConflictConsIds_14);
        break;
      case (MR_Integer) 2:
        ConflictConsIds_14 = ConflictConsIds0_10;
        break;
    }
    Arms_16 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), Arms0_13, ((MR_Box) (Arm_5)));
    {
      Entry_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_17, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(0, Entry_17, 1) = ((MR_Box) (Arms_16));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_6)), ((MR_Box) (Entry_17)), CasesMap0_9, &CasesMap_18);
  }
  else
  {
    MR_Word Arms_20;
    MR_Word Entry_21;

    Arms_20 = mercury__cord__singleton_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), ((MR_Box) (Arm_5)));
    {
      Entry_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_21, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Entry_21, 1) = ((MR_Box) (Arms_20));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_6)), ((MR_Box) (Entry_21)), CasesMap0_9, &CasesMap_18);
    ConflictConsIds_14 = ConflictConsIds0_10;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CasesTable_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CasesMap_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConflictConsIds_14));
  }
}

static MR_Word MR_CALL 
check_hlds__switch_detection__project_single_arm_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Goal_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.switch_detection.project_single_arm_goal\'/1", (MR_String) "multi arm");
  else
    Goal_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  return Goal_2;
}

static MR_Word MR_CALL 
check_hlds__switch_detection__project_arm_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Goal_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
  else
    Goal_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  return Goal_2;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__534__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_2;

  conv1_Goal_2 = check_hlds__switch_detection__project_arm_goal_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Goal_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__497__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_2;

  conv0_Goal_2 = check_hlds__switch_detection__project_single_arm_goal_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Goal_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__507__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__489__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0(
  MR_Word GoalInfo0_8,
  MR_Word ConflictConsIds_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Cases_0_31,
  MR_Word * STATE_VARIABLE_Cases_32,
  MR_Word STATE_VARIABLE_AlreadyHandledConsIds_0_33,
  MR_Word * STATE_VARIABLE_AlreadyHandledConsIds_34)
{
  MR_bool succeeded;
  MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word Entry_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, Entry_11, (MR_Integer) 1))));
  MR_Word Var_91 = ((MR_Unsigned) ((MR_hl_field(0, Entry_11, (MR_Integer) 0))) & (MR_Integer) 3);

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), STATE_VARIABLE_AlreadyHandledConsIds_0_33, ((MR_Box) (ConsId_10)));
  if (succeeded)
  {
    MR_Word Var_35;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (Var_91));
    }
    mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "already handled but not cons_id_has_one_multi");
    *STATE_VARIABLE_AlreadyHandledConsIds_34 = STATE_VARIABLE_AlreadyHandledConsIds_0_33;
    *STATE_VARIABLE_Cases_32 = STATE_VARIABLE_Cases_0_31;
  }
  else
  {
    MR_Word Arms_17;

    Arms_17 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), Var_90);
    switch (Var_91) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_46;
          MR_Word IsMember_61;
          MR_Word Disjuncts_62;
          MR_Word GoalInfo_63;
          MR_Word Goal_64;
          MR_Word Case_65;

          mercury__set_tree234__is_member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_9, ((MR_Box) (ConsId_10)), &IsMember_61);
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_46, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[1]));
            MR_hl_field(0, Var_46, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_2));
            MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_46, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(0, Var_46, 4) = ((MR_Box) (IsMember_61));
          }
          mercury__require__expect_3_p_0(Var_46, (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "singles status but in ConflictConsIds");
          Disjuncts_62 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__switch_detection_scalar_common_2[4]), Arms_17);
          if ((Disjuncts_62 == (MR_Word) ((MR_Unsigned) 0U)))
            GoalInfo_63 = GoalInfo0_8;
          else
          {
            MR_Word FirstDisjunct_92 = ((MR_Word) ((MR_hl_field(1, Disjuncts_62, (MR_Integer) 0))));
            MR_Word LaterDisjuncts_93 = ((MR_Word) ((MR_hl_field(1, Disjuncts_62, (MR_Integer) 1))));
            MR_Word FirstGoalInfo_95 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_92, (MR_Integer) 1))));
            MR_Word FirstContext_96;
            MR_Word SmallestContext_97;

            FirstContext_96 = hlds__hlds_goal__goal_info_get_context_1_f_0(FirstGoalInfo_95);
            check_hlds__switch_detection__gather_smallest_context_3_p_0(LaterDisjuncts_93, FirstContext_96, &SmallestContext_97);
            hlds__hlds_goal__goal_info_set_context_3_p_0(SmallestContext_97, GoalInfo0_8, &GoalInfo_63);
          }
          hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_62, GoalInfo_63, &Goal_64);
          {
            Case_65 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Case_65, 0) = ((MR_Box) (ConsId_10));
            MR_hl_field(0, Case_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Case_65, 2) = ((MR_Box) (Goal_64));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Cases_32 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_65));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_31));
          }
          *STATE_VARIABLE_AlreadyHandledConsIds_34 = STATE_VARIABLE_AlreadyHandledConsIds_0_33;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IsMember_18;
          MR_Word Disjuncts_19;
          MR_Word GoalInfo_20;
          MR_Word Goal_21;
          MR_Word Case_22;
          MR_Word Var_39;

          mercury__set_tree234__is_member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConflictConsIds_9, ((MR_Box) (ConsId_10)), &IsMember_18);
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_39, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[1]));
            MR_hl_field(0, Var_39, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_4));
            MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_39, 3) = ((MR_Box) (IsMember_18));
            MR_hl_field(0, Var_39, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "conflict status but not in ConflictConsIds");
          Disjuncts_19 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__switch_detection_scalar_common_2[5]), Arms_17);
          if ((Disjuncts_19 == (MR_Word) ((MR_Unsigned) 0U)))
            GoalInfo_20 = GoalInfo0_8;
          else
          {
            MR_Word FirstDisjunct_98 = ((MR_Word) ((MR_hl_field(1, Disjuncts_19, (MR_Integer) 0))));
            MR_Word LaterDisjuncts_99 = ((MR_Word) ((MR_hl_field(1, Disjuncts_19, (MR_Integer) 1))));
            MR_Word FirstGoalInfo_101 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_98, (MR_Integer) 1))));
            MR_Word FirstContext_102;
            MR_Word SmallestContext_103;

            FirstContext_102 = hlds__hlds_goal__goal_info_get_context_1_f_0(FirstGoalInfo_101);
            check_hlds__switch_detection__gather_smallest_context_3_p_0(LaterDisjuncts_99, FirstContext_102, &SmallestContext_103);
            hlds__hlds_goal__goal_info_set_context_3_p_0(SmallestContext_103, GoalInfo0_8, &GoalInfo_20);
          }
          hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_19, GoalInfo_20, &Goal_21);
          {
            Case_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Case_22, 0) = ((MR_Box) (ConsId_10));
            MR_hl_field(0, Case_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Case_22, 2) = ((MR_Box) (Goal_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Cases_32 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_22));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_31));
          }
          *STATE_VARIABLE_AlreadyHandledConsIds_34 = STATE_VARIABLE_AlreadyHandledConsIds_0_33;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MainConsId0_24;
          MR_Word OtherConsIds0_25;
          MR_Word Goal_69;
          MR_Word Arm_23;
          MR_Word Var_53;

          succeeded = (Arms_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arm_23 = ((MR_Word) ((MR_hl_field(1, Arms_17, (MR_Integer) 0))));
            Var_53 = ((MR_Word) ((MR_hl_field(1, Arms_17, (MR_Integer) 1))));
            succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Arm_23)) == (MR_Integer) 1);
              if (succeeded)
              {
                MainConsId0_24 = ((MR_Word) ((MR_hl_field(1, Arm_23, (MR_Integer) 0))));
                OtherConsIds0_25 = ((MR_Word) ((MR_hl_field(1, Arm_23, (MR_Integer) 1))));
                Goal_69 = ((MR_Word) ((MR_hl_field(1, Arm_23, (MR_Integer) 2))));
              }
            }
          }
          if (succeeded)
          {
            MR_Word AllConsIds0_26;
            MR_Word AllConsIds_28;
            MR_Word Var_54;
            MR_Word Var_27;

            {
              AllConsIds0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, AllConsIds0_26, 0) = ((MR_Box) (MainConsId0_24));
              MR_hl_field(1, AllConsIds0_26, 1) = ((MR_Box) (OtherConsIds0_25));
            }
            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_54, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[3]));
              MR_hl_field(0, Var_54, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_6));
              MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_54, 3) = ((MR_Box) (ConflictConsIds_9));
            }
            mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_54, AllConsIds0_26, &Var_27, &AllConsIds_28);
            if ((AllConsIds_28 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "cons_id_has_one_multi: AllConsIds = []");
                return;
              }
            else
            {
              MR_Word MainConsId_29 = ((MR_Word) ((MR_hl_field(1, AllConsIds_28, (MR_Integer) 0))));
              MR_Word OtherConsIds_30 = ((MR_Word) ((MR_hl_field(1, AllConsIds_28, (MR_Integer) 1))));
              MR_Word Case_66;

              {
                Case_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Case_66, 0) = ((MR_Box) (MainConsId_29));
                MR_hl_field(0, Case_66, 1) = ((MR_Box) (OtherConsIds_30));
                MR_hl_field(0, Case_66, 2) = ((MR_Box) (Goal_69));
              }
              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OtherConsIds_30, STATE_VARIABLE_AlreadyHandledConsIds_0_33, STATE_VARIABLE_AlreadyHandledConsIds_34);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Cases_32 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Case_66));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_31));
              }
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "misleading cons_id_has_one_multi");
              return;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__gather_smallest_context_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SmallestContext_0_2,
  MR_Word * STATE_VARIABLE_SmallestContext_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SmallestContext_3 = STATE_VARIABLE_SmallestContext_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 1))));
      MR_Word Context_12;
      MR_Word STATE_VARIABLE_SmallestContext_16_16;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SmallestContext_0_2;

      Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
      mercury__term_context____Compare____term_context_0_0(&Var_18, Context_12, STATE_VARIABLE_SmallestContext_0_2);
      succeeded = ((MR_Integer) 1 == Var_18);
      if (succeeded)
        STATE_VARIABLE_SmallestContext_16_16 = Context_12;
      else
        STATE_VARIABLE_SmallestContext_16_16 = STATE_VARIABLE_SmallestContext_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_SmallestContext_0_2 = STATE_VARIABLE_SmallestContext_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SmallestContext_0_2 = next_value_of_STATE_VARIABLE_SmallestContext_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__switch_detection__find_bind_var_9_p_0(
  MR_Word TypeInfo_for_Result_25,
  MR_Word TypeInfo_for_Info_26,
  MR_Word Var_10,
  MR_Word ProcessUnify_11,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Box STATE_VARIABLE_Result_0_21,
  MR_Box * STATE_VARIABLE_Result_22,
  MR_Box STATE_VARIABLE_Info_0_23,
  MR_Box * STATE_VARIABLE_Info_24,
  MR_Word * FoundDeconstruct_15)
{
  MR_Word Subst_16;
  MR_Word DeconstructSearch_18;
  MR_Word Var_17;

  mercury__map__init_1_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[1]), &Subst_16);
  check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_10, ProcessUnify_11, STATE_VARIABLE_Goal_0_19, STATE_VARIABLE_Goal_20, Subst_16, &Var_17, STATE_VARIABLE_Result_0_21, STATE_VARIABLE_Result_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24, &DeconstructSearch_18);
  switch (DeconstructSearch_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *FoundDeconstruct_15 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      *FoundDeconstruct_15 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *FoundDeconstruct_15 = (MR_Integer) 1;
      break;
  }
}

void MR_CALL 
check_hlds__switch_detection__detect_switches_in_module_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_Word Info_6;
  MR_Word ValidPredIds_7;
  MR_Word ValidPredIdSet_8;
  MR_Word PredIdTable0_9;
  MR_Word PredIdsInfos0_10;
  MR_Word PredIdsInfos_11;
  MR_Word PredIdTable_12;
  MR_Word AllowMulti_17;
  MR_Word Globals_18;
  MR_Word Allow_19;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &Globals_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 343, &Allow_19);
  switch (Allow_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AllowMulti_17 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      AllowMulti_17 = (MR_Integer) 0;
      break;
  }
  {
    Info_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_6, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13));
    MR_hl_field(0, Info_6, 1) = (MR_Box) ((MR_Unsigned) (AllowMulti_17));
  }
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &ValidPredIds_7);
  ValidPredIdSet_8 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIds_7);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &PredIdTable0_9);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_9, &PredIdsInfos0_10);
  check_hlds__switch_detection__detect_switches_in_preds_5_p_0(ProgressStream_4, Info_6, ValidPredIdSet_8, PredIdsInfos0_10, &PredIdsInfos_11);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdsInfos_11, &PredIdTable_12);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_12, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_5_p_0(
  MR_Word ProgressStream_1,
  MR_Word Info_2,
  MR_Word ValidPredIdSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PredIdInfo0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word PredIdsInfos0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word PredIdInfo_14;
    MR_Word PredIdsInfos_15;
    MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_12, (MR_Integer) 0))));
    MR_Word PredInfo0_17 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_12, (MR_Integer) 1))));

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_3, ((MR_Box) (PredId_16)));
    if (succeeded)
    {
      MR_Word PredInfo_18;
      MR_Word NonImportedProcIds_20;

      NonImportedProcIds_20 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo0_17);
      if ((NonImportedProcIds_20 == (MR_Word) ((MR_Unsigned) 0U)))
        PredInfo_18 = PredInfo0_17;
      else
      {
        MR_Word ProcTable0_24;
        MR_Word ProcList0_25;
        MR_Word ProcList_26;
        MR_Word ProcTable_27;
        MR_Word ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, Info_2, (MR_Integer) 0))));

        hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_1, ModuleInfo_23, (MR_String) "Detecting switches in", PredId_16);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_17, &ProcTable0_24);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_24, &ProcList0_25);
        check_hlds__switch_detection__detect_switches_in_procs_4_p_0(Info_2, NonImportedProcIds_20, ProcList0_25, &ProcList_26);
        mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcList_26, &ProcTable_27);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_27, PredInfo0_17, &PredInfo_18);
      }
      {
        PredIdInfo_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredIdInfo_14, 0) = ((MR_Box) (PredId_16));
        MR_hl_field(0, PredIdInfo_14, 1) = ((MR_Box) (PredInfo_18));
      }
    }
    else
      PredIdInfo_14 = PredIdInfo0_12;
    check_hlds__switch_detection__detect_switches_in_preds_5_p_0(ProgressStream_1, Info_2, ValidPredIdSet_3, PredIdsInfos0_13, &PredIdsInfos_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredIdInfo_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (PredIdsInfos_15));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProcIdInfo0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ProcIdsInfos0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ProcIdInfo_11;
    MR_Word ProcIdsInfos_12;
    MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(0, ProcIdInfo0_9, (MR_Integer) 0))));
    MR_Word ProcInfo0_14 = ((MR_Word) ((MR_hl_field(0, ProcIdInfo0_9, (MR_Integer) 1))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_13)), HeadVar__2_2);
    if (succeeded)
    {
      MR_Word ProcInfo_15;

      check_hlds__switch_detection__detect_switches_in_proc_3_p_0(HeadVar__1_1, ProcInfo0_14, &ProcInfo_15);
      {
        ProcIdInfo_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcIdInfo_11, 0) = ((MR_Box) (ProcId_13));
        MR_hl_field(0, ProcIdInfo_11, 1) = ((MR_Box) (ProcInfo_15));
      }
    }
    else
      ProcIdInfo_11 = ProcIdInfo0_9;
    check_hlds__switch_detection__detect_switches_in_procs_4_p_0(HeadVar__1_1, HeadVar__2_2, ProcIdsInfos0_10, &ProcIdsInfos_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProcIdInfo_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcIdsInfos_12));
    }
  }
}

void MR_CALL 
check_hlds__switch_detection__detect_switches_in_proc_3_p_0(
  MR_Word Info_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * STATE_VARIABLE_ProcInfo_24)
{
  MR_Word ModuleInfo_6 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 0))));
  MR_Word AllowMulti_7 = ((MR_Unsigned) ((MR_hl_field(0, Info_4, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word VarTable_8;
  MR_Word BodyDeletedCallCallees0_10;
  MR_Word LocalInfo0_11;
  MR_Word Goal0_12;
  MR_Word InstMap0_13;
  MR_Word Goal_14;
  MR_Word LocalInfo_15;
  MR_Word Requant_18;
  MR_Word BodyDeletedCallCallees_20;
  MR_Word DeletedCallCallees0_21;
  MR_Word DeletedCallCallees_22;
  MR_Word STATE_VARIABLE_ProcInfo_26_26;
  MR_Word STATE_VARIABLE_ProcInfo_28_28;
  MR_Word GoalExpr0_30;
  MR_Word GoalInfo_31;
  MR_Word GoalExpr_32;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_23, &VarTable_8);
  BodyDeletedCallCallees0_10 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  {
    LocalInfo0_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LocalInfo0_11, 0) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, LocalInfo0_11, 1) = (MR_Box) (((((MR_Unsigned) (AllowMulti_7) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(0, LocalInfo0_11, 2) = ((MR_Box) (VarTable_8));
    MR_hl_field(0, LocalInfo0_11, 3) = ((MR_Box) (BodyDeletedCallCallees0_10));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_23, &Goal0_12);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ModuleInfo_6, STATE_VARIABLE_ProcInfo_0_23, &InstMap0_13);
  GoalExpr0_30 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 0))));
  GoalInfo_31 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 1))));
  check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap0_13, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_31, GoalExpr0_30, &GoalExpr_32, LocalInfo0_11, &LocalInfo_15);
  {
    Goal_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_14, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(0, Goal_14, 1) = ((MR_Box) (GoalInfo_31));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, STATE_VARIABLE_ProcInfo_0_23, &STATE_VARIABLE_ProcInfo_26_26);
  Requant_18 = ((MR_Unsigned) ((MR_hl_field(0, LocalInfo_15, (MR_Integer) 1))) & (MR_Integer) 1);
  BodyDeletedCallCallees_20 = ((MR_Word) ((MR_hl_field(0, LocalInfo_15, (MR_Integer) 3))));
  switch (Requant_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_ProcInfo_28_28 = STATE_VARIABLE_ProcInfo_26_26;
      break;
    case (MR_Integer) 0:
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_26_26, &STATE_VARIABLE_ProcInfo_28_28);
      break;
  }
  hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_ProcInfo_28_28, &DeletedCallCallees0_21);
  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), BodyDeletedCallCallees_20, DeletedCallCallees0_21, &DeletedCallCallees_22);
  hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_22, STATE_VARIABLE_ProcInfo_28_28, STATE_VARIABLE_ProcInfo_24);
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(
  MR_Word InstMap0_8,
  MR_Word MaybeRequiredVar_9,
  MR_Word GoalInfo_10,
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_111,
  MR_Word * STATE_VARIABLE_LocalInfo_112)
{
  switch (MR_tag((MR_Word) GoalExpr0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_20 = (MR_Word) ((MR_Word) (GoalExpr0_11));
        MR_Word SubGoal_21;

        check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_20, &SubGoal_21, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
        *GoalExpr_12 = (MR_Word) ((MR_Word) (SubGoal_21));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RHS0_59 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) RHS0_59)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *GoalExpr_12 = GoalExpr0_11;
              *STATE_VARIABLE_LocalInfo_112 = STATE_VARIABLE_LocalInfo_0_111;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word VarsModes_68 = ((MR_Word) ((MR_hl_field(2, RHS0_59, (MR_Integer) 3))));
              MR_Word LambdaGoal0_70 = ((MR_Word) ((MR_hl_field(2, RHS0_59, (MR_Integer) 5))));
              MR_Word ModuleInfo_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_111, (MR_Integer) 0))));
              MR_Word LambdaGoal_72;
              MR_Word RHS_73;
              MR_Word InstMap1_143;
              MR_Word Var_156;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Unsigned packed_word_8;
              MR_Word Var_160;
              MR_Word Var_162;
              MR_Word Var_163;
              MR_Word Var_164;

              hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_71, VarsModes_68, InstMap0_8, &InstMap1_143);
              check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_143, (MR_Word) ((MR_Unsigned) 0U), LambdaGoal0_70, &LambdaGoal_72, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
              packed_word_8 = (MR_Unsigned) ((MR_hl_field(2, RHS0_59, (MR_Integer) 0)));
              Var_156 = ((MR_Word) ((MR_hl_field(2, RHS0_59, (MR_Integer) 2))));
              Var_157 = ((MR_Word) ((MR_hl_field(2, RHS0_59, (MR_Integer) 3))));
              Var_158 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_59, (MR_Integer) 4))) & (MR_Integer) 7);
              {
                RHS_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_73, 0) = (MR_Box) (packed_word_8);
                MR_hl_field(2, RHS_73, 1) = NULL;
                MR_hl_field(2, RHS_73, 2) = ((MR_Box) (Var_156));
                MR_hl_field(2, RHS_73, 3) = ((MR_Box) (Var_157));
                MR_hl_field(2, RHS_73, 4) = (MR_Box) ((MR_Unsigned) (Var_158));
                MR_hl_field(2, RHS_73, 5) = ((MR_Box) (LambdaGoal_72));
              }
              Var_160 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 0))));
              Var_162 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 2))));
              Var_163 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 3))));
              Var_164 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_11, (MR_Integer) 4))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_160));
                MR_hl_field(1, base, 1) = ((MR_Box) (RHS_73));
                MR_hl_field(1, base, 2) = ((MR_Box) (Var_162));
                MR_hl_field(1, base, 3) = ((MR_Box) (Var_163));
                MR_hl_field(1, base, 4) = ((MR_Box) (Var_164));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *GoalExpr_12 = GoalExpr0_11;
        *STATE_VARIABLE_LocalInfo_112 = STATE_VARIABLE_LocalInfo_0_111;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *GoalExpr_12 = GoalExpr0_11;
            *STATE_VARIABLE_LocalInfo_112 = STATE_VARIABLE_LocalInfo_0_111;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
            MR_Word Goals_19;

            check_hlds__switch_detection__detect_switches_in_conj_5_p_0(InstMap0_8, Goals0_18, &Goals_19, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_17));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_19));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));

            if ((Disjuncts0_14 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *GoalExpr_12 = (MR_Word) (MR_mkword(3, &check_hlds__switch_detection_scalar_common_1[8]));
              *STATE_VARIABLE_LocalInfo_112 = STATE_VARIABLE_LocalInfo_0_111;
            }
            else
              check_hlds__switch_detection__detect_switches_in_disj_7_p_0(GoalInfo_10, Disjuncts0_14, InstMap0_8, MaybeRequiredVar_9, GoalExpr_12, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word CanFail_31 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
            MR_Word Cases_33;

            check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_30, InstMap0_8, Cases0_32, &Cases_33, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_30));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_31));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_33));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word SubGoal0_141 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
            MR_Word SubGoal_142;

            switch (MR_tag((MR_Word) Reason_34)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                break;
              case (MR_Integer) 1:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                break;
              case (MR_Integer) 2:
                check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_34, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    break;
                  case (MR_Integer) 1:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word RequiredVar_56 = ((MR_Word) ((MR_hl_field(3, Reason_34, (MR_Integer) 1))));
                      MR_Word Var_130;

                      {
                        Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_130, 0) = ((MR_Box) (RequiredVar_56));
                      }
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, Var_130, SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RequiredVar_176 = ((MR_Word) ((MR_hl_field(3, Reason_34, (MR_Integer) 1))));
                      MR_Word Var_177;

                      {
                        Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_177, 0) = ((MR_Box) (RequiredVar_176));
                      }
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, Var_177, SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 4:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    break;
                  case (MR_Integer) 5:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_179 = ((MR_Unsigned) ((MR_hl_field(3, Reason_34, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (Var_179) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            SubGoal_142 = SubGoal0_141;
                            *STATE_VARIABLE_LocalInfo_112 = STATE_VARIABLE_LocalInfo_0_111;
                          }
                          break;
                        case (MR_Integer) 2:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                          break;
                        case (MR_Integer) 0:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                          break;
                        case (MR_Integer) 3:
                          check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    break;
                  case (MR_Integer) 8:
                    check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_141, &SubGoal_142, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_34));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_142));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word Cond0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
            MR_Word Then0_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
            MR_Word Else0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 4))));
            MR_Word InstMap1_26;
            MR_Word Cond_27;
            MR_Word Then_28;
            MR_Word Else_29;
            MR_Word STATE_VARIABLE_LocalInfo_118_118;
            MR_Word STATE_VARIABLE_LocalInfo_120_120;

            check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(InstMap0_8, &InstMap1_26, Cond0_23, &Cond_27, STATE_VARIABLE_LocalInfo_0_111, &STATE_VARIABLE_LocalInfo_118_118);
            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_26, (MR_Word) ((MR_Unsigned) 0U), Then0_24, &Then_28, STATE_VARIABLE_LocalInfo_118_118, &STATE_VARIABLE_LocalInfo_120_120);
            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), Else0_25, &Else_29, STATE_VARIABLE_LocalInfo_120_120, STATE_VARIABLE_LocalInfo_112);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_22));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_27));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_28));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_29));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
            MR_Word ShortHand_106;

            switch (MR_tag((MR_Word) ShortHand0_96)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.switch_detection.detect_switches_in_goal_expr\'/7", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_97 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_96, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_98 = ((MR_Word) ((MR_hl_field(1, ShortHand0_96, (MR_Integer) 1))));
                  MR_Word Inner_99 = ((MR_Word) ((MR_hl_field(1, ShortHand0_96, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_100 = ((MR_Word) ((MR_hl_field(1, ShortHand0_96, (MR_Integer) 3))));
                  MR_Word MainGoal0_101 = ((MR_Word) ((MR_hl_field(1, ShortHand0_96, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_102 = ((MR_Word) ((MR_hl_field(1, ShortHand0_96, (MR_Integer) 5))));
                  MR_Word OrElseInners_103 = ((MR_Word) ((MR_hl_field(1, ShortHand0_96, (MR_Integer) 6))));
                  MR_Word MainGoal_104;
                  MR_Word OrElseGoals_105;
                  MR_Word STATE_VARIABLE_LocalInfo_135_135;

                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), MainGoal0_101, &MainGoal_104, STATE_VARIABLE_LocalInfo_0_111, &STATE_VARIABLE_LocalInfo_135_135);
                  check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(InstMap0_8, OrElseGoals0_102, &OrElseGoals_105, STATE_VARIABLE_LocalInfo_135_135, STATE_VARIABLE_LocalInfo_112);
                  {
                    ShortHand_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_106, 0) = (MR_Box) ((MR_Unsigned) (GoalType_97));
                    MR_hl_field(1, ShortHand_106, 1) = ((MR_Box) (Outer_98));
                    MR_hl_field(1, ShortHand_106, 2) = ((MR_Box) (Inner_99));
                    MR_hl_field(1, ShortHand_106, 3) = ((MR_Box) (MaybeOutputVars_100));
                    MR_hl_field(1, ShortHand_106, 4) = ((MR_Box) (MainGoal_104));
                    MR_hl_field(1, ShortHand_106, 5) = ((MR_Box) (OrElseGoals_105));
                    MR_hl_field(1, ShortHand_106, 6) = ((MR_Box) (OrElseInners_103));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_107 = ((MR_Word) ((MR_hl_field(2, ShortHand0_96, (MR_Integer) 0))));
                  MR_Word ResultVar_108 = ((MR_Word) ((MR_hl_field(2, ShortHand0_96, (MR_Integer) 1))));
                  MR_Word SubGoal0_146 = ((MR_Word) ((MR_hl_field(2, ShortHand0_96, (MR_Integer) 2))));
                  MR_Word SubGoal_147;

                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) ((MR_Unsigned) 0U), SubGoal0_146, &SubGoal_147, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                  {
                    ShortHand_106 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_106, 0) = ((MR_Box) (MaybeIO_107));
                    MR_hl_field(2, ShortHand_106, 1) = ((MR_Box) (ResultVar_108));
                    MR_hl_field(2, ShortHand_106, 2) = ((MR_Box) (SubGoal_147));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_106));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_disj_7_p_0(
  MR_Word GoalInfo_8,
  MR_Word Disjuncts0_9,
  MR_Word InstMap0_10,
  MR_Word MaybeRequiredVar_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_35,
  MR_Word * STATE_VARIABLE_LocalInfo_36)
{
  MR_Word NonLocals_14;
  MR_Word VarsToTry_15;
  MR_Word CandidatesCord_16;
  MR_Word Candidates_17;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_LocalInfo_38_38;

  NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_8);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_14, &VarsToTry_15);
  Var_37 = mercury__cord__init_0_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_0));
  check_hlds__switch_detection__detect_switch_candidates_in_disj_9_p_0(GoalInfo_8, Disjuncts0_9, InstMap0_10, MaybeRequiredVar_11, VarsToTry_15, Var_37, &CandidatesCord_16, STATE_VARIABLE_LocalInfo_0_35, &STATE_VARIABLE_LocalInfo_38_38);
  Candidates_17 = mercury__cord__to_list_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_0), CandidatesCord_16);
  if ((Candidates_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Disjuncts_18;

    check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(InstMap0_10, Disjuncts0_9, &Disjuncts_18, STATE_VARIABLE_LocalInfo_38_38, STATE_VARIABLE_LocalInfo_36);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_12 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts_18));
    }
  }
  else
  {
    MR_Word FirstCandidate_19 = ((MR_Word) ((MR_hl_field(1, Candidates_17, (MR_Integer) 0))));
    MR_Word LaterCandidates_20 = ((MR_Word) ((MR_hl_field(1, Candidates_17, (MR_Integer) 1))));
    MR_Word BestCandidate_21;
    MR_Word BestRank_25;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;

    if ((LaterCandidates_20 == (MR_Word) ((MR_Unsigned) 0U)))
      BestCandidate_21 = FirstCandidate_19;
    else
      check_hlds__switch_detection__select_best_candidate_switch_3_p_0(LaterCandidates_20, FirstCandidate_19, &BestCandidate_21);
    Var_44 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, (MR_Integer) 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, (MR_Integer) 1))));
    Var_46 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, (MR_Integer) 2))));
    BestRank_25 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, (MR_Integer) 4))));
    Var_48 = ((MR_Unsigned) ((MR_hl_field(0, BestCandidate_21, (MR_Integer) 5))) & (MR_Integer) 1);
    switch (MR_tag((MR_Word) BestRank_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(BestRank_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word SwitchGoalExpr_28;
              MR_Word LeftDisjuncts0_29;
              MR_Word STATE_VARIABLE_LocalInfo_40_40;
              MR_Word Cases_67;
              MR_Word STATE_VARIABLE_LocalInfo_26_70;

              if ((Var_46 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_LocalInfo_26_70 = STATE_VARIABLE_LocalInfo_38_38;
              else
              {
                MR_Word UnreachableCalledProcs_64;
                MR_Word DeletedCallCallees0_65;
                MR_Word DeletedCallCallees_66;
                MR_Word Var_76;
                MR_Word Var_79;
                MR_Unsigned packed_word_2;

                UnreachableCalledProcs_64 = hlds__goal_util__goals_proc_refs_1_f_0(Var_46);
                DeletedCallCallees0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 3))));
                mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), UnreachableCalledProcs_64, DeletedCallCallees0_65, &DeletedCallCallees_66);
                Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 0))));
                packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 1)));
                Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 2))));
                {
                  STATE_VARIABLE_LocalInfo_26_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_26_70, 0) = ((MR_Box) (Var_76));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_26_70, 1) = (MR_Box) (packed_word_2);
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_26_70, 2) = ((MR_Box) (Var_79));
                  MR_hl_field(0, STATE_VARIABLE_LocalInfo_26_70, 3) = ((MR_Box) (DeletedCallCallees_66));
                }
              }
              check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_44, InstMap0_10, Var_45, &Cases_67, STATE_VARIABLE_LocalInfo_26_70, &STATE_VARIABLE_LocalInfo_40_40);
              if ((Cases_67 == (MR_Word) ((MR_Unsigned) 0U)))
                SwitchGoalExpr_28 = (MR_Word) (MR_mkword(3, &check_hlds__switch_detection_scalar_common_1[8]));
              else
                {
                  SwitchGoalExpr_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SwitchGoalExpr_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, SwitchGoalExpr_28, 1) = ((MR_Box) (Var_44));
                  MR_hl_field(3, SwitchGoalExpr_28, 2) = (MR_Box) ((MR_Unsigned) (Var_48));
                  MR_hl_field(3, SwitchGoalExpr_28, 3) = ((MR_Box) (Cases_67));
                }
              LeftDisjuncts0_29 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, (MR_Integer) 3))));
              if ((LeftDisjuncts0_29 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *GoalExpr_12 = SwitchGoalExpr_28;
                *STATE_VARIABLE_LocalInfo_36 = STATE_VARIABLE_LocalInfo_40_40;
              }
              else
              {
                MR_Word LeftGoal_32;
                MR_Word LeftDisjuncts_33;
                MR_Word SwitchGoal_34;
                MR_Word Var_42;
                MR_Word Var_43;

                check_hlds__switch_detection__detect_switches_in_disj_7_p_0(GoalInfo_8, LeftDisjuncts0_29, InstMap0_10, MaybeRequiredVar_11, &LeftGoal_32, STATE_VARIABLE_LocalInfo_40_40, STATE_VARIABLE_LocalInfo_36);
                {
                  Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_42, 0) = ((MR_Box) (LeftGoal_32));
                  MR_hl_field(0, Var_42, 1) = ((MR_Box) (GoalInfo_8));
                }
                hlds__hlds_goal__goal_to_disj_list_2_p_0(Var_42, &LeftDisjuncts_33);
                {
                  SwitchGoal_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SwitchGoal_34, 0) = ((MR_Box) (SwitchGoalExpr_28));
                  MR_hl_field(0, SwitchGoal_34, 1) = ((MR_Box) (GoalInfo_8));
                }
                {
                  Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_43, 0) = ((MR_Box) (SwitchGoal_34));
                  MR_hl_field(1, Var_43, 1) = ((MR_Box) (LeftDisjuncts_33));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_12 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_43));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts0_9));
              }
              *STATE_VARIABLE_LocalInfo_36 = STATE_VARIABLE_LocalInfo_38_38;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word SwitchGoalExpr_28;
          MR_Word LeftDisjuncts0_29;
          MR_Word STATE_VARIABLE_LocalInfo_40_40;
          MR_Word Cases_67;
          MR_Word STATE_VARIABLE_LocalInfo_26_70;

          if ((Var_46 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_LocalInfo_26_70 = STATE_VARIABLE_LocalInfo_38_38;
          else
          {
            MR_Word UnreachableCalledProcs_64;
            MR_Word DeletedCallCallees0_65;
            MR_Word DeletedCallCallees_66;
            MR_Word Var_76;
            MR_Word Var_79;
            MR_Unsigned packed_word_2;

            UnreachableCalledProcs_64 = hlds__goal_util__goals_proc_refs_1_f_0(Var_46);
            DeletedCallCallees0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 3))));
            mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), UnreachableCalledProcs_64, DeletedCallCallees0_65, &DeletedCallCallees_66);
            Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 0))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 1)));
            Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 2))));
            {
              STATE_VARIABLE_LocalInfo_26_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_26_70, 0) = ((MR_Box) (Var_76));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_26_70, 1) = (MR_Box) (packed_word_2);
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_26_70, 2) = ((MR_Box) (Var_79));
              MR_hl_field(0, STATE_VARIABLE_LocalInfo_26_70, 3) = ((MR_Box) (DeletedCallCallees_66));
            }
          }
          check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_44, InstMap0_10, Var_45, &Cases_67, STATE_VARIABLE_LocalInfo_26_70, &STATE_VARIABLE_LocalInfo_40_40);
          if ((Cases_67 == (MR_Word) ((MR_Unsigned) 0U)))
            SwitchGoalExpr_28 = (MR_Word) (MR_mkword(3, &check_hlds__switch_detection_scalar_common_1[8]));
          else
            {
              SwitchGoalExpr_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SwitchGoalExpr_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, SwitchGoalExpr_28, 1) = ((MR_Box) (Var_44));
              MR_hl_field(3, SwitchGoalExpr_28, 2) = (MR_Box) ((MR_Unsigned) (Var_48));
              MR_hl_field(3, SwitchGoalExpr_28, 3) = ((MR_Box) (Cases_67));
            }
          LeftDisjuncts0_29 = ((MR_Word) ((MR_hl_field(0, BestCandidate_21, (MR_Integer) 3))));
          if ((LeftDisjuncts0_29 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *GoalExpr_12 = SwitchGoalExpr_28;
            *STATE_VARIABLE_LocalInfo_36 = STATE_VARIABLE_LocalInfo_40_40;
          }
          else
          {
            MR_Word LeftGoal_32;
            MR_Word LeftDisjuncts_33;
            MR_Word SwitchGoal_34;
            MR_Word Var_42;
            MR_Word Var_43;

            check_hlds__switch_detection__detect_switches_in_disj_7_p_0(GoalInfo_8, LeftDisjuncts0_29, InstMap0_10, MaybeRequiredVar_11, &LeftGoal_32, STATE_VARIABLE_LocalInfo_40_40, STATE_VARIABLE_LocalInfo_36);
            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_42, 0) = ((MR_Box) (LeftGoal_32));
              MR_hl_field(0, Var_42, 1) = ((MR_Box) (GoalInfo_8));
            }
            hlds__hlds_goal__goal_to_disj_list_2_p_0(Var_42, &LeftDisjuncts_33);
            {
              SwitchGoal_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SwitchGoal_34, 0) = ((MR_Box) (SwitchGoalExpr_28));
              MR_hl_field(0, SwitchGoal_34, 1) = ((MR_Box) (GoalInfo_8));
            }
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (SwitchGoal_34));
              MR_hl_field(1, Var_43, 1) = ((MR_Box) (LeftDisjuncts_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_43));
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(
  MR_Word InstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word STATE_VARIABLE_LocalInfo_19_19;
    MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
    MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
    MR_Word GoalExpr_22;

    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap_1, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_21, GoalExpr0_20, &GoalExpr_22, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_19_19);
    {
      Goal_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_13, 0) = ((MR_Box) (GoalExpr_22));
      MR_hl_field(0, Goal_13, 1) = ((MR_Box) (GoalInfo_21));
    }
    check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(InstMap_1, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_19_19, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_conj_5_p_0(
  MR_Word InstMap0_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word InstMap1_16;
    MR_Word STATE_VARIABLE_LocalInfo_19_19;
    MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
    MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
    MR_Word GoalExpr_22;

    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap0_1, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_21, GoalExpr0_20, &GoalExpr_22, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_19_19);
    {
      Goal_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_13, 0) = ((MR_Box) (GoalExpr_22));
      MR_hl_field(0, Goal_13, 1) = ((MR_Box) (GoalInfo_21));
    }
    hlds__goal_util__update_instmap_3_p_0(Goal0_11, InstMap0_1, &InstMap1_16);
    check_hlds__switch_detection__detect_switches_in_conj_5_p_0(InstMap1_16, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_19_19, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_cases_6_p_0(
  MR_Word Var_1,
  MR_Word InstMap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_LocalInfo_0_5,
  MR_Word * STATE_VARIABLE_LocalInfo_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalInfo_6 = STATE_VARIABLE_LocalInfo_0_5;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 2))));
    MR_Word VarTable_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 2))));
    MR_Word VarType_23;
    MR_Word ModuleInfo0_24;
    MR_Word InstMap1_25;
    MR_Word ModuleInfo_26;
    MR_Word Goal_27;
    MR_Word STATE_VARIABLE_LocalInfo_30_30;
    MR_Word STATE_VARIABLE_LocalInfo_32_32;
    MR_Word GoalExpr0_46;
    MR_Word GoalInfo_47;
    MR_Word GoalExpr_48;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Unsigned packed_word_2;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, Var_1, &VarType_23);
    ModuleInfo0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 0))));
    hlds__instmap__bind_var_to_functors_8_p_0(Var_1, VarType_23, MainConsId_19, OtherConsIds_20, InstMap0_2, &InstMap1_25, ModuleInfo0_24, &ModuleInfo_26);
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 1)));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 3))));
    {
      STATE_VARIABLE_LocalInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_30_30, 0) = ((MR_Box) (ModuleInfo_26));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_30_30, 1) = (MR_Box) (packed_word_2);
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_30_30, 2) = ((MR_Box) (Var_44));
      MR_hl_field(0, STATE_VARIABLE_LocalInfo_30_30, 3) = ((MR_Box) (Var_45));
    }
    GoalExpr0_46 = ((MR_Word) ((MR_hl_field(0, Goal0_21, (MR_Integer) 0))));
    GoalInfo_47 = ((MR_Word) ((MR_hl_field(0, Goal0_21, (MR_Integer) 1))));
    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap1_25, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_47, GoalExpr0_46, &GoalExpr_48, STATE_VARIABLE_LocalInfo_30_30, &STATE_VARIABLE_LocalInfo_32_32);
    {
      Goal_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_27, 0) = ((MR_Box) (GoalExpr_48));
      MR_hl_field(0, Goal_27, 1) = ((MR_Box) (GoalInfo_47));
    }
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_16, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_16, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_16, 2) = ((MR_Box) (Goal_27));
    }
    check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_1, InstMap0_2, Cases0_15, &Cases_17, STATE_VARIABLE_LocalInfo_32_32, STATE_VARIABLE_LocalInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(
  MR_Word InstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_LocalInfo_0_4,
  MR_Word * STATE_VARIABLE_LocalInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word STATE_VARIABLE_LocalInfo_19_19;
    MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
    MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
    MR_Word GoalExpr_22;

    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap_1, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_21, GoalExpr0_20, &GoalExpr_22, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_19_19);
    {
      Goal_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_13, 0) = ((MR_Box) (GoalExpr_22));
      MR_hl_field(0, Goal_13, 1) = ((MR_Box) (GoalInfo_21));
    }
    check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(InstMap_1, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_19_19, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(
  MR_Word STATE_VARIABLE_InstMap_0_14,
  MR_Word * STATE_VARIABLE_InstMap_15,
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_LocalInfo_0_16,
  MR_Word * STATE_VARIABLE_LocalInfo_17)
{
  MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 0))));
  MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 1))));
  MR_Word GoalExpr_13;

  check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(STATE_VARIABLE_InstMap_0_14, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_12, GoalExpr0_11, &GoalExpr_13, STATE_VARIABLE_LocalInfo_0_16, STATE_VARIABLE_LocalInfo_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_12));
  }
  hlds__goal_util__update_instmap_3_p_0(Goal0_8, STATE_VARIABLE_InstMap_0_14, STATE_VARIABLE_InstMap_15);
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_6_p_0(
  MR_Word InstMap0_7,
  MR_Word MaybeRequiredVar_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_LocalInfo_0_15,
  MR_Word * STATE_VARIABLE_LocalInfo_16)
{
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  MR_Word GoalExpr_14;

  check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap0_7, MaybeRequiredVar_8, GoalInfo_13, GoalExpr0_12, &GoalExpr_14, STATE_VARIABLE_LocalInfo_0_15, STATE_VARIABLE_LocalInfo_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_13));
  }
}

static void MR_CALL 
check_hlds__switch_detection__select_best_candidate_switch_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BestCandidate_0_2,
  MR_Word * STATE_VARIABLE_BestCandidate_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BestCandidate_3 = STATE_VARIABLE_BestCandidate_0_2;
    else
    {
      MR_Word Candidate_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Candidates_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Result_10;
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Candidate_7, (MR_Integer) 4))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_BestCandidate_0_2, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_BestCandidate_15_15;
      MR_Integer CastX_59 = (MR_Integer) (Var_13);
      MR_Integer CastY_60 = (MR_Integer) (Var_14);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BestCandidate_0_2;

      succeeded = (CastX_59 == CastY_60);
      if (succeeded)
        Result_10 = (MR_Integer) 0;
      else
        switch (MR_tag((MR_Word) Var_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) Var_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Var_14)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Result_10 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        Result_10 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    Result_10 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    Result_10 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (MR_tag((MR_Word) Var_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Var_14)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        Result_10 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        Result_10 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    Result_10 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    Result_10 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 2:
                switch (MR_tag((MR_Word) Var_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Var_14)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        Result_10 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 3:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        Result_10 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    Result_10 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    Result_10 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 3:
                switch (MR_tag((MR_Word) Var_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Var_14)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        Result_10 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 4:
                        Result_10 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        Result_10 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    Result_10 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    Result_10 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 4:
                switch (MR_tag((MR_Word) Var_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Var_14)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        Result_10 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 5:
                        Result_10 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    Result_10 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    Result_10 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 5:
                switch (MR_tag((MR_Word) Var_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Var_14)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        Result_10 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        Result_10 = (MR_Integer) 0;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    Result_10 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    Result_10 = (MR_Integer) 2;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_63 = ((MR_Integer) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) Var_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Var_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      Result_10 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer ArgY1_28 = ((MR_Integer) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));

                    succeeded = (Var_63 < ArgY1_28);
                    if (succeeded)
                      Result_10 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_63 > ArgY1_28);
                      if (succeeded)
                        Result_10 = (MR_Integer) 2;
                      else
                        Result_10 = (MR_Integer) 0;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  Result_10 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_64 = ((MR_Integer) ((MR_hl_field(2, Var_13, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) Var_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Var_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      Result_10 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      Result_10 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  Result_10 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer ArgY1_40 = ((MR_Integer) ((MR_hl_field(2, Var_14, (MR_Integer) 0))));

                    succeeded = (Var_64 < ArgY1_40);
                    if (succeeded)
                      Result_10 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_64 > ArgY1_40);
                      if (succeeded)
                        Result_10 = (MR_Integer) 2;
                      else
                        Result_10 = (MR_Integer) 0;
                    }
                  }
                  break;
              }
            }
            break;
        }
      switch (Result_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_BestCandidate_15_15 = STATE_VARIABLE_BestCandidate_0_2;
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_BestCandidate_15_15 = STATE_VARIABLE_BestCandidate_0_2;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_BestCandidate_15_15 = Candidate_7;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Candidates_8;
      next_value_of_STATE_VARIABLE_BestCandidate_0_2 = STATE_VARIABLE_BestCandidate_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BestCandidate_0_2 = next_value_of_STATE_VARIABLE_BestCandidate_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switch_candidates_in_disj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Candidates_0_6,
  MR_Word * STATE_VARIABLE_Candidates_7,
  MR_Word STATE_VARIABLE_LocalInfo_0_8,
  MR_Word * STATE_VARIABLE_LocalInfo_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LocalInfo_9 = STATE_VARIABLE_LocalInfo_0_8;
      *STATE_VARIABLE_Candidates_7 = STATE_VARIABLE_Candidates_0_6;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ModuleInfo_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 0))));
      MR_Word VarInst0_29;
      MR_Word STATE_VARIABLE_Candidates_40_40;
      MR_Word STATE_VARIABLE_LocalInfo_41_41;
      MR_Word Candidate_34;
      MR_Word STATE_VARIABLE_LocalInfo_39_39;
      MR_Word Left_30;
      MR_Word Cases_31;
      MR_Word VarTable_32;
      MR_Word VarType_33;
      MR_Word CanFail_54;
      MR_Word CasesMissing_55;
      MR_Word Cases_56;
      MR_Word UnreachableCaseGoals_57;
      MR_Word Rank_58;
      MR_Word Functors_68;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Candidates_0_6;
      MR_Word next_value_of_STATE_VARIABLE_LocalInfo_0_8;

      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__3_3, Var_24, &VarInst0_29);
      succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_28, VarInst0_29);
      if (succeeded)
      {
        succeeded = check_hlds__switch_detection__partition_disj_7_p_0(HeadVar__2_2, Var_24, HeadVar__1_1, &Left_30, &Cases_31, STATE_VARIABLE_LocalInfo_0_8, &STATE_VARIABLE_LocalInfo_39_39);
        if (succeeded)
        {
          VarTable_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_39_39, (MR_Integer) 2))));
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_32, Var_24, &VarType_33);
          succeeded = (Left_30 == (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
          {
            MR_Word Var_65;

            succeeded = (Cases_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_65 = ((MR_Word) ((MR_hl_field(1, Cases_31, (MR_Integer) 1))));
              succeeded = (Var_65 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
          }
          if (succeeded)
          {
            succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_28, VarInst0_29, &Functors_68);
            if (succeeded)
            {
              MR_Word TypeCtor_69;
              MR_Word ConsIds_70;
              MR_Word UncoveredFunctors0_72;
              MR_Word UncoveredFunctors_73;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_33, &TypeCtor_69);
              parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(TypeCtor_69, Functors_68, &ConsIds_70);
              check_hlds__det_util__delete_unreachable_cases_4_p_0(Cases_31, ConsIds_70, &Cases_56, &UnreachableCaseGoals_57);
              UncoveredFunctors0_72 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConsIds_70);
              check_hlds__switch_detection__delete_covered_functors_3_p_0(Cases_56, UncoveredFunctors0_72, &UncoveredFunctors_73);
              succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UncoveredFunctors_73);
              if (succeeded)
              {
                CanFail_54 = (MR_Integer) 1;
                CasesMissing_55 = (MR_Integer) 0;
              }
              else
              {
                CanFail_54 = (MR_Integer) 0;
                CasesMissing_55 = (MR_Integer) 1;
              }
            }
            else
            {
              MR_Integer NumFunctors_71;

              Cases_56 = Cases_31;
              UnreachableCaseGoals_57 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(ModuleInfo_28, VarType_33, &NumFunctors_71);
              if (succeeded)
              {
                MR_Integer NumCoveredConsIds_75;

                NumCoveredConsIds_75 = check_hlds__switch_detection__count_covered_cons_ids_1_f_0(Cases_56);
                succeeded = (NumCoveredConsIds_75 == NumFunctors_71);
                if (succeeded)
                {
                  CanFail_54 = (MR_Integer) 1;
                  CasesMissing_55 = (MR_Integer) 0;
                }
                else
                {
                  CanFail_54 = (MR_Integer) 0;
                  CasesMissing_55 = (MR_Integer) 1;
                }
              }
              else
              {
                CanFail_54 = (MR_Integer) 0;
                CasesMissing_55 = (MR_Integer) 2;
              }
            }
            if ((Left_30 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((Cases_56 == (MR_Word) ((MR_Unsigned) 0U)))
                Rank_58 = (MR_Word) ((MR_Unsigned) 16U);
              else
              {
                MR_Word LaterCases_60 = ((MR_Word) ((MR_hl_field(1, Cases_56, (MR_Integer) 1))));

                succeeded = (LaterCases_60 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  succeeded = (UnreachableCaseGoals_57 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  Rank_58 = (MR_Word) ((MR_Unsigned) 4U);
                else
                {
                  MR_Word TypeInfo_33_67;
                  MR_Word RequiredVar_61;

                  succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    RequiredVar_61 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
                    TypeInfo_33_67 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_67, ((MR_Box) (RequiredVar_61)), ((MR_Box) (Var_24)));
                  }
                  if (succeeded)
                    Rank_58 = (MR_Word) ((MR_Unsigned) 20U);
                  else
                    switch (CasesMissing_55) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Rank_58 = (MR_Word) ((MR_Unsigned) 12U);
                        break;
                      case (MR_Integer) 1:
                        Rank_58 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 2:
                        Rank_58 = (MR_Word) ((MR_Unsigned) 8U);
                        break;
                    }
                }
              }
            else
            {
              MR_Integer NumCases_64;

              mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_56, &NumCases_64);
              switch (CanFail_54) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Rank_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Rank_58, 0) = ((MR_Box) (NumCases_64));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Rank_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Rank_58, 0) = ((MR_Box) (NumCases_64));
                  }
                  break;
              }
            }
            {
              Candidate_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Candidate_34, 0) = ((MR_Box) (Var_24));
              MR_hl_field(0, Candidate_34, 1) = ((MR_Box) (Cases_56));
              MR_hl_field(0, Candidate_34, 2) = ((MR_Box) (UnreachableCaseGoals_57));
              MR_hl_field(0, Candidate_34, 3) = ((MR_Box) (Left_30));
              MR_hl_field(0, Candidate_34, 4) = ((MR_Box) (Rank_58));
              MR_hl_field(0, Candidate_34, 5) = (MR_Box) ((MR_Unsigned) (CanFail_54));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_LocalInfo_41_41 = STATE_VARIABLE_LocalInfo_39_39;
        STATE_VARIABLE_Candidates_40_40 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_0), STATE_VARIABLE_Candidates_0_6, ((MR_Box) (Candidate_34)));
      }
      else
      {
        STATE_VARIABLE_LocalInfo_41_41 = STATE_VARIABLE_LocalInfo_0_8;
        STATE_VARIABLE_Candidates_40_40 = STATE_VARIABLE_Candidates_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Vars_25;
      next_value_of_STATE_VARIABLE_Candidates_0_6 = STATE_VARIABLE_Candidates_40_40;
      next_value_of_STATE_VARIABLE_LocalInfo_0_8 = STATE_VARIABLE_LocalInfo_41_41;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Candidates_0_6 = next_value_of_STATE_VARIABLE_Candidates_0_6;
      STATE_VARIABLE_LocalInfo_0_8 = next_value_of_STATE_VARIABLE_LocalInfo_0_8;
      continue;
    }
    break;
  }
}

static MR_Integer MR_CALL 
check_hlds__switch_detection__count_covered_cons_ids_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word Case_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer CaseCount_5;
    MR_Integer CasesCount_6;
    MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(0, Case_3, (MR_Integer) 1))));
    MR_Integer Var_11;

    Var_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OtherConsIds_8);
    CaseCount_5 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_11);
    CasesCount_6 = check_hlds__switch_detection__count_covered_cons_ids_1_f_0(Cases_4);
    HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) CaseCount_5 + (MR_Unsigned) CasesCount_6);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_21;

  check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1508__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_21));
}

static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UncoveredConsIds_0_2,
  MR_Word * STATE_VARIABLE_UncoveredConsIds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UncoveredConsIds_3 = STATE_VARIABLE_UncoveredConsIds_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case_7, (MR_Integer) 0))));
      MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UncoveredConsIds_15_15;
      MR_Word STATE_VARIABLE_UncoveredConsIds_17_17;
      MR_Box conv1_STATE_VARIABLE_UncoveredConsIds_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UncoveredConsIds_0_2;

      mercury__set_tree234__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (MainConsId_10)), STATE_VARIABLE_UncoveredConsIds_0_2, &STATE_VARIABLE_UncoveredConsIds_15_15);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]), (MR_Word) (&check_hlds__switch_detection_scalar_common_2[3]), OtherConsIds_11, ((MR_Box) (STATE_VARIABLE_UncoveredConsIds_15_15)), &conv1_STATE_VARIABLE_UncoveredConsIds_17_17);
      STATE_VARIABLE_UncoveredConsIds_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_UncoveredConsIds_17_17));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_UncoveredConsIds_0_2 = STATE_VARIABLE_UncoveredConsIds_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UncoveredConsIds_0_2 = next_value_of_STATE_VARIABLE_UncoveredConsIds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Cases_32;
  MR_Word conv8_STATE_VARIABLE_AlreadyHandledConsIds_34;

  check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Cases_32, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_AlreadyHandledConsIds_34);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Cases_32));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_AlreadyHandledConsIds_34));
}

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Cases_32;
  MR_Word conv4_STATE_VARIABLE_AlreadyHandledConsIds_34;

  check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Cases_32, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_AlreadyHandledConsIds_34);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Cases_32));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_AlreadyHandledConsIds_34));
}

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Cases_32;
  MR_Word conv0_STATE_VARIABLE_AlreadyHandledConsIds_34;

  check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Cases_32, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_AlreadyHandledConsIds_34);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Cases_32));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyHandledConsIds_34));
}

static MR_bool MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0(
  MR_Word Disjuncts0_8,
  MR_Word Var_9,
  MR_Word GoalInfo_10,
  MR_Word * Left_11,
  MR_Word * Cases_12,
  MR_Word STATE_VARIABLE_LocalInfo_0_21,
  MR_Word * STATE_VARIABLE_LocalInfo_22)
{
  MR_bool succeeded;
  MR_Word CasesTable0_14;
  MR_Word Left1_15;
  MR_Word CasesTable1_16;
  MR_Word Var_23;
  MR_Word Var_24;

  Var_23 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0));
  Var_24 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
  {
    CasesTable0_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CasesTable0_14, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, CasesTable0_14, 1) = ((MR_Box) (Var_24));
  }
  check_hlds__switch_detection__partition_disj_trial_6_p_0(Disjuncts0_8, Var_9, (MR_Word) ((MR_Unsigned) 0U), &Left1_15, CasesTable0_14, &CasesTable1_16);
  if ((Left1_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeCtorInfo_15_55;
    MR_Word TypeCtorInfo_16_56;
    MR_Word TypeInfo_22_57;
    MR_Word TypeInfo_23_58;
    MR_Word TypeInfo_24_59;
    MR_Word TypeCtorInfo_25_60;
    MR_Integer Var_26;
    MR_Word CasesMap_43 = ((MR_Word) ((MR_hl_field(0, CasesTable1_16, (MR_Integer) 0))));
    MR_Word CasesMap_47;
    MR_Word ConflictIds_48;
    MR_Word CasesAssocList_49;
    MR_Word Cases_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Box conv3_Cases_50;
    MR_Box conv2__AlreadyHandledConsIds_51;

    Var_26 = mercury__map__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap_43);
    succeeded = (Var_26 >= (MR_Integer) 1);
    if (succeeded)
    {
      *Left_11 = Left1_15;
      CasesMap_47 = ((MR_Word) ((MR_hl_field(0, CasesTable1_16, (MR_Integer) 0))));
      ConflictIds_48 = ((MR_Word) ((MR_hl_field(0, CasesTable1_16, (MR_Integer) 1))));
      TypeCtorInfo_15_55 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
      TypeCtorInfo_16_56 = (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
      mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_15_55, TypeCtorInfo_16_56, CasesMap_47, &CasesAssocList_49);
      Var_53 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[1]));
        MR_hl_field(0, Var_52, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_1));
        MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_52, 3) = ((MR_Box) (GoalInfo_10));
        MR_hl_field(0, Var_52, 4) = ((MR_Box) (ConflictIds_48));
      }
      Var_54 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_15_55);
      TypeInfo_22_57 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[0]);
      TypeInfo_23_58 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]);
      TypeInfo_24_59 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]);
      mercury__list__foldl2_6_p_0(TypeInfo_22_57, TypeInfo_23_58, TypeInfo_24_59, Var_52, CasesAssocList_49, ((MR_Box) (Var_53)), &conv3_Cases_50, ((MR_Box) (Var_54)), &conv2__AlreadyHandledConsIds_51);
      Cases_50 = ((MR_Word) (conv3_Cases_50));
      TypeCtorInfo_25_60 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
      mercury__list__sort_2_p_0(TypeCtorInfo_25_60, Cases_50, Cases_12);
      *STATE_VARIABLE_LocalInfo_22 = STATE_VARIABLE_LocalInfo_0_21;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word AllowMulti_19 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word CasesTable_20;

    succeeded = check_hlds__switch_detection__expand_sub_disjs_5_p_0(AllowMulti_19, Var_9, Left1_15, CasesTable1_16, &CasesTable_20);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_15_73;
      MR_Word TypeCtorInfo_16_74;
      MR_Word TypeInfo_22_75;
      MR_Word TypeInfo_23_76;
      MR_Word TypeInfo_24_77;
      MR_Word TypeCtorInfo_25_78;
      MR_Integer Var_28;
      MR_Word Var_31;
      MR_Word CasesMap_61;
      MR_Word CasesMap_65;
      MR_Word ConflictIds_66;
      MR_Word CasesAssocList_67;
      MR_Word Cases_68;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Box conv7_Cases_68;
      MR_Box conv6__AlreadyHandledConsIds_69;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_40;

      *Left_11 = (MR_Word) ((MR_Unsigned) 0U);
      CasesMap_61 = ((MR_Word) ((MR_hl_field(0, CasesTable_20, (MR_Integer) 0))));
      Var_28 = mercury__map__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap_61);
      succeeded = (Var_28 >= (MR_Integer) 1);
      if (succeeded)
      {
        CasesMap_65 = ((MR_Word) ((MR_hl_field(0, CasesTable_20, (MR_Integer) 0))));
        ConflictIds_66 = ((MR_Word) ((MR_hl_field(0, CasesTable_20, (MR_Integer) 1))));
        TypeCtorInfo_15_73 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
        TypeCtorInfo_16_74 = (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
        mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_15_73, TypeCtorInfo_16_74, CasesMap_65, &CasesAssocList_67);
        Var_71 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[1]));
          MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_2));
          MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_70, 3) = ((MR_Box) (GoalInfo_10));
          MR_hl_field(0, Var_70, 4) = ((MR_Box) (ConflictIds_66));
        }
        Var_72 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_15_73);
        TypeInfo_22_75 = (MR_Word) (&check_hlds__switch_detection_scalar_common_2[0]);
        TypeInfo_23_76 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]);
        TypeInfo_24_77 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]);
        mercury__list__foldl2_6_p_0(TypeInfo_22_75, TypeInfo_23_76, TypeInfo_24_77, Var_70, CasesAssocList_67, ((MR_Box) (Var_71)), &conv7_Cases_68, ((MR_Box) (Var_72)), &conv6__AlreadyHandledConsIds_69);
        Cases_68 = ((MR_Word) (conv7_Cases_68));
        TypeCtorInfo_25_78 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
        mercury__list__sort_2_p_0(TypeCtorInfo_25_78, Cases_68, Cases_12);
        Var_31 = (MR_Integer) 0;
        Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 0))));
        Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 2))));
        Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_LocalInfo_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
          MR_hl_field(0, base, 1) = (MR_Box) (((((MR_Unsigned) (Var_37) << 1)) | (MR_Unsigned) (Var_31)));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_40));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word CasesMap_79;
      MR_Word ConflictIds_80;
      MR_Word CasesAssocList_81;
      MR_Word Cases_82;
      MR_Word Var_84;
      MR_Word Var_86;
      MR_Box conv11_Cases_82;
      MR_Box conv10__AlreadyHandledConsIds_83;

      *Left_11 = Left1_15;
      CasesMap_79 = ((MR_Word) ((MR_hl_field(0, CasesTable1_16, (MR_Integer) 0))));
      ConflictIds_80 = ((MR_Word) ((MR_hl_field(0, CasesTable1_16, (MR_Integer) 1))));
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap_79, &CasesAssocList_81);
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_84, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[1]));
        MR_hl_field(0, Var_84, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_3));
        MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_84, 3) = ((MR_Box) (GoalInfo_10));
        MR_hl_field(0, Var_84, 4) = ((MR_Box) (ConflictIds_80));
      }
      Var_86 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_2[0]), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[2]), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[3]), Var_84, CasesAssocList_81, ((MR_Box) ((MR_Unsigned) 0U)), &conv11_Cases_82, ((MR_Box) (Var_86)), &conv10__AlreadyHandledConsIds_83);
      Cases_82 = ((MR_Word) (conv11_Cases_82));
      mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_82, Cases_12);
      *STATE_VARIABLE_LocalInfo_22 = STATE_VARIABLE_LocalInfo_0_21;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disjs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CasesTable_0_4,
  MR_Word * STATE_VARIABLE_CasesTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CasesTable_5 = STATE_VARIABLE_CasesTable_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word LeftGoal_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word LeftGoals_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CasesTable_18_18;
      MR_Word GoalExpr_19 = ((MR_Word) ((MR_hl_field(0, LeftGoal_13, (MR_Integer) 0))));
      MR_Word GoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, LeftGoal_13, (MR_Integer) 1))));
      MR_Word GoalInfo_21;
      MR_Word SubGoals_22;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_CasesTable_0_4;

      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 16, GoalInfo0_20, &GoalInfo_21);
      succeeded = ((((MR_tag((MR_Word) GoalExpr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_25 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_19, (MR_Integer) 1))) & (MR_Integer) 1);
        SubGoals_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_19, (MR_Integer) 2))));
        succeeded = (Var_25 == (MR_Integer) 0);
      }
      if (succeeded)
        succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(HeadVar__1_1, HeadVar__2_2, SubGoals_22, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_21, STATE_VARIABLE_CasesTable_0_4, &STATE_VARIABLE_CasesTable_18_18);
      else
      {
        MR_Word Var_27;
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) GoalExpr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Var_28 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (LeftGoal_13));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
          }
          succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_27, Var_28, GoalInfo_21, STATE_VARIABLE_CasesTable_0_4, &STATE_VARIABLE_CasesTable_18_18);
        }
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = LeftGoals_14;
        next_value_of_STATE_VARIABLE_CasesTable_0_4 = STATE_VARIABLE_CasesTable_18_18;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_CasesTable_0_4 = next_value_of_STATE_VARIABLE_CasesTable_0_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_10;

  check_hlds__switch_detection__create_expanded_conjunction_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_10);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_10));
}

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_CasesTable_8;

  check_hlds__switch_detection__add_multi_entry_for_cons_id_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_CasesTable_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_CasesTable_8));
}

static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(
  MR_Word AllowMulti_8,
  MR_Word Var_9,
  MR_Word ConjGoals_10,
  MR_Word STATE_VARIABLE_RevUnifies_0_36,
  MR_Word GoalInfo_12,
  MR_Word STATE_VARIABLE_CasesTable_0_37,
  MR_Word * STATE_VARIABLE_CasesTable_38)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ConjGoals_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word FirstGoal_14;
    MR_Word LaterGoals_15;
    MR_Word FirstGoalExpr_16;
    MR_Word FirstGoalInfo_17;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      FirstGoal_14 = ((MR_Word) ((MR_hl_field(1, ConjGoals_10, (MR_Integer) 0))));
      LaterGoals_15 = ((MR_Word) ((MR_hl_field(1, ConjGoals_10, (MR_Integer) 1))));
      FirstGoalExpr_16 = ((MR_Word) ((MR_hl_field(0, FirstGoal_14, (MR_Integer) 0))));
      FirstGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, FirstGoal_14, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) FirstGoalExpr_16)) == (MR_Integer) 1))
      {
        MR_Word STATE_VARIABLE_RevUnifies_39_39;
        MR_Word next_value_of_ConjGoals_10;
        MR_Word next_value_of_STATE_VARIABLE_RevUnifies_0_36;

        {
          STATE_VARIABLE_RevUnifies_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevUnifies_39_39, 0) = ((MR_Box) (FirstGoal_14));
          MR_hl_field(1, STATE_VARIABLE_RevUnifies_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevUnifies_0_36));
        }
        // direct tailcall eliminated
        ;
        next_value_of_ConjGoals_10 = LaterGoals_15;
        next_value_of_STATE_VARIABLE_RevUnifies_0_36 = STATE_VARIABLE_RevUnifies_39_39;
        ConjGoals_10 = next_value_of_ConjGoals_10;
        STATE_VARIABLE_RevUnifies_0_36 = next_value_of_STATE_VARIABLE_RevUnifies_0_36;
        continue;
      }
      else
      if (((((MR_tag((MR_Word) FirstGoalExpr_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstGoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word Disjuncts_23 = ((MR_Word) ((MR_hl_field(3, FirstGoalExpr_16, (MR_Integer) 1))));
        MR_Word SortedDisjConsIds_29;
        MR_Word MainConsId_30;
        MR_Word OtherConsIds_31;
        MR_Word TypeCtorInfo_46_46;
        MR_Word TypeCtorInfo_47_47;
        MR_Word TypeInfo_22_76;
        MR_Word NonLocals_26;
        MR_Word OtherNonLocals_27;
        MR_Word DisjConsIds_28;
        MR_Word Goal_60;
        MR_Word Goals_61;
        MR_Word ConsId_62;
        MR_Word ConsIds_63;
        MR_Word GoalExpr_64;
        MR_Word UnifyInfo0_69;
        MR_Word Var_75;

        succeeded = (Disjuncts_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (AllowMulti_8 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_RevUnifies_0_36 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(FirstGoalInfo_17);
              TypeCtorInfo_46_46 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              parse_tree__set_of_var__delete_3_p_0(TypeCtorInfo_46_46, Var_9, NonLocals_26, &OtherNonLocals_27);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_46_46, OtherNonLocals_27);
              if (succeeded)
              {
                Goal_60 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, (MR_Integer) 0))));
                Goals_61 = ((MR_Word) ((MR_hl_field(1, Disjuncts_23, (MR_Integer) 1))));
                GoalExpr_64 = ((MR_Word) ((MR_hl_field(0, Goal_60, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) GoalExpr_64)) == (MR_Integer) 1);
                if (succeeded)
                {
                  UnifyInfo0_69 = ((MR_Word) ((MR_hl_field(1, GoalExpr_64, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) UnifyInfo0_69)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_75 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_69, (MR_Integer) 0))));
                    ConsId_62 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_69, (MR_Integer) 1))));
                    TypeInfo_22_76 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_76, ((MR_Box) (Var_9)), ((MR_Box) (Var_75)));
                    if (succeeded)
                    {
                      succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(Var_9, Goals_61, &ConsIds_63);
                      if (succeeded)
                      {
                        TypeCtorInfo_47_47 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
                        {
                          DisjConsIds_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, DisjConsIds_28, 0) = ((MR_Box) (ConsId_62));
                          MR_hl_field(1, DisjConsIds_28, 1) = ((MR_Box) (ConsIds_63));
                        }
                        mercury__list__sort_2_p_0(TypeCtorInfo_47_47, DisjConsIds_28, &SortedDisjConsIds_29);
                        succeeded = (SortedDisjConsIds_29 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          MainConsId_30 = ((MR_Word) ((MR_hl_field(1, SortedDisjConsIds_29, (MR_Integer) 0))));
                          OtherConsIds_31 = ((MR_Word) ((MR_hl_field(1, SortedDisjConsIds_29, (MR_Integer) 1))));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word SharedGoal_32;
            MR_Word Var_41;
            MR_Word Arm_53;
            MR_Word Var_54;
            MR_Box conv1_STATE_VARIABLE_CasesTable_38;

            {
              Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, Var_41, 2) = ((MR_Box) (LaterGoals_15));
            }
            {
              SharedGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SharedGoal_32, 0) = ((MR_Box) (Var_41));
              MR_hl_field(0, SharedGoal_32, 1) = ((MR_Box) (GoalInfo_12));
            }
            {
              Arm_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Arm_53, 0) = ((MR_Box) (MainConsId_30));
              MR_hl_field(1, Arm_53, 1) = ((MR_Box) (OtherConsIds_31));
              MR_hl_field(1, Arm_53, 2) = ((MR_Box) (SharedGoal_32));
            }
            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_54, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0]));
              MR_hl_field(0, Var_54, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1));
              MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_54, 3) = ((MR_Box) (Arm_53));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0), Var_54, SortedDisjConsIds_29, ((MR_Box) (STATE_VARIABLE_CasesTable_0_37)), &conv1_STATE_VARIABLE_CasesTable_38);
            *STATE_VARIABLE_CasesTable_38 = ((MR_Word) (conv1_STATE_VARIABLE_CasesTable_38));
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Unifies_33;
            MR_Word ExpandedConjunctions_34;
            MR_Word Left_35;
            MR_Word Var_44;

            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_RevUnifies_0_36, &Unifies_33);
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[0]));
              MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2));
              MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_44, 3) = ((MR_Box) (Unifies_33));
              MR_hl_field(0, Var_44, 4) = ((MR_Box) (LaterGoals_15));
              MR_hl_field(0, Var_44, 5) = ((MR_Box) (GoalInfo_12));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_44, Disjuncts_23, &ExpandedConjunctions_34);
            check_hlds__switch_detection__partition_disj_trial_6_p_0(ExpandedConjunctions_34, Var_9, (MR_Word) ((MR_Unsigned) 0U), &Left_35, STATE_VARIABLE_CasesTable_0_37, STATE_VARIABLE_CasesTable_38);
            succeeded = (Left_35 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      else
        succeeded = MR_FALSE;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0_1(
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
  MR_Word conv1_Goals_10;
  MR_Word conv0_Result_12;

  check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Goals_10, ((MR_Word) (wrapper_arg_4)), &conv0_Result_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_Goals_10));
  *wrapper_arg_5 = ((MR_Box) (conv0_Result_12));
}

static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Left_0_3,
  MR_Word * STATE_VARIABLE_Left_4,
  MR_Word STATE_VARIABLE_CasesTable_0_5,
  MR_Word * STATE_VARIABLE_CasesTable_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CasesTable_6 = STATE_VARIABLE_CasesTable_0_5;
      *STATE_VARIABLE_Left_4 = STATE_VARIABLE_Left_0_3;
    }
    else
    {
      MR_Word Disjunct0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Disjuncts0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Disjunct_19;
      MR_Word MaybeConsId_20;
      MR_Word STATE_VARIABLE_CasesTable_31_31;
      MR_Word STATE_VARIABLE_Left_32_32;
      MR_Word Subst_43;
      MR_Word Var_44;
      MR_Word DeconstructSearch_45;
      MR_Box conv3_MaybeConsId_20;
      MR_Box conv2_Var_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Left_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CasesTable_0_5;

      mercury__map__init_1_p_0((MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]), (MR_Word) (&check_hlds__switch_detection_scalar_common_1[1]), &Subst_43);
      check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(HeadVar__2_2, (MR_Word) (&check_hlds__switch_detection_scalar_common_2[2]), Disjunct0_14, &Disjunct_19, Subst_43, &Var_44, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_MaybeConsId_20, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_21, &DeconstructSearch_45);
      MaybeConsId_20 = ((MR_Word) (conv3_MaybeConsId_20));
      if ((MaybeConsId_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_Left_32_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Left_32_32, 0) = ((MR_Box) (Disjunct0_14));
          MR_hl_field(1, STATE_VARIABLE_Left_32_32, 1) = ((MR_Box) (STATE_VARIABLE_Left_0_3));
        }
        STATE_VARIABLE_CasesTable_31_31 = STATE_VARIABLE_CasesTable_0_5;
      }
      else
      {
        MR_Word ConsId_23 = ((MR_Word) ((MR_hl_field(1, MaybeConsId_20, (MR_Integer) 0))));
        MR_Word CasesMap0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_5, (MR_Integer) 0))));
        MR_Word ConflictConsIds0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CasesTable_0_5, (MR_Integer) 1))));
        MR_Word Arm_52;
        MR_Word ConflictConsIds_57;
        MR_Word CasesMap_60;
        MR_Word Entry0_53;
        MR_Box conv4_Entry0_53;

        {
          Arm_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arm_52, 0) = ((MR_Box) (ConsId_23));
          MR_hl_field(0, Arm_52, 1) = ((MR_Box) (Disjunct_19));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), CasesMap0_50, ((MR_Box) (ConsId_23)), &conv4_Entry0_53);
        if (succeeded)
        {
          Entry0_53 = ((MR_Word) (conv4_Entry0_53));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word State0_54 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_53, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word Arms0_55 = ((MR_Word) ((MR_hl_field(0, Entry0_53, (MR_Integer) 1))));
          MR_Word State_56;
          MR_Word Arms_58;
          MR_Word Entry_59;

          switch (State0_54) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                State_56 = (MR_Integer) 0;
                ConflictConsIds_57 = ConflictConsIds0_51;
              }
              break;
            case (MR_Integer) 2:
              {
                State_56 = (MR_Integer) 2;
                ConflictConsIds_57 = ConflictConsIds0_51;
              }
              break;
            case (MR_Integer) 1:
              {
                State_56 = (MR_Integer) 2;
                mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_23)), ConflictConsIds0_51, &ConflictConsIds_57);
              }
              break;
          }
          Arms_58 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), Arms0_55, ((MR_Box) (Arm_52)));
          {
            Entry_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_59, 0) = (MR_Box) ((MR_Unsigned) (State_56));
            MR_hl_field(0, Entry_59, 1) = ((MR_Box) (Arms_58));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_23)), ((MR_Box) (Entry_59)), CasesMap0_50, &CasesMap_60);
        }
        else
        {
          MR_Word Arms_62;
          MR_Word Entry_63;

          Arms_62 = mercury__cord__singleton_1_f_0((MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0), ((MR_Box) (Arm_52)));
          {
            Entry_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_63, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Entry_63, 1) = ((MR_Box) (Arms_62));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0), ((MR_Box) (ConsId_23)), ((MR_Box) (Entry_63)), CasesMap0_50, &CasesMap_60);
          ConflictConsIds_57 = ConflictConsIds0_51;
        }
        {
          STATE_VARIABLE_CasesTable_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_CasesTable_31_31, 0) = ((MR_Box) (CasesMap_60));
          MR_hl_field(0, STATE_VARIABLE_CasesTable_31_31, 1) = ((MR_Box) (ConflictConsIds_57));
        }
        STATE_VARIABLE_Left_32_32 = STATE_VARIABLE_Left_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Disjuncts0_15;
      next_value_of_STATE_VARIABLE_Left_0_3 = STATE_VARIABLE_Left_32_32;
      next_value_of_STATE_VARIABLE_CasesTable_0_5 = STATE_VARIABLE_CasesTable_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Left_0_3 = next_value_of_STATE_VARIABLE_Left_0_3;
      STATE_VARIABLE_CasesTable_0_5 = next_value_of_STATE_VARIABLE_CasesTable_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcessUnify_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Subst_0_5,
  MR_Word * STATE_VARIABLE_Subst_6,
  MR_Box STATE_VARIABLE_Result_0_7,
  MR_Box * STATE_VARIABLE_Result_8,
  MR_Box STATE_VARIABLE_Info_0_9,
  MR_Box * STATE_VARIABLE_Info_10,
  MR_Word * HeadVar__11_11)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__11_11 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    *STATE_VARIABLE_Result_8 = STATE_VARIABLE_Result_0_7;
    *STATE_VARIABLE_Subst_6 = STATE_VARIABLE_Subst_0_5;
  }
  else
  {
    MR_Word Goal0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_27;
    MR_Word Goals_28;
    MR_Word FoundDeconstruct1_33;
    MR_Word STATE_VARIABLE_Subst_40_40;
    MR_Box STATE_VARIABLE_Result_41_41;
    MR_Box STATE_VARIABLE_Info_42_42;

    check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(HeadVar__1_1, ProcessUnify_2, Goal0_25, &Goal_27, STATE_VARIABLE_Subst_0_5, &STATE_VARIABLE_Subst_40_40, STATE_VARIABLE_Result_0_7, &STATE_VARIABLE_Result_41_41, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_42_42, &FoundDeconstruct1_33);
    switch (FoundDeconstruct1_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(HeadVar__1_1, ProcessUnify_2, Goals0_26, &Goals_28, STATE_VARIABLE_Subst_40_40, STATE_VARIABLE_Subst_6, STATE_VARIABLE_Result_41_41, STATE_VARIABLE_Result_8, STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Info_10, HeadVar__11_11);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *HeadVar__11_11 = FoundDeconstruct1_33;
          Goals_28 = Goals0_26;
          *STATE_VARIABLE_Subst_6 = STATE_VARIABLE_Subst_40_40;
          *STATE_VARIABLE_Result_8 = STATE_VARIABLE_Result_41_41;
          *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_42_42;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_28));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word Var_12,
  MR_Word ProcessUnify_13,
  MR_Word Goal0_14,
  MR_Word * Goal_15,
  MR_Word STATE_VARIABLE_Subst_0_87,
  MR_Word * STATE_VARIABLE_Subst_88,
  MR_Box STATE_VARIABLE_Result_0_89,
  MR_Box * STATE_VARIABLE_Result_90,
  MR_Box STATE_VARIABLE_Info_0_91,
  MR_Box * STATE_VARIABLE_Info_92,
  MR_Word * FoundDeconstruct_19)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_14, (MR_Integer) 0))));
  MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal0_14, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Goal_15 = Goal0_14;
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_21, (MR_Integer) 1);
        if (succeeded)
          *FoundDeconstruct_19 = (MR_Integer) 0;
        else
          *FoundDeconstruct_19 = (MR_Integer) 2;
        *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
        *STATE_VARIABLE_Result_90 = STATE_VARIABLE_Result_0_89;
        *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_32 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_20, (MR_Integer) 0))));
        MR_Word RHS_33 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_20, (MR_Integer) 1))));
        MR_Word UnifyInfo0_35 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_20, (MR_Integer) 3))));
        MR_Word TypeCtorInfo_119_119;
        MR_Word TypeInfo_124_124;
        MR_Word UnifyVar_37;
        MR_Word SubstVar_43;
        MR_Word SubstUnifyVar_44;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_120;
        MR_Word Var_121;

        succeeded = ((MR_tag((MR_Word) UnifyInfo0_35)) == (MR_Integer) 1);
        if (succeeded)
        {
          UnifyVar_37 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_35, (MR_Integer) 0))));
          Var_105 = mercury__term_context__dummy_context_0_f_0();
          {
            Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_12));
            MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_105));
          }
          Var_106 = mercury__term_context__dummy_context_0_f_0();
          TypeCtorInfo_119_119 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeCtorInfo_119_119, STATE_VARIABLE_Subst_0_87, Var_103, &Var_104);
          succeeded = ((MR_tag((MR_Word) Var_104)) == (MR_Integer) 1);
          if (succeeded)
          {
            SubstVar_43 = ((MR_Word) ((MR_hl_field(1, Var_104, (MR_Integer) 0))));
            Var_120 = ((MR_Word) ((MR_hl_field(1, Var_104, (MR_Integer) 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(Var_106, Var_120);
            if (succeeded)
            {
              Var_109 = mercury__term_context__dummy_context_0_f_0();
              {
                Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_107, 0) = ((MR_Box) (UnifyVar_37));
                MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_109));
              }
              Var_110 = mercury__term_context__dummy_context_0_f_0();
              mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeCtorInfo_119_119, STATE_VARIABLE_Subst_0_87, Var_107, &Var_108);
              succeeded = ((MR_tag((MR_Word) Var_108)) == (MR_Integer) 1);
              if (succeeded)
              {
                SubstUnifyVar_44 = ((MR_Word) ((MR_hl_field(1, Var_108, (MR_Integer) 0))));
                Var_121 = ((MR_Word) ((MR_hl_field(1, Var_108, (MR_Integer) 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(Var_110, Var_121);
                if (succeeded)
                {
                  TypeInfo_124_124 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_124_124, ((MR_Box) (SubstVar_43)), ((MR_Box) (SubstUnifyVar_44)));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Goals_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, ProcessUnify_13, (MR_Integer) 1))));
          MR_Box conv1_Goals_45;

          func_0(((MR_Box) (ProcessUnify_13)), ((MR_Box) (Var_12)), ((MR_Box) (Goal0_14)), &conv1_Goals_45, STATE_VARIABLE_Result_0_89, STATE_VARIABLE_Result_90, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92);
          Goals_45 = ((MR_Word) (conv1_Goals_45));
          hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_45, GoalInfo_21, Goal_15);
          *FoundDeconstruct_19 = (MR_Integer) 1;
          *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
        }
        else
        {
          MR_Word NewSubst_46;

          *Goal_15 = Goal0_14;
          *FoundDeconstruct_19 = (MR_Integer) 0;
          succeeded = check_hlds__det_util__interpret_unify_4_p_0(LHS_32, RHS_33, STATE_VARIABLE_Subst_0_87, &NewSubst_46);
          if (succeeded)
            *STATE_VARIABLE_Subst_88 = NewSubst_46;
          else
            *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
          *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
          *STATE_VARIABLE_Result_90 = STATE_VARIABLE_Result_0_89;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Goal_15 = Goal0_14;
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_21, (MR_Integer) 1);
        if (succeeded)
          *FoundDeconstruct_19 = (MR_Integer) 0;
        else
          *FoundDeconstruct_19 = (MR_Integer) 2;
        *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
        *STATE_VARIABLE_Result_90 = STATE_VARIABLE_Result_0_89;
        *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_20, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 6:
          {
            *Goal_15 = Goal0_14;
            succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_21, (MR_Integer) 1);
            if (succeeded)
              *FoundDeconstruct_19 = (MR_Integer) 0;
            else
              *FoundDeconstruct_19 = (MR_Integer) 2;
            *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
            *STATE_VARIABLE_Result_90 = STATE_VARIABLE_Result_0_89;
            *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_27 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_20, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, (MR_Integer) 2))));

            switch (ConjType_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *Goal_15 = Goal0_14;
                  *FoundDeconstruct_19 = (MR_Integer) 2;
                  *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
                  *STATE_VARIABLE_Result_90 = STATE_VARIABLE_Result_0_89;
                  *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
                }
                break;
              case (MR_Integer) 0:
                if ((SubGoals0_28 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *Goal_15 = Goal0_14;
                  *FoundDeconstruct_19 = (MR_Integer) 0;
                  *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
                  *STATE_VARIABLE_Result_90 = STATE_VARIABLE_Result_0_89;
                  *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
                }
                else
                {
                  MR_Word SubGoals_31;
                  MR_Word Var_102;

                  check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_12, ProcessUnify_13, SubGoals0_28, &SubGoals_31, STATE_VARIABLE_Subst_0_87, STATE_VARIABLE_Subst_88, STATE_VARIABLE_Result_0_89, STATE_VARIABLE_Result_90, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92, FoundDeconstruct_19);
                  {
                    Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_102, 1) = (MR_Box) ((MR_Unsigned) (ConjType_27));
                    MR_hl_field(3, Var_102, 2) = ((MR_Box) (SubGoals_31));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_15 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_21));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, (MR_Integer) 1))));
            MR_Word SubGoal0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, (MR_Integer) 2))));
            MR_Word Var_93;

            succeeded = ((((MR_tag((MR_Word) Reason0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_93 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_22, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_93 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *Goal_15 = Goal0_14;
              *FoundDeconstruct_19 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
              *STATE_VARIABLE_Result_90 = STATE_VARIABLE_Result_0_89;
              *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
            }
            else
            {
              MR_Word SubGoal_25;
              MR_Word Var_97;

              check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_12, ProcessUnify_13, SubGoal0_23, &SubGoal_25, STATE_VARIABLE_Subst_0_87, STATE_VARIABLE_Subst_88, STATE_VARIABLE_Result_0_89, STATE_VARIABLE_Result_90, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92, FoundDeconstruct_19);
              succeeded = (*FoundDeconstruct_19 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Reason0_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_97 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_22, (MR_Integer) 2))) & (MR_Integer) 3);
                  succeeded = (Var_97 == (MR_Integer) 2);
                }
              }
              if (succeeded)
                *Goal_15 = SubGoal_25;
              else
              {
                MR_Word Var_98;

                {
                  Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, Var_98, 1) = ((MR_Box) (Reason0_22));
                  MR_hl_field(3, Var_98, 2) = ((MR_Box) (SubGoal_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_15 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_98));
                  MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_21));
                }
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_74)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.switch_detection.find_bind_var_2\'/11", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  *Goal_15 = Goal0_14;
                  *FoundDeconstruct_19 = (MR_Integer) 2;
                }
                break;
              case (MR_Integer) 2:
                {
                  *Goal_15 = Goal0_14;
                  *FoundDeconstruct_19 = (MR_Integer) 2;
                }
                break;
            }
            *STATE_VARIABLE_Subst_88 = STATE_VARIABLE_Subst_0_87;
            *STATE_VARIABLE_Result_90 = STATE_VARIABLE_Result_0_89;
            *STATE_VARIABLE_Info_92 = STATE_VARIABLE_Info_0_91;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ConsId_8;
    MR_Word ConsIds_9;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
    MR_Word UnifyInfo0_15;
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 1);
    if (succeeded)
    {
      UnifyInfo0_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) UnifyInfo0_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_21 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_15, (MR_Integer) 0))));
        ConsId_8 = ((MR_Word) ((MR_hl_field(1, UnifyInfo0_15, (MR_Integer) 1))));
        TypeInfo_22_22 = (MR_Word) (&check_hlds__switch_detection_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (HeadVar__1_1)), ((MR_Box) (Var_21)));
        if (succeeded)
        {
          succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(HeadVar__1_1, Goals_7, &ConsIds_9);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_8));
              MR_hl_field(1, base, 1) = ((MR_Box) (ConsIds_9));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
check_hlds__switch_detection__init_switch_detect_info_1_f_0(
  MR_Word ModuleInfo_3)
{
  MR_Word Info_4;
  MR_Word AllowMulti_5;
  MR_Word Globals_6;
  MR_Word Allow_7;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 343, &Allow_7);
  switch (Allow_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AllowMulti_5 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      AllowMulti_5 = (MR_Integer) 0;
      break;
  }
  {
    Info_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_4, 0) = ((MR_Box) (ModuleInfo_3));
    MR_hl_field(0, Info_4, 1) = (MR_Box) ((MR_Unsigned) (AllowMulti_5));
  }
  return Info_4;
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____allow_multi_arm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____allow_multi_arm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____candidate_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____candidate_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_rank_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____candidate_switch_rank_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_rank_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____candidate_switch_rank_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____case_arm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____case_arm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_missing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____cases_missing_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_missing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____cases_missing_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____cases_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____cases_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____cons_id_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____cons_id_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____cons_id_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____cons_id_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____deconstruct_search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____deconstruct_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____found_deconstruct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____found_deconstruct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____process_unify_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____process_unify_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_detection____Unify____switch_detect_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_detection____Compare____switch_detect_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__switch_detection__init(void)
{
}

void mercury__check_hlds__switch_detection__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_rank_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_missing_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_deconstruct_search_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_found_deconstruct_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_process_unify_2);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_switch_detect_info_0);
}

void mercury__check_hlds__switch_detection__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__switch_detection__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.switch_detection.
