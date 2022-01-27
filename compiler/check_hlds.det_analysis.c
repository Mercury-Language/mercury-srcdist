/*
** Automatically generated from `det_analysis.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module check_hlds.det_analysis. */
/* :- implementation. */

/*
INIT mercury__check_hlds__det_analysis__init
ENDINIT
*/

#include "check_hlds.det_analysis.mih"


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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.format_call.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1540 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s {
#line 1553 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded;
#line 1553 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338;
#line 1553 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59;
#line 1553 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63;
#line 1681 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0;
#line 1681 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71;
#line 1540 "det_analysis.m"
};

#line 451 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s {
#line 458 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded;
#line 547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45;
#line 550 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0;
#line 550 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48;
#line 550 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65;
#line 550 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66;
#line 550 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70;
#line 550 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73;
#line 550 "det_analysis.m"
  MR_Box check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65;
#line 451 "det_analysis.m"
};

#line 82 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s {
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9;
#line 82 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10;
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13;
#line 258 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded;
#line 258 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_52;
#line 360 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0;
#line 360 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_121_121;
#line 360 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_157_157;
#line 359 "det_analysis.m"
  MR_Box check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_157_157;
#line 82 "det_analysis.m"
};


#line 207 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0;

#line 210 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "check_hlds.det_analysis.c"
static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2];

#line 225 "check_hlds.det_analysis.c"
static const MR_DuFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0;

#line 228 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1];

#line 231 "check_hlds.det_analysis.c"
static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1];

#line 234 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0[1];

#line 237 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0[1];

#line 240 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0;

#line 243 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1;

#line 246 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0[2];

#line 249 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2];

#line 252 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2];

#line 255 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
#line 258 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 260 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2);

#line 263 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
#line 266 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 268 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 270 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3);

#line 273 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
#line 276 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 278 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2);

#line 281 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
#line 284 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 286 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 288 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3);

#line 1136 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Attributes_12,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_13,
#line 1136 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_14,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1136 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1136 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44,
#line 1136 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);

#line 1496 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1496__1_2_p_0(
#line 1496 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalFailingContexts_18,
#line 1496 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_52);

#line 359 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
#line 359 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 359 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2);

#line 2127 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
#line 2127 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2127 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 2127 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16);

#line 2079 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4,
#line 2079 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6,
#line 2079 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8,
#line 2079 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9);

#line 2063 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3,
#line 2063 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4,
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5,
#line 2063 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6,
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7,
#line 2063 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8);

#line 2023 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
#line 2023 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2023 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2);

#line 2002 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
#line 2002 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2002 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2);

#line 1992 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
#line 1992 "det_analysis.m"
  MR_Word check_hlds__det_analysis__DetInfo_3,
#line 1992 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Type_4);

#line 1865 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_12,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ExaminesRepresentation_13,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CanFail_14,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_15,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsA_16,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsB_17,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalContext_19,
#line 1865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__NumSolns_20,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41,
#line 1865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);

#line 1845 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
#line 1845 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1845 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ModuleInfo_9,
#line 1845 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredInfo_10,
#line 1845 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15,
#line 1845 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__STATE_VARIABLE_ProcId_16);

#line 1707 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
#line 1707 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1707 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1666 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
#line 1666 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1666 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1652 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
#line 1652 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1652 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1649 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
#line 1649 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1649 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1611 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
#line 1611 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1611 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1681 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
#line 1681 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1681 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
#line 1681 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1681 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
#line 1681 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1540 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Reason_13,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_14,
#line 1540 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_15,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_17,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_18,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_19,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20,
#line 1540 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_21,
#line 1540 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_22,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107,
#line 1540 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);

#line 1516 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1516 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7,
#line 1516 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_CanFail_8,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9,
#line 1516 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11,
#line 1516 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12);

#line 1496 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
#line 1496 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg);

#line 1480 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1480 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_12,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15,
#line 1480 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_16,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25,
#line 1480 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26);

#line 1439 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MainGoal0_12,
#line 1439 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__MainGoal_13,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__OrElseGoals0_14,
#line 1439 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__OrElseGoals_15,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_16,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19,
#line 1439 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_20,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30,
#line 1439 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31);

#line 1402 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1402 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_13,
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14,
#line 1402 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1402 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24,
#line 1402 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25);

#line 1314 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cond0_15,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cond_16,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Then0_17,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Then_18,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Else0_19,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Else_20,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_21,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_22,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_23,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_25,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_26,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49);

#line 1225 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__LHS_14,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RHS0_15,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Unify_16,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__UnifyContext_17,
#line 1225 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__RHS_18,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_19,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_20,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_21,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_22,
#line 1225 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 1225 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85,
#line 1225 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86);

#line 1091 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GenericCall_10,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CallDetism_11,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28,
#line 1091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29);

#line 1015 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_12,
#line 1015 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId0_13,
#line 1015 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__ProcId_14,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Args_15,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1015 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1015 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39,
#line 1015 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40);

#line 969 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 969 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__9_9,
#line 969 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_10,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11,
#line 969 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13,
#line 969 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14);

#line 920 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_14,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SwitchCanFail_15,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cases0_16,
#line 920 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cases_17,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_19,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_20,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_21,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22,
#line 920 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 920 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37,
#line 920 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38);

#line 864 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 864 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 864 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_9,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10,
#line 864 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12,
#line 864 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13);

#line 841 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 841 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 841 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 841 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
#line 841 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);

#line 814 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 814 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 814 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 814 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 814 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);

#line 766 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 766 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 766 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 766 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32,
#line 766 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33);

#line 717 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 717 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 717 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 717 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 717 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);

#line 595 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalExpr0_12,
#line 595 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalExpr_13,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 595 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 595 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78,
#line 595 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);

#line 550 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(
#line 550 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 550 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3(
#line 550 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 550 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(
#line 550 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 550 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(
#line 550 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 451 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_12,
#line 451 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_13,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_14,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_16,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__AddPruning_18,
#line 451 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 451 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57,
#line 451 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58);

#line 412 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
#line 412 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 412 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_7,
#line 412 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_8,
#line 412 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Context_9);

#line 213 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_2,
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3,
#line 213 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4,
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5,
#line 213 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_6,
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7,
#line 213 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Changed_8);

#line 183 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
#line 183 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13,
#line 183 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14,
#line 183 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ProcList_7,
#line 183 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_8,
#line 183 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Specs_9);

#line 360 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
#line 360 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 359 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
#line 359 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 360 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
#line 360 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 360 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
#line 360 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 147 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
#line 147 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 147 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 147 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 147 "det_analysis.m"
  MR_Box * check_hlds__det_analysis__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[125][2];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[9][1];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_4[3][6];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_5[1][3];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[125][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with I/O state arguments."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: invalid determinism for a predicate"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "det, cc_multi and erroneous."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Valid determinisms are "))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "occurs in a context which requires all solutions."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for a procedure without a determinism declaration."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: \140:- pragma foreign_proc(...)\'"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "to erroneous procedures."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This attribute cannot be applied"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "foreign clauses that have a"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has determinism erroneous but also has"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should be det or cc_multi."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is nested inside another."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "\140promise_equivalent_solution_sets\' scope"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "\140promise_equivalent_solution_sets\' scope."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This is the outer"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "a \140promise_equivalent_solution_sets\' scope."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "this \140arbitrary\' scope is not nested inside"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This is the outer "))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[43])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[14])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "you must do it explicitly.)"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "implicitly. (If that\'s really what you want,"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "representations, but I\'m not going to do that"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "backtracking over all possible"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "a solution to this unification would require"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "representation. Figuring out whether there is"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "might depend on the choice of concrete"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of this type. The success of this unification"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "representation for each abstract value"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "there is more than one possible concrete"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "equality predicate, I must presume that"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Since the type has a user-defined"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "solutions to this unification would require"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[61])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "representation. Finding all possible"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of this type. The results of this unification"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for a procedure that has a determinism of"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The current implementation supports only single-solution non-failing parallel conjunctions."))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: higher-order call to predicate with"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: atomic goal has determinism"))
  },
  /* row 103 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "this \140arbitrary\' scope and the"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "\140promise_equivalent_solution_sets\' scope"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "it is nested inside overlap on"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "goal lists"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: trace goal has determinism"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In switch on variable"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "unification for non-canonical type"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not guaranteed to succeed."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\140will_not_throw_exception\' attribute."))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[13])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\140:- pragma foreign_export\' declaration"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[41])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[45])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[50])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[52])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[77])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[88])))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[0])),
    ((MR_Box) (check_hlds__det_analysis__determinism_pass_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0)),
    ((MR_Box) (&check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1861 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0
  }
};

#line 1869 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1877 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1885 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1893 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1901 "check_hlds.det_analysis.c"
static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1907 "check_hlds.det_analysis.c"
static const MR_DuFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0 = {
  (MR_String) "pess_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1922 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

#line 1927 "check_hlds.det_analysis.c"
static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0
  }
};

#line 1936 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

#line 1941 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0[1] = {
  (MR_Integer) 0
};

#line 1946 "check_hlds.det_analysis.c"
const MR_TypeCtorInfo_Struct check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_pess_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_analysis____Unify____pess_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____pess_info_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "pess_info",
  {
    check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0
  },
  {
    check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0
};

#line 1967 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0 = {
  (MR_String) "all_solns",
  (MR_Integer) 0
};

#line 1973 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1 = {
  (MR_String) "first_soln",
  (MR_Integer) 1
};

#line 1979 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0[2] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

#line 1985 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

#line 1991 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1997 "check_hlds.det_analysis.c"
const MR_TypeCtorInfo_Struct check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_soln_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_analysis____Unify____soln_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_analysis____Compare____soln_context_0_0_10001)),
  (MR_String) "check_hlds.det_analysis",
  (MR_String) "soln_context",
  {
    check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0
  },
  {
    check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0
};

#line 2018 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
#line 2021 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 2023 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2)
#line 2025 "check_hlds.det_analysis.c"
{
#line 2027 "check_hlds.det_analysis.c"
  {
#line 2029 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2032 "check_hlds.det_analysis.c"
    {
#line 2034 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis____Unify____pess_info_0_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2));
    }
#line 2037 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2039 "check_hlds.det_analysis.c"
  }
#line 2041 "check_hlds.det_analysis.c"
}

#line 2044 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
#line 2047 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 2049 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 2051 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3)
#line 2053 "check_hlds.det_analysis.c"
{
#line 2055 "check_hlds.det_analysis.c"
  {
#line 2057 "check_hlds.det_analysis.c"
    MR_Word check_hlds__det_analysis__conv0_HeadVar__1_1;

#line 2060 "check_hlds.det_analysis.c"
    {
#line 2062 "check_hlds.det_analysis.c"
      check_hlds__det_analysis____Compare____pess_info_0_0(&check_hlds__det_analysis__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), ((MR_Word) check_hlds__det_analysis__wrapper_arg_3));
    }
#line 2065 "check_hlds.det_analysis.c"
    *check_hlds__det_analysis__wrapper_arg_1 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__1_1));
#line 2067 "check_hlds.det_analysis.c"
  }
#line 2069 "check_hlds.det_analysis.c"
}

#line 2072 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
#line 2075 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 2077 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2)
#line 2079 "check_hlds.det_analysis.c"
{
#line 2081 "check_hlds.det_analysis.c"
  {
#line 2083 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2086 "check_hlds.det_analysis.c"
    {
#line 2088 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis____Unify____soln_context_0_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2));
    }
#line 2091 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2093 "check_hlds.det_analysis.c"
  }
#line 2095 "check_hlds.det_analysis.c"
}

#line 2098 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
#line 2101 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 2103 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 2105 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3)
#line 2107 "check_hlds.det_analysis.c"
{
#line 2109 "check_hlds.det_analysis.c"
  {
#line 2111 "check_hlds.det_analysis.c"
    MR_Word check_hlds__det_analysis__conv0_HeadVar__1_1;

#line 2114 "check_hlds.det_analysis.c"
    {
#line 2116 "check_hlds.det_analysis.c"
      check_hlds__det_analysis____Compare____soln_context_0_0(&check_hlds__det_analysis__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), ((MR_Word) check_hlds__det_analysis__wrapper_arg_3));
    }
#line 2119 "check_hlds.det_analysis.c"
    *check_hlds__det_analysis__wrapper_arg_1 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__1_1));
#line 2121 "check_hlds.det_analysis.c"
  }
#line 2123 "check_hlds.det_analysis.c"
}

#line 1136 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Attributes_12,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_13,
#line 1136 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_14,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1136 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1136 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1136 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44,
#line 1136 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45)
#line 1136 "det_analysis.m"
{
#line 1144 "det_analysis.m"
  {
#line 1144 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_22;
#line 1144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo_24;
#line 1144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDetism_25;
#line 1148 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_23_23;

#line 1147 "det_analysis.m"
    {
#line 1147 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, &check_hlds__det_analysis__ModuleInfo_22);
    }
#line 1148 "det_analysis.m"
    {
#line 1148 "det_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_analysis__ModuleInfo_22, check_hlds__det_analysis__PredId_13, check_hlds__det_analysis__ProcId_14, &check_hlds__det_analysis__V_23_23, &check_hlds__det_analysis__ProcInfo_24);
    }
#line 1149 "det_analysis.m"
    {
#line 1149 "det_analysis.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__MaybeDetism_25);
    }
#line 1208 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDetism_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "det_analysis.m"
      {
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TypeCtorInfo_137_137;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcPieces_42;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_43;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_47_47;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_52_52;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_67_67;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_68_68;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_69_69;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_70_70;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_132;
#line 1209 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_133;

#line 1210 "det_analysis.m"
        {
#line 1210 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__Context_133);
        }
#line 1211 "det_analysis.m"
        {
#line 1211 "det_analysis.m"
          check_hlds__det_analysis__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1211 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1211 "det_analysis.m"
        }
#line 1211 "det_analysis.m"
        {
#line 1211 "det_analysis.m"
          check_hlds__det_analysis__ProcPieces_42 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 1, check_hlds__det_analysis__V_47_47);
        }
#line 2226 "check_hlds.det_analysis.c"
        check_hlds__det_analysis__TypeCtorInfo_137_137 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1213 "det_analysis.m"
        {
#line 1213 "det_analysis.m"
          check_hlds__det_analysis__V_52_52 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_137_137, check_hlds__det_analysis__ProcPieces_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[22]));
        }
#line 1213 "det_analysis.m"
        {
#line 1213 "det_analysis.m"
          check_hlds__det_analysis__Pieces_43 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_137_137, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[90]), check_hlds__det_analysis__V_52_52);
        }
#line 1217 "det_analysis.m"
        {
#line 1217 "det_analysis.m"
          check_hlds__det_analysis__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_70_70, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_43));
#line 1217 "det_analysis.m"
        }
#line 1217 "det_analysis.m"
        {
#line 1217 "det_analysis.m"
          check_hlds__det_analysis__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_69_69, 0) = ((MR_Box) (check_hlds__det_analysis__V_70_70));
#line 1217 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "det_analysis.m"
        }
#line 1217 "det_analysis.m"
        {
#line 1217 "det_analysis.m"
          check_hlds__det_analysis__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_68_68, 0) = ((MR_Box) (check_hlds__det_analysis__Context_133));
#line 1217 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_68_68, 1) = ((MR_Box) (check_hlds__det_analysis__V_69_69));
#line 1217 "det_analysis.m"
        }
#line 1216 "det_analysis.m"
        {
#line 1216 "det_analysis.m"
          check_hlds__det_analysis__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_67_67, 0) = ((MR_Box) (check_hlds__det_analysis__V_68_68));
#line 1216 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1216 "det_analysis.m"
        }
#line 1216 "det_analysis.m"
        {
#line 1216 "det_analysis.m"
          check_hlds__det_analysis__Spec_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1216 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1216 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_132, 2) = ((MR_Box) (check_hlds__det_analysis__V_67_67));
#line 1216 "det_analysis.m"
        }
#line 1218 "det_analysis.m"
        {
#line 1218 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_132, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);
        }
#line 1219 "det_analysis.m"
        *check_hlds__det_analysis__Detism_19 = (MR_Integer) 6;
#line 1220 "det_analysis.m"
        *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "det_analysis.m"
      }
#line 1208 "det_analysis.m"
    else
#line 1151 "det_analysis.m"
      {
#line 1151 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Detism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDetism_25, (MR_Integer) 0)));
#line 1151 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_27;
#line 1151 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NumSolns0_28;
#line 1151 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NumSolns_39;
#line 1151 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101;
#line 1155 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_74_74;

#line 1152 "det_analysis.m"
        {
#line 1152 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism0_26, &check_hlds__det_analysis__CanFail_27, &check_hlds__det_analysis__NumSolns0_28);
        }
#line 1154 "det_analysis.m"
        {
#line 1154 "det_analysis.m"
          check_hlds__det_analysis__V_74_74 = parse_tree__prog_data__get_may_throw_exception_1_f_0(check_hlds__det_analysis__Attributes_12);
        }
#line 1154 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_74_74 == (MR_Integer) 0);
#line 1155 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1156 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Detism0_26 == (MR_Integer) 6);
#line 1170 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1158 "det_analysis.m"
          {
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcContext_29;
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowProcPieces_30;
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowPieces_31;
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowSpec_32;
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_76_76;
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_95_95;
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_96_96;
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_97_97;
#line 1158 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_98_98;

#line 1158 "det_analysis.m"
            {
#line 1158 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__ProcContext_29);
            }
#line 1159 "det_analysis.m"
            {
#line 1159 "det_analysis.m"
              check_hlds__det_analysis__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_76_76, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1159 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_76_76, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1159 "det_analysis.m"
            }
#line 1159 "det_analysis.m"
            {
#line 1159 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowProcPieces_30 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 1, check_hlds__det_analysis__V_76_76);
            }
#line 1161 "det_analysis.m"
            {
#line 1161 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__WillNotThrowProcPieces_30, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[31]));
            }
#line 1168 "det_analysis.m"
            {
#line 1168 "det_analysis.m"
              check_hlds__det_analysis__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_98_98, 0) = ((MR_Box) (check_hlds__det_analysis__WillNotThrowPieces_31));
#line 1168 "det_analysis.m"
            }
#line 1168 "det_analysis.m"
            {
#line 1168 "det_analysis.m"
              check_hlds__det_analysis__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_97_97, 0) = ((MR_Box) (check_hlds__det_analysis__V_98_98));
#line 1168 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "det_analysis.m"
            }
#line 1168 "det_analysis.m"
            {
#line 1168 "det_analysis.m"
              check_hlds__det_analysis__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_96_96, 0) = ((MR_Box) (check_hlds__det_analysis__ProcContext_29));
#line 1168 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_96_96, 1) = ((MR_Box) (check_hlds__det_analysis__V_97_97));
#line 1168 "det_analysis.m"
            }
#line 1167 "det_analysis.m"
            {
#line 1167 "det_analysis.m"
              check_hlds__det_analysis__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1167 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_95_95, 0) = ((MR_Box) (check_hlds__det_analysis__V_96_96));
#line 1167 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1167 "det_analysis.m"
            }
#line 1167 "det_analysis.m"
            {
#line 1167 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowSpec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1167 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1167 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 2) = ((MR_Box) (check_hlds__det_analysis__V_95_95));
#line 1167 "det_analysis.m"
            }
#line 1169 "det_analysis.m"
            {
#line 1169 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__WillNotThrowSpec_32, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101);
            }
#line 1158 "det_analysis.m"
          }
#line 1170 "det_analysis.m"
        else
#line 1169 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44;
#line 1174 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns0_28 == (MR_Integer) 2);
#line 1174 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1175 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_17 == (MR_Integer) 0);
#line 1194 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1177 "det_analysis.m"
          {
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_135_135;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__GoalContext_33;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_34;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WrongContextPredPieces_35;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WrongContextFirstPieces_36;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ContextMsgs_37;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_38;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_107_107;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_108_108;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_111_111;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_112_112;
#line 1177 "det_analysis.m"
            MR_String check_hlds__det_analysis__V_113_113;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_122_122;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_123_123;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_124_124;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_125_125;
#line 1177 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_126_126;

#line 1177 "det_analysis.m"
            {
#line 1177 "det_analysis.m"
              check_hlds__det_analysis__GoalContext_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1178 "det_analysis.m"
            {
#line 1178 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__VarSet_34);
            }
#line 1179 "det_analysis.m"
            {
#line 1179 "det_analysis.m"
              check_hlds__det_analysis__WrongContextPredPieces_35 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 0, check_hlds__det_analysis__PredId_13);
            }
#line 2501 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1184 "det_analysis.m"
            {
#line 1184 "det_analysis.m"
              check_hlds__det_analysis__V_113_113 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__Detism0_26);
            }
#line 1184 "det_analysis.m"
            {
#line 1184 "det_analysis.m"
              check_hlds__det_analysis__V_112_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_112_112, 0) = ((MR_Box) (check_hlds__det_analysis__V_113_113));
#line 1184 "det_analysis.m"
            }
#line 1183 "det_analysis.m"
            {
#line 1183 "det_analysis.m"
              check_hlds__det_analysis__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_111_111, 0) = ((MR_Box) (check_hlds__det_analysis__V_112_112));
#line 1183 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1183 "det_analysis.m"
            }
#line 1182 "det_analysis.m"
            {
#line 1182 "det_analysis.m"
              check_hlds__det_analysis__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_108_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[99])));
#line 1182 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_108_108, 1) = ((MR_Box) (check_hlds__det_analysis__V_111_111));
#line 1182 "det_analysis.m"
            }
#line 1181 "det_analysis.m"
            {
#line 1181 "det_analysis.m"
              check_hlds__det_analysis__V_107_107 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_135_135, check_hlds__det_analysis__WrongContextPredPieces_35, check_hlds__det_analysis__V_108_108);
            }
#line 1181 "det_analysis.m"
            {
#line 1181 "det_analysis.m"
              check_hlds__det_analysis__WrongContextFirstPieces_36 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_135_135, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[98]), check_hlds__det_analysis__V_107_107);
            }
#line 1187 "det_analysis.m"
            {
#line 1187 "det_analysis.m"
              check_hlds__det_analysis__ContextMsgs_37 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_22, check_hlds__det_analysis__VarSet_34, check_hlds__det_analysis__RightFailingContexts_18);
            }
#line 1190 "det_analysis.m"
            {
#line 1190 "det_analysis.m"
              check_hlds__det_analysis__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_126_126, 0) = ((MR_Box) (check_hlds__det_analysis__WrongContextFirstPieces_36));
#line 1190 "det_analysis.m"
            }
#line 1190 "det_analysis.m"
            {
#line 1190 "det_analysis.m"
              check_hlds__det_analysis__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_125_125, 0) = ((MR_Box) (check_hlds__det_analysis__V_126_126));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "det_analysis.m"
            }
#line 1190 "det_analysis.m"
            {
#line 1190 "det_analysis.m"
              check_hlds__det_analysis__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_124_124, 0) = ((MR_Box) (check_hlds__det_analysis__GoalContext_33));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_124_124, 1) = ((MR_Box) (check_hlds__det_analysis__V_125_125));
#line 1190 "det_analysis.m"
            }
#line 1190 "det_analysis.m"
            {
#line 1190 "det_analysis.m"
              check_hlds__det_analysis__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_123_123, 0) = ((MR_Box) (check_hlds__det_analysis__V_124_124));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "det_analysis.m"
            }
#line 1189 "det_analysis.m"
            {
#line 1189 "det_analysis.m"
              check_hlds__det_analysis__V_122_122 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_123_123, check_hlds__det_analysis__ContextMsgs_37);
            }
#line 1189 "det_analysis.m"
            {
#line 1189 "det_analysis.m"
              check_hlds__det_analysis__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1189 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 2) = ((MR_Box) (check_hlds__det_analysis__V_122_122));
#line 1189 "det_analysis.m"
            }
#line 1192 "det_analysis.m"
            {
#line 1192 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_38, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);
            }
#line 1193 "det_analysis.m"
            check_hlds__det_analysis__NumSolns_39 = (MR_Integer) 3;
#line 1177 "det_analysis.m"
          }
#line 1194 "det_analysis.m"
        else
#line 1195 "det_analysis.m"
          {
#line 1195 "det_analysis.m"
            check_hlds__det_analysis__NumSolns_39 = check_hlds__det_analysis__NumSolns0_28;
#line 1195 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101;
#line 1195 "det_analysis.m"
          }
#line 1197 "det_analysis.m"
        {
#line 1197 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__NumSolns_39);
        }
#line 1204 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_27 == (MR_Integer) 0))
#line 1199 "det_analysis.m"
          {
#line 1199 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Context_40;
#line 1199 "det_analysis.m"
            MR_Word check_hlds__det_analysis__FailingContext_41;
#line 1199 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_130_130;

#line 1200 "det_analysis.m"
            {
#line 1200 "det_analysis.m"
              check_hlds__det_analysis__Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1201 "det_analysis.m"
            {
#line 1201 "det_analysis.m"
              check_hlds__det_analysis__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1201 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1201 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 2) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1201 "det_analysis.m"
            }
#line 1201 "det_analysis.m"
            {
#line 1201 "det_analysis.m"
              check_hlds__det_analysis__FailingContext_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1201 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_41, 0) = ((MR_Box) (check_hlds__det_analysis__Context_40));
#line 1201 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_41, 1) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 1201 "det_analysis.m"
            }
#line 1203 "det_analysis.m"
            {
#line 1203 "det_analysis.m"
              MR_Word base;
#line 1203 "det_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "det_analysis.m"
              *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 1203 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_41));
#line 1203 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1203 "det_analysis.m"
            }
#line 1199 "det_analysis.m"
          }
#line 1204 "det_analysis.m"
        else
#line 1206 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1151 "det_analysis.m"
      }
#line 1144 "det_analysis.m"
  }
#line 1136 "det_analysis.m"
}

#line 1496 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1496__1_2_p_0(
#line 1496 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalFailingContexts_18,
#line 1496 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_52)
#line 1496 "det_analysis.m"
{
#line 1496 "det_analysis.m"
  {
#line 1496 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 1496 "det_analysis.m"
    {
#line 1496 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[1], ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts_18)), ((MR_Box) (check_hlds__det_analysis__HeadVar__2_52)));
    }
#line 1496 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1496 "det_analysis.m"
  }
#line 1496 "det_analysis.m"
}

#line 359 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
#line 359 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 359 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2)
#line 359 "det_analysis.m"
{
#line 359 "det_analysis.m"
  {
#line 359 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 359 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 359 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 359 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 359 "det_analysis.m"
    MR_String check_hlds__det_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 359 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 359 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_15_15;
#line 359 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__V_16_16;

#line 359 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__det_analysis__V_8_8));
#line 359 "det_analysis.m"
    check_hlds__det_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 359 "det_analysis.m"
    check_hlds__det_analysis__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 359 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)) = ((MR_Box) (check_hlds__det_analysis__V_11_11));
#line 359 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (check_hlds__det_analysis__V_12_12));
#line 359 "det_analysis.m"
    {
#line 359 "det_analysis.m"
      check_hlds__det_analysis__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_analysis__V_9_9, check_hlds__det_analysis__V_15_15);
    }
#line 359 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 359 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_10_10 == check_hlds__det_analysis__V_16_16);
#line 359 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 359 "det_analysis.m"
  }
#line 359 "det_analysis.m"
}

#line 103 "det_analysis.m"
void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0(
#line 103 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__1_1,
#line 103 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 103 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3)
#line 103 "det_analysis.m"
{
#line 103 "det_analysis.m"
  {
#line 103 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 103 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_analysis__HeadVar__2_2;
#line 103 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_analysis__HeadVar__3_3;

#line 103 "det_analysis.m"
    {
#line 103 "det_analysis.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_analysis__HeadVar__1_1, check_hlds__det_analysis__Cast_HeadVar1_4, check_hlds__det_analysis__Cast_HeadVar2_5);
#line 103 "det_analysis.m"
      return;
    }
#line 103 "det_analysis.m"
  }
#line 103 "det_analysis.m"
}

#line 103 "det_analysis.m"
MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0(
#line 103 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_1,
#line 103 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2)
#line 103 "det_analysis.m"
{
#line 2816 "check_hlds.det_analysis.c"
  {
#line 2818 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__2_1 == check_hlds__det_analysis__HeadVar__2_2);

#line 2821 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2823 "check_hlds.det_analysis.c"
  }
#line 103 "det_analysis.m"
}

#line 86 "det_analysis.m"
void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0(
#line 86 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__1_1,
#line 86 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 86 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3)
#line 86 "det_analysis.m"
{
#line 86 "det_analysis.m"
  {
#line 86 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 86 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__CastX_9 = (MR_Integer) check_hlds__det_analysis__HeadVar__2_2;
#line 86 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__CastY_10 = (MR_Integer) check_hlds__det_analysis__HeadVar__3_3;

#line 86 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CastX_9 == check_hlds__det_analysis__CastY_10);
#line 86 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 2852 "check_hlds.det_analysis.c"
      *check_hlds__det_analysis__HeadVar__1_1 = (MR_Integer) 0;
#line 86 "det_analysis.m"
    else
#line 86 "det_analysis.m"
      {
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_8_8;

#line 86 "det_analysis.m"
        {
#line 86 "det_analysis.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[2], &check_hlds__det_analysis__V_8_8, ((MR_Box) (check_hlds__det_analysis__V_4_4)), ((MR_Box) (check_hlds__det_analysis__V_6_6)));
        }
#line 2874 "check_hlds.det_analysis.c"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_8_8 == (MR_Integer) 0);
#line 86 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 86 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 86 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__V_8_8;
#line 86 "det_analysis.m"
        else
#line 86 "det_analysis.m"
          {
#line 86 "det_analysis.m"
            mercury__term____Compare____context_0_0(check_hlds__det_analysis__HeadVar__1_1, check_hlds__det_analysis__V_5_5, check_hlds__det_analysis__V_7_7);
#line 86 "det_analysis.m"
            return;
          }
#line 86 "det_analysis.m"
      }
#line 86 "det_analysis.m"
  }
#line 86 "det_analysis.m"
}

#line 86 "det_analysis.m"
MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0(
#line 86 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 86 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2)
#line 86 "det_analysis.m"
{
#line 86 "det_analysis.m"
  {
#line 86 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 86 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__CastX_7 = (MR_Integer) check_hlds__det_analysis__HeadVar__1_1;
#line 86 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__CastY_8 = (MR_Integer) check_hlds__det_analysis__HeadVar__2_2;

#line 86 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CastX_7 == check_hlds__det_analysis__CastY_8);
#line 86 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 86 "det_analysis.m"
      check_hlds__det_analysis__succeeded = MR_TRUE;
#line 86 "det_analysis.m"
    else
#line 86 "det_analysis.m"
      {
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));

#line 2935 "check_hlds.det_analysis.c"
        {
#line 2937 "check_hlds.det_analysis.c"
          check_hlds__det_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[2], ((MR_Box) (check_hlds__det_analysis__V_3_3)), ((MR_Box) (check_hlds__det_analysis__V_5_5)));
        }
#line 86 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 2942 "check_hlds.det_analysis.c"
          {
#line 2944 "check_hlds.det_analysis.c"
            return check_hlds__det_analysis__succeeded = mercury__term____Unify____context_0_0(check_hlds__det_analysis__V_4_4, check_hlds__det_analysis__V_6_6);
          }
#line 86 "det_analysis.m"
      }
#line 86 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 86 "det_analysis.m"
  }
#line 86 "det_analysis.m"
}

#line 2127 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
#line 2127 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2127 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 2127 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16)
#line 2127 "det_analysis.m"
{
#line 2130 "det_analysis.m"
  {
#line 2130 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 2130 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_18_18;
#line 2130 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_19_19;
#line 2130 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 2130 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2130 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredInfo0_7;
#line 2130 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Procs0_8;
#line 2130 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo0_9;
#line 2130 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDet_10;
#line 2133 "det_analysis.m"
    MR_Box check_hlds__det_analysis__conv0_ProcInfo0_9;

#line 2131 "det_analysis.m"
    {
#line 2131 "det_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__det_analysis__PredId_4, &check_hlds__det_analysis__PredInfo0_7);
    }
#line 2132 "det_analysis.m"
    {
#line 2132 "det_analysis.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_analysis__PredInfo0_7, &check_hlds__det_analysis__Procs0_8);
    }
#line 3000 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3002 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 2133 "det_analysis.m"
    {
#line 2133 "det_analysis.m"
      mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_18_18, check_hlds__det_analysis__TypeCtorInfo_19_19, check_hlds__det_analysis__Procs0_8, ((MR_Box) (check_hlds__det_analysis__ProcId_5)), &check_hlds__det_analysis__conv0_ProcInfo0_9);
    }
#line 2133 "det_analysis.m"
    check_hlds__det_analysis__ProcInfo0_9 = ((MR_Word) check_hlds__det_analysis__conv0_ProcInfo0_9);
#line 2134 "det_analysis.m"
    {
#line 2134 "det_analysis.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_9, &check_hlds__det_analysis__MaybeDet_10);
    }
#line 2141 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2142 "det_analysis.m"
      *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15;
#line 2141 "det_analysis.m"
    else
#line 2136 "det_analysis.m"
      {
#line 2136 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDet_10, (MR_Integer) 0)));
#line 2136 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_12;
#line 2136 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Procs_13;
#line 2136 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredInfo_14;

#line 2137 "det_analysis.m"
        {
#line 2137 "det_analysis.m"
          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(check_hlds__det_analysis__Det_11, check_hlds__det_analysis__ProcInfo0_9, &check_hlds__det_analysis__ProcInfo_12);
        }
#line 2138 "det_analysis.m"
        {
#line 2138 "det_analysis.m"
          mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_18_18, check_hlds__det_analysis__TypeCtorInfo_19_19, ((MR_Box) (check_hlds__det_analysis__ProcId_5)), ((MR_Box) (check_hlds__det_analysis__ProcInfo_12)), check_hlds__det_analysis__Procs0_8, &check_hlds__det_analysis__Procs_13);
        }
#line 2139 "det_analysis.m"
        {
#line 2139 "det_analysis.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__det_analysis__Procs_13, check_hlds__det_analysis__PredInfo0_7, &check_hlds__det_analysis__PredInfo_14);
        }
#line 2140 "det_analysis.m"
        {
#line 2140 "det_analysis.m"
          hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__det_analysis__PredId_4, check_hlds__det_analysis__PredInfo_14, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16);
#line 2140 "det_analysis.m"
          return;
        }
#line 2136 "det_analysis.m"
      }
#line 2130 "det_analysis.m"
  }
#line 2127 "det_analysis.m"
}

#line 2079 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4,
#line 2079 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6,
#line 2079 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7,
#line 2079 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8,
#line 2079 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9)
#line 2079 "det_analysis.m"
{
#line 2085 "det_analysis.m"
  while (MR_TRUE)
#line 2085 "det_analysis.m"
    {
#line 2085 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 2085 "det_analysis.m"
      {
#line 2085 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 2085 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2085 "det_analysis.m"
          {
#line 2085 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8;
#line 2085 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2085 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2085 "det_analysis.m"
          }
#line 2085 "det_analysis.m"
        else
#line 2088 "det_analysis.m"
          {
#line 2088 "det_analysis.m"
            MR_Integer check_hlds__det_analysis__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 2088 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 2088 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredProcId_28;
#line 2088 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41;
#line 2088 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42;
#line 2088 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43;

#line 2089 "det_analysis.m"
            {
#line 2089 "det_analysis.m"
              check_hlds__det_analysis__PredProcId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2089 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PredProcId_28, 0) = ((MR_Box) (check_hlds__det_analysis__HeadVar__1_1));
#line 2089 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PredProcId_28, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_23));
#line 2089 "det_analysis.m"
            }
#line 2096 "det_analysis.m"
            {
#line 2096 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__det_analysis__HeadVar__2_2);
            }
#line 2097 "det_analysis.m"
            if (!(check_hlds__det_analysis__succeeded))
#line 2097 "det_analysis.m"
              {
#line 2098 "det_analysis.m"
                {
#line 2098 "det_analysis.m"
                  MR_Integer check_hlds__det_analysis__V_49_49;

#line 2098 "det_analysis.m"
                  {
#line 2098 "det_analysis.m"
                    check_hlds__det_analysis__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__det_analysis__HeadVar__2_2);
                  }
#line 2098 "det_analysis.m"
                  if (check_hlds__det_analysis__succeeded)
#line 2098 "det_analysis.m"
                    {
#line 2099 "det_analysis.m"
                      {
#line 2099 "det_analysis.m"
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__det_analysis__V_49_49);
                      }
#line 2099 "det_analysis.m"
                      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ProcId_23 == check_hlds__det_analysis__V_49_49);
#line 2098 "det_analysis.m"
                    }
#line 2098 "det_analysis.m"
                }
#line 2097 "det_analysis.m"
                if (!(check_hlds__det_analysis__succeeded))
#line 2101 "det_analysis.m"
                  {
#line 2101 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__Markers_29;

#line 2101 "det_analysis.m"
                    {
#line 2101 "det_analysis.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_analysis__HeadVar__2_2, &check_hlds__det_analysis__Markers_29);
                    }
#line 2102 "det_analysis.m"
                    {
#line 2102 "det_analysis.m"
                      check_hlds__det_analysis__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_analysis__Markers_29, (MR_Integer) 9);
                    }
#line 2101 "det_analysis.m"
                  }
#line 2097 "det_analysis.m"
              }
#line 2106 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 2105 "det_analysis.m"
              {
#line 2105 "det_analysis.m"
                {
#line 2105 "det_analysis.m"
                  check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2105 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2105 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8));
#line 2105 "det_analysis.m"
                }
#line 2105 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2105 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2105 "det_analysis.m"
              }
#line 2106 "det_analysis.m"
            else
#line 2107 "det_analysis.m"
              {
#line 2107 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ProcTable_30;
#line 2107 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ProcInfo_31;
#line 2107 "det_analysis.m"
                MR_Word check_hlds__det_analysis__MaybeDetism_32;
#line 2108 "det_analysis.m"
                MR_Box check_hlds__det_analysis__conv0_ProcInfo_31;

#line 2107 "det_analysis.m"
                {
#line 2107 "det_analysis.m"
                  hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_analysis__HeadVar__2_2, &check_hlds__det_analysis__ProcTable_30);
                }
#line 2108 "det_analysis.m"
                {
#line 2108 "det_analysis.m"
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_analysis__ProcTable_30, ((MR_Box) (check_hlds__det_analysis__ProcId_23)), &check_hlds__det_analysis__conv0_ProcInfo_31);
                }
#line 2108 "det_analysis.m"
                check_hlds__det_analysis__ProcInfo_31 = ((MR_Word) check_hlds__det_analysis__conv0_ProcInfo_31);
#line 2109 "det_analysis.m"
                {
#line 2109 "det_analysis.m"
                  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_31, &check_hlds__det_analysis__MaybeDetism_32);
                }
#line 2113 "det_analysis.m"
                if ((check_hlds__det_analysis__MaybeDetism_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2111 "det_analysis.m"
                  {
#line 2112 "det_analysis.m"
                    {
#line 2112 "det_analysis.m"
                      check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2112 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2112 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6));
#line 2112 "det_analysis.m"
                    }
#line 2112 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2111 "det_analysis.m"
                  }
#line 2113 "det_analysis.m"
                else
#line 2114 "det_analysis.m"
                  {
#line 2115 "det_analysis.m"
                    {
#line 2115 "det_analysis.m"
                      check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2115 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2115 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4));
#line 2115 "det_analysis.m"
                    }
#line 2115 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2114 "det_analysis.m"
                  }
#line 2115 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8;
#line 2107 "det_analysis.m"
              }
#line 2118 "det_analysis.m"
            /* direct tailcall eliminated */
#line 2118 "det_analysis.m"
            {
#line 2118 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__3__tmp_copy_3 = check_hlds__det_analysis__ProcIds_24;
#line 2118 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42;
#line 2118 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43;
#line 2118 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41;

#line 2118 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_8;
#line 2118 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_6;
#line 2118 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_4;
#line 2118 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__3_3 = check_hlds__det_analysis__HeadVar__3__tmp_copy_3;
#line 2118 "det_analysis.m"
            }
#line 2118 "det_analysis.m"
            continue;
#line 2088 "det_analysis.m"
          }
#line 2085 "det_analysis.m"
      }
#line 2085 "det_analysis.m"
      break;
#line 2085 "det_analysis.m"
    }
#line 2079 "det_analysis.m"
}

#line 2063 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3,
#line 2063 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4,
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5,
#line 2063 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6,
#line 2063 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7,
#line 2063 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8)
#line 2063 "det_analysis.m"
{
#line 2068 "det_analysis.m"
  while (MR_TRUE)
#line 2068 "det_analysis.m"
    {
#line 2068 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 2068 "det_analysis.m"
      {
#line 2068 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 2068 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2068 "det_analysis.m"
          {
#line 2068 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7;
#line 2068 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5;
#line 2068 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3;
#line 2068 "det_analysis.m"
          }
#line 2068 "det_analysis.m"
        else
#line 2071 "det_analysis.m"
          {
#line 2071 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 2071 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 2071 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredInfo_25;
#line 2071 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcIds_26;
#line 2071 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33;
#line 2071 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34;
#line 2071 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35;
#line 2072 "det_analysis.m"
            MR_Box check_hlds__det_analysis__conv0_PredInfo_25;

#line 2072 "det_analysis.m"
            {
#line 2072 "det_analysis.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_analysis__HeadVar__1_1, ((MR_Box) (check_hlds__det_analysis__PredId_20)), &check_hlds__det_analysis__conv0_PredInfo_25);
            }
#line 2072 "det_analysis.m"
            check_hlds__det_analysis__PredInfo_25 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo_25);
#line 2073 "det_analysis.m"
            {
#line 2073 "det_analysis.m"
              check_hlds__det_analysis__ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__det_analysis__PredInfo_25);
            }
#line 2074 "det_analysis.m"
            {
#line 2074 "det_analysis.m"
              check_hlds__det_analysis__determinism_declarations_procs_9_p_0(check_hlds__det_analysis__PredId_20, check_hlds__det_analysis__PredInfo_25, check_hlds__det_analysis__ProcIds_26, check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3, &check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33, check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5, &check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34, check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7, &check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35);
            }
#line 2076 "det_analysis.m"
            /* direct tailcall eliminated */
#line 2076 "det_analysis.m"
            {
#line 2076 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__2__tmp_copy_2 = check_hlds__det_analysis__PredIds_21;
#line 2076 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_3 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33;
#line 2076 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_5 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34;
#line 2076 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_7 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35;

#line 2076 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_7;
#line 2076 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_5;
#line 2076 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_3;
#line 2076 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__2_2 = check_hlds__det_analysis__HeadVar__2__tmp_copy_2;
#line 2076 "det_analysis.m"
            }
#line 2076 "det_analysis.m"
            continue;
#line 2071 "det_analysis.m"
          }
#line 2068 "det_analysis.m"
      }
#line 2068 "det_analysis.m"
      break;
#line 2068 "det_analysis.m"
    }
#line 2063 "det_analysis.m"
}

#line 2023 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
#line 2023 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2023 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2)
#line 2023 "det_analysis.m"
{
#line 2025 "det_analysis.m"
  {
#line 2025 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2025 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2026 "det_analysis.m"
      *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2025 "det_analysis.m"
    else
#line 2025 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 2027 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2025 "det_analysis.m"
      else
#line 2025 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2025 "det_analysis.m"
          {
#line 2025 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 2025 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2025 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 2025 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 2025 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_8_8;

#line 2025 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 2025 "det_analysis.m"
            check_hlds__det_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 2025 "det_analysis.m"
          }
#line 2025 "det_analysis.m"
        else
#line 2025 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2029 "det_analysis.m"
            {
#line 2029 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2029 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_22_22;

#line 2029 "det_analysis.m"
              *check_hlds__det_analysis__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 2029 "det_analysis.m"
              check_hlds__det_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 2029 "det_analysis.m"
            }
#line 2025 "det_analysis.m"
          else
#line 2028 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2025 "det_analysis.m"
  }
#line 2023 "det_analysis.m"
}

#line 2002 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
#line 2002 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2002 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2)
#line 2002 "det_analysis.m"
{
#line 2004 "det_analysis.m"
  {
#line 2004 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2004 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2004 "det_analysis.m"
      *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2004 "det_analysis.m"
    else
#line 2004 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 2005 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2004 "det_analysis.m"
      else
#line 2004 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2006 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2004 "det_analysis.m"
        else
#line 2004 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2012 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2004 "det_analysis.m"
          else
#line 2007 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2004 "det_analysis.m"
  }
#line 2002 "det_analysis.m"
}

#line 1992 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
#line 1992 "det_analysis.m"
  MR_Word check_hlds__det_analysis__DetInfo_3,
#line 1992 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Type_4)
#line 1992 "det_analysis.m"
{
#line 1995 "det_analysis.m"
  {
#line 1995 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1995 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_5;
#line 1997 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_6_6;

#line 1996 "det_analysis.m"
    {
#line 1996 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__DetInfo_3, &check_hlds__det_analysis__ModuleInfo_5);
    }
#line 1997 "det_analysis.m"
    {
#line 1997 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(check_hlds__det_analysis__ModuleInfo_5, check_hlds__det_analysis__Type_4, &check_hlds__det_analysis__V_6_6);
    }
#line 1995 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1995 "det_analysis.m"
  }
#line 1992 "det_analysis.m"
}

#line 1865 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_12,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ExaminesRepresentation_13,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CanFail_14,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_15,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsA_16,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsB_17,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalContext_19,
#line 1865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__NumSolns_20,
#line 1865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41,
#line 1865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42)
#line 1865 "det_analysis.m"
{
#line 1985 "det_analysis.m"
  {
#line 1985 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ExaminesRepresentation_13 == (MR_Integer) 1);
#line 1985 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo_22;
#line 1985 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Type_24;
#line 1878 "det_analysis.m"
    MR_Word check_hlds__det_analysis__VarTypes_23;

#line 1878 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1878 "det_analysis.m"
      {
#line 1879 "det_analysis.m"
        {
#line 1879 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, &check_hlds__det_analysis__ProcInfo_22);
        }
#line 1880 "det_analysis.m"
        {
#line 1880 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarTypes_23);
        }
#line 1881 "det_analysis.m"
        {
#line 1881 "det_analysis.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_analysis__VarTypes_23, check_hlds__det_analysis__Var_12, &check_hlds__det_analysis__Type_24);
        }
#line 1882 "det_analysis.m"
        {
#line 1882 "det_analysis.m"
          check_hlds__det_analysis__succeeded = check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__Type_24);
        }
#line 1878 "det_analysis.m"
      }
#line 1985 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1977 "det_analysis.m"
      {
#line 1925 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_14 == (MR_Integer) 0))
#line 1885 "det_analysis.m"
          {
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Context_25;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_26;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Pieces0_28;
#line 1885 "det_analysis.m"
            MR_String check_hlds__det_analysis__ErrorMsg_30;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Pieces1_33;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_35;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_130_130;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_131_131;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_134_134;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_135_135;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_178_178;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_179_179;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_180_180;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_181_181;
#line 1885 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_182_182;

#line 1886 "det_analysis.m"
            {
#line 1886 "det_analysis.m"
              check_hlds__det_analysis__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
            }
#line 1887 "det_analysis.m"
            {
#line 1887 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarSet_26);
            }
#line 3700 "check_hlds.det_analysis.c"
            if ((check_hlds__det_analysis__GoalContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3702 "check_hlds.det_analysis.c"
              {
#line 3704 "check_hlds.det_analysis.c"
                MR_String check_hlds__det_analysis__VarStr_27;
#line 3706 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__V_122_122;
#line 3708 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__V_123_123;

#line 1890 "det_analysis.m"
                {
#line 1890 "det_analysis.m"
                  check_hlds__det_analysis__VarStr_27 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_26, (MR_Integer) 0, check_hlds__det_analysis__Var_12);
                }
#line 1891 "det_analysis.m"
                {
#line 1891 "det_analysis.m"
                  check_hlds__det_analysis__V_123_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "det_analysis.m"
                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_123_123, 0) = ((MR_Box) (check_hlds__det_analysis__VarStr_27));
#line 1891 "det_analysis.m"
                }
#line 1891 "det_analysis.m"
                {
#line 1891 "det_analysis.m"
                  check_hlds__det_analysis__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_122_122, 0) = ((MR_Box) (check_hlds__det_analysis__V_123_123));
#line 1891 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[53])));
#line 1891 "det_analysis.m"
                }
#line 1891 "det_analysis.m"
                {
#line 1891 "det_analysis.m"
                  check_hlds__det_analysis__Pieces0_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[119])));
#line 1891 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_28, 1) = ((MR_Box) (check_hlds__det_analysis__V_122_122));
#line 1891 "det_analysis.m"
                }
#line 1902 "det_analysis.m"
                check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "error:";
#line 3746 "check_hlds.det_analysis.c"
              }
#line 3748 "check_hlds.det_analysis.c"
            else
#line 3750 "check_hlds.det_analysis.c"
              {
#line 3752 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__UnifyContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalContext_19, (MR_Integer) 0)));

#line 1895 "det_analysis.m"
                {
#line 1895 "det_analysis.m"
                  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(check_hlds__det_analysis__UnifyContext_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Pieces0_28);
                }
#line 1900 "det_analysis.m"
                if ((check_hlds__det_analysis__Pieces0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1899 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "Error:";
#line 1900 "det_analysis.m"
                else
#line 1902 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "error:";
#line 3768 "check_hlds.det_analysis.c"
              }
#line 1904 "det_analysis.m"
            {
#line 1904 "det_analysis.m"
              check_hlds__det_analysis__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1904 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__ErrorMsg_30));
#line 1904 "det_analysis.m"
            }
#line 1906 "det_analysis.m"
            {
#line 1906 "det_analysis.m"
              check_hlds__det_analysis__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1906 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_135_135, 1) = ((MR_Box) (check_hlds__det_analysis__Type_24));
#line 1906 "det_analysis.m"
            }
#line 1905 "det_analysis.m"
            {
#line 1905 "det_analysis.m"
              check_hlds__det_analysis__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 0) = ((MR_Box) (check_hlds__det_analysis__V_135_135));
#line 1905 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[122])));
#line 1905 "det_analysis.m"
            }
#line 1904 "det_analysis.m"
            {
#line 1904 "det_analysis.m"
              check_hlds__det_analysis__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[120])));
#line 1904 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 1) = ((MR_Box) (check_hlds__det_analysis__V_134_134));
#line 1904 "det_analysis.m"
            }
#line 1904 "det_analysis.m"
            {
#line 1904 "det_analysis.m"
              check_hlds__det_analysis__Pieces1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_33, 0) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 1904 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_33, 1) = ((MR_Box) (check_hlds__det_analysis__V_131_131));
#line 1904 "det_analysis.m"
            }
#line 1922 "det_analysis.m"
            {
#line 1922 "det_analysis.m"
              check_hlds__det_analysis__V_182_182 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__Pieces0_28, check_hlds__det_analysis__Pieces1_33);
            }
#line 1922 "det_analysis.m"
            {
#line 1922 "det_analysis.m"
              check_hlds__det_analysis__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1922 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_181_181, 0) = ((MR_Box) (check_hlds__det_analysis__V_182_182));
#line 1922 "det_analysis.m"
            }
#line 1921 "det_analysis.m"
            {
#line 1921 "det_analysis.m"
              check_hlds__det_analysis__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1921 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_180_180, 0) = ((MR_Box) (check_hlds__det_analysis__V_181_181));
#line 1921 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_180_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[123])));
#line 1921 "det_analysis.m"
            }
#line 1923 "det_analysis.m"
            {
#line 1923 "det_analysis.m"
              check_hlds__det_analysis__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1923 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_179_179, 0) = ((MR_Box) (check_hlds__det_analysis__Context_25));
#line 1923 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_179_179, 1) = ((MR_Box) (check_hlds__det_analysis__V_180_180));
#line 1923 "det_analysis.m"
            }
#line 1920 "det_analysis.m"
            {
#line 1920 "det_analysis.m"
              check_hlds__det_analysis__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_178_178, 0) = ((MR_Box) (check_hlds__det_analysis__V_179_179));
#line 1920 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1920 "det_analysis.m"
            }
#line 1920 "det_analysis.m"
            {
#line 1920 "det_analysis.m"
              check_hlds__det_analysis__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1920 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1920 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1920 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 2) = ((MR_Box) (check_hlds__det_analysis__V_178_178));
#line 1920 "det_analysis.m"
            }
#line 1924 "det_analysis.m"
            {
#line 1924 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_35, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);
            }
#line 1885 "det_analysis.m"
          }
#line 1925 "det_analysis.m"
        else
#line 1974 "det_analysis.m"
          if ((check_hlds__det_analysis__SolnContext_15 == (MR_Integer) 0))
#line 1928 "det_analysis.m"
            {
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ModuleInfo_39;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ContextMsgs_40;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_56_56;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_57_57;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_60_60;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_61_61;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_104_104;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_107_107;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_108_108;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_109_109;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_110_110;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_111_111;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_112_112;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Context_192;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__VarSet_193;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Pieces0_195;
#line 1928 "det_analysis.m"
              MR_String check_hlds__det_analysis__ErrorMsg_197;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Pieces1_198;
#line 1928 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Spec_200;

#line 1929 "det_analysis.m"
              {
#line 1929 "det_analysis.m"
                check_hlds__det_analysis__Context_192 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
              }
#line 1930 "det_analysis.m"
              {
#line 1930 "det_analysis.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarSet_193);
              }
#line 3937 "check_hlds.det_analysis.c"
              if ((check_hlds__det_analysis__GoalContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3939 "check_hlds.det_analysis.c"
                {
#line 3941 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__V_48_48;
#line 3943 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__V_49_49;
#line 3945 "check_hlds.det_analysis.c"
                  MR_String check_hlds__det_analysis__VarStr_188;

#line 1933 "det_analysis.m"
                  {
#line 1933 "det_analysis.m"
                    check_hlds__det_analysis__VarStr_188 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_193, (MR_Integer) 0, check_hlds__det_analysis__Var_12);
                  }
#line 1934 "det_analysis.m"
                  {
#line 1934 "det_analysis.m"
                    check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1934 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (check_hlds__det_analysis__VarStr_188));
#line 1934 "det_analysis.m"
                  }
#line 1934 "det_analysis.m"
                  {
#line 1934 "det_analysis.m"
                    check_hlds__det_analysis__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1934 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (check_hlds__det_analysis__V_49_49));
#line 1934 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[53])));
#line 1934 "det_analysis.m"
                  }
#line 1934 "det_analysis.m"
                  {
#line 1934 "det_analysis.m"
                    check_hlds__det_analysis__Pieces0_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1934 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[119])));
#line 1934 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_195, 1) = ((MR_Box) (check_hlds__det_analysis__V_48_48));
#line 1934 "det_analysis.m"
                  }
#line 1946 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "error:";
#line 3983 "check_hlds.det_analysis.c"
                }
#line 3985 "check_hlds.det_analysis.c"
              else
#line 3987 "check_hlds.det_analysis.c"
                {
#line 3989 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__UnifyContext_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalContext_19, (MR_Integer) 0)));
#line 1938 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_36_36;

#line 1938 "det_analysis.m"
                  {
#line 1938 "det_analysis.m"
                    hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0((MR_Integer) 0, &check_hlds__det_analysis__V_36_36, check_hlds__det_analysis__UnifyContext_189, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Pieces0_195);
                  }
#line 1944 "det_analysis.m"
                  if ((check_hlds__det_analysis__Pieces0_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1943 "det_analysis.m"
                    check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "Error:";
#line 1944 "det_analysis.m"
                  else
#line 1946 "det_analysis.m"
                    check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "error:";
#line 4007 "check_hlds.det_analysis.c"
                }
#line 1948 "det_analysis.m"
              {
#line 1948 "det_analysis.m"
                check_hlds__det_analysis__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1948 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_56_56, 1) = ((MR_Box) (check_hlds__det_analysis__ErrorMsg_197));
#line 1948 "det_analysis.m"
              }
#line 1950 "det_analysis.m"
              {
#line 1950 "det_analysis.m"
                check_hlds__det_analysis__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1950 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_61_61, 1) = ((MR_Box) (check_hlds__det_analysis__Type_24));
#line 1950 "det_analysis.m"
              }
#line 1949 "det_analysis.m"
              {
#line 1949 "det_analysis.m"
                check_hlds__det_analysis__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_60_60, 0) = ((MR_Box) (check_hlds__det_analysis__V_61_61));
#line 1949 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1949 "det_analysis.m"
              }
#line 1948 "det_analysis.m"
              {
#line 1948 "det_analysis.m"
                check_hlds__det_analysis__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[120])));
#line 1948 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_57_57, 1) = ((MR_Box) (check_hlds__det_analysis__V_60_60));
#line 1948 "det_analysis.m"
              }
#line 1948 "det_analysis.m"
              {
#line 1948 "det_analysis.m"
                check_hlds__det_analysis__Pieces1_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_198, 0) = ((MR_Box) (check_hlds__det_analysis__V_56_56));
#line 1948 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_198, 1) = ((MR_Box) (check_hlds__det_analysis__V_57_57));
#line 1948 "det_analysis.m"
              }
#line 1965 "det_analysis.m"
              {
#line 1965 "det_analysis.m"
                check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, &check_hlds__det_analysis__ModuleInfo_39);
              }
#line 1966 "det_analysis.m"
              {
#line 1966 "det_analysis.m"
                check_hlds__det_analysis__V_104_104 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__FailingContextsA_16, check_hlds__det_analysis__FailingContextsB_17);
              }
#line 1966 "det_analysis.m"
              {
#line 1966 "det_analysis.m"
                check_hlds__det_analysis__ContextMsgs_40 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_39, check_hlds__det_analysis__VarSet_193, check_hlds__det_analysis__V_104_104);
              }
#line 1970 "det_analysis.m"
              {
#line 1970 "det_analysis.m"
                check_hlds__det_analysis__V_112_112 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__Pieces0_195, check_hlds__det_analysis__Pieces1_198);
              }
#line 1970 "det_analysis.m"
              {
#line 1970 "det_analysis.m"
                check_hlds__det_analysis__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1970 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_111_111, 0) = ((MR_Box) (check_hlds__det_analysis__V_112_112));
#line 1970 "det_analysis.m"
              }
#line 1969 "det_analysis.m"
              {
#line 1969 "det_analysis.m"
                check_hlds__det_analysis__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_110_110, 0) = ((MR_Box) (check_hlds__det_analysis__V_111_111));
#line 1969 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[124])));
#line 1969 "det_analysis.m"
              }
#line 1971 "det_analysis.m"
              {
#line 1971 "det_analysis.m"
                check_hlds__det_analysis__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1971 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_109_109, 0) = ((MR_Box) (check_hlds__det_analysis__Context_192));
#line 1971 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_109_109, 1) = ((MR_Box) (check_hlds__det_analysis__V_110_110));
#line 1971 "det_analysis.m"
              }
#line 1972 "det_analysis.m"
              {
#line 1972 "det_analysis.m"
                check_hlds__det_analysis__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_108_108, 0) = ((MR_Box) (check_hlds__det_analysis__V_109_109));
#line 1972 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1972 "det_analysis.m"
              }
#line 1968 "det_analysis.m"
              {
#line 1968 "det_analysis.m"
                check_hlds__det_analysis__V_107_107 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_108_108, check_hlds__det_analysis__ContextMsgs_40);
              }
#line 1968 "det_analysis.m"
              {
#line 1968 "det_analysis.m"
                check_hlds__det_analysis__Spec_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1968 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1968 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1968 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 2) = ((MR_Box) (check_hlds__det_analysis__V_107_107));
#line 1968 "det_analysis.m"
              }
#line 1973 "det_analysis.m"
              {
#line 1973 "det_analysis.m"
                check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_200, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);
              }
#line 1928 "det_analysis.m"
            }
#line 1974 "det_analysis.m"
          else
#line 1975 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41;
#line 1981 "det_analysis.m"
        if ((check_hlds__det_analysis__SolnContext_15 == (MR_Integer) 0))
#line 1983 "det_analysis.m"
          *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 3;
#line 1981 "det_analysis.m"
        else
#line 1980 "det_analysis.m"
          *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 2;
#line 1977 "det_analysis.m"
      }
#line 1985 "det_analysis.m"
    else
#line 1986 "det_analysis.m"
      {
#line 1986 "det_analysis.m"
        *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 1;
#line 1986 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41;
#line 1986 "det_analysis.m"
      }
#line 1985 "det_analysis.m"
  }
#line 1865 "det_analysis.m"
}

#line 1845 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
#line 1845 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1845 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ModuleInfo_9,
#line 1845 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredInfo_10,
#line 1845 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15,
#line 1845 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__STATE_VARIABLE_ProcId_16)
#line 1845 "det_analysis.m"
{
#line 1849 "det_analysis.m"
  while (MR_TRUE)
#line 1849 "det_analysis.m"
    {
#line 1849 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 1849 "det_analysis.m"
      {
#line 1849 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1849 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__TestProcId_6;
#line 1849 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_7;
#line 1849 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Rest_8;
#line 1849 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_17_17;
#line 1851 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Detism_12;
#line 1851 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSoln_14;
#line 1853 "det_analysis.m"
        MR_Word check_hlds__det_analysis___CanFail_13;

#line 1849 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1849 "det_analysis.m"
          {
#line 1849 "det_analysis.m"
            check_hlds__det_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1849 "det_analysis.m"
            check_hlds__det_analysis__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1848 "det_analysis.m"
            check_hlds__det_analysis__TestProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_17_17, (MR_Integer) 0)));
#line 1848 "det_analysis.m"
            check_hlds__det_analysis__ProcInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_17_17, (MR_Integer) 1)));
#line 1851 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__TestProcId_6 == check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15);
#line 1851 "det_analysis.m"
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 1851 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 1851 "det_analysis.m"
              {
#line 1852 "det_analysis.m"
                {
#line 1852 "det_analysis.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_7, &check_hlds__det_analysis__Detism_12);
                }
#line 1853 "det_analysis.m"
                {
#line 1853 "det_analysis.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism_12, &check_hlds__det_analysis___CanFail_13, &check_hlds__det_analysis__MaxSoln_14);
                }
#line 1854 "det_analysis.m"
                check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__MaxSoln_14 == (MR_Integer) 3);
#line 1851 "det_analysis.m"
                if (check_hlds__det_analysis__succeeded)
#line 1855 "det_analysis.m"
                  {
#line 1855 "det_analysis.m"
                    check_hlds__det_analysis__succeeded = check_hlds__modecheck_call__modes_are_identical_bar_cc_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15, check_hlds__det_analysis__TestProcId_6, check_hlds__det_analysis__PredInfo_10, check_hlds__det_analysis__ModuleInfo_9);
                  }
#line 1851 "det_analysis.m"
              }
#line 1858 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 1857 "det_analysis.m"
              {
#line 1857 "det_analysis.m"
                *check_hlds__det_analysis__STATE_VARIABLE_ProcId_16 = check_hlds__det_analysis__TestProcId_6;
#line 1857 "det_analysis.m"
                check_hlds__det_analysis__succeeded = MR_TRUE;
#line 1857 "det_analysis.m"
              }
#line 1858 "det_analysis.m"
            else
#line 1859 "det_analysis.m"
              {
#line 1859 "det_analysis.m"
                /* direct tailcall eliminated */
#line 1859 "det_analysis.m"
                {
#line 1859 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__Rest_8;

#line 1859 "det_analysis.m"
                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 1859 "det_analysis.m"
                }
#line 1859 "det_analysis.m"
                continue;
#line 1859 "det_analysis.m"
              }
#line 1849 "det_analysis.m"
          }
#line 1849 "det_analysis.m"
        return check_hlds__det_analysis__succeeded;
#line 1849 "det_analysis.m"
      }
#line 1849 "det_analysis.m"
      break;
#line 1849 "det_analysis.m"
    }
#line 1845 "det_analysis.m"
}

#line 1707 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
#line 1707 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1707 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1707 "det_analysis.m"
{
#line 1707 "det_analysis.m"
  {
#line 1707 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1707 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1707 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv2_HeadVar__3_3;

#line 1707 "det_analysis.m"
    {
#line 1707 "det_analysis.m"
      check_hlds__det_analysis__conv2_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1707 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv2_HeadVar__3_3));
#line 1707 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1707 "det_analysis.m"
  }
#line 1707 "det_analysis.m"
}

#line 1666 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
#line 1666 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1666 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1666 "det_analysis.m"
{
#line 1666 "det_analysis.m"
  {
#line 1666 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1666 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1666 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv1_HeadVar__3_3;

#line 1666 "det_analysis.m"
    {
#line 1666 "det_analysis.m"
      check_hlds__det_analysis__conv1_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1666 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv1_HeadVar__3_3));
#line 1666 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1666 "det_analysis.m"
  }
#line 1666 "det_analysis.m"
}

#line 1652 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
#line 1652 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1652 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1652 "det_analysis.m"
{
#line 1652 "det_analysis.m"
  {
#line 1652 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1652 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1652 "det_analysis.m"
    {
#line 1652 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = hlds__instmap__var_is_any_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1652 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1652 "det_analysis.m"
  }
#line 1652 "det_analysis.m"
}

#line 1649 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
#line 1649 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1649 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1649 "det_analysis.m"
{
#line 1649 "det_analysis.m"
  {
#line 1649 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1649 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1649 "det_analysis.m"
    {
#line 1649 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1649 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1649 "det_analysis.m"
  }
#line 1649 "det_analysis.m"
}

#line 1611 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
#line 1611 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1611 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1611 "det_analysis.m"
{
#line 1611 "det_analysis.m"
  {
#line 1611 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1611 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1611 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv0_HeadVar__3_3;

#line 1611 "det_analysis.m"
    {
#line 1611 "det_analysis.m"
      check_hlds__det_analysis__conv0_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1611 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__3_3));
#line 1611 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1611 "det_analysis.m"
  }
#line 1611 "det_analysis.m"
}

#line 1681 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
#line 1681 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1681 "det_analysis.m"
{
#line 1681 "det_analysis.m"
  {
#line 1681 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1681 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0, 1);
#line 1681 "det_analysis.m"
  }
#line 1681 "det_analysis.m"
}

#line 1681 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
#line 1681 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1681 "det_analysis.m"
{
#line 1681 "det_analysis.m"
  {
#line 1681 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1682 "det_analysis.m"
    {
#line 1682 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71);
    }
#line 1682 "det_analysis.m"
    if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1682 "det_analysis.m"
      {
#line 1682 "det_analysis.m"
        check_hlds__det_analysis__det_infer_scope_12_p_0_5(check_hlds__det_analysis__env_ptr);
#line 1682 "det_analysis.m"
        return;
      }
#line 1681 "det_analysis.m"
  }
#line 1681 "det_analysis.m"
}

#line 1681 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
#line 1681 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1681 "det_analysis.m"
{
#line 1681 "det_analysis.m"
  {
#line 1681 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1681 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0) == 0)
#line 1681 "det_analysis.m"
      {
#line 1681 "det_analysis.m"
        {
#line 1681 "det_analysis.m"
          parse_tree__set_of_var__member_2_p_1((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71, check_hlds__det_analysis__det_infer_scope_12_p_0_6, check_hlds__det_analysis__env_ptr);
        }
#line 1681 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
#line 1681 "det_analysis.m"
      }
#line 1681 "det_analysis.m"
    else
#line 1681 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1681 "det_analysis.m"
  }
#line 1681 "det_analysis.m"
}

#line 1540 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Reason_13,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_14,
#line 1540 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_15,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_17,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_18,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_19,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20,
#line 1540 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_21,
#line 1540 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_22,
#line 1540 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107,
#line 1540 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108)
#line 1540 "det_analysis.m"
{
#line 1540 "det_analysis.m"
  {
#line 1540 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s check_hlds__det_analysis__env;

#line 1553 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 1))))
#line 1553 "det_analysis.m"
      {
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)));
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Reason_13, (MR_Integer) 1)));
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_26;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarSet_27;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_28;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SolnContextToUse_29;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstmapDelta_53;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ChangedVars_54;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_55;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GroundBoundVars_57;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NonLocalVars_58;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__BoundVars0_60;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarTypes_61;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__BoundVars_62;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ExtraVars_75;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__IgnoreExtraVars_76;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_256_256;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_257_257;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_258_258;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_290_290;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_291_291;
#line 1553 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_324_324;
#line 1649 "det_analysis.m"
        MR_Word check_hlds__det_analysis___GroundAtStartVars_56;

#line 1554 "det_analysis.m"
        {
#line 1554 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__ProcInfo_26);
        }
#line 1555 "det_analysis.m"
        {
#line 1555 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_26, &check_hlds__det_analysis__VarSet_27);
        }
#line 1557 "det_analysis.m"
        {
#line 1557 "det_analysis.m"
          check_hlds__det_analysis__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1562 "det_analysis.m"
        if ((check_hlds__det_analysis__Kind_25 == (MR_Integer) 1))
#line 1563 "det_analysis.m"
          {
#line 1564 "det_analysis.m"
            check_hlds__det_analysis__SolnContextToUse_29 = check_hlds__det_analysis__SolnContext_18;
#line 1568 "det_analysis.m"
            if ((check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1566 "det_analysis.m"
              {
#line 1566 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_255_255;

#line 1567 "det_analysis.m"
                {
#line 1567 "det_analysis.m"
                  check_hlds__det_analysis__V_255_255 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1567 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_255_255, 0) = ((MR_Box) (check_hlds__det_analysis__Vars_24));
#line 1567 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_255_255, 1) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1567 "det_analysis.m"
                }
#line 1567 "det_analysis.m"
                {
#line 1567 "det_analysis.m"
                  check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1567 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_255_255));
#line 1567 "det_analysis.m"
                }
#line 1567 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107;
#line 1566 "det_analysis.m"
              }
#line 1568 "det_analysis.m"
            else
#line 1569 "det_analysis.m"
              {
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__TypeCtorInfo_329_329;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__PESSInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0)));
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__OuterVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PESSInfo_31, (MR_Integer) 0)));
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__OuterContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PESSInfo_31, (MR_Integer) 1)));
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__NestedSpec_37;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__AllVars_38;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_230_230;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_231_231;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_240_240;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_241_241;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_252_252;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_253_253;
#line 1569 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_254_254;

#line 1581 "det_analysis.m"
                {
#line 1581 "det_analysis.m"
                  check_hlds__det_analysis__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_231_231, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1581 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[105])));
#line 1581 "det_analysis.m"
                }
#line 1585 "det_analysis.m"
                {
#line 1585 "det_analysis.m"
                  check_hlds__det_analysis__V_241_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1585 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_241_241, 0) = ((MR_Box) (check_hlds__det_analysis__OuterContext_33));
#line 1585 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_241_241, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[108])));
#line 1585 "det_analysis.m"
                }
#line 1581 "det_analysis.m"
                {
#line 1581 "det_analysis.m"
                  check_hlds__det_analysis__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_240_240, 0) = ((MR_Box) (check_hlds__det_analysis__V_241_241));
#line 1581 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_240_240, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1581 "det_analysis.m"
                }
#line 1578 "det_analysis.m"
                {
#line 1578 "det_analysis.m"
                  check_hlds__det_analysis__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_230_230, 0) = ((MR_Box) (check_hlds__det_analysis__V_231_231));
#line 1578 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_230_230, 1) = ((MR_Box) (check_hlds__det_analysis__V_240_240));
#line 1578 "det_analysis.m"
                }
#line 1578 "det_analysis.m"
                {
#line 1578 "det_analysis.m"
                  check_hlds__det_analysis__NestedSpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_3[0])));
#line 1578 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1578 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 2) = ((MR_Box) (check_hlds__det_analysis__V_230_230));
#line 1578 "det_analysis.m"
                }
#line 1586 "det_analysis.m"
                {
#line 1586 "det_analysis.m"
                  check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__NestedSpec_37, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251);
                }
#line 4756 "check_hlds.det_analysis.c"
                check_hlds__det_analysis__TypeCtorInfo_329_329 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1587 "det_analysis.m"
                {
#line 1587 "det_analysis.m"
                  check_hlds__det_analysis__V_252_252 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], check_hlds__det_analysis__OuterVars_32, check_hlds__det_analysis__Vars_24);
                }
#line 1587 "det_analysis.m"
                {
#line 1587 "det_analysis.m"
                  check_hlds__det_analysis__AllVars_38 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_329_329, check_hlds__det_analysis__V_252_252);
                }
#line 1589 "det_analysis.m"
                {
#line 1589 "det_analysis.m"
                  check_hlds__det_analysis__V_254_254 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__det_analysis__TypeCtorInfo_329_329, check_hlds__det_analysis__AllVars_38);
                }
#line 1589 "det_analysis.m"
                {
#line 1589 "det_analysis.m"
                  check_hlds__det_analysis__V_253_253 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1589 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_253_253, 0) = ((MR_Box) (check_hlds__det_analysis__V_254_254));
#line 1589 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_253_253, 1) = ((MR_Box) (check_hlds__det_analysis__OuterContext_33));
#line 1589 "det_analysis.m"
                }
#line 1588 "det_analysis.m"
                {
#line 1588 "det_analysis.m"
                  check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1588 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_253_253));
#line 1588 "det_analysis.m"
                }
#line 1569 "det_analysis.m"
              }
#line 1563 "det_analysis.m"
          }
#line 1562 "det_analysis.m"
        else
#line 1562 "det_analysis.m"
          if ((check_hlds__det_analysis__Kind_25 == (MR_Integer) 2))
#line 1593 "det_analysis.m"
            {
#line 1602 "det_analysis.m"
              if ((check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1595 "det_analysis.m"
                {
#line 1595 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__ArbitrarySpec_40;
#line 1595 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_203_203;
#line 1595 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_204_204;

#line 1600 "det_analysis.m"
                  {
#line 1600 "det_analysis.m"
                    check_hlds__det_analysis__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1600 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_204_204, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1600 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[109])));
#line 1600 "det_analysis.m"
                  }
#line 1599 "det_analysis.m"
                  {
#line 1599 "det_analysis.m"
                    check_hlds__det_analysis__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1599 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_203_203, 0) = ((MR_Box) (check_hlds__det_analysis__V_204_204));
#line 1599 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1599 "det_analysis.m"
                  }
#line 1599 "det_analysis.m"
                  {
#line 1599 "det_analysis.m"
                    check_hlds__det_analysis__ArbitrarySpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1599 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1599 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1599 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 2) = ((MR_Box) (check_hlds__det_analysis__V_203_203));
#line 1599 "det_analysis.m"
                  }
#line 1601 "det_analysis.m"
                  {
#line 1601 "det_analysis.m"
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__ArbitrarySpec_40, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251);
                  }
#line 1595 "det_analysis.m"
                }
#line 1602 "det_analysis.m"
              else
#line 1604 "det_analysis.m"
                {
#line 1604 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__TypeCtorInfo_331_331;
#line 1604 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__OldVars_41;
#line 1604 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__PromiseContext_42;
#line 1604 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__OverlapVars_43;
#line 1604 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0)));
#line 1604 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_142_142;
#line 1604 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_143_143;

#line 1603 "det_analysis.m"
                  check_hlds__det_analysis__OldVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_141_141, (MR_Integer) 0)));
#line 1603 "det_analysis.m"
                  check_hlds__det_analysis__PromiseContext_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_141_141, (MR_Integer) 1)));
#line 4874 "check_hlds.det_analysis.c"
                  check_hlds__det_analysis__TypeCtorInfo_331_331 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1605 "det_analysis.m"
                  {
#line 1605 "det_analysis.m"
                    check_hlds__det_analysis__V_142_142 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_331_331, check_hlds__det_analysis__OldVars_41);
                  }
#line 1605 "det_analysis.m"
                  {
#line 1605 "det_analysis.m"
                    check_hlds__det_analysis__V_143_143 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_331_331, check_hlds__det_analysis__Vars_24);
                  }
#line 1605 "det_analysis.m"
                  {
#line 1605 "det_analysis.m"
                    check_hlds__det_analysis__OverlapVars_43 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__det_analysis__TypeCtorInfo_331_331, check_hlds__det_analysis__V_142_142, check_hlds__det_analysis__V_143_143);
                  }
#line 1608 "det_analysis.m"
                  {
#line 1608 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(check_hlds__det_analysis__TypeCtorInfo_331_331, check_hlds__det_analysis__OverlapVars_43);
                  }
#line 1610 "det_analysis.m"
                  if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1608 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107;
#line 1610 "det_analysis.m"
                  else
#line 1613 "det_analysis.m"
                    {
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__TypeCtorInfo_336_336;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapVarNames_44;
#line 1613 "det_analysis.m"
                      MR_String check_hlds__det_analysis__OverlapVarStr_46;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapPieces_50;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapSpec_52;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_144_144;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_145_145;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_151_151;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_154_154;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_157_157;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_160_160;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_163_163;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_164_164;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_166_166;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_167_167;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_180_180;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_181_181;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_182_182;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_183_183;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_185_185;
#line 1613 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_186_186;

#line 1611 "det_analysis.m"
                      {
#line 1611 "det_analysis.m"
                        check_hlds__det_analysis__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1611 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_1));
#line 1611 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1611 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1611 "det_analysis.m"
                      }
#line 1611 "det_analysis.m"
                      {
#line 1611 "det_analysis.m"
                        check_hlds__det_analysis__V_145_145 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__det_analysis__TypeCtorInfo_331_331, check_hlds__det_analysis__OverlapVars_43);
                      }
#line 1611 "det_analysis.m"
                      {
#line 1611 "det_analysis.m"
                        check_hlds__det_analysis__OverlapVarNames_44 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_144_144, check_hlds__det_analysis__V_145_145);
                      }
#line 1618 "det_analysis.m"
                      if ((check_hlds__det_analysis__OverlapVarNames_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1615 "det_analysis.m"
                        {
#line 1616 "det_analysis.m"
                          {
#line 1616 "det_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "arbitrary_promise_overlap empty");
#line 1616 "det_analysis.m"
                            return;
                          }
#line 1615 "det_analysis.m"
                        }
#line 1618 "det_analysis.m"
                      else
#line 1618 "det_analysis.m"
                        {
#line 1618 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OverlapVarNames_44, (MR_Integer) 1)));
#line 1619 "det_analysis.m"
                          MR_String check_hlds__det_analysis__V_351_351 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OverlapVarNames_44, (MR_Integer) 0)));

#line 1618 "det_analysis.m"
                          if ((check_hlds__det_analysis__V_350_350 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1620 "det_analysis.m"
                            check_hlds__det_analysis__OverlapVarStr_46 = (MR_String) "the variable";
#line 1618 "det_analysis.m"
                          else
#line 1623 "det_analysis.m"
                            check_hlds__det_analysis__OverlapVarStr_46 = (MR_String) "the following variables:";
#line 1618 "det_analysis.m"
                        }
#line 5003 "check_hlds.det_analysis.c"
                      check_hlds__det_analysis__TypeCtorInfo_336_336 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1629 "det_analysis.m"
                      {
#line 1629 "det_analysis.m"
                        check_hlds__det_analysis__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1629 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1629 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_164_164, 1) = ((MR_Box) (check_hlds__det_analysis__OverlapVarStr_46));
#line 1629 "det_analysis.m"
                      }
#line 1628 "det_analysis.m"
                      {
#line 1628 "det_analysis.m"
                        check_hlds__det_analysis__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1628 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_163_163, 0) = ((MR_Box) (check_hlds__det_analysis__V_164_164));
#line 1628 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1628 "det_analysis.m"
                      }
#line 1627 "det_analysis.m"
                      {
#line 1627 "det_analysis.m"
                        check_hlds__det_analysis__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1627 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_160_160, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[112])));
#line 1627 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_160_160, 1) = ((MR_Box) (check_hlds__det_analysis__V_163_163));
#line 1627 "det_analysis.m"
                      }
#line 1626 "det_analysis.m"
                      {
#line 1626 "det_analysis.m"
                        check_hlds__det_analysis__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[111])));
#line 1626 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_157_157, 1) = ((MR_Box) (check_hlds__det_analysis__V_160_160));
#line 1626 "det_analysis.m"
                      }
#line 1625 "det_analysis.m"
                      {
#line 1625 "det_analysis.m"
                        check_hlds__det_analysis__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1625 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_154_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[110])));
#line 1625 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_154_154, 1) = ((MR_Box) (check_hlds__det_analysis__V_157_157));
#line 1625 "det_analysis.m"
                      }
#line 1629 "det_analysis.m"
                      {
#line 1629 "det_analysis.m"
                        check_hlds__det_analysis__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1629 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[92])));
#line 1629 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_151_151, 1) = ((MR_Box) (check_hlds__det_analysis__V_154_154));
#line 1629 "det_analysis.m"
                      }
#line 1630 "det_analysis.m"
                      {
#line 1630 "det_analysis.m"
                        check_hlds__det_analysis__V_167_167 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__OverlapVarNames_44);
                      }
#line 1629 "det_analysis.m"
                      {
#line 1629 "det_analysis.m"
                        check_hlds__det_analysis__V_166_166 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_336_336, check_hlds__det_analysis__V_167_167, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[114]));
                      }
#line 1625 "det_analysis.m"
                      {
#line 1625 "det_analysis.m"
                        check_hlds__det_analysis__OverlapPieces_50 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_336_336, check_hlds__det_analysis__V_151_151, check_hlds__det_analysis__V_166_166);
                      }
#line 1635 "det_analysis.m"
                      {
#line 1635 "det_analysis.m"
                        check_hlds__det_analysis__V_183_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_183_183, 0) = ((MR_Box) (check_hlds__det_analysis__OverlapPieces_50));
#line 1635 "det_analysis.m"
                      }
#line 1635 "det_analysis.m"
                      {
#line 1635 "det_analysis.m"
                        check_hlds__det_analysis__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_182_182, 0) = ((MR_Box) (check_hlds__det_analysis__V_183_183));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1635 "det_analysis.m"
                      }
#line 1635 "det_analysis.m"
                      {
#line 1635 "det_analysis.m"
                        check_hlds__det_analysis__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_181_181, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_181_181, 1) = ((MR_Box) (check_hlds__det_analysis__V_182_182));
#line 1635 "det_analysis.m"
                      }
#line 1637 "det_analysis.m"
                      {
#line 1637 "det_analysis.m"
                        check_hlds__det_analysis__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1637 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_186_186, 0) = ((MR_Box) (check_hlds__det_analysis__PromiseContext_42));
#line 1637 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_186_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[115])));
#line 1637 "det_analysis.m"
                      }
#line 1635 "det_analysis.m"
                      {
#line 1635 "det_analysis.m"
                        check_hlds__det_analysis__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_185_185, 0) = ((MR_Box) (check_hlds__det_analysis__V_186_186));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_185_185, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1635 "det_analysis.m"
                      }
#line 1633 "det_analysis.m"
                      {
#line 1633 "det_analysis.m"
                        check_hlds__det_analysis__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_180_180, 0) = ((MR_Box) (check_hlds__det_analysis__V_181_181));
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_180_180, 1) = ((MR_Box) (check_hlds__det_analysis__V_185_185));
#line 1633 "det_analysis.m"
                      }
#line 1633 "det_analysis.m"
                      {
#line 1633 "det_analysis.m"
                        check_hlds__det_analysis__OverlapSpec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 2) = ((MR_Box) (check_hlds__det_analysis__V_180_180));
#line 1633 "det_analysis.m"
                      }
#line 1638 "det_analysis.m"
                      {
#line 1638 "det_analysis.m"
                        check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__OverlapSpec_52, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251);
                      }
#line 1613 "det_analysis.m"
                    }
#line 1604 "det_analysis.m"
                }
#line 1641 "det_analysis.m"
              check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1642 "det_analysis.m"
              check_hlds__det_analysis__SolnContextToUse_29 = (MR_Integer) 1;
#line 1593 "det_analysis.m"
            }
#line 1562 "det_analysis.m"
          else
#line 1559 "det_analysis.m"
            {
#line 1560 "det_analysis.m"
              check_hlds__det_analysis__SolnContextToUse_29 = (MR_Integer) 1;
#line 1561 "det_analysis.m"
              check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20;
#line 1561 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107;
#line 1559 "det_analysis.m"
            }
#line 1644 "det_analysis.m"
        {
#line 1644 "det_analysis.m"
          check_hlds__det_analysis__InstmapDelta_53 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1645 "det_analysis.m"
        {
#line 1645 "det_analysis.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__det_analysis__InstmapDelta_53, &check_hlds__det_analysis__ChangedVars_54);
        }
#line 1646 "det_analysis.m"
        {
#line 1646 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251, &check_hlds__det_analysis__ModuleInfo_55);
        }
#line 1649 "det_analysis.m"
        {
#line 1649 "det_analysis.m"
          check_hlds__det_analysis__V_256_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1649 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_256_256, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[2]));
#line 1649 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_256_256, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_2));
#line 1649 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_256_256, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1649 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_256_256, 3) = ((MR_Box) (check_hlds__det_analysis__ModuleInfo_55));
#line 1649 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_256_256, 4) = ((MR_Box) (check_hlds__det_analysis__InstMap0_17));
#line 1649 "det_analysis.m"
        }
#line 5208 "check_hlds.det_analysis.c"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1649 "det_analysis.m"
        {
#line 1649 "det_analysis.m"
          parse_tree__set_of_var__divide_4_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__V_256_256, check_hlds__det_analysis__ChangedVars_54, &check_hlds__det_analysis___GroundAtStartVars_56, &check_hlds__det_analysis__GroundBoundVars_57);
        }
#line 1651 "det_analysis.m"
        {
#line 1651 "det_analysis.m"
          check_hlds__det_analysis__NonLocalVars_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1652 "det_analysis.m"
        {
#line 1652 "det_analysis.m"
          check_hlds__det_analysis__V_257_257 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1652 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_257_257, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[2]));
#line 1652 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_257_257, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_3));
#line 1652 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_257_257, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1652 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_257_257, 3) = ((MR_Box) (check_hlds__det_analysis__ModuleInfo_55));
#line 1652 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_257_257, 4) = ((MR_Box) (check_hlds__det_analysis__InstMap0_17));
#line 1652 "det_analysis.m"
        }
#line 1652 "det_analysis.m"
        {
#line 1652 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59 = parse_tree__set_of_var__filter_2_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__V_257_257, check_hlds__det_analysis__NonLocalVars_58);
        }
#line 1655 "det_analysis.m"
        {
#line 1655 "det_analysis.m"
          check_hlds__det_analysis__BoundVars0_60 = parse_tree__set_of_var__union_2_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__GroundBoundVars_57, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59);
        }
#line 1656 "det_analysis.m"
        {
#line 1656 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo_26, &check_hlds__det_analysis__VarTypes_61);
        }
#line 1657 "det_analysis.m"
        {
#line 1657 "det_analysis.m"
          check_hlds__det_analysis__BoundVars_62 = parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0(check_hlds__det_analysis__VarTypes_61, check_hlds__det_analysis__BoundVars0_60);
        }
#line 1661 "det_analysis.m"
        {
#line 1661 "det_analysis.m"
          check_hlds__det_analysis__V_258_258 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__Vars_24);
        }
#line 1661 "det_analysis.m"
        {
#line 1661 "det_analysis.m"
          parse_tree__set_of_var__difference_3_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__BoundVars_62, check_hlds__det_analysis__V_258_258, &(check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
        }
#line 1663 "det_analysis.m"
        {
#line 1663 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
        }
#line 1665 "det_analysis.m"
        if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1663 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_290_290 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251;
#line 1665 "det_analysis.m"
        else
#line 1667 "det_analysis.m"
          {
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_344_344;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingVarNames_64;
#line 1667 "det_analysis.m"
            MR_String check_hlds__det_analysis__MissingKindStr_65;
#line 1667 "det_analysis.m"
            MR_String check_hlds__det_analysis__MissingListStr_67;
#line 1667 "det_analysis.m"
            MR_String check_hlds__det_analysis__BindsWords_72;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingPieces_73;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingSpec_74;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_259_259;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_260_260;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_266_266;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_269_269;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_270_270;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_271_271;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_272_272;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_273_273;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_274_274;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_276_276;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_277_277;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_284_284;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_285_285;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_286_286;
#line 1667 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_287_287;

#line 1666 "det_analysis.m"
            {
#line 1666 "det_analysis.m"
              check_hlds__det_analysis__V_259_259 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1666 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_259_259, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1666 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_259_259, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_4));
#line 1666 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_259_259, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1666 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_259_259, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1666 "det_analysis.m"
            }
#line 1666 "det_analysis.m"
            {
#line 1666 "det_analysis.m"
              check_hlds__det_analysis__V_260_260 = parse_tree__set_of_var__to_sorted_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
            }
#line 1666 "det_analysis.m"
            {
#line 1666 "det_analysis.m"
              check_hlds__det_analysis__MissingVarNames_64 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_259_259, check_hlds__det_analysis__V_260_260);
            }
#line 1668 "det_analysis.m"
            {
#line 1668 "det_analysis.m"
              check_hlds__det_analysis__MissingKindStr_65 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(check_hlds__det_analysis__Kind_25);
            }
#line 1673 "det_analysis.m"
            if ((check_hlds__det_analysis__MissingVarNames_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1670 "det_analysis.m"
              {
#line 1671 "det_analysis.m"
                {
#line 1671 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_missing_vars empty");
#line 1671 "det_analysis.m"
                  return;
                }
#line 1670 "det_analysis.m"
              }
#line 1673 "det_analysis.m"
            else
#line 1673 "det_analysis.m"
              {
#line 1673 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MissingVarNames_64, (MR_Integer) 1)));
#line 1674 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_353_353 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MissingVarNames_64, (MR_Integer) 0)));

#line 1673 "det_analysis.m"
                if ((check_hlds__det_analysis__V_352_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1675 "det_analysis.m"
                  check_hlds__det_analysis__MissingListStr_67 = (MR_String) "a variable that is not listed:";
#line 1673 "det_analysis.m"
                else
#line 1678 "det_analysis.m"
                  check_hlds__det_analysis__MissingListStr_67 = (MR_String) "some variables that are not listed:";
#line 1673 "det_analysis.m"
              }
#line 1681 "det_analysis.m"
            {
#line 1681 "det_analysis.m"
              check_hlds__det_analysis__det_infer_scope_12_p_0_7(&check_hlds__det_analysis__env);
            }
#line 1685 "det_analysis.m"
            if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1684 "det_analysis.m"
              check_hlds__det_analysis__BindsWords_72 = (MR_String) "goal may constrain";
#line 1685 "det_analysis.m"
            else
#line 1686 "det_analysis.m"
              check_hlds__det_analysis__BindsWords_72 = (MR_String) "goal binds";
#line 5398 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_344_344 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1688 "det_analysis.m"
            {
#line 1688 "det_analysis.m"
              check_hlds__det_analysis__V_270_270 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_270_270, 0) = ((MR_Box) (check_hlds__det_analysis__MissingKindStr_65));
#line 1688 "det_analysis.m"
            }
#line 1689 "det_analysis.m"
            {
#line 1689 "det_analysis.m"
              check_hlds__det_analysis__V_272_272 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_272_272, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1689 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_272_272, 1) = ((MR_Box) (check_hlds__det_analysis__BindsWords_72));
#line 1689 "det_analysis.m"
            }
#line 1689 "det_analysis.m"
            {
#line 1689 "det_analysis.m"
              check_hlds__det_analysis__V_274_274 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_274_274, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1689 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_274_274, 1) = ((MR_Box) (check_hlds__det_analysis__MissingListStr_67));
#line 1689 "det_analysis.m"
            }
#line 1689 "det_analysis.m"
            {
#line 1689 "det_analysis.m"
              check_hlds__det_analysis__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_273_273, 0) = ((MR_Box) (check_hlds__det_analysis__V_274_274));
#line 1689 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_273_273, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1689 "det_analysis.m"
            }
#line 1688 "det_analysis.m"
            {
#line 1688 "det_analysis.m"
              check_hlds__det_analysis__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_271_271, 0) = ((MR_Box) (check_hlds__det_analysis__V_272_272));
#line 1688 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_271_271, 1) = ((MR_Box) (check_hlds__det_analysis__V_273_273));
#line 1688 "det_analysis.m"
            }
#line 1688 "det_analysis.m"
            {
#line 1688 "det_analysis.m"
              check_hlds__det_analysis__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_269_269, 0) = ((MR_Box) (check_hlds__det_analysis__V_270_270));
#line 1688 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_269_269, 1) = ((MR_Box) (check_hlds__det_analysis__V_271_271));
#line 1688 "det_analysis.m"
            }
#line 1690 "det_analysis.m"
            {
#line 1690 "det_analysis.m"
              check_hlds__det_analysis__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1690 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_266_266, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[116])));
#line 1690 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_266_266, 1) = ((MR_Box) (check_hlds__det_analysis__V_269_269));
#line 1690 "det_analysis.m"
            }
#line 1690 "det_analysis.m"
            {
#line 1690 "det_analysis.m"
              check_hlds__det_analysis__V_277_277 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__MissingVarNames_64);
            }
#line 1690 "det_analysis.m"
            {
#line 1690 "det_analysis.m"
              check_hlds__det_analysis__V_276_276 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_344_344, check_hlds__det_analysis__V_277_277, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[114]));
            }
#line 1688 "det_analysis.m"
            {
#line 1688 "det_analysis.m"
              check_hlds__det_analysis__MissingPieces_73 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_344_344, check_hlds__det_analysis__V_266_266, check_hlds__det_analysis__V_276_276);
            }
#line 1692 "det_analysis.m"
            {
#line 1692 "det_analysis.m"
              check_hlds__det_analysis__V_287_287 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1692 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_287_287, 0) = ((MR_Box) (check_hlds__det_analysis__MissingPieces_73));
#line 1692 "det_analysis.m"
            }
#line 1692 "det_analysis.m"
            {
#line 1692 "det_analysis.m"
              check_hlds__det_analysis__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1692 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_286_286, 0) = ((MR_Box) (check_hlds__det_analysis__V_287_287));
#line 1692 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_286_286, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1692 "det_analysis.m"
            }
#line 1692 "det_analysis.m"
            {
#line 1692 "det_analysis.m"
              check_hlds__det_analysis__V_285_285 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1692 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_285_285, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1692 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_285_285, 1) = ((MR_Box) (check_hlds__det_analysis__V_286_286));
#line 1692 "det_analysis.m"
            }
#line 1691 "det_analysis.m"
            {
#line 1691 "det_analysis.m"
              check_hlds__det_analysis__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1691 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_284_284, 0) = ((MR_Box) (check_hlds__det_analysis__V_285_285));
#line 1691 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_284_284, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1691 "det_analysis.m"
            }
#line 1691 "det_analysis.m"
            {
#line 1691 "det_analysis.m"
              check_hlds__det_analysis__MissingSpec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1691 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1691 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1691 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 2) = ((MR_Box) (check_hlds__det_analysis__V_284_284));
#line 1691 "det_analysis.m"
            }
#line 1693 "det_analysis.m"
            {
#line 1693 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__MissingSpec_74, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_251_251, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_290_290);
            }
#line 1667 "det_analysis.m"
          }
#line 1697 "det_analysis.m"
        {
#line 1697 "det_analysis.m"
          check_hlds__det_analysis__V_291_291 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__Vars_24);
        }
#line 1697 "det_analysis.m"
        {
#line 1697 "det_analysis.m"
          parse_tree__set_of_var__difference_3_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__V_291_291, check_hlds__det_analysis__BoundVars_62, &check_hlds__det_analysis__ExtraVars_75);
        }
#line 1699 "det_analysis.m"
        {
#line 1699 "det_analysis.m"
          check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_290_290, &check_hlds__det_analysis__IgnoreExtraVars_76);
        }
#line 1701 "det_analysis.m"
        {
#line 1701 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__ExtraVars_75);
        }
#line 1702 "det_analysis.m"
        if (!((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded))
#line 1702 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = (check_hlds__det_analysis__IgnoreExtraVars_76 == (MR_Integer) 1);
#line 1706 "det_analysis.m"
        if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1702 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_324_324 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_290_290;
#line 1706 "det_analysis.m"
        else
#line 1708 "det_analysis.m"
          {
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_349_349;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraVarNames_77;
#line 1708 "det_analysis.m"
            MR_String check_hlds__det_analysis__ExtraKindStr_78;
#line 1708 "det_analysis.m"
            MR_String check_hlds__det_analysis__ExtraListStr_80;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraPieces_84;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraSpec_85;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_292_292;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_293_293;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_299_299;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_302_302;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_303_303;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_304_304;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_307_307;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_308_308;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_310_310;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_311_311;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_318_318;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_319_319;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_320_320;
#line 1708 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_321_321;

#line 1707 "det_analysis.m"
            {
#line 1707 "det_analysis.m"
              check_hlds__det_analysis__V_292_292 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1707 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_292_292, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1707 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_292_292, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_8));
#line 1707 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_292_292, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1707 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_292_292, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1707 "det_analysis.m"
            }
#line 1707 "det_analysis.m"
            {
#line 1707 "det_analysis.m"
              check_hlds__det_analysis__V_293_293 = parse_tree__set_of_var__to_sorted_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_338_338, check_hlds__det_analysis__ExtraVars_75);
            }
#line 1707 "det_analysis.m"
            {
#line 1707 "det_analysis.m"
              check_hlds__det_analysis__ExtraVarNames_77 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_292_292, check_hlds__det_analysis__V_293_293);
            }
#line 1709 "det_analysis.m"
            {
#line 1709 "det_analysis.m"
              check_hlds__det_analysis__ExtraKindStr_78 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(check_hlds__det_analysis__Kind_25);
            }
#line 1714 "det_analysis.m"
            if ((check_hlds__det_analysis__ExtraVarNames_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1711 "det_analysis.m"
              {
#line 1712 "det_analysis.m"
                {
#line 1712 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_extra_vars empty");
#line 1712 "det_analysis.m"
                  return;
                }
#line 1711 "det_analysis.m"
              }
#line 1714 "det_analysis.m"
            else
#line 1714 "det_analysis.m"
              {
#line 1714 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExtraVarNames_77, (MR_Integer) 1)));
#line 1715 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_355_355 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExtraVarNames_77, (MR_Integer) 0)));

#line 1714 "det_analysis.m"
                if ((check_hlds__det_analysis__V_354_354 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1716 "det_analysis.m"
                  check_hlds__det_analysis__ExtraListStr_80 = (MR_String) "an extra variable:";
#line 1714 "det_analysis.m"
                else
#line 1719 "det_analysis.m"
                  check_hlds__det_analysis__ExtraListStr_80 = (MR_String) "some extra variables:";
#line 1714 "det_analysis.m"
              }
#line 5674 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_349_349 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1721 "det_analysis.m"
            {
#line 1721 "det_analysis.m"
              check_hlds__det_analysis__V_303_303 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_303_303, 0) = ((MR_Box) (check_hlds__det_analysis__ExtraKindStr_78));
#line 1721 "det_analysis.m"
            }
#line 1722 "det_analysis.m"
            {
#line 1722 "det_analysis.m"
              check_hlds__det_analysis__V_308_308 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_308_308, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1722 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_308_308, 1) = ((MR_Box) (check_hlds__det_analysis__ExtraListStr_80));
#line 1722 "det_analysis.m"
            }
#line 1722 "det_analysis.m"
            {
#line 1722 "det_analysis.m"
              check_hlds__det_analysis__V_307_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_307_307, 0) = ((MR_Box) (check_hlds__det_analysis__V_308_308));
#line 1722 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_307_307, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1722 "det_analysis.m"
            }
#line 1721 "det_analysis.m"
            {
#line 1721 "det_analysis.m"
              check_hlds__det_analysis__V_304_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_304_304, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[117])));
#line 1721 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_304_304, 1) = ((MR_Box) (check_hlds__det_analysis__V_307_307));
#line 1721 "det_analysis.m"
            }
#line 1721 "det_analysis.m"
            {
#line 1721 "det_analysis.m"
              check_hlds__det_analysis__V_302_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_302_302, 0) = ((MR_Box) (check_hlds__det_analysis__V_303_303));
#line 1721 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_302_302, 1) = ((MR_Box) (check_hlds__det_analysis__V_304_304));
#line 1721 "det_analysis.m"
            }
#line 1722 "det_analysis.m"
            {
#line 1722 "det_analysis.m"
              check_hlds__det_analysis__V_299_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_299_299, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[116])));
#line 1722 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_299_299, 1) = ((MR_Box) (check_hlds__det_analysis__V_302_302));
#line 1722 "det_analysis.m"
            }
#line 1723 "det_analysis.m"
            {
#line 1723 "det_analysis.m"
              check_hlds__det_analysis__V_311_311 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__ExtraVarNames_77);
            }
#line 1722 "det_analysis.m"
            {
#line 1722 "det_analysis.m"
              check_hlds__det_analysis__V_310_310 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__V_311_311, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[114]));
            }
#line 1721 "det_analysis.m"
            {
#line 1721 "det_analysis.m"
              check_hlds__det_analysis__ExtraPieces_84 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__V_299_299, check_hlds__det_analysis__V_310_310);
            }
#line 1725 "det_analysis.m"
            {
#line 1725 "det_analysis.m"
              check_hlds__det_analysis__V_321_321 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1725 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_321_321, 0) = ((MR_Box) (check_hlds__det_analysis__ExtraPieces_84));
#line 1725 "det_analysis.m"
            }
#line 1725 "det_analysis.m"
            {
#line 1725 "det_analysis.m"
              check_hlds__det_analysis__V_320_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1725 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_320_320, 0) = ((MR_Box) (check_hlds__det_analysis__V_321_321));
#line 1725 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_320_320, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1725 "det_analysis.m"
            }
#line 1725 "det_analysis.m"
            {
#line 1725 "det_analysis.m"
              check_hlds__det_analysis__V_319_319 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1725 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_319_319, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1725 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_319_319, 1) = ((MR_Box) (check_hlds__det_analysis__V_320_320));
#line 1725 "det_analysis.m"
            }
#line 1724 "det_analysis.m"
            {
#line 1724 "det_analysis.m"
              check_hlds__det_analysis__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1724 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_318_318, 0) = ((MR_Box) (check_hlds__det_analysis__V_319_319));
#line 1724 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_318_318, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1724 "det_analysis.m"
            }
#line 1724 "det_analysis.m"
            {
#line 1724 "det_analysis.m"
              check_hlds__det_analysis__ExtraSpec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1724 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1724 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1724 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 2) = ((MR_Box) (check_hlds__det_analysis__V_318_318));
#line 1724 "det_analysis.m"
            }
#line 1726 "det_analysis.m"
            {
#line 1726 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__ExtraSpec_85, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_290_290, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_324_324);
            }
#line 1708 "det_analysis.m"
          }
#line 1728 "det_analysis.m"
        {
#line 1728 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContextToUse_29, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_324_324, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1728 "det_analysis.m"
          return;
        }
#line 1553 "det_analysis.m"
      }
#line 1553 "det_analysis.m"
    else
#line 1553 "det_analysis.m"
      if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1806 "det_analysis.m"
        {
#line 1806 "det_analysis.m"
          MR_Word check_hlds__det_analysis__FromGroundTermKind_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 2)));
#line 1806 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 1)));

#line 1812 "det_analysis.m"
          if ((check_hlds__det_analysis__FromGroundTermKind_106 == (MR_Integer) 1))
#line 1808 "det_analysis.m"
            {
#line 1809 "det_analysis.m"
              *check_hlds__det_analysis__Goal_15 = check_hlds__det_analysis__Goal0_14;
#line 1810 "det_analysis.m"
              *check_hlds__det_analysis__Detism_21 = (MR_Integer) 0;
#line 1811 "det_analysis.m"
              *check_hlds__det_analysis__GoalFailingContexts_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1811 "det_analysis.m"
              *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107;
#line 1808 "det_analysis.m"
            }
#line 1812 "det_analysis.m"
          else
#line 1812 "det_analysis.m"
            if ((check_hlds__det_analysis__FromGroundTermKind_106 == (MR_Integer) 0))
#line 1820 "det_analysis.m"
              {
#line 1821 "det_analysis.m"
                {
#line 1821 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "from_ground_term_initial");
#line 1821 "det_analysis.m"
                  return;
                }
#line 1820 "det_analysis.m"
              }
#line 1812 "det_analysis.m"
            else
#line 1815 "det_analysis.m"
              {
#line 1815 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1815 "det_analysis.m"
                return;
              }
#line 1806 "det_analysis.m"
        }
#line 1553 "det_analysis.m"
      else
#line 1553 "det_analysis.m"
        if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1782 "det_analysis.m"
          {
#line 1783 "det_analysis.m"
            {
#line 1783 "det_analysis.m"
              check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
            }
#line 1790 "det_analysis.m"
            if ((*check_hlds__det_analysis__Detism_21 == (MR_Integer) 4))
#line 1788 "det_analysis.m"
              {
#line 1788 "det_analysis.m"
              }
#line 1790 "det_analysis.m"
            else
#line 1790 "det_analysis.m"
              if ((*check_hlds__det_analysis__Detism_21 == (MR_Integer) 0))
#line 1787 "det_analysis.m"
                {
#line 1787 "det_analysis.m"
                }
#line 1790 "det_analysis.m"
              else
#line 1799 "det_analysis.m"
                {
#line 1802 "det_analysis.m"
                  {
#line 1802 "det_analysis.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "Loop control scope with strange determinism");
#line 1802 "det_analysis.m"
                    return;
                  }
#line 1799 "det_analysis.m"
                }
#line 1782 "det_analysis.m"
          }
#line 1553 "det_analysis.m"
        else
#line 1553 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1732 "det_analysis.m"
            {
#line 1732 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Detism0_91;
#line 1732 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_120_120;
#line 1753 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Detism1_92;

#line 1733 "det_analysis.m"
              {
#line 1733 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, &check_hlds__det_analysis__Detism0_91, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_120_120);
              }
#line 1744 "det_analysis.m"
              if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 4))
#line 1745 "det_analysis.m"
                {
#line 1745 "det_analysis.m"
                  check_hlds__det_analysis__Detism1_92 = (MR_Integer) 4;
#line 1745 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1745 "det_analysis.m"
                }
#line 1744 "det_analysis.m"
              else
#line 1744 "det_analysis.m"
                if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 0))
#line 1742 "det_analysis.m"
                  {
#line 1742 "det_analysis.m"
                    check_hlds__det_analysis__Detism1_92 = (MR_Integer) 0;
#line 1742 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1742 "det_analysis.m"
                  }
#line 1744 "det_analysis.m"
                else
#line 1744 "det_analysis.m"
                  if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 6))
#line 1748 "det_analysis.m"
                    {
#line 1748 "det_analysis.m"
                      check_hlds__det_analysis__Detism1_92 = (MR_Integer) 0;
#line 1748 "det_analysis.m"
                      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1748 "det_analysis.m"
                    }
#line 1744 "det_analysis.m"
                  else
#line 1744 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
#line 1753 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1752 "det_analysis.m"
                {
#line 1752 "det_analysis.m"
                  *check_hlds__det_analysis__Detism_21 = check_hlds__det_analysis__Detism1_92;
#line 1752 "det_analysis.m"
                  *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_120_120;
#line 1752 "det_analysis.m"
                }
#line 1753 "det_analysis.m"
              else
#line 1754 "det_analysis.m"
                {
#line 1754 "det_analysis.m"
                  MR_String check_hlds__det_analysis__DetismStr_93;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Pieces_94;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Spec_95;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_123_123;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_124_124;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_134_134;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_135_135;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_136_136;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_137_137;
#line 1754 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Context_326;

#line 1754 "det_analysis.m"
                  *check_hlds__det_analysis__Detism_21 = check_hlds__det_analysis__Detism0_91;
#line 1755 "det_analysis.m"
                  {
#line 1755 "det_analysis.m"
                    check_hlds__det_analysis__Context_326 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
                  }
#line 1756 "det_analysis.m"
                  {
#line 1756 "det_analysis.m"
                    check_hlds__det_analysis__DetismStr_93 = parse_tree__prog_out__determinism_to_string_1_f_0(*check_hlds__det_analysis__Detism_21);
                  }
#line 1758 "det_analysis.m"
                  {
#line 1758 "det_analysis.m"
                    check_hlds__det_analysis__V_124_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1758 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_124_124, 0) = ((MR_Box) (check_hlds__det_analysis__DetismStr_93));
#line 1758 "det_analysis.m"
                  }
#line 1757 "det_analysis.m"
                  {
#line 1757 "det_analysis.m"
                    check_hlds__det_analysis__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1757 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_123_123, 0) = ((MR_Box) (check_hlds__det_analysis__V_124_124));
#line 1757 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[35])));
#line 1757 "det_analysis.m"
                  }
#line 1757 "det_analysis.m"
                  {
#line 1757 "det_analysis.m"
                    check_hlds__det_analysis__Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1757 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[118])));
#line 1757 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_94, 1) = ((MR_Box) (check_hlds__det_analysis__V_123_123));
#line 1757 "det_analysis.m"
                  }
#line 1761 "det_analysis.m"
                  {
#line 1761 "det_analysis.m"
                    check_hlds__det_analysis__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1761 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_137_137, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_94));
#line 1761 "det_analysis.m"
                  }
#line 1761 "det_analysis.m"
                  {
#line 1761 "det_analysis.m"
                    check_hlds__det_analysis__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1761 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 0) = ((MR_Box) (check_hlds__det_analysis__V_137_137));
#line 1761 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1761 "det_analysis.m"
                  }
#line 1761 "det_analysis.m"
                  {
#line 1761 "det_analysis.m"
                    check_hlds__det_analysis__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1761 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_135_135, 0) = ((MR_Box) (check_hlds__det_analysis__Context_326));
#line 1761 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_135_135, 1) = ((MR_Box) (check_hlds__det_analysis__V_136_136));
#line 1761 "det_analysis.m"
                  }
#line 1760 "det_analysis.m"
                  {
#line 1760 "det_analysis.m"
                    check_hlds__det_analysis__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1760 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 0) = ((MR_Box) (check_hlds__det_analysis__V_135_135));
#line 1760 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1760 "det_analysis.m"
                  }
#line 1760 "det_analysis.m"
                  {
#line 1760 "det_analysis.m"
                    check_hlds__det_analysis__Spec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1760 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1760 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1760 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 2) = ((MR_Box) (check_hlds__det_analysis__V_134_134));
#line 1760 "det_analysis.m"
                  }
#line 1762 "det_analysis.m"
                  {
#line 1762 "det_analysis.m"
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_95, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_120_120, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1762 "det_analysis.m"
                    return;
                  }
#line 1754 "det_analysis.m"
                }
#line 1732 "det_analysis.m"
            }
#line 1553 "det_analysis.m"
          else
#line 1553 "det_analysis.m"
            if (((((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 0))))))
#line 1776 "det_analysis.m"
              {
#line 1776 "det_analysis.m"
                MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_117_117;

#line 1777 "det_analysis.m"
                {
#line 1777 "det_analysis.m"
                  check_hlds__det_util__det_info_set_has_req_scope_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_117_117);
                }
#line 1778 "det_analysis.m"
                {
#line 1778 "det_analysis.m"
                  check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_117_117, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1778 "det_analysis.m"
                  return;
                }
#line 1776 "det_analysis.m"
              }
#line 1553 "det_analysis.m"
            else
#line 1769 "det_analysis.m"
              {
#line 1769 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1769 "det_analysis.m"
                return;
              }
#line 1540 "det_analysis.m"
  }
#line 1540 "det_analysis.m"
}

#line 1516 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1516 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7,
#line 1516 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_CanFail_8,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9,
#line 1516 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10,
#line 1516 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11,
#line 1516 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12)
#line 1516 "det_analysis.m"
{
#line 1522 "det_analysis.m"
  {
#line 1522 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 1522 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1522 "det_analysis.m"
      {
#line 1522 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11;
#line 1522 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10 = check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9;
#line 1522 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_CanFail_8 = check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7;
#line 1522 "det_analysis.m"
      }
#line 1522 "det_analysis.m"
    else
#line 1527 "det_analysis.m"
      {
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_28;
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_29;
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_37;
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_38;
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_39;
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46;
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47;
#line 1527 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48;

#line 1528 "det_analysis.m"
        {
#line 1528 "det_analysis.m"
          check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__Goal0_26, &check_hlds__det_analysis__Goal_28, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__FirstDetism_37, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46);
        }
#line 1531 "det_analysis.m"
        {
#line 1531 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_37, &check_hlds__det_analysis__FirstCanFail_38, &check_hlds__det_analysis__FirstMaxSolns_39);
        }
#line 1532 "det_analysis.m"
        {
#line 1532 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7, check_hlds__det_analysis__FirstCanFail_38, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47);
        }
#line 1533 "det_analysis.m"
        {
#line 1533 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9, check_hlds__det_analysis__FirstMaxSolns_39, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48);
        }
#line 1534 "det_analysis.m"
        {
#line 1534 "det_analysis.m"
          check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(check_hlds__det_analysis__Goals0_27, &check_hlds__det_analysis__Goals_29, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47, check_hlds__det_analysis__STATE_VARIABLE_CanFail_8, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12);
        }
#line 1527 "det_analysis.m"
        {
#line 1527 "det_analysis.m"
          MR_Word base;
#line 1527 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 1527 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_28));
#line 1527 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_29));
#line 1527 "det_analysis.m"
        }
#line 1527 "det_analysis.m"
      }
#line 1522 "det_analysis.m"
  }
#line 1516 "det_analysis.m"
}

#line 1496 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
#line 1496 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg)
#line 1496 "det_analysis.m"
{
#line 1496 "det_analysis.m"
  {
#line 1496 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1496 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1496 "det_analysis.m"
    {
#line 1496 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1496__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))));
    }
#line 1496 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1496 "det_analysis.m"
  }
#line 1496 "det_analysis.m"
}

#line 1480 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1480 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_12,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15,
#line 1480 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_16,
#line 1480 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25,
#line 1480 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26)
#line 1480 "det_analysis.m"
{
#line 1486 "det_analysis.m"
  {
#line 1486 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1486 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts_18;
#line 1486 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27;

#line 1487 "det_analysis.m"
    {
#line 1487 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_10, check_hlds__det_analysis__Goal_11, check_hlds__det_analysis__InstMap0_12, check_hlds__det_analysis__SolnContext_13, check_hlds__det_analysis__RightFailingContexts_14, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15, check_hlds__det_analysis__Detism_16, &check_hlds__det_analysis__GoalFailingContexts_18, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27);
    }
#line 1498 "det_analysis.m"
    if ((((((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 4)) || ((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 0)))) || ((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 6))))
#line 1494 "det_analysis.m"
      {
#line 1494 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_48_48;

#line 1496 "det_analysis.m"
        {
#line 1496 "det_analysis.m"
          check_hlds__det_analysis__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
#line 1496 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1));
#line 1496 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1496 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 3) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts_18));
#line 1496 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1496 "det_analysis.m"
        }
#line 1496 "det_analysis.m"
        {
#line 1496 "det_analysis.m"
          mercury__require__expect_4_p_0(check_hlds__det_analysis__V_48_48, (MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
        }
#line 1496 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27;
#line 1494 "det_analysis.m"
      }
#line 1498 "det_analysis.m"
    else
#line 1504 "det_analysis.m"
      {
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_10, (MR_Integer) 1)));
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_21;
#line 1504 "det_analysis.m"
        MR_String check_hlds__det_analysis__DetismStr_22;
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_23;
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_24;
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_30_30;
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_31_31;
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_41_41;
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_42_42;
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_43_43;
#line 1504 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_44_44;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_10, (MR_Integer) 0)));

#line 1506 "det_analysis.m"
        {
#line 1506 "det_analysis.m"
          check_hlds__det_analysis__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo0_20);
        }
#line 1507 "det_analysis.m"
        {
#line 1507 "det_analysis.m"
          check_hlds__det_analysis__DetismStr_22 = parse_tree__prog_out__determinism_to_string_1_f_0(*check_hlds__det_analysis__Detism_16);
        }
#line 1509 "det_analysis.m"
        {
#line 1509 "det_analysis.m"
          check_hlds__det_analysis__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "det_analysis.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_31_31, 0) = ((MR_Box) (check_hlds__det_analysis__DetismStr_22));
#line 1509 "det_analysis.m"
        }
#line 1508 "det_analysis.m"
        {
#line 1508 "det_analysis.m"
          check_hlds__det_analysis__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_30_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_31_31));
#line 1508 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[35])));
#line 1508 "det_analysis.m"
        }
#line 1508 "det_analysis.m"
        {
#line 1508 "det_analysis.m"
          check_hlds__det_analysis__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[102])));
#line 1508 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_23, 1) = ((MR_Box) (check_hlds__det_analysis__V_30_30));
#line 1508 "det_analysis.m"
        }
#line 1512 "det_analysis.m"
        {
#line 1512 "det_analysis.m"
          check_hlds__det_analysis__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_44_44, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_23));
#line 1512 "det_analysis.m"
        }
#line 1512 "det_analysis.m"
        {
#line 1512 "det_analysis.m"
          check_hlds__det_analysis__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1512 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_43_43, 0) = ((MR_Box) (check_hlds__det_analysis__V_44_44));
#line 1512 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1512 "det_analysis.m"
        }
#line 1512 "det_analysis.m"
        {
#line 1512 "det_analysis.m"
          check_hlds__det_analysis__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_42_42, 0) = ((MR_Box) (check_hlds__det_analysis__Context_21));
#line 1512 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_42_42, 1) = ((MR_Box) (check_hlds__det_analysis__V_43_43));
#line 1512 "det_analysis.m"
        }
#line 1511 "det_analysis.m"
        {
#line 1511 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_41_41, 0) = ((MR_Box) (check_hlds__det_analysis__V_42_42));
#line 1511 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1511 "det_analysis.m"
        }
#line 1511 "det_analysis.m"
        {
#line 1511 "det_analysis.m"
          check_hlds__det_analysis__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1511 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1511 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1511 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 2) = ((MR_Box) (check_hlds__det_analysis__V_41_41));
#line 1511 "det_analysis.m"
        }
#line 1513 "det_analysis.m"
        {
#line 1513 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_24, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26);
#line 1513 "det_analysis.m"
          return;
        }
#line 1504 "det_analysis.m"
      }
#line 1486 "det_analysis.m"
  }
#line 1480 "det_analysis.m"
}

#line 1439 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MainGoal0_12,
#line 1439 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__MainGoal_13,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__OrElseGoals0_14,
#line 1439 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__OrElseGoals_15,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_16,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19,
#line 1439 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_20,
#line 1439 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30,
#line 1439 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31)
#line 1439 "det_analysis.m"
{
#line 1446 "det_analysis.m"
  {
#line 1446 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1446 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MainDetism_22;
#line 1446 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32;

#line 1447 "det_analysis.m"
    {
#line 1447 "det_analysis.m"
      check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__MainGoal0_12, check_hlds__det_analysis__MainGoal_13, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, &check_hlds__det_analysis__MainDetism_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32);
    }
#line 1454 "det_analysis.m"
    if ((check_hlds__det_analysis__OrElseGoals0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1451 "det_analysis.m"
      {
#line 1452 "det_analysis.m"
        *check_hlds__det_analysis__OrElseGoals_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1453 "det_analysis.m"
        *check_hlds__det_analysis__Detism_20 = check_hlds__det_analysis__MainDetism_22;
#line 1453 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32;
#line 1451 "det_analysis.m"
      }
#line 1454 "det_analysis.m"
    else
#line 1455 "det_analysis.m"
      {
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainCanFail_25;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainMaxSolns_26;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_27;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns0_28;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns_29;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_47;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_48;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_49;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_50;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_58;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_59;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_60;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68;
#line 1455 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69;

#line 1456 "det_analysis.m"
        {
#line 1456 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__MainDetism_22, &check_hlds__det_analysis__MainCanFail_25, &check_hlds__det_analysis__MainMaxSolns_26);
        }
#line 1527 "det_analysis.m"
        check_hlds__det_analysis__Goal0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OrElseGoals0_14, (MR_Integer) 0)));
#line 1527 "det_analysis.m"
        check_hlds__det_analysis__Goals0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OrElseGoals0_14, (MR_Integer) 1)));
#line 1528 "det_analysis.m"
        {
#line 1528 "det_analysis.m"
          check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__Goal0_47, &check_hlds__det_analysis__Goal_49, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, &check_hlds__det_analysis__FirstDetism_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67);
        }
#line 1531 "det_analysis.m"
        {
#line 1531 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_58, &check_hlds__det_analysis__FirstCanFail_59, &check_hlds__det_analysis__FirstMaxSolns_60);
        }
#line 1532 "det_analysis.m"
        {
#line 1532 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__MainCanFail_25, check_hlds__det_analysis__FirstCanFail_59, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68);
        }
#line 1533 "det_analysis.m"
        {
#line 1533 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__MainMaxSolns_26, check_hlds__det_analysis__FirstMaxSolns_60, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69);
        }
#line 1534 "det_analysis.m"
        {
#line 1534 "det_analysis.m"
          check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(check_hlds__det_analysis__Goals0_48, &check_hlds__det_analysis__Goals_50, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68, &check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69, &check_hlds__det_analysis__MaxSolns0_28, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31);
        }
#line 1527 "det_analysis.m"
        {
#line 1527 "det_analysis.m"
          MR_Word base;
#line 1527 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "det_analysis.m"
          *check_hlds__det_analysis__OrElseGoals_15 = base;
#line 1527 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_49));
#line 1527 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_50));
#line 1527 "det_analysis.m"
        }
#line 1463 "det_analysis.m"
        if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 3))
#line 1475 "det_analysis.m"
          check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 3;
#line 1463 "det_analysis.m"
        else
#line 1463 "det_analysis.m"
          if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 2))
#line 1472 "det_analysis.m"
            check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 2;
#line 1463 "det_analysis.m"
          else
#line 1463 "det_analysis.m"
            if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 1))
#line 1469 "det_analysis.m"
              check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 2;
#line 1463 "det_analysis.m"
            else
#line 1462 "det_analysis.m"
              check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 0;
#line 1477 "det_analysis.m"
        {
#line 1477 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_20, check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__MaxSolns_29);
#line 1477 "det_analysis.m"
          return;
        }
#line 1455 "det_analysis.m"
      }
#line 1446 "det_analysis.m"
  }
#line 1439 "det_analysis.m"
}

#line 1402 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1402 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_13,
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14,
#line 1402 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1402 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1402 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24,
#line 1402 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25)
#line 1402 "det_analysis.m"
{
#line 1408 "det_analysis.m"
  {
#line 1408 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1408 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NegDetism_18;
#line 1408 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDetism_20;
#line 1408 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_21;
#line 1416 "det_analysis.m"
    MR_Word check_hlds__det_analysis___NegatedGoalCanFail_19;
#line 1427 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_22_22;

#line 1416 "det_analysis.m"
    {
#line 1416 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_10, check_hlds__det_analysis__Goal_11, check_hlds__det_analysis__InstMap0_13, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14, &check_hlds__det_analysis__NegDetism_18, &check_hlds__det_analysis___NegatedGoalCanFail_19, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25);
    }
#line 1419 "det_analysis.m"
    {
#line 1419 "det_analysis.m"
      parse_tree__prog_data__det_negation_det_2_p_0(check_hlds__det_analysis__NegDetism_18, &check_hlds__det_analysis__MaybeDetism_20);
    }
#line 1424 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1421 "det_analysis.m"
      {
#line 1422 "det_analysis.m"
        {
#line 1422 "det_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_not\'/9", (MR_String) "inappropriate determinism inside a negation");
#line 1422 "det_analysis.m"
          return;
        }
#line 1421 "det_analysis.m"
      }
#line 1424 "det_analysis.m"
    else
#line 1425 "det_analysis.m"
      *check_hlds__det_analysis__Detism_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDetism_20, (MR_Integer) 0)));
#line 1427 "det_analysis.m"
    {
#line 1427 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_15, &check_hlds__det_analysis__CanFail_21, &check_hlds__det_analysis__V_22_22);
    }
#line 1432 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_21 == (MR_Integer) 0))
#line 1429 "det_analysis.m"
      {
#line 1429 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_23;
#line 1429 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_32_32;

#line 1430 "det_analysis.m"
        {
#line 1430 "det_analysis.m"
          check_hlds__det_analysis__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_12);
        }
#line 1431 "det_analysis.m"
        {
#line 1431 "det_analysis.m"
          check_hlds__det_analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_32_32, 0) = ((MR_Box) (check_hlds__det_analysis__Context_23));
#line 1431 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1431 "det_analysis.m"
        }
#line 1431 "det_analysis.m"
        {
#line 1431 "det_analysis.m"
          MR_Word base;
#line 1431 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_16 = base;
#line 1431 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__V_32_32));
#line 1431 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1431 "det_analysis.m"
        }
#line 1429 "det_analysis.m"
      }
#line 1432 "det_analysis.m"
    else
#line 1434 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "det_analysis.m"
  }
#line 1402 "det_analysis.m"
}

#line 1314 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cond0_15,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cond_16,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Then0_17,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Then_18,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Else0_19,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Else_20,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_21,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_22,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_23,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_25,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_26,
#line 1314 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48,
#line 1314 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49)
#line 1314 "det_analysis.m"
{
#line 1322 "det_analysis.m"
  {
#line 1322 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_66_66;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InstMap1_29;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenDetism_30;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenFailingContexts_31;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenCanFail_32;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenMaxSoln_33;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondSolnContext_34;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondDetism_35;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondCanFail_37;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondMaxSoln_38;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseDetism_39;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseFailingContexts_40;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseCanFail_41;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseMaxSoln_42;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_57_57;
#line 1322 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58;
#line 1352 "det_analysis.m"
    MR_Word check_hlds__det_analysis___CondFailingContexts_36;

#line 1331 "det_analysis.m"
    {
#line 1331 "det_analysis.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__det_analysis__Cond0_15, check_hlds__det_analysis__InstMap0_21, &check_hlds__det_analysis__InstMap1_29);
    }
#line 1332 "det_analysis.m"
    {
#line 1332 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Then0_17, check_hlds__det_analysis__Then_18, check_hlds__det_analysis__InstMap1_29, check_hlds__det_analysis__SolnContext_22, check_hlds__det_analysis__RightFailingContexts_23, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__ThenDetism_30, &check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53);
    }
#line 1335 "det_analysis.m"
    {
#line 1335 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ThenDetism_30, &check_hlds__det_analysis__ThenCanFail_32, &check_hlds__det_analysis__ThenMaxSoln_33);
    }
#line 1341 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ThenCanFail_32 == (MR_Integer) 1);
#line 1341 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1342 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_22 == (MR_Integer) 1);
#line 1345 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1344 "det_analysis.m"
      check_hlds__det_analysis__CondSolnContext_34 = (MR_Integer) 1;
#line 1345 "det_analysis.m"
    else
#line 1346 "det_analysis.m"
      check_hlds__det_analysis__CondSolnContext_34 = (MR_Integer) 0;
#line 6872 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_66_66 = (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0;
#line 1352 "det_analysis.m"
    {
#line 1352 "det_analysis.m"
      check_hlds__det_analysis__V_57_57 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_66_66, check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__RightFailingContexts_23);
    }
#line 1352 "det_analysis.m"
    {
#line 1352 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Cond0_15, check_hlds__det_analysis__Cond_16, check_hlds__det_analysis__InstMap0_21, check_hlds__det_analysis__CondSolnContext_34, check_hlds__det_analysis__V_57_57, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis___CondFailingContexts_36, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58);
    }
#line 1356 "det_analysis.m"
    {
#line 1356 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis__CondCanFail_37, &check_hlds__det_analysis__CondMaxSoln_38);
    }
#line 1362 "det_analysis.m"
    {
#line 1362 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Else0_19, check_hlds__det_analysis__Else_20, check_hlds__det_analysis__InstMap0_21, check_hlds__det_analysis__SolnContext_22, check_hlds__det_analysis__RightFailingContexts_23, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__ElseDetism_39, &check_hlds__det_analysis__ElseFailingContexts_40, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49);
    }
#line 1365 "det_analysis.m"
    {
#line 1365 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ElseDetism_39, &check_hlds__det_analysis__ElseCanFail_41, &check_hlds__det_analysis__ElseMaxSoln_42);
    }
#line 1372 "det_analysis.m"
    if ((check_hlds__det_analysis__CondCanFail_37 == (MR_Integer) 0))
#line 1386 "det_analysis.m"
      if ((check_hlds__det_analysis__CondMaxSoln_38 == (MR_Integer) 0))
#line 1375 "det_analysis.m"
        {
#line 1375 "det_analysis.m"
          MR_Word check_hlds__det_analysis__MaybeNegDetism_43;
#line 1375 "det_analysis.m"
          MR_Word check_hlds__det_analysis__NegDetism_44;

#line 1377 "det_analysis.m"
          {
#line 1377 "det_analysis.m"
            parse_tree__prog_data__det_negation_det_2_p_0(check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis__MaybeNegDetism_43);
          }
#line 1382 "det_analysis.m"
          if ((check_hlds__det_analysis__MaybeNegDetism_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1379 "det_analysis.m"
            {
#line 1380 "det_analysis.m"
              {
#line 1380 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_if_then_else\'/14", (MR_String) "cannot find determinism of negated condition");
#line 1380 "det_analysis.m"
                return;
              }
#line 1379 "det_analysis.m"
            }
#line 1382 "det_analysis.m"
          else
#line 1383 "det_analysis.m"
            check_hlds__det_analysis__NegDetism_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeNegDetism_43, (MR_Integer) 0)));
#line 1385 "det_analysis.m"
          {
#line 1385 "det_analysis.m"
            parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__NegDetism_44, check_hlds__det_analysis__ElseDetism_39, check_hlds__det_analysis__Detism_25);
          }
#line 1375 "det_analysis.m"
        }
#line 1386 "det_analysis.m"
      else
#line 1390 "det_analysis.m"
        {
#line 1390 "det_analysis.m"
          MR_Word check_hlds__det_analysis__CTMaxSoln_45;
#line 1390 "det_analysis.m"
          MR_Word check_hlds__det_analysis__MaxSoln_46;
#line 1390 "det_analysis.m"
          MR_Word check_hlds__det_analysis__CanFail_47;

#line 1391 "det_analysis.m"
          {
#line 1391 "det_analysis.m"
            parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__CondMaxSoln_38, check_hlds__det_analysis__ThenMaxSoln_33, &check_hlds__det_analysis__CTMaxSoln_45);
          }
#line 1392 "det_analysis.m"
          {
#line 1392 "det_analysis.m"
            parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__CTMaxSoln_45, check_hlds__det_analysis__ElseMaxSoln_42, &check_hlds__det_analysis__MaxSoln_46);
          }
#line 1393 "det_analysis.m"
          {
#line 1393 "det_analysis.m"
            parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__ThenCanFail_32, check_hlds__det_analysis__ElseCanFail_41, &check_hlds__det_analysis__CanFail_47);
          }
#line 1394 "det_analysis.m"
          {
#line 1394 "det_analysis.m"
            parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_25, check_hlds__det_analysis__CanFail_47, check_hlds__det_analysis__MaxSoln_46);
          }
#line 1390 "det_analysis.m"
        }
#line 1372 "det_analysis.m"
    else
#line 1371 "det_analysis.m"
      {
#line 1371 "det_analysis.m"
        parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__CondDetism_35, check_hlds__det_analysis__ThenDetism_30, check_hlds__det_analysis__Detism_25);
      }
#line 1400 "det_analysis.m"
    {
#line 1400 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_26 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_66_66, check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__ElseFailingContexts_40);
    }
#line 1322 "det_analysis.m"
  }
#line 1314 "det_analysis.m"
}

#line 1225 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__LHS_14,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RHS0_15,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Unify_16,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__UnifyContext_17,
#line 1225 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__RHS_18,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_19,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_20,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_21,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_22,
#line 1225 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 1225 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 1225 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85,
#line 1225 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86)
#line 1225 "det_analysis.m"
{
#line 1233 "det_analysis.m"
  {
#line 1233 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1233 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UnifyCanFail_47;
#line 1233 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ExaminesRepresentation_48;
#line 1233 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UnifyNumSolns_49;
#line 1233 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101;
#line 1233 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_103_103;

#line 1260 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__RHS0_15)) == (MR_mktag((MR_Integer) 2))))
#line 1246 "det_analysis.m"
      {
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Groundness_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredOrFunc_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NonLocalVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 2)));
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 3)));
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 4)));
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaDeclaredDet_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 5)));
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 6)));
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaSolnContext_37;
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_38;
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_39;
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_40;
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaInferredDet_41;
#line 1246 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100;
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_125_125;
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_36_36;
#line 1254 "det_analysis.m"
        MR_Word check_hlds__det_analysis___LambdaFailingContexts_42;

#line 1247 "det_analysis.m"
        {
#line 1247 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__LambdaDeclaredDet_34, &check_hlds__det_analysis__V_36_36, &check_hlds__det_analysis__V_125_125);
        }
#line 1247 "det_analysis.m"
        check_hlds__det_analysis__succeeded = ((MR_Integer) 2 == check_hlds__det_analysis__V_125_125);
#line 1249 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1248 "det_analysis.m"
          check_hlds__det_analysis__LambdaSolnContext_37 = (MR_Integer) 1;
#line 1249 "det_analysis.m"
        else
#line 1250 "det_analysis.m"
          check_hlds__det_analysis__LambdaSolnContext_37 = (MR_Integer) 0;
#line 1252 "det_analysis.m"
        {
#line 1252 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85, &check_hlds__det_analysis__ModuleInfo_38);
        }
#line 1253 "det_analysis.m"
        {
#line 1253 "det_analysis.m"
          hlds__instmap__pre_lambda_update_5_p_0(check_hlds__det_analysis__ModuleInfo_38, check_hlds__det_analysis__Vars_32, check_hlds__det_analysis__Modes_33, check_hlds__det_analysis__InstMap0_20, &check_hlds__det_analysis__InstMap1_39);
        }
#line 1254 "det_analysis.m"
        {
#line 1254 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_35, &check_hlds__det_analysis__Goal_40, check_hlds__det_analysis__InstMap1_39, check_hlds__det_analysis__LambdaSolnContext_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__LambdaInferredDet_41, &check_hlds__det_analysis___LambdaFailingContexts_42, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100);
        }
#line 1256 "det_analysis.m"
        {
#line 1256 "det_analysis.m"
          check_hlds__det_report__det_check_lambda_7_p_0(check_hlds__det_analysis__LambdaDeclaredDet_34, check_hlds__det_analysis__LambdaInferredDet_41, check_hlds__det_analysis__Goal_40, check_hlds__det_analysis__GoalInfo_19, check_hlds__det_analysis__InstMap1_39, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101);
        }
#line 1258 "det_analysis.m"
        {
#line 1258 "det_analysis.m"
          MR_Word base;
#line 1258 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "det_analysis.m"
          *check_hlds__det_analysis__RHS_18 = base;
#line 1258 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((check_hlds__det_analysis__Purity_27 | ((((check_hlds__det_analysis__Groundness_28 << (MR_Integer) 2)) | ((check_hlds__det_analysis__PredOrFunc_29 << (MR_Integer) 3)))))));
#line 1258 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 1258 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__det_analysis__NonLocalVars_31));
#line 1258 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__det_analysis__Vars_32));
#line 1258 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__det_analysis__Modes_33));
#line 1258 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__det_analysis__LambdaDeclaredDet_34));
#line 1258 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (check_hlds__det_analysis__Goal_40));
#line 1258 "det_analysis.m"
        }
#line 1246 "det_analysis.m"
      }
#line 1260 "det_analysis.m"
    else
#line 1263 "det_analysis.m"
      {
#line 1264 "det_analysis.m"
        *check_hlds__det_analysis__RHS_18 = check_hlds__det_analysis__RHS0_15;
#line 1264 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85;
#line 1263 "det_analysis.m"
      }
#line 1266 "det_analysis.m"
    {
#line 1266 "det_analysis.m"
      check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(check_hlds__det_analysis__Unify_16, &check_hlds__det_analysis__UnifyCanFail_47);
    }
#line 1267 "det_analysis.m"
    {
#line 1267 "det_analysis.m"
      check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(check_hlds__det_analysis__Unify_16, &check_hlds__det_analysis__ExaminesRepresentation_48);
    }
#line 1268 "det_analysis.m"
    {
#line 1268 "det_analysis.m"
      check_hlds__det_analysis__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 0) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_17));
#line 1268 "det_analysis.m"
    }
#line 1268 "det_analysis.m"
    {
#line 1268 "det_analysis.m"
      check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(check_hlds__det_analysis__LHS_14, check_hlds__det_analysis__ExaminesRepresentation_48, check_hlds__det_analysis__UnifyCanFail_47, check_hlds__det_analysis__SolnContext_21, check_hlds__det_analysis__RightFailingContexts_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalInfo_19, check_hlds__det_analysis__V_103_103, &check_hlds__det_analysis__UnifyNumSolns_49, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86);
    }
#line 1271 "det_analysis.m"
    {
#line 1271 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_23, check_hlds__det_analysis__UnifyCanFail_47, check_hlds__det_analysis__UnifyNumSolns_49);
    }
#line 1307 "det_analysis.m"
    if ((check_hlds__det_analysis__UnifyCanFail_47 == (MR_Integer) 0))
#line 1273 "det_analysis.m"
      {
#line 1273 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_50;

#line 1274 "det_analysis.m"
        {
#line 1274 "det_analysis.m"
          check_hlds__det_analysis__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_19);
        }
#line 1278 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 2))))
#line 1279 "det_analysis.m"
          {
#line 1280 "det_analysis.m"
            {
#line 1280 "det_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail assign");
#line 1280 "det_analysis.m"
              return;
            }
#line 1279 "det_analysis.m"
          }
#line 1278 "det_analysis.m"
        else
#line 1278 "det_analysis.m"
          if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 0))))
#line 1276 "det_analysis.m"
            {
#line 1277 "det_analysis.m"
              {
#line 1277 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail construct");
#line 1277 "det_analysis.m"
                return;
              }
#line 1276 "det_analysis.m"
            }
#line 1278 "det_analysis.m"
          else
#line 1278 "det_analysis.m"
            if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 1))))
#line 1297 "det_analysis.m"
              {
#line 1297 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 0)));
#line 1297 "det_analysis.m"
                MR_Word check_hlds__det_analysis__FailingGoal_117;
#line 1297 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ConsId_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 1)));
#line 1297 "det_analysis.m"
                MR_Word check_hlds__det_analysis__FailingContext_119;
#line 1297 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 2)));
#line 1297 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 3)));
#line 1297 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 4)));
#line 1297 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 5)));

#line 1298 "det_analysis.m"
                {
#line 1298 "det_analysis.m"
                  check_hlds__det_analysis__FailingGoal_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1298 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 1) = ((MR_Box) (check_hlds__det_analysis__Var_78));
#line 1298 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 2) = ((MR_Box) (check_hlds__det_analysis__ConsId_118));
#line 1298 "det_analysis.m"
                }
#line 1299 "det_analysis.m"
                {
#line 1299 "det_analysis.m"
                  check_hlds__det_analysis__FailingContext_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_119, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1299 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_119, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_117));
#line 1299 "det_analysis.m"
                }
#line 1300 "det_analysis.m"
                {
#line 1300 "det_analysis.m"
                  MR_Word base;
#line 1300 "det_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "det_analysis.m"
                  *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1300 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_119));
#line 1300 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "det_analysis.m"
                }
#line 1297 "det_analysis.m"
              }
#line 1278 "det_analysis.m"
            else
#line 1278 "det_analysis.m"
              if (((((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1282 "det_analysis.m"
                {
#line 1282 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingGoal_64;
#line 1282 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingContext_77;

#line 1286 "det_analysis.m"
                  if (((MR_tag((MR_Word) *check_hlds__det_analysis__RHS_18)) == (MR_mktag((MR_Integer) 1))))
#line 1287 "det_analysis.m"
                    {
#line 1287 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__ConsId_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 0)));
#line 1287 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 1)));
#line 1287 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 2)));

#line 1288 "det_analysis.m"
                      {
#line 1288 "det_analysis.m"
                        check_hlds__det_analysis__FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1288 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 1) = ((MR_Box) (check_hlds__det_analysis__LHS_14));
#line 1288 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 2) = ((MR_Box) (check_hlds__det_analysis__ConsId_65));
#line 1288 "det_analysis.m"
                      }
#line 1287 "det_analysis.m"
                    }
#line 1286 "det_analysis.m"
                  else
#line 1286 "det_analysis.m"
                    if (((MR_tag((MR_Word) *check_hlds__det_analysis__RHS_18)) == (MR_mktag((MR_Integer) 2))))
#line 1290 "det_analysis.m"
                      {
#line 1291 "det_analysis.m"
                        {
#line 1291 "det_analysis.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "complicated_unify but no fail context");
#line 1291 "det_analysis.m"
                          return;
                        }
#line 1290 "det_analysis.m"
                      }
#line 1286 "det_analysis.m"
                    else
#line 1284 "det_analysis.m"
                      {
#line 1284 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__RHSVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__det_analysis__RHS_18, (MR_Integer) 0)));

#line 1285 "det_analysis.m"
                        {
#line 1285 "det_analysis.m"
                          check_hlds__det_analysis__FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "det_analysis.m"
                          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_64, 0) = ((MR_Box) (check_hlds__det_analysis__LHS_14));
#line 1285 "det_analysis.m"
                          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_64, 1) = ((MR_Box) (check_hlds__det_analysis__RHSVar_63));
#line 1285 "det_analysis.m"
                        }
#line 1284 "det_analysis.m"
                      }
#line 1294 "det_analysis.m"
                  {
#line 1294 "det_analysis.m"
                    check_hlds__det_analysis__FailingContext_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1294 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_77, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1294 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_77, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_64));
#line 1294 "det_analysis.m"
                  }
#line 1295 "det_analysis.m"
                  {
#line 1295 "det_analysis.m"
                    MR_Word base;
#line 1295 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "det_analysis.m"
                    *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1295 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_77));
#line 1295 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1295 "det_analysis.m"
                  }
#line 1282 "det_analysis.m"
                }
#line 1278 "det_analysis.m"
              else
#line 1302 "det_analysis.m"
                {
#line 1302 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Var1_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 1)));
#line 1302 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Var2_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 2)));
#line 1302 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingGoal_120;
#line 1302 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingContext_121;

#line 1303 "det_analysis.m"
                  {
#line 1303 "det_analysis.m"
                    check_hlds__det_analysis__FailingGoal_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_120, 0) = ((MR_Box) (check_hlds__det_analysis__Var1_83));
#line 1303 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_120, 1) = ((MR_Box) (check_hlds__det_analysis__Var2_84));
#line 1303 "det_analysis.m"
                  }
#line 1304 "det_analysis.m"
                  {
#line 1304 "det_analysis.m"
                    check_hlds__det_analysis__FailingContext_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_121, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1304 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_121, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_120));
#line 1304 "det_analysis.m"
                  }
#line 1305 "det_analysis.m"
                  {
#line 1305 "det_analysis.m"
                    MR_Word base;
#line 1305 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "det_analysis.m"
                    *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1305 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_121));
#line 1305 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1305 "det_analysis.m"
                  }
#line 1302 "det_analysis.m"
                }
#line 1273 "det_analysis.m"
      }
#line 1307 "det_analysis.m"
    else
#line 1309 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1233 "det_analysis.m"
  }
#line 1225 "det_analysis.m"
}

#line 1091 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GenericCall_10,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CallDetism_11,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28,
#line 1091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29)
#line 1091 "det_analysis.m"
{
#line 1098 "det_analysis.m"
  {
#line 1098 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1098 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_18;
#line 1098 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_19;
#line 1098 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Context_20;

#line 1099 "det_analysis.m"
    {
#line 1099 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CallDetism_11, &check_hlds__det_analysis__CanFail_18, &check_hlds__det_analysis__NumSolns_19);
    }
#line 1100 "det_analysis.m"
    {
#line 1100 "det_analysis.m"
      check_hlds__det_analysis__Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_12);
    }
#line 1102 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns_19 == (MR_Integer) 2);
#line 1102 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1103 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_13 == (MR_Integer) 0);
#line 1123 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1107 "det_analysis.m"
      {
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_21;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarSet_22;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstPieces_23;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_24;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ContextMsgs_25;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_26;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_32_32;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_35_35;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_36_36;
#line 1107 "det_analysis.m"
        MR_String check_hlds__det_analysis__V_37_37;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_46_46;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_47_47;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_48_48;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_49_49;
#line 1107 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_50_50;

#line 1107 "det_analysis.m"
        {
#line 1107 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, &check_hlds__det_analysis__ProcInfo_21);
        }
#line 1108 "det_analysis.m"
        {
#line 1108 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_21, &check_hlds__det_analysis__VarSet_22);
        }
#line 1110 "det_analysis.m"
        {
#line 1110 "det_analysis.m"
          check_hlds__det_analysis__V_37_37 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__CallDetism_11);
        }
#line 1110 "det_analysis.m"
        {
#line 1110 "det_analysis.m"
          check_hlds__det_analysis__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "det_analysis.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_36_36, 0) = ((MR_Box) (check_hlds__det_analysis__V_37_37));
#line 1110 "det_analysis.m"
        }
#line 1110 "det_analysis.m"
        {
#line 1110 "det_analysis.m"
          check_hlds__det_analysis__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_35_35, 0) = ((MR_Box) (check_hlds__det_analysis__V_36_36));
#line 1110 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1110 "det_analysis.m"
        }
#line 1109 "det_analysis.m"
        {
#line 1109 "det_analysis.m"
          check_hlds__det_analysis__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[101])));
#line 1109 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_32_32, 1) = ((MR_Box) (check_hlds__det_analysis__V_35_35));
#line 1109 "det_analysis.m"
        }
#line 1109 "det_analysis.m"
        {
#line 1109 "det_analysis.m"
          check_hlds__det_analysis__FirstPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__FirstPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[100])));
#line 1109 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__FirstPieces_23, 1) = ((MR_Box) (check_hlds__det_analysis__V_32_32));
#line 1109 "det_analysis.m"
        }
#line 1112 "det_analysis.m"
        {
#line 1112 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, &check_hlds__det_analysis__ModuleInfo_24);
        }
#line 1113 "det_analysis.m"
        {
#line 1113 "det_analysis.m"
          check_hlds__det_analysis__ContextMsgs_25 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_24, check_hlds__det_analysis__VarSet_22, check_hlds__det_analysis__RightFailingContexts_14);
        }
#line 1116 "det_analysis.m"
        {
#line 1116 "det_analysis.m"
          check_hlds__det_analysis__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_50_50, 0) = ((MR_Box) (check_hlds__det_analysis__FirstPieces_23));
#line 1116 "det_analysis.m"
        }
#line 1116 "det_analysis.m"
        {
#line 1116 "det_analysis.m"
          check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (check_hlds__det_analysis__V_50_50));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "det_analysis.m"
        }
#line 1116 "det_analysis.m"
        {
#line 1116 "det_analysis.m"
          check_hlds__det_analysis__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (check_hlds__det_analysis__Context_20));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__V_49_49));
#line 1116 "det_analysis.m"
        }
#line 1116 "det_analysis.m"
        {
#line 1116 "det_analysis.m"
          check_hlds__det_analysis__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__V_48_48));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "det_analysis.m"
        }
#line 1115 "det_analysis.m"
        {
#line 1115 "det_analysis.m"
          check_hlds__det_analysis__V_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_47_47, check_hlds__det_analysis__ContextMsgs_25);
        }
#line 1115 "det_analysis.m"
        {
#line 1115 "det_analysis.m"
          check_hlds__det_analysis__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1115 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1115 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 2) = ((MR_Box) (check_hlds__det_analysis__V_46_46));
#line 1115 "det_analysis.m"
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_26, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29);
        }
#line 1122 "det_analysis.m"
        {
#line 1122 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_15, check_hlds__det_analysis__CanFail_18, (MR_Integer) 3);
        }
#line 1107 "det_analysis.m"
      }
#line 1123 "det_analysis.m"
    else
#line 1124 "det_analysis.m"
      {
#line 1124 "det_analysis.m"
        *check_hlds__det_analysis__Detism_15 = check_hlds__det_analysis__CallDetism_11;
#line 1124 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28;
#line 1124 "det_analysis.m"
      }
#line 1131 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_18 == (MR_Integer) 0))
#line 1127 "det_analysis.m"
      {
#line 1127 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_27;
#line 1127 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_55_55;

#line 1128 "det_analysis.m"
        {
#line 1128 "det_analysis.m"
          check_hlds__det_analysis__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1128 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 1) = ((MR_Box) (check_hlds__det_analysis__GenericCall_10));
#line 1128 "det_analysis.m"
        }
#line 1128 "det_analysis.m"
        {
#line 1128 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_27, 0) = ((MR_Box) (check_hlds__det_analysis__Context_20));
#line 1128 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_27, 1) = ((MR_Box) (check_hlds__det_analysis__V_55_55));
#line 1128 "det_analysis.m"
        }
#line 1130 "det_analysis.m"
        {
#line 1130 "det_analysis.m"
          MR_Word base;
#line 1130 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_16 = base;
#line 1130 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_27));
#line 1130 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1130 "det_analysis.m"
        }
#line 1127 "det_analysis.m"
      }
#line 1131 "det_analysis.m"
    else
#line 1133 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1098 "det_analysis.m"
  }
#line 1091 "det_analysis.m"
}

#line 1015 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_12,
#line 1015 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId0_13,
#line 1015 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__ProcId_14,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Args_15,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1015 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1015 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1015 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39,
#line 1015 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40)
#line 1015 "det_analysis.m"
{
#line 1021 "det_analysis.m"
  {
#line 1021 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1021 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CalleePredInfo_22;
#line 1021 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Detism0_23;
#line 1021 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_24;
#line 1021 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CalleeModuleName_25;
#line 1021 "det_analysis.m"
    MR_String check_hlds__det_analysis__CalleeName_26;
#line 1021 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_27;
#line 1021 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_28;
#line 1021 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;

#line 1026 "det_analysis.m"
    {
#line 1026 "det_analysis.m"
      check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, check_hlds__det_analysis__PredId_12, check_hlds__det_analysis__ProcId0_13, &check_hlds__det_analysis__CalleePredInfo_22, &check_hlds__det_analysis__Detism0_23);
    }
#line 1031 "det_analysis.m"
    {
#line 1031 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, &check_hlds__det_analysis__ModuleInfo_24);
    }
#line 1032 "det_analysis.m"
    {
#line 1032 "det_analysis.m"
      check_hlds__det_analysis__CalleeModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__det_analysis__CalleePredInfo_22);
    }
#line 1033 "det_analysis.m"
    {
#line 1033 "det_analysis.m"
      check_hlds__det_analysis__CalleeName_26 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_analysis__CalleePredInfo_22);
    }
#line 1034 "det_analysis.m"
    {
#line 1034 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__format_call__is_format_call_3_p_0(check_hlds__det_analysis__CalleeModuleName_25, check_hlds__det_analysis__CalleeName_26, check_hlds__det_analysis__Args_15);
    }
#line 1036 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1035 "det_analysis.m"
      {
#line 1035 "det_analysis.m"
        check_hlds__det_util__det_info_set_has_format_call_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41);
      }
#line 1036 "det_analysis.m"
    else
#line 1035 "det_analysis.m"
      check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39;
#line 1042 "det_analysis.m"
    {
#line 1042 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism0_23, &check_hlds__det_analysis__CanFail_27, &check_hlds__det_analysis__NumSolns_28);
    }
#line 1044 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns_28 == (MR_Integer) 2);
#line 1044 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1045 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_17 == (MR_Integer) 0);
#line 1077 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1053 "det_analysis.m"
      {
#line 1053 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__ProcIdPrime_29;
#line 1836 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_81;
#line 1836 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredTable_82;
#line 1836 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredInfo_83;
#line 1836 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcTable_84;
#line 1836 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcList_85;
#line 1839 "det_analysis.m"
        MR_Box check_hlds__det_analysis__conv0_PredInfo_83;

#line 1837 "det_analysis.m"
        {
#line 1837 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, &check_hlds__det_analysis__ModuleInfo_81);
        }
#line 1838 "det_analysis.m"
        {
#line 1838 "det_analysis.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__ModuleInfo_81, &check_hlds__det_analysis__PredTable_82);
        }
#line 1839 "det_analysis.m"
        {
#line 1839 "det_analysis.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_analysis__PredTable_82, ((MR_Box) (check_hlds__det_analysis__PredId_12)), &check_hlds__det_analysis__conv0_PredInfo_83);
        }
#line 1839 "det_analysis.m"
        check_hlds__det_analysis__PredInfo_83 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo_83);
#line 1840 "det_analysis.m"
        {
#line 1840 "det_analysis.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_analysis__PredInfo_83, &check_hlds__det_analysis__ProcTable_84);
        }
#line 1841 "det_analysis.m"
        {
#line 1841 "det_analysis.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_analysis__ProcTable_84, &check_hlds__det_analysis__ProcList_85);
        }
#line 1842 "det_analysis.m"
        {
#line 1842 "det_analysis.m"
          check_hlds__det_analysis__succeeded = check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(check_hlds__det_analysis__ProcList_85, check_hlds__det_analysis__ModuleInfo_81, check_hlds__det_analysis__PredInfo_83, check_hlds__det_analysis__ProcId0_13, &check_hlds__det_analysis__ProcIdPrime_29);
        }
#line 1053 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1051 "det_analysis.m"
          {
#line 1051 "det_analysis.m"
            *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcIdPrime_29;
#line 1052 "det_analysis.m"
            {
#line 1052 "det_analysis.m"
              parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, (MR_Integer) 3);
            }
#line 1052 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;
#line 1051 "det_analysis.m"
          }
#line 1053 "det_analysis.m"
        else
#line 1054 "det_analysis.m"
          {
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_74_74;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__GoalContext_30;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcInfo_31;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_32;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredPieces_33;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__FirstPieces_34;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ContextMsgs_35;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_36;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_48_48;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_49_49;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_52_52;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_53_53;
#line 1054 "det_analysis.m"
            MR_String check_hlds__det_analysis__V_54_54;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_63_63;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_64_64;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_65_65;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_66_66;
#line 1054 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_67_67;

#line 1054 "det_analysis.m"
            {
#line 1054 "det_analysis.m"
              check_hlds__det_analysis__GoalContext_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1055 "det_analysis.m"
            {
#line 1055 "det_analysis.m"
              check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, &check_hlds__det_analysis__ProcInfo_31);
            }
#line 1056 "det_analysis.m"
            {
#line 1056 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_31, &check_hlds__det_analysis__VarSet_32);
            }
#line 1057 "det_analysis.m"
            {
#line 1057 "det_analysis.m"
              check_hlds__det_analysis__PredPieces_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_analysis__ModuleInfo_24, (MR_Integer) 0, check_hlds__det_analysis__PredId_12);
            }
#line 7931 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1061 "det_analysis.m"
            {
#line 1061 "det_analysis.m"
              check_hlds__det_analysis__V_54_54 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__Detism0_23);
            }
#line 1061 "det_analysis.m"
            {
#line 1061 "det_analysis.m"
              check_hlds__det_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_53_53, 0) = ((MR_Box) (check_hlds__det_analysis__V_54_54));
#line 1061 "det_analysis.m"
            }
#line 1060 "det_analysis.m"
            {
#line 1060 "det_analysis.m"
              check_hlds__det_analysis__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_52_52, 0) = ((MR_Box) (check_hlds__det_analysis__V_53_53));
#line 1060 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1060 "det_analysis.m"
            }
#line 1059 "det_analysis.m"
            {
#line 1059 "det_analysis.m"
              check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[99])));
#line 1059 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 1) = ((MR_Box) (check_hlds__det_analysis__V_52_52));
#line 1059 "det_analysis.m"
            }
#line 1059 "det_analysis.m"
            {
#line 1059 "det_analysis.m"
              check_hlds__det_analysis__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_74_74, check_hlds__det_analysis__PredPieces_33, check_hlds__det_analysis__V_49_49);
            }
#line 1059 "det_analysis.m"
            {
#line 1059 "det_analysis.m"
              check_hlds__det_analysis__FirstPieces_34 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_74_74, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[98]), check_hlds__det_analysis__V_48_48);
            }
#line 1064 "det_analysis.m"
            {
#line 1064 "det_analysis.m"
              check_hlds__det_analysis__ContextMsgs_35 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_24, check_hlds__det_analysis__VarSet_32, check_hlds__det_analysis__RightFailingContexts_18);
            }
#line 1067 "det_analysis.m"
            {
#line 1067 "det_analysis.m"
              check_hlds__det_analysis__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_67_67, 0) = ((MR_Box) (check_hlds__det_analysis__FirstPieces_34));
#line 1067 "det_analysis.m"
            }
#line 1067 "det_analysis.m"
            {
#line 1067 "det_analysis.m"
              check_hlds__det_analysis__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_66_66, 0) = ((MR_Box) (check_hlds__det_analysis__V_67_67));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "det_analysis.m"
            }
#line 1067 "det_analysis.m"
            {
#line 1067 "det_analysis.m"
              check_hlds__det_analysis__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_65_65, 0) = ((MR_Box) (check_hlds__det_analysis__GoalContext_30));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_65_65, 1) = ((MR_Box) (check_hlds__det_analysis__V_66_66));
#line 1067 "det_analysis.m"
            }
#line 1067 "det_analysis.m"
            {
#line 1067 "det_analysis.m"
              check_hlds__det_analysis__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_64_64, 0) = ((MR_Box) (check_hlds__det_analysis__V_65_65));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "det_analysis.m"
            }
#line 1066 "det_analysis.m"
            {
#line 1066 "det_analysis.m"
              check_hlds__det_analysis__V_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_64_64, check_hlds__det_analysis__ContextMsgs_35);
            }
#line 1066 "det_analysis.m"
            {
#line 1066 "det_analysis.m"
              check_hlds__det_analysis__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1066 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1066 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1066 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 2) = ((MR_Box) (check_hlds__det_analysis__V_63_63));
#line 1066 "det_analysis.m"
            }
#line 1069 "det_analysis.m"
            {
#line 1069 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_36, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40);
            }
#line 1071 "det_analysis.m"
            *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcId0_13;
#line 1075 "det_analysis.m"
            {
#line 1075 "det_analysis.m"
              parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, (MR_Integer) 3);
            }
#line 1054 "det_analysis.m"
          }
#line 1053 "det_analysis.m"
      }
#line 1077 "det_analysis.m"
    else
#line 1078 "det_analysis.m"
      {
#line 1078 "det_analysis.m"
        *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcId0_13;
#line 1079 "det_analysis.m"
        *check_hlds__det_analysis__Detism_19 = check_hlds__det_analysis__Detism0_23;
#line 1079 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;
#line 1078 "det_analysis.m"
      }
#line 1086 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_27 == (MR_Integer) 0))
#line 1082 "det_analysis.m"
      {
#line 1082 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_37;
#line 1082 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_38;
#line 1082 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_72_72;

#line 1083 "det_analysis.m"
        {
#line 1083 "det_analysis.m"
          check_hlds__det_analysis__Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1084 "det_analysis.m"
        {
#line 1084 "det_analysis.m"
          check_hlds__det_analysis__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1084 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 1) = ((MR_Box) (check_hlds__det_analysis__PredId_12));
#line 1084 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 2) = ((MR_Box) (*check_hlds__det_analysis__ProcId_14));
#line 1084 "det_analysis.m"
        }
#line 1084 "det_analysis.m"
        {
#line 1084 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_38, 0) = ((MR_Box) (check_hlds__det_analysis__Context_37));
#line 1084 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_38, 1) = ((MR_Box) (check_hlds__det_analysis__V_72_72));
#line 1084 "det_analysis.m"
        }
#line 1085 "det_analysis.m"
        {
#line 1085 "det_analysis.m"
          MR_Word base;
#line 1085 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 1085 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_38));
#line 1085 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1085 "det_analysis.m"
        }
#line 1082 "det_analysis.m"
      }
#line 1086 "det_analysis.m"
    else
#line 1088 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1021 "det_analysis.m"
  }
#line 1015 "det_analysis.m"
}

#line 969 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 969 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__9_9,
#line 969 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_10,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11,
#line 969 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12,
#line 969 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13,
#line 969 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14)
#line 969 "det_analysis.m"
{
#line 977 "det_analysis.m"
  {
#line 977 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 977 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 977 "det_analysis.m"
      {
#line 977 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 978 "det_analysis.m"
        {
#line 978 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_10, check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__HeadVar__9_9);
        }
#line 977 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13;
#line 977 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12 = check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11;
#line 977 "det_analysis.m"
      }
#line 977 "det_analysis.m"
    else
#line 982 "det_analysis.m"
      {
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Case0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Cases0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Case_31;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Cases_32;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 0)));
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__OtherConsIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 1)));
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 2)));
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo0_46;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarTypes_47;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarType_48;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_49;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_50;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_52;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_53;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_54;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_55;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_56;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74;
#line 982 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75;

#line 987 "det_analysis.m"
        {
#line 987 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__ModuleInfo0_46);
        }
#line 988 "det_analysis.m"
        {
#line 988 "det_analysis.m"
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__VarTypes_47);
        }
#line 989 "det_analysis.m"
        {
#line 989 "det_analysis.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_analysis__VarTypes_47, check_hlds__det_analysis__HeadVar__3_3, &check_hlds__det_analysis__VarType_48);
        }
#line 990 "det_analysis.m"
        {
#line 990 "det_analysis.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__VarType_48, check_hlds__det_analysis__MainConsId_43, check_hlds__det_analysis__OtherConsIds_44, check_hlds__det_analysis__HeadVar__4_4, &check_hlds__det_analysis__InstMap1_49, check_hlds__det_analysis__ModuleInfo0_46, &check_hlds__det_analysis__ModuleInfo_50);
        }
#line 992 "det_analysis.m"
        {
#line 992 "det_analysis.m"
          check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_analysis__ModuleInfo_50, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63);
        }
#line 1000 "det_analysis.m"
        {
#line 1000 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_45, &check_hlds__det_analysis__Goal_52, check_hlds__det_analysis__InstMap1_49, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__HeadVar__7_7, &check_hlds__det_analysis__FirstDetism_53, &check_hlds__det_analysis__GoalFailingContexts_54, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72);
        }
#line 1003 "det_analysis.m"
        {
#line 1003 "det_analysis.m"
          check_hlds__det_analysis__Case_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 0) = ((MR_Box) (check_hlds__det_analysis__MainConsId_43));
#line 1003 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 1) = ((MR_Box) (check_hlds__det_analysis__OtherConsIds_44));
#line 1003 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 2) = ((MR_Box) (check_hlds__det_analysis__Goal_52));
#line 1003 "det_analysis.m"
        }
#line 1004 "det_analysis.m"
        {
#line 1004 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_53, &check_hlds__det_analysis__FirstCanFail_55, &check_hlds__det_analysis__FirstMaxSolns_56);
        }
#line 1005 "det_analysis.m"
        {
#line 1005 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__FirstCanFail_55, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73);
        }
#line 1006 "det_analysis.m"
        {
#line 1006 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__HeadVar__9_9, check_hlds__det_analysis__FirstMaxSolns_56, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74);
        }
#line 1007 "det_analysis.m"
        {
#line 1007 "det_analysis.m"
          check_hlds__det_analysis__det_infer_switch_cases_14_p_0(check_hlds__det_analysis__Cases0_30, &check_hlds__det_analysis__Cases_32, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74, check_hlds__det_analysis__Detism_10, check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11, &check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14);
        }
#line 982 "det_analysis.m"
        {
#line 982 "det_analysis.m"
          MR_Word base;
#line 982 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 982 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Case_31));
#line 982 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Cases_32));
#line 982 "det_analysis.m"
        }
#line 1011 "det_analysis.m"
        {
#line 1011 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_54, check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75);
        }
#line 982 "det_analysis.m"
      }
#line 977 "det_analysis.m"
  }
#line 969 "det_analysis.m"
}

#line 920 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_14,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SwitchCanFail_15,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cases0_16,
#line 920 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cases_17,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_19,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_20,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_21,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22,
#line 920 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 920 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 920 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37,
#line 920 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38)
#line 920 "det_analysis.m"
{
#line 929 "det_analysis.m"
  {
#line 929 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesDetism_26;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts0_27;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesCanFail_28;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesSolns_29;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__SwitchSolnContext_30;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__SwitchSolns_32;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_33;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_34;
#line 929 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42;

#line 935 "det_analysis.m"
    {
#line 935 "det_analysis.m"
      check_hlds__det_analysis__det_infer_switch_cases_14_p_0(check_hlds__det_analysis__Cases0_16, check_hlds__det_analysis__Cases_17, check_hlds__det_analysis__Var_14, check_hlds__det_analysis__InstMap0_19, check_hlds__det_analysis__SolnContext_20, check_hlds__det_analysis__RightFailingContexts_21, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22, (MR_Integer) 1, (MR_Integer) 0, &check_hlds__det_analysis__CasesDetism_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__GoalFailingContexts0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42);
    }
#line 939 "det_analysis.m"
    {
#line 939 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CasesDetism_26, &check_hlds__det_analysis__CasesCanFail_28, &check_hlds__det_analysis__CasesSolns_29);
    }
#line 944 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CasesCanFail_28 == (MR_Integer) 1);
#line 944 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 945 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_20 == (MR_Integer) 1);
#line 948 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 947 "det_analysis.m"
      check_hlds__det_analysis__SwitchSolnContext_30 = (MR_Integer) 1;
#line 948 "det_analysis.m"
    else
#line 949 "det_analysis.m"
      check_hlds__det_analysis__SwitchSolnContext_30 = (MR_Integer) 0;
#line 952 "det_analysis.m"
    {
#line 952 "det_analysis.m"
      check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(check_hlds__det_analysis__Var_14, (MR_Integer) 1, check_hlds__det_analysis__SwitchCanFail_15, check_hlds__det_analysis__SwitchSolnContext_30, check_hlds__det_analysis__GoalFailingContexts0_27, check_hlds__det_analysis__RightFailingContexts_21, check_hlds__det_analysis__GoalInfo_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__SwitchSolns_32, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38);
    }
#line 955 "det_analysis.m"
    {
#line 955 "det_analysis.m"
      parse_tree__prog_data__det_conjunction_canfail_3_p_0(check_hlds__det_analysis__SwitchCanFail_15, check_hlds__det_analysis__CasesCanFail_28, &check_hlds__det_analysis__CanFail_33);
    }
#line 956 "det_analysis.m"
    {
#line 956 "det_analysis.m"
      parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__SwitchSolns_32, check_hlds__det_analysis__CasesSolns_29, &check_hlds__det_analysis__NumSolns_34);
    }
#line 957 "det_analysis.m"
    {
#line 957 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_23, check_hlds__det_analysis__CanFail_33, check_hlds__det_analysis__NumSolns_34);
    }
#line 964 "det_analysis.m"
    if ((check_hlds__det_analysis__SwitchCanFail_15 == (MR_Integer) 0))
#line 959 "det_analysis.m"
      {
#line 959 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SwitchContext_35;
#line 959 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_36;
#line 959 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_45_45;

#line 960 "det_analysis.m"
        {
#line 960 "det_analysis.m"
          check_hlds__det_analysis__SwitchContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
        }
#line 961 "det_analysis.m"
        {
#line 961 "det_analysis.m"
          check_hlds__det_analysis__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 961 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_45_45, 0) = ((MR_Box) (check_hlds__det_analysis__Var_14));
#line 961 "det_analysis.m"
        }
#line 961 "det_analysis.m"
        {
#line 961 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 961 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_36, 0) = ((MR_Box) (check_hlds__det_analysis__SwitchContext_35));
#line 961 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_36, 1) = ((MR_Box) (check_hlds__det_analysis__V_45_45));
#line 961 "det_analysis.m"
        }
#line 963 "det_analysis.m"
        {
#line 963 "det_analysis.m"
          MR_Word base;
#line 963 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 963 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_36));
#line 963 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts0_27));
#line 963 "det_analysis.m"
        }
#line 959 "det_analysis.m"
      }
#line 964 "det_analysis.m"
    else
#line 966 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_24 = check_hlds__det_analysis__GoalFailingContexts0_27;
#line 929 "det_analysis.m"
  }
#line 920 "det_analysis.m"
}

#line 864 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 864 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 864 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_9,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10,
#line 864 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11,
#line 864 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12,
#line 864 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13)
#line 864 "det_analysis.m"
{
#line 872 "det_analysis.m"
  {
#line 872 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 872 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "det_analysis.m"
      {
#line 872 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "det_analysis.m"
        {
#line 873 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_9, check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__HeadVar__8_8);
        }
#line 872 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12;
#line 872 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11 = check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10;
#line 872 "det_analysis.m"
      }
#line 872 "det_analysis.m"
    else
#line 876 "det_analysis.m"
      {
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_29;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_30;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_40;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_41;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_42;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_43;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalInfo_45;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__AdjFirstMaxSolns_46;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57;
#line 876 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58;
#line 881 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_44_44;
#line 894 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_54_54;

#line 877 "det_analysis.m"
        {
#line 877 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_27, &check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__FirstDetism_40, &check_hlds__det_analysis__GoalFailingContexts_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53);
        }
#line 880 "det_analysis.m"
        {
#line 880 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_40, &check_hlds__det_analysis__FirstCanFail_42, &check_hlds__det_analysis__FirstMaxSolns_43);
        }
#line 881 "det_analysis.m"
        check_hlds__det_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal_29, (MR_Integer) 0)));
#line 881 "det_analysis.m"
        check_hlds__det_analysis__GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal_29, (MR_Integer) 1)));
#line 894 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__8_8 == (MR_Integer) 0);
#line 894 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 894 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 894 "det_analysis.m"
          {
#line 895 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__FirstMaxSolns_43 == (MR_Integer) 0);
#line 894 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 894 "det_analysis.m"
              {
#line 896 "det_analysis.m"
                check_hlds__det_analysis__V_54_54 = (MR_Integer) 6;
#line 896 "det_analysis.m"
                {
#line 896 "det_analysis.m"
                  check_hlds__det_analysis__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__det_analysis__GoalInfo_45, check_hlds__det_analysis__V_54_54);
                }
#line 894 "det_analysis.m"
              }
#line 894 "det_analysis.m"
          }
#line 899 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 898 "det_analysis.m"
          check_hlds__det_analysis__AdjFirstMaxSolns_46 = (MR_Integer) 1;
#line 899 "det_analysis.m"
        else
#line 900 "det_analysis.m"
          check_hlds__det_analysis__AdjFirstMaxSolns_46 = check_hlds__det_analysis__FirstMaxSolns_43;
#line 902 "det_analysis.m"
        {
#line 902 "det_analysis.m"
          parse_tree__prog_data__det_disjunction_canfail_3_p_0(check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__FirstCanFail_42, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55);
        }
#line 903 "det_analysis.m"
        {
#line 903 "det_analysis.m"
          parse_tree__prog_data__det_disjunction_maxsoln_3_p_0(check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__AdjFirstMaxSolns_46, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56);
        }
#line 906 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__4_4 == (MR_Integer) 1);
#line 906 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 907 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56 == (MR_Integer) 3);
#line 910 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 909 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57 = (MR_Integer) 2;
#line 910 "det_analysis.m"
        else
#line 909 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57 = check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56;
#line 913 "det_analysis.m"
        {
#line 913 "det_analysis.m"
          check_hlds__det_analysis__det_infer_disj_goals_13_p_0(check_hlds__det_analysis__Goals0_28, &check_hlds__det_analysis__Goals_30, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57, check_hlds__det_analysis__Detism_9, check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13);
        }
#line 876 "det_analysis.m"
        {
#line 876 "det_analysis.m"
          MR_Word base;
#line 876 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 876 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_29));
#line 876 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_30));
#line 876 "det_analysis.m"
        }
#line 916 "det_analysis.m"
        {
#line 916 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_41, check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58);
        }
#line 876 "det_analysis.m"
      }
#line 872 "det_analysis.m"
  }
#line 864 "det_analysis.m"
}

#line 841 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 841 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 841 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 841 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 841 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
#line 841 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28)
#line 841 "det_analysis.m"
{
#line 849 "det_analysis.m"
  {
#line 849 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 849 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts0_22;

#line 850 "det_analysis.m"
    {
#line 850 "det_analysis.m"
      check_hlds__det_analysis__det_infer_disj_goals_13_p_0(check_hlds__det_analysis__Goals0_12, check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, (MR_Integer) 0, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__GoalFailingContexts0_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);
    }
#line 859 "det_analysis.m"
    if ((*check_hlds__det_analysis__Goals_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "det_analysis.m"
      {
#line 855 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_23;
#line 855 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_24;

#line 856 "det_analysis.m"
        {
#line 856 "det_analysis.m"
          check_hlds__det_analysis__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_14);
        }
#line 857 "det_analysis.m"
        {
#line 857 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 857 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_24, 0) = ((MR_Box) (check_hlds__det_analysis__Context_23));
#line 857 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "det_analysis.m"
        }
#line 858 "det_analysis.m"
        {
#line 858 "det_analysis.m"
          MR_Word base;
#line 858 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 858 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_24));
#line 858 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts0_22));
#line 858 "det_analysis.m"
        }
#line 855 "det_analysis.m"
      }
#line 859 "det_analysis.m"
    else
#line 861 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_20 = check_hlds__det_analysis__GoalFailingContexts0_22;
#line 849 "det_analysis.m"
  }
#line 841 "det_analysis.m"
}

#line 814 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 814 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 814 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 814 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 814 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 814 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11)
#line 814 "det_analysis.m"
{
#line 820 "det_analysis.m"
  {
#line 820 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 820 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "det_analysis.m"
      {
#line 820 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__7_7 = (MR_Integer) 0;
#line 820 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10;
#line 820 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8;
#line 820 "det_analysis.m"
      }
#line 820 "det_analysis.m"
    else
#line 825 "det_analysis.m"
      {
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_24;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_25;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadDetism_33;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_34;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadCanFail_35;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadMaxSolns_36;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailDetism_37;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailCanFail_38;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailMaxSolns_39;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns_40;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_41;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46;
#line 825 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47;

#line 826 "det_analysis.m"
        {
#line 826 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_22, &check_hlds__det_analysis__Goal_24, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__HeadDetism_33, &check_hlds__det_analysis__GoalFailingContexts_34, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46);
        }
#line 829 "det_analysis.m"
        {
#line 829 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__HeadDetism_33, &check_hlds__det_analysis__HeadCanFail_35, &check_hlds__det_analysis__HeadMaxSolns_36);
        }
#line 831 "det_analysis.m"
        {
#line 831 "det_analysis.m"
          check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_25, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__TailDetism_37, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8, &check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);
        }
#line 825 "det_analysis.m"
        {
#line 825 "det_analysis.m"
          MR_Word base;
#line 825 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 825 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_24));
#line 825 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_25));
#line 825 "det_analysis.m"
        }
#line 834 "det_analysis.m"
        {
#line 834 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__TailDetism_37, &check_hlds__det_analysis__TailCanFail_38, &check_hlds__det_analysis__TailMaxSolns_39);
        }
#line 836 "det_analysis.m"
        {
#line 836 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__HeadMaxSolns_36, check_hlds__det_analysis__TailMaxSolns_39, &check_hlds__det_analysis__MaxSolns_40);
        }
#line 837 "det_analysis.m"
        {
#line 837 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_canfail_3_p_0(check_hlds__det_analysis__HeadCanFail_35, check_hlds__det_analysis__TailCanFail_38, &check_hlds__det_analysis__CanFail_41);
        }
#line 838 "det_analysis.m"
        {
#line 838 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__CanFail_41, check_hlds__det_analysis__MaxSolns_40);
        }
#line 839 "det_analysis.m"
        {
#line 839 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_34, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47);
        }
#line 825 "det_analysis.m"
      }
#line 820 "det_analysis.m"
  }
#line 814 "det_analysis.m"
}

#line 766 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 766 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 766 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 766 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 766 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32,
#line 766 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33)
#line 766 "det_analysis.m"
{
#line 774 "det_analysis.m"
  {
#line 774 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 774 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35;
#line 779 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_22;
#line 779 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Solns_23;

#line 775 "det_analysis.m"
    {
#line 775 "det_analysis.m"
      check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(check_hlds__det_analysis__Goals0_12, check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35);
    }
#line 779 "det_analysis.m"
    {
#line 779 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_19, &check_hlds__det_analysis__CanFail_22, &check_hlds__det_analysis__Solns_23);
    }
#line 780 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CanFail_22 == (MR_Integer) 1);
#line 779 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 779 "det_analysis.m"
      {
#line 781 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Solns_23 == (MR_Integer) 3);
#line 781 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 779 "det_analysis.m"
      }
#line 784 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 781 "det_analysis.m"
      *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35;
#line 784 "det_analysis.m"
    else
#line 785 "det_analysis.m"
      {
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_24;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSoln_25;
#line 785 "det_analysis.m"
        MR_String check_hlds__det_analysis__First_26;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_28;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalMsgs_29;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SortedGoalMsgs_30;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_31;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_41_41;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_50_50;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_51_51;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_52_52;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_53_53;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_54_54;
#line 785 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_58;

#line 785 "det_analysis.m"
        {
#line 785 "det_analysis.m"
          check_hlds__det_analysis__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_14);
        }
#line 786 "det_analysis.m"
        {
#line 786 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_19, &check_hlds__det_analysis__CanFail_58, &check_hlds__det_analysis__MaxSoln_25);
        }
#line 790 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_58 == (MR_Integer) 0))
#line 789 "det_analysis.m"
          check_hlds__det_analysis__First_26 = (MR_String) "Error: parallel conjunct may fail.";
#line 790 "det_analysis.m"
        else
#line 795 "det_analysis.m"
          if ((check_hlds__det_analysis__MaxSoln_25 == (MR_Integer) 3))
#line 794 "det_analysis.m"
            check_hlds__det_analysis__First_26 = (MR_String) "Error: parallel conjunct may have multiple solutions.";
#line 795 "det_analysis.m"
          else
#line 799 "det_analysis.m"
            {
#line 800 "det_analysis.m"
              {
#line 800 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_par_conj\'/11", (MR_String) "strange determinism error for parallel conjunction");
#line 800 "det_analysis.m"
                return;
              }
#line 799 "det_analysis.m"
            }
#line 806 "det_analysis.m"
        {
#line 806 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 806 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_41_41, 1) = ((MR_Box) (check_hlds__det_analysis__First_26));
#line 806 "det_analysis.m"
        }
#line 806 "det_analysis.m"
        {
#line 806 "det_analysis.m"
          check_hlds__det_analysis__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_28, 0) = ((MR_Box) (check_hlds__det_analysis__V_41_41));
#line 806 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[96])));
#line 806 "det_analysis.m"
        }
#line 807 "det_analysis.m"
        {
#line 807 "det_analysis.m"
          check_hlds__det_report__det_diagnose_conj_7_p_0(*check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47, &check_hlds__det_analysis__GoalMsgs_29);
        }
#line 808 "det_analysis.m"
        {
#line 808 "det_analysis.m"
          parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_analysis__GoalMsgs_29, &check_hlds__det_analysis__SortedGoalMsgs_30);
        }
#line 810 "det_analysis.m"
        {
#line 810 "det_analysis.m"
          check_hlds__det_analysis__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_54_54, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_28));
#line 810 "det_analysis.m"
        }
#line 810 "det_analysis.m"
        {
#line 810 "det_analysis.m"
          check_hlds__det_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_53_53, 0) = ((MR_Box) (check_hlds__det_analysis__V_54_54));
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 810 "det_analysis.m"
        }
#line 810 "det_analysis.m"
        {
#line 810 "det_analysis.m"
          check_hlds__det_analysis__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_52_52, 0) = ((MR_Box) (check_hlds__det_analysis__Context_24));
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_52_52, 1) = ((MR_Box) (check_hlds__det_analysis__V_53_53));
#line 810 "det_analysis.m"
        }
#line 810 "det_analysis.m"
        {
#line 810 "det_analysis.m"
          check_hlds__det_analysis__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_51_51, 0) = ((MR_Box) (check_hlds__det_analysis__V_52_52));
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 810 "det_analysis.m"
        }
#line 809 "det_analysis.m"
        {
#line 809 "det_analysis.m"
          check_hlds__det_analysis__V_50_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_51_51, check_hlds__det_analysis__SortedGoalMsgs_30);
        }
#line 809 "det_analysis.m"
        {
#line 809 "det_analysis.m"
          check_hlds__det_analysis__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 809 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 809 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 2) = ((MR_Box) (check_hlds__det_analysis__V_50_50));
#line 809 "det_analysis.m"
        }
#line 811 "det_analysis.m"
        {
#line 811 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_31, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33);
#line 811 "det_analysis.m"
          return;
        }
#line 785 "det_analysis.m"
      }
#line 774 "det_analysis.m"
  }
#line 766 "det_analysis.m"
}

#line 717 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 717 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 717 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 717 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 717 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 717 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11)
#line 717 "det_analysis.m"
{
#line 723 "det_analysis.m"
  {
#line 723 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 723 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "det_analysis.m"
      {
#line 723 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 723 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__7_7 = (MR_Integer) 0;
#line 723 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10;
#line 723 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8;
#line 723 "det_analysis.m"
      }
#line 723 "det_analysis.m"
    else
#line 728 "det_analysis.m"
      {
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TypeCtorInfo_49_49;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_24;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_25;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_33;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailDetism_34;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailCanFail_35;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadSolnContext_37;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadDetism_38;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_39;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45;
#line 728 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_46_46;
#line 741 "det_analysis.m"
        MR_Word check_hlds__det_analysis___TailMaxSolns_36;

#line 737 "det_analysis.m"
        {
#line 737 "det_analysis.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_analysis__Goal0_22, check_hlds__det_analysis__HeadVar__3_3, &check_hlds__det_analysis__InstMap1_33);
        }
#line 738 "det_analysis.m"
        {
#line 738 "det_analysis.m"
          check_hlds__det_analysis__det_infer_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_25, check_hlds__det_analysis__InstMap1_33, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__TailDetism_34, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8, &check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45);
        }
#line 741 "det_analysis.m"
        {
#line 741 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__TailDetism_34, &check_hlds__det_analysis__TailCanFail_35, &check_hlds__det_analysis___TailMaxSolns_36);
        }
#line 749 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__TailCanFail_35 == (MR_Integer) 1);
#line 749 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 750 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__4_4 == (MR_Integer) 1);
#line 753 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 752 "det_analysis.m"
          check_hlds__det_analysis__HeadSolnContext_37 = (MR_Integer) 1;
#line 753 "det_analysis.m"
        else
#line 754 "det_analysis.m"
          check_hlds__det_analysis__HeadSolnContext_37 = (MR_Integer) 0;
#line 9241 "check_hlds.det_analysis.c"
        check_hlds__det_analysis__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0;
#line 757 "det_analysis.m"
        {
#line 757 "det_analysis.m"
          check_hlds__det_analysis__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_49_49, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44, check_hlds__det_analysis__HeadVar__5_5);
        }
#line 757 "det_analysis.m"
        {
#line 757 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_22, &check_hlds__det_analysis__Goal_24, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadSolnContext_37, check_hlds__det_analysis__V_46_46, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__HeadDetism_38, &check_hlds__det_analysis__GoalFailingContexts_39, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);
        }
#line 728 "det_analysis.m"
        {
#line 728 "det_analysis.m"
          MR_Word base;
#line 728 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 728 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_24));
#line 728 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_25));
#line 728 "det_analysis.m"
        }
#line 763 "det_analysis.m"
        {
#line 763 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__HeadDetism_38, check_hlds__det_analysis__TailDetism_34, check_hlds__det_analysis__HeadVar__7_7);
        }
#line 764 "det_analysis.m"
        {
#line 764 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_49_49, check_hlds__det_analysis__GoalFailingContexts_39, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44);
        }
#line 728 "det_analysis.m"
      }
#line 723 "det_analysis.m"
  }
#line 717 "det_analysis.m"
}

#line 595 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalExpr0_12,
#line 595 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalExpr_13,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 595 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 595 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 595 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78,
#line 595 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79)
#line 595 "det_analysis.m"
{
#line 605 "det_analysis.m"
  {
#line 605 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 605 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 669 "det_analysis.m"
      {
#line 669 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__det_analysis__GoalExpr0_12), (MR_Integer) 0);
#line 669 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_55;

#line 670 "det_analysis.m"
        {
#line 670 "det_analysis.m"
          check_hlds__det_analysis__det_infer_not_9_p_0(check_hlds__det_analysis__Goal0_54, &check_hlds__det_analysis__Goal_55, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
        }
#line 673 "det_analysis.m"
        *check_hlds__det_analysis__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__det_analysis__Goal_55);
#line 669 "det_analysis.m"
      }
#line 605 "det_analysis.m"
    else
#line 605 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 2))))
#line 644 "det_analysis.m"
        {
#line 644 "det_analysis.m"
          MR_Word check_hlds__det_analysis__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)));
#line 644 "det_analysis.m"
          MR_Integer check_hlds__det_analysis__ProcId0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 644 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 644 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Builtin_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 644 "det_analysis.m"
          MR_Word check_hlds__det_analysis__UnifyContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 644 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 644 "det_analysis.m"
          MR_Integer check_hlds__det_analysis__ProcId_36;

#line 645 "det_analysis.m"
          {
#line 645 "det_analysis.m"
            check_hlds__det_analysis__det_infer_call_11_p_0(check_hlds__det_analysis__PredId_30, check_hlds__det_analysis__ProcId0_31, &check_hlds__det_analysis__ProcId_36, check_hlds__det_analysis__Args_32, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
          }
#line 647 "det_analysis.m"
          {
#line 647 "det_analysis.m"
            MR_Word base;
#line 647 "det_analysis.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 647 "det_analysis.m"
            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 647 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_30));
#line 647 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_36));
#line 647 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__det_analysis__Args_32));
#line 647 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__det_analysis__Builtin_33));
#line 647 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_34));
#line 647 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__det_analysis__Name_35));
#line 647 "det_analysis.m"
          }
#line 644 "det_analysis.m"
        }
#line 605 "det_analysis.m"
      else
#line 605 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 1))))
#line 656 "det_analysis.m"
          {
#line 656 "det_analysis.m"
            MR_Word check_hlds__det_analysis__LHS_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)));
#line 656 "det_analysis.m"
            MR_Word check_hlds__det_analysis__RHS0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 656 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Mode_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 656 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Unify_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 656 "det_analysis.m"
            MR_Word check_hlds__det_analysis__RHS_46;
#line 656 "det_analysis.m"
            MR_Word check_hlds__det_analysis__UnifyContext_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));

#line 657 "det_analysis.m"
            {
#line 657 "det_analysis.m"
              check_hlds__det_analysis__det_infer_unify_13_p_0(check_hlds__det_analysis__LHS_42, check_hlds__det_analysis__RHS0_43, check_hlds__det_analysis__Unify_45, check_hlds__det_analysis__UnifyContext_110, &check_hlds__det_analysis__RHS_46, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
            }
#line 660 "det_analysis.m"
            {
#line 660 "det_analysis.m"
              MR_Word base;
#line 660 "det_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 660 "det_analysis.m"
              *check_hlds__det_analysis__GoalExpr_13 = base;
#line 660 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__LHS_42));
#line 660 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__RHS_46));
#line 660 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__det_analysis__Mode_44));
#line 660 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__det_analysis__Unify_45));
#line 660 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_110));
#line 660 "det_analysis.m"
            }
#line 656 "det_analysis.m"
          }
#line 605 "det_analysis.m"
        else
#line 605 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 682 "det_analysis.m"
            {
#line 682 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Attributes_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 682 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PredId_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 682 "det_analysis.m"
              MR_Integer check_hlds__det_analysis__ProcId_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 681 "det_analysis.m"
              MR_Word check_hlds__det_analysis___Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 681 "det_analysis.m"
              MR_Word check_hlds__det_analysis___ExtraArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 681 "det_analysis.m"
              MR_Word check_hlds__det_analysis___MaybeTraceRuntimeCond_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 6)));
#line 681 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PragmaCode_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 7)));

#line 683 "det_analysis.m"
              {
#line 683 "det_analysis.m"
                check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(check_hlds__det_analysis__Attributes_57, check_hlds__det_analysis__PredId_113, check_hlds__det_analysis__ProcId_114, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
#line 686 "det_analysis.m"
              *check_hlds__det_analysis__GoalExpr_13 = check_hlds__det_analysis__GoalExpr0_12;
#line 682 "det_analysis.m"
            }
#line 605 "det_analysis.m"
          else
#line 605 "det_analysis.m"
            if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 605 "det_analysis.m"
              {
#line 605 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ConjType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 605 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 605 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Goals_24;

#line 613 "det_analysis.m"
                if ((check_hlds__det_analysis__ConjType_22 == (MR_Integer) 1))
#line 615 "det_analysis.m"
                  {
#line 615 "det_analysis.m"
                    check_hlds__det_analysis__det_infer_par_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_24, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                  }
#line 613 "det_analysis.m"
                else
#line 607 "det_analysis.m"
                  {
#line 610 "det_analysis.m"
                    {
#line 610 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_24, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
#line 607 "det_analysis.m"
                  }
#line 619 "det_analysis.m"
                {
#line 619 "det_analysis.m"
                  MR_Word base;
#line 619 "det_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 619 "det_analysis.m"
                  *check_hlds__det_analysis__GoalExpr_13 = base;
#line 619 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 619 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__ConjType_22));
#line 619 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Goals_24));
#line 619 "det_analysis.m"
                }
#line 605 "det_analysis.m"
              }
#line 605 "det_analysis.m"
            else
#line 605 "det_analysis.m"
              if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 621 "det_analysis.m"
                {
#line 621 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Goals0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 621 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Goals_109;

#line 622 "det_analysis.m"
                  {
#line 622 "det_analysis.m"
                    check_hlds__det_analysis__det_infer_disj_11_p_0(check_hlds__det_analysis__Goals0_108, &check_hlds__det_analysis__Goals_109, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                  }
#line 625 "det_analysis.m"
                  {
#line 625 "det_analysis.m"
                    MR_Word base;
#line 625 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "det_analysis.m"
                    *check_hlds__det_analysis__GoalExpr_13 = base;
#line 625 "det_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 625 "det_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_109));
#line 625 "det_analysis.m"
                  }
#line 621 "det_analysis.m"
                }
#line 605 "det_analysis.m"
              else
#line 605 "det_analysis.m"
                if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 651 "det_analysis.m"
                  {
#line 651 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__GenericCall_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 651 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__CallDetism_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 650 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___ArgVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 650 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___Modes_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 650 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___MaybArgRegs_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));

#line 652 "det_analysis.m"
                    {
#line 652 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_generic_call_9_p_0(check_hlds__det_analysis__GenericCall_37, check_hlds__det_analysis__CallDetism_41, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
#line 654 "det_analysis.m"
                    *check_hlds__det_analysis__GoalExpr_13 = check_hlds__det_analysis__GoalExpr0_12;
#line 651 "det_analysis.m"
                  }
#line 605 "det_analysis.m"
                else
#line 605 "det_analysis.m"
                  if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 662 "det_analysis.m"
                    {
#line 662 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 662 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 662 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 662 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 662 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Cond_51;
#line 662 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Then_52;
#line 662 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Else_53;

#line 663 "det_analysis.m"
                      {
#line 663 "det_analysis.m"
                        check_hlds__det_analysis__det_infer_if_then_else_14_p_0(check_hlds__det_analysis__Cond0_48, &check_hlds__det_analysis__Cond_51, check_hlds__det_analysis__Then0_49, &check_hlds__det_analysis__Then_52, check_hlds__det_analysis__Else0_50, &check_hlds__det_analysis__Else_53, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                      }
#line 667 "det_analysis.m"
                      {
#line 667 "det_analysis.m"
                        MR_Word base;
#line 667 "det_analysis.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 667 "det_analysis.m"
                        *check_hlds__det_analysis__GoalExpr_13 = base;
#line 667 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 667 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Vars_47));
#line 667 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Cond_51));
#line 667 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__det_analysis__Then_52));
#line 667 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__det_analysis__Else_53));
#line 667 "det_analysis.m"
                      }
#line 662 "det_analysis.m"
                    }
#line 605 "det_analysis.m"
                  else
#line 605 "det_analysis.m"
                    if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 675 "det_analysis.m"
                      {
#line 675 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 675 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Goal0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 675 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Goal_112;

#line 676 "det_analysis.m"
                        {
#line 676 "det_analysis.m"
                          check_hlds__det_analysis__det_infer_scope_12_p_0(check_hlds__det_analysis__Reason_56, check_hlds__det_analysis__Goal0_111, &check_hlds__det_analysis__Goal_112, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                        }
#line 679 "det_analysis.m"
                        {
#line 679 "det_analysis.m"
                          MR_Word base;
#line 679 "det_analysis.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 679 "det_analysis.m"
                          *check_hlds__det_analysis__GoalExpr_13 = base;
#line 679 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 679 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Reason_56));
#line 679 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Goal_112));
#line 679 "det_analysis.m"
                        }
#line 675 "det_analysis.m"
                      }
#line 605 "det_analysis.m"
                    else
#line 605 "det_analysis.m"
                      if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 688 "det_analysis.m"
                        {
#line 688 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__ShortHand0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 688 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__ShortHand_71;

#line 698 "det_analysis.m"
                          if (((MR_tag((MR_Word) check_hlds__det_analysis__ShortHand0_62)) == (MR_mktag((MR_Integer) 1))))
#line 691 "det_analysis.m"
                            {
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__GoalType_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 0)));
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Inner_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 1)));
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Outer_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 2)));
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__MainGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 4)));
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseGoals0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 5)));
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseInners_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 6)));
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__MainGoal_69;
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseGoals_70;
#line 691 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 3)));

#line 692 "det_analysis.m"
                              {
#line 692 "det_analysis.m"
                                check_hlds__det_analysis__det_infer_atomic_11_p_0(check_hlds__det_analysis__MainGoal0_66, &check_hlds__det_analysis__MainGoal_69, check_hlds__det_analysis__OrElseGoals0_67, &check_hlds__det_analysis__OrElseGoals_70, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                              }
#line 695 "det_analysis.m"
                              *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "det_analysis.m"
                              {
#line 696 "det_analysis.m"
                                check_hlds__det_analysis__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 696 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 0) = ((MR_Box) (check_hlds__det_analysis__GoalType_63));
#line 696 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 1) = ((MR_Box) (check_hlds__det_analysis__Inner_64));
#line 696 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 2) = ((MR_Box) (check_hlds__det_analysis__Outer_65));
#line 696 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 3) = ((MR_Box) (check_hlds__det_analysis__Vars_115));
#line 696 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 4) = ((MR_Box) (check_hlds__det_analysis__MainGoal_69));
#line 696 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 5) = ((MR_Box) (check_hlds__det_analysis__OrElseGoals_70));
#line 696 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 6) = ((MR_Box) (check_hlds__det_analysis__OrElseInners_68));
#line 696 "det_analysis.m"
                              }
#line 691 "det_analysis.m"
                            }
#line 698 "det_analysis.m"
                          else
#line 698 "det_analysis.m"
                            if (((MR_tag((MR_Word) check_hlds__det_analysis__ShortHand0_62)) == (MR_mktag((MR_Integer) 0))))
#line 708 "det_analysis.m"
                              {
#line 710 "det_analysis.m"
                                {
#line 710 "det_analysis.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_goal_expr\'/11", (MR_String) "bi_implication");
#line 710 "det_analysis.m"
                                  return;
                                }
#line 708 "det_analysis.m"
                              }
#line 698 "det_analysis.m"
                            else
#line 699 "det_analysis.m"
                              {
#line 699 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__MaybeIO_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 0)));
#line 699 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__ResultVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 1)));
#line 699 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__TryGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 2)));
#line 699 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__TryGoal_75;

#line 703 "det_analysis.m"
                                {
#line 703 "det_analysis.m"
                                  check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(check_hlds__det_analysis__TryGoal0_74, &check_hlds__det_analysis__TryGoal_75, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                                }
#line 706 "det_analysis.m"
                                {
#line 706 "det_analysis.m"
                                  check_hlds__det_analysis__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 706 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 0) = ((MR_Box) (check_hlds__det_analysis__MaybeIO_72));
#line 706 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 1) = ((MR_Box) (check_hlds__det_analysis__ResultVar_73));
#line 706 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 2) = ((MR_Box) (check_hlds__det_analysis__TryGoal_75));
#line 706 "det_analysis.m"
                                }
#line 699 "det_analysis.m"
                              }
#line 712 "det_analysis.m"
                          {
#line 712 "det_analysis.m"
                            MR_Word base;
#line 712 "det_analysis.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "det_analysis.m"
                            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 712 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 712 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__ShortHand_71));
#line 712 "det_analysis.m"
                          }
#line 688 "det_analysis.m"
                        }
#line 605 "det_analysis.m"
                      else
#line 627 "det_analysis.m"
                        {
#line 627 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 627 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__SwitchCanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 627 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 627 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Cases_29;

#line 633 "det_analysis.m"
                          {
#line 633 "det_analysis.m"
                            check_hlds__det_analysis__det_infer_switch_13_p_0(check_hlds__det_analysis__Var_25, check_hlds__det_analysis__SwitchCanFail_26, check_hlds__det_analysis__Cases0_27, &check_hlds__det_analysis__Cases_29, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                          }
#line 641 "det_analysis.m"
                          {
#line 641 "det_analysis.m"
                            MR_Word base;
#line 641 "det_analysis.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 641 "det_analysis.m"
                            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 641 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 641 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Var_25));
#line 641 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__SwitchCanFail_26));
#line 641 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__det_analysis__Cases_29));
#line 641 "det_analysis.m"
                          }
#line 627 "det_analysis.m"
                        }
#line 605 "det_analysis.m"
  }
#line 595 "det_analysis.m"
}

#line 550 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(
#line 550 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 550 "det_analysis.m"
{
#line 550 "det_analysis.m"
  {
#line 550 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 550 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0, 1);
#line 550 "det_analysis.m"
  }
#line 550 "det_analysis.m"
}

#line 550 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3(
#line 550 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 550 "det_analysis.m"
{
#line 550 "det_analysis.m"
  {
#line 550 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 550 "det_analysis.m"
    (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65 = ((MR_Word) (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65);
#line 550 "det_analysis.m"
    {
#line 550 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(check_hlds__det_analysis__env_ptr);
#line 550 "det_analysis.m"
      return;
    }
#line 550 "det_analysis.m"
  }
#line 550 "det_analysis.m"
}

#line 550 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(
#line 550 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 550 "det_analysis.m"
{
#line 550 "det_analysis.m"
  {
#line 550 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 550 "det_analysis.m"
    {
#line 550 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65, (MR_Integer) 0)));
#line 552 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_49_49;

#line 550 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65, (MR_Integer) 1)));
#line 551 "det_analysis.m"
      {
#line 551 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70);
      }
#line 552 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66 = (MR_Integer) 3;
#line 552 "det_analysis.m"
      {
#line 552 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48, &check_hlds__det_analysis__V_49_49, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73);
      }
#line 552 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66 == (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73);
#line 552 "det_analysis.m"
      if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 552 "det_analysis.m"
        {
#line 552 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(check_hlds__det_analysis__env_ptr);
#line 552 "det_analysis.m"
          return;
        }
#line 550 "det_analysis.m"
    }
#line 550 "det_analysis.m"
  }
#line 550 "det_analysis.m"
}

#line 550 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(
#line 550 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 550 "det_analysis.m"
{
#line 550 "det_analysis.m"
  {
#line 550 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 550 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0) == 0)
#line 550 "det_analysis.m"
      {
#line 550 "det_analysis.m"
        {
#line 550 "det_analysis.m"
          {
#line 550 "det_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45, check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3, check_hlds__det_analysis__env_ptr);
          }
#line 550 "det_analysis.m"
        }
#line 550 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 550 "det_analysis.m"
      }
#line 550 "det_analysis.m"
    else
#line 550 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 550 "det_analysis.m"
  }
#line 550 "det_analysis.m"
}

#line 451 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_12,
#line 451 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_13,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_14,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_16,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__AddPruning_18,
#line 451 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 451 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 451 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57,
#line 451 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58)
#line 451 "det_analysis.m"
{
#line 451 "det_analysis.m"
  {
#line 451 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s check_hlds__det_analysis__env;

#line 458 "det_analysis.m"
    {
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_12, (MR_Integer) 0)));
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_12, (MR_Integer) 1)));
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InstmapDelta_24;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Prune_29;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr1_30;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalDetism0_31;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalCanFail_32;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalSolns0_33;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalSolns_34;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Solns_35;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalInfo_36;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__FinalInternalSolns_44;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__FinalInternalDetism_50;
#line 458 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr_55;
#line 463 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ScopeReason_25;
#line 463 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_26_26;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CondInfo_39;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CondDetism_42;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_62_62;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_63_63;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_72_72;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_37_37;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_40_40;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_41_41;
#line 536 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_38_38;
#line 538 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_43_43;
#line 571 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_51_51;
#line 574 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_52_52;
#line 574 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_53_53;

#line 460 "det_analysis.m"
      {
#line 460 "det_analysis.m"
        check_hlds__det_analysis__InstmapDelta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo0_23);
      }
#line 463 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 463 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 463 "det_analysis.m"
        {
#line 463 "det_analysis.m"
          check_hlds__det_analysis__ScopeReason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 1)));
#line 463 "det_analysis.m"
          check_hlds__det_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 2)));
#line 473 "det_analysis.m"
          if (((MR_tag((MR_Word) check_hlds__det_analysis__ScopeReason_25)) == (MR_mktag((MR_Integer) 1))))
#line 478 "det_analysis.m"
            {
#line 478 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PromiseEqvSolnsKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 1)));
#line 478 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_59_59;
#line 478 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 0)));

#line 589 "det_analysis.m"
              if ((check_hlds__det_analysis__PromiseEqvSolnsKind_28 == (MR_Integer) 1))
#line 590 "det_analysis.m"
                check_hlds__det_analysis__V_59_59 = (MR_Integer) 0;
#line 589 "det_analysis.m"
              else
#line 589 "det_analysis.m"
                if ((check_hlds__det_analysis__PromiseEqvSolnsKind_28 == (MR_Integer) 2))
#line 591 "det_analysis.m"
                  check_hlds__det_analysis__V_59_59 = (MR_Integer) 1;
#line 589 "det_analysis.m"
                else
#line 589 "det_analysis.m"
                  check_hlds__det_analysis__V_59_59 = (MR_Integer) 1;
#line 479 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_59_59 == (MR_Integer) 1);
#line 478 "det_analysis.m"
            }
#line 473 "det_analysis.m"
          else
#line 473 "det_analysis.m"
            if (((((MR_tag((MR_Word) check_hlds__det_analysis__ScopeReason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 472 "det_analysis.m"
              {
#line 472 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 1)));

#line 472 "det_analysis.m"
                (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_60_60 == (MR_Integer) 0);
#line 472 "det_analysis.m"
              }
#line 473 "det_analysis.m"
            else
#line 473 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 463 "det_analysis.m"
        }
#line 483 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 482 "det_analysis.m"
        check_hlds__det_analysis__Prune_29 = (MR_Integer) 1;
#line 483 "det_analysis.m"
      else
#line 484 "det_analysis.m"
        check_hlds__det_analysis__Prune_29 = check_hlds__det_analysis__AddPruning_18;
#line 487 "det_analysis.m"
      {
#line 487 "det_analysis.m"
        check_hlds__det_analysis__det_infer_goal_expr_11_p_0(check_hlds__det_analysis__GoalExpr0_22, &check_hlds__det_analysis__GoalExpr1_30, check_hlds__det_analysis__GoalInfo0_23, check_hlds__det_analysis__InstMap0_14, check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56, check_hlds__det_analysis__RightFailingContexts_16, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17, &check_hlds__det_analysis__InternalDetism0_31, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58);
      }
#line 491 "det_analysis.m"
      {
#line 491 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__InternalDetism0_31, &check_hlds__det_analysis__InternalCanFail_32, &check_hlds__det_analysis__InternalSolns0_33);
      }
#line 496 "det_analysis.m"
      {
#line 496 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(check_hlds__det_analysis__InstmapDelta_24);
      }
#line 499 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 498 "det_analysis.m"
        check_hlds__det_analysis__InternalSolns_34 = (MR_Integer) 0;
#line 499 "det_analysis.m"
      else
#line 500 "det_analysis.m"
        check_hlds__det_analysis__InternalSolns_34 = check_hlds__det_analysis__InternalSolns0_33;
#line 504 "det_analysis.m"
      if ((check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 3))
#line 503 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 504 "det_analysis.m"
      else
#line 504 "det_analysis.m"
        if ((check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 2))
#line 504 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 504 "det_analysis.m"
        else
#line 504 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 505 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 506 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Prune_29 == (MR_Integer) 1);
#line 509 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 508 "det_analysis.m"
        check_hlds__det_analysis__Solns_35 = (MR_Integer) 1;
#line 509 "det_analysis.m"
      else
#line 517 "det_analysis.m"
        {
#line 513 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 3);
#line 513 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 514 "det_analysis.m"
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56 == (MR_Integer) 1);
#line 517 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 516 "det_analysis.m"
            check_hlds__det_analysis__Solns_35 = (MR_Integer) 2;
#line 517 "det_analysis.m"
          else
#line 518 "det_analysis.m"
            check_hlds__det_analysis__Solns_35 = check_hlds__det_analysis__InternalSolns_34;
#line 517 "det_analysis.m"
        }
#line 520 "det_analysis.m"
      {
#line 520 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__InternalCanFail_32, check_hlds__det_analysis__Solns_35);
      }
#line 521 "det_analysis.m"
      {
#line 521 "det_analysis.m"
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(*check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalInfo0_23, &check_hlds__det_analysis__GoalInfo_36);
      }
#line 536 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 536 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 536 "det_analysis.m"
        {
#line 536 "det_analysis.m"
          check_hlds__det_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 536 "det_analysis.m"
          check_hlds__det_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 536 "det_analysis.m"
          check_hlds__det_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 3)));
#line 536 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 4)));
#line 536 "det_analysis.m"
          check_hlds__det_analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_62_62, (MR_Integer) 0)));
#line 536 "det_analysis.m"
          check_hlds__det_analysis__CondInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_62_62, (MR_Integer) 1)));
#line 537 "det_analysis.m"
          {
#line 537 "det_analysis.m"
            check_hlds__det_analysis__CondDetism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_analysis__CondInfo_39);
          }
#line 538 "det_analysis.m"
          check_hlds__det_analysis__V_63_63 = (MR_Integer) 3;
#line 538 "det_analysis.m"
          {
#line 538 "det_analysis.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CondDetism_42, &check_hlds__det_analysis__V_43_43, &check_hlds__det_analysis__V_72_72);
          }
#line 538 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_63_63 == check_hlds__det_analysis__V_72_72);
#line 536 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 536 "det_analysis.m"
            {
#line 539 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Solns_35 == (MR_Integer) 3);
#line 539 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 536 "det_analysis.m"
            }
#line 536 "det_analysis.m"
        }
#line 542 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 541 "det_analysis.m"
        check_hlds__det_analysis__FinalInternalSolns_44 = (MR_Integer) 3;
#line 542 "det_analysis.m"
      else
#line 556 "det_analysis.m"
        {
#line 547 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_64_64;

#line 548 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Solns_35 == (MR_Integer) 0);
#line 547 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 547 "det_analysis.m"
            {
#line 547 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 547 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 547 "det_analysis.m"
                {
#line 547 "det_analysis.m"
                  check_hlds__det_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 547 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 547 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_64_64 == (MR_Integer) 0);
#line 547 "det_analysis.m"
                  if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 550 "det_analysis.m"
                    {
#line 550 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(&check_hlds__det_analysis__env);
                    }
#line 547 "det_analysis.m"
                }
#line 547 "det_analysis.m"
            }
#line 556 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 555 "det_analysis.m"
            check_hlds__det_analysis__FinalInternalSolns_44 = (MR_Integer) 3;
#line 556 "det_analysis.m"
          else
#line 557 "det_analysis.m"
            check_hlds__det_analysis__FinalInternalSolns_44 = check_hlds__det_analysis__InternalSolns_34;
#line 556 "det_analysis.m"
        }
#line 559 "det_analysis.m"
      {
#line 559 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_analysis__FinalInternalDetism_50, check_hlds__det_analysis__InternalCanFail_32, check_hlds__det_analysis__FinalInternalSolns_44);
      }
#line 565 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (*check_hlds__det_analysis__Detism_19 == check_hlds__det_analysis__FinalInternalDetism_50);
#line 565 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 565 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 565 "det_analysis.m"
        {
#line 571 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 571 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 571 "det_analysis.m"
            check_hlds__det_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 571 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 565 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 565 "det_analysis.m"
            {
#line 574 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 574 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 574 "det_analysis.m"
                {
#line 574 "det_analysis.m"
                  check_hlds__det_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 574 "det_analysis.m"
                  check_hlds__det_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 574 "det_analysis.m"
                }
#line 574 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 565 "det_analysis.m"
            }
#line 565 "det_analysis.m"
        }
#line 581 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 578 "det_analysis.m"
        {
#line 578 "det_analysis.m"
          MR_Word check_hlds__det_analysis__InnerInfo_54;
#line 578 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_69_69;

#line 578 "det_analysis.m"
          {
#line 578 "det_analysis.m"
            hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__det_analysis__FinalInternalDetism_50, check_hlds__det_analysis__GoalInfo0_23, &check_hlds__det_analysis__InnerInfo_54);
          }
#line 579 "det_analysis.m"
          {
#line 579 "det_analysis.m"
            check_hlds__det_analysis__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_69_69, 0) = ((MR_Box) (check_hlds__det_analysis__GoalExpr1_30));
#line 579 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_69_69, 1) = ((MR_Box) (check_hlds__det_analysis__InnerInfo_54));
#line 579 "det_analysis.m"
          }
#line 579 "det_analysis.m"
          {
#line 579 "det_analysis.m"
            check_hlds__det_analysis__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 579 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 579 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[94])));
#line 579 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 2) = ((MR_Box) (check_hlds__det_analysis__V_69_69));
#line 579 "det_analysis.m"
          }
#line 578 "det_analysis.m"
        }
#line 581 "det_analysis.m"
      else
#line 583 "det_analysis.m"
        check_hlds__det_analysis__GoalExpr_55 = check_hlds__det_analysis__GoalExpr1_30;
#line 585 "det_analysis.m"
      {
#line 585 "det_analysis.m"
        MR_Word base;
#line 585 "det_analysis.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "det_analysis.m"
        *check_hlds__det_analysis__Goal_13 = base;
#line 585 "det_analysis.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_analysis__GoalExpr_55));
#line 585 "det_analysis.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalInfo_36));
#line 585 "det_analysis.m"
      }
#line 458 "det_analysis.m"
    }
#line 451 "det_analysis.m"
  }
#line 451 "det_analysis.m"
}

#line 412 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
#line 412 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 412 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_7,
#line 412 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_8,
#line 412 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Context_9)
#line 412 "det_analysis.m"
{
#line 415 "det_analysis.m"
  while (MR_TRUE)
#line 415 "det_analysis.m"
    {
#line 415 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 415 "det_analysis.m"
      {
#line 415 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 415 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Proc_5;
#line 415 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Procs_6;
#line 418 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context0_12;
#line 416 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_13_13;
#line 416 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__V_14_14;
#line 416 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_10_10;
#line 416 "det_analysis.m"
        MR_String check_hlds__det_analysis__V_11_11;

#line 415 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 415 "det_analysis.m"
          {
#line 415 "det_analysis.m"
            check_hlds__det_analysis__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 415 "det_analysis.m"
            check_hlds__det_analysis__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 416 "det_analysis.m"
            check_hlds__det_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 0)));
#line 416 "det_analysis.m"
            check_hlds__det_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 1)));
#line 416 "det_analysis.m"
            check_hlds__det_analysis__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 2)));
#line 416 "det_analysis.m"
            check_hlds__det_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 3)));
#line 416 "det_analysis.m"
            check_hlds__det_analysis__Context0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 4)));
#line 416 "det_analysis.m"
            {
#line 416 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_analysis__PredId_7, check_hlds__det_analysis__V_13_13);
            }
#line 416 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 416 "det_analysis.m"
              check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ProcId_8 == check_hlds__det_analysis__V_14_14);
#line 418 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 417 "det_analysis.m"
              {
#line 417 "det_analysis.m"
                *check_hlds__det_analysis__Context_9 = check_hlds__det_analysis__Context0_12;
#line 417 "det_analysis.m"
                check_hlds__det_analysis__succeeded = MR_TRUE;
#line 417 "det_analysis.m"
              }
#line 418 "det_analysis.m"
            else
#line 419 "det_analysis.m"
              {
#line 419 "det_analysis.m"
                /* direct tailcall eliminated */
#line 419 "det_analysis.m"
                {
#line 419 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__Procs_6;

#line 419 "det_analysis.m"
                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 419 "det_analysis.m"
                }
#line 419 "det_analysis.m"
                continue;
#line 419 "det_analysis.m"
              }
#line 415 "det_analysis.m"
          }
#line 415 "det_analysis.m"
        return check_hlds__det_analysis__succeeded;
#line 415 "det_analysis.m"
      }
#line 415 "det_analysis.m"
      break;
#line 415 "det_analysis.m"
    }
#line 412 "det_analysis.m"
}

#line 213 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_2,
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3,
#line 213 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4,
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5,
#line 213 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_6,
#line 213 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7,
#line 213 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Changed_8)
#line 213 "det_analysis.m"
{
#line 218 "det_analysis.m"
  while (MR_TRUE)
#line 218 "det_analysis.m"
    {
#line 218 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 218 "det_analysis.m"
      {
#line 218 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 218 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "det_analysis.m"
          {
#line 218 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_Changed_8 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7;
#line 218 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_Specs_6 = check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5;
#line 218 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3;
#line 218 "det_analysis.m"
          }
#line 218 "det_analysis.m"
        else
#line 220 "det_analysis.m"
          {
#line 220 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredId_19;
#line 220 "det_analysis.m"
            MR_Integer check_hlds__det_analysis__ProcId_20;
#line 220 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredProcs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "det_analysis.m"
            MR_Word check_hlds__det_analysis__OldDetism_26;
#line 220 "det_analysis.m"
            MR_Word check_hlds__det_analysis__NewDetism_27;
#line 220 "det_analysis.m"
            MR_String check_hlds__det_analysis__ChangeStr_28;
#line 220 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37;
#line 220 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38;
#line 220 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39;

#line 219 "det_analysis.m"
            check_hlds__det_analysis__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_36_36, (MR_Integer) 0)));
#line 219 "det_analysis.m"
            check_hlds__det_analysis__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_36_36, (MR_Integer) 1)));
#line 221 "det_analysis.m"
            {
#line 221 "det_analysis.m"
              check_hlds__det_analysis__det_infer_proc_8_p_0(check_hlds__det_analysis__PredId_19, check_hlds__det_analysis__ProcId_20, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__det_analysis__OldDetism_26, &check_hlds__det_analysis__NewDetism_27, check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5, &check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38);
            }
#line 222 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NewDetism_27 == check_hlds__det_analysis__OldDetism_26);
#line 224 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 223 "det_analysis.m"
              {
#line 223 "det_analysis.m"
                check_hlds__det_analysis__ChangeStr_28 = (MR_String) "old";
#line 223 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7;
#line 223 "det_analysis.m"
              }
#line 224 "det_analysis.m"
            else
#line 225 "det_analysis.m"
              {
#line 225 "det_analysis.m"
                check_hlds__det_analysis__ChangeStr_28 = (MR_String) "new";
#line 226 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39 = (MR_Integer) 0;
#line 225 "det_analysis.m"
              }
#line 237 "det_analysis.m"
            if ((check_hlds__det_analysis__Debug_2 == (MR_Integer) 0))
#line 238 "det_analysis.m"
              {
#line 238 "det_analysis.m"
              }
#line 237 "det_analysis.m"
            else
#line 230 "det_analysis.m"
              {
#line 230 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_41_41;
#line 230 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_44_44;

#line 231 "det_analysis.m"
                {
#line 231 "det_analysis.m"
                  check_hlds__det_analysis__V_44_44 = mercury__string__f_43_43_2_f_0(check_hlds__det_analysis__ChangeStr_28, (MR_String) " detism ");
                }
#line 231 "det_analysis.m"
                {
#line 231 "det_analysis.m"
                  check_hlds__det_analysis__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "% Inferred ", check_hlds__det_analysis__V_44_44);
                }
#line 231 "det_analysis.m"
                {
#line 231 "det_analysis.m"
                  mercury__io__write_string_3_p_0(check_hlds__det_analysis__V_41_41);
                }
#line 232 "det_analysis.m"
                {
#line 232 "det_analysis.m"
                  parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(check_hlds__det_analysis__NewDetism_27);
                }
#line 233 "det_analysis.m"
                {
#line 233 "det_analysis.m"
                  mercury__io__write_string_3_p_0((MR_String) " for ");
                }
#line 234 "det_analysis.m"
                {
#line 234 "det_analysis.m"
                  hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__det_analysis__PredId_19, check_hlds__det_analysis__ProcId_20);
                }
#line 235 "det_analysis.m"
                {
#line 235 "det_analysis.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 230 "det_analysis.m"
              }
#line 240 "det_analysis.m"
            /* direct tailcall eliminated */
#line 240 "det_analysis.m"
            {
#line 240 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__PredProcs_21;
#line 240 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37;
#line 240 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38;
#line 240 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39;

#line 240 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 240 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5 = check_hlds__det_analysis__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 240 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 240 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 240 "det_analysis.m"
            }
#line 240 "det_analysis.m"
            continue;
#line 220 "det_analysis.m"
          }
#line 218 "det_analysis.m"
      }
#line 218 "det_analysis.m"
      break;
#line 218 "det_analysis.m"
    }
#line 213 "det_analysis.m"
}

#line 183 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
#line 183 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13,
#line 183 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14,
#line 183 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ProcList_7,
#line 183 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_8,
#line 183 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Specs_9)
#line 183 "det_analysis.m"
{
#line 186 "det_analysis.m"
  while (MR_TRUE)
#line 186 "det_analysis.m"
    {
#line 186 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 186 "det_analysis.m"
      {
#line 186 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;
#line 186 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Specs1_10;
#line 186 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Changed_11;
#line 186 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;

#line 192 "det_analysis.m"
        {
#line 192 "det_analysis.m"
          check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__ProcList_7, check_hlds__det_analysis__Debug_8, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Specs1_10, (MR_Integer) 1, &check_hlds__det_analysis__Changed_11);
        }
#line 195 "det_analysis.m"
        {
#line 195 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Debug_8, (MR_String) "% Inference pass complete\n");
        }
#line 205 "det_analysis.m"
        if ((check_hlds__det_analysis__Changed_11 == (MR_Integer) 0))
#line 204 "det_analysis.m"
          {
#line 204 "det_analysis.m"
            /* direct tailcall eliminated */
#line 204 "det_analysis.m"
            {
#line 204 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_13 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;

#line 204 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_13;
#line 204 "det_analysis.m"
            }
#line 204 "det_analysis.m"
            continue;
#line 204 "det_analysis.m"
          }
#line 205 "det_analysis.m"
        else
#line 206 "det_analysis.m"
          {
#line 210 "det_analysis.m"
            *check_hlds__det_analysis__Specs_9 = check_hlds__det_analysis__Specs1_10;
#line 210 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;
#line 206 "det_analysis.m"
          }
#line 186 "det_analysis.m"
      }
#line 186 "det_analysis.m"
      break;
#line 186 "det_analysis.m"
    }
#line 183 "det_analysis.m"
}

#line 101 "det_analysis.m"
void MR_CALL 
check_hlds__det_analysis__det_get_soln_context_2_p_0(
#line 101 "det_analysis.m"
  MR_Word check_hlds__det_analysis__DeclaredDetism_3,
#line 101 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__SolnContext_4)
#line 101 "det_analysis.m"
{
#line 2036 "det_analysis.m"
  {
#line 2036 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 2034 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_7_7;
#line 2034 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_5_5;

#line 2034 "det_analysis.m"
    {
#line 2034 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__DeclaredDetism_3, &check_hlds__det_analysis__V_5_5, &check_hlds__det_analysis__V_7_7);
    }
#line 2034 "det_analysis.m"
    check_hlds__det_analysis__succeeded = ((MR_Integer) 2 == check_hlds__det_analysis__V_7_7);
#line 2036 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 2035 "det_analysis.m"
      *check_hlds__det_analysis__SolnContext_4 = (MR_Integer) 1;
#line 2036 "det_analysis.m"
    else
#line 2037 "det_analysis.m"
      *check_hlds__det_analysis__SolnContext_4 = (MR_Integer) 0;
#line 2036 "det_analysis.m"
  }
#line 101 "det_analysis.m"
}

#line 94 "det_analysis.m"
void MR_CALL 
check_hlds__det_analysis__det_infer_goal_10_p_0(
#line 94 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_11,
#line 94 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_12,
#line 94 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_13,
#line 94 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_26,
#line 94 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_15,
#line 94 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_16,
#line 94 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_17,
#line 94 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_18,
#line 94 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
#line 94 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28)
#line 94 "det_analysis.m"
{
#line 425 "det_analysis.m"
  {
#line 425 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 425 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_11, (MR_Integer) 1)));
#line 425 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NonLocalVars_22;
#line 425 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InstmapDelta_23;
#line 425 "det_analysis.m"
    MR_Word check_hlds__det_analysis__AddPruning_25;
#line 425 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30;
#line 426 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_11, (MR_Integer) 0)));
#line 433 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Purity_24;
#line 438 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_29_29;

#line 427 "det_analysis.m"
    {
#line 427 "det_analysis.m"
      check_hlds__det_analysis__NonLocalVars_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
    }
#line 428 "det_analysis.m"
    {
#line 428 "det_analysis.m"
      check_hlds__det_analysis__InstmapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
    }
#line 433 "det_analysis.m"
    {
#line 433 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__det_util__det_no_output_vars_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__InstMap0_13, check_hlds__det_analysis__InstmapDelta_23, check_hlds__det_analysis__NonLocalVars_22);
    }
#line 433 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 433 "det_analysis.m"
      {
#line 434 "det_analysis.m"
        {
#line 434 "det_analysis.m"
          check_hlds__det_analysis__Purity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
        }
#line 436 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Purity_24 == (MR_Integer) 2);
#line 437 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 437 "det_analysis.m"
          {
#line 438 "det_analysis.m"
            check_hlds__det_analysis__V_29_29 = (MR_Integer) 2;
#line 438 "det_analysis.m"
            {
#line 438 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__det_analysis__GoalInfo0_21, check_hlds__det_analysis__V_29_29);
            }
#line 437 "det_analysis.m"
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 437 "det_analysis.m"
          }
#line 437 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 433 "det_analysis.m"
      }
#line 444 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 442 "det_analysis.m"
      {
#line 442 "det_analysis.m"
        check_hlds__det_analysis__AddPruning_25 = (MR_Integer) 1;
#line 443 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30 = (MR_Integer) 1;
#line 442 "det_analysis.m"
      }
#line 444 "det_analysis.m"
    else
#line 445 "det_analysis.m"
      {
#line 445 "det_analysis.m"
        check_hlds__det_analysis__AddPruning_25 = (MR_Integer) 0;
#line 445 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30 = check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_26;
#line 445 "det_analysis.m"
      }
#line 447 "det_analysis.m"
    {
#line 447 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(check_hlds__det_analysis__Goal0_11, check_hlds__det_analysis__Goal_12, check_hlds__det_analysis__InstMap0_13, check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30, check_hlds__det_analysis__RightFailingContexts_15, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_16, check_hlds__det_analysis__AddPruning_25, check_hlds__det_analysis__Detism_17, check_hlds__det_analysis__GoalFailingContexts_18, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);
#line 447 "det_analysis.m"
      return;
    }
#line 425 "det_analysis.m"
  }
#line 94 "det_analysis.m"
}

#line 360 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
#line 360 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 360 "det_analysis.m"
{
#line 360 "det_analysis.m"
  {
#line 360 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 360 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0, 1);
#line 360 "det_analysis.m"
  }
#line 360 "det_analysis.m"
}

#line 359 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
#line 359 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 359 "det_analysis.m"
{
#line 359 "det_analysis.m"
  {
#line 359 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 359 "det_analysis.m"
    (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_157_157 = ((MR_Word) (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_157_157);
#line 359 "det_analysis.m"
    {
#line 359 "det_analysis.m"
      check_hlds__det_analysis__det_infer_proc_8_p_0_2(check_hlds__det_analysis__env_ptr);
#line 359 "det_analysis.m"
      return;
    }
#line 359 "det_analysis.m"
  }
#line 359 "det_analysis.m"
}

#line 360 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
#line 360 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 360 "det_analysis.m"
{
#line 360 "det_analysis.m"
  {
#line 360 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 359 "det_analysis.m"
    {
#line 359 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_121_121, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_157_157);
    }
#line 360 "det_analysis.m"
    if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 360 "det_analysis.m"
      {
#line 362 "det_analysis.m"
        if ((*((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) == (MR_Integer) 2))
#line 361 "det_analysis.m"
          (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 362 "det_analysis.m"
        else
#line 362 "det_analysis.m"
          if ((*((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) == (MR_Integer) 3))
#line 362 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 362 "det_analysis.m"
          else
#line 362 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
#line 362 "det_analysis.m"
        if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 362 "det_analysis.m"
          {
#line 362 "det_analysis.m"
            check_hlds__det_analysis__det_infer_proc_8_p_0_1(check_hlds__det_analysis__env_ptr);
#line 362 "det_analysis.m"
            return;
          }
#line 360 "det_analysis.m"
      }
#line 360 "det_analysis.m"
  }
#line 360 "det_analysis.m"
}

#line 360 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
#line 360 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 360 "det_analysis.m"
{
#line 360 "det_analysis.m"
  {
#line 360 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 360 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0) == 0)
#line 360 "det_analysis.m"
      {
#line 360 "det_analysis.m"
        {
#line 359 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_53_53;
#line 359 "det_analysis.m"
          MR_String check_hlds__det_analysis__V_54_54;
#line 359 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_55_55;

#line 359 "det_analysis.m"
          {
#line 359 "det_analysis.m"
            MR_Word base;
#line 359 "det_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_121_121 = base;
#line 359 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = NULL;
#line 359 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
#line 359 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
#line 359 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = NULL;
#line 359 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = NULL;
#line 359 "det_analysis.m"
          }
#line 359 "det_analysis.m"
          {
#line 359 "det_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_157_157, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_52, check_hlds__det_analysis__det_infer_proc_8_p_0_3, check_hlds__det_analysis__env_ptr);
          }
#line 360 "det_analysis.m"
        }
#line 360 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
#line 360 "det_analysis.m"
      }
#line 360 "det_analysis.m"
    else
#line 360 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 360 "det_analysis.m"
  }
#line 360 "det_analysis.m"
}

#line 82 "det_analysis.m"
void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0(
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_9,
#line 82 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_10,
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_68,
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_69,
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__OldDetism_12,
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__NewDetism_13,
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_70,
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_71)
#line 82 "det_analysis.m"
{
#line 82 "det_analysis.m"
  {
#line 82 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s check_hlds__det_analysis__env;

#line 82 "det_analysis.m"
    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9 = check_hlds__det_analysis__PredId_9;
#line 82 "det_analysis.m"
    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10 = check_hlds__det_analysis__ProcId_10;
#line 82 "det_analysis.m"
    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13 = check_hlds__det_analysis__NewDetism_13;
#line 258 "det_analysis.m"
    {
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_151_151;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_152_152;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_153_153;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_154_154;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredTable0_15;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo0_16;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcTable0_17;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo0_18;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldInferredSolnContext_19;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__MaybeDeclaredDetism_20;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DeclaredSolnContext_22;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__SolnContext_23;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Goal0_25;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InstMap0_26;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__VarTypes_27;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DetInfo0_28;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Goal_29;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferDetism_30;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DetInfo_32;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__HasFormatCalls_33;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__HasRequireScope_34;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldCanFail_35;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldMaxSoln_36;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferCanFail_37;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferMaxSoln_38;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CanFail_39;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__MaxSoln_40;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TentativeDetism_41;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__EvalMethod_42;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo1_59;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo_60;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcTable_61;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo1_62;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers1_63;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers2_64;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers_65;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo_66;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredTable_67;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_84_84;
#line 258 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120;
#line 261 "det_analysis.m"
      MR_Box check_hlds__det_analysis__conv0_PredInfo0_16;
#line 263 "det_analysis.m"
      MR_Box check_hlds__det_analysis__conv1_ProcInfo0_18;
#line 304 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_31_31;
#line 326 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ToBeCheckedDetism_45;
#line 326 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ToBeCheckedCodeModel_46;
#line 326 "det_analysis.m"
      MR_Integer check_hlds__det_analysis___InArg_43;
#line 326 "det_analysis.m"
      MR_Integer check_hlds__det_analysis___OutArg_44;

#line 260 "det_analysis.m"
      {
#line 260 "det_analysis.m"
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_68, &check_hlds__det_analysis__PredTable0_15);
      }
#line 11226 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_151_151 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 11228 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_152_152 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 261 "det_analysis.m"
      {
#line 261 "det_analysis.m"
        mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_151_151, check_hlds__det_analysis__TypeCtorInfo_152_152, check_hlds__det_analysis__PredTable0_15, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), &check_hlds__det_analysis__conv0_PredInfo0_16);
      }
#line 261 "det_analysis.m"
      check_hlds__det_analysis__PredInfo0_16 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo0_16);
#line 262 "det_analysis.m"
      {
#line 262 "det_analysis.m"
        hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_analysis__PredInfo0_16, &check_hlds__det_analysis__ProcTable0_17);
      }
#line 11242 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_153_153 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 11244 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_154_154 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 263 "det_analysis.m"
      {
#line 263 "det_analysis.m"
        mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_153_153, check_hlds__det_analysis__TypeCtorInfo_154_154, check_hlds__det_analysis__ProcTable0_17, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10)), &check_hlds__det_analysis__conv1_ProcInfo0_18);
      }
#line 263 "det_analysis.m"
      check_hlds__det_analysis__ProcInfo0_18 = ((MR_Word) check_hlds__det_analysis__conv1_ProcInfo0_18);
#line 266 "det_analysis.m"
      {
#line 266 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_18, check_hlds__det_analysis__OldDetism_12);
      }
#line 271 "det_analysis.m"
      {
#line 271 "det_analysis.m"
        check_hlds__det_analysis__det_get_soln_context_2_p_0(*check_hlds__det_analysis__OldDetism_12, &check_hlds__det_analysis__OldInferredSolnContext_19);
      }
#line 272 "det_analysis.m"
      {
#line 272 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__MaybeDeclaredDetism_20);
      }
#line 276 "det_analysis.m"
      if ((check_hlds__det_analysis__MaybeDeclaredDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "det_analysis.m"
        check_hlds__det_analysis__DeclaredSolnContext_22 = (MR_Integer) 0;
#line 276 "det_analysis.m"
      else
#line 274 "det_analysis.m"
        {
#line 274 "det_analysis.m"
          MR_Word check_hlds__det_analysis__DeclaredDetism_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDeclaredDetism_20, (MR_Integer) 0)));

#line 275 "det_analysis.m"
          {
#line 275 "det_analysis.m"
            check_hlds__det_analysis__det_get_soln_context_2_p_0(check_hlds__det_analysis__DeclaredDetism_21, &check_hlds__det_analysis__DeclaredSolnContext_22);
          }
#line 274 "det_analysis.m"
        }
#line 281 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__DeclaredSolnContext_22 == (MR_Integer) 1);
#line 282 "det_analysis.m"
      if (!((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded))
#line 282 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__OldInferredSolnContext_19 == (MR_Integer) 1);
#line 286 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 285 "det_analysis.m"
        check_hlds__det_analysis__SolnContext_23 = (MR_Integer) 1;
#line 286 "det_analysis.m"
      else
#line 287 "det_analysis.m"
        check_hlds__det_analysis__SolnContext_23 = (MR_Integer) 0;
#line 299 "det_analysis.m"
      {
#line 299 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__Goal0_25);
      }
#line 300 "det_analysis.m"
      {
#line 300 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_analysis__ProcInfo0_18, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_68, &check_hlds__det_analysis__InstMap0_26);
      }
#line 301 "det_analysis.m"
      {
#line 301 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__VarTypes_27);
      }
#line 302 "det_analysis.m"
      {
#line 302 "det_analysis.m"
        check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_68, check_hlds__det_analysis__VarTypes_27, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, (MR_Integer) 0, check_hlds__det_analysis__STATE_VARIABLE_Specs_0_70, &check_hlds__det_analysis__DetInfo0_28);
      }
#line 304 "det_analysis.m"
      {
#line 304 "det_analysis.m"
        check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_25, &check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__InstMap0_26, check_hlds__det_analysis__SolnContext_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__InferDetism_30, &check_hlds__det_analysis__V_31_31, check_hlds__det_analysis__DetInfo0_28, &check_hlds__det_analysis__DetInfo_32);
      }
#line 306 "det_analysis.m"
      {
#line 306 "det_analysis.m"
        check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83);
      }
#line 307 "det_analysis.m"
      {
#line 307 "det_analysis.m"
        check_hlds__det_util__det_info_get_error_specs_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__STATE_VARIABLE_Specs_84_84);
      }
#line 308 "det_analysis.m"
      {
#line 308 "det_analysis.m"
        check_hlds__det_util__det_info_get_has_format_call_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__HasFormatCalls_33);
      }
#line 309 "det_analysis.m"
      {
#line 309 "det_analysis.m"
        check_hlds__det_util__det_info_get_has_req_scope_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__HasRequireScope_34);
      }
#line 316 "det_analysis.m"
      {
#line 316 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__OldDetism_12, &check_hlds__det_analysis__OldCanFail_35, &check_hlds__det_analysis__OldMaxSoln_36);
      }
#line 317 "det_analysis.m"
      {
#line 317 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__InferDetism_30, &check_hlds__det_analysis__InferCanFail_37, &check_hlds__det_analysis__InferMaxSoln_38);
      }
#line 318 "det_analysis.m"
      {
#line 318 "det_analysis.m"
        parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__OldCanFail_35, check_hlds__det_analysis__InferCanFail_37, &check_hlds__det_analysis__CanFail_39);
      }
#line 319 "det_analysis.m"
      {
#line 319 "det_analysis.m"
        parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__OldMaxSoln_36, check_hlds__det_analysis__InferMaxSoln_38, &check_hlds__det_analysis__MaxSoln_40);
      }
#line 320 "det_analysis.m"
      {
#line 320 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_analysis__TentativeDetism_41, check_hlds__det_analysis__CanFail_39, check_hlds__det_analysis__MaxSoln_40);
      }
#line 323 "det_analysis.m"
      {
#line 323 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__EvalMethod_42);
      }
#line 324 "det_analysis.m"
      {
#line 324 "det_analysis.m"
        *((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) = hlds__hlds_pred__eval_method_change_determinism_2_f_0(check_hlds__det_analysis__EvalMethod_42, check_hlds__det_analysis__TentativeDetism_41);
      }
#line 326 "det_analysis.m"
      {
#line 326 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = hlds__hlds_pred__proc_info_has_io_state_pair_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83, check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis___InArg_43, &check_hlds__det_analysis___OutArg_44);
      }
#line 326 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 326 "det_analysis.m"
        {
#line 329 "det_analysis.m"
          if ((check_hlds__det_analysis__MaybeDeclaredDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "det_analysis.m"
            check_hlds__det_analysis__ToBeCheckedDetism_45 = *((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13);
#line 329 "det_analysis.m"
          else
#line 328 "det_analysis.m"
            check_hlds__det_analysis__ToBeCheckedDetism_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDeclaredDetism_20, (MR_Integer) 0)));
#line 333 "det_analysis.m"
          {
#line 333 "det_analysis.m"
            hlds__code_model__determinism_to_code_model_2_p_0(check_hlds__det_analysis__ToBeCheckedDetism_45, &check_hlds__det_analysis__ToBeCheckedCodeModel_46);
          }
#line 334 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__ToBeCheckedCodeModel_46 == (MR_Integer) 0);
#line 334 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded);
#line 326 "det_analysis.m"
        }
#line 348 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 336 "det_analysis.m"
        {
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__TypeCtorInfo_155_155;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__ProcContext_47;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStateProcPieces_48;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStatePieces_49;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStateSpec_51;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_86_86;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_91_91;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_112_112;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_113_113;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_114_114;
#line 336 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_115_115;

#line 336 "det_analysis.m"
          {
#line 336 "det_analysis.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__ProcContext_47);
          }
#line 337 "det_analysis.m"
          {
#line 337 "det_analysis.m"
            check_hlds__det_analysis__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_86_86, 0) = ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
#line 337 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_86_86, 1) = ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
#line 337 "det_analysis.m"
          }
#line 337 "det_analysis.m"
          {
#line 337 "det_analysis.m"
            check_hlds__det_analysis__IOStateProcPieces_48 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83, (MR_Integer) 1, check_hlds__det_analysis__V_86_86);
          }
#line 11455 "check_hlds.det_analysis.c"
          check_hlds__det_analysis__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 339 "det_analysis.m"
          {
#line 339 "det_analysis.m"
            check_hlds__det_analysis__V_91_91 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_155_155, check_hlds__det_analysis__IOStateProcPieces_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[9]));
          }
#line 339 "det_analysis.m"
          {
#line 339 "det_analysis.m"
            check_hlds__det_analysis__IOStatePieces_49 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_155_155, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[90]), check_hlds__det_analysis__V_91_91);
          }
#line 346 "det_analysis.m"
          {
#line 346 "det_analysis.m"
            check_hlds__det_analysis__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 346 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_115_115, 0) = ((MR_Box) (check_hlds__det_analysis__IOStatePieces_49));
#line 346 "det_analysis.m"
          }
#line 345 "det_analysis.m"
          {
#line 345 "det_analysis.m"
            check_hlds__det_analysis__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 0) = ((MR_Box) (check_hlds__det_analysis__V_115_115));
#line 345 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[91])));
#line 345 "det_analysis.m"
          }
#line 346 "det_analysis.m"
          {
#line 346 "det_analysis.m"
            check_hlds__det_analysis__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_113_113, 0) = ((MR_Box) (check_hlds__det_analysis__ProcContext_47));
#line 346 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_113_113, 1) = ((MR_Box) (check_hlds__det_analysis__V_114_114));
#line 346 "det_analysis.m"
          }
#line 344 "det_analysis.m"
          {
#line 344 "det_analysis.m"
            check_hlds__det_analysis__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_112_112, 0) = ((MR_Box) (check_hlds__det_analysis__V_113_113));
#line 344 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "det_analysis.m"
          }
#line 344 "det_analysis.m"
          {
#line 344 "det_analysis.m"
            check_hlds__det_analysis__IOStateSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 344 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 344 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 2) = ((MR_Box) (check_hlds__det_analysis__V_112_112));
#line 344 "det_analysis.m"
          }
#line 347 "det_analysis.m"
          {
#line 347 "det_analysis.m"
            check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120, 0) = ((MR_Box) (check_hlds__det_analysis__IOStateSpec_51));
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_Specs_84_84));
#line 347 "det_analysis.m"
          }
#line 336 "det_analysis.m"
        }
#line 348 "det_analysis.m"
      else
#line 347 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120 = check_hlds__det_analysis__STATE_VARIABLE_Specs_84_84;
#line 357 "det_analysis.m"
      {
#line 357 "det_analysis.m"
        hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83, &(check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_52);
      }
#line 360 "det_analysis.m"
      {
#line 360 "det_analysis.m"
        check_hlds__det_analysis__det_infer_proc_8_p_0_4(&check_hlds__det_analysis__env);
      }
#line 380 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 376 "det_analysis.m"
        {
#line 376 "det_analysis.m"
          MR_Word check_hlds__det_analysis__PragmaContext_56;

#line 366 "det_analysis.m"
          {
#line 366 "det_analysis.m"
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis__get_exported_proc_context_4_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_52, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, &check_hlds__det_analysis__PragmaContext_56);
          }
#line 376 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 372 "det_analysis.m"
            {
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ExportPieces_57;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ExportSpec_58;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_124_124;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_127_127;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_130_130;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_131_131;
#line 372 "det_analysis.m"
              MR_String check_hlds__det_analysis__V_132_132;
#line 372 "det_analysis.m"
              MR_String check_hlds__det_analysis__V_133_133;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_138_138;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_139_139;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_140_140;
#line 372 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_141_141;

#line 372 "det_analysis.m"
              {
#line 372 "det_analysis.m"
                check_hlds__det_analysis__V_133_133 = parse_tree__prog_out__determinism_to_string_1_f_0(*((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13));
              }
#line 372 "det_analysis.m"
              {
#line 372 "det_analysis.m"
                check_hlds__det_analysis__V_132_132 = mercury__string__f_43_43_2_f_0(check_hlds__det_analysis__V_133_133, (MR_String) ".");
              }
#line 372 "det_analysis.m"
              {
#line 372 "det_analysis.m"
                check_hlds__det_analysis__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 0) = ((MR_Box) (check_hlds__det_analysis__V_132_132));
#line 372 "det_analysis.m"
              }
#line 371 "det_analysis.m"
              {
#line 371 "det_analysis.m"
                check_hlds__det_analysis__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (check_hlds__det_analysis__V_131_131));
#line 371 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "det_analysis.m"
              }
#line 370 "det_analysis.m"
              {
#line 370 "det_analysis.m"
                check_hlds__det_analysis__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_127_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[93])));
#line 370 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_127_127, 1) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 370 "det_analysis.m"
              }
#line 369 "det_analysis.m"
              {
#line 369 "det_analysis.m"
                check_hlds__det_analysis__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_124_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_2[2])));
#line 369 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_124_124, 1) = ((MR_Box) (check_hlds__det_analysis__V_127_127));
#line 369 "det_analysis.m"
              }
#line 369 "det_analysis.m"
              {
#line 369 "det_analysis.m"
                check_hlds__det_analysis__ExportPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExportPieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[92])));
#line 369 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExportPieces_57, 1) = ((MR_Box) (check_hlds__det_analysis__V_124_124));
#line 369 "det_analysis.m"
              }
#line 374 "det_analysis.m"
              {
#line 374 "det_analysis.m"
                check_hlds__det_analysis__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 374 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_141_141, 0) = ((MR_Box) (check_hlds__det_analysis__ExportPieces_57));
#line 374 "det_analysis.m"
              }
#line 374 "det_analysis.m"
              {
#line 374 "det_analysis.m"
                check_hlds__det_analysis__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_140_140, 0) = ((MR_Box) (check_hlds__det_analysis__V_141_141));
#line 374 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "det_analysis.m"
              }
#line 374 "det_analysis.m"
              {
#line 374 "det_analysis.m"
                check_hlds__det_analysis__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_139_139, 0) = ((MR_Box) (check_hlds__det_analysis__PragmaContext_56));
#line 374 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_139_139, 1) = ((MR_Box) (check_hlds__det_analysis__V_140_140));
#line 374 "det_analysis.m"
              }
#line 373 "det_analysis.m"
              {
#line 373 "det_analysis.m"
                check_hlds__det_analysis__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_138_138, 0) = ((MR_Box) (check_hlds__det_analysis__V_139_139));
#line 373 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "det_analysis.m"
              }
#line 373 "det_analysis.m"
              {
#line 373 "det_analysis.m"
                check_hlds__det_analysis__ExportSpec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 373 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 373 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_58, 2) = ((MR_Box) (check_hlds__det_analysis__V_138_138));
#line 373 "det_analysis.m"
              }
#line 375 "det_analysis.m"
              {
#line 375 "det_analysis.m"
                MR_Word base;
#line 375 "det_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "det_analysis.m"
                *check_hlds__det_analysis__STATE_VARIABLE_Specs_71 = base;
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__ExportSpec_58));
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120));
#line 375 "det_analysis.m"
              }
#line 372 "det_analysis.m"
            }
#line 376 "det_analysis.m"
          else
#line 377 "det_analysis.m"
            {
#line 377 "det_analysis.m"
              {
#line 377 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_proc\'/8", (MR_String) "Cannot find proc in table of pragma foreign_exported procs");
#line 377 "det_analysis.m"
                return;
              }
#line 377 "det_analysis.m"
            }
#line 376 "det_analysis.m"
        }
#line 380 "det_analysis.m"
      else
#line 377 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_Specs_71 = check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120;
#line 385 "det_analysis.m"
      {
#line 385 "det_analysis.m"
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__ProcInfo1_59);
      }
#line 386 "det_analysis.m"
      {
#line 386 "det_analysis.m"
        hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(*((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13), check_hlds__det_analysis__ProcInfo1_59, &check_hlds__det_analysis__ProcInfo_60);
      }
#line 389 "det_analysis.m"
      {
#line 389 "det_analysis.m"
        mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_153_153, check_hlds__det_analysis__TypeCtorInfo_154_154, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10)), ((MR_Box) (check_hlds__det_analysis__ProcInfo_60)), check_hlds__det_analysis__ProcTable0_17, &check_hlds__det_analysis__ProcTable_61);
      }
#line 390 "det_analysis.m"
      {
#line 390 "det_analysis.m"
        hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__det_analysis__ProcTable_61, check_hlds__det_analysis__PredInfo0_16, &check_hlds__det_analysis__PredInfo1_62);
      }
#line 392 "det_analysis.m"
      {
#line 392 "det_analysis.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_analysis__PredInfo1_62, &check_hlds__det_analysis__Markers1_63);
      }
#line 396 "det_analysis.m"
      if ((check_hlds__det_analysis__HasFormatCalls_33 == (MR_Integer) 1))
#line 397 "det_analysis.m"
        {
#line 398 "det_analysis.m"
          {
#line 398 "det_analysis.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 24, check_hlds__det_analysis__Markers1_63, &check_hlds__det_analysis__Markers2_64);
          }
#line 397 "det_analysis.m"
        }
#line 396 "det_analysis.m"
      else
#line 395 "det_analysis.m"
        check_hlds__det_analysis__Markers2_64 = check_hlds__det_analysis__Markers1_63;
#line 403 "det_analysis.m"
      if ((check_hlds__det_analysis__HasRequireScope_34 == (MR_Integer) 1))
#line 404 "det_analysis.m"
        {
#line 405 "det_analysis.m"
          {
#line 405 "det_analysis.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 23, check_hlds__det_analysis__Markers2_64, &check_hlds__det_analysis__Markers_65);
          }
#line 404 "det_analysis.m"
        }
#line 403 "det_analysis.m"
      else
#line 402 "det_analysis.m"
        check_hlds__det_analysis__Markers_65 = check_hlds__det_analysis__Markers2_64;
#line 407 "det_analysis.m"
      {
#line 407 "det_analysis.m"
        hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__det_analysis__Markers_65, check_hlds__det_analysis__PredInfo1_62, &check_hlds__det_analysis__PredInfo_66);
      }
#line 409 "det_analysis.m"
      {
#line 409 "det_analysis.m"
        mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_151_151, check_hlds__det_analysis__TypeCtorInfo_152_152, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), ((MR_Box) (check_hlds__det_analysis__PredInfo_66)), check_hlds__det_analysis__PredTable0_15, &check_hlds__det_analysis__PredTable_67);
      }
#line 410 "det_analysis.m"
      {
#line 410 "det_analysis.m"
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__det_analysis__PredTable_67, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_69);
#line 410 "det_analysis.m"
        return;
      }
#line 258 "det_analysis.m"
    }
#line 82 "det_analysis.m"
  }
#line 82 "det_analysis.m"
}

#line 77 "det_analysis.m"
void MR_CALL 
check_hlds__det_analysis__determinism_check_proc_5_p_0(
#line 77 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_6,
#line 77 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_7,
#line 77 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12,
#line 77 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_13,
#line 77 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Specs_9)
#line 77 "det_analysis.m"
{
#line 176 "det_analysis.m"
  {
#line 176 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 176 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Globals_10;
#line 176 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Debug_11;
#line 176 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_17_17;
#line 176 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_18_18;
#line 176 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29;
#line 176 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31;
#line 176 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_33_33;
#line 251 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_28_28;

#line 177 "det_analysis.m"
    {
#line 177 "det_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__det_analysis__Globals_10);
    }
#line 178 "det_analysis.m"
    {
#line 178 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 64, &check_hlds__det_analysis__Debug_11);
    }
#line 179 "det_analysis.m"
    {
#line 179 "det_analysis.m"
      check_hlds__det_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 179 "det_analysis.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_18_18, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_7));
#line 179 "det_analysis.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_18_18, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_6));
#line 179 "det_analysis.m"
    }
#line 179 "det_analysis.m"
    {
#line 179 "det_analysis.m"
      check_hlds__det_analysis__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_17_17, 0) = ((MR_Box) (check_hlds__det_analysis__V_18_18));
#line 179 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "det_analysis.m"
    }
#line 251 "det_analysis.m"
    {
#line 251 "det_analysis.m"
      check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__V_17_17, check_hlds__det_analysis__Debug_11, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31, (MR_Integer) 1, &check_hlds__det_analysis__V_28_28);
    }
#line 253 "det_analysis.m"
    {
#line 253 "det_analysis.m"
      check_hlds__det_analysis__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__V_17_17);
    }
#line 253 "det_analysis.m"
    {
#line 253 "det_analysis.m"
      check_hlds__det_report__global_checking_pass_5_p_0(check_hlds__det_analysis__V_33_33, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_13, check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31, check_hlds__det_analysis__Specs_9);
#line 253 "det_analysis.m"
      return;
    }
#line 176 "det_analysis.m"
  }
#line 77 "det_analysis.m"
}

#line 147 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
#line 147 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 147 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 147 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 147 "det_analysis.m"
  MR_Box * check_hlds__det_analysis__wrapper_arg_3)
#line 147 "det_analysis.m"
{
#line 147 "det_analysis.m"
  {
#line 147 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 147 "det_analysis.m"
    MR_Word check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16;

#line 147 "det_analysis.m"
    {
#line 147 "det_analysis.m"
      check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), &check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16);
    }
#line 147 "det_analysis.m"
    *check_hlds__det_analysis__wrapper_arg_3 = ((MR_Box) (check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16));
#line 147 "det_analysis.m"
  }
#line 147 "det_analysis.m"
}

#line 71 "det_analysis.m"
void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0(
#line 71 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18,
#line 71 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_19,
#line 71 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Specs_5)
#line 71 "det_analysis.m"
{
#line 143 "det_analysis.m"
  {
#line 143 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredIds_6;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__DeclaredProcs_7;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UndeclaredProcs_8;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NoInferProcs_9;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Globals_10;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Verbose_11;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Debug_12;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InferenceSpecs_13;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__FinalSpecs_17;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_20_20;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_28_28;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredTable_50;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_63;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_18_65;
#line 143 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_67_67;
#line 147 "det_analysis.m"
    MR_Box check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_22_22;
#line 251 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_62_62;

#line 144 "det_analysis.m"
    {
#line 144 "det_analysis.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__det_analysis__PredIds_6, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_20_20);
    }
#line 2059 "det_analysis.m"
    {
#line 2059 "det_analysis.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_20_20, &check_hlds__det_analysis__PredTable_50);
    }
#line 2060 "det_analysis.m"
    {
#line 2060 "det_analysis.m"
      check_hlds__det_analysis__determinism_declarations_preds_8_p_0(check_hlds__det_analysis__PredTable_50, check_hlds__det_analysis__PredIds_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__DeclaredProcs_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__UndeclaredProcs_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__NoInferProcs_9);
    }
#line 147 "det_analysis.m"
    {
#line 147 "det_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__det_analysis_scalar_common_5[0], check_hlds__det_analysis__NoInferProcs_9, ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_20_20)), &check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 147 "det_analysis.m"
    check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_22_22);
#line 148 "det_analysis.m"
    {
#line 148 "det_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22, &check_hlds__det_analysis__Globals_10);
    }
#line 149 "det_analysis.m"
    {
#line 149 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 44, &check_hlds__det_analysis__Verbose_11);
    }
#line 150 "det_analysis.m"
    {
#line 150 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 64, &check_hlds__det_analysis__Debug_12);
    }
#line 154 "det_analysis.m"
    if ((check_hlds__det_analysis__UndeclaredProcs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "det_analysis.m"
      {
#line 153 "det_analysis.m"
        check_hlds__det_analysis__InferenceSpecs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 153 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_28_28 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22;
#line 152 "det_analysis.m"
      }
#line 154 "det_analysis.m"
    else
#line 155 "det_analysis.m"
      {
#line 157 "det_analysis.m"
        {
#line 157 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% Doing determinism inference...\n");
        }
#line 160 "det_analysis.m"
        {
#line 160 "det_analysis.m"
          check_hlds__det_analysis__global_inference_pass_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__det_analysis__UndeclaredProcs_8, check_hlds__det_analysis__Debug_12, &check_hlds__det_analysis__InferenceSpecs_13);
        }
#line 163 "det_analysis.m"
        {
#line 163 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% done.\n");
        }
#line 155 "det_analysis.m"
      }
#line 167 "det_analysis.m"
    {
#line 167 "det_analysis.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% Doing determinism checking...\n");
    }
#line 251 "det_analysis.m"
    {
#line 251 "det_analysis.m"
      check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__DeclaredProcs_7, check_hlds__det_analysis__Debug_12, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_28_28, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__STATE_VARIABLE_Specs_18_65, (MR_Integer) 1, &check_hlds__det_analysis__V_62_62);
    }
#line 253 "det_analysis.m"
    {
#line 253 "det_analysis.m"
      check_hlds__det_analysis__V_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__det_analysis__UndeclaredProcs_8, check_hlds__det_analysis__DeclaredProcs_7);
    }
#line 253 "det_analysis.m"
    {
#line 253 "det_analysis.m"
      check_hlds__det_report__global_checking_pass_5_p_0(check_hlds__det_analysis__V_67_67, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_63, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_19, check_hlds__det_analysis__STATE_VARIABLE_Specs_18_65, &check_hlds__det_analysis__FinalSpecs_17);
    }
#line 171 "det_analysis.m"
    {
#line 171 "det_analysis.m"
      *check_hlds__det_analysis__Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__det_analysis__InferenceSpecs_13, check_hlds__det_analysis__FinalSpecs_17);
    }
#line 173 "det_analysis.m"
    {
#line 173 "det_analysis.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% done.\n");
#line 173 "det_analysis.m"
      return;
    }
#line 143 "det_analysis.m"
  }
#line 71 "det_analysis.m"
}

void mercury__check_hlds__det_analysis__init(void)
{
}

void mercury__check_hlds__det_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_pess_info_0);
	MR_register_type_ctor_info(&check_hlds__det_analysis__check_hlds__det_analysis__type_ctor_info_soln_context_0);
}

void mercury__check_hlds__det_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.det_analysis. */
