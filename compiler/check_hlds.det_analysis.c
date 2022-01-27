/*
** Automatically generated from `det_analysis.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "cord.mih"
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
#include "set_tree234.mih"
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



#line 1547 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s {
#line 1560 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded;
#line 1560 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358;
#line 1560 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59;
#line 1560 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63;
#line 1692 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0;
#line 1692 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71;
#line 1547 "det_analysis.m"
};

#line 458 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s {
#line 465 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded;
#line 554 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45;
#line 557 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0;
#line 557 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48;
#line 557 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65;
#line 557 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66;
#line 557 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70;
#line 557 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73;
#line 557 "det_analysis.m"
  MR_Box check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65;
#line 458 "det_analysis.m"
};

#line 82 "det_analysis.m"
struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s {
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9;
#line 82 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10;
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13;
#line 260 "det_analysis.m"
  MR_bool check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded;
#line 260 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_162_162;
#line 260 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_53;
#line 367 "det_analysis.m"
  jmp_buf check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0;
#line 367 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_124_124;
#line 367 "det_analysis.m"
  MR_Word check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_163_163;
#line 366 "det_analysis.m"
  MR_Box check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_163_163;
#line 82 "det_analysis.m"
};


#line 214 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0;

#line 217 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 220 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 223 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 226 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 229 "check_hlds.det_analysis.c"
static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2];

#line 232 "check_hlds.det_analysis.c"
static const MR_DuFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0;

#line 235 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1];

#line 238 "check_hlds.det_analysis.c"
static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1];

#line 241 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0[1];

#line 244 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0[1];

#line 247 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0;

#line 250 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1;

#line 253 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0[2];

#line 256 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2];

#line 259 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2];

#line 262 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
#line 265 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 267 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2);

#line 270 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
#line 273 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 275 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 277 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3);

#line 280 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
#line 283 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 285 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2);

#line 288 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
#line 291 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 293 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 295 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3);

#line 1143 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Attributes_12,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_13,
#line 1143 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_14,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1143 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1143 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44,
#line 1143 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);

#line 1503 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1503__1_2_p_0(
#line 1503 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalFailingContexts_18,
#line 1503 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_52);

#line 366 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
#line 366 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 366 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2);

#line 2139 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
#line 2139 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2139 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 2139 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16);

#line 2091 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4,
#line 2091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6,
#line 2091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8,
#line 2091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9);

#line 2075 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3,
#line 2075 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4,
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5,
#line 2075 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6,
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7,
#line 2075 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8);

#line 2035 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
#line 2035 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2035 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2);

#line 2014 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
#line 2014 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2014 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2);

#line 2004 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
#line 2004 "det_analysis.m"
  MR_Word check_hlds__det_analysis__DetInfo_3,
#line 2004 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Type_4);

#line 1877 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_12,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ExaminesRepresentation_13,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CanFail_14,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_15,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsA_16,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsB_17,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalContext_19,
#line 1877 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__NumSolns_20,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41,
#line 1877 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);

#line 1857 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
#line 1857 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1857 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ModuleInfo_9,
#line 1857 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredInfo_10,
#line 1857 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15,
#line 1857 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__STATE_VARIABLE_ProcId_16);

#line 1718 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
#line 1718 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1718 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1677 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
#line 1677 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1677 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1664 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
#line 1664 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1664 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1660 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
#line 1660 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1660 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1622 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
#line 1622 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1622 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1);

#line 1692 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
#line 1692 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1692 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
#line 1692 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1692 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
#line 1692 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 1547 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Reason_13,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_14,
#line 1547 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_15,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_17,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_18,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_19,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20,
#line 1547 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_21,
#line 1547 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_22,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109,
#line 1547 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);

#line 1523 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1523 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7,
#line 1523 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_CanFail_8,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9,
#line 1523 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11,
#line 1523 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12);

#line 1503 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
#line 1503 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg);

#line 1487 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1487 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_12,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15,
#line 1487 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_16,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25,
#line 1487 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26);

#line 1446 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MainGoal0_12,
#line 1446 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__MainGoal_13,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__OrElseGoals0_14,
#line 1446 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__OrElseGoals_15,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_16,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19,
#line 1446 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_20,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30,
#line 1446 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31);

#line 1409 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1409 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_13,
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14,
#line 1409 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1409 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24,
#line 1409 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25);

#line 1321 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cond0_15,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cond_16,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Then0_17,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Then_18,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Else0_19,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Else_20,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_21,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_22,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_23,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_25,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_26,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49);

#line 1232 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__LHS_14,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RHS0_15,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Unify_16,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__UnifyContext_17,
#line 1232 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__RHS_18,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_19,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_20,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_21,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_22,
#line 1232 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 1232 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85,
#line 1232 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86);

#line 1098 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GenericCall_10,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CallDetism_11,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1098 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1098 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28,
#line 1098 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29);

#line 1022 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_12,
#line 1022 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId0_13,
#line 1022 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__ProcId_14,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Args_15,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1022 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1022 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39,
#line 1022 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40);

#line 976 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 976 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__9_9,
#line 976 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_10,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11,
#line 976 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13,
#line 976 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14);

#line 927 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_14,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SwitchCanFail_15,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cases0_16,
#line 927 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cases_17,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_19,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_20,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_21,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22,
#line 927 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 927 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37,
#line 927 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38);

#line 871 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 871 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 871 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_9,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10,
#line 871 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12,
#line 871 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13);

#line 848 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 848 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 848 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 848 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
#line 848 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);

#line 821 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 821 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 821 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 821 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 821 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);

#line 773 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 773 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 773 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 773 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32,
#line 773 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33);

#line 724 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 724 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 724 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 724 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 724 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);

#line 602 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalExpr0_12,
#line 602 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalExpr_13,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 602 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 602 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78,
#line 602 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);

#line 557 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(
#line 557 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 557 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3(
#line 557 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 557 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(
#line 557 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 557 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(
#line 557 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 458 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_12,
#line 458 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_13,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_14,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_16,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__AddPruning_18,
#line 458 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 458 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57,
#line 458 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58);

#line 419 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
#line 419 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 419 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_7,
#line 419 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_8,
#line 419 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Context_9);

#line 215 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_2,
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3,
#line 215 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4,
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5,
#line 215 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_6,
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7,
#line 215 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Changed_8);

#line 185 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
#line 185 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13,
#line 185 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14,
#line 185 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ProcList_7,
#line 185 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_8,
#line 185 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Specs_9);

#line 367 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
#line 367 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 366 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
#line 366 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 367 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
#line 367 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 367 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
#line 367 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg);

#line 149 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
#line 149 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 149 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 149 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 149 "det_analysis.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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



#line 1887 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__list__pti_list_1__plain_check_hlds__det_report__type_ctor_info_failing_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0
  }
};

#line 1895 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1903 "check_hlds.det_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_analysis__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1911 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1919 "check_hlds.det_analysis.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__det_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1927 "check_hlds.det_analysis.c"
static const MR_PseudoTypeInfo check_hlds__det_analysis__check_hlds__det_analysis__field_types_pess_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__det_analysis__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1933 "check_hlds.det_analysis.c"
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

#line 1948 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

#line 1953 "check_hlds.det_analysis.c"
static const MR_DuPtagLayout check_hlds__det_analysis__check_hlds__det_analysis__du_ptag_ordered_pess_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_analysis__check_hlds__det_analysis__du_stag_ordered_pess_info_0_0
  }
};

#line 1962 "check_hlds.det_analysis.c"
static const MR_DuFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__du_name_ordered_pess_info_0[1] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__du_functor_desc_pess_info_0_0
};

#line 1967 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_pess_info_0[1] = {
  (MR_Integer) 0
};

#line 1972 "check_hlds.det_analysis.c"
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

#line 1993 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0 = {
  (MR_String) "all_solns",
  (MR_Integer) 0
};

#line 1999 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDesc check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1 = {
  (MR_String) "first_soln",
  (MR_Integer) 1
};

#line 2005 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_value_ordered_soln_context_0[2] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

#line 2011 "check_hlds.det_analysis.c"
static const MR_EnumFunctorDescPtr check_hlds__det_analysis__check_hlds__det_analysis__enum_name_ordered_soln_context_0[2] = {
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_0,
  &check_hlds__det_analysis__check_hlds__det_analysis__enum_functor_desc_soln_context_0_1
};

#line 2017 "check_hlds.det_analysis.c"
static const MR_Integer check_hlds__det_analysis__check_hlds__det_analysis__functor_number_map_soln_context_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2023 "check_hlds.det_analysis.c"
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

#line 2044 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____pess_info_0_0_10001(
#line 2047 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 2049 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2)
#line 2051 "check_hlds.det_analysis.c"
{
#line 2053 "check_hlds.det_analysis.c"
  {
#line 2055 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2058 "check_hlds.det_analysis.c"
    {
#line 2060 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis____Unify____pess_info_0_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2));
    }
#line 2063 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2065 "check_hlds.det_analysis.c"
  }
#line 2067 "check_hlds.det_analysis.c"
}

#line 2070 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____pess_info_0_0_10001(
#line 2073 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 2075 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 2077 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3)
#line 2079 "check_hlds.det_analysis.c"
{
#line 2081 "check_hlds.det_analysis.c"
  {
#line 2083 "check_hlds.det_analysis.c"
    MR_Word check_hlds__det_analysis__conv0_HeadVar__1_1;

#line 2086 "check_hlds.det_analysis.c"
    {
#line 2088 "check_hlds.det_analysis.c"
      check_hlds__det_analysis____Compare____pess_info_0_0(&check_hlds__det_analysis__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), ((MR_Word) check_hlds__det_analysis__wrapper_arg_3));
    }
#line 2091 "check_hlds.det_analysis.c"
    *check_hlds__det_analysis__wrapper_arg_1 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__1_1));
#line 2093 "check_hlds.det_analysis.c"
  }
#line 2095 "check_hlds.det_analysis.c"
}

#line 2098 "check_hlds.det_analysis.c"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____soln_context_0_0_10001(
#line 2101 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 2103 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2)
#line 2105 "check_hlds.det_analysis.c"
{
#line 2107 "check_hlds.det_analysis.c"
  {
#line 2109 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2112 "check_hlds.det_analysis.c"
    {
#line 2114 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__succeeded = check_hlds__det_analysis____Unify____soln_context_0_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2));
    }
#line 2117 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2119 "check_hlds.det_analysis.c"
  }
#line 2121 "check_hlds.det_analysis.c"
}

#line 2124 "check_hlds.det_analysis.c"
static void MR_CALL 
check_hlds__det_analysis____Compare____soln_context_0_0_10001(
#line 2127 "check_hlds.det_analysis.c"
  MR_Box * check_hlds__det_analysis__wrapper_arg_1,
#line 2129 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 2131 "check_hlds.det_analysis.c"
  MR_Box check_hlds__det_analysis__wrapper_arg_3)
#line 2133 "check_hlds.det_analysis.c"
{
#line 2135 "check_hlds.det_analysis.c"
  {
#line 2137 "check_hlds.det_analysis.c"
    MR_Word check_hlds__det_analysis__conv0_HeadVar__1_1;

#line 2140 "check_hlds.det_analysis.c"
    {
#line 2142 "check_hlds.det_analysis.c"
      check_hlds__det_analysis____Compare____soln_context_0_0(&check_hlds__det_analysis__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), ((MR_Word) check_hlds__det_analysis__wrapper_arg_3));
    }
#line 2145 "check_hlds.det_analysis.c"
    *check_hlds__det_analysis__wrapper_arg_1 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__1_1));
#line 2147 "check_hlds.det_analysis.c"
  }
#line 2149 "check_hlds.det_analysis.c"
}

#line 1143 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Attributes_12,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_13,
#line 1143 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_14,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1143 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1143 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1143 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44,
#line 1143 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45)
#line 1143 "det_analysis.m"
{
#line 1151 "det_analysis.m"
  {
#line 1151 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1151 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_22;
#line 1151 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo_24;
#line 1151 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDetism_25;
#line 1155 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_23_23;

#line 1154 "det_analysis.m"
    {
#line 1154 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, &check_hlds__det_analysis__ModuleInfo_22);
    }
#line 1155 "det_analysis.m"
    {
#line 1155 "det_analysis.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__det_analysis__ModuleInfo_22, check_hlds__det_analysis__PredId_13, check_hlds__det_analysis__ProcId_14, &check_hlds__det_analysis__V_23_23, &check_hlds__det_analysis__ProcInfo_24);
    }
#line 1156 "det_analysis.m"
    {
#line 1156 "det_analysis.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__MaybeDetism_25);
    }
#line 1215 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDetism_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1216 "det_analysis.m"
      {
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TypeCtorInfo_143_143;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcPieces_42;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_43;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_47_47;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_52_52;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_70_70;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_71_71;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_72_72;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_73_73;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_138;
#line 1216 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_139;

#line 1217 "det_analysis.m"
        {
#line 1217 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__Context_139);
        }
#line 1219 "det_analysis.m"
        {
#line 1219 "det_analysis.m"
          check_hlds__det_analysis__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1219 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1219 "det_analysis.m"
        }
#line 1218 "det_analysis.m"
        {
#line 1218 "det_analysis.m"
          check_hlds__det_analysis__ProcPieces_42 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 1, check_hlds__det_analysis__V_47_47);
        }
#line 2252 "check_hlds.det_analysis.c"
        check_hlds__det_analysis__TypeCtorInfo_143_143 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1220 "det_analysis.m"
        {
#line 1220 "det_analysis.m"
          check_hlds__det_analysis__V_52_52 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_143_143, check_hlds__det_analysis__ProcPieces_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[23]));
        }
#line 1220 "det_analysis.m"
        {
#line 1220 "det_analysis.m"
          check_hlds__det_analysis__Pieces_43 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_143_143, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[92]), check_hlds__det_analysis__V_52_52);
        }
#line 1224 "det_analysis.m"
        {
#line 1224 "det_analysis.m"
          check_hlds__det_analysis__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_73_73, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_43));
#line 1224 "det_analysis.m"
        }
#line 1224 "det_analysis.m"
        {
#line 1224 "det_analysis.m"
          check_hlds__det_analysis__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_72_72, 0) = ((MR_Box) (check_hlds__det_analysis__V_73_73));
#line 1224 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1224 "det_analysis.m"
        }
#line 1224 "det_analysis.m"
        {
#line 1224 "det_analysis.m"
          check_hlds__det_analysis__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_71_71, 0) = ((MR_Box) (check_hlds__det_analysis__Context_139));
#line 1224 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_71_71, 1) = ((MR_Box) (check_hlds__det_analysis__V_72_72));
#line 1224 "det_analysis.m"
        }
#line 1224 "det_analysis.m"
        {
#line 1224 "det_analysis.m"
          check_hlds__det_analysis__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_70_70, 0) = ((MR_Box) (check_hlds__det_analysis__V_71_71));
#line 1224 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1224 "det_analysis.m"
        }
#line 1223 "det_analysis.m"
        {
#line 1223 "det_analysis.m"
          check_hlds__det_analysis__Spec_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1223 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_138, 2) = ((MR_Box) (check_hlds__det_analysis__V_70_70));
#line 1223 "det_analysis.m"
        }
#line 1225 "det_analysis.m"
        {
#line 1225 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_138, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);
        }
#line 1226 "det_analysis.m"
        *check_hlds__det_analysis__Detism_19 = (MR_Integer) 6;
#line 1227 "det_analysis.m"
        *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1216 "det_analysis.m"
      }
#line 1215 "det_analysis.m"
    else
#line 1158 "det_analysis.m"
      {
#line 1158 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Detism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDetism_25, (MR_Integer) 0)));
#line 1158 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_27;
#line 1158 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NumSolns0_28;
#line 1158 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NumSolns_39;
#line 1158 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107;
#line 1162 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_77_77;

#line 1159 "det_analysis.m"
        {
#line 1159 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism0_26, &check_hlds__det_analysis__CanFail_27, &check_hlds__det_analysis__NumSolns0_28);
        }
#line 1161 "det_analysis.m"
        {
#line 1161 "det_analysis.m"
          check_hlds__det_analysis__V_77_77 = parse_tree__prog_data__get_may_throw_exception_1_f_0(check_hlds__det_analysis__Attributes_12);
        }
#line 1162 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_77_77 == (MR_Integer) 0);
#line 1162 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1163 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Detism0_26 == (MR_Integer) 6);
#line 1177 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1165 "det_analysis.m"
          {
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcContext_29;
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowProcPieces_30;
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowPieces_31;
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WillNotThrowSpec_32;
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_79_79;
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_101_101;
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_102_102;
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_103_103;
#line 1165 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_104_104;

#line 1165 "det_analysis.m"
            {
#line 1165 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__ProcContext_29);
            }
#line 1167 "det_analysis.m"
            {
#line 1167 "det_analysis.m"
              check_hlds__det_analysis__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_79_79, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1167 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_79_79, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1167 "det_analysis.m"
            }
#line 1166 "det_analysis.m"
            {
#line 1166 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowProcPieces_30 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 1, check_hlds__det_analysis__V_79_79);
            }
#line 1168 "det_analysis.m"
            {
#line 1168 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__WillNotThrowProcPieces_30, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[34]));
            }
#line 1175 "det_analysis.m"
            {
#line 1175 "det_analysis.m"
              check_hlds__det_analysis__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_104_104, 0) = ((MR_Box) (check_hlds__det_analysis__WillNotThrowPieces_31));
#line 1175 "det_analysis.m"
            }
#line 1175 "det_analysis.m"
            {
#line 1175 "det_analysis.m"
              check_hlds__det_analysis__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 0) = ((MR_Box) (check_hlds__det_analysis__V_104_104));
#line 1175 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1175 "det_analysis.m"
            }
#line 1175 "det_analysis.m"
            {
#line 1175 "det_analysis.m"
              check_hlds__det_analysis__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_102_102, 0) = ((MR_Box) (check_hlds__det_analysis__ProcContext_29));
#line 1175 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_102_102, 1) = ((MR_Box) (check_hlds__det_analysis__V_103_103));
#line 1175 "det_analysis.m"
            }
#line 1175 "det_analysis.m"
            {
#line 1175 "det_analysis.m"
              check_hlds__det_analysis__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_101_101, 0) = ((MR_Box) (check_hlds__det_analysis__V_102_102));
#line 1175 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1175 "det_analysis.m"
            }
#line 1174 "det_analysis.m"
            {
#line 1174 "det_analysis.m"
              check_hlds__det_analysis__WillNotThrowSpec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1174 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__WillNotThrowSpec_32, 2) = ((MR_Box) (check_hlds__det_analysis__V_101_101));
#line 1174 "det_analysis.m"
            }
#line 1176 "det_analysis.m"
            {
#line 1176 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__WillNotThrowSpec_32, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107);
            }
#line 1165 "det_analysis.m"
          }
#line 1177 "det_analysis.m"
        else
#line 1177 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_44;
#line 1181 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns0_28 == (MR_Integer) 2);
#line 1181 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1182 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_17 == (MR_Integer) 0);
#line 1201 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1184 "det_analysis.m"
          {
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_141_141;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__GoalContext_33;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_34;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WrongContextPredPieces_35;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__WrongContextFirstPieces_36;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ContextMsgs_37;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_38;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_113_113;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_114_114;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_117_117;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_118_118;
#line 1184 "det_analysis.m"
            MR_String check_hlds__det_analysis__V_119_119;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_128_128;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_129_129;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_130_130;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_131_131;
#line 1184 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_132_132;

#line 1184 "det_analysis.m"
            {
#line 1184 "det_analysis.m"
              check_hlds__det_analysis__GoalContext_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1185 "det_analysis.m"
            {
#line 1185 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_24, &check_hlds__det_analysis__VarSet_34);
            }
#line 1186 "det_analysis.m"
            {
#line 1186 "det_analysis.m"
              check_hlds__det_analysis__WrongContextPredPieces_35 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_analysis__ModuleInfo_22, (MR_Integer) 0, check_hlds__det_analysis__PredId_13);
            }
#line 2527 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1191 "det_analysis.m"
            {
#line 1191 "det_analysis.m"
              check_hlds__det_analysis__V_119_119 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__Detism0_26);
            }
#line 1191 "det_analysis.m"
            {
#line 1191 "det_analysis.m"
              check_hlds__det_analysis__V_118_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_118_118, 0) = ((MR_Box) (check_hlds__det_analysis__V_119_119));
#line 1191 "det_analysis.m"
            }
#line 1191 "det_analysis.m"
            {
#line 1191 "det_analysis.m"
              check_hlds__det_analysis__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_117_117, 0) = ((MR_Box) (check_hlds__det_analysis__V_118_118));
#line 1191 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1191 "det_analysis.m"
            }
#line 1190 "det_analysis.m"
            {
#line 1190 "det_analysis.m"
              check_hlds__det_analysis__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[103])));
#line 1190 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 1) = ((MR_Box) (check_hlds__det_analysis__V_117_117));
#line 1190 "det_analysis.m"
            }
#line 1189 "det_analysis.m"
            {
#line 1189 "det_analysis.m"
              check_hlds__det_analysis__V_113_113 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_141_141, check_hlds__det_analysis__WrongContextPredPieces_35, check_hlds__det_analysis__V_114_114);
            }
#line 1188 "det_analysis.m"
            {
#line 1188 "det_analysis.m"
              check_hlds__det_analysis__WrongContextFirstPieces_36 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_141_141, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[102]), check_hlds__det_analysis__V_113_113);
            }
#line 1194 "det_analysis.m"
            {
#line 1194 "det_analysis.m"
              check_hlds__det_analysis__ContextMsgs_37 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_22, check_hlds__det_analysis__VarSet_34, check_hlds__det_analysis__RightFailingContexts_18);
            }
#line 1197 "det_analysis.m"
            {
#line 1197 "det_analysis.m"
              check_hlds__det_analysis__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_132_132, 0) = ((MR_Box) (check_hlds__det_analysis__WrongContextFirstPieces_36));
#line 1197 "det_analysis.m"
            }
#line 1197 "det_analysis.m"
            {
#line 1197 "det_analysis.m"
              check_hlds__det_analysis__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 0) = ((MR_Box) (check_hlds__det_analysis__V_132_132));
#line 1197 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "det_analysis.m"
            }
#line 1197 "det_analysis.m"
            {
#line 1197 "det_analysis.m"
              check_hlds__det_analysis__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (check_hlds__det_analysis__GoalContext_33));
#line 1197 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__V_131_131));
#line 1197 "det_analysis.m"
            }
#line 1197 "det_analysis.m"
            {
#line 1197 "det_analysis.m"
              check_hlds__det_analysis__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_129_129, 0) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 1197 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "det_analysis.m"
            }
#line 1197 "det_analysis.m"
            {
#line 1197 "det_analysis.m"
              check_hlds__det_analysis__V_128_128 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_129_129, check_hlds__det_analysis__ContextMsgs_37);
            }
#line 1196 "det_analysis.m"
            {
#line 1196 "det_analysis.m"
              check_hlds__det_analysis__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1196 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_38, 2) = ((MR_Box) (check_hlds__det_analysis__V_128_128));
#line 1196 "det_analysis.m"
            }
#line 1199 "det_analysis.m"
            {
#line 1199 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_38, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45);
            }
#line 1200 "det_analysis.m"
            check_hlds__det_analysis__NumSolns_39 = (MR_Integer) 3;
#line 1184 "det_analysis.m"
          }
#line 1201 "det_analysis.m"
        else
#line 1202 "det_analysis.m"
          {
#line 1202 "det_analysis.m"
            check_hlds__det_analysis__NumSolns_39 = check_hlds__det_analysis__NumSolns0_28;
#line 1202 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_107_107;
#line 1202 "det_analysis.m"
          }
#line 1204 "det_analysis.m"
        {
#line 1204 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__NumSolns_39);
        }
#line 1211 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_27 == (MR_Integer) 0))
#line 1206 "det_analysis.m"
          {
#line 1206 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Context_40;
#line 1206 "det_analysis.m"
            MR_Word check_hlds__det_analysis__FailingContext_41;
#line 1206 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_136_136;

#line 1207 "det_analysis.m"
            {
#line 1207 "det_analysis.m"
              check_hlds__det_analysis__Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1209 "det_analysis.m"
            {
#line 1209 "det_analysis.m"
              check_hlds__det_analysis__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1209 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 1) = ((MR_Box) (check_hlds__det_analysis__PredId_13));
#line 1209 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_136_136, 2) = ((MR_Box) (check_hlds__det_analysis__ProcId_14));
#line 1209 "det_analysis.m"
            }
#line 1208 "det_analysis.m"
            {
#line 1208 "det_analysis.m"
              check_hlds__det_analysis__FailingContext_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1208 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_41, 0) = ((MR_Box) (check_hlds__det_analysis__Context_40));
#line 1208 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_41, 1) = ((MR_Box) (check_hlds__det_analysis__V_136_136));
#line 1208 "det_analysis.m"
            }
#line 1210 "det_analysis.m"
            {
#line 1210 "det_analysis.m"
              MR_Word base;
#line 1210 "det_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "det_analysis.m"
              *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 1210 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_41));
#line 1210 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1210 "det_analysis.m"
            }
#line 1206 "det_analysis.m"
          }
#line 1211 "det_analysis.m"
        else
#line 1213 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1158 "det_analysis.m"
      }
#line 1151 "det_analysis.m"
  }
#line 1143 "det_analysis.m"
}

#line 1503 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1503__1_2_p_0(
#line 1503 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalFailingContexts_18,
#line 1503 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_52)
#line 1503 "det_analysis.m"
{
#line 1503 "det_analysis.m"
  {
#line 1503 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 1503 "det_analysis.m"
    {
#line 1503 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[1], ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts_18)), ((MR_Box) (check_hlds__det_analysis__HeadVar__2_52)));
    }
#line 1503 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1503 "det_analysis.m"
  }
#line 1503 "det_analysis.m"
}

#line 366 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2(
#line 366 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 366 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2)
#line 366 "det_analysis.m"
{
#line 366 "det_analysis.m"
  {
#line 366 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 366 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 366 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 2)));
#line 366 "det_analysis.m"
    MR_String check_hlds__det_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 3)));
#line 366 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 4)));
#line 366 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_15_15;
#line 366 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__V_16_16;

#line 366 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__det_analysis__V_8_8));
#line 366 "det_analysis.m"
    check_hlds__det_analysis__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 366 "det_analysis.m"
    check_hlds__det_analysis__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 366 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)) = ((MR_Box) (check_hlds__det_analysis__V_11_11));
#line 366 "det_analysis.m"
    (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (check_hlds__det_analysis__V_12_12));
#line 366 "det_analysis.m"
    {
#line 366 "det_analysis.m"
      check_hlds__det_analysis__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_analysis__V_9_9, check_hlds__det_analysis__V_15_15);
    }
#line 366 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 366 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__V_10_10 == check_hlds__det_analysis__V_16_16);
#line 366 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 366 "det_analysis.m"
  }
#line 366 "det_analysis.m"
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
#line 2842 "check_hlds.det_analysis.c"
  {
#line 2844 "check_hlds.det_analysis.c"
    MR_bool check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__2_1 == check_hlds__det_analysis__HeadVar__2_2);

#line 2847 "check_hlds.det_analysis.c"
    return check_hlds__det_analysis__succeeded;
#line 2849 "check_hlds.det_analysis.c"
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
#line 2878 "check_hlds.det_analysis.c"
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
#line 2900 "check_hlds.det_analysis.c"
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

#line 2961 "check_hlds.det_analysis.c"
        {
#line 2963 "check_hlds.det_analysis.c"
          check_hlds__det_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[2], ((MR_Box) (check_hlds__det_analysis__V_3_3)), ((MR_Box) (check_hlds__det_analysis__V_5_5)));
        }
#line 86 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 2968 "check_hlds.det_analysis.c"
          {
#line 2970 "check_hlds.det_analysis.c"
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

#line 2139 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(
#line 2139 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2139 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15,
#line 2139 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16)
#line 2139 "det_analysis.m"
{
#line 2142 "det_analysis.m"
  {
#line 2142 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 2142 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_18_18;
#line 2142 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_19_19;
#line 2142 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 2142 "det_analysis.m"
    MR_Integer check_hlds__det_analysis__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2142 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredInfo0_7;
#line 2142 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Procs0_8;
#line 2142 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo0_9;
#line 2142 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDet_10;
#line 2145 "det_analysis.m"
    MR_Box check_hlds__det_analysis__conv0_ProcInfo0_9;

#line 2143 "det_analysis.m"
    {
#line 2143 "det_analysis.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__det_analysis__PredId_4, &check_hlds__det_analysis__PredInfo0_7);
    }
#line 2144 "det_analysis.m"
    {
#line 2144 "det_analysis.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_analysis__PredInfo0_7, &check_hlds__det_analysis__Procs0_8);
    }
#line 3026 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3028 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 2145 "det_analysis.m"
    {
#line 2145 "det_analysis.m"
      mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_18_18, check_hlds__det_analysis__TypeCtorInfo_19_19, check_hlds__det_analysis__Procs0_8, ((MR_Box) (check_hlds__det_analysis__ProcId_5)), &check_hlds__det_analysis__conv0_ProcInfo0_9);
    }
#line 2145 "det_analysis.m"
    check_hlds__det_analysis__ProcInfo0_9 = ((MR_Word) check_hlds__det_analysis__conv0_ProcInfo0_9);
#line 2146 "det_analysis.m"
    {
#line 2146 "det_analysis.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_9, &check_hlds__det_analysis__MaybeDet_10);
    }
#line 2153 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2154 "det_analysis.m"
      *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15;
#line 2153 "det_analysis.m"
    else
#line 2148 "det_analysis.m"
      {
#line 2148 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDet_10, (MR_Integer) 0)));
#line 2148 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_12;
#line 2148 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Procs_13;
#line 2148 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredInfo_14;

#line 2149 "det_analysis.m"
        {
#line 2149 "det_analysis.m"
          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(check_hlds__det_analysis__Det_11, check_hlds__det_analysis__ProcInfo0_9, &check_hlds__det_analysis__ProcInfo_12);
        }
#line 2150 "det_analysis.m"
        {
#line 2150 "det_analysis.m"
          mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_18_18, check_hlds__det_analysis__TypeCtorInfo_19_19, ((MR_Box) (check_hlds__det_analysis__ProcId_5)), ((MR_Box) (check_hlds__det_analysis__ProcInfo_12)), check_hlds__det_analysis__Procs0_8, &check_hlds__det_analysis__Procs_13);
        }
#line 2151 "det_analysis.m"
        {
#line 2151 "det_analysis.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__det_analysis__Procs_13, check_hlds__det_analysis__PredInfo0_7, &check_hlds__det_analysis__PredInfo_14);
        }
#line 2152 "det_analysis.m"
        {
#line 2152 "det_analysis.m"
          hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__det_analysis__PredId_4, check_hlds__det_analysis__PredInfo_14, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_15, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16);
#line 2152 "det_analysis.m"
          return;
        }
#line 2148 "det_analysis.m"
      }
#line 2142 "det_analysis.m"
  }
#line 2139 "det_analysis.m"
}

#line 2091 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_procs_9_p_0(
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4,
#line 2091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6,
#line 2091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7,
#line 2091 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8,
#line 2091 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9)
#line 2091 "det_analysis.m"
{
#line 2097 "det_analysis.m"
  while (MR_TRUE)
#line 2097 "det_analysis.m"
    {
#line 2097 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 2097 "det_analysis.m"
      {
#line 2097 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 2097 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2097 "det_analysis.m"
          {
#line 2098 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_9 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8;
#line 2098 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_7 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2098 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_5 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2097 "det_analysis.m"
          }
#line 2097 "det_analysis.m"
        else
#line 2100 "det_analysis.m"
          {
#line 2100 "det_analysis.m"
            MR_Integer check_hlds__det_analysis__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 2100 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 2100 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredProcId_28;
#line 2100 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41;
#line 2100 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42;
#line 2100 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43;

#line 2101 "det_analysis.m"
            {
#line 2101 "det_analysis.m"
              check_hlds__det_analysis__PredProcId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2101 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PredProcId_28, 0) = ((MR_Box) (check_hlds__det_analysis__HeadVar__1_1));
#line 2101 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PredProcId_28, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_23));
#line 2101 "det_analysis.m"
            }
#line 2108 "det_analysis.m"
            {
#line 2108 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__det_analysis__HeadVar__2_2);
            }
#line 2109 "det_analysis.m"
            if (!(check_hlds__det_analysis__succeeded))
#line 2109 "det_analysis.m"
              {
#line 2110 "det_analysis.m"
                {
#line 2110 "det_analysis.m"
                  MR_Integer check_hlds__det_analysis__V_49_49;

#line 2110 "det_analysis.m"
                  {
#line 2110 "det_analysis.m"
                    check_hlds__det_analysis__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__det_analysis__HeadVar__2_2);
                  }
#line 2110 "det_analysis.m"
                  if (check_hlds__det_analysis__succeeded)
#line 2110 "det_analysis.m"
                    {
#line 2111 "det_analysis.m"
                      {
#line 2111 "det_analysis.m"
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__det_analysis__V_49_49);
                      }
#line 2111 "det_analysis.m"
                      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ProcId_23 == check_hlds__det_analysis__V_49_49);
#line 2110 "det_analysis.m"
                    }
#line 2110 "det_analysis.m"
                }
#line 2109 "det_analysis.m"
                if (!(check_hlds__det_analysis__succeeded))
#line 2113 "det_analysis.m"
                  {
#line 2113 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__Markers_29;

#line 2113 "det_analysis.m"
                    {
#line 2113 "det_analysis.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_analysis__HeadVar__2_2, &check_hlds__det_analysis__Markers_29);
                    }
#line 2114 "det_analysis.m"
                    {
#line 2114 "det_analysis.m"
                      check_hlds__det_analysis__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__det_analysis__Markers_29, (MR_Integer) 9);
                    }
#line 2113 "det_analysis.m"
                  }
#line 2109 "det_analysis.m"
              }
#line 2118 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 2117 "det_analysis.m"
              {
#line 2117 "det_analysis.m"
                {
#line 2117 "det_analysis.m"
                  check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2117 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8));
#line 2117 "det_analysis.m"
                }
#line 2117 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2117 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2117 "det_analysis.m"
              }
#line 2118 "det_analysis.m"
            else
#line 2119 "det_analysis.m"
              {
#line 2119 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ProcTable_30;
#line 2119 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ProcInfo_31;
#line 2119 "det_analysis.m"
                MR_Word check_hlds__det_analysis__MaybeDetism_32;
#line 2120 "det_analysis.m"
                MR_Box check_hlds__det_analysis__conv0_ProcInfo_31;

#line 2119 "det_analysis.m"
                {
#line 2119 "det_analysis.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_analysis__HeadVar__2_2, &check_hlds__det_analysis__ProcTable_30);
                }
#line 2120 "det_analysis.m"
                {
#line 2120 "det_analysis.m"
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_analysis__ProcTable_30, ((MR_Box) (check_hlds__det_analysis__ProcId_23)), &check_hlds__det_analysis__conv0_ProcInfo_31);
                }
#line 2120 "det_analysis.m"
                check_hlds__det_analysis__ProcInfo_31 = ((MR_Word) check_hlds__det_analysis__conv0_ProcInfo_31);
#line 2121 "det_analysis.m"
                {
#line 2121 "det_analysis.m"
                  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_31, &check_hlds__det_analysis__MaybeDetism_32);
                }
#line 2125 "det_analysis.m"
                if ((check_hlds__det_analysis__MaybeDetism_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2123 "det_analysis.m"
                  {
#line 2124 "det_analysis.m"
                    {
#line 2124 "det_analysis.m"
                      check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2124 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6));
#line 2124 "det_analysis.m"
                    }
#line 2123 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4;
#line 2123 "det_analysis.m"
                  }
#line 2125 "det_analysis.m"
                else
#line 2126 "det_analysis.m"
                  {
#line 2127 "det_analysis.m"
                    {
#line 2127 "det_analysis.m"
                      check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2127 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42, 0) = ((MR_Box) (check_hlds__det_analysis__PredProcId_28));
#line 2127 "det_analysis.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4));
#line 2127 "det_analysis.m"
                    }
#line 2126 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6;
#line 2126 "det_analysis.m"
                  }
#line 2119 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8;
#line 2119 "det_analysis.m"
              }
#line 2130 "det_analysis.m"
            /* direct tailcall eliminated */
#line 2130 "det_analysis.m"
            {
#line 2130 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__3__tmp_copy_3 = check_hlds__det_analysis__ProcIds_24;
#line 2130 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_42_42;
#line 2130 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_43_43;
#line 2130 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_41_41;

#line 2130 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_8;
#line 2130 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_6;
#line 2130 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_4;
#line 2130 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__3_3 = check_hlds__det_analysis__HeadVar__3__tmp_copy_3;
#line 2130 "det_analysis.m"
            }
#line 2130 "det_analysis.m"
            continue;
#line 2100 "det_analysis.m"
          }
#line 2097 "det_analysis.m"
      }
#line 2097 "det_analysis.m"
      break;
#line 2097 "det_analysis.m"
    }
#line 2091 "det_analysis.m"
}

#line 2075 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_declarations_preds_8_p_0(
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__2_2,
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3,
#line 2075 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4,
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5,
#line 2075 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6,
#line 2075 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7,
#line 2075 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8)
#line 2075 "det_analysis.m"
{
#line 2080 "det_analysis.m"
  while (MR_TRUE)
#line 2080 "det_analysis.m"
    {
#line 2080 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 2080 "det_analysis.m"
      {
#line 2080 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 2080 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2080 "det_analysis.m"
          {
#line 2081 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_8 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7;
#line 2081 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_6 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5;
#line 2081 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_4 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3;
#line 2080 "det_analysis.m"
          }
#line 2080 "det_analysis.m"
        else
#line 2083 "det_analysis.m"
          {
#line 2083 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 0)));
#line 2083 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__2_2, (MR_Integer) 1)));
#line 2083 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredInfo_25;
#line 2083 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcIds_26;
#line 2083 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33;
#line 2083 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34;
#line 2083 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35;
#line 2084 "det_analysis.m"
            MR_Box check_hlds__det_analysis__conv0_PredInfo_25;

#line 2084 "det_analysis.m"
            {
#line 2084 "det_analysis.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_analysis__HeadVar__1_1, ((MR_Box) (check_hlds__det_analysis__PredId_20)), &check_hlds__det_analysis__conv0_PredInfo_25);
            }
#line 2084 "det_analysis.m"
            check_hlds__det_analysis__PredInfo_25 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo_25);
#line 2085 "det_analysis.m"
            {
#line 2085 "det_analysis.m"
              check_hlds__det_analysis__ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__det_analysis__PredInfo_25);
            }
#line 2086 "det_analysis.m"
            {
#line 2086 "det_analysis.m"
              check_hlds__det_analysis__determinism_declarations_procs_9_p_0(check_hlds__det_analysis__PredId_20, check_hlds__det_analysis__PredInfo_25, check_hlds__det_analysis__ProcIds_26, check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3, &check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33, check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5, &check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34, check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7, &check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35);
            }
#line 2088 "det_analysis.m"
            /* direct tailcall eliminated */
#line 2088 "det_analysis.m"
            {
#line 2088 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__2__tmp_copy_2 = check_hlds__det_analysis__PredIds_21;
#line 2088 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_3 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_33_33;
#line 2088 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_5 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_34_34;
#line 2088 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_7 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_35_35;

#line 2088 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0_7 = check_hlds__det_analysis__STATE_VARIABLE_NoInferProcs_0__tmp_copy_7;
#line 2088 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0_5 = check_hlds__det_analysis__STATE_VARIABLE_UndeclaredProcs_0__tmp_copy_5;
#line 2088 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0_3 = check_hlds__det_analysis__STATE_VARIABLE_DeclaredProcs_0__tmp_copy_3;
#line 2088 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__2_2 = check_hlds__det_analysis__HeadVar__2__tmp_copy_2;
#line 2088 "det_analysis.m"
            }
#line 2088 "det_analysis.m"
            continue;
#line 2083 "det_analysis.m"
          }
#line 2080 "det_analysis.m"
      }
#line 2080 "det_analysis.m"
      break;
#line 2080 "det_analysis.m"
    }
#line 2075 "det_analysis.m"
}

#line 2035 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(
#line 2035 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2035 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2)
#line 2035 "det_analysis.m"
{
#line 2037 "det_analysis.m"
  {
#line 2037 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2037 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2038 "det_analysis.m"
      *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2037 "det_analysis.m"
    else
#line 2037 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 2039 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2037 "det_analysis.m"
      else
#line 2037 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2037 "det_analysis.m"
          {
#line 2037 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 2037 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2037 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 2037 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 2037 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_8_8;

#line 2037 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 4)));
#line 2037 "det_analysis.m"
            check_hlds__det_analysis__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 5)));
#line 2037 "det_analysis.m"
          }
#line 2037 "det_analysis.m"
        else
#line 2037 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2041 "det_analysis.m"
            {
#line 2041 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 2041 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_22_22;

#line 2041 "det_analysis.m"
              *check_hlds__det_analysis__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 2)));
#line 2041 "det_analysis.m"
              check_hlds__det_analysis__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 3)));
#line 2041 "det_analysis.m"
            }
#line 2037 "det_analysis.m"
          else
#line 2040 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2037 "det_analysis.m"
  }
#line 2035 "det_analysis.m"
}

#line 2014 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(
#line 2014 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 2014 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2)
#line 2014 "det_analysis.m"
{
#line 2016 "det_analysis.m"
  {
#line 2016 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 2016 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2016 "det_analysis.m"
      *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2016 "det_analysis.m"
    else
#line 2016 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 2017 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2016 "det_analysis.m"
      else
#line 2016 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2018 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2016 "det_analysis.m"
        else
#line 2016 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2024 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 0;
#line 2016 "det_analysis.m"
          else
#line 2019 "det_analysis.m"
            *check_hlds__det_analysis__HeadVar__2_2 = (MR_Integer) 1;
#line 2016 "det_analysis.m"
  }
#line 2014 "det_analysis.m"
}

#line 2004 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(
#line 2004 "det_analysis.m"
  MR_Word check_hlds__det_analysis__DetInfo_3,
#line 2004 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Type_4)
#line 2004 "det_analysis.m"
{
#line 2007 "det_analysis.m"
  {
#line 2007 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 2007 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_5;
#line 2009 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_6_6;

#line 2008 "det_analysis.m"
    {
#line 2008 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__DetInfo_3, &check_hlds__det_analysis__ModuleInfo_5);
    }
#line 2009 "det_analysis.m"
    {
#line 2009 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(check_hlds__det_analysis__ModuleInfo_5, check_hlds__det_analysis__Type_4, &check_hlds__det_analysis__V_6_6);
    }
#line 2007 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 2007 "det_analysis.m"
  }
#line 2004 "det_analysis.m"
}

#line 1877 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_12,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ExaminesRepresentation_13,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CanFail_14,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_15,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsA_16,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__FailingContextsB_17,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalContext_19,
#line 1877 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__NumSolns_20,
#line 1877 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41,
#line 1877 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42)
#line 1877 "det_analysis.m"
{
#line 1997 "det_analysis.m"
  {
#line 1997 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ExaminesRepresentation_13 == (MR_Integer) 1);
#line 1997 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ProcInfo_22;
#line 1997 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Type_24;
#line 1890 "det_analysis.m"
    MR_Word check_hlds__det_analysis__VarTypes_23;

#line 1890 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1890 "det_analysis.m"
      {
#line 1891 "det_analysis.m"
        {
#line 1891 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, &check_hlds__det_analysis__ProcInfo_22);
        }
#line 1892 "det_analysis.m"
        {
#line 1892 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarTypes_23);
        }
#line 1893 "det_analysis.m"
        {
#line 1893 "det_analysis.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_analysis__VarTypes_23, check_hlds__det_analysis__Var_12, &check_hlds__det_analysis__Type_24);
        }
#line 1894 "det_analysis.m"
        {
#line 1894 "det_analysis.m"
          check_hlds__det_analysis__succeeded = check_hlds__det_analysis__det_type_has_user_defined_equality_pred_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__Type_24);
        }
#line 1890 "det_analysis.m"
      }
#line 1997 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1989 "det_analysis.m"
      {
#line 1937 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_14 == (MR_Integer) 0))
#line 1897 "det_analysis.m"
          {
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Context_25;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_26;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Pieces0_28;
#line 1897 "det_analysis.m"
            MR_String check_hlds__det_analysis__ErrorMsg_30;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Pieces1_33;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_35;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_130_130;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_131_131;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_134_134;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_135_135;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_178_178;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_179_179;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_180_180;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_181_181;
#line 1897 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_182_182;

#line 1898 "det_analysis.m"
            {
#line 1898 "det_analysis.m"
              check_hlds__det_analysis__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
            }
#line 1899 "det_analysis.m"
            {
#line 1899 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarSet_26);
            }
#line 3726 "check_hlds.det_analysis.c"
            if ((check_hlds__det_analysis__GoalContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3728 "check_hlds.det_analysis.c"
              {
#line 3730 "check_hlds.det_analysis.c"
                MR_String check_hlds__det_analysis__VarStr_27;
#line 3732 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__V_122_122;
#line 3734 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__V_123_123;

#line 1902 "det_analysis.m"
                {
#line 1902 "det_analysis.m"
                  check_hlds__det_analysis__VarStr_27 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_26, (MR_Integer) 0, check_hlds__det_analysis__Var_12);
                }
#line 1903 "det_analysis.m"
                {
#line 1903 "det_analysis.m"
                  check_hlds__det_analysis__V_123_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "det_analysis.m"
                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_123_123, 0) = ((MR_Box) (check_hlds__det_analysis__VarStr_27));
#line 1903 "det_analysis.m"
                }
#line 1903 "det_analysis.m"
                {
#line 1903 "det_analysis.m"
                  check_hlds__det_analysis__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_122_122, 0) = ((MR_Box) (check_hlds__det_analysis__V_123_123));
#line 1903 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[55])));
#line 1903 "det_analysis.m"
                }
#line 1903 "det_analysis.m"
                {
#line 1903 "det_analysis.m"
                  check_hlds__det_analysis__Pieces0_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[122])));
#line 1903 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_28, 1) = ((MR_Box) (check_hlds__det_analysis__V_122_122));
#line 1903 "det_analysis.m"
                }
#line 1914 "det_analysis.m"
                check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "error:";
#line 3772 "check_hlds.det_analysis.c"
              }
#line 3774 "check_hlds.det_analysis.c"
            else
#line 3776 "check_hlds.det_analysis.c"
              {
#line 3778 "check_hlds.det_analysis.c"
                MR_Word check_hlds__det_analysis__UnifyContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalContext_19, (MR_Integer) 0)));

#line 1907 "det_analysis.m"
                {
#line 1907 "det_analysis.m"
                  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(check_hlds__det_analysis__UnifyContext_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Pieces0_28);
                }
#line 1912 "det_analysis.m"
                if ((check_hlds__det_analysis__Pieces0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1911 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "Error:";
#line 1912 "det_analysis.m"
                else
#line 1914 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_30 = (MR_String) "error:";
#line 3794 "check_hlds.det_analysis.c"
              }
#line 1916 "det_analysis.m"
            {
#line 1916 "det_analysis.m"
              check_hlds__det_analysis__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1916 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__ErrorMsg_30));
#line 1916 "det_analysis.m"
            }
#line 1918 "det_analysis.m"
            {
#line 1918 "det_analysis.m"
              check_hlds__det_analysis__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1918 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_135_135, 1) = ((MR_Box) (check_hlds__det_analysis__Type_24));
#line 1918 "det_analysis.m"
            }
#line 1918 "det_analysis.m"
            {
#line 1918 "det_analysis.m"
              check_hlds__det_analysis__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 0) = ((MR_Box) (check_hlds__det_analysis__V_135_135));
#line 1918 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[125])));
#line 1918 "det_analysis.m"
            }
#line 1917 "det_analysis.m"
            {
#line 1917 "det_analysis.m"
              check_hlds__det_analysis__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1917 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[123])));
#line 1917 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_131_131, 1) = ((MR_Box) (check_hlds__det_analysis__V_134_134));
#line 1917 "det_analysis.m"
            }
#line 1916 "det_analysis.m"
            {
#line 1916 "det_analysis.m"
              check_hlds__det_analysis__Pieces1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_33, 0) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 1916 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_33, 1) = ((MR_Box) (check_hlds__det_analysis__V_131_131));
#line 1916 "det_analysis.m"
            }
#line 1934 "det_analysis.m"
            {
#line 1934 "det_analysis.m"
              check_hlds__det_analysis__V_182_182 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__Pieces0_28, check_hlds__det_analysis__Pieces1_33);
            }
#line 1934 "det_analysis.m"
            {
#line 1934 "det_analysis.m"
              check_hlds__det_analysis__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1934 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_181_181, 0) = ((MR_Box) (check_hlds__det_analysis__V_182_182));
#line 1934 "det_analysis.m"
            }
#line 1934 "det_analysis.m"
            {
#line 1934 "det_analysis.m"
              check_hlds__det_analysis__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1934 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_180_180, 0) = ((MR_Box) (check_hlds__det_analysis__V_181_181));
#line 1934 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_180_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[126])));
#line 1934 "det_analysis.m"
            }
#line 1933 "det_analysis.m"
            {
#line 1933 "det_analysis.m"
              check_hlds__det_analysis__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1933 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_179_179, 0) = ((MR_Box) (check_hlds__det_analysis__Context_25));
#line 1933 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_179_179, 1) = ((MR_Box) (check_hlds__det_analysis__V_180_180));
#line 1933 "det_analysis.m"
            }
#line 1935 "det_analysis.m"
            {
#line 1935 "det_analysis.m"
              check_hlds__det_analysis__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1935 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_178_178, 0) = ((MR_Box) (check_hlds__det_analysis__V_179_179));
#line 1935 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1935 "det_analysis.m"
            }
#line 1932 "det_analysis.m"
            {
#line 1932 "det_analysis.m"
              check_hlds__det_analysis__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1932 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1932 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1932 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_35, 2) = ((MR_Box) (check_hlds__det_analysis__V_178_178));
#line 1932 "det_analysis.m"
            }
#line 1936 "det_analysis.m"
            {
#line 1936 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_35, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);
            }
#line 1897 "det_analysis.m"
          }
#line 1937 "det_analysis.m"
        else
#line 1986 "det_analysis.m"
          if ((check_hlds__det_analysis__SolnContext_15 == (MR_Integer) 0))
#line 1940 "det_analysis.m"
            {
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ModuleInfo_39;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ContextMsgs_40;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_56_56;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_57_57;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_60_60;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_61_61;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_104_104;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_107_107;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_108_108;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_109_109;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_110_110;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_111_111;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_112_112;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Context_192;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__VarSet_193;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Pieces0_195;
#line 1940 "det_analysis.m"
              MR_String check_hlds__det_analysis__ErrorMsg_197;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Pieces1_198;
#line 1940 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Spec_200;

#line 1941 "det_analysis.m"
              {
#line 1941 "det_analysis.m"
                check_hlds__det_analysis__Context_192 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
              }
#line 1942 "det_analysis.m"
              {
#line 1942 "det_analysis.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_22, &check_hlds__det_analysis__VarSet_193);
              }
#line 3963 "check_hlds.det_analysis.c"
              if ((check_hlds__det_analysis__GoalContext_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3965 "check_hlds.det_analysis.c"
                {
#line 3967 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__V_48_48;
#line 3969 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__V_49_49;
#line 3971 "check_hlds.det_analysis.c"
                  MR_String check_hlds__det_analysis__VarStr_188;

#line 1945 "det_analysis.m"
                  {
#line 1945 "det_analysis.m"
                    check_hlds__det_analysis__VarStr_188 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_analysis__VarSet_193, (MR_Integer) 0, check_hlds__det_analysis__Var_12);
                  }
#line 1946 "det_analysis.m"
                  {
#line 1946 "det_analysis.m"
                    check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (check_hlds__det_analysis__VarStr_188));
#line 1946 "det_analysis.m"
                  }
#line 1946 "det_analysis.m"
                  {
#line 1946 "det_analysis.m"
                    check_hlds__det_analysis__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (check_hlds__det_analysis__V_49_49));
#line 1946 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[55])));
#line 1946 "det_analysis.m"
                  }
#line 1946 "det_analysis.m"
                  {
#line 1946 "det_analysis.m"
                    check_hlds__det_analysis__Pieces0_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[122])));
#line 1946 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces0_195, 1) = ((MR_Box) (check_hlds__det_analysis__V_48_48));
#line 1946 "det_analysis.m"
                  }
#line 1958 "det_analysis.m"
                  check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "error:";
#line 4009 "check_hlds.det_analysis.c"
                }
#line 4011 "check_hlds.det_analysis.c"
              else
#line 4013 "check_hlds.det_analysis.c"
                {
#line 4015 "check_hlds.det_analysis.c"
                  MR_Word check_hlds__det_analysis__UnifyContext_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalContext_19, (MR_Integer) 0)));
#line 1950 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_36_36;

#line 1950 "det_analysis.m"
                  {
#line 1950 "det_analysis.m"
                    hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0((MR_Integer) 0, &check_hlds__det_analysis__V_36_36, check_hlds__det_analysis__UnifyContext_189, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Pieces0_195);
                  }
#line 1956 "det_analysis.m"
                  if ((check_hlds__det_analysis__Pieces0_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1955 "det_analysis.m"
                    check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "Error:";
#line 1956 "det_analysis.m"
                  else
#line 1958 "det_analysis.m"
                    check_hlds__det_analysis__ErrorMsg_197 = (MR_String) "error:";
#line 4033 "check_hlds.det_analysis.c"
                }
#line 1960 "det_analysis.m"
              {
#line 1960 "det_analysis.m"
                check_hlds__det_analysis__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1960 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_56_56, 1) = ((MR_Box) (check_hlds__det_analysis__ErrorMsg_197));
#line 1960 "det_analysis.m"
              }
#line 1962 "det_analysis.m"
              {
#line 1962 "det_analysis.m"
                check_hlds__det_analysis__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1962 "det_analysis.m"
                MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_61_61, 1) = ((MR_Box) (check_hlds__det_analysis__Type_24));
#line 1962 "det_analysis.m"
              }
#line 1962 "det_analysis.m"
              {
#line 1962 "det_analysis.m"
                check_hlds__det_analysis__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_60_60, 0) = ((MR_Box) (check_hlds__det_analysis__V_61_61));
#line 1962 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1962 "det_analysis.m"
              }
#line 1961 "det_analysis.m"
              {
#line 1961 "det_analysis.m"
                check_hlds__det_analysis__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[123])));
#line 1961 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_57_57, 1) = ((MR_Box) (check_hlds__det_analysis__V_60_60));
#line 1961 "det_analysis.m"
              }
#line 1960 "det_analysis.m"
              {
#line 1960 "det_analysis.m"
                check_hlds__det_analysis__Pieces1_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_198, 0) = ((MR_Box) (check_hlds__det_analysis__V_56_56));
#line 1960 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces1_198, 1) = ((MR_Box) (check_hlds__det_analysis__V_57_57));
#line 1960 "det_analysis.m"
              }
#line 1977 "det_analysis.m"
              {
#line 1977 "det_analysis.m"
                check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, &check_hlds__det_analysis__ModuleInfo_39);
              }
#line 1979 "det_analysis.m"
              {
#line 1979 "det_analysis.m"
                check_hlds__det_analysis__V_104_104 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__FailingContextsA_16, check_hlds__det_analysis__FailingContextsB_17);
              }
#line 1978 "det_analysis.m"
              {
#line 1978 "det_analysis.m"
                check_hlds__det_analysis__ContextMsgs_40 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_39, check_hlds__det_analysis__VarSet_193, check_hlds__det_analysis__V_104_104);
              }
#line 1982 "det_analysis.m"
              {
#line 1982 "det_analysis.m"
                check_hlds__det_analysis__V_112_112 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__det_analysis__Pieces0_195, check_hlds__det_analysis__Pieces1_198);
              }
#line 1982 "det_analysis.m"
              {
#line 1982 "det_analysis.m"
                check_hlds__det_analysis__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1982 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_111_111, 0) = ((MR_Box) (check_hlds__det_analysis__V_112_112));
#line 1982 "det_analysis.m"
              }
#line 1982 "det_analysis.m"
              {
#line 1982 "det_analysis.m"
                check_hlds__det_analysis__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_110_110, 0) = ((MR_Box) (check_hlds__det_analysis__V_111_111));
#line 1982 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[127])));
#line 1982 "det_analysis.m"
              }
#line 1981 "det_analysis.m"
              {
#line 1981 "det_analysis.m"
                check_hlds__det_analysis__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1981 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_109_109, 0) = ((MR_Box) (check_hlds__det_analysis__Context_192));
#line 1981 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_109_109, 1) = ((MR_Box) (check_hlds__det_analysis__V_110_110));
#line 1981 "det_analysis.m"
              }
#line 1983 "det_analysis.m"
              {
#line 1983 "det_analysis.m"
                check_hlds__det_analysis__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_108_108, 0) = ((MR_Box) (check_hlds__det_analysis__V_109_109));
#line 1983 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1983 "det_analysis.m"
              }
#line 1984 "det_analysis.m"
              {
#line 1984 "det_analysis.m"
                check_hlds__det_analysis__V_107_107 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_108_108, check_hlds__det_analysis__ContextMsgs_40);
              }
#line 1980 "det_analysis.m"
              {
#line 1980 "det_analysis.m"
                check_hlds__det_analysis__Spec_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1980 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1980 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1980 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_200, 2) = ((MR_Box) (check_hlds__det_analysis__V_107_107));
#line 1980 "det_analysis.m"
              }
#line 1985 "det_analysis.m"
              {
#line 1985 "det_analysis.m"
                check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_200, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42);
              }
#line 1940 "det_analysis.m"
            }
#line 1986 "det_analysis.m"
          else
#line 1987 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41;
#line 1993 "det_analysis.m"
        if ((check_hlds__det_analysis__SolnContext_15 == (MR_Integer) 0))
#line 1995 "det_analysis.m"
          *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 3;
#line 1993 "det_analysis.m"
        else
#line 1992 "det_analysis.m"
          *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 2;
#line 1989 "det_analysis.m"
      }
#line 1997 "det_analysis.m"
    else
#line 1998 "det_analysis.m"
      {
#line 1998 "det_analysis.m"
        *check_hlds__det_analysis__NumSolns_20 = (MR_Integer) 1;
#line 1998 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_41;
#line 1998 "det_analysis.m"
      }
#line 1997 "det_analysis.m"
  }
#line 1877 "det_analysis.m"
}

#line 1857 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(
#line 1857 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1857 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ModuleInfo_9,
#line 1857 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredInfo_10,
#line 1857 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15,
#line 1857 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__STATE_VARIABLE_ProcId_16)
#line 1857 "det_analysis.m"
{
#line 1861 "det_analysis.m"
  while (MR_TRUE)
#line 1861 "det_analysis.m"
    {
#line 1861 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 1861 "det_analysis.m"
      {
#line 1861 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1861 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__TestProcId_6;
#line 1861 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_7;
#line 1861 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Rest_8;
#line 1861 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_17_17;
#line 1863 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Detism_12;
#line 1863 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSoln_14;
#line 1865 "det_analysis.m"
        MR_Word check_hlds__det_analysis___CanFail_13;

#line 1860 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1860 "det_analysis.m"
          {
#line 1860 "det_analysis.m"
            check_hlds__det_analysis__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1860 "det_analysis.m"
            check_hlds__det_analysis__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1860 "det_analysis.m"
            check_hlds__det_analysis__TestProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_17_17, (MR_Integer) 0)));
#line 1860 "det_analysis.m"
            check_hlds__det_analysis__ProcInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_17_17, (MR_Integer) 1)));
#line 1863 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__TestProcId_6 == check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15);
#line 1863 "det_analysis.m"
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 1863 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 1863 "det_analysis.m"
              {
#line 1864 "det_analysis.m"
                {
#line 1864 "det_analysis.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__det_analysis__ProcInfo_7, &check_hlds__det_analysis__Detism_12);
                }
#line 1865 "det_analysis.m"
                {
#line 1865 "det_analysis.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism_12, &check_hlds__det_analysis___CanFail_13, &check_hlds__det_analysis__MaxSoln_14);
                }
#line 1866 "det_analysis.m"
                check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__MaxSoln_14 == (MR_Integer) 3);
#line 1863 "det_analysis.m"
                if (check_hlds__det_analysis__succeeded)
#line 1867 "det_analysis.m"
                  {
#line 1867 "det_analysis.m"
                    check_hlds__det_analysis__succeeded = check_hlds__modecheck_call__modes_are_identical_bar_cc_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_ProcId_0_15, check_hlds__det_analysis__TestProcId_6, check_hlds__det_analysis__PredInfo_10, check_hlds__det_analysis__ModuleInfo_9);
                  }
#line 1863 "det_analysis.m"
              }
#line 1870 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 1869 "det_analysis.m"
              {
#line 1869 "det_analysis.m"
                *check_hlds__det_analysis__STATE_VARIABLE_ProcId_16 = check_hlds__det_analysis__TestProcId_6;
#line 1869 "det_analysis.m"
                check_hlds__det_analysis__succeeded = MR_TRUE;
#line 1869 "det_analysis.m"
              }
#line 1870 "det_analysis.m"
            else
#line 1871 "det_analysis.m"
              {
#line 1871 "det_analysis.m"
                /* direct tailcall eliminated */
#line 1871 "det_analysis.m"
                {
#line 1871 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__Rest_8;

#line 1871 "det_analysis.m"
                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 1871 "det_analysis.m"
                }
#line 1871 "det_analysis.m"
                continue;
#line 1871 "det_analysis.m"
              }
#line 1860 "det_analysis.m"
          }
#line 1861 "det_analysis.m"
        return check_hlds__det_analysis__succeeded;
#line 1861 "det_analysis.m"
      }
#line 1861 "det_analysis.m"
      break;
#line 1861 "det_analysis.m"
    }
#line 1857 "det_analysis.m"
}

#line 1718 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_8(
#line 1718 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1718 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1718 "det_analysis.m"
{
#line 1718 "det_analysis.m"
  {
#line 1718 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1718 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1718 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv2_HeadVar__3_3;

#line 1718 "det_analysis.m"
    {
#line 1718 "det_analysis.m"
      check_hlds__det_analysis__conv2_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1718 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv2_HeadVar__3_3));
#line 1718 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1718 "det_analysis.m"
  }
#line 1718 "det_analysis.m"
}

#line 1677 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_4(
#line 1677 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1677 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1677 "det_analysis.m"
{
#line 1677 "det_analysis.m"
  {
#line 1677 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1677 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1677 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv1_HeadVar__3_3;

#line 1677 "det_analysis.m"
    {
#line 1677 "det_analysis.m"
      check_hlds__det_analysis__conv1_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1677 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv1_HeadVar__3_3));
#line 1677 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1677 "det_analysis.m"
  }
#line 1677 "det_analysis.m"
}

#line 1664 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_3(
#line 1664 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1664 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1664 "det_analysis.m"
{
#line 1664 "det_analysis.m"
  {
#line 1664 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1664 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1664 "det_analysis.m"
    {
#line 1664 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = hlds__instmap__var_is_any_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1664 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1664 "det_analysis.m"
  }
#line 1664 "det_analysis.m"
}

#line 1660 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_2(
#line 1660 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1660 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1660 "det_analysis.m"
{
#line 1660 "det_analysis.m"
  {
#line 1660 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1660 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1660 "det_analysis.m"
    {
#line 1660 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1660 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1660 "det_analysis.m"
  }
#line 1660 "det_analysis.m"
}

#line 1622 "det_analysis.m"
static MR_Box MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_1(
#line 1622 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 1622 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1)
#line 1622 "det_analysis.m"
{
#line 1622 "det_analysis.m"
  {
#line 1622 "det_analysis.m"
    MR_Box check_hlds__det_analysis__wrapper_arg_2;
#line 1622 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 1622 "det_analysis.m"
    MR_String check_hlds__det_analysis__conv0_HeadVar__3_3;

#line 1622 "det_analysis.m"
    {
#line 1622 "det_analysis.m"
      check_hlds__det_analysis__conv0_HeadVar__3_3 = check_hlds__det_report__lookup_var_name_in_varset_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_analysis__wrapper_arg_1));
    }
#line 1622 "det_analysis.m"
    check_hlds__det_analysis__wrapper_arg_2 = ((MR_Box) (check_hlds__det_analysis__conv0_HeadVar__3_3));
#line 1622 "det_analysis.m"
    return check_hlds__det_analysis__wrapper_arg_2;
#line 1622 "det_analysis.m"
  }
#line 1622 "det_analysis.m"
}

#line 1692 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_5(
#line 1692 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1692 "det_analysis.m"
{
#line 1692 "det_analysis.m"
  {
#line 1692 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1692 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0, 1);
#line 1692 "det_analysis.m"
  }
#line 1692 "det_analysis.m"
}

#line 1692 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_6(
#line 1692 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1692 "det_analysis.m"
{
#line 1692 "det_analysis.m"
  {
#line 1692 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1693 "det_analysis.m"
    {
#line 1693 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71);
    }
#line 1693 "det_analysis.m"
    if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1693 "det_analysis.m"
      {
#line 1693 "det_analysis.m"
        check_hlds__det_analysis__det_infer_scope_12_p_0_5(check_hlds__det_analysis__env_ptr);
#line 1693 "det_analysis.m"
        return;
      }
#line 1692 "det_analysis.m"
  }
#line 1692 "det_analysis.m"
}

#line 1692 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0_7(
#line 1692 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 1692 "det_analysis.m"
{
#line 1692 "det_analysis.m"
  {
#line 1692 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 1692 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__commit_0) == 0)
#line 1692 "det_analysis.m"
      {
#line 1692 "det_analysis.m"
        {
#line 1692 "det_analysis.m"
          parse_tree__set_of_var__member_2_p_1((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVar_71, check_hlds__det_analysis__det_infer_scope_12_p_0_6, check_hlds__det_analysis__env_ptr);
        }
#line 1692 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
#line 1692 "det_analysis.m"
      }
#line 1692 "det_analysis.m"
    else
#line 1692 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1692 "det_analysis.m"
  }
#line 1692 "det_analysis.m"
}

#line 1547 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_scope_12_p_0(
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Reason_13,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_14,
#line 1547 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_15,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_17,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_18,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_19,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20,
#line 1547 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_21,
#line 1547 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_22,
#line 1547 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109,
#line 1547 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110)
#line 1547 "det_analysis.m"
{
#line 1547 "det_analysis.m"
  {
#line 1547 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_scope_12_p_0_env_0_s check_hlds__det_analysis__env;

#line 1560 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 1))))
#line 1560 "det_analysis.m"
      {
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)));
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Kind_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Reason_13, (MR_Integer) 1)));
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_26;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarSet_27;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_28;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SolnContextToUse_29;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstmapDelta_53;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ChangedVars_54;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_55;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GroundBoundVars_57;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NonLocalVars_58;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__BoundVars0_60;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarTypes_61;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__BoundVars_62;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ExtraVars_75;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__IgnoreExtraVars_76;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_276_276;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_277_277;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_278_278;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_311_311;
#line 1560 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_344_344;
#line 1660 "det_analysis.m"
        MR_Word check_hlds__det_analysis___GroundAtStartVars_56;

#line 1561 "det_analysis.m"
        {
#line 1561 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__ProcInfo_26);
        }
#line 1562 "det_analysis.m"
        {
#line 1562 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_26, &check_hlds__det_analysis__VarSet_27);
        }
#line 1564 "det_analysis.m"
        {
#line 1564 "det_analysis.m"
          check_hlds__det_analysis__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1569 "det_analysis.m"
        if ((check_hlds__det_analysis__Kind_25 == (MR_Integer) 1))
#line 1570 "det_analysis.m"
          {
#line 1571 "det_analysis.m"
            check_hlds__det_analysis__SolnContextToUse_29 = check_hlds__det_analysis__SolnContext_18;
#line 1575 "det_analysis.m"
            if ((check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1573 "det_analysis.m"
              {
#line 1573 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_275_275;

#line 1574 "det_analysis.m"
                {
#line 1574 "det_analysis.m"
                  check_hlds__det_analysis__V_275_275 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1574 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 0) = ((MR_Box) (check_hlds__det_analysis__Vars_24));
#line 1574 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_275_275, 1) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1574 "det_analysis.m"
                }
#line 1574 "det_analysis.m"
                {
#line 1574 "det_analysis.m"
                  check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_275_275));
#line 1574 "det_analysis.m"
                }
#line 1573 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109;
#line 1573 "det_analysis.m"
              }
#line 1575 "det_analysis.m"
            else
#line 1576 "det_analysis.m"
              {
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__TypeCtorInfo_349_349;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__PESSInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0)));
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__OuterVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PESSInfo_31, (MR_Integer) 0)));
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__OuterContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__PESSInfo_31, (MR_Integer) 1)));
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__NestedSpec_37;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__AllVars_38;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_250_250;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_251_251;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_260_260;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_261_261;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_272_272;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_273_273;
#line 1576 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_274_274;

#line 1587 "det_analysis.m"
                {
#line 1587 "det_analysis.m"
                  check_hlds__det_analysis__V_251_251 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1587 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_251_251, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1587 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_251_251, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[109])));
#line 1587 "det_analysis.m"
                }
#line 1590 "det_analysis.m"
                {
#line 1590 "det_analysis.m"
                  check_hlds__det_analysis__V_261_261 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1590 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_261_261, 0) = ((MR_Box) (check_hlds__det_analysis__OuterContext_33));
#line 1590 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_261_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[112])));
#line 1590 "det_analysis.m"
                }
#line 1593 "det_analysis.m"
                {
#line 1593 "det_analysis.m"
                  check_hlds__det_analysis__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1593 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_260_260, 0) = ((MR_Box) (check_hlds__det_analysis__V_261_261));
#line 1593 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_260_260, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1593 "det_analysis.m"
                }
#line 1589 "det_analysis.m"
                {
#line 1589 "det_analysis.m"
                  check_hlds__det_analysis__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_250_250, 0) = ((MR_Box) (check_hlds__det_analysis__V_251_251));
#line 1589 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_250_250, 1) = ((MR_Box) (check_hlds__det_analysis__V_260_260));
#line 1589 "det_analysis.m"
                }
#line 1586 "det_analysis.m"
                {
#line 1586 "det_analysis.m"
                  check_hlds__det_analysis__NestedSpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1586 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_3[0])));
#line 1586 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1586 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__NestedSpec_37, 2) = ((MR_Box) (check_hlds__det_analysis__V_250_250));
#line 1586 "det_analysis.m"
                }
#line 1594 "det_analysis.m"
                {
#line 1594 "det_analysis.m"
                  check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__NestedSpec_37, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271);
                }
#line 4782 "check_hlds.det_analysis.c"
                check_hlds__det_analysis__TypeCtorInfo_349_349 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1595 "det_analysis.m"
                {
#line 1595 "det_analysis.m"
                  check_hlds__det_analysis__V_272_272 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], check_hlds__det_analysis__OuterVars_32, check_hlds__det_analysis__Vars_24);
                }
#line 1595 "det_analysis.m"
                {
#line 1595 "det_analysis.m"
                  check_hlds__det_analysis__AllVars_38 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__V_272_272);
                }
#line 1597 "det_analysis.m"
                {
#line 1597 "det_analysis.m"
                  check_hlds__det_analysis__V_274_274 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__det_analysis__TypeCtorInfo_349_349, check_hlds__det_analysis__AllVars_38);
                }
#line 1597 "det_analysis.m"
                {
#line 1597 "det_analysis.m"
                  check_hlds__det_analysis__V_273_273 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1597 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_273_273, 0) = ((MR_Box) (check_hlds__det_analysis__V_274_274));
#line 1597 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_273_273, 1) = ((MR_Box) (check_hlds__det_analysis__OuterContext_33));
#line 1597 "det_analysis.m"
                }
#line 1597 "det_analysis.m"
                {
#line 1597 "det_analysis.m"
                  check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_273_273));
#line 1597 "det_analysis.m"
                }
#line 1576 "det_analysis.m"
              }
#line 1570 "det_analysis.m"
          }
#line 1569 "det_analysis.m"
        else
#line 1569 "det_analysis.m"
          if ((check_hlds__det_analysis__Kind_25 == (MR_Integer) 2))
#line 1601 "det_analysis.m"
            {
#line 1612 "det_analysis.m"
              if ((check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1603 "det_analysis.m"
                {
#line 1603 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__ArbitrarySpec_40;
#line 1603 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_220_220;
#line 1603 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_221_221;

#line 1610 "det_analysis.m"
                  {
#line 1610 "det_analysis.m"
                    check_hlds__det_analysis__V_221_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1610 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_221_221, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1610 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_221_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[113])));
#line 1610 "det_analysis.m"
                  }
#line 1610 "det_analysis.m"
                  {
#line 1610 "det_analysis.m"
                    check_hlds__det_analysis__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_220_220, 0) = ((MR_Box) (check_hlds__det_analysis__V_221_221));
#line 1610 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_220_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1610 "det_analysis.m"
                  }
#line 1609 "det_analysis.m"
                  {
#line 1609 "det_analysis.m"
                    check_hlds__det_analysis__ArbitrarySpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1609 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1609 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1609 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ArbitrarySpec_40, 2) = ((MR_Box) (check_hlds__det_analysis__V_220_220));
#line 1609 "det_analysis.m"
                  }
#line 1611 "det_analysis.m"
                  {
#line 1611 "det_analysis.m"
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__ArbitrarySpec_40, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271);
                  }
#line 1603 "det_analysis.m"
                }
#line 1612 "det_analysis.m"
              else
#line 1614 "det_analysis.m"
                {
#line 1614 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__TypeCtorInfo_351_351;
#line 1614 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__OldVars_41;
#line 1614 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__PromiseContext_42;
#line 1614 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__OverlapVars_43;
#line 1614 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, (MR_Integer) 0)));
#line 1614 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_144_144;
#line 1614 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_145_145;

#line 1613 "det_analysis.m"
                  check_hlds__det_analysis__OldVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_143_143, (MR_Integer) 0)));
#line 1613 "det_analysis.m"
                  check_hlds__det_analysis__PromiseContext_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_143_143, (MR_Integer) 1)));
#line 4900 "check_hlds.det_analysis.c"
                  check_hlds__det_analysis__TypeCtorInfo_351_351 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1616 "det_analysis.m"
                  {
#line 1616 "det_analysis.m"
                    check_hlds__det_analysis__V_144_144 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__OldVars_41);
                  }
#line 1617 "det_analysis.m"
                  {
#line 1617 "det_analysis.m"
                    check_hlds__det_analysis__V_145_145 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__Vars_24);
                  }
#line 1615 "det_analysis.m"
                  {
#line 1615 "det_analysis.m"
                    check_hlds__det_analysis__OverlapVars_43 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__V_144_144, check_hlds__det_analysis__V_145_145);
                  }
#line 1618 "det_analysis.m"
                  {
#line 1618 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__OverlapVars_43);
                  }
#line 1620 "det_analysis.m"
                  if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1620 "det_analysis.m"
                    check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109;
#line 1620 "det_analysis.m"
                  else
#line 1623 "det_analysis.m"
                    {
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__TypeCtorInfo_356_356;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapVarNames_44;
#line 1623 "det_analysis.m"
                      MR_String check_hlds__det_analysis__OverlapVarStr_46;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapPieces_50;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__OverlapSpec_52;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_146_146;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_147_147;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_153_153;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_156_156;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_159_159;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_162_162;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_165_165;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_168_168;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_169_169;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_171_171;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_172_172;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_188_188;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_189_189;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_190_190;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_191_191;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_193_193;
#line 1623 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_194_194;

#line 1622 "det_analysis.m"
                      {
#line 1622 "det_analysis.m"
                        check_hlds__det_analysis__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1622 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_146_146, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1622 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_146_146, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_1));
#line 1622 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_146_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1622 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_146_146, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1622 "det_analysis.m"
                      }
#line 1623 "det_analysis.m"
                      {
#line 1623 "det_analysis.m"
                        check_hlds__det_analysis__V_147_147 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__det_analysis__TypeCtorInfo_351_351, check_hlds__det_analysis__OverlapVars_43);
                      }
#line 1621 "det_analysis.m"
                      {
#line 1621 "det_analysis.m"
                        check_hlds__det_analysis__OverlapVarNames_44 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_146_146, check_hlds__det_analysis__V_147_147);
                      }
#line 1628 "det_analysis.m"
                      if ((check_hlds__det_analysis__OverlapVarNames_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "det_analysis.m"
                        {
#line 1626 "det_analysis.m"
                          {
#line 1626 "det_analysis.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "arbitrary_promise_overlap empty");
#line 1626 "det_analysis.m"
                            return;
                          }
#line 1625 "det_analysis.m"
                        }
#line 1628 "det_analysis.m"
                      else
#line 1628 "det_analysis.m"
                        {
#line 1628 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OverlapVarNames_44, (MR_Integer) 1)));
#line 1629 "det_analysis.m"
                          MR_String check_hlds__det_analysis__V_371_371 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OverlapVarNames_44, (MR_Integer) 0)));

#line 1628 "det_analysis.m"
                          if ((check_hlds__det_analysis__V_370_370 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1630 "det_analysis.m"
                            check_hlds__det_analysis__OverlapVarStr_46 = (MR_String) "the variable";
#line 1628 "det_analysis.m"
                          else
#line 1633 "det_analysis.m"
                            check_hlds__det_analysis__OverlapVarStr_46 = (MR_String) "the following variables:";
#line 1628 "det_analysis.m"
                        }
#line 5031 "check_hlds.det_analysis.c"
                      check_hlds__det_analysis__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1639 "det_analysis.m"
                      {
#line 1639 "det_analysis.m"
                        check_hlds__det_analysis__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1639 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1639 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_169_169, 1) = ((MR_Box) (check_hlds__det_analysis__OverlapVarStr_46));
#line 1639 "det_analysis.m"
                      }
#line 1639 "det_analysis.m"
                      {
#line 1639 "det_analysis.m"
                        check_hlds__det_analysis__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1639 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_168_168, 0) = ((MR_Box) (check_hlds__det_analysis__V_169_169));
#line 1639 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1639 "det_analysis.m"
                      }
#line 1638 "det_analysis.m"
                      {
#line 1638 "det_analysis.m"
                        check_hlds__det_analysis__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1638 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_165_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[116])));
#line 1638 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_165_165, 1) = ((MR_Box) (check_hlds__det_analysis__V_168_168));
#line 1638 "det_analysis.m"
                      }
#line 1637 "det_analysis.m"
                      {
#line 1637 "det_analysis.m"
                        check_hlds__det_analysis__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1637 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_162_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[2])));
#line 1637 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_162_162, 1) = ((MR_Box) (check_hlds__det_analysis__V_165_165));
#line 1637 "det_analysis.m"
                      }
#line 1636 "det_analysis.m"
                      {
#line 1636 "det_analysis.m"
                        check_hlds__det_analysis__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1636 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_159_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[115])));
#line 1636 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_159_159, 1) = ((MR_Box) (check_hlds__det_analysis__V_162_162));
#line 1636 "det_analysis.m"
                      }
#line 1635 "det_analysis.m"
                      {
#line 1635 "det_analysis.m"
                        check_hlds__det_analysis__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_156_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_analysis_scalar_common_2[3])));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_156_156, 1) = ((MR_Box) (check_hlds__det_analysis__V_159_159));
#line 1635 "det_analysis.m"
                      }
#line 1635 "det_analysis.m"
                      {
#line 1635 "det_analysis.m"
                        check_hlds__det_analysis__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_153_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[114])));
#line 1635 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_153_153, 1) = ((MR_Box) (check_hlds__det_analysis__V_156_156));
#line 1635 "det_analysis.m"
                      }
#line 1640 "det_analysis.m"
                      {
#line 1640 "det_analysis.m"
                        check_hlds__det_analysis__V_172_172 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__OverlapVarNames_44);
                      }
#line 1640 "det_analysis.m"
                      {
#line 1640 "det_analysis.m"
                        check_hlds__det_analysis__V_171_171 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_356_356, check_hlds__det_analysis__V_172_172, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[118]));
                      }
#line 1639 "det_analysis.m"
                      {
#line 1639 "det_analysis.m"
                        check_hlds__det_analysis__OverlapPieces_50 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_356_356, check_hlds__det_analysis__V_153_153, check_hlds__det_analysis__V_171_171);
                      }
#line 1646 "det_analysis.m"
                      {
#line 1646 "det_analysis.m"
                        check_hlds__det_analysis__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1646 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_191_191, 0) = ((MR_Box) (check_hlds__det_analysis__OverlapPieces_50));
#line 1646 "det_analysis.m"
                      }
#line 1646 "det_analysis.m"
                      {
#line 1646 "det_analysis.m"
                        check_hlds__det_analysis__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_190_190, 0) = ((MR_Box) (check_hlds__det_analysis__V_191_191));
#line 1646 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1646 "det_analysis.m"
                      }
#line 1646 "det_analysis.m"
                      {
#line 1646 "det_analysis.m"
                        check_hlds__det_analysis__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1646 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_189_189, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1646 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_189_189, 1) = ((MR_Box) (check_hlds__det_analysis__V_190_190));
#line 1646 "det_analysis.m"
                      }
#line 1647 "det_analysis.m"
                      {
#line 1647 "det_analysis.m"
                        check_hlds__det_analysis__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1647 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_194_194, 0) = ((MR_Box) (check_hlds__det_analysis__PromiseContext_42));
#line 1647 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[110])));
#line 1647 "det_analysis.m"
                      }
#line 1648 "det_analysis.m"
                      {
#line 1648 "det_analysis.m"
                        check_hlds__det_analysis__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1648 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_193_193, 0) = ((MR_Box) (check_hlds__det_analysis__V_194_194));
#line 1648 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1648 "det_analysis.m"
                      }
#line 1646 "det_analysis.m"
                      {
#line 1646 "det_analysis.m"
                        check_hlds__det_analysis__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_188_188, 0) = ((MR_Box) (check_hlds__det_analysis__V_189_189));
#line 1646 "det_analysis.m"
                        MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_188_188, 1) = ((MR_Box) (check_hlds__det_analysis__V_193_193));
#line 1646 "det_analysis.m"
                      }
#line 1644 "det_analysis.m"
                      {
#line 1644 "det_analysis.m"
                        check_hlds__det_analysis__OverlapSpec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1644 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1644 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1644 "det_analysis.m"
                        MR_hl_field(MR_mktag(0), check_hlds__det_analysis__OverlapSpec_52, 2) = ((MR_Box) (check_hlds__det_analysis__V_188_188));
#line 1644 "det_analysis.m"
                      }
#line 1649 "det_analysis.m"
                      {
#line 1649 "det_analysis.m"
                        check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__OverlapSpec_52, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271);
                      }
#line 1623 "det_analysis.m"
                    }
#line 1614 "det_analysis.m"
                }
#line 1652 "det_analysis.m"
              check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1653 "det_analysis.m"
              check_hlds__det_analysis__SolnContextToUse_29 = (MR_Integer) 1;
#line 1601 "det_analysis.m"
            }
#line 1569 "det_analysis.m"
          else
#line 1566 "det_analysis.m"
            {
#line 1567 "det_analysis.m"
              check_hlds__det_analysis__SolnContextToUse_29 = (MR_Integer) 1;
#line 1568 "det_analysis.m"
              check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30 = check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20;
#line 1566 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109;
#line 1566 "det_analysis.m"
            }
#line 1655 "det_analysis.m"
        {
#line 1655 "det_analysis.m"
          check_hlds__det_analysis__InstmapDelta_53 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1656 "det_analysis.m"
        {
#line 1656 "det_analysis.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__det_analysis__InstmapDelta_53, &check_hlds__det_analysis__ChangedVars_54);
        }
#line 1657 "det_analysis.m"
        {
#line 1657 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271, &check_hlds__det_analysis__ModuleInfo_55);
        }
#line 1660 "det_analysis.m"
        {
#line 1660 "det_analysis.m"
          check_hlds__det_analysis__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1660 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[2]));
#line 1660 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_2));
#line 1660 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1660 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 3) = ((MR_Box) (check_hlds__det_analysis__ModuleInfo_55));
#line 1660 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_276_276, 4) = ((MR_Box) (check_hlds__det_analysis__InstMap0_17));
#line 1660 "det_analysis.m"
        }
#line 5246 "check_hlds.det_analysis.c"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1660 "det_analysis.m"
        {
#line 1660 "det_analysis.m"
          parse_tree__set_of_var__divide_4_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__V_276_276, check_hlds__det_analysis__ChangedVars_54, &check_hlds__det_analysis___GroundAtStartVars_56, &check_hlds__det_analysis__GroundBoundVars_57);
        }
#line 1662 "det_analysis.m"
        {
#line 1662 "det_analysis.m"
          check_hlds__det_analysis__NonLocalVars_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1664 "det_analysis.m"
        {
#line 1664 "det_analysis.m"
          check_hlds__det_analysis__V_277_277 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1664 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[2]));
#line 1664 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_3));
#line 1664 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1664 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 3) = ((MR_Box) (check_hlds__det_analysis__ModuleInfo_55));
#line 1664 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_277_277, 4) = ((MR_Box) (check_hlds__det_analysis__InstMap0_17));
#line 1664 "det_analysis.m"
        }
#line 1663 "det_analysis.m"
        {
#line 1663 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59 = parse_tree__set_of_var__filter_2_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__V_277_277, check_hlds__det_analysis__NonLocalVars_58);
        }
#line 1666 "det_analysis.m"
        {
#line 1666 "det_analysis.m"
          check_hlds__det_analysis__BoundVars0_60 = parse_tree__set_of_var__union_2_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__GroundBoundVars_57, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__AnyBoundVars_59);
        }
#line 1667 "det_analysis.m"
        {
#line 1667 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo_26, &check_hlds__det_analysis__VarTypes_61);
        }
#line 1668 "det_analysis.m"
        {
#line 1668 "det_analysis.m"
          check_hlds__det_analysis__BoundVars_62 = parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0(check_hlds__det_analysis__VarTypes_61, check_hlds__det_analysis__BoundVars0_60);
        }
#line 1672 "det_analysis.m"
        {
#line 1672 "det_analysis.m"
          check_hlds__det_analysis__V_278_278 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__Vars_24);
        }
#line 1672 "det_analysis.m"
        {
#line 1672 "det_analysis.m"
          parse_tree__set_of_var__difference_3_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__BoundVars_62, check_hlds__det_analysis__V_278_278, &(check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
        }
#line 1674 "det_analysis.m"
        {
#line 1674 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
        }
#line 1676 "det_analysis.m"
        if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1676 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271;
#line 1676 "det_analysis.m"
        else
#line 1678 "det_analysis.m"
          {
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_364_364;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingVarNames_64;
#line 1678 "det_analysis.m"
            MR_String check_hlds__det_analysis__MissingKindStr_65;
#line 1678 "det_analysis.m"
            MR_String check_hlds__det_analysis__MissingListStr_67;
#line 1678 "det_analysis.m"
            MR_String check_hlds__det_analysis__BindsWords_72;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingPieces_73;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__MissingSpec_74;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_279_279;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_280_280;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_286_286;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_289_289;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_290_290;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_291_291;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_292_292;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_293_293;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_294_294;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_296_296;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_297_297;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_304_304;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_305_305;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_306_306;
#line 1678 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_307_307;

#line 1677 "det_analysis.m"
            {
#line 1677 "det_analysis.m"
              check_hlds__det_analysis__V_279_279 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1677 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_279_279, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1677 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_279_279, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_4));
#line 1677 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_279_279, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1677 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_279_279, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1677 "det_analysis.m"
            }
#line 1678 "det_analysis.m"
            {
#line 1678 "det_analysis.m"
              check_hlds__det_analysis__V_280_280 = parse_tree__set_of_var__to_sorted_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__MissingVars_63);
            }
#line 1677 "det_analysis.m"
            {
#line 1677 "det_analysis.m"
              check_hlds__det_analysis__MissingVarNames_64 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_279_279, check_hlds__det_analysis__V_280_280);
            }
#line 1679 "det_analysis.m"
            {
#line 1679 "det_analysis.m"
              check_hlds__det_analysis__MissingKindStr_65 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(check_hlds__det_analysis__Kind_25);
            }
#line 1684 "det_analysis.m"
            if ((check_hlds__det_analysis__MissingVarNames_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1681 "det_analysis.m"
              {
#line 1682 "det_analysis.m"
                {
#line 1682 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_missing_vars empty");
#line 1682 "det_analysis.m"
                  return;
                }
#line 1681 "det_analysis.m"
              }
#line 1684 "det_analysis.m"
            else
#line 1684 "det_analysis.m"
              {
#line 1684 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MissingVarNames_64, (MR_Integer) 1)));
#line 1685 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_373_373 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MissingVarNames_64, (MR_Integer) 0)));

#line 1684 "det_analysis.m"
                if ((check_hlds__det_analysis__V_372_372 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1686 "det_analysis.m"
                  check_hlds__det_analysis__MissingListStr_67 = (MR_String) "a variable that is not listed:";
#line 1684 "det_analysis.m"
                else
#line 1689 "det_analysis.m"
                  check_hlds__det_analysis__MissingListStr_67 = (MR_String) "some variables that are not listed:";
#line 1684 "det_analysis.m"
              }
#line 1692 "det_analysis.m"
            {
#line 1692 "det_analysis.m"
              check_hlds__det_analysis__det_infer_scope_12_p_0_7(&check_hlds__det_analysis__env);
            }
#line 1696 "det_analysis.m"
            if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1695 "det_analysis.m"
              check_hlds__det_analysis__BindsWords_72 = (MR_String) "goal may constrain";
#line 1696 "det_analysis.m"
            else
#line 1697 "det_analysis.m"
              check_hlds__det_analysis__BindsWords_72 = (MR_String) "goal binds";
#line 5436 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_364_364 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1699 "det_analysis.m"
            {
#line 1699 "det_analysis.m"
              check_hlds__det_analysis__V_290_290 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_290_290, 0) = ((MR_Box) (check_hlds__det_analysis__MissingKindStr_65));
#line 1699 "det_analysis.m"
            }
#line 1700 "det_analysis.m"
            {
#line 1700 "det_analysis.m"
              check_hlds__det_analysis__V_292_292 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1700 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_292_292, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1700 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_292_292, 1) = ((MR_Box) (check_hlds__det_analysis__BindsWords_72));
#line 1700 "det_analysis.m"
            }
#line 1700 "det_analysis.m"
            {
#line 1700 "det_analysis.m"
              check_hlds__det_analysis__V_294_294 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1700 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_294_294, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1700 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_294_294, 1) = ((MR_Box) (check_hlds__det_analysis__MissingListStr_67));
#line 1700 "det_analysis.m"
            }
#line 1700 "det_analysis.m"
            {
#line 1700 "det_analysis.m"
              check_hlds__det_analysis__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1700 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_293_293, 0) = ((MR_Box) (check_hlds__det_analysis__V_294_294));
#line 1700 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_293_293, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1700 "det_analysis.m"
            }
#line 1700 "det_analysis.m"
            {
#line 1700 "det_analysis.m"
              check_hlds__det_analysis__V_291_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1700 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_291_291, 0) = ((MR_Box) (check_hlds__det_analysis__V_292_292));
#line 1700 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_291_291, 1) = ((MR_Box) (check_hlds__det_analysis__V_293_293));
#line 1700 "det_analysis.m"
            }
#line 1699 "det_analysis.m"
            {
#line 1699 "det_analysis.m"
              check_hlds__det_analysis__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_289_289, 0) = ((MR_Box) (check_hlds__det_analysis__V_290_290));
#line 1699 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_289_289, 1) = ((MR_Box) (check_hlds__det_analysis__V_291_291));
#line 1699 "det_analysis.m"
            }
#line 1699 "det_analysis.m"
            {
#line 1699 "det_analysis.m"
              check_hlds__det_analysis__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_286_286, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[119])));
#line 1699 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_286_286, 1) = ((MR_Box) (check_hlds__det_analysis__V_289_289));
#line 1699 "det_analysis.m"
            }
#line 1701 "det_analysis.m"
            {
#line 1701 "det_analysis.m"
              check_hlds__det_analysis__V_297_297 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__MissingVarNames_64);
            }
#line 1701 "det_analysis.m"
            {
#line 1701 "det_analysis.m"
              check_hlds__det_analysis__V_296_296 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_364_364, check_hlds__det_analysis__V_297_297, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[118]));
            }
#line 1701 "det_analysis.m"
            {
#line 1701 "det_analysis.m"
              check_hlds__det_analysis__MissingPieces_73 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_364_364, check_hlds__det_analysis__V_286_286, check_hlds__det_analysis__V_296_296);
            }
#line 1703 "det_analysis.m"
            {
#line 1703 "det_analysis.m"
              check_hlds__det_analysis__V_307_307 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1703 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_307_307, 0) = ((MR_Box) (check_hlds__det_analysis__MissingPieces_73));
#line 1703 "det_analysis.m"
            }
#line 1703 "det_analysis.m"
            {
#line 1703 "det_analysis.m"
              check_hlds__det_analysis__V_306_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_306_306, 0) = ((MR_Box) (check_hlds__det_analysis__V_307_307));
#line 1703 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_306_306, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1703 "det_analysis.m"
            }
#line 1703 "det_analysis.m"
            {
#line 1703 "det_analysis.m"
              check_hlds__det_analysis__V_305_305 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1703 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_305_305, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1703 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_305_305, 1) = ((MR_Box) (check_hlds__det_analysis__V_306_306));
#line 1703 "det_analysis.m"
            }
#line 1703 "det_analysis.m"
            {
#line 1703 "det_analysis.m"
              check_hlds__det_analysis__V_304_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_304_304, 0) = ((MR_Box) (check_hlds__det_analysis__V_305_305));
#line 1703 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_304_304, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1703 "det_analysis.m"
            }
#line 1702 "det_analysis.m"
            {
#line 1702 "det_analysis.m"
              check_hlds__det_analysis__MissingSpec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1702 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1702 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1702 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__MissingSpec_74, 2) = ((MR_Box) (check_hlds__det_analysis__V_304_304));
#line 1702 "det_analysis.m"
            }
#line 1704 "det_analysis.m"
            {
#line 1704 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__MissingSpec_74, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_271_271, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310);
            }
#line 1678 "det_analysis.m"
          }
#line 1708 "det_analysis.m"
        {
#line 1708 "det_analysis.m"
          check_hlds__det_analysis__V_311_311 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__Vars_24);
        }
#line 1708 "det_analysis.m"
        {
#line 1708 "det_analysis.m"
          parse_tree__set_of_var__difference_3_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__V_311_311, check_hlds__det_analysis__BoundVars_62, &check_hlds__det_analysis__ExtraVars_75);
        }
#line 1710 "det_analysis.m"
        {
#line 1710 "det_analysis.m"
          check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310, &check_hlds__det_analysis__IgnoreExtraVars_76);
        }
#line 1712 "det_analysis.m"
        {
#line 1712 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__ExtraVars_75);
        }
#line 1713 "det_analysis.m"
        if (!((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded))
#line 1713 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = (check_hlds__det_analysis__IgnoreExtraVars_76 == (MR_Integer) 1);
#line 1717 "det_analysis.m"
        if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1717 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_DetInfo_344_344 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310;
#line 1717 "det_analysis.m"
        else
#line 1719 "det_analysis.m"
          {
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_369_369;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraVarNames_77;
#line 1719 "det_analysis.m"
            MR_String check_hlds__det_analysis__ExtraKindStr_78;
#line 1719 "det_analysis.m"
            MR_String check_hlds__det_analysis__ExtraListStr_80;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraPieces_84;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ExtraSpec_85;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_312_312;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_313_313;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_319_319;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_322_322;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_323_323;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_324_324;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_327_327;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_328_328;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_330_330;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_331_331;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_338_338;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_339_339;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_340_340;
#line 1719 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_341_341;

#line 1718 "det_analysis.m"
            {
#line 1718 "det_analysis.m"
              check_hlds__det_analysis__V_312_312 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1718 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_312_312, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_4[1]));
#line 1718 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_312_312, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_scope_12_p_0_8));
#line 1718 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_312_312, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1718 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_312_312, 3) = ((MR_Box) (check_hlds__det_analysis__VarSet_27));
#line 1718 "det_analysis.m"
            }
#line 1719 "det_analysis.m"
            {
#line 1719 "det_analysis.m"
              check_hlds__det_analysis__V_313_313 = parse_tree__set_of_var__to_sorted_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__TypeCtorInfo_358_358, check_hlds__det_analysis__ExtraVars_75);
            }
#line 1718 "det_analysis.m"
            {
#line 1718 "det_analysis.m"
              check_hlds__det_analysis__ExtraVarNames_77 = mercury__list__map_2_f_0((MR_Word) &check_hlds__det_analysis_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__det_analysis__V_312_312, check_hlds__det_analysis__V_313_313);
            }
#line 1720 "det_analysis.m"
            {
#line 1720 "det_analysis.m"
              check_hlds__det_analysis__ExtraKindStr_78 = check_hlds__det_report__promise_solutions_kind_str_1_f_0(check_hlds__det_analysis__Kind_25);
            }
#line 1725 "det_analysis.m"
            if ((check_hlds__det_analysis__ExtraVarNames_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1722 "det_analysis.m"
              {
#line 1723 "det_analysis.m"
                {
#line 1723 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "promise_solutions_extra_vars empty");
#line 1723 "det_analysis.m"
                  return;
                }
#line 1722 "det_analysis.m"
              }
#line 1725 "det_analysis.m"
            else
#line 1725 "det_analysis.m"
              {
#line 1725 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExtraVarNames_77, (MR_Integer) 1)));
#line 1726 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_375_375 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExtraVarNames_77, (MR_Integer) 0)));

#line 1725 "det_analysis.m"
                if ((check_hlds__det_analysis__V_374_374 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1727 "det_analysis.m"
                  check_hlds__det_analysis__ExtraListStr_80 = (MR_String) "an extra variable:";
#line 1725 "det_analysis.m"
                else
#line 1730 "det_analysis.m"
                  check_hlds__det_analysis__ExtraListStr_80 = (MR_String) "some extra variables:";
#line 1725 "det_analysis.m"
              }
#line 5712 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_369_369 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1732 "det_analysis.m"
            {
#line 1732 "det_analysis.m"
              check_hlds__det_analysis__V_323_323 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1732 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_323_323, 0) = ((MR_Box) (check_hlds__det_analysis__ExtraKindStr_78));
#line 1732 "det_analysis.m"
            }
#line 1733 "det_analysis.m"
            {
#line 1733 "det_analysis.m"
              check_hlds__det_analysis__V_328_328 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1733 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_328_328, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1733 "det_analysis.m"
              MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_328_328, 1) = ((MR_Box) (check_hlds__det_analysis__ExtraListStr_80));
#line 1733 "det_analysis.m"
            }
#line 1733 "det_analysis.m"
            {
#line 1733 "det_analysis.m"
              check_hlds__det_analysis__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1733 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_327_327, 0) = ((MR_Box) (check_hlds__det_analysis__V_328_328));
#line 1733 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_327_327, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1733 "det_analysis.m"
            }
#line 1733 "det_analysis.m"
            {
#line 1733 "det_analysis.m"
              check_hlds__det_analysis__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1733 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_324_324, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[120])));
#line 1733 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_324_324, 1) = ((MR_Box) (check_hlds__det_analysis__V_327_327));
#line 1733 "det_analysis.m"
            }
#line 1732 "det_analysis.m"
            {
#line 1732 "det_analysis.m"
              check_hlds__det_analysis__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1732 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_322_322, 0) = ((MR_Box) (check_hlds__det_analysis__V_323_323));
#line 1732 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_322_322, 1) = ((MR_Box) (check_hlds__det_analysis__V_324_324));
#line 1732 "det_analysis.m"
            }
#line 1732 "det_analysis.m"
            {
#line 1732 "det_analysis.m"
              check_hlds__det_analysis__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1732 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_319_319, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[119])));
#line 1732 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_319_319, 1) = ((MR_Box) (check_hlds__det_analysis__V_322_322));
#line 1732 "det_analysis.m"
            }
#line 1734 "det_analysis.m"
            {
#line 1734 "det_analysis.m"
              check_hlds__det_analysis__V_331_331 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__det_analysis__ExtraVarNames_77);
            }
#line 1734 "det_analysis.m"
            {
#line 1734 "det_analysis.m"
              check_hlds__det_analysis__V_330_330 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_369_369, check_hlds__det_analysis__V_331_331, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[118]));
            }
#line 1733 "det_analysis.m"
            {
#line 1733 "det_analysis.m"
              check_hlds__det_analysis__ExtraPieces_84 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_369_369, check_hlds__det_analysis__V_319_319, check_hlds__det_analysis__V_330_330);
            }
#line 1736 "det_analysis.m"
            {
#line 1736 "det_analysis.m"
              check_hlds__det_analysis__V_341_341 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1736 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_341_341, 0) = ((MR_Box) (check_hlds__det_analysis__ExtraPieces_84));
#line 1736 "det_analysis.m"
            }
#line 1736 "det_analysis.m"
            {
#line 1736 "det_analysis.m"
              check_hlds__det_analysis__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1736 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_340_340, 0) = ((MR_Box) (check_hlds__det_analysis__V_341_341));
#line 1736 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_340_340, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1736 "det_analysis.m"
            }
#line 1736 "det_analysis.m"
            {
#line 1736 "det_analysis.m"
              check_hlds__det_analysis__V_339_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1736 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_339_339, 0) = ((MR_Box) (check_hlds__det_analysis__Context_28));
#line 1736 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_339_339, 1) = ((MR_Box) (check_hlds__det_analysis__V_340_340));
#line 1736 "det_analysis.m"
            }
#line 1736 "det_analysis.m"
            {
#line 1736 "det_analysis.m"
              check_hlds__det_analysis__V_338_338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1736 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_338_338, 0) = ((MR_Box) (check_hlds__det_analysis__V_339_339));
#line 1736 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_338_338, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1736 "det_analysis.m"
            }
#line 1735 "det_analysis.m"
            {
#line 1735 "det_analysis.m"
              check_hlds__det_analysis__ExtraSpec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1735 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1735 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1735 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExtraSpec_85, 2) = ((MR_Box) (check_hlds__det_analysis__V_338_338));
#line 1735 "det_analysis.m"
            }
#line 1737 "det_analysis.m"
            {
#line 1737 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__ExtraSpec_85, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_310_310, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_344_344);
            }
#line 1719 "det_analysis.m"
          }
#line 1739 "det_analysis.m"
        {
#line 1739 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContextToUse_29, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_30, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_344_344, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
#line 1739 "det_analysis.m"
          return;
        }
#line 1560 "det_analysis.m"
      }
#line 1560 "det_analysis.m"
    else
#line 1560 "det_analysis.m"
      if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1818 "det_analysis.m"
        {
#line 1818 "det_analysis.m"
          MR_Word check_hlds__det_analysis__FromGroundTermKind_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 2)));
#line 1818 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 1)));

#line 1824 "det_analysis.m"
          if ((check_hlds__det_analysis__FromGroundTermKind_108 == (MR_Integer) 1))
#line 1820 "det_analysis.m"
            {
#line 1821 "det_analysis.m"
              *check_hlds__det_analysis__Goal_15 = check_hlds__det_analysis__Goal0_14;
#line 1822 "det_analysis.m"
              *check_hlds__det_analysis__Detism_21 = (MR_Integer) 0;
#line 1823 "det_analysis.m"
              *check_hlds__det_analysis__GoalFailingContexts_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1820 "det_analysis.m"
              *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109;
#line 1820 "det_analysis.m"
            }
#line 1824 "det_analysis.m"
          else
#line 1824 "det_analysis.m"
            if ((check_hlds__det_analysis__FromGroundTermKind_108 == (MR_Integer) 0))
#line 1832 "det_analysis.m"
              {
#line 1833 "det_analysis.m"
                {
#line 1833 "det_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "from_ground_term_initial");
#line 1833 "det_analysis.m"
                  return;
                }
#line 1832 "det_analysis.m"
              }
#line 1824 "det_analysis.m"
            else
#line 1827 "det_analysis.m"
              {
#line 1827 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
#line 1827 "det_analysis.m"
                return;
              }
#line 1818 "det_analysis.m"
        }
#line 1560 "det_analysis.m"
      else
#line 1560 "det_analysis.m"
        if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1794 "det_analysis.m"
          {
#line 1795 "det_analysis.m"
            {
#line 1795 "det_analysis.m"
              check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
            }
#line 1802 "det_analysis.m"
            if ((*check_hlds__det_analysis__Detism_21 == (MR_Integer) 4))
#line 1800 "det_analysis.m"
              {
#line 1800 "det_analysis.m"
              }
#line 1802 "det_analysis.m"
            else
#line 1802 "det_analysis.m"
              if ((*check_hlds__det_analysis__Detism_21 == (MR_Integer) 0))
#line 1799 "det_analysis.m"
                {
#line 1799 "det_analysis.m"
                }
#line 1802 "det_analysis.m"
              else
#line 1811 "det_analysis.m"
                {
#line 1814 "det_analysis.m"
                  {
#line 1814 "det_analysis.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_scope\'/12", (MR_String) "Loop control scope with strange determinism");
#line 1814 "det_analysis.m"
                    return;
                  }
#line 1811 "det_analysis.m"
                }
#line 1794 "det_analysis.m"
          }
#line 1560 "det_analysis.m"
        else
#line 1560 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1743 "det_analysis.m"
            {
#line 1743 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Detism0_91;
#line 1743 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_122_122;
#line 1764 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Detism1_92;

#line 1744 "det_analysis.m"
              {
#line 1744 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, &check_hlds__det_analysis__Detism0_91, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_122_122);
              }
#line 1755 "det_analysis.m"
              if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 4))
#line 1756 "det_analysis.m"
                {
#line 1756 "det_analysis.m"
                  check_hlds__det_analysis__Detism1_92 = (MR_Integer) 4;
#line 1756 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1756 "det_analysis.m"
                }
#line 1755 "det_analysis.m"
              else
#line 1755 "det_analysis.m"
                if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 0))
#line 1753 "det_analysis.m"
                  {
#line 1753 "det_analysis.m"
                    check_hlds__det_analysis__Detism1_92 = (MR_Integer) 0;
#line 1753 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1753 "det_analysis.m"
                  }
#line 1755 "det_analysis.m"
                else
#line 1755 "det_analysis.m"
                  if ((check_hlds__det_analysis__Detism0_91 == (MR_Integer) 6))
#line 1759 "det_analysis.m"
                    {
#line 1759 "det_analysis.m"
                      check_hlds__det_analysis__Detism1_92 = (MR_Integer) 0;
#line 1759 "det_analysis.m"
                      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_TRUE;
#line 1759 "det_analysis.m"
                    }
#line 1755 "det_analysis.m"
                  else
#line 1755 "det_analysis.m"
                    (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded = MR_FALSE;
#line 1764 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_scope_12_p_0_env_0__succeeded)
#line 1763 "det_analysis.m"
                {
#line 1763 "det_analysis.m"
                  *check_hlds__det_analysis__Detism_21 = check_hlds__det_analysis__Detism1_92;
#line 1763 "det_analysis.m"
                  *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_122_122;
#line 1763 "det_analysis.m"
                }
#line 1764 "det_analysis.m"
              else
#line 1765 "det_analysis.m"
                {
#line 1765 "det_analysis.m"
                  MR_String check_hlds__det_analysis__DetismStr_93;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Pieces_94;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Spec_95;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_125_125;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_126_126;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_136_136;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_137_137;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_138_138;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__V_139_139;
#line 1765 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Context_346;

#line 1765 "det_analysis.m"
                  *check_hlds__det_analysis__Detism_21 = check_hlds__det_analysis__Detism0_91;
#line 1766 "det_analysis.m"
                  {
#line 1766 "det_analysis.m"
                    check_hlds__det_analysis__Context_346 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
                  }
#line 1767 "det_analysis.m"
                  {
#line 1767 "det_analysis.m"
                    check_hlds__det_analysis__DetismStr_93 = parse_tree__prog_out__determinism_to_string_1_f_0(*check_hlds__det_analysis__Detism_21);
                  }
#line 1769 "det_analysis.m"
                  {
#line 1769 "det_analysis.m"
                    check_hlds__det_analysis__V_126_126 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_126_126, 0) = ((MR_Box) (check_hlds__det_analysis__DetismStr_93));
#line 1769 "det_analysis.m"
                  }
#line 1769 "det_analysis.m"
                  {
#line 1769 "det_analysis.m"
                    check_hlds__det_analysis__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_125_125, 0) = ((MR_Box) (check_hlds__det_analysis__V_126_126));
#line 1769 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[38])));
#line 1769 "det_analysis.m"
                  }
#line 1768 "det_analysis.m"
                  {
#line 1768 "det_analysis.m"
                    check_hlds__det_analysis__Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1768 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[121])));
#line 1768 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_94, 1) = ((MR_Box) (check_hlds__det_analysis__V_125_125));
#line 1768 "det_analysis.m"
                  }
#line 1772 "det_analysis.m"
                  {
#line 1772 "det_analysis.m"
                    check_hlds__det_analysis__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1772 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_139_139, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_94));
#line 1772 "det_analysis.m"
                  }
#line 1772 "det_analysis.m"
                  {
#line 1772 "det_analysis.m"
                    check_hlds__det_analysis__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_138_138, 0) = ((MR_Box) (check_hlds__det_analysis__V_139_139));
#line 1772 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1772 "det_analysis.m"
                  }
#line 1772 "det_analysis.m"
                  {
#line 1772 "det_analysis.m"
                    check_hlds__det_analysis__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1772 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_137_137, 0) = ((MR_Box) (check_hlds__det_analysis__Context_346));
#line 1772 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_137_137, 1) = ((MR_Box) (check_hlds__det_analysis__V_138_138));
#line 1772 "det_analysis.m"
                  }
#line 1772 "det_analysis.m"
                  {
#line 1772 "det_analysis.m"
                    check_hlds__det_analysis__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 0) = ((MR_Box) (check_hlds__det_analysis__V_137_137));
#line 1772 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1772 "det_analysis.m"
                  }
#line 1771 "det_analysis.m"
                  {
#line 1771 "det_analysis.m"
                    check_hlds__det_analysis__Spec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1771 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1771 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1771 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_95, 2) = ((MR_Box) (check_hlds__det_analysis__V_136_136));
#line 1771 "det_analysis.m"
                  }
#line 1773 "det_analysis.m"
                  {
#line 1773 "det_analysis.m"
                    check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_95, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_122_122, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
#line 1773 "det_analysis.m"
                    return;
                  }
#line 1765 "det_analysis.m"
                }
#line 1743 "det_analysis.m"
            }
#line 1560 "det_analysis.m"
          else
#line 1560 "det_analysis.m"
            if (((((((((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 4)))) || (((((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Reason_13, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 0)))))) || (((MR_tag((MR_Word) check_hlds__det_analysis__Reason_13)) == (MR_mktag((MR_Integer) 2))))))
#line 1780 "det_analysis.m"
              {
#line 1780 "det_analysis.m"
                check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
#line 1780 "det_analysis.m"
                return;
              }
#line 1560 "det_analysis.m"
            else
#line 1788 "det_analysis.m"
              {
#line 1788 "det_analysis.m"
                MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_119_119;

#line 1789 "det_analysis.m"
                {
#line 1789 "det_analysis.m"
                  check_hlds__det_util__det_info_set_has_req_scope_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_109, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_119_119);
                }
#line 1790 "det_analysis.m"
                {
#line 1790 "det_analysis.m"
                  check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_14, check_hlds__det_analysis__Goal_15, check_hlds__det_analysis__InstMap0_17, check_hlds__det_analysis__SolnContext_18, check_hlds__det_analysis__RightFailingContexts_19, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_20, check_hlds__det_analysis__Detism_21, check_hlds__det_analysis__GoalFailingContexts_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_119_119, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_110);
#line 1790 "det_analysis.m"
                  return;
                }
#line 1788 "det_analysis.m"
              }
#line 1547 "det_analysis.m"
  }
#line 1547 "det_analysis.m"
}

#line 1523 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 1523 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7,
#line 1523 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_CanFail_8,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9,
#line 1523 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10,
#line 1523 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11,
#line 1523 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12)
#line 1523 "det_analysis.m"
{
#line 1529 "det_analysis.m"
  {
#line 1529 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 1529 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1529 "det_analysis.m"
      {
#line 1529 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1531 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11;
#line 1531 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10 = check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9;
#line 1531 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_CanFail_8 = check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7;
#line 1529 "det_analysis.m"
      }
#line 1529 "det_analysis.m"
    else
#line 1534 "det_analysis.m"
      {
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_28;
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_29;
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_37;
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_38;
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_39;
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46;
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47;
#line 1534 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48;

#line 1535 "det_analysis.m"
        {
#line 1535 "det_analysis.m"
          check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__Goal0_26, &check_hlds__det_analysis__Goal_28, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__FirstDetism_37, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_11, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46);
        }
#line 1538 "det_analysis.m"
        {
#line 1538 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_37, &check_hlds__det_analysis__FirstCanFail_38, &check_hlds__det_analysis__FirstMaxSolns_39);
        }
#line 1539 "det_analysis.m"
        {
#line 1539 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_CanFail_0_7, check_hlds__det_analysis__FirstCanFail_38, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47);
        }
#line 1540 "det_analysis.m"
        {
#line 1540 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_0_9, check_hlds__det_analysis__FirstMaxSolns_39, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48);
        }
#line 1541 "det_analysis.m"
        {
#line 1541 "det_analysis.m"
          check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(check_hlds__det_analysis__Goals0_27, &check_hlds__det_analysis__Goals_29, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_47, check_hlds__det_analysis__STATE_VARIABLE_CanFail_8, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_48, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_10, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_12);
        }
#line 1532 "det_analysis.m"
        {
#line 1532 "det_analysis.m"
          MR_Word base;
#line 1532 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 1532 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_28));
#line 1532 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_29));
#line 1532 "det_analysis.m"
        }
#line 1534 "det_analysis.m"
      }
#line 1529 "det_analysis.m"
  }
#line 1523 "det_analysis.m"
}

#line 1503 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1(
#line 1503 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg)
#line 1503 "det_analysis.m"
{
#line 1503 "det_analysis.m"
  {
#line 1503 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1503 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;

#line 1503 "det_analysis.m"
    {
#line 1503 "det_analysis.m"
      return check_hlds__det_analysis__succeeded = check_hlds__det_analysis__IntroducedFrom__pred__det_infer_atomic_goal__1503__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__closure, (MR_Integer) 4))));
    }
#line 1503 "det_analysis.m"
    return check_hlds__det_analysis__succeeded;
#line 1503 "det_analysis.m"
  }
#line 1503 "det_analysis.m"
}

#line 1487 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1487 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_12,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15,
#line 1487 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_16,
#line 1487 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25,
#line 1487 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26)
#line 1487 "det_analysis.m"
{
#line 1493 "det_analysis.m"
  {
#line 1493 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1493 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts_18;
#line 1493 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27;

#line 1494 "det_analysis.m"
    {
#line 1494 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_10, check_hlds__det_analysis__Goal_11, check_hlds__det_analysis__InstMap0_12, check_hlds__det_analysis__SolnContext_13, check_hlds__det_analysis__RightFailingContexts_14, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_15, check_hlds__det_analysis__Detism_16, &check_hlds__det_analysis__GoalFailingContexts_18, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_25, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27);
    }
#line 1505 "det_analysis.m"
    if ((((((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 4)) || ((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 0)))) || ((*check_hlds__det_analysis__Detism_16 == (MR_Integer) 6))))
#line 1501 "det_analysis.m"
      {
#line 1501 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_48_48;

#line 1503 "det_analysis.m"
        {
#line 1503 "det_analysis.m"
          check_hlds__det_analysis__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1503 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (&check_hlds__det_analysis_scalar_common_6[0]));
#line 1503 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__det_infer_atomic_goal_9_p_0_1));
#line 1503 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1503 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 3) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts_18));
#line 1503 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1503 "det_analysis.m"
        }
#line 1503 "det_analysis.m"
        {
#line 1503 "det_analysis.m"
          mercury__require__expect_4_p_0(check_hlds__det_analysis__V_48_48, (MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_atomic_goal\'/9", (MR_String) "GoalFailingContexts != []");
        }
#line 1501 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27;
#line 1501 "det_analysis.m"
      }
#line 1505 "det_analysis.m"
    else
#line 1511 "det_analysis.m"
      {
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_10, (MR_Integer) 1)));
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_21;
#line 1511 "det_analysis.m"
        MR_String check_hlds__det_analysis__DetismStr_22;
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_23;
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_24;
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_30_30;
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_31_31;
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_41_41;
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_42_42;
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_43_43;
#line 1511 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_44_44;
#line 1512 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_10, (MR_Integer) 0)));

#line 1513 "det_analysis.m"
        {
#line 1513 "det_analysis.m"
          check_hlds__det_analysis__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo0_20);
        }
#line 1514 "det_analysis.m"
        {
#line 1514 "det_analysis.m"
          check_hlds__det_analysis__DetismStr_22 = parse_tree__prog_out__determinism_to_string_1_f_0(*check_hlds__det_analysis__Detism_16);
        }
#line 1516 "det_analysis.m"
        {
#line 1516 "det_analysis.m"
          check_hlds__det_analysis__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "det_analysis.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_31_31, 0) = ((MR_Box) (check_hlds__det_analysis__DetismStr_22));
#line 1516 "det_analysis.m"
        }
#line 1516 "det_analysis.m"
        {
#line 1516 "det_analysis.m"
          check_hlds__det_analysis__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_30_30, 0) = ((MR_Box) (check_hlds__det_analysis__V_31_31));
#line 1516 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[38])));
#line 1516 "det_analysis.m"
        }
#line 1515 "det_analysis.m"
        {
#line 1515 "det_analysis.m"
          check_hlds__det_analysis__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[106])));
#line 1515 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_23, 1) = ((MR_Box) (check_hlds__det_analysis__V_30_30));
#line 1515 "det_analysis.m"
        }
#line 1519 "det_analysis.m"
        {
#line 1519 "det_analysis.m"
          check_hlds__det_analysis__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_44_44, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_23));
#line 1519 "det_analysis.m"
        }
#line 1519 "det_analysis.m"
        {
#line 1519 "det_analysis.m"
          check_hlds__det_analysis__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_43_43, 0) = ((MR_Box) (check_hlds__det_analysis__V_44_44));
#line 1519 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1519 "det_analysis.m"
        }
#line 1519 "det_analysis.m"
        {
#line 1519 "det_analysis.m"
          check_hlds__det_analysis__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_42_42, 0) = ((MR_Box) (check_hlds__det_analysis__Context_21));
#line 1519 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_42_42, 1) = ((MR_Box) (check_hlds__det_analysis__V_43_43));
#line 1519 "det_analysis.m"
        }
#line 1519 "det_analysis.m"
        {
#line 1519 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_41_41, 0) = ((MR_Box) (check_hlds__det_analysis__V_42_42));
#line 1519 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1519 "det_analysis.m"
        }
#line 1518 "det_analysis.m"
        {
#line 1518 "det_analysis.m"
          check_hlds__det_analysis__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1518 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1518 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_24, 2) = ((MR_Box) (check_hlds__det_analysis__V_41_41));
#line 1518 "det_analysis.m"
        }
#line 1520 "det_analysis.m"
        {
#line 1520 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_24, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_27_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_26);
#line 1520 "det_analysis.m"
          return;
        }
#line 1511 "det_analysis.m"
      }
#line 1493 "det_analysis.m"
  }
#line 1487 "det_analysis.m"
}

#line 1446 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_atomic_11_p_0(
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MainGoal0_12,
#line 1446 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__MainGoal_13,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__OrElseGoals0_14,
#line 1446 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__OrElseGoals_15,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_16,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19,
#line 1446 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_20,
#line 1446 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30,
#line 1446 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31)
#line 1446 "det_analysis.m"
{
#line 1453 "det_analysis.m"
  {
#line 1453 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1453 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MainDetism_22;
#line 1453 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32;

#line 1454 "det_analysis.m"
    {
#line 1454 "det_analysis.m"
      check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__MainGoal0_12, check_hlds__det_analysis__MainGoal_13, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, &check_hlds__det_analysis__MainDetism_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_30, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32);
    }
#line 1461 "det_analysis.m"
    if ((check_hlds__det_analysis__OrElseGoals0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1458 "det_analysis.m"
      {
#line 1459 "det_analysis.m"
        *check_hlds__det_analysis__OrElseGoals_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1460 "det_analysis.m"
        *check_hlds__det_analysis__Detism_20 = check_hlds__det_analysis__MainDetism_22;
#line 1458 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32;
#line 1458 "det_analysis.m"
      }
#line 1461 "det_analysis.m"
    else
#line 1462 "det_analysis.m"
      {
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainCanFail_25;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainMaxSolns_26;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_27;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns0_28;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns_29;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_47;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_48;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_49;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_50;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_58;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_59;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_60;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68;
#line 1462 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69;

#line 1463 "det_analysis.m"
        {
#line 1463 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__MainDetism_22, &check_hlds__det_analysis__MainCanFail_25, &check_hlds__det_analysis__MainMaxSolns_26);
        }
#line 1532 "det_analysis.m"
        check_hlds__det_analysis__Goal0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OrElseGoals0_14, (MR_Integer) 0)));
#line 1532 "det_analysis.m"
        check_hlds__det_analysis__Goals0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__OrElseGoals0_14, (MR_Integer) 1)));
#line 1535 "det_analysis.m"
        {
#line 1535 "det_analysis.m"
          check_hlds__det_analysis__det_infer_atomic_goal_9_p_0(check_hlds__det_analysis__Goal0_47, &check_hlds__det_analysis__Goal_49, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, &check_hlds__det_analysis__FirstDetism_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_32_32, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67);
        }
#line 1538 "det_analysis.m"
        {
#line 1538 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_58, &check_hlds__det_analysis__FirstCanFail_59, &check_hlds__det_analysis__FirstMaxSolns_60);
        }
#line 1539 "det_analysis.m"
        {
#line 1539 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__MainCanFail_25, check_hlds__det_analysis__FirstCanFail_59, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68);
        }
#line 1540 "det_analysis.m"
        {
#line 1540 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__MainMaxSolns_26, check_hlds__det_analysis__FirstMaxSolns_60, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69);
        }
#line 1541 "det_analysis.m"
        {
#line 1541 "det_analysis.m"
          check_hlds__det_analysis__det_infer_orelse_goals_12_p_0(check_hlds__det_analysis__Goals0_48, &check_hlds__det_analysis__Goals_50, check_hlds__det_analysis__InstMap0_16, check_hlds__det_analysis__SolnContext_17, check_hlds__det_analysis__RightFailingContexts_18, check_hlds__det_analysis__MaybePromiseEqvSolutionSets0_19, check_hlds__det_analysis__STATE_VARIABLE_CanFail_47_68, &check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_48_69, &check_hlds__det_analysis__MaxSolns0_28, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_67, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_31);
        }
#line 1532 "det_analysis.m"
        {
#line 1532 "det_analysis.m"
          MR_Word base;
#line 1532 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "det_analysis.m"
          *check_hlds__det_analysis__OrElseGoals_15 = base;
#line 1532 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_49));
#line 1532 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_50));
#line 1532 "det_analysis.m"
        }
#line 1470 "det_analysis.m"
        if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 3))
#line 1482 "det_analysis.m"
          check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 3;
#line 1470 "det_analysis.m"
        else
#line 1470 "det_analysis.m"
          if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 2))
#line 1479 "det_analysis.m"
            check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 2;
#line 1470 "det_analysis.m"
          else
#line 1470 "det_analysis.m"
            if ((check_hlds__det_analysis__MaxSolns0_28 == (MR_Integer) 1))
#line 1476 "det_analysis.m"
              check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 2;
#line 1470 "det_analysis.m"
            else
#line 1469 "det_analysis.m"
              check_hlds__det_analysis__MaxSolns_29 = (MR_Integer) 0;
#line 1484 "det_analysis.m"
        {
#line 1484 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_20, check_hlds__det_analysis__CanFail_27, check_hlds__det_analysis__MaxSolns_29);
#line 1484 "det_analysis.m"
          return;
        }
#line 1462 "det_analysis.m"
      }
#line 1453 "det_analysis.m"
  }
#line 1446 "det_analysis.m"
}

#line 1409 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_not_9_p_0(
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_10,
#line 1409 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_11,
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_13,
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14,
#line 1409 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1409 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1409 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24,
#line 1409 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25)
#line 1409 "det_analysis.m"
{
#line 1415 "det_analysis.m"
  {
#line 1415 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1415 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NegDetism_18;
#line 1415 "det_analysis.m"
    MR_Word check_hlds__det_analysis__MaybeDetism_20;
#line 1415 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_21;
#line 1423 "det_analysis.m"
    MR_Word check_hlds__det_analysis___NegatedGoalCanFail_19;
#line 1434 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_22_22;

#line 1423 "det_analysis.m"
    {
#line 1423 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_10, check_hlds__det_analysis__Goal_11, check_hlds__det_analysis__InstMap0_13, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__MaybePromiseEqvSolutionSets_14, &check_hlds__det_analysis__NegDetism_18, &check_hlds__det_analysis___NegatedGoalCanFail_19, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_24, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_25);
    }
#line 1426 "det_analysis.m"
    {
#line 1426 "det_analysis.m"
      parse_tree__prog_data__det_negation_det_2_p_0(check_hlds__det_analysis__NegDetism_18, &check_hlds__det_analysis__MaybeDetism_20);
    }
#line 1431 "det_analysis.m"
    if ((check_hlds__det_analysis__MaybeDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1428 "det_analysis.m"
      {
#line 1429 "det_analysis.m"
        {
#line 1429 "det_analysis.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_not\'/9", (MR_String) "inappropriate determinism inside a negation");
#line 1429 "det_analysis.m"
          return;
        }
#line 1428 "det_analysis.m"
      }
#line 1431 "det_analysis.m"
    else
#line 1432 "det_analysis.m"
      *check_hlds__det_analysis__Detism_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDetism_20, (MR_Integer) 0)));
#line 1434 "det_analysis.m"
    {
#line 1434 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_15, &check_hlds__det_analysis__CanFail_21, &check_hlds__det_analysis__V_22_22);
    }
#line 1439 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_21 == (MR_Integer) 0))
#line 1436 "det_analysis.m"
      {
#line 1436 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_23;
#line 1436 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_32_32;

#line 1437 "det_analysis.m"
        {
#line 1437 "det_analysis.m"
          check_hlds__det_analysis__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_12);
        }
#line 1438 "det_analysis.m"
        {
#line 1438 "det_analysis.m"
          check_hlds__det_analysis__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_32_32, 0) = ((MR_Box) (check_hlds__det_analysis__Context_23));
#line 1438 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1438 "det_analysis.m"
        }
#line 1438 "det_analysis.m"
        {
#line 1438 "det_analysis.m"
          MR_Word base;
#line 1438 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_16 = base;
#line 1438 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__V_32_32));
#line 1438 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1438 "det_analysis.m"
        }
#line 1436 "det_analysis.m"
      }
#line 1439 "det_analysis.m"
    else
#line 1441 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1415 "det_analysis.m"
  }
#line 1409 "det_analysis.m"
}

#line 1321 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_if_then_else_14_p_0(
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cond0_15,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cond_16,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Then0_17,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Then_18,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Else0_19,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Else_20,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_21,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_22,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_23,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_25,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_26,
#line 1321 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48,
#line 1321 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49)
#line 1321 "det_analysis.m"
{
#line 1329 "det_analysis.m"
  {
#line 1329 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__TypeCtorInfo_66_66;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InstMap1_29;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenDetism_30;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenFailingContexts_31;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenCanFail_32;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ThenMaxSoln_33;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondSolnContext_34;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondDetism_35;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondCanFail_37;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CondMaxSoln_38;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseDetism_39;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseFailingContexts_40;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseCanFail_41;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ElseMaxSoln_42;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_57_57;
#line 1329 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58;
#line 1359 "det_analysis.m"
    MR_Word check_hlds__det_analysis___CondFailingContexts_36;

#line 1338 "det_analysis.m"
    {
#line 1338 "det_analysis.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__det_analysis__Cond0_15, check_hlds__det_analysis__InstMap0_21, &check_hlds__det_analysis__InstMap1_29);
    }
#line 1339 "det_analysis.m"
    {
#line 1339 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Then0_17, check_hlds__det_analysis__Then_18, check_hlds__det_analysis__InstMap1_29, check_hlds__det_analysis__SolnContext_22, check_hlds__det_analysis__RightFailingContexts_23, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__ThenDetism_30, &check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_48, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53);
    }
#line 1342 "det_analysis.m"
    {
#line 1342 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ThenDetism_30, &check_hlds__det_analysis__ThenCanFail_32, &check_hlds__det_analysis__ThenMaxSoln_33);
    }
#line 1348 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ThenCanFail_32 == (MR_Integer) 1);
#line 1348 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1349 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_22 == (MR_Integer) 1);
#line 1352 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1351 "det_analysis.m"
      check_hlds__det_analysis__CondSolnContext_34 = (MR_Integer) 1;
#line 1352 "det_analysis.m"
    else
#line 1353 "det_analysis.m"
      check_hlds__det_analysis__CondSolnContext_34 = (MR_Integer) 0;
#line 6910 "check_hlds.det_analysis.c"
    check_hlds__det_analysis__TypeCtorInfo_66_66 = (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0;
#line 1360 "det_analysis.m"
    {
#line 1360 "det_analysis.m"
      check_hlds__det_analysis__V_57_57 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_66_66, check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__RightFailingContexts_23);
    }
#line 1359 "det_analysis.m"
    {
#line 1359 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Cond0_15, check_hlds__det_analysis__Cond_16, check_hlds__det_analysis__InstMap0_21, check_hlds__det_analysis__CondSolnContext_34, check_hlds__det_analysis__V_57_57, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis___CondFailingContexts_36, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58);
    }
#line 1363 "det_analysis.m"
    {
#line 1363 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis__CondCanFail_37, &check_hlds__det_analysis__CondMaxSoln_38);
    }
#line 1369 "det_analysis.m"
    {
#line 1369 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Else0_19, check_hlds__det_analysis__Else_20, check_hlds__det_analysis__InstMap0_21, check_hlds__det_analysis__SolnContext_22, check_hlds__det_analysis__RightFailingContexts_23, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_24, &check_hlds__det_analysis__ElseDetism_39, &check_hlds__det_analysis__ElseFailingContexts_40, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_49);
    }
#line 1372 "det_analysis.m"
    {
#line 1372 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__ElseDetism_39, &check_hlds__det_analysis__ElseCanFail_41, &check_hlds__det_analysis__ElseMaxSoln_42);
    }
#line 1379 "det_analysis.m"
    if ((check_hlds__det_analysis__CondCanFail_37 == (MR_Integer) 0))
#line 1393 "det_analysis.m"
      if ((check_hlds__det_analysis__CondMaxSoln_38 == (MR_Integer) 0))
#line 1382 "det_analysis.m"
        {
#line 1382 "det_analysis.m"
          MR_Word check_hlds__det_analysis__MaybeNegDetism_43;
#line 1382 "det_analysis.m"
          MR_Word check_hlds__det_analysis__NegDetism_44;

#line 1384 "det_analysis.m"
          {
#line 1384 "det_analysis.m"
            parse_tree__prog_data__det_negation_det_2_p_0(check_hlds__det_analysis__CondDetism_35, &check_hlds__det_analysis__MaybeNegDetism_43);
          }
#line 1389 "det_analysis.m"
          if ((check_hlds__det_analysis__MaybeNegDetism_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1386 "det_analysis.m"
            {
#line 1387 "det_analysis.m"
              {
#line 1387 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_if_then_else\'/14", (MR_String) "cannot find determinism of negated condition");
#line 1387 "det_analysis.m"
                return;
              }
#line 1386 "det_analysis.m"
            }
#line 1389 "det_analysis.m"
          else
#line 1390 "det_analysis.m"
            check_hlds__det_analysis__NegDetism_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeNegDetism_43, (MR_Integer) 0)));
#line 1392 "det_analysis.m"
          {
#line 1392 "det_analysis.m"
            parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__NegDetism_44, check_hlds__det_analysis__ElseDetism_39, check_hlds__det_analysis__Detism_25);
          }
#line 1382 "det_analysis.m"
        }
#line 1393 "det_analysis.m"
      else
#line 1397 "det_analysis.m"
        {
#line 1397 "det_analysis.m"
          MR_Word check_hlds__det_analysis__CTMaxSoln_45;
#line 1397 "det_analysis.m"
          MR_Word check_hlds__det_analysis__MaxSoln_46;
#line 1397 "det_analysis.m"
          MR_Word check_hlds__det_analysis__CanFail_47;

#line 1398 "det_analysis.m"
          {
#line 1398 "det_analysis.m"
            parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__CondMaxSoln_38, check_hlds__det_analysis__ThenMaxSoln_33, &check_hlds__det_analysis__CTMaxSoln_45);
          }
#line 1399 "det_analysis.m"
          {
#line 1399 "det_analysis.m"
            parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__CTMaxSoln_45, check_hlds__det_analysis__ElseMaxSoln_42, &check_hlds__det_analysis__MaxSoln_46);
          }
#line 1400 "det_analysis.m"
          {
#line 1400 "det_analysis.m"
            parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__ThenCanFail_32, check_hlds__det_analysis__ElseCanFail_41, &check_hlds__det_analysis__CanFail_47);
          }
#line 1401 "det_analysis.m"
          {
#line 1401 "det_analysis.m"
            parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_25, check_hlds__det_analysis__CanFail_47, check_hlds__det_analysis__MaxSoln_46);
          }
#line 1397 "det_analysis.m"
        }
#line 1379 "det_analysis.m"
    else
#line 1378 "det_analysis.m"
      {
#line 1378 "det_analysis.m"
        parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__CondDetism_35, check_hlds__det_analysis__ThenDetism_30, check_hlds__det_analysis__Detism_25);
      }
#line 1407 "det_analysis.m"
    {
#line 1407 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_26 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_66_66, check_hlds__det_analysis__ThenFailingContexts_31, check_hlds__det_analysis__ElseFailingContexts_40);
    }
#line 1329 "det_analysis.m"
  }
#line 1321 "det_analysis.m"
}

#line 1232 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_unify_13_p_0(
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__LHS_14,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RHS0_15,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Unify_16,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__UnifyContext_17,
#line 1232 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__RHS_18,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_19,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_20,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_21,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_22,
#line 1232 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 1232 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 1232 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85,
#line 1232 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86)
#line 1232 "det_analysis.m"
{
#line 1240 "det_analysis.m"
  {
#line 1240 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1240 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UnifyCanFail_47;
#line 1240 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ExaminesRepresentation_48;
#line 1240 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UnifyNumSolns_49;
#line 1240 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101;
#line 1240 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_103_103;

#line 1267 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__RHS0_15)) == (MR_mktag((MR_Integer) 2))))
#line 1253 "det_analysis.m"
      {
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Purity_27 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Groundness_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredOrFunc_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__NonLocalVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 2)));
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 3)));
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 4)));
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaDeclaredDet_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 5)));
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__RHS0_15, (MR_Integer) 6)));
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaSolnContext_37;
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_38;
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_39;
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_40;
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__LambdaInferredDet_41;
#line 1253 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100;
#line 1254 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_125_125;
#line 1254 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_36_36;
#line 1261 "det_analysis.m"
        MR_Word check_hlds__det_analysis___LambdaFailingContexts_42;

#line 1254 "det_analysis.m"
        {
#line 1254 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__LambdaDeclaredDet_34, &check_hlds__det_analysis__V_36_36, &check_hlds__det_analysis__V_125_125);
        }
#line 1254 "det_analysis.m"
        check_hlds__det_analysis__succeeded = ((MR_Integer) 2 == check_hlds__det_analysis__V_125_125);
#line 1256 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1255 "det_analysis.m"
          check_hlds__det_analysis__LambdaSolnContext_37 = (MR_Integer) 1;
#line 1256 "det_analysis.m"
        else
#line 1257 "det_analysis.m"
          check_hlds__det_analysis__LambdaSolnContext_37 = (MR_Integer) 0;
#line 1259 "det_analysis.m"
        {
#line 1259 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85, &check_hlds__det_analysis__ModuleInfo_38);
        }
#line 1260 "det_analysis.m"
        {
#line 1260 "det_analysis.m"
          hlds__instmap__pre_lambda_update_5_p_0(check_hlds__det_analysis__ModuleInfo_38, check_hlds__det_analysis__Vars_32, check_hlds__det_analysis__Modes_33, check_hlds__det_analysis__InstMap0_20, &check_hlds__det_analysis__InstMap1_39);
        }
#line 1261 "det_analysis.m"
        {
#line 1261 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_35, &check_hlds__det_analysis__Goal_40, check_hlds__det_analysis__InstMap1_39, check_hlds__det_analysis__LambdaSolnContext_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__LambdaInferredDet_41, &check_hlds__det_analysis___LambdaFailingContexts_42, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100);
        }
#line 1263 "det_analysis.m"
        {
#line 1263 "det_analysis.m"
          check_hlds__det_report__det_check_lambda_7_p_0(check_hlds__det_analysis__LambdaDeclaredDet_34, check_hlds__det_analysis__LambdaInferredDet_41, check_hlds__det_analysis__Goal_40, check_hlds__det_analysis__GoalInfo_19, check_hlds__det_analysis__InstMap1_39, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_100_100, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101);
        }
#line 1265 "det_analysis.m"
        {
#line 1265 "det_analysis.m"
          MR_Word base;
#line 1265 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "det_analysis.m"
          *check_hlds__det_analysis__RHS_18 = base;
#line 1265 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((check_hlds__det_analysis__Purity_27 | ((((check_hlds__det_analysis__Groundness_28 << (MR_Integer) 2)) | ((check_hlds__det_analysis__PredOrFunc_29 << (MR_Integer) 3)))))));
#line 1265 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 1265 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__det_analysis__NonLocalVars_31));
#line 1265 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__det_analysis__Vars_32));
#line 1265 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__det_analysis__Modes_33));
#line 1265 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__det_analysis__LambdaDeclaredDet_34));
#line 1265 "det_analysis.m"
          MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (check_hlds__det_analysis__Goal_40));
#line 1265 "det_analysis.m"
        }
#line 1253 "det_analysis.m"
      }
#line 1267 "det_analysis.m"
    else
#line 1270 "det_analysis.m"
      {
#line 1271 "det_analysis.m"
        *check_hlds__det_analysis__RHS_18 = check_hlds__det_analysis__RHS0_15;
#line 1270 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_85;
#line 1270 "det_analysis.m"
      }
#line 1273 "det_analysis.m"
    {
#line 1273 "det_analysis.m"
      check_hlds__det_analysis__det_infer_unify_canfail_2_p_0(check_hlds__det_analysis__Unify_16, &check_hlds__det_analysis__UnifyCanFail_47);
    }
#line 1274 "det_analysis.m"
    {
#line 1274 "det_analysis.m"
      check_hlds__det_analysis__det_infer_unify_examines_rep_2_p_0(check_hlds__det_analysis__Unify_16, &check_hlds__det_analysis__ExaminesRepresentation_48);
    }
#line 1277 "det_analysis.m"
    {
#line 1277 "det_analysis.m"
      check_hlds__det_analysis__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_103_103, 0) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_17));
#line 1277 "det_analysis.m"
    }
#line 1275 "det_analysis.m"
    {
#line 1275 "det_analysis.m"
      check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(check_hlds__det_analysis__LHS_14, check_hlds__det_analysis__ExaminesRepresentation_48, check_hlds__det_analysis__UnifyCanFail_47, check_hlds__det_analysis__SolnContext_21, check_hlds__det_analysis__RightFailingContexts_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalInfo_19, check_hlds__det_analysis__V_103_103, &check_hlds__det_analysis__UnifyNumSolns_49, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_101_101, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_86);
    }
#line 1278 "det_analysis.m"
    {
#line 1278 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_23, check_hlds__det_analysis__UnifyCanFail_47, check_hlds__det_analysis__UnifyNumSolns_49);
    }
#line 1314 "det_analysis.m"
    if ((check_hlds__det_analysis__UnifyCanFail_47 == (MR_Integer) 0))
#line 1280 "det_analysis.m"
      {
#line 1280 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_50;

#line 1281 "det_analysis.m"
        {
#line 1281 "det_analysis.m"
          check_hlds__det_analysis__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_19);
        }
#line 1285 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 2))))
#line 1286 "det_analysis.m"
          {
#line 1287 "det_analysis.m"
            {
#line 1287 "det_analysis.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail assign");
#line 1287 "det_analysis.m"
              return;
            }
#line 1286 "det_analysis.m"
          }
#line 1285 "det_analysis.m"
        else
#line 1285 "det_analysis.m"
          if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 0))))
#line 1283 "det_analysis.m"
            {
#line 1284 "det_analysis.m"
              {
#line 1284 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "can_fail construct");
#line 1284 "det_analysis.m"
                return;
              }
#line 1283 "det_analysis.m"
            }
#line 1285 "det_analysis.m"
          else
#line 1285 "det_analysis.m"
            if (((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 1))))
#line 1304 "det_analysis.m"
              {
#line 1304 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 0)));
#line 1304 "det_analysis.m"
                MR_Word check_hlds__det_analysis__FailingGoal_117;
#line 1304 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ConsId_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 1)));
#line 1304 "det_analysis.m"
                MR_Word check_hlds__det_analysis__FailingContext_119;
#line 1304 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 2)));
#line 1304 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 3)));
#line 1304 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 4)));
#line 1304 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Unify_16, (MR_Integer) 5)));

#line 1305 "det_analysis.m"
                {
#line 1305 "det_analysis.m"
                  check_hlds__det_analysis__FailingGoal_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1305 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 1) = ((MR_Box) (check_hlds__det_analysis__Var_78));
#line 1305 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_117, 2) = ((MR_Box) (check_hlds__det_analysis__ConsId_118));
#line 1305 "det_analysis.m"
                }
#line 1306 "det_analysis.m"
                {
#line 1306 "det_analysis.m"
                  check_hlds__det_analysis__FailingContext_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_119, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1306 "det_analysis.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_119, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_117));
#line 1306 "det_analysis.m"
                }
#line 1307 "det_analysis.m"
                {
#line 1307 "det_analysis.m"
                  MR_Word base;
#line 1307 "det_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "det_analysis.m"
                  *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1307 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_119));
#line 1307 "det_analysis.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1307 "det_analysis.m"
                }
#line 1304 "det_analysis.m"
              }
#line 1285 "det_analysis.m"
            else
#line 1285 "det_analysis.m"
              if (((((MR_tag((MR_Word) check_hlds__det_analysis__Unify_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1289 "det_analysis.m"
                {
#line 1289 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingGoal_64;
#line 1289 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingContext_77;

#line 1293 "det_analysis.m"
                  if (((MR_tag((MR_Word) *check_hlds__det_analysis__RHS_18)) == (MR_mktag((MR_Integer) 1))))
#line 1294 "det_analysis.m"
                    {
#line 1294 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__ConsId_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 0)));
#line 1294 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 1)));
#line 1294 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), *check_hlds__det_analysis__RHS_18, (MR_Integer) 2)));

#line 1295 "det_analysis.m"
                      {
#line 1295 "det_analysis.m"
                        check_hlds__det_analysis__FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1295 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 1) = ((MR_Box) (check_hlds__det_analysis__LHS_14));
#line 1295 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), check_hlds__det_analysis__FailingGoal_64, 2) = ((MR_Box) (check_hlds__det_analysis__ConsId_65));
#line 1295 "det_analysis.m"
                      }
#line 1294 "det_analysis.m"
                    }
#line 1293 "det_analysis.m"
                  else
#line 1293 "det_analysis.m"
                    if (((MR_tag((MR_Word) *check_hlds__det_analysis__RHS_18)) == (MR_mktag((MR_Integer) 2))))
#line 1297 "det_analysis.m"
                      {
#line 1298 "det_analysis.m"
                        {
#line 1298 "det_analysis.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_unify\'/13", (MR_String) "complicated_unify but no fail context");
#line 1298 "det_analysis.m"
                          return;
                        }
#line 1297 "det_analysis.m"
                      }
#line 1293 "det_analysis.m"
                    else
#line 1291 "det_analysis.m"
                      {
#line 1291 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__RHSVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__det_analysis__RHS_18, (MR_Integer) 0)));

#line 1292 "det_analysis.m"
                        {
#line 1292 "det_analysis.m"
                          check_hlds__det_analysis__FailingGoal_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "det_analysis.m"
                          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_64, 0) = ((MR_Box) (check_hlds__det_analysis__LHS_14));
#line 1292 "det_analysis.m"
                          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_64, 1) = ((MR_Box) (check_hlds__det_analysis__RHSVar_63));
#line 1292 "det_analysis.m"
                        }
#line 1291 "det_analysis.m"
                      }
#line 1301 "det_analysis.m"
                  {
#line 1301 "det_analysis.m"
                    check_hlds__det_analysis__FailingContext_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_77, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1301 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_77, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_64));
#line 1301 "det_analysis.m"
                  }
#line 1302 "det_analysis.m"
                  {
#line 1302 "det_analysis.m"
                    MR_Word base;
#line 1302 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "det_analysis.m"
                    *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1302 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_77));
#line 1302 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1302 "det_analysis.m"
                  }
#line 1289 "det_analysis.m"
                }
#line 1285 "det_analysis.m"
              else
#line 1309 "det_analysis.m"
                {
#line 1309 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Var1_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 1)));
#line 1309 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Var2_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__Unify_16, (MR_Integer) 2)));
#line 1309 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingGoal_120;
#line 1309 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__FailingContext_121;

#line 1310 "det_analysis.m"
                  {
#line 1310 "det_analysis.m"
                    check_hlds__det_analysis__FailingGoal_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_120, 0) = ((MR_Box) (check_hlds__det_analysis__Var1_83));
#line 1310 "det_analysis.m"
                    MR_hl_field(MR_mktag(2), check_hlds__det_analysis__FailingGoal_120, 1) = ((MR_Box) (check_hlds__det_analysis__Var2_84));
#line 1310 "det_analysis.m"
                  }
#line 1311 "det_analysis.m"
                  {
#line 1311 "det_analysis.m"
                    check_hlds__det_analysis__FailingContext_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_121, 0) = ((MR_Box) (check_hlds__det_analysis__Context_50));
#line 1311 "det_analysis.m"
                    MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_121, 1) = ((MR_Box) (check_hlds__det_analysis__FailingGoal_120));
#line 1311 "det_analysis.m"
                  }
#line 1312 "det_analysis.m"
                  {
#line 1312 "det_analysis.m"
                    MR_Word base;
#line 1312 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "det_analysis.m"
                    *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 1312 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_121));
#line 1312 "det_analysis.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "det_analysis.m"
                  }
#line 1309 "det_analysis.m"
                }
#line 1280 "det_analysis.m"
      }
#line 1314 "det_analysis.m"
    else
#line 1316 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1240 "det_analysis.m"
  }
#line 1232 "det_analysis.m"
}

#line 1098 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_generic_call_9_p_0(
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GenericCall_10,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__CallDetism_11,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_12,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_13,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_14,
#line 1098 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_15,
#line 1098 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_16,
#line 1098 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28,
#line 1098 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29)
#line 1098 "det_analysis.m"
{
#line 1105 "det_analysis.m"
  {
#line 1105 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1105 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_18;
#line 1105 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_19;
#line 1105 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Context_20;

#line 1106 "det_analysis.m"
    {
#line 1106 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CallDetism_11, &check_hlds__det_analysis__CanFail_18, &check_hlds__det_analysis__NumSolns_19);
    }
#line 1107 "det_analysis.m"
    {
#line 1107 "det_analysis.m"
      check_hlds__det_analysis__Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_12);
    }
#line 1109 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns_19 == (MR_Integer) 2);
#line 1109 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1110 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_13 == (MR_Integer) 0);
#line 1130 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1114 "det_analysis.m"
      {
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcInfo_21;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarSet_22;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstPieces_23;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_24;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ContextMsgs_25;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_26;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_32_32;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_35_35;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_36_36;
#line 1114 "det_analysis.m"
        MR_String check_hlds__det_analysis__V_37_37;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_46_46;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_47_47;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_48_48;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_49_49;
#line 1114 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_50_50;

#line 1114 "det_analysis.m"
        {
#line 1114 "det_analysis.m"
          check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, &check_hlds__det_analysis__ProcInfo_21);
        }
#line 1115 "det_analysis.m"
        {
#line 1115 "det_analysis.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_21, &check_hlds__det_analysis__VarSet_22);
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_37_37 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__CallDetism_11);
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_36_36, 0) = ((MR_Box) (check_hlds__det_analysis__V_37_37));
#line 1117 "det_analysis.m"
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_35_35, 0) = ((MR_Box) (check_hlds__det_analysis__V_36_36));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1117 "det_analysis.m"
        }
#line 1117 "det_analysis.m"
        {
#line 1117 "det_analysis.m"
          check_hlds__det_analysis__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[105])));
#line 1117 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_32_32, 1) = ((MR_Box) (check_hlds__det_analysis__V_35_35));
#line 1117 "det_analysis.m"
        }
#line 1116 "det_analysis.m"
        {
#line 1116 "det_analysis.m"
          check_hlds__det_analysis__FirstPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__FirstPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[104])));
#line 1116 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__FirstPieces_23, 1) = ((MR_Box) (check_hlds__det_analysis__V_32_32));
#line 1116 "det_analysis.m"
        }
#line 1119 "det_analysis.m"
        {
#line 1119 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, &check_hlds__det_analysis__ModuleInfo_24);
        }
#line 1120 "det_analysis.m"
        {
#line 1120 "det_analysis.m"
          check_hlds__det_analysis__ContextMsgs_25 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_24, check_hlds__det_analysis__VarSet_22, check_hlds__det_analysis__RightFailingContexts_14);
        }
#line 1123 "det_analysis.m"
        {
#line 1123 "det_analysis.m"
          check_hlds__det_analysis__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_50_50, 0) = ((MR_Box) (check_hlds__det_analysis__FirstPieces_23));
#line 1123 "det_analysis.m"
        }
#line 1123 "det_analysis.m"
        {
#line 1123 "det_analysis.m"
          check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (check_hlds__det_analysis__V_50_50));
#line 1123 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1123 "det_analysis.m"
        }
#line 1123 "det_analysis.m"
        {
#line 1123 "det_analysis.m"
          check_hlds__det_analysis__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 0) = ((MR_Box) (check_hlds__det_analysis__Context_20));
#line 1123 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_48_48, 1) = ((MR_Box) (check_hlds__det_analysis__V_49_49));
#line 1123 "det_analysis.m"
        }
#line 1123 "det_analysis.m"
        {
#line 1123 "det_analysis.m"
          check_hlds__det_analysis__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 0) = ((MR_Box) (check_hlds__det_analysis__V_48_48));
#line 1123 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1123 "det_analysis.m"
        }
#line 1123 "det_analysis.m"
        {
#line 1123 "det_analysis.m"
          check_hlds__det_analysis__V_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_47_47, check_hlds__det_analysis__ContextMsgs_25);
        }
#line 1122 "det_analysis.m"
        {
#line 1122 "det_analysis.m"
          check_hlds__det_analysis__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1122 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_26, 2) = ((MR_Box) (check_hlds__det_analysis__V_46_46));
#line 1122 "det_analysis.m"
        }
#line 1124 "det_analysis.m"
        {
#line 1124 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_26, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29);
        }
#line 1129 "det_analysis.m"
        {
#line 1129 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_15, check_hlds__det_analysis__CanFail_18, (MR_Integer) 3);
        }
#line 1114 "det_analysis.m"
      }
#line 1130 "det_analysis.m"
    else
#line 1131 "det_analysis.m"
      {
#line 1131 "det_analysis.m"
        *check_hlds__det_analysis__Detism_15 = check_hlds__det_analysis__CallDetism_11;
#line 1131 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_29 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_28;
#line 1131 "det_analysis.m"
      }
#line 1138 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_18 == (MR_Integer) 0))
#line 1134 "det_analysis.m"
      {
#line 1134 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_27;
#line 1134 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_55_55;

#line 1136 "det_analysis.m"
        {
#line 1136 "det_analysis.m"
          check_hlds__det_analysis__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1136 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_55_55, 1) = ((MR_Box) (check_hlds__det_analysis__GenericCall_10));
#line 1136 "det_analysis.m"
        }
#line 1135 "det_analysis.m"
        {
#line 1135 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_27, 0) = ((MR_Box) (check_hlds__det_analysis__Context_20));
#line 1135 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_27, 1) = ((MR_Box) (check_hlds__det_analysis__V_55_55));
#line 1135 "det_analysis.m"
        }
#line 1137 "det_analysis.m"
        {
#line 1137 "det_analysis.m"
          MR_Word base;
#line 1137 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_16 = base;
#line 1137 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_27));
#line 1137 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "det_analysis.m"
        }
#line 1134 "det_analysis.m"
      }
#line 1138 "det_analysis.m"
    else
#line 1140 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1105 "det_analysis.m"
  }
#line 1098 "det_analysis.m"
}

#line 1022 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_call_11_p_0(
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_12,
#line 1022 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId0_13,
#line 1022 "det_analysis.m"
  MR_Integer * check_hlds__det_analysis__ProcId_14,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Args_15,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_16,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_17,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_18,
#line 1022 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 1022 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 1022 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39,
#line 1022 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40)
#line 1022 "det_analysis.m"
{
#line 1028 "det_analysis.m"
  {
#line 1028 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 1028 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CalleePredInfo_22;
#line 1028 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Detism0_23;
#line 1028 "det_analysis.m"
    MR_Word check_hlds__det_analysis__ModuleInfo_24;
#line 1028 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CalleeModuleName_25;
#line 1028 "det_analysis.m"
    MR_String check_hlds__det_analysis__CalleeName_26;
#line 1028 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_27;
#line 1028 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_28;
#line 1028 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;

#line 1033 "det_analysis.m"
    {
#line 1033 "det_analysis.m"
      check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, check_hlds__det_analysis__PredId_12, check_hlds__det_analysis__ProcId0_13, &check_hlds__det_analysis__CalleePredInfo_22, &check_hlds__det_analysis__Detism0_23);
    }
#line 1038 "det_analysis.m"
    {
#line 1038 "det_analysis.m"
      check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, &check_hlds__det_analysis__ModuleInfo_24);
    }
#line 1039 "det_analysis.m"
    {
#line 1039 "det_analysis.m"
      check_hlds__det_analysis__CalleeModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__det_analysis__CalleePredInfo_22);
    }
#line 1040 "det_analysis.m"
    {
#line 1040 "det_analysis.m"
      check_hlds__det_analysis__CalleeName_26 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__det_analysis__CalleePredInfo_22);
    }
#line 1041 "det_analysis.m"
    {
#line 1041 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__simplify__format_call__is_format_call_3_p_0(check_hlds__det_analysis__CalleeModuleName_25, check_hlds__det_analysis__CalleeName_26, check_hlds__det_analysis__Args_15);
    }
#line 1043 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1042 "det_analysis.m"
      {
#line 1042 "det_analysis.m"
        check_hlds__det_util__det_info_set_has_format_call_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41);
      }
#line 1043 "det_analysis.m"
    else
#line 1043 "det_analysis.m"
      check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_39;
#line 1049 "det_analysis.m"
    {
#line 1049 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__Detism0_23, &check_hlds__det_analysis__CanFail_27, &check_hlds__det_analysis__NumSolns_28);
    }
#line 1051 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NumSolns_28 == (MR_Integer) 2);
#line 1051 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1052 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_17 == (MR_Integer) 0);
#line 1084 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 1060 "det_analysis.m"
      {
#line 1060 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__ProcIdPrime_29;
#line 1848 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_81;
#line 1848 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredTable_82;
#line 1848 "det_analysis.m"
        MR_Word check_hlds__det_analysis__PredInfo_83;
#line 1848 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcTable_84;
#line 1848 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ProcList_85;
#line 1851 "det_analysis.m"
        MR_Box check_hlds__det_analysis__conv0_PredInfo_83;

#line 1849 "det_analysis.m"
        {
#line 1849 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, &check_hlds__det_analysis__ModuleInfo_81);
        }
#line 1850 "det_analysis.m"
        {
#line 1850 "det_analysis.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__ModuleInfo_81, &check_hlds__det_analysis__PredTable_82);
        }
#line 1851 "det_analysis.m"
        {
#line 1851 "det_analysis.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_analysis__PredTable_82, ((MR_Box) (check_hlds__det_analysis__PredId_12)), &check_hlds__det_analysis__conv0_PredInfo_83);
        }
#line 1851 "det_analysis.m"
        check_hlds__det_analysis__PredInfo_83 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo_83);
#line 1852 "det_analysis.m"
        {
#line 1852 "det_analysis.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_analysis__PredInfo_83, &check_hlds__det_analysis__ProcTable_84);
        }
#line 1853 "det_analysis.m"
        {
#line 1853 "det_analysis.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_analysis__ProcTable_84, &check_hlds__det_analysis__ProcList_85);
        }
#line 1854 "det_analysis.m"
        {
#line 1854 "det_analysis.m"
          check_hlds__det_analysis__succeeded = check_hlds__det_analysis__det_find_matching_non_cc_mode_procs_5_p_0(check_hlds__det_analysis__ProcList_85, check_hlds__det_analysis__ModuleInfo_81, check_hlds__det_analysis__PredInfo_83, check_hlds__det_analysis__ProcId0_13, &check_hlds__det_analysis__ProcIdPrime_29);
        }
#line 1060 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 1058 "det_analysis.m"
          {
#line 1058 "det_analysis.m"
            *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcIdPrime_29;
#line 1059 "det_analysis.m"
            {
#line 1059 "det_analysis.m"
              parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, (MR_Integer) 3);
            }
#line 1058 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;
#line 1058 "det_analysis.m"
          }
#line 1060 "det_analysis.m"
        else
#line 1061 "det_analysis.m"
          {
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__TypeCtorInfo_74_74;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__GoalContext_30;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ProcInfo_31;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__VarSet_32;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredPieces_33;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__FirstPieces_34;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__ContextMsgs_35;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Spec_36;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_48_48;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_49_49;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_52_52;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_53_53;
#line 1061 "det_analysis.m"
            MR_String check_hlds__det_analysis__V_54_54;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_63_63;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_64_64;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_65_65;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_66_66;
#line 1061 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_67_67;

#line 1061 "det_analysis.m"
            {
#line 1061 "det_analysis.m"
              check_hlds__det_analysis__GoalContext_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
            }
#line 1062 "det_analysis.m"
            {
#line 1062 "det_analysis.m"
              check_hlds__det_util__det_get_proc_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, &check_hlds__det_analysis__ProcInfo_31);
            }
#line 1063 "det_analysis.m"
            {
#line 1063 "det_analysis.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__det_analysis__ProcInfo_31, &check_hlds__det_analysis__VarSet_32);
            }
#line 1064 "det_analysis.m"
            {
#line 1064 "det_analysis.m"
              check_hlds__det_analysis__PredPieces_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__det_analysis__ModuleInfo_24, (MR_Integer) 0, check_hlds__det_analysis__PredId_12);
            }
#line 7969 "check_hlds.det_analysis.c"
            check_hlds__det_analysis__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1068 "det_analysis.m"
            {
#line 1068 "det_analysis.m"
              check_hlds__det_analysis__V_54_54 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(check_hlds__det_analysis__Detism0_23);
            }
#line 1068 "det_analysis.m"
            {
#line 1068 "det_analysis.m"
              check_hlds__det_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(2), check_hlds__det_analysis__V_53_53, 0) = ((MR_Box) (check_hlds__det_analysis__V_54_54));
#line 1068 "det_analysis.m"
            }
#line 1068 "det_analysis.m"
            {
#line 1068 "det_analysis.m"
              check_hlds__det_analysis__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_52_52, 0) = ((MR_Box) (check_hlds__det_analysis__V_53_53));
#line 1068 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[16])));
#line 1068 "det_analysis.m"
            }
#line 1067 "det_analysis.m"
            {
#line 1067 "det_analysis.m"
              check_hlds__det_analysis__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[103])));
#line 1067 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_49_49, 1) = ((MR_Box) (check_hlds__det_analysis__V_52_52));
#line 1067 "det_analysis.m"
            }
#line 1066 "det_analysis.m"
            {
#line 1066 "det_analysis.m"
              check_hlds__det_analysis__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_74_74, check_hlds__det_analysis__PredPieces_33, check_hlds__det_analysis__V_49_49);
            }
#line 1066 "det_analysis.m"
            {
#line 1066 "det_analysis.m"
              check_hlds__det_analysis__FirstPieces_34 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_74_74, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[102]), check_hlds__det_analysis__V_48_48);
            }
#line 1071 "det_analysis.m"
            {
#line 1071 "det_analysis.m"
              check_hlds__det_analysis__ContextMsgs_35 = check_hlds__det_report__failing_contexts_description_3_f_0(check_hlds__det_analysis__ModuleInfo_24, check_hlds__det_analysis__VarSet_32, check_hlds__det_analysis__RightFailingContexts_18);
            }
#line 1074 "det_analysis.m"
            {
#line 1074 "det_analysis.m"
              check_hlds__det_analysis__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_67_67, 0) = ((MR_Box) (check_hlds__det_analysis__FirstPieces_34));
#line 1074 "det_analysis.m"
            }
#line 1074 "det_analysis.m"
            {
#line 1074 "det_analysis.m"
              check_hlds__det_analysis__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_66_66, 0) = ((MR_Box) (check_hlds__det_analysis__V_67_67));
#line 1074 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1074 "det_analysis.m"
            }
#line 1074 "det_analysis.m"
            {
#line 1074 "det_analysis.m"
              check_hlds__det_analysis__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_65_65, 0) = ((MR_Box) (check_hlds__det_analysis__GoalContext_30));
#line 1074 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_65_65, 1) = ((MR_Box) (check_hlds__det_analysis__V_66_66));
#line 1074 "det_analysis.m"
            }
#line 1074 "det_analysis.m"
            {
#line 1074 "det_analysis.m"
              check_hlds__det_analysis__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_64_64, 0) = ((MR_Box) (check_hlds__det_analysis__V_65_65));
#line 1074 "det_analysis.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1074 "det_analysis.m"
            }
#line 1074 "det_analysis.m"
            {
#line 1074 "det_analysis.m"
              check_hlds__det_analysis__V_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_64_64, check_hlds__det_analysis__ContextMsgs_35);
            }
#line 1073 "det_analysis.m"
            {
#line 1073 "det_analysis.m"
              check_hlds__det_analysis__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1073 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1073 "det_analysis.m"
              MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_36, 2) = ((MR_Box) (check_hlds__det_analysis__V_63_63));
#line 1073 "det_analysis.m"
            }
#line 1076 "det_analysis.m"
            {
#line 1076 "det_analysis.m"
              check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_36, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40);
            }
#line 1078 "det_analysis.m"
            *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcId0_13;
#line 1082 "det_analysis.m"
            {
#line 1082 "det_analysis.m"
              parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__CanFail_27, (MR_Integer) 3);
            }
#line 1061 "det_analysis.m"
          }
#line 1060 "det_analysis.m"
      }
#line 1084 "det_analysis.m"
    else
#line 1085 "det_analysis.m"
      {
#line 1085 "det_analysis.m"
        *check_hlds__det_analysis__ProcId_14 = check_hlds__det_analysis__ProcId0_13;
#line 1086 "det_analysis.m"
        *check_hlds__det_analysis__Detism_19 = check_hlds__det_analysis__Detism0_23;
#line 1085 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_40 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_41_41;
#line 1085 "det_analysis.m"
      }
#line 1093 "det_analysis.m"
    if ((check_hlds__det_analysis__CanFail_27 == (MR_Integer) 0))
#line 1089 "det_analysis.m"
      {
#line 1089 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_37;
#line 1089 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_38;
#line 1089 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_72_72;

#line 1090 "det_analysis.m"
        {
#line 1090 "det_analysis.m"
          check_hlds__det_analysis__Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_16);
        }
#line 1091 "det_analysis.m"
        {
#line 1091 "det_analysis.m"
          check_hlds__det_analysis__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1091 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 1) = ((MR_Box) (check_hlds__det_analysis__PredId_12));
#line 1091 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_72_72, 2) = ((MR_Box) (*check_hlds__det_analysis__ProcId_14));
#line 1091 "det_analysis.m"
        }
#line 1091 "det_analysis.m"
        {
#line 1091 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_38, 0) = ((MR_Box) (check_hlds__det_analysis__Context_37));
#line 1091 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_38, 1) = ((MR_Box) (check_hlds__det_analysis__V_72_72));
#line 1091 "det_analysis.m"
        }
#line 1092 "det_analysis.m"
        {
#line 1092 "det_analysis.m"
          MR_Word base;
#line 1092 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 1092 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_38));
#line 1092 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1092 "det_analysis.m"
        }
#line 1089 "det_analysis.m"
      }
#line 1093 "det_analysis.m"
    else
#line 1095 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1028 "det_analysis.m"
  }
#line 1022 "det_analysis.m"
}

#line 976 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_cases_14_p_0(
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 976 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__9_9,
#line 976 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_10,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11,
#line 976 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12,
#line 976 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13,
#line 976 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14)
#line 976 "det_analysis.m"
{
#line 984 "det_analysis.m"
  {
#line 984 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 984 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 984 "det_analysis.m"
      {
#line 982 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 985 "det_analysis.m"
        {
#line 985 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_10, check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__HeadVar__9_9);
        }
#line 984 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13;
#line 984 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12 = check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11;
#line 984 "det_analysis.m"
      }
#line 984 "det_analysis.m"
    else
#line 989 "det_analysis.m"
      {
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Case0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Cases0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Case_31;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Cases_32;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MainConsId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 0)));
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__OtherConsIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 1)));
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case0_29, (MR_Integer) 2)));
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo0_46;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarTypes_47;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__VarType_48;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_49;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__ModuleInfo_50;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_52;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_53;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_54;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_55;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_56;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74;
#line 989 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75;

#line 994 "det_analysis.m"
        {
#line 994 "det_analysis.m"
          check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__ModuleInfo0_46);
        }
#line 995 "det_analysis.m"
        {
#line 995 "det_analysis.m"
          check_hlds__det_util__det_info_get_vartypes_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__VarTypes_47);
        }
#line 996 "det_analysis.m"
        {
#line 996 "det_analysis.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_analysis__VarTypes_47, check_hlds__det_analysis__HeadVar__3_3, &check_hlds__det_analysis__VarType_48);
        }
#line 997 "det_analysis.m"
        {
#line 997 "det_analysis.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__VarType_48, check_hlds__det_analysis__MainConsId_43, check_hlds__det_analysis__OtherConsIds_44, check_hlds__det_analysis__HeadVar__4_4, &check_hlds__det_analysis__InstMap1_49, check_hlds__det_analysis__ModuleInfo0_46, &check_hlds__det_analysis__ModuleInfo_50);
        }
#line 999 "det_analysis.m"
        {
#line 999 "det_analysis.m"
          check_hlds__det_util__det_info_set_module_info_3_p_0(check_hlds__det_analysis__ModuleInfo_50, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_13, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63);
        }
#line 1007 "det_analysis.m"
        {
#line 1007 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_45, &check_hlds__det_analysis__Goal_52, check_hlds__det_analysis__InstMap1_49, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__HeadVar__7_7, &check_hlds__det_analysis__FirstDetism_53, &check_hlds__det_analysis__GoalFailingContexts_54, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_63_63, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72);
        }
#line 1010 "det_analysis.m"
        {
#line 1010 "det_analysis.m"
          check_hlds__det_analysis__Case_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 0) = ((MR_Box) (check_hlds__det_analysis__MainConsId_43));
#line 1010 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 1) = ((MR_Box) (check_hlds__det_analysis__OtherConsIds_44));
#line 1010 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Case_31, 2) = ((MR_Box) (check_hlds__det_analysis__Goal_52));
#line 1010 "det_analysis.m"
        }
#line 1011 "det_analysis.m"
        {
#line 1011 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_53, &check_hlds__det_analysis__FirstCanFail_55, &check_hlds__det_analysis__FirstMaxSolns_56);
        }
#line 1012 "det_analysis.m"
        {
#line 1012 "det_analysis.m"
          parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__FirstCanFail_55, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73);
        }
#line 1013 "det_analysis.m"
        {
#line 1013 "det_analysis.m"
          parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__HeadVar__9_9, check_hlds__det_analysis__FirstMaxSolns_56, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74);
        }
#line 1014 "det_analysis.m"
        {
#line 1014 "det_analysis.m"
          check_hlds__det_analysis__det_infer_switch_cases_14_p_0(check_hlds__det_analysis__Cases0_30, &check_hlds__det_analysis__Cases_32, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__STATE_VARIABLE_CanFail_73_73, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_74_74, check_hlds__det_analysis__Detism_10, check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_0_11, &check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_72_72, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_14);
        }
#line 986 "det_analysis.m"
        {
#line 986 "det_analysis.m"
          MR_Word base;
#line 986 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 986 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Case_31));
#line 986 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Cases_32));
#line 986 "det_analysis.m"
        }
#line 1018 "det_analysis.m"
        {
#line 1018 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_12 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_54, check_hlds__det_analysis__STATE_VARIABLE_SwitchFailingContexts_75_75);
        }
#line 989 "det_analysis.m"
      }
#line 984 "det_analysis.m"
  }
#line 976 "det_analysis.m"
}

#line 927 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_switch_13_p_0(
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Var_14,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SwitchCanFail_15,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Cases0_16,
#line 927 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Cases_17,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_18,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_19,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_20,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_21,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22,
#line 927 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_23,
#line 927 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_24,
#line 927 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37,
#line 927 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38)
#line 927 "det_analysis.m"
{
#line 936 "det_analysis.m"
  {
#line 936 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesDetism_26;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts0_27;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesCanFail_28;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CasesSolns_29;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__SwitchSolnContext_30;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__SwitchSolns_32;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_33;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NumSolns_34;
#line 936 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42;

#line 942 "det_analysis.m"
    {
#line 942 "det_analysis.m"
      check_hlds__det_analysis__det_infer_switch_cases_14_p_0(check_hlds__det_analysis__Cases0_16, check_hlds__det_analysis__Cases_17, check_hlds__det_analysis__Var_14, check_hlds__det_analysis__InstMap0_19, check_hlds__det_analysis__SolnContext_20, check_hlds__det_analysis__RightFailingContexts_21, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_22, (MR_Integer) 1, (MR_Integer) 0, &check_hlds__det_analysis__CasesDetism_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__GoalFailingContexts0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_37, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42);
    }
#line 946 "det_analysis.m"
    {
#line 946 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CasesDetism_26, &check_hlds__det_analysis__CasesCanFail_28, &check_hlds__det_analysis__CasesSolns_29);
    }
#line 951 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CasesCanFail_28 == (MR_Integer) 1);
#line 951 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 952 "det_analysis.m"
      check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__SolnContext_20 == (MR_Integer) 1);
#line 955 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 954 "det_analysis.m"
      check_hlds__det_analysis__SwitchSolnContext_30 = (MR_Integer) 1;
#line 955 "det_analysis.m"
    else
#line 956 "det_analysis.m"
      check_hlds__det_analysis__SwitchSolnContext_30 = (MR_Integer) 0;
#line 959 "det_analysis.m"
    {
#line 959 "det_analysis.m"
      check_hlds__det_analysis__det_check_for_noncanonical_type_11_p_0(check_hlds__det_analysis__Var_14, (MR_Integer) 1, check_hlds__det_analysis__SwitchCanFail_15, check_hlds__det_analysis__SwitchSolnContext_30, check_hlds__det_analysis__GoalFailingContexts0_27, check_hlds__det_analysis__RightFailingContexts_21, check_hlds__det_analysis__GoalInfo_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__SwitchSolns_32, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_42_42, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_38);
    }
#line 962 "det_analysis.m"
    {
#line 962 "det_analysis.m"
      parse_tree__prog_data__det_conjunction_canfail_3_p_0(check_hlds__det_analysis__SwitchCanFail_15, check_hlds__det_analysis__CasesCanFail_28, &check_hlds__det_analysis__CanFail_33);
    }
#line 963 "det_analysis.m"
    {
#line 963 "det_analysis.m"
      parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__SwitchSolns_32, check_hlds__det_analysis__CasesSolns_29, &check_hlds__det_analysis__NumSolns_34);
    }
#line 964 "det_analysis.m"
    {
#line 964 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_23, check_hlds__det_analysis__CanFail_33, check_hlds__det_analysis__NumSolns_34);
    }
#line 971 "det_analysis.m"
    if ((check_hlds__det_analysis__SwitchCanFail_15 == (MR_Integer) 0))
#line 966 "det_analysis.m"
      {
#line 966 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SwitchContext_35;
#line 966 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_36;
#line 966 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_45_45;

#line 967 "det_analysis.m"
        {
#line 967 "det_analysis.m"
          check_hlds__det_analysis__SwitchContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_18);
        }
#line 969 "det_analysis.m"
        {
#line 969 "det_analysis.m"
          check_hlds__det_analysis__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 969 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_45_45, 0) = ((MR_Box) (check_hlds__det_analysis__Var_14));
#line 969 "det_analysis.m"
        }
#line 968 "det_analysis.m"
        {
#line 968 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 968 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_36, 0) = ((MR_Box) (check_hlds__det_analysis__SwitchContext_35));
#line 968 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_36, 1) = ((MR_Box) (check_hlds__det_analysis__V_45_45));
#line 968 "det_analysis.m"
        }
#line 970 "det_analysis.m"
        {
#line 970 "det_analysis.m"
          MR_Word base;
#line 970 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_24 = base;
#line 970 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_36));
#line 970 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts0_27));
#line 970 "det_analysis.m"
        }
#line 966 "det_analysis.m"
      }
#line 971 "det_analysis.m"
    else
#line 973 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_24 = check_hlds__det_analysis__GoalFailingContexts0_27;
#line 936 "det_analysis.m"
  }
#line 927 "det_analysis.m"
}

#line 871 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_goals_13_p_0(
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 871 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__7_7,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__8_8,
#line 871 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_9,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10,
#line 871 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11,
#line 871 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12,
#line 871 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13)
#line 871 "det_analysis.m"
{
#line 879 "det_analysis.m"
  {
#line 879 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 879 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "det_analysis.m"
      {
#line 877 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 880 "det_analysis.m"
        {
#line 880 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_9, check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__HeadVar__8_8);
        }
#line 879 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12;
#line 879 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11 = check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10;
#line 879 "det_analysis.m"
      }
#line 879 "det_analysis.m"
    else
#line 883 "det_analysis.m"
      {
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_29;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_30;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstDetism_40;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_41;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstCanFail_42;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FirstMaxSolns_43;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalInfo_45;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__AdjFirstMaxSolns_46;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57;
#line 883 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58;
#line 888 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_44_44;
#line 901 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_54_54;

#line 884 "det_analysis.m"
        {
#line 884 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_27, &check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__FirstDetism_40, &check_hlds__det_analysis__GoalFailingContexts_41, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_12, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53);
        }
#line 887 "det_analysis.m"
        {
#line 887 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__FirstDetism_40, &check_hlds__det_analysis__FirstCanFail_42, &check_hlds__det_analysis__FirstMaxSolns_43);
        }
#line 888 "det_analysis.m"
        check_hlds__det_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal_29, (MR_Integer) 0)));
#line 888 "det_analysis.m"
        check_hlds__det_analysis__GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal_29, (MR_Integer) 1)));
#line 901 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__8_8 == (MR_Integer) 0);
#line 901 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 901 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 901 "det_analysis.m"
          {
#line 902 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__FirstMaxSolns_43 == (MR_Integer) 0);
#line 901 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 901 "det_analysis.m"
              {
#line 903 "det_analysis.m"
                check_hlds__det_analysis__V_54_54 = (MR_Integer) 6;
#line 903 "det_analysis.m"
                {
#line 903 "det_analysis.m"
                  check_hlds__det_analysis__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__det_analysis__GoalInfo_45, check_hlds__det_analysis__V_54_54);
                }
#line 901 "det_analysis.m"
              }
#line 901 "det_analysis.m"
          }
#line 906 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 905 "det_analysis.m"
          check_hlds__det_analysis__AdjFirstMaxSolns_46 = (MR_Integer) 1;
#line 906 "det_analysis.m"
        else
#line 907 "det_analysis.m"
          check_hlds__det_analysis__AdjFirstMaxSolns_46 = check_hlds__det_analysis__FirstMaxSolns_43;
#line 909 "det_analysis.m"
        {
#line 909 "det_analysis.m"
          parse_tree__prog_data__det_disjunction_canfail_3_p_0(check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__FirstCanFail_42, &check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55);
        }
#line 910 "det_analysis.m"
        {
#line 910 "det_analysis.m"
          parse_tree__prog_data__det_disjunction_maxsoln_3_p_0(check_hlds__det_analysis__HeadVar__8_8, check_hlds__det_analysis__AdjFirstMaxSolns_46, &check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56);
        }
#line 913 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__4_4 == (MR_Integer) 1);
#line 913 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 914 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56 == (MR_Integer) 3);
#line 917 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 916 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57 = (MR_Integer) 2;
#line 917 "det_analysis.m"
        else
#line 917 "det_analysis.m"
          check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57 = check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_56_56;
#line 920 "det_analysis.m"
        {
#line 920 "det_analysis.m"
          check_hlds__det_analysis__det_infer_disj_goals_13_p_0(check_hlds__det_analysis__Goals0_28, &check_hlds__det_analysis__Goals_30, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, check_hlds__det_analysis__STATE_VARIABLE_CanFail_55_55, check_hlds__det_analysis__STATE_VARIABLE_MaxSolns_57_57, check_hlds__det_analysis__Detism_9, check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_53_53, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_13);
        }
#line 881 "det_analysis.m"
        {
#line 881 "det_analysis.m"
          MR_Word base;
#line 881 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 881 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_29));
#line 881 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_30));
#line 881 "det_analysis.m"
        }
#line 923 "det_analysis.m"
        {
#line 923 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_11 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_41, check_hlds__det_analysis__STATE_VARIABLE_DisjFailingContexts_58_58);
        }
#line 883 "det_analysis.m"
      }
#line 879 "det_analysis.m"
  }
#line 871 "det_analysis.m"
}

#line 848 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_disj_11_p_0(
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 848 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 848 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 848 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 848 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27,
#line 848 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28)
#line 848 "det_analysis.m"
{
#line 856 "det_analysis.m"
  {
#line 856 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 856 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalFailingContexts0_22;

#line 857 "det_analysis.m"
    {
#line 857 "det_analysis.m"
      check_hlds__det_analysis__det_infer_disj_goals_13_p_0(check_hlds__det_analysis__Goals0_12, check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, (MR_Integer) 0, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__GoalFailingContexts0_22, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);
    }
#line 866 "det_analysis.m"
    if ((*check_hlds__det_analysis__Goals_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "det_analysis.m"
      {
#line 862 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_23;
#line 862 "det_analysis.m"
        MR_Word check_hlds__det_analysis__FailingContext_24;

#line 863 "det_analysis.m"
        {
#line 863 "det_analysis.m"
          check_hlds__det_analysis__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_14);
        }
#line 864 "det_analysis.m"
        {
#line 864 "det_analysis.m"
          check_hlds__det_analysis__FailingContext_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_24, 0) = ((MR_Box) (check_hlds__det_analysis__Context_23));
#line 864 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__FailingContext_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "det_analysis.m"
        }
#line 865 "det_analysis.m"
        {
#line 865 "det_analysis.m"
          MR_Word base;
#line 865 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "det_analysis.m"
          *check_hlds__det_analysis__GoalFailingContexts_20 = base;
#line 865 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__FailingContext_24));
#line 865 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalFailingContexts0_22));
#line 865 "det_analysis.m"
        }
#line 862 "det_analysis.m"
      }
#line 866 "det_analysis.m"
    else
#line 868 "det_analysis.m"
      *check_hlds__det_analysis__GoalFailingContexts_20 = check_hlds__det_analysis__GoalFailingContexts0_22;
#line 856 "det_analysis.m"
  }
#line 848 "det_analysis.m"
}

#line 821 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 821 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 821 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 821 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 821 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 821 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11)
#line 821 "det_analysis.m"
{
#line 827 "det_analysis.m"
  {
#line 827 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 827 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 827 "det_analysis.m"
      {
#line 827 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 829 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__7_7 = (MR_Integer) 0;
#line 829 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10;
#line 829 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8;
#line 827 "det_analysis.m"
      }
#line 827 "det_analysis.m"
    else
#line 832 "det_analysis.m"
      {
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_24;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_25;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadDetism_33;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_34;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadCanFail_35;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadMaxSolns_36;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailDetism_37;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailCanFail_38;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailMaxSolns_39;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSolns_40;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_41;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46;
#line 832 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47;

#line 833 "det_analysis.m"
        {
#line 833 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_22, &check_hlds__det_analysis__Goal_24, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__HeadDetism_33, &check_hlds__det_analysis__GoalFailingContexts_34, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46);
        }
#line 836 "det_analysis.m"
        {
#line 836 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__HeadDetism_33, &check_hlds__det_analysis__HeadCanFail_35, &check_hlds__det_analysis__HeadMaxSolns_36);
        }
#line 838 "det_analysis.m"
        {
#line 838 "det_analysis.m"
          check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_25, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__TailDetism_37, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8, &check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_46_46, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);
        }
#line 830 "det_analysis.m"
        {
#line 830 "det_analysis.m"
          MR_Word base;
#line 830 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 830 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_24));
#line 830 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_25));
#line 830 "det_analysis.m"
        }
#line 841 "det_analysis.m"
        {
#line 841 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__TailDetism_37, &check_hlds__det_analysis__TailCanFail_38, &check_hlds__det_analysis__TailMaxSolns_39);
        }
#line 843 "det_analysis.m"
        {
#line 843 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_maxsoln_3_p_0(check_hlds__det_analysis__HeadMaxSolns_36, check_hlds__det_analysis__TailMaxSolns_39, &check_hlds__det_analysis__MaxSolns_40);
        }
#line 844 "det_analysis.m"
        {
#line 844 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_canfail_3_p_0(check_hlds__det_analysis__HeadCanFail_35, check_hlds__det_analysis__TailCanFail_38, &check_hlds__det_analysis__CanFail_41);
        }
#line 845 "det_analysis.m"
        {
#line 845 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__HeadVar__7_7, check_hlds__det_analysis__CanFail_41, check_hlds__det_analysis__MaxSolns_40);
        }
#line 846 "det_analysis.m"
        {
#line 846 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0, check_hlds__det_analysis__GoalFailingContexts_34, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_47_47);
        }
#line 832 "det_analysis.m"
      }
#line 827 "det_analysis.m"
  }
#line 821 "det_analysis.m"
}

#line 773 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_par_conj_11_p_0(
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goals0_12,
#line 773 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goals_13,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 773 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 773 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 773 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32,
#line 773 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33)
#line 773 "det_analysis.m"
{
#line 781 "det_analysis.m"
  {
#line 781 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 781 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35;
#line 786 "det_analysis.m"
    MR_Word check_hlds__det_analysis__CanFail_22;
#line 786 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Solns_23;

#line 782 "det_analysis.m"
    {
#line 782 "det_analysis.m"
      check_hlds__det_analysis__det_infer_par_conj_goals_11_p_0(check_hlds__det_analysis__Goals0_12, check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_32, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35);
    }
#line 786 "det_analysis.m"
    {
#line 786 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_19, &check_hlds__det_analysis__CanFail_22, &check_hlds__det_analysis__Solns_23);
    }
#line 787 "det_analysis.m"
    check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__CanFail_22 == (MR_Integer) 1);
#line 786 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 786 "det_analysis.m"
      {
#line 788 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Solns_23 == (MR_Integer) 3);
#line 788 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 786 "det_analysis.m"
      }
#line 791 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 791 "det_analysis.m"
      *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35;
#line 791 "det_analysis.m"
    else
#line 792 "det_analysis.m"
      {
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context_24;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__MaxSoln_25;
#line 792 "det_analysis.m"
        MR_String check_hlds__det_analysis__First_26;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Pieces_28;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalMsgs_29;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__SortedGoalMsgs_30;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Spec_31;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_41_41;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_50_50;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_51_51;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_52_52;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_53_53;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_54_54;
#line 792 "det_analysis.m"
        MR_Word check_hlds__det_analysis__CanFail_58;

#line 792 "det_analysis.m"
        {
#line 792 "det_analysis.m"
          check_hlds__det_analysis__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__det_analysis__GoalInfo_14);
        }
#line 793 "det_analysis.m"
        {
#line 793 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__Detism_19, &check_hlds__det_analysis__CanFail_58, &check_hlds__det_analysis__MaxSoln_25);
        }
#line 797 "det_analysis.m"
        if ((check_hlds__det_analysis__CanFail_58 == (MR_Integer) 0))
#line 796 "det_analysis.m"
          check_hlds__det_analysis__First_26 = (MR_String) "Error: parallel conjunct may fail.";
#line 797 "det_analysis.m"
        else
#line 802 "det_analysis.m"
          if ((check_hlds__det_analysis__MaxSoln_25 == (MR_Integer) 3))
#line 801 "det_analysis.m"
            check_hlds__det_analysis__First_26 = (MR_String) "Error: parallel conjunct may have multiple solutions.";
#line 802 "det_analysis.m"
          else
#line 806 "det_analysis.m"
            {
#line 807 "det_analysis.m"
              {
#line 807 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_par_conj\'/11", (MR_String) "strange determinism error for parallel conjunction");
#line 807 "det_analysis.m"
                return;
              }
#line 806 "det_analysis.m"
            }
#line 813 "det_analysis.m"
        {
#line 813 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 813 "det_analysis.m"
          MR_hl_field(MR_mktag(3), check_hlds__det_analysis__V_41_41, 1) = ((MR_Box) (check_hlds__det_analysis__First_26));
#line 813 "det_analysis.m"
        }
#line 813 "det_analysis.m"
        {
#line 813 "det_analysis.m"
          check_hlds__det_analysis__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_28, 0) = ((MR_Box) (check_hlds__det_analysis__V_41_41));
#line 813 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__Pieces_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[100])));
#line 813 "det_analysis.m"
        }
#line 814 "det_analysis.m"
        {
#line 814 "det_analysis.m"
          check_hlds__det_report__det_diagnose_conj_7_p_0(*check_hlds__det_analysis__Goals_13, check_hlds__det_analysis__InstMap0_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__STATE_VARIABLE_DetInfo_35_35, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47, &check_hlds__det_analysis__GoalMsgs_29);
        }
#line 815 "det_analysis.m"
        {
#line 815 "det_analysis.m"
          parse_tree__error_util__sort_error_msgs_2_p_0(check_hlds__det_analysis__GoalMsgs_29, &check_hlds__det_analysis__SortedGoalMsgs_30);
        }
#line 817 "det_analysis.m"
        {
#line 817 "det_analysis.m"
          check_hlds__det_analysis__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 817 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_54_54, 0) = ((MR_Box) (check_hlds__det_analysis__Pieces_28));
#line 817 "det_analysis.m"
        }
#line 817 "det_analysis.m"
        {
#line 817 "det_analysis.m"
          check_hlds__det_analysis__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_53_53, 0) = ((MR_Box) (check_hlds__det_analysis__V_54_54));
#line 817 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "det_analysis.m"
        }
#line 817 "det_analysis.m"
        {
#line 817 "det_analysis.m"
          check_hlds__det_analysis__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 817 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_52_52, 0) = ((MR_Box) (check_hlds__det_analysis__Context_24));
#line 817 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_52_52, 1) = ((MR_Box) (check_hlds__det_analysis__V_53_53));
#line 817 "det_analysis.m"
        }
#line 817 "det_analysis.m"
        {
#line 817 "det_analysis.m"
          check_hlds__det_analysis__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_51_51, 0) = ((MR_Box) (check_hlds__det_analysis__V_52_52));
#line 817 "det_analysis.m"
          MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "det_analysis.m"
        }
#line 817 "det_analysis.m"
        {
#line 817 "det_analysis.m"
          check_hlds__det_analysis__V_50_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, check_hlds__det_analysis__V_51_51, check_hlds__det_analysis__SortedGoalMsgs_30);
        }
#line 816 "det_analysis.m"
        {
#line 816 "det_analysis.m"
          check_hlds__det_analysis__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 816 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 816 "det_analysis.m"
          MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Spec_31, 2) = ((MR_Box) (check_hlds__det_analysis__V_50_50));
#line 816 "det_analysis.m"
        }
#line 818 "det_analysis.m"
        {
#line 818 "det_analysis.m"
          check_hlds__det_util__det_info_add_error_spec_3_p_0(check_hlds__det_analysis__Spec_31, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_47_47, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_33);
#line 818 "det_analysis.m"
          return;
        }
#line 792 "det_analysis.m"
      }
#line 781 "det_analysis.m"
  }
#line 773 "det_analysis.m"
}

#line 724 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_conj_11_p_0(
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 724 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__2_2,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__3_3,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__4_4,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__5_5,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__6_6,
#line 724 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__HeadVar__7_7,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8,
#line 724 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9,
#line 724 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10,
#line 724 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11)
#line 724 "det_analysis.m"
{
#line 730 "det_analysis.m"
  {
#line 730 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 730 "det_analysis.m"
    if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "det_analysis.m"
      {
#line 730 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "det_analysis.m"
        *check_hlds__det_analysis__HeadVar__7_7 = (MR_Integer) 0;
#line 732 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11 = check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10;
#line 732 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8;
#line 730 "det_analysis.m"
      }
#line 730 "det_analysis.m"
    else
#line 735 "det_analysis.m"
      {
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TypeCtorInfo_49_49;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_24;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goals_25;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__InstMap1_33;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailDetism_34;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__TailCanFail_35;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadSolnContext_37;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__HeadDetism_38;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__GoalFailingContexts_39;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45;
#line 735 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_46_46;
#line 748 "det_analysis.m"
        MR_Word check_hlds__det_analysis___TailMaxSolns_36;

#line 744 "det_analysis.m"
        {
#line 744 "det_analysis.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__det_analysis__Goal0_22, check_hlds__det_analysis__HeadVar__3_3, &check_hlds__det_analysis__InstMap1_33);
        }
#line 745 "det_analysis.m"
        {
#line 745 "det_analysis.m"
          check_hlds__det_analysis__det_infer_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_25, check_hlds__det_analysis__InstMap1_33, check_hlds__det_analysis__HeadVar__4_4, check_hlds__det_analysis__HeadVar__5_5, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__TailDetism_34, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_0_8, &check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_10, &check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45);
        }
#line 748 "det_analysis.m"
        {
#line 748 "det_analysis.m"
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__TailDetism_34, &check_hlds__det_analysis__TailCanFail_35, &check_hlds__det_analysis___TailMaxSolns_36);
        }
#line 756 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__TailCanFail_35 == (MR_Integer) 1);
#line 756 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 757 "det_analysis.m"
          check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__HeadVar__4_4 == (MR_Integer) 1);
#line 760 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 759 "det_analysis.m"
          check_hlds__det_analysis__HeadSolnContext_37 = (MR_Integer) 1;
#line 760 "det_analysis.m"
        else
#line 761 "det_analysis.m"
          check_hlds__det_analysis__HeadSolnContext_37 = (MR_Integer) 0;
#line 9279 "check_hlds.det_analysis.c"
        check_hlds__det_analysis__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0;
#line 765 "det_analysis.m"
        {
#line 765 "det_analysis.m"
          check_hlds__det_analysis__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_49_49, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44, check_hlds__det_analysis__HeadVar__5_5);
        }
#line 764 "det_analysis.m"
        {
#line 764 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_22, &check_hlds__det_analysis__Goal_24, check_hlds__det_analysis__HeadVar__3_3, check_hlds__det_analysis__HeadSolnContext_37, check_hlds__det_analysis__V_46_46, check_hlds__det_analysis__HeadVar__6_6, &check_hlds__det_analysis__HeadDetism_38, &check_hlds__det_analysis__GoalFailingContexts_39, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_45_45, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_11);
        }
#line 733 "det_analysis.m"
        {
#line 733 "det_analysis.m"
          MR_Word base;
#line 733 "det_analysis.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "det_analysis.m"
          *check_hlds__det_analysis__HeadVar__2_2 = base;
#line 733 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__Goal_24));
#line 733 "det_analysis.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_25));
#line 733 "det_analysis.m"
        }
#line 770 "det_analysis.m"
        {
#line 770 "det_analysis.m"
          parse_tree__prog_data__det_conjunction_detism_3_p_0(check_hlds__det_analysis__HeadDetism_38, check_hlds__det_analysis__TailDetism_34, check_hlds__det_analysis__HeadVar__7_7);
        }
#line 771 "det_analysis.m"
        {
#line 771 "det_analysis.m"
          *check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_9 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_49_49, check_hlds__det_analysis__GoalFailingContexts_39, check_hlds__det_analysis__STATE_VARIABLE_ConjFailingContexts_44_44);
        }
#line 735 "det_analysis.m"
      }
#line 730 "det_analysis.m"
  }
#line 724 "det_analysis.m"
}

#line 602 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_expr_11_p_0(
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalExpr0_12,
#line 602 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalExpr_13,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__GoalInfo_14,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_15,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__SolnContext_16,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_17,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18,
#line 602 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 602 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 602 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78,
#line 602 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79)
#line 602 "det_analysis.m"
{
#line 612 "det_analysis.m"
  {
#line 612 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;

#line 612 "det_analysis.m"
    if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 676 "det_analysis.m"
      {
#line 676 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__det_analysis__GoalExpr0_12), (MR_Integer) 0);
#line 676 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Goal_55;

#line 677 "det_analysis.m"
        {
#line 677 "det_analysis.m"
          check_hlds__det_analysis__det_infer_not_9_p_0(check_hlds__det_analysis__Goal0_54, &check_hlds__det_analysis__Goal_55, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
        }
#line 680 "det_analysis.m"
        *check_hlds__det_analysis__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__det_analysis__Goal_55);
#line 676 "det_analysis.m"
      }
#line 612 "det_analysis.m"
    else
#line 612 "det_analysis.m"
      if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 2))))
#line 651 "det_analysis.m"
        {
#line 651 "det_analysis.m"
          MR_Word check_hlds__det_analysis__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)));
#line 651 "det_analysis.m"
          MR_Integer check_hlds__det_analysis__ProcId0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 651 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 651 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Builtin_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 651 "det_analysis.m"
          MR_Word check_hlds__det_analysis__UnifyContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 651 "det_analysis.m"
          MR_Word check_hlds__det_analysis__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 651 "det_analysis.m"
          MR_Integer check_hlds__det_analysis__ProcId_36;

#line 652 "det_analysis.m"
          {
#line 652 "det_analysis.m"
            check_hlds__det_analysis__det_infer_call_11_p_0(check_hlds__det_analysis__PredId_30, check_hlds__det_analysis__ProcId0_31, &check_hlds__det_analysis__ProcId_36, check_hlds__det_analysis__Args_32, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
          }
#line 654 "det_analysis.m"
          {
#line 654 "det_analysis.m"
            MR_Word base;
#line 654 "det_analysis.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 654 "det_analysis.m"
            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 654 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_30));
#line 654 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_36));
#line 654 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__det_analysis__Args_32));
#line 654 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__det_analysis__Builtin_33));
#line 654 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_34));
#line 654 "det_analysis.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__det_analysis__Name_35));
#line 654 "det_analysis.m"
          }
#line 651 "det_analysis.m"
        }
#line 612 "det_analysis.m"
      else
#line 612 "det_analysis.m"
        if (((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 1))))
#line 663 "det_analysis.m"
          {
#line 663 "det_analysis.m"
            MR_Word check_hlds__det_analysis__LHS_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)));
#line 663 "det_analysis.m"
            MR_Word check_hlds__det_analysis__RHS0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 663 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Mode_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 663 "det_analysis.m"
            MR_Word check_hlds__det_analysis__Unify_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 663 "det_analysis.m"
            MR_Word check_hlds__det_analysis__RHS_46;
#line 663 "det_analysis.m"
            MR_Word check_hlds__det_analysis__UnifyContext_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));

#line 664 "det_analysis.m"
            {
#line 664 "det_analysis.m"
              check_hlds__det_analysis__det_infer_unify_13_p_0(check_hlds__det_analysis__LHS_42, check_hlds__det_analysis__RHS0_43, check_hlds__det_analysis__Unify_45, check_hlds__det_analysis__UnifyContext_110, &check_hlds__det_analysis__RHS_46, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
            }
#line 667 "det_analysis.m"
            {
#line 667 "det_analysis.m"
              MR_Word base;
#line 667 "det_analysis.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 667 "det_analysis.m"
              *check_hlds__det_analysis__GoalExpr_13 = base;
#line 667 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__LHS_42));
#line 667 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__RHS_46));
#line 667 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__det_analysis__Mode_44));
#line 667 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__det_analysis__Unify_45));
#line 667 "det_analysis.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__det_analysis__UnifyContext_110));
#line 667 "det_analysis.m"
            }
#line 663 "det_analysis.m"
          }
#line 612 "det_analysis.m"
        else
#line 612 "det_analysis.m"
          if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 689 "det_analysis.m"
            {
#line 689 "det_analysis.m"
              MR_Word check_hlds__det_analysis__Attributes_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 689 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PredId_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 689 "det_analysis.m"
              MR_Integer check_hlds__det_analysis__ProcId_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 688 "det_analysis.m"
              MR_Word check_hlds__det_analysis___Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 688 "det_analysis.m"
              MR_Word check_hlds__det_analysis___ExtraArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 688 "det_analysis.m"
              MR_Word check_hlds__det_analysis___MaybeTraceRuntimeCond_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 6)));
#line 688 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PragmaCode_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 7)));

#line 690 "det_analysis.m"
              {
#line 690 "det_analysis.m"
                check_hlds__det_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_105_110_102_101_114_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(check_hlds__det_analysis__Attributes_57, check_hlds__det_analysis__PredId_113, check_hlds__det_analysis__ProcId_114, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
              }
#line 693 "det_analysis.m"
              *check_hlds__det_analysis__GoalExpr_13 = check_hlds__det_analysis__GoalExpr0_12;
#line 689 "det_analysis.m"
            }
#line 612 "det_analysis.m"
          else
#line 612 "det_analysis.m"
            if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 612 "det_analysis.m"
              {
#line 612 "det_analysis.m"
                MR_Word check_hlds__det_analysis__ConjType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 612 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 612 "det_analysis.m"
                MR_Word check_hlds__det_analysis__Goals_24;

#line 620 "det_analysis.m"
                if ((check_hlds__det_analysis__ConjType_22 == (MR_Integer) 1))
#line 622 "det_analysis.m"
                  {
#line 622 "det_analysis.m"
                    check_hlds__det_analysis__det_infer_par_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_24, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                  }
#line 620 "det_analysis.m"
                else
#line 614 "det_analysis.m"
                  {
#line 617 "det_analysis.m"
                    {
#line 617 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_conj_11_p_0(check_hlds__det_analysis__Goals0_23, &check_hlds__det_analysis__Goals_24, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
#line 614 "det_analysis.m"
                  }
#line 626 "det_analysis.m"
                {
#line 626 "det_analysis.m"
                  MR_Word base;
#line 626 "det_analysis.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 626 "det_analysis.m"
                  *check_hlds__det_analysis__GoalExpr_13 = base;
#line 626 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 626 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__ConjType_22));
#line 626 "det_analysis.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Goals_24));
#line 626 "det_analysis.m"
                }
#line 612 "det_analysis.m"
              }
#line 612 "det_analysis.m"
            else
#line 612 "det_analysis.m"
              if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 628 "det_analysis.m"
                {
#line 628 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Goals0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 628 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__Goals_109;

#line 629 "det_analysis.m"
                  {
#line 629 "det_analysis.m"
                    check_hlds__det_analysis__det_infer_disj_11_p_0(check_hlds__det_analysis__Goals0_108, &check_hlds__det_analysis__Goals_109, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                  }
#line 632 "det_analysis.m"
                  {
#line 632 "det_analysis.m"
                    MR_Word base;
#line 632 "det_analysis.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "det_analysis.m"
                    *check_hlds__det_analysis__GoalExpr_13 = base;
#line 632 "det_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 632 "det_analysis.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Goals_109));
#line 632 "det_analysis.m"
                  }
#line 628 "det_analysis.m"
                }
#line 612 "det_analysis.m"
              else
#line 612 "det_analysis.m"
                if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 658 "det_analysis.m"
                  {
#line 658 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__GenericCall_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 658 "det_analysis.m"
                    MR_Word check_hlds__det_analysis__CallDetism_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 5)));
#line 657 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___ArgVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 657 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___Modes_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 657 "det_analysis.m"
                    MR_Word check_hlds__det_analysis___MaybArgRegs_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));

#line 659 "det_analysis.m"
                    {
#line 659 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_generic_call_9_p_0(check_hlds__det_analysis__GenericCall_37, check_hlds__det_analysis__CallDetism_41, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                    }
#line 661 "det_analysis.m"
                    *check_hlds__det_analysis__GoalExpr_13 = check_hlds__det_analysis__GoalExpr0_12;
#line 658 "det_analysis.m"
                  }
#line 612 "det_analysis.m"
                else
#line 612 "det_analysis.m"
                  if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 669 "det_analysis.m"
                    {
#line 669 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 669 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Cond0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 669 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 669 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Else0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 4)));
#line 669 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Cond_51;
#line 669 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Then_52;
#line 669 "det_analysis.m"
                      MR_Word check_hlds__det_analysis__Else_53;

#line 670 "det_analysis.m"
                      {
#line 670 "det_analysis.m"
                        check_hlds__det_analysis__det_infer_if_then_else_14_p_0(check_hlds__det_analysis__Cond0_48, &check_hlds__det_analysis__Cond_51, check_hlds__det_analysis__Then0_49, &check_hlds__det_analysis__Then_52, check_hlds__det_analysis__Else0_50, &check_hlds__det_analysis__Else_53, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                      }
#line 674 "det_analysis.m"
                      {
#line 674 "det_analysis.m"
                        MR_Word base;
#line 674 "det_analysis.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 674 "det_analysis.m"
                        *check_hlds__det_analysis__GoalExpr_13 = base;
#line 674 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 674 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Vars_47));
#line 674 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Cond_51));
#line 674 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__det_analysis__Then_52));
#line 674 "det_analysis.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__det_analysis__Else_53));
#line 674 "det_analysis.m"
                      }
#line 669 "det_analysis.m"
                    }
#line 612 "det_analysis.m"
                  else
#line 612 "det_analysis.m"
                    if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 682 "det_analysis.m"
                      {
#line 682 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 682 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Goal0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 682 "det_analysis.m"
                        MR_Word check_hlds__det_analysis__Goal_112;

#line 683 "det_analysis.m"
                        {
#line 683 "det_analysis.m"
                          check_hlds__det_analysis__det_infer_scope_12_p_0(check_hlds__det_analysis__Reason_56, check_hlds__det_analysis__Goal0_111, &check_hlds__det_analysis__Goal_112, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                        }
#line 686 "det_analysis.m"
                        {
#line 686 "det_analysis.m"
                          MR_Word base;
#line 686 "det_analysis.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 686 "det_analysis.m"
                          *check_hlds__det_analysis__GoalExpr_13 = base;
#line 686 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 686 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Reason_56));
#line 686 "det_analysis.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__Goal_112));
#line 686 "det_analysis.m"
                        }
#line 682 "det_analysis.m"
                      }
#line 612 "det_analysis.m"
                    else
#line 612 "det_analysis.m"
                      if (((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 695 "det_analysis.m"
                        {
#line 695 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__ShortHand0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 695 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__ShortHand_71;

#line 705 "det_analysis.m"
                          if (((MR_tag((MR_Word) check_hlds__det_analysis__ShortHand0_62)) == (MR_mktag((MR_Integer) 1))))
#line 698 "det_analysis.m"
                            {
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__GoalType_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 0)));
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Inner_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 1)));
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Outer_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 2)));
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__MainGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 4)));
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseGoals0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 5)));
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseInners_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 6)));
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__MainGoal_69;
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__OrElseGoals_70;
#line 698 "det_analysis.m"
                              MR_Word check_hlds__det_analysis__Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 3)));

#line 699 "det_analysis.m"
                              {
#line 699 "det_analysis.m"
                                check_hlds__det_analysis__det_infer_atomic_11_p_0(check_hlds__det_analysis__MainGoal0_66, &check_hlds__det_analysis__MainGoal_69, check_hlds__det_analysis__OrElseGoals0_67, &check_hlds__det_analysis__OrElseGoals_70, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                              }
#line 702 "det_analysis.m"
                              *check_hlds__det_analysis__GoalFailingContexts_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 703 "det_analysis.m"
                              {
#line 703 "det_analysis.m"
                                check_hlds__det_analysis__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 703 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 0) = ((MR_Box) (check_hlds__det_analysis__GoalType_63));
#line 703 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 1) = ((MR_Box) (check_hlds__det_analysis__Inner_64));
#line 703 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 2) = ((MR_Box) (check_hlds__det_analysis__Outer_65));
#line 703 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 3) = ((MR_Box) (check_hlds__det_analysis__Vars_115));
#line 703 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 4) = ((MR_Box) (check_hlds__det_analysis__MainGoal_69));
#line 703 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 5) = ((MR_Box) (check_hlds__det_analysis__OrElseGoals_70));
#line 703 "det_analysis.m"
                                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ShortHand_71, 6) = ((MR_Box) (check_hlds__det_analysis__OrElseInners_68));
#line 703 "det_analysis.m"
                              }
#line 698 "det_analysis.m"
                            }
#line 705 "det_analysis.m"
                          else
#line 705 "det_analysis.m"
                            if (((MR_tag((MR_Word) check_hlds__det_analysis__ShortHand0_62)) == (MR_mktag((MR_Integer) 0))))
#line 715 "det_analysis.m"
                              {
#line 717 "det_analysis.m"
                                {
#line 717 "det_analysis.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_goal_expr\'/11", (MR_String) "bi_implication");
#line 717 "det_analysis.m"
                                  return;
                                }
#line 715 "det_analysis.m"
                              }
#line 705 "det_analysis.m"
                            else
#line 706 "det_analysis.m"
                              {
#line 706 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__MaybeIO_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 0)));
#line 706 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__ResultVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 1)));
#line 706 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__TryGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand0_62, (MR_Integer) 2)));
#line 706 "det_analysis.m"
                                MR_Word check_hlds__det_analysis__TryGoal_75;

#line 710 "det_analysis.m"
                                {
#line 710 "det_analysis.m"
                                  check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(check_hlds__det_analysis__TryGoal0_74, &check_hlds__det_analysis__TryGoal_75, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, (MR_Integer) 0, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                                }
#line 713 "det_analysis.m"
                                {
#line 713 "det_analysis.m"
                                  check_hlds__det_analysis__ShortHand_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 713 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 0) = ((MR_Box) (check_hlds__det_analysis__MaybeIO_72));
#line 713 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 1) = ((MR_Box) (check_hlds__det_analysis__ResultVar_73));
#line 713 "det_analysis.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__det_analysis__ShortHand_71, 2) = ((MR_Box) (check_hlds__det_analysis__TryGoal_75));
#line 713 "det_analysis.m"
                                }
#line 706 "det_analysis.m"
                              }
#line 719 "det_analysis.m"
                          {
#line 719 "det_analysis.m"
                            MR_Word base;
#line 719 "det_analysis.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "det_analysis.m"
                            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 719 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 719 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__ShortHand_71));
#line 719 "det_analysis.m"
                          }
#line 695 "det_analysis.m"
                        }
#line 612 "det_analysis.m"
                      else
#line 634 "det_analysis.m"
                        {
#line 634 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 1)));
#line 634 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__SwitchCanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 2)));
#line 634 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_12, (MR_Integer) 3)));
#line 634 "det_analysis.m"
                          MR_Word check_hlds__det_analysis__Cases_29;

#line 640 "det_analysis.m"
                          {
#line 640 "det_analysis.m"
                            check_hlds__det_analysis__det_infer_switch_13_p_0(check_hlds__det_analysis__Var_25, check_hlds__det_analysis__SwitchCanFail_26, check_hlds__det_analysis__Cases0_27, &check_hlds__det_analysis__Cases_29, check_hlds__det_analysis__GoalInfo_14, check_hlds__det_analysis__InstMap0_15, check_hlds__det_analysis__SolnContext_16, check_hlds__det_analysis__RightFailingContexts_17, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_18, check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_78, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_79);
                          }
#line 648 "det_analysis.m"
                          {
#line 648 "det_analysis.m"
                            MR_Word base;
#line 648 "det_analysis.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 648 "det_analysis.m"
                            *check_hlds__det_analysis__GoalExpr_13 = base;
#line 648 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 648 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__det_analysis__Var_25));
#line 648 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__det_analysis__SwitchCanFail_26));
#line 648 "det_analysis.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__det_analysis__Cases_29));
#line 648 "det_analysis.m"
                          }
#line 634 "det_analysis.m"
                        }
#line 612 "det_analysis.m"
  }
#line 602 "det_analysis.m"
}

#line 557 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(
#line 557 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 557 "det_analysis.m"
{
#line 557 "det_analysis.m"
  {
#line 557 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 557 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0, 1);
#line 557 "det_analysis.m"
  }
#line 557 "det_analysis.m"
}

#line 557 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3(
#line 557 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 557 "det_analysis.m"
{
#line 557 "det_analysis.m"
  {
#line 557 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 557 "det_analysis.m"
    (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65 = ((MR_Word) (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65);
#line 557 "det_analysis.m"
    {
#line 557 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(check_hlds__det_analysis__env_ptr);
#line 557 "det_analysis.m"
      return;
    }
#line 557 "det_analysis.m"
  }
#line 557 "det_analysis.m"
}

#line 557 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_2(
#line 557 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 557 "det_analysis.m"
{
#line 557 "det_analysis.m"
  {
#line 557 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 557 "det_analysis.m"
    {
#line 557 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65, (MR_Integer) 0)));
#line 559 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_49_49;

#line 557 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_65_65, (MR_Integer) 1)));
#line 558 "det_analysis.m"
      {
#line 558 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalInfo_70);
      }
#line 559 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66 = (MR_Integer) 3;
#line 559 "det_analysis.m"
      {
#line 559 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoalDetism_48, &check_hlds__det_analysis__V_49_49, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73);
      }
#line 559 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_66_66 == (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__V_73_73);
#line 559 "det_analysis.m"
      if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 559 "det_analysis.m"
        {
#line 559 "det_analysis.m"
          check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_1(check_hlds__det_analysis__env_ptr);
#line 559 "det_analysis.m"
          return;
        }
#line 557 "det_analysis.m"
    }
#line 557 "det_analysis.m"
  }
#line 557 "det_analysis.m"
}

#line 557 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(
#line 557 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 557 "det_analysis.m"
{
#line 557 "det_analysis.m"
  {
#line 557 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 557 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__commit_0) == 0)
#line 557 "det_analysis.m"
      {
#line 557 "det_analysis.m"
        {
#line 557 "det_analysis.m"
          {
#line 557 "det_analysis.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__conv0_V_65_65, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45, check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_3, check_hlds__det_analysis__env_ptr);
          }
#line 557 "det_analysis.m"
        }
#line 557 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 557 "det_analysis.m"
      }
#line 557 "det_analysis.m"
    else
#line 557 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 557 "det_analysis.m"
  }
#line 557 "det_analysis.m"
}

#line 458 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Goal0_12,
#line 458 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Goal_13,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__InstMap0_14,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__RightFailingContexts_16,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__AddPruning_18,
#line 458 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Detism_19,
#line 458 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__GoalFailingContexts_20,
#line 458 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57,
#line 458 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58)
#line 458 "det_analysis.m"
{
#line 458 "det_analysis.m"
  {
#line 458 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0_s check_hlds__det_analysis__env;

#line 465 "det_analysis.m"
    {
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_12, (MR_Integer) 0)));
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_12, (MR_Integer) 1)));
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InstmapDelta_24;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Prune_29;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr1_30;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalDetism0_31;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalCanFail_32;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalSolns0_33;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InternalSolns_34;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Solns_35;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalInfo_36;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__FinalInternalSolns_44;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__FinalInternalDetism_50;
#line 465 "det_analysis.m"
      MR_Word check_hlds__det_analysis__GoalExpr_55;
#line 470 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ScopeReason_25;
#line 470 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_26_26;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CondInfo_39;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CondDetism_42;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_62_62;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_63_63;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_72_72;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_37_37;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_40_40;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_41_41;
#line 543 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_38_38;
#line 545 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_43_43;
#line 578 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_51_51;
#line 581 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_52_52;
#line 581 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_53_53;

#line 467 "det_analysis.m"
      {
#line 467 "det_analysis.m"
        check_hlds__det_analysis__InstmapDelta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo0_23);
      }
#line 470 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 470 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 470 "det_analysis.m"
        {
#line 470 "det_analysis.m"
          check_hlds__det_analysis__ScopeReason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 1)));
#line 470 "det_analysis.m"
          check_hlds__det_analysis__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr0_22, (MR_Integer) 2)));
#line 480 "det_analysis.m"
          if (((MR_tag((MR_Word) check_hlds__det_analysis__ScopeReason_25)) == (MR_mktag((MR_Integer) 1))))
#line 485 "det_analysis.m"
            {
#line 485 "det_analysis.m"
              MR_Word check_hlds__det_analysis__PromiseEqvSolnsKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 1)));
#line 485 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_59_59;
#line 485 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 0)));

#line 596 "det_analysis.m"
              if ((check_hlds__det_analysis__PromiseEqvSolnsKind_28 == (MR_Integer) 1))
#line 597 "det_analysis.m"
                check_hlds__det_analysis__V_59_59 = (MR_Integer) 0;
#line 596 "det_analysis.m"
              else
#line 596 "det_analysis.m"
                if ((check_hlds__det_analysis__PromiseEqvSolnsKind_28 == (MR_Integer) 2))
#line 598 "det_analysis.m"
                  check_hlds__det_analysis__V_59_59 = (MR_Integer) 1;
#line 596 "det_analysis.m"
                else
#line 596 "det_analysis.m"
                  check_hlds__det_analysis__V_59_59 = (MR_Integer) 1;
#line 486 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_59_59 == (MR_Integer) 1);
#line 485 "det_analysis.m"
            }
#line 480 "det_analysis.m"
          else
#line 480 "det_analysis.m"
            if (((((MR_tag((MR_Word) check_hlds__det_analysis__ScopeReason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 479 "det_analysis.m"
              {
#line 479 "det_analysis.m"
                MR_Word check_hlds__det_analysis__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__ScopeReason_25, (MR_Integer) 1)));

#line 479 "det_analysis.m"
                (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_60_60 == (MR_Integer) 0);
#line 479 "det_analysis.m"
              }
#line 480 "det_analysis.m"
            else
#line 480 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 470 "det_analysis.m"
        }
#line 490 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 489 "det_analysis.m"
        check_hlds__det_analysis__Prune_29 = (MR_Integer) 1;
#line 490 "det_analysis.m"
      else
#line 491 "det_analysis.m"
        check_hlds__det_analysis__Prune_29 = check_hlds__det_analysis__AddPruning_18;
#line 494 "det_analysis.m"
      {
#line 494 "det_analysis.m"
        check_hlds__det_analysis__det_infer_goal_expr_11_p_0(check_hlds__det_analysis__GoalExpr0_22, &check_hlds__det_analysis__GoalExpr1_30, check_hlds__det_analysis__GoalInfo0_23, check_hlds__det_analysis__InstMap0_14, check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56, check_hlds__det_analysis__RightFailingContexts_16, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_17, &check_hlds__det_analysis__InternalDetism0_31, check_hlds__det_analysis__GoalFailingContexts_20, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_57, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_58);
      }
#line 498 "det_analysis.m"
      {
#line 498 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__InternalDetism0_31, &check_hlds__det_analysis__InternalCanFail_32, &check_hlds__det_analysis__InternalSolns0_33);
      }
#line 503 "det_analysis.m"
      {
#line 503 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(check_hlds__det_analysis__InstmapDelta_24);
      }
#line 506 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 505 "det_analysis.m"
        check_hlds__det_analysis__InternalSolns_34 = (MR_Integer) 0;
#line 506 "det_analysis.m"
      else
#line 507 "det_analysis.m"
        check_hlds__det_analysis__InternalSolns_34 = check_hlds__det_analysis__InternalSolns0_33;
#line 511 "det_analysis.m"
      if ((check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 3))
#line 510 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 511 "det_analysis.m"
      else
#line 511 "det_analysis.m"
        if ((check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 2))
#line 511 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_TRUE;
#line 511 "det_analysis.m"
        else
#line 511 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = MR_FALSE;
#line 512 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 513 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Prune_29 == (MR_Integer) 1);
#line 516 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 515 "det_analysis.m"
        check_hlds__det_analysis__Solns_35 = (MR_Integer) 1;
#line 516 "det_analysis.m"
      else
#line 524 "det_analysis.m"
        {
#line 520 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__InternalSolns_34 == (MR_Integer) 3);
#line 520 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 521 "det_analysis.m"
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_56 == (MR_Integer) 1);
#line 524 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 523 "det_analysis.m"
            check_hlds__det_analysis__Solns_35 = (MR_Integer) 2;
#line 524 "det_analysis.m"
          else
#line 525 "det_analysis.m"
            check_hlds__det_analysis__Solns_35 = check_hlds__det_analysis__InternalSolns_34;
#line 524 "det_analysis.m"
        }
#line 527 "det_analysis.m"
      {
#line 527 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__InternalCanFail_32, check_hlds__det_analysis__Solns_35);
      }
#line 528 "det_analysis.m"
      {
#line 528 "det_analysis.m"
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(*check_hlds__det_analysis__Detism_19, check_hlds__det_analysis__GoalInfo0_23, &check_hlds__det_analysis__GoalInfo_36);
      }
#line 543 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 543 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 543 "det_analysis.m"
        {
#line 543 "det_analysis.m"
          check_hlds__det_analysis__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 543 "det_analysis.m"
          check_hlds__det_analysis__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 543 "det_analysis.m"
          check_hlds__det_analysis__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 3)));
#line 543 "det_analysis.m"
          check_hlds__det_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 4)));
#line 543 "det_analysis.m"
          check_hlds__det_analysis__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_62_62, (MR_Integer) 0)));
#line 543 "det_analysis.m"
          check_hlds__det_analysis__CondInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_62_62, (MR_Integer) 1)));
#line 544 "det_analysis.m"
          {
#line 544 "det_analysis.m"
            check_hlds__det_analysis__CondDetism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__det_analysis__CondInfo_39);
          }
#line 545 "det_analysis.m"
          check_hlds__det_analysis__V_63_63 = (MR_Integer) 3;
#line 545 "det_analysis.m"
          {
#line 545 "det_analysis.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__CondDetism_42, &check_hlds__det_analysis__V_43_43, &check_hlds__det_analysis__V_72_72);
          }
#line 545 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_63_63 == check_hlds__det_analysis__V_72_72);
#line 543 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 543 "det_analysis.m"
            {
#line 546 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Solns_35 == (MR_Integer) 3);
#line 546 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 543 "det_analysis.m"
            }
#line 543 "det_analysis.m"
        }
#line 549 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 548 "det_analysis.m"
        check_hlds__det_analysis__FinalInternalSolns_44 = (MR_Integer) 3;
#line 549 "det_analysis.m"
      else
#line 563 "det_analysis.m"
        {
#line 554 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_64_64;

#line 555 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__Solns_35 == (MR_Integer) 0);
#line 554 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 554 "det_analysis.m"
            {
#line 554 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 554 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 554 "det_analysis.m"
                {
#line 554 "det_analysis.m"
                  check_hlds__det_analysis__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 554 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__ConjGoals_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 554 "det_analysis.m"
                  (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (check_hlds__det_analysis__V_64_64 == (MR_Integer) 0);
#line 554 "det_analysis.m"
                  if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 557 "det_analysis.m"
                    {
#line 557 "det_analysis.m"
                      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_4(&check_hlds__det_analysis__env);
                    }
#line 554 "det_analysis.m"
                }
#line 554 "det_analysis.m"
            }
#line 563 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 562 "det_analysis.m"
            check_hlds__det_analysis__FinalInternalSolns_44 = (MR_Integer) 3;
#line 563 "det_analysis.m"
          else
#line 564 "det_analysis.m"
            check_hlds__det_analysis__FinalInternalSolns_44 = check_hlds__det_analysis__InternalSolns_34;
#line 563 "det_analysis.m"
        }
#line 566 "det_analysis.m"
      {
#line 566 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_analysis__FinalInternalDetism_50, check_hlds__det_analysis__InternalCanFail_32, check_hlds__det_analysis__FinalInternalSolns_44);
      }
#line 572 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = (*check_hlds__det_analysis__Detism_19 == check_hlds__det_analysis__FinalInternalDetism_50);
#line 572 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 572 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 572 "det_analysis.m"
        {
#line 578 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 578 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 578 "det_analysis.m"
            check_hlds__det_analysis__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 578 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 572 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 572 "det_analysis.m"
            {
#line 581 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__det_analysis__GoalExpr1_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 581 "det_analysis.m"
              if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 581 "det_analysis.m"
                {
#line 581 "det_analysis.m"
                  check_hlds__det_analysis__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 1)));
#line 581 "det_analysis.m"
                  check_hlds__det_analysis__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr1_30, (MR_Integer) 2)));
#line 581 "det_analysis.m"
                }
#line 581 "det_analysis.m"
              (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded);
#line 572 "det_analysis.m"
            }
#line 572 "det_analysis.m"
        }
#line 588 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0_env_0__succeeded)
#line 585 "det_analysis.m"
        {
#line 585 "det_analysis.m"
          MR_Word check_hlds__det_analysis__InnerInfo_54;
#line 585 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_69_69;

#line 585 "det_analysis.m"
          {
#line 585 "det_analysis.m"
            hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__det_analysis__FinalInternalDetism_50, check_hlds__det_analysis__GoalInfo0_23, &check_hlds__det_analysis__InnerInfo_54);
          }
#line 587 "det_analysis.m"
          {
#line 587 "det_analysis.m"
            check_hlds__det_analysis__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_69_69, 0) = ((MR_Box) (check_hlds__det_analysis__GoalExpr1_30));
#line 587 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_69_69, 1) = ((MR_Box) (check_hlds__det_analysis__InnerInfo_54));
#line 587 "det_analysis.m"
          }
#line 586 "det_analysis.m"
          {
#line 586 "det_analysis.m"
            check_hlds__det_analysis__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 586 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 586 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[98])));
#line 586 "det_analysis.m"
            MR_hl_field(MR_mktag(3), check_hlds__det_analysis__GoalExpr_55, 2) = ((MR_Box) (check_hlds__det_analysis__V_69_69));
#line 586 "det_analysis.m"
          }
#line 585 "det_analysis.m"
        }
#line 588 "det_analysis.m"
      else
#line 590 "det_analysis.m"
        check_hlds__det_analysis__GoalExpr_55 = check_hlds__det_analysis__GoalExpr1_30;
#line 592 "det_analysis.m"
      {
#line 592 "det_analysis.m"
        MR_Word base;
#line 592 "det_analysis.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 592 "det_analysis.m"
        *check_hlds__det_analysis__Goal_13 = base;
#line 592 "det_analysis.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_analysis__GoalExpr_55));
#line 592 "det_analysis.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_analysis__GoalInfo_36));
#line 592 "det_analysis.m"
      }
#line 465 "det_analysis.m"
    }
#line 458 "det_analysis.m"
  }
#line 458 "det_analysis.m"
}

#line 419 "det_analysis.m"
static MR_bool MR_CALL 
check_hlds__det_analysis__get_exported_proc_context_4_p_0(
#line 419 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 419 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_7,
#line 419 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_8,
#line 419 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Context_9)
#line 419 "det_analysis.m"
{
#line 422 "det_analysis.m"
  while (MR_TRUE)
#line 422 "det_analysis.m"
    {
#line 422 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 422 "det_analysis.m"
      {
#line 422 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded = ((MR_tag((MR_Word) check_hlds__det_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 422 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Proc_5;
#line 422 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Procs_6;
#line 425 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Context0_12;
#line 423 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_13_13;
#line 423 "det_analysis.m"
        MR_Integer check_hlds__det_analysis__V_14_14;
#line 423 "det_analysis.m"
        MR_Word check_hlds__det_analysis__V_10_10;
#line 423 "det_analysis.m"
        MR_String check_hlds__det_analysis__V_11_11;

#line 422 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 422 "det_analysis.m"
          {
#line 422 "det_analysis.m"
            check_hlds__det_analysis__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 422 "det_analysis.m"
            check_hlds__det_analysis__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 423 "det_analysis.m"
            check_hlds__det_analysis__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 0)));
#line 423 "det_analysis.m"
            check_hlds__det_analysis__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 1)));
#line 423 "det_analysis.m"
            check_hlds__det_analysis__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 2)));
#line 423 "det_analysis.m"
            check_hlds__det_analysis__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 3)));
#line 423 "det_analysis.m"
            check_hlds__det_analysis__Context0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Proc_5, (MR_Integer) 4)));
#line 423 "det_analysis.m"
            {
#line 423 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_analysis__PredId_7, check_hlds__det_analysis__V_13_13);
            }
#line 423 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 423 "det_analysis.m"
              check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__ProcId_8 == check_hlds__det_analysis__V_14_14);
#line 425 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 424 "det_analysis.m"
              {
#line 424 "det_analysis.m"
                *check_hlds__det_analysis__Context_9 = check_hlds__det_analysis__Context0_12;
#line 424 "det_analysis.m"
                check_hlds__det_analysis__succeeded = MR_TRUE;
#line 424 "det_analysis.m"
              }
#line 425 "det_analysis.m"
            else
#line 426 "det_analysis.m"
              {
#line 426 "det_analysis.m"
                /* direct tailcall eliminated */
#line 426 "det_analysis.m"
                {
#line 426 "det_analysis.m"
                  MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__Procs_6;

#line 426 "det_analysis.m"
                  check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 426 "det_analysis.m"
                }
#line 426 "det_analysis.m"
                continue;
#line 426 "det_analysis.m"
              }
#line 422 "det_analysis.m"
          }
#line 422 "det_analysis.m"
        return check_hlds__det_analysis__succeeded;
#line 422 "det_analysis.m"
      }
#line 422 "det_analysis.m"
      break;
#line 422 "det_analysis.m"
    }
#line 419 "det_analysis.m"
}

#line 215 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_single_pass_8_p_0(
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__HeadVar__1_1,
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_2,
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3,
#line 215 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4,
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5,
#line 215 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_6,
#line 215 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7,
#line 215 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Changed_8)
#line 215 "det_analysis.m"
{
#line 220 "det_analysis.m"
  while (MR_TRUE)
#line 220 "det_analysis.m"
    {
#line 220 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 220 "det_analysis.m"
      {
#line 220 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;

#line 220 "det_analysis.m"
        if ((check_hlds__det_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "det_analysis.m"
          {
#line 220 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_Changed_8 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7;
#line 220 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_Specs_6 = check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5;
#line 220 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_4 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3;
#line 220 "det_analysis.m"
          }
#line 220 "det_analysis.m"
        else
#line 222 "det_analysis.m"
          {
#line 222 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredId_19;
#line 222 "det_analysis.m"
            MR_Integer check_hlds__det_analysis__ProcId_20;
#line 222 "det_analysis.m"
            MR_Word check_hlds__det_analysis__PredProcs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "det_analysis.m"
            MR_Word check_hlds__det_analysis__OldDetism_26;
#line 222 "det_analysis.m"
            MR_Word check_hlds__det_analysis__NewDetism_27;
#line 222 "det_analysis.m"
            MR_String check_hlds__det_analysis__ChangeStr_28;
#line 222 "det_analysis.m"
            MR_Word check_hlds__det_analysis__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37;
#line 222 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38;
#line 222 "det_analysis.m"
            MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39;

#line 221 "det_analysis.m"
            check_hlds__det_analysis__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_36_36, (MR_Integer) 0)));
#line 221 "det_analysis.m"
            check_hlds__det_analysis__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_36_36, (MR_Integer) 1)));
#line 223 "det_analysis.m"
            {
#line 223 "det_analysis.m"
              check_hlds__det_analysis__det_infer_proc_8_p_0(check_hlds__det_analysis__PredId_19, check_hlds__det_analysis__ProcId_20, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__det_analysis__OldDetism_26, &check_hlds__det_analysis__NewDetism_27, check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5, &check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38);
            }
#line 224 "det_analysis.m"
            check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__NewDetism_27 == check_hlds__det_analysis__OldDetism_26);
#line 226 "det_analysis.m"
            if (check_hlds__det_analysis__succeeded)
#line 225 "det_analysis.m"
              {
#line 225 "det_analysis.m"
                check_hlds__det_analysis__ChangeStr_28 = (MR_String) "old";
#line 225 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7;
#line 225 "det_analysis.m"
              }
#line 226 "det_analysis.m"
            else
#line 227 "det_analysis.m"
              {
#line 227 "det_analysis.m"
                check_hlds__det_analysis__ChangeStr_28 = (MR_String) "new";
#line 228 "det_analysis.m"
                check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39 = (MR_Integer) 0;
#line 227 "det_analysis.m"
              }
#line 239 "det_analysis.m"
            if ((check_hlds__det_analysis__Debug_2 == (MR_Integer) 0))
#line 240 "det_analysis.m"
              {
#line 240 "det_analysis.m"
              }
#line 239 "det_analysis.m"
            else
#line 232 "det_analysis.m"
              {
#line 232 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_41_41;
#line 232 "det_analysis.m"
                MR_String check_hlds__det_analysis__V_44_44;

#line 233 "det_analysis.m"
                {
#line 233 "det_analysis.m"
                  check_hlds__det_analysis__V_44_44 = mercury__string__f_43_43_2_f_0(check_hlds__det_analysis__ChangeStr_28, (MR_String) " detism ");
                }
#line 233 "det_analysis.m"
                {
#line 233 "det_analysis.m"
                  check_hlds__det_analysis__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "% Inferred ", check_hlds__det_analysis__V_44_44);
                }
#line 233 "det_analysis.m"
                {
#line 233 "det_analysis.m"
                  mercury__io__write_string_3_p_0(check_hlds__det_analysis__V_41_41);
                }
#line 234 "det_analysis.m"
                {
#line 234 "det_analysis.m"
                  parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(check_hlds__det_analysis__NewDetism_27);
                }
#line 235 "det_analysis.m"
                {
#line 235 "det_analysis.m"
                  mercury__io__write_string_3_p_0((MR_String) " for ");
                }
#line 236 "det_analysis.m"
                {
#line 236 "det_analysis.m"
                  hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37, check_hlds__det_analysis__PredId_19, check_hlds__det_analysis__ProcId_20);
                }
#line 237 "det_analysis.m"
                {
#line 237 "det_analysis.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 232 "det_analysis.m"
              }
#line 242 "det_analysis.m"
            /* direct tailcall eliminated */
#line 242 "det_analysis.m"
            {
#line 242 "det_analysis.m"
              MR_Word check_hlds__det_analysis__HeadVar__1__tmp_copy_1 = check_hlds__det_analysis__PredProcs_21;
#line 242 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_37_37;
#line 242 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__det_analysis__STATE_VARIABLE_Specs_38_38;
#line 242 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__det_analysis__STATE_VARIABLE_Changed_39_39;

#line 242 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_Changed_0_7 = check_hlds__det_analysis__STATE_VARIABLE_Changed_0__tmp_copy_7;
#line 242 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_Specs_0_5 = check_hlds__det_analysis__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 242 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 242 "det_analysis.m"
              check_hlds__det_analysis__HeadVar__1_1 = check_hlds__det_analysis__HeadVar__1__tmp_copy_1;
#line 242 "det_analysis.m"
            }
#line 242 "det_analysis.m"
            continue;
#line 222 "det_analysis.m"
          }
#line 220 "det_analysis.m"
      }
#line 220 "det_analysis.m"
      break;
#line 220 "det_analysis.m"
    }
#line 215 "det_analysis.m"
}

#line 185 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__global_inference_pass_5_p_0(
#line 185 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13,
#line 185 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14,
#line 185 "det_analysis.m"
  MR_Word check_hlds__det_analysis__ProcList_7,
#line 185 "det_analysis.m"
  MR_Word check_hlds__det_analysis__Debug_8,
#line 185 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__Specs_9)
#line 185 "det_analysis.m"
{
#line 188 "det_analysis.m"
  while (MR_TRUE)
#line 188 "det_analysis.m"
    {
#line 188 "det_analysis.m"
      /* tailcall optimized into a loop */
#line 188 "det_analysis.m"
      {
#line 188 "det_analysis.m"
        MR_bool check_hlds__det_analysis__succeeded;
#line 188 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Specs1_10;
#line 188 "det_analysis.m"
        MR_Word check_hlds__det_analysis__Changed_11;
#line 188 "det_analysis.m"
        MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;

#line 194 "det_analysis.m"
        {
#line 194 "det_analysis.m"
          check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__ProcList_7, check_hlds__det_analysis__Debug_8, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__Specs1_10, (MR_Integer) 1, &check_hlds__det_analysis__Changed_11);
        }
#line 197 "det_analysis.m"
        {
#line 197 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Debug_8, (MR_String) "% Inference pass complete\n");
        }
#line 207 "det_analysis.m"
        if ((check_hlds__det_analysis__Changed_11 == (MR_Integer) 0))
#line 206 "det_analysis.m"
          {
#line 206 "det_analysis.m"
            /* direct tailcall eliminated */
#line 206 "det_analysis.m"
            {
#line 206 "det_analysis.m"
              MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_13 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;

#line 206 "det_analysis.m"
              check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_13 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0__tmp_copy_13;
#line 206 "det_analysis.m"
            }
#line 206 "det_analysis.m"
            continue;
#line 206 "det_analysis.m"
          }
#line 207 "det_analysis.m"
        else
#line 208 "det_analysis.m"
          {
#line 212 "det_analysis.m"
            *check_hlds__det_analysis__Specs_9 = check_hlds__det_analysis__Specs1_10;
#line 208 "det_analysis.m"
            *check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_14 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_15_15;
#line 208 "det_analysis.m"
          }
#line 188 "det_analysis.m"
      }
#line 188 "det_analysis.m"
      break;
#line 188 "det_analysis.m"
    }
#line 185 "det_analysis.m"
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
#line 2048 "det_analysis.m"
  {
#line 2048 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 2046 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_7_7;
#line 2046 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_5_5;

#line 2046 "det_analysis.m"
    {
#line 2046 "det_analysis.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__DeclaredDetism_3, &check_hlds__det_analysis__V_5_5, &check_hlds__det_analysis__V_7_7);
    }
#line 2046 "det_analysis.m"
    check_hlds__det_analysis__succeeded = ((MR_Integer) 2 == check_hlds__det_analysis__V_7_7);
#line 2048 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 2047 "det_analysis.m"
      *check_hlds__det_analysis__SolnContext_4 = (MR_Integer) 1;
#line 2048 "det_analysis.m"
    else
#line 2049 "det_analysis.m"
      *check_hlds__det_analysis__SolnContext_4 = (MR_Integer) 0;
#line 2048 "det_analysis.m"
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
#line 432 "det_analysis.m"
  {
#line 432 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 432 "det_analysis.m"
    MR_Word check_hlds__det_analysis__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_11, (MR_Integer) 1)));
#line 432 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NonLocalVars_22;
#line 432 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InstmapDelta_23;
#line 432 "det_analysis.m"
    MR_Word check_hlds__det_analysis__AddPruning_25;
#line 432 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30;
#line 433 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_analysis__Goal0_11, (MR_Integer) 0)));
#line 440 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Purity_24;
#line 445 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_29_29;

#line 434 "det_analysis.m"
    {
#line 434 "det_analysis.m"
      check_hlds__det_analysis__NonLocalVars_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
    }
#line 435 "det_analysis.m"
    {
#line 435 "det_analysis.m"
      check_hlds__det_analysis__InstmapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
    }
#line 440 "det_analysis.m"
    {
#line 440 "det_analysis.m"
      check_hlds__det_analysis__succeeded = check_hlds__det_util__det_no_output_vars_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__InstMap0_13, check_hlds__det_analysis__InstmapDelta_23, check_hlds__det_analysis__NonLocalVars_22);
    }
#line 440 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 440 "det_analysis.m"
      {
#line 441 "det_analysis.m"
        {
#line 441 "det_analysis.m"
          check_hlds__det_analysis__Purity_24 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__det_analysis__GoalInfo0_21);
        }
#line 443 "det_analysis.m"
        check_hlds__det_analysis__succeeded = (check_hlds__det_analysis__Purity_24 == (MR_Integer) 2);
#line 444 "det_analysis.m"
        if (check_hlds__det_analysis__succeeded)
#line 444 "det_analysis.m"
          {
#line 446 "det_analysis.m"
            check_hlds__det_analysis__V_29_29 = (MR_Integer) 2;
#line 445 "det_analysis.m"
            {
#line 445 "det_analysis.m"
              check_hlds__det_analysis__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__det_analysis__GoalInfo0_21, check_hlds__det_analysis__V_29_29);
            }
#line 444 "det_analysis.m"
            check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 444 "det_analysis.m"
          }
#line 444 "det_analysis.m"
        check_hlds__det_analysis__succeeded = !(check_hlds__det_analysis__succeeded);
#line 440 "det_analysis.m"
      }
#line 451 "det_analysis.m"
    if (check_hlds__det_analysis__succeeded)
#line 449 "det_analysis.m"
      {
#line 449 "det_analysis.m"
        check_hlds__det_analysis__AddPruning_25 = (MR_Integer) 1;
#line 450 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30 = (MR_Integer) 1;
#line 449 "det_analysis.m"
      }
#line 451 "det_analysis.m"
    else
#line 452 "det_analysis.m"
      {
#line 452 "det_analysis.m"
        check_hlds__det_analysis__AddPruning_25 = (MR_Integer) 0;
#line 452 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30 = check_hlds__det_analysis__STATE_VARIABLE_SolnContext_0_26;
#line 452 "det_analysis.m"
      }
#line 454 "det_analysis.m"
    {
#line 454 "det_analysis.m"
      check_hlds__det_analysis__det_infer_goal_known_pruning_11_p_0(check_hlds__det_analysis__Goal0_11, check_hlds__det_analysis__Goal_12, check_hlds__det_analysis__InstMap0_13, check_hlds__det_analysis__STATE_VARIABLE_SolnContext_30_30, check_hlds__det_analysis__RightFailingContexts_15, check_hlds__det_analysis__MaybePromiseEqvSolutionSets_16, check_hlds__det_analysis__AddPruning_25, check_hlds__det_analysis__Detism_17, check_hlds__det_analysis__GoalFailingContexts_18, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_0_27, check_hlds__det_analysis__STATE_VARIABLE_DetInfo_28);
#line 454 "det_analysis.m"
      return;
    }
#line 432 "det_analysis.m"
  }
#line 94 "det_analysis.m"
}

#line 367 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_1(
#line 367 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 367 "det_analysis.m"
{
#line 367 "det_analysis.m"
  {
#line 367 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 367 "det_analysis.m"
    MR_builtin_longjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0, 1);
#line 367 "det_analysis.m"
  }
#line 367 "det_analysis.m"
}

#line 366 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_3(
#line 366 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 366 "det_analysis.m"
{
#line 366 "det_analysis.m"
  {
#line 366 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 366 "det_analysis.m"
    (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_163_163 = ((MR_Word) (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_163_163);
#line 366 "det_analysis.m"
    {
#line 366 "det_analysis.m"
      check_hlds__det_analysis__det_infer_proc_8_p_0_2(check_hlds__det_analysis__env_ptr);
#line 366 "det_analysis.m"
      return;
    }
#line 366 "det_analysis.m"
  }
#line 366 "det_analysis.m"
}

#line 367 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_2(
#line 367 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 367 "det_analysis.m"
{
#line 367 "det_analysis.m"
  {
#line 367 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 366 "det_analysis.m"
    {
#line 366 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis____Unify____hlds__hlds_module__pragma_exported_proc_0_2((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_124_124, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_163_163);
    }
#line 367 "det_analysis.m"
    if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 367 "det_analysis.m"
      {
#line 369 "det_analysis.m"
        if ((*((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) == (MR_Integer) 2))
#line 368 "det_analysis.m"
          (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 369 "det_analysis.m"
        else
#line 369 "det_analysis.m"
          if ((*((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) == (MR_Integer) 3))
#line 369 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 369 "det_analysis.m"
          else
#line 369 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
#line 369 "det_analysis.m"
        if ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 369 "det_analysis.m"
          {
#line 369 "det_analysis.m"
            check_hlds__det_analysis__det_infer_proc_8_p_0_1(check_hlds__det_analysis__env_ptr);
#line 369 "det_analysis.m"
            return;
          }
#line 367 "det_analysis.m"
      }
#line 367 "det_analysis.m"
  }
#line 367 "det_analysis.m"
}

#line 367 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0_4(
#line 367 "det_analysis.m"
  void * check_hlds__det_analysis__env_ptr_arg)
#line 367 "det_analysis.m"
{
#line 367 "det_analysis.m"
  {
#line 367 "det_analysis.m"
    struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s * check_hlds__det_analysis__env_ptr = (struct check_hlds__det_analysis__det_infer_proc_8_p_0_env_0_s *) check_hlds__det_analysis__env_ptr_arg;

#line 367 "det_analysis.m"
    if (MR_builtin_setjmp((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__commit_0) == 0)
#line 367 "det_analysis.m"
      {
#line 367 "det_analysis.m"
        {
#line 366 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_55_55;
#line 366 "det_analysis.m"
          MR_String check_hlds__det_analysis__V_56_56;
#line 366 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_57_57;

#line 366 "det_analysis.m"
          {
#line 366 "det_analysis.m"
            MR_Word base;
#line 366 "det_analysis.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 366 "det_analysis.m"
            (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__V_124_124 = base;
#line 366 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 0) = NULL;
#line 366 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
#line 366 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
#line 366 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 3) = NULL;
#line 366 "det_analysis.m"
            MR_hl_field(MR_mktag(0), base, 4) = NULL;
#line 366 "det_analysis.m"
          }
#line 366 "det_analysis.m"
          {
#line 366 "det_analysis.m"
            mercury__list__member_2_p_1((check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_162_162, &(check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__conv2_V_163_163, (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_53, check_hlds__det_analysis__det_infer_proc_8_p_0_3, check_hlds__det_analysis__env_ptr);
          }
#line 367 "det_analysis.m"
        }
#line 367 "det_analysis.m"
        (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_FALSE;
#line 367 "det_analysis.m"
      }
#line 367 "det_analysis.m"
    else
#line 367 "det_analysis.m"
      (check_hlds__det_analysis__env_ptr)->check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = MR_TRUE;
#line 367 "det_analysis.m"
  }
#line 367 "det_analysis.m"
}

#line 82 "det_analysis.m"
void MR_CALL 
check_hlds__det_analysis__det_infer_proc_8_p_0(
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__PredId_9,
#line 82 "det_analysis.m"
  MR_Integer check_hlds__det_analysis__ProcId_10,
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_70,
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_71,
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__OldDetism_12,
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__NewDetism_13,
#line 82 "det_analysis.m"
  MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_0_72,
#line 82 "det_analysis.m"
  MR_Word * check_hlds__det_analysis__STATE_VARIABLE_Specs_73)
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
#line 260 "det_analysis.m"
    {
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_157_157;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_158_158;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_159_159;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TypeCtorInfo_160_160;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredTable0_15;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo0_16;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcTable0_17;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo0_18;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldInferredSolnContext_19;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__MaybeDeclaredDetism_20;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DeclaredSolnContext_22;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__SolnContext_23;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Goal0_25;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InstMap0_26;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__VarTypes_27;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DetInfo0_28;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Goal_29;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferDetism_30;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__DetInfo_32;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__HasFormatCalls_33;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__HasRequireScope_34;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldCanFail_35;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__OldMaxSoln_36;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferCanFail_37;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__InferMaxSoln_38;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__CanFail_39;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__MaxSoln_40;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__TentativeDetism_41;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__EvalMethod_42;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ExportedProcsCord0_52;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ExportedProcsCord_54;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo1_61;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcInfo_62;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ProcTable_63;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo1_64;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers1_65;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers2_66;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__Markers_67;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredInfo_68;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__PredTable_69;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_85_85;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_86_86;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_122_122;
#line 260 "det_analysis.m"
      MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_123_123;
#line 263 "det_analysis.m"
      MR_Box check_hlds__det_analysis__conv0_PredInfo0_16;
#line 265 "det_analysis.m"
      MR_Box check_hlds__det_analysis__conv1_ProcInfo0_18;
#line 306 "det_analysis.m"
      MR_Word check_hlds__det_analysis__V_31_31;
#line 328 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ToBeCheckedDetism_45;
#line 328 "det_analysis.m"
      MR_Word check_hlds__det_analysis__ToBeCheckedCodeModel_46;
#line 328 "det_analysis.m"
      MR_Integer check_hlds__det_analysis___InArg_43;
#line 328 "det_analysis.m"
      MR_Integer check_hlds__det_analysis___OutArg_44;

#line 262 "det_analysis.m"
      {
#line 262 "det_analysis.m"
        hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_70, &check_hlds__det_analysis__PredTable0_15);
      }
#line 11270 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_157_157 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 11272 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_158_158 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 263 "det_analysis.m"
      {
#line 263 "det_analysis.m"
        mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_157_157, check_hlds__det_analysis__TypeCtorInfo_158_158, check_hlds__det_analysis__PredTable0_15, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), &check_hlds__det_analysis__conv0_PredInfo0_16);
      }
#line 263 "det_analysis.m"
      check_hlds__det_analysis__PredInfo0_16 = ((MR_Word) check_hlds__det_analysis__conv0_PredInfo0_16);
#line 264 "det_analysis.m"
      {
#line 264 "det_analysis.m"
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_analysis__PredInfo0_16, &check_hlds__det_analysis__ProcTable0_17);
      }
#line 11286 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_159_159 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 11288 "check_hlds.det_analysis.c"
      check_hlds__det_analysis__TypeCtorInfo_160_160 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 265 "det_analysis.m"
      {
#line 265 "det_analysis.m"
        mercury__map__lookup_3_p_0(check_hlds__det_analysis__TypeCtorInfo_159_159, check_hlds__det_analysis__TypeCtorInfo_160_160, check_hlds__det_analysis__ProcTable0_17, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10)), &check_hlds__det_analysis__conv1_ProcInfo0_18);
      }
#line 265 "det_analysis.m"
      check_hlds__det_analysis__ProcInfo0_18 = ((MR_Word) check_hlds__det_analysis__conv1_ProcInfo0_18);
#line 268 "det_analysis.m"
      {
#line 268 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_18, check_hlds__det_analysis__OldDetism_12);
      }
#line 273 "det_analysis.m"
      {
#line 273 "det_analysis.m"
        check_hlds__det_analysis__det_get_soln_context_2_p_0(*check_hlds__det_analysis__OldDetism_12, &check_hlds__det_analysis__OldInferredSolnContext_19);
      }
#line 274 "det_analysis.m"
      {
#line 274 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__MaybeDeclaredDetism_20);
      }
#line 278 "det_analysis.m"
      if ((check_hlds__det_analysis__MaybeDeclaredDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "det_analysis.m"
        check_hlds__det_analysis__DeclaredSolnContext_22 = (MR_Integer) 0;
#line 278 "det_analysis.m"
      else
#line 276 "det_analysis.m"
        {
#line 276 "det_analysis.m"
          MR_Word check_hlds__det_analysis__DeclaredDetism_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDeclaredDetism_20, (MR_Integer) 0)));

#line 277 "det_analysis.m"
          {
#line 277 "det_analysis.m"
            check_hlds__det_analysis__det_get_soln_context_2_p_0(check_hlds__det_analysis__DeclaredDetism_21, &check_hlds__det_analysis__DeclaredSolnContext_22);
          }
#line 276 "det_analysis.m"
        }
#line 283 "det_analysis.m"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__DeclaredSolnContext_22 == (MR_Integer) 1);
#line 284 "det_analysis.m"
      if (!((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded))
#line 284 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__OldInferredSolnContext_19 == (MR_Integer) 1);
#line 288 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 287 "det_analysis.m"
        check_hlds__det_analysis__SolnContext_23 = (MR_Integer) 1;
#line 288 "det_analysis.m"
      else
#line 289 "det_analysis.m"
        check_hlds__det_analysis__SolnContext_23 = (MR_Integer) 0;
#line 301 "det_analysis.m"
      {
#line 301 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__Goal0_25);
      }
#line 302 "det_analysis.m"
      {
#line 302 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__det_analysis__ProcInfo0_18, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_70, &check_hlds__det_analysis__InstMap0_26);
      }
#line 303 "det_analysis.m"
      {
#line 303 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__VarTypes_27);
      }
#line 304 "det_analysis.m"
      {
#line 304 "det_analysis.m"
        check_hlds__det_util__det_info_init_7_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_70, check_hlds__det_analysis__VarTypes_27, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, (MR_Integer) 0, check_hlds__det_analysis__STATE_VARIABLE_Specs_0_72, &check_hlds__det_analysis__DetInfo0_28);
      }
#line 306 "det_analysis.m"
      {
#line 306 "det_analysis.m"
        check_hlds__det_analysis__det_infer_goal_10_p_0(check_hlds__det_analysis__Goal0_25, &check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__InstMap0_26, check_hlds__det_analysis__SolnContext_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__InferDetism_30, &check_hlds__det_analysis__V_31_31, check_hlds__det_analysis__DetInfo0_28, &check_hlds__det_analysis__DetInfo_32);
      }
#line 308 "det_analysis.m"
      {
#line 308 "det_analysis.m"
        check_hlds__det_util__det_info_get_module_info_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_85_85);
      }
#line 309 "det_analysis.m"
      {
#line 309 "det_analysis.m"
        check_hlds__det_util__det_info_get_error_specs_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__STATE_VARIABLE_Specs_86_86);
      }
#line 310 "det_analysis.m"
      {
#line 310 "det_analysis.m"
        check_hlds__det_util__det_info_get_has_format_call_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__HasFormatCalls_33);
      }
#line 311 "det_analysis.m"
      {
#line 311 "det_analysis.m"
        check_hlds__det_util__det_info_get_has_req_scope_2_p_0(check_hlds__det_analysis__DetInfo_32, &check_hlds__det_analysis__HasRequireScope_34);
      }
#line 318 "det_analysis.m"
      {
#line 318 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__det_analysis__OldDetism_12, &check_hlds__det_analysis__OldCanFail_35, &check_hlds__det_analysis__OldMaxSoln_36);
      }
#line 319 "det_analysis.m"
      {
#line 319 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_0(check_hlds__det_analysis__InferDetism_30, &check_hlds__det_analysis__InferCanFail_37, &check_hlds__det_analysis__InferMaxSoln_38);
      }
#line 320 "det_analysis.m"
      {
#line 320 "det_analysis.m"
        parse_tree__prog_data__det_switch_canfail_3_p_0(check_hlds__det_analysis__OldCanFail_35, check_hlds__det_analysis__InferCanFail_37, &check_hlds__det_analysis__CanFail_39);
      }
#line 321 "det_analysis.m"
      {
#line 321 "det_analysis.m"
        parse_tree__prog_data__det_switch_maxsoln_3_p_0(check_hlds__det_analysis__OldMaxSoln_36, check_hlds__det_analysis__InferMaxSoln_38, &check_hlds__det_analysis__MaxSoln_40);
      }
#line 322 "det_analysis.m"
      {
#line 322 "det_analysis.m"
        parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__det_analysis__TentativeDetism_41, check_hlds__det_analysis__CanFail_39, check_hlds__det_analysis__MaxSoln_40);
      }
#line 325 "det_analysis.m"
      {
#line 325 "det_analysis.m"
        hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__EvalMethod_42);
      }
#line 326 "det_analysis.m"
      {
#line 326 "det_analysis.m"
        *((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13) = hlds__hlds_pred__eval_method_change_determinism_2_f_0(check_hlds__det_analysis__EvalMethod_42, check_hlds__det_analysis__TentativeDetism_41);
      }
#line 328 "det_analysis.m"
      {
#line 328 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = hlds__hlds_pred__proc_info_has_io_state_pair_4_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_85_85, check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis___InArg_43, &check_hlds__det_analysis___OutArg_44);
      }
#line 328 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 328 "det_analysis.m"
        {
#line 331 "det_analysis.m"
          if ((check_hlds__det_analysis__MaybeDeclaredDetism_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "det_analysis.m"
            check_hlds__det_analysis__ToBeCheckedDetism_45 = *((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13);
#line 331 "det_analysis.m"
          else
#line 330 "det_analysis.m"
            check_hlds__det_analysis__ToBeCheckedDetism_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_analysis__MaybeDeclaredDetism_20, (MR_Integer) 0)));
#line 335 "det_analysis.m"
          {
#line 335 "det_analysis.m"
            hlds__code_model__determinism_to_code_model_2_p_0(check_hlds__det_analysis__ToBeCheckedDetism_45, &check_hlds__det_analysis__ToBeCheckedCodeModel_46);
          }
#line 336 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = (check_hlds__det_analysis__ToBeCheckedCodeModel_46 == (MR_Integer) 0);
#line 336 "det_analysis.m"
          (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = !((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded);
#line 328 "det_analysis.m"
        }
#line 350 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 338 "det_analysis.m"
        {
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__TypeCtorInfo_161_161;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__ProcContext_47;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStateProcPieces_48;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStatePieces_49;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__IOStateSpec_51;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_88_88;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_93_93;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_114_114;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_115_115;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_116_116;
#line 338 "det_analysis.m"
          MR_Word check_hlds__det_analysis__V_117_117;

#line 338 "det_analysis.m"
          {
#line 338 "det_analysis.m"
            hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__ProcContext_47);
          }
#line 340 "det_analysis.m"
          {
#line 340 "det_analysis.m"
            check_hlds__det_analysis__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_88_88, 0) = ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9));
#line 340 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_88_88, 1) = ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10));
#line 340 "det_analysis.m"
          }
#line 339 "det_analysis.m"
          {
#line 339 "det_analysis.m"
            check_hlds__det_analysis__IOStateProcPieces_48 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_85_85, (MR_Integer) 1, check_hlds__det_analysis__V_88_88);
          }
#line 11499 "check_hlds.det_analysis.c"
          check_hlds__det_analysis__TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 341 "det_analysis.m"
          {
#line 341 "det_analysis.m"
            check_hlds__det_analysis__V_93_93 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_161_161, check_hlds__det_analysis__IOStateProcPieces_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[9]));
          }
#line 341 "det_analysis.m"
          {
#line 341 "det_analysis.m"
            check_hlds__det_analysis__IOStatePieces_49 = mercury__list__f_43_43_2_f_0(check_hlds__det_analysis__TypeCtorInfo_161_161, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[92]), check_hlds__det_analysis__V_93_93);
          }
#line 348 "det_analysis.m"
          {
#line 348 "det_analysis.m"
            check_hlds__det_analysis__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_117_117, 0) = ((MR_Box) (check_hlds__det_analysis__IOStatePieces_49));
#line 348 "det_analysis.m"
          }
#line 348 "det_analysis.m"
          {
#line 348 "det_analysis.m"
            check_hlds__det_analysis__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_116_116, 0) = ((MR_Box) (check_hlds__det_analysis__V_117_117));
#line 348 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_analysis_scalar_common_1[93])));
#line 348 "det_analysis.m"
          }
#line 347 "det_analysis.m"
          {
#line 347 "det_analysis.m"
            check_hlds__det_analysis__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_115_115, 0) = ((MR_Box) (check_hlds__det_analysis__ProcContext_47));
#line 347 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_115_115, 1) = ((MR_Box) (check_hlds__det_analysis__V_116_116));
#line 347 "det_analysis.m"
          }
#line 348 "det_analysis.m"
          {
#line 348 "det_analysis.m"
            check_hlds__det_analysis__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 0) = ((MR_Box) (check_hlds__det_analysis__V_115_115));
#line 348 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "det_analysis.m"
          }
#line 346 "det_analysis.m"
          {
#line 346 "det_analysis.m"
            check_hlds__det_analysis__IOStateSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 346 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 346 "det_analysis.m"
            MR_hl_field(MR_mktag(0), check_hlds__det_analysis__IOStateSpec_51, 2) = ((MR_Box) (check_hlds__det_analysis__V_114_114));
#line 346 "det_analysis.m"
          }
#line 349 "det_analysis.m"
          {
#line 349 "det_analysis.m"
            check_hlds__det_analysis__STATE_VARIABLE_Specs_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_Specs_122_122, 0) = ((MR_Box) (check_hlds__det_analysis__IOStateSpec_51));
#line 349 "det_analysis.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_analysis__STATE_VARIABLE_Specs_122_122, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_Specs_86_86));
#line 349 "det_analysis.m"
          }
#line 338 "det_analysis.m"
        }
#line 350 "det_analysis.m"
      else
#line 350 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_Specs_122_122 = check_hlds__det_analysis__STATE_VARIABLE_Specs_86_86;
#line 359 "det_analysis.m"
      {
#line 359 "det_analysis.m"
        hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_85_85, &check_hlds__det_analysis__ExportedProcsCord0_52);
      }
#line 11582 "check_hlds.det_analysis.c"
      (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_162_162 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;
#line 360 "det_analysis.m"
      {
#line 360 "det_analysis.m"
        (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_53 = mercury__cord__list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_162_162, check_hlds__det_analysis__ExportedProcsCord0_52);
      }
#line 361 "det_analysis.m"
      {
#line 361 "det_analysis.m"
        check_hlds__det_analysis__ExportedProcsCord_54 = mercury__cord__from_list_1_f_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__TypeCtorInfo_162_162, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_53);
      }
#line 364 "det_analysis.m"
      {
#line 364 "det_analysis.m"
        hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(check_hlds__det_analysis__ExportedProcsCord_54, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_85_85, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_123_123);
      }
#line 367 "det_analysis.m"
      {
#line 367 "det_analysis.m"
        check_hlds__det_analysis__det_infer_proc_8_p_0_4(&check_hlds__det_analysis__env);
      }
#line 387 "det_analysis.m"
      if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 383 "det_analysis.m"
        {
#line 383 "det_analysis.m"
          MR_Word check_hlds__det_analysis__PragmaContext_58;

#line 373 "det_analysis.m"
          {
#line 373 "det_analysis.m"
            (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded = check_hlds__det_analysis__get_exported_proc_context_4_p_0((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ExportedProcs_53, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9, (check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10, &check_hlds__det_analysis__PragmaContext_58);
          }
#line 383 "det_analysis.m"
          if ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__succeeded)
#line 379 "det_analysis.m"
            {
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ExportPieces_59;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__ExportSpec_60;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_127_127;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_130_130;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_133_133;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_136_136;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_137_137;
#line 379 "det_analysis.m"
              MR_String check_hlds__det_analysis__V_138_138;
#line 379 "det_analysis.m"
              MR_String check_hlds__det_analysis__V_139_139;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_144_144;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_145_145;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_146_146;
#line 379 "det_analysis.m"
              MR_Word check_hlds__det_analysis__V_147_147;

#line 379 "det_analysis.m"
              {
#line 379 "det_analysis.m"
                check_hlds__det_analysis__V_139_139 = parse_tree__prog_out__determinism_to_string_1_f_0(*((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13));
              }
#line 379 "det_analysis.m"
              {
#line 379 "det_analysis.m"
                check_hlds__det_analysis__V_138_138 = mercury__string__f_43_43_2_f_0(check_hlds__det_analysis__V_139_139, (MR_String) ".");
              }
#line 379 "det_analysis.m"
              {
#line 379 "det_analysis.m"
                check_hlds__det_analysis__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 379 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_137_137, 0) = ((MR_Box) (check_hlds__det_analysis__V_138_138));
#line 379 "det_analysis.m"
              }
#line 379 "det_analysis.m"
              {
#line 379 "det_analysis.m"
                check_hlds__det_analysis__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 0) = ((MR_Box) (check_hlds__det_analysis__V_137_137));
#line 379 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "det_analysis.m"
              }
#line 378 "det_analysis.m"
              {
#line 378 "det_analysis.m"
                check_hlds__det_analysis__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_133_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[97])));
#line 378 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_133_133, 1) = ((MR_Box) (check_hlds__det_analysis__V_136_136));
#line 378 "det_analysis.m"
              }
#line 377 "det_analysis.m"
              {
#line 377 "det_analysis.m"
                check_hlds__det_analysis__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_130_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[96])));
#line 377 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_130_130, 1) = ((MR_Box) (check_hlds__det_analysis__V_133_133));
#line 377 "det_analysis.m"
              }
#line 377 "det_analysis.m"
              {
#line 377 "det_analysis.m"
                check_hlds__det_analysis__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_127_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[95])));
#line 377 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_127_127, 1) = ((MR_Box) (check_hlds__det_analysis__V_130_130));
#line 377 "det_analysis.m"
              }
#line 376 "det_analysis.m"
              {
#line 376 "det_analysis.m"
                check_hlds__det_analysis__ExportPieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExportPieces_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_analysis_scalar_common_1[94])));
#line 376 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__ExportPieces_59, 1) = ((MR_Box) (check_hlds__det_analysis__V_127_127));
#line 376 "det_analysis.m"
              }
#line 381 "det_analysis.m"
              {
#line 381 "det_analysis.m"
                check_hlds__det_analysis__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 381 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_147_147, 0) = ((MR_Box) (check_hlds__det_analysis__ExportPieces_59));
#line 381 "det_analysis.m"
              }
#line 381 "det_analysis.m"
              {
#line 381 "det_analysis.m"
                check_hlds__det_analysis__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_146_146, 0) = ((MR_Box) (check_hlds__det_analysis__V_147_147));
#line 381 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "det_analysis.m"
              }
#line 381 "det_analysis.m"
              {
#line 381 "det_analysis.m"
                check_hlds__det_analysis__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_145_145, 0) = ((MR_Box) (check_hlds__det_analysis__PragmaContext_58));
#line 381 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_145_145, 1) = ((MR_Box) (check_hlds__det_analysis__V_146_146));
#line 381 "det_analysis.m"
              }
#line 381 "det_analysis.m"
              {
#line 381 "det_analysis.m"
                check_hlds__det_analysis__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_144_144, 0) = ((MR_Box) (check_hlds__det_analysis__V_145_145));
#line 381 "det_analysis.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "det_analysis.m"
              }
#line 380 "det_analysis.m"
              {
#line 380 "det_analysis.m"
                check_hlds__det_analysis__ExportSpec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 380 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 380 "det_analysis.m"
                MR_hl_field(MR_mktag(0), check_hlds__det_analysis__ExportSpec_60, 2) = ((MR_Box) (check_hlds__det_analysis__V_144_144));
#line 380 "det_analysis.m"
              }
#line 382 "det_analysis.m"
              {
#line 382 "det_analysis.m"
                MR_Word base;
#line 382 "det_analysis.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "det_analysis.m"
                *check_hlds__det_analysis__STATE_VARIABLE_Specs_73 = base;
#line 382 "det_analysis.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__det_analysis__ExportSpec_60));
#line 382 "det_analysis.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_Specs_122_122));
#line 382 "det_analysis.m"
              }
#line 379 "det_analysis.m"
            }
#line 383 "det_analysis.m"
          else
#line 384 "det_analysis.m"
            {
#line 384 "det_analysis.m"
              {
#line 384 "det_analysis.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.det_analysis", (MR_String) "predicate \140check_hlds.det_analysis.det_infer_proc\'/8", (MR_String) "Cannot find proc in table of pragma foreign_exported procs");
#line 384 "det_analysis.m"
                return;
              }
#line 384 "det_analysis.m"
            }
#line 383 "det_analysis.m"
        }
#line 387 "det_analysis.m"
      else
#line 387 "det_analysis.m"
        *check_hlds__det_analysis__STATE_VARIABLE_Specs_73 = check_hlds__det_analysis__STATE_VARIABLE_Specs_122_122;
#line 392 "det_analysis.m"
      {
#line 392 "det_analysis.m"
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__det_analysis__Goal_29, check_hlds__det_analysis__ProcInfo0_18, &check_hlds__det_analysis__ProcInfo1_61);
      }
#line 393 "det_analysis.m"
      {
#line 393 "det_analysis.m"
        hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(*((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__NewDetism_13), check_hlds__det_analysis__ProcInfo1_61, &check_hlds__det_analysis__ProcInfo_62);
      }
#line 396 "det_analysis.m"
      {
#line 396 "det_analysis.m"
        mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_159_159, check_hlds__det_analysis__TypeCtorInfo_160_160, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__ProcId_10)), ((MR_Box) (check_hlds__det_analysis__ProcInfo_62)), check_hlds__det_analysis__ProcTable0_17, &check_hlds__det_analysis__ProcTable_63);
      }
#line 397 "det_analysis.m"
      {
#line 397 "det_analysis.m"
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__det_analysis__ProcTable_63, check_hlds__det_analysis__PredInfo0_16, &check_hlds__det_analysis__PredInfo1_64);
      }
#line 399 "det_analysis.m"
      {
#line 399 "det_analysis.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__det_analysis__PredInfo1_64, &check_hlds__det_analysis__Markers1_65);
      }
#line 403 "det_analysis.m"
      if ((check_hlds__det_analysis__HasFormatCalls_33 == (MR_Integer) 1))
#line 404 "det_analysis.m"
        {
#line 405 "det_analysis.m"
          {
#line 405 "det_analysis.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 24, check_hlds__det_analysis__Markers1_65, &check_hlds__det_analysis__Markers2_66);
          }
#line 404 "det_analysis.m"
        }
#line 403 "det_analysis.m"
      else
#line 402 "det_analysis.m"
        check_hlds__det_analysis__Markers2_66 = check_hlds__det_analysis__Markers1_65;
#line 410 "det_analysis.m"
      if ((check_hlds__det_analysis__HasRequireScope_34 == (MR_Integer) 1))
#line 411 "det_analysis.m"
        {
#line 412 "det_analysis.m"
          {
#line 412 "det_analysis.m"
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 23, check_hlds__det_analysis__Markers2_66, &check_hlds__det_analysis__Markers_67);
          }
#line 411 "det_analysis.m"
        }
#line 410 "det_analysis.m"
      else
#line 409 "det_analysis.m"
        check_hlds__det_analysis__Markers_67 = check_hlds__det_analysis__Markers2_66;
#line 414 "det_analysis.m"
      {
#line 414 "det_analysis.m"
        hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__det_analysis__Markers_67, check_hlds__det_analysis__PredInfo1_64, &check_hlds__det_analysis__PredInfo_68);
      }
#line 416 "det_analysis.m"
      {
#line 416 "det_analysis.m"
        mercury__map__det_update_4_p_0(check_hlds__det_analysis__TypeCtorInfo_157_157, check_hlds__det_analysis__TypeCtorInfo_158_158, ((MR_Box) ((check_hlds__det_analysis__env).check_hlds__det_analysis__det_infer_proc_8_p_0_env_0__PredId_9)), ((MR_Box) (check_hlds__det_analysis__PredInfo_68)), check_hlds__det_analysis__PredTable0_15, &check_hlds__det_analysis__PredTable_69);
      }
#line 417 "det_analysis.m"
      {
#line 417 "det_analysis.m"
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__det_analysis__PredTable_69, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_123_123, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_71);
#line 417 "det_analysis.m"
        return;
      }
#line 260 "det_analysis.m"
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
#line 178 "det_analysis.m"
  {
#line 178 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 178 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Globals_10;
#line 178 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Debug_11;
#line 178 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_17_17;
#line 178 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_18_18;
#line 178 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29;
#line 178 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31;
#line 178 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_33_33;
#line 253 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_28_28;

#line 179 "det_analysis.m"
    {
#line 179 "det_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__det_analysis__Globals_10);
    }
#line 180 "det_analysis.m"
    {
#line 180 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 65, &check_hlds__det_analysis__Debug_11);
    }
#line 181 "det_analysis.m"
    {
#line 181 "det_analysis.m"
      check_hlds__det_analysis__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "det_analysis.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_18_18, 0) = ((MR_Box) (check_hlds__det_analysis__PredId_7));
#line 181 "det_analysis.m"
      MR_hl_field(MR_mktag(0), check_hlds__det_analysis__V_18_18, 1) = ((MR_Box) (check_hlds__det_analysis__ProcId_6));
#line 181 "det_analysis.m"
    }
#line 181 "det_analysis.m"
    {
#line 181 "det_analysis.m"
      check_hlds__det_analysis__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_17_17, 0) = ((MR_Box) (check_hlds__det_analysis__V_18_18));
#line 181 "det_analysis.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_analysis__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "det_analysis.m"
    }
#line 253 "det_analysis.m"
    {
#line 253 "det_analysis.m"
      check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__V_17_17, check_hlds__det_analysis__Debug_11, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31, (MR_Integer) 1, &check_hlds__det_analysis__V_28_28);
    }
#line 255 "det_analysis.m"
    {
#line 255 "det_analysis.m"
      check_hlds__det_analysis__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__det_analysis__V_17_17);
    }
#line 255 "det_analysis.m"
    {
#line 255 "det_analysis.m"
      check_hlds__det_report__global_checking_pass_5_p_0(check_hlds__det_analysis__V_33_33, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_29, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_13, check_hlds__det_analysis__STATE_VARIABLE_Specs_18_31, check_hlds__det_analysis__Specs_9);
#line 255 "det_analysis.m"
      return;
    }
#line 178 "det_analysis.m"
  }
#line 77 "det_analysis.m"
}

#line 149 "det_analysis.m"
static void MR_CALL 
check_hlds__det_analysis__determinism_pass_3_p_0_1(
#line 149 "det_analysis.m"
  MR_Box check_hlds__det_analysis__closure_arg,
#line 149 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_1,
#line 149 "det_analysis.m"
  MR_Box check_hlds__det_analysis__wrapper_arg_2,
#line 149 "det_analysis.m"
  MR_Box * check_hlds__det_analysis__wrapper_arg_3)
#line 149 "det_analysis.m"
{
#line 149 "det_analysis.m"
  {
#line 149 "det_analysis.m"
    MR_Box check_hlds__det_analysis__closure = check_hlds__det_analysis__closure_arg;
#line 149 "det_analysis.m"
    MR_Word check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16;

#line 149 "det_analysis.m"
    {
#line 149 "det_analysis.m"
      check_hlds__det_analysis__set_non_inferred_proc_determinism_3_p_0(((MR_Word) check_hlds__det_analysis__wrapper_arg_1), ((MR_Word) check_hlds__det_analysis__wrapper_arg_2), &check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16);
    }
#line 149 "det_analysis.m"
    *check_hlds__det_analysis__wrapper_arg_3 = ((MR_Box) (check_hlds__det_analysis__conv0_STATE_VARIABLE_ModuleInfo_16));
#line 149 "det_analysis.m"
  }
#line 149 "det_analysis.m"
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
#line 145 "det_analysis.m"
  {
#line 145 "det_analysis.m"
    MR_bool check_hlds__det_analysis__succeeded;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredIds_6;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__DeclaredProcs_7;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__UndeclaredProcs_8;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__NoInferProcs_9;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Globals_10;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Verbose_11;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__Debug_12;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__InferenceSpecs_13;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__FinalSpecs_17;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_27_27;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__PredTable_49;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_62;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__STATE_VARIABLE_Specs_18_64;
#line 145 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_66_66;
#line 149 "det_analysis.m"
    MR_Box check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_21_21;
#line 253 "det_analysis.m"
    MR_Word check_hlds__det_analysis__V_61_61;

#line 146 "det_analysis.m"
    {
#line 146 "det_analysis.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__det_analysis__PredIds_6);
    }
#line 2071 "det_analysis.m"
    {
#line 2071 "det_analysis.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__det_analysis__PredTable_49);
    }
#line 2072 "det_analysis.m"
    {
#line 2072 "det_analysis.m"
      check_hlds__det_analysis__determinism_declarations_preds_8_p_0(check_hlds__det_analysis__PredTable_49, check_hlds__det_analysis__PredIds_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__DeclaredProcs_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__UndeclaredProcs_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__NoInferProcs_9);
    }
#line 149 "det_analysis.m"
    {
#line 149 "det_analysis.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__det_analysis_scalar_common_5[0], check_hlds__det_analysis__NoInferProcs_9, ((MR_Box) (check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_0_18)), &check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_21_21);
    }
#line 149 "det_analysis.m"
    check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) check_hlds__det_analysis__conv1_STATE_VARIABLE_ModuleInfo_21_21);
#line 150 "det_analysis.m"
    {
#line 150 "det_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21, &check_hlds__det_analysis__Globals_10);
    }
#line 151 "det_analysis.m"
    {
#line 151 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 45, &check_hlds__det_analysis__Verbose_11);
    }
#line 152 "det_analysis.m"
    {
#line 152 "det_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_analysis__Globals_10, (MR_Integer) 65, &check_hlds__det_analysis__Debug_12);
    }
#line 156 "det_analysis.m"
    if ((check_hlds__det_analysis__UndeclaredProcs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "det_analysis.m"
      {
#line 155 "det_analysis.m"
        check_hlds__det_analysis__InferenceSpecs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 154 "det_analysis.m"
        check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_27_27 = check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21;
#line 154 "det_analysis.m"
      }
#line 156 "det_analysis.m"
    else
#line 157 "det_analysis.m"
      {
#line 159 "det_analysis.m"
        {
#line 159 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% Doing determinism inference...\n");
        }
#line 162 "det_analysis.m"
        {
#line 162 "det_analysis.m"
          check_hlds__det_analysis__global_inference_pass_5_p_0(check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_21_21, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_27_27, check_hlds__det_analysis__UndeclaredProcs_8, check_hlds__det_analysis__Debug_12, &check_hlds__det_analysis__InferenceSpecs_13);
        }
#line 165 "det_analysis.m"
        {
#line 165 "det_analysis.m"
          libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% done.\n");
        }
#line 157 "det_analysis.m"
      }
#line 169 "det_analysis.m"
    {
#line 169 "det_analysis.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% Doing determinism checking...\n");
    }
#line 253 "det_analysis.m"
    {
#line 253 "det_analysis.m"
      check_hlds__det_analysis__global_inference_single_pass_8_p_0(check_hlds__det_analysis__DeclaredProcs_7, check_hlds__det_analysis__Debug_12, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_27_27, &check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_62, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_analysis__STATE_VARIABLE_Specs_18_64, (MR_Integer) 1, &check_hlds__det_analysis__V_61_61);
    }
#line 255 "det_analysis.m"
    {
#line 255 "det_analysis.m"
      check_hlds__det_analysis__V_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__det_analysis__UndeclaredProcs_8, check_hlds__det_analysis__DeclaredProcs_7);
    }
#line 255 "det_analysis.m"
    {
#line 255 "det_analysis.m"
      check_hlds__det_report__global_checking_pass_5_p_0(check_hlds__det_analysis__V_66_66, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_16_62, check_hlds__det_analysis__STATE_VARIABLE_ModuleInfo_19, check_hlds__det_analysis__STATE_VARIABLE_Specs_18_64, &check_hlds__det_analysis__FinalSpecs_17);
    }
#line 173 "det_analysis.m"
    {
#line 173 "det_analysis.m"
      *check_hlds__det_analysis__Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__det_analysis__InferenceSpecs_13, check_hlds__det_analysis__FinalSpecs_17);
    }
#line 175 "det_analysis.m"
    {
#line 175 "det_analysis.m"
      libs__file_util__maybe_write_string_4_p_0(check_hlds__det_analysis__Verbose_11, (MR_String) "% done.\n");
#line 175 "det_analysis.m"
      return;
    }
#line 145 "det_analysis.m"
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
