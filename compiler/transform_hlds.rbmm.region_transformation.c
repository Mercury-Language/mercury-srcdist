/*
** Automatically generated from `rbmm.region_transformation.m'
** by the Mercury compiler,
** version rotd-2023-11-01
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


// :- module transform_hlds.rbmm.region_transformation.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__region_transformation__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_transformation.mih"


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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__642__1_2_p_0(
  MR_Word OtherConsIds_26,
  MR_Word HeadVar__2_65);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_7_p_0(
  MR_Word Annotation_8,
  MR_Word STATE_VARIABLE_NameToVar_0_20,
  MR_Word * STATE_VARIABLE_NameToVar_21,
  MR_Word STATE_VARIABLE_VarTable_0_22,
  MR_Word * STATE_VARIABLE_VarTable_23,
  MR_Word Conjs0_11,
  MR_Word * Conjs_12);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_8_p_0(
  MR_Word IteRenaming_9,
  MR_Word Annotation_10,
  MR_Word STATE_VARIABLE_NameToVar_0_22,
  MR_Word * STATE_VARIABLE_NameToVar_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word Conjs0_13,
  MR_Word * Conjs_14);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Context_13,
  MR_Word ResurRenaming_14,
  MR_Word IteRenaming_15,
  MR_Word RegionInstruction_16,
  MR_Word STATE_VARIABLE_NameToVar_0_26,
  MR_Word * STATE_VARIABLE_NameToVar_27,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29,
  MR_Word Conjs0_19,
  MR_Word * Conjs_20);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Context_13,
  MR_Word ResurRenaming_14,
  MR_Word IteRenaming_15,
  MR_Word RegionInstruction_16,
  MR_Word STATE_VARIABLE_NameToVar_0_26,
  MR_Word * STATE_VARIABLE_NameToVar_27,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29,
  MR_Word Conjs0_19,
  MR_Word * Conjs_20);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_9_p_0(
  MR_Word Graph_10,
  MR_Word ResurRenaming_11,
  MR_Word IteRenaming_12,
  MR_Word Node_13,
  MR_Word * RegVar_14,
  MR_Word STATE_VARIABLE_NameToVar_0_18,
  MR_Word * STATE_VARIABLE_NameToVar_19,
  MR_Word STATE_VARIABLE_VarTable_0_20,
  MR_Word * STATE_VARIABLE_VarTable_21);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_7_p_0(
  MR_Word Graph_8,
  MR_Word Node_9,
  MR_Word * RegVar_10,
  MR_Word STATE_VARIABLE_NameToVar_0_14,
  MR_Word * STATE_VARIABLE_NameToVar_15,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Graph_17,
  MR_Word ResurRenamingProc_18,
  MR_Word IteRenamingProc_19,
  MR_Word ActualRegionArgProc_20,
  MR_Word RegionInstructionProc_21,
  MR_Word ResurRenamingAnnoProc_22,
  MR_Word IteRenamingAnnoProc_23,
  MR_Word Switch_24,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_NameToVar_0_58,
  MR_Word * STATE_VARIABLE_NameToVar_59,
  MR_Word STATE_VARIABLE_VarTable_0_60,
  MR_Word * STATE_VARIABLE_VarTable_61);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_9_p_0(
  MR_Word ResurRenamingAnnoProc_10,
  MR_Word ProgPoint_11,
  MR_Word IteRenaming_12,
  MR_Word STATE_VARIABLE_NameToVar_0_17,
  MR_Word * STATE_VARIABLE_NameToVar_18,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20,
  MR_Word STATE_VARIABLE_Conjs_0_21,
  MR_Word * STATE_VARIABLE_Conjs_22);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_8_p_0(
  MR_Word IteRenamingAnnoProc_9,
  MR_Word ProgPoint_10,
  MR_Word STATE_VARIABLE_NameToVar_0_15,
  MR_Word * STATE_VARIABLE_NameToVar_16,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word STATE_VARIABLE_IteRenamingAssignments_0_19,
  MR_Word * STATE_VARIABLE_IteRenamingAssignments_20);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(
  MR_Word RptaInfoTable_15,
  MR_Word FormalRegionArgTable_16,
  MR_Word ActualRegionArgTable_17,
  MR_Word ResurRenamingTable_18,
  MR_Word IteRenamingTable_19,
  MR_Word RegionInstructionTable_20,
  MR_Word ResurRenamingAnnoTable_21,
  MR_Word IteRenamingAnnoTable_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word STATE_VARIABLE_NameToVarTable_0_50,
  MR_Word * STATE_VARIABLE_NameToVarTable_51,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_18_p_0(
  MR_Word ModuleInfo_19,
  MR_Word PredInfo_20,
  MR_Word Graph_21,
  MR_Word FormalRegionArgProc_22,
  MR_Word ActualRegionArgProc_23,
  MR_Word ResurRenamingProc_24,
  MR_Word IteRenamingProc_25,
  MR_Word RegionInstructionProc_26,
  MR_Word ResurRenamingAnnoProc_27,
  MR_Word IteRenamingAnnoProc_28,
  MR_Word STATE_VARIABLE_VarTable_0_50,
  MR_Word STATE_VARIABLE_HeadVars_0_51,
  MR_Word STATE_VARIABLE_ActualArgModes_0_52,
  MR_Word STATE_VARIABLE_Goal_0_53,
  MR_Word STATE_VARIABLE_NameToVar_0_54,
  MR_Word * STATE_VARIABLE_NameToVar_55,
  MR_Word STATE_VARIABLE_ProcInfo_0_56,
  MR_Word * STATE_VARIABLE_ProcInfo_57);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Graph_16,
  MR_Word ResurRenamingProc_17,
  MR_Word IteRenamingProc_18,
  MR_Word ActualRegionArgProc_19,
  MR_Word RegionInstructionProc_20,
  MR_Word ResurRenamingAnnoProc_21,
  MR_Word IteRenamingAnnoProc_22,
  MR_Word STATE_VARIABLE_Goal_0_46,
  MR_Word * STATE_VARIABLE_Goal_47,
  MR_Word STATE_VARIABLE_NameToVar_0_48,
  MR_Word * STATE_VARIABLE_NameToVar_49,
  MR_Word STATE_VARIABLE_VarTable_0_50,
  MR_Word * STATE_VARIABLE_VarTable_51);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Graph_16,
  MR_Word ResurRenamingProc_17,
  MR_Word IteRenamingProc_18,
  MR_Word ActualRegionArgProc_19,
  MR_Word RegionInstructionProc_20,
  MR_Word ResurRenamingAnnoProc_21,
  MR_Word IteRenamingAnnoProc_22,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_NameToVar_0_80,
  MR_Word * STATE_VARIABLE_NameToVar_81,
  MR_Word STATE_VARIABLE_VarTable_0_82,
  MR_Word * STATE_VARIABLE_VarTable_83);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Graph_16,
  MR_Word ResurRenaming_17,
  MR_Word IteRenaming_18,
  MR_Word ActualRegionArgProc_19,
  MR_Word ProgPoint_20,
  MR_Word STATE_VARIABLE_GoalExpr_0_77,
  MR_Word * STATE_VARIABLE_GoalExpr_78,
  MR_Word STATE_VARIABLE_GoalInfo_0_79,
  MR_Word * STATE_VARIABLE_GoalInfo_80,
  MR_Word STATE_VARIABLE_NameToVar_0_81,
  MR_Word * STATE_VARIABLE_NameToVar_82,
  MR_Word STATE_VARIABLE_VarTable_0_83,
  MR_Word * STATE_VARIABLE_VarTable_84);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Graph_2,
  MR_Word ResurRenaming_3,
  MR_Word IteRenaming_4,
  MR_Word STATE_VARIABLE_Unification_0_5,
  MR_Word * STATE_VARIABLE_Unification_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_8_p_0(
  MR_String Name0_9,
  MR_Word ResurRenaming_10,
  MR_Word IteRenaming_11,
  MR_Word * RegVar_12,
  MR_Word STATE_VARIABLE_NameToVar_0_18,
  MR_Word * STATE_VARIABLE_NameToVar_19,
  MR_Word STATE_VARIABLE_VarTable_0_20,
  MR_Word * STATE_VARIABLE_VarTable_21);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(
  MR_Word RptaInfoTable_14,
  MR_Word FormalRegionArgTable_15,
  MR_Word ActualRegionArgTable_16,
  MR_Word ResurRenamingTable_17,
  MR_Word IteRenamingTable_18,
  MR_Word RegionInstructionTable_19,
  MR_Word ResurRenamingAnnoTable_20,
  MR_Word IteRenamingAnnoTable_21,
  MR_Word PredId_22,
  MR_Word STATE_VARIABLE_NameToVarTable_0_27,
  MR_Word * STATE_VARIABLE_NameToVarTable_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(
  MR_Word PPId_7,
  MR_Word FormalRegionArgs_8,
  MR_Word STATE_VARIABLE_Processed_0_27,
  MR_Word * STATE_VARIABLE_Processed_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_4[1][16];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_5[1][6];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_6[2][17];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_7[1][12];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_8[1][18];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_9[2][10];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_10[1][14];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_11[1][11];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_12[1][5];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_13[2][1];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_14[1][7];




static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
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
    ((MR_Box) (MR_mkword(3, &transform_hlds__rbmm__region_transformation_scalar_common_13[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__rbmm__region_transformation_scalar_common_13[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_2[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_4[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_6[2][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_8[1][18] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_9[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_10[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_11[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_12[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_13[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "resurrection renaming annotation")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "ite renaming annotation")) },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_14[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_transformation",
  (MR_String) "name_to_prog_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_transformation",
  (MR_String) "name_to_prog_var_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__642__1_2_p_0(
  MR_Word OtherConsIds_26,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[5]), ((MR_Box) (OtherConsIds_26)), ((MR_Box) (HeadVar__2_65)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word PredInfo0_8;
  MR_Word PPId_9;
  MR_Word PredInfo_10;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, PredId_5, &PredInfo0_8);
  {
    PPId_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_9, 0) = ((MR_Box) (PredId_5));
    MR_hl_field(0, PPId_9, 1) = ((MR_Box) (ProcId_6));
  }
  check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_11, PPId_9, PredInfo0_8, &PredInfo_10);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_5, PredInfo_10, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_12;

  transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_12));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredInfo_6;
  MR_Word ProcIds_7;
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
  ProcIds_7 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_6);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (PredId_4));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word PPId_8;
  MR_Word PredInfo_9;
  MR_Word ProcInfo0_10;
  MR_Word ProcInfo_11;
  MR_Word STATE_VARIABLE_ModuleInfo_15_15;

  {
    PPId_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_8, 0) = ((MR_Box) (PredId_5));
    MR_hl_field(0, PPId_8, 1) = ((MR_Box) (ProcId_6));
  }
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_12, PPId_8, &PredInfo_9, &ProcInfo0_10);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ProcInfo0_10, &ProcInfo_11, STATE_VARIABLE_ModuleInfo_0_12, &STATE_VARIABLE_ModuleInfo_15_15);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_8, PredInfo_9, ProcInfo_11, STATE_VARIABLE_ModuleInfo_15_15, STATE_VARIABLE_ModuleInfo_13);
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_13;

  transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_13));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredInfo_6;
  MR_Word ProcIds_7;
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
  ProcIds_7 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_6);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (PredId_4));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_7_p_0(
  MR_Word Annotation_8,
  MR_Word STATE_VARIABLE_NameToVar_0_20,
  MR_Word * STATE_VARIABLE_NameToVar_21,
  MR_Word STATE_VARIABLE_VarTable_0_22,
  MR_Word * STATE_VARIABLE_VarTable_23,
  MR_Word Conjs0_11,
  MR_Word * Conjs_12)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Annotation_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.ite_renaming_annotation_to_assignment\'/7", (MR_String) "annotation is not assignment");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Right_15 = ((MR_String) ((MR_hl_field(2, Annotation_8, (MR_Integer) 0))));
        MR_String Left_16 = ((MR_String) ((MR_hl_field(2, Annotation_8, (MR_Integer) 1))));
        MR_Word LeftRegVar_17;
        MR_Word RightRegVar_18;
        MR_Word AssignmentGoal_19;
        MR_Word STATE_VARIABLE_NameToVar_26_26;
        MR_Word STATE_VARIABLE_VarTable_27_27;
        MR_Word Var_31;
        MR_Word AssignmentExpr_50;
        MR_Word NonLocals_51;
        MR_Word InstmapDelta_52;
        MR_Word AssignmentInfo_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word RegVar0_34;
        MR_Box conv0_RegVar0_34;
        MR_Word RegVar0_42;
        MR_Box conv1_RegVar0_42;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_NameToVar_0_20, ((MR_Box) (Left_16)), &conv0_RegVar0_34);
        if (succeeded)
        {
          RegVar0_34 = ((MR_Word) (conv0_RegVar0_34));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          LeftRegVar_17 = RegVar0_34;
          STATE_VARIABLE_VarTable_27_27 = STATE_VARIABLE_VarTable_0_22;
          STATE_VARIABLE_NameToVar_26_26 = STATE_VARIABLE_NameToVar_0_20;
        }
        else
        {
          MR_Word Entry_35;
          MR_Word Var_36;

          Var_36 = parse_tree__builtin_lib_types__region_type_0_f_0();
          {
            Entry_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_35, 0) = ((MR_Box) (Left_16));
            MR_hl_field(0, Entry_35, 1) = ((MR_Box) (Var_36));
            MR_hl_field(0, Entry_35, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          parse_tree__var_table__add_var_entry_4_p_0(Entry_35, &LeftRegVar_17, STATE_VARIABLE_VarTable_0_22, &STATE_VARIABLE_VarTable_27_27);
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ((MR_Box) (Left_16)), ((MR_Box) (LeftRegVar_17)), STATE_VARIABLE_NameToVar_0_20, &STATE_VARIABLE_NameToVar_26_26);
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_NameToVar_26_26, ((MR_Box) (Right_15)), &conv1_RegVar0_42);
        if (succeeded)
        {
          RegVar0_42 = ((MR_Word) (conv1_RegVar0_42));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          RightRegVar_18 = RegVar0_42;
          *STATE_VARIABLE_VarTable_23 = STATE_VARIABLE_VarTable_27_27;
          *STATE_VARIABLE_NameToVar_21 = STATE_VARIABLE_NameToVar_26_26;
        }
        else
        {
          MR_Word Entry_43;
          MR_Word Var_44;

          Var_44 = parse_tree__builtin_lib_types__region_type_0_f_0();
          {
            Entry_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_43, 0) = ((MR_Box) (Right_15));
            MR_hl_field(0, Entry_43, 1) = ((MR_Box) (Var_44));
            MR_hl_field(0, Entry_43, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          parse_tree__var_table__add_var_entry_4_p_0(Entry_43, &RightRegVar_18, STATE_VARIABLE_VarTable_27_27, STATE_VARIABLE_VarTable_23);
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ((MR_Box) (Right_15)), ((MR_Box) (RightRegVar_18)), STATE_VARIABLE_NameToVar_26_26, STATE_VARIABLE_NameToVar_21);
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (RightRegVar_18));
        }
        Var_57 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_58 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_59 = parse_tree__prog_mode__ground_inst_0_f_0();
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (Var_57));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) (Var_58));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (Var_59));
        }
        {
          Var_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_60, 0) = ((MR_Box) (LeftRegVar_17));
          MR_hl_field(2, Var_60, 1) = ((MR_Box) (RightRegVar_18));
        }
        {
          AssignmentExpr_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AssignmentExpr_50, 0) = ((MR_Box) (LeftRegVar_17));
          MR_hl_field(1, AssignmentExpr_50, 1) = ((MR_Box) (Var_54));
          MR_hl_field(1, AssignmentExpr_50, 2) = ((MR_Box) (Var_55));
          MR_hl_field(1, AssignmentExpr_50, 3) = ((MR_Box) (Var_60));
          MR_hl_field(1, AssignmentExpr_50, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[7]));
        }
        NonLocals_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        InstmapDelta_52 = hlds__instmap__instmap_delta_bind_var_1_f_0(LeftRegVar_17);
        hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_51, InstmapDelta_52, (MR_Integer) 0, (MR_Integer) 0, &AssignmentInfo_53);
        {
          AssignmentGoal_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AssignmentGoal_19, 0) = ((MR_Box) (AssignmentExpr_50));
          MR_hl_field(0, AssignmentGoal_19, 1) = ((MR_Box) (AssignmentInfo_53));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (AssignmentGoal_19));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Conjs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_11, Var_31);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_8_p_0(
  MR_Word IteRenaming_9,
  MR_Word Annotation_10,
  MR_Word STATE_VARIABLE_NameToVar_0_22,
  MR_Word * STATE_VARIABLE_NameToVar_23,
  MR_Word STATE_VARIABLE_VarTable_0_24,
  MR_Word * STATE_VARIABLE_VarTable_25,
  MR_Word Conjs0_13,
  MR_Word * Conjs_14)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Annotation_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.resur_renaming_annotation_to_assignment\'/8", (MR_String) "annotation is not assigment");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Right_17 = ((MR_String) ((MR_hl_field(2, Annotation_10, (MR_Integer) 0))));
        MR_String Left_18 = ((MR_String) ((MR_hl_field(2, Annotation_10, (MR_Integer) 1))));
        MR_Word LeftRegVar_19;
        MR_Word RightRegVar_20;
        MR_Word AssignmentGoal_21;
        MR_Word STATE_VARIABLE_NameToVar_28_28;
        MR_Word STATE_VARIABLE_VarTable_29_29;
        MR_Word Var_33;
        MR_String Name_37;
        MR_Word AssignmentExpr_57;
        MR_Word NonLocals_58;
        MR_Word InstmapDelta_59;
        MR_Word AssignmentInfo_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word ResurNameList_36;
        MR_Box conv0_ResurNameList_36;
        MR_Word RegVar0_41;
        MR_Box conv2_RegVar0_41;
        MR_Word RegVar0_49;
        MR_Box conv3_RegVar0_49;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), IteRenaming_9, ((MR_Box) (Left_18)), &conv0_ResurNameList_36);
        if (succeeded)
        {
          ResurNameList_36 = ((MR_Word) (conv0_ResurNameList_36));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Box conv1_Name_37;

          conv1_Name_37 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_36);
          Name_37 = ((MR_String) (conv1_Name_37));
        }
        else
          Name_37 = Left_18;
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_NameToVar_0_22, ((MR_Box) (Name_37)), &conv2_RegVar0_41);
        if (succeeded)
        {
          RegVar0_41 = ((MR_Word) (conv2_RegVar0_41));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          LeftRegVar_19 = RegVar0_41;
          STATE_VARIABLE_VarTable_29_29 = STATE_VARIABLE_VarTable_0_24;
          STATE_VARIABLE_NameToVar_28_28 = STATE_VARIABLE_NameToVar_0_22;
        }
        else
        {
          MR_Word Entry_42;
          MR_Word Var_43;

          Var_43 = parse_tree__builtin_lib_types__region_type_0_f_0();
          {
            Entry_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_42, 0) = ((MR_Box) (Name_37));
            MR_hl_field(0, Entry_42, 1) = ((MR_Box) (Var_43));
            MR_hl_field(0, Entry_42, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          parse_tree__var_table__add_var_entry_4_p_0(Entry_42, &LeftRegVar_19, STATE_VARIABLE_VarTable_0_24, &STATE_VARIABLE_VarTable_29_29);
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ((MR_Box) (Name_37)), ((MR_Box) (LeftRegVar_19)), STATE_VARIABLE_NameToVar_0_22, &STATE_VARIABLE_NameToVar_28_28);
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_NameToVar_28_28, ((MR_Box) (Right_17)), &conv3_RegVar0_49);
        if (succeeded)
        {
          RegVar0_49 = ((MR_Word) (conv3_RegVar0_49));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          RightRegVar_20 = RegVar0_49;
          *STATE_VARIABLE_VarTable_25 = STATE_VARIABLE_VarTable_29_29;
          *STATE_VARIABLE_NameToVar_23 = STATE_VARIABLE_NameToVar_28_28;
        }
        else
        {
          MR_Word Entry_50;
          MR_Word Var_51;

          Var_51 = parse_tree__builtin_lib_types__region_type_0_f_0();
          {
            Entry_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_50, 0) = ((MR_Box) (Right_17));
            MR_hl_field(0, Entry_50, 1) = ((MR_Box) (Var_51));
            MR_hl_field(0, Entry_50, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          parse_tree__var_table__add_var_entry_4_p_0(Entry_50, &RightRegVar_20, STATE_VARIABLE_VarTable_29_29, STATE_VARIABLE_VarTable_25);
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ((MR_Box) (Right_17)), ((MR_Box) (RightRegVar_20)), STATE_VARIABLE_NameToVar_28_28, STATE_VARIABLE_NameToVar_23);
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (RightRegVar_20));
        }
        Var_64 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_65 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_66 = parse_tree__prog_mode__ground_inst_0_f_0();
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_62, 1) = ((MR_Box) (Var_64));
          MR_hl_field(0, Var_62, 2) = ((MR_Box) (Var_65));
          MR_hl_field(0, Var_62, 3) = ((MR_Box) (Var_66));
        }
        {
          Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_67, 0) = ((MR_Box) (LeftRegVar_19));
          MR_hl_field(2, Var_67, 1) = ((MR_Box) (RightRegVar_20));
        }
        {
          AssignmentExpr_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AssignmentExpr_57, 0) = ((MR_Box) (LeftRegVar_19));
          MR_hl_field(1, AssignmentExpr_57, 1) = ((MR_Box) (Var_61));
          MR_hl_field(1, AssignmentExpr_57, 2) = ((MR_Box) (Var_62));
          MR_hl_field(1, AssignmentExpr_57, 3) = ((MR_Box) (Var_67));
          MR_hl_field(1, AssignmentExpr_57, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[6]));
        }
        NonLocals_58 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        InstmapDelta_59 = hlds__instmap__instmap_delta_bind_var_1_f_0(LeftRegVar_19);
        hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_58, InstmapDelta_59, (MR_Integer) 0, (MR_Integer) 0, &AssignmentInfo_60);
        {
          AssignmentGoal_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AssignmentGoal_21, 0) = ((MR_Box) (AssignmentExpr_57));
          MR_hl_field(0, AssignmentGoal_21, 1) = ((MR_Box) (AssignmentInfo_60));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (AssignmentGoal_21));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Conjs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_13, Var_33);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Context_13,
  MR_Word ResurRenaming_14,
  MR_Word IteRenaming_15,
  MR_Word RegionInstruction_16,
  MR_Word STATE_VARIABLE_NameToVar_0_26,
  MR_Word * STATE_VARIABLE_NameToVar_27,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29,
  MR_Word Conjs0_19,
  MR_Word * Conjs_20)
{
  MR_bool succeeded;
  MR_Word CallGoal_23;
  MR_Word Var_58;

  switch (MR_tag((MR_Word) RegionInstruction_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String RegionName_21 = ((MR_String) ((MR_hl_field(0, RegionInstruction_16, (MR_Integer) 0))));
        MR_Word RegionVar_22;
        MR_Word Var_33;
        MR_Word Var_36;
        MR_Word Var_37;

        transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_8_p_0(RegionName_21, ResurRenaming_14, IteRenaming_15, &RegionVar_22, STATE_VARIABLE_NameToVar_0_26, STATE_VARIABLE_NameToVar_27, STATE_VARIABLE_VarTable_0_28, STATE_VARIABLE_VarTable_29);
        Var_33 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (RegionVar_22));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_37 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 0, Var_33, (MR_String) "create_region", (MR_Word) ((MR_Unsigned) 0U), Var_36, Var_37, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_13, &CallGoal_23);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_String RegionName_60 = ((MR_String) ((MR_hl_field(1, RegionInstruction_16, (MR_Integer) 0))));
        MR_Word RegionVar_61;
        MR_String Name_64;
        MR_Word ResurNameList_63;
        MR_Box conv0_ResurNameList_63;
        MR_Word RegVar0_74;
        MR_Box conv4_RegVar0_74;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), ResurRenaming_14, ((MR_Box) (RegionName_60)), &conv0_ResurNameList_63);
        if (succeeded)
        {
          ResurNameList_63 = ((MR_Word) (conv0_ResurNameList_63));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Box conv1_Name_64;

          conv1_Name_64 = mercury__list__det_index0_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_63, (MR_Integer) 0);
          Name_64 = ((MR_String) (conv1_Name_64));
        }
        else
        {
          MR_Word IteNameList_65;
          MR_Box conv2_IteNameList_65;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), IteRenaming_15, ((MR_Box) (RegionName_60)), &conv2_IteNameList_65);
          if (succeeded)
          {
            IteNameList_65 = ((MR_Word) (conv2_IteNameList_65));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Box conv3_Name_64;

            conv3_Name_64 = mercury__list__det_index0_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IteNameList_65, (MR_Integer) 0);
            Name_64 = ((MR_String) (conv3_Name_64));
          }
          else
            Name_64 = RegionName_60;
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_NameToVar_0_26, ((MR_Box) (Name_64)), &conv4_RegVar0_74);
        if (succeeded)
        {
          RegVar0_74 = ((MR_Word) (conv4_RegVar0_74));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          RegionVar_61 = RegVar0_74;
          *STATE_VARIABLE_VarTable_29 = STATE_VARIABLE_VarTable_0_28;
          *STATE_VARIABLE_NameToVar_27 = STATE_VARIABLE_NameToVar_0_26;
        }
        else
        {
          MR_Word Entry_75;
          MR_Word Var_76;

          Var_76 = parse_tree__builtin_lib_types__region_type_0_f_0();
          {
            Entry_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_75, 0) = ((MR_Box) (Name_64));
            MR_hl_field(0, Entry_75, 1) = ((MR_Box) (Var_76));
            MR_hl_field(0, Entry_75, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          parse_tree__var_table__add_var_entry_4_p_0(Entry_75, &RegionVar_61, STATE_VARIABLE_VarTable_0_28, STATE_VARIABLE_VarTable_29);
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ((MR_Box) (Name_64)), ((MR_Box) (RegionVar_61)), STATE_VARIABLE_NameToVar_0_26, STATE_VARIABLE_NameToVar_27);
        }
        Var_46 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (RegionVar_61));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_50 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 0, Var_46, (MR_String) "remove_region", (MR_Word) ((MR_Unsigned) 0U), Var_49, Var_50, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_13, &CallGoal_23);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj_before\'/11", (MR_String) "neither create nor remove instruction");
        return;
      }
      break;
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (CallGoal_23));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Conjs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_19, Var_58);
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Context_13,
  MR_Word ResurRenaming_14,
  MR_Word IteRenaming_15,
  MR_Word RegionInstruction_16,
  MR_Word STATE_VARIABLE_NameToVar_0_26,
  MR_Word * STATE_VARIABLE_NameToVar_27,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29,
  MR_Word Conjs0_19,
  MR_Word * Conjs_20)
{
  MR_Word CallGoal_23;
  MR_Word Var_58;

  switch (MR_tag((MR_Word) RegionInstruction_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String RegionName_21 = ((MR_String) ((MR_hl_field(0, RegionInstruction_16, (MR_Integer) 0))));
        MR_Word RegionVar_22;
        MR_Word Var_33;
        MR_Word Var_36;
        MR_Word Var_37;

        transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_8_p_0(RegionName_21, ResurRenaming_14, IteRenaming_15, &RegionVar_22, STATE_VARIABLE_NameToVar_0_26, STATE_VARIABLE_NameToVar_27, STATE_VARIABLE_VarTable_0_28, STATE_VARIABLE_VarTable_29);
        Var_33 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (RegionVar_22));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_37 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 0, Var_33, (MR_String) "create_region", (MR_Word) ((MR_Unsigned) 0U), Var_36, Var_37, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_13, &CallGoal_23);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_String RegionName_60 = ((MR_String) ((MR_hl_field(1, RegionInstruction_16, (MR_Integer) 0))));
        MR_Word RegionVar_61;

        transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_8_p_0(RegionName_60, ResurRenaming_14, IteRenaming_15, &RegionVar_61, STATE_VARIABLE_NameToVar_0_26, STATE_VARIABLE_NameToVar_27, STATE_VARIABLE_VarTable_0_28, STATE_VARIABLE_VarTable_29);
        Var_46 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (RegionVar_61));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_50 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 0, Var_46, (MR_String) "remove_region", (MR_Word) ((MR_Unsigned) 0U), Var_49, Var_50, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_13, &CallGoal_23);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj\'/11", (MR_String) "neither create nor remove instruction");
        return;
      }
      break;
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (CallGoal_23));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Conjs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_19, Var_58);
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_9_p_0(
  MR_Word Graph_10,
  MR_Word ResurRenaming_11,
  MR_Word IteRenaming_12,
  MR_Word Node_13,
  MR_Word * RegVar_14,
  MR_Word STATE_VARIABLE_NameToVar_0_18,
  MR_Word * STATE_VARIABLE_NameToVar_19,
  MR_Word STATE_VARIABLE_VarTable_0_20,
  MR_Word * STATE_VARIABLE_VarTable_21)
{
  MR_String RegName_17;

  RegName_17 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_10, Node_13);
  transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_8_p_0(RegName_17, ResurRenaming_11, IteRenaming_12, RegVar_14, STATE_VARIABLE_NameToVar_0_18, STATE_VARIABLE_NameToVar_19, STATE_VARIABLE_VarTable_0_20, STATE_VARIABLE_VarTable_21);
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_7_p_0(
  MR_Word Graph_8,
  MR_Word Node_9,
  MR_Word * RegVar_10,
  MR_Word STATE_VARIABLE_NameToVar_0_14,
  MR_Word * STATE_VARIABLE_NameToVar_15,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17)
{
  MR_bool succeeded;
  MR_String RegName_13;
  MR_Word RegVar0_18;
  MR_Box conv0_RegVar0_18;

  RegName_13 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_8, Node_9);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_NameToVar_0_14, ((MR_Box) (RegName_13)), &conv0_RegVar0_18);
  if (succeeded)
  {
    RegVar0_18 = ((MR_Word) (conv0_RegVar0_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *RegVar_10 = RegVar0_18;
    *STATE_VARIABLE_VarTable_17 = STATE_VARIABLE_VarTable_0_16;
    *STATE_VARIABLE_NameToVar_15 = STATE_VARIABLE_NameToVar_0_14;
  }
  else
  {
    MR_Word Entry_19;
    MR_Word Var_20;

    Var_20 = parse_tree__builtin_lib_types__region_type_0_f_0();
    {
      Entry_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_19, 0) = ((MR_Box) (RegName_13));
      MR_hl_field(0, Entry_19, 1) = ((MR_Box) (Var_20));
      MR_hl_field(0, Entry_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_19, RegVar_10, STATE_VARIABLE_VarTable_0_16, STATE_VARIABLE_VarTable_17);
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ((MR_Box) (RegName_13)), ((MR_Box) (*RegVar_10)), STATE_VARIABLE_NameToVar_0_14, STATE_VARIABLE_NameToVar_15);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_3(
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
  MR_Word conv11_STATE_VARIABLE_NameToVar_27;
  MR_Word conv10_STATE_VARIABLE_VarTable_29;
  MR_Word conv9_Conjs_20;

  transform_hlds__rbmm__region_transformation__region_instruction_to_conj_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_NameToVar_27, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_VarTable_29, ((MR_Word) (wrapper_arg_6)), &conv9_Conjs_20);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_NameToVar_27));
  *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_VarTable_29));
  *wrapper_arg_7 = ((MR_Box) (conv9_Conjs_20));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_2(
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
  MR_Word conv5_STATE_VARIABLE_NameToVar_27;
  MR_Word conv4_STATE_VARIABLE_VarTable_29;
  MR_Word conv3_Conjs_20;

  transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_NameToVar_27, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_VarTable_29, ((MR_Word) (wrapper_arg_6)), &conv3_Conjs_20);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_NameToVar_27));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_VarTable_29));
  *wrapper_arg_7 = ((MR_Box) (conv3_Conjs_20));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__642__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Graph_17,
  MR_Word ResurRenamingProc_18,
  MR_Word IteRenamingProc_19,
  MR_Word ActualRegionArgProc_20,
  MR_Word RegionInstructionProc_21,
  MR_Word ResurRenamingAnnoProc_22,
  MR_Word IteRenamingAnnoProc_23,
  MR_Word Switch_24,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_NameToVar_0_58,
  MR_Word * STATE_VARIABLE_NameToVar_59,
  MR_Word STATE_VARIABLE_VarTable_0_60,
  MR_Word * STATE_VARIABLE_VarTable_61)
{
  MR_bool succeeded;
  MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__10_10, (MR_Integer) 0))));
  MR_Word OtherConsIds_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__10_10, (MR_Integer) 1))));
  MR_Word RemovedGoal_51;
  MR_Word FlatConjs_53;
  MR_Word ConjsInfo_55;
  MR_Word STATE_VARIABLE_Goal_0_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__10_10, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_Goal_57;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_NameToVar_78_78;
  MR_Word STATE_VARIABLE_VarTable_79_79;
  MR_Word STATE_VARIABLE_Goal_85_85;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_92;
  MR_Word Info_39;
  MR_Word Var_67;

  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_12[0]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_1));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (OtherConsIds_26));
    MR_hl_field(0, Var_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_case\'/15", (MR_String) "NYI: multi-cons-id cases");
  switch (MR_tag((MR_Word) MainConsId_25)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MainConsId_25, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_66 = ((MR_Integer) ((MR_hl_field(3, MainConsId_25, (MR_Integer) 2))));

            succeeded = (Var_66 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 5:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 7:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 8:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  if (succeeded)
  {
    Var_67 = ((MR_Word) ((MR_hl_field(0, Switch_24, (MR_Integer) 0))));
    Info_39 = ((MR_Word) ((MR_hl_field(0, Switch_24, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_67)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_67, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word ProgPoint_40;
    MR_Word Context_41;
    MR_Word ResurRenaming_43;
    MR_Word IteRenaming_44;
    MR_Word IteRenamingAssignments_45;
    MR_Word Conjs2_49;
    MR_Word Conjs_50;
    MR_Word STATE_VARIABLE_NameToVar_68_68;
    MR_Word STATE_VARIABLE_VarTable_69_69;
    MR_Word STATE_VARIABLE_NameToVar_76_76;
    MR_Word STATE_VARIABLE_VarTable_77_77;
    MR_Word Var_80;
    MR_Word ResurRenaming0_109;
    MR_Box conv0_ResurRenaming0_109;
    MR_Word IteRenaming0_110;
    MR_Box conv1_IteRenaming0_110;
    MR_Word Before_46;
    MR_Word After_47;
    MR_Word Var_71;
    MR_Box conv2_Var_71;

    ProgPoint_40 = transform_hlds__smm_common__program_point_init_1_f_0(Info_39);
    Context_41 = ((MR_Word) ((MR_hl_field(0, ProgPoint_40, (MR_Integer) 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]), ResurRenamingProc_18, ((MR_Box) (ProgPoint_40)), &conv0_ResurRenaming0_109);
    if (succeeded)
    {
      ResurRenaming0_109 = ((MR_Word) (conv0_ResurRenaming0_109));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ResurRenaming_43 = ResurRenaming0_109;
    else
      ResurRenaming_43 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]), IteRenamingProc_19, ((MR_Box) (ProgPoint_40)), &conv1_IteRenaming0_110);
    if (succeeded)
    {
      IteRenaming0_110 = ((MR_Word) (conv1_IteRenaming0_110));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      IteRenaming_44 = IteRenaming0_110;
    else
      IteRenaming_44 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]));
    transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_8_p_0(IteRenamingAnnoProc_23, ProgPoint_40, STATE_VARIABLE_NameToVar_0_58, &STATE_VARIABLE_NameToVar_68_68, STATE_VARIABLE_VarTable_0_60, &STATE_VARIABLE_VarTable_69_69, (MR_Word) ((MR_Unsigned) 0U), &IteRenamingAssignments_45);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), RegionInstructionProc_21, ((MR_Box) (ProgPoint_40)), &conv2_Var_71);
    if (succeeded)
    {
      Var_71 = ((MR_Word) (conv2_Var_71));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Before_46 = ((MR_Word) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
      After_47 = ((MR_Word) ((MR_hl_field(0, Var_71, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Conjs1_48;
      MR_Word Var_72;
      MR_Word STATE_VARIABLE_NameToVar_73_73;
      MR_Word STATE_VARIABLE_VarTable_74_74;
      MR_Word Var_75;
      MR_Box conv8_STATE_VARIABLE_NameToVar_73_73;
      MR_Box conv7_STATE_VARIABLE_VarTable_74_74;
      MR_Box conv6_Conjs1_48;
      MR_Box conv14_STATE_VARIABLE_NameToVar_76_76;
      MR_Box conv13_STATE_VARIABLE_VarTable_77_77;
      MR_Box conv12_Conjs2_49;

      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_72, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
        MR_hl_field(0, Var_72, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_2));
        MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_72, 3) = ((MR_Box) (ModuleInfo_16));
        MR_hl_field(0, Var_72, 4) = ((MR_Box) (Context_41));
        MR_hl_field(0, Var_72, 5) = ((MR_Box) (ResurRenaming_43));
        MR_hl_field(0, Var_72, 6) = ((MR_Box) (IteRenaming_44));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), Var_72, Before_46, ((MR_Box) (STATE_VARIABLE_NameToVar_68_68)), &conv8_STATE_VARIABLE_NameToVar_73_73, ((MR_Box) (STATE_VARIABLE_VarTable_69_69)), &conv7_STATE_VARIABLE_VarTable_74_74, ((MR_Box) (IteRenamingAssignments_45)), &conv6_Conjs1_48);
      STATE_VARIABLE_NameToVar_73_73 = ((MR_Word) (conv8_STATE_VARIABLE_NameToVar_73_73));
      STATE_VARIABLE_VarTable_74_74 = ((MR_Word) (conv7_STATE_VARIABLE_VarTable_74_74));
      Conjs1_48 = ((MR_Word) (conv6_Conjs1_48));
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_75, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
        MR_hl_field(0, Var_75, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0_3));
        MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_75, 3) = ((MR_Box) (ModuleInfo_16));
        MR_hl_field(0, Var_75, 4) = ((MR_Box) (Context_41));
        MR_hl_field(0, Var_75, 5) = ((MR_Box) (ResurRenaming_43));
        MR_hl_field(0, Var_75, 6) = ((MR_Box) (IteRenaming_44));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), Var_75, After_47, ((MR_Box) (STATE_VARIABLE_NameToVar_73_73)), &conv14_STATE_VARIABLE_NameToVar_76_76, ((MR_Box) (STATE_VARIABLE_VarTable_74_74)), &conv13_STATE_VARIABLE_VarTable_77_77, ((MR_Box) (Conjs1_48)), &conv12_Conjs2_49);
      STATE_VARIABLE_NameToVar_76_76 = ((MR_Word) (conv14_STATE_VARIABLE_NameToVar_76_76));
      STATE_VARIABLE_VarTable_77_77 = ((MR_Word) (conv13_STATE_VARIABLE_VarTable_77_77));
      Conjs2_49 = ((MR_Word) (conv12_Conjs2_49));
    }
    else
    {
      Conjs2_49 = IteRenamingAssignments_45;
      STATE_VARIABLE_VarTable_77_77 = STATE_VARIABLE_VarTable_69_69;
      STATE_VARIABLE_NameToVar_76_76 = STATE_VARIABLE_NameToVar_68_68;
    }
    transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_9_p_0(ResurRenamingAnnoProc_22, ProgPoint_40, IteRenaming_44, STATE_VARIABLE_NameToVar_76_76, &STATE_VARIABLE_NameToVar_78_78, STATE_VARIABLE_VarTable_77_77, &STATE_VARIABLE_VarTable_79_79, Conjs2_49, &Conjs_50);
    {
      Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_80, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_80, 2) = ((MR_Box) (Conjs_50));
    }
    {
      RemovedGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RemovedGoal_51, 0) = ((MR_Box) (Var_80));
      MR_hl_field(0, RemovedGoal_51, 1) = ((MR_Box) (Info_39));
    }
  }
  else
  {
    MR_Word Info_94 = ((MR_Word) ((MR_hl_field(0, Switch_24, (MR_Integer) 1))));

    {
      RemovedGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RemovedGoal_51, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__rbmm__region_transformation_scalar_common_2[8])));
      MR_hl_field(0, RemovedGoal_51, 1) = ((MR_Box) (Info_94));
    }
    STATE_VARIABLE_VarTable_79_79 = STATE_VARIABLE_VarTable_0_60;
    STATE_VARIABLE_NameToVar_78_78 = STATE_VARIABLE_NameToVar_0_58;
  }
  transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(ModuleInfo_16, Graph_17, ResurRenamingProc_18, IteRenamingProc_19, ActualRegionArgProc_20, RegionInstructionProc_21, ResurRenamingAnnoProc_22, IteRenamingAnnoProc_23, STATE_VARIABLE_Goal_0_56, &STATE_VARIABLE_Goal_85_85, STATE_VARIABLE_NameToVar_78_78, STATE_VARIABLE_NameToVar_59, STATE_VARIABLE_VarTable_79_79, STATE_VARIABLE_VarTable_61);
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (STATE_VARIABLE_Goal_85_85));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (RemovedGoal_51));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
  }
  hlds__goal_util__flatten_conj_2_p_0(Var_88, &FlatConjs_53);
  ConjsInfo_55 = ((MR_Word) ((MR_hl_field(0, Switch_24, (MR_Integer) 1))));
  {
    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_92, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_92, 2) = ((MR_Box) (FlatConjs_53));
  }
  {
    STATE_VARIABLE_Goal_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Goal_57, 0) = ((MR_Box) (Var_92));
    MR_hl_field(0, STATE_VARIABLE_Goal_57, 1) = ((MR_Box) (ConjsInfo_55));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__11_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_Goal_57));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_9_p_0_1(
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
  MR_Word conv3_STATE_VARIABLE_NameToVar_23;
  MR_Word conv2_STATE_VARIABLE_VarTable_25;
  MR_Word conv1_Conjs_14;

  transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_NameToVar_23, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_VarTable_25, ((MR_Word) (wrapper_arg_6)), &conv1_Conjs_14);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_NameToVar_23));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_VarTable_25));
  *wrapper_arg_7 = ((MR_Box) (conv1_Conjs_14));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_9_p_0(
  MR_Word ResurRenamingAnnoProc_10,
  MR_Word ProgPoint_11,
  MR_Word IteRenaming_12,
  MR_Word STATE_VARIABLE_NameToVar_0_17,
  MR_Word * STATE_VARIABLE_NameToVar_18,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20,
  MR_Word STATE_VARIABLE_Conjs_0_21,
  MR_Word * STATE_VARIABLE_Conjs_22)
{
  MR_bool succeeded;
  MR_Word ResurRenamingAnnos_16;
  MR_Box conv0_ResurRenamingAnnos_16;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]), ResurRenamingAnnoProc_10, ((MR_Box) (ProgPoint_11)), &conv0_ResurRenamingAnnos_16);
  if (succeeded)
  {
    ResurRenamingAnnos_16 = ((MR_Word) (conv0_ResurRenamingAnnos_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_23;
    MR_Box conv6_STATE_VARIABLE_NameToVar_18;
    MR_Box conv5_STATE_VARIABLE_VarTable_20;
    MR_Box conv4_STATE_VARIABLE_Conjs_22;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_11[0]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_9_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (IteRenaming_12));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), Var_23, ResurRenamingAnnos_16, ((MR_Box) (STATE_VARIABLE_NameToVar_0_17)), &conv6_STATE_VARIABLE_NameToVar_18, ((MR_Box) (STATE_VARIABLE_VarTable_0_19)), &conv5_STATE_VARIABLE_VarTable_20, ((MR_Box) (STATE_VARIABLE_Conjs_0_21)), &conv4_STATE_VARIABLE_Conjs_22);
    *STATE_VARIABLE_NameToVar_18 = ((MR_Word) (conv6_STATE_VARIABLE_NameToVar_18));
    *STATE_VARIABLE_VarTable_20 = ((MR_Word) (conv5_STATE_VARIABLE_VarTable_20));
    *STATE_VARIABLE_Conjs_22 = ((MR_Word) (conv4_STATE_VARIABLE_Conjs_22));
  }
  else
  {
    *STATE_VARIABLE_Conjs_22 = STATE_VARIABLE_Conjs_0_21;
    *STATE_VARIABLE_VarTable_20 = STATE_VARIABLE_VarTable_0_19;
    *STATE_VARIABLE_NameToVar_18 = STATE_VARIABLE_NameToVar_0_17;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_8_p_0_1(
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
  MR_Word conv3_STATE_VARIABLE_NameToVar_21;
  MR_Word conv2_STATE_VARIABLE_VarTable_23;
  MR_Word conv1_Conjs_12;

  transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_NameToVar_21, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_VarTable_23, ((MR_Word) (wrapper_arg_6)), &conv1_Conjs_12);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_NameToVar_21));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_VarTable_23));
  *wrapper_arg_7 = ((MR_Box) (conv1_Conjs_12));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_8_p_0(
  MR_Word IteRenamingAnnoProc_9,
  MR_Word ProgPoint_10,
  MR_Word STATE_VARIABLE_NameToVar_0_15,
  MR_Word * STATE_VARIABLE_NameToVar_16,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word STATE_VARIABLE_IteRenamingAssignments_0_19,
  MR_Word * STATE_VARIABLE_IteRenamingAssignments_20)
{
  MR_bool succeeded;
  MR_Word IteRenamingAnnos_14;
  MR_Box conv0_IteRenamingAnnos_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]), IteRenamingAnnoProc_9, ((MR_Box) (ProgPoint_10)), &conv0_IteRenamingAnnos_14);
  if (succeeded)
  {
    IteRenamingAnnos_14 = ((MR_Word) (conv0_IteRenamingAnnos_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Box conv6_STATE_VARIABLE_NameToVar_16;
    MR_Box conv5_STATE_VARIABLE_VarTable_18;
    MR_Box conv4_STATE_VARIABLE_IteRenamingAssignments_20;

    mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[13]), IteRenamingAnnos_14, ((MR_Box) (STATE_VARIABLE_NameToVar_0_15)), &conv6_STATE_VARIABLE_NameToVar_16, ((MR_Box) (STATE_VARIABLE_VarTable_0_17)), &conv5_STATE_VARIABLE_VarTable_18, ((MR_Box) (STATE_VARIABLE_IteRenamingAssignments_0_19)), &conv4_STATE_VARIABLE_IteRenamingAssignments_20);
    *STATE_VARIABLE_NameToVar_16 = ((MR_Word) (conv6_STATE_VARIABLE_NameToVar_16));
    *STATE_VARIABLE_VarTable_18 = ((MR_Word) (conv5_STATE_VARIABLE_VarTable_18));
    *STATE_VARIABLE_IteRenamingAssignments_20 = ((MR_Word) (conv4_STATE_VARIABLE_IteRenamingAssignments_20));
  }
  else
  {
    *STATE_VARIABLE_IteRenamingAssignments_20 = STATE_VARIABLE_IteRenamingAssignments_0_19;
    *STATE_VARIABLE_VarTable_18 = STATE_VARIABLE_VarTable_0_17;
    *STATE_VARIABLE_NameToVar_16 = STATE_VARIABLE_NameToVar_0_15;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(
  MR_Word RptaInfoTable_15,
  MR_Word FormalRegionArgTable_16,
  MR_Word ActualRegionArgTable_17,
  MR_Word ResurRenamingTable_18,
  MR_Word IteRenamingTable_19,
  MR_Word RegionInstructionTable_20,
  MR_Word ResurRenamingAnnoTable_21,
  MR_Word IteRenamingAnnoTable_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word STATE_VARIABLE_NameToVarTable_0_50,
  MR_Word * STATE_VARIABLE_NameToVarTable_51,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53)
{
  MR_bool succeeded;
  MR_Word PPId_27;
  MR_Word PredInfo0_28;
  MR_Word ProcInfo0_29;
  MR_Word ProcInfo1_30;
  MR_Word VarTable0_31;
  MR_Word HeadVars0_32;
  MR_Word ActualArgModes0_33;
  MR_Word Goal0_34;
  MR_Word Graph_35;
  MR_Word FormalRegionArgProc_37;
  MR_Word ActualRegionArgProc_38;
  MR_Word ResurRenamingProc_40;
  MR_Word ResurRenamingAnnoProc_41;
  MR_Word IteRenamingProc_43;
  MR_Word IteRenamingAnnoProc_44;
  MR_Word RegionInstructionProc_45;
  MR_Word NameToVar0_46;
  MR_Word NameToVar_47;
  MR_Word ProcInfo2_48;
  MR_Word ProcInfo_49;
  MR_Word Var_54;
  MR_Box conv0_Var_54;
  MR_Box conv1_FormalRegionArgProc_37;
  MR_Box conv2_ActualRegionArgProc_38;
  MR_Word ResurRenamingProc0_39;
  MR_Box conv3_ResurRenamingProc0_39;
  MR_Word IteRenamingProc0_42;
  MR_Box conv5_IteRenamingProc0_42;
  MR_Box conv7_RegionInstructionProc_45;

  {
    PPId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_27, 0) = ((MR_Box) (PredId_23));
    MR_hl_field(0, PPId_27, 1) = ((MR_Box) (ProcId_24));
  }
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_52, PPId_27, &PredInfo0_28, &ProcInfo0_29);
  hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(STATE_VARIABLE_ModuleInfo_0_52, ProcInfo0_29, &ProcInfo1_30);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo1_30, &VarTable0_31);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo1_30, &HeadVars0_32);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo1_30, &ActualArgModes0_33);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo1_30, &Goal0_34);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_15, ((MR_Box) (PPId_27)), &conv0_Var_54);
  Var_54 = ((MR_Word) (conv0_Var_54));
  Graph_35 = ((MR_Word) ((MR_hl_field(0, Var_54, (MR_Integer) 0))));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), FormalRegionArgTable_16, ((MR_Box) (PPId_27)), &conv1_FormalRegionArgProc_37);
  FormalRegionArgProc_37 = ((MR_Word) (conv1_FormalRegionArgProc_37));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[2]), ActualRegionArgTable_17, ((MR_Box) (PPId_27)), &conv2_ActualRegionArgProc_38);
  ActualRegionArgProc_38 = ((MR_Word) (conv2_ActualRegionArgProc_38));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[4]), ResurRenamingTable_18, ((MR_Box) (PPId_27)), &conv3_ResurRenamingProc0_39);
  if (succeeded)
  {
    ResurRenamingProc0_39 = ((MR_Word) (conv3_ResurRenamingProc0_39));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Box conv4_ResurRenamingAnnoProc_41;

    ResurRenamingProc_40 = ResurRenamingProc0_39;
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[5]), ResurRenamingAnnoTable_21, ((MR_Box) (PPId_27)), &conv4_ResurRenamingAnnoProc_41);
    ResurRenamingAnnoProc_41 = ((MR_Word) (conv4_ResurRenamingAnnoProc_41));
  }
  else
  {
    ResurRenamingProc_40 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]));
    ResurRenamingAnnoProc_41 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[4]), IteRenamingTable_19, ((MR_Box) (PPId_27)), &conv5_IteRenamingProc0_42);
  if (succeeded)
  {
    IteRenamingProc0_42 = ((MR_Word) (conv5_IteRenamingProc0_42));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Box conv6_IteRenamingAnnoProc_44;

    IteRenamingProc_43 = IteRenamingProc0_42;
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[5]), IteRenamingAnnoTable_22, ((MR_Box) (PPId_27)), &conv6_IteRenamingAnnoProc_44);
    IteRenamingAnnoProc_44 = ((MR_Word) (conv6_IteRenamingAnnoProc_44));
  }
  else
  {
    IteRenamingProc_43 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]));
    IteRenamingAnnoProc_44 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[6]), RegionInstructionTable_20, ((MR_Box) (PPId_27)), &conv7_RegionInstructionProc_45);
  RegionInstructionProc_45 = ((MR_Word) (conv7_RegionInstructionProc_45));
  NameToVar0_46 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]));
  transform_hlds__rbmm__region_transformation__annotate_proc_18_p_0(STATE_VARIABLE_ModuleInfo_0_52, PredInfo0_28, Graph_35, FormalRegionArgProc_37, ActualRegionArgProc_38, ResurRenamingProc_40, IteRenamingProc_43, RegionInstructionProc_45, ResurRenamingAnnoProc_41, IteRenamingAnnoProc_44, VarTable0_31, HeadVars0_32, ActualArgModes0_33, Goal0_34, NameToVar0_46, &NameToVar_47, ProcInfo1_30, &ProcInfo2_48);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo2_48, &ProcInfo_49);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_27, PredInfo0_28, ProcInfo_49, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), ((MR_Box) (PPId_27)), ((MR_Box) (NameToVar_47)), STATE_VARIABLE_NameToVarTable_0_50, STATE_VARIABLE_NameToVarTable_51);
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_RegVar_10;
  MR_Word conv1_STATE_VARIABLE_NameToVar_15;
  MR_Word conv0_STATE_VARIABLE_VarTable_17;

  transform_hlds__rbmm__region_transformation__node_to_var_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_RegVar_10, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_NameToVar_15, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_VarTable_17);
  *wrapper_arg_2 = ((MR_Box) (conv2_RegVar_10));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_NameToVar_15));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_17));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_18_p_0(
  MR_Word ModuleInfo_19,
  MR_Word PredInfo_20,
  MR_Word Graph_21,
  MR_Word FormalRegionArgProc_22,
  MR_Word ActualRegionArgProc_23,
  MR_Word ResurRenamingProc_24,
  MR_Word IteRenamingProc_25,
  MR_Word RegionInstructionProc_26,
  MR_Word ResurRenamingAnnoProc_27,
  MR_Word IteRenamingAnnoProc_28,
  MR_Word STATE_VARIABLE_VarTable_0_50,
  MR_Word STATE_VARIABLE_HeadVars_0_51,
  MR_Word STATE_VARIABLE_ActualArgModes_0_52,
  MR_Word STATE_VARIABLE_Goal_0_53,
  MR_Word STATE_VARIABLE_NameToVar_0_54,
  MR_Word * STATE_VARIABLE_NameToVar_55,
  MR_Word STATE_VARIABLE_ProcInfo_0_56,
  MR_Word * STATE_VARIABLE_ProcInfo_57)
{
  MR_Word Constants_35;
  MR_Word Deads_36;
  MR_Word Borns_37;
  MR_Word FormalInputNodes_38;
  MR_Word FormalNodes_39;
  MR_Word FormalRegionArgs_40;
  MR_Word InMode_41;
  MR_Word OutMode_42;
  MR_Word InModes_43;
  MR_Word OutModes_44;
  MR_Word PredOrFunc_45;
  MR_Word STATE_VARIABLE_Goal_58_58;
  MR_Word STATE_VARIABLE_NameToVar_59_59;
  MR_Word STATE_VARIABLE_VarTable_60_60;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_VarTable_63_63;
  MR_Integer Var_64;
  MR_Integer Var_65;
  MR_Word STATE_VARIABLE_HeadVars_66_66;
  MR_Word STATE_VARIABLE_ActualArgModes_67_67;
  MR_Word STATE_VARIABLE_ProcInfo_78_78;
  MR_Word STATE_VARIABLE_ProcInfo_79_79;
  MR_Word STATE_VARIABLE_ProcInfo_80_80;
  MR_Box conv4_STATE_VARIABLE_NameToVar_55;
  MR_Box conv3_STATE_VARIABLE_VarTable_63_63;

  transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(ModuleInfo_19, Graph_21, ResurRenamingProc_24, IteRenamingProc_25, ActualRegionArgProc_23, RegionInstructionProc_26, ResurRenamingAnnoProc_27, IteRenamingAnnoProc_28, STATE_VARIABLE_Goal_0_53, &STATE_VARIABLE_Goal_58_58, STATE_VARIABLE_NameToVar_0_54, &STATE_VARIABLE_NameToVar_59_59, STATE_VARIABLE_VarTable_0_50, &STATE_VARIABLE_VarTable_60_60);
  Constants_35 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgProc_22, (MR_Integer) 0))));
  Deads_36 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgProc_22, (MR_Integer) 1))));
  Borns_37 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgProc_22, (MR_Integer) 2))));
  FormalInputNodes_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Constants_35, Deads_36);
  FormalNodes_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), FormalInputNodes_38, Borns_37);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[1]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__annotate_proc_18_p_0_1));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Graph_21));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_61, FormalNodes_39, &FormalRegionArgs_40, ((MR_Box) (STATE_VARIABLE_NameToVar_59_59)), &conv4_STATE_VARIABLE_NameToVar_55, ((MR_Box) (STATE_VARIABLE_VarTable_60_60)), &conv3_STATE_VARIABLE_VarTable_63_63);
  *STATE_VARIABLE_NameToVar_55 = ((MR_Word) (conv4_STATE_VARIABLE_NameToVar_55));
  STATE_VARIABLE_VarTable_63_63 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_63_63));
  InMode_41 = parse_tree__prog_mode__in_mode_0_f_0();
  OutMode_42 = parse_tree__prog_mode__out_mode_0_f_0();
  Var_64 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), FormalInputNodes_38);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_64, ((MR_Box) (InMode_41)), &InModes_43);
  Var_65 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Borns_37);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_65, ((MR_Box) (OutMode_42)), &OutModes_44);
  PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_20);
  switch (PredOrFunc_45) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word BeforeLastHeadVar_46;
        MR_Word LastHeadVar_47;
        MR_Word BeforeLastHeadMode_48;
        MR_Word LastHeadMode_49;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Box conv5_LastHeadVar_47;
        MR_Box conv6_LastHeadMode_49;

        mercury__list__det_split_last_3_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_HeadVars_0_51, &BeforeLastHeadVar_46, &conv5_LastHeadVar_47);
        LastHeadVar_47 = ((MR_Word) (conv5_LastHeadVar_47));
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (LastHeadVar_47));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), FormalRegionArgs_40, Var_71);
        STATE_VARIABLE_HeadVars_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), BeforeLastHeadVar_46, Var_70);
        mercury__list__det_split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ActualArgModes_0_52, &BeforeLastHeadMode_48, &conv6_LastHeadMode_49);
        LastHeadMode_49 = ((MR_Word) (conv6_LastHeadMode_49));
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (LastHeadMode_49));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OutModes_44, Var_76);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_43, Var_75);
        STATE_VARIABLE_ActualArgModes_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), BeforeLastHeadMode_48, Var_74);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_68;

        STATE_VARIABLE_HeadVars_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_HeadVars_0_51, FormalRegionArgs_40);
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_43, OutModes_44);
        STATE_VARIABLE_ActualArgModes_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ActualArgModes_0_52, Var_68);
      }
      break;
  }
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_63_63, STATE_VARIABLE_ProcInfo_0_56, &STATE_VARIABLE_ProcInfo_78_78);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_58_58, STATE_VARIABLE_ProcInfo_78_78, &STATE_VARIABLE_ProcInfo_79_79);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(STATE_VARIABLE_HeadVars_66_66, STATE_VARIABLE_ProcInfo_79_79, &STATE_VARIABLE_ProcInfo_80_80);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(STATE_VARIABLE_ActualArgModes_67_67, STATE_VARIABLE_ProcInfo_80_80, STATE_VARIABLE_ProcInfo_57);
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_4(
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
  MR_Word conv25_STATE_VARIABLE_NameToVar_23;
  MR_Word conv24_STATE_VARIABLE_VarTable_25;
  MR_Word conv23_Conjs_14;

  transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_STATE_VARIABLE_NameToVar_23, ((MR_Word) (wrapper_arg_4)), &conv24_STATE_VARIABLE_VarTable_25, ((MR_Word) (wrapper_arg_6)), &conv23_Conjs_14);
  *wrapper_arg_3 = ((MR_Box) (conv25_STATE_VARIABLE_NameToVar_23));
  *wrapper_arg_5 = ((MR_Box) (conv24_STATE_VARIABLE_VarTable_25));
  *wrapper_arg_7 = ((MR_Box) (conv23_Conjs_14));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_3(
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
  MR_Word conv18_STATE_VARIABLE_NameToVar_27;
  MR_Word conv17_STATE_VARIABLE_VarTable_29;
  MR_Word conv16_Conjs_20;

  transform_hlds__rbmm__region_transformation__region_instruction_to_conj_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_NameToVar_27, ((MR_Word) (wrapper_arg_4)), &conv17_STATE_VARIABLE_VarTable_29, ((MR_Word) (wrapper_arg_6)), &conv16_Conjs_20);
  *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_NameToVar_27));
  *wrapper_arg_5 = ((MR_Box) (conv17_STATE_VARIABLE_VarTable_29));
  *wrapper_arg_7 = ((MR_Box) (conv16_Conjs_20));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_2(
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
  MR_Word conv12_STATE_VARIABLE_NameToVar_27;
  MR_Word conv11_STATE_VARIABLE_VarTable_29;
  MR_Word conv10_Conjs_20;

  transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_NameToVar_27, ((MR_Word) (wrapper_arg_4)), &conv11_STATE_VARIABLE_VarTable_29, ((MR_Word) (wrapper_arg_6)), &conv10_Conjs_20);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_NameToVar_27));
  *wrapper_arg_5 = ((MR_Box) (conv11_STATE_VARIABLE_VarTable_29));
  *wrapper_arg_7 = ((MR_Box) (conv10_Conjs_20));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_1(
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
  MR_Word conv5_STATE_VARIABLE_NameToVar_21;
  MR_Word conv4_STATE_VARIABLE_VarTable_23;
  MR_Word conv3_Conjs_12;

  transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_NameToVar_21, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_VarTable_23, ((MR_Word) (wrapper_arg_6)), &conv3_Conjs_12);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_NameToVar_21));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_VarTable_23));
  *wrapper_arg_7 = ((MR_Box) (conv3_Conjs_12));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Graph_16,
  MR_Word ResurRenamingProc_17,
  MR_Word IteRenamingProc_18,
  MR_Word ActualRegionArgProc_19,
  MR_Word RegionInstructionProc_20,
  MR_Word ResurRenamingAnnoProc_21,
  MR_Word IteRenamingAnnoProc_22,
  MR_Word STATE_VARIABLE_Goal_0_46,
  MR_Word * STATE_VARIABLE_Goal_47,
  MR_Word STATE_VARIABLE_NameToVar_0_48,
  MR_Word * STATE_VARIABLE_NameToVar_49,
  MR_Word STATE_VARIABLE_VarTable_0_50,
  MR_Word * STATE_VARIABLE_VarTable_51)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_46, (MR_Integer) 0))));
  MR_Word GoalInfo0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_46, (MR_Integer) 1))));
  MR_Word HasSubGoals_28;

  HasSubGoals_28 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_26);
  switch (HasSubGoals_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ProgPoint_29;
        MR_Word Context_30;
        MR_Word ResurRenaming_32;
        MR_Word IteRenaming_33;
        MR_Word GoalExpr_34;
        MR_Word GoalInfo_35;
        MR_Word IteRenamingAssignments_36;
        MR_Word Conjs3_41;
        MR_Word Conjs_42;
        MR_Word STATE_VARIABLE_NameToVar_52_52;
        MR_Word STATE_VARIABLE_VarTable_53_53;
        MR_Word STATE_VARIABLE_NameToVar_54_54;
        MR_Word STATE_VARIABLE_VarTable_55_55;
        MR_Word STATE_VARIABLE_NameToVar_65_65;
        MR_Word STATE_VARIABLE_VarTable_66_66;
        MR_Word ResurRenaming0_98;
        MR_Box conv0_ResurRenaming0_98;
        MR_Word IteRenaming0_99;
        MR_Box conv1_IteRenaming0_99;
        MR_Word IteRenamingAnnos_108;
        MR_Box conv2_IteRenamingAnnos_108;
        MR_Word Before_37;
        MR_Word After_38;
        MR_Word Var_57;
        MR_Box conv9_Var_57;
        MR_Word ResurRenamingAnnos_116;
        MR_Box conv22_ResurRenamingAnnos_116;
        MR_Word Var_72;

        ProgPoint_29 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo0_27);
        Context_30 = ((MR_Word) ((MR_hl_field(0, ProgPoint_29, (MR_Integer) 0))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]), ResurRenamingProc_17, ((MR_Box) (ProgPoint_29)), &conv0_ResurRenaming0_98);
        if (succeeded)
        {
          ResurRenaming0_98 = ((MR_Word) (conv0_ResurRenaming0_98));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          ResurRenaming_32 = ResurRenaming0_98;
        else
          ResurRenaming_32 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]), IteRenamingProc_18, ((MR_Box) (ProgPoint_29)), &conv1_IteRenaming0_99);
        if (succeeded)
        {
          IteRenaming0_99 = ((MR_Word) (conv1_IteRenaming0_99));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          IteRenaming_33 = IteRenaming0_99;
        else
          IteRenaming_33 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]));
        transform_hlds__rbmm__region_transformation__region_transform_goal_expr_14_p_0(ModuleInfo_15, Graph_16, ResurRenaming_32, IteRenaming_33, ActualRegionArgProc_19, ProgPoint_29, GoalExpr0_26, &GoalExpr_34, GoalInfo0_27, &GoalInfo_35, STATE_VARIABLE_NameToVar_0_48, &STATE_VARIABLE_NameToVar_52_52, STATE_VARIABLE_VarTable_0_50, &STATE_VARIABLE_VarTable_53_53);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]), IteRenamingAnnoProc_22, ((MR_Box) (ProgPoint_29)), &conv2_IteRenamingAnnos_108);
        if (succeeded)
        {
          IteRenamingAnnos_108 = ((MR_Word) (conv2_IteRenamingAnnos_108));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Box conv8_STATE_VARIABLE_NameToVar_54_54;
          MR_Box conv7_STATE_VARIABLE_VarTable_55_55;
          MR_Box conv6_IteRenamingAssignments_36;

          mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[12]), IteRenamingAnnos_108, ((MR_Box) (STATE_VARIABLE_NameToVar_52_52)), &conv8_STATE_VARIABLE_NameToVar_54_54, ((MR_Box) (STATE_VARIABLE_VarTable_53_53)), &conv7_STATE_VARIABLE_VarTable_55_55, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_IteRenamingAssignments_36);
          STATE_VARIABLE_NameToVar_54_54 = ((MR_Word) (conv8_STATE_VARIABLE_NameToVar_54_54));
          STATE_VARIABLE_VarTable_55_55 = ((MR_Word) (conv7_STATE_VARIABLE_VarTable_55_55));
          IteRenamingAssignments_36 = ((MR_Word) (conv6_IteRenamingAssignments_36));
        }
        else
        {
          IteRenamingAssignments_36 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_VarTable_55_55 = STATE_VARIABLE_VarTable_53_53;
          STATE_VARIABLE_NameToVar_54_54 = STATE_VARIABLE_NameToVar_52_52;
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), RegionInstructionProc_20, ((MR_Box) (ProgPoint_29)), &conv9_Var_57);
        if (succeeded)
        {
          Var_57 = ((MR_Word) (conv9_Var_57));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Before_37 = ((MR_Word) ((MR_hl_field(0, Var_57, (MR_Integer) 0))));
          After_38 = ((MR_Word) ((MR_hl_field(0, Var_57, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Conjs1_39;
          MR_Word Conjs2_40;
          MR_Word Var_58;
          MR_Word STATE_VARIABLE_NameToVar_59_59;
          MR_Word STATE_VARIABLE_VarTable_60_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_64;
          MR_Box conv15_STATE_VARIABLE_NameToVar_59_59;
          MR_Box conv14_STATE_VARIABLE_VarTable_60_60;
          MR_Box conv13_Conjs1_39;
          MR_Box conv21_STATE_VARIABLE_NameToVar_65_65;
          MR_Box conv20_STATE_VARIABLE_VarTable_66_66;
          MR_Box conv19_Conjs3_41;

          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_58, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
            MR_hl_field(0, Var_58, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_2));
            MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_58, 3) = ((MR_Box) (ModuleInfo_15));
            MR_hl_field(0, Var_58, 4) = ((MR_Box) (Context_30));
            MR_hl_field(0, Var_58, 5) = ((MR_Box) (ResurRenaming_32));
            MR_hl_field(0, Var_58, 6) = ((MR_Box) (IteRenaming_33));
          }
          mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), Var_58, Before_37, ((MR_Box) (STATE_VARIABLE_NameToVar_54_54)), &conv15_STATE_VARIABLE_NameToVar_59_59, ((MR_Box) (STATE_VARIABLE_VarTable_55_55)), &conv14_STATE_VARIABLE_VarTable_60_60, ((MR_Box) (IteRenamingAssignments_36)), &conv13_Conjs1_39);
          STATE_VARIABLE_NameToVar_59_59 = ((MR_Word) (conv15_STATE_VARIABLE_NameToVar_59_59));
          STATE_VARIABLE_VarTable_60_60 = ((MR_Word) (conv14_STATE_VARIABLE_VarTable_60_60));
          Conjs1_39 = ((MR_Word) (conv13_Conjs1_39));
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_62, 0) = ((MR_Box) (GoalExpr_34));
            MR_hl_field(0, Var_62, 1) = ((MR_Box) (GoalInfo_35));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Conjs2_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs1_39, Var_61);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_3));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_64, 3) = ((MR_Box) (ModuleInfo_15));
            MR_hl_field(0, Var_64, 4) = ((MR_Box) (Context_30));
            MR_hl_field(0, Var_64, 5) = ((MR_Box) (ResurRenaming_32));
            MR_hl_field(0, Var_64, 6) = ((MR_Box) (IteRenaming_33));
          }
          mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), Var_64, After_38, ((MR_Box) (STATE_VARIABLE_NameToVar_59_59)), &conv21_STATE_VARIABLE_NameToVar_65_65, ((MR_Box) (STATE_VARIABLE_VarTable_60_60)), &conv20_STATE_VARIABLE_VarTable_66_66, ((MR_Box) (Conjs2_40)), &conv19_Conjs3_41);
          STATE_VARIABLE_NameToVar_65_65 = ((MR_Word) (conv21_STATE_VARIABLE_NameToVar_65_65));
          STATE_VARIABLE_VarTable_66_66 = ((MR_Word) (conv20_STATE_VARIABLE_VarTable_66_66));
          Conjs3_41 = ((MR_Word) (conv19_Conjs3_41));
        }
        else
        {
          MR_Word Var_67;
          MR_Word Var_68;

          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_68, 0) = ((MR_Box) (GoalExpr_34));
            MR_hl_field(0, Var_68, 1) = ((MR_Box) (GoalInfo_35));
          }
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Conjs3_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IteRenamingAssignments_36, Var_67);
          STATE_VARIABLE_VarTable_66_66 = STATE_VARIABLE_VarTable_55_55;
          STATE_VARIABLE_NameToVar_65_65 = STATE_VARIABLE_NameToVar_54_54;
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]), ResurRenamingAnnoProc_21, ((MR_Box) (ProgPoint_29)), &conv22_ResurRenamingAnnos_116);
        if (succeeded)
        {
          ResurRenamingAnnos_116 = ((MR_Word) (conv22_ResurRenamingAnnos_116));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_117;
          MR_Box conv28_STATE_VARIABLE_NameToVar_49;
          MR_Box conv27_STATE_VARIABLE_VarTable_51;
          MR_Box conv26_Conjs_42;

          {
            Var_117 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_117, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_11[0]));
            MR_hl_field(0, Var_117, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0_4));
            MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_117, 3) = ((MR_Box) (IteRenaming_33));
          }
          mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), Var_117, ResurRenamingAnnos_116, ((MR_Box) (STATE_VARIABLE_NameToVar_65_65)), &conv28_STATE_VARIABLE_NameToVar_49, ((MR_Box) (STATE_VARIABLE_VarTable_66_66)), &conv27_STATE_VARIABLE_VarTable_51, ((MR_Box) (Conjs3_41)), &conv26_Conjs_42);
          *STATE_VARIABLE_NameToVar_49 = ((MR_Word) (conv28_STATE_VARIABLE_NameToVar_49));
          *STATE_VARIABLE_VarTable_51 = ((MR_Word) (conv27_STATE_VARIABLE_VarTable_51));
          Conjs_42 = ((MR_Word) (conv26_Conjs_42));
        }
        else
        {
          Conjs_42 = Conjs3_41;
          *STATE_VARIABLE_VarTable_51 = STATE_VARIABLE_VarTable_66_66;
          *STATE_VARIABLE_NameToVar_49 = STATE_VARIABLE_NameToVar_65_65;
        }
        succeeded = (Conjs_42 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(1, Conjs_42, (MR_Integer) 1))));
          succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word Var_74;

          {
            Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_74, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, Var_74, 2) = ((MR_Box) (Conjs_42));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Goal_47 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_35));
          }
        }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Goal_47 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_34));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_35));
          }
      }
      break;
    case (MR_Integer) 0:
      transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0(ModuleInfo_15, Graph_16, ResurRenamingProc_17, IteRenamingProc_18, ActualRegionArgProc_19, RegionInstructionProc_20, ResurRenamingAnnoProc_21, IteRenamingAnnoProc_22, STATE_VARIABLE_Goal_0_46, STATE_VARIABLE_Goal_47, STATE_VARIABLE_NameToVar_0_48, STATE_VARIABLE_NameToVar_49, STATE_VARIABLE_VarTable_0_50, STATE_VARIABLE_VarTable_51);
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__11_11;
  MR_Word conv11_STATE_VARIABLE_NameToVar_59;
  MR_Word conv10_STATE_VARIABLE_VarTable_61;

  transform_hlds__rbmm__region_transformation__region_transform_case_15_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 11)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__11_11, ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_NameToVar_59, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_VarTable_61);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__11_11));
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_NameToVar_59));
  *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_VarTable_61));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Goal_47;
  MR_Word conv6_STATE_VARIABLE_NameToVar_49;
  MR_Word conv5_STATE_VARIABLE_VarTable_51;

  transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_Goal_47, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_NameToVar_49, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_VarTable_51);
  *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_Goal_47));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_NameToVar_49));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_VarTable_51));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Goal_47;
  MR_Word conv1_STATE_VARIABLE_NameToVar_49;
  MR_Word conv0_STATE_VARIABLE_VarTable_51;

  transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Goal_47, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_NameToVar_49, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_VarTable_51);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_47));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_NameToVar_49));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_51));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Graph_16,
  MR_Word ResurRenamingProc_17,
  MR_Word IteRenamingProc_18,
  MR_Word ActualRegionArgProc_19,
  MR_Word RegionInstructionProc_20,
  MR_Word ResurRenamingAnnoProc_21,
  MR_Word IteRenamingAnnoProc_22,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_NameToVar_0_80,
  MR_Word * STATE_VARIABLE_NameToVar_81,
  MR_Word STATE_VARIABLE_VarTable_0_82,
  MR_Word * STATE_VARIABLE_VarTable_83)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_GoalExpr_0_76 = ((MR_Word) ((MR_hl_field(0, HeadVar__9_9, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_GoalExpr_78;
  MR_Word STATE_VARIABLE_GoalInfo_79 = ((MR_Word) ((MR_hl_field(0, HeadVar__9_9, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_76)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_39 = (MR_Word) ((MR_Word) (STATE_VARIABLE_GoalExpr_0_76));
        MR_Word Goal_40;

        transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(ModuleInfo_15, Graph_16, ResurRenamingProc_17, IteRenamingProc_18, ActualRegionArgProc_19, RegionInstructionProc_20, ResurRenamingAnnoProc_21, IteRenamingAnnoProc_22, Goal0_39, &Goal_40, STATE_VARIABLE_NameToVar_0_80, STATE_VARIABLE_NameToVar_81, STATE_VARIABLE_VarTable_0_82, STATE_VARIABLE_VarTable_83);
        STATE_VARIABLE_GoalExpr_78 = (MR_Word) ((MR_Word) (Goal_40));
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/14", (MR_String) "shorthand or atomic goal");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/14", (MR_String) "shorthand or atomic goal");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/14", (MR_String) "shorthand or atomic goal");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/14", (MR_String) "shorthand or atomic goal");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_166 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 2))));
            MR_Word Var_167 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 1))) & (MR_Integer) 1);

            if ((Var_166 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/14", (MR_String) "shorthand or atomic goal");
                return;
              }
            else
            {
              MR_Word Conjs1_30;
              MR_Word Conjs_31;
              MR_Word Var_85;
              MR_Box conv4_STATE_VARIABLE_NameToVar_81;
              MR_Box conv3_STATE_VARIABLE_VarTable_83;

              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_85, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_6[1]));
                MR_hl_field(0, Var_85, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_1));
                MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 8));
                MR_hl_field(0, Var_85, 3) = ((MR_Box) (ModuleInfo_15));
                MR_hl_field(0, Var_85, 4) = ((MR_Box) (Graph_16));
                MR_hl_field(0, Var_85, 5) = ((MR_Box) (ResurRenamingProc_17));
                MR_hl_field(0, Var_85, 6) = ((MR_Box) (IteRenamingProc_18));
                MR_hl_field(0, Var_85, 7) = ((MR_Box) (ActualRegionArgProc_19));
                MR_hl_field(0, Var_85, 8) = ((MR_Box) (RegionInstructionProc_20));
                MR_hl_field(0, Var_85, 9) = ((MR_Box) (ResurRenamingAnnoProc_21));
                MR_hl_field(0, Var_85, 10) = ((MR_Box) (IteRenamingAnnoProc_22));
              }
              mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_85, Var_166, &Conjs1_30, ((MR_Box) (STATE_VARIABLE_NameToVar_0_80)), &conv4_STATE_VARIABLE_NameToVar_81, ((MR_Box) (STATE_VARIABLE_VarTable_0_82)), &conv3_STATE_VARIABLE_VarTable_83);
              *STATE_VARIABLE_NameToVar_81 = ((MR_Word) (conv4_STATE_VARIABLE_NameToVar_81));
              *STATE_VARIABLE_VarTable_83 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_83));
              hlds__goal_util__flatten_conj_2_p_0(Conjs1_30, &Conjs_31);
              {
                STATE_VARIABLE_GoalExpr_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 1) = (MR_Box) ((MR_Unsigned) (Var_167));
                MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 2) = ((MR_Box) (Conjs_31));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_168 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 1))));

            if ((Var_168 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/14", (MR_String) "shorthand or atomic goal");
                return;
              }
            else
            {
              MR_Word Disjs_34;
              MR_Word Var_91;
              MR_Box conv9_STATE_VARIABLE_NameToVar_81;
              MR_Box conv8_STATE_VARIABLE_VarTable_83;

              {
                Var_91 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_91, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_6[1]));
                MR_hl_field(0, Var_91, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_2));
                MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 8));
                MR_hl_field(0, Var_91, 3) = ((MR_Box) (ModuleInfo_15));
                MR_hl_field(0, Var_91, 4) = ((MR_Box) (Graph_16));
                MR_hl_field(0, Var_91, 5) = ((MR_Box) (ResurRenamingProc_17));
                MR_hl_field(0, Var_91, 6) = ((MR_Box) (IteRenamingProc_18));
                MR_hl_field(0, Var_91, 7) = ((MR_Box) (ActualRegionArgProc_19));
                MR_hl_field(0, Var_91, 8) = ((MR_Box) (RegionInstructionProc_20));
                MR_hl_field(0, Var_91, 9) = ((MR_Box) (ResurRenamingAnnoProc_21));
                MR_hl_field(0, Var_91, 10) = ((MR_Box) (IteRenamingAnnoProc_22));
              }
              mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_91, Var_168, &Disjs_34, ((MR_Box) (STATE_VARIABLE_NameToVar_0_80)), &conv9_STATE_VARIABLE_NameToVar_81, ((MR_Box) (STATE_VARIABLE_VarTable_0_82)), &conv8_STATE_VARIABLE_VarTable_83);
              *STATE_VARIABLE_NameToVar_81 = ((MR_Word) (conv9_STATE_VARIABLE_NameToVar_81));
              *STATE_VARIABLE_VarTable_83 = ((MR_Word) (conv8_STATE_VARIABLE_VarTable_83));
              {
                STATE_VARIABLE_GoalExpr_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 1) = ((MR_Box) (Disjs_34));
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 1))));
            MR_Word CanFail_36 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_37 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 3))));
            MR_Word Cases_38;
            MR_Word Var_96;
            MR_Box conv14_STATE_VARIABLE_NameToVar_81;
            MR_Box conv13_STATE_VARIABLE_VarTable_83;

            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_96, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_8[0]));
              MR_hl_field(0, Var_96, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_14_p_0_3));
              MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 9));
              MR_hl_field(0, Var_96, 3) = ((MR_Box) (ModuleInfo_15));
              MR_hl_field(0, Var_96, 4) = ((MR_Box) (Graph_16));
              MR_hl_field(0, Var_96, 5) = ((MR_Box) (ResurRenamingProc_17));
              MR_hl_field(0, Var_96, 6) = ((MR_Box) (IteRenamingProc_18));
              MR_hl_field(0, Var_96, 7) = ((MR_Box) (ActualRegionArgProc_19));
              MR_hl_field(0, Var_96, 8) = ((MR_Box) (RegionInstructionProc_20));
              MR_hl_field(0, Var_96, 9) = ((MR_Box) (ResurRenamingAnnoProc_21));
              MR_hl_field(0, Var_96, 10) = ((MR_Box) (IteRenamingAnnoProc_22));
              MR_hl_field(0, Var_96, 11) = ((MR_Box) (HeadVar__9_9));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_96, Cases0_37, &Cases_38, ((MR_Box) (STATE_VARIABLE_NameToVar_0_80)), &conv14_STATE_VARIABLE_NameToVar_81, ((MR_Box) (STATE_VARIABLE_VarTable_0_82)), &conv13_STATE_VARIABLE_VarTable_83);
            *STATE_VARIABLE_NameToVar_81 = ((MR_Word) (conv14_STATE_VARIABLE_NameToVar_81));
            *STATE_VARIABLE_VarTable_83 = ((MR_Word) (conv13_STATE_VARIABLE_VarTable_83));
            {
              STATE_VARIABLE_GoalExpr_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 1) = ((MR_Box) (Var_35));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 2) = (MR_Box) ((MR_Unsigned) (CanFail_36));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 3) = ((MR_Box) (Cases_38));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_41 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 1))));
            MR_Word Reason_43;
            MR_Word Goal0_121 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 2))));
            MR_Word Goal_122;
            MR_Word Var_119;

            succeeded = ((((MR_tag((MR_Word) Reason0_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_41, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_119 = ((MR_Word) ((MR_hl_field(3, Reason0_41, (MR_Integer) 1))));
              {
                Reason_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Reason_43, 1) = ((MR_Box) (Var_119));
                MR_hl_field(3, Reason_43, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
              }
            }
            else
              Reason_43 = Reason0_41;
            transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(ModuleInfo_15, Graph_16, ResurRenamingProc_17, IteRenamingProc_18, ActualRegionArgProc_19, RegionInstructionProc_20, ResurRenamingAnnoProc_21, IteRenamingAnnoProc_22, Goal0_121, &Goal_122, STATE_VARIABLE_NameToVar_0_80, STATE_VARIABLE_NameToVar_81, STATE_VARIABLE_VarTable_0_82, STATE_VARIABLE_VarTable_83);
            {
              STATE_VARIABLE_GoalExpr_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 1) = ((MR_Box) (Reason_43));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 2) = ((MR_Box) (Goal_122));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_44 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 1))));
            MR_Word Cond0_45 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 2))));
            MR_Word Then0_46 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 3))));
            MR_Word Else0_47 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_76, (MR_Integer) 4))));
            MR_Word Cond_48;
            MR_Word Then_49;
            MR_Word Else_50;
            MR_Word STATE_VARIABLE_NameToVar_108_108;
            MR_Word STATE_VARIABLE_VarTable_109_109;
            MR_Word STATE_VARIABLE_NameToVar_110_110;
            MR_Word STATE_VARIABLE_VarTable_111_111;

            transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(ModuleInfo_15, Graph_16, ResurRenamingProc_17, IteRenamingProc_18, ActualRegionArgProc_19, RegionInstructionProc_20, ResurRenamingAnnoProc_21, IteRenamingAnnoProc_22, Cond0_45, &Cond_48, STATE_VARIABLE_NameToVar_0_80, &STATE_VARIABLE_NameToVar_108_108, STATE_VARIABLE_VarTable_0_82, &STATE_VARIABLE_VarTable_109_109);
            transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(ModuleInfo_15, Graph_16, ResurRenamingProc_17, IteRenamingProc_18, ActualRegionArgProc_19, RegionInstructionProc_20, ResurRenamingAnnoProc_21, IteRenamingAnnoProc_22, Then0_46, &Then_49, STATE_VARIABLE_NameToVar_108_108, &STATE_VARIABLE_NameToVar_110_110, STATE_VARIABLE_VarTable_109_109, &STATE_VARIABLE_VarTable_111_111);
            transform_hlds__rbmm__region_transformation__region_transform_goal_14_p_0(ModuleInfo_15, Graph_16, ResurRenamingProc_17, IteRenamingProc_18, ActualRegionArgProc_19, RegionInstructionProc_20, ResurRenamingAnnoProc_21, IteRenamingAnnoProc_22, Else0_47, &Else_50, STATE_VARIABLE_NameToVar_110_110, STATE_VARIABLE_NameToVar_81, STATE_VARIABLE_VarTable_111_111, STATE_VARIABLE_VarTable_83);
            {
              STATE_VARIABLE_GoalExpr_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 1) = ((MR_Box) (Vars_44));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 2) = ((MR_Box) (Cond_48));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 3) = ((MR_Box) (Then_49));
              MR_hl_field(3, STATE_VARIABLE_GoalExpr_78, 4) = ((MR_Box) (Else_50));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/14", (MR_String) "shorthand or atomic goal");
            return;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__10_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_78));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_79));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_RegVar_14;
  MR_Word conv2_STATE_VARIABLE_NameToVar_19;
  MR_Word conv1_STATE_VARIABLE_VarTable_21;

  transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_RegVar_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_NameToVar_19, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_VarTable_21);
  *wrapper_arg_2 = ((MR_Box) (conv3_RegVar_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_NameToVar_19));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_VarTable_21));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Graph_16,
  MR_Word ResurRenaming_17,
  MR_Word IteRenaming_18,
  MR_Word ActualRegionArgProc_19,
  MR_Word ProgPoint_20,
  MR_Word STATE_VARIABLE_GoalExpr_0_77,
  MR_Word * STATE_VARIABLE_GoalExpr_78,
  MR_Word STATE_VARIABLE_GoalInfo_0_79,
  MR_Word * STATE_VARIABLE_GoalInfo_80,
  MR_Word STATE_VARIABLE_NameToVar_0_81,
  MR_Word * STATE_VARIABLE_NameToVar_82,
  MR_Word STATE_VARIABLE_VarTable_0_83,
  MR_Word * STATE_VARIABLE_VarTable_84)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_77)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "compound goal");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_43 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 0))));
        MR_Word RHS_44 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 1))));
        MR_Word Mode_45 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 2))));
        MR_Word Unification0_46 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 3))));
        MR_Word Unification_47;
        MR_Word Context_109 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 4))));

        transform_hlds__rbmm__region_transformation__annotate_constructions_unification_10_p_0(ModuleInfo_15, Graph_16, ResurRenaming_17, IteRenaming_18, Unification0_46, &Unification_47, STATE_VARIABLE_NameToVar_0_81, STATE_VARIABLE_NameToVar_82, STATE_VARIABLE_VarTable_0_83, STATE_VARIABLE_VarTable_84);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_GoalExpr_78 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHS_43));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_44));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_45));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_47));
          MR_hl_field(1, base, 4) = ((MR_Box) (Context_109));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CalleePredId_25 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 0))));
        MR_Integer CalleeProcId_26 = ((MR_Integer) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 1))));
        MR_Word Args0_27 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 2))));
        MR_Word Builtin_28 = ((MR_Unsigned) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word Context_29 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 4))));
        MR_Word Name_30 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 5))));
        MR_Word ActualNodes_32;
        MR_Word Constants_33;
        MR_Word Ins_34;
        MR_Word Outs_35;
        MR_Word AllNodes_36;
        MR_Word ActualRegionArgs_37;
        MR_Word CalleePredInfo_38;
        MR_Word CalleePredOrFunc_39;
        MR_Word Args_40;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word ActualNodes0_31;
        MR_Box conv0_ActualNodes0_31;
        MR_Box conv5_STATE_VARIABLE_NameToVar_82;
        MR_Box conv4_STATE_VARIABLE_VarTable_84;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), ActualRegionArgProc_19, ((MR_Box) (ProgPoint_20)), &conv0_ActualNodes0_31);
        if (succeeded)
        {
          ActualNodes0_31 = ((MR_Word) (conv0_ActualNodes0_31));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          ActualNodes_32 = ActualNodes0_31;
        else
          ActualNodes_32 = (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[7]);
        Constants_33 = ((MR_Word) ((MR_hl_field(0, ActualNodes_32, (MR_Integer) 0))));
        Ins_34 = ((MR_Word) ((MR_hl_field(0, ActualNodes_32, (MR_Integer) 1))));
        Outs_35 = ((MR_Word) ((MR_hl_field(0, ActualNodes_32, (MR_Integer) 2))));
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Ins_34, Outs_35);
        AllNodes_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Constants_33, Var_88);
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_7[0]));
          MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_expr_14_p_0_1));
          MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_89, 3) = ((MR_Box) (Graph_16));
          MR_hl_field(0, Var_89, 4) = ((MR_Box) (ResurRenaming_17));
          MR_hl_field(0, Var_89, 5) = ((MR_Box) (IteRenaming_18));
        }
        mercury__list__map_foldl2_7_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_89, AllNodes_36, &ActualRegionArgs_37, ((MR_Box) (STATE_VARIABLE_NameToVar_0_81)), &conv5_STATE_VARIABLE_NameToVar_82, ((MR_Box) (STATE_VARIABLE_VarTable_0_83)), &conv4_STATE_VARIABLE_VarTable_84);
        *STATE_VARIABLE_NameToVar_82 = ((MR_Word) (conv5_STATE_VARIABLE_NameToVar_82));
        *STATE_VARIABLE_VarTable_84 = ((MR_Word) (conv4_STATE_VARIABLE_VarTable_84));
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, CalleePredId_25, &CalleePredInfo_38);
        CalleePredOrFunc_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CalleePredInfo_38);
        switch (CalleePredOrFunc_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word BeforeLast_41;
              MR_Word Last_42;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Box conv6_Last_42;

              mercury__list__det_split_last_3_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), Args0_27, &BeforeLast_41, &conv6_Last_42);
              Last_42 = ((MR_Word) (conv6_Last_42));
              {
                Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_93, 0) = ((MR_Box) (Last_42));
                MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ActualRegionArgs_37, Var_93);
              Args_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), BeforeLast_41, Var_92);
            }
            break;
          case (MR_Integer) 0:
            Args_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), Args0_27, ActualRegionArgs_37);
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_GoalExpr_78 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (CalleePredId_25));
          MR_hl_field(2, base, 1) = ((MR_Box) (CalleeProcId_26));
          MR_hl_field(2, base, 2) = ((MR_Box) (Args_40));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_28));
          MR_hl_field(2, base, 4) = ((MR_Box) (Context_29));
          MR_hl_field(2, base, 5) = ((MR_Box) (Name_30));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "generic call");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "call_foreign_proc");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_136 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 2))));

            if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_GoalExpr_78 = STATE_VARIABLE_GoalExpr_0_77;
              *STATE_VARIABLE_NameToVar_82 = STATE_VARIABLE_NameToVar_0_81;
              *STATE_VARIABLE_VarTable_84 = STATE_VARIABLE_VarTable_0_83;
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "compound goal");
                return;
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_138 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_77, (MR_Integer) 1))));

            if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_GoalExpr_78 = STATE_VARIABLE_GoalExpr_0_77;
              *STATE_VARIABLE_NameToVar_82 = STATE_VARIABLE_NameToVar_0_81;
              *STATE_VARIABLE_VarTable_84 = STATE_VARIABLE_VarTable_0_83;
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "compound goal");
                return;
              }
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "compound goal");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "compound goal");
            return;
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "compound goal");
            return;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/14", (MR_String) "compound goal");
            return;
          }
          break;
      }
      break;
  }
  *STATE_VARIABLE_GoalInfo_80 = STATE_VARIABLE_GoalInfo_0_79;
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Graph_2,
  MR_Word ResurRenaming_3,
  MR_Word IteRenaming_4,
  MR_Word STATE_VARIABLE_Unification_0_5,
  MR_Word * STATE_VARIABLE_Unification_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_5, (MR_Integer) 0))));
        MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_5, (MR_Integer) 1))));
        MR_Word Args_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_5, (MR_Integer) 2))));
        MR_Word ArgModes_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_5, (MR_Integer) 3))));
        MR_Word IsUnique_23 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_5, (MR_Integer) 5))) & (MR_Integer) 1);
        MR_Word SubInfo_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Unification_0_5, (MR_Integer) 6))));
        MR_Word Node_25;
        MR_Word NodeType_26;

        transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(Graph_2, Var_18, &Node_25);
        NodeType_26 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(Graph_2, Node_25);
        succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(NodeType_26, ModuleInfo_1);
        if (succeeded)
        {
          *HeadVar__10_10 = HeadVar__9_9;
          *HeadVar__8_8 = HeadVar__7_7;
          *STATE_VARIABLE_Unification_6 = STATE_VARIABLE_Unification_0_5;
        }
        else
        {
          MR_String Name_27;
          MR_Word RegVar_28;
          MR_Word HowToConstruct_29;

          Name_27 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_2, Node_25);
          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_8_p_0(Name_27, ResurRenaming_3, IteRenaming_4, &RegVar_28, HeadVar__7_7, HeadVar__8_8, HeadVar__9_9, HeadVar__10_10);
          {
            HowToConstruct_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, HowToConstruct_29, 0) = ((MR_Box) (RegVar_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Unification_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
            MR_hl_field(0, base, 1) = ((MR_Box) (ConsId_19));
            MR_hl_field(0, base, 2) = ((MR_Box) (Args_20));
            MR_hl_field(0, base, 3) = ((MR_Box) (ArgModes_21));
            MR_hl_field(0, base, 4) = ((MR_Box) (HowToConstruct_29));
            MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (IsUnique_23));
            MR_hl_field(0, base, 6) = ((MR_Box) (SubInfo_24));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__10_10 = HeadVar__9_9;
        *HeadVar__8_8 = HeadVar__7_7;
        *STATE_VARIABLE_Unification_6 = STATE_VARIABLE_Unification_0_5;
      }
      break;
    case (MR_Integer) 2:
      {
        *HeadVar__10_10 = HeadVar__9_9;
        *HeadVar__8_8 = HeadVar__7_7;
        *STATE_VARIABLE_Unification_6 = STATE_VARIABLE_Unification_0_5;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Unification_0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__10_10 = HeadVar__9_9;
            *HeadVar__8_8 = HeadVar__7_7;
            *STATE_VARIABLE_Unification_6 = STATE_VARIABLE_Unification_0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.annotate_constructions_unification\'/10", (MR_String) "complicated unify");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_8_p_0(
  MR_String Name0_9,
  MR_Word ResurRenaming_10,
  MR_Word IteRenaming_11,
  MR_Word * RegVar_12,
  MR_Word STATE_VARIABLE_NameToVar_0_18,
  MR_Word * STATE_VARIABLE_NameToVar_19,
  MR_Word STATE_VARIABLE_VarTable_0_20,
  MR_Word * STATE_VARIABLE_VarTable_21)
{
  MR_bool succeeded;
  MR_String Name_16;
  MR_Word ResurNameList_15;
  MR_Box conv0_ResurNameList_15;
  MR_Word RegVar0_28;
  MR_Box conv4_RegVar0_28;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), ResurRenaming_10, ((MR_Box) (Name0_9)), &conv0_ResurNameList_15);
  if (succeeded)
  {
    ResurNameList_15 = ((MR_Word) (conv0_ResurNameList_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Box conv1_Name_16;

    mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_15, &conv1_Name_16);
    Name_16 = ((MR_String) (conv1_Name_16));
  }
  else
  {
    MR_Word IteNameList_17;
    MR_Box conv2_IteNameList_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), IteRenaming_11, ((MR_Box) (Name0_9)), &conv2_IteNameList_17);
    if (succeeded)
    {
      IteNameList_17 = ((MR_Word) (conv2_IteNameList_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv3_Name_16;

      mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IteNameList_17, &conv3_Name_16);
      Name_16 = ((MR_String) (conv3_Name_16));
    }
    else
      Name_16 = Name0_9;
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_NameToVar_0_18, ((MR_Box) (Name_16)), &conv4_RegVar0_28);
  if (succeeded)
  {
    RegVar0_28 = ((MR_Word) (conv4_RegVar0_28));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *RegVar_12 = RegVar0_28;
    *STATE_VARIABLE_VarTable_21 = STATE_VARIABLE_VarTable_0_20;
    *STATE_VARIABLE_NameToVar_19 = STATE_VARIABLE_NameToVar_0_18;
  }
  else
  {
    MR_Word Entry_29;
    MR_Word Var_30;

    Var_30 = parse_tree__builtin_lib_types__region_type_0_f_0();
    {
      Entry_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_29, 0) = ((MR_Box) (Name_16));
      MR_hl_field(0, Entry_29, 1) = ((MR_Box) (Var_30));
      MR_hl_field(0, Entry_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_29, RegVar_12, STATE_VARIABLE_VarTable_0_20, STATE_VARIABLE_VarTable_21);
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ((MR_Box) (Name_16)), ((MR_Box) (*RegVar_12)), STATE_VARIABLE_NameToVar_0_18, STATE_VARIABLE_NameToVar_19);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NameToVarTable_51;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_53;

  transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 11)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NameToVarTable_51, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_53);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NameToVarTable_51));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_53));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(
  MR_Word RptaInfoTable_14,
  MR_Word FormalRegionArgTable_15,
  MR_Word ActualRegionArgTable_16,
  MR_Word ResurRenamingTable_17,
  MR_Word IteRenamingTable_18,
  MR_Word RegionInstructionTable_19,
  MR_Word ResurRenamingAnnoTable_20,
  MR_Word IteRenamingAnnoTable_21,
  MR_Word PredId_22,
  MR_Word STATE_VARIABLE_NameToVarTable_0_27,
  MR_Word * STATE_VARIABLE_NameToVarTable_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_Word PredInfo_25;
  MR_Word ProcIds_26;
  MR_Word Var_31;
  MR_Box conv3_STATE_VARIABLE_NameToVarTable_28;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_30;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_22, &PredInfo_25);
  ProcIds_26 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_25);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_6[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (RptaInfoTable_14));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (FormalRegionArgTable_15));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (ActualRegionArgTable_16));
    MR_hl_field(0, Var_31, 6) = ((MR_Box) (ResurRenamingTable_17));
    MR_hl_field(0, Var_31, 7) = ((MR_Box) (IteRenamingTable_18));
    MR_hl_field(0, Var_31, 8) = ((MR_Box) (RegionInstructionTable_19));
    MR_hl_field(0, Var_31, 9) = ((MR_Box) (ResurRenamingAnnoTable_20));
    MR_hl_field(0, Var_31, 10) = ((MR_Box) (IteRenamingAnnoTable_21));
    MR_hl_field(0, Var_31, 11) = ((MR_Box) (PredId_22));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_31, ProcIds_26, ((MR_Box) (STATE_VARIABLE_NameToVarTable_0_27)), &conv3_STATE_VARIABLE_NameToVarTable_28, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_29)), &conv2_STATE_VARIABLE_ModuleInfo_30);
  *STATE_VARIABLE_NameToVarTable_28 = ((MR_Word) (conv3_STATE_VARIABLE_NameToVarTable_28));
  *STATE_VARIABLE_ModuleInfo_30 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_30));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(
  MR_Word PPId_7,
  MR_Word FormalRegionArgs_8,
  MR_Word STATE_VARIABLE_Processed_0_27,
  MR_Word * STATE_VARIABLE_Processed_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_bool succeeded;
  MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(0, PPId_7, (MR_Integer) 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_11)), STATE_VARIABLE_Processed_0_27);
  if (succeeded)
  {
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
    *STATE_VARIABLE_Processed_28 = STATE_VARIABLE_Processed_0_27;
  }
  else
  {
    MR_Word Constants_14;
    MR_Word Deads_15;
    MR_Word Borns_16;
    MR_Integer NumberOfRegArgs_17;
    MR_Integer Arity_18;
    MR_Word RegionTypes_19;
    MR_Word TypeVarSet_20;
    MR_Word ExistQuantTVars_21;
    MR_Word ArgTypes0_22;
    MR_Word PredOrFunc_23;
    MR_Word ArgTypes_24;
    MR_Word STATE_VARIABLE_PredInfo_31_31;
    MR_Integer Var_32;
    MR_Integer Var_33;
    MR_Integer Var_34;
    MR_Integer Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_PredInfo_38_38;
    MR_Integer Var_39;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_PredInfo_44_44;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_11, &STATE_VARIABLE_PredInfo_31_31);
    Constants_14 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgs_8, (MR_Integer) 0))));
    Deads_15 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgs_8, (MR_Integer) 1))));
    Borns_16 = ((MR_Word) ((MR_hl_field(0, FormalRegionArgs_8, (MR_Integer) 2))));
    Var_33 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Constants_14);
    Var_34 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Deads_15);
    Var_32 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) Var_34);
    Var_35 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Borns_16);
    NumberOfRegArgs_17 = (MR_Integer) ((MR_Unsigned) Var_32 + (MR_Unsigned) Var_35);
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(STATE_VARIABLE_PredInfo_31_31, &Var_36);
    Arity_18 = (MR_Integer) (Var_36);
    Var_39 = (MR_Integer) ((MR_Unsigned) Arity_18 + (MR_Unsigned) NumberOfRegArgs_17);
    Var_37 = (MR_Word) (Var_39);
    hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(Var_37, STATE_VARIABLE_PredInfo_31_31, &STATE_VARIABLE_PredInfo_38_38);
    Var_40 = parse_tree__builtin_lib_types__region_type_0_f_0();
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumberOfRegArgs_17, ((MR_Box) (Var_40)), &RegionTypes_19);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_38_38, &TypeVarSet_20, &ExistQuantTVars_21, &ArgTypes0_22);
    PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_38_38);
    switch (PredOrFunc_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word BeforeLast_25;
          MR_Word Last_26;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Box conv0_Last_26;

          mercury__list__det_split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_22, &BeforeLast_25, &conv0_Last_26);
          Last_26 = ((MR_Word) (conv0_Last_26));
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (Last_26));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RegionTypes_19, Var_42);
          ArgTypes_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), BeforeLast_25, Var_41);
        }
        break;
      case (MR_Integer) 0:
        ArgTypes_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_22, RegionTypes_19);
        break;
    }
    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_20, ExistQuantTVars_21, ArgTypes_24, STATE_VARIABLE_PredInfo_38_38, &STATE_VARIABLE_PredInfo_44_44);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, STATE_VARIABLE_PredInfo_44_44, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Processed_28 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Processed_0_27));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_ModuleInfo_9;

  transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ModuleInfo_9;

  transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_NameToVarTable_28;
  MR_Word conv4_STATE_VARIABLE_ModuleInfo_30;

  transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_NameToVarTable_28, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ModuleInfo_30);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_NameToVarTable_28));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_30));
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Processed_28;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_30;

  transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Processed_28, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ModuleInfo_30);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Processed_28));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_30));
}

void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0(
  MR_Word RptaInfoTable_13,
  MR_Word FormalRegionArgTable_14,
  MR_Word ActualRegionArgTable_15,
  MR_Word ResurRenamingTable_16,
  MR_Word IteRenamingTable_17,
  MR_Word RegionInstructionTable_18,
  MR_Word ResurRenamingAnnoTable_19,
  MR_Word IteRenamingAnnoTable_20,
  MR_Word STATE_VARIABLE_NameToVarTable_0_24,
  MR_Word * STATE_VARIABLE_NameToVarTable_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  MR_Word PredIds_23;
  MR_Word STATE_VARIABLE_ModuleInfo_30_30;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_ModuleInfo_33_33;
  MR_Word STATE_VARIABLE_ModuleInfo_35_35;
  MR_Box conv3_PredIds_23;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_30_30;
  MR_Box conv7_STATE_VARIABLE_NameToVarTable_25;
  MR_Box conv6_STATE_VARIABLE_ModuleInfo_33_33;
  MR_Box conv9_STATE_VARIABLE_ModuleInfo_35_35;
  MR_Box conv11_STATE_VARIABLE_ModuleInfo_27;

  mercury__map__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[9]), FormalRegionArgTable_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_PredIds_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26)), &conv2_STATE_VARIABLE_ModuleInfo_30_30);
  PredIds_23 = ((MR_Word) (conv3_PredIds_23));
  STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_30_30));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 8));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (RptaInfoTable_13));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (FormalRegionArgTable_14));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (ActualRegionArgTable_15));
    MR_hl_field(0, Var_31, 6) = ((MR_Box) (ResurRenamingTable_16));
    MR_hl_field(0, Var_31, 7) = ((MR_Box) (IteRenamingTable_17));
    MR_hl_field(0, Var_31, 8) = ((MR_Box) (RegionInstructionTable_18));
    MR_hl_field(0, Var_31, 9) = ((MR_Box) (ResurRenamingAnnoTable_19));
    MR_hl_field(0, Var_31, 10) = ((MR_Box) (IteRenamingAnnoTable_20));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_31, PredIds_23, ((MR_Box) (STATE_VARIABLE_NameToVarTable_0_24)), &conv7_STATE_VARIABLE_NameToVarTable_25, ((MR_Box) (STATE_VARIABLE_ModuleInfo_30_30)), &conv6_STATE_VARIABLE_ModuleInfo_33_33);
  *STATE_VARIABLE_NameToVarTable_25 = ((MR_Word) (conv7_STATE_VARIABLE_NameToVarTable_25));
  STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_33_33));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[10]), PredIds_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_33_33)), &conv9_STATE_VARIABLE_ModuleInfo_35_35);
  STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_35_35));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[11]), PredIds_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_35_35)), &conv11_STATE_VARIABLE_ModuleInfo_27);
  *STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_27));
}

MR_String MR_CALL 
transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0(void)
{
  return (MR_String) "remove_region";
}

MR_String MR_CALL 
transform_hlds__rbmm__region_transformation__create_region_pred_name_0_f_0(void)
{
  return (MR_String) "create_region";
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__rbmm__region_transformation__init(void)
{
}

void mercury__transform_hlds__rbmm__region_transformation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_table_0);
}

void mercury__transform_hlds__rbmm__region_transformation__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__region_transformation__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.region_transformation.
