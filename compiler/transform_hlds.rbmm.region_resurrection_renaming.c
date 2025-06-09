/*
** Automatically generated from `rbmm.region_resurrection_renaming.m'
** by the Mercury compiler,
** version rotd-2025-06-09
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


// :- module transform_hlds.rbmm.region_resurrection_renaming.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__region_resurrection_renaming__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_resurrection_renaming.mih"


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
#include "enum.mih"
#include "hlds.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__pair__pti_pair_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1transform_hlds__smm_common__type_ctor_info_program_point_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_list__ti_list_1transform_hlds__smm_common__type_ctor_info_program_point_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_renaming_and_annotation_proc__549__1_3_p_0(
  MR_Word LambdaHeadVar__1_47,
  MR_Word LambdaHeadVar__2_48,
  MR_Word * LambdaHeadVar__3_49);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_paths_containing_join_points_proc__382__1_3_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_join_points_proc__293__1_3_p_0(
  MR_Word LambdaHeadVar__1_24,
  MR_Word LambdaHeadVar__2_25,
  MR_Word * LambdaHeadVar__3_26);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__add_annotation_at_last_prog_point_6_p_0(
  MR_Word ProgPoint_7,
  MR_Word Graph_8,
  MR_Word Renaming_9,
  MR_Word Region_10,
  MR_Word STATE_VARIABLE_AnnotationProc_0_16,
  MR_Word * STATE_VARIABLE_AnnotationProc_17);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__add_annotation_and_renaming_at_join_point_9_p_0(
  MR_Word PrevProgPoint_10,
  MR_Word Graph_11,
  MR_String JoinPointName_12,
  MR_Word PrevRenaming_13,
  MR_Word Region_14,
  MR_Word STATE_VARIABLE_AnnotationProc_0_22,
  MR_Word * STATE_VARIABLE_AnnotationProc_23,
  MR_Word STATE_VARIABLE_Renaming_0_24,
  MR_Word * STATE_VARIABLE_Renaming_25);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_12_p_0(
  MR_Word ResurrectionRenameProc_1,
  MR_Word JoinPointProc_2,
  MR_Word LRBeforeProc_3,
  MR_Word LRAfterProc_4,
  MR_Word BornR_5,
  MR_Word Graph_6,
  MR_Word ResurrectedRegions_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_AnnotationProc_0_9,
  MR_Word * STATE_VARIABLE_AnnotationProc_10,
  MR_Word STATE_VARIABLE_RenamingProc_0_11,
  MR_Word * STATE_VARIABLE_RenamingProc_12);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0(
  MR_Word ResurrectionRenameProc_1,
  MR_Word JoinPointProc_2,
  MR_Word LRBeforeProc_3,
  MR_Word LRAfterProc_4,
  MR_Word BornR_5,
  MR_Word Graph_6,
  MR_Word ResurrectedRegions_7,
  MR_Word PrevProgPoint_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_AnnotationProc_0_10,
  MR_Word * STATE_VARIABLE_AnnotationProc_11,
  MR_Word STATE_VARIABLE_RenamingProc_0_12,
  MR_Word * STATE_VARIABLE_RenamingProc_13);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0(
  MR_Word ExecPathTable_14,
  MR_Word JoinPointTable_15,
  MR_Word LRBeforeTable_16,
  MR_Word LRAfterTable_17,
  MR_Word BornRTable_18,
  MR_Word RptaInfoTable_19,
  MR_Word ResurrectionPathTable_20,
  MR_Word PPId_21,
  MR_Word ResurrectionRenameProc_22,
  MR_Word STATE_VARIABLE_AnnotationTable_0_41,
  MR_Word * STATE_VARIABLE_AnnotationTable_42,
  MR_Word STATE_VARIABLE_RenamingTable_0_43,
  MR_Word * STATE_VARIABLE_RenamingTable_44);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__record_renaming_prog_point_6_p_0(
  MR_Word Graph_7,
  MR_Word ProgPoint_8,
  MR_Integer RenamingCounter_9,
  MR_Word Region_10,
  MR_Word STATE_VARIABLE_ResurrectionRenameProc_0_16,
  MR_Word * STATE_VARIABLE_ResurrectionRenameProc_17);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_prog_point_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_prog_point_8_p_0(
  MR_Word Graph_9,
  MR_Word BecomeLiveProc_10,
  MR_Word ResurrectedRegions_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RenamingCounter_0_19,
  MR_Word * STATE_VARIABLE_RenamingCounter_20,
  MR_Word STATE_VARIABLE_ResurrectionRenameProc_0_21,
  MR_Word * STATE_VARIABLE_ResurrectionRenameProc_22);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_exec_path_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_exec_path_6_p_0(
  MR_Word Graph_7,
  MR_Word BecomeLiveProc_8,
  MR_Word ExecPath_9,
  MR_Word ResurrectedRegions_10,
  MR_Word STATE_VARIABLE_ResurrectionRenameProc_0_13,
  MR_Word * STATE_VARIABLE_ResurrectionRenameProc_14);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_proc_7_p_0(
  MR_Word BecomeLiveTable_8,
  MR_Word _LocalRTable_9,
  MR_Word RptaInfoTable_10,
  MR_Word PPId_11,
  MR_Word PathsContainResurrection_12,
  MR_Word STATE_VARIABLE_ResurrectionRenameTable_0_19,
  MR_Word * STATE_VARIABLE_ResurrectionRenameTable_20);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_114_101_103_105_111_110_95_114_101_115_117_114_114_101_99_116_105_111_110_95_114_101_110_97_109_105_110_103_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_114_101_103_105_111_110_95_114_101_115_117_114_114_101_99_116_105_111_110_95_114_101_110_97_109_105_110_103_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word BecomeLiveTable_8,
  MR_Word RptaInfoTable_10,
  MR_Word PPId_11,
  MR_Word PathsContainResurrection_12,
  MR_Word STATE_VARIABLE_ResurrectionRenameTable_0_19,
  MR_Word * STATE_VARIABLE_ResurrectionRenameTable_20);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__find_join_points_in_path_5_p_0(
  MR_Word ProgPointsInPath_6,
  MR_Word JoinPoint_7,
  MR_String HeadVar__3_8,
  MR_Word STATE_VARIABLE_JoinPoints_0_10,
  MR_Word * STATE_VARIABLE_JoinPoints_11);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_106_111_105_110_95_112_111_105_110_116_115_95_105_110_95_112_97_116_104_95_95_91_51_93_95_48_5_p_0(
  MR_Word ProgPointsInPath_6,
  MR_Word JoinPoint_7,
  MR_Word STATE_VARIABLE_JoinPoints_0_10,
  MR_Word * STATE_VARIABLE_JoinPoints_11);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__path_containing_join_point_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__path_containing_join_point_6_p_0(
  MR_Word JoinPointProc_7,
  MR_Word PPId_8,
  MR_Word ResurrectedRegionsProc_9,
  MR_Word NonResurPath_10,
  MR_Word STATE_VARIABLE_PathContainsResurrectionTable_0_16,
  MR_Word * STATE_VARIABLE_PathContainsResurrectionTable_17);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0(
  MR_Word ExecPathTable_7,
  MR_Word JoinPointTable_8,
  MR_Word PPId_9,
  MR_Word PathContainsResurrectionProc_10,
  MR_Word STATE_VARIABLE_PathContainsResurrectionTable_0_21,
  MR_Word * STATE_VARIABLE_PathContainsResurrectionTable_22);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_path_10_p_0(
  MR_Word Paths_11,
  MR_Word Path_12,
  MR_Word STATE_VARIABLE_JP2Name_0_24,
  MR_Word * STATE_VARIABLE_JP2Name_25,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_JoinPoints_0_28,
  MR_Word * STATE_VARIABLE_JoinPoints_29,
  MR_Word STATE_VARIABLE_JoinPointProc_0_30,
  MR_Word * STATE_VARIABLE_JoinPointProc_31);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__is_join_point_3_p_0(
  MR_Word ProgPoint_4,
  MR_Word PrevProgPoint_5,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__is_join_point_2_3_p_0(
  MR_Word ProgPoint_4,
  MR_Word PrevProgPoint_5,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_proc_5_p_0(
  MR_Word ExecPathTable_6,
  MR_Word PPId_7,
  MR_Word HeadVar__3_8,
  MR_Word STATE_VARIABLE_JoinPointTable_0_20,
  MR_Word * STATE_VARIABLE_JoinPointTable_21);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0_2(
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
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0(
  MR_Word ExecPathTable_6,
  MR_Word PPId_7,
  MR_Word STATE_VARIABLE_JoinPointTable_0_20,
  MR_Word * STATE_VARIABLE_JoinPointTable_21);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_prog_point_12_p_0(
  MR_Word LRBeforeProc_13,
  MR_Word LRAfterProc_14,
  MR_Word BecomeLiveProc_15,
  MR_Word BecomeDeadBeforeProc_16,
  MR_Word BecomeDeadAfterProc_17,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CreatedCandidates_0_31,
  MR_Word * STATE_VARIABLE_CreatedCandidates_32,
  MR_Word STATE_VARIABLE_RemovedCandidates_0_33,
  MR_Word * STATE_VARIABLE_RemovedCandidates_34,
  MR_Word STATE_VARIABLE_ResurrectedRegionsInExecPath_0_35,
  MR_Word * STATE_VARIABLE_ResurrectedRegionsInExecPath_36);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_exec_path_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_exec_path_8_p_0(
  MR_Word LRBeforeProc_9,
  MR_Word LRAfterProc_10,
  MR_Word BecomeLiveProc_11,
  MR_Word BecomeDeadBeforeProc_12,
  MR_Word BecomeDeadAfterProc_13,
  MR_Word ExecPath_14,
  MR_Word STATE_VARIABLE_ResurrectedRegionProc_0_19,
  MR_Word * STATE_VARIABLE_ResurrectedRegionProc_20);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_proc_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_proc_12_p_0(
  MR_Word LRBeforeTable_13,
  MR_Word LRAfterTable_14,
  MR_Word BornRTable_15,
  MR_Word DeadRTable_16,
  MR_Word LocalRTable_17,
  MR_Word BecomeLiveTable_18,
  MR_Word BecomeDeadBeforeTable_19,
  MR_Word BecomeDeadAfterTable_20,
  MR_Word PPId_21,
  MR_Word ExecPaths_22,
  MR_Word STATE_VARIABLE_PathContainsResurrectionTable_0_33,
  MR_Word * STATE_VARIABLE_PathContainsResurrectionTable_34);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____exec_path_region_set_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____exec_path_region_set_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____join_point_region_name_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____join_point_region_name_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____proc_resurrection_path_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____proc_resurrection_path_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[14][3];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[8][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_3[3][15];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_4[2][8];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_5[5][9];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_7[1][16];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_8[2][11];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_9[2][6];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_10[1][13];

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_11[1][12];




static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[3]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[4]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[8]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_9[1])),
    ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_9[1])),
    ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_3[3][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__pair__pti_pair_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_4[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_5[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_7[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_8[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__pair__pti_pair_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_9[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_list__ti_list_1transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_list__ti_list_1transform_hlds__smm_common__type_ctor_info_program_point_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_10[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_list__ti_list_1transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_resurrection_renaming_scalar_common_11[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__pair__pti_pair_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1transform_hlds__smm_common__type_ctor_info_program_point_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_list__ti_list_1transform_hlds__smm_common__type_ctor_info_program_point_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1transform_hlds__smm_common__type_ctor_info_program_point_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__list__pti_list_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_resurrection_renaming__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__smm_common__type_ctor_info_program_point_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_exec_path_region_set_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Unify____exec_path_region_set_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Compare____exec_path_region_set_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_resurrection_renaming",
  (MR_String) "exec_path_region_set_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_join_point_region_name_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Unify____join_point_region_name_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Compare____join_point_region_name_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_resurrection_renaming",
  (MR_String) "join_point_region_name_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_proc_resurrection_path_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Unify____proc_resurrection_path_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Compare____proc_resurrection_path_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_resurrection_renaming",
  (MR_String) "proc_resurrection_path_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_resurrection_renaming",
  (MR_String) "rbmm_renaming",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_annotation_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_proc_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_resurrection_renaming",
  (MR_String) "rbmm_renaming_annotation_proc",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_annotation_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_resurrection_renaming",
  (MR_String) "rbmm_renaming_annotation_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_proc_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_resurrection_renaming",
  (MR_String) "rbmm_renaming_proc",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_resurrection_renaming",
  (MR_String) "rbmm_renaming_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_resurrection_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_renaming_and_annotation_proc__549__1_3_p_0(
  MR_Word LambdaHeadVar__1_47,
  MR_Word LambdaHeadVar__2_48,
  MR_Word * LambdaHeadVar__3_49)
{
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LambdaHeadVar__2_48, LambdaHeadVar__1_47, LambdaHeadVar__3_49);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_paths_containing_join_points_proc__382__1_3_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27)
{
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LambdaHeadVar__2_26, LambdaHeadVar__1_25, LambdaHeadVar__3_27);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_join_points_proc__293__1_3_p_0(
  MR_Word LambdaHeadVar__1_24,
  MR_Word LambdaHeadVar__2_25,
  MR_Word * LambdaHeadVar__3_26)
{
  MR_Word P_14;

  mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LambdaHeadVar__1_24, &P_14);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__3_26 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (P_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (LambdaHeadVar__2_25));
  }
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[9]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____proc_resurrection_path_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____proc_resurrection_path_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____join_point_region_name_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____join_point_region_name_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____exec_path_region_set_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____exec_path_region_set_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__add_annotation_at_last_prog_point_6_p_0(
  MR_Word ProgPoint_7,
  MR_Word Graph_8,
  MR_Word Renaming_9,
  MR_Word Region_10,
  MR_Word STATE_VARIABLE_AnnotationProc_0_16,
  MR_Word * STATE_VARIABLE_AnnotationProc_17)
{
  MR_bool succeeded;
  MR_String RegionName_12;
  MR_Word CurrentNameList_13;
  MR_Box conv0_CurrentNameList_13;

  RegionName_12 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_8, Region_10);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[3]), Renaming_9, ((MR_Box) (RegionName_12)), &conv0_CurrentNameList_13);
  if (succeeded)
  {
    CurrentNameList_13 = ((MR_Word) (conv0_CurrentNameList_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String CurrentName_14;
    MR_Word Annotation_15;
    MR_Box conv1_CurrentName_14;

    conv1_CurrentName_14 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CurrentNameList_13);
    CurrentName_14 = ((MR_String) (conv1_CurrentName_14));
    {
      Annotation_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Annotation_15, 0) = ((MR_Box) (CurrentName_14));
      MR_hl_field(2, Annotation_15, 1) = ((MR_Box) (RegionName_12));
    }
    transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_p_0(ProgPoint_7, Annotation_15, STATE_VARIABLE_AnnotationProc_0_16, STATE_VARIABLE_AnnotationProc_17);
  }
  else
    *STATE_VARIABLE_AnnotationProc_17 = STATE_VARIABLE_AnnotationProc_0_16;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__add_annotation_and_renaming_at_join_point_9_p_0(
  MR_Word PrevProgPoint_10,
  MR_Word Graph_11,
  MR_String JoinPointName_12,
  MR_Word PrevRenaming_13,
  MR_Word Region_14,
  MR_Word STATE_VARIABLE_AnnotationProc_0_22,
  MR_Word * STATE_VARIABLE_AnnotationProc_23,
  MR_Word STATE_VARIABLE_Renaming_0_24,
  MR_Word * STATE_VARIABLE_Renaming_25)
{
  MR_bool succeeded;
  MR_String RegionName_17;
  MR_String NewName_18;
  MR_Word Var_26;
  MR_Word RenamedNames_19;
  MR_Box conv0_RenamedNames_19;

  RegionName_17 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_11, Region_14);
  NewName_18 = mercury__string__f_43_43_2_f_0(RegionName_17, JoinPointName_12);
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (NewName_18));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[3]), ((MR_Box) (RegionName_17)), ((MR_Box) (Var_26)), STATE_VARIABLE_Renaming_0_24, STATE_VARIABLE_Renaming_25);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[3]), PrevRenaming_13, ((MR_Box) (RegionName_17)), &conv0_RenamedNames_19);
  if (succeeded)
  {
    RenamedNames_19 = ((MR_Word) (conv0_RenamedNames_19));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String CurrentName_20;
    MR_Word Annotation_21;
    MR_Box conv1_CurrentName_20;

    mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RenamedNames_19, &conv1_CurrentName_20);
    CurrentName_20 = ((MR_String) (conv1_CurrentName_20));
    {
      Annotation_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Annotation_21, 0) = ((MR_Box) (CurrentName_20));
      MR_hl_field(2, Annotation_21, 1) = ((MR_Box) (NewName_18));
    }
    transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_p_0(PrevProgPoint_10, Annotation_21, STATE_VARIABLE_AnnotationProc_0_22, STATE_VARIABLE_AnnotationProc_23);
  }
  else
  {
    MR_Word Annotation_31;

    {
      Annotation_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Annotation_31, 0) = ((MR_Box) (RegionName_17));
      MR_hl_field(2, Annotation_31, 1) = ((MR_Box) (NewName_18));
    }
    transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_p_0(PrevProgPoint_10, Annotation_31, STATE_VARIABLE_AnnotationProc_0_22, STATE_VARIABLE_AnnotationProc_23);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_12_p_0(
  MR_Word ResurrectionRenameProc_1,
  MR_Word JoinPointProc_2,
  MR_Word LRBeforeProc_3,
  MR_Word LRAfterProc_4,
  MR_Word BornR_5,
  MR_Word Graph_6,
  MR_Word ResurrectedRegions_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_AnnotationProc_0_9,
  MR_Word * STATE_VARIABLE_AnnotationProc_10,
  MR_Word STATE_VARIABLE_RenamingProc_0_11,
  MR_Word * STATE_VARIABLE_RenamingProc_12)
{
  MR_bool succeeded;

  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_resurrection_renaming.collect_renaming_and_annotation_exec_path\'/12", (MR_String) "empty execution path");
      return;
    }
  else
  {
    MR_Word ProgPoint_35;
    MR_Word ProgPoint_Goals_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 1))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 0))));
    MR_Word STATE_VARIABLE_RenamingProc_1_46;
    MR_Word ResurRename_40;
    MR_Box conv0_ResurRename_40;

    ProgPoint_35 = ((MR_Word) ((MR_hl_field(0, Var_45, 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ResurrectionRenameProc_1, ((MR_Box) (ProgPoint_35)), &conv0_ResurRename_40);
    if (succeeded)
    {
      ResurRename_40 = ((MR_Word) (conv0_ResurRename_40));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ((MR_Box) (ProgPoint_35)), ((MR_Box) (ResurRename_40)), STATE_VARIABLE_RenamingProc_0_11, &STATE_VARIABLE_RenamingProc_1_46);
    else
    {
      MR_Word Var_47;

      Var_47 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[3]));
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ((MR_Box) (ProgPoint_35)), ((MR_Box) (Var_47)), STATE_VARIABLE_RenamingProc_0_11, &STATE_VARIABLE_RenamingProc_1_46);
    }
    transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0(ResurrectionRenameProc_1, JoinPointProc_2, LRBeforeProc_3, LRAfterProc_4, BornR_5, Graph_6, ResurrectedRegions_7, ProgPoint_35, ProgPoint_Goals_37, STATE_VARIABLE_AnnotationProc_0_9, STATE_VARIABLE_AnnotationProc_10, STATE_VARIABLE_RenamingProc_1_46, STATE_VARIABLE_RenamingProc_12);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_AnnotationProc_17;

  transform_hlds__rbmm__region_resurrection_renaming__add_annotation_at_last_prog_point_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_AnnotationProc_17);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_AnnotationProc_17));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_AnnotationProc_23;
  MR_Word conv5_STATE_VARIABLE_Renaming_25;

  transform_hlds__rbmm__region_resurrection_renaming__add_annotation_and_renaming_at_join_point_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_AnnotationProc_23, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Renaming_25);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_AnnotationProc_23));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Renaming_25));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0(
  MR_Word ResurrectionRenameProc_1,
  MR_Word JoinPointProc_2,
  MR_Word LRBeforeProc_3,
  MR_Word LRAfterProc_4,
  MR_Word BornR_5,
  MR_Word Graph_6,
  MR_Word ResurrectedRegions_7,
  MR_Word PrevProgPoint_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_AnnotationProc_0_10,
  MR_Word * STATE_VARIABLE_AnnotationProc_11,
  MR_Word STATE_VARIABLE_RenamingProc_0_12,
  MR_Word * STATE_VARIABLE_RenamingProc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RenamingProc_13 = STATE_VARIABLE_RenamingProc_0_12;
      *STATE_VARIABLE_AnnotationProc_11 = STATE_VARIABLE_AnnotationProc_0_10;
    }
    else
    {
      MR_Word ProgPoint_36;
      MR_Word ProgPoint_Goals_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 1))));
      MR_Word PrevRenaming_41;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 0))));
      MR_Word STATE_VARIABLE_RenamingProc_1_59;
      MR_Word STATE_VARIABLE_AnnotationProc_1_62;
      MR_Word STATE_VARIABLE_RenamingProc_3_64;
      MR_Box conv0_PrevRenaming_41;
      MR_Word ResurRenaming_42;
      MR_Box conv1_ResurRenaming_42;
      MR_String JoinPointName_44;
      MR_Box conv2_JoinPointName_44;

      ProgPoint_36 = ((MR_Word) ((MR_hl_field(0, Var_58, 0))));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), STATE_VARIABLE_RenamingProc_0_12, ((MR_Box) (PrevProgPoint_8)), &conv0_PrevRenaming_41);
      PrevRenaming_41 = ((MR_Word) (conv0_PrevRenaming_41));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ResurrectionRenameProc_1, ((MR_Box) (ProgPoint_36)), &conv1_ResurRenaming_42);
      if (succeeded)
      {
        ResurRenaming_42 = ((MR_Word) (conv1_ResurRenaming_42));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Renaming0_43;

        mercury__multi_map__merge_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PrevRenaming_41, ResurRenaming_42, &Renaming0_43);
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ((MR_Box) (ProgPoint_36)), ((MR_Box) (Renaming0_43)), STATE_VARIABLE_RenamingProc_0_12, &STATE_VARIABLE_RenamingProc_1_59);
      }
      else
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ((MR_Box) (ProgPoint_36)), ((MR_Box) (PrevRenaming_41)), STATE_VARIABLE_RenamingProc_0_12, &STATE_VARIABLE_RenamingProc_1_59);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), JoinPointProc_2, ((MR_Box) (ProgPoint_36)), &conv2_JoinPointName_44);
      if (succeeded)
      {
        JoinPointName_44 = ((MR_String) (conv2_JoinPointName_44));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word LRBeforeProgPoint_45;
        MR_Word LRAfterPrevProgPoint_46;
        MR_Word NotYetDeadRegions_47;
        MR_Word ResurrectedAndLiveRegions_48;
        MR_Word Renaming_49;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Box conv3_LRBeforeProgPoint_45;
        MR_Box conv4_LRAfterPrevProgPoint_46;
        MR_Box conv8_STATE_VARIABLE_AnnotationProc_1_62;
        MR_Box conv7_Renaming_49;

        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), LRBeforeProc_3, ((MR_Box) (ProgPoint_36)), &conv3_LRBeforeProgPoint_45);
        LRBeforeProgPoint_45 = ((MR_Word) (conv3_LRBeforeProgPoint_45));
        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), LRAfterProc_4, ((MR_Box) (PrevProgPoint_8)), &conv4_LRAfterPrevProgPoint_46);
        LRAfterPrevProgPoint_46 = ((MR_Word) (conv4_LRAfterPrevProgPoint_46));
        mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRBeforeProgPoint_45, LRAfterPrevProgPoint_46, &NotYetDeadRegions_47);
        mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ResurrectedRegions_7, NotYetDeadRegions_47, &ResurrectedAndLiveRegions_48);
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_11[0]));
          MR_hl_field(0, Var_61, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0_1));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_61, 3) = ((MR_Box) (PrevProgPoint_8));
          MR_hl_field(0, Var_61, 4) = ((MR_Box) (Graph_6));
          MR_hl_field(0, Var_61, 5) = ((MR_Box) (JoinPointName_44));
          MR_hl_field(0, Var_61, 6) = ((MR_Box) (PrevRenaming_41));
        }
        Var_63 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[3]));
        mercury__set__fold2_6_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[8]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), Var_61, ResurrectedAndLiveRegions_48, ((MR_Box) (STATE_VARIABLE_AnnotationProc_0_10)), &conv8_STATE_VARIABLE_AnnotationProc_1_62, ((MR_Box) (Var_63)), &conv7_Renaming_49);
        STATE_VARIABLE_AnnotationProc_1_62 = ((MR_Word) (conv8_STATE_VARIABLE_AnnotationProc_1_62));
        Renaming_49 = ((MR_Word) (conv7_Renaming_49));
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ((MR_Box) (ProgPoint_36)), ((MR_Box) (Renaming_49)), STATE_VARIABLE_RenamingProc_1_59, &STATE_VARIABLE_RenamingProc_3_64);
      }
      else
      {
        STATE_VARIABLE_RenamingProc_3_64 = STATE_VARIABLE_RenamingProc_1_59;
        STATE_VARIABLE_AnnotationProc_1_62 = STATE_VARIABLE_AnnotationProc_0_10;
      }
      if ((ProgPoint_Goals_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ResurrectedAndBornRegions_50;
        MR_Word LastRenaming_51;
        MR_Word Var_65;
        MR_Box conv9_LastRenaming_51;
        MR_Box conv11_STATE_VARIABLE_AnnotationProc_11;

        mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ResurrectedRegions_7, BornR_5, &ResurrectedAndBornRegions_50);
        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), STATE_VARIABLE_RenamingProc_3_64, ((MR_Box) (ProgPoint_36)), &conv9_LastRenaming_51);
        LastRenaming_51 = ((MR_Word) (conv9_LastRenaming_51));
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_5[4]));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_2_13_p_0_2));
          MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_65, 3) = ((MR_Box) (ProgPoint_36));
          MR_hl_field(0, Var_65, 4) = ((MR_Box) (Graph_6));
          MR_hl_field(0, Var_65, 5) = ((MR_Box) (LastRenaming_51));
        }
        mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[8]), Var_65, ResurrectedAndBornRegions_50, ((MR_Box) (STATE_VARIABLE_AnnotationProc_1_62)), &conv11_STATE_VARIABLE_AnnotationProc_11);
        *STATE_VARIABLE_AnnotationProc_11 = ((MR_Word) (conv11_STATE_VARIABLE_AnnotationProc_11));
        *STATE_VARIABLE_RenamingProc_13 = STATE_VARIABLE_RenamingProc_3_64;
      }
      else
      {
        MR_Word next_value_of_PrevProgPoint_8 = ProgPoint_36;
        MR_Word next_value_of_HeadVar__9_9 = ProgPoint_Goals_38;
        MR_Word next_value_of_STATE_VARIABLE_AnnotationProc_0_10 = STATE_VARIABLE_AnnotationProc_1_62;
        MR_Word next_value_of_STATE_VARIABLE_RenamingProc_0_12 = STATE_VARIABLE_RenamingProc_3_64;

        // direct tailcall eliminated
        ;
        PrevProgPoint_8 = next_value_of_PrevProgPoint_8;
        HeadVar__9_9 = next_value_of_HeadVar__9_9;
        STATE_VARIABLE_AnnotationProc_0_10 = next_value_of_STATE_VARIABLE_AnnotationProc_0_10;
        STATE_VARIABLE_RenamingProc_0_12 = next_value_of_STATE_VARIABLE_RenamingProc_0_12;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_AnnotationProc_10;
  MR_Word conv9_STATE_VARIABLE_RenamingProc_12;

  transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_exec_path_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_AnnotationProc_10, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_RenamingProc_12);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_AnnotationProc_10));
  *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_RenamingProc_12));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__3_49;

  transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_renaming_and_annotation_proc__549__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_LambdaHeadVar__3_49);
  *wrapper_arg_3 = ((MR_Box) (conv6_LambdaHeadVar__3_49));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0(
  MR_Word ExecPathTable_14,
  MR_Word JoinPointTable_15,
  MR_Word LRBeforeTable_16,
  MR_Word LRAfterTable_17,
  MR_Word BornRTable_18,
  MR_Word RptaInfoTable_19,
  MR_Word ResurrectionPathTable_20,
  MR_Word PPId_21,
  MR_Word ResurrectionRenameProc_22,
  MR_Word STATE_VARIABLE_AnnotationTable_0_41,
  MR_Word * STATE_VARIABLE_AnnotationTable_42,
  MR_Word STATE_VARIABLE_RenamingTable_0_43,
  MR_Word * STATE_VARIABLE_RenamingTable_44)
{
  MR_Word JoinPointProc_25;
  MR_Word LRBeforeProc_26;
  MR_Word LRAfterProc_27;
  MR_Word BornR_28;
  MR_Word RptaInfo_29;
  MR_Word Graph_30;
  MR_Word PathsContainResurrection_32;
  MR_Word ResurrectedRegionsInPaths_33;
  MR_Word ResurrectedRegionsProc_37;
  MR_Word ExecPaths_38;
  MR_Word AnnotationProc_39;
  MR_Word RenamingProc_40;
  MR_Word Var_46;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Box conv0_JoinPointProc_25;
  MR_Box conv1_LRBeforeProc_26;
  MR_Box conv2_LRAfterProc_27;
  MR_Box conv3_BornR_28;
  MR_Box conv4_RptaInfo_29;
  MR_Box conv5_PathsContainResurrection_32;
  MR_Box conv7_ResurrectedRegionsProc_37;
  MR_Box conv8_ExecPaths_38;
  MR_Box conv12_AnnotationProc_39;
  MR_Box conv11_RenamingProc_40;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[3]), JoinPointTable_15, ((MR_Box) (PPId_21)), &conv0_JoinPointProc_25);
  JoinPointProc_25 = ((MR_Word) (conv0_JoinPointProc_25));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[10]), LRBeforeTable_16, ((MR_Box) (PPId_21)), &conv1_LRBeforeProc_26);
  LRBeforeProc_26 = ((MR_Word) (conv1_LRBeforeProc_26));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[10]), LRAfterTable_17, ((MR_Box) (PPId_21)), &conv2_LRAfterProc_27);
  LRAfterProc_27 = ((MR_Word) (conv2_LRAfterProc_27));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), BornRTable_18, ((MR_Box) (PPId_21)), &conv3_BornR_28);
  BornR_28 = ((MR_Word) (conv3_BornR_28));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_19, ((MR_Box) (PPId_21)), &conv4_RptaInfo_29);
  RptaInfo_29 = ((MR_Word) (conv4_RptaInfo_29));
  Graph_30 = ((MR_Word) ((MR_hl_field(0, RptaInfo_29, 0))));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), ResurrectionPathTable_20, ((MR_Box) (PPId_21)), &conv5_PathsContainResurrection_32);
  PathsContainResurrection_32 = ((MR_Word) (conv5_PathsContainResurrection_32));
  mercury__map__values_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), PathsContainResurrection_32, &ResurrectedRegionsInPaths_33);
  Var_46 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[13]), ResurrectedRegionsInPaths_33, ((MR_Box) (Var_46)), &conv7_ResurrectedRegionsProc_37);
  ResurrectedRegionsProc_37 = ((MR_Word) (conv7_ResurrectedRegionsProc_37));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[2]), ExecPathTable_14, ((MR_Box) (PPId_21)), &conv8_ExecPaths_38);
  ExecPaths_38 = ((MR_Word) (conv8_ExecPaths_38));
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_3[2]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0_2));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (ResurrectionRenameProc_22));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (JoinPointProc_25));
    MR_hl_field(0, Var_50, 5) = ((MR_Box) (LRBeforeProc_26));
    MR_hl_field(0, Var_50, 6) = ((MR_Box) (LRAfterProc_27));
    MR_hl_field(0, Var_50, 7) = ((MR_Box) (BornR_28));
    MR_hl_field(0, Var_50, 8) = ((MR_Box) (Graph_30));
    MR_hl_field(0, Var_50, 9) = ((MR_Box) (ResurrectedRegionsProc_37));
  }
  Var_51 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[4]));
  Var_52 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]));
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[8]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), Var_50, ExecPaths_38, ((MR_Box) (Var_51)), &conv12_AnnotationProc_39, ((MR_Box) (Var_52)), &conv11_RenamingProc_40);
  AnnotationProc_39 = ((MR_Word) (conv12_AnnotationProc_39));
  RenamingProc_40 = ((MR_Word) (conv11_RenamingProc_40));
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[8]), ((MR_Box) (PPId_21)), ((MR_Box) (AnnotationProc_39)), STATE_VARIABLE_AnnotationTable_0_41, STATE_VARIABLE_AnnotationTable_42);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), ((MR_Box) (PPId_21)), ((MR_Box) (RenamingProc_40)), STATE_VARIABLE_RenamingTable_0_43, STATE_VARIABLE_RenamingTable_44);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__record_renaming_prog_point_6_p_0(
  MR_Word Graph_7,
  MR_Word ProgPoint_8,
  MR_Integer RenamingCounter_9,
  MR_Word Region_10,
  MR_Word STATE_VARIABLE_ResurrectionRenameProc_0_16,
  MR_Word * STATE_VARIABLE_ResurrectionRenameProc_17)
{
  MR_bool succeeded;
  MR_String RegionName_12;
  MR_String Renamed_13;
  MR_Word RenamingProgPoint_15;
  MR_String Var_18;
  MR_String Var_20;
  MR_Word RenamingProgPoint0_14;
  MR_Box conv0_RenamingProgPoint0_14;

  RegionName_12 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_7, Region_10);
  Var_20 = mercury__string__int_to_string_1_f_0(RenamingCounter_9);
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "_Resur_", Var_20);
  Renamed_13 = mercury__string__f_43_43_2_f_0(RegionName_12, Var_18);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), STATE_VARIABLE_ResurrectionRenameProc_0_16, ((MR_Box) (ProgPoint_8)), &conv0_RenamingProgPoint0_14);
  if (succeeded)
  {
    RenamingProgPoint0_14 = ((MR_Word) (conv0_RenamingProgPoint0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (Renamed_13));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[3]), ((MR_Box) (RegionName_12)), ((MR_Box) (Var_21)), RenamingProgPoint0_14, &RenamingProgPoint_15);
  }
  else
  {
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Renamed_13));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    RenamingProgPoint_15 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[3]), ((MR_Box) (RegionName_12)), ((MR_Box) (Var_23)));
  }
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]), ((MR_Box) (ProgPoint_8)), ((MR_Box) (RenamingProgPoint_15)), STATE_VARIABLE_ResurrectionRenameProc_0_16, STATE_VARIABLE_ResurrectionRenameProc_17);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_prog_point_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ResurrectionRenameProc_17;

  transform_hlds__rbmm__region_resurrection_renaming__record_renaming_prog_point_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ResurrectionRenameProc_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ResurrectionRenameProc_17));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_prog_point_8_p_0(
  MR_Word Graph_9,
  MR_Word BecomeLiveProc_10,
  MR_Word ResurrectedRegions_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RenamingCounter_0_19,
  MR_Word * STATE_VARIABLE_RenamingCounter_20,
  MR_Word STATE_VARIABLE_ResurrectionRenameProc_0_21,
  MR_Word * STATE_VARIABLE_ResurrectionRenameProc_22)
{
  MR_bool succeeded;
  MR_Word ProgPoint_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Word BecomeLiveProgPoint_16;
  MR_Word ToBeRenamedRegions_17;
  MR_Box conv0_BecomeLiveProgPoint_16;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), BecomeLiveProc_10, ((MR_Box) (ProgPoint_12)), &conv0_BecomeLiveProgPoint_16);
  BecomeLiveProgPoint_16 = ((MR_Word) (conv0_BecomeLiveProgPoint_16));
  mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ResurrectedRegions_11, BecomeLiveProgPoint_16, &ToBeRenamedRegions_17);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ToBeRenamedRegions_17);
  if (succeeded)
  {
    *STATE_VARIABLE_ResurrectionRenameProc_22 = STATE_VARIABLE_ResurrectionRenameProc_0_21;
    *STATE_VARIABLE_RenamingCounter_20 = STATE_VARIABLE_RenamingCounter_0_19;
  }
  else
  {
    MR_Integer N_18;
    MR_Word Var_24;
    MR_Box conv2_STATE_VARIABLE_ResurrectionRenameProc_22;

    mercury__counter__allocate_3_p_0(&N_18, STATE_VARIABLE_RenamingCounter_0_19, STATE_VARIABLE_RenamingCounter_20);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_5[3]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_prog_point_8_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (Graph_9));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (ProgPoint_12));
      MR_hl_field(0, Var_24, 5) = ((MR_Box) (N_18));
    }
    mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), Var_24, ToBeRenamedRegions_17, ((MR_Box) (STATE_VARIABLE_ResurrectionRenameProc_0_21)), &conv2_STATE_VARIABLE_ResurrectionRenameProc_22);
    *STATE_VARIABLE_ResurrectionRenameProc_22 = ((MR_Word) (conv2_STATE_VARIABLE_ResurrectionRenameProc_22));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_exec_path_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RenamingCounter_20;
  MR_Word conv0_STATE_VARIABLE_ResurrectionRenameProc_22;

  transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_prog_point_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RenamingCounter_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ResurrectionRenameProc_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RenamingCounter_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ResurrectionRenameProc_22));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_exec_path_6_p_0(
  MR_Word Graph_7,
  MR_Word BecomeLiveProc_8,
  MR_Word ExecPath_9,
  MR_Word ResurrectedRegions_10,
  MR_Word STATE_VARIABLE_ResurrectionRenameProc_0_13,
  MR_Word * STATE_VARIABLE_ResurrectionRenameProc_14)
{
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Box conv3_Var_12;
  MR_Box conv2_STATE_VARIABLE_ResurrectionRenameProc_14;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_8[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_exec_path_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Graph_7));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (BecomeLiveProc_8));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (ResurrectedRegions_10));
  }
  Var_16 = mercury__counter__init_1_f_0((MR_Integer) 0);
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[0]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), Var_15, ExecPath_9, ((MR_Box) (Var_16)), &conv3_Var_12, ((MR_Box) (STATE_VARIABLE_ResurrectionRenameProc_0_13)), &conv2_STATE_VARIABLE_ResurrectionRenameProc_14);
  *STATE_VARIABLE_ResurrectionRenameProc_14 = ((MR_Word) (conv2_STATE_VARIABLE_ResurrectionRenameProc_14));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_proc_7_p_0(
  MR_Word BecomeLiveTable_8,
  MR_Word _LocalRTable_9,
  MR_Word RptaInfoTable_10,
  MR_Word PPId_11,
  MR_Word PathsContainResurrection_12,
  MR_Word STATE_VARIABLE_ResurrectionRenameTable_0_19,
  MR_Word * STATE_VARIABLE_ResurrectionRenameTable_20)
{
  transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_114_101_103_105_111_110_95_114_101_115_117_114_114_101_99_116_105_111_110_95_114_101_110_97_109_105_110_103_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(BecomeLiveTable_8, RptaInfoTable_10, PPId_11, PathsContainResurrection_12, STATE_VARIABLE_ResurrectionRenameTable_0_19, STATE_VARIABLE_ResurrectionRenameTable_20);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_114_101_103_105_111_110_95_114_101_115_117_114_114_101_99_116_105_111_110_95_114_101_110_97_109_105_110_103_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ResurrectionRenameProc_14;

  transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_exec_path_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ResurrectionRenameProc_14);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ResurrectionRenameProc_14));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_114_101_103_105_111_110_95_114_101_115_117_114_114_101_99_116_105_111_110_95_114_101_110_97_109_105_110_103_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word BecomeLiveTable_8,
  MR_Word RptaInfoTable_10,
  MR_Word PPId_11,
  MR_Word PathsContainResurrection_12,
  MR_Word STATE_VARIABLE_ResurrectionRenameTable_0_19,
  MR_Word * STATE_VARIABLE_ResurrectionRenameTable_20)
{
  MR_Word BecomeLiveProc_14;
  MR_Word RptaInfo_15;
  MR_Word Graph_16;
  MR_Word ResurrectionRenameProc_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv0_BecomeLiveProc_14;
  MR_Box conv1_RptaInfo_15;
  MR_Box conv3_ResurrectionRenameProc_18;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[10]), BecomeLiveTable_8, ((MR_Box) (PPId_11)), &conv0_BecomeLiveProc_14);
  BecomeLiveProc_14 = ((MR_Word) (conv0_BecomeLiveProc_14));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_10, ((MR_Box) (PPId_11)), &conv1_RptaInfo_15);
  RptaInfo_15 = ((MR_Word) (conv1_RptaInfo_15));
  Graph_16 = ((MR_Word) ((MR_hl_field(0, RptaInfo_15, 0))));
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_5[2]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_114_101_103_105_111_110_95_114_101_115_117_114_114_101_99_116_105_111_110_95_114_101_110_97_109_105_110_103_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Graph_16));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (BecomeLiveProc_14));
  }
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[5]));
  mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), Var_21, PathsContainResurrection_12, ((MR_Box) (Var_22)), &conv3_ResurrectionRenameProc_18);
  ResurrectionRenameProc_18 = ((MR_Word) (conv3_ResurrectionRenameProc_18));
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), ((MR_Box) (PPId_11)), ((MR_Box) (ResurrectionRenameProc_18)), STATE_VARIABLE_ResurrectionRenameTable_0_19, STATE_VARIABLE_ResurrectionRenameTable_20);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__find_join_points_in_path_5_p_0(
  MR_Word ProgPointsInPath_6,
  MR_Word JoinPoint_7,
  MR_String HeadVar__3_8,
  MR_Word STATE_VARIABLE_JoinPoints_0_10,
  MR_Word * STATE_VARIABLE_JoinPoints_11)
{
  transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_106_111_105_110_95_112_111_105_110_116_115_95_105_110_95_112_97_116_104_95_95_91_51_93_95_48_5_p_0(ProgPointsInPath_6, JoinPoint_7, STATE_VARIABLE_JoinPoints_0_10, STATE_VARIABLE_JoinPoints_11);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_106_111_105_110_95_112_111_105_110_116_115_95_105_110_95_112_97_116_104_95_95_91_51_93_95_48_5_p_0(
  MR_Word ProgPointsInPath_6,
  MR_Word JoinPoint_7,
  MR_Word STATE_VARIABLE_JoinPoints_0_10,
  MR_Word * STATE_VARIABLE_JoinPoints_11)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), ((MR_Box) (JoinPoint_7)), ProgPointsInPath_6);
  if (succeeded)
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), ((MR_Box) (JoinPoint_7)), STATE_VARIABLE_JoinPoints_0_10, STATE_VARIABLE_JoinPoints_11);
  else
    *STATE_VARIABLE_JoinPoints_11 = STATE_VARIABLE_JoinPoints_0_10;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__path_containing_join_point_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_JoinPoints_11;

  transform_hlds__rbmm__region_resurrection_renaming__find_join_points_in_path_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_JoinPoints_11);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_JoinPoints_11));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__path_containing_join_point_6_p_0(
  MR_Word JoinPointProc_7,
  MR_Word PPId_8,
  MR_Word ResurrectedRegionsProc_9,
  MR_Word NonResurPath_10,
  MR_Word STATE_VARIABLE_PathContainsResurrectionTable_0_16,
  MR_Word * STATE_VARIABLE_PathContainsResurrectionTable_17)
{
  MR_bool succeeded;
  MR_Word ProgPointsInPath_12;
  MR_Word JoinPointsInThisPath_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Box conv1_JoinPointsInThisPath_13;

  mercury__assoc_list__keys_2_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NonResurPath_10, &ProgPointsInPath_12);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_4[1]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__path_containing_join_point_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ProgPointsInPath_12));
  }
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0));
  mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[7]), Var_18, JoinPointProc_7, ((MR_Box) (Var_19)), &conv1_JoinPointsInThisPath_13);
  JoinPointsInThisPath_13 = ((MR_Word) (conv1_JoinPointsInThisPath_13));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), JoinPointsInThisPath_13);
  if (succeeded)
    *STATE_VARIABLE_PathContainsResurrectionTable_17 = STATE_VARIABLE_PathContainsResurrectionTable_0_16;
  else
  {
    MR_Word PathContainsResurrectionProc0_14;
    MR_Word PathContainsResurrectionProc_15;
    MR_Box conv2_PathContainsResurrectionProc0_14;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), STATE_VARIABLE_PathContainsResurrectionTable_0_16, ((MR_Box) (PPId_8)), &conv2_PathContainsResurrectionProc0_14);
    PathContainsResurrectionProc0_14 = ((MR_Word) (conv2_PathContainsResurrectionProc0_14));
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), ((MR_Box) (NonResurPath_10)), ((MR_Box) (ResurrectedRegionsProc_9)), PathContainsResurrectionProc0_14, &PathContainsResurrectionProc_15);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), ((MR_Box) (PPId_8)), ((MR_Box) (PathContainsResurrectionProc_15)), STATE_VARIABLE_PathContainsResurrectionTable_0_16, STATE_VARIABLE_PathContainsResurrectionTable_17);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_PathContainsResurrectionTable_17;

  transform_hlds__rbmm__region_resurrection_renaming__path_containing_join_point_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_PathContainsResurrectionTable_17);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_PathContainsResurrectionTable_17));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_27;

  transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_paths_containing_join_points_proc__382__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_27);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_27));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0(
  MR_Word ExecPathTable_7,
  MR_Word JoinPointTable_8,
  MR_Word PPId_9,
  MR_Word PathContainsResurrectionProc_10,
  MR_Word STATE_VARIABLE_PathContainsResurrectionTable_0_21,
  MR_Word * STATE_VARIABLE_PathContainsResurrectionTable_22)
{
  MR_bool succeeded;
  MR_Word ExecPaths_12;
  MR_Word ResurrectedRegionsInPaths_13;
  MR_Word ResurrectedRegionsProc_17;
  MR_Word PathsContainResurrection_18;
  MR_Word NonResurPaths_19;
  MR_Word Var_24;
  MR_Box conv0_ExecPaths_12;
  MR_Box conv2_ResurrectedRegionsProc_17;
  MR_Word JoinPointProc_20;
  MR_Box conv3_JoinPointProc_20;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[2]), ExecPathTable_7, ((MR_Box) (PPId_9)), &conv0_ExecPaths_12);
  ExecPaths_12 = ((MR_Word) (conv0_ExecPaths_12));
  mercury__map__values_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), PathContainsResurrectionProc_10, &ResurrectedRegionsInPaths_13);
  Var_24 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[12]), ResurrectedRegionsInPaths_13, ((MR_Box) (Var_24)), &conv2_ResurrectedRegionsProc_17);
  ResurrectedRegionsProc_17 = ((MR_Word) (conv2_ResurrectedRegionsProc_17));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), PathContainsResurrectionProc_10, &PathsContainResurrection_18);
  mercury__list__delete_elems_3_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), ExecPaths_12, PathsContainResurrection_18, &NonResurPaths_19);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[3]), JoinPointTable_8, ((MR_Box) (PPId_9)), &conv3_JoinPointProc_20);
  if (succeeded)
  {
    JoinPointProc_20 = ((MR_Word) (conv3_JoinPointProc_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_28;
    MR_Box conv5_STATE_VARIABLE_PathContainsResurrectionTable_22;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_5[1]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0_2));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (JoinPointProc_20));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (PPId_9));
      MR_hl_field(0, Var_28, 5) = ((MR_Box) (ResurrectedRegionsProc_17));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[2]), Var_28, NonResurPaths_19, ((MR_Box) (STATE_VARIABLE_PathContainsResurrectionTable_0_21)), &conv5_STATE_VARIABLE_PathContainsResurrectionTable_22);
    *STATE_VARIABLE_PathContainsResurrectionTable_22 = ((MR_Word) (conv5_STATE_VARIABLE_PathContainsResurrectionTable_22));
  }
  else
    *STATE_VARIABLE_PathContainsResurrectionTable_22 = STATE_VARIABLE_PathContainsResurrectionTable_0_21;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_path_10_p_0(
  MR_Word Paths_11,
  MR_Word Path_12,
  MR_Word STATE_VARIABLE_JP2Name_0_24,
  MR_Word * STATE_VARIABLE_JP2Name_25,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_JoinPoints_0_28,
  MR_Word * STATE_VARIABLE_JoinPoints_29,
  MR_Word STATE_VARIABLE_JoinPointProc_0_30,
  MR_Word * STATE_VARIABLE_JoinPointProc_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TheOtherPaths_17;
    MR_Word PrevPoint_18;
    MR_Word ProgPoint_19;
    MR_Word Var_32;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__list__delete_all_3_p_1((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[5]), Paths_11, ((MR_Box) (Path_12)), &TheOtherPaths_17);
    succeeded = (Path_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PrevPoint_18 = ((MR_Word) ((MR_hl_field(1, Path_12, 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(1, Path_12, 1))));
      succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ProgPoint_19 = ((MR_Word) ((MR_hl_field(1, Var_32, 0))));
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Counter_1_33;
      MR_Word STATE_VARIABLE_JP2Name_1_36;
      MR_Word STATE_VARIABLE_JoinPointProc_1_37;
      MR_Word STATE_VARIABLE_JoinPoints_1_38;
      MR_Word next_value_of_Path_12;
      MR_Word next_value_of_STATE_VARIABLE_JP2Name_0_24;
      MR_Word next_value_of_STATE_VARIABLE_Counter_0_26;
      MR_Word next_value_of_STATE_VARIABLE_JoinPoints_0_28;
      MR_Word next_value_of_STATE_VARIABLE_JoinPointProc_0_30;

      succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), ((MR_Box) (ProgPoint_19)), STATE_VARIABLE_JoinPoints_0_28);
      if (succeeded)
      {
        STATE_VARIABLE_JoinPointProc_1_37 = STATE_VARIABLE_JoinPointProc_0_30;
        STATE_VARIABLE_JoinPoints_1_38 = STATE_VARIABLE_JoinPoints_0_28;
        STATE_VARIABLE_Counter_1_33 = STATE_VARIABLE_Counter_0_26;
        STATE_VARIABLE_JP2Name_1_36 = STATE_VARIABLE_JP2Name_0_24;
      }
      else
      {
        succeeded = transform_hlds__rbmm__region_resurrection_renaming__is_join_point_3_p_0(ProgPoint_19, PrevPoint_18, TheOtherPaths_17);
        if (succeeded)
        {
          MR_String JPName_22;
          MR_String JPName0_21;
          MR_Box conv0_JPName0_21;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_JP2Name_0_24, ((MR_Box) (PrevPoint_18)), &conv0_JPName0_21);
          if (succeeded)
          {
            JPName0_21 = ((MR_String) (conv0_JPName0_21));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            JPName_22 = JPName0_21;
            STATE_VARIABLE_Counter_1_33 = STATE_VARIABLE_Counter_0_26;
            STATE_VARIABLE_JP2Name_1_36 = STATE_VARIABLE_JP2Name_0_24;
          }
          else
          {
            MR_Integer N_23;
            MR_String Var_35;

            mercury__counter__allocate_3_p_0(&N_23, STATE_VARIABLE_Counter_0_26, &STATE_VARIABLE_Counter_1_33);
            Var_35 = mercury__string__int_to_string_1_f_0(N_23);
            JPName_22 = mercury__string__f_43_43_2_f_0((MR_String) "_jp_", Var_35);
            mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PrevPoint_18)), ((MR_Box) (JPName_22)), STATE_VARIABLE_JP2Name_0_24, &STATE_VARIABLE_JP2Name_1_36);
          }
          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ProgPoint_19)), ((MR_Box) (JPName_22)), STATE_VARIABLE_JoinPointProc_0_30, &STATE_VARIABLE_JoinPointProc_1_37);
          mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), ((MR_Box) (ProgPoint_19)), STATE_VARIABLE_JoinPoints_0_28, &STATE_VARIABLE_JoinPoints_1_38);
        }
        else
        {
          STATE_VARIABLE_JoinPointProc_1_37 = STATE_VARIABLE_JoinPointProc_0_30;
          STATE_VARIABLE_JoinPoints_1_38 = STATE_VARIABLE_JoinPoints_0_28;
          STATE_VARIABLE_Counter_1_33 = STATE_VARIABLE_Counter_0_26;
          STATE_VARIABLE_JP2Name_1_36 = STATE_VARIABLE_JP2Name_0_24;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_Path_12 = Var_32;
      next_value_of_STATE_VARIABLE_JP2Name_0_24 = STATE_VARIABLE_JP2Name_1_36;
      next_value_of_STATE_VARIABLE_Counter_0_26 = STATE_VARIABLE_Counter_1_33;
      next_value_of_STATE_VARIABLE_JoinPoints_0_28 = STATE_VARIABLE_JoinPoints_1_38;
      next_value_of_STATE_VARIABLE_JoinPointProc_0_30 = STATE_VARIABLE_JoinPointProc_1_37;
      Path_12 = next_value_of_Path_12;
      STATE_VARIABLE_JP2Name_0_24 = next_value_of_STATE_VARIABLE_JP2Name_0_24;
      STATE_VARIABLE_Counter_0_26 = next_value_of_STATE_VARIABLE_Counter_0_26;
      STATE_VARIABLE_JoinPoints_0_28 = next_value_of_STATE_VARIABLE_JoinPoints_0_28;
      STATE_VARIABLE_JoinPointProc_0_30 = next_value_of_STATE_VARIABLE_JoinPointProc_0_30;
      continue;
    }
    else
    {
      *STATE_VARIABLE_JoinPointProc_31 = STATE_VARIABLE_JoinPointProc_0_30;
      *STATE_VARIABLE_JoinPoints_29 = STATE_VARIABLE_JoinPoints_0_28;
      *STATE_VARIABLE_Counter_27 = STATE_VARIABLE_Counter_0_26;
      *STATE_VARIABLE_JP2Name_25 = STATE_VARIABLE_JP2Name_0_24;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__is_join_point_3_p_0(
  MR_Word ProgPoint_4,
  MR_Word PrevProgPoint_5,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Path_6;
    MR_Word Paths_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Path_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      Paths_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      succeeded = transform_hlds__rbmm__region_resurrection_renaming__is_join_point_2_3_p_0(ProgPoint_4, PrevProgPoint_5, Path_6);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = Paths_7;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__is_join_point_2_3_p_0(
  MR_Word ProgPoint_4,
  MR_Word PrevProgPoint_5,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word P1_6;
    MR_Word P2_7;
    MR_Word Var_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      P1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        P2_7 = ((MR_Word) ((MR_hl_field(1, Var_9, 0))));
        succeeded = transform_hlds__smm_common____Unify____program_point_0_0(P2_7, ProgPoint_4);
        if (succeeded)
        {
          succeeded = transform_hlds__smm_common____Unify____program_point_0_0(P1_6, PrevProgPoint_5);
          succeeded = !(succeeded);
        }
        else
        {
          MR_Word next_value_of_HeadVar__3_3 = Var_9;

          // direct tailcall eliminated
          ;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_proc_5_p_0(
  MR_Word ExecPathTable_6,
  MR_Word PPId_7,
  MR_Word HeadVar__3_8,
  MR_Word STATE_VARIABLE_JoinPointTable_0_20,
  MR_Word * STATE_VARIABLE_JoinPointTable_21)
{
  transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0(ExecPathTable_6, PPId_7, STATE_VARIABLE_JoinPointTable_0_20, STATE_VARIABLE_JoinPointTable_21);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0_2(
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
  MR_Word conv6_STATE_VARIABLE_JP2Name_25;
  MR_Word conv5_STATE_VARIABLE_Counter_27;
  MR_Word conv4_STATE_VARIABLE_JoinPoints_29;
  MR_Word conv3_STATE_VARIABLE_JoinPointProc_31;

  transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_path_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_JP2Name_25, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Counter_27, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_JoinPoints_29, ((MR_Word) (wrapper_arg_8)), &conv3_STATE_VARIABLE_JoinPointProc_31);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_JP2Name_25));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Counter_27));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_JoinPoints_29));
  *wrapper_arg_9 = ((MR_Box) (conv3_STATE_VARIABLE_JoinPointProc_31));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_26;

  transform_hlds__rbmm__region_resurrection_renaming__IntroducedFrom__pred__collect_join_points_proc__293__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_26));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0(
  MR_Word ExecPathTable_6,
  MR_Word PPId_7,
  MR_Word STATE_VARIABLE_JoinPointTable_0_20,
  MR_Word * STATE_VARIABLE_JoinPointTable_21)
{
  MR_Word ExecPaths_10;
  MR_Word Paths_15;
  MR_Word JoinPointProc_19;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Box conv0_ExecPaths_10;
  MR_Box conv2_Paths_15;
  MR_Box conv10_Var_16;
  MR_Box conv9_Var_17;
  MR_Box conv8__JoinPoints_18;
  MR_Box conv7_JoinPointProc_19;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[2]), ExecPathTable_6, ((MR_Box) (PPId_7)), &conv0_ExecPaths_10);
  ExecPaths_10 = ((MR_Word) (conv0_ExecPaths_10));
  mercury__list__foldr_4_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[6]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[11]), ExecPaths_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Paths_15);
  Paths_15 = ((MR_Word) (conv2_Paths_15));
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_10[0]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_106_111_105_110_95_112_111_105_110_116_115_95_112_114_111_99_95_95_91_51_93_95_48_5_p_0_2));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Paths_15));
  }
  Var_28 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_29 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_30 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0));
  Var_31 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__foldl4_10_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[5]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[3]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[7]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[3]), Var_27, Paths_15, ((MR_Box) (Var_28)), &conv10_Var_16, ((MR_Box) (Var_29)), &conv9_Var_17, ((MR_Box) (Var_30)), &conv8__JoinPoints_18, ((MR_Box) (Var_31)), &conv7_JoinPointProc_19);
  JoinPointProc_19 = ((MR_Word) (conv7_JoinPointProc_19));
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[3]), ((MR_Box) (PPId_7)), ((MR_Box) (JoinPointProc_19)), STATE_VARIABLE_JoinPointTable_0_20, STATE_VARIABLE_JoinPointTable_21);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_prog_point_12_p_0(
  MR_Word LRBeforeProc_13,
  MR_Word LRAfterProc_14,
  MR_Word BecomeLiveProc_15,
  MR_Word BecomeDeadBeforeProc_16,
  MR_Word BecomeDeadAfterProc_17,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CreatedCandidates_0_31,
  MR_Word * STATE_VARIABLE_CreatedCandidates_32,
  MR_Word STATE_VARIABLE_RemovedCandidates_0_33,
  MR_Word * STATE_VARIABLE_RemovedCandidates_34,
  MR_Word STATE_VARIABLE_ResurrectedRegionsInExecPath_0_35,
  MR_Word * STATE_VARIABLE_ResurrectedRegionsInExecPath_36)
{
  MR_Word ProgPoint_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, 0))));
  MR_Word BecomeLiveProgPoint_25;
  MR_Word BecomeDeadBeforeProgPoint_26;
  MR_Word BecomeDeadAfterProgPoint_27;
  MR_Word BecomeDeadAtProgPoint_28;
  MR_Word CreatedResurrectedRegions_29;
  MR_Word RemovedResurrectedRegions_30;
  MR_Word STATE_VARIABLE_ResurrectedRegionsInExecPath_1_37;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Box conv0__LRBeforeProgPoint_23;
  MR_Box conv1__LRAfterProgPoint_24;
  MR_Box conv2_BecomeLiveProgPoint_25;
  MR_Box conv3_BecomeDeadBeforeProgPoint_26;
  MR_Box conv4_BecomeDeadAfterProgPoint_27;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), LRBeforeProc_13, ((MR_Box) (ProgPoint_18)), &conv0__LRBeforeProgPoint_23);
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), LRAfterProc_14, ((MR_Box) (ProgPoint_18)), &conv1__LRAfterProgPoint_24);
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), BecomeLiveProc_15, ((MR_Box) (ProgPoint_18)), &conv2_BecomeLiveProgPoint_25);
  BecomeLiveProgPoint_25 = ((MR_Word) (conv2_BecomeLiveProgPoint_25));
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), BecomeDeadBeforeProc_16, ((MR_Box) (ProgPoint_18)), &conv3_BecomeDeadBeforeProgPoint_26);
  BecomeDeadBeforeProgPoint_26 = ((MR_Word) (conv3_BecomeDeadBeforeProgPoint_26));
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), BecomeDeadAfterProc_17, ((MR_Box) (ProgPoint_18)), &conv4_BecomeDeadAfterProgPoint_27);
  BecomeDeadAfterProgPoint_27 = ((MR_Word) (conv4_BecomeDeadAfterProgPoint_27));
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), BecomeDeadAfterProgPoint_27, BecomeDeadBeforeProgPoint_26, &BecomeDeadAtProgPoint_28);
  mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_CreatedCandidates_0_31, BecomeLiveProgPoint_25, &CreatedResurrectedRegions_29);
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), CreatedResurrectedRegions_29, STATE_VARIABLE_ResurrectedRegionsInExecPath_0_35, &STATE_VARIABLE_ResurrectedRegionsInExecPath_1_37);
  mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_RemovedCandidates_0_33, BecomeDeadAtProgPoint_28, &RemovedResurrectedRegions_30);
  mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), RemovedResurrectedRegions_30, STATE_VARIABLE_ResurrectedRegionsInExecPath_1_37, STATE_VARIABLE_ResurrectedRegionsInExecPath_36);
  Var_39 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_CreatedCandidates_0_31, BecomeLiveProgPoint_25);
  mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_39, *STATE_VARIABLE_ResurrectedRegionsInExecPath_36, STATE_VARIABLE_CreatedCandidates_32);
  Var_41 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), STATE_VARIABLE_RemovedCandidates_0_33, BecomeDeadAtProgPoint_28);
  mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_41, *STATE_VARIABLE_ResurrectedRegionsInExecPath_36, STATE_VARIABLE_RemovedCandidates_34);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_exec_path_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_CreatedCandidates_32;
  MR_Word conv1_STATE_VARIABLE_RemovedCandidates_34;
  MR_Word conv0_STATE_VARIABLE_ResurrectedRegionsInExecPath_36;

  transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_prog_point_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_CreatedCandidates_32, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_RemovedCandidates_34, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_ResurrectedRegionsInExecPath_36);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_CreatedCandidates_32));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_RemovedCandidates_34));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_ResurrectedRegionsInExecPath_36));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_exec_path_8_p_0(
  MR_Word LRBeforeProc_9,
  MR_Word LRAfterProc_10,
  MR_Word BecomeLiveProc_11,
  MR_Word BecomeDeadBeforeProc_12,
  MR_Word BecomeDeadAfterProc_13,
  MR_Word ExecPath_14,
  MR_Word STATE_VARIABLE_ResurrectedRegionProc_0_19,
  MR_Word * STATE_VARIABLE_ResurrectedRegionProc_20)
{
  MR_bool succeeded;
  MR_Word ResurrectedRegionsInExecPath_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Box conv5_Var_16;
  MR_Box conv4_Var_17;
  MR_Box conv3_ResurrectedRegionsInExecPath_18;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_3[1]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_exec_path_8_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (LRBeforeProc_9));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (LRAfterProc_10));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (BecomeLiveProc_11));
    MR_hl_field(0, Var_21, 6) = ((MR_Box) (BecomeDeadBeforeProc_12));
    MR_hl_field(0, Var_21, 7) = ((MR_Box) (BecomeDeadAfterProc_13));
  }
  Var_22 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  Var_23 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  Var_24 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
  mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), Var_21, ExecPath_14, ((MR_Box) (Var_22)), &conv5_Var_16, ((MR_Box) (Var_23)), &conv4_Var_17, ((MR_Box) (Var_24)), &conv3_ResurrectedRegionsInExecPath_18);
  ResurrectedRegionsInExecPath_18 = ((MR_Word) (conv3_ResurrectedRegionsInExecPath_18));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ResurrectedRegionsInExecPath_18);
  if (succeeded)
    *STATE_VARIABLE_ResurrectedRegionProc_20 = STATE_VARIABLE_ResurrectedRegionProc_0_19;
  else
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), ((MR_Box) (ExecPath_14)), ((MR_Box) (ResurrectedRegionsInExecPath_18)), STATE_VARIABLE_ResurrectedRegionProc_0_19, STATE_VARIABLE_ResurrectedRegionProc_20);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_proc_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ResurrectedRegionProc_20;

  transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_exec_path_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ResurrectedRegionProc_20);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ResurrectedRegionProc_20));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_proc_12_p_0(
  MR_Word LRBeforeTable_13,
  MR_Word LRAfterTable_14,
  MR_Word BornRTable_15,
  MR_Word DeadRTable_16,
  MR_Word LocalRTable_17,
  MR_Word BecomeLiveTable_18,
  MR_Word BecomeDeadBeforeTable_19,
  MR_Word BecomeDeadAfterTable_20,
  MR_Word PPId_21,
  MR_Word ExecPaths_22,
  MR_Word STATE_VARIABLE_PathContainsResurrectionTable_0_33,
  MR_Word * STATE_VARIABLE_PathContainsResurrectionTable_34)
{
  MR_bool succeeded;
  MR_Word LRBeforeProc_24;
  MR_Word LRAfterProc_25;
  MR_Word BecomeLiveProc_29;
  MR_Word BecomeDeadBeforeProc_30;
  MR_Word BecomeDeadAfterProc_31;
  MR_Word PathContainsResurrectionProc_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Box conv0_LRBeforeProc_24;
  MR_Box conv1_LRAfterProc_25;
  MR_Box conv2__BornR_26;
  MR_Box conv3__DeadR_27;
  MR_Box conv4__LocalR_28;
  MR_Box conv5_BecomeLiveProc_29;
  MR_Box conv6_BecomeDeadBeforeProc_30;
  MR_Box conv7_BecomeDeadAfterProc_31;
  MR_Box conv9_PathContainsResurrectionProc_32;
  MR_Integer Var_37;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[10]), LRBeforeTable_13, ((MR_Box) (PPId_21)), &conv0_LRBeforeProc_24);
  LRBeforeProc_24 = ((MR_Word) (conv0_LRBeforeProc_24));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[10]), LRAfterTable_14, ((MR_Box) (PPId_21)), &conv1_LRAfterProc_25);
  LRAfterProc_25 = ((MR_Word) (conv1_LRAfterProc_25));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), BornRTable_15, ((MR_Box) (PPId_21)), &conv2__BornR_26);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), DeadRTable_16, ((MR_Box) (PPId_21)), &conv3__DeadR_27);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), LocalRTable_17, ((MR_Box) (PPId_21)), &conv4__LocalR_28);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[10]), BecomeLiveTable_18, ((MR_Box) (PPId_21)), &conv5_BecomeLiveProc_29);
  BecomeLiveProc_29 = ((MR_Word) (conv5_BecomeLiveProc_29));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[10]), BecomeDeadBeforeTable_19, ((MR_Box) (PPId_21)), &conv6_BecomeDeadBeforeProc_30);
  BecomeDeadBeforeProc_30 = ((MR_Word) (conv6_BecomeDeadBeforeProc_30));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[10]), BecomeDeadAfterTable_20, ((MR_Box) (PPId_21)), &conv7_BecomeDeadAfterProc_31);
  BecomeDeadAfterProc_31 = ((MR_Word) (conv7_BecomeDeadAfterProc_31));
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_8[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_proc_12_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (LRBeforeProc_24));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (LRAfterProc_25));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (BecomeLiveProc_29));
    MR_hl_field(0, Var_35, 6) = ((MR_Box) (BecomeDeadBeforeProc_30));
    MR_hl_field(0, Var_35, 7) = ((MR_Box) (BecomeDeadAfterProc_31));
  }
  Var_36 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]));
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), Var_35, ExecPaths_22, ((MR_Box) (Var_36)), &conv9_PathContainsResurrectionProc_32);
  PathContainsResurrectionProc_32 = ((MR_Word) (conv9_PathContainsResurrectionProc_32));
  Var_37 = mercury__map__count_1_f_0((MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[1]), PathContainsResurrectionProc_32);
  succeeded = (Var_37 == (MR_Integer) 0);
  if (succeeded)
    *STATE_VARIABLE_PathContainsResurrectionTable_34 = STATE_VARIABLE_PathContainsResurrectionTable_0_33;
  else
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), ((MR_Box) (PPId_21)), ((MR_Box) (PathContainsResurrectionProc_32)), STATE_VARIABLE_PathContainsResurrectionTable_0_33, STATE_VARIABLE_PathContainsResurrectionTable_34);
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(
  MR_String OldRegionName_4,
  MR_String NewRegionName_5,
  MR_Word * RenameInstruction_6)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *RenameInstruction_6 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (OldRegionName_4));
    MR_hl_field(2, base, 1) = ((MR_Box) (NewRegionName_5));
  }
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_p_0(
  MR_Word ProgPoint_5,
  MR_Word Annotation_6,
  MR_Word STATE_VARIABLE_AnnotationProc_0_10,
  MR_Word * STATE_VARIABLE_AnnotationProc_11)
{
  MR_bool succeeded;
  MR_Word Annotations_9;
  MR_Word Annotations0_8;
  MR_Box conv0_Annotations0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[4]), STATE_VARIABLE_AnnotationProc_0_10, ((MR_Box) (ProgPoint_5)), &conv0_Annotations0_8);
  if (succeeded)
  {
    Annotations0_8 = ((MR_Word) (conv0_Annotations0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), ((MR_Box) (Annotation_6)), Annotations0_8);
    if (succeeded)
      Annotations_9 = Annotations0_8;
    else
      {
        Annotations_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Annotations_9, 0) = ((MR_Box) (Annotation_6));
        MR_hl_field(1, Annotations_9, 1) = ((MR_Box) (Annotations0_8));
      }
  }
  else
    {
      Annotations_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Annotations_9, 0) = ((MR_Box) (Annotation_6));
      MR_hl_field(1, Annotations_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[4]), ((MR_Box) (ProgPoint_5)), ((MR_Box) (Annotations_9)), STATE_VARIABLE_AnnotationProc_0_10, STATE_VARIABLE_AnnotationProc_11);
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_AnnotationTable_42;
  MR_Word conv0_STATE_VARIABLE_RenamingTable_44;

  transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_proc_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_AnnotationTable_42, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_RenamingTable_44);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_AnnotationTable_42));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_RenamingTable_44));
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_p_0(
  MR_Word ResurrectionRenameTable_11,
  MR_Word JoinPointTable_12,
  MR_Word LRBeforeTable_13,
  MR_Word LRAfterTable_14,
  MR_Word BornRTable_15,
  MR_Word RptaInfoTable_16,
  MR_Word ResurrectionPathTable_17,
  MR_Word ExecPathTable_18,
  MR_Word * AnnotationTable_19,
  MR_Word * RenamingTable_20)
{
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Box conv3_AnnotationTable_19;
  MR_Box conv2_RenamingTable_20;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_7[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ExecPathTable_18));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (JoinPointTable_12));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (LRBeforeTable_13));
    MR_hl_field(0, Var_21, 6) = ((MR_Box) (LRAfterTable_14));
    MR_hl_field(0, Var_21, 7) = ((MR_Box) (BornRTable_15));
    MR_hl_field(0, Var_21, 8) = ((MR_Box) (RptaInfoTable_16));
    MR_hl_field(0, Var_21, 9) = ((MR_Box) (ResurrectionPathTable_17));
  }
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[8]));
  Var_23 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]));
  mercury__map__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[9]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[7]), Var_21, ResurrectionRenameTable_11, ((MR_Box) (Var_22)), &conv3_AnnotationTable_19, ((MR_Box) (Var_23)), &conv2_RenamingTable_20);
  *AnnotationTable_19 = ((MR_Word) (conv3_AnnotationTable_19));
  *RenamingTable_20 = ((MR_Word) (conv2_RenamingTable_20));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ResurrectionRenameTable_20;

  transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ResurrectionRenameTable_20);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ResurrectionRenameTable_20));
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_p_0(
  MR_Word BecomeLiveTable_6,
  MR_Word LocalRTable_7,
  MR_Word RptaInfoTable_8,
  MR_Word PathContainsResurrectionTable_9,
  MR_Word * ResurrectionRenameTable_10)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Box conv1_ResurrectionRenameTable_10;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_6[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (BecomeLiveTable_6));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (LocalRTable_7));
    MR_hl_field(0, Var_11, 5) = ((MR_Box) (RptaInfoTable_8));
  }
  Var_12 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[6]));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[7]), Var_11, PathContainsResurrectionTable_9, ((MR_Box) (Var_12)), &conv1_ResurrectionRenameTable_10);
  *ResurrectionRenameTable_10 = ((MR_Word) (conv1_ResurrectionRenameTable_10));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PathContainsResurrectionTable_22;

  transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_PathContainsResurrectionTable_22);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_PathContainsResurrectionTable_22));
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_p_0(
  MR_Word ExecPathTable_5,
  MR_Word JoinPointTable_6,
  MR_Word STATE_VARIABLE_PathContainsResurrectionTable_0_8,
  MR_Word * STATE_VARIABLE_PathContainsResurrectionTable_9)
{
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_PathContainsResurrectionTable_9;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ExecPathTable_5));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (JoinPointTable_6));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[2]), Var_10, STATE_VARIABLE_PathContainsResurrectionTable_0_8, ((MR_Box) (STATE_VARIABLE_PathContainsResurrectionTable_0_8)), &conv1_STATE_VARIABLE_PathContainsResurrectionTable_9);
  *STATE_VARIABLE_PathContainsResurrectionTable_9 = ((MR_Word) (conv1_STATE_VARIABLE_PathContainsResurrectionTable_9));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_JoinPointTable_21;

  transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_JoinPointTable_21);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_JoinPointTable_21));
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_p_0(
  MR_Word PathContainsResurrectionTable_4,
  MR_Word ExecPathTable_5,
  MR_Word * JoinPointTable_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_JoinPointTable_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_4[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (ExecPathTable_5));
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[3]));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[4]), Var_7, PathContainsResurrectionTable_4, ((MR_Box) (Var_8)), &conv1_JoinPointTable_6);
  *JoinPointTable_6 = ((MR_Word) (conv1_JoinPointTable_6));
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PathContainsResurrectionTable_34;

  transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_proc_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) ((MR_hl_field(0, closure, 10)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_PathContainsResurrectionTable_34);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_PathContainsResurrectionTable_34));
}

void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_p_0(
  MR_Word ExecPathTable_11,
  MR_Word LRBeforeTable_12,
  MR_Word LRAfterTable_13,
  MR_Word BornRTable_14,
  MR_Word DeadRTable_15,
  MR_Word LocalRTable_16,
  MR_Word BecomeLiveTable_17,
  MR_Word BecomeDeadBeforeTable_18,
  MR_Word BecomeDeadAfterTable_19,
  MR_Word * PathContainsResurrectionTable_20)
{
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv1_PathContainsResurrectionTable_20;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_3[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 8));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (LRBeforeTable_12));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (LRAfterTable_13));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (BornRTable_14));
    MR_hl_field(0, Var_21, 6) = ((MR_Box) (DeadRTable_15));
    MR_hl_field(0, Var_21, 7) = ((MR_Box) (LocalRTable_16));
    MR_hl_field(0, Var_21, 8) = ((MR_Box) (BecomeLiveTable_17));
    MR_hl_field(0, Var_21, 9) = ((MR_Box) (BecomeDeadBeforeTable_18));
    MR_hl_field(0, Var_21, 10) = ((MR_Box) (BecomeDeadAfterTable_19));
  }
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[1]));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__region_resurrection_renaming_scalar_common_1[2]), Var_21, ExecPathTable_11, ((MR_Box) (Var_22)), &conv1_PathContainsResurrectionTable_20);
  *PathContainsResurrectionTable_20 = ((MR_Word) (conv1_PathContainsResurrectionTable_20));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____exec_path_region_set_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_resurrection_renaming____Unify____exec_path_region_set_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____exec_path_region_set_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_resurrection_renaming____Compare____exec_path_region_set_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____join_point_region_name_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_resurrection_renaming____Unify____join_point_region_name_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____join_point_region_name_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_resurrection_renaming____Compare____join_point_region_name_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____proc_resurrection_path_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_resurrection_renaming____Unify____proc_resurrection_path_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____proc_resurrection_path_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_resurrection_renaming____Compare____proc_resurrection_path_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_annotation_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_annotation_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_resurrection_renaming____Unify____rbmm_renaming_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_resurrection_renaming____Compare____rbmm_renaming_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__rbmm__region_resurrection_renaming__init(void)
{
}

void mercury__transform_hlds__rbmm__region_resurrection_renaming__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_exec_path_region_set_table_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_join_point_region_name_table_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_proc_resurrection_path_table_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_annotation_proc_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_annotation_table_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_proc_0);
  MR_register_type_ctor_info(&transform_hlds__rbmm__region_resurrection_renaming__transform_hlds__rbmm__region_resurrection_renaming__type_ctor_info_rbmm_renaming_table_0);
}

void mercury__transform_hlds__rbmm__region_resurrection_renaming__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__region_resurrection_renaming__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.region_resurrection_renaming.
