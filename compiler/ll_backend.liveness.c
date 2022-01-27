/*
** Automatically generated from `liveness.m'
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


/* :- module ll_backend.liveness. */
/* :- implementation. */

/*
INIT mercury__ll_backend__liveness__init
ENDINIT
*/

#include "ll_backend.liveness.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 154 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "ll_backend.liveness.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "ll_backend.liveness.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "ll_backend.liveness.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "ll_backend.liveness.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 181 "ll_backend.liveness.c"
static const MR_PseudoTypeInfo ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0[5];

#line 184 "ll_backend.liveness.c"
static const MR_ConstString ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0[5];

#line 187 "ll_backend.liveness.c"
static const MR_DuFunctorDesc ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0;

#line 190 "ll_backend.liveness.c"
static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0[1];

#line 193 "ll_backend.liveness.c"
static const MR_DuPtagLayout ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0[1];

#line 196 "ll_backend.liveness.c"
static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0[1];

#line 199 "ll_backend.liveness.c"
static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0[1];

#line 202 "ll_backend.liveness.c"
static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0_10001(
#line 205 "ll_backend.liveness.c"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 207 "ll_backend.liveness.c"
  MR_Box ll_backend__liveness__wrapper_arg_2);

#line 210 "ll_backend.liveness.c"
static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0_10001(
#line 213 "ll_backend.liveness.c"
  MR_Box * ll_backend__liveness__wrapper_arg_1,
#line 215 "ll_backend.liveness.c"
  MR_Box ll_backend__liveness__wrapper_arg_2,
#line 217 "ll_backend.liveness.c"
  MR_Box ll_backend__liveness__wrapper_arg_3);

#line 1872 "liveness.m"
static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0(
#line 1872 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__1_1,
#line 1872 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2,
#line 1872 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3);

#line 1872 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0(
#line 1872 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1872 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2);

#line 1862 "liveness.m"
static void MR_CALL 
ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(
#line 1862 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_4,
#line 1862 "liveness.m"
  MR_Word ll_backend__liveness__Vars0_5,
#line 1862 "liveness.m"
  MR_Word * ll_backend__liveness__Vars_6);

#line 1854 "liveness.m"
static void MR_CALL 
ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(
#line 1854 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1854 "liveness.m"
  MR_Word ll_backend__liveness__GoalInfo_6,
#line 1854 "liveness.m"
  MR_Word * ll_backend__liveness__NonLocals_7,
#line 1854 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNonLocals_8);

#line 1830 "liveness.m"
static void MR_CALL 
ll_backend__liveness__find_value_giving_occurrences_5_p_0(
#line 1830 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1830 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_2,
#line 1830 "liveness.m"
  MR_Word ll_backend__liveness__InstMapDelta_3,
#line 1830 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4,
#line 1830 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ValueVars_5);

#line 1799 "liveness.m"
static void MR_CALL 
ll_backend__liveness__add_liveness_after_goal_3_p_0(
#line 1799 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_4,
#line 1799 "liveness.m"
  MR_Word ll_backend__liveness__Residue_5,
#line 1799 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_6);

#line 1782 "liveness.m"
static void MR_CALL 
ll_backend__liveness__initial_deadness_4_p_0(
#line 1782 "liveness.m"
  MR_Word ll_backend__liveness__ProcInfo_5,
#line 1782 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_6,
#line 1782 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_7,
#line 1782 "liveness.m"
  MR_Word * ll_backend__liveness__Deadness_8);

#line 1764 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__initial_liveness_2_6_p_0(
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2,
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_5,
#line 1764 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_6);

#line 1716 "liveness.m"
static void MR_CALL 
ll_backend__liveness__require_equal_4_p_0(
#line 1716 "liveness.m"
  MR_Word ll_backend__liveness__LivenessFirst_5,
#line 1716 "liveness.m"
  MR_Word ll_backend__liveness__LivenessRest_6,
#line 1716 "liveness.m"
  MR_String ll_backend__liveness__GoalType_7,
#line 1716 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_8);

#line 1704 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(
#line 1704 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1704 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1704 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1704 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__4_4,
#line 1704 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1704 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6);

#line 1683 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_cases_6_p_0(
#line 1683 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1683 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1683 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1683 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__4_4,
#line 1683 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1683 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6);

#line 1670 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_last_disjunct_7_p_0(
#line 1670 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_8,
#line 1670 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_9,
#line 1670 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_10,
#line 1670 "liveness.m"
  MR_Word * ll_backend__liveness__Liveness_11,
#line 1670 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_12,
#line 1670 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_13,
#line 1670 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNeeded_14);

#line 1626 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_p_0(
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_11,
#line 1626 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_12,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__MayUseOrigOnly_13,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_14,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__LivenessRest_15,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_16,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_17,
#line 1626 "liveness.m"
  MR_Word * ll_backend__liveness__Liveness_18,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__NeededRest_19,
#line 1626 "liveness.m"
  MR_Word * ll_backend__liveness__Needed_20);

#line 1595 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(
#line 1595 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1595 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1595 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1595 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__4_4,
#line 1595 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1595 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6,
#line 1595 "liveness.m"
  MR_Word * ll_backend__liveness__Needed_7);

#line 1570 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(
#line 1570 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1570 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1570 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_3,
#line 1570 "liveness.m"
  MR_Word * ll_backend__liveness__Liveness_4,
#line 1570 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1570 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6,
#line 1570 "liveness.m"
  MR_Word * ll_backend__liveness__Needed_7);

#line 1544 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_conj_6_p_0(
#line 1544 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1544 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1544 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
#line 1544 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4,
#line 1544 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1544 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6);

#line 1380 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_goal_6_p_0(
#line 1380 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_7,
#line 1380 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_8,
#line 1380 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_85,
#line 1380 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_86,
#line 1380 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_10,
#line 1380 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_11);

#line 1364 "liveness.m"
static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(
#line 1364 "liveness.m"
  MR_Word ll_backend__liveness__FinalDelayedDead_4,
#line 1364 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2);

#line 1353 "liveness.m"
static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(
#line 1353 "liveness.m"
  MR_Word ll_backend__liveness__FinalDelayedDead_4,
#line 1353 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2);

#line 1325 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_cases_6_p_0(
#line 1325 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1325 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1325 "liveness.m"
  MR_Word ll_backend__liveness__BornVars0_3,
#line 1325 "liveness.m"
  MR_Word ll_backend__liveness__DelayedDead0_4,
#line 1325 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_5,
#line 1325 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__6_6);

#line 1303 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_disj_6_p_0(
#line 1303 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1303 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1303 "liveness.m"
  MR_Word ll_backend__liveness__BornVars0_3,
#line 1303 "liveness.m"
  MR_Word ll_backend__liveness__DelayedDead0_4,
#line 1303 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_5,
#line 1303 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__6_6);

#line 1289 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_par_conj_7_p_0(
#line 1289 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1289 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1289 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1289 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__4_4,
#line 1289 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 1289 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__6_6,
#line 1289 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_7);

#line 1279 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_conj_7_p_0(
#line 1279 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1279 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1279 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_3,
#line 1279 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_4,
#line 1279 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_5,
#line 1279 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_6,
#line 1279 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_7);

#line 1232 "liveness.m"
static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_2(
#line 1232 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 1232 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1);

#line 1218 "liveness.m"
static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_1(
#line 1218 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 1218 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1);

#line 1187 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0(
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72,
#line 1187 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_GoalExpr_73,
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_GoalInfo_0_74,
#line 1187 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_GoalInfo_75,
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_76,
#line 1187 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_77,
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78,
#line 1187 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_79,
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_14);

#line 1182 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__var_is_named_2_p_0(
#line 1182 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_3,
#line 1182 "liveness.m"
  MR_Word ll_backend__liveness__Var_4);

#line 1161 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_1(
#line 1161 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 1161 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1);

#line 1150 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0(
#line 1150 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_8,
#line 1150 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_9,
#line 1150 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_30,
#line 1150 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_31,
#line 1150 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_32,
#line 1150 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_33,
#line 1150 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_12);

#line 1138 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_proc_body_4_p_0(
#line 1138 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_5,
#line 1138 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_6,
#line 1138 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_7,
#line 1138 "liveness.m"
  MR_Word ll_backend__liveness__BornVars0_8);

#line 1106 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_case_2_p_0(
#line 1106 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1106 "liveness.m"
  MR_Word * ll_backend__liveness__ReachableGoal_7);

#line 1095 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_goal_2_p_0(
#line 1095 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1095 "liveness.m"
  MR_Word * ll_backend__liveness__ReachableGoal_5);

#line 1087 "liveness.m"
static void MR_CALL 
ll_backend__liveness__update_liveness_conj_4_p_0(
#line 1087 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1087 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_2,
#line 1087 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
#line 1087 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4);

#line 1019 "liveness.m"
static void MR_CALL 
ll_backend__liveness__update_liveness_expr_4_p_0(
#line 1019 "liveness.m"
  MR_Word ll_backend__liveness__GoalExpr_5,
#line 1019 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_6,
#line 1019 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_55,
#line 1019 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_56);

#line 997 "liveness.m"
static void MR_CALL 
ll_backend__liveness__update_liveness_goal_4_p_0(
#line 997 "liveness.m"
  MR_Word ll_backend__liveness__Goal_5,
#line 997 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_6,
#line 997 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_20,
#line 997 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_21);

#line 980 "liveness.m"
static void MR_CALL 
ll_backend__liveness__add_branch_pre_deaths_6_p_0(
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__DeadnessGoal_7,
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__Deadness0_8,
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__CompletedNonLocalUnion_9,
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__InstmapReachable_10,
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Goal_0_14,
#line 980 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Goal_15);

#line 967 "liveness.m"
static void MR_CALL 
ll_backend__liveness__union_branch_deadness_5_p_0(
#line 967 "liveness.m"
  MR_Word ll_backend__liveness__DeadnessGoal_6,
#line 967 "liveness.m"
  MR_Word ll_backend__liveness__Deadness0_7,
#line 967 "liveness.m"
  MR_Word ll_backend__liveness__InstmapReachable_8,
#line 967 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_11,
#line 967 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_12);

#line 909 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 909 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__CompletedNonLocals_5,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__6_6,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_7,
#line 909 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_8,
#line 909 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_9);

#line 874 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_cases_10_p_0(
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__SwitchVar_1,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2,
#line 874 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__3_3,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__CompletedNonLocals_6,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_7,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_8,
#line 874 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_9,
#line 874 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_10);

#line 847 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_disj_9_p_0(
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 847 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__CompletedNonLocals_5,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__6_6,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_7,
#line 847 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_8,
#line 847 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_9);

#line 826 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_conj_6_p_0(
#line 826 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 826 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 826 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_0_3,
#line 826 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Deadness_4,
#line 826 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_5,
#line 826 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__6_6);

#line 646 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_goal_6_p_0(
#line 646 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_7,
#line 646 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_8,
#line 646 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_0_105,
#line 646 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Deadness_106,
#line 646 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_107,
#line 646 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_11);

#line 625 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 625 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
#line 625 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7);

#line 593 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_p_0(
#line 593 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 593 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 593 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_0_3,
#line 593 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_4);

#line 564 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_construct_6_p_0(
#line 564 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_7,
#line 564 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_8,
#line 564 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_25,
#line 564 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_26,
#line 564 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_10,
#line 564 "liveness.m"
  MR_Word ll_backend__liveness__TermVar_11);

#line 545 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_cases_7_p_0(
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 545 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
#line 545 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7);

#line 528 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_disj_7_p_0(
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 528 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
#line 528 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7);

#line 504 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_conj_5_p_0(
#line 504 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 504 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 504 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
#line 504 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4,
#line 504 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5);

#line 370 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_goal_5_p_0(
#line 370 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_6,
#line 370 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_7,
#line 370 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_8,
#line 370 "liveness.m"
  MR_Word * ll_backend__liveness__FinalLiveness_9,
#line 370 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_10);

#line 352 "liveness.m"
static void MR_CALL 
ll_backend__liveness__maybe_debug_liveness_8_p_0(
#line 352 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_9,
#line 352 "liveness.m"
  MR_String ll_backend__liveness__Message_10,
#line 352 "liveness.m"
  MR_Integer ll_backend__liveness__DebugLiveness_11,
#line 352 "liveness.m"
  MR_Integer ll_backend__liveness__PredIdInt_12,
#line 352 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_13,
#line 352 "liveness.m"
  MR_Word ll_backend__liveness__Goal_14);

#line 268 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_proc_2_4_p_0(
#line 268 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_5,
#line 268 "liveness.m"
  MR_Word ll_backend__liveness__PredId_6,
#line 268 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_36,
#line 268 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ProcInfo_37);

#line 255 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_proc_5_p_0(
#line 255 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_6,
#line 255 "liveness.m"
  MR_Word ll_backend__liveness__PredId_7,
#line 255 "liveness.m"
  MR_Integer ll_backend__liveness__ProcId_8,
#line 255 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_PredInfo_0_12,
#line 255 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_PredInfo_13);

#line 252 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0_1(
#line 252 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 252 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 252 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_2,
#line 252 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_3);

#line 246 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0(
#line 246 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_4,
#line 246 "liveness.m"
  MR_Word ll_backend__liveness__PredId_5,
#line 246 "liveness.m"
  MR_Word * ll_backend__liveness__PredInfo_6);

#line 243 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4(
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_2,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_3,
#line 243 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_4);

#line 242 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3(
#line 242 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 242 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 242 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_2);

#line 243 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2(
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_2,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_3,
#line 243 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_4);

#line 242 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1(
#line 242 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 242 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 242 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_2);

#line 225 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(
#line 225 "liveness.m"
  MR_Word ll_backend__liveness__PredIds_5,
#line 225 "liveness.m"
  MR_Word ll_backend__liveness__HLDS0_6,
#line 225 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_0_10,
#line 225 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_HLDS_11);


static /* final */ const MR_Box ll_backend__liveness_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_3[3][6];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_4[1][7];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_5[1][8];

static /* final */ const MR_Box ll_backend__liveness_scalar_common_6[1][5];




static /* final */ const MR_Box ll_backend__liveness_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&ll_backend__liveness_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__liveness_scalar_common_4[0])),
    ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__liveness_scalar_common_4[0])),
    ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__liveness__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__liveness__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box ll_backend__liveness_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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



#line 1196 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1204 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1212 "ll_backend.liveness.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1220 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__liveness__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1228 "ll_backend.liveness.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1236 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &ll_backend__liveness__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1245 "ll_backend.liveness.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__liveness__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_case_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0,
    (MR_PseudoTypeInfo) &ll_backend__liveness__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1254 "ll_backend.liveness.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1262 "ll_backend.liveness.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__liveness__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1271 "ll_backend.liveness.c"
static const MR_PseudoTypeInfo ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__liveness__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__liveness__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0
};

#line 1280 "ll_backend.liveness.c"
static const MR_ConstString ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0[5] = {
  (MR_String) "li_module_info",
  (MR_String) "li_typeinfo_liveness",
  (MR_String) "li_varset",
  (MR_String) "li_vartypes",
  (MR_String) "li_rtti_varmaps"
};

#line 1289 "ll_backend.liveness.c"
static const MR_DuFunctorDesc ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0 = {
  (MR_String) "live_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__liveness__ll_backend__liveness__field_types_live_info_0_0,
  ll_backend__liveness__ll_backend__liveness__field_names_live_info_0_0,
  NULL,
  NULL
};

#line 1304 "ll_backend.liveness.c"
static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0[1] = {
  &ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0
};

#line 1309 "ll_backend.liveness.c"
static const MR_DuPtagLayout ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__liveness__ll_backend__liveness__du_stag_ordered_live_info_0_0
  }
};

#line 1318 "ll_backend.liveness.c"
static const MR_DuFunctorDescPtr ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0[1] = {
  &ll_backend__liveness__ll_backend__liveness__du_functor_desc_live_info_0_0
};

#line 1323 "ll_backend.liveness.c"
static const MR_Integer ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0[1] = {
  (MR_Integer) 0
};

#line 1328 "ll_backend.liveness.c"
const MR_TypeCtorInfo_Struct ll_backend__liveness__ll_backend__liveness__type_ctor_info_live_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__liveness____Unify____live_info_0_0_10001)),
  ((MR_Box) (ll_backend__liveness____Compare____live_info_0_0_10001)),
  (MR_String) "ll_backend.liveness",
  (MR_String) "live_info",
  {
    ll_backend__liveness__ll_backend__liveness__du_name_ordered_live_info_0
  },
  {
    ll_backend__liveness__ll_backend__liveness__du_ptag_ordered_live_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__liveness__ll_backend__liveness__functor_number_map_live_info_0
};

#line 1349 "ll_backend.liveness.c"
static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0_10001(
#line 1352 "ll_backend.liveness.c"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 1354 "ll_backend.liveness.c"
  MR_Box ll_backend__liveness__wrapper_arg_2)
#line 1356 "ll_backend.liveness.c"
{
#line 1358 "ll_backend.liveness.c"
  {
#line 1360 "ll_backend.liveness.c"
    MR_bool ll_backend__liveness__succeeded;

#line 1363 "ll_backend.liveness.c"
    {
#line 1365 "ll_backend.liveness.c"
      ll_backend__liveness__succeeded = ll_backend__liveness____Unify____live_info_0_0(((MR_Word) ll_backend__liveness__wrapper_arg_1), ((MR_Word) ll_backend__liveness__wrapper_arg_2));
    }
#line 1368 "ll_backend.liveness.c"
    return ll_backend__liveness__succeeded;
#line 1370 "ll_backend.liveness.c"
  }
#line 1372 "ll_backend.liveness.c"
}

#line 1375 "ll_backend.liveness.c"
static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0_10001(
#line 1378 "ll_backend.liveness.c"
  MR_Box * ll_backend__liveness__wrapper_arg_1,
#line 1380 "ll_backend.liveness.c"
  MR_Box ll_backend__liveness__wrapper_arg_2,
#line 1382 "ll_backend.liveness.c"
  MR_Box ll_backend__liveness__wrapper_arg_3)
#line 1384 "ll_backend.liveness.c"
{
#line 1386 "ll_backend.liveness.c"
  {
#line 1388 "ll_backend.liveness.c"
    MR_Word ll_backend__liveness__conv0_HeadVar__1_1;

#line 1391 "ll_backend.liveness.c"
    {
#line 1393 "ll_backend.liveness.c"
      ll_backend__liveness____Compare____live_info_0_0(&ll_backend__liveness__conv0_HeadVar__1_1, ((MR_Word) ll_backend__liveness__wrapper_arg_2), ((MR_Word) ll_backend__liveness__wrapper_arg_3));
    }
#line 1396 "ll_backend.liveness.c"
    *ll_backend__liveness__wrapper_arg_1 = ((MR_Box) (ll_backend__liveness__conv0_HeadVar__1_1));
#line 1398 "ll_backend.liveness.c"
  }
#line 1400 "ll_backend.liveness.c"
}

#line 1872 "liveness.m"
static void MR_CALL 
ll_backend__liveness____Compare____live_info_0_0(
#line 1872 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__1_1,
#line 1872 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2,
#line 1872 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3)
#line 1872 "liveness.m"
{
#line 1872 "liveness.m"
  {
#line 1872 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1872 "liveness.m"
    MR_Integer ll_backend__liveness__CastX_18 = (MR_Integer) ll_backend__liveness__HeadVar__2_2;
#line 1872 "liveness.m"
    MR_Integer ll_backend__liveness__CastY_19 = (MR_Integer) ll_backend__liveness__HeadVar__3_3;

#line 1872 "liveness.m"
    ll_backend__liveness__succeeded = (ll_backend__liveness__CastX_18 == ll_backend__liveness__CastY_19);
#line 1872 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 1427 "ll_backend.liveness.c"
      *ll_backend__liveness__HeadVar__1_1 = (MR_Integer) 0;
#line 1872 "liveness.m"
    else
#line 1872 "liveness.m"
      {
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 2)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 3)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 4)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 0)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 1)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 2)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 3)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 4)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_14_14;

#line 1872 "liveness.m"
        {
#line 1872 "liveness.m"
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__liveness__V_14_14, ll_backend__liveness__V_4_4, ll_backend__liveness__V_9_9);
        }
#line 1461 "ll_backend.liveness.c"
        ll_backend__liveness__succeeded = (ll_backend__liveness__V_14_14 == (MR_Integer) 0);
#line 1872 "liveness.m"
        ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
#line 1872 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 1872 "liveness.m"
          *ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__V_14_14;
#line 1872 "liveness.m"
        else
#line 1872 "liveness.m"
          {
#line 1872 "liveness.m"
            MR_Word ll_backend__liveness__V_15_15;
#line 1872 "liveness.m"
            MR_Integer ll_backend__liveness__V_25_25 = (MR_Integer) ll_backend__liveness__V_5_5;
#line 1872 "liveness.m"
            MR_Integer ll_backend__liveness__V_26_26 = (MR_Integer) ll_backend__liveness__V_10_10;

#line 1872 "liveness.m"
            {
#line 1872 "liveness.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__liveness__V_15_15, ll_backend__liveness__V_25_25, ll_backend__liveness__V_26_26);
            }
#line 1485 "ll_backend.liveness.c"
            ll_backend__liveness__succeeded = (ll_backend__liveness__V_15_15 == (MR_Integer) 0);
#line 1872 "liveness.m"
            ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
#line 1872 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1872 "liveness.m"
              *ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__V_15_15;
#line 1872 "liveness.m"
            else
#line 1872 "liveness.m"
              {
#line 1872 "liveness.m"
                MR_Word ll_backend__liveness__V_16_16;

#line 1872 "liveness.m"
                {
#line 1872 "liveness.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__liveness_scalar_common_1[1], &ll_backend__liveness__V_16_16, ((MR_Box) (ll_backend__liveness__V_6_6)), ((MR_Box) (ll_backend__liveness__V_11_11)));
                }
#line 1505 "ll_backend.liveness.c"
                ll_backend__liveness__succeeded = (ll_backend__liveness__V_16_16 == (MR_Integer) 0);
#line 1872 "liveness.m"
                ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
#line 1872 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 1872 "liveness.m"
                  *ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__V_16_16;
#line 1872 "liveness.m"
                else
#line 1872 "liveness.m"
                  {
#line 1872 "liveness.m"
                    MR_Word ll_backend__liveness__V_17_17;

#line 1872 "liveness.m"
                    {
#line 1872 "liveness.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &ll_backend__liveness__V_17_17, ((MR_Box) (ll_backend__liveness__V_7_7)), ((MR_Box) (ll_backend__liveness__V_12_12)));
                    }
#line 1525 "ll_backend.liveness.c"
                    ll_backend__liveness__succeeded = (ll_backend__liveness__V_17_17 == (MR_Integer) 0);
#line 1872 "liveness.m"
                    ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
#line 1872 "liveness.m"
                    if (ll_backend__liveness__succeeded)
#line 1872 "liveness.m"
                      *ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__V_17_17;
#line 1872 "liveness.m"
                    else
#line 1872 "liveness.m"
                      {
#line 1872 "liveness.m"
                        hlds__hlds_rtti____Compare____rtti_varmaps_0_0(ll_backend__liveness__HeadVar__1_1, ll_backend__liveness__V_8_8, ll_backend__liveness__V_13_13);
#line 1872 "liveness.m"
                        return;
                      }
#line 1872 "liveness.m"
                  }
#line 1872 "liveness.m"
              }
#line 1872 "liveness.m"
          }
#line 1872 "liveness.m"
      }
#line 1872 "liveness.m"
  }
#line 1872 "liveness.m"
}

#line 1872 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness____Unify____live_info_0_0(
#line 1872 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1872 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2)
#line 1872 "liveness.m"
{
#line 1872 "liveness.m"
  {
#line 1872 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1872 "liveness.m"
    MR_Integer ll_backend__liveness__CastX_13 = (MR_Integer) ll_backend__liveness__HeadVar__1_1;
#line 1872 "liveness.m"
    MR_Integer ll_backend__liveness__CastY_14 = (MR_Integer) ll_backend__liveness__HeadVar__2_2;

#line 1872 "liveness.m"
    ll_backend__liveness__succeeded = (ll_backend__liveness__CastX_13 == ll_backend__liveness__CastY_14);
#line 1872 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 1872 "liveness.m"
      ll_backend__liveness__succeeded = MR_TRUE;
#line 1872 "liveness.m"
    else
#line 1872 "liveness.m"
      {
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__TypeInfo_16_16;
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_17_17;
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 2)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 3)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 4)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 2)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 3)));
#line 1872 "liveness.m"
        MR_Word ll_backend__liveness__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 4)));

#line 1608 "ll_backend.liveness.c"
        {
#line 1610 "ll_backend.liveness.c"
          ll_backend__liveness__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__liveness__V_3_3, ll_backend__liveness__V_8_8);
        }
#line 1872 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 1872 "liveness.m"
          {
#line 1617 "ll_backend.liveness.c"
            ll_backend__liveness__succeeded = (ll_backend__liveness__V_4_4 == ll_backend__liveness__V_9_9);
#line 1872 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1872 "liveness.m"
              {
#line 1623 "ll_backend.liveness.c"
                ll_backend__liveness__TypeInfo_16_16 = (MR_Word) &ll_backend__liveness_scalar_common_1[1];
#line 1625 "ll_backend.liveness.c"
                {
#line 1627 "ll_backend.liveness.c"
                  ll_backend__liveness__succeeded = mercury__builtin__unify_2_p_0(ll_backend__liveness__TypeInfo_16_16, ((MR_Box) (ll_backend__liveness__V_5_5)), ((MR_Box) (ll_backend__liveness__V_10_10)));
                }
#line 1872 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 1872 "liveness.m"
                  {
#line 1634 "ll_backend.liveness.c"
                    ll_backend__liveness__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1636 "ll_backend.liveness.c"
                    {
#line 1638 "ll_backend.liveness.c"
                      ll_backend__liveness__succeeded = mercury__builtin__unify_2_p_0(ll_backend__liveness__TypeCtorInfo_17_17, ((MR_Box) (ll_backend__liveness__V_6_6)), ((MR_Box) (ll_backend__liveness__V_11_11)));
                    }
#line 1872 "liveness.m"
                    if (ll_backend__liveness__succeeded)
#line 1643 "ll_backend.liveness.c"
                      {
#line 1645 "ll_backend.liveness.c"
                        return ll_backend__liveness__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ll_backend__liveness__V_7_7, ll_backend__liveness__V_12_12);
                      }
#line 1872 "liveness.m"
                  }
#line 1872 "liveness.m"
              }
#line 1872 "liveness.m"
          }
#line 1872 "liveness.m"
      }
#line 1872 "liveness.m"
    return ll_backend__liveness__succeeded;
#line 1872 "liveness.m"
  }
#line 1872 "liveness.m"
}

#line 1862 "liveness.m"
static void MR_CALL 
ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(
#line 1862 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_4,
#line 1862 "liveness.m"
  MR_Word ll_backend__liveness__Vars0_5,
#line 1862 "liveness.m"
  MR_Word * ll_backend__liveness__Vars_6)
#line 1862 "liveness.m"
{
#line 1865 "liveness.m"
  {
#line 1865 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1865 "liveness.m"
    MR_Word ll_backend__liveness__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 1)));
#line 1865 "liveness.m"
    MR_Word ll_backend__liveness__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 3)));
#line 1865 "liveness.m"
    MR_Word ll_backend__liveness__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 4)));
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 0)));
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_4, (MR_Integer) 2)));

#line 1866 "liveness.m"
    {
#line 1866 "liveness.m"
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__Vars0_5, ll_backend__liveness__V_7_7, ll_backend__liveness__V_12_12, ll_backend__liveness__V_13_13, ll_backend__liveness__Vars_6);
#line 1866 "liveness.m"
      return;
    }
#line 1865 "liveness.m"
  }
#line 1862 "liveness.m"
}

#line 1854 "liveness.m"
static void MR_CALL 
ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(
#line 1854 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1854 "liveness.m"
  MR_Word ll_backend__liveness__GoalInfo_6,
#line 1854 "liveness.m"
  MR_Word * ll_backend__liveness__NonLocals_7,
#line 1854 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNonLocals_8)
#line 1854 "liveness.m"
{
#line 1858 "liveness.m"
  {
#line 1858 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1858 "liveness.m"
    MR_Word ll_backend__liveness__V_12_12;
#line 1858 "liveness.m"
    MR_Word ll_backend__liveness__V_17_17;
#line 1858 "liveness.m"
    MR_Word ll_backend__liveness__V_18_18;
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_15_15;
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_16_16;

#line 1859 "liveness.m"
    {
#line 1859 "liveness.m"
      *ll_backend__liveness__NonLocals_7 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__liveness__GoalInfo_6);
    }
#line 1866 "liveness.m"
    ll_backend__liveness__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 0)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 1)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 2)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 3)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 4)));
#line 1866 "liveness.m"
    {
#line 1866 "liveness.m"
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(*ll_backend__liveness__NonLocals_7, ll_backend__liveness__V_12_12, ll_backend__liveness__V_17_17, ll_backend__liveness__V_18_18, ll_backend__liveness__CompletedNonLocals_8);
#line 1866 "liveness.m"
      return;
    }
#line 1858 "liveness.m"
  }
#line 1854 "liveness.m"
}

#line 1830 "liveness.m"
static void MR_CALL 
ll_backend__liveness__find_value_giving_occurrences_5_p_0(
#line 1830 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1830 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_2,
#line 1830 "liveness.m"
  MR_Word ll_backend__liveness__InstMapDelta_3,
#line 1830 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4,
#line 1830 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ValueVars_5)
#line 1830 "liveness.m"
{
#line 1833 "liveness.m"
  while (MR_TRUE)
#line 1833 "liveness.m"
    {
#line 1833 "liveness.m"
      /* tailcall optimized into a loop */
#line 1833 "liveness.m"
      {
#line 1833 "liveness.m"
        MR_bool ll_backend__liveness__succeeded;

#line 1833 "liveness.m"
        if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1833 "liveness.m"
          *ll_backend__liveness__STATE_VARIABLE_ValueVars_5 = ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4;
#line 1833 "liveness.m"
        else
#line 1835 "liveness.m"
          {
#line 1835 "liveness.m"
            MR_Word ll_backend__liveness__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1835 "liveness.m"
            MR_Word ll_backend__liveness__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1835 "liveness.m"
            MR_Word ll_backend__liveness__VarTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 3)));
#line 1835 "liveness.m"
            MR_Word ll_backend__liveness__Type_17;
#line 1835 "liveness.m"
            MR_Word ll_backend__liveness__STATE_VARIABLE_ValueVars_25_25;
#line 1836 "liveness.m"
            MR_Word ll_backend__liveness__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 0)));
#line 1836 "liveness.m"
            MR_Word ll_backend__liveness__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 1)));
#line 1836 "liveness.m"
            MR_Word ll_backend__liveness__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 2)));
#line 1836 "liveness.m"
            MR_Word ll_backend__liveness__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 4)));
#line 1839 "liveness.m"
            MR_Word ll_backend__liveness__Inst_18;
#line 1839 "liveness.m"
            MR_Word ll_backend__liveness__ModuleInfo_19;
#line 1839 "liveness.m"
            MR_Word ll_backend__liveness__V_22_22;
#line 1839 "liveness.m"
            MR_Word ll_backend__liveness__V_23_23;
#line 1839 "liveness.m"
            MR_Word ll_backend__liveness__V_24_24;
#line 1839 "liveness.m"
            MR_Word ll_backend__liveness__V_36_36;
#line 1840 "liveness.m"
            MR_Word ll_backend__liveness__V_31_31;
#line 1840 "liveness.m"
            MR_Word ll_backend__liveness__V_32_32;
#line 1840 "liveness.m"
            MR_Word ll_backend__liveness__V_33_33;
#line 1840 "liveness.m"
            MR_Word ll_backend__liveness__V_34_34;

#line 1837 "liveness.m"
            {
#line 1837 "liveness.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__liveness__VarTypes_16, ll_backend__liveness__Var_11, &ll_backend__liveness__Type_17);
            }
#line 1839 "liveness.m"
            {
#line 1839 "liveness.m"
              ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(ll_backend__liveness__InstMapDelta_3, ll_backend__liveness__Var_11, &ll_backend__liveness__Inst_18);
            }
#line 1839 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1839 "liveness.m"
              {
#line 1840 "liveness.m"
                ll_backend__liveness__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 0)));
#line 1840 "liveness.m"
                ll_backend__liveness__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 1)));
#line 1840 "liveness.m"
                ll_backend__liveness__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 2)));
#line 1840 "liveness.m"
                ll_backend__liveness__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 3)));
#line 1840 "liveness.m"
                ll_backend__liveness__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_2, (MR_Integer) 4)));
#line 1841 "liveness.m"
                ll_backend__liveness__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1841 "liveness.m"
                ll_backend__liveness__V_23_23 = (MR_Integer) 1;
#line 1841 "liveness.m"
                {
#line 1841 "liveness.m"
                  ll_backend__liveness__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1841 "liveness.m"
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__V_22_22, 0) = ((MR_Box) (ll_backend__liveness__V_24_24));
#line 1841 "liveness.m"
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__V_22_22, 1) = ((MR_Box) (ll_backend__liveness__Inst_18));
#line 1841 "liveness.m"
                }
#line 1841 "liveness.m"
                {
#line 1841 "liveness.m"
                  check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__liveness__ModuleInfo_19, ll_backend__liveness__V_22_22, ll_backend__liveness__Type_17, &ll_backend__liveness__V_36_36);
                }
#line 1841 "liveness.m"
                ll_backend__liveness__succeeded = (ll_backend__liveness__V_23_23 == ll_backend__liveness__V_36_36);
#line 1839 "liveness.m"
              }
#line 1844 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1843 "liveness.m"
              {
#line 1843 "liveness.m"
                {
#line 1843 "liveness.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Var_11, ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4, &ll_backend__liveness__STATE_VARIABLE_ValueVars_25_25);
                }
#line 1843 "liveness.m"
              }
#line 1844 "liveness.m"
            else
#line 1843 "liveness.m"
              ll_backend__liveness__STATE_VARIABLE_ValueVars_25_25 = ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4;
#line 1847 "liveness.m"
            /* direct tailcall eliminated */
#line 1847 "liveness.m"
            {
#line 1847 "liveness.m"
              MR_Word ll_backend__liveness__HeadVar__1__tmp_copy_1 = ll_backend__liveness__Vars_12;
#line 1847 "liveness.m"
              MR_Word ll_backend__liveness__STATE_VARIABLE_ValueVars_0__tmp_copy_4 = ll_backend__liveness__STATE_VARIABLE_ValueVars_25_25;

#line 1847 "liveness.m"
              ll_backend__liveness__STATE_VARIABLE_ValueVars_0_4 = ll_backend__liveness__STATE_VARIABLE_ValueVars_0__tmp_copy_4;
#line 1847 "liveness.m"
              ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__HeadVar__1__tmp_copy_1;
#line 1847 "liveness.m"
            }
#line 1847 "liveness.m"
            continue;
#line 1835 "liveness.m"
          }
#line 1833 "liveness.m"
      }
#line 1833 "liveness.m"
      break;
#line 1833 "liveness.m"
    }
#line 1830 "liveness.m"
}

#line 1799 "liveness.m"
static void MR_CALL 
ll_backend__liveness__add_liveness_after_goal_3_p_0(
#line 1799 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_4,
#line 1799 "liveness.m"
  MR_Word ll_backend__liveness__Residue_5,
#line 1799 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_6)
#line 1799 "liveness.m"
{
#line 1802 "liveness.m"
  {
#line 1802 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1802 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_4, (MR_Integer) 0)));
#line 1802 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_4, (MR_Integer) 1)));
#line 1802 "liveness.m"
    MR_Word ll_backend__liveness__PostBirths0_9;
#line 1802 "liveness.m"
    MR_Word ll_backend__liveness__PostBirths_10;
#line 1802 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_11;

#line 1804 "liveness.m"
    {
#line 1804 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_8, &ll_backend__liveness__PostBirths0_9);
    }
#line 1805 "liveness.m"
    {
#line 1805 "liveness.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PostBirths0_9, ll_backend__liveness__Residue_5, &ll_backend__liveness__PostBirths_10);
    }
#line 1806 "liveness.m"
    {
#line 1806 "liveness.m"
      hlds__hlds_llds__goal_info_set_post_births_3_p_0(ll_backend__liveness__PostBirths_10, ll_backend__liveness__GoalInfo0_8, &ll_backend__liveness__GoalInfo_11);
    }
#line 1807 "liveness.m"
    {
#line 1807 "liveness.m"
      MR_Word base;
#line 1807 "liveness.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1807 "liveness.m"
      *ll_backend__liveness__Goal_6 = base;
#line 1807 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_7));
#line 1807 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_11));
#line 1807 "liveness.m"
    }
#line 1802 "liveness.m"
  }
#line 1799 "liveness.m"
}

#line 1782 "liveness.m"
static void MR_CALL 
ll_backend__liveness__initial_deadness_4_p_0(
#line 1782 "liveness.m"
  MR_Word ll_backend__liveness__ProcInfo_5,
#line 1782 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_6,
#line 1782 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_7,
#line 1782 "liveness.m"
  MR_Word * ll_backend__liveness__Deadness_8)
#line 1782 "liveness.m"
{
#line 1785 "liveness.m"
  {
#line 1785 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1785 "liveness.m"
    MR_Word ll_backend__liveness__Deadness0_10;
#line 1785 "liveness.m"
    MR_Word ll_backend__liveness__VarTypes_12;
#line 1785 "liveness.m"
    MR_Word ll_backend__liveness__RttiVarMaps_13;
#line 1785 "liveness.m"
    MR_Word ll_backend__liveness__V_14_14;
#line 1785 "liveness.m"
    MR_Word ll_backend__liveness__V_15_15;
#line 1787 "liveness.m"
    MR_Word ll_backend__liveness__V_9_9;
#line 1787 "liveness.m"
    MR_Word ll_backend__liveness__V_11_11;
#line 1793 "liveness.m"
    MR_Word ll_backend__liveness__V_16_16;
#line 1793 "liveness.m"
    MR_Word ll_backend__liveness__V_17_17;
#line 1793 "liveness.m"
    MR_Word ll_backend__liveness__V_18_18;
#line 1793 "liveness.m"
    MR_Word ll_backend__liveness__V_19_19;

#line 1787 "liveness.m"
    {
#line 1787 "liveness.m"
      hlds__arg_info__partition_proc_args_5_p_0(ll_backend__liveness__ProcInfo_5, ll_backend__liveness__ModuleInfo_7, &ll_backend__liveness__V_9_9, &ll_backend__liveness__Deadness0_10, &ll_backend__liveness__V_11_11);
    }
#line 1791 "liveness.m"
    {
#line 1791 "liveness.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__liveness__ProcInfo_5, &ll_backend__liveness__VarTypes_12);
    }
#line 1792 "liveness.m"
    {
#line 1792 "liveness.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__liveness__ProcInfo_5, &ll_backend__liveness__RttiVarMaps_13);
    }
#line 1793 "liveness.m"
    {
#line 1793 "liveness.m"
      ll_backend__liveness__V_14_14 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Deadness0_10);
    }
#line 1793 "liveness.m"
    ll_backend__liveness__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 0)));
#line 1793 "liveness.m"
    ll_backend__liveness__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 1)));
#line 1793 "liveness.m"
    ll_backend__liveness__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 2)));
#line 1793 "liveness.m"
    ll_backend__liveness__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 3)));
#line 1793 "liveness.m"
    ll_backend__liveness__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 4)));
#line 1793 "liveness.m"
    {
#line 1793 "liveness.m"
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__V_14_14, ll_backend__liveness__V_15_15, ll_backend__liveness__VarTypes_12, ll_backend__liveness__RttiVarMaps_13, ll_backend__liveness__Deadness_8);
#line 1793 "liveness.m"
      return;
    }
#line 1785 "liveness.m"
  }
#line 1782 "liveness.m"
}

#line 1764 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__initial_liveness_2_6_p_0(
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2,
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 1764 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_5,
#line 1764 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_6)
#line 1764 "liveness.m"
{
#line 1768 "liveness.m"
  while (MR_TRUE)
#line 1768 "liveness.m"
    {
#line 1768 "liveness.m"
      /* tailcall optimized into a loop */
#line 1768 "liveness.m"
      {
#line 1768 "liveness.m"
        MR_bool ll_backend__liveness__succeeded;

#line 1768 "liveness.m"
        if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1768 "liveness.m"
          {
#line 1768 "liveness.m"
            ll_backend__liveness__succeeded = (ll_backend__liveness__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1768 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1768 "liveness.m"
              {
#line 1768 "liveness.m"
                ll_backend__liveness__succeeded = (ll_backend__liveness__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1768 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 1768 "liveness.m"
                  {
#line 1768 "liveness.m"
                    *ll_backend__liveness__STATE_VARIABLE_Liveness_6 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_5;
#line 1768 "liveness.m"
                    ll_backend__liveness__succeeded = MR_TRUE;
#line 1768 "liveness.m"
                  }
#line 1768 "liveness.m"
              }
#line 1768 "liveness.m"
          }
#line 1768 "liveness.m"
        else
#line 1769 "liveness.m"
          {
#line 1769 "liveness.m"
            MR_Word ll_backend__liveness__V_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1769 "liveness.m"
            MR_Word ll_backend__liveness__Vs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1769 "liveness.m"
            MR_Word ll_backend__liveness__M_13;
#line 1769 "liveness.m"
            MR_Word ll_backend__liveness__Ms_14;
#line 1769 "liveness.m"
            MR_Word ll_backend__liveness__T_15;
#line 1769 "liveness.m"
            MR_Word ll_backend__liveness__Ts_16;
#line 1769 "liveness.m"
            MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;
#line 1770 "liveness.m"
            MR_Word ll_backend__liveness__V_21_21;
#line 1770 "liveness.m"
            MR_Word ll_backend__liveness__V_25_25;

#line 1769 "liveness.m"
            ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1769 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1769 "liveness.m"
              {
#line 1769 "liveness.m"
                ll_backend__liveness__M_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
#line 1769 "liveness.m"
                ll_backend__liveness__Ms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
#line 1769 "liveness.m"
                ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1769 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 1769 "liveness.m"
                  {
#line 1769 "liveness.m"
                    ll_backend__liveness__T_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 0)));
#line 1769 "liveness.m"
                    ll_backend__liveness__Ts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__3_3, (MR_Integer) 1)));
#line 1770 "liveness.m"
                    ll_backend__liveness__V_21_21 = (MR_Integer) 0;
#line 1770 "liveness.m"
                    {
#line 1770 "liveness.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__M_13, ll_backend__liveness__T_15, &ll_backend__liveness__V_25_25);
                    }
#line 1770 "liveness.m"
                    ll_backend__liveness__succeeded = (ll_backend__liveness__V_21_21 == ll_backend__liveness__V_25_25);
#line 1772 "liveness.m"
                    if (ll_backend__liveness__succeeded)
#line 1771 "liveness.m"
                      {
#line 1771 "liveness.m"
                        {
#line 1771 "liveness.m"
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__V_11, ll_backend__liveness__STATE_VARIABLE_Liveness_0_5, &ll_backend__liveness__STATE_VARIABLE_Liveness_22_22);
                        }
#line 1771 "liveness.m"
                      }
#line 1772 "liveness.m"
                    else
#line 1771 "liveness.m"
                      ll_backend__liveness__STATE_VARIABLE_Liveness_22_22 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_5;
#line 1775 "liveness.m"
                    {
#line 1775 "liveness.m"
                      /* direct tailcall eliminated */
#line 1775 "liveness.m"
                      {
#line 1775 "liveness.m"
                        MR_Word ll_backend__liveness__HeadVar__1__tmp_copy_1 = ll_backend__liveness__Vs_12;
#line 1775 "liveness.m"
                        MR_Word ll_backend__liveness__HeadVar__2__tmp_copy_2 = ll_backend__liveness__Ms_14;
#line 1775 "liveness.m"
                        MR_Word ll_backend__liveness__HeadVar__3__tmp_copy_3 = ll_backend__liveness__Ts_16;
#line 1775 "liveness.m"
                        MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0__tmp_copy_5 = ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;

#line 1775 "liveness.m"
                        ll_backend__liveness__STATE_VARIABLE_Liveness_0_5 = ll_backend__liveness__STATE_VARIABLE_Liveness_0__tmp_copy_5;
#line 1775 "liveness.m"
                        ll_backend__liveness__HeadVar__3_3 = ll_backend__liveness__HeadVar__3__tmp_copy_3;
#line 1775 "liveness.m"
                        ll_backend__liveness__HeadVar__2_2 = ll_backend__liveness__HeadVar__2__tmp_copy_2;
#line 1775 "liveness.m"
                        ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__HeadVar__1__tmp_copy_1;
#line 1775 "liveness.m"
                      }
#line 1775 "liveness.m"
                      continue;
#line 1775 "liveness.m"
                    }
#line 1769 "liveness.m"
                  }
#line 1769 "liveness.m"
              }
#line 1769 "liveness.m"
          }
#line 1768 "liveness.m"
        return ll_backend__liveness__succeeded;
#line 1768 "liveness.m"
      }
#line 1768 "liveness.m"
      break;
#line 1768 "liveness.m"
    }
#line 1764 "liveness.m"
}

#line 1716 "liveness.m"
static void MR_CALL 
ll_backend__liveness__require_equal_4_p_0(
#line 1716 "liveness.m"
  MR_Word ll_backend__liveness__LivenessFirst_5,
#line 1716 "liveness.m"
  MR_Word ll_backend__liveness__LivenessRest_6,
#line 1716 "liveness.m"
  MR_String ll_backend__liveness__GoalType_7,
#line 1716 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_8)
#line 1716 "liveness.m"
{
#line 1722 "liveness.m"
  {
#line 1722 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1720 "liveness.m"
    {
#line 1720 "liveness.m"
      ll_backend__liveness__succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__LivenessFirst_5, ll_backend__liveness__LivenessRest_6);
    }
#line 1722 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 1721 "liveness.m"
      {
#line 1721 "liveness.m"
      }
#line 1722 "liveness.m"
    else
#line 1723 "liveness.m"
      {
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 2)));
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__FirstVars_10;
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__RestVars_11;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__FirstNames_12;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__RestNames_13;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__Msg_14;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_18_18;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_19_19;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_21_21;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_23_23;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_24_24;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_26_26;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_28_28;
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 0)));
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 1)));
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 3)));
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_8, (MR_Integer) 4)));

#line 1724 "liveness.m"
        {
#line 1724 "liveness.m"
          ll_backend__liveness__FirstVars_10 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_37, ll_backend__liveness__LivenessFirst_5);
        }
#line 1725 "liveness.m"
        {
#line 1725 "liveness.m"
          ll_backend__liveness__RestVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_37, ll_backend__liveness__LivenessRest_6);
        }
#line 1726 "liveness.m"
        {
#line 1726 "liveness.m"
          ll_backend__liveness__FirstNames_12 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_37, ll_backend__liveness__VarSet_9, (MR_Integer) 1, ll_backend__liveness__FirstVars_10);
        }
#line 1727 "liveness.m"
        {
#line 1727 "liveness.m"
          ll_backend__liveness__RestNames_13 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_37, ll_backend__liveness__VarSet_9, (MR_Integer) 1, ll_backend__liveness__RestVars_11);
        }
#line 1729 "liveness.m"
        {
#line 1729 "liveness.m"
          ll_backend__liveness__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__RestNames_13, (MR_String) "\n");
        }
#line 1729 "liveness.m"
        {
#line 1729 "liveness.m"
          ll_backend__liveness__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "Rest:  ", ll_backend__liveness__V_28_28);
        }
#line 1729 "liveness.m"
        {
#line 1729 "liveness.m"
          ll_backend__liveness__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__liveness__V_26_26);
        }
#line 1729 "liveness.m"
        {
#line 1729 "liveness.m"
          ll_backend__liveness__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__FirstNames_12, ll_backend__liveness__V_24_24);
        }
#line 1728 "liveness.m"
        {
#line 1728 "liveness.m"
          ll_backend__liveness__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "First: ", ll_backend__liveness__V_23_23);
        }
#line 1728 "liveness.m"
        {
#line 1728 "liveness.m"
          ll_backend__liveness__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) " disagree on liveness\n", ll_backend__liveness__V_21_21);
        }
#line 1728 "liveness.m"
        {
#line 1728 "liveness.m"
          ll_backend__liveness__V_18_18 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__GoalType_7, ll_backend__liveness__V_19_19);
        }
#line 1728 "liveness.m"
        {
#line 1728 "liveness.m"
          ll_backend__liveness__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "branches of ", ll_backend__liveness__V_18_18);
        }
#line 1730 "liveness.m"
        {
#line 1730 "liveness.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.require_equal\'/4", ll_backend__liveness__Msg_14);
#line 1730 "liveness.m"
          return;
        }
#line 1723 "liveness.m"
      }
#line 1722 "liveness.m"
  }
#line 1716 "liveness.m"
}

#line 1704 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(
#line 1704 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1704 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1704 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1704 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__4_4,
#line 1704 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1704 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6)
#line 1704 "liveness.m"
{
#line 1708 "liveness.m"
  {
#line 1708 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1708 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1708 "liveness.m"
      {
#line 1708 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1708 "liveness.m"
        *ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__HeadVar__3_3;
#line 1708 "liveness.m"
      }
#line 1708 "liveness.m"
    else
#line 1710 "liveness.m"
      {
#line 1710 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1710 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1710 "liveness.m"
        MR_Word ll_backend__liveness__Goal_14;
#line 1710 "liveness.m"
        MR_Word ll_backend__liveness__Goals_15;
#line 1713 "liveness.m"
        MR_Word ll_backend__liveness___LivenessRest_20;

#line 1711 "liveness.m"
        {
#line 1711 "liveness.m"
          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_12, &ll_backend__liveness__Goal_14, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
        }
#line 1713 "liveness.m"
        {
#line 1713 "liveness.m"
          ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(ll_backend__liveness__Goals0_13, &ll_backend__liveness__Goals_15, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness___LivenessRest_20, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
        }
#line 1710 "liveness.m"
        {
#line 1710 "liveness.m"
          MR_Word base;
#line 1710 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1710 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1710 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_14));
#line 1710 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_15));
#line 1710 "liveness.m"
        }
#line 1710 "liveness.m"
      }
#line 1708 "liveness.m"
  }
#line 1704 "liveness.m"
}

#line 1683 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_cases_6_p_0(
#line 1683 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1683 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1683 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1683 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__4_4,
#line 1683 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1683 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6)
#line 1683 "liveness.m"
{
#line 1687 "liveness.m"
  {
#line 1687 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1687 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1687 "liveness.m"
      {
#line 1687 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1687 "liveness.m"
        *ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__HeadVar__3_3;
#line 1687 "liveness.m"
      }
#line 1687 "liveness.m"
    else
#line 1689 "liveness.m"
      {
#line 1689 "liveness.m"
        MR_Word ll_backend__liveness__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1689 "liveness.m"
        MR_Word ll_backend__liveness__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1689 "liveness.m"
        MR_Word ll_backend__liveness__Case_14;
#line 1689 "liveness.m"
        MR_Word ll_backend__liveness__Cases_15;
#line 1689 "liveness.m"
        MR_Word ll_backend__liveness__MainConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_12, (MR_Integer) 0)));
#line 1689 "liveness.m"
        MR_Word ll_backend__liveness__OtherConsIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_12, (MR_Integer) 1)));
#line 1689 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_12, (MR_Integer) 2)));
#line 1689 "liveness.m"
        MR_Word ll_backend__liveness__Goal_23;

#line 1691 "liveness.m"
        {
#line 1691 "liveness.m"
          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_22, &ll_backend__liveness__Goal_23, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
        }
#line 1693 "liveness.m"
        {
#line 1693 "liveness.m"
          ll_backend__liveness__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1693 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_14, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_20));
#line 1693 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_14, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_21));
#line 1693 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_14, 2) = ((MR_Box) (ll_backend__liveness__Goal_23));
#line 1693 "liveness.m"
        }
#line 1699 "liveness.m"
        if ((ll_backend__liveness__Cases0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1701 "liveness.m"
          ll_backend__liveness__Cases_15 = ll_backend__liveness__Cases0_13;
#line 1699 "liveness.m"
        else
#line 1695 "liveness.m"
          {
#line 1695 "liveness.m"
            MR_Word ll_backend__liveness__LivenessRest_26;

#line 1696 "liveness.m"
            {
#line 1696 "liveness.m"
              ll_backend__liveness__detect_resume_points_in_cases_6_p_0(ll_backend__liveness__Cases0_13, &ll_backend__liveness__Cases_15, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__LivenessRest_26, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
            }
#line 1720 "liveness.m"
            {
#line 1720 "liveness.m"
              ll_backend__liveness__succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, *ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LivenessRest_26);
            }
#line 1722 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1721 "liveness.m"
              {
#line 1721 "liveness.m"
              }
#line 1722 "liveness.m"
            else
#line 1723 "liveness.m"
              {
#line 1723 "liveness.m"
                MR_Word ll_backend__liveness__TypeCtorInfo_37_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1723 "liveness.m"
                MR_Word ll_backend__liveness__VarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 2)));
#line 1723 "liveness.m"
                MR_Word ll_backend__liveness__FirstVars_33;
#line 1723 "liveness.m"
                MR_Word ll_backend__liveness__RestVars_34;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__FirstNames_35;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__RestNames_36;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__Msg_37;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__V_41_41;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__V_42_42;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__V_44_44;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__V_46_46;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__V_47_47;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__V_49_49;
#line 1723 "liveness.m"
                MR_String ll_backend__liveness__V_51_51;
#line 1723 "liveness.m"
                MR_Word ll_backend__liveness__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 0)));
#line 1723 "liveness.m"
                MR_Word ll_backend__liveness__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 1)));
#line 1723 "liveness.m"
                MR_Word ll_backend__liveness__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 3)));
#line 1723 "liveness.m"
                MR_Word ll_backend__liveness__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_5, (MR_Integer) 4)));

#line 1724 "liveness.m"
                {
#line 1724 "liveness.m"
                  ll_backend__liveness__FirstVars_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_60, *ll_backend__liveness__HeadVar__4_4);
                }
#line 1725 "liveness.m"
                {
#line 1725 "liveness.m"
                  ll_backend__liveness__RestVars_34 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_60, ll_backend__liveness__LivenessRest_26);
                }
#line 1726 "liveness.m"
                {
#line 1726 "liveness.m"
                  ll_backend__liveness__FirstNames_35 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_60, ll_backend__liveness__VarSet_32, (MR_Integer) 1, ll_backend__liveness__FirstVars_33);
                }
#line 1727 "liveness.m"
                {
#line 1727 "liveness.m"
                  ll_backend__liveness__RestNames_36 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_60, ll_backend__liveness__VarSet_32, (MR_Integer) 1, ll_backend__liveness__RestVars_34);
                }
#line 1729 "liveness.m"
                {
#line 1729 "liveness.m"
                  ll_backend__liveness__V_51_51 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__RestNames_36, (MR_String) "\n");
                }
#line 1729 "liveness.m"
                {
#line 1729 "liveness.m"
                  ll_backend__liveness__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "Rest:  ", ll_backend__liveness__V_51_51);
                }
#line 1729 "liveness.m"
                {
#line 1729 "liveness.m"
                  ll_backend__liveness__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__liveness__V_49_49);
                }
#line 1729 "liveness.m"
                {
#line 1729 "liveness.m"
                  ll_backend__liveness__V_46_46 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__FirstNames_35, ll_backend__liveness__V_47_47);
                }
#line 1728 "liveness.m"
                {
#line 1728 "liveness.m"
                  ll_backend__liveness__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "First: ", ll_backend__liveness__V_46_46);
                }
#line 1728 "liveness.m"
                {
#line 1728 "liveness.m"
                  ll_backend__liveness__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) " disagree on liveness\n", ll_backend__liveness__V_44_44);
                }
#line 1728 "liveness.m"
                {
#line 1728 "liveness.m"
                  ll_backend__liveness__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "switch", ll_backend__liveness__V_42_42);
                }
#line 1728 "liveness.m"
                {
#line 1728 "liveness.m"
                  ll_backend__liveness__Msg_37 = mercury__string__f_43_43_2_f_0((MR_String) "branches of ", ll_backend__liveness__V_41_41);
                }
#line 1730 "liveness.m"
                {
#line 1730 "liveness.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.require_equal\'/4", ll_backend__liveness__Msg_37);
#line 1730 "liveness.m"
                  return;
                }
#line 1723 "liveness.m"
              }
#line 1695 "liveness.m"
          }
#line 1689 "liveness.m"
        {
#line 1689 "liveness.m"
          MR_Word base;
#line 1689 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1689 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Case_14));
#line 1689 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Cases_15));
#line 1689 "liveness.m"
        }
#line 1689 "liveness.m"
      }
#line 1687 "liveness.m"
  }
#line 1683 "liveness.m"
}

#line 1670 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_last_disjunct_7_p_0(
#line 1670 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_8,
#line 1670 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_9,
#line 1670 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_10,
#line 1670 "liveness.m"
  MR_Word * ll_backend__liveness__Liveness_11,
#line 1670 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_12,
#line 1670 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_13,
#line 1670 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNeeded_14)
#line 1670 "liveness.m"
{
#line 1675 "liveness.m"
  {
#line 1675 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1675 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_16;
#line 1675 "liveness.m"
    MR_Word ll_backend__liveness__PreDeaths_17;
#line 1675 "liveness.m"
    MR_Word ll_backend__liveness__Needed_18;
#line 1675 "liveness.m"
    MR_Word ll_backend__liveness__V_23_23;
#line 1675 "liveness.m"
    MR_Word ll_backend__liveness__V_28_28;
#line 1675 "liveness.m"
    MR_Word ll_backend__liveness__V_29_29;
#line 1678 "liveness.m"
    MR_Word ll_backend__liveness__V_15_15;
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_26_26;
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_27_27;

#line 1676 "liveness.m"
    {
#line 1676 "liveness.m"
      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_8, ll_backend__liveness__Goal_9, ll_backend__liveness__Liveness0_10, ll_backend__liveness__Liveness_11, ll_backend__liveness__LiveInfo_12, ll_backend__liveness__ResumeVars0_13);
    }
#line 1678 "liveness.m"
    ll_backend__liveness__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__liveness__Goal_9, (MR_Integer) 0)));
#line 1678 "liveness.m"
    ll_backend__liveness__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__liveness__Goal_9, (MR_Integer) 1)));
#line 1679 "liveness.m"
    {
#line 1679 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo_16, &ll_backend__liveness__PreDeaths_17);
    }
#line 1680 "liveness.m"
    {
#line 1680 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Liveness0_10, ll_backend__liveness__PreDeaths_17, &ll_backend__liveness__Needed_18);
    }
#line 1866 "liveness.m"
    ll_backend__liveness__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_12, (MR_Integer) 0)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_12, (MR_Integer) 1)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_12, (MR_Integer) 2)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_12, (MR_Integer) 3)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_12, (MR_Integer) 4)));
#line 1866 "liveness.m"
    {
#line 1866 "liveness.m"
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__Needed_18, ll_backend__liveness__V_23_23, ll_backend__liveness__V_28_28, ll_backend__liveness__V_29_29, ll_backend__liveness__CompletedNeeded_14);
#line 1866 "liveness.m"
      return;
    }
#line 1675 "liveness.m"
  }
#line 1670 "liveness.m"
}

#line 1626 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_p_0(
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_11,
#line 1626 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_12,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__MayUseOrigOnly_13,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_14,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__LivenessRest_15,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_16,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_17,
#line 1626 "liveness.m"
  MR_Word * ll_backend__liveness__Liveness_18,
#line 1626 "liveness.m"
  MR_Word ll_backend__liveness__NeededRest_19,
#line 1626 "liveness.m"
  MR_Word * ll_backend__liveness__Needed_20)
#line 1626 "liveness.m"
{
#line 1633 "liveness.m"
  {
#line 1633 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__ResumeVars1_21;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__Goal1_22;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__ResumeLocs_23;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__Resume_24;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_26;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__PreDeaths_27;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__NeededFirst_28;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__CompletedNeededFirst_29;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__V_35_35;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__V_40_40;
#line 1633 "liveness.m"
    MR_Word ll_backend__liveness__V_41_41;
#line 1661 "liveness.m"
    MR_Word ll_backend__liveness__V_25_25;
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_38_38;
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_39_39;

#line 1636 "liveness.m"
    {
#line 1636 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_31_31, ll_backend__liveness__NeededRest_19, ll_backend__liveness__ResumeVars0_17, &ll_backend__liveness__ResumeVars1_21);
    }
#line 1637 "liveness.m"
    {
#line 1637 "liveness.m"
      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_11, &ll_backend__liveness__Goal1_22, ll_backend__liveness__Liveness0_14, ll_backend__liveness__Liveness_18, ll_backend__liveness__LiveInfo_16, ll_backend__liveness__ResumeVars1_21);
    }
#line 1644 "liveness.m"
    ll_backend__liveness__succeeded = (ll_backend__liveness__MayUseOrigOnly_13 == (MR_Integer) 1);
#line 1644 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 1645 "liveness.m"
      {
#line 1645 "liveness.m"
        ll_backend__liveness__succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(ll_backend__liveness__Goal1_22);
      }
#line 1648 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 1647 "liveness.m"
      ll_backend__liveness__ResumeLocs_23 = (MR_Integer) 0;
#line 1648 "liveness.m"
    else
#line 1652 "liveness.m"
      {
#line 1649 "liveness.m"
        {
#line 1649 "liveness.m"
          ll_backend__liveness__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(ll_backend__liveness__Goal1_22);
        }
#line 1652 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 1651 "liveness.m"
          ll_backend__liveness__ResumeLocs_23 = (MR_Integer) 1;
#line 1652 "liveness.m"
        else
#line 1653 "liveness.m"
          ll_backend__liveness__ResumeLocs_23 = (MR_Integer) 3;
#line 1652 "liveness.m"
      }
#line 1658 "liveness.m"
    {
#line 1658 "liveness.m"
      ll_backend__liveness__Resume_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1658 "liveness.m"
      MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_24, 0) = ((MR_Box) (ll_backend__liveness__ResumeVars1_21));
#line 1658 "liveness.m"
      MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_24, 1) = ((MR_Box) (ll_backend__liveness__ResumeLocs_23));
#line 1658 "liveness.m"
    }
#line 1659 "liveness.m"
    {
#line 1659 "liveness.m"
      hlds__hlds_llds__goal_set_resume_point_3_p_0(ll_backend__liveness__Resume_24, ll_backend__liveness__Goal1_22, ll_backend__liveness__Goal_12);
    }
#line 1661 "liveness.m"
    ll_backend__liveness__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__liveness__Goal_12, (MR_Integer) 0)));
#line 1661 "liveness.m"
    ll_backend__liveness__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__liveness__Goal_12, (MR_Integer) 1)));
#line 1662 "liveness.m"
    {
#line 1662 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo_26, &ll_backend__liveness__PreDeaths_27);
    }
#line 1663 "liveness.m"
    {
#line 1663 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_31_31, ll_backend__liveness__Liveness0_14, ll_backend__liveness__PreDeaths_27, &ll_backend__liveness__NeededFirst_28);
    }
#line 1866 "liveness.m"
    ll_backend__liveness__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 0)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 1)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 2)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 3)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 4)));
#line 1866 "liveness.m"
    {
#line 1866 "liveness.m"
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__NeededFirst_28, ll_backend__liveness__V_35_35, ll_backend__liveness__V_40_40, ll_backend__liveness__V_41_41, &ll_backend__liveness__CompletedNeededFirst_29);
    }
#line 1666 "liveness.m"
    {
#line 1666 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_31_31, ll_backend__liveness__CompletedNeededFirst_29, ll_backend__liveness__NeededRest_19, ll_backend__liveness__Needed_20);
    }
#line 1720 "liveness.m"
    {
#line 1720 "liveness.m"
      ll_backend__liveness__succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, *ll_backend__liveness__Liveness_18, ll_backend__liveness__LivenessRest_15);
    }
#line 1722 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 1721 "liveness.m"
      {
#line 1721 "liveness.m"
      }
#line 1722 "liveness.m"
    else
#line 1723 "liveness.m"
      {
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_37_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__VarSet_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 2)));
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__FirstVars_55;
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__RestVars_56;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__FirstNames_57;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__RestNames_58;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__Msg_59;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_63_63;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_64_64;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_66_66;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_68_68;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_69_69;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_71_71;
#line 1723 "liveness.m"
        MR_String ll_backend__liveness__V_73_73;
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 0)));
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 1)));
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 3)));
#line 1723 "liveness.m"
        MR_Word ll_backend__liveness__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_16, (MR_Integer) 4)));

#line 1724 "liveness.m"
        {
#line 1724 "liveness.m"
          ll_backend__liveness__FirstVars_55 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_82, *ll_backend__liveness__Liveness_18);
        }
#line 1725 "liveness.m"
        {
#line 1725 "liveness.m"
          ll_backend__liveness__RestVars_56 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_37_82, ll_backend__liveness__LivenessRest_15);
        }
#line 1726 "liveness.m"
        {
#line 1726 "liveness.m"
          ll_backend__liveness__FirstNames_57 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_82, ll_backend__liveness__VarSet_54, (MR_Integer) 1, ll_backend__liveness__FirstVars_55);
        }
#line 1727 "liveness.m"
        {
#line 1727 "liveness.m"
          ll_backend__liveness__RestNames_58 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0(ll_backend__liveness__TypeCtorInfo_37_82, ll_backend__liveness__VarSet_54, (MR_Integer) 1, ll_backend__liveness__RestVars_56);
        }
#line 1729 "liveness.m"
        {
#line 1729 "liveness.m"
          ll_backend__liveness__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__RestNames_58, (MR_String) "\n");
        }
#line 1729 "liveness.m"
        {
#line 1729 "liveness.m"
          ll_backend__liveness__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "Rest:  ", ll_backend__liveness__V_73_73);
        }
#line 1729 "liveness.m"
        {
#line 1729 "liveness.m"
          ll_backend__liveness__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__liveness__V_71_71);
        }
#line 1729 "liveness.m"
        {
#line 1729 "liveness.m"
          ll_backend__liveness__V_68_68 = mercury__string__f_43_43_2_f_0(ll_backend__liveness__FirstNames_57, ll_backend__liveness__V_69_69);
        }
#line 1728 "liveness.m"
        {
#line 1728 "liveness.m"
          ll_backend__liveness__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "First: ", ll_backend__liveness__V_68_68);
        }
#line 1728 "liveness.m"
        {
#line 1728 "liveness.m"
          ll_backend__liveness__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) " disagree on liveness\n", ll_backend__liveness__V_66_66);
        }
#line 1728 "liveness.m"
        {
#line 1728 "liveness.m"
          ll_backend__liveness__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "disjunction", ll_backend__liveness__V_64_64);
        }
#line 1728 "liveness.m"
        {
#line 1728 "liveness.m"
          ll_backend__liveness__Msg_59 = mercury__string__f_43_43_2_f_0((MR_String) "branches of ", ll_backend__liveness__V_63_63);
        }
#line 1730 "liveness.m"
        {
#line 1730 "liveness.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.require_equal\'/4", ll_backend__liveness__Msg_59);
#line 1730 "liveness.m"
          return;
        }
#line 1723 "liveness.m"
      }
#line 1633 "liveness.m"
  }
#line 1626 "liveness.m"
}

#line 1595 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(
#line 1595 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1595 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1595 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1595 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__4_4,
#line 1595 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1595 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6,
#line 1595 "liveness.m"
  MR_Word * ll_backend__liveness__Needed_7)
#line 1595 "liveness.m"
{
#line 1599 "liveness.m"
  {
#line 1599 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1599 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1599 "liveness.m"
      {
#line 1599 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1600 "liveness.m"
        {
#line 1600 "liveness.m"
          *ll_backend__liveness__Needed_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 1599 "liveness.m"
        *ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__HeadVar__3_3;
#line 1599 "liveness.m"
      }
#line 1599 "liveness.m"
    else
#line 1602 "liveness.m"
      {
#line 1602 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1602 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1602 "liveness.m"
        MR_Word ll_backend__liveness__Goal_16;
#line 1602 "liveness.m"
        MR_Word ll_backend__liveness__Goals_17;
#line 1602 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_14, (MR_Integer) 1)));
#line 1602 "liveness.m"
        MR_Word ll_backend__liveness__Detism0_25;
#line 1602 "liveness.m"
        MR_Word ll_backend__liveness__CanFail0_26;
#line 1603 "liveness.m"
        MR_Word ll_backend__liveness__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_14, (MR_Integer) 0)));
#line 1605 "liveness.m"
        MR_Word ll_backend__liveness__V_27_27;
#line 1613 "liveness.m"
        MR_Word ll_backend__liveness__V_28_28;
#line 1613 "liveness.m"
        MR_Word ll_backend__liveness__V_29_29;

#line 1604 "liveness.m"
        {
#line 1604 "liveness.m"
          ll_backend__liveness__Detism0_25 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__liveness__GoalInfo0_24);
        }
#line 1605 "liveness.m"
        {
#line 1605 "liveness.m"
          parse_tree__prog_data__determinism_components_3_p_0(ll_backend__liveness__Detism0_25, &ll_backend__liveness__CanFail0_26, &ll_backend__liveness__V_27_27);
        }
#line 1612 "liveness.m"
        ll_backend__liveness__succeeded = (ll_backend__liveness__CanFail0_26 == (MR_Integer) 0);
#line 1612 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 1612 "liveness.m"
          {
#line 1613 "liveness.m"
            ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__Goals0_15)) == (MR_mktag((MR_Integer) 1)));
#line 1613 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1613 "liveness.m"
              {
#line 1613 "liveness.m"
                ll_backend__liveness__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Goals0_15, (MR_Integer) 0)));
#line 1613 "liveness.m"
                ll_backend__liveness__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Goals0_15, (MR_Integer) 1)));
#line 1613 "liveness.m"
              }
#line 1612 "liveness.m"
          }
#line 1620 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 1616 "liveness.m"
          {
#line 1616 "liveness.m"
            MR_Word ll_backend__liveness__LivenessRest_30;
#line 1616 "liveness.m"
            MR_Word ll_backend__liveness__NeededRest_31;

#line 1615 "liveness.m"
            {
#line 1615 "liveness.m"
              ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(ll_backend__liveness__Goals0_15, &ll_backend__liveness__Goals_17, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__LivenessRest_30, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, &ll_backend__liveness__NeededRest_31);
            }
#line 1617 "liveness.m"
            {
#line 1617 "liveness.m"
              ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_p_0(ll_backend__liveness__Goal0_14, &ll_backend__liveness__Goal_16, (MR_Integer) 1, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__LivenessRest_30, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__NeededRest_31, ll_backend__liveness__Needed_7);
            }
#line 1616 "liveness.m"
          }
#line 1620 "liveness.m"
        else
#line 1622 "liveness.m"
          {
#line 1621 "liveness.m"
            {
#line 1621 "liveness.m"
              ll_backend__liveness__detect_resume_points_in_last_disjunct_7_p_0(ll_backend__liveness__Goal0_14, &ll_backend__liveness__Goal_16, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, ll_backend__liveness__Needed_7);
            }
#line 1623 "liveness.m"
            ll_backend__liveness__Goals_17 = ll_backend__liveness__Goals0_15;
#line 1622 "liveness.m"
          }
#line 1602 "liveness.m"
        {
#line 1602 "liveness.m"
          MR_Word base;
#line 1602 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1602 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1602 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_16));
#line 1602 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_17));
#line 1602 "liveness.m"
        }
#line 1602 "liveness.m"
      }
#line 1599 "liveness.m"
  }
#line 1595 "liveness.m"
}

#line 1570 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(
#line 1570 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1570 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1570 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_3,
#line 1570 "liveness.m"
  MR_Word * ll_backend__liveness__Liveness_4,
#line 1570 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1570 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6,
#line 1570 "liveness.m"
  MR_Word * ll_backend__liveness__Needed_7)
#line 1570 "liveness.m"
{
#line 1574 "liveness.m"
  {
#line 1574 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1574 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1574 "liveness.m"
      {
#line 1575 "liveness.m"
        {
#line 1575 "liveness.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_resume_points_in_non_disj\'/7", (MR_String) "empty nondet disjunction");
#line 1575 "liveness.m"
          return;
        }
#line 1574 "liveness.m"
      }
#line 1574 "liveness.m"
    else
#line 1577 "liveness.m"
      {
#line 1577 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1577 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1577 "liveness.m"
        MR_Word ll_backend__liveness__Goal_19;
#line 1577 "liveness.m"
        MR_Word ll_backend__liveness__Goals_20;

#line 1588 "liveness.m"
        if ((ll_backend__liveness__Goals0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1589 "liveness.m"
          {
#line 1590 "liveness.m"
            {
#line 1590 "liveness.m"
              ll_backend__liveness__detect_resume_points_in_last_disjunct_7_p_0(ll_backend__liveness__Goal0_17, &ll_backend__liveness__Goal_19, ll_backend__liveness__Liveness0_3, ll_backend__liveness__Liveness_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, ll_backend__liveness__Needed_7);
            }
#line 1592 "liveness.m"
            ll_backend__liveness__Goals_20 = ll_backend__liveness__Goals0_18;
#line 1589 "liveness.m"
          }
#line 1588 "liveness.m"
        else
#line 1581 "liveness.m"
          {
#line 1581 "liveness.m"
            MR_Word ll_backend__liveness__LivenessRest_28;
#line 1581 "liveness.m"
            MR_Word ll_backend__liveness__NeededRest_29;
#line 1581 "liveness.m"
            MR_Word ll_backend__liveness__Goal0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Goals0_18, (MR_Integer) 0)));
#line 1581 "liveness.m"
            MR_Word ll_backend__liveness__Goals0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Goals0_18, (MR_Integer) 1)));
#line 1581 "liveness.m"
            MR_Word ll_backend__liveness__Goal_42;
#line 1581 "liveness.m"
            MR_Word ll_backend__liveness__Goals_43;

#line 1588 "liveness.m"
            if ((ll_backend__liveness__Goals0_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1589 "liveness.m"
              {
#line 1590 "liveness.m"
                {
#line 1590 "liveness.m"
                  ll_backend__liveness__detect_resume_points_in_last_disjunct_7_p_0(ll_backend__liveness__Goal0_40, &ll_backend__liveness__Goal_42, ll_backend__liveness__Liveness0_3, &ll_backend__liveness__LivenessRest_28, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, &ll_backend__liveness__NeededRest_29);
                }
#line 1592 "liveness.m"
                ll_backend__liveness__Goals_43 = ll_backend__liveness__Goals0_41;
#line 1589 "liveness.m"
              }
#line 1588 "liveness.m"
            else
#line 1581 "liveness.m"
              {
#line 1581 "liveness.m"
                MR_Word ll_backend__liveness__LivenessRest_51;
#line 1581 "liveness.m"
                MR_Word ll_backend__liveness__NeededRest_52;

#line 1582 "liveness.m"
                {
#line 1582 "liveness.m"
                  ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(ll_backend__liveness__Goals0_41, &ll_backend__liveness__Goals_43, ll_backend__liveness__Liveness0_3, &ll_backend__liveness__LivenessRest_51, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, &ll_backend__liveness__NeededRest_52);
                }
#line 1585 "liveness.m"
                {
#line 1585 "liveness.m"
                  ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_p_0(ll_backend__liveness__Goal0_40, &ll_backend__liveness__Goal_42, (MR_Integer) 0, ll_backend__liveness__Liveness0_3, ll_backend__liveness__LivenessRest_51, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, &ll_backend__liveness__LivenessRest_28, ll_backend__liveness__NeededRest_52, &ll_backend__liveness__NeededRest_29);
                }
#line 1581 "liveness.m"
              }
#line 1577 "liveness.m"
            {
#line 1577 "liveness.m"
              ll_backend__liveness__Goals_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1577 "liveness.m"
              MR_hl_field(MR_mktag(1), ll_backend__liveness__Goals_20, 0) = ((MR_Box) (ll_backend__liveness__Goal_42));
#line 1577 "liveness.m"
              MR_hl_field(MR_mktag(1), ll_backend__liveness__Goals_20, 1) = ((MR_Box) (ll_backend__liveness__Goals_43));
#line 1577 "liveness.m"
            }
#line 1585 "liveness.m"
            {
#line 1585 "liveness.m"
              ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_p_0(ll_backend__liveness__Goal0_17, &ll_backend__liveness__Goal_19, (MR_Integer) 0, ll_backend__liveness__Liveness0_3, ll_backend__liveness__LivenessRest_28, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6, ll_backend__liveness__Liveness_4, ll_backend__liveness__NeededRest_29, ll_backend__liveness__Needed_7);
            }
#line 1581 "liveness.m"
          }
#line 1577 "liveness.m"
        {
#line 1577 "liveness.m"
          MR_Word base;
#line 1577 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1577 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1577 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_19));
#line 1577 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_20));
#line 1577 "liveness.m"
        }
#line 1577 "liveness.m"
      }
#line 1574 "liveness.m"
  }
#line 1570 "liveness.m"
}

#line 1544 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_conj_6_p_0(
#line 1544 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1544 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1544 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
#line 1544 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4,
#line 1544 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_5,
#line 1544 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_6)
#line 1544 "liveness.m"
{
#line 1548 "liveness.m"
  {
#line 1548 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1548 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1548 "liveness.m"
      {
#line 1548 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1548 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Liveness_4 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_3;
#line 1548 "liveness.m"
      }
#line 1548 "liveness.m"
    else
#line 1550 "liveness.m"
      {
#line 1550 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1550 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1550 "liveness.m"
        MR_Word ll_backend__liveness__Goal_14;
#line 1550 "liveness.m"
        MR_Word ll_backend__liveness__Goals_15;
#line 1550 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_21_21;

#line 1551 "liveness.m"
        {
#line 1551 "liveness.m"
          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal0_12, &ll_backend__liveness__Goal_14, ll_backend__liveness__STATE_VARIABLE_Liveness_0_3, &ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
        }
#line 1553 "liveness.m"
        {
#line 1553 "liveness.m"
          ll_backend__liveness__detect_resume_points_in_conj_6_p_0(ll_backend__liveness__Goals0_13, &ll_backend__liveness__Goals_15, ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, ll_backend__liveness__STATE_VARIABLE_Liveness_4, ll_backend__liveness__LiveInfo_5, ll_backend__liveness__ResumeVars0_6);
        }
#line 1550 "liveness.m"
        {
#line 1550 "liveness.m"
          MR_Word base;
#line 1550 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1550 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_14));
#line 1550 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_15));
#line 1550 "liveness.m"
        }
#line 1550 "liveness.m"
      }
#line 1548 "liveness.m"
  }
#line 1544 "liveness.m"
}

#line 1380 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_resume_points_in_goal_6_p_0(
#line 1380 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_7,
#line 1380 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_8,
#line 1380 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_85,
#line 1380 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_86,
#line 1380 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_10,
#line 1380 "liveness.m"
  MR_Word ll_backend__liveness__ResumeVars0_11)
#line 1380 "liveness.m"
{
#line 1384 "liveness.m"
  {
#line 1384 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_114_114;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 0)));
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 1)));
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__PreDeaths0_14;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__PreBirths0_15;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__PostDeaths0_16;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__PostBirths0_17;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_21;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_87_87;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_88_88;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_103_103;
#line 1384 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_104_104;

#line 1386 "liveness.m"
    {
#line 1386 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PreDeaths0_14);
    }
#line 1387 "liveness.m"
    {
#line 1387 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PreBirths0_15);
    }
#line 1388 "liveness.m"
    {
#line 1388 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostDeaths0_16);
    }
#line 1389 "liveness.m"
    {
#line 1389 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostBirths0_17);
    }
#line 3487 "ll_backend.liveness.c"
    ll_backend__liveness__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1391 "liveness.m"
    {
#line 1391 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__STATE_VARIABLE_Liveness_0_85, ll_backend__liveness__PreDeaths0_14, &ll_backend__liveness__STATE_VARIABLE_Liveness_87_87);
    }
#line 1392 "liveness.m"
    {
#line 1392 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__PreBirths0_15, ll_backend__liveness__STATE_VARIABLE_Liveness_87_87, &ll_backend__liveness__STATE_VARIABLE_Liveness_88_88);
    }
#line 1406 "liveness.m"
    if (((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 1482 "liveness.m"
      {
#line 1482 "liveness.m"
        MR_Word ll_backend__liveness__SubGoal0_49 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__GoalExpr0_12), (MR_Integer) 0);
#line 1482 "liveness.m"
        MR_Word ll_backend__liveness__CompletedLiveness_51;
#line 1482 "liveness.m"
        MR_Word ll_backend__liveness__ResumeVars1_52;
#line 1482 "liveness.m"
        MR_Word ll_backend__liveness__SubGoal1_53;
#line 1482 "liveness.m"
        MR_Word ll_backend__liveness__ResumeLocs_55;
#line 1482 "liveness.m"
        MR_Word ll_backend__liveness__Resume_56;
#line 1482 "liveness.m"
        MR_Word ll_backend__liveness__SubGoal_57;
#line 1485 "liveness.m"
        MR_Word ll_backend__liveness__V_50_50;
#line 1490 "liveness.m"
        MR_Word ll_backend__liveness___Liveness_54;

#line 1485 "liveness.m"
        {
#line 1485 "liveness.m"
          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__SubGoal0_49, &ll_backend__liveness__V_50_50, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
        }
#line 1487 "liveness.m"
        {
#line 1487 "liveness.m"
          ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_10, ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, &ll_backend__liveness__CompletedLiveness_51);
        }
#line 1489 "liveness.m"
        {
#line 1489 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__CompletedLiveness_51, ll_backend__liveness__ResumeVars0_11, &ll_backend__liveness__ResumeVars1_52);
        }
#line 1490 "liveness.m"
        {
#line 1490 "liveness.m"
          ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__SubGoal0_49, &ll_backend__liveness__SubGoal1_53, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness___Liveness_54, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars1_52);
        }
#line 1496 "liveness.m"
        {
#line 1496 "liveness.m"
          ll_backend__liveness__succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(ll_backend__liveness__SubGoal1_53);
        }
#line 1498 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 1497 "liveness.m"
          ll_backend__liveness__ResumeLocs_55 = (MR_Integer) 0;
#line 1498 "liveness.m"
        else
#line 1500 "liveness.m"
          {
#line 1498 "liveness.m"
            {
#line 1498 "liveness.m"
              ll_backend__liveness__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(ll_backend__liveness__SubGoal1_53);
            }
#line 1500 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1499 "liveness.m"
              ll_backend__liveness__ResumeLocs_55 = (MR_Integer) 1;
#line 1500 "liveness.m"
            else
#line 1501 "liveness.m"
              ll_backend__liveness__ResumeLocs_55 = (MR_Integer) 3;
#line 1500 "liveness.m"
          }
#line 1506 "liveness.m"
        {
#line 1506 "liveness.m"
          ll_backend__liveness__Resume_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "liveness.m"
          MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_56, 0) = ((MR_Box) (ll_backend__liveness__ResumeVars1_52));
#line 1506 "liveness.m"
          MR_hl_field(MR_mktag(1), ll_backend__liveness__Resume_56, 1) = ((MR_Box) (ll_backend__liveness__ResumeLocs_55));
#line 1506 "liveness.m"
        }
#line 1507 "liveness.m"
        {
#line 1507 "liveness.m"
          hlds__hlds_llds__goal_set_resume_point_3_p_0(ll_backend__liveness__Resume_56, ll_backend__liveness__SubGoal1_53, &ll_backend__liveness__SubGoal_57);
        }
#line 1510 "liveness.m"
        ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__liveness__SubGoal_57);
#line 1482 "liveness.m"
      }
#line 1406 "liveness.m"
    else
#line 1406 "liveness.m"
      if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1395 "liveness.m"
        {
#line 1395 "liveness.m"
          MR_Word ll_backend__liveness__ConjType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 1395 "liveness.m"
          MR_Word ll_backend__liveness__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
#line 1395 "liveness.m"
          MR_Word ll_backend__liveness__Goals_20;

#line 1400 "liveness.m"
          if ((ll_backend__liveness__ConjType_18 == (MR_Integer) 1))
#line 1402 "liveness.m"
            {
#line 1402 "liveness.m"
              ll_backend__liveness__detect_resume_points_in_par_conj_6_p_0(ll_backend__liveness__Goals0_19, &ll_backend__liveness__Goals_20, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
            }
#line 1400 "liveness.m"
          else
#line 1398 "liveness.m"
            {
#line 1398 "liveness.m"
              ll_backend__liveness__detect_resume_points_in_conj_6_p_0(ll_backend__liveness__Goals0_19, &ll_backend__liveness__Goals_20, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
            }
#line 1405 "liveness.m"
          {
#line 1405 "liveness.m"
            ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "liveness.m"
            MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1405 "liveness.m"
            MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__ConjType_18));
#line 1405 "liveness.m"
            MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 2) = ((MR_Box) (ll_backend__liveness__Goals_20));
#line 1405 "liveness.m"
          }
#line 1395 "liveness.m"
        }
#line 1406 "liveness.m"
      else
#line 1406 "liveness.m"
        if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1407 "liveness.m"
          {
#line 1407 "liveness.m"
            MR_Word ll_backend__liveness__CodeModel_22;
#line 1407 "liveness.m"
            MR_Word ll_backend__liveness__Goals0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 1407 "liveness.m"
            MR_Word ll_backend__liveness__Goals_107;

#line 1408 "liveness.m"
            {
#line 1408 "liveness.m"
              ll_backend__liveness__CodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__liveness__GoalInfo0_13);
            }
#line 1413 "liveness.m"
            if ((ll_backend__liveness__CodeModel_22 == (MR_Integer) 2))
#line 1411 "liveness.m"
              {
#line 1411 "liveness.m"
                MR_Word ll_backend__liveness__V_23_23;

#line 1411 "liveness.m"
                {
#line 1411 "liveness.m"
                  ll_backend__liveness__detect_resume_points_in_non_disj_7_p_0(ll_backend__liveness__Goals0_106, &ll_backend__liveness__Goals_107, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11, &ll_backend__liveness__V_23_23);
                }
#line 1411 "liveness.m"
              }
#line 1413 "liveness.m"
            else
#line 1417 "liveness.m"
              {
#line 1417 "liveness.m"
                MR_Word ll_backend__liveness__V_24_24;

#line 1417 "liveness.m"
                {
#line 1417 "liveness.m"
                  ll_backend__liveness__detect_resume_points_in_pruned_disj_7_p_0(ll_backend__liveness__Goals0_106, &ll_backend__liveness__Goals_107, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11, &ll_backend__liveness__V_24_24);
                }
#line 1417 "liveness.m"
              }
#line 1420 "liveness.m"
            {
#line 1420 "liveness.m"
              ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1420 "liveness.m"
              MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1420 "liveness.m"
              MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__Goals_107));
#line 1420 "liveness.m"
            }
#line 1407 "liveness.m"
          }
#line 1406 "liveness.m"
        else
#line 1406 "liveness.m"
          if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1427 "liveness.m"
            {
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__Cond0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__Then0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 3)));
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__Else0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 4)));
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__ElseInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else0_32, (MR_Integer) 1)));
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__ElsePreDeath0_36;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__CondResumeVars0_37;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__CondResumeVars1_38;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__CondResumeVars_39;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__Cond1_40;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__LivenessCond_41;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__Then_42;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__Else_44;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__LivenessElse_45;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__CondResumeLocs_46;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__CondResume_47;
#line 1427 "liveness.m"
              MR_Word ll_backend__liveness__Cond_48;
#line 1432 "liveness.m"
              MR_Word ll_backend__liveness___ElseExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else0_32, (MR_Integer) 0)));
#line 1451 "liveness.m"
              MR_Word ll_backend__liveness__CodeModel_108;

#line 1433 "liveness.m"
              {
#line 1433 "liveness.m"
                hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__ElseInfo0_35, &ll_backend__liveness__ElsePreDeath0_36);
              }
#line 1434 "liveness.m"
              {
#line 1434 "liveness.m"
                parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, ll_backend__liveness__ElsePreDeath0_36, &ll_backend__liveness__CondResumeVars0_37);
              }
#line 1435 "liveness.m"
              {
#line 1435 "liveness.m"
                ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_10, ll_backend__liveness__CondResumeVars0_37, &ll_backend__liveness__CondResumeVars1_38);
              }
#line 1438 "liveness.m"
              {
#line 1438 "liveness.m"
                parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__CondResumeVars1_38, ll_backend__liveness__ResumeVars0_11, &ll_backend__liveness__CondResumeVars_39);
              }
#line 1440 "liveness.m"
              {
#line 1440 "liveness.m"
                ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Cond0_30, &ll_backend__liveness__Cond1_40, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__LivenessCond_41, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__CondResumeVars_39);
              }
#line 1442 "liveness.m"
              {
#line 1442 "liveness.m"
                ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Then0_31, &ll_backend__liveness__Then_42, ll_backend__liveness__LivenessCond_41, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
              }
#line 1444 "liveness.m"
              {
#line 1444 "liveness.m"
                ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Else0_32, &ll_backend__liveness__Else_44, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__LivenessElse_45, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
              }
#line 1451 "liveness.m"
              {
#line 1451 "liveness.m"
                ll_backend__liveness__succeeded = hlds__goal_form__cannot_stack_flush_1_p_0(ll_backend__liveness__Cond1_40);
              }
#line 1451 "liveness.m"
              if (ll_backend__liveness__succeeded)
#line 1451 "liveness.m"
                {
#line 1452 "liveness.m"
                  {
#line 1452 "liveness.m"
                    ll_backend__liveness__CodeModel_108 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__liveness__GoalInfo0_13);
                  }
#line 1453 "liveness.m"
                  ll_backend__liveness__succeeded = (ll_backend__liveness__CodeModel_108 == (MR_Integer) 2);
#line 1453 "liveness.m"
                  ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
#line 1451 "liveness.m"
                }
#line 1456 "liveness.m"
              if (ll_backend__liveness__succeeded)
#line 1455 "liveness.m"
                ll_backend__liveness__CondResumeLocs_46 = (MR_Integer) 0;
#line 1456 "liveness.m"
              else
#line 1464 "liveness.m"
                {
#line 1457 "liveness.m"
                  {
#line 1457 "liveness.m"
                    ll_backend__liveness__succeeded = parse_tree__set_of_var__is_empty_1_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__CondResumeVars_39);
                  }
#line 1464 "liveness.m"
                  if (ll_backend__liveness__succeeded)
#line 1463 "liveness.m"
                    ll_backend__liveness__CondResumeLocs_46 = (MR_Integer) 1;
#line 1464 "liveness.m"
                  else
#line 1468 "liveness.m"
                    {
#line 1465 "liveness.m"
                      {
#line 1465 "liveness.m"
                        ll_backend__liveness__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(ll_backend__liveness__Cond1_40);
                      }
#line 1468 "liveness.m"
                      if (ll_backend__liveness__succeeded)
#line 1467 "liveness.m"
                        ll_backend__liveness__CondResumeLocs_46 = (MR_Integer) 1;
#line 1468 "liveness.m"
                      else
#line 1469 "liveness.m"
                        ll_backend__liveness__CondResumeLocs_46 = (MR_Integer) 3;
#line 1468 "liveness.m"
                    }
#line 1464 "liveness.m"
                }
#line 1474 "liveness.m"
              {
#line 1474 "liveness.m"
                ll_backend__liveness__CondResume_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "liveness.m"
                MR_hl_field(MR_mktag(1), ll_backend__liveness__CondResume_47, 0) = ((MR_Box) (ll_backend__liveness__CondResumeVars_39));
#line 1474 "liveness.m"
                MR_hl_field(MR_mktag(1), ll_backend__liveness__CondResume_47, 1) = ((MR_Box) (ll_backend__liveness__CondResumeLocs_46));
#line 1474 "liveness.m"
              }
#line 1475 "liveness.m"
              {
#line 1475 "liveness.m"
                hlds__hlds_llds__goal_set_resume_point_3_p_0(ll_backend__liveness__CondResume_47, ll_backend__liveness__Cond1_40, &ll_backend__liveness__Cond_48);
              }
#line 1477 "liveness.m"
              {
#line 1477 "liveness.m"
                ll_backend__liveness__require_equal_4_p_0(ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LivenessElse_45, (MR_String) "if-then-else", ll_backend__liveness__LiveInfo_10);
              }
#line 1480 "liveness.m"
              {
#line 1480 "liveness.m"
                ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1480 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__Vars_29));
#line 1480 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 2) = ((MR_Box) (ll_backend__liveness__Cond_48));
#line 1480 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 3) = ((MR_Box) (ll_backend__liveness__Then_42));
#line 1480 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 4) = ((MR_Box) (ll_backend__liveness__Else_44));
#line 1480 "liveness.m"
              }
#line 1427 "liveness.m"
            }
#line 1406 "liveness.m"
          else
#line 1406 "liveness.m"
            if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1512 "liveness.m"
              {
#line 1512 "liveness.m"
                MR_Word ll_backend__liveness__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 1512 "liveness.m"
                MR_Word ll_backend__liveness__SubGoal0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
#line 1512 "liveness.m"
                MR_Word ll_backend__liveness__SubGoal_113;
#line 1520 "liveness.m"
                MR_Word ll_backend__liveness__TermVar_59;
#line 1513 "liveness.m"
                MR_Word ll_backend__liveness__V_92_92;

#line 1513 "liveness.m"
                ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1513 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 1513 "liveness.m"
                  {
#line 1513 "liveness.m"
                    ll_backend__liveness__TermVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_58, (MR_Integer) 1)));
#line 1513 "liveness.m"
                    ll_backend__liveness__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_58, (MR_Integer) 2)));
#line 1513 "liveness.m"
                    ll_backend__liveness__succeeded = (ll_backend__liveness__V_92_92 == (MR_Integer) 1);
#line 1513 "liveness.m"
                  }
#line 1520 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 1515 "liveness.m"
                  {
#line 1515 "liveness.m"
                    MR_Word ll_backend__liveness__CompletedTermVars_60;
#line 1515 "liveness.m"
                    MR_Word ll_backend__liveness__V_93_93;

#line 1514 "liveness.m"
                    {
#line 1514 "liveness.m"
                      ll_backend__liveness__V_93_93 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__TermVar_59);
                    }
#line 1514 "liveness.m"
                    {
#line 1514 "liveness.m"
                      ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_10, ll_backend__liveness__V_93_93, &ll_backend__liveness__CompletedTermVars_60);
                    }
#line 1516 "liveness.m"
                    {
#line 1516 "liveness.m"
                      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__CompletedTermVars_60, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103);
                    }
#line 1519 "liveness.m"
                    ll_backend__liveness__SubGoal_113 = ll_backend__liveness__SubGoal0_112;
#line 1515 "liveness.m"
                  }
#line 1520 "liveness.m"
                else
#line 1523 "liveness.m"
                  {
#line 1523 "liveness.m"
                    ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__SubGoal0_112, &ll_backend__liveness__SubGoal_113, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
                  }
#line 1526 "liveness.m"
                {
#line 1526 "liveness.m"
                  ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1526 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__Reason_58));
#line 1526 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 2) = ((MR_Box) (ll_backend__liveness__SubGoal_113));
#line 1526 "liveness.m"
                }
#line 1512 "liveness.m"
              }
#line 1406 "liveness.m"
            else
#line 1406 "liveness.m"
              if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1535 "liveness.m"
                {
#line 1537 "liveness.m"
                  {
#line 1537 "liveness.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_resume_points_in_goal\'/6", (MR_String) "shorthand");
#line 1537 "liveness.m"
                    return;
                  }
#line 1535 "liveness.m"
                }
#line 1406 "liveness.m"
              else
#line 1406 "liveness.m"
                if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1422 "liveness.m"
                  {
#line 1422 "liveness.m"
                    MR_Word ll_backend__liveness__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 1422 "liveness.m"
                    MR_Word ll_backend__liveness__CF_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
#line 1422 "liveness.m"
                    MR_Word ll_backend__liveness__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 3)));
#line 1422 "liveness.m"
                    MR_Word ll_backend__liveness__Cases_28;

#line 1423 "liveness.m"
                    {
#line 1423 "liveness.m"
                      ll_backend__liveness__detect_resume_points_in_cases_6_p_0(ll_backend__liveness__Cases0_27, &ll_backend__liveness__Cases_28, ll_backend__liveness__STATE_VARIABLE_Liveness_88_88, &ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__ResumeVars0_11);
                    }
#line 1425 "liveness.m"
                    {
#line 1425 "liveness.m"
                      ll_backend__liveness__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1425 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 1) = ((MR_Box) (ll_backend__liveness__Var_25));
#line 1425 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 2) = ((MR_Box) (ll_backend__liveness__CF_26));
#line 1425 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_21, 3) = ((MR_Box) (ll_backend__liveness__Cases_28));
#line 1425 "liveness.m"
                    }
#line 1422 "liveness.m"
                  }
#line 1406 "liveness.m"
                else
#line 1532 "liveness.m"
                  {
#line 1533 "liveness.m"
                    ll_backend__liveness__GoalExpr_21 = ll_backend__liveness__GoalExpr0_12;
#line 1533 "liveness.m"
                    ll_backend__liveness__STATE_VARIABLE_Liveness_103_103 = ll_backend__liveness__STATE_VARIABLE_Liveness_88_88;
#line 1532 "liveness.m"
                  }
#line 1540 "liveness.m"
    {
#line 1540 "liveness.m"
      MR_Word base;
#line 1540 "liveness.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "liveness.m"
      *ll_backend__liveness__Goal_8 = base;
#line 1540 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_21));
#line 1540 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo0_13));
#line 1540 "liveness.m"
    }
#line 1541 "liveness.m"
    {
#line 1541 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__STATE_VARIABLE_Liveness_103_103, ll_backend__liveness__PostDeaths0_16, &ll_backend__liveness__STATE_VARIABLE_Liveness_104_104);
    }
#line 1542 "liveness.m"
    {
#line 1542 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_114_114, ll_backend__liveness__PostBirths0_17, ll_backend__liveness__STATE_VARIABLE_Liveness_104_104, ll_backend__liveness__STATE_VARIABLE_Liveness_86);
#line 1542 "liveness.m"
      return;
    }
#line 1384 "liveness.m"
  }
#line 1380 "liveness.m"
}

#line 1364 "liveness.m"
static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(
#line 1364 "liveness.m"
  MR_Word ll_backend__liveness__FinalDelayedDead_4,
#line 1364 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2)
#line 1364 "liveness.m"
{
#line 1367 "liveness.m"
  {
#line 1367 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__Case_7;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__Case0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__DelayedDead0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__MainConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_5, (MR_Integer) 0)));
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__OtherConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_5, (MR_Integer) 1)));
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_5, (MR_Integer) 2)));
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__ToBeKilled_11;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_12;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo0_13;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__PostDeath0_14;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__PostDeath_15;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_16;
#line 1367 "liveness.m"
    MR_Word ll_backend__liveness__Goal_17;

#line 1369 "liveness.m"
    {
#line 1369 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__DelayedDead0_6, ll_backend__liveness__FinalDelayedDead_4, &ll_backend__liveness__ToBeKilled_11);
    }
#line 1370 "liveness.m"
    ll_backend__liveness__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_10, (MR_Integer) 0)));
#line 1370 "liveness.m"
    ll_backend__liveness__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_10, (MR_Integer) 1)));
#line 1371 "liveness.m"
    {
#line 1371 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostDeath0_14);
    }
#line 1372 "liveness.m"
    {
#line 1372 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__PostDeath0_14, ll_backend__liveness__ToBeKilled_11, &ll_backend__liveness__PostDeath_15);
    }
#line 1373 "liveness.m"
    {
#line 1373 "liveness.m"
      hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeath_15, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__GoalInfo_16);
    }
#line 1374 "liveness.m"
    {
#line 1374 "liveness.m"
      ll_backend__liveness__Goal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1374 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_17, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_12));
#line 1374 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_17, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_16));
#line 1374 "liveness.m"
    }
#line 1375 "liveness.m"
    {
#line 1375 "liveness.m"
      ll_backend__liveness__Case_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_7, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_8));
#line 1375 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_7, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_9));
#line 1375 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_7, 2) = ((MR_Box) (ll_backend__liveness__Goal_17));
#line 1375 "liveness.m"
    }
#line 1367 "liveness.m"
    return ll_backend__liveness__Case_7;
#line 1367 "liveness.m"
  }
#line 1364 "liveness.m"
}

#line 1353 "liveness.m"
static MR_Word MR_CALL 
ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(
#line 1353 "liveness.m"
  MR_Word ll_backend__liveness__FinalDelayedDead_4,
#line 1353 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2)
#line 1353 "liveness.m"
{
#line 1356 "liveness.m"
  {
#line 1356 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__Goal_7;
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__DelayedDead0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__ToBeKilled_8;
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_9;
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo0_10;
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__PostDeath0_11;
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__PostDeath_12;
#line 1356 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_13;

#line 1357 "liveness.m"
    {
#line 1357 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_14_14, ll_backend__liveness__DelayedDead0_6, ll_backend__liveness__FinalDelayedDead_4, &ll_backend__liveness__ToBeKilled_8);
    }
#line 1358 "liveness.m"
    ll_backend__liveness__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_5, (MR_Integer) 0)));
#line 1358 "liveness.m"
    ll_backend__liveness__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_5, (MR_Integer) 1)));
#line 1359 "liveness.m"
    {
#line 1359 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo0_10, &ll_backend__liveness__PostDeath0_11);
    }
#line 1360 "liveness.m"
    {
#line 1360 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_14_14, ll_backend__liveness__PostDeath0_11, ll_backend__liveness__ToBeKilled_8, &ll_backend__liveness__PostDeath_12);
    }
#line 1361 "liveness.m"
    {
#line 1361 "liveness.m"
      hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeath_12, ll_backend__liveness__GoalInfo0_10, &ll_backend__liveness__GoalInfo_13);
    }
#line 1362 "liveness.m"
    {
#line 1362 "liveness.m"
      ll_backend__liveness__Goal_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_7, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_9));
#line 1362 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_7, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_13));
#line 1362 "liveness.m"
    }
#line 1356 "liveness.m"
    return ll_backend__liveness__Goal_7;
#line 1356 "liveness.m"
  }
#line 1353 "liveness.m"
}

#line 1325 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_cases_6_p_0(
#line 1325 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1325 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1325 "liveness.m"
  MR_Word ll_backend__liveness__BornVars0_3,
#line 1325 "liveness.m"
  MR_Word ll_backend__liveness__DelayedDead0_4,
#line 1325 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_5,
#line 1325 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__6_6)
#line 1325 "liveness.m"
{
#line 1330 "liveness.m"
  {
#line 1330 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1330 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1330 "liveness.m"
      {
#line 1330 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1330 "liveness.m"
        *ll_backend__liveness__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1330 "liveness.m"
      }
#line 1330 "liveness.m"
    else
#line 1332 "liveness.m"
      {
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__Case_12;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__DelayedDeadGoal_13;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__Cases_14;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__BornVars_18;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__DelayedDead_19;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__MainConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_10, (MR_Integer) 0)));
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__OtherConsIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_10, (MR_Integer) 1)));
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_10, (MR_Integer) 2)));
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__Goal_23;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__BornVarsGoal_24;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__MaybeBornVarsDelayedDead_25;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__V_28_28;
#line 1332 "liveness.m"
        MR_Word ll_backend__liveness__V_29_29;

#line 1334 "liveness.m"
        {
#line 1334 "liveness.m"
          ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_22, &ll_backend__liveness__Goal_23, ll_backend__liveness__BornVars0_3, &ll_backend__liveness__BornVarsGoal_24, ll_backend__liveness__DelayedDead0_4, &ll_backend__liveness__DelayedDeadGoal_13, ll_backend__liveness__VarSet_5);
        }
#line 1336 "liveness.m"
        {
#line 1336 "liveness.m"
          ll_backend__liveness__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1336 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_12, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_20));
#line 1336 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_12, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_21));
#line 1336 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_12, 2) = ((MR_Box) (ll_backend__liveness__Goal_23));
#line 1336 "liveness.m"
        }
#line 1331 "liveness.m"
        {
#line 1331 "liveness.m"
          ll_backend__liveness__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__V_28_28, 0) = ((MR_Box) (ll_backend__liveness__Case_12));
#line 1331 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__V_28_28, 1) = ((MR_Box) (ll_backend__liveness__DelayedDeadGoal_13));
#line 1331 "liveness.m"
        }
#line 1337 "liveness.m"
        {
#line 1337 "liveness.m"
          ll_backend__liveness__delay_death_cases_6_p_0(ll_backend__liveness__Cases0_11, &ll_backend__liveness__Cases_14, ll_backend__liveness__BornVars0_3, ll_backend__liveness__DelayedDead0_4, ll_backend__liveness__VarSet_5, &ll_backend__liveness__MaybeBornVarsDelayedDead_25);
        }
#line 1332 "liveness.m"
        {
#line 1332 "liveness.m"
          MR_Word base;
#line 1332 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1332 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__V_28_28));
#line 1332 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Cases_14));
#line 1332 "liveness.m"
        }
#line 1343 "liveness.m"
        if ((ll_backend__liveness__MaybeBornVarsDelayedDead_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1344 "liveness.m"
          {
#line 1345 "liveness.m"
            ll_backend__liveness__BornVars_18 = ll_backend__liveness__BornVarsGoal_24;
#line 1346 "liveness.m"
            ll_backend__liveness__DelayedDead_19 = ll_backend__liveness__DelayedDeadGoal_13;
#line 1344 "liveness.m"
          }
#line 1343 "liveness.m"
        else
#line 1340 "liveness.m"
          {
#line 1340 "liveness.m"
            MR_Word ll_backend__liveness__TypeCtorInfo_31_31;
#line 1340 "liveness.m"
            MR_Word ll_backend__liveness__BornVarsCases_26;
#line 1340 "liveness.m"
            MR_Word ll_backend__liveness__DelayedDeadCases_27;
#line 1340 "liveness.m"
            MR_Word ll_backend__liveness__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__MaybeBornVarsDelayedDead_25, (MR_Integer) 0)));

#line 1340 "liveness.m"
            ll_backend__liveness__BornVarsCases_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_30_30, (MR_Integer) 0)));
#line 1340 "liveness.m"
            ll_backend__liveness__DelayedDeadCases_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_30_30, (MR_Integer) 1)));
#line 4346 "ll_backend.liveness.c"
            ll_backend__liveness__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1341 "liveness.m"
            {
#line 1341 "liveness.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_31_31, ll_backend__liveness__BornVarsGoal_24, ll_backend__liveness__BornVarsCases_26, &ll_backend__liveness__BornVars_18);
            }
#line 1342 "liveness.m"
            {
#line 1342 "liveness.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_31_31, ll_backend__liveness__DelayedDeadGoal_13, ll_backend__liveness__DelayedDeadCases_27, &ll_backend__liveness__DelayedDead_19);
            }
#line 1340 "liveness.m"
          }
#line 1332 "liveness.m"
        {
#line 1332 "liveness.m"
          ll_backend__liveness__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1332 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__V_29_29, 0) = ((MR_Box) (ll_backend__liveness__BornVars_18));
#line 1332 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__V_29_29, 1) = ((MR_Box) (ll_backend__liveness__DelayedDead_19));
#line 1332 "liveness.m"
        }
#line 1332 "liveness.m"
        {
#line 1332 "liveness.m"
          MR_Word base;
#line 1332 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "liveness.m"
          *ll_backend__liveness__HeadVar__6_6 = base;
#line 1332 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__V_29_29));
#line 1332 "liveness.m"
        }
#line 1332 "liveness.m"
      }
#line 1330 "liveness.m"
  }
#line 1325 "liveness.m"
}

#line 1303 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_disj_6_p_0(
#line 1303 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1303 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1303 "liveness.m"
  MR_Word ll_backend__liveness__BornVars0_3,
#line 1303 "liveness.m"
  MR_Word ll_backend__liveness__DelayedDead0_4,
#line 1303 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_5,
#line 1303 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__6_6)
#line 1303 "liveness.m"
{
#line 1308 "liveness.m"
  {
#line 1308 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1308 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1308 "liveness.m"
      {
#line 1308 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "liveness.m"
        *ll_backend__liveness__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "liveness.m"
      }
#line 1308 "liveness.m"
    else
#line 1310 "liveness.m"
      {
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__Goal_12;
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__DelayedDeadGoal_13;
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__Goals_14;
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__BornVars_18;
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__DelayedDead_19;
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__BornVarsGoal_20;
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__MaybeBornVarsDelayedDead_21;
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__V_24_24;
#line 1310 "liveness.m"
        MR_Word ll_backend__liveness__V_25_25;

#line 1311 "liveness.m"
        {
#line 1311 "liveness.m"
          ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_10, &ll_backend__liveness__Goal_12, ll_backend__liveness__BornVars0_3, &ll_backend__liveness__BornVarsGoal_20, ll_backend__liveness__DelayedDead0_4, &ll_backend__liveness__DelayedDeadGoal_13, ll_backend__liveness__VarSet_5);
        }
#line 1309 "liveness.m"
        {
#line 1309 "liveness.m"
          ll_backend__liveness__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__V_24_24, 0) = ((MR_Box) (ll_backend__liveness__Goal_12));
#line 1309 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__V_24_24, 1) = ((MR_Box) (ll_backend__liveness__DelayedDeadGoal_13));
#line 1309 "liveness.m"
        }
#line 1313 "liveness.m"
        {
#line 1313 "liveness.m"
          ll_backend__liveness__delay_death_disj_6_p_0(ll_backend__liveness__Goals0_11, &ll_backend__liveness__Goals_14, ll_backend__liveness__BornVars0_3, ll_backend__liveness__DelayedDead0_4, ll_backend__liveness__VarSet_5, &ll_backend__liveness__MaybeBornVarsDelayedDead_21);
        }
#line 1310 "liveness.m"
        {
#line 1310 "liveness.m"
          MR_Word base;
#line 1310 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1310 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__V_24_24));
#line 1310 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_14));
#line 1310 "liveness.m"
        }
#line 1319 "liveness.m"
        if ((ll_backend__liveness__MaybeBornVarsDelayedDead_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "liveness.m"
          {
#line 1321 "liveness.m"
            ll_backend__liveness__BornVars_18 = ll_backend__liveness__BornVarsGoal_20;
#line 1322 "liveness.m"
            ll_backend__liveness__DelayedDead_19 = ll_backend__liveness__DelayedDeadGoal_13;
#line 1320 "liveness.m"
          }
#line 1319 "liveness.m"
        else
#line 1316 "liveness.m"
          {
#line 1316 "liveness.m"
            MR_Word ll_backend__liveness__TypeCtorInfo_27_27;
#line 1316 "liveness.m"
            MR_Word ll_backend__liveness__BornVarsGoals_22;
#line 1316 "liveness.m"
            MR_Word ll_backend__liveness__DelayedDeadGoals_23;
#line 1316 "liveness.m"
            MR_Word ll_backend__liveness__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__MaybeBornVarsDelayedDead_21, (MR_Integer) 0)));

#line 1316 "liveness.m"
            ll_backend__liveness__BornVarsGoals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_26_26, (MR_Integer) 0)));
#line 1316 "liveness.m"
            ll_backend__liveness__DelayedDeadGoals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_26_26, (MR_Integer) 1)));
#line 4509 "ll_backend.liveness.c"
            ll_backend__liveness__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1317 "liveness.m"
            {
#line 1317 "liveness.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_27_27, ll_backend__liveness__BornVarsGoal_20, ll_backend__liveness__BornVarsGoals_22, &ll_backend__liveness__BornVars_18);
            }
#line 1318 "liveness.m"
            {
#line 1318 "liveness.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_27_27, ll_backend__liveness__DelayedDeadGoal_13, ll_backend__liveness__DelayedDeadGoals_23, &ll_backend__liveness__DelayedDead_19);
            }
#line 1316 "liveness.m"
          }
#line 1310 "liveness.m"
        {
#line 1310 "liveness.m"
          ll_backend__liveness__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1310 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__V_25_25, 0) = ((MR_Box) (ll_backend__liveness__BornVars_18));
#line 1310 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__V_25_25, 1) = ((MR_Box) (ll_backend__liveness__DelayedDead_19));
#line 1310 "liveness.m"
        }
#line 1310 "liveness.m"
        {
#line 1310 "liveness.m"
          MR_Word base;
#line 1310 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "liveness.m"
          *ll_backend__liveness__HeadVar__6_6 = base;
#line 1310 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__V_25_25));
#line 1310 "liveness.m"
        }
#line 1310 "liveness.m"
      }
#line 1308 "liveness.m"
  }
#line 1303 "liveness.m"
}

#line 1289 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_par_conj_7_p_0(
#line 1289 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1289 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1289 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 1289 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__4_4,
#line 1289 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 1289 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__6_6,
#line 1289 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_7)
#line 1289 "liveness.m"
{
#line 1293 "liveness.m"
  {
#line 1293 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1293 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "liveness.m"
      {
#line 1293 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1293 "liveness.m"
        *ll_backend__liveness__HeadVar__6_6 = ll_backend__liveness__HeadVar__5_5;
#line 1293 "liveness.m"
        *ll_backend__liveness__HeadVar__4_4 = ll_backend__liveness__HeadVar__3_3;
#line 1293 "liveness.m"
      }
#line 1293 "liveness.m"
    else
#line 1295 "liveness.m"
      {
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_28_28;
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__Goal_17;
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__Goals_18;
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__BornVarsGoal_24;
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__DelayedDeadGoal_25;
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__BornVarsGoals_26;
#line 1295 "liveness.m"
        MR_Word ll_backend__liveness__DelayedDeadGoals_27;

#line 1296 "liveness.m"
        {
#line 1296 "liveness.m"
          ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_15, &ll_backend__liveness__Goal_17, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__BornVarsGoal_24, ll_backend__liveness__HeadVar__5_5, &ll_backend__liveness__DelayedDeadGoal_25, ll_backend__liveness__VarSet_7);
        }
#line 1298 "liveness.m"
        {
#line 1298 "liveness.m"
          ll_backend__liveness__delay_death_par_conj_7_p_0(ll_backend__liveness__Goals0_16, &ll_backend__liveness__Goals_18, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__BornVarsGoals_26, ll_backend__liveness__HeadVar__5_5, &ll_backend__liveness__DelayedDeadGoals_27, ll_backend__liveness__VarSet_7);
        }
#line 1295 "liveness.m"
        {
#line 1295 "liveness.m"
          MR_Word base;
#line 1295 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1295 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_17));
#line 1295 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_18));
#line 1295 "liveness.m"
        }
#line 4635 "ll_backend.liveness.c"
        ll_backend__liveness__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1300 "liveness.m"
        {
#line 1300 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__BornVarsGoal_24, ll_backend__liveness__BornVarsGoals_26, ll_backend__liveness__HeadVar__4_4);
        }
#line 1301 "liveness.m"
        {
#line 1301 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__DelayedDeadGoal_25, ll_backend__liveness__DelayedDeadGoals_27, ll_backend__liveness__HeadVar__6_6);
#line 1301 "liveness.m"
          return;
        }
#line 1295 "liveness.m"
      }
#line 1293 "liveness.m"
  }
#line 1289 "liveness.m"
}

#line 1279 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_conj_7_p_0(
#line 1279 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1279 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 1279 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_3,
#line 1279 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_4,
#line 1279 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_5,
#line 1279 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_6,
#line 1279 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_7)
#line 1279 "liveness.m"
{
#line 1283 "liveness.m"
  {
#line 1283 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1283 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1283 "liveness.m"
      {
#line 1283 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1283 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_DelayedDead_6 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_5;
#line 1283 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_BornVars_4 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_3;
#line 1283 "liveness.m"
      }
#line 1283 "liveness.m"
    else
#line 1285 "liveness.m"
      {
#line 1285 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1285 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1285 "liveness.m"
        MR_Word ll_backend__liveness__Goal_17;
#line 1285 "liveness.m"
        MR_Word ll_backend__liveness__Goals_18;
#line 1285 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_26_26;
#line 1285 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_27_27;

#line 1286 "liveness.m"
        {
#line 1286 "liveness.m"
          ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_15, &ll_backend__liveness__Goal_17, ll_backend__liveness__STATE_VARIABLE_BornVars_0_3, &ll_backend__liveness__STATE_VARIABLE_BornVars_26_26, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_5, &ll_backend__liveness__STATE_VARIABLE_DelayedDead_27_27, ll_backend__liveness__VarSet_7);
        }
#line 1287 "liveness.m"
        {
#line 1287 "liveness.m"
          ll_backend__liveness__delay_death_conj_7_p_0(ll_backend__liveness__Goals0_16, &ll_backend__liveness__Goals_18, ll_backend__liveness__STATE_VARIABLE_BornVars_26_26, ll_backend__liveness__STATE_VARIABLE_BornVars_4, ll_backend__liveness__STATE_VARIABLE_DelayedDead_27_27, ll_backend__liveness__STATE_VARIABLE_DelayedDead_6, ll_backend__liveness__VarSet_7);
        }
#line 1285 "liveness.m"
        {
#line 1285 "liveness.m"
          MR_Word base;
#line 1285 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 1285 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_17));
#line 1285 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_18));
#line 1285 "liveness.m"
        }
#line 1285 "liveness.m"
      }
#line 1283 "liveness.m"
  }
#line 1279 "liveness.m"
}

#line 1232 "liveness.m"
static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_2(
#line 1232 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 1232 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1)
#line 1232 "liveness.m"
{
#line 1232 "liveness.m"
  {
#line 1232 "liveness.m"
    MR_Box ll_backend__liveness__wrapper_arg_2;
#line 1232 "liveness.m"
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
#line 1232 "liveness.m"
    MR_Word ll_backend__liveness__conv1_Case_7;

#line 1232 "liveness.m"
    {
#line 1232 "liveness.m"
      ll_backend__liveness__conv1_Case_7 = ll_backend__liveness__kill_excess_delayed_dead_case_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1));
    }
#line 1232 "liveness.m"
    ll_backend__liveness__wrapper_arg_2 = ((MR_Box) (ll_backend__liveness__conv1_Case_7));
#line 1232 "liveness.m"
    return ll_backend__liveness__wrapper_arg_2;
#line 1232 "liveness.m"
  }
#line 1232 "liveness.m"
}

#line 1218 "liveness.m"
static MR_Box MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0_1(
#line 1218 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 1218 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1)
#line 1218 "liveness.m"
{
#line 1218 "liveness.m"
  {
#line 1218 "liveness.m"
    MR_Box ll_backend__liveness__wrapper_arg_2;
#line 1218 "liveness.m"
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
#line 1218 "liveness.m"
    MR_Word ll_backend__liveness__conv0_Goal_7;

#line 1218 "liveness.m"
    {
#line 1218 "liveness.m"
      ll_backend__liveness__conv0_Goal_7 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1));
    }
#line 1218 "liveness.m"
    ll_backend__liveness__wrapper_arg_2 = ((MR_Box) (ll_backend__liveness__conv0_Goal_7));
#line 1218 "liveness.m"
    return ll_backend__liveness__wrapper_arg_2;
#line 1218 "liveness.m"
  }
#line 1218 "liveness.m"
}

#line 1187 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_goal_expr_9_p_0(
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72,
#line 1187 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_GoalExpr_73,
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_GoalInfo_0_74,
#line 1187 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_GoalInfo_75,
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_76,
#line 1187 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_77,
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78,
#line 1187 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_79,
#line 1187 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_14)
#line 1187 "liveness.m"
{
#line 1192 "liveness.m"
  {
#line 1192 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1195 "liveness.m"
    if (((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 0))))
#line 1240 "liveness.m"
      {
#line 1240 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_48 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72), (MR_Integer) 0);
#line 1240 "liveness.m"
        MR_Word ll_backend__liveness__Goal_49;
#line 1241 "liveness.m"
        MR_Word ll_backend__liveness__V_50_50;

#line 1241 "liveness.m"
        {
#line 1241 "liveness.m"
          ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_48, &ll_backend__liveness__Goal_49, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, &ll_backend__liveness__V_50_50, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__VarSet_14);
        }
#line 1242 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__liveness__Goal_49);
#line 1242 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
#line 1240 "liveness.m"
      }
#line 1195 "liveness.m"
    else
#line 1195 "liveness.m"
      if (((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 2))))
#line 1194 "liveness.m"
        {
#line 1194 "liveness.m"
          *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
#line 1194 "liveness.m"
          *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
#line 1194 "liveness.m"
          *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
#line 1194 "liveness.m"
        }
#line 1195 "liveness.m"
      else
#line 1195 "liveness.m"
        if (((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 1))))
#line 1198 "liveness.m"
          {
#line 1198 "liveness.m"
            *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
#line 1198 "liveness.m"
            *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
#line 1198 "liveness.m"
            *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
#line 1198 "liveness.m"
          }
#line 1195 "liveness.m"
        else
#line 1195 "liveness.m"
          if (((((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1200 "liveness.m"
            {
#line 1200 "liveness.m"
              *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
#line 1200 "liveness.m"
              *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
#line 1200 "liveness.m"
              *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
#line 1200 "liveness.m"
            }
#line 1195 "liveness.m"
          else
#line 1195 "liveness.m"
            if (((((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1202 "liveness.m"
              {
#line 1202 "liveness.m"
                MR_Word ll_backend__liveness__ConjType_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));
#line 1202 "liveness.m"
                MR_Word ll_backend__liveness__Goals0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2)));
#line 1202 "liveness.m"
                MR_Word ll_backend__liveness__Goals_40;

#line 1206 "liveness.m"
                if ((ll_backend__liveness__ConjType_38 == (MR_Integer) 1))
#line 1208 "liveness.m"
                  {
#line 1208 "liveness.m"
                    ll_backend__liveness__delay_death_par_conj_7_p_0(ll_backend__liveness__Goals0_39, &ll_backend__liveness__Goals_40, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, ll_backend__liveness__STATE_VARIABLE_BornVars_77, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__VarSet_14);
                  }
#line 1206 "liveness.m"
                else
#line 1205 "liveness.m"
                  {
#line 1205 "liveness.m"
                    ll_backend__liveness__delay_death_conj_7_p_0(ll_backend__liveness__Goals0_39, &ll_backend__liveness__Goals_40, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, ll_backend__liveness__STATE_VARIABLE_BornVars_77, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__VarSet_14);
                  }
#line 1211 "liveness.m"
                {
#line 1211 "liveness.m"
                  MR_Word base;
#line 1211 "liveness.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "liveness.m"
                  *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
#line 1211 "liveness.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1211 "liveness.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__ConjType_38));
#line 1211 "liveness.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__liveness__Goals_40));
#line 1211 "liveness.m"
                }
#line 1202 "liveness.m"
              }
#line 1195 "liveness.m"
            else
#line 1195 "liveness.m"
              if (((((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1213 "liveness.m"
                {
#line 1213 "liveness.m"
                  MR_Word ll_backend__liveness__GoalDeaths_41;
#line 1213 "liveness.m"
                  MR_Word ll_backend__liveness__MaybeBornVarsDelayedDead_42;
#line 1213 "liveness.m"
                  MR_Word ll_backend__liveness__Goals0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));

#line 1214 "liveness.m"
                  {
#line 1214 "liveness.m"
                    ll_backend__liveness__delay_death_disj_6_p_0(ll_backend__liveness__Goals0_113, &ll_backend__liveness__GoalDeaths_41, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__VarSet_14, &ll_backend__liveness__MaybeBornVarsDelayedDead_42);
                  }
#line 1221 "liveness.m"
                  if ((ll_backend__liveness__MaybeBornVarsDelayedDead_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1222 "liveness.m"
                    {
#line 1222 "liveness.m"
                      *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
#line 1222 "liveness.m"
                      *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
#line 1222 "liveness.m"
                      *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
#line 1222 "liveness.m"
                    }
#line 1221 "liveness.m"
                  else
#line 1217 "liveness.m"
                    {
#line 1217 "liveness.m"
                      MR_Word ll_backend__liveness__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__MaybeBornVarsDelayedDead_42, (MR_Integer) 0)));
#line 1217 "liveness.m"
                      MR_Word ll_backend__liveness__V_104_104;
#line 1217 "liveness.m"
                      MR_Word ll_backend__liveness__Goals_111;

#line 1217 "liveness.m"
                      *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_101_101, (MR_Integer) 0)));
#line 1217 "liveness.m"
                      *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_101_101, (MR_Integer) 1)));
#line 1218 "liveness.m"
                      {
#line 1218 "liveness.m"
                        ll_backend__liveness__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "liveness.m"
                        MR_hl_field(MR_mktag(0), ll_backend__liveness__V_104_104, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_3[1]));
#line 1218 "liveness.m"
                        MR_hl_field(MR_mktag(0), ll_backend__liveness__V_104_104, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_expr_9_p_0_1));
#line 1218 "liveness.m"
                        MR_hl_field(MR_mktag(0), ll_backend__liveness__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1218 "liveness.m"
                        MR_hl_field(MR_mktag(0), ll_backend__liveness__V_104_104, 3) = ((MR_Box) (*ll_backend__liveness__STATE_VARIABLE_DelayedDead_79));
#line 1218 "liveness.m"
                      }
#line 1218 "liveness.m"
                      {
#line 1218 "liveness.m"
                        ll_backend__liveness__Goals_111 = mercury__list__map_2_f_0((MR_Word) &ll_backend__liveness_scalar_common_2[0], (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__liveness__V_104_104, ll_backend__liveness__GoalDeaths_41);
                      }
#line 1220 "liveness.m"
                      {
#line 1220 "liveness.m"
                        MR_Word base;
#line 1220 "liveness.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "liveness.m"
                        *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
#line 1220 "liveness.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1220 "liveness.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_111));
#line 1220 "liveness.m"
                      }
#line 1217 "liveness.m"
                    }
#line 1213 "liveness.m"
                }
#line 1195 "liveness.m"
              else
#line 1195 "liveness.m"
                if (((((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1196 "liveness.m"
                  {
#line 1196 "liveness.m"
                    *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72;
#line 1196 "liveness.m"
                    *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
#line 1196 "liveness.m"
                    *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
#line 1196 "liveness.m"
                  }
#line 1195 "liveness.m"
                else
#line 1195 "liveness.m"
                  if (((((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1244 "liveness.m"
                    {
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__TypeCtorInfo_126_126;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__QuantVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__Cond0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2)));
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__Then0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 3)));
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__Else0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 4)));
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__Cond_57;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__BornVarsCond_58;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__DelayedDeadCond_59;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__Then1_60;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__BornVarsThen_61;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__DelayedDeadThen_62;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__Else1_63;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__BornVarsElse_64;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__DelayedDeadElse_65;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__Then_66;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__Else_67;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__V_86_86;
#line 1244 "liveness.m"
                      MR_Word ll_backend__liveness__V_89_89;

#line 1247 "liveness.m"
                      {
#line 1247 "liveness.m"
                        ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Cond0_52, &ll_backend__liveness__Cond_57, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, &ll_backend__liveness__BornVarsCond_58, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, &ll_backend__liveness__DelayedDeadCond_59, ll_backend__liveness__VarSet_14);
                      }
#line 1249 "liveness.m"
                      {
#line 1249 "liveness.m"
                        ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Then0_53, &ll_backend__liveness__Then1_60, ll_backend__liveness__BornVarsCond_58, &ll_backend__liveness__BornVarsThen_61, ll_backend__liveness__DelayedDeadCond_59, &ll_backend__liveness__DelayedDeadThen_62, ll_backend__liveness__VarSet_14);
                      }
#line 1251 "liveness.m"
                      {
#line 1251 "liveness.m"
                        ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Else0_54, &ll_backend__liveness__Else1_63, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, &ll_backend__liveness__BornVarsElse_64, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, &ll_backend__liveness__DelayedDeadElse_65, ll_backend__liveness__VarSet_14);
                      }
#line 5095 "ll_backend.liveness.c"
                      ll_backend__liveness__TypeCtorInfo_126_126 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1253 "liveness.m"
                      {
#line 1253 "liveness.m"
                        parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_126_126, ll_backend__liveness__BornVarsThen_61, ll_backend__liveness__BornVarsElse_64, ll_backend__liveness__STATE_VARIABLE_BornVars_77);
                      }
#line 1254 "liveness.m"
                      {
#line 1254 "liveness.m"
                        parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_126_126, ll_backend__liveness__DelayedDeadThen_62, ll_backend__liveness__DelayedDeadElse_65, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79);
                      }
#line 1255 "liveness.m"
                      {
#line 1255 "liveness.m"
                        ll_backend__liveness__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "liveness.m"
                        MR_hl_field(MR_mktag(0), ll_backend__liveness__V_86_86, 0) = ((MR_Box) (ll_backend__liveness__Then1_60));
#line 1255 "liveness.m"
                        MR_hl_field(MR_mktag(0), ll_backend__liveness__V_86_86, 1) = ((MR_Box) (ll_backend__liveness__DelayedDeadThen_62));
#line 1255 "liveness.m"
                      }
#line 1255 "liveness.m"
                      {
#line 1255 "liveness.m"
                        ll_backend__liveness__Then_66 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(*ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__V_86_86);
                      }
#line 1259 "liveness.m"
                      {
#line 1259 "liveness.m"
                        ll_backend__liveness__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "liveness.m"
                        MR_hl_field(MR_mktag(0), ll_backend__liveness__V_89_89, 0) = ((MR_Box) (ll_backend__liveness__Else1_63));
#line 1259 "liveness.m"
                        MR_hl_field(MR_mktag(0), ll_backend__liveness__V_89_89, 1) = ((MR_Box) (ll_backend__liveness__DelayedDeadElse_65));
#line 1259 "liveness.m"
                      }
#line 1259 "liveness.m"
                      {
#line 1259 "liveness.m"
                        ll_backend__liveness__Else_67 = ll_backend__liveness__kill_excess_delayed_dead_goal_2_f_0(*ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__V_89_89);
                      }
#line 1261 "liveness.m"
                      {
#line 1261 "liveness.m"
                        MR_Word base;
#line 1261 "liveness.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "liveness.m"
                        *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
#line 1261 "liveness.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1261 "liveness.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__QuantVars_51));
#line 1261 "liveness.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__liveness__Cond_57));
#line 1261 "liveness.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__liveness__Then_66));
#line 1261 "liveness.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__liveness__Else_67));
#line 1261 "liveness.m"
                      }
#line 1244 "liveness.m"
                    }
#line 1195 "liveness.m"
                  else
#line 1195 "liveness.m"
                    if (((((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1263 "liveness.m"
                      {
#line 1263 "liveness.m"
                        MR_Word ll_backend__liveness__Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));
#line 1263 "liveness.m"
                        MR_Word ll_backend__liveness__Goal0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2)));
#line 1263 "liveness.m"
                        MR_Word ll_backend__liveness__Goal_117;
#line 1264 "liveness.m"
                        MR_Word ll_backend__liveness__V_83_83;
#line 1264 "liveness.m"
                        MR_Word ll_backend__liveness__V_69_69;

#line 1264 "liveness.m"
                        ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1264 "liveness.m"
                        if (ll_backend__liveness__succeeded)
#line 1264 "liveness.m"
                          {
#line 1264 "liveness.m"
                            ll_backend__liveness__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_68, (MR_Integer) 1)));
#line 1264 "liveness.m"
                            ll_backend__liveness__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_68, (MR_Integer) 2)));
#line 1264 "liveness.m"
                            ll_backend__liveness__succeeded = (ll_backend__liveness__V_83_83 == (MR_Integer) 1);
#line 1264 "liveness.m"
                          }
#line 1268 "liveness.m"
                        if (ll_backend__liveness__succeeded)
#line 1267 "liveness.m"
                          {
#line 1267 "liveness.m"
                            ll_backend__liveness__Goal_117 = ll_backend__liveness__Goal0_116;
#line 1267 "liveness.m"
                            *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78;
#line 1267 "liveness.m"
                          }
#line 1268 "liveness.m"
                        else
#line 1271 "liveness.m"
                          {
#line 1271 "liveness.m"
                            MR_Word ll_backend__liveness__V_70_70;

#line 1271 "liveness.m"
                            {
#line 1271 "liveness.m"
                              ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_116, &ll_backend__liveness__Goal_117, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, &ll_backend__liveness__V_70_70, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__STATE_VARIABLE_DelayedDead_79, ll_backend__liveness__VarSet_14);
                            }
#line 1271 "liveness.m"
                          }
#line 1273 "liveness.m"
                        {
#line 1273 "liveness.m"
                          MR_Word base;
#line 1273 "liveness.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "liveness.m"
                          *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
#line 1273 "liveness.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1273 "liveness.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__Reason_68));
#line 1273 "liveness.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__liveness__Goal_117));
#line 1273 "liveness.m"
                        }
#line 1273 "liveness.m"
                        *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ll_backend__liveness__STATE_VARIABLE_BornVars_0_76;
#line 1263 "liveness.m"
                      }
#line 1195 "liveness.m"
                    else
#line 1195 "liveness.m"
                      if (((((MR_tag((MR_Word) ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1275 "liveness.m"
                        {
#line 1276 "liveness.m"
                          {
#line 1276 "liveness.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", (MR_String) "shorthand");
#line 1276 "liveness.m"
                            return;
                          }
#line 1275 "liveness.m"
                        }
#line 1195 "liveness.m"
                      else
#line 1227 "liveness.m"
                        {
#line 1227 "liveness.m"
                          MR_Word ll_backend__liveness__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 1)));
#line 1227 "liveness.m"
                          MR_Word ll_backend__liveness__CanFail_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 2)));
#line 1227 "liveness.m"
                          MR_Word ll_backend__liveness__Cases0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__STATE_VARIABLE_GoalExpr_0_72, (MR_Integer) 3)));
#line 1227 "liveness.m"
                          MR_Word ll_backend__liveness__CaseDeaths_46;
#line 1227 "liveness.m"
                          MR_Word ll_backend__liveness__MaybeBornVarsDelayedDead_115;

#line 1228 "liveness.m"
                          {
#line 1228 "liveness.m"
                            ll_backend__liveness__delay_death_cases_6_p_0(ll_backend__liveness__Cases0_45, &ll_backend__liveness__CaseDeaths_46, ll_backend__liveness__STATE_VARIABLE_BornVars_0_76, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_78, ll_backend__liveness__VarSet_14, &ll_backend__liveness__MaybeBornVarsDelayedDead_115);
                          }
#line 1235 "liveness.m"
                          if ((ll_backend__liveness__MaybeBornVarsDelayedDead_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1236 "liveness.m"
                            {
#line 1237 "liveness.m"
                              {
#line 1237 "liveness.m"
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", (MR_String) "empty switch");
#line 1237 "liveness.m"
                                return;
                              }
#line 1236 "liveness.m"
                            }
#line 1235 "liveness.m"
                          else
#line 1231 "liveness.m"
                            {
#line 1231 "liveness.m"
                              MR_Word ll_backend__liveness__Cases_47;
#line 1231 "liveness.m"
                              MR_Word ll_backend__liveness__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__MaybeBornVarsDelayedDead_115, (MR_Integer) 0)));
#line 1231 "liveness.m"
                              MR_Word ll_backend__liveness__V_99_99;

#line 1231 "liveness.m"
                              *ll_backend__liveness__STATE_VARIABLE_BornVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_96_96, (MR_Integer) 0)));
#line 1231 "liveness.m"
                              *ll_backend__liveness__STATE_VARIABLE_DelayedDead_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_96_96, (MR_Integer) 1)));
#line 1232 "liveness.m"
                              {
#line 1232 "liveness.m"
                                ll_backend__liveness__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "liveness.m"
                                MR_hl_field(MR_mktag(0), ll_backend__liveness__V_99_99, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_3[2]));
#line 1232 "liveness.m"
                                MR_hl_field(MR_mktag(0), ll_backend__liveness__V_99_99, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_expr_9_p_0_2));
#line 1232 "liveness.m"
                                MR_hl_field(MR_mktag(0), ll_backend__liveness__V_99_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1232 "liveness.m"
                                MR_hl_field(MR_mktag(0), ll_backend__liveness__V_99_99, 3) = ((MR_Box) (*ll_backend__liveness__STATE_VARIABLE_DelayedDead_79));
#line 1232 "liveness.m"
                              }
#line 1232 "liveness.m"
                              {
#line 1232 "liveness.m"
                                ll_backend__liveness__Cases_47 = mercury__list__map_2_f_0((MR_Word) &ll_backend__liveness_scalar_common_2[1], (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, ll_backend__liveness__V_99_99, ll_backend__liveness__CaseDeaths_46);
                              }
#line 1234 "liveness.m"
                              {
#line 1234 "liveness.m"
                                MR_Word base;
#line 1234 "liveness.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "liveness.m"
                                *ll_backend__liveness__STATE_VARIABLE_GoalExpr_73 = base;
#line 1234 "liveness.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1234 "liveness.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__liveness__Var_43));
#line 1234 "liveness.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__liveness__CanFail_44));
#line 1234 "liveness.m"
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__liveness__Cases_47));
#line 1234 "liveness.m"
                              }
#line 1231 "liveness.m"
                            }
#line 1227 "liveness.m"
                        }
#line 1276 "liveness.m"
    *ll_backend__liveness__STATE_VARIABLE_GoalInfo_75 = ll_backend__liveness__STATE_VARIABLE_GoalInfo_0_74;
#line 1192 "liveness.m"
  }
#line 1187 "liveness.m"
}

#line 1182 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__var_is_named_2_p_0(
#line 1182 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_3,
#line 1182 "liveness.m"
  MR_Word ll_backend__liveness__Var_4)
#line 1182 "liveness.m"
{
#line 1185 "liveness.m"
  {
#line 1185 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1185 "liveness.m"
    MR_String ll_backend__liveness__V_5_5;

#line 1185 "liveness.m"
    {
#line 1185 "liveness.m"
      ll_backend__liveness__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__VarSet_3, ll_backend__liveness__Var_4, &ll_backend__liveness__V_5_5);
    }
#line 1185 "liveness.m"
    return ll_backend__liveness__succeeded;
#line 1185 "liveness.m"
  }
#line 1182 "liveness.m"
}

#line 1161 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0_1(
#line 1161 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 1161 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1)
#line 1161 "liveness.m"
{
#line 1161 "liveness.m"
  {
#line 1161 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1161 "liveness.m"
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;

#line 1161 "liveness.m"
    {
#line 1161 "liveness.m"
      return ll_backend__liveness__succeeded = ll_backend__liveness__var_is_named_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1));
    }
#line 1161 "liveness.m"
    return ll_backend__liveness__succeeded;
#line 1161 "liveness.m"
  }
#line 1161 "liveness.m"
}

#line 1150 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_goal_7_p_0(
#line 1150 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_8,
#line 1150 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_9,
#line 1150 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_0_30,
#line 1150 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_BornVars_31,
#line 1150 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_32,
#line 1150 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_DelayedDead_33,
#line 1150 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_12)
#line 1150 "liveness.m"
{
#line 1154 "liveness.m"
  {
#line 1154 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_43_43;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_8, (MR_Integer) 0)));
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_8, (MR_Integer) 1)));
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__PreBirths_15;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__PreDeaths0_16;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__PreDelayedDead_18;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__UnnamedPreDeaths_19;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo1_20;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_21;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo2_22;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__PostBirths_23;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__PostDeaths2_24;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__PostDelayedDead_25;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__UnnamedPostDeaths_26;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__ToBeKilled_27;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__PostDeaths_28;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_29;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_34_34;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__V_35_35;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_36_36;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_BornVars_37_37;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_38_38;
#line 1154 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_DelayedDead_41_41;

#line 1156 "liveness.m"
    {
#line 1156 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__liveness__GoalInfo0_14, &ll_backend__liveness__PreBirths_15);
    }
#line 1157 "liveness.m"
    {
#line 1157 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_14, &ll_backend__liveness__PreDeaths0_16);
    }
#line 5481 "ll_backend.liveness.c"
    ll_backend__liveness__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1160 "liveness.m"
    {
#line 1160 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__PreBirths_15, ll_backend__liveness__STATE_VARIABLE_BornVars_0_30, &ll_backend__liveness__STATE_VARIABLE_BornVars_34_34);
    }
#line 1161 "liveness.m"
    {
#line 1161 "liveness.m"
      ll_backend__liveness__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1161 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_35_35, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_6[0]));
#line 1161 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_35_35, 1) = ((MR_Box) (ll_backend__liveness__delay_death_goal_7_p_0_1));
#line 1161 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1161 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_35_35, 3) = ((MR_Box) (ll_backend__liveness__VarSet_12));
#line 1161 "liveness.m"
    }
#line 1161 "liveness.m"
    {
#line 1161 "liveness.m"
      parse_tree__set_of_var__divide_4_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__V_35_35, ll_backend__liveness__PreDeaths0_16, &ll_backend__liveness__PreDelayedDead_18, &ll_backend__liveness__UnnamedPreDeaths_19);
    }
#line 1163 "liveness.m"
    {
#line 1163 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__PreDelayedDead_18, ll_backend__liveness__STATE_VARIABLE_DelayedDead_0_32, &ll_backend__liveness__STATE_VARIABLE_DelayedDead_36_36);
    }
#line 1164 "liveness.m"
    {
#line 1164 "liveness.m"
      hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(ll_backend__liveness__UnnamedPreDeaths_19, ll_backend__liveness__GoalInfo0_14, &ll_backend__liveness__GoalInfo1_20);
    }
#line 1166 "liveness.m"
    {
#line 1166 "liveness.m"
      ll_backend__liveness__delay_death_goal_expr_9_p_0(ll_backend__liveness__GoalExpr0_13, &ll_backend__liveness__GoalExpr_21, ll_backend__liveness__GoalInfo1_20, &ll_backend__liveness__GoalInfo2_22, ll_backend__liveness__STATE_VARIABLE_BornVars_34_34, &ll_backend__liveness__STATE_VARIABLE_BornVars_37_37, ll_backend__liveness__STATE_VARIABLE_DelayedDead_36_36, &ll_backend__liveness__STATE_VARIABLE_DelayedDead_38_38, ll_backend__liveness__VarSet_12);
    }
#line 1169 "liveness.m"
    {
#line 1169 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo2_22, &ll_backend__liveness__PostBirths_23);
    }
#line 1170 "liveness.m"
    {
#line 1170 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo2_22, &ll_backend__liveness__PostDeaths2_24);
    }
#line 1172 "liveness.m"
    {
#line 1172 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__PostBirths_23, ll_backend__liveness__STATE_VARIABLE_BornVars_37_37, ll_backend__liveness__STATE_VARIABLE_BornVars_31);
    }
#line 1173 "liveness.m"
    {
#line 1173 "liveness.m"
      parse_tree__set_of_var__divide_4_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__V_35_35, ll_backend__liveness__PostDeaths2_24, &ll_backend__liveness__PostDelayedDead_25, &ll_backend__liveness__UnnamedPostDeaths_26);
    }
#line 1175 "liveness.m"
    {
#line 1175 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__PostDelayedDead_25, ll_backend__liveness__STATE_VARIABLE_DelayedDead_38_38, &ll_backend__liveness__STATE_VARIABLE_DelayedDead_41_41);
    }
#line 1176 "liveness.m"
    {
#line 1176 "liveness.m"
      parse_tree__set_of_var__divide_by_set_4_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__STATE_VARIABLE_BornVars_0_30, ll_backend__liveness__STATE_VARIABLE_DelayedDead_41_41, ll_backend__liveness__STATE_VARIABLE_DelayedDead_33, &ll_backend__liveness__ToBeKilled_27);
    }
#line 1178 "liveness.m"
    {
#line 1178 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_43_43, ll_backend__liveness__UnnamedPostDeaths_26, ll_backend__liveness__ToBeKilled_27, &ll_backend__liveness__PostDeaths_28);
    }
#line 1179 "liveness.m"
    {
#line 1179 "liveness.m"
      hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeaths_28, ll_backend__liveness__GoalInfo2_22, &ll_backend__liveness__GoalInfo_29);
    }
#line 1180 "liveness.m"
    {
#line 1180 "liveness.m"
      MR_Word base;
#line 1180 "liveness.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "liveness.m"
      *ll_backend__liveness__Goal_9 = base;
#line 1180 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_21));
#line 1180 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_29));
#line 1180 "liveness.m"
    }
#line 1154 "liveness.m"
  }
#line 1150 "liveness.m"
}

#line 1138 "liveness.m"
static void MR_CALL 
ll_backend__liveness__delay_death_proc_body_4_p_0(
#line 1138 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_5,
#line 1138 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_6,
#line 1138 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_7,
#line 1138 "liveness.m"
  MR_Word ll_backend__liveness__BornVars0_8)
#line 1138 "liveness.m"
{
#line 1141 "liveness.m"
  {
#line 1141 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__Goal1_9;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__DelayedDead_11;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_12;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo1_13;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__PostDeaths1_14;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__PostDeaths_15;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_16;
#line 1141 "liveness.m"
    MR_Word ll_backend__liveness__V_17_17;
#line 1142 "liveness.m"
    MR_Word ll_backend__liveness__V_10_10;

#line 1142 "liveness.m"
    {
#line 1142 "liveness.m"
      ll_backend__liveness__V_17_17 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_18_18);
    }
#line 1142 "liveness.m"
    {
#line 1142 "liveness.m"
      ll_backend__liveness__delay_death_goal_7_p_0(ll_backend__liveness__Goal0_5, &ll_backend__liveness__Goal1_9, ll_backend__liveness__BornVars0_8, &ll_backend__liveness__V_10_10, ll_backend__liveness__V_17_17, &ll_backend__liveness__DelayedDead_11, ll_backend__liveness__VarSet_7);
    }
#line 1144 "liveness.m"
    ll_backend__liveness__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_9, (MR_Integer) 0)));
#line 1144 "liveness.m"
    ll_backend__liveness__GoalInfo1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_9, (MR_Integer) 1)));
#line 1145 "liveness.m"
    {
#line 1145 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo1_13, &ll_backend__liveness__PostDeaths1_14);
    }
#line 1146 "liveness.m"
    {
#line 1146 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__PostDeaths1_14, ll_backend__liveness__DelayedDead_11, &ll_backend__liveness__PostDeaths_15);
    }
#line 1147 "liveness.m"
    {
#line 1147 "liveness.m"
      hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeaths_15, ll_backend__liveness__GoalInfo1_13, &ll_backend__liveness__GoalInfo_16);
    }
#line 1148 "liveness.m"
    {
#line 1148 "liveness.m"
      MR_Word base;
#line 1148 "liveness.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "liveness.m"
      *ll_backend__liveness__Goal_6 = base;
#line 1148 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_12));
#line 1148 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_16));
#line 1148 "liveness.m"
    }
#line 1141 "liveness.m"
  }
#line 1138 "liveness.m"
}

#line 1106 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_case_2_p_0(
#line 1106 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1106 "liveness.m"
  MR_Word * ll_backend__liveness__ReachableGoal_7)
#line 1106 "liveness.m"
{
#line 1108 "liveness.m"
  while (MR_TRUE)
#line 1108 "liveness.m"
    {
#line 1108 "liveness.m"
      /* tailcall optimized into a loop */
#line 1108 "liveness.m"
      {
#line 1108 "liveness.m"
        MR_bool ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1108 "liveness.m"
        MR_Word ll_backend__liveness__Goal_5;
#line 1108 "liveness.m"
        MR_Word ll_backend__liveness__Cases_6;
#line 1108 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_9;
#line 1108 "liveness.m"
        MR_Word ll_backend__liveness__InstmapDelta_10;
#line 1108 "liveness.m"
        MR_Word ll_backend__liveness__V_11_11;
#line 1108 "liveness.m"
        MR_Word ll_backend__liveness__V_3_3;
#line 1108 "liveness.m"
        MR_Word ll_backend__liveness__V_4_4;
#line 1109 "liveness.m"
        MR_Word ll_backend__liveness__V_8_8;

#line 1108 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 1108 "liveness.m"
          {
#line 1108 "liveness.m"
            ll_backend__liveness__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1108 "liveness.m"
            ll_backend__liveness__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1108 "liveness.m"
            ll_backend__liveness__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_11_11, (MR_Integer) 0)));
#line 1108 "liveness.m"
            ll_backend__liveness__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_11_11, (MR_Integer) 1)));
#line 1108 "liveness.m"
            ll_backend__liveness__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_11_11, (MR_Integer) 2)));
#line 1109 "liveness.m"
            ll_backend__liveness__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_5, (MR_Integer) 0)));
#line 1109 "liveness.m"
            ll_backend__liveness__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_5, (MR_Integer) 1)));
#line 1110 "liveness.m"
            {
#line 1110 "liveness.m"
              ll_backend__liveness__InstmapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_9);
            }
#line 1111 "liveness.m"
            {
#line 1111 "liveness.m"
              ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstmapDelta_10);
            }
#line 1113 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1112 "liveness.m"
              {
#line 1112 "liveness.m"
                /* direct tailcall eliminated */
#line 1112 "liveness.m"
                {
#line 1112 "liveness.m"
                  MR_Word ll_backend__liveness__HeadVar__1__tmp_copy_1 = ll_backend__liveness__Cases_6;

#line 1112 "liveness.m"
                  ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__HeadVar__1__tmp_copy_1;
#line 1112 "liveness.m"
                }
#line 1112 "liveness.m"
                continue;
#line 1112 "liveness.m"
              }
#line 1113 "liveness.m"
            else
#line 1114 "liveness.m"
              {
#line 1114 "liveness.m"
                *ll_backend__liveness__ReachableGoal_7 = ll_backend__liveness__Goal_5;
#line 1114 "liveness.m"
                ll_backend__liveness__succeeded = MR_TRUE;
#line 1114 "liveness.m"
              }
#line 1108 "liveness.m"
          }
#line 1108 "liveness.m"
        return ll_backend__liveness__succeeded;
#line 1108 "liveness.m"
      }
#line 1108 "liveness.m"
      break;
#line 1108 "liveness.m"
    }
#line 1106 "liveness.m"
}

#line 1095 "liveness.m"
static MR_bool MR_CALL 
ll_backend__liveness__find_reachable_goal_2_p_0(
#line 1095 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1095 "liveness.m"
  MR_Word * ll_backend__liveness__ReachableGoal_5)
#line 1095 "liveness.m"
{
#line 1097 "liveness.m"
  while (MR_TRUE)
#line 1097 "liveness.m"
    {
#line 1097 "liveness.m"
      /* tailcall optimized into a loop */
#line 1097 "liveness.m"
      {
#line 1097 "liveness.m"
        MR_bool ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1097 "liveness.m"
        MR_Word ll_backend__liveness__Goal_3;
#line 1097 "liveness.m"
        MR_Word ll_backend__liveness__Goals_4;
#line 1097 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_7;
#line 1097 "liveness.m"
        MR_Word ll_backend__liveness__InstmapDelta_8;
#line 1098 "liveness.m"
        MR_Word ll_backend__liveness__V_6_6;

#line 1097 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 1097 "liveness.m"
          {
#line 1097 "liveness.m"
            ll_backend__liveness__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1097 "liveness.m"
            ll_backend__liveness__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "liveness.m"
            ll_backend__liveness__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_3, (MR_Integer) 0)));
#line 1098 "liveness.m"
            ll_backend__liveness__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_3, (MR_Integer) 1)));
#line 1099 "liveness.m"
            {
#line 1099 "liveness.m"
              ll_backend__liveness__InstmapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_7);
            }
#line 1100 "liveness.m"
            {
#line 1100 "liveness.m"
              ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta_8);
            }
#line 1102 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 1101 "liveness.m"
              {
#line 1101 "liveness.m"
                *ll_backend__liveness__ReachableGoal_5 = ll_backend__liveness__Goal_3;
#line 1101 "liveness.m"
                ll_backend__liveness__succeeded = MR_TRUE;
#line 1101 "liveness.m"
              }
#line 1102 "liveness.m"
            else
#line 1103 "liveness.m"
              {
#line 1103 "liveness.m"
                /* direct tailcall eliminated */
#line 1103 "liveness.m"
                {
#line 1103 "liveness.m"
                  MR_Word ll_backend__liveness__HeadVar__1__tmp_copy_1 = ll_backend__liveness__Goals_4;

#line 1103 "liveness.m"
                  ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__HeadVar__1__tmp_copy_1;
#line 1103 "liveness.m"
                }
#line 1103 "liveness.m"
                continue;
#line 1103 "liveness.m"
              }
#line 1097 "liveness.m"
          }
#line 1097 "liveness.m"
        return ll_backend__liveness__succeeded;
#line 1097 "liveness.m"
      }
#line 1097 "liveness.m"
      break;
#line 1097 "liveness.m"
    }
#line 1095 "liveness.m"
}

#line 1087 "liveness.m"
static void MR_CALL 
ll_backend__liveness__update_liveness_conj_4_p_0(
#line 1087 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 1087 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_2,
#line 1087 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
#line 1087 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4)
#line 1087 "liveness.m"
{
#line 1090 "liveness.m"
  while (MR_TRUE)
#line 1090 "liveness.m"
    {
#line 1090 "liveness.m"
      /* tailcall optimized into a loop */
#line 1090 "liveness.m"
      {
#line 1090 "liveness.m"
        MR_bool ll_backend__liveness__succeeded;

#line 1090 "liveness.m"
        if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1090 "liveness.m"
          *ll_backend__liveness__STATE_VARIABLE_Liveness_4 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_3;
#line 1090 "liveness.m"
        else
#line 1091 "liveness.m"
          {
#line 1091 "liveness.m"
            MR_Word ll_backend__liveness__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 1091 "liveness.m"
            MR_Word ll_backend__liveness__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 1091 "liveness.m"
            MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_15_15;

#line 1092 "liveness.m"
            {
#line 1092 "liveness.m"
              ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal_9, ll_backend__liveness__LiveInfo_2, ll_backend__liveness__STATE_VARIABLE_Liveness_0_3, &ll_backend__liveness__STATE_VARIABLE_Liveness_15_15);
            }
#line 1093 "liveness.m"
            /* direct tailcall eliminated */
#line 1093 "liveness.m"
            {
#line 1093 "liveness.m"
              MR_Word ll_backend__liveness__HeadVar__1__tmp_copy_1 = ll_backend__liveness__Goals_10;
#line 1093 "liveness.m"
              MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0__tmp_copy_3 = ll_backend__liveness__STATE_VARIABLE_Liveness_15_15;

#line 1093 "liveness.m"
              ll_backend__liveness__STATE_VARIABLE_Liveness_0_3 = ll_backend__liveness__STATE_VARIABLE_Liveness_0__tmp_copy_3;
#line 1093 "liveness.m"
              ll_backend__liveness__HeadVar__1_1 = ll_backend__liveness__HeadVar__1__tmp_copy_1;
#line 1093 "liveness.m"
            }
#line 1093 "liveness.m"
            continue;
#line 1091 "liveness.m"
          }
#line 1090 "liveness.m"
      }
#line 1090 "liveness.m"
      break;
#line 1090 "liveness.m"
    }
#line 1087 "liveness.m"
}

#line 1019 "liveness.m"
static void MR_CALL 
ll_backend__liveness__update_liveness_expr_4_p_0(
#line 1019 "liveness.m"
  MR_Word ll_backend__liveness__GoalExpr_5,
#line 1019 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_6,
#line 1019 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_55,
#line 1019 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_56)
#line 1019 "liveness.m"
{
#line 1024 "liveness.m"
  {
#line 1024 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 1024 "liveness.m"
    if (((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 0))))
#line 1069 "liveness.m"
      {
#line 1069 "liveness.m"
        MR_Word ll_backend__liveness__SubGoal_50 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__GoalExpr_5), (MR_Integer) 0);

#line 1070 "liveness.m"
        {
#line 1070 "liveness.m"
          ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__SubGoal_50, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
#line 1070 "liveness.m"
          return;
        }
#line 1069 "liveness.m"
      }
#line 1024 "liveness.m"
    else
#line 1024 "liveness.m"
      if (((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 2))))
#line 1024 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
#line 1024 "liveness.m"
      else
#line 1024 "liveness.m"
        if (((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 1))))
#line 1027 "liveness.m"
          *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
#line 1024 "liveness.m"
        else
#line 1024 "liveness.m"
          if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1026 "liveness.m"
            *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
#line 1024 "liveness.m"
          else
#line 1024 "liveness.m"
            if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1030 "liveness.m"
              {
#line 1030 "liveness.m"
                MR_Word ll_backend__liveness__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 2)));
#line 1030 "liveness.m"
                MR_Word ll_backend__liveness___ConjType_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));

#line 1032 "liveness.m"
                {
#line 1032 "liveness.m"
                  ll_backend__liveness__update_liveness_conj_4_p_0(ll_backend__liveness__Goals_32, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
#line 1032 "liveness.m"
                  return;
                }
#line 1030 "liveness.m"
              }
#line 1024 "liveness.m"
            else
#line 1024 "liveness.m"
              if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1034 "liveness.m"
                {
#line 1034 "liveness.m"
                  MR_Word ll_backend__liveness__Goals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));
#line 1037 "liveness.m"
                  MR_Word ll_backend__liveness__Goal_33;

#line 1035 "liveness.m"
                  {
#line 1035 "liveness.m"
                    ll_backend__liveness__succeeded = ll_backend__liveness__find_reachable_goal_2_p_0(ll_backend__liveness__Goals_71, &ll_backend__liveness__Goal_33);
                  }
#line 1037 "liveness.m"
                  if (ll_backend__liveness__succeeded)
#line 1036 "liveness.m"
                    {
#line 1036 "liveness.m"
                      ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal_33, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
#line 1036 "liveness.m"
                      return;
                    }
#line 1037 "liveness.m"
                  else
#line 1036 "liveness.m"
                    *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
#line 1034 "liveness.m"
                }
#line 1024 "liveness.m"
              else
#line 1024 "liveness.m"
                if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1025 "liveness.m"
                  *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
#line 1024 "liveness.m"
                else
#line 1024 "liveness.m"
                  if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1048 "liveness.m"
                    {
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__Cond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 2)));
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__Then_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 3)));
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__Else_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 4)));
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__ElseGoalInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else_40, (MR_Integer) 1)));
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__ElseInstmapDelta_43;
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__CondGoalInfo_45;
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__CondInstmapDelta_46;
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__ThenGoalInfo_48;
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__ThenInstmapDelta_49;
#line 1048 "liveness.m"
                      MR_Word ll_backend__liveness__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));
#line 1049 "liveness.m"
                      MR_Word ll_backend__liveness__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else_40, (MR_Integer) 0)));
#line 1051 "liveness.m"
                      MR_Word ll_backend__liveness__V_44_44;
#line 1053 "liveness.m"
                      MR_Word ll_backend__liveness__V_47_47;

#line 1050 "liveness.m"
                      {
#line 1050 "liveness.m"
                        ll_backend__liveness__ElseInstmapDelta_43 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__ElseGoalInfo_42);
                      }
#line 1051 "liveness.m"
                      ll_backend__liveness__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond_38, (MR_Integer) 0)));
#line 1051 "liveness.m"
                      ll_backend__liveness__CondGoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond_38, (MR_Integer) 1)));
#line 1052 "liveness.m"
                      {
#line 1052 "liveness.m"
                        ll_backend__liveness__CondInstmapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__CondGoalInfo_45);
                      }
#line 1053 "liveness.m"
                      ll_backend__liveness__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Then_39, (MR_Integer) 0)));
#line 1053 "liveness.m"
                      ll_backend__liveness__ThenGoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Then_39, (MR_Integer) 1)));
#line 1054 "liveness.m"
                      {
#line 1054 "liveness.m"
                        ll_backend__liveness__ThenInstmapDelta_49 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__ThenGoalInfo_48);
                      }
#line 1056 "liveness.m"
                      {
#line 1056 "liveness.m"
                        ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__ElseInstmapDelta_43);
                      }
#line 1059 "liveness.m"
                      if (ll_backend__liveness__succeeded)
#line 1058 "liveness.m"
                        {
#line 1058 "liveness.m"
                          ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Else_40, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
#line 1058 "liveness.m"
                          return;
                        }
#line 1059 "liveness.m"
                      else
#line 1065 "liveness.m"
                        {
#line 1060 "liveness.m"
                          {
#line 1060 "liveness.m"
                            ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__CondInstmapDelta_46);
                          }
#line 1060 "liveness.m"
                          if (ll_backend__liveness__succeeded)
#line 1061 "liveness.m"
                            {
#line 1061 "liveness.m"
                              ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__ThenInstmapDelta_49);
                            }
#line 1065 "liveness.m"
                          if (ll_backend__liveness__succeeded)
#line 1063 "liveness.m"
                            {
#line 1063 "liveness.m"
                              MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_66_66;

#line 1063 "liveness.m"
                              {
#line 1063 "liveness.m"
                                ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Cond_38, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, &ll_backend__liveness__STATE_VARIABLE_Liveness_66_66);
                              }
#line 1064 "liveness.m"
                              {
#line 1064 "liveness.m"
                                ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Then_39, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_66_66, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
#line 1064 "liveness.m"
                                return;
                              }
#line 1063 "liveness.m"
                            }
#line 1065 "liveness.m"
                          else
#line 1064 "liveness.m"
                            *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
#line 1065 "liveness.m"
                        }
#line 1048 "liveness.m"
                    }
#line 1024 "liveness.m"
                  else
#line 1024 "liveness.m"
                    if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1072 "liveness.m"
                      {
#line 1072 "liveness.m"
                        MR_Word ll_backend__liveness__Reason_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));
#line 1072 "liveness.m"
                        MR_Word ll_backend__liveness__SubGoal_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 2)));
#line 1077 "liveness.m"
                        MR_Word ll_backend__liveness__TermVar_52;
#line 1073 "liveness.m"
                        MR_Word ll_backend__liveness__V_60_60;

#line 1073 "liveness.m"
                        ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_51, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1073 "liveness.m"
                        if (ll_backend__liveness__succeeded)
#line 1073 "liveness.m"
                          {
#line 1073 "liveness.m"
                            ll_backend__liveness__TermVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_51, (MR_Integer) 1)));
#line 1073 "liveness.m"
                            ll_backend__liveness__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_51, (MR_Integer) 2)));
#line 1073 "liveness.m"
                            ll_backend__liveness__succeeded = (ll_backend__liveness__V_60_60 == (MR_Integer) 1);
#line 1073 "liveness.m"
                          }
#line 1077 "liveness.m"
                        if (ll_backend__liveness__succeeded)
#line 1075 "liveness.m"
                          {
#line 1075 "liveness.m"
                            MR_Word ll_backend__liveness__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1075 "liveness.m"
                            MR_Word ll_backend__liveness__CompletedTermVars_53;
#line 1075 "liveness.m"
                            MR_Word ll_backend__liveness__V_61_61;
#line 1075 "liveness.m"
                            MR_Word ll_backend__liveness__V_79_79;
#line 1075 "liveness.m"
                            MR_Word ll_backend__liveness__V_84_84;
#line 1075 "liveness.m"
                            MR_Word ll_backend__liveness__V_85_85;
#line 1866 "liveness.m"
                            MR_Word ll_backend__liveness__V_82_82;
#line 1866 "liveness.m"
                            MR_Word ll_backend__liveness__V_83_83;

#line 1074 "liveness.m"
                            {
#line 1074 "liveness.m"
                              ll_backend__liveness__V_61_61 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_75_75, ll_backend__liveness__TermVar_52);
                            }
#line 1866 "liveness.m"
                            ll_backend__liveness__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 0)));
#line 1866 "liveness.m"
                            ll_backend__liveness__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 1)));
#line 1866 "liveness.m"
                            ll_backend__liveness__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 2)));
#line 1866 "liveness.m"
                            ll_backend__liveness__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 3)));
#line 1866 "liveness.m"
                            ll_backend__liveness__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 4)));
#line 1866 "liveness.m"
                            {
#line 1866 "liveness.m"
                              hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__V_61_61, ll_backend__liveness__V_79_79, ll_backend__liveness__V_84_84, ll_backend__liveness__V_85_85, &ll_backend__liveness__CompletedTermVars_53);
                            }
#line 1076 "liveness.m"
                            {
#line 1076 "liveness.m"
                              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_75_75, ll_backend__liveness__CompletedTermVars_53, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
#line 1076 "liveness.m"
                              return;
                            }
#line 1075 "liveness.m"
                          }
#line 1077 "liveness.m"
                        else
#line 1080 "liveness.m"
                          {
#line 1080 "liveness.m"
                            ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__SubGoal_74, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
#line 1080 "liveness.m"
                            return;
                          }
#line 1072 "liveness.m"
                      }
#line 1024 "liveness.m"
                    else
#line 1024 "liveness.m"
                      if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1083 "liveness.m"
                        {
#line 1084 "liveness.m"
                          {
#line 1084 "liveness.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.update_liveness_expr\'/4", (MR_String) "shorthand");
#line 1084 "liveness.m"
                            return;
                          }
#line 1083 "liveness.m"
                        }
#line 1024 "liveness.m"
                      else
#line 1041 "liveness.m"
                        {
#line 1041 "liveness.m"
                          MR_Word ll_backend__liveness__Cases_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 3)));
#line 1041 "liveness.m"
                          MR_Word ll_backend__liveness__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 1)));
#line 1041 "liveness.m"
                          MR_Word ll_backend__liveness__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_5, (MR_Integer) 2)));
#line 1044 "liveness.m"
                          MR_Word ll_backend__liveness__Goal_72;

#line 1042 "liveness.m"
                          {
#line 1042 "liveness.m"
                            ll_backend__liveness__succeeded = ll_backend__liveness__find_reachable_case_2_p_0(ll_backend__liveness__Cases_36, &ll_backend__liveness__Goal_72);
                          }
#line 1044 "liveness.m"
                          if (ll_backend__liveness__succeeded)
#line 1043 "liveness.m"
                            {
#line 1043 "liveness.m"
                              ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal_72, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_0_55, ll_backend__liveness__STATE_VARIABLE_Liveness_56);
#line 1043 "liveness.m"
                              return;
                            }
#line 1044 "liveness.m"
                          else
#line 1043 "liveness.m"
                            *ll_backend__liveness__STATE_VARIABLE_Liveness_56 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_55;
#line 1041 "liveness.m"
                        }
#line 1024 "liveness.m"
  }
#line 1019 "liveness.m"
}

#line 997 "liveness.m"
static void MR_CALL 
ll_backend__liveness__update_liveness_goal_4_p_0(
#line 997 "liveness.m"
  MR_Word ll_backend__liveness__Goal_5,
#line 997 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_6,
#line 997 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_20,
#line 997 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_21)
#line 997 "liveness.m"
{
#line 1000 "liveness.m"
  {
#line 1000 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_28_28;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_5, (MR_Integer) 0)));
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_5, (MR_Integer) 1)));
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__PreDeaths_10;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__PreBirths_11;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__PostDeaths_12;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__PostBirths_13;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__OldLiveness_15;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__NewLiveness0_16;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__V_17_17;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__CompletedNonLocals_18;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__NewLiveness_19;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_23_23;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_24_24;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_25_25;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_26_26;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__V_36_36;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__V_41_41;
#line 1000 "liveness.m"
    MR_Word ll_backend__liveness__V_42_42;
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_39_39;
#line 1866 "liveness.m"
    MR_Word ll_backend__liveness__V_40_40;

#line 1002 "liveness.m"
    {
#line 1002 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo_9, &ll_backend__liveness__PreDeaths_10);
    }
#line 1003 "liveness.m"
    {
#line 1003 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__liveness__GoalInfo_9, &ll_backend__liveness__PreBirths_11);
    }
#line 1004 "liveness.m"
    {
#line 1004 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo_9, &ll_backend__liveness__PostDeaths_12);
    }
#line 1005 "liveness.m"
    {
#line 1005 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo_9, &ll_backend__liveness__PostBirths_13);
    }
#line 6388 "ll_backend.liveness.c"
    ll_backend__liveness__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1008 "liveness.m"
    {
#line 1008 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__STATE_VARIABLE_Liveness_0_20, ll_backend__liveness__PreDeaths_10, &ll_backend__liveness__STATE_VARIABLE_Liveness_22_22);
    }
#line 1009 "liveness.m"
    {
#line 1009 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__PreBirths_11, ll_backend__liveness__STATE_VARIABLE_Liveness_22_22, &ll_backend__liveness__STATE_VARIABLE_Liveness_23_23);
    }
#line 1010 "liveness.m"
    {
#line 1010 "liveness.m"
      ll_backend__liveness__update_liveness_expr_4_p_0(ll_backend__liveness__GoalExpr_8, ll_backend__liveness__LiveInfo_6, ll_backend__liveness__STATE_VARIABLE_Liveness_23_23, &ll_backend__liveness__STATE_VARIABLE_Liveness_24_24);
    }
#line 1011 "liveness.m"
    {
#line 1011 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__STATE_VARIABLE_Liveness_24_24, ll_backend__liveness__PostDeaths_12, &ll_backend__liveness__STATE_VARIABLE_Liveness_25_25);
    }
#line 1012 "liveness.m"
    {
#line 1012 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__PostBirths_13, ll_backend__liveness__STATE_VARIABLE_Liveness_25_25, &ll_backend__liveness__STATE_VARIABLE_Liveness_26_26);
    }
#line 1014 "liveness.m"
    {
#line 1014 "liveness.m"
      parse_tree__set_of_var__divide_by_set_4_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__STATE_VARIABLE_Liveness_0_20, ll_backend__liveness__STATE_VARIABLE_Liveness_26_26, &ll_backend__liveness__OldLiveness_15, &ll_backend__liveness__NewLiveness0_16);
    }
#line 1859 "liveness.m"
    {
#line 1859 "liveness.m"
      ll_backend__liveness__V_17_17 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__liveness__GoalInfo_9);
    }
#line 1866 "liveness.m"
    ll_backend__liveness__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 0)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 1)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 2)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 3)));
#line 1866 "liveness.m"
    ll_backend__liveness__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_6, (MR_Integer) 4)));
#line 1866 "liveness.m"
    {
#line 1866 "liveness.m"
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__V_17_17, ll_backend__liveness__V_36_36, ll_backend__liveness__V_41_41, ll_backend__liveness__V_42_42, &ll_backend__liveness__CompletedNonLocals_18);
    }
#line 1016 "liveness.m"
    {
#line 1016 "liveness.m"
      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__NewLiveness0_16, ll_backend__liveness__CompletedNonLocals_18, &ll_backend__liveness__NewLiveness_19);
    }
#line 1017 "liveness.m"
    {
#line 1017 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_28_28, ll_backend__liveness__OldLiveness_15, ll_backend__liveness__NewLiveness_19, ll_backend__liveness__STATE_VARIABLE_Liveness_21);
#line 1017 "liveness.m"
      return;
    }
#line 1000 "liveness.m"
  }
#line 997 "liveness.m"
}

#line 980 "liveness.m"
static void MR_CALL 
ll_backend__liveness__add_branch_pre_deaths_6_p_0(
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__DeadnessGoal_7,
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__Deadness0_8,
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__CompletedNonLocalUnion_9,
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__InstmapReachable_10,
#line 980 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Goal_0_14,
#line 980 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Goal_15)
#line 980 "liveness.m"
{
#line 984 "liveness.m"
  {
#line 984 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 984 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 984 "liveness.m"
    MR_Word ll_backend__liveness__PreDeaths_12;

#line 985 "liveness.m"
    {
#line 985 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__CompletedNonLocalUnion_9, ll_backend__liveness__DeadnessGoal_7, &ll_backend__liveness__PreDeaths_12);
    }
#line 989 "liveness.m"
    if ((ll_backend__liveness__InstmapReachable_10 == (MR_Integer) 0))
#line 990 "liveness.m"
      {
#line 990 "liveness.m"
        MR_Word ll_backend__liveness__FilteredPreDeaths_13;
#line 990 "liveness.m"
        MR_Word ll_backend__liveness__GoalExpr_22;
#line 990 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo0_23;
#line 990 "liveness.m"
        MR_Word ll_backend__liveness__PreDeaths0_24;
#line 990 "liveness.m"
        MR_Word ll_backend__liveness__PreDeaths_25;
#line 990 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_26;

#line 991 "liveness.m"
        {
#line 991 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_18_18, ll_backend__liveness__PreDeaths_12, ll_backend__liveness__Deadness0_8, &ll_backend__liveness__FilteredPreDeaths_13);
        }
#line 1813 "liveness.m"
        ll_backend__liveness__GoalExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__STATE_VARIABLE_Goal_0_14, (MR_Integer) 0)));
#line 1813 "liveness.m"
        ll_backend__liveness__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__STATE_VARIABLE_Goal_0_14, (MR_Integer) 1)));
#line 1814 "liveness.m"
        {
#line 1814 "liveness.m"
          hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_23, &ll_backend__liveness__PreDeaths0_24);
        }
#line 1815 "liveness.m"
        {
#line 1815 "liveness.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PreDeaths0_24, ll_backend__liveness__FilteredPreDeaths_13, &ll_backend__liveness__PreDeaths_25);
        }
#line 1816 "liveness.m"
        {
#line 1816 "liveness.m"
          hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(ll_backend__liveness__PreDeaths_25, ll_backend__liveness__GoalInfo0_23, &ll_backend__liveness__GoalInfo_26);
        }
#line 1817 "liveness.m"
        {
#line 1817 "liveness.m"
          MR_Word base;
#line 1817 "liveness.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1817 "liveness.m"
          *ll_backend__liveness__STATE_VARIABLE_Goal_15 = base;
#line 1817 "liveness.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_22));
#line 1817 "liveness.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_26));
#line 1817 "liveness.m"
        }
#line 990 "liveness.m"
      }
#line 989 "liveness.m"
    else
#line 1812 "liveness.m"
      {
#line 1812 "liveness.m"
        MR_Word ll_backend__liveness__GoalExpr_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__STATE_VARIABLE_Goal_0_14, (MR_Integer) 0)));
#line 1812 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__STATE_VARIABLE_Goal_0_14, (MR_Integer) 1)));
#line 1812 "liveness.m"
        MR_Word ll_backend__liveness__PreDeaths0_33;
#line 1812 "liveness.m"
        MR_Word ll_backend__liveness__PreDeaths_34;
#line 1812 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_35;

#line 1814 "liveness.m"
        {
#line 1814 "liveness.m"
          hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_32, &ll_backend__liveness__PreDeaths0_33);
        }
#line 1815 "liveness.m"
        {
#line 1815 "liveness.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PreDeaths0_33, ll_backend__liveness__PreDeaths_12, &ll_backend__liveness__PreDeaths_34);
        }
#line 1816 "liveness.m"
        {
#line 1816 "liveness.m"
          hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(ll_backend__liveness__PreDeaths_34, ll_backend__liveness__GoalInfo0_32, &ll_backend__liveness__GoalInfo_35);
        }
#line 1817 "liveness.m"
        {
#line 1817 "liveness.m"
          MR_Word base;
#line 1817 "liveness.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1817 "liveness.m"
          *ll_backend__liveness__STATE_VARIABLE_Goal_15 = base;
#line 1817 "liveness.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_31));
#line 1817 "liveness.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_35));
#line 1817 "liveness.m"
        }
#line 1812 "liveness.m"
      }
#line 984 "liveness.m"
  }
#line 980 "liveness.m"
}

#line 967 "liveness.m"
static void MR_CALL 
ll_backend__liveness__union_branch_deadness_5_p_0(
#line 967 "liveness.m"
  MR_Word ll_backend__liveness__DeadnessGoal_6,
#line 967 "liveness.m"
  MR_Word ll_backend__liveness__Deadness0_7,
#line 967 "liveness.m"
  MR_Word ll_backend__liveness__InstmapReachable_8,
#line 967 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_11,
#line 967 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_12)
#line 967 "liveness.m"
{
#line 972 "liveness.m"
  {
#line 972 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 972 "liveness.m"
    if ((ll_backend__liveness__InstmapReachable_8 == (MR_Integer) 0))
#line 975 "liveness.m"
      {
#line 975 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 975 "liveness.m"
        MR_Word ll_backend__liveness__FilteredDeadnessGoal_10;

#line 976 "liveness.m"
        {
#line 976 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_16, ll_backend__liveness__DeadnessGoal_6, ll_backend__liveness__Deadness0_7, &ll_backend__liveness__FilteredDeadnessGoal_10);
        }
#line 977 "liveness.m"
        {
#line 977 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_16, ll_backend__liveness__STATE_VARIABLE_Union_0_11, ll_backend__liveness__FilteredDeadnessGoal_10, ll_backend__liveness__STATE_VARIABLE_Union_12);
#line 977 "liveness.m"
          return;
        }
#line 975 "liveness.m"
      }
#line 972 "liveness.m"
    else
#line 972 "liveness.m"
      {
#line 973 "liveness.m"
        {
#line 973 "liveness.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_11, ll_backend__liveness__DeadnessGoal_6, ll_backend__liveness__STATE_VARIABLE_Union_12);
#line 973 "liveness.m"
          return;
        }
#line 972 "liveness.m"
      }
#line 972 "liveness.m"
  }
#line 967 "liveness.m"
}

#line 909 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 909 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__CompletedNonLocals_5,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__6_6,
#line 909 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_7,
#line 909 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_8,
#line 909 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_9)
#line 909 "liveness.m"
{
#line 914 "liveness.m"
  {
#line 914 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 914 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "liveness.m"
      {
#line 914 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 915 "liveness.m"
        {
#line 915 "liveness.m"
          parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_7, ll_backend__liveness__CompletedNonLocals_5, ll_backend__liveness__CompletedNonLocalUnion_9);
        }
#line 914 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Union_8 = ll_backend__liveness__STATE_VARIABLE_Union_0_7;
#line 914 "liveness.m"
      }
#line 914 "liveness.m"
    else
#line 918 "liveness.m"
      {
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__Goal_20;
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__Goals_21;
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__Goal1_28;
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__DeadnessGoal_29;
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo1_31;
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__InstmapDelta1_32;
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__InstmapReachable_33;
#line 918 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_Union_36_36;
#line 925 "liveness.m"
        MR_Word ll_backend__liveness__V_30_30;

#line 919 "liveness.m"
        {
#line 919 "liveness.m"
          ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_18, &ll_backend__liveness__Goal1_28, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__6_6);
        }
#line 921 "liveness.m"
        {
#line 921 "liveness.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__STATE_VARIABLE_Union_0_7, &ll_backend__liveness__STATE_VARIABLE_Union_36_36);
        }
#line 922 "liveness.m"
        {
#line 922 "liveness.m"
          ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(ll_backend__liveness__Goals0_19, &ll_backend__liveness__Goals_21, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__CompletedNonLocals_5, ll_backend__liveness__HeadVar__6_6, ll_backend__liveness__STATE_VARIABLE_Union_36_36, ll_backend__liveness__STATE_VARIABLE_Union_8, ll_backend__liveness__CompletedNonLocalUnion_9);
        }
#line 925 "liveness.m"
        ll_backend__liveness__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_28, (MR_Integer) 0)));
#line 925 "liveness.m"
        ll_backend__liveness__GoalInfo1_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_28, (MR_Integer) 1)));
#line 926 "liveness.m"
        {
#line 926 "liveness.m"
          ll_backend__liveness__InstmapDelta1_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo1_31);
        }
#line 927 "liveness.m"
        {
#line 927 "liveness.m"
          ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta1_32);
        }
#line 929 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 928 "liveness.m"
          ll_backend__liveness__InstmapReachable_33 = (MR_Integer) 1;
#line 929 "liveness.m"
        else
#line 930 "liveness.m"
          {
#line 930 "liveness.m"
            {
#line 930 "liveness.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_deadness_in_par_conj\'/9", (MR_String) "unreachable instmap");
#line 930 "liveness.m"
              return;
            }
#line 930 "liveness.m"
          }
#line 932 "liveness.m"
        {
#line 932 "liveness.m"
          ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__3_3, *ll_backend__liveness__CompletedNonLocalUnion_9, ll_backend__liveness__InstmapReachable_33, ll_backend__liveness__Goal1_28, &ll_backend__liveness__Goal_20);
        }
#line 918 "liveness.m"
        {
#line 918 "liveness.m"
          MR_Word base;
#line 918 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 918 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_20));
#line 918 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_21));
#line 918 "liveness.m"
        }
#line 918 "liveness.m"
      }
#line 914 "liveness.m"
  }
#line 909 "liveness.m"
}

#line 874 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_cases_10_p_0(
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__SwitchVar_1,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2,
#line 874 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__3_3,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__CompletedNonLocals_6,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_7,
#line 874 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_8,
#line 874 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_9,
#line 874 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_10)
#line 874 "liveness.m"
{
#line 879 "liveness.m"
  {
#line 879 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 879 "liveness.m"
    if ((ll_backend__liveness__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "liveness.m"
      {
#line 879 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_48_48;
#line 879 "liveness.m"
        MR_Word ll_backend__liveness__CompletedSwitchVar_18;
#line 879 "liveness.m"
        MR_Word ll_backend__liveness__V_21_21;
#line 879 "liveness.m"
        MR_Word ll_backend__liveness__V_52_52;
#line 879 "liveness.m"
        MR_Word ll_backend__liveness__V_57_57;
#line 879 "liveness.m"
        MR_Word ll_backend__liveness__V_58_58;
#line 1866 "liveness.m"
        MR_Word ll_backend__liveness__V_55_55;
#line 1866 "liveness.m"
        MR_Word ll_backend__liveness__V_56_56;

#line 879 "liveness.m"
        *ll_backend__liveness__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6852 "ll_backend.liveness.c"
        ll_backend__liveness__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 882 "liveness.m"
        {
#line 882 "liveness.m"
          ll_backend__liveness__V_21_21 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_48_48, ll_backend__liveness__SwitchVar_1);
        }
#line 1866 "liveness.m"
        ll_backend__liveness__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 0)));
#line 1866 "liveness.m"
        ll_backend__liveness__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 1)));
#line 1866 "liveness.m"
        ll_backend__liveness__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 2)));
#line 1866 "liveness.m"
        ll_backend__liveness__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 3)));
#line 1866 "liveness.m"
        ll_backend__liveness__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_7, (MR_Integer) 4)));
#line 1866 "liveness.m"
        {
#line 1866 "liveness.m"
          hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__V_21_21, ll_backend__liveness__V_52_52, ll_backend__liveness__V_57_57, ll_backend__liveness__V_58_58, &ll_backend__liveness__CompletedSwitchVar_18);
        }
#line 884 "liveness.m"
        {
#line 884 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_48_48, ll_backend__liveness__CompletedSwitchVar_18, ll_backend__liveness__STATE_VARIABLE_Union_0_8, ll_backend__liveness__STATE_VARIABLE_Union_9);
        }
#line 885 "liveness.m"
        {
#line 885 "liveness.m"
          parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_48_48, *ll_backend__liveness__STATE_VARIABLE_Union_9, ll_backend__liveness__CompletedNonLocals_6, ll_backend__liveness__CompletedNonLocalUnion_10);
#line 885 "liveness.m"
          return;
        }
#line 879 "liveness.m"
      }
#line 879 "liveness.m"
    else
#line 888 "liveness.m"
      {
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__Case0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__Cases0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__Case_26;
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__Cases_27;
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__MainConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_24, (MR_Integer) 0)));
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__OtherConsIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_24, (MR_Integer) 1)));
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_24, (MR_Integer) 2)));
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__Goal1_37;
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__DeadnessGoal_38;
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo1_40;
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__InstmapDelta1_41;
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__InstmapReachable_42;
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__Goal_43;
#line 888 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_Union_46_46;
#line 892 "liveness.m"
        MR_Word ll_backend__liveness__V_39_39;

#line 890 "liveness.m"
        {
#line 890 "liveness.m"
          ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_36, &ll_backend__liveness__Goal1_37, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__DeadnessGoal_38, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__LiveInfo_7);
        }
#line 892 "liveness.m"
        ll_backend__liveness__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_37, (MR_Integer) 0)));
#line 892 "liveness.m"
        ll_backend__liveness__GoalInfo1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_37, (MR_Integer) 1)));
#line 893 "liveness.m"
        {
#line 893 "liveness.m"
          ll_backend__liveness__InstmapDelta1_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo1_40);
        }
#line 894 "liveness.m"
        {
#line 894 "liveness.m"
          ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta1_41);
        }
#line 6942 "ll_backend.liveness.c"
        if (ll_backend__liveness__succeeded)
#line 6944 "ll_backend.liveness.c"
          {
#line 895 "liveness.m"
            ll_backend__liveness__InstmapReachable_42 = (MR_Integer) 1;
#line 973 "liveness.m"
            {
#line 973 "liveness.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_8, ll_backend__liveness__DeadnessGoal_38, &ll_backend__liveness__STATE_VARIABLE_Union_46_46);
            }
#line 6953 "ll_backend.liveness.c"
          }
#line 6955 "ll_backend.liveness.c"
        else
#line 6957 "ll_backend.liveness.c"
          {
#line 6959 "ll_backend.liveness.c"
            MR_Word ll_backend__liveness__TypeCtorInfo_16_77;
#line 6961 "ll_backend.liveness.c"
            MR_Word ll_backend__liveness__FilteredDeadnessGoal_73;

#line 897 "liveness.m"
            ll_backend__liveness__InstmapReachable_42 = (MR_Integer) 0;
#line 6966 "ll_backend.liveness.c"
            ll_backend__liveness__TypeCtorInfo_16_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 976 "liveness.m"
            {
#line 976 "liveness.m"
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_77, ll_backend__liveness__DeadnessGoal_38, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__FilteredDeadnessGoal_73);
            }
#line 977 "liveness.m"
            {
#line 977 "liveness.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_77, ll_backend__liveness__STATE_VARIABLE_Union_0_8, ll_backend__liveness__FilteredDeadnessGoal_73, &ll_backend__liveness__STATE_VARIABLE_Union_46_46);
            }
#line 6978 "ll_backend.liveness.c"
          }
#line 900 "liveness.m"
        {
#line 900 "liveness.m"
          ll_backend__liveness__detect_deadness_in_cases_10_p_0(ll_backend__liveness__SwitchVar_1, ll_backend__liveness__Cases0_25, &ll_backend__liveness__Cases_27, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__CompletedNonLocals_6, ll_backend__liveness__LiveInfo_7, ll_backend__liveness__STATE_VARIABLE_Union_46_46, ll_backend__liveness__STATE_VARIABLE_Union_9, ll_backend__liveness__CompletedNonLocalUnion_10);
        }
#line 903 "liveness.m"
        {
#line 903 "liveness.m"
          ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessGoal_38, ll_backend__liveness__HeadVar__4_4, *ll_backend__liveness__CompletedNonLocalUnion_10, ll_backend__liveness__InstmapReachable_42, ll_backend__liveness__Goal1_37, &ll_backend__liveness__Goal_43);
        }
#line 905 "liveness.m"
        {
#line 905 "liveness.m"
          ll_backend__liveness__Case_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 905 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_26, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_34));
#line 905 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_26, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_35));
#line 905 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_26, 2) = ((MR_Box) (ll_backend__liveness__Goal_43));
#line 905 "liveness.m"
        }
#line 888 "liveness.m"
        {
#line 888 "liveness.m"
          MR_Word base;
#line 888 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "liveness.m"
          *ll_backend__liveness__HeadVar__3_3 = base;
#line 888 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Case_26));
#line 888 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Cases_27));
#line 888 "liveness.m"
        }
#line 888 "liveness.m"
      }
#line 879 "liveness.m"
  }
#line 874 "liveness.m"
}

#line 847 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_disj_9_p_0(
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 847 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__CompletedNonLocals_5,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__6_6,
#line 847 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_7,
#line 847 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_8,
#line 847 "liveness.m"
  MR_Word * ll_backend__liveness__CompletedNonLocalUnion_9)
#line 847 "liveness.m"
{
#line 853 "liveness.m"
  {
#line 853 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 853 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "liveness.m"
      {
#line 853 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 854 "liveness.m"
        {
#line 854 "liveness.m"
          parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_7, ll_backend__liveness__CompletedNonLocals_5, ll_backend__liveness__CompletedNonLocalUnion_9);
        }
#line 853 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Union_8 = ll_backend__liveness__STATE_VARIABLE_Union_0_7;
#line 853 "liveness.m"
      }
#line 853 "liveness.m"
    else
#line 856 "liveness.m"
      {
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__Goal_20;
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__Goals_21;
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__Goal1_28;
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__DeadnessGoal_29;
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo1_31;
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__InstmapDelta1_32;
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__InstmapReachable_33;
#line 856 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_Union_36_36;
#line 859 "liveness.m"
        MR_Word ll_backend__liveness__V_30_30;

#line 857 "liveness.m"
        {
#line 857 "liveness.m"
          ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_18, &ll_backend__liveness__Goal1_28, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__6_6);
        }
#line 859 "liveness.m"
        ll_backend__liveness__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_28, (MR_Integer) 0)));
#line 859 "liveness.m"
        ll_backend__liveness__GoalInfo1_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_28, (MR_Integer) 1)));
#line 860 "liveness.m"
        {
#line 860 "liveness.m"
          ll_backend__liveness__InstmapDelta1_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo1_31);
        }
#line 861 "liveness.m"
        {
#line 861 "liveness.m"
          ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta1_32);
        }
#line 7112 "ll_backend.liveness.c"
        if (ll_backend__liveness__succeeded)
#line 7114 "ll_backend.liveness.c"
          {
#line 862 "liveness.m"
            ll_backend__liveness__InstmapReachable_33 = (MR_Integer) 1;
#line 973 "liveness.m"
            {
#line 973 "liveness.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__STATE_VARIABLE_Union_0_7, ll_backend__liveness__DeadnessGoal_29, &ll_backend__liveness__STATE_VARIABLE_Union_36_36);
            }
#line 7123 "ll_backend.liveness.c"
          }
#line 7125 "ll_backend.liveness.c"
        else
#line 7127 "ll_backend.liveness.c"
          {
#line 7129 "ll_backend.liveness.c"
            MR_Word ll_backend__liveness__TypeCtorInfo_16_49;
#line 7131 "ll_backend.liveness.c"
            MR_Word ll_backend__liveness__FilteredDeadnessGoal_45;

#line 864 "liveness.m"
            ll_backend__liveness__InstmapReachable_33 = (MR_Integer) 0;
#line 7136 "ll_backend.liveness.c"
            ll_backend__liveness__TypeCtorInfo_16_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 976 "liveness.m"
            {
#line 976 "liveness.m"
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_49, ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__FilteredDeadnessGoal_45);
            }
#line 977 "liveness.m"
            {
#line 977 "liveness.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_49, ll_backend__liveness__STATE_VARIABLE_Union_0_7, ll_backend__liveness__FilteredDeadnessGoal_45, &ll_backend__liveness__STATE_VARIABLE_Union_36_36);
            }
#line 7148 "ll_backend.liveness.c"
          }
#line 867 "liveness.m"
        {
#line 867 "liveness.m"
          ll_backend__liveness__detect_deadness_in_disj_9_p_0(ll_backend__liveness__Goals0_19, &ll_backend__liveness__Goals_21, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__CompletedNonLocals_5, ll_backend__liveness__HeadVar__6_6, ll_backend__liveness__STATE_VARIABLE_Union_36_36, ll_backend__liveness__STATE_VARIABLE_Union_8, ll_backend__liveness__CompletedNonLocalUnion_9);
        }
#line 869 "liveness.m"
        {
#line 869 "liveness.m"
          ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessGoal_29, ll_backend__liveness__HeadVar__3_3, *ll_backend__liveness__CompletedNonLocalUnion_9, ll_backend__liveness__InstmapReachable_33, ll_backend__liveness__Goal1_28, &ll_backend__liveness__Goal_20);
        }
#line 856 "liveness.m"
        {
#line 856 "liveness.m"
          MR_Word base;
#line 856 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 856 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_20));
#line 856 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_21));
#line 856 "liveness.m"
        }
#line 856 "liveness.m"
      }
#line 853 "liveness.m"
  }
#line 847 "liveness.m"
}

#line 826 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_conj_6_p_0(
#line 826 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 826 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 826 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_0_3,
#line 826 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Deadness_4,
#line 826 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_5,
#line 826 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__6_6)
#line 826 "liveness.m"
{
#line 830 "liveness.m"
  {
#line 830 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 830 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "liveness.m"
      {
#line 830 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 830 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Deadness_4 = ll_backend__liveness__STATE_VARIABLE_Deadness_0_3;
#line 830 "liveness.m"
      }
#line 830 "liveness.m"
    else
#line 832 "liveness.m"
      {
#line 832 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 832 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 832 "liveness.m"
        MR_Word ll_backend__liveness__Goal_14;
#line 832 "liveness.m"
        MR_Word ll_backend__liveness__Goals_15;
#line 832 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_12, (MR_Integer) 1)));
#line 832 "liveness.m"
        MR_Word ll_backend__liveness__InstmapDelta_21;
#line 833 "liveness.m"
        MR_Word ll_backend__liveness__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_12, (MR_Integer) 0)));

#line 834 "liveness.m"
        {
#line 834 "liveness.m"
          ll_backend__liveness__InstmapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_20);
        }
#line 835 "liveness.m"
        {
#line 835 "liveness.m"
          ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstmapDelta_21);
        }
#line 838 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 836 "liveness.m"
          {
#line 836 "liveness.m"
            ll_backend__liveness__Goals_15 = ll_backend__liveness__Goals0_13;
#line 837 "liveness.m"
            {
#line 837 "liveness.m"
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_12, &ll_backend__liveness__Goal_14, ll_backend__liveness__STATE_VARIABLE_Deadness_0_3, ll_backend__liveness__STATE_VARIABLE_Deadness_4, ll_backend__liveness__Liveness0_5, ll_backend__liveness__HeadVar__6_6);
            }
#line 836 "liveness.m"
          }
#line 838 "liveness.m"
        else
#line 839 "liveness.m"
          {
#line 839 "liveness.m"
            MR_Word ll_backend__liveness__LivenessGoal_22;
#line 839 "liveness.m"
            MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_26_26;

#line 839 "liveness.m"
            {
#line 839 "liveness.m"
              ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal0_12, ll_backend__liveness__HeadVar__6_6, ll_backend__liveness__Liveness0_5, &ll_backend__liveness__LivenessGoal_22);
            }
#line 840 "liveness.m"
            {
#line 840 "liveness.m"
              ll_backend__liveness__detect_deadness_in_conj_6_p_0(ll_backend__liveness__Goals0_13, &ll_backend__liveness__Goals_15, ll_backend__liveness__STATE_VARIABLE_Deadness_0_3, &ll_backend__liveness__STATE_VARIABLE_Deadness_26_26, ll_backend__liveness__LivenessGoal_22, ll_backend__liveness__HeadVar__6_6);
            }
#line 842 "liveness.m"
            {
#line 842 "liveness.m"
              ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_12, &ll_backend__liveness__Goal_14, ll_backend__liveness__STATE_VARIABLE_Deadness_26_26, ll_backend__liveness__STATE_VARIABLE_Deadness_4, ll_backend__liveness__Liveness0_5, ll_backend__liveness__HeadVar__6_6);
            }
#line 839 "liveness.m"
          }
#line 832 "liveness.m"
        {
#line 832 "liveness.m"
          MR_Word base;
#line 832 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 832 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_14));
#line 832 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_15));
#line 832 "liveness.m"
        }
#line 832 "liveness.m"
      }
#line 830 "liveness.m"
  }
#line 826 "liveness.m"
}

#line 646 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_deadness_in_goal_6_p_0(
#line 646 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_7,
#line 646 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_8,
#line 646 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_0_105,
#line 646 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Deadness_106,
#line 646 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_107,
#line 646 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_11)
#line 646 "liveness.m"
{
#line 650 "liveness.m"
  {
#line 650 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_155_155;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 0)));
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 1)));
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__PreDeaths0_14;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__PreBirths0_15;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__PostDeaths0_16;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__PostBirths0_17;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_45;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_47;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_108_108;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_109_109;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_110_110;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_111_111;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_125_125;
#line 650 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_126_126;

#line 652 "liveness.m"
    {
#line 652 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PreDeaths0_14);
    }
#line 653 "liveness.m"
    {
#line 653 "liveness.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PreBirths0_15);
    }
#line 654 "liveness.m"
    {
#line 654 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostDeaths0_16);
    }
#line 655 "liveness.m"
    {
#line 655 "liveness.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__PostBirths0_17);
    }
#line 7374 "ll_backend.liveness.c"
    ll_backend__liveness__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 657 "liveness.m"
    {
#line 657 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_0_105, ll_backend__liveness__PostBirths0_17, &ll_backend__liveness__STATE_VARIABLE_Deadness_108_108);
    }
#line 658 "liveness.m"
    {
#line 658 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PostDeaths0_16, ll_backend__liveness__STATE_VARIABLE_Deadness_108_108, &ll_backend__liveness__STATE_VARIABLE_Deadness_109_109);
    }
#line 660 "liveness.m"
    {
#line 660 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Liveness_0_107, ll_backend__liveness__PreDeaths0_14, &ll_backend__liveness__STATE_VARIABLE_Liveness_110_110);
    }
#line 661 "liveness.m"
    {
#line 661 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PreBirths0_15, ll_backend__liveness__STATE_VARIABLE_Liveness_110_110, &ll_backend__liveness__STATE_VARIABLE_Liveness_111_111);
    }
#line 678 "liveness.m"
    if (((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 793 "liveness.m"
      {
#line 793 "liveness.m"
        MR_Word ll_backend__liveness__SubGoal0_99 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__GoalExpr0_12), (MR_Integer) 0);
#line 793 "liveness.m"
        MR_Word ll_backend__liveness__SubGoal_100;

#line 794 "liveness.m"
        {
#line 794 "liveness.m"
          ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__SubGoal0_99, &ll_backend__liveness__SubGoal_100, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
        }
#line 796 "liveness.m"
        ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__liveness__SubGoal_100);
#line 797 "liveness.m"
        ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
#line 793 "liveness.m"
      }
#line 678 "liveness.m"
    else
#line 678 "liveness.m"
      if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 679 "liveness.m"
        {
#line 679 "liveness.m"
          MR_Word ll_backend__liveness__ConjType_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 679 "liveness.m"
          MR_Word ll_backend__liveness__Conjuncts0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));

#line 683 "liveness.m"
          if ((ll_backend__liveness__Conjuncts0_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 681 "liveness.m"
            {
#line 682 "liveness.m"
              ll_backend__liveness__GoalExpr_45 = ll_backend__liveness__GoalExpr0_12;
#line 682 "liveness.m"
              ll_backend__liveness__STATE_VARIABLE_Deadness_125_125 = ll_backend__liveness__STATE_VARIABLE_Deadness_109_109;
#line 681 "liveness.m"
            }
#line 683 "liveness.m"
          else
#line 684 "liveness.m"
            {
#line 684 "liveness.m"
              MR_Word ll_backend__liveness__Conjuncts_52;

#line 689 "liveness.m"
              if ((ll_backend__liveness__ConjType_48 == (MR_Integer) 1))
#line 690 "liveness.m"
                {
#line 690 "liveness.m"
                  MR_Word ll_backend__liveness__Union0_54;
#line 690 "liveness.m"
                  MR_Word ll_backend__liveness__CompletedNonLocals_128;
#line 691 "liveness.m"
                  MR_Word ll_backend__liveness__V_53_53;
#line 694 "liveness.m"
                  MR_Word ll_backend__liveness___CompletedNonLocalUnion_56;

#line 691 "liveness.m"
                  {
#line 691 "liveness.m"
                    ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__V_53_53, &ll_backend__liveness__CompletedNonLocals_128);
                  }
#line 693 "liveness.m"
                  {
#line 693 "liveness.m"
                    ll_backend__liveness__Union0_54 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_155_155);
                  }
#line 694 "liveness.m"
                  {
#line 694 "liveness.m"
                    ll_backend__liveness__detect_deadness_in_par_conj_9_p_0(ll_backend__liveness__Conjuncts0_49, &ll_backend__liveness__Conjuncts_52, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_128, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__Union0_54, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, &ll_backend__liveness___CompletedNonLocalUnion_56);
                  }
#line 690 "liveness.m"
                }
#line 689 "liveness.m"
              else
#line 832 "liveness.m"
                {
#line 832 "liveness.m"
                  MR_Word ll_backend__liveness__Goal0_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Conjuncts0_49, (MR_Integer) 0)));
#line 832 "liveness.m"
                  MR_Word ll_backend__liveness__Goals0_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__Conjuncts0_49, (MR_Integer) 1)));
#line 832 "liveness.m"
                  MR_Word ll_backend__liveness__Goal_163;
#line 832 "liveness.m"
                  MR_Word ll_backend__liveness__Goals_164;
#line 832 "liveness.m"
                  MR_Word ll_backend__liveness__GoalInfo_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_161, (MR_Integer) 1)));
#line 832 "liveness.m"
                  MR_Word ll_backend__liveness__InstmapDelta_170;
#line 833 "liveness.m"
                  MR_Word ll_backend__liveness__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_161, (MR_Integer) 0)));

#line 834 "liveness.m"
                  {
#line 834 "liveness.m"
                    ll_backend__liveness__InstmapDelta_170 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_169);
                  }
#line 835 "liveness.m"
                  {
#line 835 "liveness.m"
                    ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstmapDelta_170);
                  }
#line 838 "liveness.m"
                  if (ll_backend__liveness__succeeded)
#line 836 "liveness.m"
                    {
#line 836 "liveness.m"
                      ll_backend__liveness__Goals_164 = ll_backend__liveness__Goals0_162;
#line 837 "liveness.m"
                      {
#line 837 "liveness.m"
                        ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_161, &ll_backend__liveness__Goal_163, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
                      }
#line 836 "liveness.m"
                    }
#line 838 "liveness.m"
                  else
#line 839 "liveness.m"
                    {
#line 839 "liveness.m"
                      MR_Word ll_backend__liveness__LivenessGoal_171;
#line 839 "liveness.m"
                      MR_Word ll_backend__liveness__STATE_VARIABLE_Deadness_26_175;

#line 839 "liveness.m"
                      {
#line 839 "liveness.m"
                        ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Goal0_161, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, &ll_backend__liveness__LivenessGoal_171);
                      }
#line 840 "liveness.m"
                      {
#line 840 "liveness.m"
                        ll_backend__liveness__detect_deadness_in_conj_6_p_0(ll_backend__liveness__Goals0_162, &ll_backend__liveness__Goals_164, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_26_175, ll_backend__liveness__LivenessGoal_171, ll_backend__liveness__LiveInfo_11);
                      }
#line 842 "liveness.m"
                      {
#line 842 "liveness.m"
                        ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal0_161, &ll_backend__liveness__Goal_163, ll_backend__liveness__STATE_VARIABLE_Deadness_26_175, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
                      }
#line 839 "liveness.m"
                    }
#line 832 "liveness.m"
                  {
#line 832 "liveness.m"
                    ll_backend__liveness__Conjuncts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "liveness.m"
                    MR_hl_field(MR_mktag(1), ll_backend__liveness__Conjuncts_52, 0) = ((MR_Box) (ll_backend__liveness__Goal_163));
#line 832 "liveness.m"
                    MR_hl_field(MR_mktag(1), ll_backend__liveness__Conjuncts_52, 1) = ((MR_Box) (ll_backend__liveness__Goals_164));
#line 832 "liveness.m"
                  }
#line 832 "liveness.m"
                }
#line 699 "liveness.m"
              {
#line 699 "liveness.m"
                ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 699 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 699 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__ConjType_48));
#line 699 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 2) = ((MR_Box) (ll_backend__liveness__Conjuncts_52));
#line 699 "liveness.m"
              }
#line 684 "liveness.m"
            }
#line 701 "liveness.m"
          ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
#line 679 "liveness.m"
        }
#line 678 "liveness.m"
      else
#line 678 "liveness.m"
        if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 703 "liveness.m"
          {
#line 703 "liveness.m"
            MR_Word ll_backend__liveness__Disjuncts0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));

#line 707 "liveness.m"
            if ((ll_backend__liveness__Disjuncts0_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "liveness.m"
              {
#line 706 "liveness.m"
                ll_backend__liveness__GoalExpr_45 = ll_backend__liveness__GoalExpr0_12;
#line 706 "liveness.m"
                ll_backend__liveness__STATE_VARIABLE_Deadness_125_125 = ll_backend__liveness__STATE_VARIABLE_Deadness_109_109;
#line 705 "liveness.m"
              }
#line 707 "liveness.m"
            else
#line 708 "liveness.m"
              {
#line 708 "liveness.m"
                MR_Word ll_backend__liveness__Disjuncts_61;
#line 708 "liveness.m"
                MR_Word ll_backend__liveness__CompletedNonLocals_133;
#line 708 "liveness.m"
                MR_Word ll_backend__liveness__Union0_134;
#line 710 "liveness.m"
                MR_Word ll_backend__liveness__V_60_60;
#line 712 "liveness.m"
                MR_Word ll_backend__liveness__V_62_62;

#line 709 "liveness.m"
                {
#line 709 "liveness.m"
                  ll_backend__liveness__Union0_134 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_155_155);
                }
#line 710 "liveness.m"
                {
#line 710 "liveness.m"
                  ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__V_60_60, &ll_backend__liveness__CompletedNonLocals_133);
                }
#line 712 "liveness.m"
                {
#line 712 "liveness.m"
                  ll_backend__liveness__detect_deadness_in_disj_9_p_0(ll_backend__liveness__Disjuncts0_57, &ll_backend__liveness__Disjuncts_61, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_133, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__Union0_134, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, &ll_backend__liveness__V_62_62);
                }
#line 715 "liveness.m"
                {
#line 715 "liveness.m"
                  ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 715 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__Disjuncts_61));
#line 715 "liveness.m"
                }
#line 708 "liveness.m"
              }
#line 717 "liveness.m"
            ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
#line 703 "liveness.m"
          }
#line 678 "liveness.m"
        else
#line 678 "liveness.m"
          if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 729 "liveness.m"
            {
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Vars_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Cond0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 3)));
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Else0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 4)));
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__LivenessCond_74;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Else1_75;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__DeadnessElse_76;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Then_77;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__DeadnessThen_78;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Cond1_79;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__DeadnessCond_80;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__InstmapDelta_82;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Cond_96;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__Else_97;
#line 729 "liveness.m"
              MR_Word ll_backend__liveness__CompletedNonLocals_150;
#line 741 "liveness.m"
              MR_Word ll_backend__liveness__V_81_81;

#line 732 "liveness.m"
              {
#line 732 "liveness.m"
                ll_backend__liveness__update_liveness_goal_4_p_0(ll_backend__liveness__Cond0_70, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, &ll_backend__liveness__LivenessCond_74);
              }
#line 734 "liveness.m"
              {
#line 734 "liveness.m"
                ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Else0_72, &ll_backend__liveness__Else1_75, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
              }
#line 736 "liveness.m"
              {
#line 736 "liveness.m"
                ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Then0_71, &ll_backend__liveness__Then_77, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__DeadnessThen_78, ll_backend__liveness__LivenessCond_74, ll_backend__liveness__LiveInfo_11);
              }
#line 738 "liveness.m"
              {
#line 738 "liveness.m"
                ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Cond0_70, &ll_backend__liveness__Cond1_79, ll_backend__liveness__DeadnessThen_78, &ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
              }
#line 741 "liveness.m"
              {
#line 741 "liveness.m"
                ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__V_81_81, &ll_backend__liveness__CompletedNonLocals_150);
              }
#line 743 "liveness.m"
              {
#line 743 "liveness.m"
                ll_backend__liveness__InstmapDelta_82 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo0_13);
              }
#line 744 "liveness.m"
              {
#line 744 "liveness.m"
                ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__InstmapDelta_82);
              }
#line 779 "liveness.m"
              if (ll_backend__liveness__succeeded)
#line 745 "liveness.m"
                {
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__CondGoalInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond0_70, (MR_Integer) 1)));
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__CondInstmapDelta_85;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__ThenGoalInfo_87;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__ThenInstmapDelta_88;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__ElseGoalInfo_90;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__ElseInstmapDelta_91;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__CondThenInstmapReachable_92;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__ElseInstmapReachable_93;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__Union1_94;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__CompletedNonLocalDeadness_95;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__Union0_145;
#line 745 "liveness.m"
                  MR_Word ll_backend__liveness__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond0_70, (MR_Integer) 0)));
#line 747 "liveness.m"
                  MR_Word ll_backend__liveness__V_86_86;
#line 749 "liveness.m"
                  MR_Word ll_backend__liveness__V_89_89;

#line 746 "liveness.m"
                  {
#line 746 "liveness.m"
                    ll_backend__liveness__CondInstmapDelta_85 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__CondGoalInfo_84);
                  }
#line 747 "liveness.m"
                  ll_backend__liveness__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Then0_71, (MR_Integer) 0)));
#line 747 "liveness.m"
                  ll_backend__liveness__ThenGoalInfo_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Then0_71, (MR_Integer) 1)));
#line 748 "liveness.m"
                  {
#line 748 "liveness.m"
                    ll_backend__liveness__ThenInstmapDelta_88 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__ThenGoalInfo_87);
                  }
#line 749 "liveness.m"
                  ll_backend__liveness__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else0_72, (MR_Integer) 0)));
#line 749 "liveness.m"
                  ll_backend__liveness__ElseGoalInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Else0_72, (MR_Integer) 1)));
#line 750 "liveness.m"
                  {
#line 750 "liveness.m"
                    ll_backend__liveness__ElseInstmapDelta_91 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__ElseGoalInfo_90);
                  }
#line 766 "liveness.m"
                  {
#line 766 "liveness.m"
                    ll_backend__liveness__Union0_145 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_155_155);
                  }
#line 752 "liveness.m"
                  {
#line 752 "liveness.m"
                    ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__CondInstmapDelta_85);
                  }
#line 752 "liveness.m"
                  if (ll_backend__liveness__succeeded)
#line 753 "liveness.m"
                    {
#line 753 "liveness.m"
                      ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__ThenInstmapDelta_88);
                    }
#line 7784 "ll_backend.liveness.c"
                  if (ll_backend__liveness__succeeded)
#line 7786 "ll_backend.liveness.c"
                    {
#line 755 "liveness.m"
                      ll_backend__liveness__CondThenInstmapReachable_92 = (MR_Integer) 1;
#line 973 "liveness.m"
                      {
#line 973 "liveness.m"
                        parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__Union0_145, ll_backend__liveness__DeadnessCond_80, &ll_backend__liveness__Union1_94);
                      }
#line 7795 "ll_backend.liveness.c"
                    }
#line 7797 "ll_backend.liveness.c"
                  else
#line 7799 "ll_backend.liveness.c"
                    {
#line 7801 "ll_backend.liveness.c"
                      MR_Word ll_backend__liveness__TypeCtorInfo_16_187;
#line 7803 "ll_backend.liveness.c"
                      MR_Word ll_backend__liveness__FilteredDeadnessGoal_183;

#line 757 "liveness.m"
                      ll_backend__liveness__CondThenInstmapReachable_92 = (MR_Integer) 0;
#line 7808 "ll_backend.liveness.c"
                      ll_backend__liveness__TypeCtorInfo_16_187 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 976 "liveness.m"
                      {
#line 976 "liveness.m"
                        parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_187, ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__FilteredDeadnessGoal_183);
                      }
#line 977 "liveness.m"
                      {
#line 977 "liveness.m"
                        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_187, ll_backend__liveness__Union0_145, ll_backend__liveness__FilteredDeadnessGoal_183, &ll_backend__liveness__Union1_94);
                      }
#line 7820 "ll_backend.liveness.c"
                    }
#line 760 "liveness.m"
                  {
#line 760 "liveness.m"
                    ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__liveness__ElseInstmapDelta_91);
                  }
#line 7827 "ll_backend.liveness.c"
                  if (ll_backend__liveness__succeeded)
#line 7829 "ll_backend.liveness.c"
                    {
#line 762 "liveness.m"
                      ll_backend__liveness__ElseInstmapReachable_93 = (MR_Integer) 1;
#line 769 "liveness.m"
                      {
#line 769 "liveness.m"
                        ll_backend__liveness__union_branch_deadness_5_p_0(ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__ElseInstmapReachable_93, ll_backend__liveness__Union1_94, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                      }
#line 7838 "ll_backend.liveness.c"
                    }
#line 7840 "ll_backend.liveness.c"
                  else
#line 7842 "ll_backend.liveness.c"
                    {
#line 7844 "ll_backend.liveness.c"
                      MR_Word ll_backend__liveness__TypeCtorInfo_16_209;
#line 7846 "ll_backend.liveness.c"
                      MR_Word ll_backend__liveness__FilteredDeadnessGoal_205;

#line 764 "liveness.m"
                      ll_backend__liveness__ElseInstmapReachable_93 = (MR_Integer) 0;
#line 7851 "ll_backend.liveness.c"
                      ll_backend__liveness__TypeCtorInfo_16_209 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 976 "liveness.m"
                      {
#line 976 "liveness.m"
                        parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_16_209, ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__FilteredDeadnessGoal_205);
                      }
#line 977 "liveness.m"
                      {
#line 977 "liveness.m"
                        parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_16_209, ll_backend__liveness__Union1_94, ll_backend__liveness__FilteredDeadnessGoal_205, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                      }
#line 7863 "ll_backend.liveness.c"
                    }
#line 772 "liveness.m"
                  {
#line 772 "liveness.m"
                    parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__CompletedNonLocals_150, &ll_backend__liveness__CompletedNonLocalDeadness_95);
                  }
#line 774 "liveness.m"
                  {
#line 774 "liveness.m"
                    ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedNonLocalDeadness_95, ll_backend__liveness__CondThenInstmapReachable_92, ll_backend__liveness__Cond1_79, &ll_backend__liveness__Cond_96);
                  }
#line 777 "liveness.m"
                  {
#line 777 "liveness.m"
                    ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedNonLocalDeadness_95, ll_backend__liveness__ElseInstmapReachable_93, ll_backend__liveness__Else1_75, &ll_backend__liveness__Else_97);
                  }
#line 745 "liveness.m"
                }
#line 779 "liveness.m"
              else
#line 780 "liveness.m"
                {
#line 780 "liveness.m"
                  MR_Word ll_backend__liveness__CompletedNonLocalDeadness_147;

#line 780 "liveness.m"
                  {
#line 780 "liveness.m"
                    parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__DeadnessElse_76, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                  }
#line 781 "liveness.m"
                  {
#line 781 "liveness.m"
                    parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__CompletedNonLocals_150, &ll_backend__liveness__CompletedNonLocalDeadness_147);
                  }
#line 784 "liveness.m"
                  {
#line 784 "liveness.m"
                    ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessCond_80, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedNonLocalDeadness_147, (MR_Integer) 0, ll_backend__liveness__Cond1_79, &ll_backend__liveness__Cond_96);
                  }
#line 786 "liveness.m"
                  {
#line 786 "liveness.m"
                    ll_backend__liveness__add_branch_pre_deaths_6_p_0(ll_backend__liveness__DeadnessElse_76, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedNonLocalDeadness_147, (MR_Integer) 0, ll_backend__liveness__Else1_75, &ll_backend__liveness__Else_97);
                  }
#line 780 "liveness.m"
                }
#line 790 "liveness.m"
              {
#line 790 "liveness.m"
                ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 790 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 790 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__Vars_69));
#line 790 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 2) = ((MR_Box) (ll_backend__liveness__Cond_96));
#line 790 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 3) = ((MR_Box) (ll_backend__liveness__Then_77));
#line 790 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 4) = ((MR_Box) (ll_backend__liveness__Else_97));
#line 790 "liveness.m"
              }
#line 791 "liveness.m"
              ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
#line 729 "liveness.m"
            }
#line 678 "liveness.m"
          else
#line 678 "liveness.m"
            if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 799 "liveness.m"
              {
#line 799 "liveness.m"
                MR_Word ll_backend__liveness__Reason_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 799 "liveness.m"
                MR_Word ll_backend__liveness__SubGoal0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
#line 799 "liveness.m"
                MR_Word ll_backend__liveness__SubGoal_154;
#line 807 "liveness.m"
                MR_Word ll_backend__liveness__TermVar_102;
#line 800 "liveness.m"
                MR_Word ll_backend__liveness__V_115_115;

#line 800 "liveness.m"
                ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_101)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_101, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 800 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 800 "liveness.m"
                  {
#line 800 "liveness.m"
                    ll_backend__liveness__TermVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_101, (MR_Integer) 1)));
#line 800 "liveness.m"
                    ll_backend__liveness__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_101, (MR_Integer) 2)));
#line 800 "liveness.m"
                    ll_backend__liveness__succeeded = (ll_backend__liveness__V_115_115 == (MR_Integer) 1);
#line 800 "liveness.m"
                  }
#line 807 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 802 "liveness.m"
                  {
#line 802 "liveness.m"
                    MR_Word ll_backend__liveness__CompletedTermVars_103;
#line 802 "liveness.m"
                    MR_Word ll_backend__liveness__V_116_116;

#line 801 "liveness.m"
                    {
#line 801 "liveness.m"
                      ll_backend__liveness__V_116_116 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__TermVar_102);
                    }
#line 801 "liveness.m"
                    {
#line 801 "liveness.m"
                      ll_backend__liveness__maybe_complete_with_typeinfos_3_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__V_116_116, &ll_backend__liveness__CompletedTermVars_103);
                    }
#line 803 "liveness.m"
                    {
#line 803 "liveness.m"
                      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__CompletedTermVars_103, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                    }
#line 806 "liveness.m"
                    ll_backend__liveness__SubGoal_154 = ll_backend__liveness__SubGoal0_153;
#line 802 "liveness.m"
                  }
#line 807 "liveness.m"
                else
#line 810 "liveness.m"
                  {
#line 810 "liveness.m"
                    ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__SubGoal0_153, &ll_backend__liveness__SubGoal_154, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__LiveInfo_11);
                  }
#line 813 "liveness.m"
                {
#line 813 "liveness.m"
                  ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 813 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 813 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__Reason_101));
#line 813 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 2) = ((MR_Box) (ll_backend__liveness__SubGoal_154));
#line 813 "liveness.m"
                }
#line 814 "liveness.m"
                ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
#line 799 "liveness.m"
              }
#line 678 "liveness.m"
            else
#line 678 "liveness.m"
              if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 816 "liveness.m"
                {
#line 817 "liveness.m"
                  {
#line 817 "liveness.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_deadness_in_goal\'/6", (MR_String) "shorthand");
#line 817 "liveness.m"
                    return;
                  }
#line 816 "liveness.m"
                }
#line 678 "liveness.m"
              else
#line 678 "liveness.m"
                if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 719 "liveness.m"
                  {
#line 719 "liveness.m"
                    MR_Word ll_backend__liveness__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 719 "liveness.m"
                    MR_Word ll_backend__liveness__Det_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
#line 719 "liveness.m"
                    MR_Word ll_backend__liveness__Cases0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 3)));
#line 719 "liveness.m"
                    MR_Word ll_backend__liveness__Cases_67;
#line 719 "liveness.m"
                    MR_Word ll_backend__liveness__CompletedNonLocals_142;
#line 719 "liveness.m"
                    MR_Word ll_backend__liveness__Union0_143;
#line 721 "liveness.m"
                    MR_Word ll_backend__liveness__V_66_66;
#line 723 "liveness.m"
                    MR_Word ll_backend__liveness__V_68_68;

#line 720 "liveness.m"
                    {
#line 720 "liveness.m"
                      ll_backend__liveness__Union0_143 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_155_155);
                    }
#line 721 "liveness.m"
                    {
#line 721 "liveness.m"
                      ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__V_66_66, &ll_backend__liveness__CompletedNonLocals_142);
                    }
#line 723 "liveness.m"
                    {
#line 723 "liveness.m"
                      ll_backend__liveness__detect_deadness_in_cases_10_p_0(ll_backend__liveness__Var_63, ll_backend__liveness__Cases0_65, &ll_backend__liveness__Cases_67, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_142, ll_backend__liveness__LiveInfo_11, ll_backend__liveness__Union0_143, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, &ll_backend__liveness__V_68_68);
                    }
#line 726 "liveness.m"
                    {
#line 726 "liveness.m"
                      ll_backend__liveness__GoalExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 726 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 726 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 1) = ((MR_Box) (ll_backend__liveness__Var_63));
#line 726 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 2) = ((MR_Box) (ll_backend__liveness__Det_64));
#line 726 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_45, 3) = ((MR_Box) (ll_backend__liveness__Cases_67));
#line 726 "liveness.m"
                    }
#line 727 "liveness.m"
                    ll_backend__liveness__GoalInfo_47 = ll_backend__liveness__GoalInfo0_13;
#line 719 "liveness.m"
                  }
#line 678 "liveness.m"
                else
#line 668 "liveness.m"
                  {
#line 668 "liveness.m"
                    MR_Word ll_backend__liveness__CompletedNonLocals_42;
#line 668 "liveness.m"
                    MR_Word ll_backend__liveness__LiveNonLocals_43;
#line 668 "liveness.m"
                    MR_Word ll_backend__liveness__NewPostDeaths_44;
#line 668 "liveness.m"
                    MR_Word ll_backend__liveness__PostDeaths_46;
#line 669 "liveness.m"
                    MR_Word ll_backend__liveness___BaseNonLocals_41;

#line 669 "liveness.m"
                    {
#line 669 "liveness.m"
                      ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_11, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness___BaseNonLocals_41, &ll_backend__liveness__CompletedNonLocals_42);
                    }
#line 671 "liveness.m"
                    {
#line 671 "liveness.m"
                      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Liveness_111_111, ll_backend__liveness__CompletedNonLocals_42, &ll_backend__liveness__LiveNonLocals_43);
                    }
#line 672 "liveness.m"
                    {
#line 672 "liveness.m"
                      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__LiveNonLocals_43, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__NewPostDeaths_44);
                    }
#line 673 "liveness.m"
                    {
#line 673 "liveness.m"
                      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__NewPostDeaths_44, ll_backend__liveness__STATE_VARIABLE_Deadness_109_109, &ll_backend__liveness__STATE_VARIABLE_Deadness_125_125);
                    }
#line 674 "liveness.m"
                    ll_backend__liveness__GoalExpr_45 = ll_backend__liveness__GoalExpr0_12;
#line 676 "liveness.m"
                    {
#line 676 "liveness.m"
                      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PostDeaths0_16, ll_backend__liveness__NewPostDeaths_44, &ll_backend__liveness__PostDeaths_46);
                    }
#line 677 "liveness.m"
                    {
#line 677 "liveness.m"
                      hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(ll_backend__liveness__PostDeaths_46, ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__GoalInfo_47);
                    }
#line 668 "liveness.m"
                  }
#line 820 "liveness.m"
    {
#line 820 "liveness.m"
      MR_Word base;
#line 820 "liveness.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 820 "liveness.m"
      *ll_backend__liveness__Goal_8 = base;
#line 820 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_45));
#line 820 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_47));
#line 820 "liveness.m"
    }
#line 821 "liveness.m"
    {
#line 821 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__STATE_VARIABLE_Deadness_125_125, ll_backend__liveness__PreBirths0_15, &ll_backend__liveness__STATE_VARIABLE_Deadness_126_126);
    }
#line 822 "liveness.m"
    {
#line 822 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_155_155, ll_backend__liveness__PreDeaths0_14, ll_backend__liveness__STATE_VARIABLE_Deadness_126_126, ll_backend__liveness__STATE_VARIABLE_Deadness_106);
#line 822 "liveness.m"
      return;
    }
#line 650 "liveness.m"
  }
#line 646 "liveness.m"
}

#line 625 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 625 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 625 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
#line 625 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7)
#line 625 "liveness.m"
{
#line 629 "liveness.m"
  {
#line 629 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 629 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "liveness.m"
      {
#line 629 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Union_7 = ll_backend__liveness__STATE_VARIABLE_Union_0_6;
#line 629 "liveness.m"
      }
#line 629 "liveness.m"
    else
#line 631 "liveness.m"
      {
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_30_30;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__Goal_16;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__Goals_17;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__Goal1_22;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__Liveness1_23;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__NonLocalUnion_24;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__Residue_25;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_Union_28_28;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__GoalExpr_34;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo0_35;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__PostBirths0_36;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__PostBirths_37;
#line 631 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_38;

#line 632 "liveness.m"
        {
#line 632 "liveness.m"
          ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_14, &ll_backend__liveness__Goal1_22, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__Liveness1_23, ll_backend__liveness__HeadVar__5_5);
        }
#line 8238 "ll_backend.liveness.c"
        ll_backend__liveness__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 633 "liveness.m"
        {
#line 633 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__Liveness1_23, ll_backend__liveness__STATE_VARIABLE_Union_0_6, &ll_backend__liveness__STATE_VARIABLE_Union_28_28);
        }
#line 634 "liveness.m"
        {
#line 634 "liveness.m"
          ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(ll_backend__liveness__Goals0_15, &ll_backend__liveness__Goals_17, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__STATE_VARIABLE_Union_28_28, ll_backend__liveness__STATE_VARIABLE_Union_7);
        }
#line 636 "liveness.m"
        {
#line 636 "liveness.m"
          parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, *ll_backend__liveness__STATE_VARIABLE_Union_7, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__NonLocalUnion_24);
        }
#line 637 "liveness.m"
        {
#line 637 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__NonLocalUnion_24, ll_backend__liveness__Liveness1_23, &ll_backend__liveness__Residue_25);
        }
#line 1803 "liveness.m"
        ll_backend__liveness__GoalExpr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_22, (MR_Integer) 0)));
#line 1803 "liveness.m"
        ll_backend__liveness__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_22, (MR_Integer) 1)));
#line 1804 "liveness.m"
        {
#line 1804 "liveness.m"
          hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_35, &ll_backend__liveness__PostBirths0_36);
        }
#line 1805 "liveness.m"
        {
#line 1805 "liveness.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PostBirths0_36, ll_backend__liveness__Residue_25, &ll_backend__liveness__PostBirths_37);
        }
#line 1806 "liveness.m"
        {
#line 1806 "liveness.m"
          hlds__hlds_llds__goal_info_set_post_births_3_p_0(ll_backend__liveness__PostBirths_37, ll_backend__liveness__GoalInfo0_35, &ll_backend__liveness__GoalInfo_38);
        }
#line 1807 "liveness.m"
        {
#line 1807 "liveness.m"
          ll_backend__liveness__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1807 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_34));
#line 1807 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_38));
#line 1807 "liveness.m"
        }
#line 631 "liveness.m"
        {
#line 631 "liveness.m"
          MR_Word base;
#line 631 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 631 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_16));
#line 631 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_17));
#line 631 "liveness.m"
        }
#line 631 "liveness.m"
      }
#line 629 "liveness.m"
  }
#line 625 "liveness.m"
}

#line 593 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_p_0(
#line 593 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 593 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 593 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_0_3,
#line 593 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_4)
#line 593 "liveness.m"
{
#line 597 "liveness.m"
  {
#line 597 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 597 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "liveness.m"
      {
#line 597 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_4 = ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_0_3;
#line 597 "liveness.m"
      }
#line 597 "liveness.m"
    else
#line 599 "liveness.m"
      {
#line 599 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "liveness.m"
        MR_Word ll_backend__liveness__Goal_10;
#line 599 "liveness.m"
        MR_Word ll_backend__liveness__Goals_11;
#line 599 "liveness.m"
        MR_Word ll_backend__liveness__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_8, (MR_Integer) 0)));
#line 599 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_8, (MR_Integer) 1)));
#line 599 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_35_35;
#line 618 "liveness.m"
        MR_Word ll_backend__liveness__LHSVar_20;
#line 618 "liveness.m"
        MR_Word ll_backend__liveness__RHSVars_22;
#line 602 "liveness.m"
        MR_Word ll_backend__liveness__Unification_18;
#line 602 "liveness.m"
        MR_Word ll_backend__liveness__V_31_31;
#line 602 "liveness.m"
        MR_Word ll_backend__liveness__V_32_32;
#line 602 "liveness.m"
        MR_Word ll_backend__liveness__V_33_33;
#line 602 "liveness.m"
        MR_Word ll_backend__liveness__V_15_15;
#line 602 "liveness.m"
        MR_Word ll_backend__liveness__V_16_16;
#line 602 "liveness.m"
        MR_Word ll_backend__liveness__V_17_17;
#line 602 "liveness.m"
        MR_Word ll_backend__liveness__V_19_19;
#line 603 "liveness.m"
        MR_Word ll_backend__liveness___ConsId_21;
#line 603 "liveness.m"
        MR_Word ll_backend__liveness___ArgModes_23;

#line 602 "liveness.m"
        ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__GoalExpr_13)) == (MR_mktag((MR_Integer) 1)));
#line 602 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 602 "liveness.m"
          {
#line 602 "liveness.m"
            ll_backend__liveness__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 0)));
#line 602 "liveness.m"
            ll_backend__liveness__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 1)));
#line 602 "liveness.m"
            ll_backend__liveness__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 2)));
#line 602 "liveness.m"
            ll_backend__liveness__Unification_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 3)));
#line 602 "liveness.m"
            ll_backend__liveness__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__GoalExpr_13, (MR_Integer) 4)));
#line 603 "liveness.m"
            ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__Unification_18)) == (MR_mktag((MR_Integer) 0)));
#line 603 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 603 "liveness.m"
              {
#line 603 "liveness.m"
                ll_backend__liveness__LHSVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 0)));
#line 603 "liveness.m"
                ll_backend__liveness___ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 1)));
#line 603 "liveness.m"
                ll_backend__liveness__RHSVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 2)));
#line 603 "liveness.m"
                ll_backend__liveness___ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 3)));
#line 603 "liveness.m"
                ll_backend__liveness__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 4)));
#line 603 "liveness.m"
                ll_backend__liveness__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 5)));
#line 603 "liveness.m"
                ll_backend__liveness__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Unification_18, (MR_Integer) 6)));
#line 603 "liveness.m"
                ll_backend__liveness__succeeded = (ll_backend__liveness__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 602 "liveness.m"
                  {
#line 603 "liveness.m"
                    ll_backend__liveness__succeeded = (ll_backend__liveness__V_32_32 == (MR_Integer) 1);
#line 602 "liveness.m"
                    if (ll_backend__liveness__succeeded)
#line 603 "liveness.m"
                      ll_backend__liveness__succeeded = (ll_backend__liveness__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "liveness.m"
                  }
#line 603 "liveness.m"
              }
#line 602 "liveness.m"
          }
#line 618 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 615 "liveness.m"
          {
#line 615 "liveness.m"
            MR_Word ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_34_34;

#line 606 "liveness.m"
            {
#line 606 "liveness.m"
              ll_backend__liveness__succeeded = parse_tree__set_of_var__remove_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__RHSVars_22, ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_0_3, &ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_34_34);
            }
#line 615 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 607 "liveness.m"
              {
#line 607 "liveness.m"
                MR_Word ll_backend__liveness__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 607 "liveness.m"
                MR_Word ll_backend__liveness__PreBirths_24;
#line 607 "liveness.m"
                MR_Word ll_backend__liveness__PostBirths_25;
#line 607 "liveness.m"
                MR_Word ll_backend__liveness__PreDeaths_26;
#line 607 "liveness.m"
                MR_Word ll_backend__liveness__PostDeaths_27;
#line 607 "liveness.m"
                MR_Word ll_backend__liveness__GoalInfo_28;

#line 607 "liveness.m"
                {
#line 607 "liveness.m"
                  parse_tree__set_of_var__insert_3_p_0(ll_backend__liveness__TypeCtorInfo_45_45, ll_backend__liveness__LHSVar_20, ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_34_34, &ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_35_35);
                }
#line 608 "liveness.m"
                {
#line 608 "liveness.m"
                  ll_backend__liveness__PreBirths_24 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_45_45, ll_backend__liveness__LHSVar_20);
                }
#line 609 "liveness.m"
                {
#line 609 "liveness.m"
                  ll_backend__liveness__PostBirths_25 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_45_45);
                }
#line 610 "liveness.m"
                {
#line 610 "liveness.m"
                  ll_backend__liveness__PreDeaths_26 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_45_45);
                }
#line 611 "liveness.m"
                {
#line 611 "liveness.m"
                  ll_backend__liveness__PostDeaths_27 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__liveness__TypeCtorInfo_45_45, ll_backend__liveness__RHSVars_22);
                }
#line 612 "liveness.m"
                {
#line 612 "liveness.m"
                  hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(ll_backend__liveness__PreBirths_24, ll_backend__liveness__PostBirths_25, ll_backend__liveness__PreDeaths_26, ll_backend__liveness__PostDeaths_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__liveness__GoalInfo0_14, &ll_backend__liveness__GoalInfo_28);
                }
#line 614 "liveness.m"
                {
#line 614 "liveness.m"
                  ll_backend__liveness__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 614 "liveness.m"
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_10, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_13));
#line 614 "liveness.m"
                  MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_10, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_28));
#line 614 "liveness.m"
                }
#line 607 "liveness.m"
              }
#line 615 "liveness.m"
            else
#line 616 "liveness.m"
              {
#line 616 "liveness.m"
                {
#line 616 "liveness.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_construct_goal_loop\'/4", (MR_String) "rhs var not live");
#line 616 "liveness.m"
                  return;
                }
#line 616 "liveness.m"
              }
#line 615 "liveness.m"
          }
#line 618 "liveness.m"
        else
#line 619 "liveness.m"
          {
#line 619 "liveness.m"
            {
#line 619 "liveness.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_construct_goal_loop\'/4", (MR_String) "unexpected conjunct");
#line 619 "liveness.m"
              return;
            }
#line 619 "liveness.m"
          }
#line 621 "liveness.m"
        {
#line 621 "liveness.m"
          ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_p_0(ll_backend__liveness__Goals0_9, &ll_backend__liveness__Goals_11, ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_35_35, ll_backend__liveness__STATE_VARIABLE_LocalLiveVars_4);
        }
#line 599 "liveness.m"
        {
#line 599 "liveness.m"
          MR_Word base;
#line 599 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 599 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_10));
#line 599 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_11));
#line 599 "liveness.m"
        }
#line 599 "liveness.m"
      }
#line 597 "liveness.m"
  }
#line 593 "liveness.m"
}

#line 564 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_construct_6_p_0(
#line 564 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_7,
#line 564 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_8,
#line 564 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_25,
#line 564 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_26,
#line 564 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_10,
#line 564 "liveness.m"
  MR_Word ll_backend__liveness__TermVar_11)
#line 564 "liveness.m"
{
#line 568 "liveness.m"
  {
#line 568 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 568 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 0)));
#line 568 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_7, (MR_Integer) 1)));
#line 589 "liveness.m"
    MR_Word ll_backend__liveness__Conjuncts0_14;
#line 570 "liveness.m"
    MR_Word ll_backend__liveness__V_27_27;

#line 570 "liveness.m"
    ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 570 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 570 "liveness.m"
      {
#line 570 "liveness.m"
        ll_backend__liveness__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 1)));
#line 570 "liveness.m"
        ll_backend__liveness__Conjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_12, (MR_Integer) 2)));
#line 570 "liveness.m"
        ll_backend__liveness__succeeded = (ll_backend__liveness__V_27_27 == (MR_Integer) 0);
#line 570 "liveness.m"
      }
#line 589 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 571 "liveness.m"
      {
#line 571 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 571 "liveness.m"
        MR_Word ll_backend__liveness__LocalLiveVars0_15;
#line 571 "liveness.m"
        MR_Word ll_backend__liveness__Conjuncts_16;
#line 571 "liveness.m"
        MR_Word ll_backend__liveness__LocalLiveVars_17;
#line 574 "liveness.m"
        MR_Word ll_backend__liveness__TypeInfo_40_40;
#line 574 "liveness.m"
        MR_Word ll_backend__liveness__V_39_39;

#line 571 "liveness.m"
        {
#line 571 "liveness.m"
          ll_backend__liveness__LocalLiveVars0_15 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
        }
#line 572 "liveness.m"
        {
#line 572 "liveness.m"
          ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_p_0(ll_backend__liveness__Conjuncts0_14, &ll_backend__liveness__Conjuncts_16, ll_backend__liveness__LocalLiveVars0_15, &ll_backend__liveness__LocalLiveVars_17);
        }
#line 574 "liveness.m"
        {
#line 574 "liveness.m"
          ll_backend__liveness__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(ll_backend__liveness__TypeCtorInfo_38_38, ll_backend__liveness__LocalLiveVars_17, &ll_backend__liveness__V_39_39);
        }
#line 574 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 574 "liveness.m"
          {
#line 8640 "ll_backend.liveness.c"
            ll_backend__liveness__TypeInfo_40_40 = (MR_Word) &ll_backend__liveness_scalar_common_1[2];
#line 574 "liveness.m"
            {
#line 574 "liveness.m"
              ll_backend__liveness__succeeded = mercury__builtin__unify_2_p_0(ll_backend__liveness__TypeInfo_40_40, ((MR_Box) (ll_backend__liveness__TermVar_11)), ((MR_Box) (ll_backend__liveness__V_39_39)));
            }
#line 574 "liveness.m"
          }
#line 586 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 576 "liveness.m"
          {
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__CompletedTermVars_18;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__GoalExpr_19;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__PreBirths_20;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__PostBirths_21;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__PreDeaths_22;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__PostDeaths_23;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__GoalInfo_24;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__V_28_28;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__V_44_44;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__V_49_49;
#line 576 "liveness.m"
            MR_Word ll_backend__liveness__V_50_50;
#line 1866 "liveness.m"
            MR_Word ll_backend__liveness__V_47_47;
#line 1866 "liveness.m"
            MR_Word ll_backend__liveness__V_48_48;

#line 575 "liveness.m"
            {
#line 575 "liveness.m"
              ll_backend__liveness__V_28_28 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__liveness__TypeCtorInfo_38_38, ll_backend__liveness__TermVar_11);
            }
#line 1866 "liveness.m"
            ll_backend__liveness__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 0)));
#line 1866 "liveness.m"
            ll_backend__liveness__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 1)));
#line 1866 "liveness.m"
            ll_backend__liveness__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 2)));
#line 1866 "liveness.m"
            ll_backend__liveness__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 3)));
#line 1866 "liveness.m"
            ll_backend__liveness__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_10, (MR_Integer) 4)));
#line 1866 "liveness.m"
            {
#line 1866 "liveness.m"
              hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__V_28_28, ll_backend__liveness__V_44_44, ll_backend__liveness__V_49_49, ll_backend__liveness__V_50_50, &ll_backend__liveness__CompletedTermVars_18);
            }
#line 577 "liveness.m"
            {
#line 577 "liveness.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_38_38, ll_backend__liveness__CompletedTermVars_18, ll_backend__liveness__STATE_VARIABLE_Liveness_0_25, ll_backend__liveness__STATE_VARIABLE_Liveness_26);
            }
#line 578 "liveness.m"
            {
#line 578 "liveness.m"
              ll_backend__liveness__GoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 578 "liveness.m"
              MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 578 "liveness.m"
              MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_19, 1) = ((MR_Box) ((MR_Integer) 0));
#line 578 "liveness.m"
              MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_19, 2) = ((MR_Box) (ll_backend__liveness__Conjuncts_16));
#line 578 "liveness.m"
            }
#line 579 "liveness.m"
            {
#line 579 "liveness.m"
              ll_backend__liveness__PreBirths_20 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
            }
#line 580 "liveness.m"
            {
#line 580 "liveness.m"
              ll_backend__liveness__PostBirths_21 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
            }
#line 581 "liveness.m"
            {
#line 581 "liveness.m"
              ll_backend__liveness__PreDeaths_22 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
            }
#line 582 "liveness.m"
            {
#line 582 "liveness.m"
              ll_backend__liveness__PostDeaths_23 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_38_38);
            }
#line 583 "liveness.m"
            {
#line 583 "liveness.m"
              hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(ll_backend__liveness__PreBirths_20, ll_backend__liveness__PostBirths_21, ll_backend__liveness__PreDeaths_22, ll_backend__liveness__PostDeaths_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__liveness__GoalInfo0_13, &ll_backend__liveness__GoalInfo_24);
            }
#line 585 "liveness.m"
            {
#line 585 "liveness.m"
              MR_Word base;
#line 585 "liveness.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "liveness.m"
              *ll_backend__liveness__Goal_8 = base;
#line 585 "liveness.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_19));
#line 585 "liveness.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_24));
#line 585 "liveness.m"
            }
#line 576 "liveness.m"
          }
#line 586 "liveness.m"
        else
#line 587 "liveness.m"
          {
#line 587 "liveness.m"
            {
#line 587 "liveness.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_construct\'/6", (MR_String) "unexpected liveness");
#line 587 "liveness.m"
              return;
            }
#line 587 "liveness.m"
          }
#line 571 "liveness.m"
      }
#line 589 "liveness.m"
    else
#line 590 "liveness.m"
      {
#line 590 "liveness.m"
        {
#line 590 "liveness.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_construct\'/6", (MR_String) "not conj");
#line 590 "liveness.m"
          return;
        }
#line 590 "liveness.m"
      }
#line 568 "liveness.m"
  }
#line 564 "liveness.m"
}

#line 545 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_cases_7_p_0(
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 545 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 545 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
#line 545 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7)
#line 545 "liveness.m"
{
#line 549 "liveness.m"
  {
#line 549 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 549 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "liveness.m"
      {
#line 549 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Union_7 = ll_backend__liveness__STATE_VARIABLE_Union_0_6;
#line 549 "liveness.m"
      }
#line 549 "liveness.m"
    else
#line 551 "liveness.m"
      {
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_34_34;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Case_16;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Cases_17;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_14, (MR_Integer) 0)));
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_14, (MR_Integer) 1)));
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Case0_14, (MR_Integer) 2)));
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Goal1_25;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Liveness1_26;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__NonLocalUnion_27;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Residue_28;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__Goal_29;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_Union_32_32;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__GoalExpr_38;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo0_39;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__PostBirths0_40;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__PostBirths_41;
#line 551 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_42;

#line 553 "liveness.m"
        {
#line 553 "liveness.m"
          ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_24, &ll_backend__liveness__Goal1_25, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__Liveness1_26, ll_backend__liveness__HeadVar__5_5);
        }
#line 8873 "ll_backend.liveness.c"
        ll_backend__liveness__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 554 "liveness.m"
        {
#line 554 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_34_34, ll_backend__liveness__Liveness1_26, ll_backend__liveness__STATE_VARIABLE_Union_0_6, &ll_backend__liveness__STATE_VARIABLE_Union_32_32);
        }
#line 555 "liveness.m"
        {
#line 555 "liveness.m"
          ll_backend__liveness__detect_liveness_in_cases_7_p_0(ll_backend__liveness__Cases0_15, &ll_backend__liveness__Cases_17, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__STATE_VARIABLE_Union_32_32, ll_backend__liveness__STATE_VARIABLE_Union_7);
        }
#line 557 "liveness.m"
        {
#line 557 "liveness.m"
          parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_34_34, *ll_backend__liveness__STATE_VARIABLE_Union_7, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__NonLocalUnion_27);
        }
#line 558 "liveness.m"
        {
#line 558 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_34_34, ll_backend__liveness__NonLocalUnion_27, ll_backend__liveness__Liveness1_26, &ll_backend__liveness__Residue_28);
        }
#line 1803 "liveness.m"
        ll_backend__liveness__GoalExpr_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_25, (MR_Integer) 0)));
#line 1803 "liveness.m"
        ll_backend__liveness__GoalInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_25, (MR_Integer) 1)));
#line 1804 "liveness.m"
        {
#line 1804 "liveness.m"
          hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_39, &ll_backend__liveness__PostBirths0_40);
        }
#line 1805 "liveness.m"
        {
#line 1805 "liveness.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PostBirths0_40, ll_backend__liveness__Residue_28, &ll_backend__liveness__PostBirths_41);
        }
#line 1806 "liveness.m"
        {
#line 1806 "liveness.m"
          hlds__hlds_llds__goal_info_set_post_births_3_p_0(ll_backend__liveness__PostBirths_41, ll_backend__liveness__GoalInfo0_39, &ll_backend__liveness__GoalInfo_42);
        }
#line 1807 "liveness.m"
        {
#line 1807 "liveness.m"
          ll_backend__liveness__Goal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1807 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_29, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_38));
#line 1807 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_29, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_42));
#line 1807 "liveness.m"
        }
#line 560 "liveness.m"
        {
#line 560 "liveness.m"
          ll_backend__liveness__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 560 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_16, 0) = ((MR_Box) (ll_backend__liveness__MainConsId_22));
#line 560 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_16, 1) = ((MR_Box) (ll_backend__liveness__OtherConsIds_23));
#line 560 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Case_16, 2) = ((MR_Box) (ll_backend__liveness__Goal_29));
#line 560 "liveness.m"
        }
#line 551 "liveness.m"
        {
#line 551 "liveness.m"
          MR_Word base;
#line 551 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 551 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Case_16));
#line 551 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Cases_17));
#line 551 "liveness.m"
        }
#line 551 "liveness.m"
      }
#line 549 "liveness.m"
  }
#line 545 "liveness.m"
}

#line 528 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_disj_7_p_0(
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 528 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__3_3,
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__4_4,
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5,
#line 528 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Union_0_6,
#line 528 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Union_7)
#line 528 "liveness.m"
{
#line 532 "liveness.m"
  {
#line 532 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 532 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "liveness.m"
      {
#line 532 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Union_7 = ll_backend__liveness__STATE_VARIABLE_Union_0_6;
#line 532 "liveness.m"
      }
#line 532 "liveness.m"
    else
#line 534 "liveness.m"
      {
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__TypeCtorInfo_30_30;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__Goal_16;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__Goals_17;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__Goal1_22;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__Liveness1_23;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__NonLocalUnion_24;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__Residue_25;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_Union_28_28;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__GoalExpr_34;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo0_35;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__PostBirths0_36;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__PostBirths_37;
#line 534 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_38;

#line 535 "liveness.m"
        {
#line 535 "liveness.m"
          ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_14, &ll_backend__liveness__Goal1_22, ll_backend__liveness__HeadVar__3_3, &ll_backend__liveness__Liveness1_23, ll_backend__liveness__HeadVar__5_5);
        }
#line 9031 "ll_backend.liveness.c"
        ll_backend__liveness__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 536 "liveness.m"
        {
#line 536 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__Liveness1_23, ll_backend__liveness__STATE_VARIABLE_Union_0_6, &ll_backend__liveness__STATE_VARIABLE_Union_28_28);
        }
#line 537 "liveness.m"
        {
#line 537 "liveness.m"
          ll_backend__liveness__detect_liveness_in_disj_7_p_0(ll_backend__liveness__Goals0_15, &ll_backend__liveness__Goals_17, ll_backend__liveness__HeadVar__3_3, ll_backend__liveness__HeadVar__4_4, ll_backend__liveness__HeadVar__5_5, ll_backend__liveness__STATE_VARIABLE_Union_28_28, ll_backend__liveness__STATE_VARIABLE_Union_7);
        }
#line 539 "liveness.m"
        {
#line 539 "liveness.m"
          parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, *ll_backend__liveness__STATE_VARIABLE_Union_7, ll_backend__liveness__HeadVar__4_4, &ll_backend__liveness__NonLocalUnion_24);
        }
#line 540 "liveness.m"
        {
#line 540 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__NonLocalUnion_24, ll_backend__liveness__Liveness1_23, &ll_backend__liveness__Residue_25);
        }
#line 1803 "liveness.m"
        ll_backend__liveness__GoalExpr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_22, (MR_Integer) 0)));
#line 1803 "liveness.m"
        ll_backend__liveness__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal1_22, (MR_Integer) 1)));
#line 1804 "liveness.m"
        {
#line 1804 "liveness.m"
          hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__liveness__GoalInfo0_35, &ll_backend__liveness__PostBirths0_36);
        }
#line 1805 "liveness.m"
        {
#line 1805 "liveness.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__PostBirths0_36, ll_backend__liveness__Residue_25, &ll_backend__liveness__PostBirths_37);
        }
#line 1806 "liveness.m"
        {
#line 1806 "liveness.m"
          hlds__hlds_llds__goal_info_set_post_births_3_p_0(ll_backend__liveness__PostBirths_37, ll_backend__liveness__GoalInfo0_35, &ll_backend__liveness__GoalInfo_38);
        }
#line 1807 "liveness.m"
        {
#line 1807 "liveness.m"
          ll_backend__liveness__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1807 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_34));
#line 1807 "liveness.m"
          MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal_16, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_38));
#line 1807 "liveness.m"
        }
#line 534 "liveness.m"
        {
#line 534 "liveness.m"
          MR_Word base;
#line 534 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 534 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_16));
#line 534 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_17));
#line 534 "liveness.m"
        }
#line 534 "liveness.m"
      }
#line 532 "liveness.m"
  }
#line 528 "liveness.m"
}

#line 504 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_conj_5_p_0(
#line 504 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__1_1,
#line 504 "liveness.m"
  MR_Word * ll_backend__liveness__HeadVar__2_2,
#line 504 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_0_3,
#line 504 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_4,
#line 504 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__5_5)
#line 504 "liveness.m"
{
#line 507 "liveness.m"
  {
#line 507 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;

#line 507 "liveness.m"
    if ((ll_backend__liveness__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "liveness.m"
      {
#line 507 "liveness.m"
        *ll_backend__liveness__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 507 "liveness.m"
        *ll_backend__liveness__STATE_VARIABLE_Liveness_4 = ll_backend__liveness__STATE_VARIABLE_Liveness_0_3;
#line 507 "liveness.m"
      }
#line 507 "liveness.m"
    else
#line 509 "liveness.m"
      {
#line 509 "liveness.m"
        MR_Word ll_backend__liveness__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 0)));
#line 509 "liveness.m"
        MR_Word ll_backend__liveness__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__liveness__HeadVar__1_1, (MR_Integer) 1)));
#line 509 "liveness.m"
        MR_Word ll_backend__liveness__Goal_12;
#line 509 "liveness.m"
        MR_Word ll_backend__liveness__Goals_13;
#line 509 "liveness.m"
        MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_21_21;
#line 512 "liveness.m"
        MR_Word ll_backend__liveness__GoalInfo_17;
#line 512 "liveness.m"
        MR_Word ll_backend__liveness__InstmapDelta_18;
#line 512 "liveness.m"
        MR_Word ll_backend__liveness__V_16_16;

#line 510 "liveness.m"
        {
#line 510 "liveness.m"
          ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_10, &ll_backend__liveness__Goal_12, ll_backend__liveness__STATE_VARIABLE_Liveness_0_3, &ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, ll_backend__liveness__HeadVar__5_5);
        }
#line 512 "liveness.m"
        ll_backend__liveness__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_10, (MR_Integer) 0)));
#line 512 "liveness.m"
        ll_backend__liveness__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_10, (MR_Integer) 1)));
#line 513 "liveness.m"
        {
#line 513 "liveness.m"
          ll_backend__liveness__InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo_17);
        }
#line 514 "liveness.m"
        {
#line 514 "liveness.m"
          ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstmapDelta_18);
        }
#line 522 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 521 "liveness.m"
          {
#line 521 "liveness.m"
            ll_backend__liveness__Goals_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 521 "liveness.m"
            *ll_backend__liveness__STATE_VARIABLE_Liveness_4 = ll_backend__liveness__STATE_VARIABLE_Liveness_21_21;
#line 521 "liveness.m"
          }
#line 522 "liveness.m"
        else
#line 523 "liveness.m"
          {
#line 523 "liveness.m"
            ll_backend__liveness__detect_liveness_in_conj_5_p_0(ll_backend__liveness__Goals0_11, &ll_backend__liveness__Goals_13, ll_backend__liveness__STATE_VARIABLE_Liveness_21_21, ll_backend__liveness__STATE_VARIABLE_Liveness_4, ll_backend__liveness__HeadVar__5_5);
          }
#line 509 "liveness.m"
        {
#line 509 "liveness.m"
          MR_Word base;
#line 509 "liveness.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "liveness.m"
          *ll_backend__liveness__HeadVar__2_2 = base;
#line 509 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__liveness__Goal_12));
#line 509 "liveness.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__liveness__Goals_13));
#line 509 "liveness.m"
        }
#line 509 "liveness.m"
      }
#line 507 "liveness.m"
  }
#line 504 "liveness.m"
}

#line 370 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_in_goal_5_p_0(
#line 370 "liveness.m"
  MR_Word ll_backend__liveness__Goal0_6,
#line 370 "liveness.m"
  MR_Word * ll_backend__liveness__Goal_7,
#line 370 "liveness.m"
  MR_Word ll_backend__liveness__Liveness0_8,
#line 370 "liveness.m"
  MR_Word * ll_backend__liveness__FinalLiveness_9,
#line 370 "liveness.m"
  MR_Word ll_backend__liveness__LiveInfo_10)
#line 370 "liveness.m"
{
#line 373 "liveness.m"
  {
#line 373 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_100_100;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_6, (MR_Integer) 0)));
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Goal0_6, (MR_Integer) 1)));
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__BaseNonLocals_13;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__CompletedNonLocals_14;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__NewVarsSet_15;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__NewVarsList_16;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__InstMapDelta_17;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__Empty_18;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__Births_19;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__PreDeaths_47;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__PreBirths_48;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__PostDeaths_49;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__PostBirths_50;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__GoalExpr_51;
#line 373 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_87;

#line 376 "liveness.m"
    {
#line 376 "liveness.m"
      ll_backend__liveness__get_nonlocals_and_typeinfos_4_p_0(ll_backend__liveness__LiveInfo_10, ll_backend__liveness__GoalInfo0_12, &ll_backend__liveness__BaseNonLocals_13, &ll_backend__liveness__CompletedNonLocals_14);
    }
#line 9268 "ll_backend.liveness.c"
    ll_backend__liveness__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 378 "liveness.m"
    {
#line 378 "liveness.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__NewVarsSet_15);
    }
#line 379 "liveness.m"
    {
#line 379 "liveness.m"
      ll_backend__liveness__NewVarsList_16 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__NewVarsSet_15);
    }
#line 380 "liveness.m"
    {
#line 380 "liveness.m"
      ll_backend__liveness__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__GoalInfo0_12);
    }
#line 381 "liveness.m"
    {
#line 381 "liveness.m"
      ll_backend__liveness__Empty_18 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
    }
#line 382 "liveness.m"
    {
#line 382 "liveness.m"
      ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__InstMapDelta_17);
    }
#line 384 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 383 "liveness.m"
      ll_backend__liveness__Births_19 = ll_backend__liveness__Empty_18;
#line 384 "liveness.m"
    else
#line 385 "liveness.m"
      {
#line 385 "liveness.m"
        MR_Word ll_backend__liveness__Births0_20;
#line 385 "liveness.m"
        MR_Word ll_backend__liveness__Births1_21;
#line 385 "liveness.m"
        MR_Word ll_backend__liveness__TypeInfos_22;
#line 385 "liveness.m"
        MR_Word ll_backend__liveness__NewTypeInfos_23;

#line 385 "liveness.m"
        {
#line 385 "liveness.m"
          ll_backend__liveness__Births0_20 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
        }
#line 386 "liveness.m"
        {
#line 386 "liveness.m"
          ll_backend__liveness__find_value_giving_occurrences_5_p_0(ll_backend__liveness__NewVarsList_16, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__InstMapDelta_17, ll_backend__liveness__Births0_20, &ll_backend__liveness__Births1_21);
        }
#line 388 "liveness.m"
        {
#line 388 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__BaseNonLocals_13, &ll_backend__liveness__TypeInfos_22);
        }
#line 389 "liveness.m"
        {
#line 389 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__TypeInfos_22, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__NewTypeInfos_23);
        }
#line 390 "liveness.m"
        {
#line 390 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__Births1_21, ll_backend__liveness__NewTypeInfos_23, &ll_backend__liveness__Births_19);
        }
#line 385 "liveness.m"
      }
#line 392 "liveness.m"
    {
#line 392 "liveness.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__Liveness0_8, ll_backend__liveness__Births_19, ll_backend__liveness__FinalLiveness_9);
    }
#line 405 "liveness.m"
    if (((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_11)) == (MR_mktag((MR_Integer) 0))))
#line 485 "liveness.m"
      {
#line 485 "liveness.m"
        MR_Word ll_backend__liveness__SubGoal0_80 = (MR_Word) MR_body(((MR_Word) ll_backend__liveness__GoalExpr0_11), (MR_Integer) 0);
#line 485 "liveness.m"
        MR_Word ll_backend__liveness__SubGoal_81;
#line 485 "liveness.m"
        MR_Word ll_backend__liveness__Liveness_107;
#line 485 "liveness.m"
        MR_Word ll_backend__liveness__NonLocalLiveness_108;
#line 485 "liveness.m"
        MR_Word ll_backend__liveness__GoalFinalLiveness_109;

#line 470 "liveness.m"
        {
#line 470 "liveness.m"
          ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__SubGoal0_80, &ll_backend__liveness__SubGoal_81, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_107, ll_backend__liveness__LiveInfo_10);
        }
#line 472 "liveness.m"
        ll_backend__liveness__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__liveness__SubGoal_81);
#line 486 "liveness.m"
        {
#line 486 "liveness.m"
          ll_backend__liveness__PreDeaths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
        }
#line 487 "liveness.m"
        {
#line 487 "liveness.m"
          ll_backend__liveness__PreBirths_48 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
        }
#line 488 "liveness.m"
        {
#line 488 "liveness.m"
          parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_107, &ll_backend__liveness__NonLocalLiveness_108);
        }
#line 489 "liveness.m"
        {
#line 489 "liveness.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__NonLocalLiveness_108, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_109);
        }
#line 490 "liveness.m"
        {
#line 490 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__GoalFinalLiveness_109, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_49);
        }
#line 491 "liveness.m"
        {
#line 491 "liveness.m"
          parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_109, &ll_backend__liveness__PostBirths_50);
        }
#line 485 "liveness.m"
      }
#line 405 "liveness.m"
    else
#line 405 "liveness.m"
      if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 485 "liveness.m"
        {
#line 485 "liveness.m"
          MR_Word ll_backend__liveness__ConjType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
#line 485 "liveness.m"
          MR_Word ll_backend__liveness__Goals0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 2)));
#line 485 "liveness.m"
          MR_Word ll_backend__liveness__Goals_54;
#line 485 "liveness.m"
          MR_Word ll_backend__liveness__Liveness_55;
#line 485 "liveness.m"
          MR_Word ll_backend__liveness__NonLocalLiveness_84;
#line 485 "liveness.m"
          MR_Word ll_backend__liveness__GoalFinalLiveness_85;

#line 412 "liveness.m"
          if ((ll_backend__liveness__ConjType_52 == (MR_Integer) 1))
#line 413 "liveness.m"
            {
#line 413 "liveness.m"
              MR_Word ll_backend__liveness__Union0_56;
#line 413 "liveness.m"
              MR_Word ll_backend__liveness__Union_57;

#line 414 "liveness.m"
              {
#line 414 "liveness.m"
                ll_backend__liveness__Union0_56 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
              }
#line 415 "liveness.m"
              {
#line 415 "liveness.m"
                ll_backend__liveness__detect_liveness_in_par_conj_7_p_0(ll_backend__liveness__Goals0_53, &ll_backend__liveness__Goals_54, ll_backend__liveness__Liveness0_8, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__Union0_56, &ll_backend__liveness__Union_57);
              }
#line 417 "liveness.m"
              {
#line 417 "liveness.m"
                parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__Union_57, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_55);
              }
#line 413 "liveness.m"
            }
#line 412 "liveness.m"
          else
#line 410 "liveness.m"
            {
#line 410 "liveness.m"
              ll_backend__liveness__detect_liveness_in_conj_5_p_0(ll_backend__liveness__Goals0_53, &ll_backend__liveness__Goals_54, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_55, ll_backend__liveness__LiveInfo_10);
            }
#line 419 "liveness.m"
          {
#line 419 "liveness.m"
            ll_backend__liveness__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 419 "liveness.m"
            MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 419 "liveness.m"
            MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 1) = ((MR_Box) (ll_backend__liveness__ConjType_52));
#line 419 "liveness.m"
            MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 2) = ((MR_Box) (ll_backend__liveness__Goals_54));
#line 419 "liveness.m"
          }
#line 486 "liveness.m"
          {
#line 486 "liveness.m"
            ll_backend__liveness__PreDeaths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
          }
#line 487 "liveness.m"
          {
#line 487 "liveness.m"
            ll_backend__liveness__PreBirths_48 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
          }
#line 488 "liveness.m"
          {
#line 488 "liveness.m"
            parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_55, &ll_backend__liveness__NonLocalLiveness_84);
          }
#line 489 "liveness.m"
          {
#line 489 "liveness.m"
            parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__NonLocalLiveness_84, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_85);
          }
#line 490 "liveness.m"
          {
#line 490 "liveness.m"
            parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__GoalFinalLiveness_85, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_49);
          }
#line 491 "liveness.m"
          {
#line 491 "liveness.m"
            parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_85, &ll_backend__liveness__PostBirths_50);
          }
#line 485 "liveness.m"
        }
#line 405 "liveness.m"
      else
#line 405 "liveness.m"
        if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 485 "liveness.m"
          {
#line 485 "liveness.m"
            MR_Word ll_backend__liveness__Goals0_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
#line 485 "liveness.m"
            MR_Word ll_backend__liveness__Goals_95;
#line 485 "liveness.m"
            MR_Word ll_backend__liveness__Union0_96;
#line 485 "liveness.m"
            MR_Word ll_backend__liveness__Union_97;
#line 485 "liveness.m"
            MR_Word ll_backend__liveness__Liveness_101;
#line 485 "liveness.m"
            MR_Word ll_backend__liveness__NonLocalLiveness_102;
#line 485 "liveness.m"
            MR_Word ll_backend__liveness__GoalFinalLiveness_103;

#line 422 "liveness.m"
            {
#line 422 "liveness.m"
              ll_backend__liveness__Union0_96 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
            }
#line 423 "liveness.m"
            {
#line 423 "liveness.m"
              ll_backend__liveness__detect_liveness_in_disj_7_p_0(ll_backend__liveness__Goals0_94, &ll_backend__liveness__Goals_95, ll_backend__liveness__Liveness0_8, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__Union0_96, &ll_backend__liveness__Union_97);
            }
#line 425 "liveness.m"
            {
#line 425 "liveness.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__Union_97, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_101);
            }
#line 426 "liveness.m"
            {
#line 426 "liveness.m"
              ll_backend__liveness__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "liveness.m"
              MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 426 "liveness.m"
              MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 1) = ((MR_Box) (ll_backend__liveness__Goals_95));
#line 426 "liveness.m"
            }
#line 486 "liveness.m"
            {
#line 486 "liveness.m"
              ll_backend__liveness__PreDeaths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
            }
#line 487 "liveness.m"
            {
#line 487 "liveness.m"
              ll_backend__liveness__PreBirths_48 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
            }
#line 488 "liveness.m"
            {
#line 488 "liveness.m"
              parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_101, &ll_backend__liveness__NonLocalLiveness_102);
            }
#line 489 "liveness.m"
            {
#line 489 "liveness.m"
              parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__NonLocalLiveness_102, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_103);
            }
#line 490 "liveness.m"
            {
#line 490 "liveness.m"
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__GoalFinalLiveness_103, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_49);
            }
#line 491 "liveness.m"
            {
#line 491 "liveness.m"
              parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_103, &ll_backend__liveness__PostBirths_50);
            }
#line 485 "liveness.m"
          }
#line 405 "liveness.m"
        else
#line 405 "liveness.m"
          if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 485 "liveness.m"
            {
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Vars_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Cond0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 2)));
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Then0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 3)));
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Else0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 4)));
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Cond_66;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__LivenessCond_67;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__CondInfo_69;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__CondDelta_70;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__LivenessThen_71;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Then1_72;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Else1_73;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__LivenessElse_74;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__ITENonLocalLiveness_75;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__ResidueThen_76;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__ResidueElse_77;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Then_78;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Else_79;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__Liveness_104;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__NonLocalLiveness_105;
#line 485 "liveness.m"
              MR_Word ll_backend__liveness__GoalFinalLiveness_106;
#line 442 "liveness.m"
              MR_Word ll_backend__liveness__V_68_68;

#line 435 "liveness.m"
              {
#line 435 "liveness.m"
                ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Cond0_63, &ll_backend__liveness__Cond_66, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__LivenessCond_67, ll_backend__liveness__LiveInfo_10);
              }
#line 442 "liveness.m"
              ll_backend__liveness__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond_66, (MR_Integer) 0)));
#line 442 "liveness.m"
              ll_backend__liveness__CondInfo_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Cond_66, (MR_Integer) 1)));
#line 443 "liveness.m"
              {
#line 443 "liveness.m"
                ll_backend__liveness__CondDelta_70 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__liveness__CondInfo_69);
              }
#line 444 "liveness.m"
              {
#line 444 "liveness.m"
                ll_backend__liveness__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__liveness__CondDelta_70);
              }
#line 447 "liveness.m"
              if (ll_backend__liveness__succeeded)
#line 445 "liveness.m"
                {
#line 445 "liveness.m"
                  ll_backend__liveness__LivenessThen_71 = ll_backend__liveness__LivenessCond_67;
#line 446 "liveness.m"
                  ll_backend__liveness__Then1_72 = ll_backend__liveness__Then0_64;
#line 445 "liveness.m"
                }
#line 447 "liveness.m"
              else
#line 448 "liveness.m"
                {
#line 448 "liveness.m"
                  ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Then0_64, &ll_backend__liveness__Then1_72, ll_backend__liveness__LivenessCond_67, &ll_backend__liveness__LivenessThen_71, ll_backend__liveness__LiveInfo_10);
                }
#line 452 "liveness.m"
              {
#line 452 "liveness.m"
                ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Else0_65, &ll_backend__liveness__Else1_73, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__LivenessElse_74, ll_backend__liveness__LiveInfo_10);
              }
#line 455 "liveness.m"
              {
#line 455 "liveness.m"
                parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__LivenessThen_71, ll_backend__liveness__LivenessElse_74, &ll_backend__liveness__Liveness_104);
              }
#line 456 "liveness.m"
              {
#line 456 "liveness.m"
                parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__Liveness_104, ll_backend__liveness__CompletedNonLocals_14, &ll_backend__liveness__ITENonLocalLiveness_75);
              }
#line 459 "liveness.m"
              {
#line 459 "liveness.m"
                parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__ITENonLocalLiveness_75, ll_backend__liveness__LivenessThen_71, &ll_backend__liveness__ResidueThen_76);
              }
#line 461 "liveness.m"
              {
#line 461 "liveness.m"
                parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__ITENonLocalLiveness_75, ll_backend__liveness__LivenessElse_74, &ll_backend__liveness__ResidueElse_77);
              }
#line 464 "liveness.m"
              {
#line 464 "liveness.m"
                ll_backend__liveness__add_liveness_after_goal_3_p_0(ll_backend__liveness__Then1_72, ll_backend__liveness__ResidueThen_76, &ll_backend__liveness__Then_78);
              }
#line 465 "liveness.m"
              {
#line 465 "liveness.m"
                ll_backend__liveness__add_liveness_after_goal_3_p_0(ll_backend__liveness__Else1_73, ll_backend__liveness__ResidueElse_77, &ll_backend__liveness__Else_79);
              }
#line 467 "liveness.m"
              {
#line 467 "liveness.m"
                ll_backend__liveness__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 467 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 467 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 1) = ((MR_Box) (ll_backend__liveness__Vars_62));
#line 467 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 2) = ((MR_Box) (ll_backend__liveness__Cond_66));
#line 467 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 3) = ((MR_Box) (ll_backend__liveness__Then_78));
#line 467 "liveness.m"
                MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 4) = ((MR_Box) (ll_backend__liveness__Else_79));
#line 467 "liveness.m"
              }
#line 486 "liveness.m"
              {
#line 486 "liveness.m"
                ll_backend__liveness__PreDeaths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
              }
#line 487 "liveness.m"
              {
#line 487 "liveness.m"
                ll_backend__liveness__PreBirths_48 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
              }
#line 488 "liveness.m"
              {
#line 488 "liveness.m"
                parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_104, &ll_backend__liveness__NonLocalLiveness_105);
              }
#line 489 "liveness.m"
              {
#line 489 "liveness.m"
                parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__NonLocalLiveness_105, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_106);
              }
#line 490 "liveness.m"
              {
#line 490 "liveness.m"
                parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__GoalFinalLiveness_106, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_49);
              }
#line 491 "liveness.m"
              {
#line 491 "liveness.m"
                parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_106, &ll_backend__liveness__PostBirths_50);
              }
#line 485 "liveness.m"
            }
#line 405 "liveness.m"
          else
#line 405 "liveness.m"
            if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 485 "liveness.m"
              {
#line 485 "liveness.m"
                MR_Word ll_backend__liveness__Reason_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
#line 485 "liveness.m"
                MR_Word ll_backend__liveness__SubGoal0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 2)));
#line 485 "liveness.m"
                MR_Word ll_backend__liveness__SubGoal_99;
#line 485 "liveness.m"
                MR_Word ll_backend__liveness__Liveness_110;
#line 485 "liveness.m"
                MR_Word ll_backend__liveness__NonLocalLiveness_111;
#line 485 "liveness.m"
                MR_Word ll_backend__liveness__GoalFinalLiveness_112;
#line 478 "liveness.m"
                MR_Word ll_backend__liveness__TermVar_83;
#line 475 "liveness.m"
                MR_Word ll_backend__liveness__V_91_91;

#line 475 "liveness.m"
                ll_backend__liveness__succeeded = ((((MR_tag((MR_Word) ll_backend__liveness__Reason_82)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_82, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 475 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 475 "liveness.m"
                  {
#line 475 "liveness.m"
                    ll_backend__liveness__TermVar_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_82, (MR_Integer) 1)));
#line 475 "liveness.m"
                    ll_backend__liveness__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__Reason_82, (MR_Integer) 2)));
#line 475 "liveness.m"
                    ll_backend__liveness__succeeded = (ll_backend__liveness__V_91_91 == (MR_Integer) 1);
#line 475 "liveness.m"
                  }
#line 478 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 476 "liveness.m"
                  {
#line 476 "liveness.m"
                    ll_backend__liveness__detect_liveness_in_construct_6_p_0(ll_backend__liveness__SubGoal0_98, &ll_backend__liveness__SubGoal_99, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_110, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__TermVar_83);
                  }
#line 478 "liveness.m"
                else
#line 481 "liveness.m"
                  {
#line 481 "liveness.m"
                    ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__SubGoal0_98, &ll_backend__liveness__SubGoal_99, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_110, ll_backend__liveness__LiveInfo_10);
                  }
#line 484 "liveness.m"
                {
#line 484 "liveness.m"
                  ll_backend__liveness__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 484 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 484 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 1) = ((MR_Box) (ll_backend__liveness__Reason_82));
#line 484 "liveness.m"
                  MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 2) = ((MR_Box) (ll_backend__liveness__SubGoal_99));
#line 484 "liveness.m"
                }
#line 486 "liveness.m"
                {
#line 486 "liveness.m"
                  ll_backend__liveness__PreDeaths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
                }
#line 487 "liveness.m"
                {
#line 487 "liveness.m"
                  ll_backend__liveness__PreBirths_48 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
                }
#line 488 "liveness.m"
                {
#line 488 "liveness.m"
                  parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_110, &ll_backend__liveness__NonLocalLiveness_111);
                }
#line 489 "liveness.m"
                {
#line 489 "liveness.m"
                  parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__NonLocalLiveness_111, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_112);
                }
#line 490 "liveness.m"
                {
#line 490 "liveness.m"
                  parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__GoalFinalLiveness_112, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_49);
                }
#line 491 "liveness.m"
                {
#line 491 "liveness.m"
                  parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_112, &ll_backend__liveness__PostBirths_50);
                }
#line 485 "liveness.m"
              }
#line 405 "liveness.m"
            else
#line 405 "liveness.m"
              if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 493 "liveness.m"
                {
#line 494 "liveness.m"
                  {
#line 494 "liveness.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.detect_liveness_in_goal\'/5", (MR_String) "shorthand");
#line 494 "liveness.m"
                    return;
                  }
#line 493 "liveness.m"
                }
#line 405 "liveness.m"
              else
#line 405 "liveness.m"
                if (((((MR_tag((MR_Word) ll_backend__liveness__GoalExpr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 485 "liveness.m"
                  {
#line 485 "liveness.m"
                    MR_Word ll_backend__liveness__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 1)));
#line 485 "liveness.m"
                    MR_Word ll_backend__liveness__Det_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 2)));
#line 485 "liveness.m"
                    MR_Word ll_backend__liveness__Cases0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr0_11, (MR_Integer) 3)));
#line 485 "liveness.m"
                    MR_Word ll_backend__liveness__Cases_61;
#line 485 "liveness.m"
                    MR_Word ll_backend__liveness__Liveness_113;
#line 485 "liveness.m"
                    MR_Word ll_backend__liveness__NonLocalLiveness_114;
#line 485 "liveness.m"
                    MR_Word ll_backend__liveness__GoalFinalLiveness_115;

#line 429 "liveness.m"
                    {
#line 429 "liveness.m"
                      ll_backend__liveness__detect_liveness_in_cases_7_p_0(ll_backend__liveness__Cases0_60, &ll_backend__liveness__Cases_61, ll_backend__liveness__Liveness0_8, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__LiveInfo_10, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__Liveness_113);
                    }
#line 431 "liveness.m"
                    {
#line 431 "liveness.m"
                      ll_backend__liveness__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 431 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 431 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 1) = ((MR_Box) (ll_backend__liveness__Var_58));
#line 431 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 2) = ((MR_Box) (ll_backend__liveness__Det_59));
#line 431 "liveness.m"
                      MR_hl_field(MR_mktag(3), ll_backend__liveness__GoalExpr_51, 3) = ((MR_Box) (ll_backend__liveness__Cases_61));
#line 431 "liveness.m"
                    }
#line 486 "liveness.m"
                    {
#line 486 "liveness.m"
                      ll_backend__liveness__PreDeaths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
                    }
#line 487 "liveness.m"
                    {
#line 487 "liveness.m"
                      ll_backend__liveness__PreBirths_48 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
                    }
#line 488 "liveness.m"
                    {
#line 488 "liveness.m"
                      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__CompletedNonLocals_14, ll_backend__liveness__Liveness_113, &ll_backend__liveness__NonLocalLiveness_114);
                    }
#line 489 "liveness.m"
                    {
#line 489 "liveness.m"
                      parse_tree__set_of_var__union_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__NonLocalLiveness_114, ll_backend__liveness__Liveness0_8, &ll_backend__liveness__GoalFinalLiveness_115);
                    }
#line 490 "liveness.m"
                    {
#line 490 "liveness.m"
                      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, ll_backend__liveness__GoalFinalLiveness_115, *ll_backend__liveness__FinalLiveness_9, &ll_backend__liveness__PostDeaths_49);
                    }
#line 491 "liveness.m"
                    {
#line 491 "liveness.m"
                      parse_tree__set_of_var__difference_3_p_0(ll_backend__liveness__TypeCtorInfo_100_100, *ll_backend__liveness__FinalLiveness_9, ll_backend__liveness__GoalFinalLiveness_115, &ll_backend__liveness__PostBirths_50);
                    }
#line 485 "liveness.m"
                  }
#line 405 "liveness.m"
                else
#line 399 "liveness.m"
                  {
#line 400 "liveness.m"
                    {
#line 400 "liveness.m"
                      ll_backend__liveness__PreDeaths_47 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
                    }
#line 401 "liveness.m"
                    ll_backend__liveness__PreBirths_48 = ll_backend__liveness__Births_19;
#line 402 "liveness.m"
                    {
#line 402 "liveness.m"
                      ll_backend__liveness__PostDeaths_49 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
                    }
#line 403 "liveness.m"
                    {
#line 403 "liveness.m"
                      ll_backend__liveness__PostBirths_50 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_100_100);
                    }
#line 404 "liveness.m"
                    ll_backend__liveness__GoalExpr_51 = ll_backend__liveness__GoalExpr0_11;
#line 399 "liveness.m"
                  }
#line 498 "liveness.m"
    {
#line 498 "liveness.m"
      hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(ll_backend__liveness__PreBirths_48, ll_backend__liveness__PostBirths_50, ll_backend__liveness__PreDeaths_47, ll_backend__liveness__PostDeaths_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__liveness__GoalInfo0_12, &ll_backend__liveness__GoalInfo_87);
    }
#line 500 "liveness.m"
    {
#line 500 "liveness.m"
      MR_Word base;
#line 500 "liveness.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "liveness.m"
      *ll_backend__liveness__Goal_7 = base;
#line 500 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__liveness__GoalExpr_51));
#line 500 "liveness.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__liveness__GoalInfo_87));
#line 500 "liveness.m"
    }
#line 373 "liveness.m"
  }
#line 370 "liveness.m"
}

#line 352 "liveness.m"
static void MR_CALL 
ll_backend__liveness__maybe_debug_liveness_8_p_0(
#line 352 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_9,
#line 352 "liveness.m"
  MR_String ll_backend__liveness__Message_10,
#line 352 "liveness.m"
  MR_Integer ll_backend__liveness__DebugLiveness_11,
#line 352 "liveness.m"
  MR_Integer ll_backend__liveness__PredIdInt_12,
#line 352 "liveness.m"
  MR_Word ll_backend__liveness__VarSet_13,
#line 352 "liveness.m"
  MR_Word ll_backend__liveness__Goal_14)
#line 352 "liveness.m"
{
#line 363 "liveness.m"
  {
#line 363 "liveness.m"
    MR_bool ll_backend__liveness__succeeded = (ll_backend__liveness__DebugLiveness_11 == ll_backend__liveness__PredIdInt_12);

#line 363 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 358 "liveness.m"
      {
#line 358 "liveness.m"
        MR_Word ll_backend__liveness__Globals_16;
#line 358 "liveness.m"
        MR_Word ll_backend__liveness__OutInfo_17;

#line 358 "liveness.m"
        {
#line 358 "liveness.m"
          mercury__io__write_string_3_p_0(ll_backend__liveness__Message_10);
        }
#line 359 "liveness.m"
        {
#line 359 "liveness.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 360 "liveness.m"
        {
#line 360 "liveness.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__liveness__ModuleInfo_9, &ll_backend__liveness__Globals_16);
        }
#line 361 "liveness.m"
        {
#line 361 "liveness.m"
          ll_backend__liveness__OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(ll_backend__liveness__Globals_16);
        }
#line 362 "liveness.m"
        {
#line 362 "liveness.m"
          hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(ll_backend__liveness__OutInfo_17, ll_backend__liveness__Goal_14, ll_backend__liveness__ModuleInfo_9, ll_backend__liveness__VarSet_13, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n");
#line 362 "liveness.m"
          return;
        }
#line 358 "liveness.m"
      }
#line 363 "liveness.m"
    else
#line 362 "liveness.m"
      {
#line 362 "liveness.m"
      }
#line 363 "liveness.m"
  }
#line 352 "liveness.m"
}

#line 268 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_proc_2_4_p_0(
#line 268 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_5,
#line 268 "liveness.m"
  MR_Word ll_backend__liveness__PredId_6,
#line 268 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_36,
#line 268 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ProcInfo_37)
#line 268 "liveness.m"
{
#line 271 "liveness.m"
  {
#line 271 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__Goal0_8;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__VarSet_9;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__VarTypes_10;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__RttiVarMaps_11;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__Globals_12;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__PredInfo_13;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__TypeInfoLiveness_14;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__LiveInfo_15;
#line 271 "liveness.m"
    MR_Integer ll_backend__liveness__DebugLiveness_16;
#line 271 "liveness.m"
    MR_Integer ll_backend__liveness__PredIdInt_17;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__Liveness0_19;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__Goal1_20;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__Deadness0_22;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__Goal2_23;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__TraceLevel_25;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__Goal3_32;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__ResumeVars0_33;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__Goal_34;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39;
#line 271 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_60_60;
#line 292 "liveness.m"
    MR_Word ll_backend__liveness__V_21_21;
#line 300 "liveness.m"
    MR_Word ll_backend__liveness__V_24_24;
#line 307 "liveness.m"
    MR_Word ll_backend__liveness__AllowDelayDeath_26;
#line 307 "liveness.m"
    MR_Word ll_backend__liveness__DelayDeath_27;
#line 307 "liveness.m"
    MR_Integer ll_backend__liveness__DelayDeathMaxVars_28;
#line 307 "liveness.m"
    MR_Word ll_backend__liveness__Origin_30;
#line 307 "liveness.m"
    MR_Word ll_backend__liveness__V_50_50;
#line 307 "liveness.m"
    MR_Word ll_backend__liveness__V_51_51;
#line 307 "liveness.m"
    MR_Word ll_backend__liveness__V_65_65;
#line 323 "liveness.m"
    MR_Word ll_backend__liveness__V_31_31;
#line 337 "liveness.m"
    MR_Word ll_backend__liveness__V_56_56;
#line 343 "liveness.m"
    MR_Word ll_backend__liveness__V_35_35;

#line 272 "liveness.m"
    {
#line 272 "liveness.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_36, &ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39);
    }
#line 274 "liveness.m"
    {
#line 274 "liveness.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__liveness__Goal0_8);
    }
#line 275 "liveness.m"
    {
#line 275 "liveness.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__liveness__VarSet_9);
    }
#line 276 "liveness.m"
    {
#line 276 "liveness.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__liveness__VarTypes_10);
    }
#line 277 "liveness.m"
    {
#line 277 "liveness.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__liveness__RttiVarMaps_11);
    }
#line 278 "liveness.m"
    {
#line 278 "liveness.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__liveness__ModuleInfo_5, &ll_backend__liveness__Globals_12);
    }
#line 279 "liveness.m"
    {
#line 279 "liveness.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__PredId_6, &ll_backend__liveness__PredInfo_13);
    }
#line 280 "liveness.m"
    {
#line 280 "liveness.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__liveness__PredInfo_13, ll_backend__liveness__Globals_12, &ll_backend__liveness__TypeInfoLiveness_14);
    }
#line 1886 "liveness.m"
    {
#line 1886 "liveness.m"
      ll_backend__liveness__LiveInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1886 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_15, 0) = ((MR_Box) (ll_backend__liveness__ModuleInfo_5));
#line 1886 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_15, 1) = ((MR_Box) (ll_backend__liveness__TypeInfoLiveness_14));
#line 1886 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_15, 2) = ((MR_Box) (ll_backend__liveness__VarSet_9));
#line 1886 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_15, 3) = ((MR_Box) (ll_backend__liveness__VarTypes_10));
#line 1886 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__LiveInfo_15, 4) = ((MR_Box) (ll_backend__liveness__RttiVarMaps_11));
#line 1886 "liveness.m"
    }
#line 284 "liveness.m"
    {
#line 284 "liveness.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__liveness__Globals_12, (MR_Integer) 72, &ll_backend__liveness__DebugLiveness_16);
    }
#line 285 "liveness.m"
    {
#line 285 "liveness.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(ll_backend__liveness__PredId_6, &ll_backend__liveness__PredIdInt_17);
    }
#line 357 "liveness.m"
    ll_backend__liveness__succeeded = (ll_backend__liveness__DebugLiveness_16 == ll_backend__liveness__PredIdInt_17);
#line 363 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 358 "liveness.m"
      {
#line 358 "liveness.m"
        MR_Word ll_backend__liveness__Globals_82;
#line 358 "liveness.m"
        MR_Word ll_backend__liveness__OutInfo_83;

#line 358 "liveness.m"
        {
#line 358 "liveness.m"
          mercury__io__write_string_3_p_0((MR_String) "\nbefore liveness");
        }
#line 359 "liveness.m"
        {
#line 359 "liveness.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 360 "liveness.m"
        {
#line 360 "liveness.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__liveness__ModuleInfo_5, &ll_backend__liveness__Globals_82);
        }
#line 361 "liveness.m"
        {
#line 361 "liveness.m"
          ll_backend__liveness__OutInfo_83 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(ll_backend__liveness__Globals_82);
        }
#line 362 "liveness.m"
        {
#line 362 "liveness.m"
          hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(ll_backend__liveness__OutInfo_83, ll_backend__liveness__Goal0_8, ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__VarSet_9, (MR_Integer) 1, (MR_Integer) 0, (MR_String) "\n");
        }
#line 358 "liveness.m"
      }
#line 363 "liveness.m"
    else
#line 362 "liveness.m"
      {
#line 362 "liveness.m"
      }
#line 291 "liveness.m"
    {
#line 291 "liveness.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, ll_backend__liveness__PredId_6, ll_backend__liveness__ModuleInfo_5, &ll_backend__liveness__Liveness0_19);
    }
#line 292 "liveness.m"
    {
#line 292 "liveness.m"
      ll_backend__liveness__detect_liveness_in_goal_5_p_0(ll_backend__liveness__Goal0_8, &ll_backend__liveness__Goal1_20, ll_backend__liveness__Liveness0_19, &ll_backend__liveness__V_21_21, ll_backend__liveness__LiveInfo_15);
    }
#line 295 "liveness.m"
    {
#line 295 "liveness.m"
      ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nafter liveness", ll_backend__liveness__DebugLiveness_16, ll_backend__liveness__PredIdInt_17, ll_backend__liveness__VarSet_9, ll_backend__liveness__Goal1_20);
    }
#line 299 "liveness.m"
    {
#line 299 "liveness.m"
      ll_backend__liveness__initial_deadness_4_p_0(ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, ll_backend__liveness__LiveInfo_15, ll_backend__liveness__ModuleInfo_5, &ll_backend__liveness__Deadness0_22);
    }
#line 300 "liveness.m"
    {
#line 300 "liveness.m"
      ll_backend__liveness__detect_deadness_in_goal_6_p_0(ll_backend__liveness__Goal1_20, &ll_backend__liveness__Goal2_23, ll_backend__liveness__Deadness0_22, &ll_backend__liveness__V_24_24, ll_backend__liveness__Liveness0_19, ll_backend__liveness__LiveInfo_15);
    }
#line 302 "liveness.m"
    {
#line 302 "liveness.m"
      ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nafter deadness", ll_backend__liveness__DebugLiveness_16, ll_backend__liveness__PredIdInt_17, ll_backend__liveness__VarSet_9, ll_backend__liveness__Goal2_23);
    }
#line 334 "liveness.m"
    {
#line 334 "liveness.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__liveness__Globals_12, &ll_backend__liveness__TraceLevel_25);
    }
#line 307 "liveness.m"
    {
#line 307 "liveness.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__liveness__Globals_12, &ll_backend__liveness__V_65_65);
    }
#line 307 "liveness.m"
    {
#line 307 "liveness.m"
      ll_backend__liveness__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__liveness__TraceLevel_25, ll_backend__liveness__V_65_65);
    }
#line 307 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 307 "liveness.m"
      {
#line 308 "liveness.m"
        {
#line 308 "liveness.m"
          ll_backend__liveness__AllowDelayDeath_26 = libs__trace_params__trace_level_allows_delay_death_1_f_0(ll_backend__liveness__TraceLevel_25);
        }
#line 309 "liveness.m"
        ll_backend__liveness__succeeded = (ll_backend__liveness__AllowDelayDeath_26 == (MR_Integer) 1);
#line 307 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 307 "liveness.m"
          {
#line 310 "liveness.m"
            ll_backend__liveness__V_50_50 = (MR_Integer) 128;
#line 310 "liveness.m"
            {
#line 310 "liveness.m"
              libs__globals__lookup_bool_option_3_p_0(ll_backend__liveness__Globals_12, ll_backend__liveness__V_50_50, &ll_backend__liveness__DelayDeath_27);
            }
#line 311 "liveness.m"
            ll_backend__liveness__succeeded = (ll_backend__liveness__DelayDeath_27 == (MR_Integer) 1);
#line 307 "liveness.m"
            if (ll_backend__liveness__succeeded)
#line 307 "liveness.m"
              {
#line 312 "liveness.m"
                ll_backend__liveness__V_51_51 = (MR_Integer) 129;
#line 312 "liveness.m"
                {
#line 312 "liveness.m"
                  libs__globals__lookup_int_option_3_p_0(ll_backend__liveness__Globals_12, ll_backend__liveness__V_51_51, &ll_backend__liveness__DelayDeathMaxVars_28);
                }
#line 317 "liveness.m"
                {
#line 317 "liveness.m"
                  MR_Integer ll_backend__liveness__V_52_52;

#line 317 "liveness.m"
                  {
#line 317 "liveness.m"
                    ll_backend__liveness__V_52_52 = mercury__varset__num_allocated_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__liveness__VarSet_9);
                  }
#line 317 "liveness.m"
                  ll_backend__liveness__succeeded = (ll_backend__liveness__V_52_52 <= ll_backend__liveness__DelayDeathMaxVars_28);
#line 317 "liveness.m"
                }
#line 318 "liveness.m"
                if (!(ll_backend__liveness__succeeded))
#line 319 "liveness.m"
                  {
#line 319 "liveness.m"
                    MR_Integer ll_backend__liveness__NumVars_29;

#line 319 "liveness.m"
                    {
#line 319 "liveness.m"
                      parse_tree__prog_data__vartypes_count_2_p_0(ll_backend__liveness__VarTypes_10, &ll_backend__liveness__NumVars_29);
                    }
#line 320 "liveness.m"
                    ll_backend__liveness__succeeded = (ll_backend__liveness__NumVars_29 <= ll_backend__liveness__DelayDeathMaxVars_28);
#line 319 "liveness.m"
                  }
#line 307 "liveness.m"
                if (ll_backend__liveness__succeeded)
#line 307 "liveness.m"
                  {
#line 322 "liveness.m"
                    {
#line 322 "liveness.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__liveness__PredInfo_13, &ll_backend__liveness__Origin_30);
                    }
#line 323 "liveness.m"
                    ll_backend__liveness__succeeded = ((MR_tag((MR_Word) ll_backend__liveness__Origin_30)) == (MR_mktag((MR_Integer) 0)));
#line 323 "liveness.m"
                    if (ll_backend__liveness__succeeded)
#line 323 "liveness.m"
                      ll_backend__liveness__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__Origin_30, (MR_Integer) 0)));
#line 323 "liveness.m"
                    ll_backend__liveness__succeeded = !(ll_backend__liveness__succeeded);
#line 307 "liveness.m"
                  }
#line 307 "liveness.m"
              }
#line 307 "liveness.m"
          }
#line 307 "liveness.m"
      }
#line 330 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 325 "liveness.m"
      {
#line 325 "liveness.m"
        {
#line 325 "liveness.m"
          ll_backend__liveness__delay_death_proc_body_4_p_0(ll_backend__liveness__Goal2_23, &ll_backend__liveness__Goal3_32, ll_backend__liveness__VarSet_9, ll_backend__liveness__Liveness0_19);
        }
#line 327 "liveness.m"
        {
#line 327 "liveness.m"
          ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nafter delay death", ll_backend__liveness__DebugLiveness_16, ll_backend__liveness__PredIdInt_17, ll_backend__liveness__VarSet_9, ll_backend__liveness__Goal3_32);
        }
#line 325 "liveness.m"
      }
#line 330 "liveness.m"
    else
#line 331 "liveness.m"
      ll_backend__liveness__Goal3_32 = ll_backend__liveness__Goal2_23;
#line 337 "liveness.m"
    {
#line 337 "liveness.m"
      ll_backend__liveness__V_56_56 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__PredInfo_13, ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, ll_backend__liveness__TraceLevel_25);
    }
#line 337 "liveness.m"
    ll_backend__liveness__succeeded = (ll_backend__liveness__V_56_56 == (MR_Integer) 1);
#line 340 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 339 "liveness.m"
      {
#line 339 "liveness.m"
        ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__liveness__ResumeVars0_33);
      }
#line 340 "liveness.m"
    else
#line 341 "liveness.m"
      {
#line 341 "liveness.m"
        {
#line 341 "liveness.m"
          ll_backend__liveness__ResumeVars0_33 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 341 "liveness.m"
      }
#line 343 "liveness.m"
    {
#line 343 "liveness.m"
      ll_backend__liveness__detect_resume_points_in_goal_6_p_0(ll_backend__liveness__Goal3_32, &ll_backend__liveness__Goal_34, ll_backend__liveness__Liveness0_19, &ll_backend__liveness__V_35_35, ll_backend__liveness__LiveInfo_15, ll_backend__liveness__ResumeVars0_33);
    }
#line 346 "liveness.m"
    {
#line 346 "liveness.m"
      ll_backend__liveness__maybe_debug_liveness_8_p_0(ll_backend__liveness__ModuleInfo_5, (MR_String) "\nafter resume point", ll_backend__liveness__DebugLiveness_16, ll_backend__liveness__PredIdInt_17, ll_backend__liveness__VarSet_9, ll_backend__liveness__Goal_34);
    }
#line 349 "liveness.m"
    {
#line 349 "liveness.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__liveness__Goal_34, ll_backend__liveness__STATE_VARIABLE_ProcInfo_39_39, &ll_backend__liveness__STATE_VARIABLE_ProcInfo_60_60);
    }
#line 350 "liveness.m"
    {
#line 350 "liveness.m"
      hlds__hlds_pred__proc_info_set_liveness_info_3_p_0(ll_backend__liveness__Liveness0_19, ll_backend__liveness__STATE_VARIABLE_ProcInfo_60_60, ll_backend__liveness__STATE_VARIABLE_ProcInfo_37);
#line 350 "liveness.m"
      return;
    }
#line 271 "liveness.m"
  }
#line 268 "liveness.m"
}

#line 255 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_proc_5_p_0(
#line 255 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_6,
#line 255 "liveness.m"
  MR_Word ll_backend__liveness__PredId_7,
#line 255 "liveness.m"
  MR_Integer ll_backend__liveness__ProcId_8,
#line 255 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_PredInfo_0_12,
#line 255 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_PredInfo_13)
#line 255 "liveness.m"
{
#line 258 "liveness.m"
  {
#line 258 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 258 "liveness.m"
    MR_Word ll_backend__liveness__ProcInfo0_10;
#line 258 "liveness.m"
    MR_Word ll_backend__liveness__ProcInfo_11;

#line 259 "liveness.m"
    {
#line 259 "liveness.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(ll_backend__liveness__STATE_VARIABLE_PredInfo_0_12, ll_backend__liveness__ProcId_8, &ll_backend__liveness__ProcInfo0_10);
    }
#line 260 "liveness.m"
    {
#line 260 "liveness.m"
      ll_backend__liveness__detect_liveness_proc_2_4_p_0(ll_backend__liveness__ModuleInfo_6, ll_backend__liveness__PredId_7, ll_backend__liveness__ProcInfo0_10, &ll_backend__liveness__ProcInfo_11);
    }
#line 261 "liveness.m"
    {
#line 261 "liveness.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ll_backend__liveness__ProcId_8, ll_backend__liveness__ProcInfo_11, ll_backend__liveness__STATE_VARIABLE_PredInfo_0_12, ll_backend__liveness__STATE_VARIABLE_PredInfo_13);
#line 261 "liveness.m"
      return;
    }
#line 258 "liveness.m"
  }
#line 255 "liveness.m"
}

#line 252 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0_1(
#line 252 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 252 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 252 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_2,
#line 252 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_3)
#line 252 "liveness.m"
{
#line 252 "liveness.m"
  {
#line 252 "liveness.m"
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
#line 252 "liveness.m"
    MR_Word ll_backend__liveness__conv0_STATE_VARIABLE_PredInfo_13;

#line 252 "liveness.m"
    {
#line 252 "liveness.m"
      ll_backend__liveness__detect_liveness_pred_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__liveness__wrapper_arg_1), ((MR_Word) ll_backend__liveness__wrapper_arg_2), &ll_backend__liveness__conv0_STATE_VARIABLE_PredInfo_13);
    }
#line 252 "liveness.m"
    *ll_backend__liveness__wrapper_arg_3 = ((MR_Box) (ll_backend__liveness__conv0_STATE_VARIABLE_PredInfo_13));
#line 252 "liveness.m"
  }
#line 252 "liveness.m"
}

#line 246 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_pred_3_p_0(
#line 246 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_4,
#line 246 "liveness.m"
  MR_Word ll_backend__liveness__PredId_5,
#line 246 "liveness.m"
  MR_Word * ll_backend__liveness__PredInfo_6)
#line 246 "liveness.m"
{
#line 249 "liveness.m"
  {
#line 249 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 249 "liveness.m"
    MR_Word ll_backend__liveness__PredInfo0_7;
#line 249 "liveness.m"
    MR_Word ll_backend__liveness__ProcIds_8;
#line 249 "liveness.m"
    MR_Word ll_backend__liveness__V_9_9;
#line 252 "liveness.m"
    MR_Box ll_backend__liveness__conv1_PredInfo_6;

#line 250 "liveness.m"
    {
#line 250 "liveness.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__liveness__ModuleInfo_4, ll_backend__liveness__PredId_5, &ll_backend__liveness__PredInfo0_7);
    }
#line 251 "liveness.m"
    {
#line 251 "liveness.m"
      ll_backend__liveness__ProcIds_8 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__liveness__PredInfo0_7);
    }
#line 252 "liveness.m"
    {
#line 252 "liveness.m"
      ll_backend__liveness__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 252 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_9_9, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_5[0]));
#line 252 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_9_9, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_pred_3_p_0_1));
#line 252 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 252 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_9_9, 3) = ((MR_Box) (ll_backend__liveness__ModuleInfo_4));
#line 252 "liveness.m"
      MR_hl_field(MR_mktag(0), ll_backend__liveness__V_9_9, 4) = ((MR_Box) (ll_backend__liveness__PredId_5));
#line 252 "liveness.m"
    }
#line 252 "liveness.m"
    {
#line 252 "liveness.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__liveness__V_9_9, ll_backend__liveness__ProcIds_8, ((MR_Box) (ll_backend__liveness__PredInfo0_7)), &ll_backend__liveness__conv1_PredInfo_6);
    }
#line 252 "liveness.m"
    *ll_backend__liveness__PredInfo_6 = ((MR_Word) ll_backend__liveness__conv1_PredInfo_6);
#line 249 "liveness.m"
  }
#line 246 "liveness.m"
}

#line 243 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_4(
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_2,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_3,
#line 243 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_4)
#line 243 "liveness.m"
{
#line 243 "liveness.m"
  {
#line 243 "liveness.m"
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
#line 243 "liveness.m"
    MR_Word ll_backend__liveness__conv4_HeadVar__4_4;

#line 243 "liveness.m"
    {
#line 243 "liveness.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(((MR_Word) ll_backend__liveness__wrapper_arg_1), ((MR_Word) ll_backend__liveness__wrapper_arg_2), ((MR_Word) ll_backend__liveness__wrapper_arg_3), &ll_backend__liveness__conv4_HeadVar__4_4);
    }
#line 243 "liveness.m"
    *ll_backend__liveness__wrapper_arg_4 = ((MR_Box) (ll_backend__liveness__conv4_HeadVar__4_4));
#line 243 "liveness.m"
  }
#line 243 "liveness.m"
}

#line 242 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3(
#line 242 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 242 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 242 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_2)
#line 242 "liveness.m"
{
#line 242 "liveness.m"
  {
#line 242 "liveness.m"
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
#line 242 "liveness.m"
    MR_Word ll_backend__liveness__conv3_PredInfo_6;

#line 242 "liveness.m"
    {
#line 242 "liveness.m"
      ll_backend__liveness__detect_liveness_pred_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1), &ll_backend__liveness__conv3_PredInfo_6);
    }
#line 242 "liveness.m"
    *ll_backend__liveness__wrapper_arg_2 = ((MR_Box) (ll_backend__liveness__conv3_PredInfo_6));
#line 242 "liveness.m"
  }
#line 242 "liveness.m"
}

#line 243 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_2(
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_2,
#line 243 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_3,
#line 243 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_4)
#line 243 "liveness.m"
{
#line 243 "liveness.m"
  {
#line 243 "liveness.m"
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
#line 243 "liveness.m"
    MR_Word ll_backend__liveness__conv1_HeadVar__4_4;

#line 243 "liveness.m"
    {
#line 243 "liveness.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(((MR_Word) ll_backend__liveness__wrapper_arg_1), ((MR_Word) ll_backend__liveness__wrapper_arg_2), ((MR_Word) ll_backend__liveness__wrapper_arg_3), &ll_backend__liveness__conv1_HeadVar__4_4);
    }
#line 243 "liveness.m"
    *ll_backend__liveness__wrapper_arg_4 = ((MR_Box) (ll_backend__liveness__conv1_HeadVar__4_4));
#line 243 "liveness.m"
  }
#line 243 "liveness.m"
}

#line 242 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1(
#line 242 "liveness.m"
  MR_Box ll_backend__liveness__closure_arg,
#line 242 "liveness.m"
  MR_Box ll_backend__liveness__wrapper_arg_1,
#line 242 "liveness.m"
  MR_Box * ll_backend__liveness__wrapper_arg_2)
#line 242 "liveness.m"
{
#line 242 "liveness.m"
  {
#line 242 "liveness.m"
    MR_Box ll_backend__liveness__closure = ll_backend__liveness__closure_arg;
#line 242 "liveness.m"
    MR_Word ll_backend__liveness__conv0_PredInfo_6;

#line 242 "liveness.m"
    {
#line 242 "liveness.m"
      ll_backend__liveness__detect_liveness_pred_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__liveness__wrapper_arg_1), &ll_backend__liveness__conv0_PredInfo_6);
    }
#line 242 "liveness.m"
    *ll_backend__liveness__wrapper_arg_2 = ((MR_Box) (ll_backend__liveness__conv0_PredInfo_6));
#line 242 "liveness.m"
  }
#line 242 "liveness.m"
}

#line 225 "liveness.m"
static void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(
#line 225 "liveness.m"
  MR_Word ll_backend__liveness__PredIds_5,
#line 225 "liveness.m"
  MR_Word ll_backend__liveness__HLDS0_6,
#line 225 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_0_10,
#line 225 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_HLDS_11)
#line 225 "liveness.m"
{
#line 234 "liveness.m"
  while (MR_TRUE)
#line 234 "liveness.m"
    {
#line 234 "liveness.m"
      /* tailcall optimized into a loop */
#line 234 "liveness.m"
      {
#line 234 "liveness.m"
        MR_bool ll_backend__liveness__succeeded;
#line 234 "liveness.m"
        MR_Word ll_backend__liveness__HeadPredIds_8;
#line 234 "liveness.m"
        MR_Word ll_backend__liveness__TailPredIds_9;

#line 229 "liveness.m"
        {
#line 229 "liveness.m"
          ll_backend__liveness__succeeded = mercury__list__split_list_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Integer) 1000, ll_backend__liveness__PredIds_5, &ll_backend__liveness__HeadPredIds_8, &ll_backend__liveness__TailPredIds_9);
        }
#line 234 "liveness.m"
        if (ll_backend__liveness__succeeded)
#line 232 "liveness.m"
          {
#line 232 "liveness.m"
            MR_Word ll_backend__liveness__TypeCtorInfo_16_28;
#line 232 "liveness.m"
            MR_Word ll_backend__liveness__TypeCtorInfo_17_29;
#line 232 "liveness.m"
            MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_13_13;
#line 232 "liveness.m"
            MR_Word ll_backend__liveness__PredInfos_22;
#line 232 "liveness.m"
            MR_Word ll_backend__liveness__V_23_23;
#line 243 "liveness.m"
            MR_Box ll_backend__liveness__conv2_STATE_VARIABLE_HLDS_13_13;

#line 242 "liveness.m"
            {
#line 242 "liveness.m"
              ll_backend__liveness__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 242 "liveness.m"
              MR_hl_field(MR_mktag(0), ll_backend__liveness__V_23_23, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_3[0]));
#line 242 "liveness.m"
              MR_hl_field(MR_mktag(0), ll_backend__liveness__V_23_23, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_1));
#line 242 "liveness.m"
              MR_hl_field(MR_mktag(0), ll_backend__liveness__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 242 "liveness.m"
              MR_hl_field(MR_mktag(0), ll_backend__liveness__V_23_23, 3) = ((MR_Box) (ll_backend__liveness__HLDS0_6));
#line 242 "liveness.m"
            }
#line 10773 "ll_backend.liveness.c"
            ll_backend__liveness__TypeCtorInfo_16_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 10775 "ll_backend.liveness.c"
            ll_backend__liveness__TypeCtorInfo_17_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 242 "liveness.m"
            {
#line 242 "liveness.m"
              mercury__list__map_3_p_0(ll_backend__liveness__TypeCtorInfo_16_28, ll_backend__liveness__TypeCtorInfo_17_29, ll_backend__liveness__V_23_23, ll_backend__liveness__HeadPredIds_8, &ll_backend__liveness__PredInfos_22);
            }
#line 243 "liveness.m"
            {
#line 243 "liveness.m"
              mercury__list__foldl_corresponding_5_p_0(ll_backend__liveness__TypeCtorInfo_16_28, ll_backend__liveness__TypeCtorInfo_17_29, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &ll_backend__liveness_scalar_common_2[2], ll_backend__liveness__HeadPredIds_8, ll_backend__liveness__PredInfos_22, ((MR_Box) (ll_backend__liveness__STATE_VARIABLE_HLDS_0_10)), &ll_backend__liveness__conv2_STATE_VARIABLE_HLDS_13_13);
            }
#line 243 "liveness.m"
            ll_backend__liveness__STATE_VARIABLE_HLDS_13_13 = ((MR_Word) ll_backend__liveness__conv2_STATE_VARIABLE_HLDS_13_13);
#line 232 "liveness.m"
            /* direct tailcall eliminated */
#line 232 "liveness.m"
            {
#line 232 "liveness.m"
              MR_Word ll_backend__liveness__PredIds__tmp_copy_5 = ll_backend__liveness__TailPredIds_9;
#line 232 "liveness.m"
              MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_0__tmp_copy_10 = ll_backend__liveness__STATE_VARIABLE_HLDS_13_13;

#line 232 "liveness.m"
              ll_backend__liveness__STATE_VARIABLE_HLDS_0_10 = ll_backend__liveness__STATE_VARIABLE_HLDS_0__tmp_copy_10;
#line 232 "liveness.m"
              ll_backend__liveness__PredIds_5 = ll_backend__liveness__PredIds__tmp_copy_5;
#line 232 "liveness.m"
            }
#line 232 "liveness.m"
            continue;
#line 232 "liveness.m"
          }
#line 234 "liveness.m"
        else
#line 241 "liveness.m"
          {
#line 241 "liveness.m"
            MR_Word ll_backend__liveness__TypeCtorInfo_16_46;
#line 241 "liveness.m"
            MR_Word ll_backend__liveness__TypeCtorInfo_17_47;
#line 241 "liveness.m"
            MR_Word ll_backend__liveness__PredInfos_40;
#line 241 "liveness.m"
            MR_Word ll_backend__liveness__V_41_41;
#line 243 "liveness.m"
            MR_Box ll_backend__liveness__conv5_STATE_VARIABLE_HLDS_11;

#line 242 "liveness.m"
            {
#line 242 "liveness.m"
              ll_backend__liveness__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 242 "liveness.m"
              MR_hl_field(MR_mktag(0), ll_backend__liveness__V_41_41, 0) = ((MR_Box) (&ll_backend__liveness_scalar_common_3[0]));
#line 242 "liveness.m"
              MR_hl_field(MR_mktag(0), ll_backend__liveness__V_41_41, 1) = ((MR_Box) (ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0_3));
#line 242 "liveness.m"
              MR_hl_field(MR_mktag(0), ll_backend__liveness__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 242 "liveness.m"
              MR_hl_field(MR_mktag(0), ll_backend__liveness__V_41_41, 3) = ((MR_Box) (ll_backend__liveness__HLDS0_6));
#line 242 "liveness.m"
            }
#line 10837 "ll_backend.liveness.c"
            ll_backend__liveness__TypeCtorInfo_16_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 10839 "ll_backend.liveness.c"
            ll_backend__liveness__TypeCtorInfo_17_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 242 "liveness.m"
            {
#line 242 "liveness.m"
              mercury__list__map_3_p_0(ll_backend__liveness__TypeCtorInfo_16_46, ll_backend__liveness__TypeCtorInfo_17_47, ll_backend__liveness__V_41_41, ll_backend__liveness__PredIds_5, &ll_backend__liveness__PredInfos_40);
            }
#line 243 "liveness.m"
            {
#line 243 "liveness.m"
              mercury__list__foldl_corresponding_5_p_0(ll_backend__liveness__TypeCtorInfo_16_46, ll_backend__liveness__TypeCtorInfo_17_47, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &ll_backend__liveness_scalar_common_2[3], ll_backend__liveness__PredIds_5, ll_backend__liveness__PredInfos_40, ((MR_Box) (ll_backend__liveness__STATE_VARIABLE_HLDS_0_10)), &ll_backend__liveness__conv5_STATE_VARIABLE_HLDS_11);
            }
#line 243 "liveness.m"
            *ll_backend__liveness__STATE_VARIABLE_HLDS_11 = ((MR_Word) ll_backend__liveness__conv5_STATE_VARIABLE_HLDS_11);
#line 241 "liveness.m"
          }
#line 234 "liveness.m"
      }
#line 234 "liveness.m"
      break;
#line 234 "liveness.m"
    }
#line 225 "liveness.m"
}

#line 178 "liveness.m"
void MR_CALL 
ll_backend__liveness__initial_liveness_4_p_0(
#line 178 "liveness.m"
  MR_Word ll_backend__liveness__ProcInfo_5,
#line 178 "liveness.m"
  MR_Word ll_backend__liveness__PredId_6,
#line 178 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_7,
#line 178 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_Liveness_21)
#line 178 "liveness.m"
{
#line 1736 "liveness.m"
  {
#line 1736 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__TypeCtorInfo_30_30;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__Vars_9;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__Modes_10;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__VarTypes_11;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__Types_12;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__Globals_13;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__GoalInfo_15;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__NonLocals0_16;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__PredInfo_17;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__RttiVarMaps_18;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__TypeinfoLiveness_19;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__NonLocals_20;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_22_22;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_27_27;
#line 1736 "liveness.m"
    MR_Word ll_backend__liveness__V_28_28;
#line 1744 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_Liveness_23_23;
#line 1755 "liveness.m"
    MR_Word ll_backend__liveness___Goal_14;

#line 1737 "liveness.m"
    {
#line 1737 "liveness.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__liveness__ProcInfo_5, &ll_backend__liveness__Vars_9);
    }
#line 1738 "liveness.m"
    {
#line 1738 "liveness.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__liveness__ProcInfo_5, &ll_backend__liveness__Modes_10);
    }
#line 1739 "liveness.m"
    {
#line 1739 "liveness.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__liveness__ProcInfo_5, &ll_backend__liveness__VarTypes_11);
    }
#line 1740 "liveness.m"
    {
#line 1740 "liveness.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__liveness__VarTypes_11, ll_backend__liveness__Vars_9, &ll_backend__liveness__Types_12);
    }
#line 10936 "ll_backend.liveness.c"
    ll_backend__liveness__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1741 "liveness.m"
    {
#line 1741 "liveness.m"
      ll_backend__liveness__STATE_VARIABLE_Liveness_22_22 = parse_tree__set_of_var__init_0_f_0(ll_backend__liveness__TypeCtorInfo_30_30);
    }
#line 1742 "liveness.m"
    {
#line 1742 "liveness.m"
      ll_backend__liveness__succeeded = ll_backend__liveness__initial_liveness_2_6_p_0(ll_backend__liveness__Vars_9, ll_backend__liveness__Modes_10, ll_backend__liveness__Types_12, ll_backend__liveness__ModuleInfo_7, ll_backend__liveness__STATE_VARIABLE_Liveness_22_22, &ll_backend__liveness__STATE_VARIABLE_Liveness_23_23);
    }
#line 1744 "liveness.m"
    if (ll_backend__liveness__succeeded)
#line 1742 "liveness.m"
      ll_backend__liveness__STATE_VARIABLE_Liveness_27_27 = ll_backend__liveness__STATE_VARIABLE_Liveness_23_23;
#line 1744 "liveness.m"
    else
#line 1745 "liveness.m"
      {
#line 1745 "liveness.m"
        {
#line 1745 "liveness.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.liveness", (MR_String) "predicate \140ll_backend.liveness.initial_liveness\'/4", (MR_String) "length mismatch");
#line 1745 "liveness.m"
          return;
        }
#line 1745 "liveness.m"
      }
#line 1754 "liveness.m"
    {
#line 1754 "liveness.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__liveness__ModuleInfo_7, &ll_backend__liveness__Globals_13);
    }
#line 1755 "liveness.m"
    {
#line 1755 "liveness.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__liveness__ProcInfo_5, &ll_backend__liveness__V_28_28);
    }
#line 1755 "liveness.m"
    ll_backend__liveness___Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_28_28, (MR_Integer) 0)));
#line 1755 "liveness.m"
    ll_backend__liveness__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__V_28_28, (MR_Integer) 1)));
#line 1756 "liveness.m"
    {
#line 1756 "liveness.m"
      ll_backend__liveness__NonLocals0_16 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__liveness__GoalInfo_15);
    }
#line 1757 "liveness.m"
    {
#line 1757 "liveness.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__liveness__ModuleInfo_7, ll_backend__liveness__PredId_6, &ll_backend__liveness__PredInfo_17);
    }
#line 1758 "liveness.m"
    {
#line 1758 "liveness.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__liveness__ProcInfo_5, &ll_backend__liveness__RttiVarMaps_18);
    }
#line 1759 "liveness.m"
    {
#line 1759 "liveness.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__liveness__PredInfo_17, ll_backend__liveness__Globals_13, &ll_backend__liveness__TypeinfoLiveness_19);
    }
#line 1760 "liveness.m"
    {
#line 1760 "liveness.m"
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(ll_backend__liveness__NonLocals0_16, ll_backend__liveness__TypeinfoLiveness_19, ll_backend__liveness__VarTypes_11, ll_backend__liveness__RttiVarMaps_18, &ll_backend__liveness__NonLocals_20);
    }
#line 1762 "liveness.m"
    {
#line 1762 "liveness.m"
      parse_tree__set_of_var__intersect_3_p_0(ll_backend__liveness__TypeCtorInfo_30_30, ll_backend__liveness__STATE_VARIABLE_Liveness_27_27, ll_backend__liveness__NonLocals_20, ll_backend__liveness__STATE_VARIABLE_Liveness_21);
#line 1762 "liveness.m"
      return;
    }
#line 1736 "liveness.m"
  }
#line 178 "liveness.m"
}

#line 173 "liveness.m"
void MR_CALL 
ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(
#line 173 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_0_5,
#line 173 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_HLDS_6)
#line 173 "liveness.m"
{
#line 221 "liveness.m"
  {
#line 221 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 221 "liveness.m"
    MR_Word ll_backend__liveness__PredIds_4;
#line 221 "liveness.m"
    MR_Word ll_backend__liveness__STATE_VARIABLE_HLDS_7_7;

#line 222 "liveness.m"
    {
#line 222 "liveness.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&ll_backend__liveness__PredIds_4, ll_backend__liveness__STATE_VARIABLE_HLDS_0_5, &ll_backend__liveness__STATE_VARIABLE_HLDS_7_7);
    }
#line 223 "liveness.m"
    {
#line 223 "liveness.m"
      ll_backend__liveness__detect_liveness_preds_parallel_2_4_p_0(ll_backend__liveness__PredIds_4, ll_backend__liveness__STATE_VARIABLE_HLDS_7_7, ll_backend__liveness__STATE_VARIABLE_HLDS_7_7, ll_backend__liveness__STATE_VARIABLE_HLDS_6);
#line 223 "liveness.m"
      return;
    }
#line 221 "liveness.m"
  }
#line 173 "liveness.m"
}

#line 166 "liveness.m"
void MR_CALL 
ll_backend__liveness__detect_liveness_proc_4_p_0(
#line 166 "liveness.m"
  MR_Word ll_backend__liveness__ModuleInfo_5,
#line 166 "liveness.m"
  MR_Word ll_backend__liveness__HeadVar__2_2,
#line 166 "liveness.m"
  MR_Word ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_9,
#line 166 "liveness.m"
  MR_Word * ll_backend__liveness__STATE_VARIABLE_ProcInfo_10)
#line 166 "liveness.m"
{
#line 265 "liveness.m"
  {
#line 265 "liveness.m"
    MR_bool ll_backend__liveness__succeeded;
#line 265 "liveness.m"
    MR_Word ll_backend__liveness__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 0)));
#line 265 "liveness.m"
    MR_Integer ll_backend__liveness___ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__liveness__HeadVar__2_2, (MR_Integer) 1)));

#line 266 "liveness.m"
    {
#line 266 "liveness.m"
      ll_backend__liveness__detect_liveness_proc_2_4_p_0(ll_backend__liveness__ModuleInfo_5, ll_backend__liveness__PredId_6, ll_backend__liveness__STATE_VARIABLE_ProcInfo_0_9, ll_backend__liveness__STATE_VARIABLE_ProcInfo_10);
#line 266 "liveness.m"
      return;
    }
#line 265 "liveness.m"
  }
#line 166 "liveness.m"
}

void mercury__ll_backend__liveness__init(void)
{
}

void mercury__ll_backend__liveness__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__liveness__ll_backend__liveness__type_ctor_info_live_info_0);
}

void mercury__ll_backend__liveness__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.liveness. */
