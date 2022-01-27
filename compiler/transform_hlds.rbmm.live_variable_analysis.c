/*
** Automatically generated from `rbmm.live_variable_analysis.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module transform_hlds.rbmm.live_variable_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__live_variable_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.live_variable_analysis.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




#line 146 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 149 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 152 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 155 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 158 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 383 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(
#line 383 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Varset_5,
#line 383 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Var_6,
#line 383 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_0_9,
#line 383 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_10);

#line 376 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1(
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3);

#line 368 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_6,
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_7,
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_8,
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13,
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_14);

#line 330 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_3,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_4,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_6,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_8);

#line 262 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(
#line 262 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_5,
#line 262 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Goal_6,
#line 262 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__UsedSet_7,
#line 262 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__ProducedSet_8);

#line 247 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(
#line 247 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_5,
#line 247 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__LV_6,
#line 247 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9,
#line 247 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_10);

#line 376 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0_1(
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3);

#line 222 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0(
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_3,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11);

#line 138 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__3_3,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_11,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_13);

#line 111 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_3,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11);

#line 87 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_12,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__PredId_13,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Integer transform_hlds__rbmm__live_variable_analysis__ProcId_14,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_26,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_27,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_28,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_29,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_30,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_31);

#line 83 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1(
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7);

#line 74 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_10,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_11,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__PredId_12,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_18,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_19,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_20,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_21,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_22,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_23);

#line 70 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1(
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_3[1][12];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_4[1][13];

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_5[1][7];




static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_4[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__live_variable_analysis_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 566 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 575 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__live_variable_analysis__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 583 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__live_variable_analysis__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 591 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_variable_analysis__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 600 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 608 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 616 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_TypeInfo) &transform_hlds__rbmm__live_variable_analysis__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 625 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__live_variable_analysis__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_variable_analysis__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 634 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 642 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 650 "transform_hlds.rbmm.live_variable_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__live_variable_analysis__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__rbmm__live_variable_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 383 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(
#line 383 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Varset_5,
#line 383 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Var_6,
#line 383 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_0_9,
#line 383 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_10)
#line 383 "rbmm.live_variable_analysis.m"
{
#line 386 "rbmm.live_variable_analysis.m"
  {
#line 386 "rbmm.live_variable_analysis.m"
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
#line 386 "rbmm.live_variable_analysis.m"
    MR_String transform_hlds__rbmm__live_variable_analysis__VarName_8;
#line 388 "rbmm.live_variable_analysis.m"
    MR_Char transform_hlds__rbmm__live_variable_analysis__V_17_17;

#line 387 "rbmm.live_variable_analysis.m"
    {
#line 387 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__VarName_8 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__rbmm__live_variable_analysis__Varset_5, (MR_Integer) 0, transform_hlds__rbmm__live_variable_analysis__Var_6);
    }
#line 388 "rbmm.live_variable_analysis.m"
    {
#line 388 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__string__index_3_p_0(transform_hlds__rbmm__live_variable_analysis__VarName_8, (MR_Integer) 0, &transform_hlds__rbmm__live_variable_analysis__V_17_17);
    }
#line 388 "rbmm.live_variable_analysis.m"
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 388 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__succeeded = ((MR_Char) 95 == transform_hlds__rbmm__live_variable_analysis__V_17_17);
#line 390 "rbmm.live_variable_analysis.m"
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 389 "rbmm.live_variable_analysis.m"
      {
#line 389 "rbmm.live_variable_analysis.m"
        {
#line 389 "rbmm.live_variable_analysis.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_6)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_0_9, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_10);
#line 389 "rbmm.live_variable_analysis.m"
          return;
        }
#line 389 "rbmm.live_variable_analysis.m"
      }
#line 390 "rbmm.live_variable_analysis.m"
    else
#line 389 "rbmm.live_variable_analysis.m"
      *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVars_0_9;
#line 386 "rbmm.live_variable_analysis.m"
  }
#line 383 "rbmm.live_variable_analysis.m"
}

#line 376 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1(
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3)
#line 376 "rbmm.live_variable_analysis.m"
{
#line 376 "rbmm.live_variable_analysis.m"
  {
#line 376 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__closure = transform_hlds__rbmm__live_variable_analysis__closure_arg;
#line 376 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10;

#line 376 "rbmm.live_variable_analysis.m"
    {
#line 376 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10);
    }
#line 376 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10));
#line 376 "rbmm.live_variable_analysis.m"
  }
#line 376 "rbmm.live_variable_analysis.m"
}

#line 368 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_6,
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_7,
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_8,
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13,
#line 368 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_14)
#line 368 "rbmm.live_variable_analysis.m"
{
#line 374 "rbmm.live_variable_analysis.m"
  {
#line 374 "rbmm.live_variable_analysis.m"
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
#line 372 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis___DeadVars_10;
#line 372 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_10;

#line 372 "rbmm.live_variable_analysis.m"
    {
#line 372 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_6)), &transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_10);
    }
#line 372 "rbmm.live_variable_analysis.m"
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 372 "rbmm.live_variable_analysis.m"
      {
#line 372 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis___DeadVars_10 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_10);
#line 372 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
#line 372 "rbmm.live_variable_analysis.m"
      }
#line 374 "rbmm.live_variable_analysis.m"
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 372 "rbmm.live_variable_analysis.m"
      *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_14 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13;
#line 374 "rbmm.live_variable_analysis.m"
    else
#line 375 "rbmm.live_variable_analysis.m"
      {
#line 375 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_23;
#line 375 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_24;
#line 375 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__Varset_11;
#line 375 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__VoidVars_12;
#line 375 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__V_15_15;
#line 375 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__V_16_16;
#line 376 "rbmm.live_variable_analysis.m"
        MR_Box transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_12;

#line 375 "rbmm.live_variable_analysis.m"
        {
#line 375 "rbmm.live_variable_analysis.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__rbmm__live_variable_analysis__ProcInfo_8, &transform_hlds__rbmm__live_variable_analysis__Varset_11);
        }
#line 376 "rbmm.live_variable_analysis.m"
        {
#line 376 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "rbmm.live_variable_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_15_15, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_5[0]));
#line 376 "rbmm.live_variable_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_15_15, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0_1));
#line 376 "rbmm.live_variable_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 376 "rbmm.live_variable_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_15_15, 3) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Varset_11));
#line 376 "rbmm.live_variable_analysis.m"
        }
#line 829 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_23 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
#line 376 "rbmm.live_variable_analysis.m"
        {
#line 376 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__V_16_16 = mercury__set__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_23);
        }
#line 836 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_24 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1];
#line 376 "rbmm.live_variable_analysis.m"
        {
#line 376 "rbmm.live_variable_analysis.m"
          mercury__set__fold_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_23, transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_24, transform_hlds__rbmm__live_variable_analysis__V_15_15, transform_hlds__rbmm__live_variable_analysis__ProducedSet_7, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_16_16)), &transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_12);
        }
#line 376 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__VoidVars_12 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_12);
#line 377 "rbmm.live_variable_analysis.m"
        {
#line 377 "rbmm.live_variable_analysis.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_24, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_6)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__VoidVars_12)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_13, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_14);
#line 377 "rbmm.live_variable_analysis.m"
          return;
        }
#line 375 "rbmm.live_variable_analysis.m"
      }
#line 374 "rbmm.live_variable_analysis.m"
  }
#line 368 "rbmm.live_variable_analysis.m"
}

#line 330 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_3,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_4,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_6,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7,
#line 330 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_8)
#line 330 "rbmm.live_variable_analysis.m"
{
#line 335 "rbmm.live_variable_analysis.m"
  while (MR_TRUE)
#line 335 "rbmm.live_variable_analysis.m"
    {
#line 335 "rbmm.live_variable_analysis.m"
      /* tailcall optimized into a loop */
#line 335 "rbmm.live_variable_analysis.m"
      {
#line 335 "rbmm.live_variable_analysis.m"
        MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;

#line 335 "rbmm.live_variable_analysis.m"
        if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "rbmm.live_variable_analysis.m"
          if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "rbmm.live_variable_analysis.m"
            {
#line 335 "rbmm.live_variable_analysis.m"
              *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7;
#line 335 "rbmm.live_variable_analysis.m"
              *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_6 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5;
#line 335 "rbmm.live_variable_analysis.m"
            }
#line 335 "rbmm.live_variable_analysis.m"
          else
#line 337 "rbmm.live_variable_analysis.m"
            {
#line 338 "rbmm.live_variable_analysis.m"
              {
#line 338 "rbmm.live_variable_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_variable_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.get_inputs_outputs_proc_call_2\'/8", (MR_String) "mismatched lists");
#line 338 "rbmm.live_variable_analysis.m"
                return;
              }
#line 337 "rbmm.live_variable_analysis.m"
            }
#line 335 "rbmm.live_variable_analysis.m"
        else
#line 335 "rbmm.live_variable_analysis.m"
          {
#line 335 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 0)));

#line 335 "rbmm.live_variable_analysis.m"
            if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "rbmm.live_variable_analysis.m"
              {
#line 341 "rbmm.live_variable_analysis.m"
                {
#line 341 "rbmm.live_variable_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_variable_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.get_inputs_outputs_proc_call_2\'/8", (MR_String) "mismatched lists");
#line 341 "rbmm.live_variable_analysis.m"
                  return;
                }
#line 340 "rbmm.live_variable_analysis.m"
              }
#line 335 "rbmm.live_variable_analysis.m"
            else
#line 344 "rbmm.live_variable_analysis.m"
              {
#line 344 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__ActualArg_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 344 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__ActualArgs_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 344 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51;
#line 344 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52;

#line 345 "rbmm.live_variable_analysis.m"
                {
#line 345 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_62_62)), transform_hlds__rbmm__live_variable_analysis__Inputs_3);
                }
#line 350 "rbmm.live_variable_analysis.m"
                if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 348 "rbmm.live_variable_analysis.m"
                  {
#line 348 "rbmm.live_variable_analysis.m"
                    {
#line 348 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "rbmm.live_variable_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ActualArg_45));
#line 348 "rbmm.live_variable_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5));
#line 348 "rbmm.live_variable_analysis.m"
                    }
#line 349 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7;
#line 348 "rbmm.live_variable_analysis.m"
                  }
#line 350 "rbmm.live_variable_analysis.m"
                else
#line 355 "rbmm.live_variable_analysis.m"
                  {
#line 350 "rbmm.live_variable_analysis.m"
                    {
#line 350 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_62_62)), transform_hlds__rbmm__live_variable_analysis__Outputs_4);
                    }
#line 355 "rbmm.live_variable_analysis.m"
                    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 353 "rbmm.live_variable_analysis.m"
                      {
#line 353 "rbmm.live_variable_analysis.m"
                        {
#line 353 "rbmm.live_variable_analysis.m"
                          transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "rbmm.live_variable_analysis.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ActualArg_45));
#line 353 "rbmm.live_variable_analysis.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7));
#line 353 "rbmm.live_variable_analysis.m"
                        }
#line 354 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5;
#line 353 "rbmm.live_variable_analysis.m"
                      }
#line 355 "rbmm.live_variable_analysis.m"
                    else
#line 358 "rbmm.live_variable_analysis.m"
                      {
#line 358 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5;
#line 359 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7;
#line 358 "rbmm.live_variable_analysis.m"
                      }
#line 355 "rbmm.live_variable_analysis.m"
                  }
#line 361 "rbmm.live_variable_analysis.m"
                /* direct tailcall eliminated */
#line 361 "rbmm.live_variable_analysis.m"
                {
#line 361 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__live_variable_analysis__V_61_61;
#line 361 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__2__tmp_copy_2 = transform_hlds__rbmm__live_variable_analysis__ActualArgs_46;
#line 361 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0__tmp_copy_5 = transform_hlds__rbmm__live_variable_analysis__ActualInputs1_51;
#line 361 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0__tmp_copy_7 = transform_hlds__rbmm__live_variable_analysis__ActualOutputs1_52;

#line 361 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0_7 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualOutputs_0__tmp_copy_7;
#line 361 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0_5 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ActualInputs_0__tmp_copy_5;
#line 361 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__HeadVar__2_2 = transform_hlds__rbmm__live_variable_analysis__HeadVar__2__tmp_copy_2;
#line 361 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__HeadVar__1__tmp_copy_1;
#line 361 "rbmm.live_variable_analysis.m"
                }
#line 361 "rbmm.live_variable_analysis.m"
                continue;
#line 344 "rbmm.live_variable_analysis.m"
              }
#line 335 "rbmm.live_variable_analysis.m"
          }
#line 335 "rbmm.live_variable_analysis.m"
      }
#line 335 "rbmm.live_variable_analysis.m"
      break;
#line 335 "rbmm.live_variable_analysis.m"
    }
#line 330 "rbmm.live_variable_analysis.m"
}

#line 262 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(
#line 262 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_5,
#line 262 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Goal_6,
#line 262 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__UsedSet_7,
#line 262 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__ProducedSet_8)
#line 262 "rbmm.live_variable_analysis.m"
{
#line 265 "rbmm.live_variable_analysis.m"
  {
#line 265 "rbmm.live_variable_analysis.m"
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
#line 265 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_37_37;
#line 265 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__Useds_13;
#line 265 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__Produceds_14;
#line 272 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__Var_9;
#line 268 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Goal_6, (MR_Integer) 0)));
#line 268 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis___SwitchInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Goal_6, (MR_Integer) 1)));
#line 268 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__V_10_10;
#line 268 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__V_11_11;

#line 268 "rbmm.live_variable_analysis.m"
    transform_hlds__rbmm__live_variable_analysis__succeeded = ((((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 268 "rbmm.live_variable_analysis.m"
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 268 "rbmm.live_variable_analysis.m"
      {
#line 268 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__V_29_29, (MR_Integer) 1)));
#line 268 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__V_29_29, (MR_Integer) 2)));
#line 268 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__V_29_29, (MR_Integer) 3)));
#line 270 "rbmm.live_variable_analysis.m"
        {
#line 270 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "rbmm.live_variable_analysis.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Var_9));
#line 270 "rbmm.live_variable_analysis.m"
          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "rbmm.live_variable_analysis.m"
        }
#line 271 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "rbmm.live_variable_analysis.m"
      }
#line 268 "rbmm.live_variable_analysis.m"
    else
#line 273 "rbmm.live_variable_analysis.m"
      {
#line 273 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__Expr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Goal_6, (MR_Integer) 0)));
#line 273 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis___Info_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Goal_6, (MR_Integer) 1)));
#line 281 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__CalleePredId_17;
#line 281 "rbmm.live_variable_analysis.m"
        MR_Integer transform_hlds__rbmm__live_variable_analysis__CalleeProcId_18;
#line 281 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__Args_19;
#line 275 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis___BuiltIn_20;
#line 275 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis___Context_21;
#line 275 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis___Name_22;

#line 275 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Expr_15)) == (MR_mktag((MR_Integer) 2)));
#line 275 "rbmm.live_variable_analysis.m"
        if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 275 "rbmm.live_variable_analysis.m"
          {
#line 275 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis__CalleePredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 0)));
#line 275 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis__CalleeProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 1)));
#line 275 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 2)));
#line 275 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis___BuiltIn_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 3)));
#line 275 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 4)));
#line 275 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis___Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 5)));
#line 278 "rbmm.live_variable_analysis.m"
            {
#line 278 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__V_31_31;
#line 278 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__CalleeInfo_44;
#line 278 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_45;
#line 278 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_46;
#line 278 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__FormalArgs_47;
#line 323 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis___PredInfo_43;

#line 278 "rbmm.live_variable_analysis.m"
              {
#line 278 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__live_variable_analysis__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "rbmm.live_variable_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_31_31, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__CalleePredId_17));
#line 278 "rbmm.live_variable_analysis.m"
                MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_31_31, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__CalleeProcId_18));
#line 278 "rbmm.live_variable_analysis.m"
              }
#line 323 "rbmm.live_variable_analysis.m"
              {
#line 323 "rbmm.live_variable_analysis.m"
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_5, transform_hlds__rbmm__live_variable_analysis__V_31_31, &transform_hlds__rbmm__live_variable_analysis___PredInfo_43, &transform_hlds__rbmm__live_variable_analysis__CalleeInfo_44);
              }
#line 324 "rbmm.live_variable_analysis.m"
              {
#line 324 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_5, transform_hlds__rbmm__live_variable_analysis__CalleeInfo_44, &transform_hlds__rbmm__live_variable_analysis__Inputs_45, &transform_hlds__rbmm__live_variable_analysis__Outputs_46);
              }
#line 326 "rbmm.live_variable_analysis.m"
              {
#line 326 "rbmm.live_variable_analysis.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__rbmm__live_variable_analysis__CalleeInfo_44, &transform_hlds__rbmm__live_variable_analysis__FormalArgs_47);
              }
#line 327 "rbmm.live_variable_analysis.m"
              {
#line 327 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__live_variable_analysis__get_inputs_outputs_proc_call_2_8_p_0(transform_hlds__rbmm__live_variable_analysis__FormalArgs_47, transform_hlds__rbmm__live_variable_analysis__Args_19, transform_hlds__rbmm__live_variable_analysis__Inputs_45, transform_hlds__rbmm__live_variable_analysis__Outputs_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__live_variable_analysis__Useds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__rbmm__live_variable_analysis__Produceds_14);
              }
#line 278 "rbmm.live_variable_analysis.m"
            }
#line 275 "rbmm.live_variable_analysis.m"
          }
#line 275 "rbmm.live_variable_analysis.m"
        else
#line 286 "rbmm.live_variable_analysis.m"
          {
#line 286 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__Unification_26;
#line 282 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_23_23;
#line 282 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_24_24;
#line 282 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_25_25;
#line 282 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_27_27;

#line 282 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Expr_15)) == (MR_mktag((MR_Integer) 1)));
#line 282 "rbmm.live_variable_analysis.m"
            if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 282 "rbmm.live_variable_analysis.m"
              {
#line 282 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__live_variable_analysis__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 0)));
#line 282 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__live_variable_analysis__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 1)));
#line 282 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__live_variable_analysis__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 2)));
#line 282 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__live_variable_analysis__Unification_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 3)));
#line 282 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__live_variable_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 4)));
#line 307 "rbmm.live_variable_analysis.m"
                if (((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Unification_26)) == (MR_mktag((MR_Integer) 2))))
#line 311 "rbmm.live_variable_analysis.m"
                  {
#line 311 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__LVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 0)));
#line 311 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__RVar_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 1)));

#line 311 "rbmm.live_variable_analysis.m"
                    {
#line 311 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "rbmm.live_variable_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__RVar_66));
#line 311 "rbmm.live_variable_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "rbmm.live_variable_analysis.m"
                    }
#line 311 "rbmm.live_variable_analysis.m"
                    {
#line 311 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "rbmm.live_variable_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Produceds_14, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVar_65));
#line 311 "rbmm.live_variable_analysis.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Produceds_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "rbmm.live_variable_analysis.m"
                    }
#line 311 "rbmm.live_variable_analysis.m"
                  }
#line 307 "rbmm.live_variable_analysis.m"
                else
#line 307 "rbmm.live_variable_analysis.m"
                  if (((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Unification_26)) == (MR_mktag((MR_Integer) 0))))
#line 307 "rbmm.live_variable_analysis.m"
                    {
#line 307 "rbmm.live_variable_analysis.m"
                      MR_Word transform_hlds__rbmm__live_variable_analysis__LVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 0)));
#line 307 "rbmm.live_variable_analysis.m"
                      MR_Word transform_hlds__rbmm__live_variable_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 1)));
#line 307 "rbmm.live_variable_analysis.m"
                      MR_Word transform_hlds__rbmm__live_variable_analysis__V_53_53;
#line 307 "rbmm.live_variable_analysis.m"
                      MR_Word transform_hlds__rbmm__live_variable_analysis__V_54_54;
#line 307 "rbmm.live_variable_analysis.m"
                      MR_Word transform_hlds__rbmm__live_variable_analysis__V_55_55;
#line 307 "rbmm.live_variable_analysis.m"
                      MR_Word transform_hlds__rbmm__live_variable_analysis__V_56_56;

#line 307 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__Useds_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 2)));
#line 307 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 3)));
#line 307 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 4)));
#line 307 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 5)));
#line 307 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 6)));
#line 307 "rbmm.live_variable_analysis.m"
                      {
#line 307 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "rbmm.live_variable_analysis.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Produceds_14, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVar_50));
#line 307 "rbmm.live_variable_analysis.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Produceds_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "rbmm.live_variable_analysis.m"
                      }
#line 307 "rbmm.live_variable_analysis.m"
                    }
#line 307 "rbmm.live_variable_analysis.m"
                  else
#line 307 "rbmm.live_variable_analysis.m"
                    if (((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Unification_26)) == (MR_mktag((MR_Integer) 1))))
#line 309 "rbmm.live_variable_analysis.m"
                      {
#line 309 "rbmm.live_variable_analysis.m"
                        MR_Word transform_hlds__rbmm__live_variable_analysis__LVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 0)));
#line 309 "rbmm.live_variable_analysis.m"
                        MR_Word transform_hlds__rbmm__live_variable_analysis__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 1)));
#line 309 "rbmm.live_variable_analysis.m"
                        MR_Word transform_hlds__rbmm__live_variable_analysis__V_61_61;
#line 309 "rbmm.live_variable_analysis.m"
                        MR_Word transform_hlds__rbmm__live_variable_analysis__V_62_62;
#line 309 "rbmm.live_variable_analysis.m"
                        MR_Word transform_hlds__rbmm__live_variable_analysis__V_63_63;

#line 309 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__Produceds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 2)));
#line 309 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 3)));
#line 309 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 4)));
#line 309 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 5)));
#line 309 "rbmm.live_variable_analysis.m"
                        {
#line 309 "rbmm.live_variable_analysis.m"
                          transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "rbmm.live_variable_analysis.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVar_58));
#line 309 "rbmm.live_variable_analysis.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "rbmm.live_variable_analysis.m"
                        }
#line 309 "rbmm.live_variable_analysis.m"
                      }
#line 307 "rbmm.live_variable_analysis.m"
                    else
#line 307 "rbmm.live_variable_analysis.m"
                      if (((((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Unification_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 313 "rbmm.live_variable_analysis.m"
                        {
#line 313 "rbmm.live_variable_analysis.m"
                          transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "rbmm.live_variable_analysis.m"
                          transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "rbmm.live_variable_analysis.m"
                        }
#line 307 "rbmm.live_variable_analysis.m"
                      else
#line 312 "rbmm.live_variable_analysis.m"
                        {
#line 312 "rbmm.live_variable_analysis.m"
                          MR_Word transform_hlds__rbmm__live_variable_analysis__LVar_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 1)));
#line 312 "rbmm.live_variable_analysis.m"
                          MR_Word transform_hlds__rbmm__live_variable_analysis__RVar_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Unification_26, (MR_Integer) 2)));
#line 312 "rbmm.live_variable_analysis.m"
                          MR_Word transform_hlds__rbmm__live_variable_analysis__V_71_71;

#line 312 "rbmm.live_variable_analysis.m"
                          {
#line 312 "rbmm.live_variable_analysis.m"
                            transform_hlds__rbmm__live_variable_analysis__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "rbmm.live_variable_analysis.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__V_71_71, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__RVar_70));
#line 312 "rbmm.live_variable_analysis.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "rbmm.live_variable_analysis.m"
                          }
#line 312 "rbmm.live_variable_analysis.m"
                          {
#line 312 "rbmm.live_variable_analysis.m"
                            transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "rbmm.live_variable_analysis.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVar_69));
#line 312 "rbmm.live_variable_analysis.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__Useds_13, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_71_71));
#line 312 "rbmm.live_variable_analysis.m"
                          }
#line 312 "rbmm.live_variable_analysis.m"
                          transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "rbmm.live_variable_analysis.m"
                        }
#line 282 "rbmm.live_variable_analysis.m"
              }
#line 282 "rbmm.live_variable_analysis.m"
            else
#line 293 "rbmm.live_variable_analysis.m"
              {
#line 288 "rbmm.live_variable_analysis.m"
                if (((((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Expr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 287 "rbmm.live_variable_analysis.m"
                  {
#line 287 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 2)));
#line 287 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 1)));

#line 287 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__succeeded = (transform_hlds__rbmm__live_variable_analysis__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "rbmm.live_variable_analysis.m"
                  }
#line 288 "rbmm.live_variable_analysis.m"
                else
#line 288 "rbmm.live_variable_analysis.m"
                  if (((((MR_tag((MR_Word) transform_hlds__rbmm__live_variable_analysis__Expr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 288 "rbmm.live_variable_analysis.m"
                    {
#line 288 "rbmm.live_variable_analysis.m"
                      MR_Word transform_hlds__rbmm__live_variable_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__rbmm__live_variable_analysis__Expr_15, (MR_Integer) 1)));

#line 288 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__succeeded = (transform_hlds__rbmm__live_variable_analysis__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "rbmm.live_variable_analysis.m"
                    }
#line 288 "rbmm.live_variable_analysis.m"
                  else
#line 288 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__succeeded = MR_FALSE;
#line 293 "rbmm.live_variable_analysis.m"
                if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 291 "rbmm.live_variable_analysis.m"
                  {
#line 291 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__Useds_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 292 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__Produceds_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 291 "rbmm.live_variable_analysis.m"
                  }
#line 293 "rbmm.live_variable_analysis.m"
                else
#line 294 "rbmm.live_variable_analysis.m"
                  {
#line 294 "rbmm.live_variable_analysis.m"
                    {
#line 294 "rbmm.live_variable_analysis.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_variable_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.compute_useds_produceds\'/4", (MR_String) "the expression must be either call, unify, true, or fail");
#line 294 "rbmm.live_variable_analysis.m"
                      return;
                    }
#line 294 "rbmm.live_variable_analysis.m"
                  }
#line 293 "rbmm.live_variable_analysis.m"
              }
#line 286 "rbmm.live_variable_analysis.m"
          }
#line 273 "rbmm.live_variable_analysis.m"
      }
#line 1451 "transform_hlds.rbmm.live_variable_analysis.c"
    transform_hlds__rbmm__live_variable_analysis__TypeInfo_37_37 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
#line 298 "rbmm.live_variable_analysis.m"
    {
#line 298 "rbmm.live_variable_analysis.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_37_37, transform_hlds__rbmm__live_variable_analysis__Useds_13, transform_hlds__rbmm__live_variable_analysis__UsedSet_7);
    }
#line 299 "rbmm.live_variable_analysis.m"
    {
#line 299 "rbmm.live_variable_analysis.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_37_37, transform_hlds__rbmm__live_variable_analysis__Produceds_14, transform_hlds__rbmm__live_variable_analysis__ProducedSet_8);
#line 299 "rbmm.live_variable_analysis.m"
      return;
    }
#line 265 "rbmm.live_variable_analysis.m"
  }
#line 262 "rbmm.live_variable_analysis.m"
}

#line 247 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(
#line 247 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_5,
#line 247 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__LV_6,
#line 247 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9,
#line 247 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_10)
#line 247 "rbmm.live_variable_analysis.m"
{
#line 253 "rbmm.live_variable_analysis.m"
  {
#line 253 "rbmm.live_variable_analysis.m"
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
#line 253 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__ExistingLV_8;
#line 251 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv0_ExistingLV_8;

#line 251 "rbmm.live_variable_analysis.m"
    {
#line 251 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_5)), &transform_hlds__rbmm__live_variable_analysis__conv0_ExistingLV_8);
    }
#line 251 "rbmm.live_variable_analysis.m"
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 251 "rbmm.live_variable_analysis.m"
      {
#line 251 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__ExistingLV_8 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0_ExistingLV_8);
#line 251 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
#line 251 "rbmm.live_variable_analysis.m"
      }
#line 253 "rbmm.live_variable_analysis.m"
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 252 "rbmm.live_variable_analysis.m"
      {
#line 252 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__V_11_11;

#line 252 "rbmm.live_variable_analysis.m"
        {
#line 252 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__V_11_11 = mercury__set__union_2_f_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], transform_hlds__rbmm__live_variable_analysis__ExistingLV_8, transform_hlds__rbmm__live_variable_analysis__LV_6);
        }
#line 252 "rbmm.live_variable_analysis.m"
        {
#line 252 "rbmm.live_variable_analysis.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_5)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_11_11)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_10);
#line 252 "rbmm.live_variable_analysis.m"
          return;
        }
#line 252 "rbmm.live_variable_analysis.m"
      }
#line 253 "rbmm.live_variable_analysis.m"
    else
#line 254 "rbmm.live_variable_analysis.m"
      {
#line 254 "rbmm.live_variable_analysis.m"
        {
#line 254 "rbmm.live_variable_analysis.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_5)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LV_6)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_0_9, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLV_10);
#line 254 "rbmm.live_variable_analysis.m"
          return;
        }
#line 254 "rbmm.live_variable_analysis.m"
      }
#line 253 "rbmm.live_variable_analysis.m"
  }
#line 247 "rbmm.live_variable_analysis.m"
}

#line 376 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0_1(
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
#line 376 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3)
#line 376 "rbmm.live_variable_analysis.m"
{
#line 376 "rbmm.live_variable_analysis.m"
  {
#line 376 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__closure = transform_hlds__rbmm__live_variable_analysis__closure_arg;
#line 376 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10;

#line 376 "rbmm.live_variable_analysis.m"
    {
#line 376 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__void_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10);
    }
#line 376 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_VoidVars_10));
#line 376 "rbmm.live_variable_analysis.m"
  }
#line 376 "rbmm.live_variable_analysis.m"
}

#line 222 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0(
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_3,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10,
#line 222 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11)
#line 222 "rbmm.live_variable_analysis.m"
{
#line 229 "rbmm.live_variable_analysis.m"
  {
#line 229 "rbmm.live_variable_analysis.m"
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;

#line 229 "rbmm.live_variable_analysis.m"
    if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "rbmm.live_variable_analysis.m"
      {
#line 240 "rbmm.live_variable_analysis.m"
        {
#line 240 "rbmm.live_variable_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.rbmm.live_variable_analysis", (MR_String) "predicate \140transform_hlds.rbmm.live_variable_analysis.live_variable_analysis_singleton_exec_path\'/11", (MR_String) "empty list");
#line 240 "rbmm.live_variable_analysis.m"
          return;
        }
#line 239 "rbmm.live_variable_analysis.m"
      }
#line 229 "rbmm.live_variable_analysis.m"
    else
#line 229 "rbmm.live_variable_analysis.m"
      {
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_52_52;
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_53_53;
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_54_54;
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__ProgPoint_12;
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__Goal_13;
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__LVBefore_22;
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__LVAfter_23;
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_25;
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 236 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis___UsedSet_24;
#line 372 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis___DeadVars_61;
#line 372 "rbmm.live_variable_analysis.m"
        MR_Box transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_61;

#line 227 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__ProgPoint_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_32_32, (MR_Integer) 0)));
#line 227 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_32_32, (MR_Integer) 1)));
#line 1658 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeInfo_52_52 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
#line 230 "rbmm.live_variable_analysis.m"
        {
#line 230 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__LVBefore_22 = mercury__set__list_to_set_1_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_52_52, transform_hlds__rbmm__live_variable_analysis__Inputs_2);
        }
#line 1665 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_53_53 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 1667 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeInfo_54_54 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1];
#line 231 "rbmm.live_variable_analysis.m"
        {
#line 231 "rbmm.live_variable_analysis.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_53_53, transform_hlds__rbmm__live_variable_analysis__TypeInfo_54_54, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_12)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVBefore_22)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7);
        }
#line 232 "rbmm.live_variable_analysis.m"
        {
#line 232 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__LVAfter_23 = mercury__set__list_to_set_1_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_52_52, transform_hlds__rbmm__live_variable_analysis__Outputs_3);
        }
#line 233 "rbmm.live_variable_analysis.m"
        {
#line 233 "rbmm.live_variable_analysis.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_53_53, transform_hlds__rbmm__live_variable_analysis__TypeInfo_54_54, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_12)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVAfter_23)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9);
        }
#line 236 "rbmm.live_variable_analysis.m"
        {
#line 236 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__Goal_13, &transform_hlds__rbmm__live_variable_analysis___UsedSet_24, &transform_hlds__rbmm__live_variable_analysis__ProducedSet_25);
        }
#line 372 "rbmm.live_variable_analysis.m"
        {
#line 372 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_12)), &transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_61);
        }
#line 372 "rbmm.live_variable_analysis.m"
        if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 372 "rbmm.live_variable_analysis.m"
          {
#line 372 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis___DeadVars_61 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0__DeadVars_61);
#line 372 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
#line 372 "rbmm.live_variable_analysis.m"
          }
#line 374 "rbmm.live_variable_analysis.m"
        if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 372 "rbmm.live_variable_analysis.m"
          *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10;
#line 374 "rbmm.live_variable_analysis.m"
        else
#line 375 "rbmm.live_variable_analysis.m"
          {
#line 375 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_72;
#line 375 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_73;
#line 375 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__Varset_62;
#line 375 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__VoidVars_63;
#line 375 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_64_64;
#line 375 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_65_65;
#line 376 "rbmm.live_variable_analysis.m"
            MR_Box transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_63;

#line 375 "rbmm.live_variable_analysis.m"
            {
#line 375 "rbmm.live_variable_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, &transform_hlds__rbmm__live_variable_analysis__Varset_62);
            }
#line 376 "rbmm.live_variable_analysis.m"
            {
#line 376 "rbmm.live_variable_analysis.m"
              transform_hlds__rbmm__live_variable_analysis__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "rbmm.live_variable_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_64_64, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_5[0]));
#line 376 "rbmm.live_variable_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_64_64, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0_1));
#line 376 "rbmm.live_variable_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 376 "rbmm.live_variable_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_64_64, 3) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__Varset_62));
#line 376 "rbmm.live_variable_analysis.m"
            }
#line 1746 "transform_hlds.rbmm.live_variable_analysis.c"
            transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_72 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
#line 376 "rbmm.live_variable_analysis.m"
            {
#line 376 "rbmm.live_variable_analysis.m"
              transform_hlds__rbmm__live_variable_analysis__V_65_65 = mercury__set__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_72);
            }
#line 1753 "transform_hlds.rbmm.live_variable_analysis.c"
            transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_73 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1];
#line 376 "rbmm.live_variable_analysis.m"
            {
#line 376 "rbmm.live_variable_analysis.m"
              mercury__set__fold_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_23_72, transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_73, transform_hlds__rbmm__live_variable_analysis__V_64_64, transform_hlds__rbmm__live_variable_analysis__ProducedSet_25, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_65_65)), &transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_63);
            }
#line 376 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis__VoidVars_63 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv2_VoidVars_63);
#line 377 "rbmm.live_variable_analysis.m"
            {
#line 377 "rbmm.live_variable_analysis.m"
              mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, transform_hlds__rbmm__live_variable_analysis__TypeInfo_24_73, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProgPoint_12)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__VoidVars_63)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11);
#line 377 "rbmm.live_variable_analysis.m"
              return;
            }
#line 375 "rbmm.live_variable_analysis.m"
          }
#line 229 "rbmm.live_variable_analysis.m"
      }
#line 229 "rbmm.live_variable_analysis.m"
  }
#line 222 "rbmm.live_variable_analysis.m"
}

#line 138 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__3_3,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_11,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12,
#line 138 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_13)
#line 138 "rbmm.live_variable_analysis.m"
{
#line 144 "rbmm.live_variable_analysis.m"
  while (MR_TRUE)
#line 144 "rbmm.live_variable_analysis.m"
    {
#line 144 "rbmm.live_variable_analysis.m"
      /* tailcall optimized into a loop */
#line 144 "rbmm.live_variable_analysis.m"
      {
#line 144 "rbmm.live_variable_analysis.m"
        MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;

#line 144 "rbmm.live_variable_analysis.m"
        if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "rbmm.live_variable_analysis.m"
          {
#line 144 "rbmm.live_variable_analysis.m"
            *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_13 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12;
#line 144 "rbmm.live_variable_analysis.m"
            *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_11 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10;
#line 144 "rbmm.live_variable_analysis.m"
            *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8;
#line 144 "rbmm.live_variable_analysis.m"
          }
#line 144 "rbmm.live_variable_analysis.m"
        else
#line 144 "rbmm.live_variable_analysis.m"
          {
#line 144 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 144 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_130_130, (MR_Integer) 1)));
#line 144 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_130_130, (MR_Integer) 0)));

#line 144 "rbmm.live_variable_analysis.m"
            if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6 == (MR_Integer) 0))
#line 144 "rbmm.live_variable_analysis.m"
              if ((transform_hlds__rbmm__live_variable_analysis__V_129_129 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "rbmm.live_variable_analysis.m"
                {
#line 204 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_105;
#line 205 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis___LVBeforeFirst_102;
#line 205 "rbmm.live_variable_analysis.m"
                  MR_Box transform_hlds__rbmm__live_variable_analysis__conv0__LVBeforeFirst_102;
#line 216 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis___UsedSet_104;

#line 205 "rbmm.live_variable_analysis.m"
                  {
#line 205 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_134_134)), &transform_hlds__rbmm__live_variable_analysis__conv0__LVBeforeFirst_102);
                  }
#line 205 "rbmm.live_variable_analysis.m"
                  if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 205 "rbmm.live_variable_analysis.m"
                    {
#line 205 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis___LVBeforeFirst_102 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0__LVBeforeFirst_102);
#line 205 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
#line 205 "rbmm.live_variable_analysis.m"
                    }
#line 207 "rbmm.live_variable_analysis.m"
                  if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 205 "rbmm.live_variable_analysis.m"
                    *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8;
#line 207 "rbmm.live_variable_analysis.m"
                  else
#line 208 "rbmm.live_variable_analysis.m"
                    {
#line 208 "rbmm.live_variable_analysis.m"
                      MR_Word transform_hlds__rbmm__live_variable_analysis__LVBeforeFirst_103;

#line 208 "rbmm.live_variable_analysis.m"
                      {
#line 208 "rbmm.live_variable_analysis.m"
                        transform_hlds__rbmm__live_variable_analysis__LVBeforeFirst_103 = mercury__set__list_to_set_1_f_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], transform_hlds__rbmm__live_variable_analysis__Inputs_2);
                      }
#line 209 "rbmm.live_variable_analysis.m"
                      {
#line 209 "rbmm.live_variable_analysis.m"
                        mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_134_134)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVBeforeFirst_103)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_9);
                      }
#line 208 "rbmm.live_variable_analysis.m"
                    }
#line 213 "rbmm.live_variable_analysis.m"
                  {
#line 213 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(transform_hlds__rbmm__live_variable_analysis__V_134_134, transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_11);
                  }
#line 216 "rbmm.live_variable_analysis.m"
                  {
#line 216 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__V_133_133, &transform_hlds__rbmm__live_variable_analysis___UsedSet_104, &transform_hlds__rbmm__live_variable_analysis__ProducedSet_105);
                  }
#line 217 "rbmm.live_variable_analysis.m"
                  {
#line 217 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(transform_hlds__rbmm__live_variable_analysis__V_134_134, transform_hlds__rbmm__live_variable_analysis__ProducedSet_105, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_13);
#line 217 "rbmm.live_variable_analysis.m"
                    return;
                  }
#line 204 "rbmm.live_variable_analysis.m"
                }
#line 144 "rbmm.live_variable_analysis.m"
              else
#line 180 "rbmm.live_variable_analysis.m"
                {
#line 180 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_123_123;
#line 180 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__UsedSet_72;
#line 180 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_73;
#line 180 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__LVBeforeInThisExecPath_74;
#line 180 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_83_83;
#line 180 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__V_84_84;
#line 180 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_85_85;
#line 180 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_86_86;

#line 183 "rbmm.live_variable_analysis.m"
                  {
#line 183 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(transform_hlds__rbmm__live_variable_analysis__V_134_134, transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_83_83);
                  }
#line 186 "rbmm.live_variable_analysis.m"
                  {
#line 186 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__V_133_133, &transform_hlds__rbmm__live_variable_analysis__UsedSet_72, &transform_hlds__rbmm__live_variable_analysis__ProducedSet_73);
                  }
#line 1948 "transform_hlds.rbmm.live_variable_analysis.c"
                  transform_hlds__rbmm__live_variable_analysis__TypeInfo_123_123 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
#line 187 "rbmm.live_variable_analysis.m"
                  {
#line 187 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__V_84_84 = mercury__set__difference_2_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_123_123, transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7, transform_hlds__rbmm__live_variable_analysis__ProducedSet_73);
                  }
#line 187 "rbmm.live_variable_analysis.m"
                  {
#line 187 "rbmm.live_variable_analysis.m"
                    mercury__set__union_3_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_123_123, transform_hlds__rbmm__live_variable_analysis__V_84_84, transform_hlds__rbmm__live_variable_analysis__UsedSet_72, &transform_hlds__rbmm__live_variable_analysis__LVBeforeInThisExecPath_74);
                  }
#line 189 "rbmm.live_variable_analysis.m"
                  {
#line 189 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(transform_hlds__rbmm__live_variable_analysis__V_134_134, transform_hlds__rbmm__live_variable_analysis__LVBeforeInThisExecPath_74, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_85_85);
                  }
#line 193 "rbmm.live_variable_analysis.m"
                  {
#line 193 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(transform_hlds__rbmm__live_variable_analysis__V_134_134, transform_hlds__rbmm__live_variable_analysis__ProducedSet_73, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_86_86);
                  }
#line 195 "rbmm.live_variable_analysis.m"
                  /* direct tailcall eliminated */
#line 195 "rbmm.live_variable_analysis.m"
                  {
#line 195 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__live_variable_analysis__V_129_129;
#line 195 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__7__tmp_copy_7 = transform_hlds__rbmm__live_variable_analysis__LVBeforeInThisExecPath_74;
#line 195 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0__tmp_copy_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_85_85;
#line 195 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0__tmp_copy_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_83_83;
#line 195 "rbmm.live_variable_analysis.m"
                    MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0__tmp_copy_12 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_86_86;

#line 195 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0__tmp_copy_12;
#line 195 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0__tmp_copy_10;
#line 195 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0__tmp_copy_8;
#line 195 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7 = transform_hlds__rbmm__live_variable_analysis__HeadVar__7__tmp_copy_7;
#line 195 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6 = (MR_Integer) 0;
#line 195 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__HeadVar__1__tmp_copy_1;
#line 195 "rbmm.live_variable_analysis.m"
                  }
#line 195 "rbmm.live_variable_analysis.m"
                  continue;
#line 180 "rbmm.live_variable_analysis.m"
                }
#line 144 "rbmm.live_variable_analysis.m"
            else
#line 153 "rbmm.live_variable_analysis.m"
              {
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_122_122;
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41;
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__UsedSet_42;
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__ProducedSet_43;
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__LVBeforeLastInThisExecPath_44;
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_52_52;
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__V_53_53;
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_54_54;
#line 153 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_55_55;
#line 156 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__LVAfterLast0_40;
#line 154 "rbmm.live_variable_analysis.m"
                MR_Box transform_hlds__rbmm__live_variable_analysis__conv1_LVAfterLast0_40;

#line 154 "rbmm.live_variable_analysis.m"
                {
#line 154 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_134_134)), &transform_hlds__rbmm__live_variable_analysis__conv1_LVAfterLast0_40);
                }
#line 154 "rbmm.live_variable_analysis.m"
                if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 154 "rbmm.live_variable_analysis.m"
                  {
#line 154 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__LVAfterLast0_40 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv1_LVAfterLast0_40);
#line 154 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__succeeded = MR_TRUE;
#line 154 "rbmm.live_variable_analysis.m"
                  }
#line 156 "rbmm.live_variable_analysis.m"
                if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 155 "rbmm.live_variable_analysis.m"
                  {
#line 155 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41 = transform_hlds__rbmm__live_variable_analysis__LVAfterLast0_40;
#line 155 "rbmm.live_variable_analysis.m"
                    transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_52_52 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10;
#line 155 "rbmm.live_variable_analysis.m"
                  }
#line 156 "rbmm.live_variable_analysis.m"
                else
#line 157 "rbmm.live_variable_analysis.m"
                  {
#line 157 "rbmm.live_variable_analysis.m"
                    {
#line 157 "rbmm.live_variable_analysis.m"
                      transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41 = mercury__set__list_to_set_1_f_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0], transform_hlds__rbmm__live_variable_analysis__HeadVar__3_3);
                    }
#line 158 "rbmm.live_variable_analysis.m"
                    {
#line 158 "rbmm.live_variable_analysis.m"
                      mercury__map__set_4_p_0((MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1], ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__V_134_134)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_52_52);
                    }
#line 157 "rbmm.live_variable_analysis.m"
                  }
#line 162 "rbmm.live_variable_analysis.m"
                {
#line 162 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__compute_useds_produceds_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__V_133_133, &transform_hlds__rbmm__live_variable_analysis__UsedSet_42, &transform_hlds__rbmm__live_variable_analysis__ProducedSet_43);
                }
#line 2076 "transform_hlds.rbmm.live_variable_analysis.c"
                transform_hlds__rbmm__live_variable_analysis__TypeInfo_122_122 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0];
#line 163 "rbmm.live_variable_analysis.m"
                {
#line 163 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__V_53_53 = mercury__set__difference_2_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_122_122, transform_hlds__rbmm__live_variable_analysis__LVAfterLast_41, transform_hlds__rbmm__live_variable_analysis__ProducedSet_43);
                }
#line 163 "rbmm.live_variable_analysis.m"
                {
#line 163 "rbmm.live_variable_analysis.m"
                  mercury__set__union_3_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_122_122, transform_hlds__rbmm__live_variable_analysis__V_53_53, transform_hlds__rbmm__live_variable_analysis__UsedSet_42, &transform_hlds__rbmm__live_variable_analysis__LVBeforeLastInThisExecPath_44);
                }
#line 165 "rbmm.live_variable_analysis.m"
                {
#line 165 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__record_live_vars_at_prog_point_4_p_0(transform_hlds__rbmm__live_variable_analysis__V_134_134, transform_hlds__rbmm__live_variable_analysis__LVBeforeLastInThisExecPath_44, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_54_54);
                }
#line 169 "rbmm.live_variable_analysis.m"
                {
#line 169 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__collect_void_vars_5_p_0(transform_hlds__rbmm__live_variable_analysis__V_134_134, transform_hlds__rbmm__live_variable_analysis__ProducedSet_43, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_55_55);
                }
#line 171 "rbmm.live_variable_analysis.m"
                /* direct tailcall eliminated */
#line 171 "rbmm.live_variable_analysis.m"
                {
#line 171 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__live_variable_analysis__V_129_129;
#line 171 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__7__tmp_copy_7 = transform_hlds__rbmm__live_variable_analysis__LVBeforeLastInThisExecPath_44;
#line 171 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0__tmp_copy_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_54_54;
#line 171 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0__tmp_copy_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_52_52;
#line 171 "rbmm.live_variable_analysis.m"
                  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0__tmp_copy_12 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_55_55;

#line 171 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_12 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0__tmp_copy_12;
#line 171 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0__tmp_copy_10;
#line 171 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0__tmp_copy_8;
#line 171 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__HeadVar__7_7 = transform_hlds__rbmm__live_variable_analysis__HeadVar__7__tmp_copy_7;
#line 171 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__HeadVar__6_6 = (MR_Integer) 0;
#line 171 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__HeadVar__1__tmp_copy_1;
#line 171 "rbmm.live_variable_analysis.m"
                }
#line 171 "rbmm.live_variable_analysis.m"
                continue;
#line 153 "rbmm.live_variable_analysis.m"
              }
#line 144 "rbmm.live_variable_analysis.m"
          }
#line 144 "rbmm.live_variable_analysis.m"
      }
#line 144 "rbmm.live_variable_analysis.m"
      break;
#line 144 "rbmm.live_variable_analysis.m"
    }
#line 138 "rbmm.live_variable_analysis.m"
}

#line 111 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_2,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_3,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_5,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10,
#line 111 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11)
#line 111 "rbmm.live_variable_analysis.m"
{
#line 121 "rbmm.live_variable_analysis.m"
  while (MR_TRUE)
#line 121 "rbmm.live_variable_analysis.m"
    {
#line 121 "rbmm.live_variable_analysis.m"
      /* tailcall optimized into a loop */
#line 121 "rbmm.live_variable_analysis.m"
      {
#line 121 "rbmm.live_variable_analysis.m"
        MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;

#line 121 "rbmm.live_variable_analysis.m"
        if ((transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "rbmm.live_variable_analysis.m"
          {
#line 121 "rbmm.live_variable_analysis.m"
            *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_11 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10;
#line 121 "rbmm.live_variable_analysis.m"
            *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_9 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8;
#line 121 "rbmm.live_variable_analysis.m"
            *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_7 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6;
#line 121 "rbmm.live_variable_analysis.m"
          }
#line 121 "rbmm.live_variable_analysis.m"
        else
#line 124 "rbmm.live_variable_analysis.m"
          {
#line 124 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_53_53 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[2];
#line 124 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPath0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPaths_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 124 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPath_34;
#line 124 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_42_42;
#line 124 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_43_43;
#line 124 "rbmm.live_variable_analysis.m"
            MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_44_44;
#line 126 "rbmm.live_variable_analysis.m"
            MR_Integer transform_hlds__rbmm__live_variable_analysis__V_41_41;

#line 125 "rbmm.live_variable_analysis.m"
            {
#line 125 "rbmm.live_variable_analysis.m"
              mercury__list__reverse_2_p_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_53_53, transform_hlds__rbmm__live_variable_analysis__ExecPath0_25, &transform_hlds__rbmm__live_variable_analysis__ExecPath_34);
            }
#line 126 "rbmm.live_variable_analysis.m"
            {
#line 126 "rbmm.live_variable_analysis.m"
              transform_hlds__rbmm__live_variable_analysis__V_41_41 = mercury__list__length_1_f_0(transform_hlds__rbmm__live_variable_analysis__TypeInfo_53_53, transform_hlds__rbmm__live_variable_analysis__ExecPath_34);
            }
#line 126 "rbmm.live_variable_analysis.m"
            transform_hlds__rbmm__live_variable_analysis__succeeded = (transform_hlds__rbmm__live_variable_analysis__V_41_41 == (MR_Integer) 1);
#line 129 "rbmm.live_variable_analysis.m"
            if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 127 "rbmm.live_variable_analysis.m"
              {
#line 127 "rbmm.live_variable_analysis.m"
                transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_singleton_exec_path_11_p_0(transform_hlds__rbmm__live_variable_analysis__ExecPath_34, transform_hlds__rbmm__live_variable_analysis__Inputs_2, transform_hlds__rbmm__live_variable_analysis__Outputs_3, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_42_42, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_43_43, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_44_44);
              }
#line 129 "rbmm.live_variable_analysis.m"
            else
#line 131 "rbmm.live_variable_analysis.m"
              {
#line 131 "rbmm.live_variable_analysis.m"
                MR_Word transform_hlds__rbmm__live_variable_analysis__V_46_46;

#line 131 "rbmm.live_variable_analysis.m"
                {
#line 131 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__V_46_46 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[0]);
                }
#line 131 "rbmm.live_variable_analysis.m"
                {
#line 131 "rbmm.live_variable_analysis.m"
                  transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_path_13_p_0(transform_hlds__rbmm__live_variable_analysis__ExecPath_34, transform_hlds__rbmm__live_variable_analysis__Inputs_2, transform_hlds__rbmm__live_variable_analysis__Outputs_3, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_4, transform_hlds__rbmm__live_variable_analysis__ProcInfo_5, (MR_Integer) 1, transform_hlds__rbmm__live_variable_analysis__V_46_46, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_42_42, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_43_43, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10, &transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_44_44);
                }
#line 131 "rbmm.live_variable_analysis.m"
              }
#line 135 "rbmm.live_variable_analysis.m"
            /* direct tailcall eliminated */
#line 135 "rbmm.live_variable_analysis.m"
            {
#line 135 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__HeadVar__1__tmp_copy_1 = transform_hlds__rbmm__live_variable_analysis__ExecPaths_26;
#line 135 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0__tmp_copy_6 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_42_42;
#line 135 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0__tmp_copy_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_43_43;
#line 135 "rbmm.live_variable_analysis.m"
              MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0__tmp_copy_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_44_44;

#line 135 "rbmm.live_variable_analysis.m"
              transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0_10 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcVoidVar_0__tmp_copy_10;
#line 135 "rbmm.live_variable_analysis.m"
              transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0_8 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVAfter_0__tmp_copy_8;
#line 135 "rbmm.live_variable_analysis.m"
              transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0_6 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_ProcLVBefore_0__tmp_copy_6;
#line 135 "rbmm.live_variable_analysis.m"
              transform_hlds__rbmm__live_variable_analysis__HeadVar__1_1 = transform_hlds__rbmm__live_variable_analysis__HeadVar__1__tmp_copy_1;
#line 135 "rbmm.live_variable_analysis.m"
            }
#line 135 "rbmm.live_variable_analysis.m"
            continue;
#line 124 "rbmm.live_variable_analysis.m"
          }
#line 121 "rbmm.live_variable_analysis.m"
      }
#line 121 "rbmm.live_variable_analysis.m"
      break;
#line 121 "rbmm.live_variable_analysis.m"
    }
#line 111 "rbmm.live_variable_analysis.m"
}

#line 87 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_12,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__PredId_13,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Integer transform_hlds__rbmm__live_variable_analysis__ProcId_14,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_26,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_27,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_28,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_29,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_30,
#line 87 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_31)
#line 87 "rbmm.live_variable_analysis.m"
{
#line 94 "rbmm.live_variable_analysis.m"
  {
#line 94 "rbmm.live_variable_analysis.m"
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
#line 94 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__PPId_18;
#line 96 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__V_32_32;

#line 95 "rbmm.live_variable_analysis.m"
    {
#line 95 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__PPId_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 95 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__PPId_18, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PredId_13));
#line 95 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__PPId_18, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProcId_14));
#line 95 "rbmm.live_variable_analysis.m"
    }
#line 96 "rbmm.live_variable_analysis.m"
    {
#line 96 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__V_32_32, 0) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18));
#line 96 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(1), transform_hlds__rbmm__live_variable_analysis__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 96 "rbmm.live_variable_analysis.m"
    }
#line 96 "rbmm.live_variable_analysis.m"
    {
#line 96 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(transform_hlds__rbmm__live_variable_analysis__V_32_32, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11);
    }
#line 98 "rbmm.live_variable_analysis.m"
    if (transform_hlds__rbmm__live_variable_analysis__succeeded)
#line 97 "rbmm.live_variable_analysis.m"
      {
#line 97 "rbmm.live_variable_analysis.m"
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_31 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_30;
#line 97 "rbmm.live_variable_analysis.m"
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_29 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_28;
#line 97 "rbmm.live_variable_analysis.m"
        *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_27 = transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_26;
#line 97 "rbmm.live_variable_analysis.m"
      }
#line 98 "rbmm.live_variable_analysis.m"
    else
#line 99 "rbmm.live_variable_analysis.m"
      {
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__ProcInfo_19;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__Inputs_20;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__Outputs_21;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPaths_22;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__ProcLVBefore_23;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__ProcLVAfter_24;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__ProcVoidVar_25;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__V_34_34;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__V_35_35;
#line 99 "rbmm.live_variable_analysis.m"
        MR_Word transform_hlds__rbmm__live_variable_analysis__V_36_36;
#line 101 "rbmm.live_variable_analysis.m"
        MR_Box transform_hlds__rbmm__live_variable_analysis__conv0_ExecPaths_22;

#line 99 "rbmm.live_variable_analysis.m"
        {
#line 99 "rbmm.live_variable_analysis.m"
          hlds__hlds_module__module_info_proc_info_3_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11, transform_hlds__rbmm__live_variable_analysis__PPId_18, &transform_hlds__rbmm__live_variable_analysis__ProcInfo_19);
        }
#line 100 "rbmm.live_variable_analysis.m"
        {
#line 100 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11, transform_hlds__rbmm__live_variable_analysis__ProcInfo_19, &transform_hlds__rbmm__live_variable_analysis__Inputs_20, &transform_hlds__rbmm__live_variable_analysis__Outputs_21);
        }
#line 2403 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 101 "rbmm.live_variable_analysis.m"
        {
#line 101 "rbmm.live_variable_analysis.m"
          mercury__map__lookup_3_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40, (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[3], transform_hlds__rbmm__live_variable_analysis__ExecPathTable_12, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18)), &transform_hlds__rbmm__live_variable_analysis__conv0_ExecPaths_22);
        }
#line 101 "rbmm.live_variable_analysis.m"
        transform_hlds__rbmm__live_variable_analysis__ExecPaths_22 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv0_ExecPaths_22);
#line 2412 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42 = (MR_Word) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0;
#line 2414 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_1[1];
#line 102 "rbmm.live_variable_analysis.m"
        {
#line 102 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__V_34_34 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42, transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43);
        }
#line 102 "rbmm.live_variable_analysis.m"
        {
#line 102 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__V_35_35 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42, transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43);
        }
#line 102 "rbmm.live_variable_analysis.m"
        {
#line 102 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__V_36_36 = mercury__map__init_0_f_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_42_42, transform_hlds__rbmm__live_variable_analysis__TypeInfo_43_43);
        }
#line 102 "rbmm.live_variable_analysis.m"
        {
#line 102 "rbmm.live_variable_analysis.m"
          transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_exec_paths_11_p_0(transform_hlds__rbmm__live_variable_analysis__ExecPaths_22, transform_hlds__rbmm__live_variable_analysis__Inputs_20, transform_hlds__rbmm__live_variable_analysis__Outputs_21, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_11, transform_hlds__rbmm__live_variable_analysis__ProcInfo_19, transform_hlds__rbmm__live_variable_analysis__V_34_34, &transform_hlds__rbmm__live_variable_analysis__ProcLVBefore_23, transform_hlds__rbmm__live_variable_analysis__V_35_35, &transform_hlds__rbmm__live_variable_analysis__ProcLVAfter_24, transform_hlds__rbmm__live_variable_analysis__V_36_36, &transform_hlds__rbmm__live_variable_analysis__ProcVoidVar_25);
        }
#line 2436 "transform_hlds.rbmm.live_variable_analysis.c"
        transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0];
#line 106 "rbmm.live_variable_analysis.m"
        {
#line 106 "rbmm.live_variable_analysis.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40, transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProcLVBefore_23)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_26, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_27);
        }
#line 107 "rbmm.live_variable_analysis.m"
        {
#line 107 "rbmm.live_variable_analysis.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40, transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProcLVAfter_24)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_28, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_29);
        }
#line 108 "rbmm.live_variable_analysis.m"
        {
#line 108 "rbmm.live_variable_analysis.m"
          mercury__map__set_4_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_40_40, transform_hlds__rbmm__live_variable_analysis__TypeInfo_44_44, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PPId_18)), ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ProcVoidVar_25)), transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_30, transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_31);
#line 108 "rbmm.live_variable_analysis.m"
          return;
        }
#line 99 "rbmm.live_variable_analysis.m"
      }
#line 94 "rbmm.live_variable_analysis.m"
  }
#line 87 "rbmm.live_variable_analysis.m"
}

#line 83 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1(
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6,
#line 83 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7)
#line 83 "rbmm.live_variable_analysis.m"
{
#line 83 "rbmm.live_variable_analysis.m"
  {
#line 83 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__closure = transform_hlds__rbmm__live_variable_analysis__closure_arg;
#line 83 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_27;
#line 83 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_29;
#line 83 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_31;

#line 83 "rbmm.live_variable_analysis.m"
    {
#line 83 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_proc_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_27, ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4), &transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_29, ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6), &transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_31);
    }
#line 83 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_27));
#line 83 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_29));
#line 83 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_31));
#line 83 "rbmm.live_variable_analysis.m"
  }
#line 83 "rbmm.live_variable_analysis.m"
}

#line 74 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_10,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_11,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__PredId_12,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_18,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_19,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_20,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_21,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_22,
#line 74 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_23)
#line 74 "rbmm.live_variable_analysis.m"
{
#line 80 "rbmm.live_variable_analysis.m"
  {
#line 80 "rbmm.live_variable_analysis.m"
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
#line 80 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36;
#line 80 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__PredInfo_16;
#line 80 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__ProcIds_17;
#line 80 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__V_24_24;
#line 83 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv5_STATE_VARIABLE_LVBeforeTable_19;
#line 83 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv4_STATE_VARIABLE_LVAfterTable_21;
#line 83 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv3_STATE_VARIABLE_VoidVarTable_23;

#line 81 "rbmm.live_variable_analysis.m"
    {
#line 81 "rbmm.live_variable_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__rbmm__live_variable_analysis__ModuleInfo_10, transform_hlds__rbmm__live_variable_analysis__PredId_12, &transform_hlds__rbmm__live_variable_analysis__PredInfo_16);
    }
#line 82 "rbmm.live_variable_analysis.m"
    {
#line 82 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__rbmm__live_variable_analysis__PredInfo_16);
    }
#line 83 "rbmm.live_variable_analysis.m"
    {
#line 83 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 83 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_24_24, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_4[0]));
#line 83 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_24_24, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0_1));
#line 83 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 83 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_24_24, 3) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ModuleInfo_10));
#line 83 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_24_24, 4) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ExecPathTable_11));
#line 83 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_24_24, 5) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__PredId_12));
#line 83 "rbmm.live_variable_analysis.m"
    }
#line 2580 "transform_hlds.rbmm.live_variable_analysis.c"
    transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1];
#line 83 "rbmm.live_variable_analysis.m"
    {
#line 83 "rbmm.live_variable_analysis.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36, transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36, transform_hlds__rbmm__live_variable_analysis__TypeInfo_36_36, transform_hlds__rbmm__live_variable_analysis__V_24_24, transform_hlds__rbmm__live_variable_analysis__ProcIds_17, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_0_18)), &transform_hlds__rbmm__live_variable_analysis__conv5_STATE_VARIABLE_LVBeforeTable_19, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_0_20)), &transform_hlds__rbmm__live_variable_analysis__conv4_STATE_VARIABLE_LVAfterTable_21, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_0_22)), &transform_hlds__rbmm__live_variable_analysis__conv3_STATE_VARIABLE_VoidVarTable_23);
    }
#line 83 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVBeforeTable_19 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv5_STATE_VARIABLE_LVBeforeTable_19);
#line 83 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_LVAfterTable_21 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv4_STATE_VARIABLE_LVAfterTable_21);
#line 83 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__STATE_VARIABLE_VoidVarTable_23 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv3_STATE_VARIABLE_VoidVarTable_23);
#line 80 "rbmm.live_variable_analysis.m"
  }
#line 74 "rbmm.live_variable_analysis.m"
}

#line 70 "rbmm.live_variable_analysis.m"
static void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1(
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__closure_arg,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6,
#line 70 "rbmm.live_variable_analysis.m"
  MR_Box * transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7)
#line 70 "rbmm.live_variable_analysis.m"
{
#line 70 "rbmm.live_variable_analysis.m"
  {
#line 70 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__closure = transform_hlds__rbmm__live_variable_analysis__closure_arg;
#line 70 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_19;
#line 70 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_21;
#line 70 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_23;

#line 70 "rbmm.live_variable_analysis.m"
    {
#line 70 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_2), &transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_19, ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_4), &transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_21, ((MR_Word) transform_hlds__rbmm__live_variable_analysis__wrapper_arg_6), &transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_23);
    }
#line 70 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_3 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv2_STATE_VARIABLE_LVBeforeTable_19));
#line 70 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_5 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv1_STATE_VARIABLE_LVAfterTable_21));
#line 70 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__wrapper_arg_7 = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__conv0_STATE_VARIABLE_VoidVarTable_23));
#line 70 "rbmm.live_variable_analysis.m"
  }
#line 70 "rbmm.live_variable_analysis.m"
}

#line 25 "rbmm.live_variable_analysis.m"
void MR_CALL 
transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0(
#line 25 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ModuleInfo_6,
#line 25 "rbmm.live_variable_analysis.m"
  MR_Word transform_hlds__rbmm__live_variable_analysis__ExecPathTable_7,
#line 25 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__LVBeforeTable_8,
#line 25 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__LVAfterTable_9,
#line 25 "rbmm.live_variable_analysis.m"
  MR_Word * transform_hlds__rbmm__live_variable_analysis__VoidVarTable_10)
#line 25 "rbmm.live_variable_analysis.m"
{
#line 65 "rbmm.live_variable_analysis.m"
  {
#line 65 "rbmm.live_variable_analysis.m"
    MR_bool transform_hlds__rbmm__live_variable_analysis__succeeded;
#line 65 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_17_17;
#line 65 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_18_18;
#line 65 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__TypeInfo_27_27;
#line 65 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__PredIds_11;
#line 65 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__LVBeforeTable0_13;
#line 65 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__LVAfterTable0_14;
#line 65 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__VoidVarTable0_15;
#line 65 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis__V_16_16;
#line 66 "rbmm.live_variable_analysis.m"
    MR_Word transform_hlds__rbmm__live_variable_analysis___ModuleInfo_12;
#line 70 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv5_LVBeforeTable_8;
#line 70 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv4_LVAfterTable_9;
#line 70 "rbmm.live_variable_analysis.m"
    MR_Box transform_hlds__rbmm__live_variable_analysis__conv3_VoidVarTable_10;

#line 66 "rbmm.live_variable_analysis.m"
    {
#line 66 "rbmm.live_variable_analysis.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__rbmm__live_variable_analysis__PredIds_11, transform_hlds__rbmm__live_variable_analysis__ModuleInfo_6, &transform_hlds__rbmm__live_variable_analysis___ModuleInfo_12);
    }
#line 2695 "transform_hlds.rbmm.live_variable_analysis.c"
    transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 2697 "transform_hlds.rbmm.live_variable_analysis.c"
    transform_hlds__rbmm__live_variable_analysis__TypeInfo_18_18 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[0];
#line 67 "rbmm.live_variable_analysis.m"
    {
#line 67 "rbmm.live_variable_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_17_17, transform_hlds__rbmm__live_variable_analysis__TypeInfo_18_18, &transform_hlds__rbmm__live_variable_analysis__LVBeforeTable0_13);
    }
#line 68 "rbmm.live_variable_analysis.m"
    {
#line 68 "rbmm.live_variable_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_17_17, transform_hlds__rbmm__live_variable_analysis__TypeInfo_18_18, &transform_hlds__rbmm__live_variable_analysis__LVAfterTable0_14);
    }
#line 69 "rbmm.live_variable_analysis.m"
    {
#line 69 "rbmm.live_variable_analysis.m"
      mercury__map__init_1_p_0(transform_hlds__rbmm__live_variable_analysis__TypeCtorInfo_17_17, transform_hlds__rbmm__live_variable_analysis__TypeInfo_18_18, &transform_hlds__rbmm__live_variable_analysis__VoidVarTable0_15);
    }
#line 70 "rbmm.live_variable_analysis.m"
    {
#line 70 "rbmm.live_variable_analysis.m"
      transform_hlds__rbmm__live_variable_analysis__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 70 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_16_16, 0) = ((MR_Box) (&transform_hlds__rbmm__live_variable_analysis_scalar_common_3[0]));
#line 70 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_16_16, 1) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0_1));
#line 70 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 70 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_16_16, 3) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ModuleInfo_6));
#line 70 "rbmm.live_variable_analysis.m"
      MR_hl_field(MR_mktag(0), transform_hlds__rbmm__live_variable_analysis__V_16_16, 4) = ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__ExecPathTable_7));
#line 70 "rbmm.live_variable_analysis.m"
    }
#line 2730 "transform_hlds.rbmm.live_variable_analysis.c"
    transform_hlds__rbmm__live_variable_analysis__TypeInfo_27_27 = (MR_Word) &transform_hlds__rbmm__live_variable_analysis_scalar_common_2[1];
#line 70 "rbmm.live_variable_analysis.m"
    {
#line 70 "rbmm.live_variable_analysis.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__rbmm__live_variable_analysis__TypeInfo_27_27, transform_hlds__rbmm__live_variable_analysis__TypeInfo_27_27, transform_hlds__rbmm__live_variable_analysis__TypeInfo_27_27, transform_hlds__rbmm__live_variable_analysis__V_16_16, transform_hlds__rbmm__live_variable_analysis__PredIds_11, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVBeforeTable0_13)), &transform_hlds__rbmm__live_variable_analysis__conv5_LVBeforeTable_8, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__LVAfterTable0_14)), &transform_hlds__rbmm__live_variable_analysis__conv4_LVAfterTable_9, ((MR_Box) (transform_hlds__rbmm__live_variable_analysis__VoidVarTable0_15)), &transform_hlds__rbmm__live_variable_analysis__conv3_VoidVarTable_10);
    }
#line 70 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__LVBeforeTable_8 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv5_LVBeforeTable_8);
#line 70 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__LVAfterTable_9 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv4_LVAfterTable_9);
#line 70 "rbmm.live_variable_analysis.m"
    *transform_hlds__rbmm__live_variable_analysis__VoidVarTable_10 = ((MR_Word) transform_hlds__rbmm__live_variable_analysis__conv3_VoidVarTable_10);
#line 65 "rbmm.live_variable_analysis.m"
  }
#line 25 "rbmm.live_variable_analysis.m"
}

void mercury__transform_hlds__rbmm__live_variable_analysis__init(void)
{
}

void mercury__transform_hlds__rbmm__live_variable_analysis__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__live_variable_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm.live_variable_analysis. */
