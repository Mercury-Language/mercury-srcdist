/*
** Automatically generated from `rbmm.condition_renaming.m'
** by the Mercury compiler,
** version rotd-2020-01-23
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


// :- module transform_hlds.rbmm.condition_renaming.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__condition_renaming__init
ENDINIT
*/

#include "transform_hlds.rbmm.condition_renaming.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "int.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1059__1_2_p_0(
  MR_Word LastStep_16,
  MR_Word HeadVar__2_29);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(
  MR_Word ProgPoint_7,
  MR_Word IteRenamingProc_8,
  MR_Integer HowMany_9,
  MR_String RegName_10,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_17,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_18);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(
  MR_Word Graph_1,
  MR_Word PathToThen_2,
  MR_Word RenamedRegions_3,
  MR_Integer HowMany_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_6,
  MR_Word * STATE_VARIABLE_IteRenamingProc_7,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_8,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_9);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(
  MR_Word PathToThen_2,
  MR_Word RenamedRegions_3,
  MR_Integer HowMany_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_6,
  MR_Word * STATE_VARIABLE_IteRenamingProc_7,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_8,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_9);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(
  MR_Word RevPathToThen_2,
  MR_Word RenamedRegions_3,
  MR_Integer HowMany_4,
  MR_Word PrevPoint_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_7,
  MR_Word * STATE_VARIABLE_IteRenamingProc_8,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_9,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_10);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(
  MR_Word ExecPaths_9,
  MR_Word Graph_10,
  MR_Word RevPathToCond_11,
  MR_Word RenamedRegions_12,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_20,
  MR_Word * STATE_VARIABLE_IteRenamingProc_21,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_22,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_23);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(
  MR_Word ExecPathTable_9,
  MR_Word RptaInfoTable_10,
  MR_Word PPId_11,
  MR_Word IteRenamedRegionProc_12,
  MR_Word STATE_VARIABLE_IteRenamingTable_0_22,
  MR_Word * STATE_VARIABLE_IteRenamingTable_23,
  MR_Word STATE_VARIABLE_IteAnnotationTable_0_24,
  MR_Word * STATE_VARIABLE_IteAnnotationTable_25);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(
  MR_Word IteRenamedRegionProc_6,
  MR_Word Graph_7,
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_13,
  MR_Word * STATE_VARIABLE_IteRenamingProc_14);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(
  MR_Word ProgPoint_7,
  MR_Integer HowMany_8,
  MR_Word _Graph_9,
  MR_String RegName_10,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_15,
  MR_Word * STATE_VARIABLE_IteRenamingProc_16);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(
  MR_Word ProgPoint_7,
  MR_Integer HowMany_8,
  MR_String RegName_10,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_15,
  MR_Word * STATE_VARIABLE_IteRenamingProc_16);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(
  MR_Word IteRenamedRegionProc_6,
  MR_Word Graph_7,
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_13,
  MR_Word * STATE_VARIABLE_IteRenamingProc_14);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word RptaInfoTable_8,
  MR_Word PPId_9,
  MR_Word IteRenamedRegionProc_10,
  MR_Word STATE_VARIABLE_IteRenamingTable_0_19,
  MR_Word * STATE_VARIABLE_IteRenamingTable_20);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(
  MR_Word IteRenamedRegionProc_6,
  MR_Word Graph_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_48,
  MR_Word * STATE_VARIABLE_IteRenamingProc_49);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(
  MR_Word tscc_proc_1_input_1_IteRenamedRegionProc_6,
  MR_Word tscc_proc_1_input_2_Graph_7,
  MR_Word tscc_proc_1_input_3_Cond_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IteRenamingProc_20);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0(
  MR_Word tscc_proc_2_input_1_IteRenamedRegionProc_6,
  MR_Word tscc_proc_2_input_2_Graph_7,
  MR_Word tscc_proc_2_input_3_GoalInCond_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IteRenamingProc_20);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(
  MR_Word RevPath_5,
  MR_Word * RevPathToCond_6,
  MR_Integer STATE_VARIABLE_HowMany_0_11,
  MR_Integer * STATE_VARIABLE_HowMany_12);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(
  MR_Word NonLocalRegionsProc_6,
  MR_Word PathToCond_7,
  MR_Word InCondRegions_8,
  MR_Word STATE_VARIABLE_IteRenamedRegionProc_0_12,
  MR_Word * STATE_VARIABLE_IteRenamedRegionProc_13);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(
  MR_Word NonLocalRegionsTable_6,
  MR_Word PPId_7,
  MR_Word InCondRegionsProc_8,
  MR_Word STATE_VARIABLE_IteRenamedRegionTable_0_12,
  MR_Word * STATE_VARIABLE_IteRenamedRegionTable_13);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(
  MR_Word Graph_9,
  MR_Word LRBeforeProc_10,
  MR_Word LRAfterProc_11,
  MR_Word ResurRenamingProc_12,
  MR_Word ResurRenamingAnnoProc_13,
  MR_Word Case_14,
  MR_Word STATE_VARIABLE_InCondRegionsProc_0_19,
  MR_Word * STATE_VARIABLE_InCondRegionsProc_20);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(
  MR_Word Graph_9,
  MR_Word LRBeforeProc_10,
  MR_Word LRAfterProc_11,
  MR_Word ResurRenamingProc_12,
  MR_Word ResurRenamingAnnoProc_13,
  MR_Word Case_14,
  MR_Word STATE_VARIABLE_NonLocalRegionProc_0_19,
  MR_Word * STATE_VARIABLE_NonLocalRegionProc_20);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(
  MR_Word RenameAnnotation_6,
  MR_Word STATE_VARIABLE_LeftRegions_0_13,
  MR_Word * STATE_VARIABLE_LeftRegions_14,
  MR_Word STATE_VARIABLE_RightRegions_0_15,
  MR_Word * STATE_VARIABLE_RightRegions_16);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(
  MR_Word Graph_6,
  MR_Word Renaming_7,
  MR_Word Node_8,
  MR_Word STATE_VARIABLE_Regions_0_13,
  MR_Word * STATE_VARIABLE_Regions_14);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(
  MR_Word Graph_11,
  MR_Word LRBeforeProc_12,
  MR_Word LRAfterProc_13,
  MR_Word ResurRenamingProc_14,
  MR_Word ResurRenamingAnnoProc_15,
  MR_Word Case_16,
  MR_Word STATE_VARIABLE_NonLocalRegionProc_0_22,
  MR_Word * STATE_VARIABLE_NonLocalRegionProc_23,
  MR_Word STATE_VARIABLE_InCondRegionsProc_0_24,
  MR_Word * STATE_VARIABLE_InCondRegionsProc_25);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word RptaInfoTable_15,
  MR_Word LRBeforeTable_16,
  MR_Word LRAfterTable_17,
  MR_Word ResurRenamingTable_18,
  MR_Word ResurRenamingAnnoTable_19,
  MR_Integer ProcId_20,
  MR_Word STATE_VARIABLE_NonLocalRegionsTable_0_37,
  MR_Word * STATE_VARIABLE_NonLocalRegionsTable_38,
  MR_Word STATE_VARIABLE_InCondRegionsTable_0_39,
  MR_Word * STATE_VARIABLE_InCondRegionsTable_40);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(
  MR_Word tscc_proc_1_input_1_Graph_11,
  MR_Word tscc_proc_1_input_2_LRBeforeProc_12,
  MR_Word tscc_proc_1_input_3_LRAfterProc_13,
  MR_Word tscc_proc_1_input_4_ResurRenamingProc_14,
  MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_15,
  MR_Word tscc_proc_1_input_6_Goal_16,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionsProc_22,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_InCondRegionsProc_24);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(
  MR_Word tscc_proc_2_input_1_Graph_1,
  MR_Word tscc_proc_2_input_2_LRBeforeProc_2,
  MR_Word tscc_proc_2_input_3_LRAfterProc_3,
  MR_Word tscc_proc_2_input_4_ResurRenamingProc_4,
  MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_5,
  MR_Word tscc_proc_2_input_6_HeadVar__6_6,
  MR_Word tscc_proc_2_input_7_HeadVar__7_7,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionsProc_22,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_InCondRegionsProc_24);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(
  MR_Word tscc_proc_1_input_1_Graph_9,
  MR_Word tscc_proc_1_input_2_LRBeforeProc_10,
  MR_Word tscc_proc_1_input_3_LRAfterProc_11,
  MR_Word tscc_proc_1_input_4_ResurRenamingProc_12,
  MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_13,
  MR_Word tscc_proc_1_input_6_Cond_14,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_InCondRegionsProc_34);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0(
  MR_Word tscc_proc_2_input_1_Graph_9,
  MR_Word tscc_proc_2_input_2_LRBeforeProc_10,
  MR_Word tscc_proc_2_input_3_LRAfterProc_11,
  MR_Word tscc_proc_2_input_4_ResurRenamingProc_12,
  MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_13,
  MR_Word tscc_proc_2_input_6_GoalInIte_14,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_InCondRegionsProc_34);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(
  MR_Word RevPath_5,
  MR_Word Created_6,
  MR_Word STATE_VARIABLE_InCondRegionsProc_0_12,
  MR_Word * STATE_VARIABLE_InCondRegionsProc_13);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(
  MR_Word tscc_proc_1_input_1_Graph_9,
  MR_Word tscc_proc_1_input_2_LRBeforeProc_10,
  MR_Word tscc_proc_1_input_3_LRAfterProc_11,
  MR_Word tscc_proc_1_input_4_ResurRenamingProc_12,
  MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_13,
  MR_Word tscc_proc_1_input_6_GoalInIte_14,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionProc_37);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0(
  MR_Word tscc_proc_2_input_1_Graph_9,
  MR_Word tscc_proc_2_input_2_LRBeforeProc_10,
  MR_Word tscc_proc_2_input_3_LRAfterProc_11,
  MR_Word tscc_proc_2_input_4_ResurRenamingProc_12,
  MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_13,
  MR_Word tscc_proc_2_input_6_GoalInIte_14,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionProc_37);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(
  MR_Word RevPath_6,
  MR_Word Created_7,
  MR_Word Removed_8,
  MR_Word STATE_VARIABLE_NonLocalRegionProc_0_16,
  MR_Word * STATE_VARIABLE_NonLocalRegionProc_17);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word RptaInfoTable_13,
  MR_Word LRBeforeTable_14,
  MR_Word LRAfterTable_15,
  MR_Word ResurRenamingTable_16,
  MR_Word ResurRenamingAnnoTable_17,
  MR_Word PredId_18,
  MR_Word STATE_VARIABLE_NonLocalRegionsTable_0_23,
  MR_Word * STATE_VARIABLE_NonLocalRegionsTable_24,
  MR_Word STATE_VARIABLE_InCondRegionsTable_0_25,
  MR_Word * STATE_VARIABLE_InCondRegionsTable_26);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_2[11][3];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_3[1][14];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_4[6][8];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_5[3][9];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_6[4][11];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_7[1][15];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_8[2][13];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_9[1][5];

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_10[1][12];




static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[8]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[4]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_3[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_4[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_6[4][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_7[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_8[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_9[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__condition_renaming_scalar_common_10[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__condition_renaming__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.condition_renaming",
  (MR_String) "goal_path_regions_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.condition_renaming",
  (MR_String) "proc_goal_path_regions_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__rbmm__condition_renaming__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1059__1_2_p_0(
  MR_Word LastStep_16,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(LastStep_16, HeadVar__2_29);
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(
  MR_Word ProgPoint_7,
  MR_Word IteRenamingProc_8,
  MR_Integer HowMany_9,
  MR_String RegName_10,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_17,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_18)
{
  {
    MR_bool succeeded;
    MR_String CurrentName_12;
    MR_Word Annotation_16;
    MR_String Var_19;
    MR_String Var_21;
    MR_Word Renaming_13;
    MR_Box conv0_Renaming_13;

    Var_21 = mercury__string__int_to_string_1_f_0(HowMany_9);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "_ite_", Var_21);
    CurrentName_12 = mercury__string__f_43_43_2_f_0(RegName_10, Var_19);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), IteRenamingProc_8, ((MR_Box) (ProgPoint_7)), &conv0_Renaming_13);
    if (succeeded)
    {
      Renaming_13 = ((MR_Word) (conv0_Renaming_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word RenameToList_14;
      MR_Box conv1_RenameToList_14;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]), Renaming_13, ((MR_Box) (RegName_10)), &conv1_RenameToList_14);
      if (succeeded)
      {
        RenameToList_14 = ((MR_Word) (conv1_RenameToList_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Var_22;

        Var_22 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RenameToList_14);
        succeeded = (Var_22 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_String RenameTo_15;
          MR_Box conv2_RenameTo_15;

          conv2_RenameTo_15 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RenameToList_14);
          RenameTo_15 = ((MR_String) (conv2_RenameTo_15));
          transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(CurrentName_12, RenameTo_15, &Annotation_16);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.introduce_reverse_renaming\'/6", (MR_String) "more than one renaming");
            return;
          }
      }
      else
        transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(CurrentName_12, RegName_10, &Annotation_16);
    }
    else
      transform_hlds__rbmm__region_resurrection_renaming__make_renaming_instruction_3_p_0(CurrentName_12, RegName_10, &Annotation_16);
    transform_hlds__rbmm__region_resurrection_renaming__record_annotation_4_p_0(ProgPoint_7, Annotation_16, STATE_VARIABLE_IteAnnotationProc_0_17, STATE_VARIABLE_IteAnnotationProc_18);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(
  MR_Word Graph_1,
  MR_Word PathToThen_2,
  MR_Word RenamedRegions_3,
  MR_Integer HowMany_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_6,
  MR_Word * STATE_VARIABLE_IteRenamingProc_7,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_8,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_9)
{
  transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(PathToThen_2, RenamedRegions_3, HowMany_4, HeadVar__5_5, STATE_VARIABLE_IteRenamingProc_0_6, STATE_VARIABLE_IteRenamingProc_7, STATE_VARIABLE_IteAnnotationProc_0_8, STATE_VARIABLE_IteAnnotationProc_9);
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_95_91_49_93_95_48_9_p_0(
  MR_Word PathToThen_2,
  MR_Word RenamedRegions_3,
  MR_Integer HowMany_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_6,
  MR_Word * STATE_VARIABLE_IteRenamingProc_7,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_8,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_9)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_IteAnnotationProc_9 = STATE_VARIABLE_IteAnnotationProc_0_8;
    *STATE_VARIABLE_IteRenamingProc_7 = STATE_VARIABLE_IteRenamingProc_0_6;
  }
  else
  {
    MR_Word ProgPoint_24;
    MR_Word ProgPointGoals_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));

    ProgPoint_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
    transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(PathToThen_2, RenamedRegions_3, HowMany_4, ProgPoint_24, ProgPointGoals_26, STATE_VARIABLE_IteRenamingProc_0_6, STATE_VARIABLE_IteRenamingProc_7, STATE_VARIABLE_IteAnnotationProc_0_8, STATE_VARIABLE_IteAnnotationProc_9);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_IteAnnotationProc_18;

    transform_hlds__rbmm__condition_renaming__introduce_reverse_renaming_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_IteAnnotationProc_18);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_IteAnnotationProc_18));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0(
  MR_Word RevPathToThen_2,
  MR_Word RenamedRegions_3,
  MR_Integer HowMany_4,
  MR_Word PrevPoint_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_7,
  MR_Word * STATE_VARIABLE_IteRenamingProc_8,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_9,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IteAnnotationProc_10 = STATE_VARIABLE_IteAnnotationProc_0_9;
      *STATE_VARIABLE_IteRenamingProc_8 = STATE_VARIABLE_IteRenamingProc_0_7;
    }
    else
    {
      MR_Word ProgPoint_27;
      MR_Word ProgPointGoals_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word RevGoalPath_33;
      MR_Word RevGoalPathSteps_34;
      MR_Word GoalPathSteps_35;
      MR_Word RevPathToThenSteps_36;
      MR_Word PathToThenSteps_37;
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word FromThenSteps_38;

      ProgPoint_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
      RevGoalPath_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_27, (MR_Integer) 1))));
      transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(RevGoalPath_33, &RevGoalPathSteps_34);
      mercury__list__reverse_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), RevGoalPathSteps_34, &GoalPathSteps_35);
      transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(RevPathToThen_2, &RevPathToThenSteps_36);
      mercury__list__reverse_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), RevPathToThenSteps_36, &PathToThenSteps_37);
      succeeded = mercury__list__append_3_p_3((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), PathToThenSteps_37, &FromThenSteps_38, GoalPathSteps_35);
      if (succeeded)
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0), ((MR_Box) ((MR_Unsigned) 0U)), FromThenSteps_38);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_IteRenamingProc_46_46;
          MR_Word PrevIteRenaming_39;
          MR_Box conv0_PrevIteRenaming_39;
          MR_Word next_value_of_PrevPoint_5;
          MR_Word next_value_of_HeadVar__6_6;
          MR_Word next_value_of_STATE_VARIABLE_IteRenamingProc_0_7;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), STATE_VARIABLE_IteRenamingProc_0_7, ((MR_Box) (PrevPoint_5)), &conv0_PrevIteRenaming_39);
          if (succeeded)
          {
            PrevIteRenaming_39 = ((MR_Word) (conv0_PrevIteRenaming_39));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), ((MR_Box) (ProgPoint_27)), ((MR_Box) (PrevIteRenaming_39)), STATE_VARIABLE_IteRenamingProc_0_7, &STATE_VARIABLE_IteRenamingProc_46_46);
          else
            STATE_VARIABLE_IteRenamingProc_46_46 = STATE_VARIABLE_IteRenamingProc_0_7;
          // direct tailcall eliminated
          ;
          next_value_of_PrevPoint_5 = ProgPoint_27;
          next_value_of_HeadVar__6_6 = ProgPointGoals_29;
          next_value_of_STATE_VARIABLE_IteRenamingProc_0_7 = STATE_VARIABLE_IteRenamingProc_46_46;
          PrevPoint_5 = next_value_of_PrevPoint_5;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          STATE_VARIABLE_IteRenamingProc_0_7 = next_value_of_STATE_VARIABLE_IteRenamingProc_0_7;
          continue;
        }
        else
        {
          MR_Word Var_49;
          MR_Box conv2_STATE_VARIABLE_IteAnnotationProc_10;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_105_116_101_95_97_110_110_111_116_97_116_105_111_110_95_101_120_101_99_95_112_97_116_104_95_50_95_95_91_49_93_95_48_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ProgPoint_27));
            MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_7));
            MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) (HowMany_4));
          }
          mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[5]), Var_49, RenamedRegions_3, ((MR_Box) (STATE_VARIABLE_IteAnnotationProc_0_9)), &conv2_STATE_VARIABLE_IteAnnotationProc_10);
          *STATE_VARIABLE_IteAnnotationProc_10 = ((MR_Word) (conv2_STATE_VARIABLE_IteAnnotationProc_10));
          *STATE_VARIABLE_IteRenamingProc_8 = STATE_VARIABLE_IteRenamingProc_0_7;
        }
      }
      else
      {
        MR_Word next_value_of_PrevPoint_5 = ProgPoint_27;
        MR_Word next_value_of_HeadVar__6_6 = ProgPointGoals_29;

        // direct tailcall eliminated
        ;
        PrevPoint_5 = next_value_of_PrevPoint_5;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word EarlierPath_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word LaterStep_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word EarlierSteps_5;

    transform_hlds__rbmm__condition_renaming__reverse_goal_path_to_steps_2_p_0(EarlierPath_3, &EarlierSteps_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LaterStep_4));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (EarlierSteps_5));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_IteRenamingProc_7;
    MR_Word conv0_STATE_VARIABLE_IteAnnotationProc_9;

    transform_hlds__rbmm__condition_renaming__collect_ite_annotation_exec_path_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_IteRenamingProc_7, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_IteAnnotationProc_9);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_IteRenamingProc_7));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_IteAnnotationProc_9));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__rbmm__condition_renaming__IntroducedFrom__pred__collect_ite_annotation_region_names__1059__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(
  MR_Word ExecPaths_9,
  MR_Word Graph_10,
  MR_Word RevPathToCond_11,
  MR_Word RenamedRegions_12,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_20,
  MR_Word * STATE_VARIABLE_IteRenamingProc_21,
  MR_Word STATE_VARIABLE_IteAnnotationProc_0_22,
  MR_Word * STATE_VARIABLE_IteAnnotationProc_23)
{
  {
    MR_bool succeeded;

    if ((RevPathToCond_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_annotation_region_names\'/8", (MR_String) "empty path to condition");
        return;
      }
    else
    {
      MR_Word RevInitialPath_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPathToCond_11, (MR_Integer) 0))));
      MR_Word LastStep_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPathToCond_11, (MR_Integer) 1))));
      MR_Word RevPathToThen_17;
      MR_Integer HowMany_19;
      MR_Word Var_26;
      MR_Word Var_32;
      MR_Word RevInitialPath_49;
      MR_Word LastStep_50;
      MR_Box conv3_STATE_VARIABLE_IteRenamingProc_21;
      MR_Box conv2_STATE_VARIABLE_IteAnnotationProc_23;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (LastStep_16));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_annotation_region_names\'/8", (MR_String) "not step_ite_cond");
      {
        RevPathToThen_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RevPathToThen_17, 0) = ((MR_Box) (RevInitialPath_15));
        MR_hl_field(MR_mktag(1), RevPathToThen_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      }
      RevInitialPath_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPathToCond_11, (MR_Integer) 0))));
      LastStep_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPathToCond_11, (MR_Integer) 1))));
      succeeded = (LastStep_50 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_HowMany_13_52;
        MR_Word Var_51;

        transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(RevInitialPath_49, &Var_51, (MR_Integer) 0, &STATE_VARIABLE_HowMany_13_52);
        HowMany_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HowMany_13_52 + (MR_Unsigned) 1);
      }
      else
      {
        MR_Word Var_56;

        transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(RevInitialPath_49, &Var_56, (MR_Integer) 0, &HowMany_19);
      }
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Graph_10));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (RevPathToThen_17));
        MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (RenamedRegions_12));
        MR_hl_field(MR_mktag(0), Var_32, 6) = ((MR_Box) (HowMany_19));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[4]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[5]), Var_32, ExecPaths_9, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_20)), &conv3_STATE_VARIABLE_IteRenamingProc_21, ((MR_Box) (STATE_VARIABLE_IteAnnotationProc_0_22)), &conv2_STATE_VARIABLE_IteAnnotationProc_23);
      *STATE_VARIABLE_IteRenamingProc_21 = ((MR_Word) (conv3_STATE_VARIABLE_IteRenamingProc_21));
      *STATE_VARIABLE_IteAnnotationProc_23 = ((MR_Word) (conv2_STATE_VARIABLE_IteAnnotationProc_23));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_IteRenamingProc_21;
    MR_Word conv3_STATE_VARIABLE_IteAnnotationProc_23;

    transform_hlds__rbmm__condition_renaming__collect_ite_annotation_region_names_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_IteRenamingProc_21, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_IteAnnotationProc_23);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_IteRenamingProc_21));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_IteAnnotationProc_23));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(
  MR_Word ExecPathTable_9,
  MR_Word RptaInfoTable_10,
  MR_Word PPId_11,
  MR_Word IteRenamedRegionProc_12,
  MR_Word STATE_VARIABLE_IteRenamingTable_0_22,
  MR_Word * STATE_VARIABLE_IteRenamingTable_23,
  MR_Word STATE_VARIABLE_IteAnnotationTable_0_24,
  MR_Word * STATE_VARIABLE_IteAnnotationTable_25)
{
  {
    MR_Word ExecPaths_15;
    MR_Word RptaInfo_16;
    MR_Word IteRenamingProc0_17;
    MR_Word Graph_18;
    MR_Word IteRenamingProc_20;
    MR_Word IteAnnotationProc_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv0_ExecPaths_15;
    MR_Box conv1_RptaInfo_16;
    MR_Box conv2_IteRenamingProc0_17;
    MR_Box conv6_IteRenamingProc_20;
    MR_Box conv5_IteAnnotationProc_21;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[5]), ExecPathTable_9, ((MR_Box) (PPId_11)), &conv0_ExecPaths_15);
    ExecPaths_15 = ((MR_Word) (conv0_ExecPaths_15));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_10, ((MR_Box) (PPId_11)), &conv1_RptaInfo_16);
    RptaInfo_16 = ((MR_Word) (conv1_RptaInfo_16));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), STATE_VARIABLE_IteRenamingTable_0_22, ((MR_Box) (PPId_11)), &conv2_IteRenamingProc0_17);
    IteRenamingProc0_17 = ((MR_Word) (conv2_IteRenamingProc0_17));
    Graph_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RptaInfo_16, (MR_Integer) 0))));
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ExecPaths_15));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Graph_18));
    }
    Var_27 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[2]));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[5]), Var_26, IteRenamedRegionProc_12, ((MR_Box) (IteRenamingProc0_17)), &conv6_IteRenamingProc_20, ((MR_Box) (Var_27)), &conv5_IteAnnotationProc_21);
    IteRenamingProc_20 = ((MR_Word) (conv6_IteRenamingProc_20));
    IteAnnotationProc_21 = ((MR_Word) (conv5_IteAnnotationProc_21));
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[5]), ((MR_Box) (PPId_11)), ((MR_Box) (IteAnnotationProc_21)), STATE_VARIABLE_IteAnnotationTable_0_24, STATE_VARIABLE_IteAnnotationTable_25);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), ((MR_Box) (PPId_11)), ((MR_Box) (IteRenamingProc_20)), STATE_VARIABLE_IteRenamingTable_0_22, STATE_VARIABLE_IteRenamingTable_23);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(
  MR_Word IteRenamedRegionProc_6,
  MR_Word Graph_7,
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_13,
  MR_Word * STATE_VARIABLE_IteRenamingProc_14)
{
  {
    MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_8, (MR_Integer) 2))));

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(IteRenamedRegionProc_6, Graph_7, Goal_12, STATE_VARIABLE_IteRenamingProc_0_13, STATE_VARIABLE_IteRenamingProc_14);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(
  MR_Word ProgPoint_7,
  MR_Integer HowMany_8,
  MR_Word _Graph_9,
  MR_String RegName_10,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_15,
  MR_Word * STATE_VARIABLE_IteRenamingProc_16)
{
  transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(ProgPoint_7, HowMany_8, RegName_10, STATE_VARIABLE_IteRenamingProc_0_15, STATE_VARIABLE_IteRenamingProc_16);
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_105_116_101_95_114_101_110_97_109_105_110_103_95_95_91_51_93_95_48_6_p_0(
  MR_Word ProgPoint_7,
  MR_Integer HowMany_8,
  MR_String RegName_10,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_15,
  MR_Word * STATE_VARIABLE_IteRenamingProc_16)
{
  {
    MR_bool succeeded;
    MR_String NewName_12;
    MR_Word IteRenaming_14;
    MR_String Var_17;
    MR_String Var_19;
    MR_Word IteRenaming0_13;
    MR_Box conv0_IteRenaming0_13;

    Var_19 = mercury__string__int_to_string_1_f_0(HowMany_8);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "_ite_", Var_19);
    NewName_12 = mercury__string__f_43_43_2_f_0(RegName_10, Var_17);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), STATE_VARIABLE_IteRenamingProc_0_15, ((MR_Box) (ProgPoint_7)), &conv0_IteRenaming0_13);
    if (succeeded)
    {
      IteRenaming0_13 = ((MR_Word) (conv0_IteRenaming0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (NewName_12));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]), ((MR_Box) (RegName_10)), ((MR_Box) (Var_20)), IteRenaming0_13, &IteRenaming_14);
    }
    else
    {
      MR_Word Var_22;
      MR_Word Var_23;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (NewName_12));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_23 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]));
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]), ((MR_Box) (RegName_10)), ((MR_Box) (Var_22)), Var_23, &IteRenaming_14);
    }
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), ((MR_Box) (ProgPoint_7)), ((MR_Box) (IteRenaming_14)), STATE_VARIABLE_IteRenamingProc_0_15, STATE_VARIABLE_IteRenamingProc_16);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(
  MR_Word IteRenamedRegionProc_6,
  MR_Word Graph_7,
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_13,
  MR_Word * STATE_VARIABLE_IteRenamingProc_14)
{
  {
    MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_8, (MR_Integer) 2))));

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(IteRenamedRegionProc_6, Graph_7, Goal_12, STATE_VARIABLE_IteRenamingProc_0_13, STATE_VARIABLE_IteRenamingProc_14);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word RptaInfoTable_8,
  MR_Word PPId_9,
  MR_Word IteRenamedRegionProc_10,
  MR_Word STATE_VARIABLE_IteRenamingTable_0_19,
  MR_Word * STATE_VARIABLE_IteRenamingTable_20)
{
  {
    MR_Word ProcInfo0_12;
    MR_Word ProcInfo_13;
    MR_Word Goal_14;
    MR_Word RptaInfo_15;
    MR_Word Graph_16;
    MR_Word IteRenamingProc_18;
    MR_Word Var_21;
    MR_Box conv0_RptaInfo_15;

    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_7, PPId_9, &ProcInfo0_12);
    hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(ModuleInfo_7, ProcInfo0_12, &ProcInfo_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_13, &Goal_14);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_8, ((MR_Box) (PPId_9)), &conv0_RptaInfo_15);
    RptaInfo_15 = ((MR_Word) (conv0_RptaInfo_15));
    Graph_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RptaInfo_15, (MR_Integer) 0))));
    Var_21 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]));
    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(IteRenamedRegionProc_10, Graph_16, Goal_14, Var_21, &IteRenamingProc_18);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), ((MR_Box) (PPId_9)), ((MR_Box) (IteRenamingProc_18)), STATE_VARIABLE_IteRenamingTable_0_19, STATE_VARIABLE_IteRenamingTable_20);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_IteRenamingProc_14;

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_case_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_IteRenamingProc_14);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_IteRenamingProc_14));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_IteRenamingProc_49;

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IteRenamingProc_49);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IteRenamingProc_49));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IteRenamingProc_49;

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IteRenamingProc_49);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IteRenamingProc_49));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(
  MR_Word IteRenamedRegionProc_6,
  MR_Word Graph_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_IteRenamingProc_0_48,
  MR_Word * STATE_VARIABLE_IteRenamingProc_49)
{
  while (MR_TRUE)
  {
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_41 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Word next_value_of_Goal_8 = SubGoal_41;

          // direct tailcall eliminated
          ;
          Goal_8 = next_value_of_Goal_8;
          continue;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_IteRenamingProc_49 = STATE_VARIABLE_IteRenamingProc_0_48;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_IteRenamingProc_49 = STATE_VARIABLE_IteRenamingProc_0_48;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_IteRenamingProc_49 = STATE_VARIABLE_IteRenamingProc_0_48;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_IteRenamingProc_49 = STATE_VARIABLE_IteRenamingProc_0_48;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Word Var_61;
              MR_Box conv1_STATE_VARIABLE_IteRenamingProc_49;

              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (Graph_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_61, Conjs_36, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_48)), &conv1_STATE_VARIABLE_IteRenamingProc_49);
              *STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) (conv1_STATE_VARIABLE_IteRenamingProc_49));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
              MR_Word Var_59;
              MR_Box conv3_STATE_VARIABLE_IteRenamingProc_49;

              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Graph_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_59, Disjs_37, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_48)), &conv3_STATE_VARIABLE_IteRenamingProc_49);
              *STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) (conv3_STATE_VARIABLE_IteRenamingProc_49));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
              MR_Word Var_57;
              MR_Box conv5_STATE_VARIABLE_IteRenamingProc_49;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[5]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0_3));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Graph_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_57, Cases_40, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_48)), &conv5_STATE_VARIABLE_IteRenamingProc_49);
              *STATE_VARIABLE_IteRenamingProc_49 = ((MR_Word) (conv5_STATE_VARIABLE_IteRenamingProc_49));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_8 = SubGoal_63;

              // direct tailcall eliminated
              ;
              Goal_8 = next_value_of_Goal_8;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
              MR_Word Then_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
              MR_Word Else_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_IteRenamingProc_52_52;
              MR_Word STATE_VARIABLE_IteRenamingProc_53_53;
              MR_Word next_value_of_Goal_8;
              MR_Word next_value_of_STATE_VARIABLE_IteRenamingProc_0_48;

              transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(IteRenamedRegionProc_6, Graph_7, Cond_44, STATE_VARIABLE_IteRenamingProc_0_48, &STATE_VARIABLE_IteRenamingProc_52_52);
              transform_hlds__rbmm__condition_renaming__collect_ite_renaming_goal_5_p_0(IteRenamedRegionProc_6, Graph_7, Then_45, STATE_VARIABLE_IteRenamingProc_52_52, &STATE_VARIABLE_IteRenamingProc_53_53);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = Else_46;
              next_value_of_STATE_VARIABLE_IteRenamingProc_0_48 = STATE_VARIABLE_IteRenamingProc_53_53;
              Goal_8 = next_value_of_Goal_8;
              STATE_VARIABLE_IteRenamingProc_0_48 = next_value_of_STATE_VARIABLE_IteRenamingProc_0_48;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_goal\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_IteRenamingProc_16;

    transform_hlds__rbmm__condition_renaming__record_ite_renaming_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_IteRenamingProc_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_IteRenamingProc_16));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_IteRenamingProc_14;

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_case_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_IteRenamingProc_14);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_IteRenamingProc_14));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_IteRenamingProc_20;

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_IteRenamingProc_20);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_IteRenamingProc_20));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_IteRenamingProc_20;

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_IteRenamingProc_20);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_IteRenamingProc_20));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(
  MR_Word tscc_proc_1_input_1_IteRenamedRegionProc_6,
  MR_Word tscc_proc_1_input_2_Graph_7,
  MR_Word tscc_proc_1_input_3_Cond_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IteRenamingProc_20)
{
  {
    MR_Word tscc_proc_2_input_1_IteRenamedRegionProc_6;
    MR_Word tscc_proc_2_input_2_Graph_7;
    MR_Word tscc_proc_2_input_3_GoalInCond_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51;
    MR_Word tscc_output_1_STATE_VARIABLE_IteRenamingProc_20;

    // The code for TSCC PROC 1: pred transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition/5-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word IteRenamedRegionProc_6 = tscc_proc_1_input_1_IteRenamedRegionProc_6;
      MR_Word Graph_7 = tscc_proc_1_input_2_Graph_7;
      MR_Word Cond_8 = tscc_proc_1_input_3_Cond_8;
      MR_Word STATE_VARIABLE_IteRenamingProc_0_19 = tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
      MR_Word STATE_VARIABLE_IteRenamingProc_20;
      MR_bool succeeded;
      MR_Word CondExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_8, (MR_Integer) 0))));
      MR_Word CondInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_8, (MR_Integer) 1))));
      MR_Word HasSubGoals_12;

      HasSubGoals_12 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(CondExpr_10);
      switch (HasSubGoals_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ProgPoint_13;
            MR_Word RevGoalPath_15;
            MR_Word RevPathToClosestCond_16;
            MR_Integer HowMany_17;
            MR_Word RenamedRegions_18;
            MR_Box conv0_RenamedRegions_18;

            ProgPoint_13 = transform_hlds__smm_common__program_point_init_1_f_0(CondInfo_11);
            RevGoalPath_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_13, (MR_Integer) 1))));
            transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(RevGoalPath_15, &RevPathToClosestCond_16, (MR_Integer) 0, &HowMany_17);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), IteRenamedRegionProc_6, ((MR_Box) (RevPathToClosestCond_16)), &conv0_RenamedRegions_18);
            if (succeeded)
            {
              RenamedRegions_18 = ((MR_Word) (conv0_RenamedRegions_18));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_23;
              MR_Box conv2_STATE_VARIABLE_IteRenamingProc_20;

              {
                Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ProgPoint_13));
                MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (HowMany_17));
                MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Graph_7));
              }
              mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_23, RenamedRegions_18, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_19)), &conv2_STATE_VARIABLE_IteRenamingProc_20);
              STATE_VARIABLE_IteRenamingProc_20 = ((MR_Word) (conv2_STATE_VARIABLE_IteRenamingProc_20));
            }
            else
              STATE_VARIABLE_IteRenamingProc_20 = STATE_VARIABLE_IteRenamingProc_0_19;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_IteRenamedRegionProc_6 = IteRenamedRegionProc_6;
            MR_Word next_value_of_tscc_proc_2_input_2_Graph_7 = Graph_7;
            MR_Word next_value_of_tscc_proc_2_input_3_GoalInCond_8 = Cond_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51 = STATE_VARIABLE_IteRenamingProc_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_IteRenamedRegionProc_6 = next_value_of_tscc_proc_2_input_1_IteRenamedRegionProc_6;
            tscc_proc_2_input_2_Graph_7 = next_value_of_tscc_proc_2_input_2_Graph_7;
            tscc_proc_2_input_3_GoalInCond_8 = next_value_of_tscc_proc_2_input_3_GoalInCond_8;
            tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_IteRenamingProc_20 = STATE_VARIABLE_IteRenamingProc_20;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word IteRenamedRegionProc_6 = tscc_proc_2_input_1_IteRenamedRegionProc_6;
      MR_Word Graph_7 = tscc_proc_2_input_2_Graph_7;
      MR_Word GoalInCond_8 = tscc_proc_2_input_3_GoalInCond_8;
      MR_Word STATE_VARIABLE_IteRenamingProc_0_51 = tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51;
      MR_Word STATE_VARIABLE_IteRenamingProc_52;
      MR_Word Expr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInCond_8, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Expr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_20 = (MR_Word) ((MR_Word) (Expr_10));
            MR_Word next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6 = IteRenamedRegionProc_6;
            MR_Word next_value_of_tscc_proc_1_input_2_Graph_7 = Graph_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Cond_8 = Goal_20;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = STATE_VARIABLE_IteRenamingProc_0_51;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_IteRenamedRegionProc_6 = next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6;
            tscc_proc_1_input_2_Graph_7 = next_value_of_tscc_proc_1_input_2_Graph_7;
            tscc_proc_1_input_3_Cond_8 = next_value_of_tscc_proc_1_input_3_Cond_8;
            tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));

                if ((Var_104 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_69;
                  MR_Box conv4_STATE_VARIABLE_IteRenamingProc_52;

                  {
                    Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
                    MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                    MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (Graph_7));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_69, Var_104, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_51)), &conv4_STATE_VARIABLE_IteRenamingProc_52);
                  STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) (conv4_STATE_VARIABLE_IteRenamingProc_52));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));

                if ((Var_106 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_65;
                  MR_Box conv6_STATE_VARIABLE_IteRenamingProc_52;

                  {
                    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
                    MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                    MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Graph_7));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_65, Var_106, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_51)), &conv6_STATE_VARIABLE_IteRenamingProc_52);
                  STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) (conv6_STATE_VARIABLE_IteRenamingProc_52));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 3))));
                MR_Word Var_62;
                MR_Box conv8_STATE_VARIABLE_IteRenamingProc_52;

                {
                  Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[5]));
                  MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                  MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (Graph_7));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_62, Cases_19, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_51)), &conv8_STATE_VARIABLE_IteRenamingProc_52);
                STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) (conv8_STATE_VARIABLE_IteRenamingProc_52));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6 = IteRenamedRegionProc_6;
                MR_Word next_value_of_tscc_proc_1_input_2_Graph_7 = Graph_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Cond_8 = Goal_72;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = STATE_VARIABLE_IteRenamingProc_0_51;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_IteRenamedRegionProc_6 = next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6;
                tscc_proc_1_input_2_Graph_7 = next_value_of_tscc_proc_1_input_2_Graph_7;
                tscc_proc_1_input_3_Cond_8 = next_value_of_tscc_proc_1_input_3_Cond_8;
                tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
                MR_Word Then_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 3))));
                MR_Word Else_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_IteRenamingProc_57_57;
                MR_Word STATE_VARIABLE_IteRenamingProc_58_58;
                MR_Word next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6;
                MR_Word next_value_of_tscc_proc_1_input_2_Graph_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Cond_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;

                transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(IteRenamedRegionProc_6, Graph_7, Cond_23, STATE_VARIABLE_IteRenamingProc_0_51, &STATE_VARIABLE_IteRenamingProc_57_57);
                transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(IteRenamedRegionProc_6, Graph_7, Then_24, STATE_VARIABLE_IteRenamingProc_57_57, &STATE_VARIABLE_IteRenamingProc_58_58);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6 = IteRenamedRegionProc_6;
                next_value_of_tscc_proc_1_input_2_Graph_7 = Graph_7;
                next_value_of_tscc_proc_1_input_3_Cond_8 = Else_25;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = STATE_VARIABLE_IteRenamingProc_58_58;
                tscc_proc_1_input_1_IteRenamedRegionProc_6 = next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6;
                tscc_proc_1_input_2_Graph_7 = next_value_of_tscc_proc_1_input_2_Graph_7;
                tscc_proc_1_input_3_Cond_8 = next_value_of_tscc_proc_1_input_3_Cond_8;
                tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_IteRenamingProc_20 = STATE_VARIABLE_IteRenamingProc_52;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_IteRenamingProc_20 = tscc_output_1_STATE_VARIABLE_IteRenamingProc_20;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0(
  MR_Word tscc_proc_2_input_1_IteRenamedRegionProc_6,
  MR_Word tscc_proc_2_input_2_Graph_7,
  MR_Word tscc_proc_2_input_3_GoalInCond_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IteRenamingProc_20)
{
  {
    MR_Word tscc_proc_1_input_1_IteRenamedRegionProc_6;
    MR_Word tscc_proc_1_input_2_Graph_7;
    MR_Word tscc_proc_1_input_3_Cond_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
    MR_Word tscc_output_1_STATE_VARIABLE_IteRenamingProc_20;

    // The code for TSCC PROC 2: pred transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition/5-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word IteRenamedRegionProc_6 = tscc_proc_1_input_1_IteRenamedRegionProc_6;
      MR_Word Graph_7 = tscc_proc_1_input_2_Graph_7;
      MR_Word Cond_8 = tscc_proc_1_input_3_Cond_8;
      MR_Word STATE_VARIABLE_IteRenamingProc_0_19 = tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
      MR_Word STATE_VARIABLE_IteRenamingProc_20;
      MR_bool succeeded;
      MR_Word CondExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_8, (MR_Integer) 0))));
      MR_Word CondInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_8, (MR_Integer) 1))));
      MR_Word HasSubGoals_12;

      HasSubGoals_12 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(CondExpr_10);
      switch (HasSubGoals_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ProgPoint_13;
            MR_Word RevGoalPath_15;
            MR_Word RevPathToClosestCond_16;
            MR_Integer HowMany_17;
            MR_Word RenamedRegions_18;
            MR_Box conv0_RenamedRegions_18;

            ProgPoint_13 = transform_hlds__smm_common__program_point_init_1_f_0(CondInfo_11);
            RevGoalPath_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_13, (MR_Integer) 1))));
            transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(RevGoalPath_15, &RevPathToClosestCond_16, (MR_Integer) 0, &HowMany_17);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), IteRenamedRegionProc_6, ((MR_Box) (RevPathToClosestCond_16)), &conv0_RenamedRegions_18);
            if (succeeded)
            {
              RenamedRegions_18 = ((MR_Word) (conv0_RenamedRegions_18));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_23;
              MR_Box conv2_STATE_VARIABLE_IteRenamingProc_20;

              {
                Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ProgPoint_13));
                MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (HowMany_17));
                MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Graph_7));
              }
              mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_23, RenamedRegions_18, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_19)), &conv2_STATE_VARIABLE_IteRenamingProc_20);
              STATE_VARIABLE_IteRenamingProc_20 = ((MR_Word) (conv2_STATE_VARIABLE_IteRenamingProc_20));
            }
            else
              STATE_VARIABLE_IteRenamingProc_20 = STATE_VARIABLE_IteRenamingProc_0_19;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_IteRenamedRegionProc_6 = IteRenamedRegionProc_6;
            MR_Word next_value_of_tscc_proc_2_input_2_Graph_7 = Graph_7;
            MR_Word next_value_of_tscc_proc_2_input_3_GoalInCond_8 = Cond_8;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51 = STATE_VARIABLE_IteRenamingProc_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_IteRenamedRegionProc_6 = next_value_of_tscc_proc_2_input_1_IteRenamedRegionProc_6;
            tscc_proc_2_input_2_Graph_7 = next_value_of_tscc_proc_2_input_2_Graph_7;
            tscc_proc_2_input_3_GoalInCond_8 = next_value_of_tscc_proc_2_input_3_GoalInCond_8;
            tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_IteRenamingProc_20 = STATE_VARIABLE_IteRenamingProc_20;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word IteRenamedRegionProc_6 = tscc_proc_2_input_1_IteRenamedRegionProc_6;
      MR_Word Graph_7 = tscc_proc_2_input_2_Graph_7;
      MR_Word GoalInCond_8 = tscc_proc_2_input_3_GoalInCond_8;
      MR_Word STATE_VARIABLE_IteRenamingProc_0_51 = tscc_proc_2_input_4_STATE_VARIABLE_IteRenamingProc_0_51;
      MR_Word STATE_VARIABLE_IteRenamingProc_52;
      MR_Word Expr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInCond_8, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Expr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_20 = (MR_Word) ((MR_Word) (Expr_10));
            MR_Word next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6 = IteRenamedRegionProc_6;
            MR_Word next_value_of_tscc_proc_1_input_2_Graph_7 = Graph_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Cond_8 = Goal_20;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = STATE_VARIABLE_IteRenamingProc_0_51;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_IteRenamedRegionProc_6 = next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6;
            tscc_proc_1_input_2_Graph_7 = next_value_of_tscc_proc_1_input_2_Graph_7;
            tscc_proc_1_input_3_Cond_8 = next_value_of_tscc_proc_1_input_3_Cond_8;
            tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));

                if ((Var_104 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_69;
                  MR_Box conv4_STATE_VARIABLE_IteRenamingProc_52;

                  {
                    Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
                    MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                    MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (Graph_7));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_69, Var_104, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_51)), &conv4_STATE_VARIABLE_IteRenamingProc_52);
                  STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) (conv4_STATE_VARIABLE_IteRenamingProc_52));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));

                if ((Var_106 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_65;
                  MR_Box conv6_STATE_VARIABLE_IteRenamingProc_52;

                  {
                    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[4]));
                    MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                    MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Graph_7));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_65, Var_106, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_51)), &conv6_STATE_VARIABLE_IteRenamingProc_52);
                  STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) (conv6_STATE_VARIABLE_IteRenamingProc_52));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 3))));
                MR_Word Var_62;
                MR_Box conv8_STATE_VARIABLE_IteRenamingProc_52;

                {
                  Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[5]));
                  MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_compound_goal_5_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (IteRenamedRegionProc_6));
                  MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (Graph_7));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), Var_62, Cases_19, ((MR_Box) (STATE_VARIABLE_IteRenamingProc_0_51)), &conv8_STATE_VARIABLE_IteRenamingProc_52);
                STATE_VARIABLE_IteRenamingProc_52 = ((MR_Word) (conv8_STATE_VARIABLE_IteRenamingProc_52));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6 = IteRenamedRegionProc_6;
                MR_Word next_value_of_tscc_proc_1_input_2_Graph_7 = Graph_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Cond_8 = Goal_72;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = STATE_VARIABLE_IteRenamingProc_0_51;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_IteRenamedRegionProc_6 = next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6;
                tscc_proc_1_input_2_Graph_7 = next_value_of_tscc_proc_1_input_2_Graph_7;
                tscc_proc_1_input_3_Cond_8 = next_value_of_tscc_proc_1_input_3_Cond_8;
                tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
                MR_Word Then_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 3))));
                MR_Word Else_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_IteRenamingProc_57_57;
                MR_Word STATE_VARIABLE_IteRenamingProc_58_58;
                MR_Word next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6;
                MR_Word next_value_of_tscc_proc_1_input_2_Graph_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Cond_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;

                transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(IteRenamedRegionProc_6, Graph_7, Cond_23, STATE_VARIABLE_IteRenamingProc_0_51, &STATE_VARIABLE_IteRenamingProc_57_57);
                transform_hlds__rbmm__condition_renaming__collect_ite_renaming_in_condition_5_p_0(IteRenamedRegionProc_6, Graph_7, Then_24, STATE_VARIABLE_IteRenamingProc_57_57, &STATE_VARIABLE_IteRenamingProc_58_58);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6 = IteRenamedRegionProc_6;
                next_value_of_tscc_proc_1_input_2_Graph_7 = Graph_7;
                next_value_of_tscc_proc_1_input_3_Cond_8 = Else_25;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = STATE_VARIABLE_IteRenamingProc_58_58;
                tscc_proc_1_input_1_IteRenamedRegionProc_6 = next_value_of_tscc_proc_1_input_1_IteRenamedRegionProc_6;
                tscc_proc_1_input_2_Graph_7 = next_value_of_tscc_proc_1_input_2_Graph_7;
                tscc_proc_1_input_3_Cond_8 = next_value_of_tscc_proc_1_input_3_Cond_8;
                tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_IteRenamingProc_0_19;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_ite_renaming_in_condition_compound_goal\'/5", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_IteRenamingProc_20 = STATE_VARIABLE_IteRenamingProc_52;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_IteRenamingProc_20 = tscc_output_1_STATE_VARIABLE_IteRenamingProc_20;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(
  MR_Word RevPath_5,
  MR_Word * RevPathToCond_6,
  MR_Integer STATE_VARIABLE_HowMany_0_11,
  MR_Integer * STATE_VARIABLE_HowMany_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((RevPath_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *RevPathToCond_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HowMany_12 = STATE_VARIABLE_HowMany_0_11;
    }
    else
    {
      MR_Word RevInitialPath_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPath_5, (MR_Integer) 0))));
      MR_Word LastStep_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPath_5, (MR_Integer) 1))));

      succeeded = (LastStep_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_HowMany_13_13;
        MR_Word Var_10;

        *RevPathToCond_6 = RevPath_5;
        transform_hlds__rbmm__condition_renaming__get_closest_condition_in_goal_path_4_p_0(RevInitialPath_8, &Var_10, STATE_VARIABLE_HowMany_0_11, &STATE_VARIABLE_HowMany_13_13);
        *STATE_VARIABLE_HowMany_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HowMany_13_13 + (MR_Unsigned) 1);
      }
      else
      {
        MR_Word next_value_of_RevPath_5 = RevInitialPath_8;

        // direct tailcall eliminated
        ;
        RevPath_5 = next_value_of_RevPath_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(
  MR_Word NonLocalRegionsProc_6,
  MR_Word PathToCond_7,
  MR_Word InCondRegions_8,
  MR_Word STATE_VARIABLE_IteRenamedRegionProc_0_12,
  MR_Word * STATE_VARIABLE_IteRenamedRegionProc_13)
{
  {
    MR_bool succeeded;
    MR_Word NonLocalRegions_10;
    MR_Box conv0_NonLocalRegions_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), NonLocalRegionsProc_6, ((MR_Box) (PathToCond_7)), &conv0_NonLocalRegions_10);
    if (succeeded)
    {
      NonLocalRegions_10 = ((MR_Word) (conv0_NonLocalRegions_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word RenamedRegions_11;

      mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLocalRegions_10, InCondRegions_8, &RenamedRegions_11);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RenamedRegions_11);
      if (succeeded)
        *STATE_VARIABLE_IteRenamedRegionProc_13 = STATE_VARIABLE_IteRenamedRegionProc_0_12;
      else
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), ((MR_Box) (PathToCond_7)), ((MR_Box) (RenamedRegions_11)), STATE_VARIABLE_IteRenamedRegionProc_0_12, STATE_VARIABLE_IteRenamedRegionProc_13);
    }
    else
      *STATE_VARIABLE_IteRenamedRegionProc_13 = STATE_VARIABLE_IteRenamedRegionProc_0_12;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_IteRenamedRegionProc_13;

    transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_ite_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_IteRenamedRegionProc_13);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_IteRenamedRegionProc_13));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(
  MR_Word NonLocalRegionsTable_6,
  MR_Word PPId_7,
  MR_Word InCondRegionsProc_8,
  MR_Word STATE_VARIABLE_IteRenamedRegionTable_0_12,
  MR_Word * STATE_VARIABLE_IteRenamedRegionTable_13)
{
  {
    MR_bool succeeded;
    MR_Word NonLocalRegionsProc_10;
    MR_Box conv0_NonLocalRegionsProc_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), NonLocalRegionsTable_6, ((MR_Box) (PPId_7)), &conv0_NonLocalRegionsProc_10);
    if (succeeded)
    {
      NonLocalRegionsProc_10 = ((MR_Word) (conv0_NonLocalRegionsProc_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word IteRenamedRegionProc_11;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Box conv2_IteRenamedRegionProc_11;
      MR_Integer Var_16;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (NonLocalRegionsProc_10));
      }
      Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]));
      mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_14, InCondRegionsProc_8, ((MR_Box) (Var_15)), &conv2_IteRenamedRegionProc_11);
      IteRenamedRegionProc_11 = ((MR_Word) (conv2_IteRenamedRegionProc_11));
      Var_16 = mercury__map__count_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), IteRenamedRegionProc_11);
      succeeded = (Var_16 == (MR_Integer) 0);
      if (succeeded)
        *STATE_VARIABLE_IteRenamedRegionTable_13 = STATE_VARIABLE_IteRenamedRegionTable_0_12;
      else
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), ((MR_Box) (PPId_7)), ((MR_Box) (IteRenamedRegionProc_11)), STATE_VARIABLE_IteRenamedRegionTable_0_12, STATE_VARIABLE_IteRenamedRegionTable_13);
    }
    else
      *STATE_VARIABLE_IteRenamedRegionTable_13 = STATE_VARIABLE_IteRenamedRegionTable_0_12;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(
  MR_Word Graph_9,
  MR_Word LRBeforeProc_10,
  MR_Word LRAfterProc_11,
  MR_Word ResurRenamingProc_12,
  MR_Word ResurRenamingAnnoProc_13,
  MR_Word Case_14,
  MR_Word STATE_VARIABLE_InCondRegionsProc_0_19,
  MR_Word * STATE_VARIABLE_InCondRegionsProc_20)
{
  {
    MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_14, (MR_Integer) 2))));

    transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Goal_18, STATE_VARIABLE_InCondRegionsProc_0_19, STATE_VARIABLE_InCondRegionsProc_20);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(
  MR_Word Graph_9,
  MR_Word LRBeforeProc_10,
  MR_Word LRAfterProc_11,
  MR_Word ResurRenamingProc_12,
  MR_Word ResurRenamingAnnoProc_13,
  MR_Word Case_14,
  MR_Word STATE_VARIABLE_NonLocalRegionProc_0_19,
  MR_Word * STATE_VARIABLE_NonLocalRegionProc_20)
{
  {
    MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_14, (MR_Integer) 2))));

    transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Goal_18, STATE_VARIABLE_NonLocalRegionProc_0_19, STATE_VARIABLE_NonLocalRegionProc_20);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(
  MR_Word RenameAnnotation_6,
  MR_Word STATE_VARIABLE_LeftRegions_0_13,
  MR_Word * STATE_VARIABLE_LeftRegions_14,
  MR_Word STATE_VARIABLE_RightRegions_0_15,
  MR_Word * STATE_VARIABLE_RightRegions_16)
{
  switch (MR_tag((MR_Word) RenameAnnotation_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.renaming_annotation_to_regions\'/5", (MR_String) "annotation is not assignment");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String RightRegion_11 = ((MR_String) ((MR_hl_field(MR_mktag(2), RenameAnnotation_6, (MR_Integer) 0))));
        MR_String LeftRegion_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), RenameAnnotation_6, (MR_Integer) 1))));

        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (LeftRegion_12)), STATE_VARIABLE_LeftRegions_0_13, STATE_VARIABLE_LeftRegions_14);
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (RightRegion_11)), STATE_VARIABLE_RightRegions_0_15, STATE_VARIABLE_RightRegions_16);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(
  MR_Word Graph_6,
  MR_Word Renaming_7,
  MR_Word Node_8,
  MR_Word STATE_VARIABLE_Regions_0_13,
  MR_Word * STATE_VARIABLE_Regions_14)
{
  {
    MR_bool succeeded;
    MR_String RegionName_10;
    MR_Word RenamedRegionNameList_11;
    MR_Box conv0_RenamedRegionNameList_11;

    RegionName_10 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_6, Node_8);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]), Renaming_7, ((MR_Box) (RegionName_10)), &conv0_RenamedRegionNameList_11);
    if (succeeded)
    {
      RenamedRegionNameList_11 = ((MR_Word) (conv0_RenamedRegionNameList_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String RenamedRegionName_12;
      MR_Box conv1_RenamedRegionName_12;

      conv1_RenamedRegionName_12 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RenamedRegionNameList_11);
      RenamedRegionName_12 = ((MR_String) (conv1_RenamedRegionName_12));
      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (RenamedRegionName_12)), STATE_VARIABLE_Regions_0_13, STATE_VARIABLE_Regions_14);
    }
    else
      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (RegionName_10)), STATE_VARIABLE_Regions_0_13, STATE_VARIABLE_Regions_14);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(
  MR_Word Graph_11,
  MR_Word LRBeforeProc_12,
  MR_Word LRAfterProc_13,
  MR_Word ResurRenamingProc_14,
  MR_Word ResurRenamingAnnoProc_15,
  MR_Word Case_16,
  MR_Word STATE_VARIABLE_NonLocalRegionProc_0_22,
  MR_Word * STATE_VARIABLE_NonLocalRegionProc_23,
  MR_Word STATE_VARIABLE_InCondRegionsProc_0_24,
  MR_Word * STATE_VARIABLE_InCondRegionsProc_25)
{
  {
    MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_16, (MR_Integer) 2))));
    MR_Word Expr_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_21, (MR_Integer) 0))));

    transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(Graph_11, LRBeforeProc_12, LRAfterProc_13, ResurRenamingProc_14, ResurRenamingAnnoProc_15, Expr_40, STATE_VARIABLE_NonLocalRegionProc_0_22, STATE_VARIABLE_NonLocalRegionProc_23, STATE_VARIABLE_InCondRegionsProc_0_24, STATE_VARIABLE_InCondRegionsProc_25);
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word RptaInfoTable_15,
  MR_Word LRBeforeTable_16,
  MR_Word LRAfterTable_17,
  MR_Word ResurRenamingTable_18,
  MR_Word ResurRenamingAnnoTable_19,
  MR_Integer ProcId_20,
  MR_Word STATE_VARIABLE_NonLocalRegionsTable_0_37,
  MR_Word * STATE_VARIABLE_NonLocalRegionsTable_38,
  MR_Word STATE_VARIABLE_InCondRegionsTable_0_39,
  MR_Word * STATE_VARIABLE_InCondRegionsTable_40)
{
  {
    MR_bool succeeded;
    MR_Word PPId_23;
    MR_Word Var_41;

    {
      PPId_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PPId_23, 0) = ((MR_Box) (PredId_14));
      MR_hl_field(MR_mktag(0), PPId_23, 1) = ((MR_Box) (ProcId_20));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (PPId_23));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_41, ModuleInfo_13);
    if (succeeded)
    {
      *STATE_VARIABLE_InCondRegionsTable_40 = STATE_VARIABLE_InCondRegionsTable_0_39;
      *STATE_VARIABLE_NonLocalRegionsTable_38 = STATE_VARIABLE_NonLocalRegionsTable_0_37;
    }
    else
    {
      MR_Word ProcInfo0_24;
      MR_Word ProcInfo_25;
      MR_Word Goal_26;
      MR_Word Graph_27;
      MR_Word LRBeforeProc_29;
      MR_Word LRAfterProc_30;
      MR_Word ResurRenamingProc_32;
      MR_Word ResurRenamingAnnoProc_34;
      MR_Word NonLocalRegionsProc_35;
      MR_Word InCondRegionsProc_36;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Expr_75;
      MR_Box conv0_Var_43;
      MR_Box conv1_LRBeforeProc_29;
      MR_Box conv2_LRAfterProc_30;
      MR_Word ResurRenamingProc0_31;
      MR_Box conv3_ResurRenamingProc0_31;
      MR_Word ResurRenamingAnnoProc0_33;
      MR_Box conv4_ResurRenamingAnnoProc0_33;
      MR_Integer Var_46;
      MR_Integer Var_48;

      hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_13, PPId_23, &ProcInfo0_24);
      hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(ModuleInfo_13, ProcInfo0_24, &ProcInfo_25);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_25, &Goal_26);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_15, ((MR_Box) (PPId_23)), &conv0_Var_43);
      Var_43 = ((MR_Word) (conv0_Var_43));
      Graph_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[7]), LRBeforeTable_16, ((MR_Box) (PPId_23)), &conv1_LRBeforeProc_29);
      LRBeforeProc_29 = ((MR_Word) (conv1_LRBeforeProc_29));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[7]), LRAfterTable_17, ((MR_Box) (PPId_23)), &conv2_LRAfterProc_30);
      LRAfterProc_30 = ((MR_Word) (conv2_LRAfterProc_30));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]), ResurRenamingTable_18, ((MR_Box) (PPId_23)), &conv3_ResurRenamingProc0_31);
      if (succeeded)
      {
        ResurRenamingProc0_31 = ((MR_Word) (conv3_ResurRenamingProc0_31));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        ResurRenamingProc_32 = ResurRenamingProc0_31;
      else
        ResurRenamingProc_32 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[5]), ResurRenamingAnnoTable_19, ((MR_Box) (PPId_23)), &conv4_ResurRenamingAnnoProc0_33);
      if (succeeded)
      {
        ResurRenamingAnnoProc0_33 = ((MR_Word) (conv4_ResurRenamingAnnoProc0_33));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        ResurRenamingAnnoProc_34 = ResurRenamingAnnoProc0_33;
      else
        ResurRenamingAnnoProc_34 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[2]));
      Var_44 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]));
      Var_45 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]));
      Expr_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_26, (MR_Integer) 0))));
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(Graph_27, LRBeforeProc_29, LRAfterProc_30, ResurRenamingProc_32, ResurRenamingAnnoProc_34, Expr_75, Var_44, &NonLocalRegionsProc_35, Var_45, &InCondRegionsProc_36);
      Var_46 = mercury__map__count_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), NonLocalRegionsProc_35);
      succeeded = (Var_46 == (MR_Integer) 0);
      if (succeeded)
        *STATE_VARIABLE_NonLocalRegionsTable_38 = STATE_VARIABLE_NonLocalRegionsTable_0_37;
      else
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), ((MR_Box) (PPId_23)), ((MR_Box) (NonLocalRegionsProc_35)), STATE_VARIABLE_NonLocalRegionsTable_0_37, STATE_VARIABLE_NonLocalRegionsTable_38);
      Var_48 = mercury__map__count_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), InCondRegionsProc_36);
      succeeded = (Var_48 == (MR_Integer) 0);
      if (succeeded)
        *STATE_VARIABLE_InCondRegionsTable_40 = STATE_VARIABLE_InCondRegionsTable_0_39;
      else
        mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), ((MR_Box) (PPId_23)), ((MR_Box) (InCondRegionsProc_36)), STATE_VARIABLE_InCondRegionsTable_0_39, STATE_VARIABLE_InCondRegionsTable_40);
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_NonLocalRegionProc_23;
    MR_Word conv8_STATE_VARIABLE_InCondRegionsProc_25;

    transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_case_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_NonLocalRegionProc_23, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_InCondRegionsProc_25);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_NonLocalRegionProc_23));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_InCondRegionsProc_25));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_NonLocalRegionsProc_22;
    MR_Word conv4_STATE_VARIABLE_InCondRegionsProc_24;

    transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_NonLocalRegionsProc_22, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_InCondRegionsProc_24);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_NonLocalRegionsProc_22));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_InCondRegionsProc_24));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_NonLocalRegionsProc_22;
    MR_Word conv0_STATE_VARIABLE_InCondRegionsProc_24;

    transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NonLocalRegionsProc_22, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_InCondRegionsProc_24);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NonLocalRegionsProc_22));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_InCondRegionsProc_24));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(
  MR_Word tscc_proc_1_input_1_Graph_11,
  MR_Word tscc_proc_1_input_2_LRBeforeProc_12,
  MR_Word tscc_proc_1_input_3_LRAfterProc_13,
  MR_Word tscc_proc_1_input_4_ResurRenamingProc_14,
  MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_15,
  MR_Word tscc_proc_1_input_6_Goal_16,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionsProc_22,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_InCondRegionsProc_24)
{
  {
    MR_Word tscc_proc_2_input_1_Graph_1;
    MR_Word tscc_proc_2_input_2_LRBeforeProc_2;
    MR_Word tscc_proc_2_input_3_LRAfterProc_3;
    MR_Word tscc_proc_2_input_4_ResurRenamingProc_4;
    MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_5;
    MR_Word tscc_proc_2_input_6_HeadVar__6_6;
    MR_Word tscc_proc_2_input_7_HeadVar__7_7;
    MR_Word tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9;
    MR_Word tscc_output_1_STATE_VARIABLE_NonLocalRegionsProc_22;
    MR_Word tscc_output_2_STATE_VARIABLE_InCondRegionsProc_24;

    // The code for TSCC PROC 1: pred transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_goal/10-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_goal/10-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_expr/10-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Graph_11 = tscc_proc_1_input_1_Graph_11;
      MR_Word LRBeforeProc_12 = tscc_proc_1_input_2_LRBeforeProc_12;
      MR_Word LRAfterProc_13 = tscc_proc_1_input_3_LRAfterProc_13;
      MR_Word ResurRenamingProc_14 = tscc_proc_1_input_4_ResurRenamingProc_14;
      MR_Word ResurRenamingAnnoProc_15 = tscc_proc_1_input_5_ResurRenamingAnnoProc_15;
      MR_Word Goal_16 = tscc_proc_1_input_6_Goal_16;
      MR_Word STATE_VARIABLE_NonLocalRegionsProc_0_21 = tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21;
      MR_Word STATE_VARIABLE_NonLocalRegionsProc_22;
      MR_Word STATE_VARIABLE_InCondRegionsProc_0_23 = tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23;
      MR_Word STATE_VARIABLE_InCondRegionsProc_24;
      MR_Word Expr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_Graph_1 = Graph_11;
      MR_Word next_value_of_tscc_proc_2_input_2_LRBeforeProc_2 = LRBeforeProc_12;
      MR_Word next_value_of_tscc_proc_2_input_3_LRAfterProc_3 = LRAfterProc_13;
      MR_Word next_value_of_tscc_proc_2_input_4_ResurRenamingProc_4 = ResurRenamingProc_14;
      MR_Word next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_5 = ResurRenamingAnnoProc_15;
      MR_Word next_value_of_tscc_proc_2_input_6_HeadVar__6_6 = Expr_19;
      MR_Word next_value_of_tscc_proc_2_input_7_HeadVar__7_7 = STATE_VARIABLE_NonLocalRegionsProc_0_21;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9 = STATE_VARIABLE_InCondRegionsProc_0_23;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Graph_1 = next_value_of_tscc_proc_2_input_1_Graph_1;
      tscc_proc_2_input_2_LRBeforeProc_2 = next_value_of_tscc_proc_2_input_2_LRBeforeProc_2;
      tscc_proc_2_input_3_LRAfterProc_3 = next_value_of_tscc_proc_2_input_3_LRAfterProc_3;
      tscc_proc_2_input_4_ResurRenamingProc_4 = next_value_of_tscc_proc_2_input_4_ResurRenamingProc_4;
      tscc_proc_2_input_5_ResurRenamingAnnoProc_5 = next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_5;
      tscc_proc_2_input_6_HeadVar__6_6 = next_value_of_tscc_proc_2_input_6_HeadVar__6_6;
      tscc_proc_2_input_7_HeadVar__7_7 = next_value_of_tscc_proc_2_input_7_HeadVar__7_7;
      tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_NonLocalRegionsProc_22 = STATE_VARIABLE_NonLocalRegionsProc_22;
      tscc_output_2_STATE_VARIABLE_InCondRegionsProc_24 = STATE_VARIABLE_InCondRegionsProc_24;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Graph_1 = tscc_proc_2_input_1_Graph_1;
      MR_Word LRBeforeProc_2 = tscc_proc_2_input_2_LRBeforeProc_2;
      MR_Word LRAfterProc_3 = tscc_proc_2_input_3_LRAfterProc_3;
      MR_Word ResurRenamingProc_4 = tscc_proc_2_input_4_ResurRenamingProc_4;
      MR_Word ResurRenamingAnnoProc_5 = tscc_proc_2_input_5_ResurRenamingAnnoProc_5;
      MR_Word HeadVar__6_6 = tscc_proc_2_input_6_HeadVar__6_6;
      MR_Word HeadVar__7_7 = tscc_proc_2_input_7_HeadVar__7_7;
      MR_Word HeadVar__8_8;
      MR_Word STATE_VARIABLE_InCondRegionsProc_0_9 = tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9;
      MR_Word STATE_VARIABLE_InCondRegionsProc_10;

      switch (MR_tag((MR_Word) HeadVar__6_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_115 = (MR_Word) ((MR_Word) (HeadVar__6_6));
            MR_Word next_value_of_tscc_proc_1_input_1_Graph_11 = Graph_1;
            MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_12 = LRBeforeProc_2;
            MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_13 = LRAfterProc_3;
            MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_14 = ResurRenamingProc_4;
            MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_15 = ResurRenamingAnnoProc_5;
            MR_Word next_value_of_tscc_proc_1_input_6_Goal_16 = Goal_115;
            MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21 = HeadVar__7_7;
            MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23 = STATE_VARIABLE_InCondRegionsProc_0_9;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Graph_11 = next_value_of_tscc_proc_1_input_1_Graph_11;
            tscc_proc_1_input_2_LRBeforeProc_12 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_12;
            tscc_proc_1_input_3_LRAfterProc_13 = next_value_of_tscc_proc_1_input_3_LRAfterProc_13;
            tscc_proc_1_input_4_ResurRenamingProc_14 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_14;
            tscc_proc_1_input_5_ResurRenamingAnnoProc_15 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_15;
            tscc_proc_1_input_6_Goal_16 = next_value_of_tscc_proc_1_input_6_Goal_16;
            tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21;
            tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_InCondRegionsProc_10 = STATE_VARIABLE_InCondRegionsProc_0_9;
            HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_InCondRegionsProc_10 = STATE_VARIABLE_InCondRegionsProc_0_9;
            HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_InCondRegionsProc_10 = STATE_VARIABLE_InCondRegionsProc_0_9;
                HeadVar__8_8 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_InCondRegionsProc_10 = STATE_VARIABLE_InCondRegionsProc_0_9;
                HeadVar__8_8 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Conjs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
                MR_Word Var_24;
                MR_Box conv3_HeadVar__8_8;
                MR_Box conv2_STATE_VARIABLE_InCondRegionsProc_10;

                {
                  Var_24 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Graph_1));
                  MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (LRBeforeProc_2));
                  MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (LRAfterProc_3));
                  MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (ResurRenamingProc_4));
                  MR_hl_field(MR_mktag(0), Var_24, 7) = ((MR_Box) (ResurRenamingAnnoProc_5));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_24, Conjs_17, ((MR_Box) (HeadVar__7_7)), &conv3_HeadVar__8_8, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_9)), &conv2_STATE_VARIABLE_InCondRegionsProc_10);
                HeadVar__8_8 = ((MR_Word) (conv3_HeadVar__8_8));
                STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) (conv2_STATE_VARIABLE_InCondRegionsProc_10));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjs_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
                MR_Word Var_107;
                MR_Box conv7_HeadVar__8_8;
                MR_Box conv6_STATE_VARIABLE_InCondRegionsProc_10;

                {
                  Var_107 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (Graph_1));
                  MR_hl_field(MR_mktag(0), Var_107, 4) = ((MR_Box) (LRBeforeProc_2));
                  MR_hl_field(MR_mktag(0), Var_107, 5) = ((MR_Box) (LRAfterProc_3));
                  MR_hl_field(MR_mktag(0), Var_107, 6) = ((MR_Box) (ResurRenamingProc_4));
                  MR_hl_field(MR_mktag(0), Var_107, 7) = ((MR_Box) (ResurRenamingAnnoProc_5));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_107, Disjs_100, ((MR_Box) (HeadVar__7_7)), &conv7_HeadVar__8_8, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_9)), &conv6_STATE_VARIABLE_InCondRegionsProc_10);
                HeadVar__8_8 = ((MR_Word) (conv7_HeadVar__8_8));
                STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) (conv6_STATE_VARIABLE_InCondRegionsProc_10));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 3))));
                MR_Word Var_92;
                MR_Box conv11_HeadVar__8_8;
                MR_Box conv10_STATE_VARIABLE_InCondRegionsProc_10;

                {
                  Var_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[1]));
                  MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (Graph_1));
                  MR_hl_field(MR_mktag(0), Var_92, 4) = ((MR_Box) (LRBeforeProc_2));
                  MR_hl_field(MR_mktag(0), Var_92, 5) = ((MR_Box) (LRAfterProc_3));
                  MR_hl_field(MR_mktag(0), Var_92, 6) = ((MR_Box) (ResurRenamingProc_4));
                  MR_hl_field(MR_mktag(0), Var_92, 7) = ((MR_Box) (ResurRenamingAnnoProc_5));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_92, Cases_85, ((MR_Box) (HeadVar__7_7)), &conv11_HeadVar__8_8, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_9)), &conv10_STATE_VARIABLE_InCondRegionsProc_10);
                HeadVar__8_8 = ((MR_Word) (conv11_HeadVar__8_8));
                STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) (conv10_STATE_VARIABLE_InCondRegionsProc_10));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_11 = Graph_1;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_12 = LRBeforeProc_2;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_13 = LRAfterProc_3;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_14 = ResurRenamingProc_4;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_15 = ResurRenamingAnnoProc_5;
                MR_Word next_value_of_tscc_proc_1_input_6_Goal_16 = Goal_146;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21 = HeadVar__7_7;
                MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23 = STATE_VARIABLE_InCondRegionsProc_0_9;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Graph_11 = next_value_of_tscc_proc_1_input_1_Graph_11;
                tscc_proc_1_input_2_LRBeforeProc_12 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_12;
                tscc_proc_1_input_3_LRAfterProc_13 = next_value_of_tscc_proc_1_input_3_LRAfterProc_13;
                tscc_proc_1_input_4_ResurRenamingProc_14 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_14;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_15 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_15;
                tscc_proc_1_input_6_Goal_16 = next_value_of_tscc_proc_1_input_6_Goal_16;
                tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21;
                tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
                MR_Word Then_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 3))));
                MR_Word Else_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_InCondRegionsProc_171_171;
                MR_Word STATE_VARIABLE_NonLocalRegionProc_172_172;
                MR_Word STATE_VARIABLE_InCondRegionsProc_173_173;
                MR_Word STATE_VARIABLE_NonLocalRegionProc_174_174;

                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(Graph_1, LRBeforeProc_2, LRAfterProc_3, ResurRenamingProc_4, ResurRenamingAnnoProc_5, Cond_164, STATE_VARIABLE_InCondRegionsProc_0_9, &STATE_VARIABLE_InCondRegionsProc_171_171);
                transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(Graph_1, LRBeforeProc_2, LRAfterProc_3, ResurRenamingProc_4, ResurRenamingAnnoProc_5, Cond_164, HeadVar__7_7, &STATE_VARIABLE_NonLocalRegionProc_172_172, STATE_VARIABLE_InCondRegionsProc_171_171, &STATE_VARIABLE_InCondRegionsProc_173_173);
                transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(Graph_1, LRBeforeProc_2, LRAfterProc_3, ResurRenamingProc_4, ResurRenamingAnnoProc_5, Then_165, STATE_VARIABLE_NonLocalRegionProc_172_172, &STATE_VARIABLE_NonLocalRegionProc_174_174, STATE_VARIABLE_InCondRegionsProc_173_173, &STATE_VARIABLE_InCondRegionsProc_10);
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(Graph_1, LRBeforeProc_2, LRAfterProc_3, ResurRenamingProc_4, ResurRenamingAnnoProc_5, Else_166, STATE_VARIABLE_NonLocalRegionProc_174_174, &HeadVar__8_8);
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_expr\'/10", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_NonLocalRegionsProc_22 = HeadVar__8_8;
      tscc_output_2_STATE_VARIABLE_InCondRegionsProc_24 = STATE_VARIABLE_InCondRegionsProc_10;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionsProc_22 = tscc_output_1_STATE_VARIABLE_NonLocalRegionsProc_22;
    *tscc_output_ptr_2_STATE_VARIABLE_InCondRegionsProc_24 = tscc_output_2_STATE_VARIABLE_InCondRegionsProc_24;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0(
  MR_Word tscc_proc_2_input_1_Graph_1,
  MR_Word tscc_proc_2_input_2_LRBeforeProc_2,
  MR_Word tscc_proc_2_input_3_LRAfterProc_3,
  MR_Word tscc_proc_2_input_4_ResurRenamingProc_4,
  MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_5,
  MR_Word tscc_proc_2_input_6_HeadVar__6_6,
  MR_Word tscc_proc_2_input_7_HeadVar__7_7,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionsProc_22,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_InCondRegionsProc_24)
{
  {
    MR_Word tscc_proc_1_input_1_Graph_11;
    MR_Word tscc_proc_1_input_2_LRBeforeProc_12;
    MR_Word tscc_proc_1_input_3_LRAfterProc_13;
    MR_Word tscc_proc_1_input_4_ResurRenamingProc_14;
    MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_15;
    MR_Word tscc_proc_1_input_6_Goal_16;
    MR_Word tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21;
    MR_Word tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23;
    MR_Word tscc_output_1_STATE_VARIABLE_NonLocalRegionsProc_22;
    MR_Word tscc_output_2_STATE_VARIABLE_InCondRegionsProc_24;

    // The code for TSCC PROC 2: pred transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_expr/10-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_goal/10-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_expr/10-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Graph_11 = tscc_proc_1_input_1_Graph_11;
      MR_Word LRBeforeProc_12 = tscc_proc_1_input_2_LRBeforeProc_12;
      MR_Word LRAfterProc_13 = tscc_proc_1_input_3_LRAfterProc_13;
      MR_Word ResurRenamingProc_14 = tscc_proc_1_input_4_ResurRenamingProc_14;
      MR_Word ResurRenamingAnnoProc_15 = tscc_proc_1_input_5_ResurRenamingAnnoProc_15;
      MR_Word Goal_16 = tscc_proc_1_input_6_Goal_16;
      MR_Word STATE_VARIABLE_NonLocalRegionsProc_0_21 = tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21;
      MR_Word STATE_VARIABLE_NonLocalRegionsProc_22;
      MR_Word STATE_VARIABLE_InCondRegionsProc_0_23 = tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23;
      MR_Word STATE_VARIABLE_InCondRegionsProc_24;
      MR_Word Expr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_Graph_1 = Graph_11;
      MR_Word next_value_of_tscc_proc_2_input_2_LRBeforeProc_2 = LRBeforeProc_12;
      MR_Word next_value_of_tscc_proc_2_input_3_LRAfterProc_3 = LRAfterProc_13;
      MR_Word next_value_of_tscc_proc_2_input_4_ResurRenamingProc_4 = ResurRenamingProc_14;
      MR_Word next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_5 = ResurRenamingAnnoProc_15;
      MR_Word next_value_of_tscc_proc_2_input_6_HeadVar__6_6 = Expr_19;
      MR_Word next_value_of_tscc_proc_2_input_7_HeadVar__7_7 = STATE_VARIABLE_NonLocalRegionsProc_0_21;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9 = STATE_VARIABLE_InCondRegionsProc_0_23;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Graph_1 = next_value_of_tscc_proc_2_input_1_Graph_1;
      tscc_proc_2_input_2_LRBeforeProc_2 = next_value_of_tscc_proc_2_input_2_LRBeforeProc_2;
      tscc_proc_2_input_3_LRAfterProc_3 = next_value_of_tscc_proc_2_input_3_LRAfterProc_3;
      tscc_proc_2_input_4_ResurRenamingProc_4 = next_value_of_tscc_proc_2_input_4_ResurRenamingProc_4;
      tscc_proc_2_input_5_ResurRenamingAnnoProc_5 = next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_5;
      tscc_proc_2_input_6_HeadVar__6_6 = next_value_of_tscc_proc_2_input_6_HeadVar__6_6;
      tscc_proc_2_input_7_HeadVar__7_7 = next_value_of_tscc_proc_2_input_7_HeadVar__7_7;
      tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_NonLocalRegionsProc_22 = STATE_VARIABLE_NonLocalRegionsProc_22;
      tscc_output_2_STATE_VARIABLE_InCondRegionsProc_24 = STATE_VARIABLE_InCondRegionsProc_24;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Graph_1 = tscc_proc_2_input_1_Graph_1;
      MR_Word LRBeforeProc_2 = tscc_proc_2_input_2_LRBeforeProc_2;
      MR_Word LRAfterProc_3 = tscc_proc_2_input_3_LRAfterProc_3;
      MR_Word ResurRenamingProc_4 = tscc_proc_2_input_4_ResurRenamingProc_4;
      MR_Word ResurRenamingAnnoProc_5 = tscc_proc_2_input_5_ResurRenamingAnnoProc_5;
      MR_Word HeadVar__6_6 = tscc_proc_2_input_6_HeadVar__6_6;
      MR_Word HeadVar__7_7 = tscc_proc_2_input_7_HeadVar__7_7;
      MR_Word HeadVar__8_8;
      MR_Word STATE_VARIABLE_InCondRegionsProc_0_9 = tscc_proc_2_input_8_STATE_VARIABLE_InCondRegionsProc_0_9;
      MR_Word STATE_VARIABLE_InCondRegionsProc_10;

      switch (MR_tag((MR_Word) HeadVar__6_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_115 = (MR_Word) ((MR_Word) (HeadVar__6_6));
            MR_Word next_value_of_tscc_proc_1_input_1_Graph_11 = Graph_1;
            MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_12 = LRBeforeProc_2;
            MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_13 = LRAfterProc_3;
            MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_14 = ResurRenamingProc_4;
            MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_15 = ResurRenamingAnnoProc_5;
            MR_Word next_value_of_tscc_proc_1_input_6_Goal_16 = Goal_115;
            MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21 = HeadVar__7_7;
            MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23 = STATE_VARIABLE_InCondRegionsProc_0_9;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Graph_11 = next_value_of_tscc_proc_1_input_1_Graph_11;
            tscc_proc_1_input_2_LRBeforeProc_12 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_12;
            tscc_proc_1_input_3_LRAfterProc_13 = next_value_of_tscc_proc_1_input_3_LRAfterProc_13;
            tscc_proc_1_input_4_ResurRenamingProc_14 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_14;
            tscc_proc_1_input_5_ResurRenamingAnnoProc_15 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_15;
            tscc_proc_1_input_6_Goal_16 = next_value_of_tscc_proc_1_input_6_Goal_16;
            tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21;
            tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_InCondRegionsProc_10 = STATE_VARIABLE_InCondRegionsProc_0_9;
            HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_InCondRegionsProc_10 = STATE_VARIABLE_InCondRegionsProc_0_9;
            HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_InCondRegionsProc_10 = STATE_VARIABLE_InCondRegionsProc_0_9;
                HeadVar__8_8 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_InCondRegionsProc_10 = STATE_VARIABLE_InCondRegionsProc_0_9;
                HeadVar__8_8 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Conjs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
                MR_Word Var_24;
                MR_Box conv3_HeadVar__8_8;
                MR_Box conv2_STATE_VARIABLE_InCondRegionsProc_10;

                {
                  Var_24 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Graph_1));
                  MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (LRBeforeProc_2));
                  MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (LRAfterProc_3));
                  MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (ResurRenamingProc_4));
                  MR_hl_field(MR_mktag(0), Var_24, 7) = ((MR_Box) (ResurRenamingAnnoProc_5));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_24, Conjs_17, ((MR_Box) (HeadVar__7_7)), &conv3_HeadVar__8_8, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_9)), &conv2_STATE_VARIABLE_InCondRegionsProc_10);
                HeadVar__8_8 = ((MR_Word) (conv3_HeadVar__8_8));
                STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) (conv2_STATE_VARIABLE_InCondRegionsProc_10));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjs_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
                MR_Word Var_107;
                MR_Box conv7_HeadVar__8_8;
                MR_Box conv6_STATE_VARIABLE_InCondRegionsProc_10;

                {
                  Var_107 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (Graph_1));
                  MR_hl_field(MR_mktag(0), Var_107, 4) = ((MR_Box) (LRBeforeProc_2));
                  MR_hl_field(MR_mktag(0), Var_107, 5) = ((MR_Box) (LRAfterProc_3));
                  MR_hl_field(MR_mktag(0), Var_107, 6) = ((MR_Box) (ResurRenamingProc_4));
                  MR_hl_field(MR_mktag(0), Var_107, 7) = ((MR_Box) (ResurRenamingAnnoProc_5));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_107, Disjs_100, ((MR_Box) (HeadVar__7_7)), &conv7_HeadVar__8_8, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_9)), &conv6_STATE_VARIABLE_InCondRegionsProc_10);
                HeadVar__8_8 = ((MR_Word) (conv7_HeadVar__8_8));
                STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) (conv6_STATE_VARIABLE_InCondRegionsProc_10));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 3))));
                MR_Word Var_92;
                MR_Box conv11_HeadVar__8_8;
                MR_Box conv10_STATE_VARIABLE_InCondRegionsProc_10;

                {
                  Var_92 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_8[1]));
                  MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_expr_10_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (Graph_1));
                  MR_hl_field(MR_mktag(0), Var_92, 4) = ((MR_Box) (LRBeforeProc_2));
                  MR_hl_field(MR_mktag(0), Var_92, 5) = ((MR_Box) (LRAfterProc_3));
                  MR_hl_field(MR_mktag(0), Var_92, 6) = ((MR_Box) (ResurRenamingProc_4));
                  MR_hl_field(MR_mktag(0), Var_92, 7) = ((MR_Box) (ResurRenamingAnnoProc_5));
                }
                mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_92, Cases_85, ((MR_Box) (HeadVar__7_7)), &conv11_HeadVar__8_8, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_9)), &conv10_STATE_VARIABLE_InCondRegionsProc_10);
                HeadVar__8_8 = ((MR_Word) (conv11_HeadVar__8_8));
                STATE_VARIABLE_InCondRegionsProc_10 = ((MR_Word) (conv10_STATE_VARIABLE_InCondRegionsProc_10));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_11 = Graph_1;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_12 = LRBeforeProc_2;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_13 = LRAfterProc_3;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_14 = ResurRenamingProc_4;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_15 = ResurRenamingAnnoProc_5;
                MR_Word next_value_of_tscc_proc_1_input_6_Goal_16 = Goal_146;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21 = HeadVar__7_7;
                MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23 = STATE_VARIABLE_InCondRegionsProc_0_9;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Graph_11 = next_value_of_tscc_proc_1_input_1_Graph_11;
                tscc_proc_1_input_2_LRBeforeProc_12 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_12;
                tscc_proc_1_input_3_LRAfterProc_13 = next_value_of_tscc_proc_1_input_3_LRAfterProc_13;
                tscc_proc_1_input_4_ResurRenamingProc_14 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_14;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_15 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_15;
                tscc_proc_1_input_6_Goal_16 = next_value_of_tscc_proc_1_input_6_Goal_16;
                tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionsProc_0_21;
                tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_InCondRegionsProc_0_23;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
                MR_Word Then_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 3))));
                MR_Word Else_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_InCondRegionsProc_171_171;
                MR_Word STATE_VARIABLE_NonLocalRegionProc_172_172;
                MR_Word STATE_VARIABLE_InCondRegionsProc_173_173;
                MR_Word STATE_VARIABLE_NonLocalRegionProc_174_174;

                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(Graph_1, LRBeforeProc_2, LRAfterProc_3, ResurRenamingProc_4, ResurRenamingAnnoProc_5, Cond_164, STATE_VARIABLE_InCondRegionsProc_0_9, &STATE_VARIABLE_InCondRegionsProc_171_171);
                transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(Graph_1, LRBeforeProc_2, LRAfterProc_3, ResurRenamingProc_4, ResurRenamingAnnoProc_5, Cond_164, HeadVar__7_7, &STATE_VARIABLE_NonLocalRegionProc_172_172, STATE_VARIABLE_InCondRegionsProc_171_171, &STATE_VARIABLE_InCondRegionsProc_173_173);
                transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_goal_10_p_0(Graph_1, LRBeforeProc_2, LRAfterProc_3, ResurRenamingProc_4, ResurRenamingAnnoProc_5, Then_165, STATE_VARIABLE_NonLocalRegionProc_172_172, &STATE_VARIABLE_NonLocalRegionProc_174_174, STATE_VARIABLE_InCondRegionsProc_173_173, &STATE_VARIABLE_InCondRegionsProc_10);
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(Graph_1, LRBeforeProc_2, LRAfterProc_3, ResurRenamingProc_4, ResurRenamingAnnoProc_5, Else_166, STATE_VARIABLE_NonLocalRegionProc_174_174, &HeadVar__8_8);
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_and_in_cond_regions_expr\'/10", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_NonLocalRegionsProc_22 = HeadVar__8_8;
      tscc_output_2_STATE_VARIABLE_InCondRegionsProc_24 = STATE_VARIABLE_InCondRegionsProc_10;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionsProc_22 = tscc_output_1_STATE_VARIABLE_NonLocalRegionsProc_22;
    *tscc_output_ptr_2_STATE_VARIABLE_InCondRegionsProc_24 = tscc_output_2_STATE_VARIABLE_InCondRegionsProc_24;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_LeftRegions_14;
    MR_Word conv6_STATE_VARIABLE_RightRegions_16;

    transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_LeftRegions_14, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_RightRegions_16);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_LeftRegions_14));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_RightRegions_16));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Regions_14;

    transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Regions_14);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Regions_14));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_InCondRegionsProc_20;

    transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_case_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_InCondRegionsProc_20);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_InCondRegionsProc_20));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_InCondRegionsProc_34;

    transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_InCondRegionsProc_34);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_InCondRegionsProc_34));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_InCondRegionsProc_34;

    transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_InCondRegionsProc_34);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_InCondRegionsProc_34));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(
  MR_Word tscc_proc_1_input_1_Graph_9,
  MR_Word tscc_proc_1_input_2_LRBeforeProc_10,
  MR_Word tscc_proc_1_input_3_LRAfterProc_11,
  MR_Word tscc_proc_1_input_4_ResurRenamingProc_12,
  MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_13,
  MR_Word tscc_proc_1_input_6_Cond_14,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_InCondRegionsProc_34)
{
  {
    MR_Word tscc_proc_2_input_1_Graph_9;
    MR_Word tscc_proc_2_input_2_LRBeforeProc_10;
    MR_Word tscc_proc_2_input_3_LRAfterProc_11;
    MR_Word tscc_proc_2_input_4_ResurRenamingProc_12;
    MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
    MR_Word tscc_proc_2_input_6_GoalInIte_14;
    MR_Word tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57;
    MR_Word tscc_output_1_STATE_VARIABLE_InCondRegionsProc_34;

    // The code for TSCC PROC 1: pred transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition/8-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition/8-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal/8-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Graph_9 = tscc_proc_1_input_1_Graph_9;
      MR_Word LRBeforeProc_10 = tscc_proc_1_input_2_LRBeforeProc_10;
      MR_Word LRAfterProc_11 = tscc_proc_1_input_3_LRAfterProc_11;
      MR_Word ResurRenamingProc_12 = tscc_proc_1_input_4_ResurRenamingProc_12;
      MR_Word ResurRenamingAnnoProc_13 = tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
      MR_Word Cond_14 = tscc_proc_1_input_6_Cond_14;
      MR_Word STATE_VARIABLE_InCondRegionsProc_0_33 = tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
      MR_Word STATE_VARIABLE_InCondRegionsProc_34;
      MR_bool succeeded;
      MR_Word CondExpr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_14, (MR_Integer) 0))));
      MR_Word CondInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_14, (MR_Integer) 1))));
      MR_Word HasSubGoals_18;

      HasSubGoals_18 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(CondExpr_16);
      switch (HasSubGoals_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ProgPoint_19;
            MR_Word RevGoalPath_21;
            MR_Word LRBefore_22;
            MR_Word LRAfter_23;
            MR_Word CreatedNodes_24;
            MR_Word ResurRenaming_26;
            MR_Word CreatedRegions0_27;
            MR_Word ResurRenamingAnnos_29;
            MR_Word LeftRegions_30;
            MR_Word CreatedRegions_32;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Box conv0_LRBefore_22;
            MR_Box conv1_LRAfter_23;
            MR_Word ResurRenaming0_25;
            MR_Box conv2_ResurRenaming0_25;
            MR_Box conv4_CreatedRegions0_27;
            MR_Word ResurRenamingAnnos0_28;
            MR_Box conv5_ResurRenamingAnnos0_28;
            MR_Box conv9_LeftRegions_30;
            MR_Box conv8__RightRegions_31;

            ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(CondInfo_17);
            RevGoalPath_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_19, (MR_Integer) 1))));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]), LRBeforeProc_10, ((MR_Box) (ProgPoint_19)), &conv0_LRBefore_22);
            LRBefore_22 = ((MR_Word) (conv0_LRBefore_22));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]), LRAfterProc_11, ((MR_Box) (ProgPoint_19)), &conv1_LRAfter_23);
            LRAfter_23 = ((MR_Word) (conv1_LRAfter_23));
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRAfter_23, LRBefore_22, &CreatedNodes_24);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), ResurRenamingProc_12, ((MR_Box) (ProgPoint_19)), &conv2_ResurRenaming0_25);
            if (succeeded)
            {
              ResurRenaming0_25 = ((MR_Word) (conv2_ResurRenaming0_25));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ResurRenaming_26 = ResurRenaming0_25;
            else
              ResurRenaming_26 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]));
            {
              Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1));
              MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Graph_9));
              MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (ResurRenaming_26));
            }
            Var_37 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), Var_36, CreatedNodes_24, ((MR_Box) (Var_37)), &conv4_CreatedRegions0_27);
            CreatedRegions0_27 = ((MR_Word) (conv4_CreatedRegions0_27));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[2]), ResurRenamingAnnoProc_13, ((MR_Box) (ProgPoint_19)), &conv5_ResurRenamingAnnos0_28);
            if (succeeded)
            {
              ResurRenamingAnnos0_28 = ((MR_Word) (conv5_ResurRenamingAnnos0_28));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ResurRenamingAnnos_29 = ResurRenamingAnnos0_28;
            else
              ResurRenamingAnnos_29 = (MR_Word) ((MR_Unsigned) 0U);
            Var_39 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            Var_40 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[10]), ResurRenamingAnnos_29, ((MR_Box) (Var_39)), &conv9_LeftRegions_30, ((MR_Box) (Var_40)), &conv8__RightRegions_31);
            LeftRegions_30 = ((MR_Word) (conv9_LeftRegions_30));
            mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CreatedRegions0_27, LeftRegions_30, &CreatedRegions_32);
            transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(RevGoalPath_21, CreatedRegions_32, STATE_VARIABLE_InCondRegionsProc_0_33, &STATE_VARIABLE_InCondRegionsProc_34);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Graph_9 = Graph_9;
            MR_Word next_value_of_tscc_proc_2_input_2_LRBeforeProc_10 = LRBeforeProc_10;
            MR_Word next_value_of_tscc_proc_2_input_3_LRAfterProc_11 = LRAfterProc_11;
            MR_Word next_value_of_tscc_proc_2_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
            MR_Word next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
            MR_Word next_value_of_tscc_proc_2_input_6_GoalInIte_14 = Cond_14;
            MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57 = STATE_VARIABLE_InCondRegionsProc_0_33;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Graph_9 = next_value_of_tscc_proc_2_input_1_Graph_9;
            tscc_proc_2_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_2_input_2_LRBeforeProc_10;
            tscc_proc_2_input_3_LRAfterProc_11 = next_value_of_tscc_proc_2_input_3_LRAfterProc_11;
            tscc_proc_2_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_2_input_4_ResurRenamingProc_12;
            tscc_proc_2_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
            tscc_proc_2_input_6_GoalInIte_14 = next_value_of_tscc_proc_2_input_6_GoalInIte_14;
            tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_InCondRegionsProc_34 = STATE_VARIABLE_InCondRegionsProc_34;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Graph_9 = tscc_proc_2_input_1_Graph_9;
      MR_Word LRBeforeProc_10 = tscc_proc_2_input_2_LRBeforeProc_10;
      MR_Word LRAfterProc_11 = tscc_proc_2_input_3_LRAfterProc_11;
      MR_Word ResurRenamingProc_12 = tscc_proc_2_input_4_ResurRenamingProc_12;
      MR_Word ResurRenamingAnnoProc_13 = tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
      MR_Word GoalInIte_14 = tscc_proc_2_input_6_GoalInIte_14;
      MR_Word STATE_VARIABLE_InCondRegionsProc_0_57 = tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57;
      MR_Word STATE_VARIABLE_InCondRegionsProc_58;
      MR_Word Expr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInIte_14, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Expr_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_26 = (MR_Word) ((MR_Word) (Expr_16));
            MR_Word next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
            MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
            MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
            MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
            MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
            MR_Word next_value_of_tscc_proc_1_input_6_Cond_14 = Goal_26;
            MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = STATE_VARIABLE_InCondRegionsProc_0_57;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
            tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
            tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
            tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
            tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
            tscc_proc_1_input_6_Cond_14 = next_value_of_tscc_proc_1_input_6_Cond_14;
            tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));

                if ((Var_110 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_75;
                  MR_Box conv11_STATE_VARIABLE_InCondRegionsProc_58;

                  {
                    Var_75 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Graph_9));
                    MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (LRBeforeProc_10));
                    MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (LRAfterProc_11));
                    MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) (ResurRenamingProc_12));
                    MR_hl_field(MR_mktag(0), Var_75, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_75, Var_110, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_57)), &conv11_STATE_VARIABLE_InCondRegionsProc_58);
                  STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) (conv11_STATE_VARIABLE_InCondRegionsProc_58));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 1))));

                if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_71;
                  MR_Box conv13_STATE_VARIABLE_InCondRegionsProc_58;

                  {
                    Var_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Graph_9));
                    MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (LRBeforeProc_10));
                    MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (LRAfterProc_11));
                    MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (ResurRenamingProc_12));
                    MR_hl_field(MR_mktag(0), Var_71, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_71, Var_112, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_57)), &conv13_STATE_VARIABLE_InCondRegionsProc_58);
                  STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) (conv13_STATE_VARIABLE_InCondRegionsProc_58));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 3))));
                MR_Word Var_68;
                MR_Box conv15_STATE_VARIABLE_InCondRegionsProc_58;

                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[2]));
                  MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Graph_9));
                  MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (LRBeforeProc_10));
                  MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (LRAfterProc_11));
                  MR_hl_field(MR_mktag(0), Var_68, 6) = ((MR_Box) (ResurRenamingProc_12));
                  MR_hl_field(MR_mktag(0), Var_68, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_68, Cases_25, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_57)), &conv15_STATE_VARIABLE_InCondRegionsProc_58);
                STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) (conv15_STATE_VARIABLE_InCondRegionsProc_58));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
                MR_Word next_value_of_tscc_proc_1_input_6_Cond_14 = Goal_78;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = STATE_VARIABLE_InCondRegionsProc_0_57;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
                tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                tscc_proc_1_input_6_Cond_14 = next_value_of_tscc_proc_1_input_6_Cond_14;
                tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));
                MR_Word Then_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 3))));
                MR_Word Else_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_InCondRegionsProc_63_63;
                MR_Word STATE_VARIABLE_InCondRegionsProc_64_64;
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_9;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                MR_Word next_value_of_tscc_proc_1_input_6_Cond_14;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;

                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Cond_29, STATE_VARIABLE_InCondRegionsProc_0_57, &STATE_VARIABLE_InCondRegionsProc_63_63);
                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Then_30, STATE_VARIABLE_InCondRegionsProc_63_63, &STATE_VARIABLE_InCondRegionsProc_64_64);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
                next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
                next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
                next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
                next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
                next_value_of_tscc_proc_1_input_6_Cond_14 = Else_31;
                next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = STATE_VARIABLE_InCondRegionsProc_64_64;
                tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
                tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                tscc_proc_1_input_6_Cond_14 = next_value_of_tscc_proc_1_input_6_Cond_14;
                tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_InCondRegionsProc_34 = STATE_VARIABLE_InCondRegionsProc_58;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_InCondRegionsProc_34 = tscc_output_1_STATE_VARIABLE_InCondRegionsProc_34;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0(
  MR_Word tscc_proc_2_input_1_Graph_9,
  MR_Word tscc_proc_2_input_2_LRBeforeProc_10,
  MR_Word tscc_proc_2_input_3_LRAfterProc_11,
  MR_Word tscc_proc_2_input_4_ResurRenamingProc_12,
  MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_13,
  MR_Word tscc_proc_2_input_6_GoalInIte_14,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_InCondRegionsProc_34)
{
  {
    MR_Word tscc_proc_1_input_1_Graph_9;
    MR_Word tscc_proc_1_input_2_LRBeforeProc_10;
    MR_Word tscc_proc_1_input_3_LRAfterProc_11;
    MR_Word tscc_proc_1_input_4_ResurRenamingProc_12;
    MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
    MR_Word tscc_proc_1_input_6_Cond_14;
    MR_Word tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
    MR_Word tscc_output_1_STATE_VARIABLE_InCondRegionsProc_34;

    // The code for TSCC PROC 2: pred transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal/8-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition/8-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal/8-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Graph_9 = tscc_proc_1_input_1_Graph_9;
      MR_Word LRBeforeProc_10 = tscc_proc_1_input_2_LRBeforeProc_10;
      MR_Word LRAfterProc_11 = tscc_proc_1_input_3_LRAfterProc_11;
      MR_Word ResurRenamingProc_12 = tscc_proc_1_input_4_ResurRenamingProc_12;
      MR_Word ResurRenamingAnnoProc_13 = tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
      MR_Word Cond_14 = tscc_proc_1_input_6_Cond_14;
      MR_Word STATE_VARIABLE_InCondRegionsProc_0_33 = tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
      MR_Word STATE_VARIABLE_InCondRegionsProc_34;
      MR_bool succeeded;
      MR_Word CondExpr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_14, (MR_Integer) 0))));
      MR_Word CondInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_14, (MR_Integer) 1))));
      MR_Word HasSubGoals_18;

      HasSubGoals_18 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(CondExpr_16);
      switch (HasSubGoals_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ProgPoint_19;
            MR_Word RevGoalPath_21;
            MR_Word LRBefore_22;
            MR_Word LRAfter_23;
            MR_Word CreatedNodes_24;
            MR_Word ResurRenaming_26;
            MR_Word CreatedRegions0_27;
            MR_Word ResurRenamingAnnos_29;
            MR_Word LeftRegions_30;
            MR_Word CreatedRegions_32;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Box conv0_LRBefore_22;
            MR_Box conv1_LRAfter_23;
            MR_Word ResurRenaming0_25;
            MR_Box conv2_ResurRenaming0_25;
            MR_Box conv4_CreatedRegions0_27;
            MR_Word ResurRenamingAnnos0_28;
            MR_Box conv5_ResurRenamingAnnos0_28;
            MR_Box conv9_LeftRegions_30;
            MR_Box conv8__RightRegions_31;

            ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(CondInfo_17);
            RevGoalPath_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_19, (MR_Integer) 1))));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]), LRBeforeProc_10, ((MR_Box) (ProgPoint_19)), &conv0_LRBefore_22);
            LRBefore_22 = ((MR_Word) (conv0_LRBefore_22));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]), LRAfterProc_11, ((MR_Box) (ProgPoint_19)), &conv1_LRAfter_23);
            LRAfter_23 = ((MR_Word) (conv1_LRAfter_23));
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRAfter_23, LRBefore_22, &CreatedNodes_24);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), ResurRenamingProc_12, ((MR_Box) (ProgPoint_19)), &conv2_ResurRenaming0_25);
            if (succeeded)
            {
              ResurRenaming0_25 = ((MR_Word) (conv2_ResurRenaming0_25));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ResurRenaming_26 = ResurRenaming0_25;
            else
              ResurRenaming_26 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]));
            {
              Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0_1));
              MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Graph_9));
              MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (ResurRenaming_26));
            }
            Var_37 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), Var_36, CreatedNodes_24, ((MR_Box) (Var_37)), &conv4_CreatedRegions0_27);
            CreatedRegions0_27 = ((MR_Word) (conv4_CreatedRegions0_27));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[2]), ResurRenamingAnnoProc_13, ((MR_Box) (ProgPoint_19)), &conv5_ResurRenamingAnnos0_28);
            if (succeeded)
            {
              ResurRenamingAnnos0_28 = ((MR_Word) (conv5_ResurRenamingAnnos0_28));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ResurRenamingAnnos_29 = ResurRenamingAnnos0_28;
            else
              ResurRenamingAnnos_29 = (MR_Word) ((MR_Unsigned) 0U);
            Var_39 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            Var_40 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[10]), ResurRenamingAnnos_29, ((MR_Box) (Var_39)), &conv9_LeftRegions_30, ((MR_Box) (Var_40)), &conv8__RightRegions_31);
            LeftRegions_30 = ((MR_Word) (conv9_LeftRegions_30));
            mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CreatedRegions0_27, LeftRegions_30, &CreatedRegions_32);
            transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(RevGoalPath_21, CreatedRegions_32, STATE_VARIABLE_InCondRegionsProc_0_33, &STATE_VARIABLE_InCondRegionsProc_34);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Graph_9 = Graph_9;
            MR_Word next_value_of_tscc_proc_2_input_2_LRBeforeProc_10 = LRBeforeProc_10;
            MR_Word next_value_of_tscc_proc_2_input_3_LRAfterProc_11 = LRAfterProc_11;
            MR_Word next_value_of_tscc_proc_2_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
            MR_Word next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
            MR_Word next_value_of_tscc_proc_2_input_6_GoalInIte_14 = Cond_14;
            MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57 = STATE_VARIABLE_InCondRegionsProc_0_33;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Graph_9 = next_value_of_tscc_proc_2_input_1_Graph_9;
            tscc_proc_2_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_2_input_2_LRBeforeProc_10;
            tscc_proc_2_input_3_LRAfterProc_11 = next_value_of_tscc_proc_2_input_3_LRAfterProc_11;
            tscc_proc_2_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_2_input_4_ResurRenamingProc_12;
            tscc_proc_2_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
            tscc_proc_2_input_6_GoalInIte_14 = next_value_of_tscc_proc_2_input_6_GoalInIte_14;
            tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_InCondRegionsProc_34 = STATE_VARIABLE_InCondRegionsProc_34;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Graph_9 = tscc_proc_2_input_1_Graph_9;
      MR_Word LRBeforeProc_10 = tscc_proc_2_input_2_LRBeforeProc_10;
      MR_Word LRAfterProc_11 = tscc_proc_2_input_3_LRAfterProc_11;
      MR_Word ResurRenamingProc_12 = tscc_proc_2_input_4_ResurRenamingProc_12;
      MR_Word ResurRenamingAnnoProc_13 = tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
      MR_Word GoalInIte_14 = tscc_proc_2_input_6_GoalInIte_14;
      MR_Word STATE_VARIABLE_InCondRegionsProc_0_57 = tscc_proc_2_input_7_STATE_VARIABLE_InCondRegionsProc_0_57;
      MR_Word STATE_VARIABLE_InCondRegionsProc_58;
      MR_Word Expr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInIte_14, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Expr_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_26 = (MR_Word) ((MR_Word) (Expr_16));
            MR_Word next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
            MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
            MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
            MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
            MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
            MR_Word next_value_of_tscc_proc_1_input_6_Cond_14 = Goal_26;
            MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = STATE_VARIABLE_InCondRegionsProc_0_57;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
            tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
            tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
            tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
            tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
            tscc_proc_1_input_6_Cond_14 = next_value_of_tscc_proc_1_input_6_Cond_14;
            tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));

                if ((Var_110 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_75;
                  MR_Box conv11_STATE_VARIABLE_InCondRegionsProc_58;

                  {
                    Var_75 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Graph_9));
                    MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (LRBeforeProc_10));
                    MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (LRAfterProc_11));
                    MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) (ResurRenamingProc_12));
                    MR_hl_field(MR_mktag(0), Var_75, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_75, Var_110, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_57)), &conv11_STATE_VARIABLE_InCondRegionsProc_58);
                  STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) (conv11_STATE_VARIABLE_InCondRegionsProc_58));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 1))));

                if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_71;
                  MR_Box conv13_STATE_VARIABLE_InCondRegionsProc_58;

                  {
                    Var_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Graph_9));
                    MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (LRBeforeProc_10));
                    MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (LRAfterProc_11));
                    MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (ResurRenamingProc_12));
                    MR_hl_field(MR_mktag(0), Var_71, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_71, Var_112, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_57)), &conv13_STATE_VARIABLE_InCondRegionsProc_58);
                  STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) (conv13_STATE_VARIABLE_InCondRegionsProc_58));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 3))));
                MR_Word Var_68;
                MR_Box conv15_STATE_VARIABLE_InCondRegionsProc_58;

                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[2]));
                  MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_compound_goal_8_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Graph_9));
                  MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (LRBeforeProc_10));
                  MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (LRAfterProc_11));
                  MR_hl_field(MR_mktag(0), Var_68, 6) = ((MR_Box) (ResurRenamingProc_12));
                  MR_hl_field(MR_mktag(0), Var_68, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_68, Cases_25, ((MR_Box) (STATE_VARIABLE_InCondRegionsProc_0_57)), &conv15_STATE_VARIABLE_InCondRegionsProc_58);
                STATE_VARIABLE_InCondRegionsProc_58 = ((MR_Word) (conv15_STATE_VARIABLE_InCondRegionsProc_58));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
                MR_Word next_value_of_tscc_proc_1_input_6_Cond_14 = Goal_78;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = STATE_VARIABLE_InCondRegionsProc_0_57;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
                tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                tscc_proc_1_input_6_Cond_14 = next_value_of_tscc_proc_1_input_6_Cond_14;
                tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));
                MR_Word Then_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 3))));
                MR_Word Else_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_InCondRegionsProc_63_63;
                MR_Word STATE_VARIABLE_InCondRegionsProc_64_64;
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_9;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                MR_Word next_value_of_tscc_proc_1_input_6_Cond_14;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;

                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Cond_29, STATE_VARIABLE_InCondRegionsProc_0_57, &STATE_VARIABLE_InCondRegionsProc_63_63);
                transform_hlds__rbmm__condition_renaming__collect_regions_created_in_condition_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Then_30, STATE_VARIABLE_InCondRegionsProc_63_63, &STATE_VARIABLE_InCondRegionsProc_64_64);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
                next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
                next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
                next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
                next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
                next_value_of_tscc_proc_1_input_6_Cond_14 = Else_31;
                next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = STATE_VARIABLE_InCondRegionsProc_64_64;
                tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
                tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                tscc_proc_1_input_6_Cond_14 = next_value_of_tscc_proc_1_input_6_Cond_14;
                tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_InCondRegionsProc_0_33;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_regions_created_in_condition_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_InCondRegionsProc_34 = STATE_VARIABLE_InCondRegionsProc_58;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_InCondRegionsProc_34 = tscc_output_1_STATE_VARIABLE_InCondRegionsProc_34;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_regions_created_in_condition_4_p_0(
  MR_Word RevPath_5,
  MR_Word Created_6,
  MR_Word STATE_VARIABLE_InCondRegionsProc_0_12,
  MR_Word * STATE_VARIABLE_InCondRegionsProc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((RevPath_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InCondRegionsProc_13 = STATE_VARIABLE_InCondRegionsProc_0_12;
    else
    {
      MR_Word RevInitialPath_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPath_5, (MR_Integer) 0))));
      MR_Word LastStep_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPath_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_InCondRegionsProc_14_14;
      MR_Word next_value_of_RevPath_5;
      MR_Word next_value_of_STATE_VARIABLE_InCondRegionsProc_0_12;

      succeeded = (LastStep_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word InCondRegions_11;
        MR_Word InCondRegions0_10;
        MR_Box conv0_InCondRegions0_10;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), STATE_VARIABLE_InCondRegionsProc_0_12, ((MR_Box) (RevPath_5)), &conv0_InCondRegions0_10);
        if (succeeded)
        {
          InCondRegions0_10 = ((MR_Word) (conv0_InCondRegions0_10));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InCondRegions0_10, Created_6, &InCondRegions_11);
        else
          InCondRegions_11 = Created_6;
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InCondRegions_11);
        if (succeeded)
          STATE_VARIABLE_InCondRegionsProc_14_14 = STATE_VARIABLE_InCondRegionsProc_0_12;
        else
          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), ((MR_Box) (RevPath_5)), ((MR_Box) (InCondRegions_11)), STATE_VARIABLE_InCondRegionsProc_0_12, &STATE_VARIABLE_InCondRegionsProc_14_14);
      }
      else
        STATE_VARIABLE_InCondRegionsProc_14_14 = STATE_VARIABLE_InCondRegionsProc_0_12;
      // direct tailcall eliminated
      ;
      next_value_of_RevPath_5 = RevInitialPath_8;
      next_value_of_STATE_VARIABLE_InCondRegionsProc_0_12 = STATE_VARIABLE_InCondRegionsProc_14_14;
      RevPath_5 = next_value_of_RevPath_5;
      STATE_VARIABLE_InCondRegionsProc_0_12 = next_value_of_STATE_VARIABLE_InCondRegionsProc_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_LeftRegions_14;
    MR_Word conv7_STATE_VARIABLE_RightRegions_16;

    transform_hlds__rbmm__condition_renaming__renaming_annotation_to_regions_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_LeftRegions_14, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_RightRegions_16);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_LeftRegions_14));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_RightRegions_16));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Regions_14;

    transform_hlds__rbmm__condition_renaming__apply_region_renaming_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Regions_14);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Regions_14));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_NonLocalRegionProc_20;

    transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_case_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_NonLocalRegionProc_20);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_NonLocalRegionProc_20));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_NonLocalRegionProc_37;

    transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_NonLocalRegionProc_37);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_NonLocalRegionProc_37));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_NonLocalRegionProc_37;

    transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_NonLocalRegionProc_37);
    *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_NonLocalRegionProc_37));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(
  MR_Word tscc_proc_1_input_1_Graph_9,
  MR_Word tscc_proc_1_input_2_LRBeforeProc_10,
  MR_Word tscc_proc_1_input_3_LRAfterProc_11,
  MR_Word tscc_proc_1_input_4_ResurRenamingProc_12,
  MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_13,
  MR_Word tscc_proc_1_input_6_GoalInIte_14,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionProc_37)
{
  {
    MR_Word tscc_proc_2_input_1_Graph_9;
    MR_Word tscc_proc_2_input_2_LRBeforeProc_10;
    MR_Word tscc_proc_2_input_3_LRAfterProc_11;
    MR_Word tscc_proc_2_input_4_ResurRenamingProc_12;
    MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
    MR_Word tscc_proc_2_input_6_GoalInIte_14;
    MR_Word tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57;
    MR_Word tscc_output_1_STATE_VARIABLE_NonLocalRegionProc_37;

    // The code for TSCC PROC 1: pred transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite/8-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite/8-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal/8-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Graph_9 = tscc_proc_1_input_1_Graph_9;
      MR_Word LRBeforeProc_10 = tscc_proc_1_input_2_LRBeforeProc_10;
      MR_Word LRAfterProc_11 = tscc_proc_1_input_3_LRAfterProc_11;
      MR_Word ResurRenamingProc_12 = tscc_proc_1_input_4_ResurRenamingProc_12;
      MR_Word ResurRenamingAnnoProc_13 = tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
      MR_Word GoalInIte_14 = tscc_proc_1_input_6_GoalInIte_14;
      MR_Word STATE_VARIABLE_NonLocalRegionProc_0_36 = tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
      MR_Word STATE_VARIABLE_NonLocalRegionProc_37;
      MR_bool succeeded;
      MR_Word Expr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInIte_14, (MR_Integer) 0))));
      MR_Word Info_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInIte_14, (MR_Integer) 1))));
      MR_Word HasSubGoals_18;

      HasSubGoals_18 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(Expr_16);
      switch (HasSubGoals_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ProgPoint_19;
            MR_Word RevGoalPath_21;
            MR_Word LRBefore_22;
            MR_Word LRAfter_23;
            MR_Word RemovedAfterNodes_24;
            MR_Word CreatedBeforeNodes_25;
            MR_Word ResurRenaming_27;
            MR_Word RemovedAfterRegions0_28;
            MR_Word CreatedBeforeRegions0_29;
            MR_Word ResurRenamingAnnos_31;
            MR_Word LeftRegions_32;
            MR_Word RightRegions_33;
            MR_Word RemovedAfterRegions_34;
            MR_Word CreatedBeforeRegions_35;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_42;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Box conv0_LRBefore_22;
            MR_Box conv1_LRAfter_23;
            MR_Word ResurRenaming0_26;
            MR_Box conv2_ResurRenaming0_26;
            MR_Box conv4_RemovedAfterRegions0_28;
            MR_Box conv5_CreatedBeforeRegions0_29;
            MR_Word ResurRenamingAnnos0_30;
            MR_Box conv6_ResurRenamingAnnos0_30;
            MR_Box conv10_LeftRegions_32;
            MR_Box conv9_RightRegions_33;

            ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(Info_17);
            RevGoalPath_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_19, (MR_Integer) 1))));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]), LRBeforeProc_10, ((MR_Box) (ProgPoint_19)), &conv0_LRBefore_22);
            LRBefore_22 = ((MR_Word) (conv0_LRBefore_22));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]), LRAfterProc_11, ((MR_Box) (ProgPoint_19)), &conv1_LRAfter_23);
            LRAfter_23 = ((MR_Word) (conv1_LRAfter_23));
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRBefore_22, LRAfter_23, &RemovedAfterNodes_24);
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRAfter_23, LRBefore_22, &CreatedBeforeNodes_25);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), ResurRenamingProc_12, ((MR_Box) (ProgPoint_19)), &conv2_ResurRenaming0_26);
            if (succeeded)
            {
              ResurRenaming0_26 = ((MR_Word) (conv2_ResurRenaming0_26));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ResurRenaming_27 = ResurRenaming0_26;
            else
              ResurRenaming_27 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]));
            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1));
              MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Graph_9));
              MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ResurRenaming_27));
            }
            Var_40 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), Var_39, RemovedAfterNodes_24, ((MR_Box) (Var_40)), &conv4_RemovedAfterRegions0_28);
            RemovedAfterRegions0_28 = ((MR_Word) (conv4_RemovedAfterRegions0_28));
            Var_42 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), Var_39, CreatedBeforeNodes_25, ((MR_Box) (Var_42)), &conv5_CreatedBeforeRegions0_29);
            CreatedBeforeRegions0_29 = ((MR_Word) (conv5_CreatedBeforeRegions0_29));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[2]), ResurRenamingAnnoProc_13, ((MR_Box) (ProgPoint_19)), &conv6_ResurRenamingAnnos0_30);
            if (succeeded)
            {
              ResurRenamingAnnos0_30 = ((MR_Word) (conv6_ResurRenamingAnnos0_30));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ResurRenamingAnnos_31 = ResurRenamingAnnos0_30;
            else
              ResurRenamingAnnos_31 = (MR_Word) ((MR_Unsigned) 0U);
            Var_44 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            Var_45 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[9]), ResurRenamingAnnos_31, ((MR_Box) (Var_44)), &conv10_LeftRegions_32, ((MR_Box) (Var_45)), &conv9_RightRegions_33);
            LeftRegions_32 = ((MR_Word) (conv10_LeftRegions_32));
            RightRegions_33 = ((MR_Word) (conv9_RightRegions_33));
            mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RemovedAfterRegions0_28, RightRegions_33, &RemovedAfterRegions_34);
            mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CreatedBeforeRegions0_29, LeftRegions_32, &CreatedBeforeRegions_35);
            transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(RevGoalPath_21, CreatedBeforeRegions_35, RemovedAfterRegions_34, STATE_VARIABLE_NonLocalRegionProc_0_36, &STATE_VARIABLE_NonLocalRegionProc_37);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Graph_9 = Graph_9;
            MR_Word next_value_of_tscc_proc_2_input_2_LRBeforeProc_10 = LRBeforeProc_10;
            MR_Word next_value_of_tscc_proc_2_input_3_LRAfterProc_11 = LRAfterProc_11;
            MR_Word next_value_of_tscc_proc_2_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
            MR_Word next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
            MR_Word next_value_of_tscc_proc_2_input_6_GoalInIte_14 = GoalInIte_14;
            MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57 = STATE_VARIABLE_NonLocalRegionProc_0_36;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Graph_9 = next_value_of_tscc_proc_2_input_1_Graph_9;
            tscc_proc_2_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_2_input_2_LRBeforeProc_10;
            tscc_proc_2_input_3_LRAfterProc_11 = next_value_of_tscc_proc_2_input_3_LRAfterProc_11;
            tscc_proc_2_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_2_input_4_ResurRenamingProc_12;
            tscc_proc_2_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
            tscc_proc_2_input_6_GoalInIte_14 = next_value_of_tscc_proc_2_input_6_GoalInIte_14;
            tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_NonLocalRegionProc_37 = STATE_VARIABLE_NonLocalRegionProc_37;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Graph_9 = tscc_proc_2_input_1_Graph_9;
      MR_Word LRBeforeProc_10 = tscc_proc_2_input_2_LRBeforeProc_10;
      MR_Word LRAfterProc_11 = tscc_proc_2_input_3_LRAfterProc_11;
      MR_Word ResurRenamingProc_12 = tscc_proc_2_input_4_ResurRenamingProc_12;
      MR_Word ResurRenamingAnnoProc_13 = tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
      MR_Word GoalInIte_14 = tscc_proc_2_input_6_GoalInIte_14;
      MR_Word STATE_VARIABLE_NonLocalRegionProc_0_57 = tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57;
      MR_Word STATE_VARIABLE_NonLocalRegionProc_58;
      MR_Word Expr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInIte_14, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Expr_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_26 = (MR_Word) ((MR_Word) (Expr_16));
            MR_Word next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
            MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
            MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
            MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
            MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
            MR_Word next_value_of_tscc_proc_1_input_6_GoalInIte_14 = Goal_26;
            MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = STATE_VARIABLE_NonLocalRegionProc_0_57;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
            tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
            tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
            tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
            tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
            tscc_proc_1_input_6_GoalInIte_14 = next_value_of_tscc_proc_1_input_6_GoalInIte_14;
            tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));

                if ((Var_110 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_75;
                  MR_Box conv12_STATE_VARIABLE_NonLocalRegionProc_58;

                  {
                    Var_75 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Graph_9));
                    MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (LRBeforeProc_10));
                    MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (LRAfterProc_11));
                    MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) (ResurRenamingProc_12));
                    MR_hl_field(MR_mktag(0), Var_75, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_75, Var_110, ((MR_Box) (STATE_VARIABLE_NonLocalRegionProc_0_57)), &conv12_STATE_VARIABLE_NonLocalRegionProc_58);
                  STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) (conv12_STATE_VARIABLE_NonLocalRegionProc_58));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 1))));

                if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_71;
                  MR_Box conv14_STATE_VARIABLE_NonLocalRegionProc_58;

                  {
                    Var_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Graph_9));
                    MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (LRBeforeProc_10));
                    MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (LRAfterProc_11));
                    MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (ResurRenamingProc_12));
                    MR_hl_field(MR_mktag(0), Var_71, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_71, Var_112, ((MR_Box) (STATE_VARIABLE_NonLocalRegionProc_0_57)), &conv14_STATE_VARIABLE_NonLocalRegionProc_58);
                  STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) (conv14_STATE_VARIABLE_NonLocalRegionProc_58));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 3))));
                MR_Word Var_68;
                MR_Box conv16_STATE_VARIABLE_NonLocalRegionProc_58;

                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[2]));
                  MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Graph_9));
                  MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (LRBeforeProc_10));
                  MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (LRAfterProc_11));
                  MR_hl_field(MR_mktag(0), Var_68, 6) = ((MR_Box) (ResurRenamingProc_12));
                  MR_hl_field(MR_mktag(0), Var_68, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_68, Cases_25, ((MR_Box) (STATE_VARIABLE_NonLocalRegionProc_0_57)), &conv16_STATE_VARIABLE_NonLocalRegionProc_58);
                STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) (conv16_STATE_VARIABLE_NonLocalRegionProc_58));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
                MR_Word next_value_of_tscc_proc_1_input_6_GoalInIte_14 = Goal_78;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = STATE_VARIABLE_NonLocalRegionProc_0_57;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
                tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                tscc_proc_1_input_6_GoalInIte_14 = next_value_of_tscc_proc_1_input_6_GoalInIte_14;
                tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));
                MR_Word Then_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 3))));
                MR_Word Else_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_NonLocalRegionProc_63_63;
                MR_Word STATE_VARIABLE_NonLocalRegionProc_64_64;
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_9;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                MR_Word next_value_of_tscc_proc_1_input_6_GoalInIte_14;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;

                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Cond_29, STATE_VARIABLE_NonLocalRegionProc_0_57, &STATE_VARIABLE_NonLocalRegionProc_63_63);
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Then_30, STATE_VARIABLE_NonLocalRegionProc_63_63, &STATE_VARIABLE_NonLocalRegionProc_64_64);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
                next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
                next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
                next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
                next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
                next_value_of_tscc_proc_1_input_6_GoalInIte_14 = Else_31;
                next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = STATE_VARIABLE_NonLocalRegionProc_64_64;
                tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
                tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                tscc_proc_1_input_6_GoalInIte_14 = next_value_of_tscc_proc_1_input_6_GoalInIte_14;
                tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_NonLocalRegionProc_37 = STATE_VARIABLE_NonLocalRegionProc_58;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionProc_37 = tscc_output_1_STATE_VARIABLE_NonLocalRegionProc_37;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0(
  MR_Word tscc_proc_2_input_1_Graph_9,
  MR_Word tscc_proc_2_input_2_LRBeforeProc_10,
  MR_Word tscc_proc_2_input_3_LRAfterProc_11,
  MR_Word tscc_proc_2_input_4_ResurRenamingProc_12,
  MR_Word tscc_proc_2_input_5_ResurRenamingAnnoProc_13,
  MR_Word tscc_proc_2_input_6_GoalInIte_14,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionProc_37)
{
  {
    MR_Word tscc_proc_1_input_1_Graph_9;
    MR_Word tscc_proc_1_input_2_LRBeforeProc_10;
    MR_Word tscc_proc_1_input_3_LRAfterProc_11;
    MR_Word tscc_proc_1_input_4_ResurRenamingProc_12;
    MR_Word tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
    MR_Word tscc_proc_1_input_6_GoalInIte_14;
    MR_Word tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
    MR_Word tscc_output_1_STATE_VARIABLE_NonLocalRegionProc_37;

    // The code for TSCC PROC 2: pred transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal/8-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite/8-0
    ;
    // proc 2 in TSCC: pred transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal/8-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Graph_9 = tscc_proc_1_input_1_Graph_9;
      MR_Word LRBeforeProc_10 = tscc_proc_1_input_2_LRBeforeProc_10;
      MR_Word LRAfterProc_11 = tscc_proc_1_input_3_LRAfterProc_11;
      MR_Word ResurRenamingProc_12 = tscc_proc_1_input_4_ResurRenamingProc_12;
      MR_Word ResurRenamingAnnoProc_13 = tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
      MR_Word GoalInIte_14 = tscc_proc_1_input_6_GoalInIte_14;
      MR_Word STATE_VARIABLE_NonLocalRegionProc_0_36 = tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
      MR_Word STATE_VARIABLE_NonLocalRegionProc_37;
      MR_bool succeeded;
      MR_Word Expr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInIte_14, (MR_Integer) 0))));
      MR_Word Info_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInIte_14, (MR_Integer) 1))));
      MR_Word HasSubGoals_18;

      HasSubGoals_18 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(Expr_16);
      switch (HasSubGoals_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ProgPoint_19;
            MR_Word RevGoalPath_21;
            MR_Word LRBefore_22;
            MR_Word LRAfter_23;
            MR_Word RemovedAfterNodes_24;
            MR_Word CreatedBeforeNodes_25;
            MR_Word ResurRenaming_27;
            MR_Word RemovedAfterRegions0_28;
            MR_Word CreatedBeforeRegions0_29;
            MR_Word ResurRenamingAnnos_31;
            MR_Word LeftRegions_32;
            MR_Word RightRegions_33;
            MR_Word RemovedAfterRegions_34;
            MR_Word CreatedBeforeRegions_35;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_42;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Box conv0_LRBefore_22;
            MR_Box conv1_LRAfter_23;
            MR_Word ResurRenaming0_26;
            MR_Box conv2_ResurRenaming0_26;
            MR_Box conv4_RemovedAfterRegions0_28;
            MR_Box conv5_CreatedBeforeRegions0_29;
            MR_Word ResurRenamingAnnos0_30;
            MR_Box conv6_ResurRenamingAnnos0_30;
            MR_Box conv10_LeftRegions_32;
            MR_Box conv9_RightRegions_33;

            ProgPoint_19 = transform_hlds__smm_common__program_point_init_1_f_0(Info_17);
            RevGoalPath_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_19, (MR_Integer) 1))));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]), LRBeforeProc_10, ((MR_Box) (ProgPoint_19)), &conv0_LRBefore_22);
            LRBefore_22 = ((MR_Word) (conv0_LRBefore_22));
            mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[3]), LRAfterProc_11, ((MR_Box) (ProgPoint_19)), &conv1_LRAfter_23);
            LRAfter_23 = ((MR_Word) (conv1_LRAfter_23));
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRBefore_22, LRAfter_23, &RemovedAfterNodes_24);
            mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRAfter_23, LRBefore_22, &CreatedBeforeNodes_25);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[2]), ResurRenamingProc_12, ((MR_Box) (ProgPoint_19)), &conv2_ResurRenaming0_26);
            if (succeeded)
            {
              ResurRenaming0_26 = ((MR_Word) (conv2_ResurRenaming0_26));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ResurRenaming_27 = ResurRenaming0_26;
            else
              ResurRenaming_27 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[1]));
            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0_1));
              MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Graph_9));
              MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ResurRenaming_27));
            }
            Var_40 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), Var_39, RemovedAfterNodes_24, ((MR_Box) (Var_40)), &conv4_RemovedAfterRegions0_28);
            RemovedAfterRegions0_28 = ((MR_Word) (conv4_RemovedAfterRegions0_28));
            Var_42 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), Var_39, CreatedBeforeNodes_25, ((MR_Box) (Var_42)), &conv5_CreatedBeforeRegions0_29);
            CreatedBeforeRegions0_29 = ((MR_Word) (conv5_CreatedBeforeRegions0_29));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[2]), ResurRenamingAnnoProc_13, ((MR_Box) (ProgPoint_19)), &conv6_ResurRenamingAnnos0_30);
            if (succeeded)
            {
              ResurRenamingAnnos0_30 = ((MR_Word) (conv6_ResurRenamingAnnos0_30));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              ResurRenamingAnnos_31 = ResurRenamingAnnos0_30;
            else
              ResurRenamingAnnos_31 = (MR_Word) ((MR_Unsigned) 0U);
            Var_44 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            Var_45 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[9]), ResurRenamingAnnos_31, ((MR_Box) (Var_44)), &conv10_LeftRegions_32, ((MR_Box) (Var_45)), &conv9_RightRegions_33);
            LeftRegions_32 = ((MR_Word) (conv10_LeftRegions_32));
            RightRegions_33 = ((MR_Word) (conv9_RightRegions_33));
            mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RemovedAfterRegions0_28, RightRegions_33, &RemovedAfterRegions_34);
            mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CreatedBeforeRegions0_29, LeftRegions_32, &CreatedBeforeRegions_35);
            transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(RevGoalPath_21, CreatedBeforeRegions_35, RemovedAfterRegions_34, STATE_VARIABLE_NonLocalRegionProc_0_36, &STATE_VARIABLE_NonLocalRegionProc_37);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_Graph_9 = Graph_9;
            MR_Word next_value_of_tscc_proc_2_input_2_LRBeforeProc_10 = LRBeforeProc_10;
            MR_Word next_value_of_tscc_proc_2_input_3_LRAfterProc_11 = LRAfterProc_11;
            MR_Word next_value_of_tscc_proc_2_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
            MR_Word next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
            MR_Word next_value_of_tscc_proc_2_input_6_GoalInIte_14 = GoalInIte_14;
            MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57 = STATE_VARIABLE_NonLocalRegionProc_0_36;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Graph_9 = next_value_of_tscc_proc_2_input_1_Graph_9;
            tscc_proc_2_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_2_input_2_LRBeforeProc_10;
            tscc_proc_2_input_3_LRAfterProc_11 = next_value_of_tscc_proc_2_input_3_LRAfterProc_11;
            tscc_proc_2_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_2_input_4_ResurRenamingProc_12;
            tscc_proc_2_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
            tscc_proc_2_input_6_GoalInIte_14 = next_value_of_tscc_proc_2_input_6_GoalInIte_14;
            tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_NonLocalRegionProc_37 = STATE_VARIABLE_NonLocalRegionProc_37;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Graph_9 = tscc_proc_2_input_1_Graph_9;
      MR_Word LRBeforeProc_10 = tscc_proc_2_input_2_LRBeforeProc_10;
      MR_Word LRAfterProc_11 = tscc_proc_2_input_3_LRAfterProc_11;
      MR_Word ResurRenamingProc_12 = tscc_proc_2_input_4_ResurRenamingProc_12;
      MR_Word ResurRenamingAnnoProc_13 = tscc_proc_2_input_5_ResurRenamingAnnoProc_13;
      MR_Word GoalInIte_14 = tscc_proc_2_input_6_GoalInIte_14;
      MR_Word STATE_VARIABLE_NonLocalRegionProc_0_57 = tscc_proc_2_input_7_STATE_VARIABLE_NonLocalRegionProc_0_57;
      MR_Word STATE_VARIABLE_NonLocalRegionProc_58;
      MR_Word Expr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalInIte_14, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Expr_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_26 = (MR_Word) ((MR_Word) (Expr_16));
            MR_Word next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
            MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
            MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
            MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
            MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
            MR_Word next_value_of_tscc_proc_1_input_6_GoalInIte_14 = Goal_26;
            MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = STATE_VARIABLE_NonLocalRegionProc_0_57;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
            tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
            tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
            tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
            tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
            tscc_proc_1_input_6_GoalInIte_14 = next_value_of_tscc_proc_1_input_6_GoalInIte_14;
            tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));

                if ((Var_110 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_75;
                  MR_Box conv12_STATE_VARIABLE_NonLocalRegionProc_58;

                  {
                    Var_75 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Graph_9));
                    MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (LRBeforeProc_10));
                    MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (LRAfterProc_11));
                    MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) (ResurRenamingProc_12));
                    MR_hl_field(MR_mktag(0), Var_75, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_75, Var_110, ((MR_Box) (STATE_VARIABLE_NonLocalRegionProc_0_57)), &conv12_STATE_VARIABLE_NonLocalRegionProc_58);
                  STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) (conv12_STATE_VARIABLE_NonLocalRegionProc_58));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 1))));

                if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                    return;
                  }
                else
                {
                  MR_Word Var_71;
                  MR_Box conv14_STATE_VARIABLE_NonLocalRegionProc_58;

                  {
                    Var_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Graph_9));
                    MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (LRBeforeProc_10));
                    MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (LRAfterProc_11));
                    MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (ResurRenamingProc_12));
                    MR_hl_field(MR_mktag(0), Var_71, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_71, Var_112, ((MR_Box) (STATE_VARIABLE_NonLocalRegionProc_0_57)), &conv14_STATE_VARIABLE_NonLocalRegionProc_58);
                  STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) (conv14_STATE_VARIABLE_NonLocalRegionProc_58));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 3))));
                MR_Word Var_68;
                MR_Box conv16_STATE_VARIABLE_NonLocalRegionProc_58;

                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[2]));
                  MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_compound_goal_8_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (Graph_9));
                  MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (LRBeforeProc_10));
                  MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (LRAfterProc_11));
                  MR_hl_field(MR_mktag(0), Var_68, 6) = ((MR_Box) (ResurRenamingProc_12));
                  MR_hl_field(MR_mktag(0), Var_68, 7) = ((MR_Box) (ResurRenamingAnnoProc_13));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), Var_68, Cases_25, ((MR_Box) (STATE_VARIABLE_NonLocalRegionProc_0_57)), &conv16_STATE_VARIABLE_NonLocalRegionProc_58);
                STATE_VARIABLE_NonLocalRegionProc_58 = ((MR_Word) (conv16_STATE_VARIABLE_NonLocalRegionProc_58));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
                MR_Word next_value_of_tscc_proc_1_input_6_GoalInIte_14 = Goal_78;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = STATE_VARIABLE_NonLocalRegionProc_0_57;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
                tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                tscc_proc_1_input_6_GoalInIte_14 = next_value_of_tscc_proc_1_input_6_GoalInIte_14;
                tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 2))));
                MR_Word Then_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 3))));
                MR_Word Else_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_16, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_NonLocalRegionProc_63_63;
                MR_Word STATE_VARIABLE_NonLocalRegionProc_64_64;
                MR_Word next_value_of_tscc_proc_1_input_1_Graph_9;
                MR_Word next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                MR_Word next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                MR_Word next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                MR_Word next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                MR_Word next_value_of_tscc_proc_1_input_6_GoalInIte_14;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;

                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Cond_29, STATE_VARIABLE_NonLocalRegionProc_0_57, &STATE_VARIABLE_NonLocalRegionProc_63_63);
                transform_hlds__rbmm__condition_renaming__collect_non_local_regions_in_ite_8_p_0(Graph_9, LRBeforeProc_10, LRAfterProc_11, ResurRenamingProc_12, ResurRenamingAnnoProc_13, Then_30, STATE_VARIABLE_NonLocalRegionProc_63_63, &STATE_VARIABLE_NonLocalRegionProc_64_64);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Graph_9 = Graph_9;
                next_value_of_tscc_proc_1_input_2_LRBeforeProc_10 = LRBeforeProc_10;
                next_value_of_tscc_proc_1_input_3_LRAfterProc_11 = LRAfterProc_11;
                next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12 = ResurRenamingProc_12;
                next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = ResurRenamingAnnoProc_13;
                next_value_of_tscc_proc_1_input_6_GoalInIte_14 = Else_31;
                next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = STATE_VARIABLE_NonLocalRegionProc_64_64;
                tscc_proc_1_input_1_Graph_9 = next_value_of_tscc_proc_1_input_1_Graph_9;
                tscc_proc_1_input_2_LRBeforeProc_10 = next_value_of_tscc_proc_1_input_2_LRBeforeProc_10;
                tscc_proc_1_input_3_LRAfterProc_11 = next_value_of_tscc_proc_1_input_3_LRAfterProc_11;
                tscc_proc_1_input_4_ResurRenamingProc_12 = next_value_of_tscc_proc_1_input_4_ResurRenamingProc_12;
                tscc_proc_1_input_5_ResurRenamingAnnoProc_13 = next_value_of_tscc_proc_1_input_5_ResurRenamingAnnoProc_13;
                tscc_proc_1_input_6_GoalInIte_14 = next_value_of_tscc_proc_1_input_6_GoalInIte_14;
                tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_NonLocalRegionProc_0_36;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.condition_renaming.collect_non_local_regions_in_ite_compound_goal\'/8", (MR_String) "atomic or unsupported goal");
                return;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_NonLocalRegionProc_37 = STATE_VARIABLE_NonLocalRegionProc_58;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_NonLocalRegionProc_37 = tscc_output_1_STATE_VARIABLE_NonLocalRegionProc_37;
    return;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__record_non_local_regions_5_p_0(
  MR_Word RevPath_6,
  MR_Word Created_7,
  MR_Word Removed_8,
  MR_Word STATE_VARIABLE_NonLocalRegionProc_0_16,
  MR_Word * STATE_VARIABLE_NonLocalRegionProc_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((RevPath_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NonLocalRegionProc_17 = STATE_VARIABLE_NonLocalRegionProc_0_16;
    else
    {
      MR_Word RevInitialPath_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPath_6, (MR_Integer) 0))));
      MR_Word LastStep_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPath_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_NonLocalRegionProc_19_19;
      MR_Word next_value_of_RevPath_6;
      MR_Word next_value_of_STATE_VARIABLE_NonLocalRegionProc_0_16;

      succeeded = (LastStep_11 == (MR_Word) ((MR_Unsigned) 8U));
      if (succeeded)
      {
        MR_Word RevPathToCond_12;
        MR_Word NonLocalRegions_15;
        MR_Word NonLocalRegions0_13;
        MR_Box conv0_NonLocalRegions0_13;

        {
          RevPathToCond_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevPathToCond_12, 0) = ((MR_Box) (RevInitialPath_10));
          MR_hl_field(MR_mktag(1), RevPathToCond_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), STATE_VARIABLE_NonLocalRegionProc_0_16, ((MR_Box) (RevPathToCond_12)), &conv0_NonLocalRegions0_13);
        if (succeeded)
        {
          NonLocalRegions0_13 = ((MR_Word) (conv0_NonLocalRegions0_13));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word NonLocalRegions1_14;

          mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLocalRegions0_13, Created_7, &NonLocalRegions1_14);
          mercury__set__difference_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLocalRegions1_14, Removed_8, &NonLocalRegions_15);
        }
        else
          mercury__set__difference_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Created_7, Removed_8, &NonLocalRegions_15);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLocalRegions_15);
        if (succeeded)
          STATE_VARIABLE_NonLocalRegionProc_19_19 = STATE_VARIABLE_NonLocalRegionProc_0_16;
        else
          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_1[0]), ((MR_Box) (RevPathToCond_12)), ((MR_Box) (NonLocalRegions_15)), STATE_VARIABLE_NonLocalRegionProc_0_16, &STATE_VARIABLE_NonLocalRegionProc_19_19);
      }
      else
        STATE_VARIABLE_NonLocalRegionProc_19_19 = STATE_VARIABLE_NonLocalRegionProc_0_16;
      // direct tailcall eliminated
      ;
      next_value_of_RevPath_6 = RevInitialPath_10;
      next_value_of_STATE_VARIABLE_NonLocalRegionProc_0_16 = STATE_VARIABLE_NonLocalRegionProc_19_19;
      RevPath_6 = next_value_of_RevPath_6;
      STATE_VARIABLE_NonLocalRegionProc_0_16 = next_value_of_STATE_VARIABLE_NonLocalRegionProc_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_NonLocalRegionsTable_38;
    MR_Word conv0_STATE_VARIABLE_InCondRegionsTable_40;

    transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_proc_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NonLocalRegionsTable_38, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_InCondRegionsTable_40);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NonLocalRegionsTable_38));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_InCondRegionsTable_40));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word RptaInfoTable_13,
  MR_Word LRBeforeTable_14,
  MR_Word LRAfterTable_15,
  MR_Word ResurRenamingTable_16,
  MR_Word ResurRenamingAnnoTable_17,
  MR_Word PredId_18,
  MR_Word STATE_VARIABLE_NonLocalRegionsTable_0_23,
  MR_Word * STATE_VARIABLE_NonLocalRegionsTable_24,
  MR_Word STATE_VARIABLE_InCondRegionsTable_0_25,
  MR_Word * STATE_VARIABLE_InCondRegionsTable_26)
{
  {
    MR_Word PredInfo_21;
    MR_Word ProcIds_22;
    MR_Word Var_27;
    MR_Box conv3_STATE_VARIABLE_NonLocalRegionsTable_24;
    MR_Box conv2_STATE_VARIABLE_InCondRegionsTable_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_18, &PredInfo_21);
    ProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_21);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (ModuleInfo_12));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (PredId_18));
      MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (RptaInfoTable_13));
      MR_hl_field(MR_mktag(0), Var_27, 6) = ((MR_Box) (LRBeforeTable_14));
      MR_hl_field(MR_mktag(0), Var_27, 7) = ((MR_Box) (LRAfterTable_15));
      MR_hl_field(MR_mktag(0), Var_27, 8) = ((MR_Box) (ResurRenamingTable_16));
      MR_hl_field(MR_mktag(0), Var_27, 9) = ((MR_Box) (ResurRenamingAnnoTable_17));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[1]), Var_27, ProcIds_22, ((MR_Box) (STATE_VARIABLE_NonLocalRegionsTable_0_23)), &conv3_STATE_VARIABLE_NonLocalRegionsTable_24, ((MR_Box) (STATE_VARIABLE_InCondRegionsTable_0_25)), &conv2_STATE_VARIABLE_InCondRegionsTable_26);
    *STATE_VARIABLE_NonLocalRegionsTable_24 = ((MR_Word) (conv3_STATE_VARIABLE_NonLocalRegionsTable_24));
    *STATE_VARIABLE_InCondRegionsTable_26 = ((MR_Word) (conv2_STATE_VARIABLE_InCondRegionsTable_26));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_IteRenamingTable_23;
    MR_Word conv0_STATE_VARIABLE_IteAnnotationTable_25;

    transform_hlds__rbmm__condition_renaming__collect_ite_annotation_proc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_IteRenamingTable_23, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_IteAnnotationTable_25);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_IteRenamingTable_23));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_IteAnnotationTable_25));
  }
}

void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0(
  MR_Word IteRenamedRegionTable_7,
  MR_Word ExecPathTable_8,
  MR_Word RptaInfoTable_9,
  MR_Word STATE_VARIABLE_IteRenamingTable_0_12,
  MR_Word * STATE_VARIABLE_IteRenamingTable_13,
  MR_Word * IteAnnotationTable_11)
{
  {
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Box conv3_STATE_VARIABLE_IteRenamingTable_13;
    MR_Box conv2_IteAnnotationTable_11;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ExecPathTable_8));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (RptaInfoTable_9));
    }
    Var_16 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[5]));
    mercury__map__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[4]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[6]), Var_14, IteRenamedRegionTable_7, ((MR_Box) (STATE_VARIABLE_IteRenamingTable_0_12)), &conv3_STATE_VARIABLE_IteRenamingTable_13, ((MR_Box) (Var_16)), &conv2_IteAnnotationTable_11);
    *STATE_VARIABLE_IteRenamingTable_13 = ((MR_Word) (conv3_STATE_VARIABLE_IteRenamingTable_13));
    *IteAnnotationTable_11 = ((MR_Word) (conv2_IteAnnotationTable_11));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IteRenamingTable_20;

    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IteRenamingTable_20);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IteRenamingTable_20));
  }
}

void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RptaInfoTable_6,
  MR_Word IteRenamedRegionTable_7,
  MR_Word * IteRenamingTable_8)
{
  {
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Box conv1_IteRenamingTable_8;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (RptaInfoTable_6));
    }
    Var_10 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[3]));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[4]), Var_9, IteRenamedRegionTable_7, ((MR_Box) (Var_10)), &conv1_IteRenamingTable_8);
    *IteRenamingTable_8 = ((MR_Word) (conv1_IteRenamingTable_8));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IteRenamedRegionTable_13;

    transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IteRenamedRegionTable_13);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IteRenamedRegionTable_13));
  }
}

void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0(
  MR_Word InCondRegionsTable_4,
  MR_Word NonLocalRegionsTable_5,
  MR_Word * IteRenamedRegionsTable_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Box conv1_IteRenamedRegionsTable_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (NonLocalRegionsTable_5));
    }
    Var_8 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]));
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[1]), Var_7, InCondRegionsTable_4, ((MR_Box) (Var_8)), &conv1_IteRenamedRegionsTable_6);
    *IteRenamedRegionsTable_6 = ((MR_Word) (conv1_IteRenamedRegionsTable_6));
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_NonLocalRegionsTable_24;
    MR_Word conv0_STATE_VARIABLE_InCondRegionsTable_26;

    transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_pred_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NonLocalRegionsTable_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_InCondRegionsTable_26);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NonLocalRegionsTable_24));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_InCondRegionsTable_26));
  }
}

void MR_CALL 
transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word RptaInfoTable_10,
  MR_Word LRBeforeTable_11,
  MR_Word LRAfterTable_12,
  MR_Word ResurRenamingTable_13,
  MR_Word ResurRenamingAnnoTable_14,
  MR_Word * NonLocalRegionsTable_15,
  MR_Word * InCondRegionsTable_16)
{
  {
    MR_Word PredIds_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box conv3_NonLocalRegionsTable_15;
    MR_Box conv2_InCondRegionsTable_16;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_9, &PredIds_17);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&transform_hlds__rbmm__condition_renaming_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (RptaInfoTable_10));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (LRBeforeTable_11));
      MR_hl_field(MR_mktag(0), Var_18, 6) = ((MR_Box) (LRAfterTable_12));
      MR_hl_field(MR_mktag(0), Var_18, 7) = ((MR_Box) (ResurRenamingTable_13));
      MR_hl_field(MR_mktag(0), Var_18, 8) = ((MR_Box) (ResurRenamingAnnoTable_14));
    }
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]));
    Var_20 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[0]));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[1]), (MR_Word) (&transform_hlds__rbmm__condition_renaming_scalar_common_2[1]), Var_18, PredIds_17, ((MR_Box) (Var_19)), &conv3_NonLocalRegionsTable_15, ((MR_Box) (Var_20)), &conv2_InCondRegionsTable_16);
    *NonLocalRegionsTable_15 = ((MR_Word) (conv3_NonLocalRegionsTable_15));
    *InCondRegionsTable_16 = ((MR_Word) (conv2_InCondRegionsTable_16));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__rbmm__condition_renaming____Unify____goal_path_regions_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__rbmm__condition_renaming____Compare____goal_path_regions_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__rbmm__condition_renaming____Unify____proc_goal_path_regions_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__rbmm__condition_renaming____Compare____proc_goal_path_regions_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__rbmm__condition_renaming__init(void)
{
}

void mercury__transform_hlds__rbmm__condition_renaming__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_goal_path_regions_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__condition_renaming__transform_hlds__rbmm__condition_renaming__type_ctor_info_proc_goal_path_regions_table_0);
}

void mercury__transform_hlds__rbmm__condition_renaming__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__condition_renaming__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.condition_renaming.
