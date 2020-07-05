/*
** Automatically generated from `rbmm.region_transformation.m'
** by the Mercury compiler,
** version rotd-2020-07-05
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__651__1_2_p_0(
  MR_Word OtherConsIds_28,
  MR_Word HeadVar__2_70);

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
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(
  MR_Word Annotation_10,
  MR_Word STATE_VARIABLE_NameToVar_0_23,
  MR_Word * STATE_VARIABLE_NameToVar_24,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_VarTypes_0_27,
  MR_Word * STATE_VARIABLE_VarTypes_28,
  MR_Word Conjs0_14,
  MR_Word * Conjs_15);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(
  MR_Word IteRenaming_11,
  MR_Word Annotation_12,
  MR_Word STATE_VARIABLE_NameToVar_0_25,
  MR_Word * STATE_VARIABLE_NameToVar_26,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28,
  MR_Word STATE_VARIABLE_VarTypes_0_29,
  MR_Word * STATE_VARIABLE_VarTypes_30,
  MR_Word Conjs0_16,
  MR_Word * Conjs_17);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word ResurRenaming_16,
  MR_Word IteRenaming_17,
  MR_Word RegionInstruction_18,
  MR_Word STATE_VARIABLE_NameToVar_0_29,
  MR_Word * STATE_VARIABLE_NameToVar_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word Conjs0_22,
  MR_Word * Conjs_23);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word ResurRenaming_16,
  MR_Word IteRenaming_17,
  MR_Word RegionInstruction_18,
  MR_Word STATE_VARIABLE_NameToVar_0_29,
  MR_Word * STATE_VARIABLE_NameToVar_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word Conjs0_22,
  MR_Word * Conjs_23);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(
  MR_String Name0_11,
  MR_Word ResurRenaming_12,
  MR_Word IteRenaming_13,
  MR_Word * RegVar_14,
  MR_Word STATE_VARIABLE_NameToVar_0_21,
  MR_Word * STATE_VARIABLE_NameToVar_22,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_VarTypes_0_25,
  MR_Word * STATE_VARIABLE_VarTypes_26);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(
  MR_Word Graph_12,
  MR_Word ResurRenaming_13,
  MR_Word IteRenaming_14,
  MR_Word Node_15,
  MR_Word * RegVar_16,
  MR_Word STATE_VARIABLE_NameToVar_0_21,
  MR_Word * STATE_VARIABLE_NameToVar_22,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_VarTypes_0_25,
  MR_Word * STATE_VARIABLE_VarTypes_26);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(
  MR_Word Graph_10,
  MR_Word Node_11,
  MR_Word * RegVar_12,
  MR_Word STATE_VARIABLE_NameToVar_0_17,
  MR_Word * STATE_VARIABLE_NameToVar_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3(
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
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2(
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

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Graph_19,
  MR_Word ResurRenamingProc_20,
  MR_Word IteRenamingProc_21,
  MR_Word ActualRegionArgProc_22,
  MR_Word RegionInstructionProc_23,
  MR_Word ResurRenamingAnnoProc_24,
  MR_Word IteRenamingAnnoProc_25,
  MR_Word Switch_26,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_NameToVar_0_61,
  MR_Word * STATE_VARIABLE_NameToVar_62,
  MR_Word STATE_VARIABLE_VarSet_0_63,
  MR_Word * STATE_VARIABLE_VarSet_64,
  MR_Word STATE_VARIABLE_VarTypes_0_65,
  MR_Word * STATE_VARIABLE_VarTypes_66);

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
  MR_Word STATE_VARIABLE_NameToVarTable_0_56,
  MR_Word * STATE_VARIABLE_NameToVarTable_57,
  MR_Word STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * STATE_VARIABLE_ModuleInfo_59);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(
  MR_Word ModuleInfo_25,
  MR_Word PredInfo_26,
  MR_Word Graph_27,
  MR_Word FormalRegionArgProc_28,
  MR_Word ActualRegionArgProc_29,
  MR_Word ResurRenamingProc_30,
  MR_Word IteRenamingProc_31,
  MR_Word RegionInstructionProc_32,
  MR_Word ResurRenamingAnnoProc_33,
  MR_Word IteRenamingAnnoProc_34,
  MR_Word STATE_VARIABLE_VarSet_0_57,
  MR_Word * STATE_VARIABLE_VarSet_58,
  MR_Word STATE_VARIABLE_VarTypes_0_59,
  MR_Word * STATE_VARIABLE_VarTypes_60,
  MR_Word STATE_VARIABLE_HeadVars_0_61,
  MR_Word * STATE_VARIABLE_HeadVars_62,
  MR_Word STATE_VARIABLE_ActualArgModes_0_63,
  MR_Word * STATE_VARIABLE_ActualArgModes_64,
  MR_Word STATE_VARIABLE_Goal_0_65,
  MR_Word * STATE_VARIABLE_Goal_66,
  MR_Word STATE_VARIABLE_NameToVar_0_67,
  MR_Word * STATE_VARIABLE_NameToVar_68,
  MR_Word STATE_VARIABLE_ProcInfo_0_69,
  MR_Word * STATE_VARIABLE_ProcInfo_70);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2(
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
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1(
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
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word Graph_18,
  MR_Word ResurRenamingProc_19,
  MR_Word IteRenamingProc_20,
  MR_Word ActualRegionArgProc_21,
  MR_Word RegionInstructionProc_22,
  MR_Word ResurRenamingAnnoProc_23,
  MR_Word IteRenamingAnnoProc_24,
  MR_Word STATE_VARIABLE_Goal_0_49,
  MR_Word * STATE_VARIABLE_Goal_50,
  MR_Word STATE_VARIABLE_NameToVar_0_51,
  MR_Word * STATE_VARIABLE_NameToVar_52,
  MR_Word STATE_VARIABLE_VarSet_0_53,
  MR_Word * STATE_VARIABLE_VarSet_54,
  MR_Word STATE_VARIABLE_VarTypes_0_55,
  MR_Word * STATE_VARIABLE_VarTypes_56);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word Graph_18,
  MR_Word ResurRenamingProc_19,
  MR_Word IteRenamingProc_20,
  MR_Word ActualRegionArgProc_21,
  MR_Word RegionInstructionProc_22,
  MR_Word ResurRenamingAnnoProc_23,
  MR_Word IteRenamingAnnoProc_24,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_NameToVar_0_83,
  MR_Word * STATE_VARIABLE_NameToVar_84,
  MR_Word STATE_VARIABLE_VarSet_0_85,
  MR_Word * STATE_VARIABLE_VarSet_86,
  MR_Word STATE_VARIABLE_VarTypes_0_87,
  MR_Word * STATE_VARIABLE_VarTypes_88);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1(
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
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(
  MR_Word ResurRenamingAnnoProc_12,
  MR_Word ProgPoint_13,
  MR_Word IteRenaming_14,
  MR_Word STATE_VARIABLE_NameToVar_0_20,
  MR_Word * STATE_VARIABLE_NameToVar_21,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word STATE_VARIABLE_Conjs_0_26,
  MR_Word * STATE_VARIABLE_Conjs_27);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1(
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
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(
  MR_Word IteRenamingAnnoProc_11,
  MR_Word ProgPoint_12,
  MR_Word STATE_VARIABLE_NameToVar_0_18,
  MR_Word * STATE_VARIABLE_NameToVar_19,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_IteRenamingAssignments_0_24,
  MR_Word * STATE_VARIABLE_IteRenamingAssignments_25);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(
  MR_Word ResurRenamingProc_6,
  MR_Word IteRenamingProc_7,
  MR_Word ProgPoint_8,
  MR_Word * ResurRenaming_9,
  MR_Word * IteRenaming_10);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Graph_2,
  MR_Word ResurRenaming_3,
  MR_Word IteRenaming_4,
  MR_Word ActualRegionArgProc_5,
  MR_Word ProgPoint_6,
  MR_Word STATE_VARIABLE_GoalExpr_0_7,
  MR_Word * STATE_VARIABLE_GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_9,
  MR_Word * STATE_VARIABLE_GoalInfo_10,
  MR_Word STATE_VARIABLE_NameToVar_0_11,
  MR_Word * STATE_VARIABLE_NameToVar_12,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14,
  MR_Word STATE_VARIABLE_VarTypes_0_15,
  MR_Word * STATE_VARIABLE_VarTypes_16);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Graph_2,
  MR_Word ResurRenaming_3,
  MR_Word IteRenaming_4,
  MR_Word STATE_VARIABLE_Unification_0_5,
  MR_Word * STATE_VARIABLE_Unification_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word * HeadVar__12_12);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(
  MR_String Name0_11,
  MR_Word ResurRenaming_12,
  MR_Word IteRenaming_13,
  MR_Word * RegVar_14,
  MR_Word STATE_VARIABLE_NameToVar_0_21,
  MR_Word * STATE_VARIABLE_NameToVar_22,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_VarTypes_0_25,
  MR_Word * STATE_VARIABLE_VarTypes_26);

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(
  MR_String Name_9,
  MR_Word * RegVar_10,
  MR_Word STATE_VARIABLE_NameToVar_0_15,
  MR_Word * STATE_VARIABLE_NameToVar_16,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word STATE_VARIABLE_VarTypes_0_19,
  MR_Word * STATE_VARIABLE_VarTypes_20);

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


static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_1[9][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_4[2][16];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_5[1][6];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_6[1][17];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_7[1][14];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_8[2][12];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_9[1][13];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_10[1][19];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_11[1][20];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_12[1][5];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_13[2][1];

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_14[1][7];




static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__rbmm__region_transformation_scalar_common_13[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__rbmm__region_transformation_scalar_common_13[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_3[1][9] = {
  /* row 0 */
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

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_4[2][16] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_6[1][17] = {
  /* row 0 */
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
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_7[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_8[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_10[1][19] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 16)),
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
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_11[1][20] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 17)),
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
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_12[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_13[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "resurrection renaming annotation"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "ite renaming annotation"))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_transformation_scalar_common_14[1][7] = {
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
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
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
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
  {
    (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
  }
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_transformation__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_transformation__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_transformation__transform_hlds__rbmm__region_transformation__type_ctor_info_name_to_prog_var_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_transformation",
  (MR_String) "name_to_prog_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_transformation",
  (MR_String) "name_to_prog_var_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_transformation__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__651__1_2_p_0(
  MR_Word OtherConsIds_28,
  MR_Word HeadVar__2_70)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[6]), ((MR_Box) (OtherConsIds_28)), ((MR_Box) (HeadVar__2_70)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word PredInfo0_8;
    MR_Word PPId_9;
    MR_Word PredInfo_10;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, PredId_5, &PredInfo0_8);
    {
      PPId_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PPId_9, 0) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(0), PPId_9, 1) = ((MR_Box) (ProcId_6));
    }
    check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_0_11, PPId_9, PredInfo0_8, &PredInfo_10);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_5, PredInfo_10, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_12;

    transform_hlds__rbmm__region_transformation__recheck_purity_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredInfo_6;
    MR_Word ProcIds_7;
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
    ProcIds_7 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (PredId_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_Word PPId_8;
    MR_Word PredInfo_9;
    MR_Word ProcInfo0_10;
    MR_Word ProcInfo_11;
    MR_Word STATE_VARIABLE_ModuleInfo_15_15;

    {
      PPId_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PPId_8, 0) = ((MR_Box) (PredId_5));
      MR_hl_field(MR_mktag(0), PPId_8, 1) = ((MR_Box) (ProcId_6));
    }
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_12, PPId_8, &PredInfo_9, &ProcInfo0_10);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, ProcInfo0_10, &ProcInfo_11, STATE_VARIABLE_ModuleInfo_0_12, &STATE_VARIABLE_ModuleInfo_15_15);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_8, PredInfo_9, ProcInfo_11, STATE_VARIABLE_ModuleInfo_15_15, STATE_VARIABLE_ModuleInfo_13);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_13;

    transform_hlds__rbmm__region_transformation__update_instmap_delta_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_13));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredInfo_6;
    MR_Word ProcIds_7;
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
    ProcIds_7 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_14[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (PredId_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(
  MR_Word Annotation_10,
  MR_Word STATE_VARIABLE_NameToVar_0_23,
  MR_Word * STATE_VARIABLE_NameToVar_24,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_VarTypes_0_27,
  MR_Word * STATE_VARIABLE_VarTypes_28,
  MR_Word Conjs0_14,
  MR_Word * Conjs_15)
{
  switch (MR_tag((MR_Word) Annotation_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.ite_renaming_annotation_to_assignment\'/9", (MR_String) "annotation is not assignment");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Right_18 = ((MR_String) ((MR_hl_field(MR_mktag(2), Annotation_10, (MR_Integer) 0))));
        MR_String Left_19 = ((MR_String) ((MR_hl_field(MR_mktag(2), Annotation_10, (MR_Integer) 1))));
        MR_Word LeftRegVar_20;
        MR_Word RightRegVar_21;
        MR_Word AssignmentGoal_22;
        MR_Word STATE_VARIABLE_NameToVar_29_29;
        MR_Word STATE_VARIABLE_VarSet_30_30;
        MR_Word STATE_VARIABLE_VarTypes_31_31;
        MR_Word Var_36;
        MR_Word AssignmentExpr_45;
        MR_Word NonLocals_46;
        MR_Word InstmapDelta_47;
        MR_Word AssignmentInfo_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(Left_19, &LeftRegVar_20, STATE_VARIABLE_NameToVar_0_23, &STATE_VARIABLE_NameToVar_29_29, STATE_VARIABLE_VarSet_0_25, &STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarTypes_0_27, &STATE_VARIABLE_VarTypes_31_31);
        transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(Right_18, &RightRegVar_21, STATE_VARIABLE_NameToVar_29_29, STATE_VARIABLE_NameToVar_24, STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_VarTypes_31_31, STATE_VARIABLE_VarTypes_28);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (RightRegVar_21));
        }
        Var_52 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_53 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_54 = parse_tree__prog_mode__ground_inst_0_f_0();
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Var_54));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (LeftRegVar_20));
          MR_hl_field(MR_mktag(2), Var_55, 1) = ((MR_Box) (RightRegVar_21));
        }
        {
          AssignmentExpr_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AssignmentExpr_45, 0) = ((MR_Box) (LeftRegVar_20));
          MR_hl_field(MR_mktag(1), AssignmentExpr_45, 1) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), AssignmentExpr_45, 2) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), AssignmentExpr_45, 3) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), AssignmentExpr_45, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[8]));
        }
        NonLocals_46 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        InstmapDelta_47 = hlds__instmap__instmap_delta_bind_var_1_f_0(LeftRegVar_20);
        hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_46, InstmapDelta_47, (MR_Integer) 0, (MR_Integer) 0, &AssignmentInfo_48);
        {
          AssignmentGoal_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AssignmentGoal_22, 0) = ((MR_Box) (AssignmentExpr_45));
          MR_hl_field(MR_mktag(0), AssignmentGoal_22, 1) = ((MR_Box) (AssignmentInfo_48));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (AssignmentGoal_22));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Conjs_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_14, Var_36);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(
  MR_Word IteRenaming_11,
  MR_Word Annotation_12,
  MR_Word STATE_VARIABLE_NameToVar_0_25,
  MR_Word * STATE_VARIABLE_NameToVar_26,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28,
  MR_Word STATE_VARIABLE_VarTypes_0_29,
  MR_Word * STATE_VARIABLE_VarTypes_30,
  MR_Word Conjs0_16,
  MR_Word * Conjs_17)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Annotation_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.resur_renaming_annotation_to_assignment\'/10", (MR_String) "annotation is not assigment");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Right_20 = ((MR_String) ((MR_hl_field(MR_mktag(2), Annotation_12, (MR_Integer) 0))));
          MR_String Left_21 = ((MR_String) ((MR_hl_field(MR_mktag(2), Annotation_12, (MR_Integer) 1))));
          MR_Word LeftRegVar_22;
          MR_Word RightRegVar_23;
          MR_Word AssignmentGoal_24;
          MR_Word STATE_VARIABLE_NameToVar_31_31;
          MR_Word STATE_VARIABLE_VarSet_32_32;
          MR_Word STATE_VARIABLE_VarTypes_33_33;
          MR_Word Var_38;
          MR_String Name_56;
          MR_Word AssignmentExpr_67;
          MR_Word NonLocals_68;
          MR_Word InstmapDelta_69;
          MR_Word AssignmentInfo_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word ResurNameList_55;
          MR_Box conv0_ResurNameList_55;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), IteRenaming_11, ((MR_Box) (Left_21)), &conv0_ResurNameList_55);
          if (succeeded)
          {
            ResurNameList_55 = ((MR_Word) (conv0_ResurNameList_55));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Box conv1_Name_56;

            conv1_Name_56 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_55);
            Name_56 = ((MR_String) (conv1_Name_56));
          }
          else
            Name_56 = Left_21;
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(Name_56, &LeftRegVar_22, STATE_VARIABLE_NameToVar_0_25, &STATE_VARIABLE_NameToVar_31_31, STATE_VARIABLE_VarSet_0_27, &STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_VarTypes_0_29, &STATE_VARIABLE_VarTypes_33_33);
          transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(Right_20, &RightRegVar_23, STATE_VARIABLE_NameToVar_31_31, STATE_VARIABLE_NameToVar_26, STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_VarSet_28, STATE_VARIABLE_VarTypes_33_33, STATE_VARIABLE_VarTypes_30);
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (RightRegVar_23));
          }
          Var_74 = parse_tree__prog_mode__ground_inst_0_f_0();
          Var_75 = parse_tree__prog_mode__ground_inst_0_f_0();
          Var_76 = parse_tree__prog_mode__ground_inst_0_f_0();
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Var_76));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) (LeftRegVar_22));
            MR_hl_field(MR_mktag(2), Var_77, 1) = ((MR_Box) (RightRegVar_23));
          }
          {
            AssignmentExpr_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AssignmentExpr_67, 0) = ((MR_Box) (LeftRegVar_22));
            MR_hl_field(MR_mktag(1), AssignmentExpr_67, 1) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), AssignmentExpr_67, 2) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(1), AssignmentExpr_67, 3) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), AssignmentExpr_67, 4) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_1[7]));
          }
          NonLocals_68 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          InstmapDelta_69 = hlds__instmap__instmap_delta_bind_var_1_f_0(LeftRegVar_22);
          hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_68, InstmapDelta_69, (MR_Integer) 0, (MR_Integer) 0, &AssignmentInfo_70);
          {
            AssignmentGoal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AssignmentGoal_24, 0) = ((MR_Box) (AssignmentExpr_67));
            MR_hl_field(MR_mktag(0), AssignmentGoal_24, 1) = ((MR_Box) (AssignmentInfo_70));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (AssignmentGoal_24));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *Conjs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_16, Var_38);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word ResurRenaming_16,
  MR_Word IteRenaming_17,
  MR_Word RegionInstruction_18,
  MR_Word STATE_VARIABLE_NameToVar_0_29,
  MR_Word * STATE_VARIABLE_NameToVar_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word Conjs0_22,
  MR_Word * Conjs_23)
{
  {
    MR_Word CallGoal_26;
    MR_Word Var_63;

    switch (MR_tag((MR_Word) RegionInstruction_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String RegionName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), RegionInstruction_18, (MR_Integer) 0))));
          MR_Word RegionVar_25;
          MR_Word Var_53;
          MR_Word Var_59;
          MR_Word Var_61;

          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(RegionName_24, ResurRenaming_16, IteRenaming_17, &RegionVar_25, STATE_VARIABLE_NameToVar_0_29, STATE_VARIABLE_NameToVar_30, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_VarTypes_0_33, STATE_VARIABLE_VarTypes_34);
          Var_53 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (RegionVar_25));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, Var_53, (MR_String) "create_region", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_59, (MR_Word) ((MR_Unsigned) 0U), Var_61, Context_15, &CallGoal_26);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_40;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_String RegionName_65 = ((MR_String) ((MR_hl_field(MR_mktag(1), RegionInstruction_18, (MR_Integer) 0))));
          MR_Word RegionVar_66;

          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(RegionName_65, ResurRenaming_16, IteRenaming_17, &RegionVar_66, STATE_VARIABLE_NameToVar_0_29, STATE_VARIABLE_NameToVar_30, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_VarTypes_0_33, STATE_VARIABLE_VarTypes_34);
          Var_40 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (RegionVar_66));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_48 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, Var_40, (MR_String) "remove_region", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_46, (MR_Word) ((MR_Unsigned) 0U), Var_48, Context_15, &CallGoal_26);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj_before\'/13", (MR_String) "neither create nor remove instruction");
          return;
        }
        break;
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (CallGoal_26));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Conjs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_22, Var_63);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word ResurRenaming_16,
  MR_Word IteRenaming_17,
  MR_Word RegionInstruction_18,
  MR_Word STATE_VARIABLE_NameToVar_0_29,
  MR_Word * STATE_VARIABLE_NameToVar_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word Conjs0_22,
  MR_Word * Conjs_23)
{
  {
    MR_Word CallGoal_26;
    MR_Word Var_63;

    switch (MR_tag((MR_Word) RegionInstruction_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String RegionName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), RegionInstruction_18, (MR_Integer) 0))));
          MR_Word RegionVar_25;
          MR_Word Var_53;
          MR_Word Var_59;
          MR_Word Var_61;

          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(RegionName_24, ResurRenaming_16, IteRenaming_17, &RegionVar_25, STATE_VARIABLE_NameToVar_0_29, STATE_VARIABLE_NameToVar_30, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_VarTypes_0_33, STATE_VARIABLE_VarTypes_34);
          Var_53 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (RegionVar_25));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, Var_53, (MR_String) "create_region", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_59, (MR_Word) ((MR_Unsigned) 0U), Var_61, Context_15, &CallGoal_26);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_40;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_String RegionName_65 = ((MR_String) ((MR_hl_field(MR_mktag(1), RegionInstruction_18, (MR_Integer) 0))));
          MR_Word RegionVar_66;

          transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(RegionName_65, ResurRenaming_16, IteRenaming_17, &RegionVar_66, STATE_VARIABLE_NameToVar_0_29, STATE_VARIABLE_NameToVar_30, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_VarTypes_0_33, STATE_VARIABLE_VarTypes_34);
          Var_40 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (RegionVar_66));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_48 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, Var_40, (MR_String) "remove_region", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_46, (MR_Word) ((MR_Unsigned) 0U), Var_48, Context_15, &CallGoal_26);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_instruction_to_conj\'/13", (MR_String) "neither create nor remove instruction");
          return;
        }
        break;
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (CallGoal_26));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Conjs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_22, Var_63);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_before_10_p_0(
  MR_String Name0_11,
  MR_Word ResurRenaming_12,
  MR_Word IteRenaming_13,
  MR_Word * RegVar_14,
  MR_Word STATE_VARIABLE_NameToVar_0_21,
  MR_Word * STATE_VARIABLE_NameToVar_22,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_VarTypes_0_25,
  MR_Word * STATE_VARIABLE_VarTypes_26)
{
  {
    MR_bool succeeded;
    MR_String Name_19;
    MR_Word ResurNameList_18;
    MR_Box conv0_ResurNameList_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), ResurRenaming_12, ((MR_Box) (Name0_11)), &conv0_ResurNameList_18);
    if (succeeded)
    {
      ResurNameList_18 = ((MR_Word) (conv0_ResurNameList_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv1_Name_19;

      conv1_Name_19 = mercury__list__det_index0_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_18, (MR_Integer) 0);
      Name_19 = ((MR_String) (conv1_Name_19));
    }
    else
    {
      MR_Word IteNameList_20;
      MR_Box conv2_IteNameList_20;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), IteRenaming_13, ((MR_Box) (Name0_11)), &conv2_IteNameList_20);
      if (succeeded)
      {
        IteNameList_20 = ((MR_Word) (conv2_IteNameList_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Box conv3_Name_19;

        conv3_Name_19 = mercury__list__det_index0_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IteNameList_20, (MR_Integer) 0);
        Name_19 = ((MR_String) (conv3_Name_19));
      }
      else
        Name_19 = Name0_11;
    }
    transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(Name_19, RegVar_14, STATE_VARIABLE_NameToVar_0_21, STATE_VARIABLE_NameToVar_22, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_VarTypes_0_25, STATE_VARIABLE_VarTypes_26);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(
  MR_Word Graph_12,
  MR_Word ResurRenaming_13,
  MR_Word IteRenaming_14,
  MR_Word Node_15,
  MR_Word * RegVar_16,
  MR_Word STATE_VARIABLE_NameToVar_0_21,
  MR_Word * STATE_VARIABLE_NameToVar_22,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_VarTypes_0_25,
  MR_Word * STATE_VARIABLE_VarTypes_26)
{
  {
    MR_bool succeeded;
    MR_String RegName_20;
    MR_String Name_44;
    MR_Word ResurNameList_43;
    MR_Box conv0_ResurNameList_43;

    RegName_20 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_12, Node_15);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), ResurRenaming_13, ((MR_Box) (RegName_20)), &conv0_ResurNameList_43);
    if (succeeded)
    {
      ResurNameList_43 = ((MR_Word) (conv0_ResurNameList_43));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv1_Name_44;

      mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_43, &conv1_Name_44);
      Name_44 = ((MR_String) (conv1_Name_44));
    }
    else
    {
      MR_Word IteNameList_45;
      MR_Box conv2_IteNameList_45;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), IteRenaming_14, ((MR_Box) (RegName_20)), &conv2_IteNameList_45);
      if (succeeded)
      {
        IteNameList_45 = ((MR_Word) (conv2_IteNameList_45));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Box conv3_Name_44;

        mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IteNameList_45, &conv3_Name_44);
        Name_44 = ((MR_String) (conv3_Name_44));
      }
      else
        Name_44 = RegName_20;
    }
    transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(Name_44, RegVar_16, STATE_VARIABLE_NameToVar_0_21, STATE_VARIABLE_NameToVar_22, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_VarTypes_0_25, STATE_VARIABLE_VarTypes_26);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(
  MR_Word Graph_10,
  MR_Word Node_11,
  MR_Word * RegVar_12,
  MR_Word STATE_VARIABLE_NameToVar_0_17,
  MR_Word * STATE_VARIABLE_NameToVar_18,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22)
{
  {
    MR_String RegName_16;

    RegName_16 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_10, Node_11);
    transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(RegName_16, RegVar_12, STATE_VARIABLE_NameToVar_0_17, STATE_VARIABLE_NameToVar_18, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20, STATE_VARIABLE_VarTypes_0_21, STATE_VARIABLE_VarTypes_22);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3(
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
    MR_Word conv12_STATE_VARIABLE_NameToVar_30;
    MR_Word conv11_STATE_VARIABLE_VarSet_32;
    MR_Word conv10_STATE_VARIABLE_VarTypes_34;
    MR_Word conv9_Conjs_23;

    transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_NameToVar_30, ((MR_Word) (wrapper_arg_4)), &conv11_STATE_VARIABLE_VarSet_32, ((MR_Word) (wrapper_arg_6)), &conv10_STATE_VARIABLE_VarTypes_34, ((MR_Word) (wrapper_arg_8)), &conv9_Conjs_23);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_NameToVar_30));
    *wrapper_arg_5 = ((MR_Box) (conv11_STATE_VARIABLE_VarSet_32));
    *wrapper_arg_7 = ((MR_Box) (conv10_STATE_VARIABLE_VarTypes_34));
    *wrapper_arg_9 = ((MR_Box) (conv9_Conjs_23));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2(
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
    MR_Word conv4_STATE_VARIABLE_NameToVar_30;
    MR_Word conv3_STATE_VARIABLE_VarSet_32;
    MR_Word conv2_STATE_VARIABLE_VarTypes_34;
    MR_Word conv1_Conjs_23;

    transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_NameToVar_30, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_VarSet_32, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_VarTypes_34, ((MR_Word) (wrapper_arg_8)), &conv1_Conjs_23);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_NameToVar_30));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_VarSet_32));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_VarTypes_34));
    *wrapper_arg_9 = ((MR_Box) (conv1_Conjs_23));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__rbmm__region_transformation__IntroducedFrom__pred__region_transform_case__651__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Graph_19,
  MR_Word ResurRenamingProc_20,
  MR_Word IteRenamingProc_21,
  MR_Word ActualRegionArgProc_22,
  MR_Word RegionInstructionProc_23,
  MR_Word ResurRenamingAnnoProc_24,
  MR_Word IteRenamingAnnoProc_25,
  MR_Word Switch_26,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_NameToVar_0_61,
  MR_Word * STATE_VARIABLE_NameToVar_62,
  MR_Word STATE_VARIABLE_VarSet_0_63,
  MR_Word * STATE_VARIABLE_VarSet_64,
  MR_Word STATE_VARIABLE_VarTypes_0_65,
  MR_Word * STATE_VARIABLE_VarTypes_66)
{
  {
    MR_bool succeeded;
    MR_Word MainConsId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__10_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__10_10, (MR_Integer) 1))));
    MR_Word RemovedGoal_54;
    MR_Word FlatConjs_56;
    MR_Word ConjsInfo_58;
    MR_Word STATE_VARIABLE_Goal_0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__10_10, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Goal_60;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_NameToVar_86_86;
    MR_Word STATE_VARIABLE_VarSet_87_87;
    MR_Word STATE_VARIABLE_VarTypes_88_88;
    MR_Word STATE_VARIABLE_Goal_94_94;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_102;
    MR_Word Info_42;
    MR_Word Var_72;

    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (OtherConsIds_28));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_case\'/17", (MR_String) "NYI: multi-cons-id cases");
    switch (MR_tag((MR_Word) MainConsId_27)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MainConsId_27, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), MainConsId_27, (MR_Integer) 2))));

              succeeded = (Var_71 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 5:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 15:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 16:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 17:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    if (succeeded)
    {
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Switch_26, (MR_Integer) 0))));
      Info_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Switch_26, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_72)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_72, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word ProgPoint_43;
      MR_Word Context_44;
      MR_Word ResurRenaming_46;
      MR_Word IteRenaming_47;
      MR_Word IteRenamingAssignments_48;
      MR_Word Conjs2_52;
      MR_Word Conjs_53;
      MR_Word STATE_VARIABLE_NameToVar_73_73;
      MR_Word STATE_VARIABLE_VarSet_74_74;
      MR_Word STATE_VARIABLE_VarTypes_75_75;
      MR_Word STATE_VARIABLE_NameToVar_83_83;
      MR_Word STATE_VARIABLE_VarSet_84_84;
      MR_Word STATE_VARIABLE_VarTypes_85_85;
      MR_Word Var_89;
      MR_Word Before_49;
      MR_Word After_50;
      MR_Word Var_77;
      MR_Box conv0_Var_77;

      ProgPoint_43 = transform_hlds__smm_common__program_point_init_1_f_0(Info_42);
      Context_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_43, (MR_Integer) 0))));
      transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(ResurRenamingProc_20, IteRenamingProc_21, ProgPoint_43, &ResurRenaming_46, &IteRenaming_47);
      transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(IteRenamingAnnoProc_25, ProgPoint_43, STATE_VARIABLE_NameToVar_0_61, &STATE_VARIABLE_NameToVar_73_73, STATE_VARIABLE_VarSet_0_63, &STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_VarTypes_0_65, &STATE_VARIABLE_VarTypes_75_75, (MR_Word) ((MR_Unsigned) 0U), &IteRenamingAssignments_48);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), RegionInstructionProc_23, ((MR_Box) (ProgPoint_43)), &conv0_Var_77);
      if (succeeded)
      {
        Var_77 = ((MR_Word) (conv0_Var_77));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Before_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_77, (MR_Integer) 0))));
        After_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_77, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Conjs1_51;
        MR_Word Var_78;
        MR_Word STATE_VARIABLE_NameToVar_79_79;
        MR_Word STATE_VARIABLE_VarSet_80_80;
        MR_Word STATE_VARIABLE_VarTypes_81_81;
        MR_Word Var_82;
        MR_Box conv8_STATE_VARIABLE_NameToVar_79_79;
        MR_Box conv7_STATE_VARIABLE_VarSet_80_80;
        MR_Box conv6_STATE_VARIABLE_VarTypes_81_81;
        MR_Box conv5_Conjs1_51;
        MR_Box conv16_STATE_VARIABLE_NameToVar_83_83;
        MR_Box conv15_STATE_VARIABLE_VarSet_84_84;
        MR_Box conv14_STATE_VARIABLE_VarTypes_85_85;
        MR_Box conv13_Conjs2_52;

        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_2));
          MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ModuleInfo_18));
          MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (Context_44));
          MR_hl_field(MR_mktag(0), Var_78, 5) = ((MR_Box) (ResurRenaming_46));
          MR_hl_field(MR_mktag(0), Var_78, 6) = ((MR_Box) (IteRenaming_47));
        }
        mercury__list__foldl4_10_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[5]), Var_78, Before_49, ((MR_Box) (STATE_VARIABLE_NameToVar_73_73)), &conv8_STATE_VARIABLE_NameToVar_79_79, ((MR_Box) (STATE_VARIABLE_VarSet_74_74)), &conv7_STATE_VARIABLE_VarSet_80_80, ((MR_Box) (STATE_VARIABLE_VarTypes_75_75)), &conv6_STATE_VARIABLE_VarTypes_81_81, ((MR_Box) (IteRenamingAssignments_48)), &conv5_Conjs1_51);
        STATE_VARIABLE_NameToVar_79_79 = ((MR_Word) (conv8_STATE_VARIABLE_NameToVar_79_79));
        STATE_VARIABLE_VarSet_80_80 = ((MR_Word) (conv7_STATE_VARIABLE_VarSet_80_80));
        STATE_VARIABLE_VarTypes_81_81 = ((MR_Word) (conv6_STATE_VARIABLE_VarTypes_81_81));
        Conjs1_51 = ((MR_Word) (conv5_Conjs1_51));
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0_3));
          MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (ModuleInfo_18));
          MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (Context_44));
          MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (ResurRenaming_46));
          MR_hl_field(MR_mktag(0), Var_82, 6) = ((MR_Box) (IteRenaming_47));
        }
        mercury__list__foldl4_10_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[5]), Var_82, After_50, ((MR_Box) (STATE_VARIABLE_NameToVar_79_79)), &conv16_STATE_VARIABLE_NameToVar_83_83, ((MR_Box) (STATE_VARIABLE_VarSet_80_80)), &conv15_STATE_VARIABLE_VarSet_84_84, ((MR_Box) (STATE_VARIABLE_VarTypes_81_81)), &conv14_STATE_VARIABLE_VarTypes_85_85, ((MR_Box) (Conjs1_51)), &conv13_Conjs2_52);
        STATE_VARIABLE_NameToVar_83_83 = ((MR_Word) (conv16_STATE_VARIABLE_NameToVar_83_83));
        STATE_VARIABLE_VarSet_84_84 = ((MR_Word) (conv15_STATE_VARIABLE_VarSet_84_84));
        STATE_VARIABLE_VarTypes_85_85 = ((MR_Word) (conv14_STATE_VARIABLE_VarTypes_85_85));
        Conjs2_52 = ((MR_Word) (conv13_Conjs2_52));
      }
      else
      {
        Conjs2_52 = IteRenamingAssignments_48;
        STATE_VARIABLE_VarTypes_85_85 = STATE_VARIABLE_VarTypes_75_75;
        STATE_VARIABLE_VarSet_84_84 = STATE_VARIABLE_VarSet_74_74;
        STATE_VARIABLE_NameToVar_83_83 = STATE_VARIABLE_NameToVar_73_73;
      }
      transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(ResurRenamingAnnoProc_24, ProgPoint_43, IteRenaming_47, STATE_VARIABLE_NameToVar_83_83, &STATE_VARIABLE_NameToVar_86_86, STATE_VARIABLE_VarSet_84_84, &STATE_VARIABLE_VarSet_87_87, STATE_VARIABLE_VarTypes_85_85, &STATE_VARIABLE_VarTypes_88_88, Conjs2_52, &Conjs_53);
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_89, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_89, 2) = ((MR_Box) (Conjs_53));
      }
      {
        RemovedGoal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RemovedGoal_54, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), RemovedGoal_54, 1) = ((MR_Box) (Info_42));
      }
    }
    else
    {
      MR_Word Info_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Switch_26, (MR_Integer) 1))));

      {
        RemovedGoal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RemovedGoal_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__rbmm__region_transformation_scalar_common_2[12])));
        MR_hl_field(MR_mktag(0), RemovedGoal_54, 1) = ((MR_Box) (Info_104));
      }
      STATE_VARIABLE_VarTypes_88_88 = STATE_VARIABLE_VarTypes_0_65;
      STATE_VARIABLE_VarSet_87_87 = STATE_VARIABLE_VarSet_0_63;
      STATE_VARIABLE_NameToVar_86_86 = STATE_VARIABLE_NameToVar_0_61;
    }
    transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(ModuleInfo_18, Graph_19, ResurRenamingProc_20, IteRenamingProc_21, ActualRegionArgProc_22, RegionInstructionProc_23, ResurRenamingAnnoProc_24, IteRenamingAnnoProc_25, STATE_VARIABLE_Goal_0_59, &STATE_VARIABLE_Goal_94_94, STATE_VARIABLE_NameToVar_86_86, STATE_VARIABLE_NameToVar_62, STATE_VARIABLE_VarSet_87_87, STATE_VARIABLE_VarSet_64, STATE_VARIABLE_VarTypes_88_88, STATE_VARIABLE_VarTypes_66);
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (STATE_VARIABLE_Goal_94_94));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (RemovedGoal_54));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
    }
    hlds__goal_util__flatten_conj_2_p_0(Var_98, &FlatConjs_56);
    ConjsInfo_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Switch_26, (MR_Integer) 1))));
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_102, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_102, 2) = ((MR_Box) (FlatConjs_56));
    }
    {
      STATE_VARIABLE_Goal_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_60, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_60, 1) = ((MR_Box) (ConjsInfo_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__11_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_Goal_60));
    }
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
  MR_Word STATE_VARIABLE_NameToVarTable_0_56,
  MR_Word * STATE_VARIABLE_NameToVarTable_57,
  MR_Word STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * STATE_VARIABLE_ModuleInfo_59)
{
  {
    MR_bool succeeded;
    MR_Word PPId_27;
    MR_Word PredInfo0_28;
    MR_Word ProcInfo0_29;
    MR_Word ProcInfo1_30;
    MR_Word VarSet0_31;
    MR_Word VarTypes0_32;
    MR_Word HeadVars0_33;
    MR_Word ActualArgModes0_34;
    MR_Word Goal0_35;
    MR_Word Graph_36;
    MR_Word FormalRegionArgProc_38;
    MR_Word ActualRegionArgProc_39;
    MR_Word ResurRenamingProc_41;
    MR_Word ResurRenamingAnnoProc_42;
    MR_Word IteRenamingProc_44;
    MR_Word IteRenamingAnnoProc_45;
    MR_Word RegionInstructionProc_46;
    MR_Word NameToVar0_47;
    MR_Word NameToVar_53;
    MR_Word ProcInfo2_54;
    MR_Word ProcInfo_55;
    MR_Word Var_60;
    MR_Box conv0_Var_60;
    MR_Box conv1_FormalRegionArgProc_38;
    MR_Box conv2_ActualRegionArgProc_39;
    MR_Word ResurRenamingProc0_40;
    MR_Box conv3_ResurRenamingProc0_40;
    MR_Word IteRenamingProc0_43;
    MR_Box conv5_IteRenamingProc0_43;
    MR_Box conv7_RegionInstructionProc_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    {
      PPId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PPId_27, 0) = ((MR_Box) (PredId_23));
      MR_hl_field(MR_mktag(0), PPId_27, 1) = ((MR_Box) (ProcId_24));
    }
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_58, PPId_27, &PredInfo0_28, &ProcInfo0_29);
    hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(STATE_VARIABLE_ModuleInfo_0_58, ProcInfo0_29, &ProcInfo1_30);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo1_30, &VarSet0_31);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo1_30, &VarTypes0_32);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo1_30, &HeadVars0_33);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo1_30, &ActualArgModes0_34);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo1_30, &Goal0_35);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_15, ((MR_Box) (PPId_27)), &conv0_Var_60);
    Var_60 = ((MR_Word) (conv0_Var_60));
    Graph_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), FormalRegionArgTable_16, ((MR_Box) (PPId_27)), &conv1_FormalRegionArgProc_38);
    FormalRegionArgProc_38 = ((MR_Word) (conv1_FormalRegionArgProc_38));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[2]), ActualRegionArgTable_17, ((MR_Box) (PPId_27)), &conv2_ActualRegionArgProc_39);
    ActualRegionArgProc_39 = ((MR_Word) (conv2_ActualRegionArgProc_39));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[4]), ResurRenamingTable_18, ((MR_Box) (PPId_27)), &conv3_ResurRenamingProc0_40);
    if (succeeded)
    {
      ResurRenamingProc0_40 = ((MR_Word) (conv3_ResurRenamingProc0_40));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv4_ResurRenamingAnnoProc_42;

      ResurRenamingProc_41 = ResurRenamingProc0_40;
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[5]), ResurRenamingAnnoTable_21, ((MR_Box) (PPId_27)), &conv4_ResurRenamingAnnoProc_42);
      ResurRenamingAnnoProc_42 = ((MR_Word) (conv4_ResurRenamingAnnoProc_42));
    }
    else
    {
      ResurRenamingProc_41 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]));
      ResurRenamingAnnoProc_42 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[4]), IteRenamingTable_19, ((MR_Box) (PPId_27)), &conv5_IteRenamingProc0_43);
    if (succeeded)
    {
      IteRenamingProc0_43 = ((MR_Word) (conv5_IteRenamingProc0_43));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv6_IteRenamingAnnoProc_45;

      IteRenamingProc_44 = IteRenamingProc0_43;
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[5]), IteRenamingAnnoTable_22, ((MR_Box) (PPId_27)), &conv6_IteRenamingAnnoProc_45);
      IteRenamingAnnoProc_45 = ((MR_Word) (conv6_IteRenamingAnnoProc_45));
    }
    else
    {
      IteRenamingProc_44 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]));
      IteRenamingAnnoProc_45 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[6]), RegionInstructionTable_20, ((MR_Box) (PPId_27)), &conv7_RegionInstructionProc_46);
    RegionInstructionProc_46 = ((MR_Word) (conv7_RegionInstructionProc_46));
    NameToVar0_47 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]));
    transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(STATE_VARIABLE_ModuleInfo_0_58, PredInfo0_28, Graph_36, FormalRegionArgProc_38, ActualRegionArgProc_39, ResurRenamingProc_41, IteRenamingProc_44, RegionInstructionProc_46, ResurRenamingAnnoProc_42, IteRenamingAnnoProc_45, VarSet0_31, &Var_48, VarTypes0_32, &Var_49, HeadVars0_33, &Var_50, ActualArgModes0_34, &Var_51, Goal0_35, &Var_52, NameToVar0_47, &NameToVar_53, ProcInfo1_30, &ProcInfo2_54);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo2_54, &ProcInfo_55);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_27, PredInfo0_28, ProcInfo_55, STATE_VARIABLE_ModuleInfo_0_58, STATE_VARIABLE_ModuleInfo_59);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), ((MR_Box) (PPId_27)), ((MR_Box) (NameToVar_53)), STATE_VARIABLE_NameToVarTable_0_56, STATE_VARIABLE_NameToVarTable_57);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_RegVar_12;
    MR_Word conv2_STATE_VARIABLE_NameToVar_18;
    MR_Word conv1_STATE_VARIABLE_VarSet_20;
    MR_Word conv0_STATE_VARIABLE_VarTypes_22;

    transform_hlds__rbmm__region_transformation__node_to_var_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_RegVar_12, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_NameToVar_18, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_VarSet_20, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_VarTypes_22);
    *wrapper_arg_2 = ((MR_Box) (conv3_RegVar_12));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_NameToVar_18));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_20));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_VarTypes_22));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0(
  MR_Word ModuleInfo_25,
  MR_Word PredInfo_26,
  MR_Word Graph_27,
  MR_Word FormalRegionArgProc_28,
  MR_Word ActualRegionArgProc_29,
  MR_Word ResurRenamingProc_30,
  MR_Word IteRenamingProc_31,
  MR_Word RegionInstructionProc_32,
  MR_Word ResurRenamingAnnoProc_33,
  MR_Word IteRenamingAnnoProc_34,
  MR_Word STATE_VARIABLE_VarSet_0_57,
  MR_Word * STATE_VARIABLE_VarSet_58,
  MR_Word STATE_VARIABLE_VarTypes_0_59,
  MR_Word * STATE_VARIABLE_VarTypes_60,
  MR_Word STATE_VARIABLE_HeadVars_0_61,
  MR_Word * STATE_VARIABLE_HeadVars_62,
  MR_Word STATE_VARIABLE_ActualArgModes_0_63,
  MR_Word * STATE_VARIABLE_ActualArgModes_64,
  MR_Word STATE_VARIABLE_Goal_0_65,
  MR_Word * STATE_VARIABLE_Goal_66,
  MR_Word STATE_VARIABLE_NameToVar_0_67,
  MR_Word * STATE_VARIABLE_NameToVar_68,
  MR_Word STATE_VARIABLE_ProcInfo_0_69,
  MR_Word * STATE_VARIABLE_ProcInfo_70)
{
  {
    MR_Word Constants_42;
    MR_Word Deads_43;
    MR_Word Borns_44;
    MR_Word FormalInputNodes_45;
    MR_Word FormalNodes_46;
    MR_Word FormalRegionArgs_47;
    MR_Word InMode_48;
    MR_Word OutMode_49;
    MR_Word InModes_50;
    MR_Word OutModes_51;
    MR_Word PredOrFunc_52;
    MR_Word STATE_VARIABLE_NameToVar_72_72;
    MR_Word STATE_VARIABLE_VarSet_73_73;
    MR_Word STATE_VARIABLE_VarTypes_74_74;
    MR_Word Var_75;
    MR_Integer Var_79;
    MR_Integer Var_80;
    MR_Word STATE_VARIABLE_ProcInfo_93_93;
    MR_Word STATE_VARIABLE_ProcInfo_94_94;
    MR_Word STATE_VARIABLE_ProcInfo_95_95;
    MR_Word STATE_VARIABLE_ProcInfo_96_96;
    MR_Box conv6_STATE_VARIABLE_NameToVar_68;
    MR_Box conv5_STATE_VARIABLE_VarSet_58;
    MR_Box conv4_STATE_VARIABLE_VarTypes_60;

    transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(ModuleInfo_25, Graph_27, ResurRenamingProc_30, IteRenamingProc_31, ActualRegionArgProc_29, RegionInstructionProc_32, ResurRenamingAnnoProc_33, IteRenamingAnnoProc_34, STATE_VARIABLE_Goal_0_65, STATE_VARIABLE_Goal_66, STATE_VARIABLE_NameToVar_0_67, &STATE_VARIABLE_NameToVar_72_72, STATE_VARIABLE_VarSet_0_57, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_VarTypes_0_59, &STATE_VARIABLE_VarTypes_74_74);
    Constants_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormalRegionArgProc_28, (MR_Integer) 0))));
    Deads_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormalRegionArgProc_28, (MR_Integer) 1))));
    Borns_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormalRegionArgProc_28, (MR_Integer) 2))));
    FormalInputNodes_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Constants_42, Deads_43);
    FormalNodes_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), FormalInputNodes_45, Borns_44);
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__annotate_proc_24_p_0_1));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Graph_27));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_75, FormalNodes_46, &FormalRegionArgs_47, ((MR_Box) (STATE_VARIABLE_NameToVar_72_72)), &conv6_STATE_VARIABLE_NameToVar_68, ((MR_Box) (STATE_VARIABLE_VarSet_73_73)), &conv5_STATE_VARIABLE_VarSet_58, ((MR_Box) (STATE_VARIABLE_VarTypes_74_74)), &conv4_STATE_VARIABLE_VarTypes_60);
    *STATE_VARIABLE_NameToVar_68 = ((MR_Word) (conv6_STATE_VARIABLE_NameToVar_68));
    *STATE_VARIABLE_VarSet_58 = ((MR_Word) (conv5_STATE_VARIABLE_VarSet_58));
    *STATE_VARIABLE_VarTypes_60 = ((MR_Word) (conv4_STATE_VARIABLE_VarTypes_60));
    InMode_48 = parse_tree__prog_mode__in_mode_0_f_0();
    OutMode_49 = parse_tree__prog_mode__out_mode_0_f_0();
    Var_79 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), FormalInputNodes_45);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_79, ((MR_Box) (InMode_48)), &InModes_50);
    Var_80 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Borns_44);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_80, ((MR_Box) (OutMode_49)), &OutModes_51);
    PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_26);
    switch (PredOrFunc_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word BeforeLastHeadVar_53;
          MR_Word LastHeadVar_54;
          MR_Word BeforeLastHeadMode_55;
          MR_Word LastHeadMode_56;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Box conv7_LastHeadVar_54;
          MR_Box conv8_LastHeadMode_56;

          mercury__list__det_split_last_3_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_HeadVars_0_61, &BeforeLastHeadVar_53, &conv7_LastHeadVar_54);
          LastHeadVar_54 = ((MR_Word) (conv7_LastHeadVar_54));
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (LastHeadVar_54));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), FormalRegionArgs_47, Var_83);
          *STATE_VARIABLE_HeadVars_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), BeforeLastHeadVar_53, Var_82);
          mercury__list__det_split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ActualArgModes_0_63, &BeforeLastHeadMode_55, &conv8_LastHeadMode_56);
          LastHeadMode_56 = ((MR_Word) (conv8_LastHeadMode_56));
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (LastHeadMode_56));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OutModes_51, Var_88);
          Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_50, Var_87);
          *STATE_VARIABLE_ActualArgModes_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), BeforeLastHeadMode_55, Var_86);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_92;

          *STATE_VARIABLE_HeadVars_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_HeadVars_0_61, FormalRegionArgs_47);
          Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_50, OutModes_51);
          *STATE_VARIABLE_ActualArgModes_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ActualArgModes_0_63, Var_92);
        }
        break;
    }
    hlds__hlds_pred__proc_info_set_varset_3_p_0(*STATE_VARIABLE_VarSet_58, STATE_VARIABLE_ProcInfo_0_69, &STATE_VARIABLE_ProcInfo_93_93);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(*STATE_VARIABLE_Goal_66, STATE_VARIABLE_ProcInfo_93_93, &STATE_VARIABLE_ProcInfo_94_94);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(*STATE_VARIABLE_VarTypes_60, STATE_VARIABLE_ProcInfo_94_94, &STATE_VARIABLE_ProcInfo_95_95);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(*STATE_VARIABLE_HeadVars_62, STATE_VARIABLE_ProcInfo_95_95, &STATE_VARIABLE_ProcInfo_96_96);
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(*STATE_VARIABLE_ActualArgModes_64, STATE_VARIABLE_ProcInfo_96_96, STATE_VARIABLE_ProcInfo_70);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2(
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
    MR_Word conv12_STATE_VARIABLE_NameToVar_30;
    MR_Word conv11_STATE_VARIABLE_VarSet_32;
    MR_Word conv10_STATE_VARIABLE_VarTypes_34;
    MR_Word conv9_Conjs_23;

    transform_hlds__rbmm__region_transformation__region_instruction_to_conj_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_NameToVar_30, ((MR_Word) (wrapper_arg_4)), &conv11_STATE_VARIABLE_VarSet_32, ((MR_Word) (wrapper_arg_6)), &conv10_STATE_VARIABLE_VarTypes_34, ((MR_Word) (wrapper_arg_8)), &conv9_Conjs_23);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_NameToVar_30));
    *wrapper_arg_5 = ((MR_Box) (conv11_STATE_VARIABLE_VarSet_32));
    *wrapper_arg_7 = ((MR_Box) (conv10_STATE_VARIABLE_VarTypes_34));
    *wrapper_arg_9 = ((MR_Box) (conv9_Conjs_23));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1(
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
    MR_Word conv4_STATE_VARIABLE_NameToVar_30;
    MR_Word conv3_STATE_VARIABLE_VarSet_32;
    MR_Word conv2_STATE_VARIABLE_VarTypes_34;
    MR_Word conv1_Conjs_23;

    transform_hlds__rbmm__region_transformation__region_instruction_to_conj_before_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_NameToVar_30, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_VarSet_32, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_VarTypes_34, ((MR_Word) (wrapper_arg_8)), &conv1_Conjs_23);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_NameToVar_30));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_VarSet_32));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_VarTypes_34));
    *wrapper_arg_9 = ((MR_Box) (conv1_Conjs_23));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word Graph_18,
  MR_Word ResurRenamingProc_19,
  MR_Word IteRenamingProc_20,
  MR_Word ActualRegionArgProc_21,
  MR_Word RegionInstructionProc_22,
  MR_Word ResurRenamingAnnoProc_23,
  MR_Word IteRenamingAnnoProc_24,
  MR_Word STATE_VARIABLE_Goal_0_49,
  MR_Word * STATE_VARIABLE_Goal_50,
  MR_Word STATE_VARIABLE_NameToVar_0_51,
  MR_Word * STATE_VARIABLE_NameToVar_52,
  MR_Word STATE_VARIABLE_VarSet_0_53,
  MR_Word * STATE_VARIABLE_VarSet_54,
  MR_Word STATE_VARIABLE_VarTypes_0_55,
  MR_Word * STATE_VARIABLE_VarTypes_56)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_49, (MR_Integer) 0))));
    MR_Word GoalInfo0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_49, (MR_Integer) 1))));
    MR_Word HasSubGoals_31;

    HasSubGoals_31 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_29);
    switch (HasSubGoals_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ProgPoint_32;
          MR_Word Context_33;
          MR_Word ResurRenaming_35;
          MR_Word IteRenaming_36;
          MR_Word GoalExpr_37;
          MR_Word GoalInfo_38;
          MR_Word IteRenamingAssignments_39;
          MR_Word Conjs3_44;
          MR_Word Conjs_45;
          MR_Word STATE_VARIABLE_NameToVar_61_61;
          MR_Word STATE_VARIABLE_VarSet_62_62;
          MR_Word STATE_VARIABLE_VarTypes_63_63;
          MR_Word STATE_VARIABLE_NameToVar_64_64;
          MR_Word STATE_VARIABLE_VarSet_65_65;
          MR_Word STATE_VARIABLE_VarTypes_66_66;
          MR_Word STATE_VARIABLE_NameToVar_77_77;
          MR_Word STATE_VARIABLE_VarSet_78_78;
          MR_Word STATE_VARIABLE_VarTypes_79_79;
          MR_Word Before_40;
          MR_Word After_41;
          MR_Word Var_68;
          MR_Box conv0_Var_68;
          MR_Word Var_86;

          ProgPoint_32 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo0_30);
          Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgPoint_32, (MR_Integer) 0))));
          transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(ResurRenamingProc_19, IteRenamingProc_20, ProgPoint_32, &ResurRenaming_35, &IteRenaming_36);
          transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(ModuleInfo_17, Graph_18, ResurRenaming_35, IteRenaming_36, ActualRegionArgProc_21, ProgPoint_32, GoalExpr0_29, &GoalExpr_37, GoalInfo0_30, &GoalInfo_38, STATE_VARIABLE_NameToVar_0_51, &STATE_VARIABLE_NameToVar_61_61, STATE_VARIABLE_VarSet_0_53, &STATE_VARIABLE_VarSet_62_62, STATE_VARIABLE_VarTypes_0_55, &STATE_VARIABLE_VarTypes_63_63);
          transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(IteRenamingAnnoProc_24, ProgPoint_32, STATE_VARIABLE_NameToVar_61_61, &STATE_VARIABLE_NameToVar_64_64, STATE_VARIABLE_VarSet_62_62, &STATE_VARIABLE_VarSet_65_65, STATE_VARIABLE_VarTypes_63_63, &STATE_VARIABLE_VarTypes_66_66, (MR_Word) ((MR_Unsigned) 0U), &IteRenamingAssignments_39);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), RegionInstructionProc_22, ((MR_Box) (ProgPoint_32)), &conv0_Var_68);
          if (succeeded)
          {
            Var_68 = ((MR_Word) (conv0_Var_68));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Before_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0))));
            After_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1))));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Conjs1_42;
            MR_Word Conjs2_43;
            MR_Word Var_69;
            MR_Word STATE_VARIABLE_NameToVar_70_70;
            MR_Word STATE_VARIABLE_VarSet_71_71;
            MR_Word STATE_VARIABLE_VarTypes_72_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_76;
            MR_Box conv8_STATE_VARIABLE_NameToVar_70_70;
            MR_Box conv7_STATE_VARIABLE_VarSet_71_71;
            MR_Box conv6_STATE_VARIABLE_VarTypes_72_72;
            MR_Box conv5_Conjs1_42;
            MR_Box conv16_STATE_VARIABLE_NameToVar_77_77;
            MR_Box conv15_STATE_VARIABLE_VarSet_78_78;
            MR_Box conv14_STATE_VARIABLE_VarTypes_79_79;
            MR_Box conv13_Conjs3_44;

            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_1));
              MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ModuleInfo_17));
              MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (Context_33));
              MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) (ResurRenaming_35));
              MR_hl_field(MR_mktag(0), Var_69, 6) = ((MR_Box) (IteRenaming_36));
            }
            mercury__list__foldl4_10_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[5]), Var_69, Before_40, ((MR_Box) (STATE_VARIABLE_NameToVar_64_64)), &conv8_STATE_VARIABLE_NameToVar_70_70, ((MR_Box) (STATE_VARIABLE_VarSet_65_65)), &conv7_STATE_VARIABLE_VarSet_71_71, ((MR_Box) (STATE_VARIABLE_VarTypes_66_66)), &conv6_STATE_VARIABLE_VarTypes_72_72, ((MR_Box) (IteRenamingAssignments_39)), &conv5_Conjs1_42);
            STATE_VARIABLE_NameToVar_70_70 = ((MR_Word) (conv8_STATE_VARIABLE_NameToVar_70_70));
            STATE_VARIABLE_VarSet_71_71 = ((MR_Word) (conv7_STATE_VARIABLE_VarSet_71_71));
            STATE_VARIABLE_VarTypes_72_72 = ((MR_Word) (conv6_STATE_VARIABLE_VarTypes_72_72));
            Conjs1_42 = ((MR_Word) (conv5_Conjs1_42));
            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (GoalExpr_37));
              MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (GoalInfo_38));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Conjs2_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs1_42, Var_73);
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0_2));
              MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (ModuleInfo_17));
              MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (Context_33));
              MR_hl_field(MR_mktag(0), Var_76, 5) = ((MR_Box) (ResurRenaming_35));
              MR_hl_field(MR_mktag(0), Var_76, 6) = ((MR_Box) (IteRenaming_36));
            }
            mercury__list__foldl4_10_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[5]), Var_76, After_41, ((MR_Box) (STATE_VARIABLE_NameToVar_70_70)), &conv16_STATE_VARIABLE_NameToVar_77_77, ((MR_Box) (STATE_VARIABLE_VarSet_71_71)), &conv15_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (STATE_VARIABLE_VarTypes_72_72)), &conv14_STATE_VARIABLE_VarTypes_79_79, ((MR_Box) (Conjs2_43)), &conv13_Conjs3_44);
            STATE_VARIABLE_NameToVar_77_77 = ((MR_Word) (conv16_STATE_VARIABLE_NameToVar_77_77));
            STATE_VARIABLE_VarSet_78_78 = ((MR_Word) (conv15_STATE_VARIABLE_VarSet_78_78));
            STATE_VARIABLE_VarTypes_79_79 = ((MR_Word) (conv14_STATE_VARIABLE_VarTypes_79_79));
            Conjs3_44 = ((MR_Word) (conv13_Conjs3_44));
          }
          else
          {
            MR_Word Var_80;
            MR_Word Var_81;

            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (GoalExpr_37));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (GoalInfo_38));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Conjs3_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IteRenamingAssignments_39, Var_80);
            STATE_VARIABLE_VarTypes_79_79 = STATE_VARIABLE_VarTypes_66_66;
            STATE_VARIABLE_VarSet_78_78 = STATE_VARIABLE_VarSet_65_65;
            STATE_VARIABLE_NameToVar_77_77 = STATE_VARIABLE_NameToVar_64_64;
          }
          transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(ResurRenamingAnnoProc_23, ProgPoint_32, IteRenaming_36, STATE_VARIABLE_NameToVar_77_77, STATE_VARIABLE_NameToVar_52, STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_VarSet_54, STATE_VARIABLE_VarTypes_79_79, STATE_VARIABLE_VarTypes_56, Conjs3_44, &Conjs_45);
          succeeded = (Conjs_45 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjs_45, (MR_Integer) 1))));
            succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word Var_88;

            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Var_88, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (Conjs_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_50 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_38));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Goal_50 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_37));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_38));
            }
        }
        break;
      case (MR_Integer) 0:
        transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(ModuleInfo_17, Graph_18, ResurRenamingProc_19, IteRenamingProc_20, ActualRegionArgProc_21, RegionInstructionProc_22, ResurRenamingAnnoProc_23, IteRenamingAnnoProc_24, STATE_VARIABLE_Goal_0_49, STATE_VARIABLE_Goal_50, STATE_VARIABLE_NameToVar_0_51, STATE_VARIABLE_NameToVar_52, STATE_VARIABLE_VarSet_0_53, STATE_VARIABLE_VarSet_54, STATE_VARIABLE_VarTypes_0_55, STATE_VARIABLE_VarTypes_56);
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_HeadVar__11_11;
    MR_Word conv16_STATE_VARIABLE_NameToVar_62;
    MR_Word conv15_STATE_VARIABLE_VarSet_64;
    MR_Word conv14_STATE_VARIABLE_VarTypes_66;

    transform_hlds__rbmm__region_transformation__region_transform_case_17_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 11)))), ((MR_Word) (wrapper_arg_1)), &conv17_HeadVar__11_11, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_NameToVar_62, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_VarSet_64, ((MR_Word) (wrapper_arg_7)), &conv14_STATE_VARIABLE_VarTypes_66);
    *wrapper_arg_2 = ((MR_Box) (conv17_HeadVar__11_11));
    *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_NameToVar_62));
    *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_VarSet_64));
    *wrapper_arg_8 = ((MR_Box) (conv14_STATE_VARIABLE_VarTypes_66));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Goal_50;
    MR_Word conv9_STATE_VARIABLE_NameToVar_52;
    MR_Word conv8_STATE_VARIABLE_VarSet_54;
    MR_Word conv7_STATE_VARIABLE_VarTypes_56;

    transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), &conv10_STATE_VARIABLE_Goal_50, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_NameToVar_52, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_VarSet_54, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_VarTypes_56);
    *wrapper_arg_2 = ((MR_Box) (conv10_STATE_VARIABLE_Goal_50));
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_NameToVar_52));
    *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_VarSet_54));
    *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_VarTypes_56));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Goal_50;
    MR_Word conv2_STATE_VARIABLE_NameToVar_52;
    MR_Word conv1_STATE_VARIABLE_VarSet_54;
    MR_Word conv0_STATE_VARIABLE_VarTypes_56;

    transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Goal_50, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_NameToVar_52, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_VarSet_54, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_VarTypes_56);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Goal_50));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_NameToVar_52));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_54));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_VarTypes_56));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word Graph_18,
  MR_Word ResurRenamingProc_19,
  MR_Word IteRenamingProc_20,
  MR_Word ActualRegionArgProc_21,
  MR_Word RegionInstructionProc_22,
  MR_Word ResurRenamingAnnoProc_23,
  MR_Word IteRenamingAnnoProc_24,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_NameToVar_0_83,
  MR_Word * STATE_VARIABLE_NameToVar_84,
  MR_Word STATE_VARIABLE_VarSet_0_85,
  MR_Word * STATE_VARIABLE_VarSet_86,
  MR_Word STATE_VARIABLE_VarTypes_0_87,
  MR_Word * STATE_VARIABLE_VarTypes_88)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_GoalExpr_0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__9_9, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_GoalExpr_81;
    MR_Word STATE_VARIABLE_GoalInfo_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__9_9, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_79)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_42 = (MR_Word) ((MR_Word) (STATE_VARIABLE_GoalExpr_0_79));
          MR_Word Goal_43;

          transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(ModuleInfo_17, Graph_18, ResurRenamingProc_19, IteRenamingProc_20, ActualRegionArgProc_21, RegionInstructionProc_22, ResurRenamingAnnoProc_23, IteRenamingAnnoProc_24, Goal0_42, &Goal_43, STATE_VARIABLE_NameToVar_0_83, STATE_VARIABLE_NameToVar_84, STATE_VARIABLE_VarSet_0_85, STATE_VARIABLE_VarSet_86, STATE_VARIABLE_VarTypes_0_87, STATE_VARIABLE_VarTypes_88);
          STATE_VARIABLE_GoalExpr_81 = (MR_Word) ((MR_Word) (Goal_43));
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2))));
              MR_Word Var_189 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1))) & (MR_Integer) 1);

              if ((Var_188 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
                  return;
                }
              else
              {
                MR_Word Conjs1_33;
                MR_Word Conjs_34;
                MR_Word Var_126;
                MR_Box conv6_STATE_VARIABLE_NameToVar_84;
                MR_Box conv5_STATE_VARIABLE_VarSet_86;
                MR_Box conv4_STATE_VARIABLE_VarTypes_88;

                {
                  Var_126 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
                  MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_126, 2) = ((MR_Box) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(0), Var_126, 3) = ((MR_Box) (ModuleInfo_17));
                  MR_hl_field(MR_mktag(0), Var_126, 4) = ((MR_Box) (Graph_18));
                  MR_hl_field(MR_mktag(0), Var_126, 5) = ((MR_Box) (ResurRenamingProc_19));
                  MR_hl_field(MR_mktag(0), Var_126, 6) = ((MR_Box) (IteRenamingProc_20));
                  MR_hl_field(MR_mktag(0), Var_126, 7) = ((MR_Box) (ActualRegionArgProc_21));
                  MR_hl_field(MR_mktag(0), Var_126, 8) = ((MR_Box) (RegionInstructionProc_22));
                  MR_hl_field(MR_mktag(0), Var_126, 9) = ((MR_Box) (ResurRenamingAnnoProc_23));
                  MR_hl_field(MR_mktag(0), Var_126, 10) = ((MR_Box) (IteRenamingAnnoProc_24));
                }
                mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_126, Var_188, &Conjs1_33, ((MR_Box) (STATE_VARIABLE_NameToVar_0_83)), &conv6_STATE_VARIABLE_NameToVar_84, ((MR_Box) (STATE_VARIABLE_VarSet_0_85)), &conv5_STATE_VARIABLE_VarSet_86, ((MR_Box) (STATE_VARIABLE_VarTypes_0_87)), &conv4_STATE_VARIABLE_VarTypes_88);
                *STATE_VARIABLE_NameToVar_84 = ((MR_Word) (conv6_STATE_VARIABLE_NameToVar_84));
                *STATE_VARIABLE_VarSet_86 = ((MR_Word) (conv5_STATE_VARIABLE_VarSet_86));
                *STATE_VARIABLE_VarTypes_88 = ((MR_Word) (conv4_STATE_VARIABLE_VarTypes_88));
                hlds__goal_util__flatten_conj_2_p_0(Conjs1_33, &Conjs_34);
                {
                  STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 1) = (MR_Box) ((MR_Unsigned) (Var_189));
                  MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (Conjs_34));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1))));

              if ((Var_190 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
                  return;
                }
              else
              {
                MR_Word Disjs_37;
                MR_Word Var_119;
                MR_Box conv13_STATE_VARIABLE_NameToVar_84;
                MR_Box conv12_STATE_VARIABLE_VarSet_86;
                MR_Box conv11_STATE_VARIABLE_VarTypes_88;

                {
                  Var_119 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_10[0]));
                  MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (ModuleInfo_17));
                  MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) (Graph_18));
                  MR_hl_field(MR_mktag(0), Var_119, 5) = ((MR_Box) (ResurRenamingProc_19));
                  MR_hl_field(MR_mktag(0), Var_119, 6) = ((MR_Box) (IteRenamingProc_20));
                  MR_hl_field(MR_mktag(0), Var_119, 7) = ((MR_Box) (ActualRegionArgProc_21));
                  MR_hl_field(MR_mktag(0), Var_119, 8) = ((MR_Box) (RegionInstructionProc_22));
                  MR_hl_field(MR_mktag(0), Var_119, 9) = ((MR_Box) (ResurRenamingAnnoProc_23));
                  MR_hl_field(MR_mktag(0), Var_119, 10) = ((MR_Box) (IteRenamingAnnoProc_24));
                }
                mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_119, Var_190, &Disjs_37, ((MR_Box) (STATE_VARIABLE_NameToVar_0_83)), &conv13_STATE_VARIABLE_NameToVar_84, ((MR_Box) (STATE_VARIABLE_VarSet_0_85)), &conv12_STATE_VARIABLE_VarSet_86, ((MR_Box) (STATE_VARIABLE_VarTypes_0_87)), &conv11_STATE_VARIABLE_VarTypes_88);
                *STATE_VARIABLE_NameToVar_84 = ((MR_Word) (conv13_STATE_VARIABLE_NameToVar_84));
                *STATE_VARIABLE_VarSet_86 = ((MR_Word) (conv12_STATE_VARIABLE_VarSet_86));
                *STATE_VARIABLE_VarTypes_88 = ((MR_Word) (conv11_STATE_VARIABLE_VarTypes_88));
                {
                  STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (Disjs_37));
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1))));
              MR_Word CanFail_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 3))));
              MR_Word Cases_41;
              MR_Word Var_112;
              MR_Box conv20_STATE_VARIABLE_NameToVar_84;
              MR_Box conv19_STATE_VARIABLE_VarSet_86;
              MR_Box conv18_STATE_VARIABLE_VarTypes_88;

              {
                Var_112 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_11[0]));
                MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_compound_goal_16_p_0_3));
                MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (ModuleInfo_17));
                MR_hl_field(MR_mktag(0), Var_112, 4) = ((MR_Box) (Graph_18));
                MR_hl_field(MR_mktag(0), Var_112, 5) = ((MR_Box) (ResurRenamingProc_19));
                MR_hl_field(MR_mktag(0), Var_112, 6) = ((MR_Box) (IteRenamingProc_20));
                MR_hl_field(MR_mktag(0), Var_112, 7) = ((MR_Box) (ActualRegionArgProc_21));
                MR_hl_field(MR_mktag(0), Var_112, 8) = ((MR_Box) (RegionInstructionProc_22));
                MR_hl_field(MR_mktag(0), Var_112, 9) = ((MR_Box) (ResurRenamingAnnoProc_23));
                MR_hl_field(MR_mktag(0), Var_112, 10) = ((MR_Box) (IteRenamingAnnoProc_24));
                MR_hl_field(MR_mktag(0), Var_112, 11) = ((MR_Box) (HeadVar__9_9));
              }
              mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_112, Cases0_40, &Cases_41, ((MR_Box) (STATE_VARIABLE_NameToVar_0_83)), &conv20_STATE_VARIABLE_NameToVar_84, ((MR_Box) (STATE_VARIABLE_VarSet_0_85)), &conv19_STATE_VARIABLE_VarSet_86, ((MR_Box) (STATE_VARIABLE_VarTypes_0_87)), &conv18_STATE_VARIABLE_VarTypes_88);
              *STATE_VARIABLE_NameToVar_84 = ((MR_Word) (conv20_STATE_VARIABLE_NameToVar_84));
              *STATE_VARIABLE_VarSet_86 = ((MR_Word) (conv19_STATE_VARIABLE_VarSet_86));
              *STATE_VARIABLE_VarTypes_88 = ((MR_Word) (conv18_STATE_VARIABLE_VarTypes_88));
              {
                STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (Var_38));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 2) = (MR_Box) ((MR_Unsigned) (CanFail_39));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 3) = ((MR_Box) (Cases_41));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1))));
              MR_Word Reason_46;
              MR_Word Goal0_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2))));
              MR_Word Goal_135;
              MR_Word Var_132;

              succeeded = ((((MR_tag((MR_Word) Reason0_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_44, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_44, (MR_Integer) 1))));
                {
                  Reason_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Reason_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), Reason_46, 1) = ((MR_Box) (Var_132));
                  MR_hl_field(MR_mktag(3), Reason_46, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                }
              }
              else
                Reason_46 = Reason0_44;
              transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(ModuleInfo_17, Graph_18, ResurRenamingProc_19, IteRenamingProc_20, ActualRegionArgProc_21, RegionInstructionProc_22, ResurRenamingAnnoProc_23, IteRenamingAnnoProc_24, Goal0_134, &Goal_135, STATE_VARIABLE_NameToVar_0_83, STATE_VARIABLE_NameToVar_84, STATE_VARIABLE_VarSet_0_85, STATE_VARIABLE_VarSet_86, STATE_VARIABLE_VarTypes_0_87, STATE_VARIABLE_VarTypes_88);
              {
                STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (Reason_46));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (Goal_135));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 1))));
              MR_Word Cond0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 2))));
              MR_Word Then0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 3))));
              MR_Word Else0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_79, (MR_Integer) 4))));
              MR_Word Cond_51;
              MR_Word Then_52;
              MR_Word Else_53;
              MR_Word STATE_VARIABLE_NameToVar_93_93;
              MR_Word STATE_VARIABLE_VarSet_94_94;
              MR_Word STATE_VARIABLE_VarTypes_95_95;
              MR_Word STATE_VARIABLE_NameToVar_96_96;
              MR_Word STATE_VARIABLE_VarSet_97_97;
              MR_Word STATE_VARIABLE_VarTypes_98_98;

              transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(ModuleInfo_17, Graph_18, ResurRenamingProc_19, IteRenamingProc_20, ActualRegionArgProc_21, RegionInstructionProc_22, ResurRenamingAnnoProc_23, IteRenamingAnnoProc_24, Cond0_48, &Cond_51, STATE_VARIABLE_NameToVar_0_83, &STATE_VARIABLE_NameToVar_93_93, STATE_VARIABLE_VarSet_0_85, &STATE_VARIABLE_VarSet_94_94, STATE_VARIABLE_VarTypes_0_87, &STATE_VARIABLE_VarTypes_95_95);
              transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(ModuleInfo_17, Graph_18, ResurRenamingProc_19, IteRenamingProc_20, ActualRegionArgProc_21, RegionInstructionProc_22, ResurRenamingAnnoProc_23, IteRenamingAnnoProc_24, Then0_49, &Then_52, STATE_VARIABLE_NameToVar_93_93, &STATE_VARIABLE_NameToVar_96_96, STATE_VARIABLE_VarSet_94_94, &STATE_VARIABLE_VarSet_97_97, STATE_VARIABLE_VarTypes_95_95, &STATE_VARIABLE_VarTypes_98_98);
              transform_hlds__rbmm__region_transformation__region_transform_goal_16_p_0(ModuleInfo_17, Graph_18, ResurRenamingProc_19, IteRenamingProc_20, ActualRegionArgProc_21, RegionInstructionProc_22, ResurRenamingAnnoProc_23, IteRenamingAnnoProc_24, Else0_50, &Else_53, STATE_VARIABLE_NameToVar_96_96, STATE_VARIABLE_NameToVar_84, STATE_VARIABLE_VarSet_97_97, STATE_VARIABLE_VarSet_86, STATE_VARIABLE_VarTypes_98_98, STATE_VARIABLE_VarTypes_88);
              {
                STATE_VARIABLE_GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 1) = ((MR_Box) (Vars_47));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 2) = ((MR_Box) (Cond_51));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 3) = ((MR_Box) (Then_52));
                MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_81, 4) = ((MR_Box) (Else_53));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_compound_goal\'/16", (MR_String) "shorthand or atomic goal");
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_GoalExpr_81));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_82));
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1(
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
    MR_Word conv4_STATE_VARIABLE_NameToVar_26;
    MR_Word conv3_STATE_VARIABLE_VarSet_28;
    MR_Word conv2_STATE_VARIABLE_VarTypes_30;
    MR_Word conv1_Conjs_17;

    transform_hlds__rbmm__region_transformation__resur_renaming_annotation_to_assignment_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_NameToVar_26, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_VarSet_28, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_VarTypes_30, ((MR_Word) (wrapper_arg_8)), &conv1_Conjs_17);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_NameToVar_26));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_VarSet_28));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_VarTypes_30));
    *wrapper_arg_9 = ((MR_Box) (conv1_Conjs_17));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0(
  MR_Word ResurRenamingAnnoProc_12,
  MR_Word ProgPoint_13,
  MR_Word IteRenaming_14,
  MR_Word STATE_VARIABLE_NameToVar_0_20,
  MR_Word * STATE_VARIABLE_NameToVar_21,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word STATE_VARIABLE_Conjs_0_26,
  MR_Word * STATE_VARIABLE_Conjs_27)
{
  {
    MR_bool succeeded;
    MR_Word ResurRenamingAnnos_19;
    MR_Box conv0_ResurRenamingAnnos_19;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]), ResurRenamingAnnoProc_12, ((MR_Box) (ProgPoint_13)), &conv0_ResurRenamingAnnos_19);
    if (succeeded)
    {
      ResurRenamingAnnos_19 = ((MR_Word) (conv0_ResurRenamingAnnos_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_28;
      MR_Box conv8_STATE_VARIABLE_NameToVar_21;
      MR_Box conv7_STATE_VARIABLE_VarSet_23;
      MR_Box conv6_STATE_VARIABLE_VarTypes_25;
      MR_Box conv5_STATE_VARIABLE_Conjs_27;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__assignments_from_resur_renaming_anno_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (IteRenaming_14));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[5]), Var_28, ResurRenamingAnnos_19, ((MR_Box) (STATE_VARIABLE_NameToVar_0_20)), &conv8_STATE_VARIABLE_NameToVar_21, ((MR_Box) (STATE_VARIABLE_VarSet_0_22)), &conv7_STATE_VARIABLE_VarSet_23, ((MR_Box) (STATE_VARIABLE_VarTypes_0_24)), &conv6_STATE_VARIABLE_VarTypes_25, ((MR_Box) (STATE_VARIABLE_Conjs_0_26)), &conv5_STATE_VARIABLE_Conjs_27);
      *STATE_VARIABLE_NameToVar_21 = ((MR_Word) (conv8_STATE_VARIABLE_NameToVar_21));
      *STATE_VARIABLE_VarSet_23 = ((MR_Word) (conv7_STATE_VARIABLE_VarSet_23));
      *STATE_VARIABLE_VarTypes_25 = ((MR_Word) (conv6_STATE_VARIABLE_VarTypes_25));
      *STATE_VARIABLE_Conjs_27 = ((MR_Word) (conv5_STATE_VARIABLE_Conjs_27));
    }
    else
    {
      *STATE_VARIABLE_Conjs_27 = STATE_VARIABLE_Conjs_0_26;
      *STATE_VARIABLE_VarTypes_25 = STATE_VARIABLE_VarTypes_0_24;
      *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      *STATE_VARIABLE_NameToVar_21 = STATE_VARIABLE_NameToVar_0_20;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0_1(
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
    MR_Word conv4_STATE_VARIABLE_NameToVar_24;
    MR_Word conv3_STATE_VARIABLE_VarSet_26;
    MR_Word conv2_STATE_VARIABLE_VarTypes_28;
    MR_Word conv1_Conjs_15;

    transform_hlds__rbmm__region_transformation__ite_renaming_annotation_to_assignment_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_NameToVar_24, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_VarSet_26, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_VarTypes_28, ((MR_Word) (wrapper_arg_8)), &conv1_Conjs_15);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_NameToVar_24));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_VarSet_26));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_VarTypes_28));
    *wrapper_arg_9 = ((MR_Box) (conv1_Conjs_15));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__assignments_from_ite_renaming_anno_10_p_0(
  MR_Word IteRenamingAnnoProc_11,
  MR_Word ProgPoint_12,
  MR_Word STATE_VARIABLE_NameToVar_0_18,
  MR_Word * STATE_VARIABLE_NameToVar_19,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_IteRenamingAssignments_0_24,
  MR_Word * STATE_VARIABLE_IteRenamingAssignments_25)
{
  {
    MR_bool succeeded;
    MR_Word IteRenamingAnnos_17;
    MR_Box conv0_IteRenamingAnnos_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[3]), IteRenamingAnnoProc_11, ((MR_Box) (ProgPoint_12)), &conv0_IteRenamingAnnos_17);
    if (succeeded)
    {
      IteRenamingAnnos_17 = ((MR_Word) (conv0_IteRenamingAnnos_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv8_STATE_VARIABLE_NameToVar_19;
      MR_Box conv7_STATE_VARIABLE_VarSet_21;
      MR_Box conv6_STATE_VARIABLE_VarTypes_23;
      MR_Box conv5_STATE_VARIABLE_IteRenamingAssignments_25;

      mercury__list__foldl4_10_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[5]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[11]), IteRenamingAnnos_17, ((MR_Box) (STATE_VARIABLE_NameToVar_0_18)), &conv8_STATE_VARIABLE_NameToVar_19, ((MR_Box) (STATE_VARIABLE_VarSet_0_20)), &conv7_STATE_VARIABLE_VarSet_21, ((MR_Box) (STATE_VARIABLE_VarTypes_0_22)), &conv6_STATE_VARIABLE_VarTypes_23, ((MR_Box) (STATE_VARIABLE_IteRenamingAssignments_0_24)), &conv5_STATE_VARIABLE_IteRenamingAssignments_25);
      *STATE_VARIABLE_NameToVar_19 = ((MR_Word) (conv8_STATE_VARIABLE_NameToVar_19));
      *STATE_VARIABLE_VarSet_21 = ((MR_Word) (conv7_STATE_VARIABLE_VarSet_21));
      *STATE_VARIABLE_VarTypes_23 = ((MR_Word) (conv6_STATE_VARIABLE_VarTypes_23));
      *STATE_VARIABLE_IteRenamingAssignments_25 = ((MR_Word) (conv5_STATE_VARIABLE_IteRenamingAssignments_25));
    }
    else
    {
      *STATE_VARIABLE_IteRenamingAssignments_25 = STATE_VARIABLE_IteRenamingAssignments_0_24;
      *STATE_VARIABLE_VarTypes_23 = STATE_VARIABLE_VarTypes_0_22;
      *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
      *STATE_VARIABLE_NameToVar_19 = STATE_VARIABLE_NameToVar_0_18;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__find_renamings_at_prog_point_5_p_0(
  MR_Word ResurRenamingProc_6,
  MR_Word IteRenamingProc_7,
  MR_Word ProgPoint_8,
  MR_Word * ResurRenaming_9,
  MR_Word * IteRenaming_10)
{
  {
    MR_bool succeeded;
    MR_Word ResurRenaming0_11;
    MR_Box conv0_ResurRenaming0_11;
    MR_Word IteRenaming0_12;
    MR_Box conv1_IteRenaming0_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]), ResurRenamingProc_6, ((MR_Box) (ProgPoint_8)), &conv0_ResurRenaming0_11);
    if (succeeded)
    {
      ResurRenaming0_11 = ((MR_Word) (conv0_ResurRenaming0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *ResurRenaming_9 = ResurRenaming0_11;
    else
      *ResurRenaming_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[3]), IteRenamingProc_7, ((MR_Box) (ProgPoint_8)), &conv1_IteRenaming0_12);
    if (succeeded)
    {
      IteRenaming0_12 = ((MR_Word) (conv1_IteRenaming0_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *IteRenaming_10 = IteRenaming0_12;
    else
      *IteRenaming_10 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_RegVar_16;
    MR_Word conv3_STATE_VARIABLE_NameToVar_22;
    MR_Word conv2_STATE_VARIABLE_VarSet_24;
    MR_Word conv1_STATE_VARIABLE_VarTypes_26;

    transform_hlds__rbmm__region_transformation__node_to_var_with_both_renamings_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv4_RegVar_16, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_NameToVar_22, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_VarTypes_26);
    *wrapper_arg_2 = ((MR_Box) (conv4_RegVar_16));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_NameToVar_22));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_VarSet_24));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_VarTypes_26));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Graph_2,
  MR_Word ResurRenaming_3,
  MR_Word IteRenaming_4,
  MR_Word ActualRegionArgProc_5,
  MR_Word ProgPoint_6,
  MR_Word STATE_VARIABLE_GoalExpr_0_7,
  MR_Word * STATE_VARIABLE_GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_9,
  MR_Word * STATE_VARIABLE_GoalInfo_10,
  MR_Word STATE_VARIABLE_NameToVar_0_11,
  MR_Word * STATE_VARIABLE_NameToVar_12,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14,
  MR_Word STATE_VARIABLE_VarTypes_0_15,
  MR_Word * STATE_VARIABLE_VarTypes_16)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0))));
          MR_Word RHS_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1))));
          MR_Word Mode_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2))));
          MR_Word Unification0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 3))));
          MR_Word Context_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 4))));
          MR_Word Unification_84;

          transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(ModuleInfo_1, Graph_2, ResurRenaming_3, IteRenaming_4, Unification0_82, &Unification_84, STATE_VARIABLE_NameToVar_0_11, STATE_VARIABLE_NameToVar_12, STATE_VARIABLE_VarSet_0_13, STATE_VARIABLE_VarSet_14, STATE_VARIABLE_VarTypes_0_15, STATE_VARIABLE_VarTypes_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_GoalExpr_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_79));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_80));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_81));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_84));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_83));
          }
          *STATE_VARIABLE_GoalInfo_10 = STATE_VARIABLE_GoalInfo_0_9;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CalleePredId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0))));
          MR_Integer CalleeProcId_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1))));
          MR_Word Args0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2))));
          MR_Word Builtin_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word Context_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 4))));
          MR_Word Name_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 5))));
          MR_Word ActualNodes_35;
          MR_Word Constants_36;
          MR_Word Ins_37;
          MR_Word Outs_38;
          MR_Word AllNodes_39;
          MR_Word ActualRegionArgs_40;
          MR_Word CalleePredInfo_41;
          MR_Word CalleePredOrFunc_42;
          MR_Word Args_43;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word ActualNodes0_34;
          MR_Box conv0_ActualNodes0_34;
          MR_Box conv7_STATE_VARIABLE_NameToVar_12;
          MR_Box conv6_STATE_VARIABLE_VarSet_14;
          MR_Box conv5_STATE_VARIABLE_VarTypes_16;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), ActualRegionArgProc_5, ((MR_Box) (ProgPoint_6)), &conv0_ActualNodes0_34);
          if (succeeded)
          {
            ActualNodes0_34 = ((MR_Word) (conv0_ActualNodes0_34));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            ActualNodes_35 = ActualNodes0_34;
          else
            ActualNodes_35 = (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[10]);
          Constants_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualNodes_35, (MR_Integer) 0))));
          Ins_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualNodes_35, (MR_Integer) 1))));
          Outs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualNodes_35, (MR_Integer) 2))));
          Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Ins_37, Outs_38);
          AllNodes_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Constants_36, Var_59);
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_goal_expr_16_p_0_1));
            MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Graph_2));
            MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (ResurRenaming_3));
            MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) (IteRenaming_4));
          }
          mercury__list__map_foldl3_9_p_1((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[0]), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_60, AllNodes_39, &ActualRegionArgs_40, ((MR_Box) (STATE_VARIABLE_NameToVar_0_11)), &conv7_STATE_VARIABLE_NameToVar_12, ((MR_Box) (STATE_VARIABLE_VarSet_0_13)), &conv6_STATE_VARIABLE_VarSet_14, ((MR_Box) (STATE_VARIABLE_VarTypes_0_15)), &conv5_STATE_VARIABLE_VarTypes_16);
          *STATE_VARIABLE_NameToVar_12 = ((MR_Word) (conv7_STATE_VARIABLE_NameToVar_12));
          *STATE_VARIABLE_VarSet_14 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_14));
          *STATE_VARIABLE_VarTypes_16 = ((MR_Word) (conv5_STATE_VARIABLE_VarTypes_16));
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, CalleePredId_28, &CalleePredInfo_41);
          CalleePredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CalleePredInfo_41);
          switch (CalleePredOrFunc_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word BeforeLast_44;
                MR_Word Last_45;
                MR_Word Var_64;
                MR_Word Var_65;
                MR_Box conv8_Last_45;

                mercury__list__det_split_last_3_p_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), Args0_30, &BeforeLast_44, &conv8_Last_45);
                Last_45 = ((MR_Word) (conv8_Last_45));
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Last_45));
                  MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ActualRegionArgs_40, Var_65);
                Args_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), BeforeLast_44, Var_64);
              }
              break;
            case (MR_Integer) 0:
              Args_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), Args0_30, ActualRegionArgs_40);
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_GoalExpr_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (CalleePredId_28));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (CalleeProcId_29));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Args_43));
            MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_31));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (Context_32));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Name_33));
          }
          *STATE_VARIABLE_GoalInfo_10 = STATE_VARIABLE_GoalInfo_0_9;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "generic call");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "call_foreign_proc");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_330 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 2))));

              if ((Var_330 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_VarTypes_16 = STATE_VARIABLE_VarTypes_0_15;
                *STATE_VARIABLE_VarSet_14 = STATE_VARIABLE_VarSet_0_13;
                *STATE_VARIABLE_NameToVar_12 = STATE_VARIABLE_NameToVar_0_11;
                *STATE_VARIABLE_GoalInfo_10 = STATE_VARIABLE_GoalInfo_0_9;
                *STATE_VARIABLE_GoalExpr_8 = STATE_VARIABLE_GoalExpr_0_7;
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
                  return;
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_332 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_7, (MR_Integer) 1))));

              if ((Var_332 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_VarTypes_16 = STATE_VARIABLE_VarTypes_0_15;
                *STATE_VARIABLE_VarSet_14 = STATE_VARIABLE_VarSet_0_13;
                *STATE_VARIABLE_NameToVar_12 = STATE_VARIABLE_NameToVar_0_11;
                *STATE_VARIABLE_GoalInfo_10 = STATE_VARIABLE_GoalInfo_0_9;
                *STATE_VARIABLE_GoalExpr_8 = STATE_VARIABLE_GoalExpr_0_7;
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
                  return;
                }
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
              return;
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
              return;
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
              return;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.region_transform_goal_expr\'/16", (MR_String) "compound goal");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__annotate_constructions_unification_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Graph_2,
  MR_Word ResurRenaming_3,
  MR_Word IteRenaming_4,
  MR_Word STATE_VARIABLE_Unification_0_5,
  MR_Word * STATE_VARIABLE_Unification_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word * HeadVar__12_12)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_5, (MR_Integer) 0))));
          MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_5, (MR_Integer) 1))));
          MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_5, (MR_Integer) 2))));
          MR_Word ArgModes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_5, (MR_Integer) 3))));
          MR_Word IsUnique_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_5, (MR_Integer) 5))) & (MR_Integer) 1);
          MR_Word SubInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Unification_0_5, (MR_Integer) 6))));
          MR_Word Node_28;
          MR_Word NodeType_29;

          transform_hlds__rbmm__points_to_graph__rptg_get_node_by_variable_3_p_0(Graph_2, Var_21, &Node_28);
          NodeType_29 = transform_hlds__rbmm__points_to_graph__rptg_lookup_node_type_2_f_0(Graph_2, Node_28);
          succeeded = check_hlds__type_util__type_not_stored_in_region_2_p_0(NodeType_29, ModuleInfo_1);
          if (succeeded)
          {
            *HeadVar__12_12 = HeadVar__11_11;
            *HeadVar__10_10 = HeadVar__9_9;
            *HeadVar__8_8 = HeadVar__7_7;
            *STATE_VARIABLE_Unification_6 = STATE_VARIABLE_Unification_0_5;
          }
          else
          {
            MR_String Name_30;
            MR_Word RegVar_31;
            MR_Word HowToConstruct_32;

            Name_30 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_2, Node_28);
            transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(Name_30, ResurRenaming_3, IteRenaming_4, &RegVar_31, HeadVar__7_7, HeadVar__8_8, HeadVar__9_9, HeadVar__10_10, HeadVar__11_11, HeadVar__12_12);
            {
              HowToConstruct_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HowToConstruct_32, 0) = ((MR_Box) (RegVar_31));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Unification_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConsId_22));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Args_23));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgModes_24));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HowToConstruct_32));
              MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (IsUnique_26));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (SubInfo_27));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *HeadVar__12_12 = HeadVar__11_11;
          *HeadVar__10_10 = HeadVar__9_9;
          *HeadVar__8_8 = HeadVar__7_7;
          *STATE_VARIABLE_Unification_6 = STATE_VARIABLE_Unification_0_5;
        }
        break;
      case (MR_Integer) 2:
        {
          *HeadVar__12_12 = HeadVar__11_11;
          *HeadVar__10_10 = HeadVar__9_9;
          *HeadVar__8_8 = HeadVar__7_7;
          *STATE_VARIABLE_Unification_6 = STATE_VARIABLE_Unification_0_5;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__12_12 = HeadVar__11_11;
              *HeadVar__10_10 = HeadVar__9_9;
              *HeadVar__8_8 = HeadVar__7_7;
              *STATE_VARIABLE_Unification_6 = STATE_VARIABLE_Unification_0_5;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_transformation.annotate_constructions_unification\'/12", (MR_String) "complicated unify");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_with_both_renamings_10_p_0(
  MR_String Name0_11,
  MR_Word ResurRenaming_12,
  MR_Word IteRenaming_13,
  MR_Word * RegVar_14,
  MR_Word STATE_VARIABLE_NameToVar_0_21,
  MR_Word * STATE_VARIABLE_NameToVar_22,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_VarTypes_0_25,
  MR_Word * STATE_VARIABLE_VarTypes_26)
{
  {
    MR_bool succeeded;
    MR_String Name_19;
    MR_Word ResurNameList_18;
    MR_Box conv0_ResurNameList_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), ResurRenaming_12, ((MR_Box) (Name0_11)), &conv0_ResurNameList_18);
    if (succeeded)
    {
      ResurNameList_18 = ((MR_Word) (conv0_ResurNameList_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv1_Name_19;

      mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ResurNameList_18, &conv1_Name_19);
      Name_19 = ((MR_String) (conv1_Name_19));
    }
    else
    {
      MR_Word IteNameList_20;
      MR_Box conv2_IteNameList_20;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[2]), IteRenaming_13, ((MR_Box) (Name0_11)), &conv2_IteNameList_20);
      if (succeeded)
      {
        IteNameList_20 = ((MR_Word) (conv2_IteNameList_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Box conv3_Name_19;

        mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IteNameList_20, &conv3_Name_19);
        Name_19 = ((MR_String) (conv3_Name_19));
      }
      else
        Name_19 = Name0_11;
    }
    transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(Name_19, RegVar_14, STATE_VARIABLE_NameToVar_0_21, STATE_VARIABLE_NameToVar_22, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_VarTypes_0_25, STATE_VARIABLE_VarTypes_26);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_name_to_var_8_p_0(
  MR_String Name_9,
  MR_Word * RegVar_10,
  MR_Word STATE_VARIABLE_NameToVar_0_15,
  MR_Word * STATE_VARIABLE_NameToVar_16,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word STATE_VARIABLE_VarTypes_0_19,
  MR_Word * STATE_VARIABLE_VarTypes_20)
{
  {
    MR_bool succeeded;
    MR_Word RegVar0_14;
    MR_Box conv0_RegVar0_14;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), STATE_VARIABLE_NameToVar_0_15, ((MR_Box) (Name_9)), &conv0_RegVar0_14);
    if (succeeded)
    {
      RegVar0_14 = ((MR_Word) (conv0_RegVar0_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *RegVar_10 = RegVar0_14;
      *STATE_VARIABLE_VarTypes_20 = STATE_VARIABLE_VarTypes_0_19;
      *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
      *STATE_VARIABLE_NameToVar_16 = STATE_VARIABLE_NameToVar_0_15;
    }
    else
    {
      MR_Word Var_22;

      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_9, RegVar_10, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
      Var_22 = parse_tree__builtin_lib_types__region_type_0_f_0();
      hlds__vartypes__add_var_type_4_p_0(*RegVar_10, Var_22, STATE_VARIABLE_VarTypes_0_19, STATE_VARIABLE_VarTypes_20);
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[1]), ((MR_Box) (Name_9)), ((MR_Box) (*RegVar_10)), STATE_VARIABLE_NameToVar_0_15, STATE_VARIABLE_NameToVar_16);
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_NameToVarTable_57;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_59;

    transform_hlds__rbmm__region_transformation__region_transform_proc_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 11)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NameToVarTable_57, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_59);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NameToVarTable_57));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_59));
  }
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
  {
    MR_Word PredInfo_25;
    MR_Word ProcIds_26;
    MR_Word Var_31;
    MR_Box conv3_STATE_VARIABLE_NameToVarTable_28;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_30;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_22, &PredInfo_25);
    ProcIds_26 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_25);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (RptaInfoTable_14));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (FormalRegionArgTable_15));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (ActualRegionArgTable_16));
      MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (ResurRenamingTable_17));
      MR_hl_field(MR_mktag(0), Var_31, 7) = ((MR_Box) (IteRenamingTable_18));
      MR_hl_field(MR_mktag(0), Var_31, 8) = ((MR_Box) (RegionInstructionTable_19));
      MR_hl_field(MR_mktag(0), Var_31, 9) = ((MR_Box) (ResurRenamingAnnoTable_20));
      MR_hl_field(MR_mktag(0), Var_31, 10) = ((MR_Box) (IteRenamingAnnoTable_21));
      MR_hl_field(MR_mktag(0), Var_31, 11) = ((MR_Box) (PredId_22));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_31, ProcIds_26, ((MR_Box) (STATE_VARIABLE_NameToVarTable_0_27)), &conv3_STATE_VARIABLE_NameToVarTable_28, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_29)), &conv2_STATE_VARIABLE_ModuleInfo_30);
    *STATE_VARIABLE_NameToVarTable_28 = ((MR_Word) (conv3_STATE_VARIABLE_NameToVarTable_28));
    *STATE_VARIABLE_ModuleInfo_30 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_30));
  }
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
  {
    MR_bool succeeded;
    MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_7, (MR_Integer) 0))));

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
      MR_Integer Var_36;
      MR_Word STATE_VARIABLE_PredInfo_37_37;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_PredInfo_42_42;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_11, &STATE_VARIABLE_PredInfo_31_31);
      Constants_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormalRegionArgs_8, (MR_Integer) 0))));
      Deads_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormalRegionArgs_8, (MR_Integer) 1))));
      Borns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormalRegionArgs_8, (MR_Integer) 2))));
      Var_33 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Constants_14);
      Var_34 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Deads_15);
      Var_32 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) Var_34);
      Var_35 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Borns_16);
      NumberOfRegArgs_17 = (MR_Integer) ((MR_Unsigned) Var_32 + (MR_Unsigned) Var_35);
      Arity_18 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(STATE_VARIABLE_PredInfo_31_31);
      Var_36 = (MR_Integer) ((MR_Unsigned) Arity_18 + (MR_Unsigned) NumberOfRegArgs_17);
      hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(Var_36, STATE_VARIABLE_PredInfo_31_31, &STATE_VARIABLE_PredInfo_37_37);
      Var_38 = parse_tree__builtin_lib_types__region_type_0_f_0();
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumberOfRegArgs_17, ((MR_Box) (Var_38)), &RegionTypes_19);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_37_37, &TypeVarSet_20, &ExistQuantTVars_21, &ArgTypes0_22);
      PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_37_37);
      switch (PredOrFunc_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word BeforeLast_25;
            MR_Word Last_26;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Box conv0_Last_26;

            mercury__list__det_split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_22, &BeforeLast_25, &conv0_Last_26);
            Last_26 = ((MR_Word) (conv0_Last_26));
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Last_26));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RegionTypes_19, Var_40);
            ArgTypes_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), BeforeLast_25, Var_39);
          }
          break;
        case (MR_Integer) 0:
          ArgTypes_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_22, RegionTypes_19);
          break;
      }
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_20, ExistQuantTVars_21, ArgTypes_24, STATE_VARIABLE_PredInfo_37_37, &STATE_VARIABLE_PredInfo_42_42);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, STATE_VARIABLE_PredInfo_42_42, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Processed_28 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Processed_0_27));
      }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ModuleInfo_9;

    transform_hlds__rbmm__region_transformation__recheck_purity_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ModuleInfo_9));
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation__region_transform_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ModuleInfo_9;

    transform_hlds__rbmm__region_transformation__update_instmap_delta_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_9));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_NameToVarTable_28;
    MR_Word conv4_STATE_VARIABLE_ModuleInfo_30;

    transform_hlds__rbmm__region_transformation__region_transform_pred_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_NameToVarTable_28, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ModuleInfo_30);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_NameToVarTable_28));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_30));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Processed_28;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_30;

    transform_hlds__rbmm__region_transformation__annotate_pred_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Processed_28, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ModuleInfo_30);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Processed_28));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_30));
  }
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

    mercury__map__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_arguments__transform_hlds__rbmm__region_arguments__type_ctor_info_region_args_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[7]), FormalRegionArgTable_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_PredIds_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26)), &conv2_STATE_VARIABLE_ModuleInfo_30_30);
    PredIds_23 = ((MR_Word) (conv3_PredIds_23));
    STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_30_30));
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__rbmm__region_transformation_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__rbmm__region_transformation__region_transform_12_p_0_2));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (RptaInfoTable_13));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (FormalRegionArgTable_14));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (ActualRegionArgTable_15));
      MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (ResurRenamingTable_16));
      MR_hl_field(MR_mktag(0), Var_31, 7) = ((MR_Box) (IteRenamingTable_17));
      MR_hl_field(MR_mktag(0), Var_31, 8) = ((MR_Box) (RegionInstructionTable_18));
      MR_hl_field(MR_mktag(0), Var_31, 9) = ((MR_Box) (ResurRenamingAnnoTable_19));
      MR_hl_field(MR_mktag(0), Var_31, 10) = ((MR_Box) (IteRenamingAnnoTable_20));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_31, PredIds_23, ((MR_Box) (STATE_VARIABLE_NameToVarTable_0_24)), &conv7_STATE_VARIABLE_NameToVarTable_25, ((MR_Box) (STATE_VARIABLE_ModuleInfo_30_30)), &conv6_STATE_VARIABLE_ModuleInfo_33_33);
    *STATE_VARIABLE_NameToVarTable_25 = ((MR_Word) (conv7_STATE_VARIABLE_NameToVarTable_25));
    STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_33_33));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[8]), PredIds_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_33_33)), &conv9_STATE_VARIABLE_ModuleInfo_35_35);
    STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_35_35));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__rbmm__region_transformation_scalar_common_2[9]), PredIds_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_35_35)), &conv11_STATE_VARIABLE_ModuleInfo_27);
    *STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_27));
  }
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
  {
    MR_bool succeeded;

    succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__rbmm__region_transformation____Unify____name_to_prog_var_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__rbmm__region_transformation____Compare____name_to_prog_var_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
