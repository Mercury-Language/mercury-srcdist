/*
** Automatically generated from `det_analysis.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.simplify.mih"
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
#include "mdbcomp.sym_name.mih"
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
#include "check_hlds.simplify.format_call.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1541 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s {
#line 1554 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded;
#line 1554 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356;
#line 1554 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59;
#line 1554 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63;
#line 1686 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0;
#line 1686 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71;
#line 1541 "det_analysis.m"
};

#line 452 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s {
#line 459 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded;
#line 548 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45;
#line 551 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0;
#line 551 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48;
#line 551 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65;
#line 551 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66;
#line 551 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70;
#line 551 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73;
#line 551 "det_analysis.m"
  MR_Box check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65;
#line 452 "det_analysis.m"
};

#line 82 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s {
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9;
#line 82 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10;
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13;
#line 259 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded;
#line 259 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_52;
#line 361 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0;
#line 361 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_121_121;
#line 361 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_160_160;
#line 360 "det_analysis.m"
  MR_Box check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_160_160;
#line 82 "det_analysis.m"
};


#line 210 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0;

#line 213 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 225 "check_hlds.det_analysis.c"
static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2];

#line 228 "check_hlds.det_analysis.c"
static const MR_DuFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0;

#line 231 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1];

#line 234 "check_hlds.det_analysis.c"
static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1];

#line 237 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0[1];

#line 240 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0[1];

#line 243 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0;

#line 246 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1;

#line 249 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0[2];

#line 252 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2];

#line 255 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2];

#line 258 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
#line 261 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 263 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2);

#line 266 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
#line 269 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 271 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 273 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3);

#line 276 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
#line 279 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 281 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2);

#line 284 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
#line 287 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 289 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 291 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3);

#line 1137 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Attributes_12,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_13,
#line 1137 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_14,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1137 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1137 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44,
#line 1137 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);

#line 1497 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1497__1_2_p_0(
#line 1497 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalFailingContexts_18,
#line 1497 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_52);

#line 360 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
#line 360 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 360 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2);

#line 2132 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
#line 2132 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2132 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 2132 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16);

#line 2084 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4,
#line 2084 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6,
#line 2084 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8,
#line 2084 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9);

#line 2068 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3,
#line 2068 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4,
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5,
#line 2068 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6,
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7,
#line 2068 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8);

#line 2028 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
#line 2028 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2028 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2);

#line 2007 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
#line 2007 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2007 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2);

#line 1997 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
#line 1997 "det_analysis.m"
  MR_Word check_hlds__det_analysis__DetInfo_3,
#line 1997 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Type_4);

#line 1870 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_12,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ExaminesRepresentation_13,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CanFail_14,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_15,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsA_16,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsB_17,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalContext_19,
#line 1870 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__NumSolns_20,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41,
#line 1870 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);

#line 1850 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
#line 1850 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1850 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ModuleInfo_9,
#line 1850 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredInfo_10,
#line 1850 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15,
#line 1850 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__STATE_VARIABLE_ProcId_16);

#line 1712 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
#line 1712 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1712 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1671 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
#line 1671 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1671 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1658 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
#line 1658 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1658 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1654 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
#line 1654 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1654 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1616 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
#line 1616 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1616 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1686 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
#line 1686 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1686 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
#line 1686 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1686 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
#line 1686 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1541 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Reason_13,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_14,
#line 1541 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_15,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_17,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_18,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_19,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20,
#line 1541 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_21,
#line 1541 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_22,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107,
#line 1541 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);

#line 1517 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1517 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7,
#line 1517 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_CanFail_8,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9,
#line 1517 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11,
#line 1517 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12);

#line 1497 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
#line 1497 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg);

#line 1481 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1481 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_12,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15,
#line 1481 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_16,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25,
#line 1481 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26);

#line 1440 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MainGoal0_12,
#line 1440 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__MainGoal_13,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__OrElseGoals0_14,
#line 1440 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__OrElseGoals_15,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_16,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19,
#line 1440 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_20,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30,
#line 1440 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31);

#line 1403 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1403 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_13,
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14,
#line 1403 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1403 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24,
#line 1403 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25);

#line 1315 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cond0_15,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cond_16,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Then0_17,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Then_18,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Else0_19,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Else_20,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_21,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_22,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_23,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_25,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_26,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49);

#line 1226 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__LHS_14,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RHS0_15,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Unify_16,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__UnifyContext_17,
#line 1226 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__RHS_18,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_19,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_20,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_21,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_22,
#line 1226 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 1226 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85,
#line 1226 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86);

#line 1092 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GenericCall_10,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CallDetism_11,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1092 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1092 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28,
#line 1092 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29);

#line 1016 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_12,
#line 1016 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId0_13,
#line 1016 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__ProcId_14,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Args_15,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1016 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1016 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39,
#line 1016 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40);

#line 970 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 970 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__9_9,
#line 970 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_10,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11,
#line 970 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13,
#line 970 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14);

#line 921 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_14,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SwitchCanFail_15,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cases0_16,
#line 921 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cases_17,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_19,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_20,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_21,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22,
#line 921 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 921 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37,
#line 921 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38);

#line 865 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_9,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10,
#line 865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12,
#line 865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13);

#line 842 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 842 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 842 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 842 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
#line 842 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);

#line 815 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 815 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 815 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 815 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 815 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);

#line 767 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 767 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 767 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 767 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32,
#line 767 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33);

#line 718 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 718 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 718 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 718 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 718 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);

#line 596 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalExpr0_12,
#line 596 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalExpr_13,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 596 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 596 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78,
#line 596 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);

#line 551 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(
#line 551 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 551 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3(
#line 551 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 551 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(
#line 551 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 551 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(
#line 551 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 452 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_12,
#line 452 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_13,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_14,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_16,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__AddPruning_18,
#line 452 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 452 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57,
#line 452 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58);

#line 413 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
#line 413 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 413 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_7,
#line 413 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_8,
#line 413 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Context_9);

#line 214 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_2,
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3,
#line 214 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4,
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5,
#line 214 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_6,
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7,
#line 214 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Changed_8);

#line 184 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
#line 184 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13,
#line 184 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14,
#line 184 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ProcList_7,
#line 184 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_8,
#line 184 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Specs_9);

#line 361 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
#line 361 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 360 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
#line 360 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 361 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
#line 361 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 361 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
#line 361 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 148 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
#line 148 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 148 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 148 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 148 "det_analysis.m"
  MR_Box * check_hlds__det_analysis__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[128][2];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[10][1];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_4[3][6];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_5[1][3];

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_1[128][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "to erroneous procedures."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This attribute cannot be applied"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "foreign clauses that have a"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has determinism erroneous but also has"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should be det or cc_multi."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "scope is nested inside another."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This is the outer"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "scope is not nested inside a"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[46])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[14])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "you must do it explicitly.)"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "implicitly. (If that\'s really what you want,"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "representations, but I\'m not going to do that"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "backtracking over all possible"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "a solution to this unification would require"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "representation. Figuring out whether there is"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "might depend on the choice of concrete"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of this type. The success of this unification"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "representation for each abstract value"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "there is more than one possible concrete"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "equality predicate, I must presume that"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Since the type has a user-defined"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "solutions to this unification would require"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[63])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "representation. Finding all possible"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of this type. The results of this unification"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for a procedure that has a determinism of"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The current implementation supports only single-solution non-failing parallel conjunctions."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: higher-order call to predicate with"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: atomic goal has determinism"))
  },
  /* row 107 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (&check_hlds__det_analysis_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "scope and the"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "scope it is nested inside overlap on"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "goal lists"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: trace goal has determinism"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In switch on variable"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "unification for non-canonical type"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not guaranteed to succeed."))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__det_analysis_scalar_common_2[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ":- pragma foreign_proc(...)"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "will_not_throw_exception"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "promise_equivalent_solution_sets"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "arbitrary"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[13])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[43])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[48])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[54])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[79])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[90])))
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
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1883 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0
  }
};

#line 1891 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1899 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1907 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1915 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1923 "check_hlds.det_analysis.c"
static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1929 "check_hlds.det_analysis.c"
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

#line 1944 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

#line 1949 "check_hlds.det_analysis.c"
static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0
  }
};

#line 1958 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

#line 1963 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0[1] = {
  (MR_Integer) 0
};

#line 1968 "check_hlds.det_analysis.c"
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

#line 1989 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0 = {
  (MR_String) "all_solns",
  (MR_Integer) 0
};

#line 1995 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1 = {
  (MR_String) "first_soln",
  (MR_Integer) 1
};

#line 2001 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0[2] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

#line 2007 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

#line 2013 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2019 "check_hlds.det_analysis.c"
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

#line 2040 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
#line 2043 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 2045 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2)
#line 2047 "check_hlds.det_analysis.c"
{
#line 2049 "check_hlds.det_analysis.c"
  {
#line 2051 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2054 "check_hlds.det_analysis.c"
    {
#line 2056 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis____Unify____pess_info_0_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2));
    }
#line 2059 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2061 "check_hlds.det_analysis.c"
  }
#line 2063 "check_hlds.det_analysis.c"
}

#line 2066 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
#line 2069 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 2071 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 2073 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3)
#line 2075 "check_hlds.det_analysis.c"
{
#line 2077 "check_hlds.det_analysis.c"
  {
#line 2079 "check_hlds.det_analysis.c"
    MR_Word check_hlds__det_analysis__conv0_HeadVar__1_1;

#line 2082 "check_hlds.det_analysis.c"
    {
#line 2084 "check_hlds.det_analysis.c"
      check_hlds__det_analysis____Compare____pess_info_0_0(&check_hlds__det_analysis__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), ((MR_Word) check_hlds__det_analysis__wrapper_arg_3));
    }
#line 2087 "check_hlds.det_analysis.c"
    *check_hlds__det_analysis__wrapper_arg_1 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__1_1));
#line 2089 "check_hlds.det_analysis.c"
  }
#line 2091 "check_hlds.det_analysis.c"
}

#line 2094 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
#line 2097 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 2099 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2)
#line 2101 "check_hlds.det_analysis.c"
{
#line 2103 "check_hlds.det_analysis.c"
  {
#line 2105 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2108 "check_hlds.det_analysis.c"
    {
#line 2110 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis____Unify____soln_context_0_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2));
    }
#line 2113 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2115 "check_hlds.det_analysis.c"
  }
#line 2117 "check_hlds.det_analysis.c"
}

#line 2120 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
#line 2123 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 2125 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 2127 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3)
#line 2129 "check_hlds.det_analysis.c"
{
#line 2131 "check_hlds.det_analysis.c"
  {
#line 2133 "check_hlds.det_analysis.c"
    MR_Word check_hlds__det_analysis__conv0_HeadVar__1_1;

#line 2136 "check_hlds.det_analysis.c"
    {
#line 2138 "check_hlds.det_analysis.c"
      check_hlds__det_analysis____Compare____soln_context_0_0(&check_hlds__det_analysis__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), ((MR_Word) check_hlds__det_analysis__wrapper_arg_3));
    }
#line 2141 "check_hlds.det_analysis.c"
    *check_hlds__det_analysis__wrapper_arg_1 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__1_1));
#line 2143 "check_hlds.det_analysis.c"
  }
#line 2145 "check_hlds.det_analysis.c"
}

#line 1137 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Attributes_12,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_13,
#line 1137 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_14,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1137 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1137 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1137 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44,
#line 1137 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45)
#line 1137 "det_analysis.m"
{
#line 1145 "det_analysis.m"
  {
#line 1145 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_22;
#line 1145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo_24;
#line 1145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDetism_25;
#line 1149 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_23_23;

#line 1148 "det_analysis.m"
    {
#line 1148 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, &check_hlds__det_analysis__ModuleInfo_22);
    }
#line 1149 "det_analysis.m"
    {
#line 1149 "det_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_analysis__ModuleInfo_22, check_hlds__det_analysis__PredId_13, check_hlds__det_analysis__ProcId_14, &check_hlds__det_analysis__V_23_23, &check_hlds__det_analysis__ProcInfo_24);
    }
#line 1150 "det_analysis.m"
    {
#line 1150 "det_analysis.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__MaybeDetism_25);
    }
#line 1209 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDetism_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1210 "det_analysis.m"
      {
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TypeCtorInfo_143_143;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcPieces_42;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_43;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_47_47;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_52_52;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_70_70;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_71_71;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_72_72;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_73_73;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_138;
#line 1210 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_139;

#line 1211 "det_analysis.m"
        {
#line 1211 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__Context_139);
        }
#line 1213 "det_analysis.m"
        {
#line 1213 "det_analysis.m"
          check_hlds__det_analysis__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1213 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1213 "det_analysis.m"
        }
#line 1212 "det_analysis.m"
        {
#line 1212 "det_analysis.m"
          check_hlds__det_analysis__ProcPieces_42 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 1, check_hlds__det_analysis__V_47_47);
        }
#line 2248 "check_hlds.det_analysis.c"
        check_hlds__det_analysis__TypeCtorInfo_143_143 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1214 "det_analysis.m"
        {
#line 1214 "det_analysis.m"
          check_hlds__det_analysis__V_52_52 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_143_143, check_hlds__det_analysis__ProcPieces_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[23]));
        }
#line 1214 "det_analysis.m"
        {
#line 1214 "det_analysis.m"
          check_hlds__det_analysis__Pieces_43 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_143_143, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[92]), check_hlds__det_analysis__V_52_52);
        }
#line 1218 "det_analysis.m"
        {
#line 1218 "det_analysis.m"
          check_hlds__det_analysis__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_73_73, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_43));
#line 1218 "det_analysis.m"
        }
#line 1218 "det_analysis.m"
        {
#line 1218 "det_analysis.m"
          check_hlds__det_analysis__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_72_72, 0) = ((MR_Box) (check_hlds__det_analysis__V_73_73));
#line 1218 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1218 "det_analysis.m"
        }
#line 1218 "det_analysis.m"
        {
#line 1218 "det_analysis.m"
          check_hlds__det_analysis__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_71_71, 0) = ((MR_Box) (check_hlds__det_analysis__Context_139));
#line 1218 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_71_71, 1) = ((MR_Box) (check_hlds__det_analysis__V_72_72));
#line 1218 "det_analysis.m"
        }
#line 1218 "det_analysis.m"
        {
#line 1218 "det_analysis.m"
          check_hlds__det_analysis__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_70_70, 0) = ((MR_Box) (check_hlds__det_analysis__V_71_71));
#line 1218 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1218 "det_analysis.m"
        }
#line 1217 "det_analysis.m"
        {
#line 1217 "det_analysis.m"
          check_hlds__det_analysis__Spec_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1217 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 2) = ((MR_Box) (check_hlds__det_analysis__V_70_70));
#line 1217 "det_analysis.m"
        }
#line 1219 "det_analysis.m"
        {
#line 1219 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_138, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);
        }
#line 1220 "det_analysis.m"
        *check_hlds__det_analysis__Detism_19 = (MR_Integer) 6;
#line 1221 "det_analysis.m"
        *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1210 "det_analysis.m"
      }
#line 1209 "det_analysis.m"
    else
#line 1152 "det_analysis.m"
      {
#line 1152 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Detism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDetism_25, (MR_Integer) 0)));
#line 1152 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_27;
#line 1152 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NumSolns0_28;
#line 1152 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NumSolns_39;
#line 1152 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107;
#line 1156 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_77_77;

#line 1153 "det_analysis.m"
        {
#line 1153 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism0_26, &check_hlds__det_analysis__CanFail_27, &check_hlds__det_analysis__NumSolns0_28);
        }
#line 1155 "det_analysis.m"
        {
#line 1155 "det_analysis.m"
          check_hlds__det_analysis__V_77_77 = parse_tree__prog_data__get_may_throw_exception_1_f_0(check_hlds__det_analysis__Attributes_12);
        }
#line 1156 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_77_77 == (MR_Integer) 0);
#line 1156 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1157 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Detism0_26 == (MR_Integer) 6);
#line 1171 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1159 "det_analysis.m"
          {
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcContext_29;
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowProcPieces_30;
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowPieces_31;
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowSpec_32;
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_79_79;
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_101_101;
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_102_102;
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_103_103;
#line 1159 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_104_104;

#line 1159 "det_analysis.m"
            {
#line 1159 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__ProcContext_29);
            }
#line 1161 "det_analysis.m"
            {
#line 1161 "det_analysis.m"
              check_hlds__det_analysis__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1161 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_79_79, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1161 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_79_79, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1161 "det_analysis.m"
            }
#line 1160 "det_analysis.m"
            {
#line 1160 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowProcPieces_30 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 1, check_hlds__det_analysis__V_79_79);
            }
#line 1162 "det_analysis.m"
            {
#line 1162 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__WillNotThrowProcPieces_30, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[34]));
            }
#line 1169 "det_analysis.m"
            {
#line 1169 "det_analysis.m"
              check_hlds__det_analysis__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_104_104, 0) = ((MR_Box) (check_hlds__det_analysis__WillNotThrowPieces_31));
#line 1169 "det_analysis.m"
            }
#line 1169 "det_analysis.m"
            {
#line 1169 "det_analysis.m"
              check_hlds__det_analysis__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 0) = ((MR_Box) (check_hlds__det_analysis__V_104_104));
#line 1169 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1169 "det_analysis.m"
            }
#line 1169 "det_analysis.m"
            {
#line 1169 "det_analysis.m"
              check_hlds__det_analysis__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_102_102, 0) = ((MR_Box) (check_hlds__det_analysis__ProcContext_29));
#line 1169 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_102_102, 1) = ((MR_Box) (check_hlds__det_analysis__V_103_103));
#line 1169 "det_analysis.m"
            }
#line 1169 "det_analysis.m"
            {
#line 1169 "det_analysis.m"
              check_hlds__det_analysis__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_101_101, 0) = ((MR_Box) (check_hlds__det_analysis__V_102_102));
#line 1169 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1169 "det_analysis.m"
            }
#line 1168 "det_analysis.m"
            {
#line 1168 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowSpec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1168 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 2) = ((MR_Box) (check_hlds__det_analysis__V_101_101));
#line 1168 "det_analysis.m"
            }
#line 1170 "det_analysis.m"
            {
#line 1170 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__WillNotThrowSpec_32, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107);
            }
#line 1159 "det_analysis.m"
          }
#line 1171 "det_analysis.m"
        else
#line 1170 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44;
#line 1175 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns0_28 == (MR_Integer) 2);
#line 1175 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1176 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_17 == (MR_Integer) 0);
#line 1195 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1178 "det_analysis.m"
          {
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_141_141;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__GoalContext_33;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_34;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WrongContextPredPieces_35;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WrongContextFirstPieces_36;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ContextMsgs_37;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_38;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_113_113;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_114_114;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_117_117;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_118_118;
#line 1178 "det_analysis.m"
            MR_String check_hlds__det_analysis__V_119_119;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_128_128;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_129_129;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_130_130;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_131_131;
#line 1178 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_132_132;

#line 1178 "det_analysis.m"
            {
#line 1178 "det_analysis.m"
              check_hlds__det_analysis__GoalContext_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1179 "det_analysis.m"
            {
#line 1179 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__VarSet_34);
            }
#line 1180 "det_analysis.m"
            {
#line 1180 "det_analysis.m"
              check_hlds__det_analysis__WrongContextPredPieces_35 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 0, check_hlds__det_analysis__PredId_13);
            }
#line 2523 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1185 "det_analysis.m"
            {
#line 1185 "det_analysis.m"
              check_hlds__det_analysis__V_119_119 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__Detism0_26);
            }
#line 1185 "det_analysis.m"
            {
#line 1185 "det_analysis.m"
              check_hlds__det_analysis__V_118_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_118_118, 0) = ((MR_Box) (check_hlds__det_analysis__V_119_119));
#line 1185 "det_analysis.m"
            }
#line 1185 "det_analysis.m"
            {
#line 1185 "det_analysis.m"
              check_hlds__det_analysis__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_117_117, 0) = ((MR_Box) (check_hlds__det_analysis__V_118_118));
#line 1185 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1185 "det_analysis.m"
            }
#line 1184 "det_analysis.m"
            {
#line 1184 "det_analysis.m"
              check_hlds__det_analysis__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[103])));
#line 1184 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 1) = ((MR_Box) (check_hlds__det_analysis__V_117_117));
#line 1184 "det_analysis.m"
            }
#line 1183 "det_analysis.m"
            {
#line 1183 "det_analysis.m"
              check_hlds__det_analysis__V_113_113 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_141_141, check_hlds__det_analysis__WrongContextPredPieces_35, check_hlds__det_analysis__V_114_114);
            }
#line 1182 "det_analysis.m"
            {
#line 1182 "det_analysis.m"
              check_hlds__det_analysis__WrongContextFirstPieces_36 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_141_141, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[102]), check_hlds__det_analysis__V_113_113);
            }
#line 1188 "det_analysis.m"
            {
#line 1188 "det_analysis.m"
              check_hlds__det_analysis__ContextMsgs_37 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_22, check_hlds__det_analysis__VarSet_34, check_hlds__det_analysis__RightFailingContexts_18);
            }
#line 1191 "det_analysis.m"
            {
#line 1191 "det_analysis.m"
              check_hlds__det_analysis__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_132_132, 0) = ((MR_Box) (check_hlds__det_analysis__WrongContextFirstPieces_36));
#line 1191 "det_analysis.m"
            }
#line 1191 "det_analysis.m"
            {
#line 1191 "det_analysis.m"
              check_hlds__det_analysis__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 0) = ((MR_Box) (check_hlds__det_analysis__V_132_132));
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1191 "det_analysis.m"
            }
#line 1191 "det_analysis.m"
            {
#line 1191 "det_analysis.m"
              check_hlds__det_analysis__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (check_hlds__det_analysis__GoalContext_33));
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__V_131_131));
#line 1191 "det_analysis.m"
            }
#line 1191 "det_analysis.m"
            {
#line 1191 "det_analysis.m"
              check_hlds__det_analysis__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_129_129, 0) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1191 "det_analysis.m"
            }
#line 1191 "det_analysis.m"
            {
#line 1191 "det_analysis.m"
              check_hlds__det_analysis__V_128_128 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_129_129, check_hlds__det_analysis__ContextMsgs_37);
            }
#line 1190 "det_analysis.m"
            {
#line 1190 "det_analysis.m"
              check_hlds__det_analysis__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 2) = ((MR_Box) (check_hlds__det_analysis__V_128_128));
#line 1190 "det_analysis.m"
            }
#line 1193 "det_analysis.m"
            {
#line 1193 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_38, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);
            }
#line 1194 "det_analysis.m"
            check_hlds__det_analysis__NumSolns_39 = (MR_Integer) 3;
#line 1178 "det_analysis.m"
          }
#line 1195 "det_analysis.m"
        else
#line 1196 "det_analysis.m"
          {
#line 1196 "det_analysis.m"
            check_hlds__det_analysis__NumSolns_39 = check_hlds__det_analysis__NumSolns0_28;
#line 1196 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107;
#line 1196 "det_analysis.m"
          }
#line 1198 "det_analysis.m"
        {
#line 1198 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__NumSolns_39);
        }
#line 1205 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_27 == (MR_Integer) 0))
#line 1200 "det_analysis.m"
          {
#line 1200 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Context_40;
#line 1200 "det_analysis.m"
            MR_Word check_hlds__det_analysis__FailingContext_41;
#line 1200 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_136_136;

#line 1201 "det_analysis.m"
            {
#line 1201 "det_analysis.m"
              check_hlds__det_analysis__Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1203 "det_analysis.m"
            {
#line 1203 "det_analysis.m"
              check_hlds__det_analysis__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1203 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 1) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1203 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 2) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1203 "det_analysis.m"
            }
#line 1202 "det_analysis.m"
            {
#line 1202 "det_analysis.m"
              check_hlds__det_analysis__FailingContext_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_41, 0) = ((MR_Box) (check_hlds__det_analysis__Context_40));
#line 1202 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_41, 1) = ((MR_Box) (check_hlds__det_analysis__V_136_136));
#line 1202 "det_analysis.m"
            }
#line 1204 "det_analysis.m"
            {
#line 1204 "det_analysis.m"
              MR_Word base;
#line 1204 "det_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "det_analysis.m"
              *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 1204 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_41));
#line 1204 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "det_analysis.m"
            }
#line 1200 "det_analysis.m"
          }
#line 1205 "det_analysis.m"
        else
#line 1207 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1152 "det_analysis.m"
      }
#line 1145 "det_analysis.m"
  }
#line 1137 "det_analysis.m"
}

#line 1497 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1497__1_2_p_0(
#line 1497 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalFailingContexts_18,
#line 1497 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_52)
#line 1497 "det_analysis.m"
{
#line 1497 "det_analysis.m"
  {
#line 1497 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 1497 "det_analysis.m"
    {
#line 1497 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[1], ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts_18)), ((MR_Box) (check_hlds__det_analysis__HeadVar__2_52)));
    }
#line 1497 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1497 "det_analysis.m"
  }
#line 1497 "det_analysis.m"
}

#line 360 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
#line 360 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 360 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2)
#line 360 "det_analysis.m"
{
#line 360 "det_analysis.m"
  {
#line 360 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 360 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 360 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 360 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 360 "det_analysis.m"
    MR_String check_hlds__det_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 360 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 360 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_15_15;
#line 360 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__V_16_16;

#line 360 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__det_analysis__V_8_8));
#line 360 "det_analysis.m"
    check_hlds__det_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 360 "det_analysis.m"
    check_hlds__det_analysis__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 360 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)) = ((MR_Box) (check_hlds__det_analysis__V_11_11));
#line 360 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (check_hlds__det_analysis__V_12_12));
#line 360 "det_analysis.m"
    {
#line 360 "det_analysis.m"
      check_hlds__det_analysis__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_analysis__V_9_9, check_hlds__det_analysis__V_15_15);
    }
#line 360 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 360 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_10_10 == check_hlds__det_analysis__V_16_16);
#line 360 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 360 "det_analysis.m"
  }
#line 360 "det_analysis.m"
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
#line 2838 "check_hlds.det_analysis.c"
  {
#line 2840 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__2_1 == check_hlds__det_analysis__HeadVar__2_2);

#line 2843 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2845 "check_hlds.det_analysis.c"
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
#line 2874 "check_hlds.det_analysis.c"
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
#line 2896 "check_hlds.det_analysis.c"
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

#line 2957 "check_hlds.det_analysis.c"
        {
#line 2959 "check_hlds.det_analysis.c"
          check_hlds__det_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[2], ((MR_Box) (check_hlds__det_analysis__V_3_3)), ((MR_Box) (check_hlds__det_analysis__V_5_5)));
        }
#line 86 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 2964 "check_hlds.det_analysis.c"
          {
#line 2966 "check_hlds.det_analysis.c"
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

#line 2132 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
#line 2132 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2132 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 2132 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16)
#line 2132 "det_analysis.m"
{
#line 2135 "det_analysis.m"
  {
#line 2135 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 2135 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_18_18;
#line 2135 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_19_19;
#line 2135 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 2135 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2135 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredInfo0_7;
#line 2135 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Procs0_8;
#line 2135 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo0_9;
#line 2135 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDet_10;
#line 2138 "det_analysis.m"
    MR_Box check_hlds__det_analysis__conv0_ProcInfo0_9;

#line 2136 "det_analysis.m"
    {
#line 2136 "det_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__det_analysis__PredId_4, &check_hlds__det_analysis__PredInfo0_7);
    }
#line 2137 "det_analysis.m"
    {
#line 2137 "det_analysis.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_analysis__PredInfo0_7, &check_hlds__det_analysis__Procs0_8);
    }
#line 3022 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3024 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 2138 "det_analysis.m"
    {
#line 2138 "det_analysis.m"
      mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_18_18, check_hlds__det_analysis__TypeCtorInfo_19_19, check_hlds__det_analysis__Procs0_8, ((MR_Box) (check_hlds__det_analysis__ProcId_5)), &check_hlds__det_analysis__conv0_ProcInfo0_9);
    }
#line 2138 "det_analysis.m"
    check_hlds__det_analysis__ProcInfo0_9 = ((MR_Word) check_hlds__det_analysis__conv0_ProcInfo0_9);
#line 2139 "det_analysis.m"
    {
#line 2139 "det_analysis.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_9, &check_hlds__det_analysis__MaybeDet_10);
    }
#line 2146 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2147 "det_analysis.m"
      *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15;
#line 2146 "det_analysis.m"
    else
#line 2141 "det_analysis.m"
      {
#line 2141 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDet_10, (MR_Integer) 0)));
#line 2141 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_12;
#line 2141 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Procs_13;
#line 2141 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredInfo_14;

#line 2142 "det_analysis.m"
        {
#line 2142 "det_analysis.m"
          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(check_hlds__det_analysis__Det_11, check_hlds__det_analysis__ProcInfo0_9, &check_hlds__det_analysis__ProcInfo_12);
        }
#line 2143 "det_analysis.m"
        {
#line 2143 "det_analysis.m"
          mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_18_18, check_hlds__det_analysis__TypeCtorInfo_19_19, ((MR_Box) (check_hlds__det_analysis__ProcId_5)), ((MR_Box) (check_hlds__det_analysis__ProcInfo_12)), check_hlds__det_analysis__Procs0_8, &check_hlds__det_analysis__Procs_13);
        }
#line 2144 "det_analysis.m"
        {
#line 2144 "det_analysis.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__det_analysis__Procs_13, check_hlds__det_analysis__PredInfo0_7, &check_hlds__det_analysis__PredInfo_14);
        }
#line 2145 "det_analysis.m"
        {
#line 2145 "det_analysis.m"
          hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__det_analysis__PredId_4, check_hlds__det_analysis__PredInfo_14, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16);
#line 2145 "det_analysis.m"
          return;
        }
#line 2141 "det_analysis.m"
      }
#line 2135 "det_analysis.m"
  }
#line 2132 "det_analysis.m"
}

#line 2084 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4,
#line 2084 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6,
#line 2084 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7,
#line 2084 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8,
#line 2084 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9)
#line 2084 "det_analysis.m"
{
#line 2090 "det_analysis.m"
  while (MR_TRUE)
#line 2090 "det_analysis.m"
    {
#line 2090 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 2090 "det_analysis.m"
      {
#line 2090 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 2090 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2090 "det_analysis.m"
          {
#line 2091 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8;
#line 2091 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2091 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2090 "det_analysis.m"
          }
#line 2090 "det_analysis.m"
        else
#line 2093 "det_analysis.m"
          {
#line 2093 "det_analysis.m"
            MR_Integer check_hlds__det_analysis__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 2093 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 2093 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredProcId_28;
#line 2093 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41;
#line 2093 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42;
#line 2093 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43;

#line 2094 "det_analysis.m"
            {
#line 2094 "det_analysis.m"
              check_hlds__det_analysis__PredProcId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2094 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PredProcId_28, 0) = ((MR_Box) (check_hlds__det_analysis__HeadVar__1_1));
#line 2094 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PredProcId_28, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_23));
#line 2094 "det_analysis.m"
            }
#line 2101 "det_analysis.m"
            {
#line 2101 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__det_analysis__HeadVar__2_2);
            }
#line 2102 "det_analysis.m"
            if (!(check_hlds__det_analysis__succeeded))
#line 2102 "det_analysis.m"
              {
#line 2103 "det_analysis.m"
                {
#line 2103 "det_analysis.m"
                  MR_Integer check_hlds__det_analysis__V_49_49;

#line 2103 "det_analysis.m"
                  {
#line 2103 "det_analysis.m"
                    check_hlds__det_analysis__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__det_analysis__HeadVar__2_2);
                  }
#line 2103 "det_analysis.m"
                  if (check_hlds__det_analysis__succeeded)
#line 2103 "det_analysis.m"
                    {
#line 2104 "det_analysis.m"
                      {
#line 2104 "det_analysis.m"
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__det_analysis__V_49_49);
                      }
#line 2104 "det_analysis.m"
                      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ProcId_23 == check_hlds__det_analysis__V_49_49);
#line 2103 "det_analysis.m"
                    }
#line 2103 "det_analysis.m"
                }
#line 2102 "det_analysis.m"
                if (!(check_hlds__det_analysis__succeeded))
#line 2106 "det_analysis.m"
                  {
#line 2106 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__Markers_29;

#line 2106 "det_analysis.m"
                    {
#line 2106 "det_analysis.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_analysis__HeadVar__2_2, &check_hlds__det_analysis__Markers_29);
                    }
#line 2107 "det_analysis.m"
                    {
#line 2107 "det_analysis.m"
                      check_hlds__det_analysis__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_analysis__Markers_29, (MR_Integer) 9);
                    }
#line 2106 "det_analysis.m"
                  }
#line 2102 "det_analysis.m"
              }
#line 2111 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 2110 "det_analysis.m"
              {
#line 2110 "det_analysis.m"
                {
#line 2110 "det_analysis.m"
                  check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2110 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2110 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8));
#line 2110 "det_analysis.m"
                }
#line 2110 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2110 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2110 "det_analysis.m"
              }
#line 2111 "det_analysis.m"
            else
#line 2112 "det_analysis.m"
              {
#line 2112 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ProcTable_30;
#line 2112 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ProcInfo_31;
#line 2112 "det_analysis.m"
                MR_Word check_hlds__det_analysis__MaybeDetism_32;
#line 2113 "det_analysis.m"
                MR_Box check_hlds__det_analysis__conv0_ProcInfo_31;

#line 2112 "det_analysis.m"
                {
#line 2112 "det_analysis.m"
                  hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_analysis__HeadVar__2_2, &check_hlds__det_analysis__ProcTable_30);
                }
#line 2113 "det_analysis.m"
                {
#line 2113 "det_analysis.m"
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_analysis__ProcTable_30, ((MR_Box) (check_hlds__det_analysis__ProcId_23)), &check_hlds__det_analysis__conv0_ProcInfo_31);
                }
#line 2113 "det_analysis.m"
                check_hlds__det_analysis__ProcInfo_31 = ((MR_Word) check_hlds__det_analysis__conv0_ProcInfo_31);
#line 2114 "det_analysis.m"
                {
#line 2114 "det_analysis.m"
                  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_31, &check_hlds__det_analysis__MaybeDetism_32);
                }
#line 2118 "det_analysis.m"
                if ((check_hlds__det_analysis__MaybeDetism_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2116 "det_analysis.m"
                  {
#line 2117 "det_analysis.m"
                    {
#line 2117 "det_analysis.m"
                      check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2117 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6));
#line 2117 "det_analysis.m"
                    }
#line 2117 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2116 "det_analysis.m"
                  }
#line 2118 "det_analysis.m"
                else
#line 2119 "det_analysis.m"
                  {
#line 2120 "det_analysis.m"
                    {
#line 2120 "det_analysis.m"
                      check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2120 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2120 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4));
#line 2120 "det_analysis.m"
                    }
#line 2120 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2119 "det_analysis.m"
                  }
#line 2120 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8;
#line 2112 "det_analysis.m"
              }
#line 2123 "det_analysis.m"
            /* direct tailcall eliminated */
#line 2123 "det_analysis.m"
            {
#line 2123 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__3__tmp_copy_3 = check_hlds__det_analysis__ProcIds_24;
#line 2123 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42;
#line 2123 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43;
#line 2123 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41;

#line 2123 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_8;
#line 2123 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_6;
#line 2123 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_4;
#line 2123 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__3_3 = check_hlds__det_analysis__HeadVar__3__tmp_copy_3;
#line 2123 "det_analysis.m"
            }
#line 2123 "det_analysis.m"
            continue;
#line 2093 "det_analysis.m"
          }
#line 2090 "det_analysis.m"
      }
#line 2090 "det_analysis.m"
      break;
#line 2090 "det_analysis.m"
    }
#line 2084 "det_analysis.m"
}

#line 2068 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3,
#line 2068 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4,
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5,
#line 2068 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6,
#line 2068 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7,
#line 2068 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8)
#line 2068 "det_analysis.m"
{
#line 2073 "det_analysis.m"
  while (MR_TRUE)
#line 2073 "det_analysis.m"
    {
#line 2073 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 2073 "det_analysis.m"
      {
#line 2073 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 2073 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2073 "det_analysis.m"
          {
#line 2074 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7;
#line 2074 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5;
#line 2074 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3;
#line 2073 "det_analysis.m"
          }
#line 2073 "det_analysis.m"
        else
#line 2076 "det_analysis.m"
          {
#line 2076 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 2076 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 2076 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredInfo_25;
#line 2076 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcIds_26;
#line 2076 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33;
#line 2076 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34;
#line 2076 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35;
#line 2077 "det_analysis.m"
            MR_Box check_hlds__det_analysis__conv0_PredInfo_25;

#line 2077 "det_analysis.m"
            {
#line 2077 "det_analysis.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_analysis__HeadVar__1_1, ((MR_Box) (check_hlds__det_analysis__PredId_20)), &check_hlds__det_analysis__conv0_PredInfo_25);
            }
#line 2077 "det_analysis.m"
            check_hlds__det_analysis__PredInfo_25 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo_25);
#line 2078 "det_analysis.m"
            {
#line 2078 "det_analysis.m"
              check_hlds__det_analysis__ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__det_analysis__PredInfo_25);
            }
#line 2079 "det_analysis.m"
            {
#line 2079 "det_analysis.m"
              check_hlds__det_analysis__determinism_declarations_procs_9_p_0(check_hlds__det_analysis__PredId_20, check_hlds__det_analysis__PredInfo_25, check_hlds__det_analysis__ProcIds_26, check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3, &check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33, check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5, &check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34, check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7, &check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35);
            }
#line 2081 "det_analysis.m"
            /* direct tailcall eliminated */
#line 2081 "det_analysis.m"
            {
#line 2081 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__2__tmp_copy_2 = check_hlds__det_analysis__PredIds_21;
#line 2081 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_3 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33;
#line 2081 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_5 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34;
#line 2081 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_7 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35;

#line 2081 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_7;
#line 2081 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_5;
#line 2081 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_3;
#line 2081 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__2_2 = check_hlds__det_analysis__HeadVar__2__tmp_copy_2;
#line 2081 "det_analysis.m"
            }
#line 2081 "det_analysis.m"
            continue;
#line 2076 "det_analysis.m"
          }
#line 2073 "det_analysis.m"
      }
#line 2073 "det_analysis.m"
      break;
#line 2073 "det_analysis.m"
    }
#line 2068 "det_analysis.m"
}

#line 2028 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
#line 2028 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2028 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2)
#line 2028 "det_analysis.m"
{
#line 2030 "det_analysis.m"
  {
#line 2030 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2030 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2031 "det_analysis.m"
      *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2030 "det_analysis.m"
    else
#line 2030 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 2032 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2030 "det_analysis.m"
      else
#line 2030 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2030 "det_analysis.m"
          {
#line 2030 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 2030 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2030 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 2030 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 2030 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_8_8;

#line 2030 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 2030 "det_analysis.m"
            check_hlds__det_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 2030 "det_analysis.m"
          }
#line 2030 "det_analysis.m"
        else
#line 2030 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2034 "det_analysis.m"
            {
#line 2034 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2034 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_22_22;

#line 2034 "det_analysis.m"
              *check_hlds__det_analysis__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 2034 "det_analysis.m"
              check_hlds__det_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 2034 "det_analysis.m"
            }
#line 2030 "det_analysis.m"
          else
#line 2033 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2030 "det_analysis.m"
  }
#line 2028 "det_analysis.m"
}

#line 2007 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
#line 2007 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2007 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2)
#line 2007 "det_analysis.m"
{
#line 2009 "det_analysis.m"
  {
#line 2009 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2009 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2009 "det_analysis.m"
      *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2009 "det_analysis.m"
    else
#line 2009 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 2010 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2009 "det_analysis.m"
      else
#line 2009 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2011 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2009 "det_analysis.m"
        else
#line 2009 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2017 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2009 "det_analysis.m"
          else
#line 2012 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2009 "det_analysis.m"
  }
#line 2007 "det_analysis.m"
}

#line 1997 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
#line 1997 "det_analysis.m"
  MR_Word check_hlds__det_analysis__DetInfo_3,
#line 1997 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Type_4)
#line 1997 "det_analysis.m"
{
#line 2000 "det_analysis.m"
  {
#line 2000 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 2000 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_5;
#line 2002 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_6_6;

#line 2001 "det_analysis.m"
    {
#line 2001 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__DetInfo_3, &check_hlds__det_analysis__ModuleInfo_5);
    }
#line 2002 "det_analysis.m"
    {
#line 2002 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(check_hlds__det_analysis__ModuleInfo_5, check_hlds__det_analysis__Type_4, &check_hlds__det_analysis__V_6_6);
    }
#line 2000 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 2000 "det_analysis.m"
  }
#line 1997 "det_analysis.m"
}

#line 1870 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_12,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ExaminesRepresentation_13,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CanFail_14,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_15,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsA_16,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsB_17,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalContext_19,
#line 1870 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__NumSolns_20,
#line 1870 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41,
#line 1870 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42)
#line 1870 "det_analysis.m"
{
#line 1990 "det_analysis.m"
  {
#line 1990 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ExaminesRepresentation_13 == (MR_Integer) 1);
#line 1990 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo_22;
#line 1990 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Type_24;
#line 1883 "det_analysis.m"
    MR_Word check_hlds__det_analysis__VarTypes_23;

#line 1883 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1883 "det_analysis.m"
      {
#line 1884 "det_analysis.m"
        {
#line 1884 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, &check_hlds__det_analysis__ProcInfo_22);
        }
#line 1885 "det_analysis.m"
        {
#line 1885 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarTypes_23);
        }
#line 1886 "det_analysis.m"
        {
#line 1886 "det_analysis.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_analysis__VarTypes_23, check_hlds__det_analysis__Var_12, &check_hlds__det_analysis__Type_24);
        }
#line 1887 "det_analysis.m"
        {
#line 1887 "det_analysis.m"
          check_hlds__det_analysis__succeeded = check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__Type_24);
        }
#line 1883 "det_analysis.m"
      }
#line 1990 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1982 "det_analysis.m"
      {
#line 1930 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_14 == (MR_Integer) 0))
#line 1890 "det_analysis.m"
          {
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Context_25;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_26;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Pieces0_28;
#line 1890 "det_analysis.m"
            MR_String check_hlds__det_analysis__ErrorMsg_30;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Pieces1_33;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_35;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_130_130;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_131_131;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_134_134;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_135_135;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_178_178;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_179_179;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_180_180;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_181_181;
#line 1890 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_182_182;

#line 1891 "det_analysis.m"
            {
#line 1891 "det_analysis.m"
              check_hlds__det_analysis__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
            }
#line 1892 "det_analysis.m"
            {
#line 1892 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarSet_26);
            }
#line 3722 "check_hlds.det_analysis.c"
            if ((check_hlds__det_analysis__GoalContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3724 "check_hlds.det_analysis.c"
              {
#line 3726 "check_hlds.det_analysis.c"
                MR_String check_hlds__det_analysis__VarStr_27;
#line 3728 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__V_122_122;
#line 3730 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__V_123_123;

#line 1895 "det_analysis.m"
                {
#line 1895 "det_analysis.m"
                  check_hlds__det_analysis__VarStr_27 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_26, (MR_Integer) 0, check_hlds__det_analysis__Var_12);
                }
#line 1896 "det_analysis.m"
                {
#line 1896 "det_analysis.m"
                  check_hlds__det_analysis__V_123_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "det_analysis.m"
                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_123_123, 0) = ((MR_Box) (check_hlds__det_analysis__VarStr_27));
#line 1896 "det_analysis.m"
                }
#line 1896 "det_analysis.m"
                {
#line 1896 "det_analysis.m"
                  check_hlds__det_analysis__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_122_122, 0) = ((MR_Box) (check_hlds__det_analysis__V_123_123));
#line 1896 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[55])));
#line 1896 "det_analysis.m"
                }
#line 1896 "det_analysis.m"
                {
#line 1896 "det_analysis.m"
                  check_hlds__det_analysis__Pieces0_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[122])));
#line 1896 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_28, 1) = ((MR_Box) (check_hlds__det_analysis__V_122_122));
#line 1896 "det_analysis.m"
                }
#line 1907 "det_analysis.m"
                check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "error:";
#line 3768 "check_hlds.det_analysis.c"
              }
#line 3770 "check_hlds.det_analysis.c"
            else
#line 3772 "check_hlds.det_analysis.c"
              {
#line 3774 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__UnifyContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalContext_19, (MR_Integer) 0)));

#line 1900 "det_analysis.m"
                {
#line 1900 "det_analysis.m"
                  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(check_hlds__det_analysis__UnifyContext_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Pieces0_28);
                }
#line 1905 "det_analysis.m"
                if ((check_hlds__det_analysis__Pieces0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1904 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "Error:";
#line 1905 "det_analysis.m"
                else
#line 1907 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "error:";
#line 3790 "check_hlds.det_analysis.c"
              }
#line 1909 "det_analysis.m"
            {
#line 1909 "det_analysis.m"
              check_hlds__det_analysis__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1909 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__ErrorMsg_30));
#line 1909 "det_analysis.m"
            }
#line 1911 "det_analysis.m"
            {
#line 1911 "det_analysis.m"
              check_hlds__det_analysis__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1911 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_135_135, 1) = ((MR_Box) (check_hlds__det_analysis__Type_24));
#line 1911 "det_analysis.m"
            }
#line 1911 "det_analysis.m"
            {
#line 1911 "det_analysis.m"
              check_hlds__det_analysis__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 0) = ((MR_Box) (check_hlds__det_analysis__V_135_135));
#line 1911 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[125])));
#line 1911 "det_analysis.m"
            }
#line 1910 "det_analysis.m"
            {
#line 1910 "det_analysis.m"
              check_hlds__det_analysis__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1910 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[123])));
#line 1910 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 1) = ((MR_Box) (check_hlds__det_analysis__V_134_134));
#line 1910 "det_analysis.m"
            }
#line 1909 "det_analysis.m"
            {
#line 1909 "det_analysis.m"
              check_hlds__det_analysis__Pieces1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_33, 0) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 1909 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_33, 1) = ((MR_Box) (check_hlds__det_analysis__V_131_131));
#line 1909 "det_analysis.m"
            }
#line 1927 "det_analysis.m"
            {
#line 1927 "det_analysis.m"
              check_hlds__det_analysis__V_182_182 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__Pieces0_28, check_hlds__det_analysis__Pieces1_33);
            }
#line 1927 "det_analysis.m"
            {
#line 1927 "det_analysis.m"
              check_hlds__det_analysis__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1927 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_181_181, 0) = ((MR_Box) (check_hlds__det_analysis__V_182_182));
#line 1927 "det_analysis.m"
            }
#line 1927 "det_analysis.m"
            {
#line 1927 "det_analysis.m"
              check_hlds__det_analysis__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1927 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_180_180, 0) = ((MR_Box) (check_hlds__det_analysis__V_181_181));
#line 1927 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_180_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[126])));
#line 1927 "det_analysis.m"
            }
#line 1926 "det_analysis.m"
            {
#line 1926 "det_analysis.m"
              check_hlds__det_analysis__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1926 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_179_179, 0) = ((MR_Box) (check_hlds__det_analysis__Context_25));
#line 1926 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_179_179, 1) = ((MR_Box) (check_hlds__det_analysis__V_180_180));
#line 1926 "det_analysis.m"
            }
#line 1928 "det_analysis.m"
            {
#line 1928 "det_analysis.m"
              check_hlds__det_analysis__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1928 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_178_178, 0) = ((MR_Box) (check_hlds__det_analysis__V_179_179));
#line 1928 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1928 "det_analysis.m"
            }
#line 1925 "det_analysis.m"
            {
#line 1925 "det_analysis.m"
              check_hlds__det_analysis__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1925 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1925 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1925 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 2) = ((MR_Box) (check_hlds__det_analysis__V_178_178));
#line 1925 "det_analysis.m"
            }
#line 1929 "det_analysis.m"
            {
#line 1929 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_35, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);
            }
#line 1890 "det_analysis.m"
          }
#line 1930 "det_analysis.m"
        else
#line 1979 "det_analysis.m"
          if ((check_hlds__det_analysis__SolnContext_15 == (MR_Integer) 0))
#line 1933 "det_analysis.m"
            {
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ModuleInfo_39;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ContextMsgs_40;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_56_56;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_57_57;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_60_60;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_61_61;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_104_104;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_107_107;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_108_108;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_109_109;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_110_110;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_111_111;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_112_112;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Context_192;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__VarSet_193;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Pieces0_195;
#line 1933 "det_analysis.m"
              MR_String check_hlds__det_analysis__ErrorMsg_197;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Pieces1_198;
#line 1933 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Spec_200;

#line 1934 "det_analysis.m"
              {
#line 1934 "det_analysis.m"
                check_hlds__det_analysis__Context_192 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
              }
#line 1935 "det_analysis.m"
              {
#line 1935 "det_analysis.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarSet_193);
              }
#line 3959 "check_hlds.det_analysis.c"
              if ((check_hlds__det_analysis__GoalContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3961 "check_hlds.det_analysis.c"
                {
#line 3963 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__V_48_48;
#line 3965 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__V_49_49;
#line 3967 "check_hlds.det_analysis.c"
                  MR_String check_hlds__det_analysis__VarStr_188;

#line 1938 "det_analysis.m"
                  {
#line 1938 "det_analysis.m"
                    check_hlds__det_analysis__VarStr_188 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_193, (MR_Integer) 0, check_hlds__det_analysis__Var_12);
                  }
#line 1939 "det_analysis.m"
                  {
#line 1939 "det_analysis.m"
                    check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (check_hlds__det_analysis__VarStr_188));
#line 1939 "det_analysis.m"
                  }
#line 1939 "det_analysis.m"
                  {
#line 1939 "det_analysis.m"
                    check_hlds__det_analysis__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (check_hlds__det_analysis__V_49_49));
#line 1939 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[55])));
#line 1939 "det_analysis.m"
                  }
#line 1939 "det_analysis.m"
                  {
#line 1939 "det_analysis.m"
                    check_hlds__det_analysis__Pieces0_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[122])));
#line 1939 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_195, 1) = ((MR_Box) (check_hlds__det_analysis__V_48_48));
#line 1939 "det_analysis.m"
                  }
#line 1951 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "error:";
#line 4005 "check_hlds.det_analysis.c"
                }
#line 4007 "check_hlds.det_analysis.c"
              else
#line 4009 "check_hlds.det_analysis.c"
                {
#line 4011 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__UnifyContext_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalContext_19, (MR_Integer) 0)));
#line 1943 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_36_36;

#line 1943 "det_analysis.m"
                  {
#line 1943 "det_analysis.m"
                    hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0((MR_Integer) 0, &check_hlds__det_analysis__V_36_36, check_hlds__det_analysis__UnifyContext_189, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Pieces0_195);
                  }
#line 1949 "det_analysis.m"
                  if ((check_hlds__det_analysis__Pieces0_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1948 "det_analysis.m"
                    check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "Error:";
#line 1949 "det_analysis.m"
                  else
#line 1951 "det_analysis.m"
                    check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "error:";
#line 4029 "check_hlds.det_analysis.c"
                }
#line 1953 "det_analysis.m"
              {
#line 1953 "det_analysis.m"
                check_hlds__det_analysis__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1953 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_56_56, 1) = ((MR_Box) (check_hlds__det_analysis__ErrorMsg_197));
#line 1953 "det_analysis.m"
              }
#line 1955 "det_analysis.m"
              {
#line 1955 "det_analysis.m"
                check_hlds__det_analysis__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1955 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_61_61, 1) = ((MR_Box) (check_hlds__det_analysis__Type_24));
#line 1955 "det_analysis.m"
              }
#line 1955 "det_analysis.m"
              {
#line 1955 "det_analysis.m"
                check_hlds__det_analysis__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_60_60, 0) = ((MR_Box) (check_hlds__det_analysis__V_61_61));
#line 1955 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1955 "det_analysis.m"
              }
#line 1954 "det_analysis.m"
              {
#line 1954 "det_analysis.m"
                check_hlds__det_analysis__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[123])));
#line 1954 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_57_57, 1) = ((MR_Box) (check_hlds__det_analysis__V_60_60));
#line 1954 "det_analysis.m"
              }
#line 1953 "det_analysis.m"
              {
#line 1953 "det_analysis.m"
                check_hlds__det_analysis__Pieces1_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_198, 0) = ((MR_Box) (check_hlds__det_analysis__V_56_56));
#line 1953 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_198, 1) = ((MR_Box) (check_hlds__det_analysis__V_57_57));
#line 1953 "det_analysis.m"
              }
#line 1970 "det_analysis.m"
              {
#line 1970 "det_analysis.m"
                check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, &check_hlds__det_analysis__ModuleInfo_39);
              }
#line 1972 "det_analysis.m"
              {
#line 1972 "det_analysis.m"
                check_hlds__det_analysis__V_104_104 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__FailingContextsA_16, check_hlds__det_analysis__FailingContextsB_17);
              }
#line 1971 "det_analysis.m"
              {
#line 1971 "det_analysis.m"
                check_hlds__det_analysis__ContextMsgs_40 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_39, check_hlds__det_analysis__VarSet_193, check_hlds__det_analysis__V_104_104);
              }
#line 1975 "det_analysis.m"
              {
#line 1975 "det_analysis.m"
                check_hlds__det_analysis__V_112_112 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__Pieces0_195, check_hlds__det_analysis__Pieces1_198);
              }
#line 1975 "det_analysis.m"
              {
#line 1975 "det_analysis.m"
                check_hlds__det_analysis__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1975 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_111_111, 0) = ((MR_Box) (check_hlds__det_analysis__V_112_112));
#line 1975 "det_analysis.m"
              }
#line 1975 "det_analysis.m"
              {
#line 1975 "det_analysis.m"
                check_hlds__det_analysis__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_110_110, 0) = ((MR_Box) (check_hlds__det_analysis__V_111_111));
#line 1975 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[127])));
#line 1975 "det_analysis.m"
              }
#line 1974 "det_analysis.m"
              {
#line 1974 "det_analysis.m"
                check_hlds__det_analysis__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1974 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_109_109, 0) = ((MR_Box) (check_hlds__det_analysis__Context_192));
#line 1974 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_109_109, 1) = ((MR_Box) (check_hlds__det_analysis__V_110_110));
#line 1974 "det_analysis.m"
              }
#line 1976 "det_analysis.m"
              {
#line 1976 "det_analysis.m"
                check_hlds__det_analysis__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_108_108, 0) = ((MR_Box) (check_hlds__det_analysis__V_109_109));
#line 1976 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1976 "det_analysis.m"
              }
#line 1977 "det_analysis.m"
              {
#line 1977 "det_analysis.m"
                check_hlds__det_analysis__V_107_107 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_108_108, check_hlds__det_analysis__ContextMsgs_40);
              }
#line 1973 "det_analysis.m"
              {
#line 1973 "det_analysis.m"
                check_hlds__det_analysis__Spec_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1973 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1973 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1973 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 2) = ((MR_Box) (check_hlds__det_analysis__V_107_107));
#line 1973 "det_analysis.m"
              }
#line 1978 "det_analysis.m"
              {
#line 1978 "det_analysis.m"
                check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_200, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);
              }
#line 1933 "det_analysis.m"
            }
#line 1979 "det_analysis.m"
          else
#line 1980 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41;
#line 1986 "det_analysis.m"
        if ((check_hlds__det_analysis__SolnContext_15 == (MR_Integer) 0))
#line 1988 "det_analysis.m"
          *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 3;
#line 1986 "det_analysis.m"
        else
#line 1985 "det_analysis.m"
          *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 2;
#line 1982 "det_analysis.m"
      }
#line 1990 "det_analysis.m"
    else
#line 1991 "det_analysis.m"
      {
#line 1991 "det_analysis.m"
        *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 1;
#line 1991 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41;
#line 1991 "det_analysis.m"
      }
#line 1990 "det_analysis.m"
  }
#line 1870 "det_analysis.m"
}

#line 1850 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
#line 1850 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1850 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ModuleInfo_9,
#line 1850 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredInfo_10,
#line 1850 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15,
#line 1850 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__STATE_VARIABLE_ProcId_16)
#line 1850 "det_analysis.m"
{
#line 1854 "det_analysis.m"
  while (MR_TRUE)
#line 1854 "det_analysis.m"
    {
#line 1854 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 1854 "det_analysis.m"
      {
#line 1854 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1854 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__TestProcId_6;
#line 1854 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_7;
#line 1854 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Rest_8;
#line 1854 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_17_17;
#line 1856 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Detism_12;
#line 1856 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSoln_14;
#line 1858 "det_analysis.m"
        MR_Word check_hlds__det_analysis___CanFail_13;

#line 1853 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1853 "det_analysis.m"
          {
#line 1853 "det_analysis.m"
            check_hlds__det_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1853 "det_analysis.m"
            check_hlds__det_analysis__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1853 "det_analysis.m"
            check_hlds__det_analysis__TestProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_17_17, (MR_Integer) 0)));
#line 1853 "det_analysis.m"
            check_hlds__det_analysis__ProcInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_17_17, (MR_Integer) 1)));
#line 1856 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__TestProcId_6 == check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15);
#line 1856 "det_analysis.m"
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 1856 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 1856 "det_analysis.m"
              {
#line 1857 "det_analysis.m"
                {
#line 1857 "det_analysis.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_7, &check_hlds__det_analysis__Detism_12);
                }
#line 1858 "det_analysis.m"
                {
#line 1858 "det_analysis.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism_12, &check_hlds__det_analysis___CanFail_13, &check_hlds__det_analysis__MaxSoln_14);
                }
#line 1859 "det_analysis.m"
                check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__MaxSoln_14 == (MR_Integer) 3);
#line 1856 "det_analysis.m"
                if (check_hlds__det_analysis__succeeded)
#line 1860 "det_analysis.m"
                  {
#line 1860 "det_analysis.m"
                    check_hlds__det_analysis__succeeded = check_hlds__modecheck_call__modes_are_identical_bar_cc_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15, check_hlds__det_analysis__TestProcId_6, check_hlds__det_analysis__PredInfo_10, check_hlds__det_analysis__ModuleInfo_9);
                  }
#line 1856 "det_analysis.m"
              }
#line 1863 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 1862 "det_analysis.m"
              {
#line 1862 "det_analysis.m"
                *check_hlds__det_analysis__STATE_VARIABLE_ProcId_16 = check_hlds__det_analysis__TestProcId_6;
#line 1862 "det_analysis.m"
                check_hlds__det_analysis__succeeded = MR_TRUE;
#line 1862 "det_analysis.m"
              }
#line 1863 "det_analysis.m"
            else
#line 1864 "det_analysis.m"
              {
#line 1864 "det_analysis.m"
                /* direct tailcall eliminated */
#line 1864 "det_analysis.m"
                {
#line 1864 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__Rest_8;

#line 1864 "det_analysis.m"
                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 1864 "det_analysis.m"
                }
#line 1864 "det_analysis.m"
                continue;
#line 1864 "det_analysis.m"
              }
#line 1853 "det_analysis.m"
          }
#line 1854 "det_analysis.m"
        return check_hlds__det_analysis__succeeded;
#line 1854 "det_analysis.m"
      }
#line 1854 "det_analysis.m"
      break;
#line 1854 "det_analysis.m"
    }
#line 1850 "det_analysis.m"
}

#line 1712 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
#line 1712 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1712 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1712 "det_analysis.m"
{
#line 1712 "det_analysis.m"
  {
#line 1712 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1712 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1712 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv2_HeadVar__3_3;

#line 1712 "det_analysis.m"
    {
#line 1712 "det_analysis.m"
      check_hlds__det_analysis__conv2_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1712 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv2_HeadVar__3_3));
#line 1712 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1712 "det_analysis.m"
  }
#line 1712 "det_analysis.m"
}

#line 1671 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
#line 1671 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1671 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1671 "det_analysis.m"
{
#line 1671 "det_analysis.m"
  {
#line 1671 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1671 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1671 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv1_HeadVar__3_3;

#line 1671 "det_analysis.m"
    {
#line 1671 "det_analysis.m"
      check_hlds__det_analysis__conv1_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1671 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv1_HeadVar__3_3));
#line 1671 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1671 "det_analysis.m"
  }
#line 1671 "det_analysis.m"
}

#line 1658 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
#line 1658 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1658 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1658 "det_analysis.m"
{
#line 1658 "det_analysis.m"
  {
#line 1658 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1658 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1658 "det_analysis.m"
    {
#line 1658 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = hlds__instmap__var_is_any_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1658 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1658 "det_analysis.m"
  }
#line 1658 "det_analysis.m"
}

#line 1654 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
#line 1654 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1654 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1654 "det_analysis.m"
{
#line 1654 "det_analysis.m"
  {
#line 1654 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1654 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1654 "det_analysis.m"
    {
#line 1654 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1654 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1654 "det_analysis.m"
  }
#line 1654 "det_analysis.m"
}

#line 1616 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
#line 1616 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1616 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1616 "det_analysis.m"
{
#line 1616 "det_analysis.m"
  {
#line 1616 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1616 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1616 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv0_HeadVar__3_3;

#line 1616 "det_analysis.m"
    {
#line 1616 "det_analysis.m"
      check_hlds__det_analysis__conv0_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1616 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__3_3));
#line 1616 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1616 "det_analysis.m"
  }
#line 1616 "det_analysis.m"
}

#line 1686 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
#line 1686 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1686 "det_analysis.m"
{
#line 1686 "det_analysis.m"
  {
#line 1686 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1686 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0, 1);
#line 1686 "det_analysis.m"
  }
#line 1686 "det_analysis.m"
}

#line 1686 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
#line 1686 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1686 "det_analysis.m"
{
#line 1686 "det_analysis.m"
  {
#line 1686 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1687 "det_analysis.m"
    {
#line 1687 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71);
    }
#line 1687 "det_analysis.m"
    if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1687 "det_analysis.m"
      {
#line 1687 "det_analysis.m"
        check_hlds__det_analysis__det_infer_scope_12_p_0_5(check_hlds__det_analysis__env_ptr);
#line 1687 "det_analysis.m"
        return;
      }
#line 1686 "det_analysis.m"
  }
#line 1686 "det_analysis.m"
}

#line 1686 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
#line 1686 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1686 "det_analysis.m"
{
#line 1686 "det_analysis.m"
  {
#line 1686 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1686 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0) == 0)
#line 1686 "det_analysis.m"
      {
#line 1686 "det_analysis.m"
        {
#line 1686 "det_analysis.m"
          parse_tree__set_of_var__member_2_p_1((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71, check_hlds__det_analysis__det_infer_scope_12_p_0_6, check_hlds__det_analysis__env_ptr);
        }
#line 1686 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
#line 1686 "det_analysis.m"
      }
#line 1686 "det_analysis.m"
    else
#line 1686 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1686 "det_analysis.m"
  }
#line 1686 "det_analysis.m"
}

#line 1541 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Reason_13,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_14,
#line 1541 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_15,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_17,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_18,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_19,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20,
#line 1541 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_21,
#line 1541 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_22,
#line 1541 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107,
#line 1541 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108)
#line 1541 "det_analysis.m"
{
#line 1541 "det_analysis.m"
  {
#line 1541 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s check_hlds__det_analysis__env;

#line 1554 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 1))))
#line 1554 "det_analysis.m"
      {
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)));
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Reason_13, (MR_Integer) 1)));
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_26;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarSet_27;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_28;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SolnContextToUse_29;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstmapDelta_53;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ChangedVars_54;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_55;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GroundBoundVars_57;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NonLocalVars_58;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__BoundVars0_60;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarTypes_61;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__BoundVars_62;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ExtraVars_75;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__IgnoreExtraVars_76;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_274_274;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_275_275;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_276_276;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_308_308;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_309_309;
#line 1554 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_342_342;
#line 1654 "det_analysis.m"
        MR_Word check_hlds__det_analysis___GroundAtStartVars_56;

#line 1555 "det_analysis.m"
        {
#line 1555 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__ProcInfo_26);
        }
#line 1556 "det_analysis.m"
        {
#line 1556 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_26, &check_hlds__det_analysis__VarSet_27);
        }
#line 1558 "det_analysis.m"
        {
#line 1558 "det_analysis.m"
          check_hlds__det_analysis__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1563 "det_analysis.m"
        if ((check_hlds__det_analysis__Kind_25 == (MR_Integer) 1))
#line 1564 "det_analysis.m"
          {
#line 1565 "det_analysis.m"
            check_hlds__det_analysis__SolnContextToUse_29 = check_hlds__det_analysis__SolnContext_18;
#line 1569 "det_analysis.m"
            if ((check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1567 "det_analysis.m"
              {
#line 1567 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_273_273;

#line 1568 "det_analysis.m"
                {
#line 1568 "det_analysis.m"
                  check_hlds__det_analysis__V_273_273 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1568 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_273_273, 0) = ((MR_Box) (check_hlds__det_analysis__Vars_24));
#line 1568 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_273_273, 1) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1568 "det_analysis.m"
                }
#line 1568 "det_analysis.m"
                {
#line 1568 "det_analysis.m"
                  check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_273_273));
#line 1568 "det_analysis.m"
                }
#line 1568 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107;
#line 1567 "det_analysis.m"
              }
#line 1569 "det_analysis.m"
            else
#line 1570 "det_analysis.m"
              {
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__TypeCtorInfo_347_347;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__PESSInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0)));
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__OuterVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PESSInfo_31, (MR_Integer) 0)));
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__OuterContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PESSInfo_31, (MR_Integer) 1)));
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__NestedSpec_37;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__AllVars_38;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_248_248;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_249_249;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_258_258;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_259_259;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_270_270;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_271_271;
#line 1570 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_272_272;

#line 1581 "det_analysis.m"
                {
#line 1581 "det_analysis.m"
                  check_hlds__det_analysis__V_249_249 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_249_249, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1581 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_249_249, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[109])));
#line 1581 "det_analysis.m"
                }
#line 1584 "det_analysis.m"
                {
#line 1584 "det_analysis.m"
                  check_hlds__det_analysis__V_259_259 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1584 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_259_259, 0) = ((MR_Box) (check_hlds__det_analysis__OuterContext_33));
#line 1584 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_259_259, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[112])));
#line 1584 "det_analysis.m"
                }
#line 1587 "det_analysis.m"
                {
#line 1587 "det_analysis.m"
                  check_hlds__det_analysis__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1587 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_258_258, 0) = ((MR_Box) (check_hlds__det_analysis__V_259_259));
#line 1587 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_258_258, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1587 "det_analysis.m"
                }
#line 1583 "det_analysis.m"
                {
#line 1583 "det_analysis.m"
                  check_hlds__det_analysis__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1583 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_248_248, 0) = ((MR_Box) (check_hlds__det_analysis__V_249_249));
#line 1583 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_248_248, 1) = ((MR_Box) (check_hlds__det_analysis__V_258_258));
#line 1583 "det_analysis.m"
                }
#line 1580 "det_analysis.m"
                {
#line 1580 "det_analysis.m"
                  check_hlds__det_analysis__NestedSpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1580 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_3[0])));
#line 1580 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1580 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 2) = ((MR_Box) (check_hlds__det_analysis__V_248_248));
#line 1580 "det_analysis.m"
                }
#line 1588 "det_analysis.m"
                {
#line 1588 "det_analysis.m"
                  check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__NestedSpec_37, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269);
                }
#line 4778 "check_hlds.det_analysis.c"
                check_hlds__det_analysis__TypeCtorInfo_347_347 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1589 "det_analysis.m"
                {
#line 1589 "det_analysis.m"
                  check_hlds__det_analysis__V_270_270 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], check_hlds__det_analysis__OuterVars_32, check_hlds__det_analysis__Vars_24);
                }
#line 1589 "det_analysis.m"
                {
#line 1589 "det_analysis.m"
                  check_hlds__det_analysis__AllVars_38 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_347_347, check_hlds__det_analysis__V_270_270);
                }
#line 1591 "det_analysis.m"
                {
#line 1591 "det_analysis.m"
                  check_hlds__det_analysis__V_272_272 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__det_analysis__TypeCtorInfo_347_347, check_hlds__det_analysis__AllVars_38);
                }
#line 1591 "det_analysis.m"
                {
#line 1591 "det_analysis.m"
                  check_hlds__det_analysis__V_271_271 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1591 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_271_271, 0) = ((MR_Box) (check_hlds__det_analysis__V_272_272));
#line 1591 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_271_271, 1) = ((MR_Box) (check_hlds__det_analysis__OuterContext_33));
#line 1591 "det_analysis.m"
                }
#line 1591 "det_analysis.m"
                {
#line 1591 "det_analysis.m"
                  check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1591 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_271_271));
#line 1591 "det_analysis.m"
                }
#line 1570 "det_analysis.m"
              }
#line 1564 "det_analysis.m"
          }
#line 1563 "det_analysis.m"
        else
#line 1563 "det_analysis.m"
          if ((check_hlds__det_analysis__Kind_25 == (MR_Integer) 2))
#line 1595 "det_analysis.m"
            {
#line 1606 "det_analysis.m"
              if ((check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1597 "det_analysis.m"
                {
#line 1597 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__ArbitrarySpec_40;
#line 1597 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_218_218;
#line 1597 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_219_219;

#line 1604 "det_analysis.m"
                  {
#line 1604 "det_analysis.m"
                    check_hlds__det_analysis__V_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1604 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_219_219, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1604 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_219_219, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[113])));
#line 1604 "det_analysis.m"
                  }
#line 1604 "det_analysis.m"
                  {
#line 1604 "det_analysis.m"
                    check_hlds__det_analysis__V_218_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_218_218, 0) = ((MR_Box) (check_hlds__det_analysis__V_219_219));
#line 1604 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_218_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1604 "det_analysis.m"
                  }
#line 1603 "det_analysis.m"
                  {
#line 1603 "det_analysis.m"
                    check_hlds__det_analysis__ArbitrarySpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1603 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1603 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1603 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 2) = ((MR_Box) (check_hlds__det_analysis__V_218_218));
#line 1603 "det_analysis.m"
                  }
#line 1605 "det_analysis.m"
                  {
#line 1605 "det_analysis.m"
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__ArbitrarySpec_40, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269);
                  }
#line 1597 "det_analysis.m"
                }
#line 1606 "det_analysis.m"
              else
#line 1608 "det_analysis.m"
                {
#line 1608 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__TypeCtorInfo_349_349;
#line 1608 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__OldVars_41;
#line 1608 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__PromiseContext_42;
#line 1608 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__OverlapVars_43;
#line 1608 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0)));
#line 1608 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_142_142;
#line 1608 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_143_143;

#line 1607 "det_analysis.m"
                  check_hlds__det_analysis__OldVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_141_141, (MR_Integer) 0)));
#line 1607 "det_analysis.m"
                  check_hlds__det_analysis__PromiseContext_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_141_141, (MR_Integer) 1)));
#line 4896 "check_hlds.det_analysis.c"
                  check_hlds__det_analysis__TypeCtorInfo_349_349 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1610 "det_analysis.m"
                  {
#line 1610 "det_analysis.m"
                    check_hlds__det_analysis__V_142_142 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__OldVars_41);
                  }
#line 1611 "det_analysis.m"
                  {
#line 1611 "det_analysis.m"
                    check_hlds__det_analysis__V_143_143 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__Vars_24);
                  }
#line 1609 "det_analysis.m"
                  {
#line 1609 "det_analysis.m"
                    check_hlds__det_analysis__OverlapVars_43 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__V_142_142, check_hlds__det_analysis__V_143_143);
                  }
#line 1612 "det_analysis.m"
                  {
#line 1612 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__OverlapVars_43);
                  }
#line 1614 "det_analysis.m"
                  if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1612 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107;
#line 1614 "det_analysis.m"
                  else
#line 1617 "det_analysis.m"
                    {
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__TypeCtorInfo_354_354;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapVarNames_44;
#line 1617 "det_analysis.m"
                      MR_String check_hlds__det_analysis__OverlapVarStr_46;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapPieces_50;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapSpec_52;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_144_144;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_145_145;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_151_151;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_154_154;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_157_157;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_160_160;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_163_163;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_166_166;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_167_167;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_169_169;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_170_170;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_186_186;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_187_187;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_188_188;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_189_189;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_191_191;
#line 1617 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_192_192;

#line 1616 "det_analysis.m"
                      {
#line 1616 "det_analysis.m"
                        check_hlds__det_analysis__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1616 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1616 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_1));
#line 1616 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1616 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1616 "det_analysis.m"
                      }
#line 1617 "det_analysis.m"
                      {
#line 1617 "det_analysis.m"
                        check_hlds__det_analysis__V_145_145 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__OverlapVars_43);
                      }
#line 1615 "det_analysis.m"
                      {
#line 1615 "det_analysis.m"
                        check_hlds__det_analysis__OverlapVarNames_44 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_144_144, check_hlds__det_analysis__V_145_145);
                      }
#line 1622 "det_analysis.m"
                      if ((check_hlds__det_analysis__OverlapVarNames_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1619 "det_analysis.m"
                        {
#line 1620 "det_analysis.m"
                          {
#line 1620 "det_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "arbitrary_promise_overlap empty");
#line 1620 "det_analysis.m"
                            return;
                          }
#line 1619 "det_analysis.m"
                        }
#line 1622 "det_analysis.m"
                      else
#line 1622 "det_analysis.m"
                        {
#line 1622 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OverlapVarNames_44, (MR_Integer) 1)));
#line 1623 "det_analysis.m"
                          MR_String check_hlds__det_analysis__V_369_369 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OverlapVarNames_44, (MR_Integer) 0)));

#line 1622 "det_analysis.m"
                          if ((check_hlds__det_analysis__V_368_368 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1624 "det_analysis.m"
                            check_hlds__det_analysis__OverlapVarStr_46 = (MR_String) "the variable";
#line 1622 "det_analysis.m"
                          else
#line 1627 "det_analysis.m"
                            check_hlds__det_analysis__OverlapVarStr_46 = (MR_String) "the following variables:";
#line 1622 "det_analysis.m"
                        }
#line 5027 "check_hlds.det_analysis.c"
                      check_hlds__det_analysis__TypeCtorInfo_354_354 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1633 "det_analysis.m"
                      {
#line 1633 "det_analysis.m"
                        check_hlds__det_analysis__V_167_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_167_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_167_167, 1) = ((MR_Box) (check_hlds__det_analysis__OverlapVarStr_46));
#line 1633 "det_analysis.m"
                      }
#line 1633 "det_analysis.m"
                      {
#line 1633 "det_analysis.m"
                        check_hlds__det_analysis__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_166_166, 0) = ((MR_Box) (check_hlds__det_analysis__V_167_167));
#line 1633 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1633 "det_analysis.m"
                      }
#line 1632 "det_analysis.m"
                      {
#line 1632 "det_analysis.m"
                        check_hlds__det_analysis__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1632 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_163_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[116])));
#line 1632 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_163_163, 1) = ((MR_Box) (check_hlds__det_analysis__V_166_166));
#line 1632 "det_analysis.m"
                      }
#line 1631 "det_analysis.m"
                      {
#line 1631 "det_analysis.m"
                        check_hlds__det_analysis__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1631 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_160_160, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[2])));
#line 1631 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_160_160, 1) = ((MR_Box) (check_hlds__det_analysis__V_163_163));
#line 1631 "det_analysis.m"
                      }
#line 1630 "det_analysis.m"
                      {
#line 1630 "det_analysis.m"
                        check_hlds__det_analysis__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1630 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[115])));
#line 1630 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_157_157, 1) = ((MR_Box) (check_hlds__det_analysis__V_160_160));
#line 1630 "det_analysis.m"
                      }
#line 1629 "det_analysis.m"
                      {
#line 1629 "det_analysis.m"
                        check_hlds__det_analysis__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1629 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_154_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[3])));
#line 1629 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_154_154, 1) = ((MR_Box) (check_hlds__det_analysis__V_157_157));
#line 1629 "det_analysis.m"
                      }
#line 1629 "det_analysis.m"
                      {
#line 1629 "det_analysis.m"
                        check_hlds__det_analysis__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1629 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[114])));
#line 1629 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_151_151, 1) = ((MR_Box) (check_hlds__det_analysis__V_154_154));
#line 1629 "det_analysis.m"
                      }
#line 1634 "det_analysis.m"
                      {
#line 1634 "det_analysis.m"
                        check_hlds__det_analysis__V_170_170 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__OverlapVarNames_44);
                      }
#line 1634 "det_analysis.m"
                      {
#line 1634 "det_analysis.m"
                        check_hlds__det_analysis__V_169_169 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_354_354, check_hlds__det_analysis__V_170_170, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[118]));
                      }
#line 1633 "det_analysis.m"
                      {
#line 1633 "det_analysis.m"
                        check_hlds__det_analysis__OverlapPieces_50 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_354_354, check_hlds__det_analysis__V_151_151, check_hlds__det_analysis__V_169_169);
                      }
#line 1640 "det_analysis.m"
                      {
#line 1640 "det_analysis.m"
                        check_hlds__det_analysis__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1640 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_189_189, 0) = ((MR_Box) (check_hlds__det_analysis__OverlapPieces_50));
#line 1640 "det_analysis.m"
                      }
#line 1640 "det_analysis.m"
                      {
#line 1640 "det_analysis.m"
                        check_hlds__det_analysis__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1640 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_188_188, 0) = ((MR_Box) (check_hlds__det_analysis__V_189_189));
#line 1640 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_188_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1640 "det_analysis.m"
                      }
#line 1640 "det_analysis.m"
                      {
#line 1640 "det_analysis.m"
                        check_hlds__det_analysis__V_187_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1640 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_187_187, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1640 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_187_187, 1) = ((MR_Box) (check_hlds__det_analysis__V_188_188));
#line 1640 "det_analysis.m"
                      }
#line 1641 "det_analysis.m"
                      {
#line 1641 "det_analysis.m"
                        check_hlds__det_analysis__V_192_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1641 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_192_192, 0) = ((MR_Box) (check_hlds__det_analysis__PromiseContext_42));
#line 1641 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[110])));
#line 1641 "det_analysis.m"
                      }
#line 1642 "det_analysis.m"
                      {
#line 1642 "det_analysis.m"
                        check_hlds__det_analysis__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1642 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_191_191, 0) = ((MR_Box) (check_hlds__det_analysis__V_192_192));
#line 1642 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1642 "det_analysis.m"
                      }
#line 1640 "det_analysis.m"
                      {
#line 1640 "det_analysis.m"
                        check_hlds__det_analysis__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1640 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_186_186, 0) = ((MR_Box) (check_hlds__det_analysis__V_187_187));
#line 1640 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_186_186, 1) = ((MR_Box) (check_hlds__det_analysis__V_191_191));
#line 1640 "det_analysis.m"
                      }
#line 1638 "det_analysis.m"
                      {
#line 1638 "det_analysis.m"
                        check_hlds__det_analysis__OverlapSpec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1638 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1638 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1638 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 2) = ((MR_Box) (check_hlds__det_analysis__V_186_186));
#line 1638 "det_analysis.m"
                      }
#line 1643 "det_analysis.m"
                      {
#line 1643 "det_analysis.m"
                        check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__OverlapSpec_52, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269);
                      }
#line 1617 "det_analysis.m"
                    }
#line 1608 "det_analysis.m"
                }
#line 1646 "det_analysis.m"
              check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1647 "det_analysis.m"
              check_hlds__det_analysis__SolnContextToUse_29 = (MR_Integer) 1;
#line 1595 "det_analysis.m"
            }
#line 1563 "det_analysis.m"
          else
#line 1560 "det_analysis.m"
            {
#line 1561 "det_analysis.m"
              check_hlds__det_analysis__SolnContextToUse_29 = (MR_Integer) 1;
#line 1562 "det_analysis.m"
              check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20;
#line 1562 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107;
#line 1560 "det_analysis.m"
            }
#line 1649 "det_analysis.m"
        {
#line 1649 "det_analysis.m"
          check_hlds__det_analysis__InstmapDelta_53 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1650 "det_analysis.m"
        {
#line 1650 "det_analysis.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__det_analysis__InstmapDelta_53, &check_hlds__det_analysis__ChangedVars_54);
        }
#line 1651 "det_analysis.m"
        {
#line 1651 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269, &check_hlds__det_analysis__ModuleInfo_55);
        }
#line 1654 "det_analysis.m"
        {
#line 1654 "det_analysis.m"
          check_hlds__det_analysis__V_274_274 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1654 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_274_274, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[2]));
#line 1654 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_274_274, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_2));
#line 1654 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_274_274, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1654 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_274_274, 3) = ((MR_Box) (check_hlds__det_analysis__ModuleInfo_55));
#line 1654 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_274_274, 4) = ((MR_Box) (check_hlds__det_analysis__InstMap0_17));
#line 1654 "det_analysis.m"
        }
#line 5242 "check_hlds.det_analysis.c"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1654 "det_analysis.m"
        {
#line 1654 "det_analysis.m"
          parse_tree__set_of_var__divide_4_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__V_274_274, check_hlds__det_analysis__ChangedVars_54, &check_hlds__det_analysis___GroundAtStartVars_56, &check_hlds__det_analysis__GroundBoundVars_57);
        }
#line 1656 "det_analysis.m"
        {
#line 1656 "det_analysis.m"
          check_hlds__det_analysis__NonLocalVars_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1658 "det_analysis.m"
        {
#line 1658 "det_analysis.m"
          check_hlds__det_analysis__V_275_275 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1658 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[2]));
#line 1658 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_3));
#line 1658 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1658 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 3) = ((MR_Box) (check_hlds__det_analysis__ModuleInfo_55));
#line 1658 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 4) = ((MR_Box) (check_hlds__det_analysis__InstMap0_17));
#line 1658 "det_analysis.m"
        }
#line 1657 "det_analysis.m"
        {
#line 1657 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59 = parse_tree__set_of_var__filter_2_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__V_275_275, check_hlds__det_analysis__NonLocalVars_58);
        }
#line 1660 "det_analysis.m"
        {
#line 1660 "det_analysis.m"
          check_hlds__det_analysis__BoundVars0_60 = parse_tree__set_of_var__union_2_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__GroundBoundVars_57, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59);
        }
#line 1661 "det_analysis.m"
        {
#line 1661 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo_26, &check_hlds__det_analysis__VarTypes_61);
        }
#line 1662 "det_analysis.m"
        {
#line 1662 "det_analysis.m"
          check_hlds__det_analysis__BoundVars_62 = parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0(check_hlds__det_analysis__VarTypes_61, check_hlds__det_analysis__BoundVars0_60);
        }
#line 1666 "det_analysis.m"
        {
#line 1666 "det_analysis.m"
          check_hlds__det_analysis__V_276_276 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__Vars_24);
        }
#line 1666 "det_analysis.m"
        {
#line 1666 "det_analysis.m"
          parse_tree__set_of_var__difference_3_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__BoundVars_62, check_hlds__det_analysis__V_276_276, &(check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
        }
#line 1668 "det_analysis.m"
        {
#line 1668 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
        }
#line 1670 "det_analysis.m"
        if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1668 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_308_308 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269;
#line 1670 "det_analysis.m"
        else
#line 1672 "det_analysis.m"
          {
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_362_362;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingVarNames_64;
#line 1672 "det_analysis.m"
            MR_String check_hlds__det_analysis__MissingKindStr_65;
#line 1672 "det_analysis.m"
            MR_String check_hlds__det_analysis__MissingListStr_67;
#line 1672 "det_analysis.m"
            MR_String check_hlds__det_analysis__BindsWords_72;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingPieces_73;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingSpec_74;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_277_277;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_278_278;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_284_284;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_287_287;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_288_288;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_289_289;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_290_290;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_291_291;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_292_292;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_294_294;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_295_295;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_302_302;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_303_303;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_304_304;
#line 1672 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_305_305;

#line 1671 "det_analysis.m"
            {
#line 1671 "det_analysis.m"
              check_hlds__det_analysis__V_277_277 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1671 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1671 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_4));
#line 1671 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1671 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1671 "det_analysis.m"
            }
#line 1672 "det_analysis.m"
            {
#line 1672 "det_analysis.m"
              check_hlds__det_analysis__V_278_278 = parse_tree__set_of_var__to_sorted_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
            }
#line 1671 "det_analysis.m"
            {
#line 1671 "det_analysis.m"
              check_hlds__det_analysis__MissingVarNames_64 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_277_277, check_hlds__det_analysis__V_278_278);
            }
#line 1673 "det_analysis.m"
            {
#line 1673 "det_analysis.m"
              check_hlds__det_analysis__MissingKindStr_65 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(check_hlds__det_analysis__Kind_25);
            }
#line 1678 "det_analysis.m"
            if ((check_hlds__det_analysis__MissingVarNames_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1675 "det_analysis.m"
              {
#line 1676 "det_analysis.m"
                {
#line 1676 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_missing_vars empty");
#line 1676 "det_analysis.m"
                  return;
                }
#line 1675 "det_analysis.m"
              }
#line 1678 "det_analysis.m"
            else
#line 1678 "det_analysis.m"
              {
#line 1678 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MissingVarNames_64, (MR_Integer) 1)));
#line 1679 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_371_371 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MissingVarNames_64, (MR_Integer) 0)));

#line 1678 "det_analysis.m"
                if ((check_hlds__det_analysis__V_370_370 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1680 "det_analysis.m"
                  check_hlds__det_analysis__MissingListStr_67 = (MR_String) "a variable that is not listed:";
#line 1678 "det_analysis.m"
                else
#line 1683 "det_analysis.m"
                  check_hlds__det_analysis__MissingListStr_67 = (MR_String) "some variables that are not listed:";
#line 1678 "det_analysis.m"
              }
#line 1686 "det_analysis.m"
            {
#line 1686 "det_analysis.m"
              check_hlds__det_analysis__det_infer_scope_12_p_0_7(&check_hlds__det_analysis__env);
            }
#line 1690 "det_analysis.m"
            if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1689 "det_analysis.m"
              check_hlds__det_analysis__BindsWords_72 = (MR_String) "goal may constrain";
#line 1690 "det_analysis.m"
            else
#line 1691 "det_analysis.m"
              check_hlds__det_analysis__BindsWords_72 = (MR_String) "goal binds";
#line 5432 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1693 "det_analysis.m"
            {
#line 1693 "det_analysis.m"
              check_hlds__det_analysis__V_288_288 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_288_288, 0) = ((MR_Box) (check_hlds__det_analysis__MissingKindStr_65));
#line 1693 "det_analysis.m"
            }
#line 1694 "det_analysis.m"
            {
#line 1694 "det_analysis.m"
              check_hlds__det_analysis__V_290_290 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_290_290, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1694 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_290_290, 1) = ((MR_Box) (check_hlds__det_analysis__BindsWords_72));
#line 1694 "det_analysis.m"
            }
#line 1694 "det_analysis.m"
            {
#line 1694 "det_analysis.m"
              check_hlds__det_analysis__V_292_292 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_292_292, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1694 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_292_292, 1) = ((MR_Box) (check_hlds__det_analysis__MissingListStr_67));
#line 1694 "det_analysis.m"
            }
#line 1694 "det_analysis.m"
            {
#line 1694 "det_analysis.m"
              check_hlds__det_analysis__V_291_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_291_291, 0) = ((MR_Box) (check_hlds__det_analysis__V_292_292));
#line 1694 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_291_291, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1694 "det_analysis.m"
            }
#line 1694 "det_analysis.m"
            {
#line 1694 "det_analysis.m"
              check_hlds__det_analysis__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_289_289, 0) = ((MR_Box) (check_hlds__det_analysis__V_290_290));
#line 1694 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_289_289, 1) = ((MR_Box) (check_hlds__det_analysis__V_291_291));
#line 1694 "det_analysis.m"
            }
#line 1693 "det_analysis.m"
            {
#line 1693 "det_analysis.m"
              check_hlds__det_analysis__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_287_287, 0) = ((MR_Box) (check_hlds__det_analysis__V_288_288));
#line 1693 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_287_287, 1) = ((MR_Box) (check_hlds__det_analysis__V_289_289));
#line 1693 "det_analysis.m"
            }
#line 1693 "det_analysis.m"
            {
#line 1693 "det_analysis.m"
              check_hlds__det_analysis__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_284_284, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[119])));
#line 1693 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_284_284, 1) = ((MR_Box) (check_hlds__det_analysis__V_287_287));
#line 1693 "det_analysis.m"
            }
#line 1695 "det_analysis.m"
            {
#line 1695 "det_analysis.m"
              check_hlds__det_analysis__V_295_295 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__MissingVarNames_64);
            }
#line 1695 "det_analysis.m"
            {
#line 1695 "det_analysis.m"
              check_hlds__det_analysis__V_294_294 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_362_362, check_hlds__det_analysis__V_295_295, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[118]));
            }
#line 1695 "det_analysis.m"
            {
#line 1695 "det_analysis.m"
              check_hlds__det_analysis__MissingPieces_73 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_362_362, check_hlds__det_analysis__V_284_284, check_hlds__det_analysis__V_294_294);
            }
#line 1697 "det_analysis.m"
            {
#line 1697 "det_analysis.m"
              check_hlds__det_analysis__V_305_305 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1697 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_305_305, 0) = ((MR_Box) (check_hlds__det_analysis__MissingPieces_73));
#line 1697 "det_analysis.m"
            }
#line 1697 "det_analysis.m"
            {
#line 1697 "det_analysis.m"
              check_hlds__det_analysis__V_304_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_304_304, 0) = ((MR_Box) (check_hlds__det_analysis__V_305_305));
#line 1697 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_304_304, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1697 "det_analysis.m"
            }
#line 1697 "det_analysis.m"
            {
#line 1697 "det_analysis.m"
              check_hlds__det_analysis__V_303_303 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1697 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_303_303, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1697 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_303_303, 1) = ((MR_Box) (check_hlds__det_analysis__V_304_304));
#line 1697 "det_analysis.m"
            }
#line 1697 "det_analysis.m"
            {
#line 1697 "det_analysis.m"
              check_hlds__det_analysis__V_302_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_302_302, 0) = ((MR_Box) (check_hlds__det_analysis__V_303_303));
#line 1697 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_302_302, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1697 "det_analysis.m"
            }
#line 1696 "det_analysis.m"
            {
#line 1696 "det_analysis.m"
              check_hlds__det_analysis__MissingSpec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1696 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1696 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1696 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 2) = ((MR_Box) (check_hlds__det_analysis__V_302_302));
#line 1696 "det_analysis.m"
            }
#line 1698 "det_analysis.m"
            {
#line 1698 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__MissingSpec_74, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_269_269, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_308_308);
            }
#line 1672 "det_analysis.m"
          }
#line 1702 "det_analysis.m"
        {
#line 1702 "det_analysis.m"
          check_hlds__det_analysis__V_309_309 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__Vars_24);
        }
#line 1702 "det_analysis.m"
        {
#line 1702 "det_analysis.m"
          parse_tree__set_of_var__difference_3_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__V_309_309, check_hlds__det_analysis__BoundVars_62, &check_hlds__det_analysis__ExtraVars_75);
        }
#line 1704 "det_analysis.m"
        {
#line 1704 "det_analysis.m"
          check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_308_308, &check_hlds__det_analysis__IgnoreExtraVars_76);
        }
#line 1706 "det_analysis.m"
        {
#line 1706 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__ExtraVars_75);
        }
#line 1707 "det_analysis.m"
        if (!((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded))
#line 1707 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = (check_hlds__det_analysis__IgnoreExtraVars_76 == (MR_Integer) 1);
#line 1711 "det_analysis.m"
        if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1707 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_342_342 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_308_308;
#line 1711 "det_analysis.m"
        else
#line 1713 "det_analysis.m"
          {
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_367_367;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraVarNames_77;
#line 1713 "det_analysis.m"
            MR_String check_hlds__det_analysis__ExtraKindStr_78;
#line 1713 "det_analysis.m"
            MR_String check_hlds__det_analysis__ExtraListStr_80;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraPieces_84;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraSpec_85;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_310_310;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_311_311;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_317_317;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_320_320;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_321_321;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_322_322;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_325_325;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_326_326;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_328_328;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_329_329;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_336_336;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_337_337;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_338_338;
#line 1713 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_339_339;

#line 1712 "det_analysis.m"
            {
#line 1712 "det_analysis.m"
              check_hlds__det_analysis__V_310_310 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1712 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_310_310, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1712 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_310_310, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_8));
#line 1712 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_310_310, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1712 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_310_310, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1712 "det_analysis.m"
            }
#line 1713 "det_analysis.m"
            {
#line 1713 "det_analysis.m"
              check_hlds__det_analysis__V_311_311 = parse_tree__set_of_var__to_sorted_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_356_356, check_hlds__det_analysis__ExtraVars_75);
            }
#line 1712 "det_analysis.m"
            {
#line 1712 "det_analysis.m"
              check_hlds__det_analysis__ExtraVarNames_77 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_310_310, check_hlds__det_analysis__V_311_311);
            }
#line 1714 "det_analysis.m"
            {
#line 1714 "det_analysis.m"
              check_hlds__det_analysis__ExtraKindStr_78 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(check_hlds__det_analysis__Kind_25);
            }
#line 1719 "det_analysis.m"
            if ((check_hlds__det_analysis__ExtraVarNames_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1716 "det_analysis.m"
              {
#line 1717 "det_analysis.m"
                {
#line 1717 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_extra_vars empty");
#line 1717 "det_analysis.m"
                  return;
                }
#line 1716 "det_analysis.m"
              }
#line 1719 "det_analysis.m"
            else
#line 1719 "det_analysis.m"
              {
#line 1719 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExtraVarNames_77, (MR_Integer) 1)));
#line 1720 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_373_373 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExtraVarNames_77, (MR_Integer) 0)));

#line 1719 "det_analysis.m"
                if ((check_hlds__det_analysis__V_372_372 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1721 "det_analysis.m"
                  check_hlds__det_analysis__ExtraListStr_80 = (MR_String) "an extra variable:";
#line 1719 "det_analysis.m"
                else
#line 1724 "det_analysis.m"
                  check_hlds__det_analysis__ExtraListStr_80 = (MR_String) "some extra variables:";
#line 1719 "det_analysis.m"
              }
#line 5708 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_367_367 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1726 "det_analysis.m"
            {
#line 1726 "det_analysis.m"
              check_hlds__det_analysis__V_321_321 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1726 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_321_321, 0) = ((MR_Box) (check_hlds__det_analysis__ExtraKindStr_78));
#line 1726 "det_analysis.m"
            }
#line 1727 "det_analysis.m"
            {
#line 1727 "det_analysis.m"
              check_hlds__det_analysis__V_326_326 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_326_326, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1727 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_326_326, 1) = ((MR_Box) (check_hlds__det_analysis__ExtraListStr_80));
#line 1727 "det_analysis.m"
            }
#line 1727 "det_analysis.m"
            {
#line 1727 "det_analysis.m"
              check_hlds__det_analysis__V_325_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_325_325, 0) = ((MR_Box) (check_hlds__det_analysis__V_326_326));
#line 1727 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_325_325, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1727 "det_analysis.m"
            }
#line 1727 "det_analysis.m"
            {
#line 1727 "det_analysis.m"
              check_hlds__det_analysis__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_322_322, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[120])));
#line 1727 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_322_322, 1) = ((MR_Box) (check_hlds__det_analysis__V_325_325));
#line 1727 "det_analysis.m"
            }
#line 1726 "det_analysis.m"
            {
#line 1726 "det_analysis.m"
              check_hlds__det_analysis__V_320_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1726 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_320_320, 0) = ((MR_Box) (check_hlds__det_analysis__V_321_321));
#line 1726 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_320_320, 1) = ((MR_Box) (check_hlds__det_analysis__V_322_322));
#line 1726 "det_analysis.m"
            }
#line 1726 "det_analysis.m"
            {
#line 1726 "det_analysis.m"
              check_hlds__det_analysis__V_317_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1726 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_317_317, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[119])));
#line 1726 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_317_317, 1) = ((MR_Box) (check_hlds__det_analysis__V_320_320));
#line 1726 "det_analysis.m"
            }
#line 1728 "det_analysis.m"
            {
#line 1728 "det_analysis.m"
              check_hlds__det_analysis__V_329_329 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__ExtraVarNames_77);
            }
#line 1728 "det_analysis.m"
            {
#line 1728 "det_analysis.m"
              check_hlds__det_analysis__V_328_328 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_367_367, check_hlds__det_analysis__V_329_329, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[118]));
            }
#line 1727 "det_analysis.m"
            {
#line 1727 "det_analysis.m"
              check_hlds__det_analysis__ExtraPieces_84 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_367_367, check_hlds__det_analysis__V_317_317, check_hlds__det_analysis__V_328_328);
            }
#line 1730 "det_analysis.m"
            {
#line 1730 "det_analysis.m"
              check_hlds__det_analysis__V_339_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_339_339, 0) = ((MR_Box) (check_hlds__det_analysis__ExtraPieces_84));
#line 1730 "det_analysis.m"
            }
#line 1730 "det_analysis.m"
            {
#line 1730 "det_analysis.m"
              check_hlds__det_analysis__V_338_338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1730 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_338_338, 0) = ((MR_Box) (check_hlds__det_analysis__V_339_339));
#line 1730 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_338_338, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1730 "det_analysis.m"
            }
#line 1730 "det_analysis.m"
            {
#line 1730 "det_analysis.m"
              check_hlds__det_analysis__V_337_337 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_337_337, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1730 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_337_337, 1) = ((MR_Box) (check_hlds__det_analysis__V_338_338));
#line 1730 "det_analysis.m"
            }
#line 1730 "det_analysis.m"
            {
#line 1730 "det_analysis.m"
              check_hlds__det_analysis__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1730 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_336_336, 0) = ((MR_Box) (check_hlds__det_analysis__V_337_337));
#line 1730 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_336_336, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1730 "det_analysis.m"
            }
#line 1729 "det_analysis.m"
            {
#line 1729 "det_analysis.m"
              check_hlds__det_analysis__ExtraSpec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1729 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1729 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 2) = ((MR_Box) (check_hlds__det_analysis__V_336_336));
#line 1729 "det_analysis.m"
            }
#line 1731 "det_analysis.m"
            {
#line 1731 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__ExtraSpec_85, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_308_308, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_342_342);
            }
#line 1713 "det_analysis.m"
          }
#line 1733 "det_analysis.m"
        {
#line 1733 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContextToUse_29, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_342_342, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1733 "det_analysis.m"
          return;
        }
#line 1554 "det_analysis.m"
      }
#line 1554 "det_analysis.m"
    else
#line 1554 "det_analysis.m"
      if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1811 "det_analysis.m"
        {
#line 1811 "det_analysis.m"
          MR_Word check_hlds__det_analysis__FromGroundTermKind_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 2)));
#line 1811 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 1)));

#line 1817 "det_analysis.m"
          if ((check_hlds__det_analysis__FromGroundTermKind_106 == (MR_Integer) 1))
#line 1813 "det_analysis.m"
            {
#line 1814 "det_analysis.m"
              *check_hlds__det_analysis__Goal_15 = check_hlds__det_analysis__Goal0_14;
#line 1815 "det_analysis.m"
              *check_hlds__det_analysis__Detism_21 = (MR_Integer) 0;
#line 1816 "det_analysis.m"
              *check_hlds__det_analysis__GoalFailingContexts_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1816 "det_analysis.m"
              *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107;
#line 1813 "det_analysis.m"
            }
#line 1817 "det_analysis.m"
          else
#line 1817 "det_analysis.m"
            if ((check_hlds__det_analysis__FromGroundTermKind_106 == (MR_Integer) 0))
#line 1825 "det_analysis.m"
              {
#line 1826 "det_analysis.m"
                {
#line 1826 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "from_ground_term_initial");
#line 1826 "det_analysis.m"
                  return;
                }
#line 1825 "det_analysis.m"
              }
#line 1817 "det_analysis.m"
            else
#line 1820 "det_analysis.m"
              {
#line 1820 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1820 "det_analysis.m"
                return;
              }
#line 1811 "det_analysis.m"
        }
#line 1554 "det_analysis.m"
      else
#line 1554 "det_analysis.m"
        if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1787 "det_analysis.m"
          {
#line 1788 "det_analysis.m"
            {
#line 1788 "det_analysis.m"
              check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
            }
#line 1795 "det_analysis.m"
            if ((*check_hlds__det_analysis__Detism_21 == (MR_Integer) 4))
#line 1793 "det_analysis.m"
              {
#line 1793 "det_analysis.m"
              }
#line 1795 "det_analysis.m"
            else
#line 1795 "det_analysis.m"
              if ((*check_hlds__det_analysis__Detism_21 == (MR_Integer) 0))
#line 1792 "det_analysis.m"
                {
#line 1792 "det_analysis.m"
                }
#line 1795 "det_analysis.m"
              else
#line 1804 "det_analysis.m"
                {
#line 1807 "det_analysis.m"
                  {
#line 1807 "det_analysis.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "Loop control scope with strange determinism");
#line 1807 "det_analysis.m"
                    return;
                  }
#line 1804 "det_analysis.m"
                }
#line 1787 "det_analysis.m"
          }
#line 1554 "det_analysis.m"
        else
#line 1554 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1737 "det_analysis.m"
            {
#line 1737 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Detism0_91;
#line 1737 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_120_120;
#line 1758 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Detism1_92;

#line 1738 "det_analysis.m"
              {
#line 1738 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, &check_hlds__det_analysis__Detism0_91, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_120_120);
              }
#line 1749 "det_analysis.m"
              if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 4))
#line 1750 "det_analysis.m"
                {
#line 1750 "det_analysis.m"
                  check_hlds__det_analysis__Detism1_92 = (MR_Integer) 4;
#line 1750 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1750 "det_analysis.m"
                }
#line 1749 "det_analysis.m"
              else
#line 1749 "det_analysis.m"
                if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 0))
#line 1747 "det_analysis.m"
                  {
#line 1747 "det_analysis.m"
                    check_hlds__det_analysis__Detism1_92 = (MR_Integer) 0;
#line 1747 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1747 "det_analysis.m"
                  }
#line 1749 "det_analysis.m"
                else
#line 1749 "det_analysis.m"
                  if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 6))
#line 1753 "det_analysis.m"
                    {
#line 1753 "det_analysis.m"
                      check_hlds__det_analysis__Detism1_92 = (MR_Integer) 0;
#line 1753 "det_analysis.m"
                      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1753 "det_analysis.m"
                    }
#line 1749 "det_analysis.m"
                  else
#line 1749 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
#line 1758 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1757 "det_analysis.m"
                {
#line 1757 "det_analysis.m"
                  *check_hlds__det_analysis__Detism_21 = check_hlds__det_analysis__Detism1_92;
#line 1757 "det_analysis.m"
                  *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_120_120;
#line 1757 "det_analysis.m"
                }
#line 1758 "det_analysis.m"
              else
#line 1759 "det_analysis.m"
                {
#line 1759 "det_analysis.m"
                  MR_String check_hlds__det_analysis__DetismStr_93;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Pieces_94;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Spec_95;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_123_123;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_124_124;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_134_134;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_135_135;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_136_136;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_137_137;
#line 1759 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Context_344;

#line 1759 "det_analysis.m"
                  *check_hlds__det_analysis__Detism_21 = check_hlds__det_analysis__Detism0_91;
#line 1760 "det_analysis.m"
                  {
#line 1760 "det_analysis.m"
                    check_hlds__det_analysis__Context_344 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
                  }
#line 1761 "det_analysis.m"
                  {
#line 1761 "det_analysis.m"
                    check_hlds__det_analysis__DetismStr_93 = parse_tree__prog_out__determinism_to_string_1_f_0(*check_hlds__det_analysis__Detism_21);
                  }
#line 1763 "det_analysis.m"
                  {
#line 1763 "det_analysis.m"
                    check_hlds__det_analysis__V_124_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1763 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_124_124, 0) = ((MR_Box) (check_hlds__det_analysis__DetismStr_93));
#line 1763 "det_analysis.m"
                  }
#line 1763 "det_analysis.m"
                  {
#line 1763 "det_analysis.m"
                    check_hlds__det_analysis__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1763 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_123_123, 0) = ((MR_Box) (check_hlds__det_analysis__V_124_124));
#line 1763 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[38])));
#line 1763 "det_analysis.m"
                  }
#line 1762 "det_analysis.m"
                  {
#line 1762 "det_analysis.m"
                    check_hlds__det_analysis__Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1762 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[121])));
#line 1762 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_94, 1) = ((MR_Box) (check_hlds__det_analysis__V_123_123));
#line 1762 "det_analysis.m"
                  }
#line 1766 "det_analysis.m"
                  {
#line 1766 "det_analysis.m"
                    check_hlds__det_analysis__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1766 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_137_137, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_94));
#line 1766 "det_analysis.m"
                  }
#line 1766 "det_analysis.m"
                  {
#line 1766 "det_analysis.m"
                    check_hlds__det_analysis__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1766 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 0) = ((MR_Box) (check_hlds__det_analysis__V_137_137));
#line 1766 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1766 "det_analysis.m"
                  }
#line 1766 "det_analysis.m"
                  {
#line 1766 "det_analysis.m"
                    check_hlds__det_analysis__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1766 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_135_135, 0) = ((MR_Box) (check_hlds__det_analysis__Context_344));
#line 1766 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_135_135, 1) = ((MR_Box) (check_hlds__det_analysis__V_136_136));
#line 1766 "det_analysis.m"
                  }
#line 1766 "det_analysis.m"
                  {
#line 1766 "det_analysis.m"
                    check_hlds__det_analysis__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1766 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 0) = ((MR_Box) (check_hlds__det_analysis__V_135_135));
#line 1766 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1766 "det_analysis.m"
                  }
#line 1765 "det_analysis.m"
                  {
#line 1765 "det_analysis.m"
                    check_hlds__det_analysis__Spec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1765 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1765 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1765 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 2) = ((MR_Box) (check_hlds__det_analysis__V_134_134));
#line 1765 "det_analysis.m"
                  }
#line 1767 "det_analysis.m"
                  {
#line 1767 "det_analysis.m"
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_95, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_120_120, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1767 "det_analysis.m"
                    return;
                  }
#line 1759 "det_analysis.m"
                }
#line 1737 "det_analysis.m"
            }
#line 1554 "det_analysis.m"
          else
#line 1554 "det_analysis.m"
            if (((((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 0))))))
#line 1781 "det_analysis.m"
              {
#line 1781 "det_analysis.m"
                MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_117_117;

#line 1782 "det_analysis.m"
                {
#line 1782 "det_analysis.m"
                  check_hlds__det_util__det_info_set_has_req_scope_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_117_117);
                }
#line 1783 "det_analysis.m"
                {
#line 1783 "det_analysis.m"
                  check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_117_117, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1783 "det_analysis.m"
                  return;
                }
#line 1781 "det_analysis.m"
              }
#line 1554 "det_analysis.m"
            else
#line 1774 "det_analysis.m"
              {
#line 1774 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_108);
#line 1774 "det_analysis.m"
                return;
              }
#line 1541 "det_analysis.m"
  }
#line 1541 "det_analysis.m"
}

#line 1517 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1517 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7,
#line 1517 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_CanFail_8,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9,
#line 1517 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10,
#line 1517 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11,
#line 1517 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12)
#line 1517 "det_analysis.m"
{
#line 1523 "det_analysis.m"
  {
#line 1523 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 1523 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1523 "det_analysis.m"
      {
#line 1523 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1525 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11;
#line 1525 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10 = check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9;
#line 1525 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_CanFail_8 = check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7;
#line 1523 "det_analysis.m"
      }
#line 1523 "det_analysis.m"
    else
#line 1528 "det_analysis.m"
      {
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_28;
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_29;
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_37;
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_38;
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_39;
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46;
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47;
#line 1528 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48;

#line 1529 "det_analysis.m"
        {
#line 1529 "det_analysis.m"
          check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__Goal0_26, &check_hlds__det_analysis__Goal_28, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__FirstDetism_37, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46);
        }
#line 1532 "det_analysis.m"
        {
#line 1532 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_37, &check_hlds__det_analysis__FirstCanFail_38, &check_hlds__det_analysis__FirstMaxSolns_39);
        }
#line 1533 "det_analysis.m"
        {
#line 1533 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7, check_hlds__det_analysis__FirstCanFail_38, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47);
        }
#line 1534 "det_analysis.m"
        {
#line 1534 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9, check_hlds__det_analysis__FirstMaxSolns_39, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48);
        }
#line 1535 "det_analysis.m"
        {
#line 1535 "det_analysis.m"
          check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(check_hlds__det_analysis__Goals0_27, &check_hlds__det_analysis__Goals_29, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47, check_hlds__det_analysis__STATE_VARIABLE_CanFail_8, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12);
        }
#line 1526 "det_analysis.m"
        {
#line 1526 "det_analysis.m"
          MR_Word base;
#line 1526 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 1526 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_28));
#line 1526 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_29));
#line 1526 "det_analysis.m"
        }
#line 1528 "det_analysis.m"
      }
#line 1523 "det_analysis.m"
  }
#line 1517 "det_analysis.m"
}

#line 1497 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
#line 1497 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg)
#line 1497 "det_analysis.m"
{
#line 1497 "det_analysis.m"
  {
#line 1497 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1497 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1497 "det_analysis.m"
    {
#line 1497 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1497__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))));
    }
#line 1497 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1497 "det_analysis.m"
  }
#line 1497 "det_analysis.m"
}

#line 1481 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1481 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_12,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15,
#line 1481 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_16,
#line 1481 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25,
#line 1481 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26)
#line 1481 "det_analysis.m"
{
#line 1487 "det_analysis.m"
  {
#line 1487 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1487 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts_18;
#line 1487 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27;

#line 1488 "det_analysis.m"
    {
#line 1488 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_10, check_hlds__det_analysis__Goal_11, check_hlds__det_analysis__InstMap0_12, check_hlds__det_analysis__SolnContext_13, check_hlds__det_analysis__RightFailingContexts_14, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15, check_hlds__det_analysis__Detism_16, &check_hlds__det_analysis__GoalFailingContexts_18, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27);
    }
#line 1499 "det_analysis.m"
    if ((((((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 4)) || ((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 0)))) || ((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 6))))
#line 1495 "det_analysis.m"
      {
#line 1495 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_48_48;

#line 1497 "det_analysis.m"
        {
#line 1497 "det_analysis.m"
          check_hlds__det_analysis__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
#line 1497 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1));
#line 1497 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1497 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 3) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts_18));
#line 1497 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1497 "det_analysis.m"
        }
#line 1497 "det_analysis.m"
        {
#line 1497 "det_analysis.m"
          mercury__require__expect_4_p_0(check_hlds__det_analysis__V_48_48, (MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
        }
#line 1497 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27;
#line 1495 "det_analysis.m"
      }
#line 1499 "det_analysis.m"
    else
#line 1505 "det_analysis.m"
      {
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_10, (MR_Integer) 1)));
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_21;
#line 1505 "det_analysis.m"
        MR_String check_hlds__det_analysis__DetismStr_22;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_23;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_24;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_30_30;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_31_31;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_41_41;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_42_42;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_43_43;
#line 1505 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_44_44;
#line 1506 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_10, (MR_Integer) 0)));

#line 1507 "det_analysis.m"
        {
#line 1507 "det_analysis.m"
          check_hlds__det_analysis__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo0_20);
        }
#line 1508 "det_analysis.m"
        {
#line 1508 "det_analysis.m"
          check_hlds__det_analysis__DetismStr_22 = parse_tree__prog_out__determinism_to_string_1_f_0(*check_hlds__det_analysis__Detism_16);
        }
#line 1510 "det_analysis.m"
        {
#line 1510 "det_analysis.m"
          check_hlds__det_analysis__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "det_analysis.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_31_31, 0) = ((MR_Box) (check_hlds__det_analysis__DetismStr_22));
#line 1510 "det_analysis.m"
        }
#line 1510 "det_analysis.m"
        {
#line 1510 "det_analysis.m"
          check_hlds__det_analysis__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_30_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_31_31));
#line 1510 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[38])));
#line 1510 "det_analysis.m"
        }
#line 1509 "det_analysis.m"
        {
#line 1509 "det_analysis.m"
          check_hlds__det_analysis__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[106])));
#line 1509 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_23, 1) = ((MR_Box) (check_hlds__det_analysis__V_30_30));
#line 1509 "det_analysis.m"
        }
#line 1513 "det_analysis.m"
        {
#line 1513 "det_analysis.m"
          check_hlds__det_analysis__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_44_44, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_23));
#line 1513 "det_analysis.m"
        }
#line 1513 "det_analysis.m"
        {
#line 1513 "det_analysis.m"
          check_hlds__det_analysis__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_43_43, 0) = ((MR_Box) (check_hlds__det_analysis__V_44_44));
#line 1513 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1513 "det_analysis.m"
        }
#line 1513 "det_analysis.m"
        {
#line 1513 "det_analysis.m"
          check_hlds__det_analysis__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_42_42, 0) = ((MR_Box) (check_hlds__det_analysis__Context_21));
#line 1513 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_42_42, 1) = ((MR_Box) (check_hlds__det_analysis__V_43_43));
#line 1513 "det_analysis.m"
        }
#line 1513 "det_analysis.m"
        {
#line 1513 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_41_41, 0) = ((MR_Box) (check_hlds__det_analysis__V_42_42));
#line 1513 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1513 "det_analysis.m"
        }
#line 1512 "det_analysis.m"
        {
#line 1512 "det_analysis.m"
          check_hlds__det_analysis__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1512 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1512 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 2) = ((MR_Box) (check_hlds__det_analysis__V_41_41));
#line 1512 "det_analysis.m"
        }
#line 1514 "det_analysis.m"
        {
#line 1514 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_24, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26);
#line 1514 "det_analysis.m"
          return;
        }
#line 1505 "det_analysis.m"
      }
#line 1487 "det_analysis.m"
  }
#line 1481 "det_analysis.m"
}

#line 1440 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MainGoal0_12,
#line 1440 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__MainGoal_13,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__OrElseGoals0_14,
#line 1440 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__OrElseGoals_15,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_16,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19,
#line 1440 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_20,
#line 1440 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30,
#line 1440 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31)
#line 1440 "det_analysis.m"
{
#line 1447 "det_analysis.m"
  {
#line 1447 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1447 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MainDetism_22;
#line 1447 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32;

#line 1448 "det_analysis.m"
    {
#line 1448 "det_analysis.m"
      check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__MainGoal0_12, check_hlds__det_analysis__MainGoal_13, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, &check_hlds__det_analysis__MainDetism_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32);
    }
#line 1455 "det_analysis.m"
    if ((check_hlds__det_analysis__OrElseGoals0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1452 "det_analysis.m"
      {
#line 1453 "det_analysis.m"
        *check_hlds__det_analysis__OrElseGoals_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1454 "det_analysis.m"
        *check_hlds__det_analysis__Detism_20 = check_hlds__det_analysis__MainDetism_22;
#line 1454 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32;
#line 1452 "det_analysis.m"
      }
#line 1455 "det_analysis.m"
    else
#line 1456 "det_analysis.m"
      {
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainCanFail_25;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainMaxSolns_26;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_27;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns0_28;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns_29;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_47;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_48;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_49;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_50;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_58;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_59;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_60;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68;
#line 1456 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69;

#line 1457 "det_analysis.m"
        {
#line 1457 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__MainDetism_22, &check_hlds__det_analysis__MainCanFail_25, &check_hlds__det_analysis__MainMaxSolns_26);
        }
#line 1526 "det_analysis.m"
        check_hlds__det_analysis__Goal0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OrElseGoals0_14, (MR_Integer) 0)));
#line 1526 "det_analysis.m"
        check_hlds__det_analysis__Goals0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OrElseGoals0_14, (MR_Integer) 1)));
#line 1529 "det_analysis.m"
        {
#line 1529 "det_analysis.m"
          check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__Goal0_47, &check_hlds__det_analysis__Goal_49, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, &check_hlds__det_analysis__FirstDetism_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67);
        }
#line 1532 "det_analysis.m"
        {
#line 1532 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_58, &check_hlds__det_analysis__FirstCanFail_59, &check_hlds__det_analysis__FirstMaxSolns_60);
        }
#line 1533 "det_analysis.m"
        {
#line 1533 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__MainCanFail_25, check_hlds__det_analysis__FirstCanFail_59, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68);
        }
#line 1534 "det_analysis.m"
        {
#line 1534 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__MainMaxSolns_26, check_hlds__det_analysis__FirstMaxSolns_60, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69);
        }
#line 1535 "det_analysis.m"
        {
#line 1535 "det_analysis.m"
          check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(check_hlds__det_analysis__Goals0_48, &check_hlds__det_analysis__Goals_50, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68, &check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69, &check_hlds__det_analysis__MaxSolns0_28, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31);
        }
#line 1526 "det_analysis.m"
        {
#line 1526 "det_analysis.m"
          MR_Word base;
#line 1526 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "det_analysis.m"
          *check_hlds__det_analysis__OrElseGoals_15 = base;
#line 1526 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_49));
#line 1526 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_50));
#line 1526 "det_analysis.m"
        }
#line 1464 "det_analysis.m"
        if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 3))
#line 1476 "det_analysis.m"
          check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 3;
#line 1464 "det_analysis.m"
        else
#line 1464 "det_analysis.m"
          if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 2))
#line 1473 "det_analysis.m"
            check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 2;
#line 1464 "det_analysis.m"
          else
#line 1464 "det_analysis.m"
            if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 1))
#line 1470 "det_analysis.m"
              check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 2;
#line 1464 "det_analysis.m"
            else
#line 1463 "det_analysis.m"
              check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 0;
#line 1478 "det_analysis.m"
        {
#line 1478 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_20, check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__MaxSolns_29);
#line 1478 "det_analysis.m"
          return;
        }
#line 1456 "det_analysis.m"
      }
#line 1447 "det_analysis.m"
  }
#line 1440 "det_analysis.m"
}

#line 1403 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1403 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_13,
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14,
#line 1403 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1403 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1403 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24,
#line 1403 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25)
#line 1403 "det_analysis.m"
{
#line 1409 "det_analysis.m"
  {
#line 1409 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1409 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NegDetism_18;
#line 1409 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDetism_20;
#line 1409 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_21;
#line 1417 "det_analysis.m"
    MR_Word check_hlds__det_analysis___NegatedGoalCanFail_19;
#line 1428 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_22_22;

#line 1417 "det_analysis.m"
    {
#line 1417 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_10, check_hlds__det_analysis__Goal_11, check_hlds__det_analysis__InstMap0_13, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14, &check_hlds__det_analysis__NegDetism_18, &check_hlds__det_analysis___NegatedGoalCanFail_19, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25);
    }
#line 1420 "det_analysis.m"
    {
#line 1420 "det_analysis.m"
      parse_tree__prog_data__det_negation_det_2_p_0(check_hlds__det_analysis__NegDetism_18, &check_hlds__det_analysis__MaybeDetism_20);
    }
#line 1425 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "det_analysis.m"
      {
#line 1423 "det_analysis.m"
        {
#line 1423 "det_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_not\'/9", (MR_String) "inappropriate determinism inside a negation");
#line 1423 "det_analysis.m"
          return;
        }
#line 1422 "det_analysis.m"
      }
#line 1425 "det_analysis.m"
    else
#line 1426 "det_analysis.m"
      *check_hlds__det_analysis__Detism_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDetism_20, (MR_Integer) 0)));
#line 1428 "det_analysis.m"
    {
#line 1428 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_15, &check_hlds__det_analysis__CanFail_21, &check_hlds__det_analysis__V_22_22);
    }
#line 1433 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_21 == (MR_Integer) 0))
#line 1430 "det_analysis.m"
      {
#line 1430 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_23;
#line 1430 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_32_32;

#line 1431 "det_analysis.m"
        {
#line 1431 "det_analysis.m"
          check_hlds__det_analysis__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_12);
        }
#line 1432 "det_analysis.m"
        {
#line 1432 "det_analysis.m"
          check_hlds__det_analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_32_32, 0) = ((MR_Box) (check_hlds__det_analysis__Context_23));
#line 1432 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1432 "det_analysis.m"
        }
#line 1432 "det_analysis.m"
        {
#line 1432 "det_analysis.m"
          MR_Word base;
#line 1432 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_16 = base;
#line 1432 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__V_32_32));
#line 1432 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1432 "det_analysis.m"
        }
#line 1430 "det_analysis.m"
      }
#line 1433 "det_analysis.m"
    else
#line 1435 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1409 "det_analysis.m"
  }
#line 1403 "det_analysis.m"
}

#line 1315 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cond0_15,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cond_16,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Then0_17,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Then_18,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Else0_19,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Else_20,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_21,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_22,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_23,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_25,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_26,
#line 1315 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48,
#line 1315 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49)
#line 1315 "det_analysis.m"
{
#line 1323 "det_analysis.m"
  {
#line 1323 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_66_66;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InstMap1_29;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenDetism_30;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenFailingContexts_31;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenCanFail_32;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenMaxSoln_33;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondSolnContext_34;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondDetism_35;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondCanFail_37;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondMaxSoln_38;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseDetism_39;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseFailingContexts_40;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseCanFail_41;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseMaxSoln_42;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_57_57;
#line 1323 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58;
#line 1353 "det_analysis.m"
    MR_Word check_hlds__det_analysis___CondFailingContexts_36;

#line 1332 "det_analysis.m"
    {
#line 1332 "det_analysis.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__det_analysis__Cond0_15, check_hlds__det_analysis__InstMap0_21, &check_hlds__det_analysis__InstMap1_29);
    }
#line 1333 "det_analysis.m"
    {
#line 1333 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Then0_17, check_hlds__det_analysis__Then_18, check_hlds__det_analysis__InstMap1_29, check_hlds__det_analysis__SolnContext_22, check_hlds__det_analysis__RightFailingContexts_23, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__ThenDetism_30, &check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53);
    }
#line 1336 "det_analysis.m"
    {
#line 1336 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ThenDetism_30, &check_hlds__det_analysis__ThenCanFail_32, &check_hlds__det_analysis__ThenMaxSoln_33);
    }
#line 1342 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ThenCanFail_32 == (MR_Integer) 1);
#line 1342 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1343 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_22 == (MR_Integer) 1);
#line 1346 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1345 "det_analysis.m"
      check_hlds__det_analysis__CondSolnContext_34 = (MR_Integer) 1;
#line 1346 "det_analysis.m"
    else
#line 1347 "det_analysis.m"
      check_hlds__det_analysis__CondSolnContext_34 = (MR_Integer) 0;
#line 6906 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_66_66 = (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0;
#line 1354 "det_analysis.m"
    {
#line 1354 "det_analysis.m"
      check_hlds__det_analysis__V_57_57 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_66_66, check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__RightFailingContexts_23);
    }
#line 1353 "det_analysis.m"
    {
#line 1353 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Cond0_15, check_hlds__det_analysis__Cond_16, check_hlds__det_analysis__InstMap0_21, check_hlds__det_analysis__CondSolnContext_34, check_hlds__det_analysis__V_57_57, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis___CondFailingContexts_36, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58);
    }
#line 1357 "det_analysis.m"
    {
#line 1357 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis__CondCanFail_37, &check_hlds__det_analysis__CondMaxSoln_38);
    }
#line 1363 "det_analysis.m"
    {
#line 1363 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Else0_19, check_hlds__det_analysis__Else_20, check_hlds__det_analysis__InstMap0_21, check_hlds__det_analysis__SolnContext_22, check_hlds__det_analysis__RightFailingContexts_23, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__ElseDetism_39, &check_hlds__det_analysis__ElseFailingContexts_40, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49);
    }
#line 1366 "det_analysis.m"
    {
#line 1366 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ElseDetism_39, &check_hlds__det_analysis__ElseCanFail_41, &check_hlds__det_analysis__ElseMaxSoln_42);
    }
#line 1373 "det_analysis.m"
    if ((check_hlds__det_analysis__CondCanFail_37 == (MR_Integer) 0))
#line 1387 "det_analysis.m"
      if ((check_hlds__det_analysis__CondMaxSoln_38 == (MR_Integer) 0))
#line 1376 "det_analysis.m"
        {
#line 1376 "det_analysis.m"
          MR_Word check_hlds__det_analysis__MaybeNegDetism_43;
#line 1376 "det_analysis.m"
          MR_Word check_hlds__det_analysis__NegDetism_44;

#line 1378 "det_analysis.m"
          {
#line 1378 "det_analysis.m"
            parse_tree__prog_data__det_negation_det_2_p_0(check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis__MaybeNegDetism_43);
          }
#line 1383 "det_analysis.m"
          if ((check_hlds__det_analysis__MaybeNegDetism_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1380 "det_analysis.m"
            {
#line 1381 "det_analysis.m"
              {
#line 1381 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_if_then_else\'/14", (MR_String) "cannot find determinism of negated condition");
#line 1381 "det_analysis.m"
                return;
              }
#line 1380 "det_analysis.m"
            }
#line 1383 "det_analysis.m"
          else
#line 1384 "det_analysis.m"
            check_hlds__det_analysis__NegDetism_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeNegDetism_43, (MR_Integer) 0)));
#line 1386 "det_analysis.m"
          {
#line 1386 "det_analysis.m"
            parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__NegDetism_44, check_hlds__det_analysis__ElseDetism_39, check_hlds__det_analysis__Detism_25);
          }
#line 1376 "det_analysis.m"
        }
#line 1387 "det_analysis.m"
      else
#line 1391 "det_analysis.m"
        {
#line 1391 "det_analysis.m"
          MR_Word check_hlds__det_analysis__CTMaxSoln_45;
#line 1391 "det_analysis.m"
          MR_Word check_hlds__det_analysis__MaxSoln_46;
#line 1391 "det_analysis.m"
          MR_Word check_hlds__det_analysis__CanFail_47;

#line 1392 "det_analysis.m"
          {
#line 1392 "det_analysis.m"
            parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__CondMaxSoln_38, check_hlds__det_analysis__ThenMaxSoln_33, &check_hlds__det_analysis__CTMaxSoln_45);
          }
#line 1393 "det_analysis.m"
          {
#line 1393 "det_analysis.m"
            parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__CTMaxSoln_45, check_hlds__det_analysis__ElseMaxSoln_42, &check_hlds__det_analysis__MaxSoln_46);
          }
#line 1394 "det_analysis.m"
          {
#line 1394 "det_analysis.m"
            parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__ThenCanFail_32, check_hlds__det_analysis__ElseCanFail_41, &check_hlds__det_analysis__CanFail_47);
          }
#line 1395 "det_analysis.m"
          {
#line 1395 "det_analysis.m"
            parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_25, check_hlds__det_analysis__CanFail_47, check_hlds__det_analysis__MaxSoln_46);
          }
#line 1391 "det_analysis.m"
        }
#line 1373 "det_analysis.m"
    else
#line 1372 "det_analysis.m"
      {
#line 1372 "det_analysis.m"
        parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__CondDetism_35, check_hlds__det_analysis__ThenDetism_30, check_hlds__det_analysis__Detism_25);
      }
#line 1401 "det_analysis.m"
    {
#line 1401 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_26 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_66_66, check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__ElseFailingContexts_40);
    }
#line 1323 "det_analysis.m"
  }
#line 1315 "det_analysis.m"
}

#line 1226 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__LHS_14,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RHS0_15,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Unify_16,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__UnifyContext_17,
#line 1226 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__RHS_18,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_19,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_20,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_21,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_22,
#line 1226 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 1226 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 1226 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85,
#line 1226 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86)
#line 1226 "det_analysis.m"
{
#line 1234 "det_analysis.m"
  {
#line 1234 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1234 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UnifyCanFail_47;
#line 1234 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ExaminesRepresentation_48;
#line 1234 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UnifyNumSolns_49;
#line 1234 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101;
#line 1234 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_103_103;

#line 1261 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__RHS0_15)) == (MR_mktag((MR_Integer) 2))))
#line 1247 "det_analysis.m"
      {
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Groundness_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredOrFunc_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NonLocalVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 2)));
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 3)));
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 4)));
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaDeclaredDet_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 5)));
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 6)));
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaSolnContext_37;
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_38;
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_39;
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_40;
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaInferredDet_41;
#line 1247 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100;
#line 1248 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_125_125;
#line 1248 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_36_36;
#line 1255 "det_analysis.m"
        MR_Word check_hlds__det_analysis___LambdaFailingContexts_42;

#line 1248 "det_analysis.m"
        {
#line 1248 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__LambdaDeclaredDet_34, &check_hlds__det_analysis__V_36_36, &check_hlds__det_analysis__V_125_125);
        }
#line 1248 "det_analysis.m"
        check_hlds__det_analysis__succeeded = ((MR_Integer) 2 == check_hlds__det_analysis__V_125_125);
#line 1250 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1249 "det_analysis.m"
          check_hlds__det_analysis__LambdaSolnContext_37 = (MR_Integer) 1;
#line 1250 "det_analysis.m"
        else
#line 1251 "det_analysis.m"
          check_hlds__det_analysis__LambdaSolnContext_37 = (MR_Integer) 0;
#line 1253 "det_analysis.m"
        {
#line 1253 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85, &check_hlds__det_analysis__ModuleInfo_38);
        }
#line 1254 "det_analysis.m"
        {
#line 1254 "det_analysis.m"
          hlds__instmap__pre_lambda_update_5_p_0(check_hlds__det_analysis__ModuleInfo_38, check_hlds__det_analysis__Vars_32, check_hlds__det_analysis__Modes_33, check_hlds__det_analysis__InstMap0_20, &check_hlds__det_analysis__InstMap1_39);
        }
#line 1255 "det_analysis.m"
        {
#line 1255 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_35, &check_hlds__det_analysis__Goal_40, check_hlds__det_analysis__InstMap1_39, check_hlds__det_analysis__LambdaSolnContext_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__LambdaInferredDet_41, &check_hlds__det_analysis___LambdaFailingContexts_42, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100);
        }
#line 1257 "det_analysis.m"
        {
#line 1257 "det_analysis.m"
          check_hlds__det_report__det_check_lambda_7_p_0(check_hlds__det_analysis__LambdaDeclaredDet_34, check_hlds__det_analysis__LambdaInferredDet_41, check_hlds__det_analysis__Goal_40, check_hlds__det_analysis__GoalInfo_19, check_hlds__det_analysis__InstMap1_39, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101);
        }
#line 1259 "det_analysis.m"
        {
#line 1259 "det_analysis.m"
          MR_Word base;
#line 1259 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "det_analysis.m"
          *check_hlds__det_analysis__RHS_18 = base;
#line 1259 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((check_hlds__det_analysis__Purity_27 | ((((check_hlds__det_analysis__Groundness_28 << (MR_Integer) 2)) | ((check_hlds__det_analysis__PredOrFunc_29 << (MR_Integer) 3)))))));
#line 1259 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 1259 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__det_analysis__NonLocalVars_31));
#line 1259 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__det_analysis__Vars_32));
#line 1259 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__det_analysis__Modes_33));
#line 1259 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__det_analysis__LambdaDeclaredDet_34));
#line 1259 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (check_hlds__det_analysis__Goal_40));
#line 1259 "det_analysis.m"
        }
#line 1247 "det_analysis.m"
      }
#line 1261 "det_analysis.m"
    else
#line 1264 "det_analysis.m"
      {
#line 1265 "det_analysis.m"
        *check_hlds__det_analysis__RHS_18 = check_hlds__det_analysis__RHS0_15;
#line 1265 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85;
#line 1264 "det_analysis.m"
      }
#line 1267 "det_analysis.m"
    {
#line 1267 "det_analysis.m"
      check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(check_hlds__det_analysis__Unify_16, &check_hlds__det_analysis__UnifyCanFail_47);
    }
#line 1268 "det_analysis.m"
    {
#line 1268 "det_analysis.m"
      check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(check_hlds__det_analysis__Unify_16, &check_hlds__det_analysis__ExaminesRepresentation_48);
    }
#line 1271 "det_analysis.m"
    {
#line 1271 "det_analysis.m"
      check_hlds__det_analysis__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 0) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_17));
#line 1271 "det_analysis.m"
    }
#line 1269 "det_analysis.m"
    {
#line 1269 "det_analysis.m"
      check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(check_hlds__det_analysis__LHS_14, check_hlds__det_analysis__ExaminesRepresentation_48, check_hlds__det_analysis__UnifyCanFail_47, check_hlds__det_analysis__SolnContext_21, check_hlds__det_analysis__RightFailingContexts_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalInfo_19, check_hlds__det_analysis__V_103_103, &check_hlds__det_analysis__UnifyNumSolns_49, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86);
    }
#line 1272 "det_analysis.m"
    {
#line 1272 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_23, check_hlds__det_analysis__UnifyCanFail_47, check_hlds__det_analysis__UnifyNumSolns_49);
    }
#line 1308 "det_analysis.m"
    if ((check_hlds__det_analysis__UnifyCanFail_47 == (MR_Integer) 0))
#line 1274 "det_analysis.m"
      {
#line 1274 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_50;

#line 1275 "det_analysis.m"
        {
#line 1275 "det_analysis.m"
          check_hlds__det_analysis__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_19);
        }
#line 1279 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 2))))
#line 1280 "det_analysis.m"
          {
#line 1281 "det_analysis.m"
            {
#line 1281 "det_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail assign");
#line 1281 "det_analysis.m"
              return;
            }
#line 1280 "det_analysis.m"
          }
#line 1279 "det_analysis.m"
        else
#line 1279 "det_analysis.m"
          if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 0))))
#line 1277 "det_analysis.m"
            {
#line 1278 "det_analysis.m"
              {
#line 1278 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail construct");
#line 1278 "det_analysis.m"
                return;
              }
#line 1277 "det_analysis.m"
            }
#line 1279 "det_analysis.m"
          else
#line 1279 "det_analysis.m"
            if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 1))))
#line 1298 "det_analysis.m"
              {
#line 1298 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 0)));
#line 1298 "det_analysis.m"
                MR_Word check_hlds__det_analysis__FailingGoal_117;
#line 1298 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ConsId_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 1)));
#line 1298 "det_analysis.m"
                MR_Word check_hlds__det_analysis__FailingContext_119;
#line 1298 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 2)));
#line 1298 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 3)));
#line 1298 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 4)));
#line 1298 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 5)));

#line 1299 "det_analysis.m"
                {
#line 1299 "det_analysis.m"
                  check_hlds__det_analysis__FailingGoal_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1299 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 1) = ((MR_Box) (check_hlds__det_analysis__Var_78));
#line 1299 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 2) = ((MR_Box) (check_hlds__det_analysis__ConsId_118));
#line 1299 "det_analysis.m"
                }
#line 1300 "det_analysis.m"
                {
#line 1300 "det_analysis.m"
                  check_hlds__det_analysis__FailingContext_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_119, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1300 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_119, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_117));
#line 1300 "det_analysis.m"
                }
#line 1301 "det_analysis.m"
                {
#line 1301 "det_analysis.m"
                  MR_Word base;
#line 1301 "det_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "det_analysis.m"
                  *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1301 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_119));
#line 1301 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "det_analysis.m"
                }
#line 1298 "det_analysis.m"
              }
#line 1279 "det_analysis.m"
            else
#line 1279 "det_analysis.m"
              if (((((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1283 "det_analysis.m"
                {
#line 1283 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingGoal_64;
#line 1283 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingContext_77;

#line 1287 "det_analysis.m"
                  if (((MR_tag((MR_Word) *check_hlds__det_analysis__RHS_18)) == (MR_mktag((MR_Integer) 1))))
#line 1288 "det_analysis.m"
                    {
#line 1288 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__ConsId_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 0)));
#line 1288 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 1)));
#line 1288 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 2)));

#line 1289 "det_analysis.m"
                      {
#line 1289 "det_analysis.m"
                        check_hlds__det_analysis__FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1289 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 1) = ((MR_Box) (check_hlds__det_analysis__LHS_14));
#line 1289 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 2) = ((MR_Box) (check_hlds__det_analysis__ConsId_65));
#line 1289 "det_analysis.m"
                      }
#line 1288 "det_analysis.m"
                    }
#line 1287 "det_analysis.m"
                  else
#line 1287 "det_analysis.m"
                    if (((MR_tag((MR_Word) *check_hlds__det_analysis__RHS_18)) == (MR_mktag((MR_Integer) 2))))
#line 1291 "det_analysis.m"
                      {
#line 1292 "det_analysis.m"
                        {
#line 1292 "det_analysis.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "complicated_unify but no fail context");
#line 1292 "det_analysis.m"
                          return;
                        }
#line 1291 "det_analysis.m"
                      }
#line 1287 "det_analysis.m"
                    else
#line 1285 "det_analysis.m"
                      {
#line 1285 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__RHSVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__det_analysis__RHS_18, (MR_Integer) 0)));

#line 1286 "det_analysis.m"
                        {
#line 1286 "det_analysis.m"
                          check_hlds__det_analysis__FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "det_analysis.m"
                          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_64, 0) = ((MR_Box) (check_hlds__det_analysis__LHS_14));
#line 1286 "det_analysis.m"
                          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_64, 1) = ((MR_Box) (check_hlds__det_analysis__RHSVar_63));
#line 1286 "det_analysis.m"
                        }
#line 1285 "det_analysis.m"
                      }
#line 1295 "det_analysis.m"
                  {
#line 1295 "det_analysis.m"
                    check_hlds__det_analysis__FailingContext_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_77, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1295 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_77, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_64));
#line 1295 "det_analysis.m"
                  }
#line 1296 "det_analysis.m"
                  {
#line 1296 "det_analysis.m"
                    MR_Word base;
#line 1296 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "det_analysis.m"
                    *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1296 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_77));
#line 1296 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1296 "det_analysis.m"
                  }
#line 1283 "det_analysis.m"
                }
#line 1279 "det_analysis.m"
              else
#line 1303 "det_analysis.m"
                {
#line 1303 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Var1_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 1)));
#line 1303 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Var2_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 2)));
#line 1303 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingGoal_120;
#line 1303 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingContext_121;

#line 1304 "det_analysis.m"
                  {
#line 1304 "det_analysis.m"
                    check_hlds__det_analysis__FailingGoal_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_120, 0) = ((MR_Box) (check_hlds__det_analysis__Var1_83));
#line 1304 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_120, 1) = ((MR_Box) (check_hlds__det_analysis__Var2_84));
#line 1304 "det_analysis.m"
                  }
#line 1305 "det_analysis.m"
                  {
#line 1305 "det_analysis.m"
                    check_hlds__det_analysis__FailingContext_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_121, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1305 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_121, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_120));
#line 1305 "det_analysis.m"
                  }
#line 1306 "det_analysis.m"
                  {
#line 1306 "det_analysis.m"
                    MR_Word base;
#line 1306 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "det_analysis.m"
                    *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1306 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_121));
#line 1306 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "det_analysis.m"
                  }
#line 1303 "det_analysis.m"
                }
#line 1274 "det_analysis.m"
      }
#line 1308 "det_analysis.m"
    else
#line 1310 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1234 "det_analysis.m"
  }
#line 1226 "det_analysis.m"
}

#line 1092 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GenericCall_10,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CallDetism_11,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1092 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1092 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1092 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28,
#line 1092 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29)
#line 1092 "det_analysis.m"
{
#line 1099 "det_analysis.m"
  {
#line 1099 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1099 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_18;
#line 1099 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_19;
#line 1099 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Context_20;

#line 1100 "det_analysis.m"
    {
#line 1100 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CallDetism_11, &check_hlds__det_analysis__CanFail_18, &check_hlds__det_analysis__NumSolns_19);
    }
#line 1101 "det_analysis.m"
    {
#line 1101 "det_analysis.m"
      check_hlds__det_analysis__Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_12);
    }
#line 1103 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns_19 == (MR_Integer) 2);
#line 1103 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1104 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_13 == (MR_Integer) 0);
#line 1124 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1108 "det_analysis.m"
      {
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_21;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarSet_22;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstPieces_23;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_24;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ContextMsgs_25;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_26;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_32_32;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_35_35;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_36_36;
#line 1108 "det_analysis.m"
        MR_String check_hlds__det_analysis__V_37_37;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_46_46;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_47_47;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_48_48;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_49_49;
#line 1108 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_50_50;

#line 1108 "det_analysis.m"
        {
#line 1108 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, &check_hlds__det_analysis__ProcInfo_21);
        }
#line 1109 "det_analysis.m"
        {
#line 1109 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_21, &check_hlds__det_analysis__VarSet_22);
        }
#line 1111 "det_analysis.m"
        {
#line 1111 "det_analysis.m"
          check_hlds__det_analysis__V_37_37 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__CallDetism_11);
        }
#line 1111 "det_analysis.m"
        {
#line 1111 "det_analysis.m"
          check_hlds__det_analysis__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "det_analysis.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_36_36, 0) = ((MR_Box) (check_hlds__det_analysis__V_37_37));
#line 1111 "det_analysis.m"
        }
#line 1111 "det_analysis.m"
        {
#line 1111 "det_analysis.m"
          check_hlds__det_analysis__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_35_35, 0) = ((MR_Box) (check_hlds__det_analysis__V_36_36));
#line 1111 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1111 "det_analysis.m"
        }
#line 1111 "det_analysis.m"
        {
#line 1111 "det_analysis.m"
          check_hlds__det_analysis__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[105])));
#line 1111 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_32_32, 1) = ((MR_Box) (check_hlds__det_analysis__V_35_35));
#line 1111 "det_analysis.m"
        }
#line 1110 "det_analysis.m"
        {
#line 1110 "det_analysis.m"
          check_hlds__det_analysis__FirstPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__FirstPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[104])));
#line 1110 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__FirstPieces_23, 1) = ((MR_Box) (check_hlds__det_analysis__V_32_32));
#line 1110 "det_analysis.m"
        }
#line 1113 "det_analysis.m"
        {
#line 1113 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, &check_hlds__det_analysis__ModuleInfo_24);
        }
#line 1114 "det_analysis.m"
        {
#line 1114 "det_analysis.m"
          check_hlds__det_analysis__ContextMsgs_25 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_24, check_hlds__det_analysis__VarSet_22, check_hlds__det_analysis__RightFailingContexts_14);
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_50_50, 0) = ((MR_Box) (check_hlds__det_analysis__FirstPieces_23));
#line 1117 "det_analysis.m"
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (check_hlds__det_analysis__V_50_50));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1117 "det_analysis.m"
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (check_hlds__det_analysis__Context_20));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__V_49_49));
#line 1117 "det_analysis.m"
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__V_48_48));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1117 "det_analysis.m"
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_47_47, check_hlds__det_analysis__ContextMsgs_25);
        }
#line 1116 "det_analysis.m"
        {
#line 1116 "det_analysis.m"
          check_hlds__det_analysis__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 2) = ((MR_Box) (check_hlds__det_analysis__V_46_46));
#line 1116 "det_analysis.m"
        }
#line 1118 "det_analysis.m"
        {
#line 1118 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_26, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29);
        }
#line 1123 "det_analysis.m"
        {
#line 1123 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_15, check_hlds__det_analysis__CanFail_18, (MR_Integer) 3);
        }
#line 1108 "det_analysis.m"
      }
#line 1124 "det_analysis.m"
    else
#line 1125 "det_analysis.m"
      {
#line 1125 "det_analysis.m"
        *check_hlds__det_analysis__Detism_15 = check_hlds__det_analysis__CallDetism_11;
#line 1125 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28;
#line 1125 "det_analysis.m"
      }
#line 1132 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_18 == (MR_Integer) 0))
#line 1128 "det_analysis.m"
      {
#line 1128 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_27;
#line 1128 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_55_55;

#line 1130 "det_analysis.m"
        {
#line 1130 "det_analysis.m"
          check_hlds__det_analysis__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1130 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 1) = ((MR_Box) (check_hlds__det_analysis__GenericCall_10));
#line 1130 "det_analysis.m"
        }
#line 1129 "det_analysis.m"
        {
#line 1129 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_27, 0) = ((MR_Box) (check_hlds__det_analysis__Context_20));
#line 1129 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_27, 1) = ((MR_Box) (check_hlds__det_analysis__V_55_55));
#line 1129 "det_analysis.m"
        }
#line 1131 "det_analysis.m"
        {
#line 1131 "det_analysis.m"
          MR_Word base;
#line 1131 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_16 = base;
#line 1131 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_27));
#line 1131 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "det_analysis.m"
        }
#line 1128 "det_analysis.m"
      }
#line 1132 "det_analysis.m"
    else
#line 1134 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1099 "det_analysis.m"
  }
#line 1092 "det_analysis.m"
}

#line 1016 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_12,
#line 1016 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId0_13,
#line 1016 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__ProcId_14,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Args_15,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1016 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1016 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1016 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39,
#line 1016 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40)
#line 1016 "det_analysis.m"
{
#line 1022 "det_analysis.m"
  {
#line 1022 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1022 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CalleePredInfo_22;
#line 1022 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Detism0_23;
#line 1022 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_24;
#line 1022 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CalleeModuleName_25;
#line 1022 "det_analysis.m"
    MR_String check_hlds__det_analysis__CalleeName_26;
#line 1022 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_27;
#line 1022 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_28;
#line 1022 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;

#line 1027 "det_analysis.m"
    {
#line 1027 "det_analysis.m"
      check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, check_hlds__det_analysis__PredId_12, check_hlds__det_analysis__ProcId0_13, &check_hlds__det_analysis__CalleePredInfo_22, &check_hlds__det_analysis__Detism0_23);
    }
#line 1032 "det_analysis.m"
    {
#line 1032 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, &check_hlds__det_analysis__ModuleInfo_24);
    }
#line 1033 "det_analysis.m"
    {
#line 1033 "det_analysis.m"
      check_hlds__det_analysis__CalleeModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__det_analysis__CalleePredInfo_22);
    }
#line 1034 "det_analysis.m"
    {
#line 1034 "det_analysis.m"
      check_hlds__det_analysis__CalleeName_26 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_analysis__CalleePredInfo_22);
    }
#line 1035 "det_analysis.m"
    {
#line 1035 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__simplify__format_call__is_format_call_3_p_0(check_hlds__det_analysis__CalleeModuleName_25, check_hlds__det_analysis__CalleeName_26, check_hlds__det_analysis__Args_15);
    }
#line 1037 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1036 "det_analysis.m"
      {
#line 1036 "det_analysis.m"
        check_hlds__det_util__det_info_set_has_format_call_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41);
      }
#line 1037 "det_analysis.m"
    else
#line 1036 "det_analysis.m"
      check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39;
#line 1043 "det_analysis.m"
    {
#line 1043 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism0_23, &check_hlds__det_analysis__CanFail_27, &check_hlds__det_analysis__NumSolns_28);
    }
#line 1045 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns_28 == (MR_Integer) 2);
#line 1045 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1046 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_17 == (MR_Integer) 0);
#line 1078 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1054 "det_analysis.m"
      {
#line 1054 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__ProcIdPrime_29;
#line 1841 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_81;
#line 1841 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredTable_82;
#line 1841 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredInfo_83;
#line 1841 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcTable_84;
#line 1841 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcList_85;
#line 1844 "det_analysis.m"
        MR_Box check_hlds__det_analysis__conv0_PredInfo_83;

#line 1842 "det_analysis.m"
        {
#line 1842 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, &check_hlds__det_analysis__ModuleInfo_81);
        }
#line 1843 "det_analysis.m"
        {
#line 1843 "det_analysis.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__ModuleInfo_81, &check_hlds__det_analysis__PredTable_82);
        }
#line 1844 "det_analysis.m"
        {
#line 1844 "det_analysis.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_analysis__PredTable_82, ((MR_Box) (check_hlds__det_analysis__PredId_12)), &check_hlds__det_analysis__conv0_PredInfo_83);
        }
#line 1844 "det_analysis.m"
        check_hlds__det_analysis__PredInfo_83 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo_83);
#line 1845 "det_analysis.m"
        {
#line 1845 "det_analysis.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_analysis__PredInfo_83, &check_hlds__det_analysis__ProcTable_84);
        }
#line 1846 "det_analysis.m"
        {
#line 1846 "det_analysis.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_analysis__ProcTable_84, &check_hlds__det_analysis__ProcList_85);
        }
#line 1847 "det_analysis.m"
        {
#line 1847 "det_analysis.m"
          check_hlds__det_analysis__succeeded = check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(check_hlds__det_analysis__ProcList_85, check_hlds__det_analysis__ModuleInfo_81, check_hlds__det_analysis__PredInfo_83, check_hlds__det_analysis__ProcId0_13, &check_hlds__det_analysis__ProcIdPrime_29);
        }
#line 1054 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1052 "det_analysis.m"
          {
#line 1052 "det_analysis.m"
            *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcIdPrime_29;
#line 1053 "det_analysis.m"
            {
#line 1053 "det_analysis.m"
              parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, (MR_Integer) 3);
            }
#line 1053 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;
#line 1052 "det_analysis.m"
          }
#line 1054 "det_analysis.m"
        else
#line 1055 "det_analysis.m"
          {
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_74_74;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__GoalContext_30;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcInfo_31;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_32;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredPieces_33;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__FirstPieces_34;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ContextMsgs_35;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_36;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_48_48;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_49_49;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_52_52;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_53_53;
#line 1055 "det_analysis.m"
            MR_String check_hlds__det_analysis__V_54_54;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_63_63;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_64_64;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_65_65;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_66_66;
#line 1055 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_67_67;

#line 1055 "det_analysis.m"
            {
#line 1055 "det_analysis.m"
              check_hlds__det_analysis__GoalContext_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1056 "det_analysis.m"
            {
#line 1056 "det_analysis.m"
              check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, &check_hlds__det_analysis__ProcInfo_31);
            }
#line 1057 "det_analysis.m"
            {
#line 1057 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_31, &check_hlds__det_analysis__VarSet_32);
            }
#line 1058 "det_analysis.m"
            {
#line 1058 "det_analysis.m"
              check_hlds__det_analysis__PredPieces_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_analysis__ModuleInfo_24, (MR_Integer) 0, check_hlds__det_analysis__PredId_12);
            }
#line 7965 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1062 "det_analysis.m"
            {
#line 1062 "det_analysis.m"
              check_hlds__det_analysis__V_54_54 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__Detism0_23);
            }
#line 1062 "det_analysis.m"
            {
#line 1062 "det_analysis.m"
              check_hlds__det_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_53_53, 0) = ((MR_Box) (check_hlds__det_analysis__V_54_54));
#line 1062 "det_analysis.m"
            }
#line 1062 "det_analysis.m"
            {
#line 1062 "det_analysis.m"
              check_hlds__det_analysis__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_52_52, 0) = ((MR_Box) (check_hlds__det_analysis__V_53_53));
#line 1062 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1062 "det_analysis.m"
            }
#line 1061 "det_analysis.m"
            {
#line 1061 "det_analysis.m"
              check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[103])));
#line 1061 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 1) = ((MR_Box) (check_hlds__det_analysis__V_52_52));
#line 1061 "det_analysis.m"
            }
#line 1060 "det_analysis.m"
            {
#line 1060 "det_analysis.m"
              check_hlds__det_analysis__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_74_74, check_hlds__det_analysis__PredPieces_33, check_hlds__det_analysis__V_49_49);
            }
#line 1060 "det_analysis.m"
            {
#line 1060 "det_analysis.m"
              check_hlds__det_analysis__FirstPieces_34 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_74_74, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[102]), check_hlds__det_analysis__V_48_48);
            }
#line 1065 "det_analysis.m"
            {
#line 1065 "det_analysis.m"
              check_hlds__det_analysis__ContextMsgs_35 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_24, check_hlds__det_analysis__VarSet_32, check_hlds__det_analysis__RightFailingContexts_18);
            }
#line 1068 "det_analysis.m"
            {
#line 1068 "det_analysis.m"
              check_hlds__det_analysis__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_67_67, 0) = ((MR_Box) (check_hlds__det_analysis__FirstPieces_34));
#line 1068 "det_analysis.m"
            }
#line 1068 "det_analysis.m"
            {
#line 1068 "det_analysis.m"
              check_hlds__det_analysis__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_66_66, 0) = ((MR_Box) (check_hlds__det_analysis__V_67_67));
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1068 "det_analysis.m"
            }
#line 1068 "det_analysis.m"
            {
#line 1068 "det_analysis.m"
              check_hlds__det_analysis__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_65_65, 0) = ((MR_Box) (check_hlds__det_analysis__GoalContext_30));
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_65_65, 1) = ((MR_Box) (check_hlds__det_analysis__V_66_66));
#line 1068 "det_analysis.m"
            }
#line 1068 "det_analysis.m"
            {
#line 1068 "det_analysis.m"
              check_hlds__det_analysis__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_64_64, 0) = ((MR_Box) (check_hlds__det_analysis__V_65_65));
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1068 "det_analysis.m"
            }
#line 1068 "det_analysis.m"
            {
#line 1068 "det_analysis.m"
              check_hlds__det_analysis__V_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_64_64, check_hlds__det_analysis__ContextMsgs_35);
            }
#line 1067 "det_analysis.m"
            {
#line 1067 "det_analysis.m"
              check_hlds__det_analysis__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 2) = ((MR_Box) (check_hlds__det_analysis__V_63_63));
#line 1067 "det_analysis.m"
            }
#line 1070 "det_analysis.m"
            {
#line 1070 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_36, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40);
            }
#line 1072 "det_analysis.m"
            *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcId0_13;
#line 1076 "det_analysis.m"
            {
#line 1076 "det_analysis.m"
              parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, (MR_Integer) 3);
            }
#line 1055 "det_analysis.m"
          }
#line 1054 "det_analysis.m"
      }
#line 1078 "det_analysis.m"
    else
#line 1079 "det_analysis.m"
      {
#line 1079 "det_analysis.m"
        *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcId0_13;
#line 1080 "det_analysis.m"
        *check_hlds__det_analysis__Detism_19 = check_hlds__det_analysis__Detism0_23;
#line 1080 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;
#line 1079 "det_analysis.m"
      }
#line 1087 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_27 == (MR_Integer) 0))
#line 1083 "det_analysis.m"
      {
#line 1083 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_37;
#line 1083 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_38;
#line 1083 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_72_72;

#line 1084 "det_analysis.m"
        {
#line 1084 "det_analysis.m"
          check_hlds__det_analysis__Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1085 "det_analysis.m"
        {
#line 1085 "det_analysis.m"
          check_hlds__det_analysis__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1085 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 1) = ((MR_Box) (check_hlds__det_analysis__PredId_12));
#line 1085 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 2) = ((MR_Box) (*check_hlds__det_analysis__ProcId_14));
#line 1085 "det_analysis.m"
        }
#line 1085 "det_analysis.m"
        {
#line 1085 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_38, 0) = ((MR_Box) (check_hlds__det_analysis__Context_37));
#line 1085 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_38, 1) = ((MR_Box) (check_hlds__det_analysis__V_72_72));
#line 1085 "det_analysis.m"
        }
#line 1086 "det_analysis.m"
        {
#line 1086 "det_analysis.m"
          MR_Word base;
#line 1086 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 1086 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_38));
#line 1086 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "det_analysis.m"
        }
#line 1083 "det_analysis.m"
      }
#line 1087 "det_analysis.m"
    else
#line 1089 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1022 "det_analysis.m"
  }
#line 1016 "det_analysis.m"
}

#line 970 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 970 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__9_9,
#line 970 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_10,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11,
#line 970 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12,
#line 970 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13,
#line 970 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14)
#line 970 "det_analysis.m"
{
#line 978 "det_analysis.m"
  {
#line 978 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 978 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 978 "det_analysis.m"
      {
#line 976 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 979 "det_analysis.m"
        {
#line 979 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_10, check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__HeadVar__9_9);
        }
#line 978 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13;
#line 978 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12 = check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11;
#line 978 "det_analysis.m"
      }
#line 978 "det_analysis.m"
    else
#line 983 "det_analysis.m"
      {
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Case0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Cases0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Case_31;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Cases_32;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 0)));
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__OtherConsIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 1)));
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 2)));
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo0_46;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarTypes_47;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarType_48;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_49;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_50;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_52;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_53;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_54;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_55;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_56;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74;
#line 983 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75;

#line 988 "det_analysis.m"
        {
#line 988 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__ModuleInfo0_46);
        }
#line 989 "det_analysis.m"
        {
#line 989 "det_analysis.m"
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__VarTypes_47);
        }
#line 990 "det_analysis.m"
        {
#line 990 "det_analysis.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_analysis__VarTypes_47, check_hlds__det_analysis__HeadVar__3_3, &check_hlds__det_analysis__VarType_48);
        }
#line 991 "det_analysis.m"
        {
#line 991 "det_analysis.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__VarType_48, check_hlds__det_analysis__MainConsId_43, check_hlds__det_analysis__OtherConsIds_44, check_hlds__det_analysis__HeadVar__4_4, &check_hlds__det_analysis__InstMap1_49, check_hlds__det_analysis__ModuleInfo0_46, &check_hlds__det_analysis__ModuleInfo_50);
        }
#line 993 "det_analysis.m"
        {
#line 993 "det_analysis.m"
          check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_analysis__ModuleInfo_50, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63);
        }
#line 1001 "det_analysis.m"
        {
#line 1001 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_45, &check_hlds__det_analysis__Goal_52, check_hlds__det_analysis__InstMap1_49, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__HeadVar__7_7, &check_hlds__det_analysis__FirstDetism_53, &check_hlds__det_analysis__GoalFailingContexts_54, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72);
        }
#line 1004 "det_analysis.m"
        {
#line 1004 "det_analysis.m"
          check_hlds__det_analysis__Case_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 0) = ((MR_Box) (check_hlds__det_analysis__MainConsId_43));
#line 1004 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 1) = ((MR_Box) (check_hlds__det_analysis__OtherConsIds_44));
#line 1004 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 2) = ((MR_Box) (check_hlds__det_analysis__Goal_52));
#line 1004 "det_analysis.m"
        }
#line 1005 "det_analysis.m"
        {
#line 1005 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_53, &check_hlds__det_analysis__FirstCanFail_55, &check_hlds__det_analysis__FirstMaxSolns_56);
        }
#line 1006 "det_analysis.m"
        {
#line 1006 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__FirstCanFail_55, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73);
        }
#line 1007 "det_analysis.m"
        {
#line 1007 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__HeadVar__9_9, check_hlds__det_analysis__FirstMaxSolns_56, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74);
        }
#line 1008 "det_analysis.m"
        {
#line 1008 "det_analysis.m"
          check_hlds__det_analysis__det_infer_switch_cases_14_p_0(check_hlds__det_analysis__Cases0_30, &check_hlds__det_analysis__Cases_32, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74, check_hlds__det_analysis__Detism_10, check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11, &check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14);
        }
#line 980 "det_analysis.m"
        {
#line 980 "det_analysis.m"
          MR_Word base;
#line 980 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 980 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Case_31));
#line 980 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Cases_32));
#line 980 "det_analysis.m"
        }
#line 1012 "det_analysis.m"
        {
#line 1012 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_54, check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75);
        }
#line 983 "det_analysis.m"
      }
#line 978 "det_analysis.m"
  }
#line 970 "det_analysis.m"
}

#line 921 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_14,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SwitchCanFail_15,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cases0_16,
#line 921 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cases_17,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_19,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_20,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_21,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22,
#line 921 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 921 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 921 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37,
#line 921 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38)
#line 921 "det_analysis.m"
{
#line 930 "det_analysis.m"
  {
#line 930 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesDetism_26;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts0_27;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesCanFail_28;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesSolns_29;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__SwitchSolnContext_30;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__SwitchSolns_32;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_33;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_34;
#line 930 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42;

#line 936 "det_analysis.m"
    {
#line 936 "det_analysis.m"
      check_hlds__det_analysis__det_infer_switch_cases_14_p_0(check_hlds__det_analysis__Cases0_16, check_hlds__det_analysis__Cases_17, check_hlds__det_analysis__Var_14, check_hlds__det_analysis__InstMap0_19, check_hlds__det_analysis__SolnContext_20, check_hlds__det_analysis__RightFailingContexts_21, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22, (MR_Integer) 1, (MR_Integer) 0, &check_hlds__det_analysis__CasesDetism_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__GoalFailingContexts0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42);
    }
#line 940 "det_analysis.m"
    {
#line 940 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CasesDetism_26, &check_hlds__det_analysis__CasesCanFail_28, &check_hlds__det_analysis__CasesSolns_29);
    }
#line 945 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CasesCanFail_28 == (MR_Integer) 1);
#line 945 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 946 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_20 == (MR_Integer) 1);
#line 949 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 948 "det_analysis.m"
      check_hlds__det_analysis__SwitchSolnContext_30 = (MR_Integer) 1;
#line 949 "det_analysis.m"
    else
#line 950 "det_analysis.m"
      check_hlds__det_analysis__SwitchSolnContext_30 = (MR_Integer) 0;
#line 953 "det_analysis.m"
    {
#line 953 "det_analysis.m"
      check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(check_hlds__det_analysis__Var_14, (MR_Integer) 1, check_hlds__det_analysis__SwitchCanFail_15, check_hlds__det_analysis__SwitchSolnContext_30, check_hlds__det_analysis__GoalFailingContexts0_27, check_hlds__det_analysis__RightFailingContexts_21, check_hlds__det_analysis__GoalInfo_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__SwitchSolns_32, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38);
    }
#line 956 "det_analysis.m"
    {
#line 956 "det_analysis.m"
      parse_tree__prog_data__det_conjunction_canfail_3_p_0(check_hlds__det_analysis__SwitchCanFail_15, check_hlds__det_analysis__CasesCanFail_28, &check_hlds__det_analysis__CanFail_33);
    }
#line 957 "det_analysis.m"
    {
#line 957 "det_analysis.m"
      parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__SwitchSolns_32, check_hlds__det_analysis__CasesSolns_29, &check_hlds__det_analysis__NumSolns_34);
    }
#line 958 "det_analysis.m"
    {
#line 958 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_23, check_hlds__det_analysis__CanFail_33, check_hlds__det_analysis__NumSolns_34);
    }
#line 965 "det_analysis.m"
    if ((check_hlds__det_analysis__SwitchCanFail_15 == (MR_Integer) 0))
#line 960 "det_analysis.m"
      {
#line 960 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SwitchContext_35;
#line 960 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_36;
#line 960 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_45_45;

#line 961 "det_analysis.m"
        {
#line 961 "det_analysis.m"
          check_hlds__det_analysis__SwitchContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
        }
#line 963 "det_analysis.m"
        {
#line 963 "det_analysis.m"
          check_hlds__det_analysis__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 963 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_45_45, 0) = ((MR_Box) (check_hlds__det_analysis__Var_14));
#line 963 "det_analysis.m"
        }
#line 962 "det_analysis.m"
        {
#line 962 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 962 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_36, 0) = ((MR_Box) (check_hlds__det_analysis__SwitchContext_35));
#line 962 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_36, 1) = ((MR_Box) (check_hlds__det_analysis__V_45_45));
#line 962 "det_analysis.m"
        }
#line 964 "det_analysis.m"
        {
#line 964 "det_analysis.m"
          MR_Word base;
#line 964 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 964 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_36));
#line 964 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts0_27));
#line 964 "det_analysis.m"
        }
#line 960 "det_analysis.m"
      }
#line 965 "det_analysis.m"
    else
#line 967 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_24 = check_hlds__det_analysis__GoalFailingContexts0_27;
#line 930 "det_analysis.m"
  }
#line 921 "det_analysis.m"
}

#line 865 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_9,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10,
#line 865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11,
#line 865 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12,
#line 865 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13)
#line 865 "det_analysis.m"
{
#line 873 "det_analysis.m"
  {
#line 873 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 873 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "det_analysis.m"
      {
#line 871 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 874 "det_analysis.m"
        {
#line 874 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_9, check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__HeadVar__8_8);
        }
#line 873 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12;
#line 873 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11 = check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10;
#line 873 "det_analysis.m"
      }
#line 873 "det_analysis.m"
    else
#line 877 "det_analysis.m"
      {
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_29;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_30;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_40;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_41;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_42;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_43;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalInfo_45;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__AdjFirstMaxSolns_46;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57;
#line 877 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58;
#line 882 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_44_44;
#line 895 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_54_54;

#line 878 "det_analysis.m"
        {
#line 878 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_27, &check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__FirstDetism_40, &check_hlds__det_analysis__GoalFailingContexts_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53);
        }
#line 881 "det_analysis.m"
        {
#line 881 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_40, &check_hlds__det_analysis__FirstCanFail_42, &check_hlds__det_analysis__FirstMaxSolns_43);
        }
#line 882 "det_analysis.m"
        check_hlds__det_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal_29, (MR_Integer) 0)));
#line 882 "det_analysis.m"
        check_hlds__det_analysis__GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal_29, (MR_Integer) 1)));
#line 895 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__8_8 == (MR_Integer) 0);
#line 895 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 895 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 895 "det_analysis.m"
          {
#line 896 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__FirstMaxSolns_43 == (MR_Integer) 0);
#line 895 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 895 "det_analysis.m"
              {
#line 897 "det_analysis.m"
                check_hlds__det_analysis__V_54_54 = (MR_Integer) 6;
#line 897 "det_analysis.m"
                {
#line 897 "det_analysis.m"
                  check_hlds__det_analysis__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__det_analysis__GoalInfo_45, check_hlds__det_analysis__V_54_54);
                }
#line 895 "det_analysis.m"
              }
#line 895 "det_analysis.m"
          }
#line 900 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 899 "det_analysis.m"
          check_hlds__det_analysis__AdjFirstMaxSolns_46 = (MR_Integer) 1;
#line 900 "det_analysis.m"
        else
#line 901 "det_analysis.m"
          check_hlds__det_analysis__AdjFirstMaxSolns_46 = check_hlds__det_analysis__FirstMaxSolns_43;
#line 903 "det_analysis.m"
        {
#line 903 "det_analysis.m"
          parse_tree__prog_data__det_disjunction_canfail_3_p_0(check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__FirstCanFail_42, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55);
        }
#line 904 "det_analysis.m"
        {
#line 904 "det_analysis.m"
          parse_tree__prog_data__det_disjunction_maxsoln_3_p_0(check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__AdjFirstMaxSolns_46, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56);
        }
#line 907 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__4_4 == (MR_Integer) 1);
#line 907 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 908 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56 == (MR_Integer) 3);
#line 911 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 910 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57 = (MR_Integer) 2;
#line 911 "det_analysis.m"
        else
#line 910 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57 = check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56;
#line 914 "det_analysis.m"
        {
#line 914 "det_analysis.m"
          check_hlds__det_analysis__det_infer_disj_goals_13_p_0(check_hlds__det_analysis__Goals0_28, &check_hlds__det_analysis__Goals_30, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57, check_hlds__det_analysis__Detism_9, check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13);
        }
#line 875 "det_analysis.m"
        {
#line 875 "det_analysis.m"
          MR_Word base;
#line 875 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 875 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_29));
#line 875 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_30));
#line 875 "det_analysis.m"
        }
#line 917 "det_analysis.m"
        {
#line 917 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_41, check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58);
        }
#line 877 "det_analysis.m"
      }
#line 873 "det_analysis.m"
  }
#line 865 "det_analysis.m"
}

#line 842 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 842 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 842 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 842 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 842 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
#line 842 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28)
#line 842 "det_analysis.m"
{
#line 850 "det_analysis.m"
  {
#line 850 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 850 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts0_22;

#line 851 "det_analysis.m"
    {
#line 851 "det_analysis.m"
      check_hlds__det_analysis__det_infer_disj_goals_13_p_0(check_hlds__det_analysis__Goals0_12, check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, (MR_Integer) 0, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__GoalFailingContexts0_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);
    }
#line 860 "det_analysis.m"
    if ((*check_hlds__det_analysis__Goals_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 856 "det_analysis.m"
      {
#line 856 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_23;
#line 856 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_24;

#line 857 "det_analysis.m"
        {
#line 857 "det_analysis.m"
          check_hlds__det_analysis__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_14);
        }
#line 858 "det_analysis.m"
        {
#line 858 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 858 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_24, 0) = ((MR_Box) (check_hlds__det_analysis__Context_23));
#line 858 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 858 "det_analysis.m"
        }
#line 859 "det_analysis.m"
        {
#line 859 "det_analysis.m"
          MR_Word base;
#line 859 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 859 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_24));
#line 859 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts0_22));
#line 859 "det_analysis.m"
        }
#line 856 "det_analysis.m"
      }
#line 860 "det_analysis.m"
    else
#line 862 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_20 = check_hlds__det_analysis__GoalFailingContexts0_22;
#line 850 "det_analysis.m"
  }
#line 842 "det_analysis.m"
}

#line 815 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 815 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 815 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 815 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 815 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 815 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11)
#line 815 "det_analysis.m"
{
#line 821 "det_analysis.m"
  {
#line 821 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 821 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "det_analysis.m"
      {
#line 821 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 823 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__7_7 = (MR_Integer) 0;
#line 823 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10;
#line 823 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8;
#line 821 "det_analysis.m"
      }
#line 821 "det_analysis.m"
    else
#line 826 "det_analysis.m"
      {
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_24;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_25;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadDetism_33;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_34;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadCanFail_35;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadMaxSolns_36;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailDetism_37;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailCanFail_38;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailMaxSolns_39;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns_40;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_41;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46;
#line 826 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47;

#line 827 "det_analysis.m"
        {
#line 827 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_22, &check_hlds__det_analysis__Goal_24, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__HeadDetism_33, &check_hlds__det_analysis__GoalFailingContexts_34, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46);
        }
#line 830 "det_analysis.m"
        {
#line 830 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__HeadDetism_33, &check_hlds__det_analysis__HeadCanFail_35, &check_hlds__det_analysis__HeadMaxSolns_36);
        }
#line 832 "det_analysis.m"
        {
#line 832 "det_analysis.m"
          check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_25, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__TailDetism_37, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8, &check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);
        }
#line 824 "det_analysis.m"
        {
#line 824 "det_analysis.m"
          MR_Word base;
#line 824 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 824 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_24));
#line 824 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_25));
#line 824 "det_analysis.m"
        }
#line 835 "det_analysis.m"
        {
#line 835 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__TailDetism_37, &check_hlds__det_analysis__TailCanFail_38, &check_hlds__det_analysis__TailMaxSolns_39);
        }
#line 837 "det_analysis.m"
        {
#line 837 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__HeadMaxSolns_36, check_hlds__det_analysis__TailMaxSolns_39, &check_hlds__det_analysis__MaxSolns_40);
        }
#line 838 "det_analysis.m"
        {
#line 838 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_canfail_3_p_0(check_hlds__det_analysis__HeadCanFail_35, check_hlds__det_analysis__TailCanFail_38, &check_hlds__det_analysis__CanFail_41);
        }
#line 839 "det_analysis.m"
        {
#line 839 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__CanFail_41, check_hlds__det_analysis__MaxSolns_40);
        }
#line 840 "det_analysis.m"
        {
#line 840 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_34, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47);
        }
#line 826 "det_analysis.m"
      }
#line 821 "det_analysis.m"
  }
#line 815 "det_analysis.m"
}

#line 767 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 767 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 767 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 767 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 767 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32,
#line 767 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33)
#line 767 "det_analysis.m"
{
#line 775 "det_analysis.m"
  {
#line 775 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 775 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35;
#line 780 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_22;
#line 780 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Solns_23;

#line 776 "det_analysis.m"
    {
#line 776 "det_analysis.m"
      check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(check_hlds__det_analysis__Goals0_12, check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35);
    }
#line 780 "det_analysis.m"
    {
#line 780 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_19, &check_hlds__det_analysis__CanFail_22, &check_hlds__det_analysis__Solns_23);
    }
#line 781 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CanFail_22 == (MR_Integer) 1);
#line 780 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 780 "det_analysis.m"
      {
#line 782 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Solns_23 == (MR_Integer) 3);
#line 782 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 780 "det_analysis.m"
      }
#line 785 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 782 "det_analysis.m"
      *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35;
#line 785 "det_analysis.m"
    else
#line 786 "det_analysis.m"
      {
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_24;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSoln_25;
#line 786 "det_analysis.m"
        MR_String check_hlds__det_analysis__First_26;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_28;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalMsgs_29;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SortedGoalMsgs_30;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_31;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_41_41;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_50_50;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_51_51;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_52_52;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_53_53;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_54_54;
#line 786 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_58;

#line 786 "det_analysis.m"
        {
#line 786 "det_analysis.m"
          check_hlds__det_analysis__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_14);
        }
#line 787 "det_analysis.m"
        {
#line 787 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_19, &check_hlds__det_analysis__CanFail_58, &check_hlds__det_analysis__MaxSoln_25);
        }
#line 791 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_58 == (MR_Integer) 0))
#line 790 "det_analysis.m"
          check_hlds__det_analysis__First_26 = (MR_String) "Error: parallel conjunct may fail.";
#line 791 "det_analysis.m"
        else
#line 796 "det_analysis.m"
          if ((check_hlds__det_analysis__MaxSoln_25 == (MR_Integer) 3))
#line 795 "det_analysis.m"
            check_hlds__det_analysis__First_26 = (MR_String) "Error: parallel conjunct may have multiple solutions.";
#line 796 "det_analysis.m"
          else
#line 800 "det_analysis.m"
            {
#line 801 "det_analysis.m"
              {
#line 801 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_par_conj\'/11", (MR_String) "strange determinism error for parallel conjunction");
#line 801 "det_analysis.m"
                return;
              }
#line 800 "det_analysis.m"
            }
#line 807 "det_analysis.m"
        {
#line 807 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 807 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_41_41, 1) = ((MR_Box) (check_hlds__det_analysis__First_26));
#line 807 "det_analysis.m"
        }
#line 807 "det_analysis.m"
        {
#line 807 "det_analysis.m"
          check_hlds__det_analysis__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_28, 0) = ((MR_Box) (check_hlds__det_analysis__V_41_41));
#line 807 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[100])));
#line 807 "det_analysis.m"
        }
#line 808 "det_analysis.m"
        {
#line 808 "det_analysis.m"
          check_hlds__det_report__det_diagnose_conj_7_p_0(*check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47, &check_hlds__det_analysis__GoalMsgs_29);
        }
#line 809 "det_analysis.m"
        {
#line 809 "det_analysis.m"
          parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_analysis__GoalMsgs_29, &check_hlds__det_analysis__SortedGoalMsgs_30);
        }
#line 811 "det_analysis.m"
        {
#line 811 "det_analysis.m"
          check_hlds__det_analysis__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 811 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_54_54, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_28));
#line 811 "det_analysis.m"
        }
#line 811 "det_analysis.m"
        {
#line 811 "det_analysis.m"
          check_hlds__det_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_53_53, 0) = ((MR_Box) (check_hlds__det_analysis__V_54_54));
#line 811 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "det_analysis.m"
        }
#line 811 "det_analysis.m"
        {
#line 811 "det_analysis.m"
          check_hlds__det_analysis__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 811 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_52_52, 0) = ((MR_Box) (check_hlds__det_analysis__Context_24));
#line 811 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_52_52, 1) = ((MR_Box) (check_hlds__det_analysis__V_53_53));
#line 811 "det_analysis.m"
        }
#line 811 "det_analysis.m"
        {
#line 811 "det_analysis.m"
          check_hlds__det_analysis__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_51_51, 0) = ((MR_Box) (check_hlds__det_analysis__V_52_52));
#line 811 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "det_analysis.m"
        }
#line 811 "det_analysis.m"
        {
#line 811 "det_analysis.m"
          check_hlds__det_analysis__V_50_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_51_51, check_hlds__det_analysis__SortedGoalMsgs_30);
        }
#line 810 "det_analysis.m"
        {
#line 810 "det_analysis.m"
          check_hlds__det_analysis__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 810 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 2) = ((MR_Box) (check_hlds__det_analysis__V_50_50));
#line 810 "det_analysis.m"
        }
#line 812 "det_analysis.m"
        {
#line 812 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_31, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33);
#line 812 "det_analysis.m"
          return;
        }
#line 786 "det_analysis.m"
      }
#line 775 "det_analysis.m"
  }
#line 767 "det_analysis.m"
}

#line 718 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 718 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 718 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 718 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 718 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 718 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11)
#line 718 "det_analysis.m"
{
#line 724 "det_analysis.m"
  {
#line 724 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 724 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "det_analysis.m"
      {
#line 724 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 725 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__7_7 = (MR_Integer) 0;
#line 726 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10;
#line 726 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8;
#line 724 "det_analysis.m"
      }
#line 724 "det_analysis.m"
    else
#line 729 "det_analysis.m"
      {
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TypeCtorInfo_49_49;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_24;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_25;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_33;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailDetism_34;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailCanFail_35;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadSolnContext_37;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadDetism_38;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_39;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45;
#line 729 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_46_46;
#line 742 "det_analysis.m"
        MR_Word check_hlds__det_analysis___TailMaxSolns_36;

#line 738 "det_analysis.m"
        {
#line 738 "det_analysis.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_analysis__Goal0_22, check_hlds__det_analysis__HeadVar__3_3, &check_hlds__det_analysis__InstMap1_33);
        }
#line 739 "det_analysis.m"
        {
#line 739 "det_analysis.m"
          check_hlds__det_analysis__det_infer_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_25, check_hlds__det_analysis__InstMap1_33, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__TailDetism_34, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8, &check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45);
        }
#line 742 "det_analysis.m"
        {
#line 742 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__TailDetism_34, &check_hlds__det_analysis__TailCanFail_35, &check_hlds__det_analysis___TailMaxSolns_36);
        }
#line 750 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__TailCanFail_35 == (MR_Integer) 1);
#line 750 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 751 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__4_4 == (MR_Integer) 1);
#line 754 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 753 "det_analysis.m"
          check_hlds__det_analysis__HeadSolnContext_37 = (MR_Integer) 1;
#line 754 "det_analysis.m"
        else
#line 755 "det_analysis.m"
          check_hlds__det_analysis__HeadSolnContext_37 = (MR_Integer) 0;
#line 9275 "check_hlds.det_analysis.c"
        check_hlds__det_analysis__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0;
#line 759 "det_analysis.m"
        {
#line 759 "det_analysis.m"
          check_hlds__det_analysis__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_49_49, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44, check_hlds__det_analysis__HeadVar__5_5);
        }
#line 758 "det_analysis.m"
        {
#line 758 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_22, &check_hlds__det_analysis__Goal_24, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadSolnContext_37, check_hlds__det_analysis__V_46_46, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__HeadDetism_38, &check_hlds__det_analysis__GoalFailingContexts_39, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);
        }
#line 727 "det_analysis.m"
        {
#line 727 "det_analysis.m"
          MR_Word base;
#line 727 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 727 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_24));
#line 727 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_25));
#line 727 "det_analysis.m"
        }
#line 764 "det_analysis.m"
        {
#line 764 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__HeadDetism_38, check_hlds__det_analysis__TailDetism_34, check_hlds__det_analysis__HeadVar__7_7);
        }
#line 765 "det_analysis.m"
        {
#line 765 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_49_49, check_hlds__det_analysis__GoalFailingContexts_39, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44);
        }
#line 729 "det_analysis.m"
      }
#line 724 "det_analysis.m"
  }
#line 718 "det_analysis.m"
}

#line 596 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalExpr0_12,
#line 596 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalExpr_13,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 596 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 596 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 596 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78,
#line 596 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79)
#line 596 "det_analysis.m"
{
#line 606 "det_analysis.m"
  {
#line 606 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 606 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 670 "det_analysis.m"
      {
#line 670 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__det_analysis__GoalExpr0_12), (MR_Integer) 0);
#line 670 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_55;

#line 671 "det_analysis.m"
        {
#line 671 "det_analysis.m"
          check_hlds__det_analysis__det_infer_not_9_p_0(check_hlds__det_analysis__Goal0_54, &check_hlds__det_analysis__Goal_55, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
        }
#line 674 "det_analysis.m"
        *check_hlds__det_analysis__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__det_analysis__Goal_55);
#line 670 "det_analysis.m"
      }
#line 606 "det_analysis.m"
    else
#line 606 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 2))))
#line 645 "det_analysis.m"
        {
#line 645 "det_analysis.m"
          MR_Word check_hlds__det_analysis__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)));
#line 645 "det_analysis.m"
          MR_Integer check_hlds__det_analysis__ProcId0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 645 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 645 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Builtin_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 645 "det_analysis.m"
          MR_Word check_hlds__det_analysis__UnifyContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 645 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 645 "det_analysis.m"
          MR_Integer check_hlds__det_analysis__ProcId_36;

#line 646 "det_analysis.m"
          {
#line 646 "det_analysis.m"
            check_hlds__det_analysis__det_infer_call_11_p_0(check_hlds__det_analysis__PredId_30, check_hlds__det_analysis__ProcId0_31, &check_hlds__det_analysis__ProcId_36, check_hlds__det_analysis__Args_32, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
          }
#line 648 "det_analysis.m"
          {
#line 648 "det_analysis.m"
            MR_Word base;
#line 648 "det_analysis.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 648 "det_analysis.m"
            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 648 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_30));
#line 648 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_36));
#line 648 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__det_analysis__Args_32));
#line 648 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__det_analysis__Builtin_33));
#line 648 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_34));
#line 648 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__det_analysis__Name_35));
#line 648 "det_analysis.m"
          }
#line 645 "det_analysis.m"
        }
#line 606 "det_analysis.m"
      else
#line 606 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 1))))
#line 657 "det_analysis.m"
          {
#line 657 "det_analysis.m"
            MR_Word check_hlds__det_analysis__LHS_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)));
#line 657 "det_analysis.m"
            MR_Word check_hlds__det_analysis__RHS0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 657 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Mode_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 657 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Unify_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 657 "det_analysis.m"
            MR_Word check_hlds__det_analysis__RHS_46;
#line 657 "det_analysis.m"
            MR_Word check_hlds__det_analysis__UnifyContext_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));

#line 658 "det_analysis.m"
            {
#line 658 "det_analysis.m"
              check_hlds__det_analysis__det_infer_unify_13_p_0(check_hlds__det_analysis__LHS_42, check_hlds__det_analysis__RHS0_43, check_hlds__det_analysis__Unify_45, check_hlds__det_analysis__UnifyContext_110, &check_hlds__det_analysis__RHS_46, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
            }
#line 661 "det_analysis.m"
            {
#line 661 "det_analysis.m"
              MR_Word base;
#line 661 "det_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 661 "det_analysis.m"
              *check_hlds__det_analysis__GoalExpr_13 = base;
#line 661 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__LHS_42));
#line 661 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__RHS_46));
#line 661 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__det_analysis__Mode_44));
#line 661 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__det_analysis__Unify_45));
#line 661 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_110));
#line 661 "det_analysis.m"
            }
#line 657 "det_analysis.m"
          }
#line 606 "det_analysis.m"
        else
#line 606 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 683 "det_analysis.m"
            {
#line 683 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Attributes_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 683 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PredId_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 683 "det_analysis.m"
              MR_Integer check_hlds__det_analysis__ProcId_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 682 "det_analysis.m"
              MR_Word check_hlds__det_analysis___Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 682 "det_analysis.m"
              MR_Word check_hlds__det_analysis___ExtraArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 682 "det_analysis.m"
              MR_Word check_hlds__det_analysis___MaybeTraceRuntimeCond_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 6)));
#line 682 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PragmaCode_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 7)));

#line 684 "det_analysis.m"
              {
#line 684 "det_analysis.m"
                check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(check_hlds__det_analysis__Attributes_57, check_hlds__det_analysis__PredId_113, check_hlds__det_analysis__ProcId_114, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
#line 687 "det_analysis.m"
              *check_hlds__det_analysis__GoalExpr_13 = check_hlds__det_analysis__GoalExpr0_12;
#line 683 "det_analysis.m"
            }
#line 606 "det_analysis.m"
          else
#line 606 "det_analysis.m"
            if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 606 "det_analysis.m"
              {
#line 606 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ConjType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 606 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 606 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Goals_24;

#line 614 "det_analysis.m"
                if ((check_hlds__det_analysis__ConjType_22 == (MR_Integer) 1))
#line 616 "det_analysis.m"
                  {
#line 616 "det_analysis.m"
                    check_hlds__det_analysis__det_infer_par_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_24, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                  }
#line 614 "det_analysis.m"
                else
#line 608 "det_analysis.m"
                  {
#line 611 "det_analysis.m"
                    {
#line 611 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_24, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
#line 608 "det_analysis.m"
                  }
#line 620 "det_analysis.m"
                {
#line 620 "det_analysis.m"
                  MR_Word base;
#line 620 "det_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 620 "det_analysis.m"
                  *check_hlds__det_analysis__GoalExpr_13 = base;
#line 620 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 620 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__ConjType_22));
#line 620 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Goals_24));
#line 620 "det_analysis.m"
                }
#line 606 "det_analysis.m"
              }
#line 606 "det_analysis.m"
            else
#line 606 "det_analysis.m"
              if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 622 "det_analysis.m"
                {
#line 622 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Goals0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 622 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Goals_109;

#line 623 "det_analysis.m"
                  {
#line 623 "det_analysis.m"
                    check_hlds__det_analysis__det_infer_disj_11_p_0(check_hlds__det_analysis__Goals0_108, &check_hlds__det_analysis__Goals_109, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                  }
#line 626 "det_analysis.m"
                  {
#line 626 "det_analysis.m"
                    MR_Word base;
#line 626 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "det_analysis.m"
                    *check_hlds__det_analysis__GoalExpr_13 = base;
#line 626 "det_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 626 "det_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_109));
#line 626 "det_analysis.m"
                  }
#line 622 "det_analysis.m"
                }
#line 606 "det_analysis.m"
              else
#line 606 "det_analysis.m"
                if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 652 "det_analysis.m"
                  {
#line 652 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__GenericCall_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 652 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__CallDetism_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 651 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___ArgVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 651 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___Modes_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 651 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___MaybArgRegs_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));

#line 653 "det_analysis.m"
                    {
#line 653 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_generic_call_9_p_0(check_hlds__det_analysis__GenericCall_37, check_hlds__det_analysis__CallDetism_41, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
#line 655 "det_analysis.m"
                    *check_hlds__det_analysis__GoalExpr_13 = check_hlds__det_analysis__GoalExpr0_12;
#line 652 "det_analysis.m"
                  }
#line 606 "det_analysis.m"
                else
#line 606 "det_analysis.m"
                  if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 663 "det_analysis.m"
                    {
#line 663 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 663 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 663 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 663 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 663 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Cond_51;
#line 663 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Then_52;
#line 663 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Else_53;

#line 664 "det_analysis.m"
                      {
#line 664 "det_analysis.m"
                        check_hlds__det_analysis__det_infer_if_then_else_14_p_0(check_hlds__det_analysis__Cond0_48, &check_hlds__det_analysis__Cond_51, check_hlds__det_analysis__Then0_49, &check_hlds__det_analysis__Then_52, check_hlds__det_analysis__Else0_50, &check_hlds__det_analysis__Else_53, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                      }
#line 668 "det_analysis.m"
                      {
#line 668 "det_analysis.m"
                        MR_Word base;
#line 668 "det_analysis.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 668 "det_analysis.m"
                        *check_hlds__det_analysis__GoalExpr_13 = base;
#line 668 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 668 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Vars_47));
#line 668 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Cond_51));
#line 668 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__det_analysis__Then_52));
#line 668 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__det_analysis__Else_53));
#line 668 "det_analysis.m"
                      }
#line 663 "det_analysis.m"
                    }
#line 606 "det_analysis.m"
                  else
#line 606 "det_analysis.m"
                    if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 676 "det_analysis.m"
                      {
#line 676 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 676 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Goal0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 676 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Goal_112;

#line 677 "det_analysis.m"
                        {
#line 677 "det_analysis.m"
                          check_hlds__det_analysis__det_infer_scope_12_p_0(check_hlds__det_analysis__Reason_56, check_hlds__det_analysis__Goal0_111, &check_hlds__det_analysis__Goal_112, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                        }
#line 680 "det_analysis.m"
                        {
#line 680 "det_analysis.m"
                          MR_Word base;
#line 680 "det_analysis.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 680 "det_analysis.m"
                          *check_hlds__det_analysis__GoalExpr_13 = base;
#line 680 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 680 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Reason_56));
#line 680 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Goal_112));
#line 680 "det_analysis.m"
                        }
#line 676 "det_analysis.m"
                      }
#line 606 "det_analysis.m"
                    else
#line 606 "det_analysis.m"
                      if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 689 "det_analysis.m"
                        {
#line 689 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__ShortHand0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 689 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__ShortHand_71;

#line 699 "det_analysis.m"
                          if (((MR_tag((MR_Word) check_hlds__det_analysis__ShortHand0_62)) == (MR_mktag((MR_Integer) 1))))
#line 692 "det_analysis.m"
                            {
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__GoalType_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 0)));
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Inner_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 1)));
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Outer_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 2)));
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__MainGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 4)));
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseGoals0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 5)));
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseInners_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 6)));
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__MainGoal_69;
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseGoals_70;
#line 692 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 3)));

#line 693 "det_analysis.m"
                              {
#line 693 "det_analysis.m"
                                check_hlds__det_analysis__det_infer_atomic_11_p_0(check_hlds__det_analysis__MainGoal0_66, &check_hlds__det_analysis__MainGoal_69, check_hlds__det_analysis__OrElseGoals0_67, &check_hlds__det_analysis__OrElseGoals_70, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                              }
#line 696 "det_analysis.m"
                              *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "det_analysis.m"
                              {
#line 697 "det_analysis.m"
                                check_hlds__det_analysis__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 697 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 0) = ((MR_Box) (check_hlds__det_analysis__GoalType_63));
#line 697 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 1) = ((MR_Box) (check_hlds__det_analysis__Inner_64));
#line 697 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 2) = ((MR_Box) (check_hlds__det_analysis__Outer_65));
#line 697 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 3) = ((MR_Box) (check_hlds__det_analysis__Vars_115));
#line 697 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 4) = ((MR_Box) (check_hlds__det_analysis__MainGoal_69));
#line 697 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 5) = ((MR_Box) (check_hlds__det_analysis__OrElseGoals_70));
#line 697 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 6) = ((MR_Box) (check_hlds__det_analysis__OrElseInners_68));
#line 697 "det_analysis.m"
                              }
#line 692 "det_analysis.m"
                            }
#line 699 "det_analysis.m"
                          else
#line 699 "det_analysis.m"
                            if (((MR_tag((MR_Word) check_hlds__det_analysis__ShortHand0_62)) == (MR_mktag((MR_Integer) 0))))
#line 709 "det_analysis.m"
                              {
#line 711 "det_analysis.m"
                                {
#line 711 "det_analysis.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_goal_expr\'/11", (MR_String) "bi_implication");
#line 711 "det_analysis.m"
                                  return;
                                }
#line 709 "det_analysis.m"
                              }
#line 699 "det_analysis.m"
                            else
#line 700 "det_analysis.m"
                              {
#line 700 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__MaybeIO_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 0)));
#line 700 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__ResultVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 1)));
#line 700 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__TryGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 2)));
#line 700 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__TryGoal_75;

#line 704 "det_analysis.m"
                                {
#line 704 "det_analysis.m"
                                  check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(check_hlds__det_analysis__TryGoal0_74, &check_hlds__det_analysis__TryGoal_75, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                                }
#line 707 "det_analysis.m"
                                {
#line 707 "det_analysis.m"
                                  check_hlds__det_analysis__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 707 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 0) = ((MR_Box) (check_hlds__det_analysis__MaybeIO_72));
#line 707 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 1) = ((MR_Box) (check_hlds__det_analysis__ResultVar_73));
#line 707 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 2) = ((MR_Box) (check_hlds__det_analysis__TryGoal_75));
#line 707 "det_analysis.m"
                                }
#line 700 "det_analysis.m"
                              }
#line 713 "det_analysis.m"
                          {
#line 713 "det_analysis.m"
                            MR_Word base;
#line 713 "det_analysis.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "det_analysis.m"
                            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 713 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 713 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__ShortHand_71));
#line 713 "det_analysis.m"
                          }
#line 689 "det_analysis.m"
                        }
#line 606 "det_analysis.m"
                      else
#line 628 "det_analysis.m"
                        {
#line 628 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 628 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__SwitchCanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 628 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 628 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Cases_29;

#line 634 "det_analysis.m"
                          {
#line 634 "det_analysis.m"
                            check_hlds__det_analysis__det_infer_switch_13_p_0(check_hlds__det_analysis__Var_25, check_hlds__det_analysis__SwitchCanFail_26, check_hlds__det_analysis__Cases0_27, &check_hlds__det_analysis__Cases_29, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                          }
#line 642 "det_analysis.m"
                          {
#line 642 "det_analysis.m"
                            MR_Word base;
#line 642 "det_analysis.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 642 "det_analysis.m"
                            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 642 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 642 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Var_25));
#line 642 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__SwitchCanFail_26));
#line 642 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__det_analysis__Cases_29));
#line 642 "det_analysis.m"
                          }
#line 628 "det_analysis.m"
                        }
#line 606 "det_analysis.m"
  }
#line 596 "det_analysis.m"
}

#line 551 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(
#line 551 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 551 "det_analysis.m"
{
#line 551 "det_analysis.m"
  {
#line 551 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 551 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0, 1);
#line 551 "det_analysis.m"
  }
#line 551 "det_analysis.m"
}

#line 551 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3(
#line 551 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 551 "det_analysis.m"
{
#line 551 "det_analysis.m"
  {
#line 551 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 551 "det_analysis.m"
    (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65 = ((MR_Word) (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65);
#line 551 "det_analysis.m"
    {
#line 551 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(check_hlds__det_analysis__env_ptr);
#line 551 "det_analysis.m"
      return;
    }
#line 551 "det_analysis.m"
  }
#line 551 "det_analysis.m"
}

#line 551 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(
#line 551 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 551 "det_analysis.m"
{
#line 551 "det_analysis.m"
  {
#line 551 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 551 "det_analysis.m"
    {
#line 551 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65, (MR_Integer) 0)));
#line 553 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_49_49;

#line 551 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65, (MR_Integer) 1)));
#line 552 "det_analysis.m"
      {
#line 552 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70);
      }
#line 553 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66 = (MR_Integer) 3;
#line 553 "det_analysis.m"
      {
#line 553 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48, &check_hlds__det_analysis__V_49_49, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73);
      }
#line 553 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66 == (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73);
#line 553 "det_analysis.m"
      if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 553 "det_analysis.m"
        {
#line 553 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(check_hlds__det_analysis__env_ptr);
#line 553 "det_analysis.m"
          return;
        }
#line 551 "det_analysis.m"
    }
#line 551 "det_analysis.m"
  }
#line 551 "det_analysis.m"
}

#line 551 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(
#line 551 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 551 "det_analysis.m"
{
#line 551 "det_analysis.m"
  {
#line 551 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 551 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0) == 0)
#line 551 "det_analysis.m"
      {
#line 551 "det_analysis.m"
        {
#line 551 "det_analysis.m"
          {
#line 551 "det_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45, check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3, check_hlds__det_analysis__env_ptr);
          }
#line 551 "det_analysis.m"
        }
#line 551 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 551 "det_analysis.m"
      }
#line 551 "det_analysis.m"
    else
#line 551 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 551 "det_analysis.m"
  }
#line 551 "det_analysis.m"
}

#line 452 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_12,
#line 452 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_13,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_14,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_16,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__AddPruning_18,
#line 452 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 452 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 452 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57,
#line 452 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58)
#line 452 "det_analysis.m"
{
#line 452 "det_analysis.m"
  {
#line 452 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s check_hlds__det_analysis__env;

#line 459 "det_analysis.m"
    {
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_12, (MR_Integer) 0)));
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_12, (MR_Integer) 1)));
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InstmapDelta_24;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Prune_29;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr1_30;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalDetism0_31;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalCanFail_32;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalSolns0_33;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalSolns_34;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Solns_35;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalInfo_36;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__FinalInternalSolns_44;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__FinalInternalDetism_50;
#line 459 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr_55;
#line 464 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ScopeReason_25;
#line 464 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_26_26;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CondInfo_39;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CondDetism_42;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_62_62;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_63_63;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_72_72;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_37_37;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_40_40;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_41_41;
#line 537 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_38_38;
#line 539 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_43_43;
#line 572 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_51_51;
#line 575 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_52_52;
#line 575 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_53_53;

#line 461 "det_analysis.m"
      {
#line 461 "det_analysis.m"
        check_hlds__det_analysis__InstmapDelta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo0_23);
      }
#line 464 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 464 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 464 "det_analysis.m"
        {
#line 464 "det_analysis.m"
          check_hlds__det_analysis__ScopeReason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 1)));
#line 464 "det_analysis.m"
          check_hlds__det_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 2)));
#line 474 "det_analysis.m"
          if (((MR_tag((MR_Word) check_hlds__det_analysis__ScopeReason_25)) == (MR_mktag((MR_Integer) 1))))
#line 479 "det_analysis.m"
            {
#line 479 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PromiseEqvSolnsKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 1)));
#line 479 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_59_59;
#line 479 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 0)));

#line 590 "det_analysis.m"
              if ((check_hlds__det_analysis__PromiseEqvSolnsKind_28 == (MR_Integer) 1))
#line 591 "det_analysis.m"
                check_hlds__det_analysis__V_59_59 = (MR_Integer) 0;
#line 590 "det_analysis.m"
              else
#line 590 "det_analysis.m"
                if ((check_hlds__det_analysis__PromiseEqvSolnsKind_28 == (MR_Integer) 2))
#line 592 "det_analysis.m"
                  check_hlds__det_analysis__V_59_59 = (MR_Integer) 1;
#line 590 "det_analysis.m"
                else
#line 590 "det_analysis.m"
                  check_hlds__det_analysis__V_59_59 = (MR_Integer) 1;
#line 480 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_59_59 == (MR_Integer) 1);
#line 479 "det_analysis.m"
            }
#line 474 "det_analysis.m"
          else
#line 474 "det_analysis.m"
            if (((((MR_tag((MR_Word) check_hlds__det_analysis__ScopeReason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 473 "det_analysis.m"
              {
#line 473 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 1)));

#line 473 "det_analysis.m"
                (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_60_60 == (MR_Integer) 0);
#line 473 "det_analysis.m"
              }
#line 474 "det_analysis.m"
            else
#line 474 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 464 "det_analysis.m"
        }
#line 484 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 483 "det_analysis.m"
        check_hlds__det_analysis__Prune_29 = (MR_Integer) 1;
#line 484 "det_analysis.m"
      else
#line 485 "det_analysis.m"
        check_hlds__det_analysis__Prune_29 = check_hlds__det_analysis__AddPruning_18;
#line 488 "det_analysis.m"
      {
#line 488 "det_analysis.m"
        check_hlds__det_analysis__det_infer_goal_expr_11_p_0(check_hlds__det_analysis__GoalExpr0_22, &check_hlds__det_analysis__GoalExpr1_30, check_hlds__det_analysis__GoalInfo0_23, check_hlds__det_analysis__InstMap0_14, check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56, check_hlds__det_analysis__RightFailingContexts_16, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17, &check_hlds__det_analysis__InternalDetism0_31, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58);
      }
#line 492 "det_analysis.m"
      {
#line 492 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__InternalDetism0_31, &check_hlds__det_analysis__InternalCanFail_32, &check_hlds__det_analysis__InternalSolns0_33);
      }
#line 497 "det_analysis.m"
      {
#line 497 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(check_hlds__det_analysis__InstmapDelta_24);
      }
#line 500 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 499 "det_analysis.m"
        check_hlds__det_analysis__InternalSolns_34 = (MR_Integer) 0;
#line 500 "det_analysis.m"
      else
#line 501 "det_analysis.m"
        check_hlds__det_analysis__InternalSolns_34 = check_hlds__det_analysis__InternalSolns0_33;
#line 505 "det_analysis.m"
      if ((check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 3))
#line 504 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 505 "det_analysis.m"
      else
#line 505 "det_analysis.m"
        if ((check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 2))
#line 505 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 505 "det_analysis.m"
        else
#line 505 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 506 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 507 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Prune_29 == (MR_Integer) 1);
#line 510 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 509 "det_analysis.m"
        check_hlds__det_analysis__Solns_35 = (MR_Integer) 1;
#line 510 "det_analysis.m"
      else
#line 518 "det_analysis.m"
        {
#line 514 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 3);
#line 514 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 515 "det_analysis.m"
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56 == (MR_Integer) 1);
#line 518 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 517 "det_analysis.m"
            check_hlds__det_analysis__Solns_35 = (MR_Integer) 2;
#line 518 "det_analysis.m"
          else
#line 519 "det_analysis.m"
            check_hlds__det_analysis__Solns_35 = check_hlds__det_analysis__InternalSolns_34;
#line 518 "det_analysis.m"
        }
#line 521 "det_analysis.m"
      {
#line 521 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__InternalCanFail_32, check_hlds__det_analysis__Solns_35);
      }
#line 522 "det_analysis.m"
      {
#line 522 "det_analysis.m"
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(*check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalInfo0_23, &check_hlds__det_analysis__GoalInfo_36);
      }
#line 537 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 537 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 537 "det_analysis.m"
        {
#line 537 "det_analysis.m"
          check_hlds__det_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 537 "det_analysis.m"
          check_hlds__det_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 537 "det_analysis.m"
          check_hlds__det_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 3)));
#line 537 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 4)));
#line 537 "det_analysis.m"
          check_hlds__det_analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_62_62, (MR_Integer) 0)));
#line 537 "det_analysis.m"
          check_hlds__det_analysis__CondInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_62_62, (MR_Integer) 1)));
#line 538 "det_analysis.m"
          {
#line 538 "det_analysis.m"
            check_hlds__det_analysis__CondDetism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_analysis__CondInfo_39);
          }
#line 539 "det_analysis.m"
          check_hlds__det_analysis__V_63_63 = (MR_Integer) 3;
#line 539 "det_analysis.m"
          {
#line 539 "det_analysis.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CondDetism_42, &check_hlds__det_analysis__V_43_43, &check_hlds__det_analysis__V_72_72);
          }
#line 539 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_63_63 == check_hlds__det_analysis__V_72_72);
#line 537 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 537 "det_analysis.m"
            {
#line 540 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Solns_35 == (MR_Integer) 3);
#line 540 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 537 "det_analysis.m"
            }
#line 537 "det_analysis.m"
        }
#line 543 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 542 "det_analysis.m"
        check_hlds__det_analysis__FinalInternalSolns_44 = (MR_Integer) 3;
#line 543 "det_analysis.m"
      else
#line 557 "det_analysis.m"
        {
#line 548 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_64_64;

#line 549 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Solns_35 == (MR_Integer) 0);
#line 548 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 548 "det_analysis.m"
            {
#line 548 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 548 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 548 "det_analysis.m"
                {
#line 548 "det_analysis.m"
                  check_hlds__det_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 548 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 548 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_64_64 == (MR_Integer) 0);
#line 548 "det_analysis.m"
                  if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 551 "det_analysis.m"
                    {
#line 551 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(&check_hlds__det_analysis__env);
                    }
#line 548 "det_analysis.m"
                }
#line 548 "det_analysis.m"
            }
#line 557 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 556 "det_analysis.m"
            check_hlds__det_analysis__FinalInternalSolns_44 = (MR_Integer) 3;
#line 557 "det_analysis.m"
          else
#line 558 "det_analysis.m"
            check_hlds__det_analysis__FinalInternalSolns_44 = check_hlds__det_analysis__InternalSolns_34;
#line 557 "det_analysis.m"
        }
#line 560 "det_analysis.m"
      {
#line 560 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_analysis__FinalInternalDetism_50, check_hlds__det_analysis__InternalCanFail_32, check_hlds__det_analysis__FinalInternalSolns_44);
      }
#line 566 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (*check_hlds__det_analysis__Detism_19 == check_hlds__det_analysis__FinalInternalDetism_50);
#line 566 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 566 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 566 "det_analysis.m"
        {
#line 572 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 572 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 572 "det_analysis.m"
            check_hlds__det_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 572 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 566 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 566 "det_analysis.m"
            {
#line 575 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 575 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 575 "det_analysis.m"
                {
#line 575 "det_analysis.m"
                  check_hlds__det_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 575 "det_analysis.m"
                  check_hlds__det_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 575 "det_analysis.m"
                }
#line 575 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 566 "det_analysis.m"
            }
#line 566 "det_analysis.m"
        }
#line 582 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 579 "det_analysis.m"
        {
#line 579 "det_analysis.m"
          MR_Word check_hlds__det_analysis__InnerInfo_54;
#line 579 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_69_69;

#line 579 "det_analysis.m"
          {
#line 579 "det_analysis.m"
            hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__det_analysis__FinalInternalDetism_50, check_hlds__det_analysis__GoalInfo0_23, &check_hlds__det_analysis__InnerInfo_54);
          }
#line 581 "det_analysis.m"
          {
#line 581 "det_analysis.m"
            check_hlds__det_analysis__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 581 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_69_69, 0) = ((MR_Box) (check_hlds__det_analysis__GoalExpr1_30));
#line 581 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_69_69, 1) = ((MR_Box) (check_hlds__det_analysis__InnerInfo_54));
#line 581 "det_analysis.m"
          }
#line 580 "det_analysis.m"
          {
#line 580 "det_analysis.m"
            check_hlds__det_analysis__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 580 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 580 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[98])));
#line 580 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 2) = ((MR_Box) (check_hlds__det_analysis__V_69_69));
#line 580 "det_analysis.m"
          }
#line 579 "det_analysis.m"
        }
#line 582 "det_analysis.m"
      else
#line 584 "det_analysis.m"
        check_hlds__det_analysis__GoalExpr_55 = check_hlds__det_analysis__GoalExpr1_30;
#line 586 "det_analysis.m"
      {
#line 586 "det_analysis.m"
        MR_Word base;
#line 586 "det_analysis.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "det_analysis.m"
        *check_hlds__det_analysis__Goal_13 = base;
#line 586 "det_analysis.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_analysis__GoalExpr_55));
#line 586 "det_analysis.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalInfo_36));
#line 586 "det_analysis.m"
      }
#line 459 "det_analysis.m"
    }
#line 452 "det_analysis.m"
  }
#line 452 "det_analysis.m"
}

#line 413 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
#line 413 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 413 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_7,
#line 413 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_8,
#line 413 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Context_9)
#line 413 "det_analysis.m"
{
#line 416 "det_analysis.m"
  while (MR_TRUE)
#line 416 "det_analysis.m"
    {
#line 416 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 416 "det_analysis.m"
      {
#line 416 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 416 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Proc_5;
#line 416 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Procs_6;
#line 419 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context0_12;
#line 417 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_13_13;
#line 417 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__V_14_14;
#line 417 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_10_10;
#line 417 "det_analysis.m"
        MR_String check_hlds__det_analysis__V_11_11;

#line 416 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 416 "det_analysis.m"
          {
#line 416 "det_analysis.m"
            check_hlds__det_analysis__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 416 "det_analysis.m"
            check_hlds__det_analysis__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "det_analysis.m"
            check_hlds__det_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 0)));
#line 417 "det_analysis.m"
            check_hlds__det_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 1)));
#line 417 "det_analysis.m"
            check_hlds__det_analysis__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 2)));
#line 417 "det_analysis.m"
            check_hlds__det_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 3)));
#line 417 "det_analysis.m"
            check_hlds__det_analysis__Context0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 4)));
#line 417 "det_analysis.m"
            {
#line 417 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_analysis__PredId_7, check_hlds__det_analysis__V_13_13);
            }
#line 417 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 417 "det_analysis.m"
              check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ProcId_8 == check_hlds__det_analysis__V_14_14);
#line 419 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 418 "det_analysis.m"
              {
#line 418 "det_analysis.m"
                *check_hlds__det_analysis__Context_9 = check_hlds__det_analysis__Context0_12;
#line 418 "det_analysis.m"
                check_hlds__det_analysis__succeeded = MR_TRUE;
#line 418 "det_analysis.m"
              }
#line 419 "det_analysis.m"
            else
#line 420 "det_analysis.m"
              {
#line 420 "det_analysis.m"
                /* direct tailcall eliminated */
#line 420 "det_analysis.m"
                {
#line 420 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__Procs_6;

#line 420 "det_analysis.m"
                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 420 "det_analysis.m"
                }
#line 420 "det_analysis.m"
                continue;
#line 420 "det_analysis.m"
              }
#line 416 "det_analysis.m"
          }
#line 416 "det_analysis.m"
        return check_hlds__det_analysis__succeeded;
#line 416 "det_analysis.m"
      }
#line 416 "det_analysis.m"
      break;
#line 416 "det_analysis.m"
    }
#line 413 "det_analysis.m"
}

#line 214 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_2,
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3,
#line 214 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4,
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5,
#line 214 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_6,
#line 214 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7,
#line 214 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Changed_8)
#line 214 "det_analysis.m"
{
#line 219 "det_analysis.m"
  while (MR_TRUE)
#line 219 "det_analysis.m"
    {
#line 219 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 219 "det_analysis.m"
      {
#line 219 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 219 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "det_analysis.m"
          {
#line 219 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_Changed_8 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7;
#line 219 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_Specs_6 = check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5;
#line 219 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3;
#line 219 "det_analysis.m"
          }
#line 219 "det_analysis.m"
        else
#line 221 "det_analysis.m"
          {
#line 221 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredId_19;
#line 221 "det_analysis.m"
            MR_Integer check_hlds__det_analysis__ProcId_20;
#line 221 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredProcs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 221 "det_analysis.m"
            MR_Word check_hlds__det_analysis__OldDetism_26;
#line 221 "det_analysis.m"
            MR_Word check_hlds__det_analysis__NewDetism_27;
#line 221 "det_analysis.m"
            MR_String check_hlds__det_analysis__ChangeStr_28;
#line 221 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 221 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37;
#line 221 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38;
#line 221 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39;

#line 220 "det_analysis.m"
            check_hlds__det_analysis__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_36_36, (MR_Integer) 0)));
#line 220 "det_analysis.m"
            check_hlds__det_analysis__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_36_36, (MR_Integer) 1)));
#line 222 "det_analysis.m"
            {
#line 222 "det_analysis.m"
              check_hlds__det_analysis__det_infer_proc_8_p_0(check_hlds__det_analysis__PredId_19, check_hlds__det_analysis__ProcId_20, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__det_analysis__OldDetism_26, &check_hlds__det_analysis__NewDetism_27, check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5, &check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38);
            }
#line 223 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NewDetism_27 == check_hlds__det_analysis__OldDetism_26);
#line 225 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 224 "det_analysis.m"
              {
#line 224 "det_analysis.m"
                check_hlds__det_analysis__ChangeStr_28 = (MR_String) "old";
#line 224 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7;
#line 224 "det_analysis.m"
              }
#line 225 "det_analysis.m"
            else
#line 226 "det_analysis.m"
              {
#line 226 "det_analysis.m"
                check_hlds__det_analysis__ChangeStr_28 = (MR_String) "new";
#line 227 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39 = (MR_Integer) 0;
#line 226 "det_analysis.m"
              }
#line 238 "det_analysis.m"
            if ((check_hlds__det_analysis__Debug_2 == (MR_Integer) 0))
#line 239 "det_analysis.m"
              {
#line 239 "det_analysis.m"
              }
#line 238 "det_analysis.m"
            else
#line 231 "det_analysis.m"
              {
#line 231 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_41_41;
#line 231 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_44_44;

#line 232 "det_analysis.m"
                {
#line 232 "det_analysis.m"
                  check_hlds__det_analysis__V_44_44 = mercury__string__f_43_43_2_f_0(check_hlds__det_analysis__ChangeStr_28, (MR_String) " detism ");
                }
#line 232 "det_analysis.m"
                {
#line 232 "det_analysis.m"
                  check_hlds__det_analysis__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "% Inferred ", check_hlds__det_analysis__V_44_44);
                }
#line 232 "det_analysis.m"
                {
#line 232 "det_analysis.m"
                  mercury__io__write_string_3_p_0(check_hlds__det_analysis__V_41_41);
                }
#line 233 "det_analysis.m"
                {
#line 233 "det_analysis.m"
                  parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(check_hlds__det_analysis__NewDetism_27);
                }
#line 234 "det_analysis.m"
                {
#line 234 "det_analysis.m"
                  mercury__io__write_string_3_p_0((MR_String) " for ");
                }
#line 235 "det_analysis.m"
                {
#line 235 "det_analysis.m"
                  hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__det_analysis__PredId_19, check_hlds__det_analysis__ProcId_20);
                }
#line 236 "det_analysis.m"
                {
#line 236 "det_analysis.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 231 "det_analysis.m"
              }
#line 241 "det_analysis.m"
            /* direct tailcall eliminated */
#line 241 "det_analysis.m"
            {
#line 241 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__PredProcs_21;
#line 241 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37;
#line 241 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38;
#line 241 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39;

#line 241 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 241 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5 = check_hlds__det_analysis__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 241 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 241 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 241 "det_analysis.m"
            }
#line 241 "det_analysis.m"
            continue;
#line 221 "det_analysis.m"
          }
#line 219 "det_analysis.m"
      }
#line 219 "det_analysis.m"
      break;
#line 219 "det_analysis.m"
    }
#line 214 "det_analysis.m"
}

#line 184 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
#line 184 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13,
#line 184 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14,
#line 184 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ProcList_7,
#line 184 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_8,
#line 184 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Specs_9)
#line 184 "det_analysis.m"
{
#line 187 "det_analysis.m"
  while (MR_TRUE)
#line 187 "det_analysis.m"
    {
#line 187 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 187 "det_analysis.m"
      {
#line 187 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;
#line 187 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Specs1_10;
#line 187 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Changed_11;
#line 187 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;

#line 193 "det_analysis.m"
        {
#line 193 "det_analysis.m"
          check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__ProcList_7, check_hlds__det_analysis__Debug_8, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Specs1_10, (MR_Integer) 1, &check_hlds__det_analysis__Changed_11);
        }
#line 196 "det_analysis.m"
        {
#line 196 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Debug_8, (MR_String) "% Inference pass complete\n");
        }
#line 206 "det_analysis.m"
        if ((check_hlds__det_analysis__Changed_11 == (MR_Integer) 0))
#line 205 "det_analysis.m"
          {
#line 205 "det_analysis.m"
            /* direct tailcall eliminated */
#line 205 "det_analysis.m"
            {
#line 205 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_13 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;

#line 205 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_13;
#line 205 "det_analysis.m"
            }
#line 205 "det_analysis.m"
            continue;
#line 205 "det_analysis.m"
          }
#line 206 "det_analysis.m"
        else
#line 207 "det_analysis.m"
          {
#line 211 "det_analysis.m"
            *check_hlds__det_analysis__Specs_9 = check_hlds__det_analysis__Specs1_10;
#line 211 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;
#line 207 "det_analysis.m"
          }
#line 187 "det_analysis.m"
      }
#line 187 "det_analysis.m"
      break;
#line 187 "det_analysis.m"
    }
#line 184 "det_analysis.m"
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
#line 2041 "det_analysis.m"
  {
#line 2041 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 2039 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_7_7;
#line 2039 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_5_5;

#line 2039 "det_analysis.m"
    {
#line 2039 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__DeclaredDetism_3, &check_hlds__det_analysis__V_5_5, &check_hlds__det_analysis__V_7_7);
    }
#line 2039 "det_analysis.m"
    check_hlds__det_analysis__succeeded = ((MR_Integer) 2 == check_hlds__det_analysis__V_7_7);
#line 2041 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 2040 "det_analysis.m"
      *check_hlds__det_analysis__SolnContext_4 = (MR_Integer) 1;
#line 2041 "det_analysis.m"
    else
#line 2042 "det_analysis.m"
      *check_hlds__det_analysis__SolnContext_4 = (MR_Integer) 0;
#line 2041 "det_analysis.m"
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
#line 426 "det_analysis.m"
  {
#line 426 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 426 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_11, (MR_Integer) 1)));
#line 426 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NonLocalVars_22;
#line 426 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InstmapDelta_23;
#line 426 "det_analysis.m"
    MR_Word check_hlds__det_analysis__AddPruning_25;
#line 426 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30;
#line 427 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_11, (MR_Integer) 0)));
#line 434 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Purity_24;
#line 439 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_29_29;

#line 428 "det_analysis.m"
    {
#line 428 "det_analysis.m"
      check_hlds__det_analysis__NonLocalVars_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
    }
#line 429 "det_analysis.m"
    {
#line 429 "det_analysis.m"
      check_hlds__det_analysis__InstmapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
    }
#line 434 "det_analysis.m"
    {
#line 434 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__det_util__det_no_output_vars_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__InstMap0_13, check_hlds__det_analysis__InstmapDelta_23, check_hlds__det_analysis__NonLocalVars_22);
    }
#line 434 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 434 "det_analysis.m"
      {
#line 435 "det_analysis.m"
        {
#line 435 "det_analysis.m"
          check_hlds__det_analysis__Purity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
        }
#line 437 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Purity_24 == (MR_Integer) 2);
#line 438 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 438 "det_analysis.m"
          {
#line 440 "det_analysis.m"
            check_hlds__det_analysis__V_29_29 = (MR_Integer) 2;
#line 439 "det_analysis.m"
            {
#line 439 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__det_analysis__GoalInfo0_21, check_hlds__det_analysis__V_29_29);
            }
#line 438 "det_analysis.m"
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 438 "det_analysis.m"
          }
#line 438 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 434 "det_analysis.m"
      }
#line 445 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 443 "det_analysis.m"
      {
#line 443 "det_analysis.m"
        check_hlds__det_analysis__AddPruning_25 = (MR_Integer) 1;
#line 444 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30 = (MR_Integer) 1;
#line 443 "det_analysis.m"
      }
#line 445 "det_analysis.m"
    else
#line 446 "det_analysis.m"
      {
#line 446 "det_analysis.m"
        check_hlds__det_analysis__AddPruning_25 = (MR_Integer) 0;
#line 446 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30 = check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_26;
#line 446 "det_analysis.m"
      }
#line 448 "det_analysis.m"
    {
#line 448 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(check_hlds__det_analysis__Goal0_11, check_hlds__det_analysis__Goal_12, check_hlds__det_analysis__InstMap0_13, check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30, check_hlds__det_analysis__RightFailingContexts_15, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_16, check_hlds__det_analysis__AddPruning_25, check_hlds__det_analysis__Detism_17, check_hlds__det_analysis__GoalFailingContexts_18, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);
#line 448 "det_analysis.m"
      return;
    }
#line 426 "det_analysis.m"
  }
#line 94 "det_analysis.m"
}

#line 361 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
#line 361 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 361 "det_analysis.m"
{
#line 361 "det_analysis.m"
  {
#line 361 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 361 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0, 1);
#line 361 "det_analysis.m"
  }
#line 361 "det_analysis.m"
}

#line 360 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
#line 360 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 360 "det_analysis.m"
{
#line 360 "det_analysis.m"
  {
#line 360 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 360 "det_analysis.m"
    (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_160_160 = ((MR_Word) (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_160_160);
#line 360 "det_analysis.m"
    {
#line 360 "det_analysis.m"
      check_hlds__det_analysis__det_infer_proc_8_p_0_2(check_hlds__det_analysis__env_ptr);
#line 360 "det_analysis.m"
      return;
    }
#line 360 "det_analysis.m"
  }
#line 360 "det_analysis.m"
}

#line 361 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
#line 361 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 361 "det_analysis.m"
{
#line 361 "det_analysis.m"
  {
#line 361 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 360 "det_analysis.m"
    {
#line 360 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_121_121, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_160_160);
    }
#line 361 "det_analysis.m"
    if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 361 "det_analysis.m"
      {
#line 363 "det_analysis.m"
        if ((*((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) == (MR_Integer) 2))
#line 362 "det_analysis.m"
          (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 363 "det_analysis.m"
        else
#line 363 "det_analysis.m"
          if ((*((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) == (MR_Integer) 3))
#line 363 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 363 "det_analysis.m"
          else
#line 363 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
#line 363 "det_analysis.m"
        if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 363 "det_analysis.m"
          {
#line 363 "det_analysis.m"
            check_hlds__det_analysis__det_infer_proc_8_p_0_1(check_hlds__det_analysis__env_ptr);
#line 363 "det_analysis.m"
            return;
          }
#line 361 "det_analysis.m"
      }
#line 361 "det_analysis.m"
  }
#line 361 "det_analysis.m"
}

#line 361 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
#line 361 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 361 "det_analysis.m"
{
#line 361 "det_analysis.m"
  {
#line 361 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 361 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0) == 0)
#line 361 "det_analysis.m"
      {
#line 361 "det_analysis.m"
        {
#line 360 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_53_53;
#line 360 "det_analysis.m"
          MR_String check_hlds__det_analysis__V_54_54;
#line 360 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_55_55;

#line 360 "det_analysis.m"
          {
#line 360 "det_analysis.m"
            MR_Word base;
#line 360 "det_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 360 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_121_121 = base;
#line 360 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = NULL;
#line 360 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
#line 360 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
#line 360 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = NULL;
#line 360 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = NULL;
#line 360 "det_analysis.m"
          }
#line 360 "det_analysis.m"
          {
#line 360 "det_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_160_160, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_52, check_hlds__det_analysis__det_infer_proc_8_p_0_3, check_hlds__det_analysis__env_ptr);
          }
#line 361 "det_analysis.m"
        }
#line 361 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
#line 361 "det_analysis.m"
      }
#line 361 "det_analysis.m"
    else
#line 361 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 361 "det_analysis.m"
  }
#line 361 "det_analysis.m"
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
#line 259 "det_analysis.m"
    {
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_154_154;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_155_155;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_156_156;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_157_157;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredTable0_15;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo0_16;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcTable0_17;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo0_18;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldInferredSolnContext_19;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__MaybeDeclaredDetism_20;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DeclaredSolnContext_22;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__SolnContext_23;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Goal0_25;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InstMap0_26;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__VarTypes_27;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DetInfo0_28;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Goal_29;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferDetism_30;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DetInfo_32;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__HasFormatCalls_33;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__HasRequireScope_34;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldCanFail_35;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldMaxSoln_36;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferCanFail_37;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferMaxSoln_38;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CanFail_39;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__MaxSoln_40;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TentativeDetism_41;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__EvalMethod_42;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo1_59;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo_60;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcTable_61;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo1_62;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers1_63;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers2_64;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers_65;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo_66;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredTable_67;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_84_84;
#line 259 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120;
#line 262 "det_analysis.m"
      MR_Box check_hlds__det_analysis__conv0_PredInfo0_16;
#line 264 "det_analysis.m"
      MR_Box check_hlds__det_analysis__conv1_ProcInfo0_18;
#line 305 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_31_31;
#line 327 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ToBeCheckedDetism_45;
#line 327 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ToBeCheckedCodeModel_46;
#line 327 "det_analysis.m"
      MR_Integer check_hlds__det_analysis___InArg_43;
#line 327 "det_analysis.m"
      MR_Integer check_hlds__det_analysis___OutArg_44;

#line 261 "det_analysis.m"
      {
#line 261 "det_analysis.m"
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_68, &check_hlds__det_analysis__PredTable0_15);
      }
#line 11260 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_154_154 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 11262 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_155_155 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 262 "det_analysis.m"
      {
#line 262 "det_analysis.m"
        mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_154_154, check_hlds__det_analysis__TypeCtorInfo_155_155, check_hlds__det_analysis__PredTable0_15, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), &check_hlds__det_analysis__conv0_PredInfo0_16);
      }
#line 262 "det_analysis.m"
      check_hlds__det_analysis__PredInfo0_16 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo0_16);
#line 263 "det_analysis.m"
      {
#line 263 "det_analysis.m"
        hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_analysis__PredInfo0_16, &check_hlds__det_analysis__ProcTable0_17);
      }
#line 11276 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_156_156 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 11278 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 264 "det_analysis.m"
      {
#line 264 "det_analysis.m"
        mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_156_156, check_hlds__det_analysis__TypeCtorInfo_157_157, check_hlds__det_analysis__ProcTable0_17, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10)), &check_hlds__det_analysis__conv1_ProcInfo0_18);
      }
#line 264 "det_analysis.m"
      check_hlds__det_analysis__ProcInfo0_18 = ((MR_Word) check_hlds__det_analysis__conv1_ProcInfo0_18);
#line 267 "det_analysis.m"
      {
#line 267 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_18, check_hlds__det_analysis__OldDetism_12);
      }
#line 272 "det_analysis.m"
      {
#line 272 "det_analysis.m"
        check_hlds__det_analysis__det_get_soln_context_2_p_0(*check_hlds__det_analysis__OldDetism_12, &check_hlds__det_analysis__OldInferredSolnContext_19);
      }
#line 273 "det_analysis.m"
      {
#line 273 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__MaybeDeclaredDetism_20);
      }
#line 277 "det_analysis.m"
      if ((check_hlds__det_analysis__MaybeDeclaredDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "det_analysis.m"
        check_hlds__det_analysis__DeclaredSolnContext_22 = (MR_Integer) 0;
#line 277 "det_analysis.m"
      else
#line 275 "det_analysis.m"
        {
#line 275 "det_analysis.m"
          MR_Word check_hlds__det_analysis__DeclaredDetism_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDeclaredDetism_20, (MR_Integer) 0)));

#line 276 "det_analysis.m"
          {
#line 276 "det_analysis.m"
            check_hlds__det_analysis__det_get_soln_context_2_p_0(check_hlds__det_analysis__DeclaredDetism_21, &check_hlds__det_analysis__DeclaredSolnContext_22);
          }
#line 275 "det_analysis.m"
        }
#line 282 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__DeclaredSolnContext_22 == (MR_Integer) 1);
#line 283 "det_analysis.m"
      if (!((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded))
#line 283 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__OldInferredSolnContext_19 == (MR_Integer) 1);
#line 287 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 286 "det_analysis.m"
        check_hlds__det_analysis__SolnContext_23 = (MR_Integer) 1;
#line 287 "det_analysis.m"
      else
#line 288 "det_analysis.m"
        check_hlds__det_analysis__SolnContext_23 = (MR_Integer) 0;
#line 300 "det_analysis.m"
      {
#line 300 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__Goal0_25);
      }
#line 301 "det_analysis.m"
      {
#line 301 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_analysis__ProcInfo0_18, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_68, &check_hlds__det_analysis__InstMap0_26);
      }
#line 302 "det_analysis.m"
      {
#line 302 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__VarTypes_27);
      }
#line 303 "det_analysis.m"
      {
#line 303 "det_analysis.m"
        check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_68, check_hlds__det_analysis__VarTypes_27, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, (MR_Integer) 0, check_hlds__det_analysis__STATE_VARIABLE_Specs_0_70, &check_hlds__det_analysis__DetInfo0_28);
      }
#line 305 "det_analysis.m"
      {
#line 305 "det_analysis.m"
        check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_25, &check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__InstMap0_26, check_hlds__det_analysis__SolnContext_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__InferDetism_30, &check_hlds__det_analysis__V_31_31, check_hlds__det_analysis__DetInfo0_28, &check_hlds__det_analysis__DetInfo_32);
      }
#line 307 "det_analysis.m"
      {
#line 307 "det_analysis.m"
        check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83);
      }
#line 308 "det_analysis.m"
      {
#line 308 "det_analysis.m"
        check_hlds__det_util__det_info_get_error_specs_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__STATE_VARIABLE_Specs_84_84);
      }
#line 309 "det_analysis.m"
      {
#line 309 "det_analysis.m"
        check_hlds__det_util__det_info_get_has_format_call_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__HasFormatCalls_33);
      }
#line 310 "det_analysis.m"
      {
#line 310 "det_analysis.m"
        check_hlds__det_util__det_info_get_has_req_scope_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__HasRequireScope_34);
      }
#line 317 "det_analysis.m"
      {
#line 317 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__OldDetism_12, &check_hlds__det_analysis__OldCanFail_35, &check_hlds__det_analysis__OldMaxSoln_36);
      }
#line 318 "det_analysis.m"
      {
#line 318 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__InferDetism_30, &check_hlds__det_analysis__InferCanFail_37, &check_hlds__det_analysis__InferMaxSoln_38);
      }
#line 319 "det_analysis.m"
      {
#line 319 "det_analysis.m"
        parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__OldCanFail_35, check_hlds__det_analysis__InferCanFail_37, &check_hlds__det_analysis__CanFail_39);
      }
#line 320 "det_analysis.m"
      {
#line 320 "det_analysis.m"
        parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__OldMaxSoln_36, check_hlds__det_analysis__InferMaxSoln_38, &check_hlds__det_analysis__MaxSoln_40);
      }
#line 321 "det_analysis.m"
      {
#line 321 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_analysis__TentativeDetism_41, check_hlds__det_analysis__CanFail_39, check_hlds__det_analysis__MaxSoln_40);
      }
#line 324 "det_analysis.m"
      {
#line 324 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__EvalMethod_42);
      }
#line 325 "det_analysis.m"
      {
#line 325 "det_analysis.m"
        *((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) = hlds__hlds_pred__eval_method_change_determinism_2_f_0(check_hlds__det_analysis__EvalMethod_42, check_hlds__det_analysis__TentativeDetism_41);
      }
#line 327 "det_analysis.m"
      {
#line 327 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = hlds__hlds_pred__proc_info_has_io_state_pair_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83, check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis___InArg_43, &check_hlds__det_analysis___OutArg_44);
      }
#line 327 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 327 "det_analysis.m"
        {
#line 330 "det_analysis.m"
          if ((check_hlds__det_analysis__MaybeDeclaredDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "det_analysis.m"
            check_hlds__det_analysis__ToBeCheckedDetism_45 = *((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13);
#line 330 "det_analysis.m"
          else
#line 329 "det_analysis.m"
            check_hlds__det_analysis__ToBeCheckedDetism_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDeclaredDetism_20, (MR_Integer) 0)));
#line 334 "det_analysis.m"
          {
#line 334 "det_analysis.m"
            hlds__code_model__determinism_to_code_model_2_p_0(check_hlds__det_analysis__ToBeCheckedDetism_45, &check_hlds__det_analysis__ToBeCheckedCodeModel_46);
          }
#line 335 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__ToBeCheckedCodeModel_46 == (MR_Integer) 0);
#line 335 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded);
#line 327 "det_analysis.m"
        }
#line 349 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 337 "det_analysis.m"
        {
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__TypeCtorInfo_158_158;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__ProcContext_47;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStateProcPieces_48;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStatePieces_49;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStateSpec_51;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_86_86;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_91_91;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_112_112;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_113_113;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_114_114;
#line 337 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_115_115;

#line 337 "det_analysis.m"
          {
#line 337 "det_analysis.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__ProcContext_47);
          }
#line 339 "det_analysis.m"
          {
#line 339 "det_analysis.m"
            check_hlds__det_analysis__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_86_86, 0) = ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
#line 339 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_86_86, 1) = ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
#line 339 "det_analysis.m"
          }
#line 338 "det_analysis.m"
          {
#line 338 "det_analysis.m"
            check_hlds__det_analysis__IOStateProcPieces_48 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83, (MR_Integer) 1, check_hlds__det_analysis__V_86_86);
          }
#line 11489 "check_hlds.det_analysis.c"
          check_hlds__det_analysis__TypeCtorInfo_158_158 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 340 "det_analysis.m"
          {
#line 340 "det_analysis.m"
            check_hlds__det_analysis__V_91_91 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_158_158, check_hlds__det_analysis__IOStateProcPieces_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[9]));
          }
#line 340 "det_analysis.m"
          {
#line 340 "det_analysis.m"
            check_hlds__det_analysis__IOStatePieces_49 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_158_158, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[92]), check_hlds__det_analysis__V_91_91);
          }
#line 347 "det_analysis.m"
          {
#line 347 "det_analysis.m"
            check_hlds__det_analysis__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_115_115, 0) = ((MR_Box) (check_hlds__det_analysis__IOStatePieces_49));
#line 347 "det_analysis.m"
          }
#line 347 "det_analysis.m"
          {
#line 347 "det_analysis.m"
            check_hlds__det_analysis__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 0) = ((MR_Box) (check_hlds__det_analysis__V_115_115));
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[93])));
#line 347 "det_analysis.m"
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
#line 347 "det_analysis.m"
          {
#line 347 "det_analysis.m"
            check_hlds__det_analysis__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_112_112, 0) = ((MR_Box) (check_hlds__det_analysis__V_113_113));
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "det_analysis.m"
          }
#line 345 "det_analysis.m"
          {
#line 345 "det_analysis.m"
            check_hlds__det_analysis__IOStateSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 345 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 345 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 2) = ((MR_Box) (check_hlds__det_analysis__V_112_112));
#line 345 "det_analysis.m"
          }
#line 348 "det_analysis.m"
          {
#line 348 "det_analysis.m"
            check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120, 0) = ((MR_Box) (check_hlds__det_analysis__IOStateSpec_51));
#line 348 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_Specs_84_84));
#line 348 "det_analysis.m"
          }
#line 337 "det_analysis.m"
        }
#line 349 "det_analysis.m"
      else
#line 348 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120 = check_hlds__det_analysis__STATE_VARIABLE_Specs_84_84;
#line 358 "det_analysis.m"
      {
#line 358 "det_analysis.m"
        hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83, &(check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_52);
      }
#line 361 "det_analysis.m"
      {
#line 361 "det_analysis.m"
        check_hlds__det_analysis__det_infer_proc_8_p_0_4(&check_hlds__det_analysis__env);
      }
#line 381 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 377 "det_analysis.m"
        {
#line 377 "det_analysis.m"
          MR_Word check_hlds__det_analysis__PragmaContext_56;

#line 367 "det_analysis.m"
          {
#line 367 "det_analysis.m"
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis__get_exported_proc_context_4_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_52, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, &check_hlds__det_analysis__PragmaContext_56);
          }
#line 377 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 373 "det_analysis.m"
            {
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ExportPieces_57;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ExportSpec_58;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_124_124;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_127_127;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_130_130;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_133_133;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_134_134;
#line 373 "det_analysis.m"
              MR_String check_hlds__det_analysis__V_135_135;
#line 373 "det_analysis.m"
              MR_String check_hlds__det_analysis__V_136_136;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_141_141;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_142_142;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_143_143;
#line 373 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_144_144;

#line 373 "det_analysis.m"
              {
#line 373 "det_analysis.m"
                check_hlds__det_analysis__V_136_136 = parse_tree__prog_out__determinism_to_string_1_f_0(*((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13));
              }
#line 373 "det_analysis.m"
              {
#line 373 "det_analysis.m"
                check_hlds__det_analysis__V_135_135 = mercury__string__f_43_43_2_f_0(check_hlds__det_analysis__V_136_136, (MR_String) ".");
              }
#line 373 "det_analysis.m"
              {
#line 373 "det_analysis.m"
                check_hlds__det_analysis__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 373 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 0) = ((MR_Box) (check_hlds__det_analysis__V_135_135));
#line 373 "det_analysis.m"
              }
#line 373 "det_analysis.m"
              {
#line 373 "det_analysis.m"
                check_hlds__det_analysis__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_133_133, 0) = ((MR_Box) (check_hlds__det_analysis__V_134_134));
#line 373 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "det_analysis.m"
              }
#line 372 "det_analysis.m"
              {
#line 372 "det_analysis.m"
                check_hlds__det_analysis__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[97])));
#line 372 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__V_133_133));
#line 372 "det_analysis.m"
              }
#line 371 "det_analysis.m"
              {
#line 371 "det_analysis.m"
                check_hlds__det_analysis__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_127_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[96])));
#line 371 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_127_127, 1) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 371 "det_analysis.m"
              }
#line 371 "det_analysis.m"
              {
#line 371 "det_analysis.m"
                check_hlds__det_analysis__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_124_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[95])));
#line 371 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_124_124, 1) = ((MR_Box) (check_hlds__det_analysis__V_127_127));
#line 371 "det_analysis.m"
              }
#line 370 "det_analysis.m"
              {
#line 370 "det_analysis.m"
                check_hlds__det_analysis__ExportPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExportPieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[94])));
#line 370 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExportPieces_57, 1) = ((MR_Box) (check_hlds__det_analysis__V_124_124));
#line 370 "det_analysis.m"
              }
#line 375 "det_analysis.m"
              {
#line 375 "det_analysis.m"
                check_hlds__det_analysis__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_144_144, 0) = ((MR_Box) (check_hlds__det_analysis__ExportPieces_57));
#line 375 "det_analysis.m"
              }
#line 375 "det_analysis.m"
              {
#line 375 "det_analysis.m"
                check_hlds__det_analysis__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_143_143, 0) = ((MR_Box) (check_hlds__det_analysis__V_144_144));
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "det_analysis.m"
              }
#line 375 "det_analysis.m"
              {
#line 375 "det_analysis.m"
                check_hlds__det_analysis__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_142_142, 0) = ((MR_Box) (check_hlds__det_analysis__PragmaContext_56));
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_142_142, 1) = ((MR_Box) (check_hlds__det_analysis__V_143_143));
#line 375 "det_analysis.m"
              }
#line 375 "det_analysis.m"
              {
#line 375 "det_analysis.m"
                check_hlds__det_analysis__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_141_141, 0) = ((MR_Box) (check_hlds__det_analysis__V_142_142));
#line 375 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "det_analysis.m"
              }
#line 374 "det_analysis.m"
              {
#line 374 "det_analysis.m"
                check_hlds__det_analysis__ExportSpec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 374 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 374 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_58, 2) = ((MR_Box) (check_hlds__det_analysis__V_141_141));
#line 374 "det_analysis.m"
              }
#line 376 "det_analysis.m"
              {
#line 376 "det_analysis.m"
                MR_Word base;
#line 376 "det_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "det_analysis.m"
                *check_hlds__det_analysis__STATE_VARIABLE_Specs_71 = base;
#line 376 "det_analysis.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__ExportSpec_58));
#line 376 "det_analysis.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120));
#line 376 "det_analysis.m"
              }
#line 373 "det_analysis.m"
            }
#line 377 "det_analysis.m"
          else
#line 378 "det_analysis.m"
            {
#line 378 "det_analysis.m"
              {
#line 378 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_proc\'/8", (MR_String) "Cannot find proc in table of pragma foreign_exported procs");
#line 378 "det_analysis.m"
                return;
              }
#line 378 "det_analysis.m"
            }
#line 377 "det_analysis.m"
        }
#line 381 "det_analysis.m"
      else
#line 378 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_Specs_71 = check_hlds__det_analysis__STATE_VARIABLE_Specs_120_120;
#line 386 "det_analysis.m"
      {
#line 386 "det_analysis.m"
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__ProcInfo1_59);
      }
#line 387 "det_analysis.m"
      {
#line 387 "det_analysis.m"
        hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(*((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13), check_hlds__det_analysis__ProcInfo1_59, &check_hlds__det_analysis__ProcInfo_60);
      }
#line 390 "det_analysis.m"
      {
#line 390 "det_analysis.m"
        mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_156_156, check_hlds__det_analysis__TypeCtorInfo_157_157, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10)), ((MR_Box) (check_hlds__det_analysis__ProcInfo_60)), check_hlds__det_analysis__ProcTable0_17, &check_hlds__det_analysis__ProcTable_61);
      }
#line 391 "det_analysis.m"
      {
#line 391 "det_analysis.m"
        hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__det_analysis__ProcTable_61, check_hlds__det_analysis__PredInfo0_16, &check_hlds__det_analysis__PredInfo1_62);
      }
#line 393 "det_analysis.m"
      {
#line 393 "det_analysis.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_analysis__PredInfo1_62, &check_hlds__det_analysis__Markers1_63);
      }
#line 397 "det_analysis.m"
      if ((check_hlds__det_analysis__HasFormatCalls_33 == (MR_Integer) 1))
#line 398 "det_analysis.m"
        {
#line 399 "det_analysis.m"
          {
#line 399 "det_analysis.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 24, check_hlds__det_analysis__Markers1_63, &check_hlds__det_analysis__Markers2_64);
          }
#line 398 "det_analysis.m"
        }
#line 397 "det_analysis.m"
      else
#line 396 "det_analysis.m"
        check_hlds__det_analysis__Markers2_64 = check_hlds__det_analysis__Markers1_63;
#line 404 "det_analysis.m"
      if ((check_hlds__det_analysis__HasRequireScope_34 == (MR_Integer) 1))
#line 405 "det_analysis.m"
        {
#line 406 "det_analysis.m"
          {
#line 406 "det_analysis.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 23, check_hlds__det_analysis__Markers2_64, &check_hlds__det_analysis__Markers_65);
          }
#line 405 "det_analysis.m"
        }
#line 404 "det_analysis.m"
      else
#line 403 "det_analysis.m"
        check_hlds__det_analysis__Markers_65 = check_hlds__det_analysis__Markers2_64;
#line 408 "det_analysis.m"
      {
#line 408 "det_analysis.m"
        hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__det_analysis__Markers_65, check_hlds__det_analysis__PredInfo1_62, &check_hlds__det_analysis__PredInfo_66);
      }
#line 410 "det_analysis.m"
      {
#line 410 "det_analysis.m"
        mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_154_154, check_hlds__det_analysis__TypeCtorInfo_155_155, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), ((MR_Box) (check_hlds__det_analysis__PredInfo_66)), check_hlds__det_analysis__PredTable0_15, &check_hlds__det_analysis__PredTable_67);
      }
#line 411 "det_analysis.m"
      {
#line 411 "det_analysis.m"
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__det_analysis__PredTable_67, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_83_83, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_69);
#line 411 "det_analysis.m"
        return;
      }
#line 259 "det_analysis.m"
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
#line 177 "det_analysis.m"
  {
#line 177 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 177 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Globals_10;
#line 177 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Debug_11;
#line 177 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_17_17;
#line 177 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_18_18;
#line 177 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29;
#line 177 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31;
#line 177 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_33_33;
#line 252 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_28_28;

#line 178 "det_analysis.m"
    {
#line 178 "det_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__det_analysis__Globals_10);
    }
#line 179 "det_analysis.m"
    {
#line 179 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 64, &check_hlds__det_analysis__Debug_11);
    }
#line 180 "det_analysis.m"
    {
#line 180 "det_analysis.m"
      check_hlds__det_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 180 "det_analysis.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_18_18, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_7));
#line 180 "det_analysis.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_18_18, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_6));
#line 180 "det_analysis.m"
    }
#line 180 "det_analysis.m"
    {
#line 180 "det_analysis.m"
      check_hlds__det_analysis__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_17_17, 0) = ((MR_Box) (check_hlds__det_analysis__V_18_18));
#line 180 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "det_analysis.m"
    }
#line 252 "det_analysis.m"
    {
#line 252 "det_analysis.m"
      check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__V_17_17, check_hlds__det_analysis__Debug_11, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31, (MR_Integer) 1, &check_hlds__det_analysis__V_28_28);
    }
#line 254 "det_analysis.m"
    {
#line 254 "det_analysis.m"
      check_hlds__det_analysis__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__V_17_17);
    }
#line 254 "det_analysis.m"
    {
#line 254 "det_analysis.m"
      check_hlds__det_report__global_checking_pass_5_p_0(check_hlds__det_analysis__V_33_33, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_13, check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31, check_hlds__det_analysis__Specs_9);
#line 254 "det_analysis.m"
      return;
    }
#line 177 "det_analysis.m"
  }
#line 77 "det_analysis.m"
}

#line 148 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
#line 148 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 148 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 148 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 148 "det_analysis.m"
  MR_Box * check_hlds__det_analysis__wrapper_arg_3)
#line 148 "det_analysis.m"
{
#line 148 "det_analysis.m"
  {
#line 148 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 148 "det_analysis.m"
    MR_Word check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16;

#line 148 "det_analysis.m"
    {
#line 148 "det_analysis.m"
      check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), &check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16);
    }
#line 148 "det_analysis.m"
    *check_hlds__det_analysis__wrapper_arg_3 = ((MR_Box) (check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16));
#line 148 "det_analysis.m"
  }
#line 148 "det_analysis.m"
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
#line 144 "det_analysis.m"
  {
#line 144 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredIds_6;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__DeclaredProcs_7;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UndeclaredProcs_8;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NoInferProcs_9;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Globals_10;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Verbose_11;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Debug_12;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InferenceSpecs_13;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__FinalSpecs_17;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_20_20;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_28_28;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredTable_50;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_63;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_18_65;
#line 144 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_67_67;
#line 148 "det_analysis.m"
    MR_Box check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_22_22;
#line 252 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_62_62;

#line 145 "det_analysis.m"
    {
#line 145 "det_analysis.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__det_analysis__PredIds_6, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_20_20);
    }
#line 2064 "det_analysis.m"
    {
#line 2064 "det_analysis.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_20_20, &check_hlds__det_analysis__PredTable_50);
    }
#line 2065 "det_analysis.m"
    {
#line 2065 "det_analysis.m"
      check_hlds__det_analysis__determinism_declarations_preds_8_p_0(check_hlds__det_analysis__PredTable_50, check_hlds__det_analysis__PredIds_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__DeclaredProcs_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__UndeclaredProcs_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__NoInferProcs_9);
    }
#line 148 "det_analysis.m"
    {
#line 148 "det_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__det_analysis_scalar_common_5[0], check_hlds__det_analysis__NoInferProcs_9, ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_20_20)), &check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 148 "det_analysis.m"
    check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22 = ((MR_Word) check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_22_22);
#line 149 "det_analysis.m"
    {
#line 149 "det_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22, &check_hlds__det_analysis__Globals_10);
    }
#line 150 "det_analysis.m"
    {
#line 150 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 44, &check_hlds__det_analysis__Verbose_11);
    }
#line 151 "det_analysis.m"
    {
#line 151 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 64, &check_hlds__det_analysis__Debug_12);
    }
#line 155 "det_analysis.m"
    if ((check_hlds__det_analysis__UndeclaredProcs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "det_analysis.m"
      {
#line 154 "det_analysis.m"
        check_hlds__det_analysis__InferenceSpecs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 154 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_28_28 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22;
#line 153 "det_analysis.m"
      }
#line 155 "det_analysis.m"
    else
#line 156 "det_analysis.m"
      {
#line 158 "det_analysis.m"
        {
#line 158 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% Doing determinism inference...\n");
        }
#line 161 "det_analysis.m"
        {
#line 161 "det_analysis.m"
          check_hlds__det_analysis__global_inference_pass_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_22_22, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_28_28, check_hlds__det_analysis__UndeclaredProcs_8, check_hlds__det_analysis__Debug_12, &check_hlds__det_analysis__InferenceSpecs_13);
        }
#line 164 "det_analysis.m"
        {
#line 164 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% done.\n");
        }
#line 156 "det_analysis.m"
      }
#line 168 "det_analysis.m"
    {
#line 168 "det_analysis.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% Doing determinism checking...\n");
    }
#line 252 "det_analysis.m"
    {
#line 252 "det_analysis.m"
      check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__DeclaredProcs_7, check_hlds__det_analysis__Debug_12, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_28_28, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__STATE_VARIABLE_Specs_18_65, (MR_Integer) 1, &check_hlds__det_analysis__V_62_62);
    }
#line 254 "det_analysis.m"
    {
#line 254 "det_analysis.m"
      check_hlds__det_analysis__V_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__det_analysis__UndeclaredProcs_8, check_hlds__det_analysis__DeclaredProcs_7);
    }
#line 254 "det_analysis.m"
    {
#line 254 "det_analysis.m"
      check_hlds__det_report__global_checking_pass_5_p_0(check_hlds__det_analysis__V_67_67, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_63, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_19, check_hlds__det_analysis__STATE_VARIABLE_Specs_18_65, &check_hlds__det_analysis__FinalSpecs_17);
    }
#line 172 "det_analysis.m"
    {
#line 172 "det_analysis.m"
      *check_hlds__det_analysis__Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__det_analysis__InferenceSpecs_13, check_hlds__det_analysis__FinalSpecs_17);
    }
#line 174 "det_analysis.m"
    {
#line 174 "det_analysis.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% done.\n");
#line 174 "det_analysis.m"
      return;
    }
#line 144 "det_analysis.m"
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
