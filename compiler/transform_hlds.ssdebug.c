/*
** Automatically generated from `ssdebug.m'
** by the Mercury compiler,
** version DEV
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module transform_hlds.ssdebug. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ssdebug__init
ENDINIT
*/

#include "transform_hlds.ssdebug.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 519 "ssdebug.m"
struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s {
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
#line 526 "ssdebug.m"
  MR_bool transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded;
#line 548 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_31;
#line 1283 "ssdebug.m"
  jmp_buf transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0;
#line 1283 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46;
#line 1284 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46;
#line 548 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_57;
#line 1283 "ssdebug.m"
  jmp_buf transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1;
#line 1283 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72;
#line 1284 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72;
#line 519 "ssdebug.m"
};


#line 177 "transform_hlds.ssdebug.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 180 "transform_hlds.ssdebug.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 183 "transform_hlds.ssdebug.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "transform_hlds.ssdebug.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 189 "transform_hlds.ssdebug.c"
static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0_10001(
#line 192 "transform_hlds.ssdebug.c"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 194 "transform_hlds.ssdebug.c"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2);

#line 197 "transform_hlds.ssdebug.c"
static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0_10001(
#line 200 "transform_hlds.ssdebug.c"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_1,
#line 202 "transform_hlds.ssdebug.c"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 204 "transform_hlds.ssdebug.c"
  MR_Box transform_hlds__ssdebug__wrapper_arg_3);

#line 1039 "ssdebug.m"
static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1039__1_3_f_0(
#line 1039 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
#line 1039 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__2_12,
#line 1039 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__3_13,
#line 1039 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HeadVar__4_14);

#line 270 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0(
#line 270 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HeadVar__1_1,
#line 270 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__2_2,
#line 270 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__3_3);

#line 270 "ssdebug.m"
static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0(
#line 270 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__1_1,
#line 270 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__2_2);

#line 1385 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0(
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__InstMap_19,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__VarToInspect_20,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Renaming_21,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__VarDesc_22,
#line 1385 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__VarPos_23,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goals_24,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_50,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_53,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_54,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_55,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_57,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_58,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_59,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_60);

#line 1372 "ssdebug.m"
static MR_Word MR_CALL 
transform_hlds__ssdebug__list_var_value_type_0_f_0(void);

#line 1313 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_arg_list_18_p_0(
#line 1313 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__HeadVar__1_1,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__2_2,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__3_3,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__4_4,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__OutVar_5,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HeadVar__6_6,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18);

#line 1256 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_7_p_0(
#line 1256 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_8,
#line 1256 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goal_9,
#line 1256 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__LevelVar_10,
#line 1256 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_15,
#line 1256 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_16,
#line 1256 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_17,
#line 1256 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_18);

#line 1215 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_proc_id_construction_8_p_0(
#line 1215 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_9,
#line 1215 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredInfo_10,
#line 1215 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goals_11,
#line 1215 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__ProcIdVar_12,
#line 1215 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_31,
#line 1215 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_32,
#line 1215 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_33,
#line 1215 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34);

#line 1194 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_handle_event_9_p_0(
#line 1194 "ssdebug.m"
  MR_String transform_hlds__ssdebug__HandleTypeString_10,
#line 1194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Arguments_11,
#line 1194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HandleEventGoal_12,
#line 1194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19,
#line 1194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_20,
#line 1194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_21,
#line 1194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_22,
#line 1194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_23,
#line 1194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_24);

#line 1181 "ssdebug.m"
static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
#line 1181 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Detism_3);

#line 1174 "ssdebug.m"
static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
#line 1174 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Detism_3);

#line 1147 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__commit_goal_changes_10_p_0(
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ConjGoals_11,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_12,
#line 1147 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_13,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_28,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29,
#line 1147 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_31,
#line 1147 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_32,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__VarSet_17,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__VarTypes_18);

#line 1115 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_switch_goal_4_p_0(
#line 1115 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__SwitchVar_5,
#line 1115 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__DoRetryGoal_6,
#line 1115 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__DoNotRetryGoal_7,
#line 1115 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__SwitchGoal_8);

#line 1082 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_recursive_call_6_p_0(
#line 1082 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredInfo_7,
#line 1082 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_8,
#line 1082 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_9,
#line 1082 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_10,
#line 1082 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVars_11,
#line 1082 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goal_12);

#line 1070 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_retry_var_6_p_0(
#line 1070 "ssdebug.m"
  MR_String transform_hlds__ssdebug__VarName_7,
#line 1070 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__RetryVar_8,
#line 1070 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14,
#line 1070 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15,
#line 1070 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16,
#line 1070 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17);

#line 1058 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
#line 1058 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__OutputVars_4,
#line 1058 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Goal0_5,
#line 1058 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goal_6);

#line 1044 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__rename_outputs_9_p_0(
#line 1044 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__OutputVars_10,
#line 1044 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_Goal_23,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__UnifyGoal_12,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Renaming_13,
#line 1044 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_24,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_25,
#line 1044 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_26,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_27);

#line 1039 "ssdebug.m"
static MR_bool MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0_1(
#line 1039 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 1039 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 1039 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 1039 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3);

#line 1035 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0(
#line 1035 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
#line 1035 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVars_6,
#line 1035 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ArgModes_7,
#line 1035 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__OutputVars_8);

#line 1021 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__get_stripped_headvars_5_p_0(
#line 1021 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredInfo_6,
#line 1021 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ProcInfo_7,
#line 1021 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__FullHeadVars_8,
#line 1021 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HeadVars_9,
#line 1021 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__ArgModes_10);

#line 976 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_erroneous_6_p_0(
#line 976 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 976 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 976 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28,
#line 976 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_29,
#line 976 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30,
#line 976 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_31);

#line 909 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_6_p_0(
#line 909 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 909 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 909 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36,
#line 909 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37,
#line 909 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38,
#line 909 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39);

#line 811 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_6_p_0(
#line 811 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 811 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 811 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49,
#line 811 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50,
#line 811 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51,
#line 811 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_52);

#line 683 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_6_p_0(
#line 683 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 683 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 683 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60,
#line 683 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61,
#line 683 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62,
#line 683 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_63);

#line 591 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_6_p_0(
#line 591 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 591 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 591 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45,
#line 591 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_46,
#line 591 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47,
#line 591 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_48);

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg);

#line 1284 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3(
#line 1284 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg);

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg);

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg);

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg);

#line 1284 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7(
#line 1284 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg);

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg);

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg);

#line 519 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__SSTraceLevel_7,
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredProcId_8,
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14,
#line 519 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15,
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_16,
#line 519 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);

#line 485 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
#line 485 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_6,
#line 485 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Goal0_7,
#line 485 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goal_8,
#line 485 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25,
#line 485 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26);

#line 464 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__create_proxy_proc_6_p_0(
#line 464 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 464 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 464 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20,
#line 464 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21,
#line 464 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
#line 464 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);

#line 445 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1(
#line 445 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 445 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 445 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 445 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 445 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 445 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

#line 418 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(
#line 418 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 418 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__MaybeNewPredId_8,
#line 418 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
#line 418 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
#line 418 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
#line 418 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);

#line 407 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(
#line 407 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Case0_9,
#line 407 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Case_10,
#line 407 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_18,
#line 407 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19,
#line 407 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_20,
#line 407 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_21,
#line 407 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
#line 407 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);

#line 375 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3(
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 375 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
#line 375 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
#line 375 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
#line 375 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8);

#line 369 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2(
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 369 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
#line 369 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
#line 369 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
#line 369 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8);

#line 363 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1(
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 363 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
#line 363 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
#line 363 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
#line 363 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8);

#line 303 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(
#line 303 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76,
#line 303 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_Goal_77,
#line 303 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78,
#line 303 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79,
#line 303 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80,
#line 303 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81,
#line 303 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82,
#line 303 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);

#line 288 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
#line 288 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 288 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 288 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
#line 288 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
#line 288 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
#line 288 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);

#line 285 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1(
#line 285 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 285 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 285 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 285 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 285 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 285 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

#line 279 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(
#line 279 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_6,
#line 279 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_11,
#line 279 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_12,
#line 279 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13,
#line 279 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_14);

#line 248 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_3(
#line 248 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 248 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 248 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 248 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 248 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 248 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

#line 254 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_2(
#line 254 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 254 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 254 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 254 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 254 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 254 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);

#line 276 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_1(
#line 276 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 276 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 276 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 276 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 276 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 276 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_2[5][3];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[1][8];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_4[3][9];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_5[2][11];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_6[8][1];

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_7[1][7];




static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_6[5])),
    ((MR_Box) ((MR_String) "[|]"))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__ssdebug_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_4[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_5[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_6[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "FileName"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "LineNumber"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "ModuleName"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "PredName"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Level"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "list"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "VarName"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "VarPos"))
  },
};

static /* final */ const MR_Box transform_hlds__ssdebug_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1147 "transform_hlds.ssdebug.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1155 "transform_hlds.ssdebug.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ssdebug__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1164 "transform_hlds.ssdebug.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ssdebug__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1172 "transform_hlds.ssdebug.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &transform_hlds__ssdebug__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1181 "transform_hlds.ssdebug.c"
const MR_TypeCtorInfo_Struct transform_hlds__ssdebug__transform_hlds__ssdebug__type_ctor_info_proxy_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ssdebug____Unify____proxy_map_0_0_10001)),
  ((MR_Box) (transform_hlds__ssdebug____Compare____proxy_map_0_0_10001)),
  (MR_String) "transform_hlds.ssdebug",
  (MR_String) "proxy_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ssdebug__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1198 "transform_hlds.ssdebug.c"
static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0_10001(
#line 1201 "transform_hlds.ssdebug.c"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 1203 "transform_hlds.ssdebug.c"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2)
#line 1205 "transform_hlds.ssdebug.c"
{
#line 1207 "transform_hlds.ssdebug.c"
  {
#line 1209 "transform_hlds.ssdebug.c"
    MR_bool transform_hlds__ssdebug__succeeded;

#line 1212 "transform_hlds.ssdebug.c"
    {
#line 1214 "transform_hlds.ssdebug.c"
      transform_hlds__ssdebug__succeeded = transform_hlds__ssdebug____Unify____proxy_map_0_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2));
    }
#line 1217 "transform_hlds.ssdebug.c"
    return transform_hlds__ssdebug__succeeded;
#line 1219 "transform_hlds.ssdebug.c"
  }
#line 1221 "transform_hlds.ssdebug.c"
}

#line 1224 "transform_hlds.ssdebug.c"
static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0_10001(
#line 1227 "transform_hlds.ssdebug.c"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_1,
#line 1229 "transform_hlds.ssdebug.c"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 1231 "transform_hlds.ssdebug.c"
  MR_Box transform_hlds__ssdebug__wrapper_arg_3)
#line 1233 "transform_hlds.ssdebug.c"
{
#line 1235 "transform_hlds.ssdebug.c"
  {
#line 1237 "transform_hlds.ssdebug.c"
    MR_Word transform_hlds__ssdebug__conv0_HeadVar__1_1;

#line 1240 "transform_hlds.ssdebug.c"
    {
#line 1242 "transform_hlds.ssdebug.c"
      transform_hlds__ssdebug____Compare____proxy_map_0_0(&transform_hlds__ssdebug__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3));
    }
#line 1245 "transform_hlds.ssdebug.c"
    *transform_hlds__ssdebug__wrapper_arg_1 = ((MR_Box) (transform_hlds__ssdebug__conv0_HeadVar__1_1));
#line 1247 "transform_hlds.ssdebug.c"
  }
#line 1249 "transform_hlds.ssdebug.c"
}

#line 1039 "ssdebug.m"
static MR_bool MR_CALL 
transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1039__1_3_f_0(
#line 1039 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
#line 1039 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__2_12,
#line 1039 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__3_13,
#line 1039 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HeadVar__4_14)
#line 1039 "ssdebug.m"
{
#line 1039 "ssdebug.m"
  {
#line 1039 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;

#line 1040 "ssdebug.m"
    {
#line 1040 "ssdebug.m"
      transform_hlds__ssdebug__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__ssdebug__ModuleInfo_5, transform_hlds__ssdebug__HeadVar__3_13);
    }
#line 1039 "ssdebug.m"
    if (transform_hlds__ssdebug__succeeded)
#line 1039 "ssdebug.m"
      {
#line 1039 "ssdebug.m"
        *transform_hlds__ssdebug__HeadVar__4_14 = transform_hlds__ssdebug__HeadVar__2_12;
#line 1039 "ssdebug.m"
        transform_hlds__ssdebug__succeeded = MR_TRUE;
#line 1039 "ssdebug.m"
      }
#line 1039 "ssdebug.m"
    return transform_hlds__ssdebug__succeeded;
#line 1039 "ssdebug.m"
  }
#line 1039 "ssdebug.m"
}

#line 270 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug____Compare____proxy_map_0_0(
#line 270 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HeadVar__1_1,
#line 270 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__2_2,
#line 270 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__3_3)
#line 270 "ssdebug.m"
{
#line 270 "ssdebug.m"
  {
#line 270 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 270 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Cast_HeadVar1_4 = transform_hlds__ssdebug__HeadVar__2_2;
#line 270 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Cast_HeadVar2_5 = transform_hlds__ssdebug__HeadVar__3_3;

#line 270 "ssdebug.m"
    {
#line 270 "ssdebug.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], transform_hlds__ssdebug__HeadVar__1_1, ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar2_5)));
#line 270 "ssdebug.m"
      return;
    }
#line 270 "ssdebug.m"
  }
#line 270 "ssdebug.m"
}

#line 270 "ssdebug.m"
static MR_bool MR_CALL 
transform_hlds__ssdebug____Unify____proxy_map_0_0(
#line 270 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__1_1,
#line 270 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__2_2)
#line 270 "ssdebug.m"
{
#line 270 "ssdebug.m"
  {
#line 270 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 270 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Cast_HeadVar1_3 = transform_hlds__ssdebug__HeadVar__1_1;
#line 270 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Cast_HeadVar2_4 = transform_hlds__ssdebug__HeadVar__2_2;

#line 270 "ssdebug.m"
    {
#line 270 "ssdebug.m"
      return transform_hlds__ssdebug__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ssdebug__Cast_HeadVar2_4)));
    }
#line 270 "ssdebug.m"
    return transform_hlds__ssdebug__succeeded;
#line 270 "ssdebug.m"
  }
#line 270 "ssdebug.m"
}

#line 1385 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_var_value_18_p_0(
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__InstMap_19,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__VarToInspect_20,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Renaming_21,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__VarDesc_22,
#line 1385 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__VarPos_23,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goals_24,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_50,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_53,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_54,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_55,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_57,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_58,
#line 1385 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_59,
#line 1385 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_60)
#line 1385 "ssdebug.m"
{
#line 1394 "ssdebug.m"
  {
#line 1394 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeCtorInfo_114_114;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SSDBModule_31;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__VarValueTypeCtor_32;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__VarValueType_33;
#line 1394 "ssdebug.m"
    MR_String transform_hlds__ssdebug__VarName_34;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructVarName_35;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__VarNameVar_36;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructVarPos_37;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__VarPosVar_38;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_61_61;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_70_70;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_71_71;
#line 1394 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74;

#line 1395 "ssdebug.m"
    {
#line 1395 "ssdebug.m"
      transform_hlds__ssdebug__SSDBModule_31 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
#line 1396 "ssdebug.m"
    {
#line 1396 "ssdebug.m"
      transform_hlds__ssdebug__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
#line 1396 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 1) = ((MR_Box) ((MR_String) "var_value"));
#line 1396 "ssdebug.m"
    }
#line 1396 "ssdebug.m"
    {
#line 1396 "ssdebug.m"
      transform_hlds__ssdebug__VarValueTypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_32, 0) = ((MR_Box) (transform_hlds__ssdebug__V_61_61));
#line 1396 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1396 "ssdebug.m"
    }
#line 1397 "ssdebug.m"
    {
#line 1397 "ssdebug.m"
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__VarValueTypeCtor_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__VarValueType_33);
    }
#line 1460 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1398 "ssdebug.m"
    {
#line 1398 "ssdebug.m"
      mercury__varset__lookup_name_3_p_0(transform_hlds__ssdebug__TypeCtorInfo_114_114, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_55, transform_hlds__ssdebug__VarToInspect_20, &transform_hlds__ssdebug__VarName_34);
    }
#line 1399 "ssdebug.m"
    {
#line 1399 "ssdebug.m"
      hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__VarName_34, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[6]), &transform_hlds__ssdebug__ConstructVarName_35, &transform_hlds__ssdebug__VarNameVar_36, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_55, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_57, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67);
    }
#line 1401 "ssdebug.m"
    {
#line 1401 "ssdebug.m"
      hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__ssdebug__VarPos_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[7]), &transform_hlds__ssdebug__ConstructVarPos_37, &transform_hlds__ssdebug__VarPosVar_38, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_70_70, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_71_71);
    }
#line 1404 "ssdebug.m"
    {
#line 1404 "ssdebug.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__ssdebug__TypeCtorInfo_114_114, (MR_String) "VarDesc", transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_70_70, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74);
    }
#line 1405 "ssdebug.m"
    {
#line 1405 "ssdebug.m"
      transform_hlds__ssdebug__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__ssdebug__InstMap_19, transform_hlds__ssdebug__VarToInspect_20);
    }
#line 1457 "ssdebug.m"
    if (transform_hlds__ssdebug__succeeded)
#line 1410 "ssdebug.m"
      {
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__TypeInfo_118_118;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__PolyInfo0_39;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__Context_40;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__MerType_41;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__TypeInfoVar_42;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__TypeInfoGoals0_43;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__PolyInfo_44;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ConsId_45;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ConstructVarGoal_46;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__TypeInfoGoals_48;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_75_75;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_81_81;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_82_82;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_97_97;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_98_98;
#line 1410 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_99_99;
#line 1438 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__TypeInfo_115_115;

#line 1410 "ssdebug.m"
        {
#line 1410 "ssdebug.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_75_75);
        }
#line 1411 "ssdebug.m"
        {
#line 1411 "ssdebug.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_71_71, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_75_75, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76);
        }
#line 1421 "ssdebug.m"
        {
#line 1421 "ssdebug.m"
          check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_53, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76, &transform_hlds__ssdebug__PolyInfo0_39);
        }
#line 1422 "ssdebug.m"
        {
#line 1422 "ssdebug.m"
          mercury__term__context_init_1_p_0(&transform_hlds__ssdebug__Context_40);
        }
#line 1423 "ssdebug.m"
        {
#line 1423 "ssdebug.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_71_71, transform_hlds__ssdebug__VarToInspect_20, &transform_hlds__ssdebug__MerType_41);
        }
#line 1424 "ssdebug.m"
        {
#line 1424 "ssdebug.m"
          check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__ssdebug__MerType_41, transform_hlds__ssdebug__Context_40, &transform_hlds__ssdebug__TypeInfoVar_42, &transform_hlds__ssdebug__TypeInfoGoals0_43, transform_hlds__ssdebug__PolyInfo0_39, &transform_hlds__ssdebug__PolyInfo_44);
        }
#line 1426 "ssdebug.m"
        {
#line 1426 "ssdebug.m"
          check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__ssdebug__PolyInfo_44, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_53, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_54, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_50);
        }
#line 1428 "ssdebug.m"
        {
#line 1428 "ssdebug.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56);
        }
#line 1429 "ssdebug.m"
        {
#line 1429 "ssdebug.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_81_81);
        }
#line 1432 "ssdebug.m"
        {
#line 1432 "ssdebug.m"
          transform_hlds__ssdebug__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_82_82, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
#line 1432 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_82_82, 1) = ((MR_Box) ((MR_String) "bound_head_var"));
#line 1432 "ssdebug.m"
        }
#line 1432 "ssdebug.m"
        {
#line 1432 "ssdebug.m"
          transform_hlds__ssdebug__ConsId_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1432 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_45, 1) = ((MR_Box) (transform_hlds__ssdebug__V_82_82));
#line 1432 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_45, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1432 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_45, 3) = ((MR_Box) (transform_hlds__ssdebug__VarValueTypeCtor_32));
#line 1432 "ssdebug.m"
        }
#line 1434 "ssdebug.m"
        {
#line 1434 "ssdebug.m"
          hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__VarValueType_33, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_81_81, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_58);
        }
#line 1602 "transform_hlds.ssdebug.c"
        transform_hlds__ssdebug__TypeInfo_115_115 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 1438 "ssdebug.m"
        {
#line 1438 "ssdebug.m"
          transform_hlds__ssdebug__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__ssdebug__TypeInfo_115_115, transform_hlds__ssdebug__TypeInfo_115_115, transform_hlds__ssdebug__Renaming_21);
        }
#line 1441 "ssdebug.m"
        if (transform_hlds__ssdebug__succeeded)
#line 1439 "ssdebug.m"
          {
#line 1439 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_86_86;
#line 1439 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_87_87;
#line 1439 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_88_88;
#line 1439 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_89_89;

#line 1440 "ssdebug.m"
            {
#line 1440 "ssdebug.m"
              transform_hlds__ssdebug__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 0) = ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20));
#line 1440 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1440 "ssdebug.m"
            }
#line 1440 "ssdebug.m"
            {
#line 1440 "ssdebug.m"
              transform_hlds__ssdebug__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
#line 1440 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 1) = ((MR_Box) (transform_hlds__ssdebug__V_89_89));
#line 1440 "ssdebug.m"
            }
#line 1439 "ssdebug.m"
            {
#line 1439 "ssdebug.m"
              transform_hlds__ssdebug__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_87_87, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
#line 1439 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_87_87, 1) = ((MR_Box) (transform_hlds__ssdebug__V_88_88));
#line 1439 "ssdebug.m"
            }
#line 1439 "ssdebug.m"
            {
#line 1439 "ssdebug.m"
              transform_hlds__ssdebug__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_86_86, 0) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoVar_42));
#line 1439 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_86_86, 1) = ((MR_Box) (transform_hlds__ssdebug__V_87_87));
#line 1439 "ssdebug.m"
            }
#line 1439 "ssdebug.m"
            {
#line 1439 "ssdebug.m"
              hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_45, transform_hlds__ssdebug__V_86_86, &transform_hlds__ssdebug__ConstructVarGoal_46);
            }
#line 1439 "ssdebug.m"
          }
#line 1441 "ssdebug.m"
        else
#line 1442 "ssdebug.m"
          {
#line 1442 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__TypeInfo_116_116 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 1442 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__RenamedVar_47;
#line 1442 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_91_91;
#line 1442 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_92_92;
#line 1442 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_93_93;
#line 1442 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_94_94;
#line 1442 "ssdebug.m"
            MR_Box transform_hlds__ssdebug__conv0_RenamedVar_47;

#line 1442 "ssdebug.m"
            {
#line 1442 "ssdebug.m"
              mercury__map__lookup_3_p_0(transform_hlds__ssdebug__TypeInfo_116_116, transform_hlds__ssdebug__TypeInfo_116_116, transform_hlds__ssdebug__Renaming_21, ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20)), &transform_hlds__ssdebug__conv0_RenamedVar_47);
            }
#line 1442 "ssdebug.m"
            transform_hlds__ssdebug__RenamedVar_47 = ((MR_Word) transform_hlds__ssdebug__conv0_RenamedVar_47);
#line 1444 "ssdebug.m"
            {
#line 1444 "ssdebug.m"
              transform_hlds__ssdebug__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 0) = ((MR_Box) (transform_hlds__ssdebug__RenamedVar_47));
#line 1444 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1444 "ssdebug.m"
            }
#line 1444 "ssdebug.m"
            {
#line 1444 "ssdebug.m"
              transform_hlds__ssdebug__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_93_93, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
#line 1444 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_93_93, 1) = ((MR_Box) (transform_hlds__ssdebug__V_94_94));
#line 1444 "ssdebug.m"
            }
#line 1443 "ssdebug.m"
            {
#line 1443 "ssdebug.m"
              transform_hlds__ssdebug__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
#line 1443 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 1) = ((MR_Box) (transform_hlds__ssdebug__V_93_93));
#line 1443 "ssdebug.m"
            }
#line 1443 "ssdebug.m"
            {
#line 1443 "ssdebug.m"
              transform_hlds__ssdebug__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 0) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoVar_42));
#line 1443 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 1) = ((MR_Box) (transform_hlds__ssdebug__V_92_92));
#line 1443 "ssdebug.m"
            }
#line 1443 "ssdebug.m"
            {
#line 1443 "ssdebug.m"
              hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_45, transform_hlds__ssdebug__V_91_91, &transform_hlds__ssdebug__ConstructVarGoal_46);
            }
#line 1442 "ssdebug.m"
          }
#line 1451 "ssdebug.m"
        {
#line 1451 "ssdebug.m"
          hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, transform_hlds__ssdebug__Renaming_21, transform_hlds__ssdebug__TypeInfoGoals0_43, &transform_hlds__ssdebug__TypeInfoGoals_48);
        }
#line 1454 "ssdebug.m"
        {
#line 1454 "ssdebug.m"
          transform_hlds__ssdebug__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_98_98, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarPos_37));
#line 1454 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_98_98, 1) = ((MR_Box) (transform_hlds__ssdebug__TypeInfoGoals_48));
#line 1454 "ssdebug.m"
        }
#line 1454 "ssdebug.m"
        {
#line 1454 "ssdebug.m"
          transform_hlds__ssdebug__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_97_97, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarName_35));
#line 1454 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_97_97, 1) = ((MR_Box) (transform_hlds__ssdebug__V_98_98));
#line 1454 "ssdebug.m"
        }
#line 1455 "ssdebug.m"
        {
#line 1455 "ssdebug.m"
          transform_hlds__ssdebug__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarGoal_46));
#line 1455 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "ssdebug.m"
        }
#line 1454 "ssdebug.m"
        {
#line 1454 "ssdebug.m"
          *transform_hlds__ssdebug__Goals_24 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__V_97_97, transform_hlds__ssdebug__V_99_99);
        }
#line 1782 "transform_hlds.ssdebug.c"
        transform_hlds__ssdebug__TypeInfo_118_118 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 1456 "ssdebug.m"
        {
#line 1456 "ssdebug.m"
          mercury__map__det_insert_4_p_0(transform_hlds__ssdebug__TypeInfo_118_118, transform_hlds__ssdebug__TypeInfo_118_118, ((MR_Box) (transform_hlds__ssdebug__VarToInspect_20)), ((MR_Box) (*transform_hlds__ssdebug__VarDesc_22)), transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_59, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_60);
#line 1456 "ssdebug.m"
          return;
        }
#line 1410 "ssdebug.m"
      }
#line 1457 "ssdebug.m"
    else
#line 1459 "ssdebug.m"
      {
#line 1459 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_102_102;
#line 1459 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_106_106;
#line 1459 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_107_107;
#line 1459 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_109_109;
#line 1459 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_110_110;
#line 1459 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ConsId_112;
#line 1459 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ConstructVarGoal_113;

#line 1458 "ssdebug.m"
        {
#line 1458 "ssdebug.m"
          transform_hlds__ssdebug__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_102_102, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_31));
#line 1458 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_102_102, 1) = ((MR_Box) ((MR_String) "unbound_head_var"));
#line 1458 "ssdebug.m"
        }
#line 1458 "ssdebug.m"
        {
#line 1458 "ssdebug.m"
          transform_hlds__ssdebug__ConsId_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1458 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_112, 1) = ((MR_Box) (transform_hlds__ssdebug__V_102_102));
#line 1458 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_112, 2) = ((MR_Box) ((MR_Integer) 2));
#line 1458 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_112, 3) = ((MR_Box) (transform_hlds__ssdebug__VarValueTypeCtor_32));
#line 1458 "ssdebug.m"
        }
#line 1460 "ssdebug.m"
        {
#line 1460 "ssdebug.m"
          hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__VarValueType_33, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_71_71, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_58);
        }
#line 1461 "ssdebug.m"
        {
#line 1461 "ssdebug.m"
          transform_hlds__ssdebug__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 0) = ((MR_Box) (transform_hlds__ssdebug__VarPosVar_38));
#line 1461 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1461 "ssdebug.m"
        }
#line 1461 "ssdebug.m"
        {
#line 1461 "ssdebug.m"
          transform_hlds__ssdebug__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 0) = ((MR_Box) (transform_hlds__ssdebug__VarNameVar_36));
#line 1461 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 1) = ((MR_Box) (transform_hlds__ssdebug__V_107_107));
#line 1461 "ssdebug.m"
        }
#line 1461 "ssdebug.m"
        {
#line 1461 "ssdebug.m"
          hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__VarDesc_22, transform_hlds__ssdebug__ConsId_112, transform_hlds__ssdebug__V_106_106, &transform_hlds__ssdebug__ConstructVarGoal_113);
        }
#line 1464 "ssdebug.m"
        {
#line 1464 "ssdebug.m"
          transform_hlds__ssdebug__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_110_110, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarGoal_113));
#line 1464 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1464 "ssdebug.m"
        }
#line 1464 "ssdebug.m"
        {
#line 1464 "ssdebug.m"
          transform_hlds__ssdebug__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_109_109, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarPos_37));
#line 1464 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_109_109, 1) = ((MR_Box) (transform_hlds__ssdebug__V_110_110));
#line 1464 "ssdebug.m"
        }
#line 1464 "ssdebug.m"
        {
#line 1464 "ssdebug.m"
          MR_Word base;
#line 1464 "ssdebug.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "ssdebug.m"
          *transform_hlds__ssdebug__Goals_24 = base;
#line 1464 "ssdebug.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructVarName_35));
#line 1464 "ssdebug.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ssdebug__V_109_109));
#line 1464 "ssdebug.m"
        }
#line 1459 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_60 = transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_59;
#line 1459 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74;
#line 1459 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_54 = transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_53;
#line 1459 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_52 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_51;
#line 1459 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_50 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_49;
#line 1459 "ssdebug.m"
      }
#line 1394 "ssdebug.m"
  }
#line 1385 "ssdebug.m"
}

#line 1372 "ssdebug.m"
static MR_Word MR_CALL 
transform_hlds__ssdebug__list_var_value_type_0_f_0(void)
#line 1372 "ssdebug.m"
{
#line 1374 "ssdebug.m"
  {
#line 1374 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ListVarValueType_2;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SSDBModule_3;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__VarValueTypeCtor_4;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__VarValueType_5;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ListTypeCtor_6;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_7_7;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_11_11;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_12_12;
#line 1374 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_15_15;

#line 1375 "ssdebug.m"
    {
#line 1375 "ssdebug.m"
      transform_hlds__ssdebug__SSDBModule_3 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
#line 1376 "ssdebug.m"
    {
#line 1376 "ssdebug.m"
      transform_hlds__ssdebug__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_7_7, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_3));
#line 1376 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_7_7, 1) = ((MR_Box) ((MR_String) "var_value"));
#line 1376 "ssdebug.m"
    }
#line 1376 "ssdebug.m"
    {
#line 1376 "ssdebug.m"
      transform_hlds__ssdebug__VarValueTypeCtor_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1376 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_4, 0) = ((MR_Box) (transform_hlds__ssdebug__V_7_7));
#line 1376 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__VarValueTypeCtor_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1376 "ssdebug.m"
    }
#line 1377 "ssdebug.m"
    {
#line 1377 "ssdebug.m"
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__VarValueTypeCtor_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__VarValueType_5);
    }
#line 1378 "ssdebug.m"
    {
#line 1378 "ssdebug.m"
      transform_hlds__ssdebug__V_12_12 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
    }
#line 1378 "ssdebug.m"
    {
#line 1378 "ssdebug.m"
      transform_hlds__ssdebug__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_11_11, 0) = ((MR_Box) (transform_hlds__ssdebug__V_12_12));
#line 1378 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_11_11, 1) = ((MR_Box) ((MR_String) "list"));
#line 1378 "ssdebug.m"
    }
#line 1378 "ssdebug.m"
    {
#line 1378 "ssdebug.m"
      transform_hlds__ssdebug__ListTypeCtor_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1378 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_6, 0) = ((MR_Box) (transform_hlds__ssdebug__V_11_11));
#line 1378 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1378 "ssdebug.m"
    }
#line 1379 "ssdebug.m"
    {
#line 1379 "ssdebug.m"
      transform_hlds__ssdebug__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_15_15, 0) = ((MR_Box) (transform_hlds__ssdebug__VarValueType_5));
#line 1379 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1379 "ssdebug.m"
    }
#line 1379 "ssdebug.m"
    {
#line 1379 "ssdebug.m"
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__ListTypeCtor_6, transform_hlds__ssdebug__V_15_15, &transform_hlds__ssdebug__ListVarValueType_2);
    }
#line 1374 "ssdebug.m"
    return transform_hlds__ssdebug__ListVarValueType_2;
#line 1374 "ssdebug.m"
  }
#line 1372 "ssdebug.m"
}

#line 1313 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_arg_list_18_p_0(
#line 1313 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__HeadVar__1_1,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__2_2,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__3_3,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVar__4_4,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__OutVar_5,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HeadVar__6_6,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16,
#line 1313 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17,
#line 1313 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18)
#line 1313 "ssdebug.m"
{
#line 1321 "ssdebug.m"
  {
#line 1321 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;

#line 1321 "ssdebug.m"
    if ((transform_hlds__ssdebug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1321 "ssdebug.m"
      {
#line 1321 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__Goal_23;
#line 1321 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ListTypeSymName_30;
#line 1321 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ListTypeCtor_31;
#line 1321 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ConsId_32;
#line 1321 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_48_48;
#line 1321 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_50_50;
#line 1321 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_53_53;
#line 1321 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__V_54_54;

#line 1322 "ssdebug.m"
        {
#line 1322 "ssdebug.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "EmptyVarList", transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14);
        }
#line 1323 "ssdebug.m"
        {
#line 1323 "ssdebug.m"
          transform_hlds__ssdebug__V_48_48 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
        }
#line 1323 "ssdebug.m"
        {
#line 1323 "ssdebug.m"
          hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__V_48_48, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16);
        }
#line 1324 "ssdebug.m"
        {
#line 1324 "ssdebug.m"
          transform_hlds__ssdebug__V_50_50 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
        }
#line 1324 "ssdebug.m"
        {
#line 1324 "ssdebug.m"
          transform_hlds__ssdebug__ListTypeSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_30, 0) = ((MR_Box) (transform_hlds__ssdebug__V_50_50));
#line 1324 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_30, 1) = ((MR_Box) ((MR_String) "list"));
#line 1324 "ssdebug.m"
        }
#line 1325 "ssdebug.m"
        {
#line 1325 "ssdebug.m"
          transform_hlds__ssdebug__ListTypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1325 "ssdebug.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_31, 0) = ((MR_Box) (transform_hlds__ssdebug__ListTypeSymName_30));
#line 1325 "ssdebug.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1325 "ssdebug.m"
        }
#line 1326 "ssdebug.m"
        {
#line 1326 "ssdebug.m"
          transform_hlds__ssdebug__V_54_54 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
        }
#line 1326 "ssdebug.m"
        {
#line 1326 "ssdebug.m"
          transform_hlds__ssdebug__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_53_53, 0) = ((MR_Box) (transform_hlds__ssdebug__V_54_54));
#line 1326 "ssdebug.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_53_53, 1) = ((MR_Box) ((MR_String) "[]"));
#line 1326 "ssdebug.m"
        }
#line 1326 "ssdebug.m"
        {
#line 1326 "ssdebug.m"
          transform_hlds__ssdebug__ConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1326 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 1) = ((MR_Box) (transform_hlds__ssdebug__V_53_53));
#line 1326 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1326 "ssdebug.m"
          MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_32, 3) = ((MR_Box) (transform_hlds__ssdebug__ListTypeCtor_31));
#line 1326 "ssdebug.m"
        }
#line 1327 "ssdebug.m"
        {
#line 1327 "ssdebug.m"
          hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__ConsId_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__Goal_23);
        }
#line 1320 "ssdebug.m"
        {
#line 1320 "ssdebug.m"
          MR_Word base;
#line 1320 "ssdebug.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "ssdebug.m"
          *transform_hlds__ssdebug__HeadVar__6_6 = base;
#line 1320 "ssdebug.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__Goal_23));
#line 1320 "ssdebug.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "ssdebug.m"
        }
#line 1321 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18 = transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17;
#line 1321 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12 = transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11;
#line 1321 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9;
#line 1320 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7;
#line 1321 "ssdebug.m"
      }
#line 1321 "ssdebug.m"
    else
#line 1331 "ssdebug.m"
      {
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ProgVar_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__HeadVar__3_3, (MR_Integer) 0)));
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ProgVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__HeadVar__3_3, (MR_Integer) 1)));
#line 1331 "ssdebug.m"
        MR_Integer transform_hlds__ssdebug__Pos_71 = (transform_hlds__ssdebug__HeadVar__1_1 + (MR_Integer) 1);
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__OutVar0_72;
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__Goals0_73;
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__ProgVarType_74;
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95;
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96;
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97;
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98;
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99;
#line 1331 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100;

#line 1333 "ssdebug.m"
        {
#line 1333 "ssdebug.m"
          transform_hlds__ssdebug__make_arg_list_18_p_0(transform_hlds__ssdebug__Pos_71, transform_hlds__ssdebug__HeadVar__2_2, transform_hlds__ssdebug__ProgVars_61, transform_hlds__ssdebug__HeadVar__4_4, &transform_hlds__ssdebug__OutVar0_72, &transform_hlds__ssdebug__Goals0_73, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_9, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_11, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_13, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_15, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_0_17, &transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100);
        }
#line 1336 "ssdebug.m"
        {
#line 1336 "ssdebug.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, transform_hlds__ssdebug__ProgVar_60, &transform_hlds__ssdebug__ProgVarType_74);
        }
#line 1338 "ssdebug.m"
        {
#line 1338 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_129_129;

#line 1338 "ssdebug.m"
          {
#line 1338 "ssdebug.m"
            transform_hlds__ssdebug__V_129_129 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          }
#line 1338 "ssdebug.m"
          {
#line 1338 "ssdebug.m"
            transform_hlds__ssdebug__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ssdebug__ProgVarType_74, transform_hlds__ssdebug__V_129_129);
          }
#line 1338 "ssdebug.m"
        }
#line 1339 "ssdebug.m"
        if (!(transform_hlds__ssdebug__succeeded))
#line 1339 "ssdebug.m"
          {
#line 1339 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_130_130;

#line 1339 "ssdebug.m"
            {
#line 1339 "ssdebug.m"
              transform_hlds__ssdebug__V_130_130 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
            }
#line 1339 "ssdebug.m"
            {
#line 1339 "ssdebug.m"
              transform_hlds__ssdebug__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__ssdebug__ProgVarType_74, transform_hlds__ssdebug__V_130_130);
            }
#line 1339 "ssdebug.m"
          }
#line 1344 "ssdebug.m"
        if (transform_hlds__ssdebug__succeeded)
#line 1342 "ssdebug.m"
          {
#line 1342 "ssdebug.m"
            *transform_hlds__ssdebug__OutVar_5 = transform_hlds__ssdebug__OutVar0_72;
#line 1343 "ssdebug.m"
            *transform_hlds__ssdebug__HeadVar__6_6 = transform_hlds__ssdebug__Goals0_73;
#line 1342 "ssdebug.m"
            *transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18 = transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100;
#line 1342 "ssdebug.m"
            *transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16 = transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99;
#line 1342 "ssdebug.m"
            *transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98;
#line 1342 "ssdebug.m"
            *transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12 = transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97;
#line 1342 "ssdebug.m"
            *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96;
#line 1342 "ssdebug.m"
            *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95;
#line 1342 "ssdebug.m"
          }
#line 1344 "ssdebug.m"
        else
#line 1357 "ssdebug.m"
          {
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__TypeCtorInfo_128_128;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__ValueGoals_76;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__VarDesc_77;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__ListTypeSymName_78;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__ListTypeCtor_79;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__ConsId_80;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__Goal_81;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_109_109;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_111_111;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_119_119;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_120_120;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_122_122;
#line 1357 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_123_123;
#line 1353 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__ExistingVarDesc_75;
#line 1350 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__TypeInfo_126_126 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 1350 "ssdebug.m"
            MR_Box transform_hlds__ssdebug__conv0_ExistingVarDesc_75;

#line 1350 "ssdebug.m"
            {
#line 1350 "ssdebug.m"
              transform_hlds__ssdebug__succeeded = mercury__map__search_3_p_0(transform_hlds__ssdebug__TypeInfo_126_126, transform_hlds__ssdebug__TypeInfo_126_126, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100, ((MR_Box) (transform_hlds__ssdebug__ProgVar_60)), &transform_hlds__ssdebug__conv0_ExistingVarDesc_75);
            }
#line 1350 "ssdebug.m"
            if (transform_hlds__ssdebug__succeeded)
#line 1350 "ssdebug.m"
              {
#line 1350 "ssdebug.m"
                transform_hlds__ssdebug__ExistingVarDesc_75 = ((MR_Word) transform_hlds__ssdebug__conv0_ExistingVarDesc_75);
#line 1350 "ssdebug.m"
                transform_hlds__ssdebug__succeeded = MR_TRUE;
#line 1350 "ssdebug.m"
              }
#line 1353 "ssdebug.m"
            if (transform_hlds__ssdebug__succeeded)
#line 1351 "ssdebug.m"
              {
#line 1351 "ssdebug.m"
                transform_hlds__ssdebug__ValueGoals_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1352 "ssdebug.m"
                transform_hlds__ssdebug__VarDesc_77 = transform_hlds__ssdebug__ExistingVarDesc_75;
#line 1351 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18 = transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100;
#line 1351 "ssdebug.m"
                transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105 = transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99;
#line 1351 "ssdebug.m"
                transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98;
#line 1351 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12 = transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97;
#line 1351 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96;
#line 1351 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95;
#line 1351 "ssdebug.m"
              }
#line 1353 "ssdebug.m"
            else
#line 1354 "ssdebug.m"
              {
#line 1354 "ssdebug.m"
                transform_hlds__ssdebug__make_var_value_18_p_0(transform_hlds__ssdebug__HeadVar__2_2, transform_hlds__ssdebug__ProgVar_60, transform_hlds__ssdebug__HeadVar__4_4, &transform_hlds__ssdebug__VarDesc_77, transform_hlds__ssdebug__HeadVar__1_1, &transform_hlds__ssdebug__ValueGoals_76, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_95_95, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_8, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_96_96, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_10, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_97_97, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_12, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_98_98, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_99_99, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_100_100, transform_hlds__ssdebug__STATE_VARIABLE_BoundVarDescs_18);
              }
#line 1359 "ssdebug.m"
            {
#line 1359 "ssdebug.m"
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "FullListVar", transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_104_104, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_14);
            }
#line 1360 "ssdebug.m"
            {
#line 1360 "ssdebug.m"
              transform_hlds__ssdebug__V_109_109 = transform_hlds__ssdebug__list_var_value_type_0_f_0();
            }
#line 1360 "ssdebug.m"
            {
#line 1360 "ssdebug.m"
              hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__V_109_109, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_105_105, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_16);
            }
#line 1361 "ssdebug.m"
            {
#line 1361 "ssdebug.m"
              transform_hlds__ssdebug__V_111_111 = mdbcomp__builtin_modules__mercury_list_module_0_f_0();
            }
#line 1361 "ssdebug.m"
            {
#line 1361 "ssdebug.m"
              transform_hlds__ssdebug__ListTypeSymName_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_78, 0) = ((MR_Box) (transform_hlds__ssdebug__V_111_111));
#line 1361 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__ListTypeSymName_78, 1) = ((MR_Box) ((MR_String) "list"));
#line 1361 "ssdebug.m"
            }
#line 1362 "ssdebug.m"
            {
#line 1362 "ssdebug.m"
              transform_hlds__ssdebug__ListTypeCtor_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "ssdebug.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_79, 0) = ((MR_Box) (transform_hlds__ssdebug__ListTypeSymName_78));
#line 1362 "ssdebug.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ListTypeCtor_79, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1362 "ssdebug.m"
            }
#line 1363 "ssdebug.m"
            {
#line 1363 "ssdebug.m"
              transform_hlds__ssdebug__ConsId_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "ssdebug.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1363 "ssdebug.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_1[2])));
#line 1363 "ssdebug.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_80, 2) = ((MR_Box) ((MR_Integer) 2));
#line 1363 "ssdebug.m"
              MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_80, 3) = ((MR_Box) (transform_hlds__ssdebug__ListTypeCtor_79));
#line 1363 "ssdebug.m"
            }
#line 1364 "ssdebug.m"
            {
#line 1364 "ssdebug.m"
              transform_hlds__ssdebug__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_120_120, 0) = ((MR_Box) (transform_hlds__ssdebug__OutVar0_72));
#line 1364 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "ssdebug.m"
            }
#line 1364 "ssdebug.m"
            {
#line 1364 "ssdebug.m"
              transform_hlds__ssdebug__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_119_119, 0) = ((MR_Box) (transform_hlds__ssdebug__VarDesc_77));
#line 1364 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_119_119, 1) = ((MR_Box) (transform_hlds__ssdebug__V_120_120));
#line 1364 "ssdebug.m"
            }
#line 1364 "ssdebug.m"
            {
#line 1364 "ssdebug.m"
              hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__OutVar_5, transform_hlds__ssdebug__ConsId_80, transform_hlds__ssdebug__V_119_119, &transform_hlds__ssdebug__Goal_81);
            }
#line 2448 "transform_hlds.ssdebug.c"
            transform_hlds__ssdebug__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1367 "ssdebug.m"
            {
#line 1367 "ssdebug.m"
              transform_hlds__ssdebug__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_123_123, 0) = ((MR_Box) (transform_hlds__ssdebug__Goal_81));
#line 1367 "ssdebug.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1367 "ssdebug.m"
            }
#line 1367 "ssdebug.m"
            {
#line 1367 "ssdebug.m"
              transform_hlds__ssdebug__V_122_122 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_128_128, transform_hlds__ssdebug__ValueGoals_76, transform_hlds__ssdebug__V_123_123);
            }
#line 1367 "ssdebug.m"
            {
#line 1367 "ssdebug.m"
              *transform_hlds__ssdebug__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_128_128, transform_hlds__ssdebug__Goals0_73, transform_hlds__ssdebug__V_122_122);
            }
#line 1357 "ssdebug.m"
          }
#line 1331 "ssdebug.m"
      }
#line 1321 "ssdebug.m"
  }
#line 1313 "ssdebug.m"
}

#line 1256 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_level_construction_7_p_0(
#line 1256 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_8,
#line 1256 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goal_9,
#line 1256 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__LevelVar_10,
#line 1256 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_15,
#line 1256 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_16,
#line 1256 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_17,
#line 1256 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_18)
#line 1256 "ssdebug.m"
{
#line 1260 "ssdebug.m"
  {
#line 1260 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1260 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SSTraceLevel_13;
#line 1260 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConsId_14;
#line 1260 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_22_22;
#line 1260 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Globals_29;
#line 1260 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_52_52;
#line 1260 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_55_55;

#line 262 "ssdebug.m"
    {
#line 262 "ssdebug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ssdebug__ModuleInfo_8, &transform_hlds__ssdebug__Globals_29);
    }
#line 263 "ssdebug.m"
    {
#line 263 "ssdebug.m"
      libs__globals__get_ssdb_trace_level_2_p_0(transform_hlds__ssdebug__Globals_29, &transform_hlds__ssdebug__SSTraceLevel_13);
    }
#line 1265 "ssdebug.m"
#line 1265 "ssdebug.m"
    switch (transform_hlds__ssdebug__SSTraceLevel_13) {
#line 1265 "ssdebug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1265 "ssdebug.m"
      case (MR_Integer) 2:
#line 1475 "ssdebug.m"
        {
#line 1475 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__DataCtor_33;
#line 1475 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_34_34;
#line 1475 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_36_36;
#line 1475 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_37_37;
#line 1475 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_39_39;

#line 1480 "ssdebug.m"
          {
#line 1480 "ssdebug.m"
            transform_hlds__ssdebug__V_34_34 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          }
#line 1480 "ssdebug.m"
          {
#line 1480 "ssdebug.m"
            transform_hlds__ssdebug__DataCtor_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "ssdebug.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_33, 0) = ((MR_Box) (transform_hlds__ssdebug__V_34_34));
#line 1480 "ssdebug.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_33, 1) = ((MR_Box) ((MR_String) "deep"));
#line 1480 "ssdebug.m"
          }
#line 1494 "ssdebug.m"
          {
#line 1494 "ssdebug.m"
            transform_hlds__ssdebug__V_39_39 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          }
#line 1494 "ssdebug.m"
          {
#line 1494 "ssdebug.m"
            transform_hlds__ssdebug__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "ssdebug.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_37_37, 0) = ((MR_Box) (transform_hlds__ssdebug__V_39_39));
#line 1494 "ssdebug.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_37_37, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
#line 1494 "ssdebug.m"
          }
#line 1485 "ssdebug.m"
          {
#line 1485 "ssdebug.m"
            transform_hlds__ssdebug__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1485 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_36_36, 0) = ((MR_Box) (transform_hlds__ssdebug__V_37_37));
#line 1485 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_36_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1485 "ssdebug.m"
          }
#line 1481 "ssdebug.m"
          {
#line 1481 "ssdebug.m"
            transform_hlds__ssdebug__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1481 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 1) = ((MR_Box) (transform_hlds__ssdebug__DataCtor_33));
#line 1481 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1481 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 3) = ((MR_Box) (transform_hlds__ssdebug__V_36_36));
#line 1481 "ssdebug.m"
          }
#line 1475 "ssdebug.m"
        }
#line 1265 "ssdebug.m"
        break;
#line 1265 "ssdebug.m"
      case (MR_Integer) 0:
#line 1263 "ssdebug.m"
        {
#line 1264 "ssdebug.m"
          {
#line 1264 "ssdebug.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.make_level_construction\'/7", (MR_String) "unexpected ss trace level");
#line 1264 "ssdebug.m"
            return;
          }
#line 1263 "ssdebug.m"
        }
#line 1265 "ssdebug.m"
        break;
#line 1265 "ssdebug.m"
      case (MR_Integer) 1:
#line 1471 "ssdebug.m"
        {
#line 1471 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__DataCtor_44;
#line 1471 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_45_45;
#line 1471 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_47_47;
#line 1471 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_48_48;
#line 1471 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_50_50;

#line 1480 "ssdebug.m"
          {
#line 1480 "ssdebug.m"
            transform_hlds__ssdebug__V_45_45 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          }
#line 1480 "ssdebug.m"
          {
#line 1480 "ssdebug.m"
            transform_hlds__ssdebug__DataCtor_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "ssdebug.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_44, 0) = ((MR_Box) (transform_hlds__ssdebug__V_45_45));
#line 1480 "ssdebug.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__DataCtor_44, 1) = ((MR_Box) ((MR_String) "shallow"));
#line 1480 "ssdebug.m"
          }
#line 1494 "ssdebug.m"
          {
#line 1494 "ssdebug.m"
            transform_hlds__ssdebug__V_50_50 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
          }
#line 1494 "ssdebug.m"
          {
#line 1494 "ssdebug.m"
            transform_hlds__ssdebug__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "ssdebug.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 0) = ((MR_Box) (transform_hlds__ssdebug__V_50_50));
#line 1494 "ssdebug.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
#line 1494 "ssdebug.m"
          }
#line 1485 "ssdebug.m"
          {
#line 1485 "ssdebug.m"
            transform_hlds__ssdebug__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1485 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_47_47, 0) = ((MR_Box) (transform_hlds__ssdebug__V_48_48));
#line 1485 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_47_47, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1485 "ssdebug.m"
          }
#line 1481 "ssdebug.m"
          {
#line 1481 "ssdebug.m"
            transform_hlds__ssdebug__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1481 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 1) = ((MR_Box) (transform_hlds__ssdebug__DataCtor_44));
#line 1481 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1481 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_14, 3) = ((MR_Box) (transform_hlds__ssdebug__V_47_47));
#line 1481 "ssdebug.m"
          }
#line 1471 "ssdebug.m"
        }
#line 1265 "ssdebug.m"
        break;
#line 1265 "ssdebug.m"
    }
#line 1494 "ssdebug.m"
    {
#line 1494 "ssdebug.m"
      transform_hlds__ssdebug__V_55_55 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
#line 1494 "ssdebug.m"
    {
#line 1494 "ssdebug.m"
      transform_hlds__ssdebug__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_52_52, 0) = ((MR_Box) (transform_hlds__ssdebug__V_55_55));
#line 1494 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_52_52, 1) = ((MR_Box) ((MR_String) "ssdb_tracing_level"));
#line 1494 "ssdebug.m"
    }
#line 1489 "ssdebug.m"
    {
#line 1489 "ssdebug.m"
      transform_hlds__ssdebug__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_22_22, 0) = ((MR_Box) (transform_hlds__ssdebug__V_52_52));
#line 1489 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1489 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_22_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1489 "ssdebug.m"
    }
#line 1272 "ssdebug.m"
    {
#line 1272 "ssdebug.m"
      hlds__make_goal__make_const_construction_alloc_9_p_0(transform_hlds__ssdebug__ConsId_14, transform_hlds__ssdebug__V_22_22, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[4]), transform_hlds__ssdebug__Goal_9, transform_hlds__ssdebug__LevelVar_10, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_15, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_16, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_17, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_18);
#line 1272 "ssdebug.m"
      return;
    }
#line 1260 "ssdebug.m"
  }
#line 1256 "ssdebug.m"
}

#line 1215 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_proc_id_construction_8_p_0(
#line 1215 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_9,
#line 1215 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredInfo_10,
#line 1215 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goals_11,
#line 1215 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__ProcIdVar_12,
#line 1215 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_31,
#line 1215 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_32,
#line 1215 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_33,
#line 1215 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34)
#line 1215 "ssdebug.m"
{
#line 1220 "ssdebug.m"
  {
#line 1220 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Origin_15;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigPredInfo_18;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SymModuleName_19;
#line 1220 "ssdebug.m"
    MR_String transform_hlds__ssdebug__ModuleName_20;
#line 1220 "ssdebug.m"
    MR_String transform_hlds__ssdebug__PredName_21;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructModuleName_22;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ModuleNameVar_23;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructPredName_24;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__PredNameVar_25;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SSDBModule_26;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeCtor_27;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConsId_28;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdType_29;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructProcIdGoal_30;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_44_44;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_54_54;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_55_55;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_57_57;
#line 1220 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_58_58;
#line 1228 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigPredId_17;
#line 1223 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_35_35;
#line 1223 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_16_16;

#line 1221 "ssdebug.m"
    {
#line 1221 "ssdebug.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ssdebug__PredInfo_10, &transform_hlds__ssdebug__Origin_15);
    }
#line 1223 "ssdebug.m"
    transform_hlds__ssdebug__succeeded = ((MR_tag((MR_Word) transform_hlds__ssdebug__Origin_15)) == (MR_mktag((MR_Integer) 2)));
#line 1223 "ssdebug.m"
    if (transform_hlds__ssdebug__succeeded)
#line 1223 "ssdebug.m"
      {
#line 1223 "ssdebug.m"
        transform_hlds__ssdebug__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 0)));
#line 1223 "ssdebug.m"
        transform_hlds__ssdebug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 1)));
#line 1223 "ssdebug.m"
        transform_hlds__ssdebug__OrigPredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__Origin_15, (MR_Integer) 2)));
#line 1223 "ssdebug.m"
        transform_hlds__ssdebug__succeeded = (transform_hlds__ssdebug__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1223 "ssdebug.m"
      }
#line 1228 "ssdebug.m"
    if (transform_hlds__ssdebug__succeeded)
#line 1227 "ssdebug.m"
      {
#line 1227 "ssdebug.m"
        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__ModuleInfo_9, transform_hlds__ssdebug__OrigPredId_17, &transform_hlds__ssdebug__OrigPredInfo_18);
      }
#line 1228 "ssdebug.m"
    else
#line 1229 "ssdebug.m"
      transform_hlds__ssdebug__OrigPredInfo_18 = transform_hlds__ssdebug__PredInfo_10;
#line 1231 "ssdebug.m"
    {
#line 1231 "ssdebug.m"
      transform_hlds__ssdebug__SymModuleName_19 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__OrigPredInfo_18);
    }
#line 1232 "ssdebug.m"
    {
#line 1232 "ssdebug.m"
      transform_hlds__ssdebug__ModuleName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__ssdebug__SymModuleName_19);
    }
#line 1233 "ssdebug.m"
    {
#line 1233 "ssdebug.m"
      transform_hlds__ssdebug__PredName_21 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__OrigPredInfo_18);
    }
#line 1235 "ssdebug.m"
    {
#line 1235 "ssdebug.m"
      hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__ModuleName_20, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[2]), &transform_hlds__ssdebug__ConstructModuleName_22, &transform_hlds__ssdebug__ModuleNameVar_23, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_31, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_33, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38);
    }
#line 1238 "ssdebug.m"
    {
#line 1238 "ssdebug.m"
      hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__PredName_21, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[3]), &transform_hlds__ssdebug__ConstructPredName_24, &transform_hlds__ssdebug__PredNameVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_37_37, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_38_38, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42);
    }
#line 1241 "ssdebug.m"
    {
#line 1241 "ssdebug.m"
      transform_hlds__ssdebug__SSDBModule_26 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
#line 1242 "ssdebug.m"
    {
#line 1242 "ssdebug.m"
      transform_hlds__ssdebug__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_44_44, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_26));
#line 1242 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_44_44, 1) = ((MR_Box) ((MR_String) "ssdb_proc_id"));
#line 1242 "ssdebug.m"
    }
#line 1242 "ssdebug.m"
    {
#line 1242 "ssdebug.m"
      transform_hlds__ssdebug__TypeCtor_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_27, 0) = ((MR_Box) (transform_hlds__ssdebug__V_44_44));
#line 1242 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1242 "ssdebug.m"
    }
#line 1244 "ssdebug.m"
    {
#line 1244 "ssdebug.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "ProcId", transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_32);
    }
#line 1245 "ssdebug.m"
    {
#line 1245 "ssdebug.m"
      transform_hlds__ssdebug__ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1245 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 1) = ((MR_Box) (transform_hlds__ssdebug__V_44_44));
#line 1245 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 2) = ((MR_Box) ((MR_Integer) 2));
#line 1245 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_28, 3) = ((MR_Box) (transform_hlds__ssdebug__TypeCtor_27));
#line 1245 "ssdebug.m"
    }
#line 1246 "ssdebug.m"
    {
#line 1246 "ssdebug.m"
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__TypeCtor_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__ProcIdType_29);
    }
#line 1247 "ssdebug.m"
    {
#line 1247 "ssdebug.m"
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__ProcIdType_29, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34);
    }
#line 1248 "ssdebug.m"
    {
#line 1248 "ssdebug.m"
      transform_hlds__ssdebug__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_55_55, 0) = ((MR_Box) (transform_hlds__ssdebug__PredNameVar_25));
#line 1248 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "ssdebug.m"
    }
#line 1248 "ssdebug.m"
    {
#line 1248 "ssdebug.m"
      transform_hlds__ssdebug__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_54_54, 0) = ((MR_Box) (transform_hlds__ssdebug__ModuleNameVar_23));
#line 1248 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_54_54, 1) = ((MR_Box) (transform_hlds__ssdebug__V_55_55));
#line 1248 "ssdebug.m"
    }
#line 1248 "ssdebug.m"
    {
#line 1248 "ssdebug.m"
      hlds__make_goal__construct_functor_4_p_0(*transform_hlds__ssdebug__ProcIdVar_12, transform_hlds__ssdebug__ConsId_28, transform_hlds__ssdebug__V_54_54, &transform_hlds__ssdebug__ConstructProcIdGoal_30);
    }
#line 1251 "ssdebug.m"
    {
#line 1251 "ssdebug.m"
      transform_hlds__ssdebug__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_58_58, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructProcIdGoal_30));
#line 1251 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1251 "ssdebug.m"
    }
#line 1251 "ssdebug.m"
    {
#line 1251 "ssdebug.m"
      transform_hlds__ssdebug__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_57_57, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructPredName_24));
#line 1251 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_57_57, 1) = ((MR_Box) (transform_hlds__ssdebug__V_58_58));
#line 1251 "ssdebug.m"
    }
#line 1251 "ssdebug.m"
    {
#line 1251 "ssdebug.m"
      MR_Word base;
#line 1251 "ssdebug.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "ssdebug.m"
      *transform_hlds__ssdebug__Goals_11 = base;
#line 1251 "ssdebug.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructModuleName_22));
#line 1251 "ssdebug.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ssdebug__V_57_57));
#line 1251 "ssdebug.m"
    }
#line 1220 "ssdebug.m"
  }
#line 1215 "ssdebug.m"
}

#line 1194 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_handle_event_9_p_0(
#line 1194 "ssdebug.m"
  MR_String transform_hlds__ssdebug__HandleTypeString_10,
#line 1194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Arguments_11,
#line 1194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HandleEventGoal_12,
#line 1194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19,
#line 1194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_20,
#line 1194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_21,
#line 1194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_22,
#line 1194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_23,
#line 1194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_24)
#line 1194 "ssdebug.m"
{
#line 1199 "ssdebug.m"
  {
#line 1199 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1199 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SSDBModule_16;
#line 1199 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Context_18;
#line 1199 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_29_29;

#line 1200 "ssdebug.m"
    {
#line 1200 "ssdebug.m"
      transform_hlds__ssdebug__SSDBModule_16 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
#line 1202 "ssdebug.m"
    {
#line 1202 "ssdebug.m"
      transform_hlds__ssdebug__Context_18 = mercury__term__context_init_0_f_0();
    }
#line 1205 "ssdebug.m"
    {
#line 1205 "ssdebug.m"
      transform_hlds__ssdebug__V_29_29 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1203 "ssdebug.m"
    {
#line 1203 "ssdebug.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__ssdebug__SSDBModule_16, transform_hlds__ssdebug__HandleTypeString_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__ssdebug__Arguments_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__V_29_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19, transform_hlds__ssdebug__Context_18, transform_hlds__ssdebug__HandleEventGoal_12);
    }
#line 1199 "ssdebug.m"
    *transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_24 = transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_23;
#line 1199 "ssdebug.m"
    *transform_hlds__ssdebug__STATE_VARIABLE_VarSet_22 = transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_21;
#line 1199 "ssdebug.m"
    *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_20 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_19;
#line 1199 "ssdebug.m"
  }
#line 1194 "ssdebug.m"
}

#line 1181 "ssdebug.m"
static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(
#line 1181 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Detism_3)
#line 1181 "ssdebug.m"
{
#line 1183 "ssdebug.m"
  {
#line 1183 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1183 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo_4;
#line 1183 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo0_5;
#line 1183 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo0_9;
#line 1183 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo1_10;

#line 1177 "ssdebug.m"
    {
#line 1177 "ssdebug.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_9);
    }
#line 1178 "ssdebug.m"
    {
#line 1178 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_9, &transform_hlds__ssdebug__GoalInfo1_10);
    }
#line 1179 "ssdebug.m"
    {
#line 1179 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_3, transform_hlds__ssdebug__GoalInfo1_10, &transform_hlds__ssdebug__GoalInfo0_5);
    }
#line 1185 "ssdebug.m"
    {
#line 1185 "ssdebug.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, transform_hlds__ssdebug__GoalInfo0_5, &transform_hlds__ssdebug__GoalInfo_4);
    }
#line 1183 "ssdebug.m"
    return transform_hlds__ssdebug__GoalInfo_4;
#line 1183 "ssdebug.m"
  }
#line 1181 "ssdebug.m"
}

#line 1174 "ssdebug.m"
static MR_Word MR_CALL 
transform_hlds__ssdebug__impure_goal_info_1_f_0(
#line 1174 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Detism_3)
#line 1174 "ssdebug.m"
{
#line 1176 "ssdebug.m"
  {
#line 1176 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1176 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo_4;
#line 1176 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo0_5;
#line 1176 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo1_6;

#line 1177 "ssdebug.m"
    {
#line 1177 "ssdebug.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_5);
    }
#line 1178 "ssdebug.m"
    {
#line 1178 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_5, &transform_hlds__ssdebug__GoalInfo1_6);
    }
#line 1179 "ssdebug.m"
    {
#line 1179 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_3, transform_hlds__ssdebug__GoalInfo1_6, &transform_hlds__ssdebug__GoalInfo_4);
    }
#line 1176 "ssdebug.m"
    return transform_hlds__ssdebug__GoalInfo_4;
#line 1176 "ssdebug.m"
  }
#line 1174 "ssdebug.m"
}

#line 1147 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__commit_goal_changes_10_p_0(
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ConjGoals_11,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_12,
#line 1147 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_13,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_28,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29,
#line 1147 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_31,
#line 1147 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_32,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__VarSet_17,
#line 1147 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__VarTypes_18)
#line 1147 "ssdebug.m"
{
#line 1152 "ssdebug.m"
  {
#line 1152 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConjDetism_19;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConjGoalInfo_20;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Conj_21;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigGoalInfo_23;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcDetism_24;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ScopeGoalInfo_25;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Purity_26;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Goal_27;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_33_33;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_35_35;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_36_36;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_37_37;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_47_47;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo0_52;
#line 1152 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo1_53;
#line 1157 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_22_22;

#line 1153 "ssdebug.m"
    {
#line 1153 "ssdebug.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__ssdebug__ConjGoals_11, &transform_hlds__ssdebug__ConjDetism_19);
    }
#line 1177 "ssdebug.m"
    {
#line 1177 "ssdebug.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_52);
    }
#line 1178 "ssdebug.m"
    {
#line 1178 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo0_52, &transform_hlds__ssdebug__GoalInfo1_53);
    }
#line 1179 "ssdebug.m"
    {
#line 1179 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ConjDetism_19, transform_hlds__ssdebug__GoalInfo1_53, &transform_hlds__ssdebug__ConjGoalInfo_20);
    }
#line 1155 "ssdebug.m"
    {
#line 1155 "ssdebug.m"
      transform_hlds__ssdebug__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1155 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_33_33, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1155 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_33_33, 2) = ((MR_Box) (transform_hlds__ssdebug__ConjGoals_11));
#line 1155 "ssdebug.m"
    }
#line 1155 "ssdebug.m"
    {
#line 1155 "ssdebug.m"
      transform_hlds__ssdebug__Conj_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Conj_21, 0) = ((MR_Box) (transform_hlds__ssdebug__V_33_33));
#line 1155 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Conj_21, 1) = ((MR_Box) (transform_hlds__ssdebug__ConjGoalInfo_20));
#line 1155 "ssdebug.m"
    }
#line 1157 "ssdebug.m"
    {
#line 1157 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__V_35_35);
    }
#line 1157 "ssdebug.m"
    transform_hlds__ssdebug__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_35_35, (MR_Integer) 0)));
#line 1157 "ssdebug.m"
    transform_hlds__ssdebug__OrigGoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_35_35, (MR_Integer) 1)));
#line 1158 "ssdebug.m"
    {
#line 1158 "ssdebug.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__ProcDetism_24);
    }
#line 1160 "ssdebug.m"
    {
#line 1160 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ProcDetism_24, transform_hlds__ssdebug__OrigGoalInfo_23, &transform_hlds__ssdebug__ScopeGoalInfo_25);
    }
#line 1161 "ssdebug.m"
    {
#line 1161 "ssdebug.m"
      transform_hlds__ssdebug__Purity_26 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__ssdebug__OrigGoalInfo_23);
    }
#line 1162 "ssdebug.m"
    {
#line 1162 "ssdebug.m"
      transform_hlds__ssdebug__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__V_37_37, 0) = ((MR_Box) (transform_hlds__ssdebug__Purity_26));
#line 1162 "ssdebug.m"
    }
#line 1162 "ssdebug.m"
    {
#line 1162 "ssdebug.m"
      transform_hlds__ssdebug__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1162 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_36_36, 1) = ((MR_Box) (transform_hlds__ssdebug__V_37_37));
#line 1162 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_36_36, 2) = ((MR_Box) (transform_hlds__ssdebug__Conj_21));
#line 1162 "ssdebug.m"
    }
#line 1162 "ssdebug.m"
    {
#line 1162 "ssdebug.m"
      transform_hlds__ssdebug__Goal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_27, 0) = ((MR_Box) (transform_hlds__ssdebug__V_36_36));
#line 1162 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_27, 1) = ((MR_Box) (transform_hlds__ssdebug__ScopeGoalInfo_25));
#line 1162 "ssdebug.m"
    }
#line 1164 "ssdebug.m"
    {
#line 1164 "ssdebug.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__VarSet_17, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38);
    }
#line 1165 "ssdebug.m"
    {
#line 1165 "ssdebug.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__VarTypes_18, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_38_38, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39);
    }
#line 1166 "ssdebug.m"
    {
#line 1166 "ssdebug.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_27, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_39_39, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40);
    }
#line 1167 "ssdebug.m"
    {
#line 1167 "ssdebug.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42);
    }
#line 1168 "ssdebug.m"
    {
#line 1168 "ssdebug.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_42_42, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45);
    }
#line 1170 "ssdebug.m"
    {
#line 1170 "ssdebug.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__ssdebug__ProcId_13, *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46);
    }
#line 1171 "ssdebug.m"
    {
#line 1171 "ssdebug.m"
      transform_hlds__ssdebug__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_47_47, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_12));
#line 1171 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_47_47, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_13));
#line 1171 "ssdebug.m"
    }
#line 1171 "ssdebug.m"
    {
#line 1171 "ssdebug.m"
      check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__ssdebug__V_47_47, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_46_46, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48);
    }
#line 1172 "ssdebug.m"
    {
#line 1172 "ssdebug.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__ssdebug__PredId_12, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_48_48, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_45_45, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_32);
#line 1172 "ssdebug.m"
      return;
    }
#line 1152 "ssdebug.m"
  }
#line 1147 "ssdebug.m"
}

#line 1115 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_switch_goal_4_p_0(
#line 1115 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__SwitchVar_5,
#line 1115 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__DoRetryGoal_6,
#line 1115 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__DoNotRetryGoal_7,
#line 1115 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__SwitchGoal_8)
#line 1115 "ssdebug.m"
{
#line 1118 "ssdebug.m"
  {
#line 1118 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SSDBModule_9;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryTypeSymName_10;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryTypeCtor_11;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConsIdDoRetry_12;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConsIdDoNotRetry_13;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CaseDoRetry_14;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CaseDoNotRetry_15;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SwitchGoalExpr_16;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryGoalInfo_17;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__NoRetryGoalInfo_18;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryDetism_19;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__NoRetryDetism_20;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SwitchDetism_21;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo0_22;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo1_23;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo_24;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_27_27;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_30_30;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_36_36;
#line 1118 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_37_37;

#line 1119 "ssdebug.m"
    {
#line 1119 "ssdebug.m"
      transform_hlds__ssdebug__SSDBModule_9 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
#line 1120 "ssdebug.m"
    {
#line 1120 "ssdebug.m"
      transform_hlds__ssdebug__RetryTypeSymName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__RetryTypeSymName_10, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_9));
#line 1120 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__RetryTypeSymName_10, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
#line 1120 "ssdebug.m"
    }
#line 1121 "ssdebug.m"
    {
#line 1121 "ssdebug.m"
      transform_hlds__ssdebug__RetryTypeCtor_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RetryTypeCtor_11, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryTypeSymName_10));
#line 1121 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RetryTypeCtor_11, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1121 "ssdebug.m"
    }
#line 1122 "ssdebug.m"
    {
#line 1122 "ssdebug.m"
      transform_hlds__ssdebug__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_27_27, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_9));
#line 1122 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_27_27, 1) = ((MR_Box) ((MR_String) "do_retry"));
#line 1122 "ssdebug.m"
    }
#line 1122 "ssdebug.m"
    {
#line 1122 "ssdebug.m"
      transform_hlds__ssdebug__ConsIdDoRetry_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1122 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 1) = ((MR_Box) (transform_hlds__ssdebug__V_27_27));
#line 1122 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1122 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoRetry_12, 3) = ((MR_Box) (transform_hlds__ssdebug__RetryTypeCtor_11));
#line 1122 "ssdebug.m"
    }
#line 1124 "ssdebug.m"
    {
#line 1124 "ssdebug.m"
      transform_hlds__ssdebug__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_30_30, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_9));
#line 1124 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_30_30, 1) = ((MR_Box) ((MR_String) "do_not_retry"));
#line 1124 "ssdebug.m"
    }
#line 1124 "ssdebug.m"
    {
#line 1124 "ssdebug.m"
      transform_hlds__ssdebug__ConsIdDoNotRetry_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1124 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 1) = ((MR_Box) (transform_hlds__ssdebug__V_30_30));
#line 1124 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1124 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsIdDoNotRetry_13, 3) = ((MR_Box) (transform_hlds__ssdebug__RetryTypeCtor_11));
#line 1124 "ssdebug.m"
    }
#line 1126 "ssdebug.m"
    {
#line 1126 "ssdebug.m"
      transform_hlds__ssdebug__CaseDoRetry_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoRetry_14, 0) = ((MR_Box) (transform_hlds__ssdebug__ConsIdDoRetry_12));
#line 1126 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoRetry_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1126 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoRetry_14, 2) = ((MR_Box) (transform_hlds__ssdebug__DoRetryGoal_6));
#line 1126 "ssdebug.m"
    }
#line 1127 "ssdebug.m"
    {
#line 1127 "ssdebug.m"
      transform_hlds__ssdebug__CaseDoNotRetry_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoNotRetry_15, 0) = ((MR_Box) (transform_hlds__ssdebug__ConsIdDoNotRetry_13));
#line 1127 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoNotRetry_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CaseDoNotRetry_15, 2) = ((MR_Box) (transform_hlds__ssdebug__DoNotRetryGoal_7));
#line 1127 "ssdebug.m"
    }
#line 1129 "ssdebug.m"
    {
#line 1129 "ssdebug.m"
      transform_hlds__ssdebug__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_37_37, 0) = ((MR_Box) (transform_hlds__ssdebug__CaseDoNotRetry_15));
#line 1129 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1129 "ssdebug.m"
    }
#line 1129 "ssdebug.m"
    {
#line 1129 "ssdebug.m"
      transform_hlds__ssdebug__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_36_36, 0) = ((MR_Box) (transform_hlds__ssdebug__CaseDoRetry_14));
#line 1129 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_36_36, 1) = ((MR_Box) (transform_hlds__ssdebug__V_37_37));
#line 1129 "ssdebug.m"
    }
#line 1128 "ssdebug.m"
    {
#line 1128 "ssdebug.m"
      transform_hlds__ssdebug__SwitchGoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1128 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 1) = ((MR_Box) (transform_hlds__ssdebug__SwitchVar_5));
#line 1128 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1128 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__SwitchGoalExpr_16, 3) = ((MR_Box) (transform_hlds__ssdebug__V_36_36));
#line 1128 "ssdebug.m"
    }
#line 1131 "ssdebug.m"
    {
#line 1131 "ssdebug.m"
      transform_hlds__ssdebug__RetryGoalInfo_17 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__DoRetryGoal_6);
    }
#line 1132 "ssdebug.m"
    {
#line 1132 "ssdebug.m"
      transform_hlds__ssdebug__NoRetryGoalInfo_18 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__DoNotRetryGoal_7);
    }
#line 1133 "ssdebug.m"
    {
#line 1133 "ssdebug.m"
      transform_hlds__ssdebug__RetryDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__ssdebug__RetryGoalInfo_17);
    }
#line 1134 "ssdebug.m"
    {
#line 1134 "ssdebug.m"
      transform_hlds__ssdebug__NoRetryDetism_20 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__ssdebug__NoRetryGoalInfo_18);
    }
#line 1136 "ssdebug.m"
    {
#line 1136 "ssdebug.m"
      parse_tree__prog_detism__det_switch_detism_3_p_0(transform_hlds__ssdebug__RetryDetism_19, transform_hlds__ssdebug__NoRetryDetism_20, &transform_hlds__ssdebug__SwitchDetism_21);
    }
#line 1138 "ssdebug.m"
    {
#line 1138 "ssdebug.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__GoalInfo0_22);
    }
#line 1139 "ssdebug.m"
    {
#line 1139 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__SwitchDetism_21, transform_hlds__ssdebug__GoalInfo0_22, &transform_hlds__ssdebug__GoalInfo1_23);
    }
#line 1140 "ssdebug.m"
    {
#line 1140 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__ssdebug__GoalInfo1_23, &transform_hlds__ssdebug__GoalInfo_24);
    }
#line 1142 "ssdebug.m"
    {
#line 1142 "ssdebug.m"
      MR_Word base;
#line 1142 "ssdebug.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "ssdebug.m"
      *transform_hlds__ssdebug__SwitchGoal_8 = base;
#line 1142 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchGoalExpr_16));
#line 1142 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo_24));
#line 1142 "ssdebug.m"
    }
#line 1118 "ssdebug.m"
  }
#line 1115 "ssdebug.m"
}

#line 1082 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_recursive_call_6_p_0(
#line 1082 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredInfo_7,
#line 1082 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_8,
#line 1082 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_9,
#line 1082 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_10,
#line 1082 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVars_11,
#line 1082 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goal_12)
#line 1082 "ssdebug.m"
{
#line 1085 "ssdebug.m"
  {
#line 1085 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1085 "ssdebug.m"
    MR_String transform_hlds__ssdebug__PredName_13;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ModuleName_14;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SymName_15;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BuiltIn_16;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalExpr_17;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcInfo_18;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BodyGoal0_19;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfoHG0_20;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Determinism_21;
#line 1085 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfoHG_22;

#line 1086 "ssdebug.m"
    {
#line 1086 "ssdebug.m"
      transform_hlds__ssdebug__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__PredInfo_7);
    }
#line 1087 "ssdebug.m"
    {
#line 1087 "ssdebug.m"
      transform_hlds__ssdebug__ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__PredInfo_7);
    }
#line 1088 "ssdebug.m"
    {
#line 1088 "ssdebug.m"
      transform_hlds__ssdebug__SymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__SymName_15, 0) = ((MR_Box) (transform_hlds__ssdebug__ModuleName_14));
#line 1088 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__SymName_15, 1) = ((MR_Box) (transform_hlds__ssdebug__PredName_13));
#line 1088 "ssdebug.m"
    }
#line 1089 "ssdebug.m"
    {
#line 1089 "ssdebug.m"
      transform_hlds__ssdebug__BuiltIn_16 = hlds__hlds_pred__builtin_state_4_f_0(transform_hlds__ssdebug__ModuleInfo_8, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__PredId_9, transform_hlds__ssdebug__ProcId_10);
    }
#line 1090 "ssdebug.m"
    {
#line 1090 "ssdebug.m"
      transform_hlds__ssdebug__GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_9));
#line 1090 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_10));
#line 1090 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 2) = ((MR_Box) (transform_hlds__ssdebug__HeadVars_11));
#line 1090 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 3) = ((MR_Box) (transform_hlds__ssdebug__BuiltIn_16));
#line 1090 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_17, 5) = ((MR_Box) (transform_hlds__ssdebug__SymName_15));
#line 1090 "ssdebug.m"
    }
#line 1095 "ssdebug.m"
    {
#line 1095 "ssdebug.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__ssdebug__PredInfo_7, transform_hlds__ssdebug__ProcId_10, &transform_hlds__ssdebug__ProcInfo_18);
    }
#line 1096 "ssdebug.m"
    {
#line 1096 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__ProcInfo_18, &transform_hlds__ssdebug__BodyGoal0_19);
    }
#line 1097 "ssdebug.m"
    {
#line 1097 "ssdebug.m"
      transform_hlds__ssdebug__GoalInfoHG0_20 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__BodyGoal0_19);
    }
#line 1099 "ssdebug.m"
    {
#line 1099 "ssdebug.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__ProcInfo_18, &transform_hlds__ssdebug__Determinism_21);
    }
#line 1100 "ssdebug.m"
    {
#line 1100 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Determinism_21, transform_hlds__ssdebug__GoalInfoHG0_20, &transform_hlds__ssdebug__GoalInfoHG_22);
    }
#line 1102 "ssdebug.m"
    {
#line 1102 "ssdebug.m"
      MR_Word base;
#line 1102 "ssdebug.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "ssdebug.m"
      *transform_hlds__ssdebug__Goal_12 = base;
#line 1102 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_17));
#line 1102 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfoHG_22));
#line 1102 "ssdebug.m"
    }
#line 1085 "ssdebug.m"
  }
#line 1082 "ssdebug.m"
}

#line 1070 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__make_retry_var_6_p_0(
#line 1070 "ssdebug.m"
  MR_String transform_hlds__ssdebug__VarName_7,
#line 1070 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__RetryVar_8,
#line 1070 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14,
#line 1070 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15,
#line 1070 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16,
#line 1070 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17)
#line 1070 "ssdebug.m"
{
#line 1073 "ssdebug.m"
  {
#line 1073 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1073 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SSDBModule_11;
#line 1073 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeCtor_12;
#line 1073 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryType_13;
#line 1073 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_18_18;

#line 1074 "ssdebug.m"
    {
#line 1074 "ssdebug.m"
      transform_hlds__ssdebug__SSDBModule_11 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
#line 1075 "ssdebug.m"
    {
#line 1075 "ssdebug.m"
      transform_hlds__ssdebug__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_18_18, 0) = ((MR_Box) (transform_hlds__ssdebug__SSDBModule_11));
#line 1075 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_18_18, 1) = ((MR_Box) ((MR_String) "ssdb_retry"));
#line 1075 "ssdebug.m"
    }
#line 1075 "ssdebug.m"
    {
#line 1075 "ssdebug.m"
      transform_hlds__ssdebug__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_12, 0) = ((MR_Box) (transform_hlds__ssdebug__V_18_18));
#line 1075 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__TypeCtor_12, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1075 "ssdebug.m"
    }
#line 1076 "ssdebug.m"
    {
#line 1076 "ssdebug.m"
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__ssdebug__TypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__ssdebug__RetryType_13);
    }
#line 1077 "ssdebug.m"
    {
#line 1077 "ssdebug.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ssdebug__VarName_7, transform_hlds__ssdebug__RetryVar_8, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_14, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_15);
    }
#line 1078 "ssdebug.m"
    {
#line 1078 "ssdebug.m"
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__ssdebug__RetryVar_8, transform_hlds__ssdebug__RetryType_13, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_16, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_17);
#line 1078 "ssdebug.m"
      return;
    }
#line 1073 "ssdebug.m"
  }
#line 1070 "ssdebug.m"
}

#line 1058 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(
#line 1058 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__OutputVars_4,
#line 1058 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Goal0_5,
#line 1058 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goal_6)
#line 1058 "ssdebug.m"
{
#line 1061 "ssdebug.m"
  {
#line 1061 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1061 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_5, (MR_Integer) 1)));
#line 1061 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Reason_9;
#line 1061 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_11_11;
#line 1062 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_5, (MR_Integer) 0)));

#line 1063 "ssdebug.m"
    {
#line 1063 "ssdebug.m"
      transform_hlds__ssdebug__Reason_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Reason_9, 0) = ((MR_Box) (transform_hlds__ssdebug__OutputVars_4));
#line 1063 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Reason_9, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1063 "ssdebug.m"
    }
#line 1064 "ssdebug.m"
    {
#line 1064 "ssdebug.m"
      transform_hlds__ssdebug__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1064 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_11_11, 1) = ((MR_Box) (transform_hlds__ssdebug__Reason_9));
#line 1064 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_11_11, 2) = ((MR_Box) (transform_hlds__ssdebug__Goal0_5));
#line 1064 "ssdebug.m"
    }
#line 1064 "ssdebug.m"
    {
#line 1064 "ssdebug.m"
      MR_Word base;
#line 1064 "ssdebug.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "ssdebug.m"
      *transform_hlds__ssdebug__Goal_6 = base;
#line 1064 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__V_11_11));
#line 1064 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo_8));
#line 1064 "ssdebug.m"
    }
#line 1061 "ssdebug.m"
  }
#line 1058 "ssdebug.m"
}

#line 1044 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__rename_outputs_9_p_0(
#line 1044 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__OutputVars_10,
#line 1044 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_Goal_23,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__UnifyGoal_12,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Renaming_13,
#line 1044 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_24,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarSet_25,
#line 1044 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_26,
#line 1044 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_27)
#line 1044 "ssdebug.m"
{
#line 1048 "ssdebug.m"
  {
#line 1048 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1048 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo0_16;
#line 1048 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__InstMapDelta_17;
#line 1048 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__UnifyGoals_18;
#line 1048 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__UnifyGoalInfo0_20;
#line 1048 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__UnifyGoalInfo_21;
#line 1051 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___NewVars_19;

#line 1049 "ssdebug.m"
    {
#line 1049 "ssdebug.m"
      transform_hlds__ssdebug__GoalInfo0_16 = hlds__hlds_goal__get_hlds_goal_info_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22);
    }
#line 1050 "ssdebug.m"
    {
#line 1050 "ssdebug.m"
      transform_hlds__ssdebug__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__ssdebug__GoalInfo0_16);
    }
#line 1051 "ssdebug.m"
    {
#line 1051 "ssdebug.m"
      hlds__goal_util__create_renaming_9_p_0(transform_hlds__ssdebug__OutputVars_10, transform_hlds__ssdebug__InstMapDelta_17, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_0_24, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_25, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_0_26, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_27, &transform_hlds__ssdebug__UnifyGoals_18, &transform_hlds__ssdebug___NewVars_19, transform_hlds__ssdebug__Renaming_13);
    }
#line 1053 "ssdebug.m"
    {
#line 1053 "ssdebug.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__ssdebug__UnifyGoalInfo0_20);
    }
#line 1054 "ssdebug.m"
    {
#line 1054 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__ssdebug__UnifyGoalInfo0_20, &transform_hlds__ssdebug__UnifyGoalInfo_21);
    }
#line 1055 "ssdebug.m"
    {
#line 1055 "ssdebug.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__ssdebug__UnifyGoals_18, transform_hlds__ssdebug__UnifyGoalInfo_21, transform_hlds__ssdebug__UnifyGoal_12);
    }
#line 1056 "ssdebug.m"
    {
#line 1056 "ssdebug.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*transform_hlds__ssdebug__Renaming_13, transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_22, transform_hlds__ssdebug__STATE_VARIABLE_Goal_23);
#line 1056 "ssdebug.m"
      return;
    }
#line 1048 "ssdebug.m"
  }
#line 1044 "ssdebug.m"
}

#line 1039 "ssdebug.m"
static MR_bool MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0_1(
#line 1039 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 1039 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 1039 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 1039 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3)
#line 1039 "ssdebug.m"
{
#line 1039 "ssdebug.m"
  {
#line 1039 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1039 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 1039 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv0_HeadVar__4_14;

#line 1039 "ssdebug.m"
    {
#line 1039 "ssdebug.m"
      transform_hlds__ssdebug__succeeded = transform_hlds__ssdebug__IntroducedFrom__func__get_output_args__1039__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv0_HeadVar__4_14);
    }
#line 1039 "ssdebug.m"
    if (transform_hlds__ssdebug__succeeded)
#line 1039 "ssdebug.m"
      {
#line 1039 "ssdebug.m"
        *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv0_HeadVar__4_14));
#line 1039 "ssdebug.m"
        transform_hlds__ssdebug__succeeded = MR_TRUE;
#line 1039 "ssdebug.m"
      }
#line 1039 "ssdebug.m"
    return transform_hlds__ssdebug__succeeded;
#line 1039 "ssdebug.m"
  }
#line 1039 "ssdebug.m"
}

#line 1035 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__get_output_args_4_p_0(
#line 1035 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_5,
#line 1035 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__HeadVars_6,
#line 1035 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ArgModes_7,
#line 1035 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__OutputVars_8)
#line 1035 "ssdebug.m"
{
#line 1038 "ssdebug.m"
  {
#line 1038 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1038 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeInfo_17_17;
#line 1038 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__F_9;

#line 1039 "ssdebug.m"
    {
#line 1039 "ssdebug.m"
      transform_hlds__ssdebug__F_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__F_9, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_7[0]));
#line 1039 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__F_9, 1) = ((MR_Box) (transform_hlds__ssdebug__get_output_args_4_p_0_1));
#line 1039 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__F_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1039 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__F_9, 3) = ((MR_Box) (transform_hlds__ssdebug__ModuleInfo_5));
#line 1039 "ssdebug.m"
    }
#line 4047 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeInfo_17_17 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 1042 "ssdebug.m"
    {
#line 1042 "ssdebug.m"
      *transform_hlds__ssdebug__OutputVars_8 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__ssdebug__TypeInfo_17_17, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__TypeInfo_17_17, transform_hlds__ssdebug__F_9, transform_hlds__ssdebug__HeadVars_6, transform_hlds__ssdebug__ArgModes_7);
    }
#line 1038 "ssdebug.m"
  }
#line 1035 "ssdebug.m"
}

#line 1021 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__get_stripped_headvars_5_p_0(
#line 1021 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredInfo_6,
#line 1021 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ProcInfo_7,
#line 1021 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__FullHeadVars_8,
#line 1021 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__HeadVars_9,
#line 1021 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__ArgModes_10)
#line 1021 "ssdebug.m"
{
#line 1024 "ssdebug.m"
  {
#line 1024 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 1024 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeInfo_15_15;
#line 1024 "ssdebug.m"
    MR_Integer transform_hlds__ssdebug__PredArity_11;
#line 1024 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FullArgModes_12;
#line 1024 "ssdebug.m"
    MR_Integer transform_hlds__ssdebug__NumHeadVars_13;
#line 1024 "ssdebug.m"
    MR_Integer transform_hlds__ssdebug__NumToDrop_14;

#line 1025 "ssdebug.m"
    {
#line 1025 "ssdebug.m"
      transform_hlds__ssdebug__PredArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__ssdebug__PredInfo_6);
    }
#line 1026 "ssdebug.m"
    {
#line 1026 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__ProcInfo_7, transform_hlds__ssdebug__FullHeadVars_8);
    }
#line 1027 "ssdebug.m"
    {
#line 1027 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__ProcInfo_7, &transform_hlds__ssdebug__FullArgModes_12);
    }
#line 4104 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeInfo_15_15 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 1028 "ssdebug.m"
    {
#line 1028 "ssdebug.m"
      mercury__list__length_2_p_0(transform_hlds__ssdebug__TypeInfo_15_15, *transform_hlds__ssdebug__FullHeadVars_8, &transform_hlds__ssdebug__NumHeadVars_13);
    }
#line 1031 "ssdebug.m"
    transform_hlds__ssdebug__NumToDrop_14 = (transform_hlds__ssdebug__NumHeadVars_13 - transform_hlds__ssdebug__PredArity_11);
#line 1032 "ssdebug.m"
    {
#line 1032 "ssdebug.m"
      mercury__list__det_drop_3_p_0(transform_hlds__ssdebug__TypeInfo_15_15, transform_hlds__ssdebug__NumToDrop_14, *transform_hlds__ssdebug__FullHeadVars_8, transform_hlds__ssdebug__HeadVars_9);
    }
#line 1033 "ssdebug.m"
    {
#line 1033 "ssdebug.m"
      mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__NumToDrop_14, transform_hlds__ssdebug__FullArgModes_12, transform_hlds__ssdebug__ArgModes_10);
#line 1033 "ssdebug.m"
      return;
    }
#line 1024 "ssdebug.m"
  }
#line 1021 "ssdebug.m"
}

#line 976 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_erroneous_6_p_0(
#line 976 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 976 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 976 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28,
#line 976 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_29,
#line 976 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30,
#line 976 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_31)
#line 976 "ssdebug.m"
{
#line 981 "ssdebug.m"
  {
#line 981 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeInfo_69_69;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeInfo_15_80;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___FullHeadVars_15;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HeadVars_16;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallArgListVar_21;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallArgListGoals_22;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__LevelVar_25;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BodyGoals_27;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_33_33;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34_34;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_38_38;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39_39;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_41_41;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_42_42;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_43_43;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_44_44;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_48_48;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_52_52;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_53_53;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_55_55;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_56_56;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_57_57;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_58_58;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_60_60;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_61_61;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_63_63;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_64_64;
#line 981 "ssdebug.m"
    MR_Integer transform_hlds__ssdebug__PredArity_76;
#line 981 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FullArgModes_77;
#line 981 "ssdebug.m"
    MR_Integer transform_hlds__ssdebug__NumHeadVars_78;
#line 981 "ssdebug.m"
    MR_Integer transform_hlds__ssdebug__NumToDrop_79;
#line 1033 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___ArgModes_17;
#line 996 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtCall_23;

#line 981 "ssdebug.m"
    {
#line 981 "ssdebug.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32);
    }
#line 982 "ssdebug.m"
    {
#line 982 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
#line 983 "ssdebug.m"
    {
#line 983 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_33_33);
    }
#line 984 "ssdebug.m"
    {
#line 984 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34_34);
    }
#line 1025 "ssdebug.m"
    {
#line 1025 "ssdebug.m"
      transform_hlds__ssdebug__PredArity_76 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32);
    }
#line 1026 "ssdebug.m"
    {
#line 1026 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug___FullHeadVars_15);
    }
#line 1027 "ssdebug.m"
    {
#line 1027 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__FullArgModes_77);
    }
#line 4283 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeInfo_15_80 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 1028 "ssdebug.m"
    {
#line 1028 "ssdebug.m"
      mercury__list__length_2_p_0(transform_hlds__ssdebug__TypeInfo_15_80, transform_hlds__ssdebug___FullHeadVars_15, &transform_hlds__ssdebug__NumHeadVars_78);
    }
#line 1031 "ssdebug.m"
    transform_hlds__ssdebug__NumToDrop_79 = (transform_hlds__ssdebug__NumHeadVars_78 - transform_hlds__ssdebug__PredArity_76);
#line 1032 "ssdebug.m"
    {
#line 1032 "ssdebug.m"
      mercury__list__det_drop_3_p_0(transform_hlds__ssdebug__TypeInfo_15_80, transform_hlds__ssdebug__NumToDrop_79, transform_hlds__ssdebug___FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16);
    }
#line 1033 "ssdebug.m"
    {
#line 1033 "ssdebug.m"
      mercury__list__det_drop_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__ssdebug__NumToDrop_79, transform_hlds__ssdebug__FullArgModes_77, &transform_hlds__ssdebug___ArgModes_17);
    }
#line 989 "ssdebug.m"
    {
#line 989 "ssdebug.m"
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_33_33, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_34_34, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36);
    }
#line 994 "ssdebug.m"
    {
#line 994 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30, &transform_hlds__ssdebug__InitInstMap_20);
    }
#line 4312 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeInfo_69_69 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 996 "ssdebug.m"
    {
#line 996 "ssdebug.m"
      transform_hlds__ssdebug__V_38_38 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_69_69, transform_hlds__ssdebug__TypeInfo_69_69);
    }
#line 998 "ssdebug.m"
    {
#line 998 "ssdebug.m"
      transform_hlds__ssdebug__V_44_44 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_69_69, transform_hlds__ssdebug__TypeInfo_69_69);
    }
#line 996 "ssdebug.m"
    {
#line 996 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_38_38, &transform_hlds__ssdebug__CallArgListVar_21, &transform_hlds__ssdebug__CallArgListGoals_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_30, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39_39, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_28, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_32_32, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_41_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_35_35, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_42_42, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_36_36, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_43_43, transform_hlds__ssdebug__V_44_44, &transform_hlds__ssdebug___BoundVarDescsAtCall_23);
    }
#line 1001 "ssdebug.m"
    {
#line 1001 "ssdebug.m"
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_42_42, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_43_43, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46);
    }
#line 1006 "ssdebug.m"
    {
#line 1006 "ssdebug.m"
      transform_hlds__ssdebug__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_53_53, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
#line 1006 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "ssdebug.m"
    }
#line 1006 "ssdebug.m"
    {
#line 1006 "ssdebug.m"
      transform_hlds__ssdebug__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_52_52, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_21));
#line 1006 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_52_52, 1) = ((MR_Box) (transform_hlds__ssdebug__V_53_53));
#line 1006 "ssdebug.m"
    }
#line 1006 "ssdebug.m"
    {
#line 1006 "ssdebug.m"
      transform_hlds__ssdebug__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 1006 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 1) = ((MR_Box) (transform_hlds__ssdebug__V_52_52));
#line 1006 "ssdebug.m"
    }
#line 1005 "ssdebug.m"
    {
#line 1005 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__V_48_48, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_45_45, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_46_46, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51);
    }
#line 1013 "ssdebug.m"
    {
#line 1013 "ssdebug.m"
      transform_hlds__ssdebug__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_58_58, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
#line 1013 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "ssdebug.m"
    }
#line 1014 "ssdebug.m"
    {
#line 1014 "ssdebug.m"
      transform_hlds__ssdebug__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
#line 1014 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "ssdebug.m"
    }
#line 1015 "ssdebug.m"
    {
#line 1015 "ssdebug.m"
      transform_hlds__ssdebug__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_64_64, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_14));
#line 1015 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "ssdebug.m"
    }
#line 1016 "ssdebug.m"
    {
#line 1016 "ssdebug.m"
      transform_hlds__ssdebug__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_63_63, 0) = ((MR_Box) (transform_hlds__ssdebug__V_64_64));
#line 1016 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "ssdebug.m"
    }
#line 1014 "ssdebug.m"
    {
#line 1014 "ssdebug.m"
      transform_hlds__ssdebug__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_60_60, 0) = ((MR_Box) (transform_hlds__ssdebug__V_61_61));
#line 1014 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_60_60, 1) = ((MR_Box) (transform_hlds__ssdebug__V_63_63));
#line 1014 "ssdebug.m"
    }
#line 1013 "ssdebug.m"
    {
#line 1013 "ssdebug.m"
      transform_hlds__ssdebug__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_57_57, 0) = ((MR_Box) (transform_hlds__ssdebug__V_58_58));
#line 1013 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_57_57, 1) = ((MR_Box) (transform_hlds__ssdebug__V_60_60));
#line 1013 "ssdebug.m"
    }
#line 1012 "ssdebug.m"
    {
#line 1012 "ssdebug.m"
      transform_hlds__ssdebug__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_56_56, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_22));
#line 1012 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_56_56, 1) = ((MR_Box) (transform_hlds__ssdebug__V_57_57));
#line 1012 "ssdebug.m"
    }
#line 1011 "ssdebug.m"
    {
#line 1011 "ssdebug.m"
      transform_hlds__ssdebug__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_55_55, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_18));
#line 1011 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_55_55, 1) = ((MR_Box) (transform_hlds__ssdebug__V_56_56));
#line 1011 "ssdebug.m"
    }
#line 1010 "ssdebug.m"
    {
#line 1010 "ssdebug.m"
      transform_hlds__ssdebug__BodyGoals_27 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__V_55_55);
    }
#line 1017 "ssdebug.m"
    {
#line 1017 "ssdebug.m"
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_27, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_41_41, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_40_40, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_31, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51);
#line 1017 "ssdebug.m"
      return;
    }
#line 981 "ssdebug.m"
  }
#line 976 "ssdebug.m"
}

#line 909 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_failure_6_p_0(
#line 909 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 909 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 909 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36,
#line 909 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37,
#line 909 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38,
#line 909 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39)
#line 909 "ssdebug.m"
{
#line 914 "ssdebug.m"
  {
#line 914 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeInfo_100_100;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FullHeadVars_15;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HeadVars_16;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallArgListGoals_22;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__LevelVar_25;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FailArgListVar_27;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryVar_28;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_29;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RecursiveGoal_30;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SwitchGoal_31;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcDetism_32;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FailDisjunct_33;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__DisjGoal_34;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BodyGoals_35;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_46_46;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_47_47;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48_48;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_52_52;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_53_53;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_54_54;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_56_56;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_57_57;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_60_60;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_61_61;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_67_67;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_71_71;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_72_72;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_74_74;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_75_75;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_77_77;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_78_78;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_80_80;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_81_81;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_82_82;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_83_83;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_85_85;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_86_86;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_87_87;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_88_88;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_89_89;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_91_91;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_92_92;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_94_94;
#line 914 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_95_95;
#line 918 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___ArgModes_17;
#line 929 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtCall_23;

#line 914 "ssdebug.m"
    {
#line 914 "ssdebug.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40);
    }
#line 915 "ssdebug.m"
    {
#line 915 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
#line 916 "ssdebug.m"
    {
#line 916 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41);
    }
#line 917 "ssdebug.m"
    {
#line 917 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42);
    }
#line 918 "ssdebug.m"
    {
#line 918 "ssdebug.m"
      transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16, &transform_hlds__ssdebug___ArgModes_17);
    }
#line 922 "ssdebug.m"
    {
#line 922 "ssdebug.m"
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_41_41, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_42_42, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44);
    }
#line 927 "ssdebug.m"
    {
#line 927 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38, &transform_hlds__ssdebug__InitInstMap_20);
    }
#line 4657 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeInfo_100_100 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 929 "ssdebug.m"
    {
#line 929 "ssdebug.m"
      transform_hlds__ssdebug__V_46_46 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_100_100, transform_hlds__ssdebug__TypeInfo_100_100);
    }
#line 931 "ssdebug.m"
    {
#line 931 "ssdebug.m"
      transform_hlds__ssdebug__V_52_52 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_100_100, transform_hlds__ssdebug__TypeInfo_100_100);
    }
#line 929 "ssdebug.m"
    {
#line 929 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_46_46, &transform_hlds__ssdebug__FailArgListVar_27, &transform_hlds__ssdebug__CallArgListGoals_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_38, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_36, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48_48, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_40_40, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_43_43, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_44_44, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51, transform_hlds__ssdebug__V_52_52, &transform_hlds__ssdebug___BoundVarDescsAtCall_23);
    }
#line 934 "ssdebug.m"
    {
#line 934 "ssdebug.m"
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_53_53, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_54_54);
    }
#line 939 "ssdebug.m"
    {
#line 939 "ssdebug.m"
      transform_hlds__ssdebug__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
#line 939 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "ssdebug.m"
    }
#line 939 "ssdebug.m"
    {
#line 939 "ssdebug.m"
      transform_hlds__ssdebug__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_60_60, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_27));
#line 939 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_60_60, 1) = ((MR_Box) (transform_hlds__ssdebug__V_61_61));
#line 939 "ssdebug.m"
    }
#line 939 "ssdebug.m"
    {
#line 939 "ssdebug.m"
      transform_hlds__ssdebug__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_56_56, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 939 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_56_56, 1) = ((MR_Box) (transform_hlds__ssdebug__V_60_60));
#line 939 "ssdebug.m"
    }
#line 938 "ssdebug.m"
    {
#line 938 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__V_56_56, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_57_57, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_53_53, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_54_54, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59);
    }
#line 944 "ssdebug.m"
    {
#line 944 "ssdebug.m"
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_28, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_58_58, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_59_59, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65);
    }
#line 946 "ssdebug.m"
    {
#line 946 "ssdebug.m"
      transform_hlds__ssdebug__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_72_72, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_28));
#line 946 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "ssdebug.m"
    }
#line 946 "ssdebug.m"
    {
#line 946 "ssdebug.m"
      transform_hlds__ssdebug__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_71_71, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_27));
#line 946 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_71_71, 1) = ((MR_Box) (transform_hlds__ssdebug__V_72_72));
#line 946 "ssdebug.m"
    }
#line 946 "ssdebug.m"
    {
#line 946 "ssdebug.m"
      transform_hlds__ssdebug__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_67_67, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 946 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_67_67, 1) = ((MR_Box) (transform_hlds__ssdebug__V_71_71));
#line 946 "ssdebug.m"
    }
#line 945 "ssdebug.m"
    {
#line 945 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail", transform_hlds__ssdebug__V_67_67, &transform_hlds__ssdebug__HandleEventFailGoal_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_57_57, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_64_64, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_65_65, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70);
    }
#line 950 "ssdebug.m"
    {
#line 950 "ssdebug.m"
      transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__RecursiveGoal_30);
    }
#line 954 "ssdebug.m"
    {
#line 954 "ssdebug.m"
      transform_hlds__ssdebug__V_74_74 = hlds__make_goal__fail_goal_0_f_0();
    }
#line 954 "ssdebug.m"
    {
#line 954 "ssdebug.m"
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_28, transform_hlds__ssdebug__RecursiveGoal_30, transform_hlds__ssdebug__V_74_74, &transform_hlds__ssdebug__SwitchGoal_31);
    }
#line 957 "ssdebug.m"
    {
#line 957 "ssdebug.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48_48, &transform_hlds__ssdebug__ProcDetism_32);
    }
#line 959 "ssdebug.m"
    {
#line 959 "ssdebug.m"
      transform_hlds__ssdebug__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_78_78, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchGoal_31));
#line 959 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "ssdebug.m"
    }
#line 959 "ssdebug.m"
    {
#line 959 "ssdebug.m"
      transform_hlds__ssdebug__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_77_77, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_29));
#line 959 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_77_77, 1) = ((MR_Box) (transform_hlds__ssdebug__V_78_78));
#line 959 "ssdebug.m"
    }
#line 959 "ssdebug.m"
    {
#line 959 "ssdebug.m"
      transform_hlds__ssdebug__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 959 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 959 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_75_75, 1) = ((MR_Box) ((MR_Integer) 0));
#line 959 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_75_75, 2) = ((MR_Box) (transform_hlds__ssdebug__V_77_77));
#line 959 "ssdebug.m"
    }
#line 960 "ssdebug.m"
    {
#line 960 "ssdebug.m"
      transform_hlds__ssdebug__V_80_80 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_32);
    }
#line 958 "ssdebug.m"
    {
#line 958 "ssdebug.m"
      transform_hlds__ssdebug__FailDisjunct_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 958 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_33, 0) = ((MR_Box) (transform_hlds__ssdebug__V_75_75));
#line 958 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_33, 1) = ((MR_Box) (transform_hlds__ssdebug__V_80_80));
#line 958 "ssdebug.m"
    }
#line 961 "ssdebug.m"
    {
#line 961 "ssdebug.m"
      transform_hlds__ssdebug__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_83_83, 0) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunct_33));
#line 961 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 961 "ssdebug.m"
    }
#line 961 "ssdebug.m"
    {
#line 961 "ssdebug.m"
      transform_hlds__ssdebug__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_82_82, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_14));
#line 961 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_82_82, 1) = ((MR_Box) (transform_hlds__ssdebug__V_83_83));
#line 961 "ssdebug.m"
    }
#line 961 "ssdebug.m"
    {
#line 961 "ssdebug.m"
      transform_hlds__ssdebug__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 961 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_81_81, 1) = ((MR_Box) (transform_hlds__ssdebug__V_82_82));
#line 961 "ssdebug.m"
    }
#line 962 "ssdebug.m"
    {
#line 962 "ssdebug.m"
      transform_hlds__ssdebug__V_85_85 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_32);
    }
#line 961 "ssdebug.m"
    {
#line 961 "ssdebug.m"
      transform_hlds__ssdebug__DisjGoal_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 961 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__DisjGoal_34, 0) = ((MR_Box) (transform_hlds__ssdebug__V_81_81));
#line 961 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__DisjGoal_34, 1) = ((MR_Box) (transform_hlds__ssdebug__V_85_85));
#line 961 "ssdebug.m"
    }
#line 966 "ssdebug.m"
    {
#line 966 "ssdebug.m"
      transform_hlds__ssdebug__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
#line 966 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "ssdebug.m"
    }
#line 967 "ssdebug.m"
    {
#line 967 "ssdebug.m"
      transform_hlds__ssdebug__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
#line 967 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 967 "ssdebug.m"
    }
#line 968 "ssdebug.m"
    {
#line 968 "ssdebug.m"
      transform_hlds__ssdebug__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_95_95, 0) = ((MR_Box) (transform_hlds__ssdebug__DisjGoal_34));
#line 968 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 968 "ssdebug.m"
    }
#line 969 "ssdebug.m"
    {
#line 969 "ssdebug.m"
      transform_hlds__ssdebug__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 0) = ((MR_Box) (transform_hlds__ssdebug__V_95_95));
#line 969 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "ssdebug.m"
    }
#line 967 "ssdebug.m"
    {
#line 967 "ssdebug.m"
      transform_hlds__ssdebug__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 0) = ((MR_Box) (transform_hlds__ssdebug__V_92_92));
#line 967 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 1) = ((MR_Box) (transform_hlds__ssdebug__V_94_94));
#line 967 "ssdebug.m"
    }
#line 966 "ssdebug.m"
    {
#line 966 "ssdebug.m"
      transform_hlds__ssdebug__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 0) = ((MR_Box) (transform_hlds__ssdebug__V_89_89));
#line 966 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 1) = ((MR_Box) (transform_hlds__ssdebug__V_91_91));
#line 966 "ssdebug.m"
    }
#line 965 "ssdebug.m"
    {
#line 965 "ssdebug.m"
      transform_hlds__ssdebug__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_87_87, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_22));
#line 965 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_87_87, 1) = ((MR_Box) (transform_hlds__ssdebug__V_88_88));
#line 965 "ssdebug.m"
    }
#line 964 "ssdebug.m"
    {
#line 964 "ssdebug.m"
      transform_hlds__ssdebug__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_86_86, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_18));
#line 964 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_86_86, 1) = ((MR_Box) (transform_hlds__ssdebug__V_87_87));
#line 964 "ssdebug.m"
    }
#line 963 "ssdebug.m"
    {
#line 963 "ssdebug.m"
      transform_hlds__ssdebug__BodyGoals_35 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__V_86_86);
    }
#line 970 "ssdebug.m"
    {
#line 970 "ssdebug.m"
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_35, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_48_48, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_39, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_69_69, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_70_70);
#line 970 "ssdebug.m"
      return;
    }
#line 914 "ssdebug.m"
  }
#line 909 "ssdebug.m"
}

#line 811 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_nondet_6_p_0(
#line 811 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 811 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 811 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49,
#line 811 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50,
#line 811 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51,
#line 811 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_52)
#line 811 "ssdebug.m"
{
#line 816 "ssdebug.m"
  {
#line 816 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeInfo_161_161;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeCtorInfo_162_162;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FullHeadVars_15;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HeadVars_16;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_23;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__LevelVar_25;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FinalInstMap_27;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ExitArgListVar_28;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_29;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcDetism_31;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ExitDisjunct_33;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventRedoGoal_34;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RedoDisjunct_35;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ExitOrRedoGoal_36;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallExitRedoDisjunctGoals_37;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallExitRedoDisjunct_38;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FailArgListVar_39;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FailArgListGoals_40;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryVar_41;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_42;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RecursiveGoal_43;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SwitchFailPortGoal_44;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FailDisjunctGoals_45;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FailDisjunct_46;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BodyDisj_47;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BodyGoals_48;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_59_59;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_60_60;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61_61;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_62_62;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_63_63;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_64_64;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_65_65;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_69_69;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_73_73;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_74_74;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_77_77;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_78_78;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79_79;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_80_80;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_84_84;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_88_88;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_97_97;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_99_99;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_100_100;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_101_101;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_103_103;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_105_105;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_106_106;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_107_107;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_109_109;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_111_111;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_112_112;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_113_113;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_115_115;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_116_116;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_118_118;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_119_119;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_121_121;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_122_122;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_123_123;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_126_126;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_128_128;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_130_130;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_131_131;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_133_133;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_134_134;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_135_135;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_136_136;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_137_137;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_138_138;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_140_140;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_141_141;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_142_142;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_143_143;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_145_145;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_146_146;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_149_149;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_151_151;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_152_152;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_153_153;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_154_154;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_156_156;
#line 816 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_157_157;
#line 820 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___ArgModes_17;
#line 847 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_30;

#line 816 "ssdebug.m"
    {
#line 816 "ssdebug.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53);
    }
#line 817 "ssdebug.m"
    {
#line 817 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
#line 818 "ssdebug.m"
    {
#line 818 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54);
    }
#line 819 "ssdebug.m"
    {
#line 819 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55);
    }
#line 820 "ssdebug.m"
    {
#line 820 "ssdebug.m"
      transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16, &transform_hlds__ssdebug___ArgModes_17);
    }
#line 824 "ssdebug.m"
    {
#line 824 "ssdebug.m"
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_54_54, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_55_55, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57);
    }
#line 829 "ssdebug.m"
    {
#line 829 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51, &transform_hlds__ssdebug__InitInstMap_20);
    }
#line 5240 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeInfo_161_161 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 830 "ssdebug.m"
    {
#line 830 "ssdebug.m"
      transform_hlds__ssdebug__V_59_59 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_161_161, transform_hlds__ssdebug__TypeInfo_161_161);
    }
#line 832 "ssdebug.m"
    {
#line 832 "ssdebug.m"
      transform_hlds__ssdebug__V_65_65 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_161_161, transform_hlds__ssdebug__TypeInfo_161_161);
    }
#line 830 "ssdebug.m"
    {
#line 830 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_59_59, &transform_hlds__ssdebug__FailArgListVar_39, &transform_hlds__ssdebug__FailArgListGoals_40, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_51, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_60_60, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_49, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61_61, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_53_53, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_62_62, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_56_56, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_63_63, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_57_57, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_64_64, transform_hlds__ssdebug__V_65_65, &transform_hlds__ssdebug__BoundVarDescsAtCall_23);
    }
#line 835 "ssdebug.m"
    {
#line 835 "ssdebug.m"
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_60_60, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_63_63, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_64_64, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67);
    }
#line 840 "ssdebug.m"
    {
#line 840 "ssdebug.m"
      transform_hlds__ssdebug__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_74_74, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
#line 840 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "ssdebug.m"
    }
#line 840 "ssdebug.m"
    {
#line 840 "ssdebug.m"
      transform_hlds__ssdebug__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_73_73, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_39));
#line 840 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_73_73, 1) = ((MR_Box) (transform_hlds__ssdebug__V_74_74));
#line 840 "ssdebug.m"
    }
#line 840 "ssdebug.m"
    {
#line 840 "ssdebug.m"
      transform_hlds__ssdebug__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_69_69, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 840 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_69_69, 1) = ((MR_Box) (transform_hlds__ssdebug__V_73_73));
#line 840 "ssdebug.m"
    }
#line 839 "ssdebug.m"
    {
#line 839 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call_nondet", transform_hlds__ssdebug__V_69_69, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_60_60, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72);
    }
#line 846 "ssdebug.m"
    {
#line 846 "ssdebug.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_14, transform_hlds__ssdebug__InitInstMap_20, &transform_hlds__ssdebug__FinalInstMap_27);
    }
#line 847 "ssdebug.m"
    {
#line 847 "ssdebug.m"
      transform_hlds__ssdebug__V_77_77 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_161_161, transform_hlds__ssdebug__TypeInfo_161_161);
    }
#line 847 "ssdebug.m"
    {
#line 847 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_27, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_77_77, &transform_hlds__ssdebug__ExitArgListVar_28, &transform_hlds__ssdebug__ExitArgListGoals_29, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_70_70, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_78_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61_61, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79_79, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_62_62, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_80_80, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_71_71, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_72_72, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82, transform_hlds__ssdebug__BoundVarDescsAtCall_23, &transform_hlds__ssdebug___BoundVarDescsAtExit_30);
    }
#line 851 "ssdebug.m"
    {
#line 851 "ssdebug.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79_79, &transform_hlds__ssdebug__ProcDetism_31);
    }
#line 855 "ssdebug.m"
    {
#line 855 "ssdebug.m"
      transform_hlds__ssdebug__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_28));
#line 855 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "ssdebug.m"
    }
#line 855 "ssdebug.m"
    {
#line 855 "ssdebug.m"
      transform_hlds__ssdebug__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 855 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 1) = ((MR_Box) (transform_hlds__ssdebug__V_88_88));
#line 855 "ssdebug.m"
    }
#line 854 "ssdebug.m"
    {
#line 854 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit_nondet", transform_hlds__ssdebug__V_84_84, &transform_hlds__ssdebug__ExitDisjunct_33, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_78_78, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87);
    }
#line 859 "ssdebug.m"
    {
#line 859 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_redo_nondet", transform_hlds__ssdebug__V_84_84, &transform_hlds__ssdebug__HandleEventRedoGoal_34, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94);
    }
#line 863 "ssdebug.m"
    {
#line 863 "ssdebug.m"
      transform_hlds__ssdebug__V_101_101 = hlds__make_goal__fail_goal_0_f_0();
    }
#line 863 "ssdebug.m"
    {
#line 863 "ssdebug.m"
      transform_hlds__ssdebug__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 0) = ((MR_Box) (transform_hlds__ssdebug__V_101_101));
#line 863 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "ssdebug.m"
    }
#line 863 "ssdebug.m"
    {
#line 863 "ssdebug.m"
      transform_hlds__ssdebug__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventRedoGoal_34));
#line 863 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 1) = ((MR_Box) (transform_hlds__ssdebug__V_100_100));
#line 863 "ssdebug.m"
    }
#line 862 "ssdebug.m"
    {
#line 862 "ssdebug.m"
      transform_hlds__ssdebug__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 862 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 862 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_97_97, 1) = ((MR_Box) ((MR_Integer) 0));
#line 862 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_97_97, 2) = ((MR_Box) (transform_hlds__ssdebug__V_99_99));
#line 862 "ssdebug.m"
    }
#line 864 "ssdebug.m"
    {
#line 864 "ssdebug.m"
      transform_hlds__ssdebug__V_103_103 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0((MR_Integer) 7);
    }
#line 862 "ssdebug.m"
    {
#line 862 "ssdebug.m"
      transform_hlds__ssdebug__RedoDisjunct_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 862 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RedoDisjunct_35, 0) = ((MR_Box) (transform_hlds__ssdebug__V_97_97));
#line 862 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__RedoDisjunct_35, 1) = ((MR_Box) (transform_hlds__ssdebug__V_103_103));
#line 862 "ssdebug.m"
    }
#line 866 "ssdebug.m"
    {
#line 866 "ssdebug.m"
      transform_hlds__ssdebug__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 0) = ((MR_Box) (transform_hlds__ssdebug__RedoDisjunct_35));
#line 866 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "ssdebug.m"
    }
#line 866 "ssdebug.m"
    {
#line 866 "ssdebug.m"
      transform_hlds__ssdebug__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitDisjunct_33));
#line 866 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 1) = ((MR_Box) (transform_hlds__ssdebug__V_107_107));
#line 866 "ssdebug.m"
    }
#line 866 "ssdebug.m"
    {
#line 866 "ssdebug.m"
      transform_hlds__ssdebug__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 866 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_105_105, 1) = ((MR_Box) (transform_hlds__ssdebug__V_106_106));
#line 866 "ssdebug.m"
    }
#line 867 "ssdebug.m"
    {
#line 867 "ssdebug.m"
      transform_hlds__ssdebug__V_109_109 = transform_hlds__ssdebug__impure_goal_info_1_f_0((MR_Integer) 3);
    }
#line 866 "ssdebug.m"
    {
#line 866 "ssdebug.m"
      transform_hlds__ssdebug__ExitOrRedoGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ExitOrRedoGoal_36, 0) = ((MR_Box) (transform_hlds__ssdebug__V_105_105));
#line 866 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ExitOrRedoGoal_36, 1) = ((MR_Box) (transform_hlds__ssdebug__V_109_109));
#line 866 "ssdebug.m"
    }
#line 5444 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeCtorInfo_162_162 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 870 "ssdebug.m"
    {
#line 870 "ssdebug.m"
      transform_hlds__ssdebug__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_113_113, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
#line 870 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "ssdebug.m"
    }
#line 871 "ssdebug.m"
    {
#line 871 "ssdebug.m"
      transform_hlds__ssdebug__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_116_116, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
#line 871 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "ssdebug.m"
    }
#line 872 "ssdebug.m"
    {
#line 872 "ssdebug.m"
      transform_hlds__ssdebug__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_119_119, 0) = ((MR_Box) (transform_hlds__ssdebug__OrigBodyGoal_14));
#line 872 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "ssdebug.m"
    }
#line 874 "ssdebug.m"
    {
#line 874 "ssdebug.m"
      transform_hlds__ssdebug__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_123_123, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitOrRedoGoal_36));
#line 874 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "ssdebug.m"
    }
#line 875 "ssdebug.m"
    {
#line 875 "ssdebug.m"
      transform_hlds__ssdebug__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_122_122, 0) = ((MR_Box) (transform_hlds__ssdebug__V_123_123));
#line 875 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 875 "ssdebug.m"
    }
#line 873 "ssdebug.m"
    {
#line 873 "ssdebug.m"
      transform_hlds__ssdebug__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_121_121, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_29));
#line 873 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_121_121, 1) = ((MR_Box) (transform_hlds__ssdebug__V_122_122));
#line 873 "ssdebug.m"
    }
#line 872 "ssdebug.m"
    {
#line 872 "ssdebug.m"
      transform_hlds__ssdebug__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_118_118, 0) = ((MR_Box) (transform_hlds__ssdebug__V_119_119));
#line 872 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_118_118, 1) = ((MR_Box) (transform_hlds__ssdebug__V_121_121));
#line 872 "ssdebug.m"
    }
#line 871 "ssdebug.m"
    {
#line 871 "ssdebug.m"
      transform_hlds__ssdebug__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_115_115, 0) = ((MR_Box) (transform_hlds__ssdebug__V_116_116));
#line 871 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_115_115, 1) = ((MR_Box) (transform_hlds__ssdebug__V_118_118));
#line 871 "ssdebug.m"
    }
#line 870 "ssdebug.m"
    {
#line 870 "ssdebug.m"
      transform_hlds__ssdebug__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_112_112, 0) = ((MR_Box) (transform_hlds__ssdebug__V_113_113));
#line 870 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_112_112, 1) = ((MR_Box) (transform_hlds__ssdebug__V_115_115));
#line 870 "ssdebug.m"
    }
#line 869 "ssdebug.m"
    {
#line 869 "ssdebug.m"
      transform_hlds__ssdebug__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_111_111, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_40));
#line 869 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_111_111, 1) = ((MR_Box) (transform_hlds__ssdebug__V_112_112));
#line 869 "ssdebug.m"
    }
#line 868 "ssdebug.m"
    {
#line 868 "ssdebug.m"
      transform_hlds__ssdebug__CallExitRedoDisjunctGoals_37 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_162_162, transform_hlds__ssdebug__V_111_111);
    }
#line 877 "ssdebug.m"
    {
#line 877 "ssdebug.m"
      transform_hlds__ssdebug__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 877 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 877 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_126_126, 1) = ((MR_Box) ((MR_Integer) 0));
#line 877 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_126_126, 2) = ((MR_Box) (transform_hlds__ssdebug__CallExitRedoDisjunctGoals_37));
#line 877 "ssdebug.m"
    }
#line 878 "ssdebug.m"
    {
#line 878 "ssdebug.m"
      transform_hlds__ssdebug__V_128_128 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_31);
    }
#line 876 "ssdebug.m"
    {
#line 876 "ssdebug.m"
      transform_hlds__ssdebug__CallExitRedoDisjunct_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CallExitRedoDisjunct_38, 0) = ((MR_Box) (transform_hlds__ssdebug__V_126_126));
#line 876 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__CallExitRedoDisjunct_38, 1) = ((MR_Box) (transform_hlds__ssdebug__V_128_128));
#line 876 "ssdebug.m"
    }
#line 883 "ssdebug.m"
    {
#line 883 "ssdebug.m"
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_130_130, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_131_131);
    }
#line 885 "ssdebug.m"
    {
#line 885 "ssdebug.m"
      transform_hlds__ssdebug__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_138_138, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_41));
#line 885 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 885 "ssdebug.m"
    }
#line 885 "ssdebug.m"
    {
#line 885 "ssdebug.m"
      transform_hlds__ssdebug__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_137_137, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_39));
#line 885 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_137_137, 1) = ((MR_Box) (transform_hlds__ssdebug__V_138_138));
#line 885 "ssdebug.m"
    }
#line 885 "ssdebug.m"
    {
#line 885 "ssdebug.m"
      transform_hlds__ssdebug__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_133_133, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 885 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_133_133, 1) = ((MR_Box) (transform_hlds__ssdebug__V_137_137));
#line 885 "ssdebug.m"
    }
#line 884 "ssdebug.m"
    {
#line 884 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail_nondet", transform_hlds__ssdebug__V_133_133, &transform_hlds__ssdebug__HandleEventFailGoal_42, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_134_134, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_130_130, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_135_135, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_131_131, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_136_136);
    }
#line 887 "ssdebug.m"
    {
#line 887 "ssdebug.m"
      transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_80_80, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_134_134, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__RecursiveGoal_43);
    }
#line 889 "ssdebug.m"
    {
#line 889 "ssdebug.m"
      transform_hlds__ssdebug__V_140_140 = hlds__make_goal__fail_goal_0_f_0();
    }
#line 889 "ssdebug.m"
    {
#line 889 "ssdebug.m"
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_41, transform_hlds__ssdebug__RecursiveGoal_43, transform_hlds__ssdebug__V_140_140, &transform_hlds__ssdebug__SwitchFailPortGoal_44);
    }
#line 893 "ssdebug.m"
    {
#line 893 "ssdebug.m"
      transform_hlds__ssdebug__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_143_143, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_42));
#line 893 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "ssdebug.m"
    }
#line 894 "ssdebug.m"
    {
#line 894 "ssdebug.m"
      transform_hlds__ssdebug__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_146_146, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchFailPortGoal_44));
#line 894 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 894 "ssdebug.m"
    }
#line 895 "ssdebug.m"
    {
#line 895 "ssdebug.m"
      transform_hlds__ssdebug__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_145_145, 0) = ((MR_Box) (transform_hlds__ssdebug__V_146_146));
#line 895 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "ssdebug.m"
    }
#line 893 "ssdebug.m"
    {
#line 893 "ssdebug.m"
      transform_hlds__ssdebug__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_142_142, 0) = ((MR_Box) (transform_hlds__ssdebug__V_143_143));
#line 893 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_142_142, 1) = ((MR_Box) (transform_hlds__ssdebug__V_145_145));
#line 893 "ssdebug.m"
    }
#line 892 "ssdebug.m"
    {
#line 892 "ssdebug.m"
      transform_hlds__ssdebug__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_141_141, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_40));
#line 892 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_141_141, 1) = ((MR_Box) (transform_hlds__ssdebug__V_142_142));
#line 892 "ssdebug.m"
    }
#line 891 "ssdebug.m"
    {
#line 891 "ssdebug.m"
      transform_hlds__ssdebug__FailDisjunctGoals_45 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_162_162, transform_hlds__ssdebug__V_141_141);
    }
#line 896 "ssdebug.m"
    {
#line 896 "ssdebug.m"
      transform_hlds__ssdebug__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 896 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 896 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_149_149, 1) = ((MR_Box) ((MR_Integer) 0));
#line 896 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_149_149, 2) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunctGoals_45));
#line 896 "ssdebug.m"
    }
#line 897 "ssdebug.m"
    {
#line 897 "ssdebug.m"
      transform_hlds__ssdebug__V_151_151 = transform_hlds__ssdebug__impure_backtrack_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_31);
    }
#line 896 "ssdebug.m"
    {
#line 896 "ssdebug.m"
      transform_hlds__ssdebug__FailDisjunct_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_46, 0) = ((MR_Box) (transform_hlds__ssdebug__V_149_149));
#line 896 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__FailDisjunct_46, 1) = ((MR_Box) (transform_hlds__ssdebug__V_151_151));
#line 896 "ssdebug.m"
    }
#line 900 "ssdebug.m"
    {
#line 900 "ssdebug.m"
      transform_hlds__ssdebug__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_154_154, 0) = ((MR_Box) (transform_hlds__ssdebug__FailDisjunct_46));
#line 900 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 900 "ssdebug.m"
    }
#line 900 "ssdebug.m"
    {
#line 900 "ssdebug.m"
      transform_hlds__ssdebug__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_153_153, 0) = ((MR_Box) (transform_hlds__ssdebug__CallExitRedoDisjunct_38));
#line 900 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_153_153, 1) = ((MR_Box) (transform_hlds__ssdebug__V_154_154));
#line 900 "ssdebug.m"
    }
#line 900 "ssdebug.m"
    {
#line 900 "ssdebug.m"
      transform_hlds__ssdebug__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 900 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_152_152, 1) = ((MR_Box) (transform_hlds__ssdebug__V_153_153));
#line 900 "ssdebug.m"
    }
#line 901 "ssdebug.m"
    {
#line 901 "ssdebug.m"
      transform_hlds__ssdebug__V_156_156 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_31);
    }
#line 900 "ssdebug.m"
    {
#line 900 "ssdebug.m"
      transform_hlds__ssdebug__BodyDisj_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 900 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__BodyDisj_47, 0) = ((MR_Box) (transform_hlds__ssdebug__V_152_152));
#line 900 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__BodyDisj_47, 1) = ((MR_Box) (transform_hlds__ssdebug__V_156_156));
#line 900 "ssdebug.m"
    }
#line 902 "ssdebug.m"
    {
#line 902 "ssdebug.m"
      transform_hlds__ssdebug__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_157_157, 0) = ((MR_Box) (transform_hlds__ssdebug__BodyDisj_47));
#line 902 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "ssdebug.m"
    }
#line 902 "ssdebug.m"
    {
#line 902 "ssdebug.m"
      transform_hlds__ssdebug__BodyGoals_48 = mercury__list__f_43_43_2_f_0(transform_hlds__ssdebug__TypeCtorInfo_162_162, transform_hlds__ssdebug__ProcIdGoals_18, transform_hlds__ssdebug__V_157_157);
    }
#line 903 "ssdebug.m"
    {
#line 903 "ssdebug.m"
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_48, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_80_80, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79_79, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_50, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_134_134, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_52, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_135_135, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_136_136);
#line 903 "ssdebug.m"
      return;
    }
#line 816 "ssdebug.m"
  }
#line 811 "ssdebug.m"
}

#line 683 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_semi_6_p_0(
#line 683 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 683 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 683 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60,
#line 683 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61,
#line 683 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62,
#line 683 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_63)
#line 683 "ssdebug.m"
{
#line 688 "ssdebug.m"
  {
#line 688 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeInfo_164_164;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeCtorInfo_165_165;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FullHeadVars_15;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HeadVars_16;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ArgModes_17;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallArgListVar_21;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallArgListGoals_22;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_23;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__LevelVar_25;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OutputVars_27;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RenamedBodyGoal_28;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__AssignOutputsGoal_29;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Renaming_30;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FinalInstMap_31;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ExitArgListVar_32;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_33;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryAVar_35;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventExitGoal_36;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RecursiveGoal_37;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FailArgListVar_38;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FailArgListGoals_39;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryBVar_41;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventFailGoal_42;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcDetism_43;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ImpureGoalInfo_44;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Solns_46;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CondGoal_47;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SwitchExitPortGoal_49;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalsThen_50;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ThenGoal_51;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SwitchFailPortGoal_52;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalsElse_53;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ElseGoal_54;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigGoalInfo_56;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__IteGoalInfo_57;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__IteGoal_58;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BodyGoals_59;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_70_70;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_71_71;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_72_72;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_73_73;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_76_76;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_77_77;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_78_78;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_80_80;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_81_81;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_82_82;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_83_83;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_84_84;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_85_85;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_87_87;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_88_88;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_90_90;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_91_91;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_92_92;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_96_96;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_97_97;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_99_99;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_100_100;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_101_101;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_102_102;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_103_103;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_104_104;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_108_108;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_109_109;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_110_110;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_111_111;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_112_112;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_114_114;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_115_115;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_117_117;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_118_118;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_119_119;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_120_120;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_121_121;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_122_122;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_127_127;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_128_128;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_129_129;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_131_131;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_132_132;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_135_135;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_137_137;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_138_138;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_139_139;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_140_140;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_142_142;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_143_143;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_146_146;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_148_148;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_150_150;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_151_151;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_152_152;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_153_153;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_155_155;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_156_156;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_158_158;
#line 688 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_159_159;
#line 725 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_34;
#line 740 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtFail_40;
#line 757 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___CanFail_45;
#line 794 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_55_55;

#line 688 "ssdebug.m"
    {
#line 688 "ssdebug.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64);
    }
#line 689 "ssdebug.m"
    {
#line 689 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
#line 690 "ssdebug.m"
    {
#line 690 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65);
    }
#line 691 "ssdebug.m"
    {
#line 691 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66);
    }
#line 692 "ssdebug.m"
    {
#line 692 "ssdebug.m"
      transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16, &transform_hlds__ssdebug__ArgModes_17);
    }
#line 696 "ssdebug.m"
    {
#line 696 "ssdebug.m"
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_65_65, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68);
    }
#line 701 "ssdebug.m"
    {
#line 701 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__ssdebug__InitInstMap_20);
    }
#line 6078 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeInfo_164_164 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 702 "ssdebug.m"
    {
#line 702 "ssdebug.m"
      transform_hlds__ssdebug__V_70_70 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_164_164, transform_hlds__ssdebug__TypeInfo_164_164);
    }
#line 704 "ssdebug.m"
    {
#line 704 "ssdebug.m"
      transform_hlds__ssdebug__V_76_76 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_164_164, transform_hlds__ssdebug__TypeInfo_164_164);
    }
#line 702 "ssdebug.m"
    {
#line 702 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_70_70, &transform_hlds__ssdebug__CallArgListVar_21, &transform_hlds__ssdebug__CallArgListGoals_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_62, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_71_71, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_60, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_72_72, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_64_64, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_73_73, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75, transform_hlds__ssdebug__V_76_76, &transform_hlds__ssdebug__BoundVarDescsAtCall_23);
    }
#line 707 "ssdebug.m"
    {
#line 707 "ssdebug.m"
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_71_71, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_74_74, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_77_77, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_75_75, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_78_78);
    }
#line 712 "ssdebug.m"
    {
#line 712 "ssdebug.m"
      transform_hlds__ssdebug__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_85_85, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
#line 712 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "ssdebug.m"
    }
#line 712 "ssdebug.m"
    {
#line 712 "ssdebug.m"
      transform_hlds__ssdebug__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_21));
#line 712 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 1) = ((MR_Box) (transform_hlds__ssdebug__V_85_85));
#line 712 "ssdebug.m"
    }
#line 712 "ssdebug.m"
    {
#line 712 "ssdebug.m"
      transform_hlds__ssdebug__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_80_80, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 712 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_80_80, 1) = ((MR_Box) (transform_hlds__ssdebug__V_84_84));
#line 712 "ssdebug.m"
    }
#line 711 "ssdebug.m"
    {
#line 711 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__V_80_80, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_71_71, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_81_81, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_77_77, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_82_82, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_78_78, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_83_83);
    }
#line 717 "ssdebug.m"
    {
#line 717 "ssdebug.m"
      transform_hlds__ssdebug__get_output_args_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_81_81, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__ArgModes_17, &transform_hlds__ssdebug__OutputVars_27);
    }
#line 718 "ssdebug.m"
    {
#line 718 "ssdebug.m"
      transform_hlds__ssdebug__rename_outputs_9_p_0(transform_hlds__ssdebug__OutputVars_27, transform_hlds__ssdebug__OrigBodyGoal_14, &transform_hlds__ssdebug__RenamedBodyGoal_28, &transform_hlds__ssdebug__AssignOutputsGoal_29, &transform_hlds__ssdebug__Renaming_30, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_82_82, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_87_87, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_83_83, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_88_88);
    }
#line 724 "ssdebug.m"
    {
#line 724 "ssdebug.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_14, transform_hlds__ssdebug__InitInstMap_20, &transform_hlds__ssdebug__FinalInstMap_31);
    }
#line 725 "ssdebug.m"
    {
#line 725 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_31, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__ExitArgListVar_32, &transform_hlds__ssdebug__ExitArgListGoals_33, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_81_81, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_90_90, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_72_72, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_91_91, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_73_73, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_87_87, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_88_88, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94, transform_hlds__ssdebug__BoundVarDescsAtCall_23, &transform_hlds__ssdebug___BoundVarDescsAtExit_34);
    }
#line 730 "ssdebug.m"
    {
#line 730 "ssdebug.m"
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetryA", &transform_hlds__ssdebug__RetryAVar_35, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_93_93, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_96_96, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_94_94, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_97_97);
    }
#line 732 "ssdebug.m"
    {
#line 732 "ssdebug.m"
      transform_hlds__ssdebug__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryAVar_35));
#line 732 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "ssdebug.m"
    }
#line 732 "ssdebug.m"
    {
#line 732 "ssdebug.m"
      transform_hlds__ssdebug__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_32));
#line 732 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 1) = ((MR_Box) (transform_hlds__ssdebug__V_104_104));
#line 732 "ssdebug.m"
    }
#line 732 "ssdebug.m"
    {
#line 732 "ssdebug.m"
      transform_hlds__ssdebug__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 732 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 1) = ((MR_Box) (transform_hlds__ssdebug__V_103_103));
#line 732 "ssdebug.m"
    }
#line 731 "ssdebug.m"
    {
#line 731 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit", transform_hlds__ssdebug__V_99_99, &transform_hlds__ssdebug__HandleEventExitGoal_36, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_90_90, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_100_100, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_96_96, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_101_101, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_97_97, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_102_102);
    }
#line 736 "ssdebug.m"
    {
#line 736 "ssdebug.m"
      transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_100_100, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__RecursiveGoal_37);
    }
#line 740 "ssdebug.m"
    {
#line 740 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__FailArgListVar_38, &transform_hlds__ssdebug__FailArgListGoals_39, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_100_100, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_108_108, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_91_91, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_109_109, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_92_92, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_110_110, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_101_101, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_111_111, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_102_102, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_112_112, transform_hlds__ssdebug__BoundVarDescsAtCall_23, &transform_hlds__ssdebug___BoundVarDescsAtFail_40);
    }
#line 745 "ssdebug.m"
    {
#line 745 "ssdebug.m"
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetryB", &transform_hlds__ssdebug__RetryBVar_41, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_111_111, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_114_114, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_112_112, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_115_115);
    }
#line 747 "ssdebug.m"
    {
#line 747 "ssdebug.m"
      transform_hlds__ssdebug__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_122_122, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryBVar_41));
#line 747 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "ssdebug.m"
    }
#line 747 "ssdebug.m"
    {
#line 747 "ssdebug.m"
      transform_hlds__ssdebug__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_121_121, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListVar_38));
#line 747 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_121_121, 1) = ((MR_Box) (transform_hlds__ssdebug__V_122_122));
#line 747 "ssdebug.m"
    }
#line 747 "ssdebug.m"
    {
#line 747 "ssdebug.m"
      transform_hlds__ssdebug__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_117_117, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 747 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_117_117, 1) = ((MR_Box) (transform_hlds__ssdebug__V_121_121));
#line 747 "ssdebug.m"
    }
#line 746 "ssdebug.m"
    {
#line 746 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_fail", transform_hlds__ssdebug__V_117_117, &transform_hlds__ssdebug__HandleEventFailGoal_42, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_108_108, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_118_118, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_114_114, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_119_119, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_115_115, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_120_120);
    }
#line 750 "ssdebug.m"
    {
#line 750 "ssdebug.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_109_109, &transform_hlds__ssdebug__ProcDetism_43);
    }
#line 751 "ssdebug.m"
    {
#line 751 "ssdebug.m"
      transform_hlds__ssdebug__ImpureGoalInfo_44 = transform_hlds__ssdebug__impure_goal_info_1_f_0(transform_hlds__ssdebug__ProcDetism_43);
    }
#line 757 "ssdebug.m"
    {
#line 757 "ssdebug.m"
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__ssdebug__ProcDetism_43, &transform_hlds__ssdebug___CanFail_45, &transform_hlds__ssdebug__Solns_46);
    }
#line 761 "ssdebug.m"
#line 761 "ssdebug.m"
    switch (transform_hlds__ssdebug__Solns_46) {
#line 761 "ssdebug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 761 "ssdebug.m"
      case (MR_Integer) 3:
#line 761 "ssdebug.m"
      case (MR_Integer) 2:
#line 764 "ssdebug.m"
        {
#line 764 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__RenamedOutputVars_48;

#line 765 "ssdebug.m"
          {
#line 765 "ssdebug.m"
            mercury__map__apply_to_list_3_p_0(transform_hlds__ssdebug__TypeInfo_164_164, transform_hlds__ssdebug__TypeInfo_164_164, transform_hlds__ssdebug__OutputVars_27, transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__RenamedOutputVars_48);
          }
#line 766 "ssdebug.m"
          {
#line 766 "ssdebug.m"
            transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(transform_hlds__ssdebug__RenamedOutputVars_48, transform_hlds__ssdebug__RenamedBodyGoal_28, &transform_hlds__ssdebug__CondGoal_47);
          }
#line 764 "ssdebug.m"
        }
#line 761 "ssdebug.m"
        break;
#line 761 "ssdebug.m"
      case (MR_Integer) 1:
#line 760 "ssdebug.m"
        transform_hlds__ssdebug__CondGoal_47 = transform_hlds__ssdebug__RenamedBodyGoal_28;
#line 761 "ssdebug.m"
        break;
#line 761 "ssdebug.m"
      case (MR_Integer) 0:
#line 769 "ssdebug.m"
        {
#line 770 "ssdebug.m"
          {
#line 770 "ssdebug.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.ssdebug_process_proc_semi\'/6", (MR_String) "zero solutions");
#line 770 "ssdebug.m"
            return;
          }
#line 769 "ssdebug.m"
        }
#line 761 "ssdebug.m"
        break;
#line 761 "ssdebug.m"
    }
#line 774 "ssdebug.m"
    {
#line 774 "ssdebug.m"
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryAVar_35, transform_hlds__ssdebug__RecursiveGoal_37, transform_hlds__ssdebug__AssignOutputsGoal_29, &transform_hlds__ssdebug__SwitchExitPortGoal_49);
    }
#line 6316 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeCtorInfo_165_165 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 778 "ssdebug.m"
    {
#line 778 "ssdebug.m"
      transform_hlds__ssdebug__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_129_129, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventExitGoal_36));
#line 778 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "ssdebug.m"
    }
#line 779 "ssdebug.m"
    {
#line 779 "ssdebug.m"
      transform_hlds__ssdebug__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_132_132, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchExitPortGoal_49));
#line 779 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "ssdebug.m"
    }
#line 780 "ssdebug.m"
    {
#line 780 "ssdebug.m"
      transform_hlds__ssdebug__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_131_131, 0) = ((MR_Box) (transform_hlds__ssdebug__V_132_132));
#line 780 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "ssdebug.m"
    }
#line 778 "ssdebug.m"
    {
#line 778 "ssdebug.m"
      transform_hlds__ssdebug__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_128_128, 0) = ((MR_Box) (transform_hlds__ssdebug__V_129_129));
#line 778 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_128_128, 1) = ((MR_Box) (transform_hlds__ssdebug__V_131_131));
#line 778 "ssdebug.m"
    }
#line 777 "ssdebug.m"
    {
#line 777 "ssdebug.m"
      transform_hlds__ssdebug__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_127_127, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_33));
#line 777 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_127_127, 1) = ((MR_Box) (transform_hlds__ssdebug__V_128_128));
#line 777 "ssdebug.m"
    }
#line 776 "ssdebug.m"
    {
#line 776 "ssdebug.m"
      transform_hlds__ssdebug__GoalsThen_50 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_165_165, transform_hlds__ssdebug__V_127_127);
    }
#line 781 "ssdebug.m"
    {
#line 781 "ssdebug.m"
      transform_hlds__ssdebug__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 781 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 781 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_135_135, 1) = ((MR_Box) ((MR_Integer) 0));
#line 781 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_135_135, 2) = ((MR_Box) (transform_hlds__ssdebug__GoalsThen_50));
#line 781 "ssdebug.m"
    }
#line 781 "ssdebug.m"
    {
#line 781 "ssdebug.m"
      transform_hlds__ssdebug__ThenGoal_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ThenGoal_51, 0) = ((MR_Box) (transform_hlds__ssdebug__V_135_135));
#line 781 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ThenGoal_51, 1) = ((MR_Box) (transform_hlds__ssdebug__ImpureGoalInfo_44));
#line 781 "ssdebug.m"
    }
#line 784 "ssdebug.m"
    {
#line 784 "ssdebug.m"
      transform_hlds__ssdebug__V_137_137 = hlds__make_goal__fail_goal_0_f_0();
    }
#line 784 "ssdebug.m"
    {
#line 784 "ssdebug.m"
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryBVar_41, transform_hlds__ssdebug__RecursiveGoal_37, transform_hlds__ssdebug__V_137_137, &transform_hlds__ssdebug__SwitchFailPortGoal_52);
    }
#line 788 "ssdebug.m"
    {
#line 788 "ssdebug.m"
      transform_hlds__ssdebug__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_140_140, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventFailGoal_42));
#line 788 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "ssdebug.m"
    }
#line 789 "ssdebug.m"
    {
#line 789 "ssdebug.m"
      transform_hlds__ssdebug__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_143_143, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchFailPortGoal_52));
#line 789 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "ssdebug.m"
    }
#line 790 "ssdebug.m"
    {
#line 790 "ssdebug.m"
      transform_hlds__ssdebug__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_142_142, 0) = ((MR_Box) (transform_hlds__ssdebug__V_143_143));
#line 790 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "ssdebug.m"
    }
#line 788 "ssdebug.m"
    {
#line 788 "ssdebug.m"
      transform_hlds__ssdebug__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_139_139, 0) = ((MR_Box) (transform_hlds__ssdebug__V_140_140));
#line 788 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_139_139, 1) = ((MR_Box) (transform_hlds__ssdebug__V_142_142));
#line 788 "ssdebug.m"
    }
#line 787 "ssdebug.m"
    {
#line 787 "ssdebug.m"
      transform_hlds__ssdebug__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_138_138, 0) = ((MR_Box) (transform_hlds__ssdebug__FailArgListGoals_39));
#line 787 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_138_138, 1) = ((MR_Box) (transform_hlds__ssdebug__V_139_139));
#line 787 "ssdebug.m"
    }
#line 786 "ssdebug.m"
    {
#line 786 "ssdebug.m"
      transform_hlds__ssdebug__GoalsElse_53 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_165_165, transform_hlds__ssdebug__V_138_138);
    }
#line 791 "ssdebug.m"
    {
#line 791 "ssdebug.m"
      transform_hlds__ssdebug__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 791 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 791 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_146_146, 1) = ((MR_Box) ((MR_Integer) 0));
#line 791 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_146_146, 2) = ((MR_Box) (transform_hlds__ssdebug__GoalsElse_53));
#line 791 "ssdebug.m"
    }
#line 791 "ssdebug.m"
    {
#line 791 "ssdebug.m"
      transform_hlds__ssdebug__ElseGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ElseGoal_54, 0) = ((MR_Box) (transform_hlds__ssdebug__V_146_146));
#line 791 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__ElseGoal_54, 1) = ((MR_Box) (transform_hlds__ssdebug__ImpureGoalInfo_44));
#line 791 "ssdebug.m"
    }
#line 794 "ssdebug.m"
    transform_hlds__ssdebug__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__OrigBodyGoal_14, (MR_Integer) 0)));
#line 794 "ssdebug.m"
    transform_hlds__ssdebug__OrigGoalInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__OrigBodyGoal_14, (MR_Integer) 1)));
#line 795 "ssdebug.m"
    {
#line 795 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__ProcDetism_43, transform_hlds__ssdebug__OrigGoalInfo_56, &transform_hlds__ssdebug__IteGoalInfo_57);
    }
#line 796 "ssdebug.m"
    {
#line 796 "ssdebug.m"
      transform_hlds__ssdebug__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 796 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 796 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 2) = ((MR_Box) (transform_hlds__ssdebug__CondGoal_47));
#line 796 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 3) = ((MR_Box) (transform_hlds__ssdebug__ThenGoal_51));
#line 796 "ssdebug.m"
      MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_148_148, 4) = ((MR_Box) (transform_hlds__ssdebug__ElseGoal_54));
#line 796 "ssdebug.m"
    }
#line 796 "ssdebug.m"
    {
#line 796 "ssdebug.m"
      transform_hlds__ssdebug__IteGoal_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__IteGoal_58, 0) = ((MR_Box) (transform_hlds__ssdebug__V_148_148));
#line 796 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__IteGoal_58, 1) = ((MR_Box) (transform_hlds__ssdebug__IteGoalInfo_57));
#line 796 "ssdebug.m"
    }
#line 801 "ssdebug.m"
    {
#line 801 "ssdebug.m"
      transform_hlds__ssdebug__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_153_153, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
#line 801 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "ssdebug.m"
    }
#line 802 "ssdebug.m"
    {
#line 802 "ssdebug.m"
      transform_hlds__ssdebug__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_156_156, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
#line 802 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "ssdebug.m"
    }
#line 803 "ssdebug.m"
    {
#line 803 "ssdebug.m"
      transform_hlds__ssdebug__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_159_159, 0) = ((MR_Box) (transform_hlds__ssdebug__IteGoal_58));
#line 803 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "ssdebug.m"
    }
#line 804 "ssdebug.m"
    {
#line 804 "ssdebug.m"
      transform_hlds__ssdebug__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_158_158, 0) = ((MR_Box) (transform_hlds__ssdebug__V_159_159));
#line 804 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "ssdebug.m"
    }
#line 802 "ssdebug.m"
    {
#line 802 "ssdebug.m"
      transform_hlds__ssdebug__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_155_155, 0) = ((MR_Box) (transform_hlds__ssdebug__V_156_156));
#line 802 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_155_155, 1) = ((MR_Box) (transform_hlds__ssdebug__V_158_158));
#line 802 "ssdebug.m"
    }
#line 801 "ssdebug.m"
    {
#line 801 "ssdebug.m"
      transform_hlds__ssdebug__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_152_152, 0) = ((MR_Box) (transform_hlds__ssdebug__V_153_153));
#line 801 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_152_152, 1) = ((MR_Box) (transform_hlds__ssdebug__V_155_155));
#line 801 "ssdebug.m"
    }
#line 800 "ssdebug.m"
    {
#line 800 "ssdebug.m"
      transform_hlds__ssdebug__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_151_151, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_22));
#line 800 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_151_151, 1) = ((MR_Box) (transform_hlds__ssdebug__V_152_152));
#line 800 "ssdebug.m"
    }
#line 799 "ssdebug.m"
    {
#line 799 "ssdebug.m"
      transform_hlds__ssdebug__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_150_150, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_18));
#line 799 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_150_150, 1) = ((MR_Box) (transform_hlds__ssdebug__V_151_151));
#line 799 "ssdebug.m"
    }
#line 798 "ssdebug.m"
    {
#line 798 "ssdebug.m"
      transform_hlds__ssdebug__BodyGoals_59 = mercury__list__condense_1_f_0(transform_hlds__ssdebug__TypeCtorInfo_165_165, transform_hlds__ssdebug__V_150_150);
    }
#line 805 "ssdebug.m"
    {
#line 805 "ssdebug.m"
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_59, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_110_110, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_109_109, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_61, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_118_118, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_63, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_119_119, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_120_120);
#line 805 "ssdebug.m"
      return;
    }
#line 688 "ssdebug.m"
  }
#line 683 "ssdebug.m"
}

#line 591 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_det_6_p_0(
#line 591 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 591 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 591 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45,
#line 591 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_46,
#line 591 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47,
#line 591 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_48)
#line 591 "ssdebug.m"
{
#line 596 "ssdebug.m"
  {
#line 596 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__TypeInfo_112_112;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OrigBodyGoal_14;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FullHeadVars_15;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HeadVars_16;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ArgModes_17;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdGoals_18;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIdVar_19;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__InitInstMap_20;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallArgListVar_21;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallArgListGoals_22;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BoundVarDescsAtCall_23;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ConstructLevelGoal_24;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__LevelVar_25;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventCallGoal_26;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OutputVars_27;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RenamedBodyGoal_28;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__AssignOutputsGoal_29;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Renaming_30;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcDetism_31;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CanFail_32;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ScopedRenamedBodyGoal_35;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FinalInstMap_36;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ExitArgListVar_37;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ExitArgListGoals_38;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RetryVar_40;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__HandleEventExitGoal_41;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__RecursiveGoal_42;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SwitchGoal_43;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__BodyGoals_44;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_55_55;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_56_56;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_57_57;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_58_58;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_59_59;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_60_60;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_61_61;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_62_62;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_63_63;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_65_65;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_66_66;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_69_69;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_70_70;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_72_72;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_73_73;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_75_75;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_77_77;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_78_78;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_79_79;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_84_84;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_88_88;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_89_89;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_91_91;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_92_92;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_93_93;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_94_94;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_96_96;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_97_97;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_99_99;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_100_100;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_102_102;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_103_103;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_104_104;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_106_106;
#line 596 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_107_107;
#line 633 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___Solns_33;
#line 648 "ssdebug.m"
    MR_Word transform_hlds__ssdebug___BoundVarDescsAtExit_39;

#line 596 "ssdebug.m"
    {
#line 596 "ssdebug.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49);
    }
#line 597 "ssdebug.m"
    {
#line 597 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__OrigBodyGoal_14);
    }
#line 598 "ssdebug.m"
    {
#line 598 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50);
    }
#line 599 "ssdebug.m"
    {
#line 599 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51);
    }
#line 600 "ssdebug.m"
    {
#line 600 "ssdebug.m"
      transform_hlds__ssdebug__get_stripped_headvars_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__HeadVars_16, &transform_hlds__ssdebug__ArgModes_17);
    }
#line 604 "ssdebug.m"
    {
#line 604 "ssdebug.m"
      transform_hlds__ssdebug__make_proc_id_construction_8_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, &transform_hlds__ssdebug__ProcIdGoals_18, &transform_hlds__ssdebug__ProcIdVar_19, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_50_50, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_51_51, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53);
    }
#line 609 "ssdebug.m"
    {
#line 609 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__ssdebug__InitInstMap_20);
    }
#line 6829 "transform_hlds.ssdebug.c"
    transform_hlds__ssdebug__TypeInfo_112_112 = (MR_Word) &transform_hlds__ssdebug_scalar_common_1[1];
#line 610 "ssdebug.m"
    {
#line 610 "ssdebug.m"
      transform_hlds__ssdebug__V_55_55 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_112_112, transform_hlds__ssdebug__TypeInfo_112_112);
    }
#line 612 "ssdebug.m"
    {
#line 612 "ssdebug.m"
      transform_hlds__ssdebug__V_61_61 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeInfo_112_112, transform_hlds__ssdebug__TypeInfo_112_112);
    }
#line 610 "ssdebug.m"
    {
#line 610 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__InitInstMap_20, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__V_55_55, &transform_hlds__ssdebug__CallArgListVar_21, &transform_hlds__ssdebug__CallArgListGoals_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_47, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_56_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_45, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_57_57, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_49_49, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_58_58, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_52_52, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_59_59, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_53_53, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_60_60, transform_hlds__ssdebug__V_61_61, &transform_hlds__ssdebug__BoundVarDescsAtCall_23);
    }
#line 615 "ssdebug.m"
    {
#line 615 "ssdebug.m"
      transform_hlds__ssdebug__make_level_construction_7_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_56_56, &transform_hlds__ssdebug__ConstructLevelGoal_24, &transform_hlds__ssdebug__LevelVar_25, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_59_59, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_62_62, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_60_60, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_63_63);
    }
#line 620 "ssdebug.m"
    {
#line 620 "ssdebug.m"
      transform_hlds__ssdebug__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_70_70, 0) = ((MR_Box) (transform_hlds__ssdebug__LevelVar_25));
#line 620 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "ssdebug.m"
    }
#line 620 "ssdebug.m"
    {
#line 620 "ssdebug.m"
      transform_hlds__ssdebug__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_69_69, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListVar_21));
#line 620 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_69_69, 1) = ((MR_Box) (transform_hlds__ssdebug__V_70_70));
#line 620 "ssdebug.m"
    }
#line 620 "ssdebug.m"
    {
#line 620 "ssdebug.m"
      transform_hlds__ssdebug__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_65_65, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 620 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_65_65, 1) = ((MR_Box) (transform_hlds__ssdebug__V_69_69));
#line 620 "ssdebug.m"
    }
#line 619 "ssdebug.m"
    {
#line 619 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_call", transform_hlds__ssdebug__V_65_65, &transform_hlds__ssdebug__HandleEventCallGoal_26, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_56_56, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_66_66, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_62_62, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_63_63, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68);
    }
#line 625 "ssdebug.m"
    {
#line 625 "ssdebug.m"
      transform_hlds__ssdebug__get_output_args_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_66_66, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__ArgModes_17, &transform_hlds__ssdebug__OutputVars_27);
    }
#line 626 "ssdebug.m"
    {
#line 626 "ssdebug.m"
      transform_hlds__ssdebug__rename_outputs_9_p_0(transform_hlds__ssdebug__OutputVars_27, transform_hlds__ssdebug__OrigBodyGoal_14, &transform_hlds__ssdebug__RenamedBodyGoal_28, &transform_hlds__ssdebug__AssignOutputsGoal_29, &transform_hlds__ssdebug__Renaming_30, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_67_67, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_72_72, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_68_68, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_73_73);
    }
#line 632 "ssdebug.m"
    {
#line 632 "ssdebug.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__ssdebug__ProcDetism_31);
    }
#line 633 "ssdebug.m"
    {
#line 633 "ssdebug.m"
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__ssdebug__ProcDetism_31, &transform_hlds__ssdebug__CanFail_32, &transform_hlds__ssdebug___Solns_33);
    }
#line 639 "ssdebug.m"
#line 639 "ssdebug.m"
    switch (transform_hlds__ssdebug__CanFail_32) {
#line 639 "ssdebug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 639 "ssdebug.m"
      case (MR_Integer) 0:
#line 635 "ssdebug.m"
        {
#line 635 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__RenamedOutputVars_34;

#line 636 "ssdebug.m"
          {
#line 636 "ssdebug.m"
            mercury__map__apply_to_list_3_p_0(transform_hlds__ssdebug__TypeInfo_112_112, transform_hlds__ssdebug__TypeInfo_112_112, transform_hlds__ssdebug__OutputVars_27, transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__RenamedOutputVars_34);
          }
#line 637 "ssdebug.m"
          {
#line 637 "ssdebug.m"
            transform_hlds__ssdebug__add_promise_equivalent_solutions_3_p_0(transform_hlds__ssdebug__RenamedOutputVars_34, transform_hlds__ssdebug__RenamedBodyGoal_28, &transform_hlds__ssdebug__ScopedRenamedBodyGoal_35);
          }
#line 635 "ssdebug.m"
        }
#line 639 "ssdebug.m"
        break;
#line 639 "ssdebug.m"
      case (MR_Integer) 1:
#line 641 "ssdebug.m"
        transform_hlds__ssdebug__ScopedRenamedBodyGoal_35 = transform_hlds__ssdebug__RenamedBodyGoal_28;
#line 639 "ssdebug.m"
        break;
#line 639 "ssdebug.m"
    }
#line 647 "ssdebug.m"
    {
#line 647 "ssdebug.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__ssdebug__OrigBodyGoal_14, transform_hlds__ssdebug__InitInstMap_20, &transform_hlds__ssdebug__FinalInstMap_36);
    }
#line 648 "ssdebug.m"
    {
#line 648 "ssdebug.m"
      transform_hlds__ssdebug__make_arg_list_18_p_0((MR_Integer) 0, transform_hlds__ssdebug__FinalInstMap_36, transform_hlds__ssdebug__HeadVars_16, transform_hlds__ssdebug__Renaming_30, &transform_hlds__ssdebug__ExitArgListVar_37, &transform_hlds__ssdebug__ExitArgListGoals_38, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_66_66, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_75_75, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_58_58, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_72_72, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_78_78, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_73_73, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_79_79, transform_hlds__ssdebug__BoundVarDescsAtCall_23, &transform_hlds__ssdebug___BoundVarDescsAtExit_39);
    }
#line 653 "ssdebug.m"
    {
#line 653 "ssdebug.m"
      transform_hlds__ssdebug__make_retry_var_6_p_0((MR_String) "DoRetry", &transform_hlds__ssdebug__RetryVar_40, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_78_78, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_79_79, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82);
    }
#line 655 "ssdebug.m"
    {
#line 655 "ssdebug.m"
      transform_hlds__ssdebug__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 0) = ((MR_Box) (transform_hlds__ssdebug__RetryVar_40));
#line 655 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "ssdebug.m"
    }
#line 655 "ssdebug.m"
    {
#line 655 "ssdebug.m"
      transform_hlds__ssdebug__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListVar_37));
#line 655 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_88_88, 1) = ((MR_Box) (transform_hlds__ssdebug__V_89_89));
#line 655 "ssdebug.m"
    }
#line 655 "ssdebug.m"
    {
#line 655 "ssdebug.m"
      transform_hlds__ssdebug__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdVar_19));
#line 655 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_84_84, 1) = ((MR_Box) (transform_hlds__ssdebug__V_88_88));
#line 655 "ssdebug.m"
    }
#line 654 "ssdebug.m"
    {
#line 654 "ssdebug.m"
      transform_hlds__ssdebug__make_handle_event_9_p_0((MR_String) "handle_event_exit", transform_hlds__ssdebug__V_84_84, &transform_hlds__ssdebug__HandleEventExitGoal_41, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_75_75, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_81_81, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87);
    }
#line 659 "ssdebug.m"
    {
#line 659 "ssdebug.m"
      transform_hlds__ssdebug__make_recursive_call_6_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__FullHeadVars_15, &transform_hlds__ssdebug__RecursiveGoal_42);
    }
#line 663 "ssdebug.m"
    {
#line 663 "ssdebug.m"
      transform_hlds__ssdebug__make_switch_goal_4_p_0(transform_hlds__ssdebug__RetryVar_40, transform_hlds__ssdebug__RecursiveGoal_42, transform_hlds__ssdebug__AssignOutputsGoal_29, &transform_hlds__ssdebug__SwitchGoal_43);
    }
#line 670 "ssdebug.m"
    {
#line 670 "ssdebug.m"
      transform_hlds__ssdebug__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 0) = ((MR_Box) (transform_hlds__ssdebug__ConstructLevelGoal_24));
#line 670 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "ssdebug.m"
    }
#line 671 "ssdebug.m"
    {
#line 671 "ssdebug.m"
      transform_hlds__ssdebug__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_97_97, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventCallGoal_26));
#line 671 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "ssdebug.m"
    }
#line 672 "ssdebug.m"
    {
#line 672 "ssdebug.m"
      transform_hlds__ssdebug__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 0) = ((MR_Box) (transform_hlds__ssdebug__ScopedRenamedBodyGoal_35));
#line 672 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "ssdebug.m"
    }
#line 674 "ssdebug.m"
    {
#line 674 "ssdebug.m"
      transform_hlds__ssdebug__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 0) = ((MR_Box) (transform_hlds__ssdebug__HandleEventExitGoal_41));
#line 674 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "ssdebug.m"
    }
#line 675 "ssdebug.m"
    {
#line 675 "ssdebug.m"
      transform_hlds__ssdebug__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 0) = ((MR_Box) (transform_hlds__ssdebug__SwitchGoal_43));
#line 675 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "ssdebug.m"
    }
#line 676 "ssdebug.m"
    {
#line 676 "ssdebug.m"
      transform_hlds__ssdebug__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 0) = ((MR_Box) (transform_hlds__ssdebug__V_107_107));
#line 676 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 676 "ssdebug.m"
    }
#line 674 "ssdebug.m"
    {
#line 674 "ssdebug.m"
      transform_hlds__ssdebug__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 0) = ((MR_Box) (transform_hlds__ssdebug__V_104_104));
#line 674 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_103_103, 1) = ((MR_Box) (transform_hlds__ssdebug__V_106_106));
#line 674 "ssdebug.m"
    }
#line 673 "ssdebug.m"
    {
#line 673 "ssdebug.m"
      transform_hlds__ssdebug__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_102_102, 0) = ((MR_Box) (transform_hlds__ssdebug__ExitArgListGoals_38));
#line 673 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_102_102, 1) = ((MR_Box) (transform_hlds__ssdebug__V_103_103));
#line 673 "ssdebug.m"
    }
#line 672 "ssdebug.m"
    {
#line 672 "ssdebug.m"
      transform_hlds__ssdebug__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 0) = ((MR_Box) (transform_hlds__ssdebug__V_100_100));
#line 672 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_99_99, 1) = ((MR_Box) (transform_hlds__ssdebug__V_102_102));
#line 672 "ssdebug.m"
    }
#line 671 "ssdebug.m"
    {
#line 671 "ssdebug.m"
      transform_hlds__ssdebug__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_96_96, 0) = ((MR_Box) (transform_hlds__ssdebug__V_97_97));
#line 671 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_96_96, 1) = ((MR_Box) (transform_hlds__ssdebug__V_99_99));
#line 671 "ssdebug.m"
    }
#line 670 "ssdebug.m"
    {
#line 670 "ssdebug.m"
      transform_hlds__ssdebug__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_93_93, 0) = ((MR_Box) (transform_hlds__ssdebug__V_94_94));
#line 670 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_93_93, 1) = ((MR_Box) (transform_hlds__ssdebug__V_96_96));
#line 670 "ssdebug.m"
    }
#line 669 "ssdebug.m"
    {
#line 669 "ssdebug.m"
      transform_hlds__ssdebug__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 0) = ((MR_Box) (transform_hlds__ssdebug__CallArgListGoals_22));
#line 669 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_92_92, 1) = ((MR_Box) (transform_hlds__ssdebug__V_93_93));
#line 669 "ssdebug.m"
    }
#line 668 "ssdebug.m"
    {
#line 668 "ssdebug.m"
      transform_hlds__ssdebug__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 0) = ((MR_Box) (transform_hlds__ssdebug__ProcIdGoals_18));
#line 668 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_91_91, 1) = ((MR_Box) (transform_hlds__ssdebug__V_92_92));
#line 668 "ssdebug.m"
    }
#line 667 "ssdebug.m"
    {
#line 667 "ssdebug.m"
      transform_hlds__ssdebug__BodyGoals_44 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ssdebug__V_91_91);
    }
#line 677 "ssdebug.m"
    {
#line 677 "ssdebug.m"
      transform_hlds__ssdebug__commit_goal_changes_10_p_0(transform_hlds__ssdebug__BodyGoals_44, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_77_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_76_76, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_46, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_85_85, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_48, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_86_86, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_87_87);
#line 677 "ssdebug.m"
      return;
    }
#line 596 "ssdebug.m"
  }
#line 591 "ssdebug.m"
}

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg)
#line 1283 "ssdebug.m"
{
#line 1283 "ssdebug.m"
  {
#line 1283 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

#line 1283 "ssdebug.m"
    MR_builtin_longjmp((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0, 1);
#line 1283 "ssdebug.m"
  }
#line 1283 "ssdebug.m"
}

#line 1284 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3(
#line 1284 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg)
#line 1284 "ssdebug.m"
{
#line 1284 "ssdebug.m"
  {
#line 1284 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

#line 1284 "ssdebug.m"
    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46 = ((MR_Word) (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46);
#line 1284 "ssdebug.m"
    {
#line 1284 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(transform_hlds__ssdebug__env_ptr);
#line 1284 "ssdebug.m"
      return;
    }
#line 1284 "ssdebug.m"
  }
#line 1284 "ssdebug.m"
}

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_2(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg)
#line 1283 "ssdebug.m"
{
#line 1283 "ssdebug.m"
  {
#line 1283 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

#line 1286 "ssdebug.m"
    {
#line 1286 "ssdebug.m"
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46);
    }
#line 1287 "ssdebug.m"
    if (!((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded))
#line 1287 "ssdebug.m"
      {
#line 1287 "ssdebug.m"
        (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_46);
      }
#line 1285 "ssdebug.m"
    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
#line 1285 "ssdebug.m"
    if ((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
#line 1285 "ssdebug.m"
      {
#line 1285 "ssdebug.m"
        transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_1(transform_hlds__ssdebug__env_ptr);
#line 1285 "ssdebug.m"
        return;
      }
#line 1283 "ssdebug.m"
  }
#line 1283 "ssdebug.m"
}

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg)
#line 1283 "ssdebug.m"
{
#line 1283 "ssdebug.m"
  {
#line 1283 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

#line 1283 "ssdebug.m"
    if (MR_builtin_setjmp((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_0) == 0)
#line 1283 "ssdebug.m"
      {
#line 1283 "ssdebug.m"
        {
#line 1284 "ssdebug.m"
          {
#line 1284 "ssdebug.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv0_Mode_46, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_31, transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_3, transform_hlds__ssdebug__env_ptr);
          }
#line 1283 "ssdebug.m"
        }
#line 1283 "ssdebug.m"
        (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_FALSE;
#line 1283 "ssdebug.m"
      }
#line 1283 "ssdebug.m"
    else
#line 1283 "ssdebug.m"
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_TRUE;
#line 1283 "ssdebug.m"
  }
#line 1283 "ssdebug.m"
}

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg)
#line 1283 "ssdebug.m"
{
#line 1283 "ssdebug.m"
  {
#line 1283 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

#line 1283 "ssdebug.m"
    MR_builtin_longjmp((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1, 1);
#line 1283 "ssdebug.m"
  }
#line 1283 "ssdebug.m"
}

#line 1284 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7(
#line 1284 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg)
#line 1284 "ssdebug.m"
{
#line 1284 "ssdebug.m"
  {
#line 1284 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

#line 1284 "ssdebug.m"
    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72 = ((MR_Word) (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72);
#line 1284 "ssdebug.m"
    {
#line 1284 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(transform_hlds__ssdebug__env_ptr);
#line 1284 "ssdebug.m"
      return;
    }
#line 1284 "ssdebug.m"
  }
#line 1284 "ssdebug.m"
}

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_6(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg)
#line 1283 "ssdebug.m"
{
#line 1283 "ssdebug.m"
  {
#line 1283 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

#line 1286 "ssdebug.m"
    {
#line 1286 "ssdebug.m"
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72);
    }
#line 1287 "ssdebug.m"
    if (!((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded))
#line 1287 "ssdebug.m"
      {
#line 1287 "ssdebug.m"
        (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__Mode_72);
      }
#line 1285 "ssdebug.m"
    (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
#line 1285 "ssdebug.m"
    if ((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
#line 1285 "ssdebug.m"
      {
#line 1285 "ssdebug.m"
        transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_5(transform_hlds__ssdebug__env_ptr);
#line 1285 "ssdebug.m"
        return;
      }
#line 1283 "ssdebug.m"
  }
#line 1283 "ssdebug.m"
}

#line 1283 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(
#line 1283 "ssdebug.m"
  void * transform_hlds__ssdebug__env_ptr_arg)
#line 1283 "ssdebug.m"
{
#line 1283 "ssdebug.m"
  {
#line 1283 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s * transform_hlds__ssdebug__env_ptr = (struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s *) transform_hlds__ssdebug__env_ptr_arg;

#line 1283 "ssdebug.m"
    if (MR_builtin_setjmp((transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__commit_1) == 0)
#line 1283 "ssdebug.m"
      {
#line 1283 "ssdebug.m"
        {
#line 1284 "ssdebug.m"
          {
#line 1284 "ssdebug.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__conv1_Mode_72, (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_57, transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_7, transform_hlds__ssdebug__env_ptr);
          }
#line 1283 "ssdebug.m"
        }
#line 1283 "ssdebug.m"
        (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_FALSE;
#line 1283 "ssdebug.m"
      }
#line 1283 "ssdebug.m"
    else
#line 1283 "ssdebug.m"
      (transform_hlds__ssdebug__env_ptr)->transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = MR_TRUE;
#line 1283 "ssdebug.m"
  }
#line 1283 "ssdebug.m"
}

#line 519 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__SSTraceLevel_7,
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredProcId_8,
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14,
#line 519 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15,
#line 519 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_16,
#line 519 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17)
#line 519 "ssdebug.m"
{
#line 519 "ssdebug.m"
  {
#line 519 "ssdebug.m"
    struct transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0_s transform_hlds__ssdebug__env;

#line 519 "ssdebug.m"
    (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_16;
#line 526 "ssdebug.m"
#line 526 "ssdebug.m"
    switch (transform_hlds__ssdebug__SSTraceLevel_7) {
#line 526 "ssdebug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 526 "ssdebug.m"
      case (MR_Integer) 2:
#line 548 "ssdebug.m"
        {
#line 548 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 0)));
#line 548 "ssdebug.m"
          MR_Integer transform_hlds__ssdebug__ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 1)));

#line 550 "ssdebug.m"
          {
#line 550 "ssdebug.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &(transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_31);
          }
#line 1283 "ssdebug.m"
          {
#line 1283 "ssdebug.m"
            transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_4(&transform_hlds__ssdebug__env);
          }
#line 1283 "ssdebug.m"
          (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
#line 583 "ssdebug.m"
          if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
#line 558 "ssdebug.m"
            {
#line 558 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Determinism_32;

#line 558 "ssdebug.m"
              {
#line 558 "ssdebug.m"
                hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__ssdebug__Determinism_32);
              }
#line 564 "ssdebug.m"
#line 564 "ssdebug.m"
              switch (transform_hlds__ssdebug__Determinism_32) {
#line 564 "ssdebug.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 564 "ssdebug.m"
                case (MR_Integer) 4:
#line 564 "ssdebug.m"
                case (MR_Integer) 0:
#line 563 "ssdebug.m"
                  {
#line 563 "ssdebug.m"
                    transform_hlds__ssdebug__ssdebug_process_proc_det_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 563 "ssdebug.m"
                    return;
                  }
#line 564 "ssdebug.m"
                  break;
#line 564 "ssdebug.m"
                case (MR_Integer) 5:
#line 564 "ssdebug.m"
                case (MR_Integer) 1:
#line 568 "ssdebug.m"
                  {
#line 568 "ssdebug.m"
                    transform_hlds__ssdebug__ssdebug_process_proc_semi_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 568 "ssdebug.m"
                    return;
                  }
#line 564 "ssdebug.m"
                  break;
#line 564 "ssdebug.m"
                case (MR_Integer) 6:
#line 576 "ssdebug.m"
                  {
#line 576 "ssdebug.m"
                    transform_hlds__ssdebug__ssdebug_process_proc_erroneous_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 576 "ssdebug.m"
                    return;
                  }
#line 564 "ssdebug.m"
                  break;
#line 564 "ssdebug.m"
                case (MR_Integer) 7:
#line 580 "ssdebug.m"
                  {
#line 580 "ssdebug.m"
                    transform_hlds__ssdebug__ssdebug_process_proc_failure_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 580 "ssdebug.m"
                    return;
                  }
#line 564 "ssdebug.m"
                  break;
#line 564 "ssdebug.m"
                case (MR_Integer) 2:
#line 564 "ssdebug.m"
                case (MR_Integer) 3:
#line 573 "ssdebug.m"
                  {
#line 573 "ssdebug.m"
                    transform_hlds__ssdebug__ssdebug_process_proc_nondet_6_p_0(transform_hlds__ssdebug__PredId_29, transform_hlds__ssdebug__ProcId_30, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 573 "ssdebug.m"
                    return;
                  }
#line 564 "ssdebug.m"
                  break;
#line 564 "ssdebug.m"
              }
#line 558 "ssdebug.m"
            }
#line 583 "ssdebug.m"
          else
#line 586 "ssdebug.m"
            {
#line 586 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17 = (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
#line 586 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14;
#line 586 "ssdebug.m"
            }
#line 548 "ssdebug.m"
        }
#line 526 "ssdebug.m"
        break;
#line 526 "ssdebug.m"
      case (MR_Integer) 0:
#line 526 "ssdebug.m"
        {
#line 526 "ssdebug.m"
          *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14;
#line 526 "ssdebug.m"
          *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17 = (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
#line 526 "ssdebug.m"
        }
#line 526 "ssdebug.m"
        break;
#line 526 "ssdebug.m"
      case (MR_Integer) 1:
#line 528 "ssdebug.m"
        {
#line 528 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 0)));
#line 528 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__PredInfo_13;
#line 529 "ssdebug.m"
          MR_Integer transform_hlds__ssdebug___ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 1)));

#line 533 "ssdebug.m"
          {
#line 533 "ssdebug.m"
            hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__PredId_11, &transform_hlds__ssdebug__PredInfo_13);
          }
#line 534 "ssdebug.m"
          {
#line 534 "ssdebug.m"
            (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__ssdebug__PredInfo_13);
          }
#line 536 "ssdebug.m"
          if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
#line 548 "ssdebug.m"
            {
#line 548 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__PredId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 0)));
#line 548 "ssdebug.m"
              MR_Integer transform_hlds__ssdebug__ProcId_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_8, (MR_Integer) 1)));

#line 550 "ssdebug.m"
              {
#line 550 "ssdebug.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &(transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__ArgModes_57);
              }
#line 1283 "ssdebug.m"
              {
#line 1283 "ssdebug.m"
                transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_8(&transform_hlds__ssdebug__env);
              }
#line 1283 "ssdebug.m"
              (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded = !((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded);
#line 583 "ssdebug.m"
              if ((transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__succeeded)
#line 558 "ssdebug.m"
                {
#line 558 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__Determinism_58;

#line 558 "ssdebug.m"
                  {
#line 558 "ssdebug.m"
                    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__ssdebug__Determinism_58);
                  }
#line 564 "ssdebug.m"
#line 564 "ssdebug.m"
                  switch (transform_hlds__ssdebug__Determinism_58) {
#line 564 "ssdebug.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 564 "ssdebug.m"
                    case (MR_Integer) 4:
#line 564 "ssdebug.m"
                    case (MR_Integer) 0:
#line 563 "ssdebug.m"
                      {
#line 563 "ssdebug.m"
                        transform_hlds__ssdebug__ssdebug_process_proc_det_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 563 "ssdebug.m"
                        return;
                      }
#line 564 "ssdebug.m"
                      break;
#line 564 "ssdebug.m"
                    case (MR_Integer) 5:
#line 564 "ssdebug.m"
                    case (MR_Integer) 1:
#line 568 "ssdebug.m"
                      {
#line 568 "ssdebug.m"
                        transform_hlds__ssdebug__ssdebug_process_proc_semi_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 568 "ssdebug.m"
                        return;
                      }
#line 564 "ssdebug.m"
                      break;
#line 564 "ssdebug.m"
                    case (MR_Integer) 6:
#line 576 "ssdebug.m"
                      {
#line 576 "ssdebug.m"
                        transform_hlds__ssdebug__ssdebug_process_proc_erroneous_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 576 "ssdebug.m"
                        return;
                      }
#line 564 "ssdebug.m"
                      break;
#line 564 "ssdebug.m"
                    case (MR_Integer) 7:
#line 580 "ssdebug.m"
                      {
#line 580 "ssdebug.m"
                        transform_hlds__ssdebug__ssdebug_process_proc_failure_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 580 "ssdebug.m"
                        return;
                      }
#line 564 "ssdebug.m"
                      break;
#line 564 "ssdebug.m"
                    case (MR_Integer) 2:
#line 564 "ssdebug.m"
                    case (MR_Integer) 3:
#line 573 "ssdebug.m"
                      {
#line 573 "ssdebug.m"
                        transform_hlds__ssdebug__ssdebug_process_proc_nondet_6_p_0(transform_hlds__ssdebug__PredId_55, transform_hlds__ssdebug__ProcId_56, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15, (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17);
#line 573 "ssdebug.m"
                        return;
                      }
#line 564 "ssdebug.m"
                      break;
#line 564 "ssdebug.m"
                  }
#line 558 "ssdebug.m"
                }
#line 583 "ssdebug.m"
              else
#line 586 "ssdebug.m"
                {
#line 586 "ssdebug.m"
                  *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17 = (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
#line 586 "ssdebug.m"
                  *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14;
#line 586 "ssdebug.m"
                }
#line 548 "ssdebug.m"
            }
#line 536 "ssdebug.m"
          else
#line 537 "ssdebug.m"
            {
#line 537 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_17 = (transform_hlds__ssdebug__env).transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_16;
#line 537 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_15 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_14;
#line 537 "ssdebug.m"
            }
#line 528 "ssdebug.m"
        }
#line 526 "ssdebug.m"
        break;
#line 526 "ssdebug.m"
    }
#line 519 "ssdebug.m"
  }
#line 519 "ssdebug.m"
}

#line 485 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__insert_context_update_call_5_p_0(
#line 485 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__ModuleInfo_6,
#line 485 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Goal0_7,
#line 485 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Goal_8,
#line 485 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25,
#line 485 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26)
#line 485 "ssdebug.m"
{
#line 488 "ssdebug.m"
  {
#line 488 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_7, (MR_Integer) 1)));
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Context_12;
#line 488 "ssdebug.m"
    MR_String transform_hlds__ssdebug__FileName_13;
#line 488 "ssdebug.m"
    MR_Integer transform_hlds__ssdebug__LineNumber_14;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__MakeFileName_17;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__FileNameVar_18;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__MakeLineNumber_19;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__LineNumberVar_20;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Args_21;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__InstMapDelta_23;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SetContextGoal_24;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_27_27;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_28_28;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_30_30;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_31_31;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarSet_34_34;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_35_35;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37_37;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_39_39;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_41_41;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_47_47;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_48_48;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_49_49;
#line 488 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_50_50;
#line 489 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal0_7, (MR_Integer) 0)));

#line 490 "ssdebug.m"
    {
#line 490 "ssdebug.m"
      transform_hlds__ssdebug__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__ssdebug__GoalInfo_11);
    }
#line 491 "ssdebug.m"
    transform_hlds__ssdebug__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Context_12, (MR_Integer) 0)));
#line 491 "ssdebug.m"
    transform_hlds__ssdebug__LineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Context_12, (MR_Integer) 1)));
#line 494 "ssdebug.m"
    {
#line 494 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_27_27);
    }
#line 495 "ssdebug.m"
    {
#line 495 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_28_28);
    }
#line 496 "ssdebug.m"
    {
#line 496 "ssdebug.m"
      hlds__make_goal__make_string_const_construction_alloc_8_p_0(transform_hlds__ssdebug__FileName_13, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[0]), &transform_hlds__ssdebug__MakeFileName_17, &transform_hlds__ssdebug__FileNameVar_18, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_27_27, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_30_30, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_28_28, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_31_31);
    }
#line 498 "ssdebug.m"
    {
#line 498 "ssdebug.m"
      hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__ssdebug__LineNumber_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ssdebug_scalar_common_6[1]), &transform_hlds__ssdebug__MakeLineNumber_19, &transform_hlds__ssdebug__LineNumberVar_20, transform_hlds__ssdebug__STATE_VARIABLE_VarSet_30_30, &transform_hlds__ssdebug__STATE_VARIABLE_VarSet_34_34, transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_31_31, &transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_35_35);
    }
#line 500 "ssdebug.m"
    {
#line 500 "ssdebug.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarSet_34_34, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_25, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37_37);
    }
#line 501 "ssdebug.m"
    {
#line 501 "ssdebug.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_VarTypes_35_35, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_37_37, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_26);
    }
#line 504 "ssdebug.m"
    {
#line 504 "ssdebug.m"
      transform_hlds__ssdebug__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_39_39, 0) = ((MR_Box) (transform_hlds__ssdebug__LineNumberVar_20));
#line 504 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "ssdebug.m"
    }
#line 504 "ssdebug.m"
    {
#line 504 "ssdebug.m"
      transform_hlds__ssdebug__Args_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Args_21, 0) = ((MR_Box) (transform_hlds__ssdebug__FileNameVar_18));
#line 504 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__Args_21, 1) = ((MR_Box) (transform_hlds__ssdebug__V_39_39));
#line 504 "ssdebug.m"
    }
#line 506 "ssdebug.m"
    {
#line 506 "ssdebug.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__ssdebug__InstMapDelta_23);
    }
#line 507 "ssdebug.m"
    {
#line 507 "ssdebug.m"
      transform_hlds__ssdebug__V_41_41 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
    }
#line 507 "ssdebug.m"
    {
#line 507 "ssdebug.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__ssdebug__V_41_41, (MR_String) "set_context", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__ssdebug__Args_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ssdebug__InstMapDelta_23, transform_hlds__ssdebug__ModuleInfo_6, transform_hlds__ssdebug__Context_12, &transform_hlds__ssdebug__SetContextGoal_24);
    }
#line 511 "ssdebug.m"
    {
#line 511 "ssdebug.m"
      transform_hlds__ssdebug__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_50_50, 0) = ((MR_Box) (transform_hlds__ssdebug__Goal0_7));
#line 511 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "ssdebug.m"
    }
#line 511 "ssdebug.m"
    {
#line 511 "ssdebug.m"
      transform_hlds__ssdebug__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_49_49, 0) = ((MR_Box) (transform_hlds__ssdebug__SetContextGoal_24));
#line 511 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_49_49, 1) = ((MR_Box) (transform_hlds__ssdebug__V_50_50));
#line 511 "ssdebug.m"
    }
#line 511 "ssdebug.m"
    {
#line 511 "ssdebug.m"
      transform_hlds__ssdebug__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 0) = ((MR_Box) (transform_hlds__ssdebug__MakeLineNumber_19));
#line 511 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_48_48, 1) = ((MR_Box) (transform_hlds__ssdebug__V_49_49));
#line 511 "ssdebug.m"
    }
#line 511 "ssdebug.m"
    {
#line 511 "ssdebug.m"
      transform_hlds__ssdebug__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_47_47, 0) = ((MR_Box) (transform_hlds__ssdebug__MakeFileName_17));
#line 511 "ssdebug.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__V_47_47, 1) = ((MR_Box) (transform_hlds__ssdebug__V_48_48));
#line 511 "ssdebug.m"
    }
#line 511 "ssdebug.m"
    {
#line 511 "ssdebug.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__ssdebug__V_47_47, transform_hlds__ssdebug__GoalInfo_11, transform_hlds__ssdebug__Goal_8);
#line 511 "ssdebug.m"
      return;
    }
#line 488 "ssdebug.m"
  }
#line 485 "ssdebug.m"
}

#line 464 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__create_proxy_proc_6_p_0(
#line 464 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 464 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 464 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20,
#line 464 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21,
#line 464 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
#line 464 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23)
#line 464 "ssdebug.m"
{
#line 470 "ssdebug.m"
  {
#line 470 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Args_12;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SymName_13;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__CallExpr_14;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo0_16;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Detism_17;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo_18;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Goal_19;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_27_27;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30;
#line 470 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32;
#line 474 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_15_15;

#line 470 "ssdebug.m"
    {
#line 470 "ssdebug.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, transform_hlds__ssdebug__ProcId_8, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24);
    }
#line 471 "ssdebug.m"
    {
#line 471 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__Args_12);
    }
#line 472 "ssdebug.m"
    {
#line 472 "ssdebug.m"
      hlds__hlds_pred__pred_info_get_sym_name_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, &transform_hlds__ssdebug__SymName_13);
    }
#line 473 "ssdebug.m"
    {
#line 473 "ssdebug.m"
      transform_hlds__ssdebug__CallExpr_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 473 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 0) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
#line 473 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_8));
#line 473 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 2) = ((MR_Box) (transform_hlds__ssdebug__Args_12));
#line 473 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 3) = ((MR_Box) ((MR_Integer) 2));
#line 473 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "ssdebug.m"
      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__CallExpr_14, 5) = ((MR_Box) (transform_hlds__ssdebug__SymName_13));
#line 473 "ssdebug.m"
    }
#line 474 "ssdebug.m"
    {
#line 474 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__V_27_27);
    }
#line 474 "ssdebug.m"
    transform_hlds__ssdebug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_27_27, (MR_Integer) 0)));
#line 474 "ssdebug.m"
    transform_hlds__ssdebug__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_27_27, (MR_Integer) 1)));
#line 475 "ssdebug.m"
    {
#line 475 "ssdebug.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__Detism_17);
    }
#line 476 "ssdebug.m"
    {
#line 476 "ssdebug.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__ssdebug__Detism_17, transform_hlds__ssdebug__GoalInfo0_16, &transform_hlds__ssdebug__GoalInfo_18);
    }
#line 477 "ssdebug.m"
    {
#line 477 "ssdebug.m"
      transform_hlds__ssdebug__Goal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_19, 0) = ((MR_Box) (transform_hlds__ssdebug__CallExpr_14));
#line 477 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Goal_19, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo_18));
#line 477 "ssdebug.m"
    }
#line 478 "ssdebug.m"
    {
#line 478 "ssdebug.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_19, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_24_24, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28);
    }
#line 479 "ssdebug.m"
    {
#line 479 "ssdebug.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_28_28, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30);
    }
#line 480 "ssdebug.m"
    {
#line 480 "ssdebug.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_30_30, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);
    }
#line 482 "ssdebug.m"
    {
#line 482 "ssdebug.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_32_32, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_0_20, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21);
#line 482 "ssdebug.m"
      return;
    }
#line 470 "ssdebug.m"
  }
#line 464 "ssdebug.m"
}

#line 445 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1(
#line 445 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 445 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 445 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 445 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 445 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 445 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
#line 445 "ssdebug.m"
{
#line 445 "ssdebug.m"
  {
#line 445 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 445 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv2_STATE_VARIABLE_PredInfo_21;
#line 445 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv1_STATE_VARIABLE_ModuleInfo_23;

#line 445 "ssdebug.m"
    {
#line 445 "ssdebug.m"
      transform_hlds__ssdebug__create_proxy_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_PredInfo_21, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ModuleInfo_23);
    }
#line 445 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv2_STATE_VARIABLE_PredInfo_21));
#line 445 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ModuleInfo_23));
#line 445 "ssdebug.m"
  }
#line 445 "ssdebug.m"
}

#line 418 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(
#line 418 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 418 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__MaybeNewPredId_8,
#line 418 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
#line 418 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
#line 418 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
#line 418 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18)
#line 418 "ssdebug.m"
{
#line 424 "ssdebug.m"
  {
#line 424 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 424 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__MaybeNewPredId0_11;
#line 422 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__conv0_MaybeNewPredId0_11;

#line 422 "ssdebug.m"
    {
#line 422 "ssdebug.m"
      transform_hlds__ssdebug__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0], transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, ((MR_Box) (transform_hlds__ssdebug__PredId_7)), &transform_hlds__ssdebug__conv0_MaybeNewPredId0_11);
    }
#line 422 "ssdebug.m"
    if (transform_hlds__ssdebug__succeeded)
#line 422 "ssdebug.m"
      {
#line 422 "ssdebug.m"
        transform_hlds__ssdebug__MaybeNewPredId0_11 = ((MR_Word) transform_hlds__ssdebug__conv0_MaybeNewPredId0_11);
#line 422 "ssdebug.m"
        transform_hlds__ssdebug__succeeded = MR_TRUE;
#line 422 "ssdebug.m"
      }
#line 424 "ssdebug.m"
    if (transform_hlds__ssdebug__succeeded)
#line 423 "ssdebug.m"
      {
#line 423 "ssdebug.m"
        *transform_hlds__ssdebug__MaybeNewPredId_8 = transform_hlds__ssdebug__MaybeNewPredId0_11;
#line 423 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17;
#line 423 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15;
#line 423 "ssdebug.m"
      }
#line 424 "ssdebug.m"
    else
#line 425 "ssdebug.m"
      {
#line 425 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__PredInfo_12;
#line 425 "ssdebug.m"
        MR_Word transform_hlds__ssdebug__PredModule_13;

#line 425 "ssdebug.m"
        {
#line 425 "ssdebug.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__PredInfo_12);
        }
#line 426 "ssdebug.m"
        {
#line 426 "ssdebug.m"
          transform_hlds__ssdebug__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__PredInfo_12);
        }
#line 427 "ssdebug.m"
        {
#line 427 "ssdebug.m"
          transform_hlds__ssdebug__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(transform_hlds__ssdebug__PredModule_13);
        }
#line 430 "ssdebug.m"
        if (transform_hlds__ssdebug__succeeded)
#line 428 "ssdebug.m"
          {
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__NewPredId_14;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__ProcIds_31;
#line 428 "ssdebug.m"
            MR_String transform_hlds__ssdebug__Name_32;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__Origin_33;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__NewOrigin_34;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__PredTable0_35;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__PredTable_36;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_17_37;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__V_40_40;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21_41;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_42;
#line 428 "ssdebug.m"
            MR_String transform_hlds__ssdebug__V_43_43;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_24_44;
#line 428 "ssdebug.m"
            MR_Word transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_27_47;
#line 445 "ssdebug.m"
            MR_Box transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_21_41;
#line 445 "ssdebug.m"
            MR_Box transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_22_42;

#line 441 "ssdebug.m"
            {
#line 441 "ssdebug.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_17_37);
            }
#line 442 "ssdebug.m"
            {
#line 442 "ssdebug.m"
              hlds__hlds_pred__pred_info_set_import_status_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_17_37, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39);
            }
#line 444 "ssdebug.m"
            {
#line 444 "ssdebug.m"
              transform_hlds__ssdebug__ProcIds_31 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39);
            }
#line 445 "ssdebug.m"
            {
#line 445 "ssdebug.m"
              transform_hlds__ssdebug__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 445 "ssdebug.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_40_40, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[2]));
#line 445 "ssdebug.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_40_40, 1) = ((MR_Box) (transform_hlds__ssdebug__lookup_proxy_pred_6_p_0_1));
#line 445 "ssdebug.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 445 "ssdebug.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_40_40, 3) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
#line 445 "ssdebug.m"
            }
#line 445 "ssdebug.m"
            {
#line 445 "ssdebug.m"
              mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__ssdebug__V_40_40, transform_hlds__ssdebug__ProcIds_31, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_19_39)), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_21_41, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17)), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_22_42);
            }
#line 445 "ssdebug.m"
            transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21_41 = ((MR_Word) transform_hlds__ssdebug__conv4_STATE_VARIABLE_PredInfo_21_41);
#line 445 "ssdebug.m"
            transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_42 = ((MR_Word) transform_hlds__ssdebug__conv3_STATE_VARIABLE_ModuleInfo_22_42);
#line 449 "ssdebug.m"
            {
#line 449 "ssdebug.m"
              transform_hlds__ssdebug__Name_32 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21_41);
            }
#line 450 "ssdebug.m"
            {
#line 450 "ssdebug.m"
              transform_hlds__ssdebug__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "SSDBPR__", transform_hlds__ssdebug__Name_32);
            }
#line 450 "ssdebug.m"
            {
#line 450 "ssdebug.m"
              hlds__hlds_pred__pred_info_set_name_3_p_0(transform_hlds__ssdebug__V_43_43, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_21_41, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_24_44);
            }
#line 454 "ssdebug.m"
            {
#line 454 "ssdebug.m"
              hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_24_44, &transform_hlds__ssdebug__Origin_33);
            }
#line 455 "ssdebug.m"
            {
#line 455 "ssdebug.m"
              transform_hlds__ssdebug__NewOrigin_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 455 "ssdebug.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 455 "ssdebug.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 1) = ((MR_Box) (transform_hlds__ssdebug__Origin_33));
#line 455 "ssdebug.m"
              MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__NewOrigin_34, 2) = ((MR_Box) (transform_hlds__ssdebug__PredId_7));
#line 455 "ssdebug.m"
            }
#line 457 "ssdebug.m"
            {
#line 457 "ssdebug.m"
              hlds__hlds_pred__pred_info_set_origin_3_p_0(transform_hlds__ssdebug__NewOrigin_34, transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_24_44, &transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_27_47);
            }
#line 459 "ssdebug.m"
            {
#line 459 "ssdebug.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_42, &transform_hlds__ssdebug__PredTable0_35);
            }
#line 460 "ssdebug.m"
            {
#line 460 "ssdebug.m"
              hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__ssdebug__STATE_VARIABLE_PredInfo_27_47, &transform_hlds__ssdebug__NewPredId_14, transform_hlds__ssdebug__PredTable0_35, &transform_hlds__ssdebug__PredTable_36);
            }
#line 461 "ssdebug.m"
            {
#line 461 "ssdebug.m"
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__ssdebug__PredTable_36, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_42, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);
            }
#line 429 "ssdebug.m"
            {
#line 429 "ssdebug.m"
              MR_Word base;
#line 429 "ssdebug.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 429 "ssdebug.m"
              *transform_hlds__ssdebug__MaybeNewPredId_8 = base;
#line 429 "ssdebug.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ssdebug__NewPredId_14));
#line 429 "ssdebug.m"
            }
#line 428 "ssdebug.m"
          }
#line 430 "ssdebug.m"
        else
#line 431 "ssdebug.m"
          {
#line 431 "ssdebug.m"
            *transform_hlds__ssdebug__MaybeNewPredId_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 431 "ssdebug.m"
            *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17;
#line 431 "ssdebug.m"
          }
#line 433 "ssdebug.m"
        {
#line 433 "ssdebug.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0], ((MR_Box) (transform_hlds__ssdebug__PredId_7)), ((MR_Box) (*transform_hlds__ssdebug__MaybeNewPredId_8)), transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16);
#line 433 "ssdebug.m"
          return;
        }
#line 425 "ssdebug.m"
      }
#line 424 "ssdebug.m"
  }
#line 418 "ssdebug.m"
}

#line 407 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(
#line 407 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__Case0_9,
#line 407 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__Case_10,
#line 407 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_18,
#line 407 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19,
#line 407 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_20,
#line 407 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_21,
#line 407 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22,
#line 407 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23)
#line 407 "ssdebug.m"
{
#line 411 "ssdebug.m"
  {
#line 411 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 411 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__MainConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 0)));
#line 411 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__OtherConsIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 1)));
#line 411 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Case0_9, (MR_Integer) 2)));
#line 411 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Goal_17;

#line 413 "ssdebug.m"
    {
#line 413 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Goal0_16, &transform_hlds__ssdebug__Goal_17, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_18, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_20, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_21, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_23);
    }
#line 414 "ssdebug.m"
    {
#line 414 "ssdebug.m"
      MR_Word base;
#line 414 "ssdebug.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 414 "ssdebug.m"
      *transform_hlds__ssdebug__Case_10 = base;
#line 414 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__MainConsId_14));
#line 414 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__OtherConsIds_15));
#line 414 "ssdebug.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ssdebug__Goal_17));
#line 414 "ssdebug.m"
    }
#line 411 "ssdebug.m"
  }
#line 407 "ssdebug.m"
}

#line 375 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_3(
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 375 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
#line 375 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
#line 375 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
#line 375 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
#line 375 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8)
#line 375 "ssdebug.m"
{
#line 375 "ssdebug.m"
  {
#line 375 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 375 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv17_Case_10;
#line 375 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv16_STATE_VARIABLE_ProcInfo_19;
#line 375 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv15_STATE_VARIABLE_ProxyMap_21;
#line 375 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv14_STATE_VARIABLE_ModuleInfo_23;

#line 375 "ssdebug.m"
    {
#line 375 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_first_pass_in_case_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv17_Case_10, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv16_STATE_VARIABLE_ProcInfo_19, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv15_STATE_VARIABLE_ProxyMap_21, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv14_STATE_VARIABLE_ModuleInfo_23);
    }
#line 375 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_2 = ((MR_Box) (transform_hlds__ssdebug__conv17_Case_10));
#line 375 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_4 = ((MR_Box) (transform_hlds__ssdebug__conv16_STATE_VARIABLE_ProcInfo_19));
#line 375 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_6 = ((MR_Box) (transform_hlds__ssdebug__conv15_STATE_VARIABLE_ProxyMap_21));
#line 375 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_8 = ((MR_Box) (transform_hlds__ssdebug__conv14_STATE_VARIABLE_ModuleInfo_23));
#line 375 "ssdebug.m"
  }
#line 375 "ssdebug.m"
}

#line 369 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_2(
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 369 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
#line 369 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
#line 369 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
#line 369 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
#line 369 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8)
#line 369 "ssdebug.m"
{
#line 369 "ssdebug.m"
  {
#line 369 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 369 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv10_STATE_VARIABLE_Goal_77;
#line 369 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv9_STATE_VARIABLE_ProcInfo_79;
#line 369 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv8_STATE_VARIABLE_ProxyMap_81;
#line 369 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv7_STATE_VARIABLE_ModuleInfo_83;

#line 369 "ssdebug.m"
    {
#line 369 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv10_STATE_VARIABLE_Goal_77, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv9_STATE_VARIABLE_ProcInfo_79, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv8_STATE_VARIABLE_ProxyMap_81, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv7_STATE_VARIABLE_ModuleInfo_83);
    }
#line 369 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_2 = ((MR_Box) (transform_hlds__ssdebug__conv10_STATE_VARIABLE_Goal_77));
#line 369 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_4 = ((MR_Box) (transform_hlds__ssdebug__conv9_STATE_VARIABLE_ProcInfo_79));
#line 369 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_6 = ((MR_Box) (transform_hlds__ssdebug__conv8_STATE_VARIABLE_ProxyMap_81));
#line 369 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_8 = ((MR_Box) (transform_hlds__ssdebug__conv7_STATE_VARIABLE_ModuleInfo_83));
#line 369 "ssdebug.m"
  }
#line 369 "ssdebug.m"
}

#line 363 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0_1(
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 363 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_2,
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_3,
#line 363 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_4,
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_5,
#line 363 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_6,
#line 363 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_7,
#line 363 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_8)
#line 363 "ssdebug.m"
{
#line 363 "ssdebug.m"
  {
#line 363 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 363 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv3_STATE_VARIABLE_Goal_77;
#line 363 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv2_STATE_VARIABLE_ProcInfo_79;
#line 363 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_81;
#line 363 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_83;

#line 363 "ssdebug.m"
    {
#line 363 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_Goal_77, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_3), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ProcInfo_79, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_5), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_81, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_7), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_83);
    }
#line 363 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_2 = ((MR_Box) (transform_hlds__ssdebug__conv3_STATE_VARIABLE_Goal_77));
#line 363 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_4 = ((MR_Box) (transform_hlds__ssdebug__conv2_STATE_VARIABLE_ProcInfo_79));
#line 363 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_6 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_81));
#line 363 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_8 = ((MR_Box) (transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_83));
#line 363 "ssdebug.m"
  }
#line 363 "ssdebug.m"
}

#line 303 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(
#line 303 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76,
#line 303 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_Goal_77,
#line 303 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78,
#line 303 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79,
#line 303 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80,
#line 303 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81,
#line 303 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82,
#line 303 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83)
#line 303 "ssdebug.m"
{
#line 307 "ssdebug.m"
  {
#line 307 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 307 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76, (MR_Integer) 0)));
#line 307 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76, (MR_Integer) 1)));

#line 332 "ssdebug.m"
#line 332 "ssdebug.m"
    switch (MR_tag((MR_Word) transform_hlds__ssdebug__GoalExpr0_13)) {
#line 332 "ssdebug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 332 "ssdebug.m"
      case (MR_Integer) 0:
#line 380 "ssdebug.m"
        {
#line 380 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__SubGoal0_65 = (MR_Word) MR_body(((MR_Word) transform_hlds__ssdebug__GoalExpr0_13), (MR_Integer) 0);
#line 380 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__SubGoal_66;
#line 380 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__GoalExpr_152;

#line 381 "ssdebug.m"
          {
#line 381 "ssdebug.m"
            transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__SubGoal0_65, &transform_hlds__ssdebug__SubGoal_66, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
          }
#line 383 "ssdebug.m"
          transform_hlds__ssdebug__GoalExpr_152 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__ssdebug__SubGoal_66);
#line 384 "ssdebug.m"
          {
#line 384 "ssdebug.m"
            MR_Word base;
#line 384 "ssdebug.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "ssdebug.m"
            *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
#line 384 "ssdebug.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_152));
#line 384 "ssdebug.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
#line 384 "ssdebug.m"
          }
#line 380 "ssdebug.m"
        }
#line 332 "ssdebug.m"
        break;
#line 332 "ssdebug.m"
      case (MR_Integer) 1:
#line 310 "ssdebug.m"
        {
#line 310 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__Unification0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
#line 310 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)));
#line 310 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
#line 310 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
#line 310 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
#line 329 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__ShroudedPredProcId_27;
#line 312 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__ConsId0_21;
#line 312 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_20_20;
#line 312 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_22_22;
#line 312 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_23_23;
#line 312 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_24_24;
#line 312 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_25_25;
#line 312 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_26_26;

#line 312 "ssdebug.m"
          transform_hlds__ssdebug__succeeded = ((MR_tag((MR_Word) transform_hlds__ssdebug__Unification0_18)) == (MR_mktag((MR_Integer) 0)));
#line 312 "ssdebug.m"
          if (transform_hlds__ssdebug__succeeded)
#line 312 "ssdebug.m"
            {
#line 312 "ssdebug.m"
              transform_hlds__ssdebug__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 0)));
#line 312 "ssdebug.m"
              transform_hlds__ssdebug__ConsId0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 1)));
#line 312 "ssdebug.m"
              transform_hlds__ssdebug__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 2)));
#line 312 "ssdebug.m"
              transform_hlds__ssdebug__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 3)));
#line 312 "ssdebug.m"
              transform_hlds__ssdebug__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 4)));
#line 312 "ssdebug.m"
              transform_hlds__ssdebug__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 5)));
#line 312 "ssdebug.m"
              transform_hlds__ssdebug__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 6)));
#line 313 "ssdebug.m"
              transform_hlds__ssdebug__succeeded = ((((MR_tag((MR_Word) transform_hlds__ssdebug__ConsId0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId0_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 313 "ssdebug.m"
              if (transform_hlds__ssdebug__succeeded)
#line 313 "ssdebug.m"
                transform_hlds__ssdebug__ShroudedPredProcId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId0_21, (MR_Integer) 1)));
#line 312 "ssdebug.m"
            }
#line 329 "ssdebug.m"
          if (transform_hlds__ssdebug__succeeded)
#line 315 "ssdebug.m"
            {
#line 315 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__PredProcId_28;
#line 315 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__PredId_29;
#line 315 "ssdebug.m"
              MR_Integer transform_hlds__ssdebug__ProcId_30;
#line 315 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__MaybeNewPredId_31;

#line 315 "ssdebug.m"
              {
#line 315 "ssdebug.m"
                transform_hlds__ssdebug__PredProcId_28 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__ssdebug__ShroudedPredProcId_27);
              }
#line 316 "ssdebug.m"
              transform_hlds__ssdebug__PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_28, (MR_Integer) 0)));
#line 316 "ssdebug.m"
              transform_hlds__ssdebug__ProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__PredProcId_28, (MR_Integer) 1)));
#line 317 "ssdebug.m"
              {
#line 317 "ssdebug.m"
                transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(transform_hlds__ssdebug__PredId_29, &transform_hlds__ssdebug__MaybeNewPredId_31, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
              }
#line 326 "ssdebug.m"
              if ((transform_hlds__ssdebug__MaybeNewPredId_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
#line 326 "ssdebug.m"
              else
#line 319 "ssdebug.m"
                {
#line 319 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__NewPredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__MaybeNewPredId_31, (MR_Integer) 0)));
#line 319 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__NewPredProcId_33;
#line 319 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__NewShroundPredProcId_34;
#line 319 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__ConsId_35;
#line 319 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__Unification_36;
#line 319 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__GoalExpr_37;
#line 323 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_157_157;
#line 323 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_159_159;
#line 323 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_160_160;
#line 323 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_161_161;
#line 323 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_162_162;
#line 323 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_163_163;
#line 323 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_158_158;
#line 324 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_164_164;
#line 324 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_165_165;
#line 324 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_166_166;
#line 324 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_168_168;
#line 324 "ssdebug.m"
                  MR_Word transform_hlds__ssdebug__V_167_167;

#line 320 "ssdebug.m"
                  {
#line 320 "ssdebug.m"
                    transform_hlds__ssdebug__NewPredProcId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__NewPredProcId_33, 0) = ((MR_Box) (transform_hlds__ssdebug__NewPredId_32));
#line 320 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__NewPredProcId_33, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_30));
#line 320 "ssdebug.m"
                  }
#line 321 "ssdebug.m"
                  {
#line 321 "ssdebug.m"
                    transform_hlds__ssdebug__NewShroundPredProcId_34 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__ssdebug__NewPredProcId_33);
                  }
#line 322 "ssdebug.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 322 "ssdebug.m"
                  {
#line 322 "ssdebug.m"
                    transform_hlds__ssdebug__ConsId_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "ssdebug.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 322 "ssdebug.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 1) = ((MR_Box) (transform_hlds__ssdebug__NewShroundPredProcId_34));
#line 322 "ssdebug.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__ConsId_35, 2) = NULL;
#line 322 "ssdebug.m"
                  }
#line 323 "ssdebug.m"
                  transform_hlds__ssdebug__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 0)));
#line 323 "ssdebug.m"
                  transform_hlds__ssdebug__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 1)));
#line 323 "ssdebug.m"
                  transform_hlds__ssdebug__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 2)));
#line 323 "ssdebug.m"
                  transform_hlds__ssdebug__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 3)));
#line 323 "ssdebug.m"
                  transform_hlds__ssdebug__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 4)));
#line 323 "ssdebug.m"
                  transform_hlds__ssdebug__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 5)));
#line 323 "ssdebug.m"
                  transform_hlds__ssdebug__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification0_18, (MR_Integer) 6)));
#line 323 "ssdebug.m"
                  {
#line 323 "ssdebug.m"
                    transform_hlds__ssdebug__Unification_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 323 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 0) = ((MR_Box) (transform_hlds__ssdebug__V_157_157));
#line 323 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 1) = ((MR_Box) (transform_hlds__ssdebug__ConsId_35));
#line 323 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 2) = ((MR_Box) (transform_hlds__ssdebug__V_159_159));
#line 323 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 3) = ((MR_Box) (transform_hlds__ssdebug__V_160_160));
#line 323 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 4) = ((MR_Box) (transform_hlds__ssdebug__V_161_161));
#line 323 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 5) = ((MR_Box) (transform_hlds__ssdebug__V_162_162));
#line 323 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__Unification_36, 6) = ((MR_Box) (transform_hlds__ssdebug__V_163_163));
#line 323 "ssdebug.m"
                  }
#line 324 "ssdebug.m"
                  transform_hlds__ssdebug__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)));
#line 324 "ssdebug.m"
                  transform_hlds__ssdebug__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
#line 324 "ssdebug.m"
                  transform_hlds__ssdebug__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
#line 324 "ssdebug.m"
                  transform_hlds__ssdebug__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
#line 324 "ssdebug.m"
                  transform_hlds__ssdebug__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
#line 324 "ssdebug.m"
                  {
#line 324 "ssdebug.m"
                    transform_hlds__ssdebug__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 324 "ssdebug.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 0) = ((MR_Box) (transform_hlds__ssdebug__V_164_164));
#line 324 "ssdebug.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 1) = ((MR_Box) (transform_hlds__ssdebug__V_165_165));
#line 324 "ssdebug.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 2) = ((MR_Box) (transform_hlds__ssdebug__V_166_166));
#line 324 "ssdebug.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 3) = ((MR_Box) (transform_hlds__ssdebug__Unification_36));
#line 324 "ssdebug.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__GoalExpr_37, 4) = ((MR_Box) (transform_hlds__ssdebug__V_168_168));
#line 324 "ssdebug.m"
                  }
#line 325 "ssdebug.m"
                  {
#line 325 "ssdebug.m"
                    MR_Word base;
#line 325 "ssdebug.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "ssdebug.m"
                    *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
#line 325 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_37));
#line 325 "ssdebug.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
#line 325 "ssdebug.m"
                  }
#line 319 "ssdebug.m"
                }
#line 315 "ssdebug.m"
            }
#line 329 "ssdebug.m"
          else
#line 330 "ssdebug.m"
            {
#line 330 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
#line 330 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
#line 330 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
#line 330 "ssdebug.m"
            }
#line 310 "ssdebug.m"
          *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78;
#line 310 "ssdebug.m"
        }
#line 332 "ssdebug.m"
        break;
#line 332 "ssdebug.m"
      case (MR_Integer) 2:
#line 334 "ssdebug.m"
        {
#line 334 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
#line 334 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__Builtin_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
#line 334 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
#line 334 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__PredId_142 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)));
#line 334 "ssdebug.m"
          MR_Integer transform_hlds__ssdebug__ProcId_143 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
#line 333 "ssdebug.m"
          MR_Word transform_hlds__ssdebug___SymName_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 5)));

#line 351 "ssdebug.m"
#line 351 "ssdebug.m"
          switch (transform_hlds__ssdebug__Builtin_39) {
#line 351 "ssdebug.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 351 "ssdebug.m"
            case (MR_Integer) 0:
#line 352 "ssdebug.m"
              {
#line 352 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
#line 352 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78;
#line 352 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
#line 352 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
#line 352 "ssdebug.m"
              }
#line 351 "ssdebug.m"
              break;
#line 351 "ssdebug.m"
            case (MR_Integer) 2:
#line 336 "ssdebug.m"
              {
#line 336 "ssdebug.m"
                MR_Word transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124;
#line 336 "ssdebug.m"
                MR_Word transform_hlds__ssdebug__MaybeNewPredId_136;

#line 337 "ssdebug.m"
                {
#line 337 "ssdebug.m"
                  transform_hlds__ssdebug__lookup_proxy_pred_6_p_0(transform_hlds__ssdebug__PredId_142, &transform_hlds__ssdebug__MaybeNewPredId_136, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
                }
#line 347 "ssdebug.m"
                if ((transform_hlds__ssdebug__MaybeNewPredId_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "ssdebug.m"
                  transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
#line 347 "ssdebug.m"
                else
#line 339 "ssdebug.m"
                  {
#line 339 "ssdebug.m"
                    MR_Word transform_hlds__ssdebug__NewPredInfo_42;
#line 339 "ssdebug.m"
                    MR_Word transform_hlds__ssdebug__NewModuleName_43;
#line 339 "ssdebug.m"
                    MR_String transform_hlds__ssdebug__NewPredName_44;
#line 339 "ssdebug.m"
                    MR_Word transform_hlds__ssdebug__NewSymName_45;
#line 339 "ssdebug.m"
                    MR_Word transform_hlds__ssdebug__NewPredId_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__MaybeNewPredId_136, (MR_Integer) 0)));
#line 339 "ssdebug.m"
                    MR_Word transform_hlds__ssdebug__GoalExpr_133;

#line 340 "ssdebug.m"
                    {
#line 340 "ssdebug.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83, transform_hlds__ssdebug__NewPredId_132, &transform_hlds__ssdebug__NewPredInfo_42);
                    }
#line 341 "ssdebug.m"
                    {
#line 341 "ssdebug.m"
                      transform_hlds__ssdebug__NewModuleName_43 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__ssdebug__NewPredInfo_42);
                    }
#line 342 "ssdebug.m"
                    {
#line 342 "ssdebug.m"
                      transform_hlds__ssdebug__NewPredName_44 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__ssdebug__NewPredInfo_42);
                    }
#line 343 "ssdebug.m"
                    {
#line 343 "ssdebug.m"
                      transform_hlds__ssdebug__NewSymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "ssdebug.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__NewSymName_45, 0) = ((MR_Box) (transform_hlds__ssdebug__NewModuleName_43));
#line 343 "ssdebug.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ssdebug__NewSymName_45, 1) = ((MR_Box) (transform_hlds__ssdebug__NewPredName_44));
#line 343 "ssdebug.m"
                    }
#line 344 "ssdebug.m"
                    {
#line 344 "ssdebug.m"
                      transform_hlds__ssdebug__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 344 "ssdebug.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 0) = ((MR_Box) (transform_hlds__ssdebug__NewPredId_132));
#line 344 "ssdebug.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 1) = ((MR_Box) (transform_hlds__ssdebug__ProcId_143));
#line 344 "ssdebug.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 2) = ((MR_Box) (transform_hlds__ssdebug__Args_38));
#line 344 "ssdebug.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 3) = ((MR_Box) (transform_hlds__ssdebug__Builtin_39));
#line 344 "ssdebug.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 4) = ((MR_Box) (transform_hlds__ssdebug__Context_40));
#line 344 "ssdebug.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__ssdebug__GoalExpr_133, 5) = ((MR_Box) (transform_hlds__ssdebug__NewSymName_45));
#line 344 "ssdebug.m"
                    }
#line 346 "ssdebug.m"
                    {
#line 346 "ssdebug.m"
                      transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "ssdebug.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_133));
#line 346 "ssdebug.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
#line 346 "ssdebug.m"
                    }
#line 339 "ssdebug.m"
                  }
#line 350 "ssdebug.m"
                {
#line 350 "ssdebug.m"
                  transform_hlds__ssdebug__insert_context_update_call_5_p_0(*transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83, transform_hlds__ssdebug__STATE_VARIABLE_Goal_124_124, transform_hlds__ssdebug__STATE_VARIABLE_Goal_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79);
#line 350 "ssdebug.m"
                  return;
                }
#line 336 "ssdebug.m"
              }
#line 351 "ssdebug.m"
              break;
#line 351 "ssdebug.m"
            case (MR_Integer) 1:
#line 354 "ssdebug.m"
              {
#line 354 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
#line 354 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78;
#line 354 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
#line 354 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
#line 354 "ssdebug.m"
              }
#line 351 "ssdebug.m"
              break;
#line 351 "ssdebug.m"
          }
#line 334 "ssdebug.m"
        }
#line 332 "ssdebug.m"
        break;
#line 332 "ssdebug.m"
      case (MR_Integer) 3:
#line 332 "ssdebug.m"
#line 332 "ssdebug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 0)))) {
#line 332 "ssdebug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 332 "ssdebug.m"
          case (MR_Integer) 0:
#line 357 "ssdebug.m"
            {
#line 358 "ssdebug.m"
              {
#line 358 "ssdebug.m"
                transform_hlds__ssdebug__insert_context_update_call_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76, transform_hlds__ssdebug__STATE_VARIABLE_Goal_77, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79);
              }
#line 357 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
#line 357 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
#line 357 "ssdebug.m"
            }
#line 332 "ssdebug.m"
            break;
#line 332 "ssdebug.m"
          case (MR_Integer) 1:
#line 360 "ssdebug.m"
            {
#line 360 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = transform_hlds__ssdebug__STATE_VARIABLE_Goal_0_76;
#line 360 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78;
#line 360 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80;
#line 360 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82;
#line 360 "ssdebug.m"
            }
#line 332 "ssdebug.m"
            break;
#line 332 "ssdebug.m"
          case (MR_Integer) 2:
#line 362 "ssdebug.m"
            {
#line 362 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__TypeCtorInfo_177_177 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 362 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__ConjType_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
#line 362 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Goals0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
#line 362 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Goals_60;
#line 362 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__GoalExpr_147;
#line 363 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv6_STATE_VARIABLE_ProcInfo_79;
#line 363 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProxyMap_81;
#line 363 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_83;

#line 363 "ssdebug.m"
              {
#line 363 "ssdebug.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_177_177, transform_hlds__ssdebug__TypeCtorInfo_177_177, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[2], transform_hlds__ssdebug__Goals0_59, &transform_hlds__ssdebug__Goals_60, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv6_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_83);
              }
#line 363 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = ((MR_Word) transform_hlds__ssdebug__conv6_STATE_VARIABLE_ProcInfo_79);
#line 363 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = ((MR_Word) transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProxyMap_81);
#line 363 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_83);
#line 365 "ssdebug.m"
              {
#line 365 "ssdebug.m"
                transform_hlds__ssdebug__GoalExpr_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 365 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_147, 1) = ((MR_Box) (transform_hlds__ssdebug__ConjType_58));
#line 365 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_147, 2) = ((MR_Box) (transform_hlds__ssdebug__Goals_60));
#line 365 "ssdebug.m"
              }
#line 366 "ssdebug.m"
              {
#line 366 "ssdebug.m"
                MR_Word base;
#line 366 "ssdebug.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
#line 366 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_147));
#line 366 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
#line 366 "ssdebug.m"
              }
#line 362 "ssdebug.m"
            }
#line 332 "ssdebug.m"
            break;
#line 332 "ssdebug.m"
          case (MR_Integer) 3:
#line 368 "ssdebug.m"
            {
#line 368 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__TypeCtorInfo_189_189 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 368 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__GoalExpr_148;
#line 368 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Goals0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
#line 368 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Goals_150;
#line 369 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv13_STATE_VARIABLE_ProcInfo_79;
#line 369 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv12_STATE_VARIABLE_ProxyMap_81;
#line 369 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv11_STATE_VARIABLE_ModuleInfo_83;

#line 369 "ssdebug.m"
              {
#line 369 "ssdebug.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_189_189, transform_hlds__ssdebug__TypeCtorInfo_189_189, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[3], transform_hlds__ssdebug__Goals0_149, &transform_hlds__ssdebug__Goals_150, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv13_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv12_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv11_STATE_VARIABLE_ModuleInfo_83);
              }
#line 369 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = ((MR_Word) transform_hlds__ssdebug__conv13_STATE_VARIABLE_ProcInfo_79);
#line 369 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = ((MR_Word) transform_hlds__ssdebug__conv12_STATE_VARIABLE_ProxyMap_81);
#line 369 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) transform_hlds__ssdebug__conv11_STATE_VARIABLE_ModuleInfo_83);
#line 371 "ssdebug.m"
              {
#line 371 "ssdebug.m"
                transform_hlds__ssdebug__GoalExpr_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 371 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_148, 1) = ((MR_Box) (transform_hlds__ssdebug__Goals_150));
#line 371 "ssdebug.m"
              }
#line 372 "ssdebug.m"
              {
#line 372 "ssdebug.m"
                MR_Word base;
#line 372 "ssdebug.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
#line 372 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_148));
#line 372 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
#line 372 "ssdebug.m"
              }
#line 368 "ssdebug.m"
            }
#line 332 "ssdebug.m"
            break;
#line 332 "ssdebug.m"
          case (MR_Integer) 4:
#line 374 "ssdebug.m"
            {
#line 374 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__TypeCtorInfo_201_201 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 374 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
#line 374 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__CanFail_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
#line 374 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Cases0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
#line 374 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Cases_64;
#line 374 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__GoalExpr_151;
#line 375 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv20_STATE_VARIABLE_ProcInfo_79;
#line 375 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv19_STATE_VARIABLE_ProxyMap_81;
#line 375 "ssdebug.m"
              MR_Box transform_hlds__ssdebug__conv18_STATE_VARIABLE_ModuleInfo_83;

#line 375 "ssdebug.m"
              {
#line 375 "ssdebug.m"
                mercury__list__map_foldl3_9_p_1(transform_hlds__ssdebug__TypeCtorInfo_201_201, transform_hlds__ssdebug__TypeCtorInfo_201_201, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[4], transform_hlds__ssdebug__Cases0_63, &transform_hlds__ssdebug__Cases_64, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78)), &transform_hlds__ssdebug__conv20_STATE_VARIABLE_ProcInfo_79, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80)), &transform_hlds__ssdebug__conv19_STATE_VARIABLE_ProxyMap_81, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82)), &transform_hlds__ssdebug__conv18_STATE_VARIABLE_ModuleInfo_83);
              }
#line 375 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79 = ((MR_Word) transform_hlds__ssdebug__conv20_STATE_VARIABLE_ProcInfo_79);
#line 375 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81 = ((MR_Word) transform_hlds__ssdebug__conv19_STATE_VARIABLE_ProxyMap_81);
#line 375 "ssdebug.m"
              *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83 = ((MR_Word) transform_hlds__ssdebug__conv18_STATE_VARIABLE_ModuleInfo_83);
#line 377 "ssdebug.m"
              {
#line 377 "ssdebug.m"
                transform_hlds__ssdebug__GoalExpr_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 377 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 377 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_151, 1) = ((MR_Box) (transform_hlds__ssdebug__Var_61));
#line 377 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_151, 2) = ((MR_Box) (transform_hlds__ssdebug__CanFail_62));
#line 377 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_151, 3) = ((MR_Box) (transform_hlds__ssdebug__Cases_64));
#line 377 "ssdebug.m"
              }
#line 378 "ssdebug.m"
              {
#line 378 "ssdebug.m"
                MR_Word base;
#line 378 "ssdebug.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 378 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
#line 378 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_151));
#line 378 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
#line 378 "ssdebug.m"
              }
#line 374 "ssdebug.m"
            }
#line 332 "ssdebug.m"
            break;
#line 332 "ssdebug.m"
          case (MR_Integer) 5:
#line 386 "ssdebug.m"
            {
#line 386 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Reason_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
#line 386 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__GoalExpr_153;
#line 386 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__SubGoal0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
#line 386 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__SubGoal_155;

#line 387 "ssdebug.m"
              {
#line 387 "ssdebug.m"
                transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__SubGoal0_154, &transform_hlds__ssdebug__SubGoal_155, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
              }
#line 389 "ssdebug.m"
              {
#line 389 "ssdebug.m"
                transform_hlds__ssdebug__GoalExpr_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 389 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 389 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_153, 1) = ((MR_Box) (transform_hlds__ssdebug__Reason_67));
#line 389 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_153, 2) = ((MR_Box) (transform_hlds__ssdebug__SubGoal_155));
#line 389 "ssdebug.m"
              }
#line 390 "ssdebug.m"
              {
#line 390 "ssdebug.m"
                MR_Word base;
#line 390 "ssdebug.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
#line 390 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_153));
#line 390 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
#line 390 "ssdebug.m"
              }
#line 386 "ssdebug.m"
            }
#line 332 "ssdebug.m"
            break;
#line 332 "ssdebug.m"
          case (MR_Integer) 6:
#line 392 "ssdebug.m"
            {
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Vars_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 1)));
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Cond0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 2)));
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Then0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 3)));
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Else0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr0_13, (MR_Integer) 4)));
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Cond_72;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Then_73;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__Else_74;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_87_87;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_88_88;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_89_89;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_90_90;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_91_91;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92;
#line 392 "ssdebug.m"
              MR_Word transform_hlds__ssdebug__GoalExpr_156;

#line 393 "ssdebug.m"
              {
#line 393 "ssdebug.m"
                transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Cond0_69, &transform_hlds__ssdebug__Cond_72, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_0_78, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_87_87, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_80, &transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_88_88, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_82, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_89_89);
              }
#line 395 "ssdebug.m"
              {
#line 395 "ssdebug.m"
                transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Then0_70, &transform_hlds__ssdebug__Then_73, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_87_87, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_90_90, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_88_88, &transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_91_91, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_89_89, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92);
              }
#line 397 "ssdebug.m"
              {
#line 397 "ssdebug.m"
                transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Else0_71, &transform_hlds__ssdebug__Else_74, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_90_90, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_79, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_91_91, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_81, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_92_92, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_83);
              }
#line 399 "ssdebug.m"
              {
#line 399 "ssdebug.m"
                transform_hlds__ssdebug__GoalExpr_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 399 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 399 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 1) = ((MR_Box) (transform_hlds__ssdebug__Vars_68));
#line 399 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 2) = ((MR_Box) (transform_hlds__ssdebug__Cond_72));
#line 399 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 3) = ((MR_Box) (transform_hlds__ssdebug__Then_73));
#line 399 "ssdebug.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__GoalExpr_156, 4) = ((MR_Box) (transform_hlds__ssdebug__Else_74));
#line 399 "ssdebug.m"
              }
#line 400 "ssdebug.m"
              {
#line 400 "ssdebug.m"
                MR_Word base;
#line 400 "ssdebug.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "ssdebug.m"
                *transform_hlds__ssdebug__STATE_VARIABLE_Goal_77 = base;
#line 400 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ssdebug__GoalExpr_156));
#line 400 "ssdebug.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ssdebug__GoalInfo0_14));
#line 400 "ssdebug.m"
              }
#line 392 "ssdebug.m"
            }
#line 332 "ssdebug.m"
            break;
#line 332 "ssdebug.m"
          case (MR_Integer) 7:
#line 402 "ssdebug.m"
            {
#line 404 "ssdebug.m"
              {
#line 404 "ssdebug.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ssdebug", (MR_String) "predicate \140transform_hlds.ssdebug.ssdebug_first_pass_in_goal\'/8", (MR_String) "unexpected shorthand");
#line 404 "ssdebug.m"
                return;
              }
#line 402 "ssdebug.m"
            }
#line 332 "ssdebug.m"
            break;
#line 332 "ssdebug.m"
        }
#line 332 "ssdebug.m"
        break;
#line 332 "ssdebug.m"
    }
#line 307 "ssdebug.m"
  }
#line 303 "ssdebug.m"
}

#line 288 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(
#line 288 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_7,
#line 288 "ssdebug.m"
  MR_Integer transform_hlds__ssdebug__ProcId_8,
#line 288 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15,
#line 288 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16,
#line 288 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17,
#line 288 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18)
#line 288 "ssdebug.m"
{
#line 294 "ssdebug.m"
  {
#line 294 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 294 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__PredInfo_12;
#line 294 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Goal0_13;
#line 294 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Goal_14;
#line 294 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19;
#line 294 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20;
#line 294 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22;
#line 294 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23;

#line 293 "ssdebug.m"
    {
#line 293 "ssdebug.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, &transform_hlds__ssdebug__PredInfo_12, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19);
    }
#line 295 "ssdebug.m"
    {
#line 295 "ssdebug.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19, &transform_hlds__ssdebug__Goal0_13);
    }
#line 296 "ssdebug.m"
    {
#line 296 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_first_pass_in_goal_8_p_0(transform_hlds__ssdebug__Goal0_13, &transform_hlds__ssdebug__Goal_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_19_19, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_15, transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_17, &transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 298 "ssdebug.m"
    {
#line 298 "ssdebug.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ssdebug__Goal_14, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23);
    }
#line 299 "ssdebug.m"
    {
#line 299 "ssdebug.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__ssdebug__PredId_7, transform_hlds__ssdebug__ProcId_8, transform_hlds__ssdebug__PredInfo_12, transform_hlds__ssdebug__STATE_VARIABLE_ProcInfo_23_23, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_22_22, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_18);
#line 299 "ssdebug.m"
      return;
    }
#line 294 "ssdebug.m"
  }
#line 288 "ssdebug.m"
}

#line 285 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1(
#line 285 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 285 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 285 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 285 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 285 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 285 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
#line 285 "ssdebug.m"
{
#line 285 "ssdebug.m"
  {
#line 285 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 285 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_16;
#line 285 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 285 "ssdebug.m"
    {
#line 285 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_first_pass_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_16, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 285 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_16));
#line 285 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 285 "ssdebug.m"
  }
#line 285 "ssdebug.m"
}

#line 279 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(
#line 279 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__PredId_6,
#line 279 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_11,
#line 279 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_12,
#line 279 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13,
#line 279 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_14)
#line 279 "ssdebug.m"
{
#line 282 "ssdebug.m"
  {
#line 282 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 282 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__PredInfo_9;
#line 282 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__ProcIds_10;
#line 282 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__V_15_15;
#line 285 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12;
#line 285 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14;

#line 283 "ssdebug.m"
    {
#line 283 "ssdebug.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__ssdebug__PredId_6, &transform_hlds__ssdebug__PredInfo_9);
    }
#line 284 "ssdebug.m"
    {
#line 284 "ssdebug.m"
      transform_hlds__ssdebug__ProcIds_10 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(transform_hlds__ssdebug__PredInfo_9);
    }
#line 285 "ssdebug.m"
    {
#line 285 "ssdebug.m"
      transform_hlds__ssdebug__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[1]));
#line 285 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0_1));
#line 285 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "ssdebug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 3) = ((MR_Box) (transform_hlds__ssdebug__PredId_6));
#line 285 "ssdebug.m"
    }
#line 285 "ssdebug.m"
    {
#line 285 "ssdebug.m"
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__ssdebug__V_15_15, transform_hlds__ssdebug__ProcIds_10, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_0_11)), &transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_13)), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14);
    }
#line 285 "ssdebug.m"
    *transform_hlds__ssdebug__STATE_VARIABLE_ProxyMap_12 = ((MR_Word) transform_hlds__ssdebug__conv3_STATE_VARIABLE_ProxyMap_12);
#line 285 "ssdebug.m"
    *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_14);
#line 282 "ssdebug.m"
  }
#line 279 "ssdebug.m"
}

#line 248 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_3(
#line 248 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 248 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 248 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 248 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 248 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 248 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
#line 248 "ssdebug.m"
{
#line 248 "ssdebug.m"
  {
#line 248 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 248 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv7_STATE_VARIABLE_ProcInfo_15;
#line 248 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv6_STATE_VARIABLE_ModuleInfo_17;

#line 248 "ssdebug.m"
    {
#line 248 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv7_STATE_VARIABLE_ProcInfo_15, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv6_STATE_VARIABLE_ModuleInfo_17);
    }
#line 248 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv7_STATE_VARIABLE_ProcInfo_15));
#line 248 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv6_STATE_VARIABLE_ModuleInfo_17));
#line 248 "ssdebug.m"
  }
#line 248 "ssdebug.m"
}

#line 254 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_2(
#line 254 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 254 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 254 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 254 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 254 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 254 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
#line 254 "ssdebug.m"
{
#line 254 "ssdebug.m"
  {
#line 254 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 254 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProcInfo_15;
#line 254 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_17;

#line 254 "ssdebug.m"
    {
#line 254 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_process_proc_if_needed_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProcInfo_15, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_17);
    }
#line 254 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv5_STATE_VARIABLE_ProcInfo_15));
#line 254 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv4_STATE_VARIABLE_ModuleInfo_17));
#line 254 "ssdebug.m"
  }
#line 254 "ssdebug.m"
}

#line 276 "ssdebug.m"
static void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_1(
#line 276 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__closure_arg,
#line 276 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_1,
#line 276 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_2,
#line 276 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_3,
#line 276 "ssdebug.m"
  MR_Box transform_hlds__ssdebug__wrapper_arg_4,
#line 276 "ssdebug.m"
  MR_Box * transform_hlds__ssdebug__wrapper_arg_5)
#line 276 "ssdebug.m"
{
#line 276 "ssdebug.m"
  {
#line 276 "ssdebug.m"
    MR_Box transform_hlds__ssdebug__closure = transform_hlds__ssdebug__closure_arg;
#line 276 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_12;
#line 276 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_14;

#line 276 "ssdebug.m"
    {
#line 276 "ssdebug.m"
      transform_hlds__ssdebug__ssdebug_first_pass_in_pred_5_p_0(((MR_Word) transform_hlds__ssdebug__wrapper_arg_1), ((MR_Word) transform_hlds__ssdebug__wrapper_arg_2), &transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_12, ((MR_Word) transform_hlds__ssdebug__wrapper_arg_4), &transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_14);
    }
#line 276 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_3 = ((MR_Box) (transform_hlds__ssdebug__conv1_STATE_VARIABLE_ProxyMap_12));
#line 276 "ssdebug.m"
    *transform_hlds__ssdebug__wrapper_arg_5 = ((MR_Box) (transform_hlds__ssdebug__conv0_STATE_VARIABLE_ModuleInfo_14));
#line 276 "ssdebug.m"
  }
#line 276 "ssdebug.m"
}

#line 194 "ssdebug.m"
void MR_CALL 
transform_hlds__ssdebug__ssdebug_transform_module_4_p_0(
#line 194 "ssdebug.m"
  MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8,
#line 194 "ssdebug.m"
  MR_Word * transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_9)
#line 194 "ssdebug.m"
{
#line 238 "ssdebug.m"
  {
#line 238 "ssdebug.m"
    MR_bool transform_hlds__ssdebug__succeeded;
#line 238 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__SSTraceLevel_7;
#line 238 "ssdebug.m"
    MR_Word transform_hlds__ssdebug__Globals_31;

#line 262 "ssdebug.m"
    {
#line 262 "ssdebug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__ssdebug__Globals_31);
    }
#line 263 "ssdebug.m"
    {
#line 263 "ssdebug.m"
      libs__globals__get_ssdb_trace_level_2_p_0(transform_hlds__ssdebug__Globals_31, &transform_hlds__ssdebug__SSTraceLevel_7);
    }
#line 242 "ssdebug.m"
#line 242 "ssdebug.m"
    switch (transform_hlds__ssdebug__SSTraceLevel_7) {
#line 242 "ssdebug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 242 "ssdebug.m"
      case (MR_Integer) 2:
#line 251 "ssdebug.m"
        {
#line 251 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__TypeCtorInfo_16_45;
#line 251 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_12_12;
#line 251 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_13_13;
#line 251 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_15_15;
#line 251 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__PredIds_35;
#line 251 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_38_38;
#line 276 "ssdebug.m"
          MR_Word transform_hlds__ssdebug___ProxyMap_36;
#line 276 "ssdebug.m"
          MR_Box transform_hlds__ssdebug__conv3__ProxyMap_36;
#line 276 "ssdebug.m"
          MR_Box transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_12_12;

#line 275 "ssdebug.m"
          {
#line 275 "ssdebug.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__ssdebug__PredIds_35);
          }
#line 9774 "transform_hlds.ssdebug.c"
          transform_hlds__ssdebug__TypeCtorInfo_16_45 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 277 "ssdebug.m"
          {
#line 277 "ssdebug.m"
            transform_hlds__ssdebug__V_38_38 = mercury__map__init_0_f_0(transform_hlds__ssdebug__TypeCtorInfo_16_45, (MR_Word) &transform_hlds__ssdebug_scalar_common_1[0]);
          }
#line 276 "ssdebug.m"
          {
#line 276 "ssdebug.m"
            mercury__list__foldl2_6_p_0(transform_hlds__ssdebug__TypeCtorInfo_16_45, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ssdebug_scalar_common_2[1], transform_hlds__ssdebug__PredIds_35, ((MR_Box) (transform_hlds__ssdebug__V_38_38)), &transform_hlds__ssdebug__conv3__ProxyMap_36, ((MR_Box) (transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_12_12);
          }
#line 276 "ssdebug.m"
          transform_hlds__ssdebug___ProxyMap_36 = ((MR_Word) transform_hlds__ssdebug__conv3__ProxyMap_36);
#line 276 "ssdebug.m"
          transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) transform_hlds__ssdebug__conv2_STATE_VARIABLE_ModuleInfo_12_12);
#line 254 "ssdebug.m"
          {
#line 254 "ssdebug.m"
            transform_hlds__ssdebug__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 254 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[0]));
#line 254 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_2));
#line 254 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 254 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_15_15, 3) = ((MR_Box) (transform_hlds__ssdebug__SSTraceLevel_7));
#line 254 "ssdebug.m"
          }
#line 254 "ssdebug.m"
          {
#line 254 "ssdebug.m"
            transform_hlds__ssdebug__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 254 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_13_13, 1) = ((MR_Box) (transform_hlds__ssdebug__V_15_15));
#line 254 "ssdebug.m"
          }
#line 253 "ssdebug.m"
          {
#line 253 "ssdebug.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__ssdebug__V_13_13, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_12_12, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_9);
#line 253 "ssdebug.m"
            return;
          }
#line 251 "ssdebug.m"
        }
#line 242 "ssdebug.m"
        break;
#line 242 "ssdebug.m"
      case (MR_Integer) 0:
#line 241 "ssdebug.m"
        *transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8;
#line 242 "ssdebug.m"
        break;
#line 242 "ssdebug.m"
      case (MR_Integer) 1:
#line 243 "ssdebug.m"
        {
#line 243 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_16_16;
#line 243 "ssdebug.m"
          MR_Word transform_hlds__ssdebug__V_18_18;

#line 248 "ssdebug.m"
          {
#line 248 "ssdebug.m"
            transform_hlds__ssdebug__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 248 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_18_18, 0) = ((MR_Box) (&transform_hlds__ssdebug_scalar_common_4[0]));
#line 248 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_18_18, 1) = ((MR_Box) (transform_hlds__ssdebug__ssdebug_transform_module_4_p_0_3));
#line 248 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 248 "ssdebug.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ssdebug__V_18_18, 3) = ((MR_Box) (transform_hlds__ssdebug__SSTraceLevel_7));
#line 248 "ssdebug.m"
          }
#line 248 "ssdebug.m"
          {
#line 248 "ssdebug.m"
            transform_hlds__ssdebug__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 248 "ssdebug.m"
            MR_hl_field(MR_mktag(3), transform_hlds__ssdebug__V_16_16, 1) = ((MR_Box) (transform_hlds__ssdebug__V_18_18));
#line 248 "ssdebug.m"
          }
#line 247 "ssdebug.m"
          {
#line 247 "ssdebug.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0(transform_hlds__ssdebug__V_16_16, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__ssdebug__STATE_VARIABLE_ModuleInfo_9);
#line 247 "ssdebug.m"
            return;
          }
#line 243 "ssdebug.m"
        }
#line 242 "ssdebug.m"
        break;
#line 242 "ssdebug.m"
    }
#line 238 "ssdebug.m"
  }
#line 194 "ssdebug.m"
}

void mercury__transform_hlds__ssdebug__init(void)
{
}

void mercury__transform_hlds__ssdebug__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ssdebug__transform_hlds__ssdebug__type_ctor_info_proxy_map_0);
}

void mercury__transform_hlds__ssdebug__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ssdebug. */
