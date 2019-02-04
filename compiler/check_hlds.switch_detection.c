/*
** Automatically generated from `switch_detection.m'
** by the Mercury compiler,
** version rotd-2018-03-13
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0[2];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0[2];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_0_0[6];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_candidate_switch_0_0[6];

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

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cases_missing_0[3];

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

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1];

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0[3];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3];

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0[3];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0[3];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0[3];

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1;

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0[2];

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0[2];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0[2];

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[5];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[5];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1];

static const MR_VA_PseudoTypeInfo_Struct7 check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0[2];

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0[1];

static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1];

static void MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1502__1_3_p_0(
  MR_Word HeadVar__1_20,
  MR_Word HeadVar__2_21,
  MR_Word * HeadVar__3_22);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__527__1_2_p_0(
  MR_Word ConflictConsIds_9,
  MR_Word HeadVar__2_92);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__490__1_2_p_0(
  MR_Word IsMember_18,
  MR_Word HeadVar__2_62);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__500__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word IsMember_66);

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__482__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word HeadVar__2_96);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
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
check_hlds__switch_detection__use_context_of_first_disjunct_3_p_0(
  MR_Word Disjuncts_4,
  MR_Word GoalInfo0_5,
  MR_Word * GoalInfo_6);

static void MR_CALL 
check_hlds__switch_detection__gather_smallest_context_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SmallestContext_0_2,
  MR_Word * STATE_VARIABLE_SmallestContext_3);

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_4_p_0(
  MR_Word Info_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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

static void MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Word MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0(
  MR_Word GoalInfo_4,
  MR_Word CasesTable_5);

static MR_bool MR_CALL 
check_hlds__switch_detection__is_candidate_switch_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word MaybeRequiredVar_10,
  MR_Word Var_11,
  MR_Word VarType_12,
  MR_Word VarInst0_13,
  MR_Word Cases0_14,
  MR_Word LeftOver_15,
  MR_Word * Candidate_16);

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

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[1][6];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[2][10];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[4][5];




static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__switch_detection__delete_covered_functors_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[1])),
    ((MR_Box) (check_hlds__switch_detection__partition_disj_trial_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[2])),
    ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[2])),
    ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0 = {
  (MR_String) "allow_multi_arm",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1 = {
  (MR_String) "dont_allow_multi_arm",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "allow_multi_arm",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_rank_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_candidate_switch_0_0[6] = {
  (MR_String) "cs_var",
  (MR_String) "cs_cases",
  (MR_String) "cs_unreachable_case_goals",
  (MR_String) "cs_left_over_disjuncts",
  (MR_String) "cs_rank",
  (MR_String) "cs_can_fail"
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_0_0 = {
  (MR_String) "candidate_switch",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_candidate_switch_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____candidate_switch_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____candidate_switch_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "candidate_switch",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_candidate_switch_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_candidate_switch_0
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_0 = {
  (MR_String) "some_leftover_can_fail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_1 = {
  (MR_String) "some_leftover_cannot_fail",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_candidate_switch_rank_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_2 = {
  (MR_String) "no_leftover_twoplus_cases_finite_can_fail",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_3 = {
  (MR_String) "no_leftover_one_case",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_4 = {
  (MR_String) "no_leftover_twoplus_cases_infinite_can_fail",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_5 = {
  (MR_String) "no_leftover_twoplus_cases_finite_cannot_fail",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_6 = {
  (MR_String) "all_disjuncts_are_unreachable",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_candidate_switch_rank_0_7 = {
  (MR_String) "no_leftover_twoplus_cases_explicitly_selected",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 6,
    MR_SECTAG_LOCAL,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_candidate_switch_rank_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____candidate_switch_rank_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____candidate_switch_rank_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "candidate_switch_rank",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_candidate_switch_rank_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_candidate_switch_rank_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_candidate_switch_rank_0
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0 = {
  (MR_String) "single_cons_id_arm",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1 = {
  (MR_String) "multi_cons_id_arm",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____case_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____case_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "case_arm",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_0 = {
  (MR_String) "no_cases_missing",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_1 = {
  (MR_String) "some_cases_missing",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cases_missing_0_2 = {
  (MR_String) "unbounded_cases",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cases_missing_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____cases_missing_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cases_missing_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cases_missing",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cases_missing_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cases_missing_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_missing_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2] = {
  (MR_String) "cases_map",
  (MR_String) "conflict_cons_ids"
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0 = {
  (MR_String) "cases_table",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cases_table_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cases_table_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cases_table",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2] = {
  (MR_String) "cons_id_state",
  (MR_String) "cons_id_arms"
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0 = {
  (MR_String) "cons_id_entry",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_entry",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0 = {
  (MR_String) "cons_id_has_all_singles",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1 = {
  (MR_String) "cons_id_has_one_multi",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2 = {
  (MR_String) "cons_id_has_conflict",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_state_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_state_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_state",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0 = {
  (MR_String) "before_deconstruct",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1 = {
  (MR_String) "found_deconstruct",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2 = {
  (MR_String) "given_up_search",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "deconstruct_search",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0 = {
  (MR_String) "did_find_deconstruct",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1 = {
  (MR_String) "did_not_find_deconstruct",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "found_deconstruct",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[5] = {
  (MR_String) "lsdi_module_info",
  (MR_String) "lsdi_allow_multi_arm",
  (MR_String) "lsdi_vartypes",
  (MR_String) "lsdi_requant",
  (MR_String) "lsdi_deleted_callees"
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0 = {
  (MR_String) "local_switch_detect_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "local_switch_detect_info",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0
};

static const MR_VA_PseudoTypeInfo_Struct7 check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_process_unify_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (check_hlds__switch_detection____Unify____process_unify_2_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____process_unify_2_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "process_unify",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0
};

static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0[2] = {
  (MR_String) "sdi_module_info",
  (MR_String) "sdi_allow_multi_arm"
};

static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0 = {
  (MR_String) "switch_detect_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0
};

static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "switch_detect_info",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0
};

static void MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1502__1_3_p_0(
  MR_Word HeadVar__1_20,
  MR_Word HeadVar__2_21,
  MR_Word * HeadVar__3_22)
{
  {
    mercury__set_tree234__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (HeadVar__1_20)), HeadVar__2_21, HeadVar__3_22);
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__527__1_2_p_0(
  MR_Word ConflictConsIds_9,
  MR_Word HeadVar__2_92)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ConflictConsIds_9, ((MR_Box) (HeadVar__2_92)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__490__1_2_p_0(
  MR_Word IsMember_18,
  MR_Word HeadVar__2_62)
{
  {
    MR_bool succeeded = (IsMember_18 == HeadVar__2_62);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__500__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word IsMember_66)
{
  {
    MR_bool succeeded = (IsMember_66 == HeadVar__1_54);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__482__1_2_p_0(
  MR_Word HeadVar__1_39,
  MR_Word HeadVar__2_96)
{
  {
    MR_bool succeeded = (HeadVar__2_96 == HeadVar__1_39);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      hlds__hlds_module____Compare____module_info_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        MR_Integer Var_13 = (MR_Integer) ArgX2_6;
        MR_Integer Var_14 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_13, Var_14);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0(
  MR_Word TypeInfo_for_Result_6,
  MR_Word TypeInfo_for_Info_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0(
  MR_Word TypeInfo_for_Result_5,
  MR_Word TypeInfo_for_Info_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      hlds__hlds_module____Compare____module_info_0_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;
        MR_Integer Var_25 = (MR_Integer) ArgX2_6;
        MR_Integer Var_26 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_15, Var_25, Var_26);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, &Var_16, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;
            MR_Integer Var_27 = (MR_Integer) ArgX4_10;
            MR_Integer Var_28 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, Var_27, Var_28);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[7], HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
            }
          }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeCtorInfo_16_16 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_17_17 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[7];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer Var_13 = (MR_Integer) ArgX1_4;
      MR_Integer Var_14 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_13, Var_14);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[6];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[1], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_missing_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_missing_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ArgY3_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
        MR_Word Var_25;

        parse_tree__prog_data____Compare____cons_id_0_0(&Var_25, Var_36, ArgY1_20);
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;

          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[5], &Var_26, ((MR_Box) (Var_35)), ((MR_Box) (ArgY2_22)));
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
            hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, Var_34, ArgY3_24);
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;

        parse_tree__prog_data____Compare____cons_id_0_0(&Var_8, Var_38, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
          hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, Var_37, ArgY2_7);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_10;
      MR_Word ArgX3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_12;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_7, ArgY1_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[5];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
          if (succeeded)
            succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX3_11, ArgY3_12);
        }
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_5, ArgY2_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_rank_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_37 = (MR_Integer) HeadVar__3_3;

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
            MR_Integer Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_40, ArgY1_5);
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
            MR_Integer Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Integer ArgY1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_41, ArgY1_17);
                }
                break;
            }
          }
          break;
      }
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_16;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], &Var_16, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[2], &Var_17, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[4], &Var_18, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[4], &Var_19, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;
              MR_Integer CastX_63 = (MR_Integer) ArgX5_12;
              MR_Integer CastY_64 = (MR_Integer) ArgY5_13;

              succeeded = (CastX_63 == CastY_64);
              if (succeeded)
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
              else
                switch (MR_tag((MR_Word) ArgX5_12)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ArgX5_12)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_tag((MR_Word) ArgY5_13)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ArgY5_13)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Var_20 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 3:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 4:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 5:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        switch (MR_tag((MR_Word) ArgY5_13)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ArgY5_13)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Var_20 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 3:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 4:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 5:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 2:
                        switch (MR_tag((MR_Word) ArgY5_13)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ArgY5_13)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Var_20 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                break;
                              case (MR_Integer) 3:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 4:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 5:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (MR_tag((MR_Word) ArgY5_13)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ArgY5_13)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 3:
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Var_20 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                break;
                              case (MR_Integer) 4:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 5:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 4:
                        switch (MR_tag((MR_Word) ArgY5_13)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ArgY5_13)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 3:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 4:
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Var_20 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                break;
                              case (MR_Integer) 5:
                                {
                                  Var_20 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 5:
                        switch (MR_tag((MR_Word) ArgY5_13)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ArgY5_13)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 3:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 4:
                                {
                                  Var_20 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 5:
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Var_20 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              Var_20 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ArgX5_12, (MR_Integer) 0)));

                      switch (MR_tag((MR_Word) ArgY5_13)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgY5_13)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer ArgY1_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ArgY5_13, (MR_Integer) 0)));

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, Var_67, ArgY1_32);
                            succeeded = (Var_20 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            Var_20 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ArgX5_12, (MR_Integer) 0)));

                      switch (MR_tag((MR_Word) ArgY5_13)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgY5_13)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                Var_20 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            Var_20 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Integer ArgY1_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ArgY5_13, (MR_Integer) 0)));

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, Var_68, ArgY1_44);
                            succeeded = (Var_20 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                          }
                          break;
                      }
                    }
                    break;
                }
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                MR_Integer Var_29 = (MR_Integer) ArgX6_14;
                MR_Integer Var_30 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_29, Var_30);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[4];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[4];
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
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_rank_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

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
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_14 == CastX_13);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_18 == CastX_17);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_14;
    MR_Word GoalInfo_15;
    MR_Word Unification0_19;
    MR_Word UnifyVar_21;
    MR_Word Functor_22;
    MR_Word ArgVars_23;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

    GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
    GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));
    succeeded = ((MR_tag((MR_Word) GoalExpr0_14)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 0)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 1)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 2)));
      Unification0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 3)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 4)));
      succeeded = ((MR_tag((MR_Word) Unification0_19)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        UnifyVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 0)));
        Functor_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 1)));
        ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 2)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 3)));
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 4)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 5)));
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_46_46;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Functor_22));
      }
      succeeded = (ArgVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        TypeInfo_46_46 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (SwitchVar_8)), ((MR_Box) (UnifyVar_21)));
      }
      if (succeeded)
        *Goals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Unification_27;
        MR_Word GoalExpr_28;
        MR_Word Goal_29;
        MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 0)));
        MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 1)));
        MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 2)));
        MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 3)));
        MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 5)));
        MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 4)));
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_45;
        MR_Word Var_44;

        {
          Unification_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Unification_27, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), Unification_27, 1) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Unification_27, 2) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Unification_27, 3) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Unification_27, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), Unification_27, 5) = ((MR_Box) (Var_40));
        }
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 0)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 1)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 2)));
        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 3)));
        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_14, (MR_Integer) 4)));
        {
          GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr_28, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), GoalExpr_28, 1) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), GoalExpr_28, 2) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), GoalExpr_28, 3) = ((MR_Box) (Unification_27));
          MR_hl_field(MR_mktag(1), GoalExpr_28, 4) = ((MR_Box) (Var_45));
        }
        {
          Goal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_29, 0) = ((MR_Box) (GoalExpr_28));
          MR_hl_field(MR_mktag(0), Goal_29, 1) = ((MR_Box) (GoalInfo_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.find_bind_var_for_switch_in_deconstruct\'/7", (MR_String) "goal is not a deconstruct unification");
        return;
      }
    }
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
  {
    MR_bool succeeded;
    MR_Word Conjuncts_13;
    MR_Word Var_20;
    MR_Word DisjunctGoals_11;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Disjunct_9, (MR_Integer) 0)));
    MR_Word Var_15;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Disjunct_9, (MR_Integer) 1)));

    succeeded = ((((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_14, (MR_Integer) 1)));
      DisjunctGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_14, (MR_Integer) 2)));
      succeeded = (Var_15 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      MR_Word Var_16;

      Var_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_22, DisjunctGoals_11, LaterGoals_7);
      Conjuncts_13 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_22_22, Unifies_6, Var_16);
    }
    else
    {
      MR_Word TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      MR_Word Var_17;
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Disjunct_9));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_23_23, Var_18, LaterGoals_7);
      Conjuncts_13 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_23_23, Unifies_6, Var_17);
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_20, 2) = ((MR_Box) (Conjuncts_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__add_multi_entry_for_cons_id_4_p_0(
  MR_Word Arm_5,
  MR_Word ConsId_6,
  MR_Word CasesTable0_7,
  MR_Word * CasesTable_8)
{
  {
    MR_bool succeeded;
    MR_Word CasesMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable0_7, (MR_Integer) 0)));
    MR_Word ConflictConsIds0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable0_7, (MR_Integer) 1)));
    MR_Word ConflictConsIds_14;
    MR_Word CasesMap_18;
    MR_Word Entry0_11;
    MR_Box conv0_Entry0_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, CasesMap0_9, ((MR_Box) (ConsId_6)), &conv0_Entry0_11);
    if (succeeded)
    {
      Entry0_11 = ((MR_Word) conv0_Entry0_11);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word State0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Entry0_11, (MR_Integer) 0)));
      MR_Word Arms0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Entry0_11, (MR_Integer) 1)));
      MR_Word Arms_16;
      MR_Word Entry_17;

      switch (State0_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (ConsId_6)), ConflictConsIds0_10, &ConflictConsIds_14);
          }
          break;
        case (MR_Integer) 2:
          ConflictConsIds_14 = ConflictConsIds0_10;
          break;
      }
      Arms_16 = mercury__cord__snoc_2_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0, Arms0_13, ((MR_Box) (Arm_5)));
      {
        Entry_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_17, 0) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Entry_17, 1) = ((MR_Box) (Arms_16));
      }
      mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, ((MR_Box) (ConsId_6)), ((MR_Box) (Entry_17)), CasesMap0_9, &CasesMap_18);
    }
    else
    {
      MR_Word Arms_20;
      MR_Word Entry_21;

      Arms_20 = mercury__cord__singleton_1_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0, ((MR_Box) (Arm_5)));
      {
        Entry_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_21, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Entry_21, 1) = ((MR_Box) (Arms_20));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, ((MR_Box) (ConsId_6)), ((MR_Box) (Entry_21)), CasesMap0_9, &CasesMap_18);
      ConflictConsIds_14 = ConflictConsIds0_10;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *CasesTable_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CasesMap_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConflictConsIds_14));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__switch_detection__project_single_arm_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Goal_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "function \140check_hlds.switch_detection.project_single_arm_goal\'/1", (MR_String) "multi arm");
    }
    else
    {
      MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

      Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    }
    return Goal_2;
  }
}

static MR_Word MR_CALL 
check_hlds__switch_detection__project_arm_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Goal_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
    }
    else
    {
      MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

      Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    }
    return Goal_2;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__527__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_2;

    conv1_Goal_2 = check_hlds__switch_detection__project_arm_goal_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_Goal_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__490__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_2;

    conv0_Goal_2 = check_hlds__switch_detection__project_single_arm_goal_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Goal_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__500__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__482__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Entry_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Entry_11, (MR_Integer) 1)));
    MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Entry_11, (MR_Integer) 0)));

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, STATE_VARIABLE_AlreadyHandledConsIds_0_33, ((MR_Box) (ConsId_10)));
    if (succeeded)
    {
      MR_Word Var_35;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (Var_96));
      }
      mercury__require__expect_4_p_0(Var_35, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "already handled but not cons_id_has_one_multi");
      *STATE_VARIABLE_AlreadyHandledConsIds_34 = STATE_VARIABLE_AlreadyHandledConsIds_0_33;
      *STATE_VARIABLE_Cases_32 = STATE_VARIABLE_Cases_0_31;
    }
    else
    {
      MR_Word TypeCtorInfo_81_81 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0;
      MR_Word Arms_17;

      Arms_17 = mercury__cord__list_1_f_0(TypeCtorInfo_81_81, Var_95);
      switch (Var_96) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_50;
            MR_Word IsMember_66;
            MR_Word Disjuncts_67;
            MR_Word GoalInfo_68;
            MR_Word Goal_69;
            MR_Word Case_70;

            mercury__set_tree234__is_member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ConflictConsIds_9, ((MR_Box) (ConsId_10)), &IsMember_66);
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[1]));
              MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (IsMember_66));
            }
            mercury__require__expect_4_p_0(Var_50, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "singles status but in ConflictConsIds");
            Disjuncts_67 = mercury__list__map_2_f_0(TypeCtorInfo_81_81, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__switch_detection_scalar_common_2[4], Arms_17);
            check_hlds__switch_detection__use_context_of_first_disjunct_3_p_0(Disjuncts_67, GoalInfo0_8, &GoalInfo_68);
            hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_67, GoalInfo_68, &Goal_69);
            {
              Case_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Case_70, 0) = ((MR_Box) (ConsId_10));
              MR_hl_field(MR_mktag(0), Case_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Case_70, 2) = ((MR_Box) (Goal_69));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Cases_32 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_70));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_31));
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
            MR_Word Var_58;

            mercury__set_tree234__is_member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ConflictConsIds_9, ((MR_Box) (ConsId_10)), &IsMember_18);
            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[1]));
              MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_4));
              MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (IsMember_18));
              MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_4_p_0(Var_58, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "conflict status but not in ConflictConsIds");
            Disjuncts_19 = mercury__list__map_2_f_0(TypeCtorInfo_81_81, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__switch_detection_scalar_common_2[5], Arms_17);
            check_hlds__switch_detection__use_context_of_first_disjunct_3_p_0(Disjuncts_19, GoalInfo0_8, &GoalInfo_20);
            hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_19, GoalInfo_20, &Goal_21);
            {
              Case_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Case_22, 0) = ((MR_Box) (ConsId_10));
              MR_hl_field(MR_mktag(0), Case_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Case_22, 2) = ((MR_Box) (Goal_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Cases_32 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_22));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_31));
            }
            *STATE_VARIABLE_AlreadyHandledConsIds_34 = STATE_VARIABLE_AlreadyHandledConsIds_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MainConsId0_24;
            MR_Word OtherConsIds0_25;
            MR_Word Goal_74;
            MR_Word Arm_23;
            MR_Word Var_40;

            succeeded = ((MR_tag((MR_Word) Arms_17)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Arms_17, (MR_Integer) 0)));
              Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Arms_17, (MR_Integer) 1)));
              succeeded = (Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Arm_23)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  MainConsId0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Arm_23, (MR_Integer) 0)));
                  OtherConsIds0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Arm_23, (MR_Integer) 1)));
                  Goal_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), Arm_23, (MR_Integer) 2)));
                }
              }
            }
            if (succeeded)
            {
              MR_Word TypeCtorInfo_94_94;
              MR_Word AllConsIds0_26;
              MR_Word AllConsIds_28;
              MR_Word Var_41;
              MR_Word Var_27;

              {
                AllConsIds0_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllConsIds0_26, 0) = ((MR_Box) (MainConsId0_24));
                MR_hl_field(MR_mktag(1), AllConsIds0_26, 1) = ((MR_Box) (OtherConsIds0_25));
              }
              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[3]));
                MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_6));
                MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ConflictConsIds_9));
              }
              TypeCtorInfo_94_94 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
              mercury__list__filter_4_p_0(TypeCtorInfo_94_94, Var_41, AllConsIds0_26, &Var_27, &AllConsIds_28);
              if ((AllConsIds_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "cons_id_has_one_multi: AllConsIds = []");
                  return;
                }
              }
              else
              {
                MR_Word MainConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), AllConsIds_28, (MR_Integer) 0)));
                MR_Word OtherConsIds_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), AllConsIds_28, (MR_Integer) 1)));
                MR_Word Case_71;

                {
                  Case_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Case_71, 0) = ((MR_Box) (MainConsId_29));
                  MR_hl_field(MR_mktag(0), Case_71, 1) = ((MR_Box) (OtherConsIds_30));
                  MR_hl_field(MR_mktag(0), Case_71, 2) = ((MR_Box) (Goal_74));
                }
                mercury__set_tree234__insert_list_3_p_0(TypeCtorInfo_94_94, OtherConsIds_30, STATE_VARIABLE_AlreadyHandledConsIds_0_33, STATE_VARIABLE_AlreadyHandledConsIds_34);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Cases_32 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_71));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_31));
                }
              }
            }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "misleading cons_id_has_one_multi");
                return;
              }
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__switch_detection__use_context_of_first_disjunct_3_p_0(
  MR_Word Disjuncts_4,
  MR_Word GoalInfo0_5,
  MR_Word * GoalInfo_6)
{
  if ((Disjuncts_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *GoalInfo_6 = GoalInfo0_5;
  else
  {
    MR_Word FirstDisjunct_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Disjuncts_4, (MR_Integer) 0)));
    MR_Word LaterDisjuncts_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Disjuncts_4, (MR_Integer) 1)));
    MR_Word FirstGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstDisjunct_7, (MR_Integer) 1)));
    MR_Word FirstContext_11;
    MR_Word SmallestContext_12;
    MR_Word _FirstGoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstDisjunct_7, (MR_Integer) 0)));

    FirstContext_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(FirstGoalInfo_10);
    check_hlds__switch_detection__gather_smallest_context_3_p_0(LaterDisjuncts_8, FirstContext_11, &SmallestContext_12);
    hlds__hlds_goal__goal_info_set_context_3_p_0(SmallestContext_12, GoalInfo0_5, GoalInfo_6);
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_SmallestContext_3 = STATE_VARIABLE_SmallestContext_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1)));
      MR_Word Context_12;
      MR_Word STATE_VARIABLE_SmallestContext_16_16;
      MR_Word _GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0)));
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SmallestContext_0_2;

      Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
      mercury__term____Compare____context_0_0(&Var_19, Context_12, STATE_VARIABLE_SmallestContext_0_2);
      succeeded = ((MR_Integer) 1 == Var_19);
      if (succeeded)
        STATE_VARIABLE_SmallestContext_16_16 = Context_12;
      else
        STATE_VARIABLE_SmallestContext_16_16 = STATE_VARIABLE_SmallestContext_0_2;
      // direct tailcall eliminated
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
  MR_Word TypeInfo_for_Result_28,
  MR_Word TypeInfo_for_Info_29,
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
  {
    MR_Word Subst_16;
    MR_Word DeconstructSearch_18;
    MR_Word Var_17;

    mercury__map__init_1_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[1], &Subst_16);
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
}

void MR_CALL 
check_hlds__switch_detection__detect_switches_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeCtorInfo_15_15;
    MR_Word Info_4;
    MR_Word ValidPredIds_5;
    MR_Word ValidPredIdSet_6;
    MR_Word PredMap0_7;
    MR_Word PredIdsInfos0_8;
    MR_Word PredIdsInfos_9;
    MR_Word PredMap_10;
    MR_Word AllowMulti_18;
    MR_Word Globals_21;
    MR_Word Allow_22;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Globals_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 304, &Allow_22);
    switch (Allow_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AllowMulti_18 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        AllowMulti_18 = (MR_Integer) 0;
        break;
    }
    {
      Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_4, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11));
      MR_hl_field(MR_mktag(0), Info_4, 1) = ((MR_Box) (AllowMulti_18));
    }
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &ValidPredIds_5);
    TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    ValidPredIdSet_6 = mercury__set_tree234__list_to_set_1_f_0(TypeCtorInfo_14_14, ValidPredIds_5);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredMap0_7);
    TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_14_14, TypeCtorInfo_15_15, PredMap0_7, &PredIdsInfos0_8);
    check_hlds__switch_detection__detect_switches_in_preds_4_p_0(Info_4, ValidPredIdSet_6, PredIdsInfos0_8, &PredIdsInfos_9);
    mercury__map__from_sorted_assoc_list_2_p_0(TypeCtorInfo_14_14, TypeCtorInfo_15_15, PredIdsInfos_9, &PredMap_10);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredMap_10, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_4_p_0(
  MR_Word Info_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word PredIdInfo_11;
      MR_Word PredIdsInfos_12;
      MR_Word PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredIdInfo0_9, (MR_Integer) 0)));
      MR_Word PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredIdInfo0_9, (MR_Integer) 1)));

      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ValidPredIdSet_2, ((MR_Box) (PredId_13)));
      if (succeeded)
      {
        MR_Word PredInfo_15;
        MR_Word NonImportedProcIds_22;

        NonImportedProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo0_14);
        if ((NonImportedProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          PredInfo_15 = PredInfo0_14;
        else
        {
          MR_Word TypeCtorInfo_24_36;
          MR_Word TypeCtorInfo_25_37;
          MR_Word ProcTable0_27;
          MR_Word ProcList0_28;
          MR_Word ProcList_29;
          MR_Word ProcTable_30;
          MR_Word ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0)));
          MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)));

          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Detecting switches in ", PredId_13, ModuleInfo_26);
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_14, &ProcTable0_27);
          TypeCtorInfo_24_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
          TypeCtorInfo_25_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
          mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_24_36, TypeCtorInfo_25_37, ProcTable0_27, &ProcList0_28);
          check_hlds__switch_detection__detect_switches_in_procs_4_p_0(Info_1, NonImportedProcIds_22, ProcList0_28, &ProcList_29);
          mercury__map__from_sorted_assoc_list_2_p_0(TypeCtorInfo_24_36, TypeCtorInfo_25_37, ProcList_29, &ProcTable_30);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_30, PredInfo0_14, &PredInfo_15);
        }
        {
          PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredIdInfo_11, 0) = ((MR_Box) (PredId_13));
          MR_hl_field(MR_mktag(0), PredIdInfo_11, 1) = ((MR_Box) (PredInfo_15));
        }
      }
      else
        PredIdInfo_11 = PredIdInfo0_9;
      check_hlds__switch_detection__detect_switches_in_preds_4_p_0(Info_1, ValidPredIdSet_2, PredIdsInfos0_10, &PredIdsInfos_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredIdInfo_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIdsInfos_12));
      }
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
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ProcIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ProcIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ProcIdInfo_11;
      MR_Word ProcIdsInfos_12;
      MR_Integer ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcIdInfo0_9, (MR_Integer) 0)));
      MR_Word ProcInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcIdInfo0_9, (MR_Integer) 1)));

      succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, ((MR_Box) (ProcId_13)), HeadVar__2_2);
      if (succeeded)
      {
        MR_Word ProcInfo_15;

        check_hlds__switch_detection__detect_switches_in_proc_3_p_0(HeadVar__1_1, ProcInfo0_14, &ProcInfo_15);
        {
          ProcIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcIdInfo_11, 0) = ((MR_Box) (ProcId_13));
          MR_hl_field(MR_mktag(0), ProcIdInfo_11, 1) = ((MR_Box) (ProcInfo_15));
        }
      }
      else
        ProcIdInfo_11 = ProcIdInfo0_9;
      check_hlds__switch_detection__detect_switches_in_procs_4_p_0(HeadVar__1_1, HeadVar__2_2, ProcIdsInfos0_10, &ProcIdsInfos_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcIdInfo_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ProcIdsInfos_12));
      }
    }
  }
}

void MR_CALL 
check_hlds__switch_detection__detect_switches_in_proc_3_p_0(
  MR_Word Info_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * STATE_VARIABLE_ProcInfo_24)
{
  {
    MR_Word TypeCtorInfo_30_30;
    MR_Word ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word AllowMulti_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Word VarTypes_8;
    MR_Word BodyDeletedCallCallees0_10;
    MR_Word LocalInfo0_11;
    MR_Word Goal0_12;
    MR_Word InstMap0_13;
    MR_Word Goal_14;
    MR_Word LocalInfo_15;
    MR_Word Requant_19;
    MR_Word BodyDeletedCallCallees_20;
    MR_Word DeletedCallCallees0_21;
    MR_Word DeletedCallCallees_22;
    MR_Word STATE_VARIABLE_ProcInfo_26_26;
    MR_Word STATE_VARIABLE_ProcInfo_28_28;
    MR_Word GoalExpr0_38;
    MR_Word GoalInfo_39;
    MR_Word GoalExpr_40;
    MR_Word _ModuleInfo_16;
    MR_Word _AllowMulti_17;
    MR_Word _VarTypes_18;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_23, &VarTypes_8);
    TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    BodyDeletedCallCallees0_10 = mercury__set__init_0_f_0(TypeCtorInfo_30_30);
    {
      LocalInfo0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LocalInfo0_11, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), LocalInfo0_11, 1) = ((MR_Box) (AllowMulti_7));
      MR_hl_field(MR_mktag(0), LocalInfo0_11, 2) = ((MR_Box) (VarTypes_8));
      MR_hl_field(MR_mktag(0), LocalInfo0_11, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), LocalInfo0_11, 4) = ((MR_Box) (BodyDeletedCallCallees0_10));
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_23, &Goal0_12);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_0_23, ModuleInfo_6, &InstMap0_13);
    GoalExpr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 0)));
    GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 1)));
    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap0_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GoalInfo_39, GoalExpr0_38, &GoalExpr_40, LocalInfo0_11, &LocalInfo_15);
    {
      Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_14, 0) = ((MR_Box) (GoalExpr_40));
      MR_hl_field(MR_mktag(0), Goal_14, 1) = ((MR_Box) (GoalInfo_39));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, STATE_VARIABLE_ProcInfo_0_23, &STATE_VARIABLE_ProcInfo_26_26);
    _ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalInfo_15, (MR_Integer) 0)));
    _AllowMulti_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalInfo_15, (MR_Integer) 1)));
    _VarTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalInfo_15, (MR_Integer) 2)));
    Requant_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalInfo_15, (MR_Integer) 3)));
    BodyDeletedCallCallees_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalInfo_15, (MR_Integer) 4)));
    switch (Requant_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_ProcInfo_28_28 = STATE_VARIABLE_ProcInfo_26_26;
        break;
      case (MR_Integer) 0:
        {
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_26_26, &STATE_VARIABLE_ProcInfo_28_28);
        }
        break;
    }
    hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_ProcInfo_28_28, &DeletedCallCallees0_21);
    mercury__set__union_3_p_0(TypeCtorInfo_30_30, BodyDeletedCallCallees_20, DeletedCallCallees0_21, &DeletedCallCallees_22);
    hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_22, STATE_VARIABLE_ProcInfo_28_28, STATE_VARIABLE_ProcInfo_24);
  }
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
        MR_Word SubGoal0_20 = (MR_Word) MR_body(((MR_Word) GoalExpr0_11), (MR_Integer) 0);
        MR_Word SubGoal_21;

        check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_20, &SubGoal_21, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
        *GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_21);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RHS0_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 1)));
        MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 0)));
        MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 2)));
        MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 3)));
        MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 4)));

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
              MR_Word Modes_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 4)));
              MR_Word LambdaGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 6)));
              MR_Word ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_111, (MR_Integer) 0)));
              MR_Word LambdaGoal_72;
              MR_Word RHS_73;
              MR_Word Vars_144 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 3)));
              MR_Word InstMap1_145;
              MR_Word Var_63 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 0)))) & (MR_Integer) 3);
              MR_Word Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 2)));
              MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 5)));
              MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_111, (MR_Integer) 1)));
              MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_111, (MR_Integer) 2)));
              MR_Word Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_111, (MR_Integer) 3)));
              MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_111, (MR_Integer) 4)));
              MR_Word Var_160;
              MR_Word Var_161;
              MR_Word Var_162;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Word Var_167;
              MR_Word Var_168;
              MR_Word Var_169;
              MR_Word Var_171;
              MR_Word Var_172;
              MR_Word Var_173;
              MR_Word Var_170;

              hlds__instmap__pre_lambda_update_5_p_0(ModuleInfo_71, Vars_144, Modes_68, InstMap0_8, &InstMap1_145);
              check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_145, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), LambdaGoal0_70, &LambdaGoal_72, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
              Var_160 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 0)))) & (MR_Integer) 3);
              Var_161 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_162 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 2)));
              Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 3)));
              Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 4)));
              Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 5)));
              Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_59, (MR_Integer) 6)));
              {
                RHS_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), RHS_73, 0) = ((MR_Box) ((Var_160 | ((((Var_161 << (MR_Integer) 2)) | ((Var_162 << (MR_Integer) 3)))))));
                MR_hl_field(MR_mktag(2), RHS_73, 1) = NULL;
                MR_hl_field(MR_mktag(2), RHS_73, 2) = ((MR_Box) (Var_164));
                MR_hl_field(MR_mktag(2), RHS_73, 3) = ((MR_Box) (Var_165));
                MR_hl_field(MR_mktag(2), RHS_73, 4) = ((MR_Box) (Var_166));
                MR_hl_field(MR_mktag(2), RHS_73, 5) = ((MR_Box) (Var_167));
                MR_hl_field(MR_mktag(2), RHS_73, 6) = ((MR_Box) (LambdaGoal_72));
              }
              Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 0)));
              Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 1)));
              Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 2)));
              Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 3)));
              Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 4)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_169));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_73));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_171));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_172));
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Var_173));
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 0)))) {
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
            MR_Word ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
            MR_Word Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
            MR_Word Goals_19;

            check_hlds__switch_detection__detect_switches_in_conj_5_p_0(InstMap0_8, Goals0_18, &Goals_19, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_17));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_19));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));

            if ((Disjuncts0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__switch_detection_scalar_common_1[8]);
              *STATE_VARIABLE_LocalInfo_112 = STATE_VARIABLE_LocalInfo_0_111;
            }
            else
              check_hlds__switch_detection__detect_switches_in_disj_7_p_0(GoalInfo_10, Disjuncts0_14, InstMap0_8, MaybeRequiredVar_9, GoalExpr_12, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
            MR_Word CanFail_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
            MR_Word Cases0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3)));
            MR_Word Cases_33;

            check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_30, InstMap0_8, Cases0_32, &Cases_33, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_30));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CanFail_31));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_33));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
            MR_Word SubGoal0_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
            MR_Word SubGoal_143;

            switch (MR_tag((MR_Word) Reason_34)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                }
                break;
              case (MR_Integer) 1:
                {
                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                }
                break;
              case (MR_Integer) 2:
                {
                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_34, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word RequiredVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_34, (MR_Integer) 1)));
                      MR_Word Var_123;

                      {
                        Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (RequiredVar_56));
                      }
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, Var_123, SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word RequiredVar_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_34, (MR_Integer) 1)));
                      MR_Word Var_186;
                      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_34, (MR_Integer) 2)));

                      {
                        Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (RequiredVar_185));
                      }
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, Var_186, SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_34, (MR_Integer) 2)));
                      MR_Word Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_34, (MR_Integer) 1)));

                      switch (Var_188) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            SubGoal_143 = SubGoal0_142;
                            *STATE_VARIABLE_LocalInfo_112 = STATE_VARIABLE_LocalInfo_0_111;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_142, &SubGoal_143, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_34));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_143));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
            MR_Word Cond0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
            MR_Word Then0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3)));
            MR_Word Else0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4)));
            MR_Word InstMap1_26;
            MR_Word Cond_27;
            MR_Word Then_28;
            MR_Word Else_29;
            MR_Word STATE_VARIABLE_LocalInfo_132_132;
            MR_Word STATE_VARIABLE_LocalInfo_134_134;

            check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(InstMap0_8, &InstMap1_26, Cond0_23, &Cond_27, STATE_VARIABLE_LocalInfo_0_111, &STATE_VARIABLE_LocalInfo_132_132);
            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap1_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Then0_24, &Then_28, STATE_VARIABLE_LocalInfo_132_132, &STATE_VARIABLE_LocalInfo_134_134);
            check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Else0_25, &Else_29, STATE_VARIABLE_LocalInfo_134_134, STATE_VARIABLE_LocalInfo_112);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_22));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_27));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_28));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_29));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
            MR_Word ShortHand_106;

            switch (MR_tag((MR_Word) ShortHand0_96)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.detect_switches_in_goal_expr\'/7", (MR_String) "bi_implication");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_96, (MR_Integer) 0)));
                  MR_Word Outer_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_96, (MR_Integer) 1)));
                  MR_Word Inner_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_96, (MR_Integer) 2)));
                  MR_Word MaybeOutputVars_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_96, (MR_Integer) 3)));
                  MR_Word MainGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_96, (MR_Integer) 4)));
                  MR_Word OrElseGoals0_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_96, (MR_Integer) 5)));
                  MR_Word OrElseInners_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_96, (MR_Integer) 6)));
                  MR_Word MainGoal_104;
                  MR_Word OrElseGoals_105;
                  MR_Word STATE_VARIABLE_LocalInfo_119_119;

                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MainGoal0_101, &MainGoal_104, STATE_VARIABLE_LocalInfo_0_111, &STATE_VARIABLE_LocalInfo_119_119);
                  check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(InstMap0_8, OrElseGoals0_102, &OrElseGoals_105, STATE_VARIABLE_LocalInfo_119_119, STATE_VARIABLE_LocalInfo_112);
                  {
                    ShortHand_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_106, 0) = ((MR_Box) (GoalType_97));
                    MR_hl_field(MR_mktag(1), ShortHand_106, 1) = ((MR_Box) (Outer_98));
                    MR_hl_field(MR_mktag(1), ShortHand_106, 2) = ((MR_Box) (Inner_99));
                    MR_hl_field(MR_mktag(1), ShortHand_106, 3) = ((MR_Box) (MaybeOutputVars_100));
                    MR_hl_field(MR_mktag(1), ShortHand_106, 4) = ((MR_Box) (MainGoal_104));
                    MR_hl_field(MR_mktag(1), ShortHand_106, 5) = ((MR_Box) (OrElseGoals_105));
                    MR_hl_field(MR_mktag(1), ShortHand_106, 6) = ((MR_Box) (OrElseInners_103));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_107 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_96, (MR_Integer) 0)));
                  MR_Word ResultVar_108 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_96, (MR_Integer) 1)));
                  MR_Word SubGoal0_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_96, (MR_Integer) 2)));
                  MR_Word SubGoal_151;

                  check_hlds__switch_detection__detect_switches_in_goal_6_p_0(InstMap0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SubGoal0_150, &SubGoal_151, STATE_VARIABLE_LocalInfo_0_111, STATE_VARIABLE_LocalInfo_112);
                  {
                    ShortHand_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_106, 0) = ((MR_Box) (MaybeIO_107));
                    MR_hl_field(MR_mktag(2), ShortHand_106, 1) = ((MR_Box) (ResultVar_108));
                    MR_hl_field(MR_mktag(2), ShortHand_106, 2) = ((MR_Box) (SubGoal_151));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_106));
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
  {
    MR_Word TypeCtorInfo_55_55;
    MR_Word NonLocals_14;
    MR_Word VarsToTry_15;
    MR_Word CandidatesCord_16;
    MR_Word Candidates_17;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_LocalInfo_38_38;

    NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_8);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_14, &VarsToTry_15);
    TypeCtorInfo_55_55 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_0;
    Var_37 = mercury__cord__init_0_f_0(TypeCtorInfo_55_55);
    check_hlds__switch_detection__detect_switch_candidates_in_disj_9_p_0(GoalInfo_8, Disjuncts0_9, InstMap0_10, MaybeRequiredVar_11, VarsToTry_15, Var_37, &CandidatesCord_16, STATE_VARIABLE_LocalInfo_0_35, &STATE_VARIABLE_LocalInfo_38_38);
    Candidates_17 = mercury__cord__to_list_1_f_0(TypeCtorInfo_55_55, CandidatesCord_16);
    if ((Candidates_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Disjuncts_18;

      check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(InstMap0_10, Disjuncts0_9, &Disjuncts_18, STATE_VARIABLE_LocalInfo_38_38, STATE_VARIABLE_LocalInfo_36);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_12 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Disjuncts_18));
      }
    }
    else
    {
      MR_Word FirstCandidate_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Candidates_17, (MR_Integer) 0)));
      MR_Word LaterCandidates_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Candidates_17, (MR_Integer) 1)));
      MR_Word BestCandidate_21;
      MR_Word BestRank_25;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_48;
      MR_Word Var_47;

      if ((LaterCandidates_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        BestCandidate_21 = FirstCandidate_19;
      else
        check_hlds__switch_detection__select_best_candidate_switch_3_p_0(LaterCandidates_20, FirstCandidate_19, &BestCandidate_21);
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 0)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 1)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 2)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 3)));
      BestRank_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 4)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 5)));
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
                MR_Word STATE_VARIABLE_LocalInfo_39_39;
                MR_Word Cases_73;
                MR_Word STATE_VARIABLE_LocalInfo_26_76;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_52;
                MR_Word Var_53;

                if ((Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  STATE_VARIABLE_LocalInfo_26_76 = STATE_VARIABLE_LocalInfo_38_38;
                else
                {
                  MR_Word UnreachableCalledProcs_70;
                  MR_Word DeletedCallCallees0_71;
                  MR_Word DeletedCallCallees_72;
                  MR_Word Var_79;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Var_85;
                  MR_Word Var_86;
                  MR_Word Var_87;

                  UnreachableCalledProcs_70 = hlds__goal_util__goals_proc_refs_1_f_0(Var_46);
                  Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 0)));
                  Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 1)));
                  Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 2)));
                  Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 3)));
                  DeletedCallCallees0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 4)));
                  mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, UnreachableCalledProcs_70, DeletedCallCallees0_71, &DeletedCallCallees_72);
                  Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 0)));
                  Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 1)));
                  Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 2)));
                  Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 3)));
                  Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 4)));
                  {
                    STATE_VARIABLE_LocalInfo_26_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 0) = ((MR_Box) (Var_83));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 1) = ((MR_Box) (Var_84));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 2) = ((MR_Box) (Var_85));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 3) = ((MR_Box) (Var_86));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 4) = ((MR_Box) (DeletedCallCallees_72));
                  }
                }
                check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_44, InstMap0_10, Var_45, &Cases_73, STATE_VARIABLE_LocalInfo_26_76, &STATE_VARIABLE_LocalInfo_39_39);
                if ((Cases_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  SwitchGoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__switch_detection_scalar_common_1[8]);
                }
                else
                  {
                    SwitchGoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SwitchGoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), SwitchGoalExpr_28, 1) = ((MR_Box) (Var_44));
                    MR_hl_field(MR_mktag(3), SwitchGoalExpr_28, 2) = ((MR_Box) (Var_48));
                    MR_hl_field(MR_mktag(3), SwitchGoalExpr_28, 3) = ((MR_Box) (Cases_73));
                  }
                Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 0)));
                Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 1)));
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 2)));
                LeftDisjuncts0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 3)));
                Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 4)));
                Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 5)));
                if ((LeftDisjuncts0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *GoalExpr_12 = SwitchGoalExpr_28;
                  *STATE_VARIABLE_LocalInfo_36 = STATE_VARIABLE_LocalInfo_39_39;
                }
                else
                {
                  MR_Word LeftGoal_32;
                  MR_Word LeftDisjuncts_33;
                  MR_Word SwitchGoal_34;
                  MR_Word Var_41;
                  MR_Word Var_42;

                  check_hlds__switch_detection__detect_switches_in_disj_7_p_0(GoalInfo_8, LeftDisjuncts0_29, InstMap0_10, MaybeRequiredVar_11, &LeftGoal_32, STATE_VARIABLE_LocalInfo_39_39, STATE_VARIABLE_LocalInfo_36);
                  {
                    Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (LeftGoal_32));
                    MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (GoalInfo_8));
                  }
                  hlds__hlds_goal__goal_to_disj_list_2_p_0(Var_41, &LeftDisjuncts_33);
                  {
                    SwitchGoal_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SwitchGoal_34, 0) = ((MR_Box) (SwitchGoalExpr_28));
                    MR_hl_field(MR_mktag(0), SwitchGoal_34, 1) = ((MR_Box) (GoalInfo_8));
                  }
                  {
                    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (SwitchGoal_34));
                    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (LeftDisjuncts_33));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_42));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Disjuncts0_9));
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
            MR_Word STATE_VARIABLE_LocalInfo_39_39;
            MR_Word Cases_73;
            MR_Word STATE_VARIABLE_LocalInfo_26_76;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_53;

            if ((Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              STATE_VARIABLE_LocalInfo_26_76 = STATE_VARIABLE_LocalInfo_38_38;
            else
            {
              MR_Word UnreachableCalledProcs_70;
              MR_Word DeletedCallCallees0_71;
              MR_Word DeletedCallCallees_72;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_87;

              UnreachableCalledProcs_70 = hlds__goal_util__goals_proc_refs_1_f_0(Var_46);
              Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 0)));
              Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 1)));
              Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 2)));
              Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 3)));
              DeletedCallCallees0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 4)));
              mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, UnreachableCalledProcs_70, DeletedCallCallees0_71, &DeletedCallCallees_72);
              Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 0)));
              Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 1)));
              Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 2)));
              Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 3)));
              Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_38_38, (MR_Integer) 4)));
              {
                STATE_VARIABLE_LocalInfo_26_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 1) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 2) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 3) = ((MR_Box) (Var_86));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_26_76, 4) = ((MR_Box) (DeletedCallCallees_72));
              }
            }
            check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_44, InstMap0_10, Var_45, &Cases_73, STATE_VARIABLE_LocalInfo_26_76, &STATE_VARIABLE_LocalInfo_39_39);
            if ((Cases_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              SwitchGoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__switch_detection_scalar_common_1[8]);
            }
            else
              {
                SwitchGoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SwitchGoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), SwitchGoalExpr_28, 1) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(3), SwitchGoalExpr_28, 2) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(3), SwitchGoalExpr_28, 3) = ((MR_Box) (Cases_73));
              }
            Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 1)));
            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 2)));
            LeftDisjuncts0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 3)));
            Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 4)));
            Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), BestCandidate_21, (MR_Integer) 5)));
            if ((LeftDisjuncts0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *GoalExpr_12 = SwitchGoalExpr_28;
              *STATE_VARIABLE_LocalInfo_36 = STATE_VARIABLE_LocalInfo_39_39;
            }
            else
            {
              MR_Word LeftGoal_32;
              MR_Word LeftDisjuncts_33;
              MR_Word SwitchGoal_34;
              MR_Word Var_41;
              MR_Word Var_42;

              check_hlds__switch_detection__detect_switches_in_disj_7_p_0(GoalInfo_8, LeftDisjuncts0_29, InstMap0_10, MaybeRequiredVar_11, &LeftGoal_32, STATE_VARIABLE_LocalInfo_39_39, STATE_VARIABLE_LocalInfo_36);
              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (LeftGoal_32));
                MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (GoalInfo_8));
              }
              hlds__hlds_goal__goal_to_disj_list_2_p_0(Var_41, &LeftDisjuncts_33);
              {
                SwitchGoal_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SwitchGoal_34, 0) = ((MR_Box) (SwitchGoalExpr_28));
                MR_hl_field(MR_mktag(0), SwitchGoal_34, 1) = ((MR_Box) (GoalInfo_8));
              }
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (SwitchGoal_34));
                MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (LeftDisjuncts_33));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_42));
              }
            }
          }
          break;
      }
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
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word STATE_VARIABLE_LocalInfo_19_19;
    MR_Word GoalExpr0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0)));
    MR_Word GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1)));
    MR_Word GoalExpr_30;

    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GoalInfo_29, GoalExpr0_28, &GoalExpr_30, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_19_19);
    {
      Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_13, 0) = ((MR_Box) (GoalExpr_30));
      MR_hl_field(MR_mktag(0), Goal_13, 1) = ((MR_Box) (GoalInfo_29));
    }
    check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(InstMap_1, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_19_19, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_14));
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
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word InstMap1_16;
    MR_Word STATE_VARIABLE_LocalInfo_19_19;
    MR_Word GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0)));
    MR_Word GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1)));
    MR_Word GoalExpr_31;

    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap0_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GoalInfo_30, GoalExpr0_29, &GoalExpr_31, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_19_19);
    {
      Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_13, 0) = ((MR_Box) (GoalExpr_31));
      MR_hl_field(MR_mktag(0), Goal_13, 1) = ((MR_Box) (GoalInfo_30));
    }
    hlds__goal_util__update_instmap_3_p_0(Goal0_11, InstMap0_1, &InstMap1_16);
    check_hlds__switch_detection__detect_switches_in_conj_5_p_0(InstMap1_16, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_19_19, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_14));
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
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_LocalInfo_6 = STATE_VARIABLE_LocalInfo_0_5;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 0)));
    MR_Word OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 1)));
    MR_Word Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 2)));
    MR_Word VarTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 2)));
    MR_Word ModuleInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 0)));
    MR_Word VarType_24;
    MR_Word InstMap1_25;
    MR_Word ModuleInfo_26;
    MR_Word Goal_27;
    MR_Word STATE_VARIABLE_LocalInfo_30_30;
    MR_Word STATE_VARIABLE_LocalInfo_32_32;
    MR_Word GoalExpr0_54;
    MR_Word GoalInfo_55;
    MR_Word GoalExpr_56;
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 1)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 3)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 4)));
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_42;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_22, Var_1, &VarType_24);
    hlds__instmap__bind_var_to_functors_8_p_0(Var_1, VarType_24, MainConsId_19, OtherConsIds_20, InstMap0_2, &InstMap1_25, ModuleInfo0_23, &ModuleInfo_26);
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 0)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 1)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 2)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 3)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 4)));
    {
      STATE_VARIABLE_LocalInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_30_30, 0) = ((MR_Box) (ModuleInfo_26));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_30_30, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_30_30, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_30_30, 3) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_30_30, 4) = ((MR_Box) (Var_46));
    }
    GoalExpr0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_21, (MR_Integer) 0)));
    GoalInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_21, (MR_Integer) 1)));
    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap1_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GoalInfo_55, GoalExpr0_54, &GoalExpr_56, STATE_VARIABLE_LocalInfo_30_30, &STATE_VARIABLE_LocalInfo_32_32);
    {
      Goal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_27, 0) = ((MR_Box) (GoalExpr_56));
      MR_hl_field(MR_mktag(0), Goal_27, 1) = ((MR_Box) (GoalInfo_55));
    }
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_16, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(MR_mktag(0), Case_16, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(MR_mktag(0), Case_16, 2) = ((MR_Box) (Goal_27));
    }
    check_hlds__switch_detection__detect_switches_in_cases_6_p_0(Var_1, InstMap0_2, Cases0_15, &Cases_17, STATE_VARIABLE_LocalInfo_32_32, STATE_VARIABLE_LocalInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_17));
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
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_LocalInfo_5 = STATE_VARIABLE_LocalInfo_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word STATE_VARIABLE_LocalInfo_19_19;
    MR_Word GoalExpr0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0)));
    MR_Word GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1)));
    MR_Word GoalExpr_30;

    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GoalInfo_29, GoalExpr0_28, &GoalExpr_30, STATE_VARIABLE_LocalInfo_0_4, &STATE_VARIABLE_LocalInfo_19_19);
    {
      Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_13, 0) = ((MR_Box) (GoalExpr_30));
      MR_hl_field(MR_mktag(0), Goal_13, 1) = ((MR_Box) (GoalInfo_29));
    }
    check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(InstMap_1, Goals0_12, &Goals_14, STATE_VARIABLE_LocalInfo_19_19, STATE_VARIABLE_LocalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_14));
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
  {
    MR_Word GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0)));
    MR_Word GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1)));
    MR_Word GoalExpr_13;

    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(STATE_VARIABLE_InstMap_0_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GoalInfo_12, GoalExpr0_11, &GoalExpr_13, STATE_VARIABLE_LocalInfo_0_16, STATE_VARIABLE_LocalInfo_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_12));
    }
    hlds__goal_util__update_instmap_3_p_0(Goal0_8, STATE_VARIABLE_InstMap_0_14, STATE_VARIABLE_InstMap_15);
  }
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
  {
    MR_Word GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
    MR_Word GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));
    MR_Word GoalExpr_14;

    check_hlds__switch_detection__detect_switches_in_goal_expr_7_p_0(InstMap0_7, MaybeRequiredVar_8, GoalInfo_13, GoalExpr0_12, &GoalExpr_14, STATE_VARIABLE_LocalInfo_0_15, STATE_VARIABLE_LocalInfo_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_13));
    }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_BestCandidate_3 = STATE_VARIABLE_BestCandidate_0_2;
    else
    {
      MR_Word Candidate_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Candidates_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Result_10;
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_7, (MR_Integer) 4)));
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_BestCandidate_0_2, (MR_Integer) 4)));
      MR_Word STATE_VARIABLE_BestCandidate_15_15;
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_7, (MR_Integer) 0)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_7, (MR_Integer) 1)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_7, (MR_Integer) 2)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_7, (MR_Integer) 3)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Candidate_7, (MR_Integer) 5)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_BestCandidate_0_2, (MR_Integer) 0)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_BestCandidate_0_2, (MR_Integer) 1)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_BestCandidate_0_2, (MR_Integer) 2)));
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_BestCandidate_0_2, (MR_Integer) 3)));
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_BestCandidate_0_2, (MR_Integer) 5)));
      MR_Integer CastX_60 = (MR_Integer) Var_13;
      MR_Integer CastY_61 = (MR_Integer) Var_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BestCandidate_0_2;

      succeeded = (CastX_60 == CastY_61);
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
              MR_Integer Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0)));

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
                    MR_Integer ArgY1_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0)));

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Result_10, Var_64, ArgY1_29);
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
              MR_Integer Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_13, (MR_Integer) 0)));

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
                    MR_Integer ArgY1_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_14, (MR_Integer) 0)));

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Result_10, Var_65, ArgY1_41);
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
    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_LocalInfo_9 = STATE_VARIABLE_LocalInfo_0_8;
      *STATE_VARIABLE_Candidates_7 = STATE_VARIABLE_Candidates_0_6;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word ModuleInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 0)));
      MR_Word VarInst0_29;
      MR_Word STATE_VARIABLE_Candidates_40_40;
      MR_Word STATE_VARIABLE_LocalInfo_41_41;
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 1)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 2)));
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 3)));
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 4)));
      MR_Word Candidate_34;
      MR_Word STATE_VARIABLE_LocalInfo_39_39;
      MR_Word Left_30;
      MR_Word Cases_31;
      MR_Word VarTypes_32;
      MR_Word VarType_33;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
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
          Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_39_39, (MR_Integer) 0)));
          Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_39_39, (MR_Integer) 1)));
          VarTypes_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_39_39, (MR_Integer) 2)));
          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_39_39, (MR_Integer) 3)));
          Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_39_39, (MR_Integer) 4)));
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_32, Var_24, &VarType_33);
          succeeded = check_hlds__switch_detection__is_candidate_switch_8_p_0(ModuleInfo_28, HeadVar__4_4, Var_24, VarType_33, VarInst0_29, Cases_31, Left_30, &Candidate_34);
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_LocalInfo_41_41 = STATE_VARIABLE_LocalInfo_39_39;
        STATE_VARIABLE_Candidates_40_40 = mercury__cord__snoc_2_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_candidate_switch_0, STATE_VARIABLE_Candidates_0_6, ((MR_Box) (Candidate_34)));
      }
      else
      {
        STATE_VARIABLE_LocalInfo_41_41 = STATE_VARIABLE_LocalInfo_0_8;
        STATE_VARIABLE_Candidates_40_40 = STATE_VARIABLE_Candidates_0_6;
      }
      // direct tailcall eliminated
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

static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Cases_32;
    MR_Word conv4_STATE_VARIABLE_AlreadyHandledConsIds_34;

    check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_STATE_VARIABLE_Cases_32, ((MR_Word) wrapper_arg_4), &conv4_STATE_VARIABLE_AlreadyHandledConsIds_34);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Cases_32));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_AlreadyHandledConsIds_34));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Cases_32;
    MR_Word conv0_STATE_VARIABLE_AlreadyHandledConsIds_34;

    check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Cases_32, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_AlreadyHandledConsIds_34);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Cases_32));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyHandledConsIds_34));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
    MR_Word CasesTable0_14;
    MR_Word Left1_15;
    MR_Word CasesTable1_16;
    MR_Word Var_23;
    MR_Word Var_24;

    Var_23 = mercury__map__init_0_f_0(TypeCtorInfo_41_41, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
    Var_24 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_41_41);
    {
      CasesTable0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CasesTable0_14, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), CasesTable0_14, 1) = ((MR_Box) (Var_24));
    }
    check_hlds__switch_detection__partition_disj_trial_6_p_0(Disjuncts0_8, Var_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Left1_15, CasesTable0_14, &CasesTable1_16);
    if ((Left1_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_15_58;
      MR_Word TypeCtorInfo_16_59;
      MR_Word TypeInfo_22_65;
      MR_Word TypeInfo_23_66;
      MR_Word TypeInfo_24_67;
      MR_Word TypeCtorInfo_25_68;
      MR_Integer Var_30;
      MR_Word CasesMap_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable1_16, (MR_Integer) 0)));
      MR_Word CasesMap_50;
      MR_Word ConflictIds_51;
      MR_Word CasesAssocList_52;
      MR_Word Cases_53;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable1_16, (MR_Integer) 1)));
      MR_Word _AlreadyHandledConsIds_54;
      MR_Box conv3_Cases_53;
      MR_Box conv2__AlreadyHandledConsIds_54;

      Var_30 = mercury__map__count_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, CasesMap_43);
      succeeded = (Var_30 >= (MR_Integer) 1);
      if (succeeded)
      {
        *Left_11 = Left1_15;
        CasesMap_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable1_16, (MR_Integer) 0)));
        ConflictIds_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable1_16, (MR_Integer) 1)));
        TypeCtorInfo_15_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
        TypeCtorInfo_16_59 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;
        mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_15_58, TypeCtorInfo_16_59, CasesMap_50, &CasesAssocList_52);
        Var_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (GoalInfo_10));
          MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (ConflictIds_51));
        }
        Var_57 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_15_58);
        TypeInfo_22_65 = (MR_Word) &check_hlds__switch_detection_scalar_common_2[0];
        TypeInfo_23_66 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
        TypeInfo_24_67 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
        mercury__list__foldl2_6_p_0(TypeInfo_22_65, TypeInfo_23_66, TypeInfo_24_67, Var_55, CasesAssocList_52, ((MR_Box) (Var_56)), &conv3_Cases_53, ((MR_Box) (Var_57)), &conv2__AlreadyHandledConsIds_54);
        Cases_53 = ((MR_Word) conv3_Cases_53);
        _AlreadyHandledConsIds_54 = ((MR_Word) conv2__AlreadyHandledConsIds_54);
        TypeCtorInfo_25_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
        mercury__list__sort_2_p_0(TypeCtorInfo_25_68, Cases_53, Cases_12);
        *STATE_VARIABLE_LocalInfo_22 = STATE_VARIABLE_LocalInfo_0_21;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word AllowMulti_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 1)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 0)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 2)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 3)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 4)));
      MR_Word CasesTable_20;

      succeeded = check_hlds__switch_detection__expand_sub_disjs_5_p_0(AllowMulti_19, Var_9, Left1_15, CasesTable1_16, &CasesTable_20);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_15_84;
        MR_Word TypeCtorInfo_16_85;
        MR_Word TypeInfo_22_91;
        MR_Word TypeInfo_23_92;
        MR_Word TypeInfo_24_93;
        MR_Word TypeCtorInfo_25_94;
        MR_Integer Var_26;
        MR_Word Var_29;
        MR_Word CasesMap_69;
        MR_Word CasesMap_76;
        MR_Word ConflictIds_77;
        MR_Word CasesAssocList_78;
        MR_Word Cases_79;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_70;
        MR_Word _AlreadyHandledConsIds_80;
        MR_Box conv7_Cases_79;
        MR_Box conv6__AlreadyHandledConsIds_80;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_39;

        *Left_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        CasesMap_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable_20, (MR_Integer) 0)));
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable_20, (MR_Integer) 1)));
        Var_26 = mercury__map__count_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, CasesMap_69);
        succeeded = (Var_26 >= (MR_Integer) 1);
        if (succeeded)
        {
          CasesMap_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable_20, (MR_Integer) 0)));
          ConflictIds_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable_20, (MR_Integer) 1)));
          TypeCtorInfo_15_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
          TypeCtorInfo_16_85 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;
          mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_15_84, TypeCtorInfo_16_85, CasesMap_76, &CasesAssocList_78);
          Var_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (GoalInfo_10));
            MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (ConflictIds_77));
          }
          Var_83 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_15_84);
          TypeInfo_22_91 = (MR_Word) &check_hlds__switch_detection_scalar_common_2[0];
          TypeInfo_23_92 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
          TypeInfo_24_93 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
          mercury__list__foldl2_6_p_0(TypeInfo_22_91, TypeInfo_23_92, TypeInfo_24_93, Var_81, CasesAssocList_78, ((MR_Box) (Var_82)), &conv7_Cases_79, ((MR_Box) (Var_83)), &conv6__AlreadyHandledConsIds_80);
          Cases_79 = ((MR_Word) conv7_Cases_79);
          _AlreadyHandledConsIds_80 = ((MR_Word) conv6__AlreadyHandledConsIds_80);
          TypeCtorInfo_25_94 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
          mercury__list__sort_2_p_0(TypeCtorInfo_25_94, Cases_79, Cases_12);
          Var_29 = (MR_Integer) 0;
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 0)));
          Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 1)));
          Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 2)));
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 3)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 4)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_LocalInfo_22 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        *Left_11 = Left1_15;
        *Cases_12 = check_hlds__switch_detection__convert_cases_table_2_f_0(GoalInfo_10, CasesTable1_16);
        *STATE_VARIABLE_LocalInfo_22 = STATE_VARIABLE_LocalInfo_0_21;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
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
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_CasesTable_5 = STATE_VARIABLE_CasesTable_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word LeftGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word LeftGoals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_CasesTable_18_18;
      MR_Word GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftGoal_13, (MR_Integer) 0)));
      MR_Word GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftGoal_13, (MR_Integer) 1)));
      MR_Word GoalInfo_28;
      MR_Word SubGoals_29;
      MR_Word Var_32;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_CasesTable_0_4;

      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 16, GoalInfo0_27, &GoalInfo_28);
      succeeded = ((((MR_tag((MR_Word) GoalExpr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 1)));
        SubGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 2)));
        succeeded = (Var_32 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(HeadVar__1_1, HeadVar__2_2, SubGoals_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GoalInfo_28, STATE_VARIABLE_CasesTable_0_4, &STATE_VARIABLE_CasesTable_18_18);
      }
      else
      {
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_38;
        MR_Word Var_30;

        succeeded = ((((MR_tag((MR_Word) GoalExpr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 1)));
          Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (LeftGoal_13));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
          }
          succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_35, Var_36, GoalInfo_28, STATE_VARIABLE_CasesTable_0_4, &STATE_VARIABLE_CasesTable_18_18);
        }
      }
      if (succeeded)
      {
        // direct tailcall eliminated
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_10;

    check_hlds__switch_detection__create_expanded_conjunction_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv2_Goal_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_10));
  }
}

static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_CasesTable_8;

    check_hlds__switch_detection__add_multi_entry_for_cons_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_CasesTable_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_CasesTable_8));
  }
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
    MR_bool succeeded = ((MR_tag((MR_Word) ConjGoals_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word FirstGoal_14;
    MR_Word LaterGoals_15;
    MR_Word FirstGoalExpr_16;
    MR_Word FirstGoalInfo_17;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      FirstGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConjGoals_10, (MR_Integer) 0)));
      LaterGoals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConjGoals_10, (MR_Integer) 1)));
      FirstGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstGoal_14, (MR_Integer) 0)));
      FirstGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstGoal_14, (MR_Integer) 1)));
      if (((MR_tag((MR_Word) FirstGoalExpr_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word STATE_VARIABLE_RevUnifies_45_45;
        MR_Word next_value_of_ConjGoals_10;
        MR_Word next_value_of_STATE_VARIABLE_RevUnifies_0_36;

        {
          STATE_VARIABLE_RevUnifies_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnifies_45_45, 0) = ((MR_Box) (FirstGoal_14));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnifies_45_45, 1) = ((MR_Box) (STATE_VARIABLE_RevUnifies_0_36));
        }
        // direct tailcall eliminated
        next_value_of_ConjGoals_10 = LaterGoals_15;
        next_value_of_STATE_VARIABLE_RevUnifies_0_36 = STATE_VARIABLE_RevUnifies_45_45;
        ConjGoals_10 = next_value_of_ConjGoals_10;
        STATE_VARIABLE_RevUnifies_0_36 = next_value_of_STATE_VARIABLE_RevUnifies_0_36;
        continue;
      }
      else
      if (((((MR_tag((MR_Word) FirstGoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FirstGoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word Disjuncts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), FirstGoalExpr_16, (MR_Integer) 1)));
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word SortedDisjConsIds_29;
        MR_Word MainConsId_30;
        MR_Word OtherConsIds_31;
        MR_Word TypeCtorInfo_47_47;
        MR_Word TypeCtorInfo_48_48;
        MR_Word TypeInfo_22_85;
        MR_Word NonLocals_26;
        MR_Word OtherNonLocals_27;
        MR_Word DisjConsIds_28;
        MR_Word Goal_69;
        MR_Word Goals_70;
        MR_Word ConsId_71;
        MR_Word ConsIds_72;
        MR_Word GoalExpr_73;
        MR_Word UnifyInfo0_78;
        MR_Word Var_84;
        MR_Word _GoalInfo_74;
        MR_Word _LHS_75;
        MR_Word _RHS_76;
        MR_Word Var_77;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;

        succeeded = ((MR_tag((MR_Word) Disjuncts_23)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Disjuncts_23, (MR_Integer) 0)));
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Disjuncts_23, (MR_Integer) 1)));
          succeeded = (AllowMulti_8 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_RevUnifies_0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(FirstGoalInfo_17);
              TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              parse_tree__set_of_var__delete_3_p_0(TypeCtorInfo_47_47, Var_9, NonLocals_26, &OtherNonLocals_27);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_47_47, OtherNonLocals_27);
              if (succeeded)
              {
                Goal_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Disjuncts_23, (MR_Integer) 0)));
                Goals_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Disjuncts_23, (MR_Integer) 1)));
                GoalExpr_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_69, (MR_Integer) 0)));
                _GoalInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_69, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) GoalExpr_73)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  _LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_73, (MR_Integer) 0)));
                  _RHS_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_73, (MR_Integer) 1)));
                  Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_73, (MR_Integer) 2)));
                  UnifyInfo0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_73, (MR_Integer) 3)));
                  Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_73, (MR_Integer) 4)));
                  succeeded = ((MR_tag((MR_Word) UnifyInfo0_78)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_78, (MR_Integer) 0)));
                    ConsId_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_78, (MR_Integer) 1)));
                    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_78, (MR_Integer) 2)));
                    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_78, (MR_Integer) 3)));
                    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_78, (MR_Integer) 4)));
                    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_78, (MR_Integer) 5)));
                    TypeInfo_22_85 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_85, ((MR_Box) (Var_9)), ((MR_Box) (Var_84)));
                    if (succeeded)
                    {
                      succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(Var_9, Goals_70, &ConsIds_72);
                      if (succeeded)
                      {
                        TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                        {
                          DisjConsIds_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), DisjConsIds_28, 0) = ((MR_Box) (ConsId_71));
                          MR_hl_field(MR_mktag(1), DisjConsIds_28, 1) = ((MR_Box) (ConsIds_72));
                        }
                        mercury__list__sort_2_p_0(TypeCtorInfo_48_48, DisjConsIds_28, &SortedDisjConsIds_29);
                        succeeded = ((MR_tag((MR_Word) SortedDisjConsIds_29)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          MainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), SortedDisjConsIds_29, (MR_Integer) 0)));
                          OtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), SortedDisjConsIds_29, (MR_Integer) 1)));
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
            MR_Word Var_39;
            MR_Word Arm_59;
            MR_Word Var_60;
            MR_Box conv1_STATE_VARIABLE_CasesTable_38;

            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_39, 2) = ((MR_Box) (LaterGoals_15));
            }
            {
              SharedGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SharedGoal_32, 0) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(0), SharedGoal_32, 1) = ((MR_Box) (GoalInfo_12));
            }
            {
              Arm_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Arm_59, 0) = ((MR_Box) (MainConsId_30));
              MR_hl_field(MR_mktag(1), Arm_59, 1) = ((MR_Box) (OtherConsIds_31));
              MR_hl_field(MR_mktag(1), Arm_59, 2) = ((MR_Box) (SharedGoal_32));
            }
            {
              Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Arm_59));
            }
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0, Var_60, SortedDisjConsIds_29, ((MR_Box) (STATE_VARIABLE_CasesTable_0_37)), &conv1_STATE_VARIABLE_CasesTable_38);
            *STATE_VARIABLE_CasesTable_38 = ((MR_Word) conv1_STATE_VARIABLE_CasesTable_38);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word TypeCtorInfo_49_49 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            MR_Word Unifies_33;
            MR_Word ExpandedConjunctions_34;
            MR_Word Left_35;
            MR_Word Var_42;

            mercury__list__reverse_2_p_0(TypeCtorInfo_49_49, STATE_VARIABLE_RevUnifies_0_36, &Unifies_33);
            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Unifies_33));
              MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (LaterGoals_15));
              MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (GoalInfo_12));
            }
            mercury__list__map_3_p_0(TypeCtorInfo_49_49, TypeCtorInfo_49_49, Var_42, Disjuncts_23, &ExpandedConjunctions_34);
            check_hlds__switch_detection__partition_disj_trial_6_p_0(ExpandedConjunctions_34, Var_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Left_35, STATE_VARIABLE_CasesTable_0_37, STATE_VARIABLE_CasesTable_38);
            succeeded = (Left_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goals_10;
    MR_Word conv0_Result_12;

    check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_Goals_10, ((MR_Word) wrapper_arg_4), &conv0_Result_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_Goals_10));
    *wrapper_arg_5 = ((MR_Box) (conv0_Result_12));
  }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_CasesTable_6 = STATE_VARIABLE_CasesTable_0_5;
      *STATE_VARIABLE_Left_4 = STATE_VARIABLE_Left_0_3;
    }
    else
    {
      MR_Word Disjunct0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Disjuncts0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Disjunct_19;
      MR_Word MaybeConsId_20;
      MR_Word STATE_VARIABLE_Left_31_31;
      MR_Word STATE_VARIABLE_CasesTable_32_32;
      MR_Word Subst_57;
      MR_Word Var_58;
      MR_Word DeconstructSearch_59;
      MR_Box conv3_MaybeConsId_20;
      MR_Box conv2_Var_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Left_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CasesTable_0_5;

      mercury__map__init_1_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[1], &Subst_57);
      check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(HeadVar__2_2, (MR_Word) &check_hlds__switch_detection_scalar_common_2[3], Disjunct0_14, &Disjunct_19, Subst_57, &Var_58, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_MaybeConsId_20, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_21, &DeconstructSearch_59);
      MaybeConsId_20 = ((MR_Word) conv3_MaybeConsId_20);
      if ((MaybeConsId_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          STATE_VARIABLE_Left_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Left_31_31, 0) = ((MR_Box) (Disjunct0_14));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Left_31_31, 1) = ((MR_Box) (STATE_VARIABLE_Left_0_3));
        }
        STATE_VARIABLE_CasesTable_32_32 = STATE_VARIABLE_CasesTable_0_5;
      }
      else
      {
        MR_Word ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_20, (MR_Integer) 0)));
        MR_Word CasesMap0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CasesTable_0_5, (MR_Integer) 0)));
        MR_Word ConflictConsIds0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CasesTable_0_5, (MR_Integer) 1)));
        MR_Word Arm_73;
        MR_Word ConflictConsIds_78;
        MR_Word CasesMap_81;
        MR_Word Entry0_74;
        MR_Box conv4_Entry0_74;

        {
          Arm_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Arm_73, 0) = ((MR_Box) (ConsId_23));
          MR_hl_field(MR_mktag(0), Arm_73, 1) = ((MR_Box) (Disjunct_19));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, CasesMap0_71, ((MR_Box) (ConsId_23)), &conv4_Entry0_74);
        if (succeeded)
        {
          Entry0_74 = ((MR_Word) conv4_Entry0_74);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word State0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Entry0_74, (MR_Integer) 0)));
          MR_Word Arms0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Entry0_74, (MR_Integer) 1)));
          MR_Word State_77;
          MR_Word Arms_79;
          MR_Word Entry_80;

          switch (State0_75) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                State_77 = (MR_Integer) 0;
                ConflictConsIds_78 = ConflictConsIds0_72;
              }
              break;
            case (MR_Integer) 2:
              {
                State_77 = (MR_Integer) 2;
                ConflictConsIds_78 = ConflictConsIds0_72;
              }
              break;
            case (MR_Integer) 1:
              {
                State_77 = (MR_Integer) 2;
                mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (ConsId_23)), ConflictConsIds0_72, &ConflictConsIds_78);
              }
              break;
          }
          Arms_79 = mercury__cord__snoc_2_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0, Arms0_76, ((MR_Box) (Arm_73)));
          {
            Entry_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_80, 0) = ((MR_Box) (State_77));
            MR_hl_field(MR_mktag(0), Entry_80, 1) = ((MR_Box) (Arms_79));
          }
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, ((MR_Box) (ConsId_23)), ((MR_Box) (Entry_80)), CasesMap0_71, &CasesMap_81);
        }
        else
        {
          MR_Word Arms_83;
          MR_Word Entry_84;

          Arms_83 = mercury__cord__singleton_1_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0, ((MR_Box) (Arm_73)));
          {
            Entry_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_84, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Entry_84, 1) = ((MR_Box) (Arms_83));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, ((MR_Box) (ConsId_23)), ((MR_Box) (Entry_84)), CasesMap0_71, &CasesMap_81);
          ConflictConsIds_78 = ConflictConsIds0_72;
        }
        {
          STATE_VARIABLE_CasesTable_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CasesTable_32_32, 0) = ((MR_Box) (CasesMap_81));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CasesTable_32_32, 1) = ((MR_Box) (ConflictConsIds_78));
        }
        STATE_VARIABLE_Left_31_31 = STATE_VARIABLE_Left_0_3;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Disjuncts0_15;
      next_value_of_STATE_VARIABLE_Left_0_3 = STATE_VARIABLE_Left_31_31;
      next_value_of_STATE_VARIABLE_CasesTable_0_5 = STATE_VARIABLE_CasesTable_32_32;
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
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__11_11 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    *STATE_VARIABLE_Result_8 = STATE_VARIABLE_Result_0_7;
    *STATE_VARIABLE_Subst_6 = STATE_VARIABLE_Subst_0_5;
  }
  else
  {
    MR_Word Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_28));
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
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 0)));
    MR_Word GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 1)));

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
          MR_Word LHS_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_20, (MR_Integer) 0)));
          MR_Word RHS_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_20, (MR_Integer) 1)));
          MR_Word UnifyInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_20, (MR_Integer) 3)));
          MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_20, (MR_Integer) 2)));
          MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_20, (MR_Integer) 4)));
          MR_Word TypeCtorInfo_120_120;
          MR_Word TypeInfo_125_125;
          MR_Word UnifyVar_37;
          MR_Word SubstVar_43;
          MR_Word SubstUnifyVar_44;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;

          succeeded = ((MR_tag((MR_Word) UnifyInfo0_35)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            UnifyVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_35, (MR_Integer) 0)));
            Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_35, (MR_Integer) 1)));
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_35, (MR_Integer) 2)));
            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_35, (MR_Integer) 3)));
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_35, (MR_Integer) 4)));
            Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_35, (MR_Integer) 5)));
            Var_99 = mercury__term__context_init_0_f_0();
            {
              Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_12));
              MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_99));
            }
            Var_100 = mercury__term__context_init_0_f_0();
            TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            mercury__term__apply_rec_substitution_in_term_3_p_0(TypeCtorInfo_120_120, STATE_VARIABLE_Subst_0_87, Var_97, &Var_98);
            succeeded = ((MR_tag((MR_Word) Var_98)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              SubstVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_98, (MR_Integer) 0)));
              Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_98, (MR_Integer) 1)));
              succeeded = mercury__term____Unify____context_0_0(Var_100, Var_121);
              if (succeeded)
              {
                Var_103 = mercury__term__context_init_0_f_0();
                {
                  Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (UnifyVar_37));
                  MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_103));
                }
                Var_104 = mercury__term__context_init_0_f_0();
                mercury__term__apply_rec_substitution_in_term_3_p_0(TypeCtorInfo_120_120, STATE_VARIABLE_Subst_0_87, Var_101, &Var_102);
                succeeded = ((MR_tag((MR_Word) Var_102)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  SubstUnifyVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_102, (MR_Integer) 0)));
                  Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_102, (MR_Integer) 1)));
                  succeeded = mercury__term____Unify____context_0_0(Var_104, Var_122);
                  if (succeeded)
                  {
                    TypeInfo_125_125 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_125_125, ((MR_Box) (SubstVar_43)), ((MR_Box) (SubstUnifyVar_44)));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word Goals_45;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ProcessUnify_13, (MR_Integer) 1)));
            MR_Box conv1_Goals_45;

            func_0(((MR_Box) ProcessUnify_13), ((MR_Box) (Var_12)), ((MR_Box) (Goal0_14)), &conv1_Goals_45, STATE_VARIABLE_Result_0_89, STATE_VARIABLE_Result_90, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92);
            Goals_45 = ((MR_Word) conv1_Goals_45);
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0)))) {
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
              MR_Word ConjType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1)));
              MR_Word SubGoals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2)));

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
                  if ((SubGoals0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                    MR_Word Var_111;

                    check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_12, ProcessUnify_13, SubGoals0_28, &SubGoals_31, STATE_VARIABLE_Subst_0_87, STATE_VARIABLE_Subst_88, STATE_VARIABLE_Result_0_89, STATE_VARIABLE_Result_90, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92, FoundDeconstruct_19);
                    {
                      Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (ConjType_27));
                      MR_hl_field(MR_mktag(3), Var_111, 2) = ((MR_Box) (SubGoals_31));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_15 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_21));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1)));
              MR_Word SubGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2)));
              MR_Word Var_112;
              MR_Word Var_24;

              succeeded = ((((MR_tag((MR_Word) Reason0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason0_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_22, (MR_Integer) 1)));
                Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_22, (MR_Integer) 2)));
                succeeded = (Var_112 == (MR_Integer) 1);
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
                MR_Word Var_116;
                MR_Word Var_26;

                check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_12, ProcessUnify_13, SubGoal0_23, &SubGoal_25, STATE_VARIABLE_Subst_0_87, STATE_VARIABLE_Subst_88, STATE_VARIABLE_Result_0_89, STATE_VARIABLE_Result_90, STATE_VARIABLE_Info_0_91, STATE_VARIABLE_Info_92, FoundDeconstruct_19);
                succeeded = (*FoundDeconstruct_19 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) Reason0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason0_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_22, (MR_Integer) 1)));
                    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_22, (MR_Integer) 2)));
                    succeeded = (Var_116 == (MR_Integer) 2);
                  }
                }
                if (succeeded)
                  *Goal_15 = SubGoal_25;
                else
                {
                  MR_Word Var_117;

                  {
                    Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (Reason0_22));
                    MR_hl_field(MR_mktag(3), Var_117, 2) = ((MR_Box) (SubGoal_25));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_15 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_117));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_21));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ShortHand0_74)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.find_bind_var_2\'/11", (MR_String) "bi_implication");
                      return;
                    }
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
}

static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ConsId_8;
      MR_Word ConsIds_9;
      MR_Word GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
      MR_Word UnifyInfo0_15;
      MR_Word Var_21;
      MR_Word _GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
      MR_Word _LHS_12;
      MR_Word _RHS_13;
      MR_Word Var_14;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) GoalExpr_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        _LHS_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0)));
        _RHS_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1)));
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 2)));
        UnifyInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4)));
        succeeded = ((MR_tag((MR_Word) UnifyInfo0_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_15, (MR_Integer) 0)));
          ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_15, (MR_Integer) 1)));
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_15, (MR_Integer) 2)));
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_15, (MR_Integer) 3)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_15, (MR_Integer) 4)));
          Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyInfo0_15, (MR_Integer) 5)));
          TypeInfo_22_22 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (HeadVar__1_1)), ((MR_Box) (Var_21)));
          if (succeeded)
          {
            succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(HeadVar__1_1, Goals_7, &ConsIds_9);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_8));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsIds_9));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Cases_32;
    MR_Word conv0_STATE_VARIABLE_AlreadyHandledConsIds_34;

    check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Cases_32, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_AlreadyHandledConsIds_34);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Cases_32));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyHandledConsIds_34));
  }
}

static MR_Word MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0(
  MR_Word GoalInfo_4,
  MR_Word CasesTable_5)
{
  {
    MR_Word SortedCases_6;
    MR_Word TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
    MR_Word CasesMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable_5, (MR_Integer) 0)));
    MR_Word ConflictIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CasesTable_5, (MR_Integer) 1)));
    MR_Word CasesAssocList_9;
    MR_Word Cases_10;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word _AlreadyHandledConsIds_11;
    MR_Box conv3_Cases_10;
    MR_Box conv2__AlreadyHandledConsIds_11;

    mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_15_15, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, CasesMap_7, &CasesAssocList_9);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__switch_detection__convert_cases_table_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (GoalInfo_4));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ConflictIds_8));
    }
    Var_14 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_15_15);
    mercury__list__foldl2_6_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[2], (MR_Word) &check_hlds__switch_detection_scalar_common_1[3], Var_12, CasesAssocList_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_Cases_10, ((MR_Box) (Var_14)), &conv2__AlreadyHandledConsIds_11);
    Cases_10 = ((MR_Word) conv3_Cases_10);
    _AlreadyHandledConsIds_11 = ((MR_Word) conv2__AlreadyHandledConsIds_11);
    mercury__list__sort_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, Cases_10, &SortedCases_6);
    return SortedCases_6;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection__is_candidate_switch_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word MaybeRequiredVar_10,
  MR_Word Var_11,
  MR_Word VarType_12,
  MR_Word VarInst0_13,
  MR_Word Cases0_14,
  MR_Word LeftOver_15,
  MR_Word * Candidate_16)
{
  {
    MR_bool succeeded = (LeftOver_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word CanFail_20;
    MR_Word CasesMissing_21;
    MR_Word Cases_22;
    MR_Word UnreachableCaseGoals_23;
    MR_Word Rank_24;
    MR_Word Functors_42;

    if (!(succeeded))
    {
      MR_Word Var_31;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;

      succeeded = ((MR_tag((MR_Word) Cases0_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases0_14, (MR_Integer) 0)));
        Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases0_14, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1)));
        }
      }
    }
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_9, VarInst0_13, &Functors_42);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_11_52;
        MR_Word TypeCtor_43;
        MR_Word ConsIds_44;
        MR_Word UncoveredFunctors0_50;
        MR_Word UncoveredFunctors_51;

        parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_12, &TypeCtor_43);
        parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(TypeCtor_43, Functors_42, &ConsIds_44);
        check_hlds__det_util__delete_unreachable_cases_4_p_0(Cases0_14, ConsIds_44, &Cases_22, &UnreachableCaseGoals_23);
        TypeCtorInfo_11_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
        UncoveredFunctors0_50 = mercury__set_tree234__list_to_set_1_f_0(TypeCtorInfo_11_52, ConsIds_44);
        check_hlds__switch_detection__delete_covered_functors_3_p_0(Cases_22, UncoveredFunctors0_50, &UncoveredFunctors_51);
        succeeded = mercury__set_tree234__empty_1_p_0(TypeCtorInfo_11_52, UncoveredFunctors_51);
        if (succeeded)
        {
          CanFail_20 = (MR_Integer) 1;
          CasesMissing_21 = (MR_Integer) 0;
        }
        else
        {
          CanFail_20 = (MR_Integer) 0;
          CasesMissing_21 = (MR_Integer) 1;
        }
      }
      else
      {
        MR_Integer NumFunctors_45;

        Cases_22 = Cases0_14;
        UnreachableCaseGoals_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(ModuleInfo_9, VarType_12, &NumFunctors_45);
        if (succeeded)
        {
          MR_Integer NumCoveredConsIds_57;

          NumCoveredConsIds_57 = check_hlds__switch_detection__count_covered_cons_ids_1_f_0(Cases_22);
          succeeded = (NumCoveredConsIds_57 == NumFunctors_45);
          if (succeeded)
          {
            CanFail_20 = (MR_Integer) 1;
            CasesMissing_21 = (MR_Integer) 0;
          }
          else
          {
            CanFail_20 = (MR_Integer) 0;
            CasesMissing_21 = (MR_Integer) 1;
          }
        }
        else
        {
          CanFail_20 = (MR_Integer) 0;
          CasesMissing_21 = (MR_Integer) 2;
        }
      }
      if ((LeftOver_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((Cases_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          Rank_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
        else
        {
          MR_Word LaterCases_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases_22, (MR_Integer) 1)));
          MR_Word _FirstCase_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases_22, (MR_Integer) 0)));

          succeeded = (LaterCases_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            succeeded = (UnreachableCaseGoals_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            Rank_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          else
          {
            MR_Word TypeInfo_33_33;
            MR_Word RequiredVar_27;

            succeeded = ((MR_tag((MR_Word) MaybeRequiredVar_10)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RequiredVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRequiredVar_10, (MR_Integer) 0)));
              TypeInfo_33_33 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (RequiredVar_27)), ((MR_Box) (Var_11)));
            }
            if (succeeded)
              Rank_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            else
              switch (CasesMissing_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Rank_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                  break;
                case (MR_Integer) 1:
                  Rank_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 2:
                  Rank_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                  break;
              }
          }
        }
      else
      {
        MR_Integer NumCases_30;

        mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, Cases_22, &NumCases_30);
        switch (CanFail_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Rank_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Rank_24, 0) = ((MR_Box) (NumCases_30));
            }
            break;
          case (MR_Integer) 1:
            {
              Rank_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rank_24, 0) = ((MR_Box) (NumCases_30));
            }
            break;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        *Candidate_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Cases_22));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (UnreachableCaseGoals_23));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (LeftOver_15));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Rank_24));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (CanFail_20));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Integer MR_CALL 
check_hlds__switch_detection__count_covered_cons_ids_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer CaseCount_5;
      MR_Integer CasesCount_6;
      MR_Word OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 1)));
      MR_Integer Var_11;
      MR_Word _MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 0)));
      MR_Word _Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 2)));

      Var_11 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, OtherConsIds_8);
      CaseCount_5 = ((MR_Integer) 1 + Var_11);
      CasesCount_6 = check_hlds__switch_detection__count_covered_cons_ids_1_f_0(Cases_4);
      HeadVar__2_2 = (CaseCount_5 + CasesCount_6);
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_22;

    check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1502__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_22);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_22));
  }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_UncoveredConsIds_3 = STATE_VARIABLE_UncoveredConsIds_0_2;
    else
    {
      MR_Word TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
      MR_Word Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 0)));
      MR_Word OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_UncoveredConsIds_15_15;
      MR_Word STATE_VARIABLE_UncoveredConsIds_17_17;
      MR_Word _Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 2)));
      MR_Box conv1_STATE_VARIABLE_UncoveredConsIds_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UncoveredConsIds_0_2;

      mercury__set_tree234__delete_3_p_0(TypeCtorInfo_19_19, ((MR_Box) (MainConsId_10)), STATE_VARIABLE_UncoveredConsIds_0_2, &STATE_VARIABLE_UncoveredConsIds_15_15);
      mercury__list__foldl_4_p_0(TypeCtorInfo_19_19, (MR_Word) &check_hlds__switch_detection_scalar_common_1[3], (MR_Word) &check_hlds__switch_detection_scalar_common_2[2], OtherConsIds_11, ((MR_Box) (STATE_VARIABLE_UncoveredConsIds_15_15)), &conv1_STATE_VARIABLE_UncoveredConsIds_17_17);
      STATE_VARIABLE_UncoveredConsIds_17_17 = ((MR_Word) conv1_STATE_VARIABLE_UncoveredConsIds_17_17);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_UncoveredConsIds_0_2 = STATE_VARIABLE_UncoveredConsIds_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UncoveredConsIds_0_2 = next_value_of_STATE_VARIABLE_UncoveredConsIds_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
check_hlds__switch_detection__init_switch_detect_info_1_f_0(
  MR_Word ModuleInfo_3)
{
  {
    MR_Word Info_4;
    MR_Word AllowMulti_5;
    MR_Word Globals_8;
    MR_Word Allow_9;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 304, &Allow_9);
    switch (Allow_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AllowMulti_5 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        AllowMulti_5 = (MR_Integer) 0;
        break;
    }
    {
      Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_4, 0) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(MR_mktag(0), Info_4, 1) = ((MR_Box) (AllowMulti_5));
    }
    return Info_4;
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____allow_multi_arm_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____allow_multi_arm_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____candidate_switch_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____candidate_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____candidate_switch_rank_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____candidate_switch_rank_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____candidate_switch_rank_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____candidate_switch_rank_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____case_arm_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____case_arm_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_missing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____cases_missing_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_missing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____cases_missing_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____cases_table_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____cases_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____cons_id_entry_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____cons_id_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____cons_id_state_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____cons_id_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____deconstruct_search_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____deconstruct_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____found_deconstruct_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____found_deconstruct_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____process_unify_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____process_unify_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__switch_detection____Unify____switch_detect_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__switch_detection____Compare____switch_detect_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
