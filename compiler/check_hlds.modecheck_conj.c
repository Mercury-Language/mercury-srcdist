/*
** Automatically generated from `modecheck_conj.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


/* :- module check_hlds.modecheck_conj. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_conj__init
ENDINIT
*/

#include "check_hlds.modecheck_conj.mih"


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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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



#line 436 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s {
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7;
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73;
#line 436 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74;
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 436 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76;
#line 436 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont;
#line 436 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr;
#line 440 "modecheck_conj.m"
  MR_bool check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded;
#line 536 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71;
#line 536 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72;
#line 536 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77;
#line 536 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105;
#line 536 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106;
#line 543 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71;
#line 500 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118;
#line 500 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41;
#line 500 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48;
#line 500 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49;
#line 500 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87;
#line 500 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88;
#line 436 "modecheck_conj.m"
};

#line 433 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s {
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3;
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5;
#line 433 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont;
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr;
#line 433 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74;
#line 433 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76;
#line 433 "modecheck_conj.m"
};

#line 428 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s {
#line 428 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12;
#line 428 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14;
#line 428 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont;
#line 428 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr;
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12;
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14;
#line 428 "modecheck_conj.m"
};

#line 433 "modecheck_conj.m"
struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s {
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3;
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5;
#line 433 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont;
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr;
#line 433 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74;
#line 433 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76;
#line 433 "modecheck_conj.m"
};

#line 314 "modecheck_conj.m"
struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s {
#line 324 "modecheck_conj.m"
  MR_bool check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded;
#line 384 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17;
#line 384 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21;
#line 334 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49;
#line 334 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20;
#line 334 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22;
#line 334 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23;
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56;
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57;
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58;
#line 432 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77;
#line 432 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68;
#line 433 "modecheck_conj.m"
  jmp_buf check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0;
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57;
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58;
#line 354 "modecheck_conj.m"
  jmp_buf check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1;
#line 354 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24;
#line 314 "modecheck_conj.m"
};


#line 279 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 282 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 285 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 288 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 291 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 294 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

#line 297 "check_hlds.modecheck_conj.c"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
#line 300 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 302 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2);

#line 305 "check_hlds.modecheck_conj.c"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
#line 308 "check_hlds.modecheck_conj.c"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_1,
#line 310 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 312 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_3);

#line 633 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__633__1_2_p_0(
#line 633 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__OldMayInit_20,
#line 633 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_36);

#line 127 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
#line 127 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__1_1,
#line 127 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 127 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3);

#line 127 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
#line 127 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 127 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2);

#line 746 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
#line 746 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 746 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2,
#line 746 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3);

#line 738 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
#line 738 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 738 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 738 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Vars_3);

#line 717 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
#line 717 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVars_3,
#line 717 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2);

#line 714 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
#line 714 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 714 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 673 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
#line 673 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_7,
#line 673 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_8,
#line 673 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32,
#line 673 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33,
#line 673 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34,
#line 673 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35);

#line 659 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
#line 659 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1);

#line 633 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2(
#line 633 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg);

#line 626 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_1(
#line 626 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 626 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 609 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(
#line 609 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 609 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 609 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 609 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 609 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26,
#line 609 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27,
#line 609 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28,
#line 609 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29);

#line 567 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0(
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3,
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4,
#line 567 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5,
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6,
#line 567 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7);

#line 558 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(
#line 558 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModuleInfo_4,
#line 558 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__VarTypes_5,
#line 558 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Var_6);

#line 507 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1(
#line 507 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 507 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 543 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5(
#line 543 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 536 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(
#line 536 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 500 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3(
#line 500 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 500 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2(
#line 500 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 436 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_8,
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73,
#line 436 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74,
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75,
#line 436 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76,
#line 436 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 436 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2(
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 433 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 428 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0(
#line 428 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 428 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goals_8,
#line 428 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11,
#line 428 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12,
#line 428 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13,
#line 428 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14,
#line 428 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 428 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 395 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(
#line 395 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1);

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3(
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 433 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 334 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_1(
#line 334 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 334 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 354 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(
#line 354 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 354 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8(
#line 354 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 354 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(
#line 354 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 314 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(
#line 314 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 314 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 314 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 314 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 314 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33,
#line 314 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34,
#line 314 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35,
#line 314 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36);

#line 139 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(
#line 139 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 139 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 139 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__3_3,
#line 139 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4,
#line 139 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5,
#line 139 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6,
#line 139 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7);


static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_2[3][5];

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_3[2][3];

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_4[1][9];

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_5[1][6];




static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_init_solver_vars_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_init_solver_vars_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[0])),
    ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[0])),
    ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__modecheck_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 791 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 799 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 807 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 816 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 824 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 832 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 840 "check_hlds.modecheck_conj.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_conj__check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001)),
  (MR_String) "check_hlds.modecheck_conj",
  (MR_String) "impurity_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 857 "check_hlds.modecheck_conj.c"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
#line 860 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 862 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2)
#line 864 "check_hlds.modecheck_conj.c"
{
#line 866 "check_hlds.modecheck_conj.c"
  {
#line 868 "check_hlds.modecheck_conj.c"
    MR_bool check_hlds__modecheck_conj__succeeded;

#line 871 "check_hlds.modecheck_conj.c"
    {
#line 873 "check_hlds.modecheck_conj.c"
      check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj____Unify____impurity_errors_0_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2));
    }
#line 876 "check_hlds.modecheck_conj.c"
    return check_hlds__modecheck_conj__succeeded;
#line 878 "check_hlds.modecheck_conj.c"
  }
#line 880 "check_hlds.modecheck_conj.c"
}

#line 883 "check_hlds.modecheck_conj.c"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
#line 886 "check_hlds.modecheck_conj.c"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_1,
#line 888 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 890 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_3)
#line 892 "check_hlds.modecheck_conj.c"
{
#line 894 "check_hlds.modecheck_conj.c"
  {
#line 896 "check_hlds.modecheck_conj.c"
    MR_Word check_hlds__modecheck_conj__conv0_HeadVar__1_1;

#line 899 "check_hlds.modecheck_conj.c"
    {
#line 901 "check_hlds.modecheck_conj.c"
      check_hlds__modecheck_conj____Compare____impurity_errors_0_0(&check_hlds__modecheck_conj__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_3));
    }
#line 904 "check_hlds.modecheck_conj.c"
    *check_hlds__modecheck_conj__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_conj__conv0_HeadVar__1_1));
#line 906 "check_hlds.modecheck_conj.c"
  }
#line 908 "check_hlds.modecheck_conj.c"
}

#line 633 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__633__1_2_p_0(
#line 633 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__OldMayInit_20,
#line 633 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_36)
#line 633 "modecheck_conj.m"
{
#line 633 "modecheck_conj.m"
  {
#line 633 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__OldMayInit_20 == check_hlds__modecheck_conj__HeadVar__2_36);

#line 633 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 633 "modecheck_conj.m"
  }
#line 633 "modecheck_conj.m"
}

#line 127 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
#line 127 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__1_1,
#line 127 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 127 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3)
#line 127 "modecheck_conj.m"
{
#line 127 "modecheck_conj.m"
  {
#line 127 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 127 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar1_4 = check_hlds__modecheck_conj__HeadVar__2_2;
#line 127 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar2_5 = check_hlds__modecheck_conj__HeadVar__3_3;

#line 127 "modecheck_conj.m"
    {
#line 127 "modecheck_conj.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[2], check_hlds__modecheck_conj__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar2_5)));
#line 127 "modecheck_conj.m"
      return;
    }
#line 127 "modecheck_conj.m"
  }
#line 127 "modecheck_conj.m"
}

#line 127 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
#line 127 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 127 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2)
#line 127 "modecheck_conj.m"
{
#line 127 "modecheck_conj.m"
  {
#line 127 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 127 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar1_3 = check_hlds__modecheck_conj__HeadVar__1_1;
#line 127 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar2_4 = check_hlds__modecheck_conj__HeadVar__2_2;

#line 127 "modecheck_conj.m"
    {
#line 127 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[2], ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar2_4)));
    }
#line 127 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 127 "modecheck_conj.m"
  }
#line 127 "modecheck_conj.m"
}

#line 746 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
#line 746 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 746 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2,
#line 746 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3)
#line 746 "modecheck_conj.m"
{
#line 749 "modecheck_conj.m"
  while (MR_TRUE)
#line 749 "modecheck_conj.m"
    {
#line 749 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 749 "modecheck_conj.m"
      {
#line 749 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 749 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "modecheck_conj.m"
          *check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2;
#line 749 "modecheck_conj.m"
        else
#line 750 "modecheck_conj.m"
          {
#line 750 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayedGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 750 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayedGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModeErrorInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 1)));
#line 750 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 2)));
#line 750 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15;
#line 751 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___WaitingVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 0)));

#line 752 "modecheck_conj.m"
            {
#line 752 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_delay_goal_4_p_0(check_hlds__modecheck_conj__ModeErrorInfo_11, check_hlds__modecheck_conj__Goal_12, check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15);
            }
#line 753 "modecheck_conj.m"
            /* direct tailcall eliminated */
#line 753 "modecheck_conj.m"
            {
#line 753 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__DelayedGoals_8;
#line 753 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0__tmp_copy_2 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15;

#line 753 "modecheck_conj.m"
              check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0__tmp_copy_2;
#line 753 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 753 "modecheck_conj.m"
            }
#line 753 "modecheck_conj.m"
            continue;
#line 750 "modecheck_conj.m"
          }
#line 749 "modecheck_conj.m"
      }
#line 749 "modecheck_conj.m"
      break;
#line 749 "modecheck_conj.m"
    }
#line 746 "modecheck_conj.m"
}

#line 738 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
#line 738 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 738 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 738 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Vars_3)
#line 738 "modecheck_conj.m"
{
#line 741 "modecheck_conj.m"
  while (MR_TRUE)
#line 741 "modecheck_conj.m"
    {
#line 741 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 741 "modecheck_conj.m"
      {
#line 741 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 741 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "modecheck_conj.m"
          *check_hlds__modecheck_conj__Vars_3 = check_hlds__modecheck_conj__HeadVar__2_2;
#line 741 "modecheck_conj.m"
        else
#line 742 "modecheck_conj.m"
          {
#line 742 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars1_5;
#line 742 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 742 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars2_11;
#line 742 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 742 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_6_6;
#line 742 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_7_7;

#line 742 "modecheck_conj.m"
            check_hlds__modecheck_conj__Vars1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 0)));
#line 742 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 1)));
#line 742 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 2)));
#line 743 "modecheck_conj.m"
            {
#line 743 "modecheck_conj.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__HeadVar__2_2, check_hlds__modecheck_conj__Vars1_5, &check_hlds__modecheck_conj__Vars2_11);
            }
#line 744 "modecheck_conj.m"
            /* direct tailcall eliminated */
#line 744 "modecheck_conj.m"
            {
#line 744 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__Rest_8;
#line 744 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Vars2_11;

#line 744 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 744 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 744 "modecheck_conj.m"
            }
#line 744 "modecheck_conj.m"
            continue;
#line 742 "modecheck_conj.m"
          }
#line 741 "modecheck_conj.m"
      }
#line 741 "modecheck_conj.m"
      break;
#line 741 "modecheck_conj.m"
    }
#line 738 "modecheck_conj.m"
}

#line 717 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
#line 717 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVars_3,
#line 717 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2)
#line 717 "modecheck_conj.m"
{
#line 720 "modecheck_conj.m"
  {
#line 720 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 720 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 2)));
#line 720 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Var_7;
#line 720 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RHS_8;
#line 720 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_6, (MR_Integer) 0)));
#line 720 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 720 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 721 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_6, (MR_Integer) 1)));
#line 721 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_9_9;
#line 721 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_10_10;
#line 721 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_11_11;

#line 721 "modecheck_conj.m"
    check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 721 "modecheck_conj.m"
    if (check_hlds__modecheck_conj__succeeded)
#line 721 "modecheck_conj.m"
      {
#line 721 "modecheck_conj.m"
        check_hlds__modecheck_conj__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 0)));
#line 721 "modecheck_conj.m"
        check_hlds__modecheck_conj__RHS_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 1)));
#line 721 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 2)));
#line 721 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 3)));
#line 721 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 4)));
#line 723 "modecheck_conj.m"
        {
#line 723 "modecheck_conj.m"
          {
#line 723 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0], ((MR_Box) (check_hlds__modecheck_conj__Var_7)), check_hlds__modecheck_conj__HeadVars_3);
          }
#line 723 "modecheck_conj.m"
        }
#line 724 "modecheck_conj.m"
        if (!(check_hlds__modecheck_conj__succeeded))
#line 725 "modecheck_conj.m"
          {
#line 725 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__TypeInfo_16_16;
#line 725 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__OtherVar_12;

#line 725 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__RHS_8)) == (MR_mktag((MR_Integer) 0)));
#line 725 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 725 "modecheck_conj.m"
              {
#line 725 "modecheck_conj.m"
                check_hlds__modecheck_conj__OtherVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__RHS_8, (MR_Integer) 0)));
#line 1228 "check_hlds.modecheck_conj.c"
                check_hlds__modecheck_conj__TypeInfo_16_16 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0];
#line 726 "modecheck_conj.m"
                {
#line 726 "modecheck_conj.m"
                  return check_hlds__modecheck_conj__succeeded = mercury__list__member_2_p_0(check_hlds__modecheck_conj__TypeInfo_16_16, ((MR_Box) (check_hlds__modecheck_conj__OtherVar_12)), check_hlds__modecheck_conj__HeadVars_3);
                }
#line 725 "modecheck_conj.m"
              }
#line 725 "modecheck_conj.m"
          }
#line 721 "modecheck_conj.m"
      }
#line 720 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 720 "modecheck_conj.m"
  }
#line 717 "modecheck_conj.m"
}

#line 714 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
#line 714 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 714 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 714 "modecheck_conj.m"
{
#line 714 "modecheck_conj.m"
  {
#line 714 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 714 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 714 "modecheck_conj.m"
    {
#line 714 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 714 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 714 "modecheck_conj.m"
  }
#line 714 "modecheck_conj.m"
}

#line 673 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
#line 673 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_7,
#line 673 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_8,
#line 673 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32,
#line 673 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33,
#line 673 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34,
#line 673 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35)
#line 673 "modecheck_conj.m"
{
#line 677 "modecheck_conj.m"
  {
#line 677 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo0_11;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals0_12;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo1_13;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__ModuleInfo_14;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__PredId_15;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__PredInfo_16;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__ClausesInfo_17;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__HeadVars_18;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__HeadVarUnificationGoals_19;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo2_22;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo3_23;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo_24;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_47_47;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals0_61;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_62;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64;
#line 677 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65;

#line 678 "modecheck_conj.m"
    {
#line 678 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modecheck_conj__DelayInfo0_11);
    }
#line 679 "modecheck_conj.m"
    {
#line 679 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo0_11, &check_hlds__modecheck_conj__DelayedGoals0_12, &check_hlds__modecheck_conj__DelayInfo1_13);
    }
#line 680 "modecheck_conj.m"
    {
#line 680 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_13, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36);
    }
#line 681 "modecheck_conj.m"
    {
#line 681 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__ModuleInfo_14);
    }
#line 682 "modecheck_conj.m"
    {
#line 682 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__PredId_15);
    }
#line 683 "modecheck_conj.m"
    {
#line 683 "modecheck_conj.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_conj__ModuleInfo_14, check_hlds__modecheck_conj__PredId_15, &check_hlds__modecheck_conj__PredInfo_16);
    }
#line 684 "modecheck_conj.m"
    {
#line 684 "modecheck_conj.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modecheck_conj__PredInfo_16, &check_hlds__modecheck_conj__ClausesInfo_17);
    }
#line 685 "modecheck_conj.m"
    {
#line 685 "modecheck_conj.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__modecheck_conj__ClausesInfo_17, &check_hlds__modecheck_conj__HeadVars_18);
    }
#line 714 "modecheck_conj.m"
    {
#line 714 "modecheck_conj.m"
      check_hlds__modecheck_conj__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 714 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[2]));
#line 714 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 1) = ((MR_Box) (check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1));
#line 714 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 714 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 3) = ((MR_Box) (check_hlds__modecheck_conj__HeadVars_18));
#line 714 "modecheck_conj.m"
    }
#line 714 "modecheck_conj.m"
    {
#line 714 "modecheck_conj.m"
      mercury__list__filter_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__modecheck_conj__V_47_47, check_hlds__modecheck_conj__DelayedGoals0_12, &check_hlds__modecheck_conj__HeadVarUnificationGoals_19, &check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20);
    }
#line 277 "modecheck_conj.m"
    {
#line 277 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0((MR_Integer) 0, check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63, &check_hlds__modecheck_conj__Goals0_61, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65);
    }
#line 282 "modecheck_conj.m"
    {
#line 282 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0((MR_Integer) 0, check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63, &check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, &check_hlds__modecheck_conj__Goals1_62, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39);
    }
#line 284 "modecheck_conj.m"
    {
#line 284 "modecheck_conj.m"
      *check_hlds__modecheck_conj__Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals0_61, check_hlds__modecheck_conj__Goals1_62);
    }
#line 691 "modecheck_conj.m"
    {
#line 691 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__DelayInfo2_22);
    }
#line 692 "modecheck_conj.m"
    {
#line 692 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo2_22, &check_hlds__modecheck_conj__DelayInfo3_23);
    }
#line 693 "modecheck_conj.m"
    {
#line 693 "modecheck_conj.m"
      check_hlds__modecheck_conj__redelay_goals_3_p_0(check_hlds__modecheck_conj__HeadVarUnificationGoals_19, check_hlds__modecheck_conj__DelayInfo3_23, &check_hlds__modecheck_conj__DelayInfo_24);
    }
#line 694 "modecheck_conj.m"
    {
#line 694 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35);
    }
#line 697 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "modecheck_conj.m"
      *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38;
#line 697 "modecheck_conj.m"
    else
#line 698 "modecheck_conj.m"
      {
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars_27;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ModeError_28;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Context_29;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ModeContext_30;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ImpurityError_31;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_41_41;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_72_72;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars1_75;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Rest_78;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars2_81;
#line 698 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_82_82;
#line 742 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_76_76;
#line 742 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_77_77;

#line 736 "modecheck_conj.m"
        {
#line 736 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_72_72 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 742 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, (MR_Integer) 0)));
#line 742 "modecheck_conj.m"
        check_hlds__modecheck_conj__Rest_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, (MR_Integer) 1)));
#line 742 "modecheck_conj.m"
        check_hlds__modecheck_conj__Vars1_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 0)));
#line 742 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 1)));
#line 742 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 2)));
#line 743 "modecheck_conj.m"
        {
#line 743 "modecheck_conj.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_72_72, check_hlds__modecheck_conj__Vars1_75, &check_hlds__modecheck_conj__Vars2_81);
        }
#line 744 "modecheck_conj.m"
        {
#line 744 "modecheck_conj.m"
          check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(check_hlds__modecheck_conj__Rest_78, check_hlds__modecheck_conj__Vars2_81, &check_hlds__modecheck_conj__Vars_27);
        }
#line 701 "modecheck_conj.m"
        {
#line 701 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_41_41, 0) = ((MR_Box) (check_hlds__modecheck_conj__Goal_7));
#line 701 "modecheck_conj.m"
        }
#line 700 "modecheck_conj.m"
        {
#line 700 "modecheck_conj.m"
          check_hlds__modecheck_conj__ModeError_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 700 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 700 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 1) = ((MR_Box) (check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21));
#line 700 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 2) = ((MR_Box) (check_hlds__modecheck_conj__V_41_41));
#line 700 "modecheck_conj.m"
        }
#line 702 "modecheck_conj.m"
        {
#line 702 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_context_2_p_0(*check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35, &check_hlds__modecheck_conj__Context_29);
        }
#line 703 "modecheck_conj.m"
        {
#line 703 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_mode_context_2_p_0(*check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35, &check_hlds__modecheck_conj__ModeContext_30);
        }
#line 704 "modecheck_conj.m"
        {
#line 704 "modecheck_conj.m"
          check_hlds__modecheck_conj__ImpurityError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 704 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_27));
#line 704 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 1) = ((MR_Box) (check_hlds__modecheck_conj__ModeError_28));
#line 704 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 2) = ((MR_Box) (check_hlds__modecheck_conj__Context_29));
#line 704 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeContext_30));
#line 704 "modecheck_conj.m"
        }
#line 705 "modecheck_conj.m"
        {
#line 705 "modecheck_conj.m"
          MR_Word base;
#line 705 "modecheck_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "modecheck_conj.m"
          *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33 = base;
#line 705 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_conj__ImpurityError_31));
#line 705 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38));
#line 705 "modecheck_conj.m"
        }
#line 698 "modecheck_conj.m"
      }
#line 677 "modecheck_conj.m"
  }
#line 673 "modecheck_conj.m"
}

#line 659 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
#line 659 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1)
#line 659 "modecheck_conj.m"
{
#line 661 "modecheck_conj.m"
  {
#line 661 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 661 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 2)));
#line 661 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj___WaitingVars_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 661 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj___ModeError_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));

#line 661 "modecheck_conj.m"
    return check_hlds__modecheck_conj__Goal_5;
#line 661 "modecheck_conj.m"
  }
#line 659 "modecheck_conj.m"
}

#line 633 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2(
#line 633 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg)
#line 633 "modecheck_conj.m"
{
#line 633 "modecheck_conj.m"
  {
#line 633 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 633 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 633 "modecheck_conj.m"
    {
#line 633 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__633__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 4))));
    }
#line 633 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 633 "modecheck_conj.m"
  }
#line 633 "modecheck_conj.m"
}

#line 626 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_1(
#line 626 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 626 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 626 "modecheck_conj.m"
{
#line 626 "modecheck_conj.m"
  {
#line 626 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__wrapper_arg_2;
#line 626 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;
#line 626 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__conv0_Goal_5;

#line 626 "modecheck_conj.m"
    {
#line 626 "modecheck_conj.m"
      check_hlds__modecheck_conj__conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 626 "modecheck_conj.m"
    check_hlds__modecheck_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_conj__conv0_Goal_5));
#line 626 "modecheck_conj.m"
    return check_hlds__modecheck_conj__wrapper_arg_2;
#line 626 "modecheck_conj.m"
  }
#line 626 "modecheck_conj.m"
}

#line 609 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(
#line 609 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 609 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 609 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 609 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 609 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26,
#line 609 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27,
#line 609 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28,
#line 609 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29)
#line 609 "modecheck_conj.m"
{
#line 618 "modecheck_conj.m"
  {
#line 618 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;

#line 618 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "modecheck_conj.m"
      {
#line 619 "modecheck_conj.m"
        *check_hlds__modecheck_conj__DelayedGoals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "modecheck_conj.m"
        *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26;
#line 618 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28;
#line 618 "modecheck_conj.m"
      }
#line 618 "modecheck_conj.m"
    else
#line 624 "modecheck_conj.m"
      {
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_49_49 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Goals0_17;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo0_18;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo1_19;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__OldMayInit_20;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Goals1_21;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo2_22;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayedGoals1_23;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo3_24;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_32_32;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42;
#line 624 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;
#line 646 "modecheck_conj.m"
        MR_Integer check_hlds__modecheck_conj__V_44_44;
#line 646 "modecheck_conj.m"
        MR_Integer check_hlds__modecheck_conj__V_45_45;

#line 626 "modecheck_conj.m"
        {
#line 626 "modecheck_conj.m"
          check_hlds__modecheck_conj__Goals0_17 = mercury__list__map_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__TypeCtorInfo_49_49, (MR_Word) &check_hlds__modecheck_conj_scalar_common_3[1], check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 628 "modecheck_conj.m"
        {
#line 628 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_conj__DelayInfo0_18);
        }
#line 629 "modecheck_conj.m"
        {
#line 629 "modecheck_conj.m"
          check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_18, &check_hlds__modecheck_conj__DelayInfo1_19);
        }
#line 630 "modecheck_conj.m"
        {
#line 630 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_19, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 632 "modecheck_conj.m"
        {
#line 632 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_conj__OldMayInit_20);
        }
#line 633 "modecheck_conj.m"
        {
#line 633 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 633 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[1]));
#line 633 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 1) = ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2));
#line 633 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 633 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 3) = ((MR_Box) (check_hlds__modecheck_conj__OldMayInit_20));
#line 633 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 4) = ((MR_Box) ((MR_Integer) 1));
#line 633 "modecheck_conj.m"
        }
#line 633 "modecheck_conj.m"
        {
#line 633 "modecheck_conj.m"
          mercury__require__expect_4_p_0(check_hlds__modecheck_conj__V_32_32, (MR_String) "check_hlds.modecheck_conj", (MR_String) "predicate \140check_hlds.modecheck_conj.modecheck_delayed_goals_eager\'/8", (MR_String) "may init solver vars");
        }
#line 635 "modecheck_conj.m"
        {
#line 635 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 0, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38);
        }
#line 636 "modecheck_conj.m"
        {
#line 636 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__Goals0_17, &check_hlds__modecheck_conj__Goals1_21, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
        }
#line 638 "modecheck_conj.m"
        {
#line 638 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 1, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42);
        }
#line 641 "modecheck_conj.m"
        {
#line 641 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__DelayInfo2_22);
        }
#line 642 "modecheck_conj.m"
        {
#line 642 "modecheck_conj.m"
          check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_22, &check_hlds__modecheck_conj__DelayedGoals1_23, &check_hlds__modecheck_conj__DelayInfo3_24);
        }
#line 643 "modecheck_conj.m"
        {
#line 643 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43);
        }
#line 646 "modecheck_conj.m"
        {
#line 646 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_44_44 = mercury__list__length_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__DelayedGoals1_23);
        }
#line 646 "modecheck_conj.m"
        {
#line 646 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_45_45 = mercury__list__length_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 646 "modecheck_conj.m"
        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__V_44_44 < check_hlds__modecheck_conj__V_45_45);
#line 653 "modecheck_conj.m"
        if (check_hlds__modecheck_conj__succeeded)
#line 651 "modecheck_conj.m"
          {
#line 651 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals2_25;

#line 649 "modecheck_conj.m"
            {
#line 649 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__DelayedGoals1_23, check_hlds__modecheck_conj__DelayedGoals_11, &check_hlds__modecheck_conj__Goals2_25, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29);
            }
#line 652 "modecheck_conj.m"
            {
#line 652 "modecheck_conj.m"
              *check_hlds__modecheck_conj__Goals_12 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_49_49, check_hlds__modecheck_conj__Goals1_21, check_hlds__modecheck_conj__Goals2_25);
            }
#line 651 "modecheck_conj.m"
          }
#line 653 "modecheck_conj.m"
        else
#line 654 "modecheck_conj.m"
          {
#line 654 "modecheck_conj.m"
            *check_hlds__modecheck_conj__DelayedGoals_11 = check_hlds__modecheck_conj__DelayedGoals1_23;
#line 655 "modecheck_conj.m"
            *check_hlds__modecheck_conj__Goals_12 = check_hlds__modecheck_conj__Goals1_21;
#line 654 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;
#line 654 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39;
#line 654 "modecheck_conj.m"
          }
#line 624 "modecheck_conj.m"
      }
#line 618 "modecheck_conj.m"
  }
#line 609 "modecheck_conj.m"
}

#line 567 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0(
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3,
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4,
#line 567 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5,
#line 567 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6,
#line 567 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7)
#line 567 "modecheck_conj.m"
{
#line 572 "modecheck_conj.m"
  while (MR_TRUE)
#line 572 "modecheck_conj.m"
    {
#line 572 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 572 "modecheck_conj.m"
      {
#line 572 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 572 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "modecheck_conj.m"
          {
#line 572 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 572 "modecheck_conj.m"
              {
#line 572 "modecheck_conj.m"
                *check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6;
#line 572 "modecheck_conj.m"
                *check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 572 "modecheck_conj.m"
                check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 572 "modecheck_conj.m"
              }
#line 572 "modecheck_conj.m"
          }
#line 572 "modecheck_conj.m"
        else
#line 574 "modecheck_conj.m"
          {
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Arg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Mode_18;
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Modes_19;
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModuleInfo_22;
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__InitialInst_23;
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__FinalInst_24;
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31;
#line 574 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32;
#line 579 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_25_25;

#line 573 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 573 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 573 "modecheck_conj.m"
              {
#line 573 "modecheck_conj.m"
                check_hlds__modecheck_conj__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__3_3, (MR_Integer) 0)));
#line 573 "modecheck_conj.m"
                check_hlds__modecheck_conj__Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__3_3, (MR_Integer) 1)));
#line 575 "modecheck_conj.m"
                {
#line 575 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__HeadVar__1_1, &check_hlds__modecheck_conj__ModuleInfo_22);
                }
#line 576 "modecheck_conj.m"
                {
#line 576 "modecheck_conj.m"
                  check_hlds__modecheck_conj__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__modecheck_conj__ModuleInfo_22, check_hlds__modecheck_conj__Mode_18, &check_hlds__modecheck_conj__InitialInst_23, &check_hlds__modecheck_conj__FinalInst_24);
                }
#line 574 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 574 "modecheck_conj.m"
                  {
#line 578 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__InitialInst_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 578 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 578 "modecheck_conj.m"
                      {
#line 579 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__InitialInst_23)) == (MR_mktag((MR_Integer) 1)));
#line 579 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 579 "modecheck_conj.m"
                          check_hlds__modecheck_conj__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__InitialInst_23, (MR_Integer) 0)));
#line 579 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 578 "modecheck_conj.m"
                      }
#line 583 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 582 "modecheck_conj.m"
                      {
#line 582 "modecheck_conj.m"
                        {
#line 582 "modecheck_conj.m"
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__Arg_16, check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6, &check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31);
                        }
#line 582 "modecheck_conj.m"
                        check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 582 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 582 "modecheck_conj.m"
                      }
#line 583 "modecheck_conj.m"
                    else
#line 596 "modecheck_conj.m"
                      {
#line 586 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__V_26_26;

#line 585 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__FinalInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 585 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 585 "modecheck_conj.m"
                          {
#line 586 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__FinalInst_24)) == (MR_mktag((MR_Integer) 1)));
#line 586 "modecheck_conj.m"
                            if (check_hlds__modecheck_conj__succeeded)
#line 586 "modecheck_conj.m"
                              check_hlds__modecheck_conj__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__FinalInst_24, (MR_Integer) 0)));
#line 586 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 585 "modecheck_conj.m"
                          }
#line 596 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 592 "modecheck_conj.m"
                          {
#line 589 "modecheck_conj.m"
                            {
#line 589 "modecheck_conj.m"
                              check_hlds__modecheck_conj__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4, check_hlds__modecheck_conj__Arg_16);
                            }
#line 592 "modecheck_conj.m"
                            if (check_hlds__modecheck_conj__succeeded)
#line 591 "modecheck_conj.m"
                              check_hlds__modecheck_conj__succeeded = MR_FALSE;
#line 592 "modecheck_conj.m"
                            else
#line 594 "modecheck_conj.m"
                              {
#line 594 "modecheck_conj.m"
                                {
#line 594 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__Arg_16, check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4, &check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32);
                                }
#line 594 "modecheck_conj.m"
                                check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 594 "modecheck_conj.m"
                              }
#line 592 "modecheck_conj.m"
                          }
#line 596 "modecheck_conj.m"
                        else
#line 596 "modecheck_conj.m"
                          {
#line 596 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 596 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 596 "modecheck_conj.m"
                          }
#line 596 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 596 "modecheck_conj.m"
                          {
#line 596 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6;
#line 596 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 596 "modecheck_conj.m"
                          }
#line 596 "modecheck_conj.m"
                      }
#line 574 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 600 "modecheck_conj.m"
                      {
#line 600 "modecheck_conj.m"
                        /* direct tailcall eliminated */
#line 600 "modecheck_conj.m"
                        {
#line 600 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Args_17;
#line 600 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_conj__Modes_19;
#line 600 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0__tmp_copy_4 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32;
#line 600 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0__tmp_copy_6 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31;

#line 600 "modecheck_conj.m"
                          check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0__tmp_copy_6;
#line 600 "modecheck_conj.m"
                          check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0__tmp_copy_4;
#line 600 "modecheck_conj.m"
                          check_hlds__modecheck_conj__HeadVar__3_3 = check_hlds__modecheck_conj__HeadVar__3__tmp_copy_3;
#line 600 "modecheck_conj.m"
                          check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 600 "modecheck_conj.m"
                        }
#line 600 "modecheck_conj.m"
                        continue;
#line 600 "modecheck_conj.m"
                      }
#line 574 "modecheck_conj.m"
                  }
#line 573 "modecheck_conj.m"
              }
#line 574 "modecheck_conj.m"
          }
#line 572 "modecheck_conj.m"
        return check_hlds__modecheck_conj__succeeded;
#line 572 "modecheck_conj.m"
      }
#line 572 "modecheck_conj.m"
      break;
#line 572 "modecheck_conj.m"
    }
#line 567 "modecheck_conj.m"
}

#line 558 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(
#line 558 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModuleInfo_4,
#line 558 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__VarTypes_5,
#line 558 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Var_6)
#line 558 "modecheck_conj.m"
{
#line 561 "modecheck_conj.m"
  {
#line 561 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 561 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__VarType_7;

#line 562 "modecheck_conj.m"
    {
#line 562 "modecheck_conj.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_conj__VarTypes_5, check_hlds__modecheck_conj__Var_6, &check_hlds__modecheck_conj__VarType_7);
    }
#line 563 "modecheck_conj.m"
    {
#line 563 "modecheck_conj.m"
      check_hlds__modecheck_conj__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__modecheck_conj__ModuleInfo_4, check_hlds__modecheck_conj__VarType_7);
    }
#line 563 "modecheck_conj.m"
    check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 561 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 561 "modecheck_conj.m"
  }
#line 558 "modecheck_conj.m"
}

#line 507 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1(
#line 507 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 507 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 507 "modecheck_conj.m"
{
#line 507 "modecheck_conj.m"
  {
#line 507 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 507 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 507 "modecheck_conj.m"
    {
#line 507 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 507 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 507 "modecheck_conj.m"
  }
#line 507 "modecheck_conj.m"
}

#line 543 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5(
#line 543 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 543 "modecheck_conj.m"
{
#line 543 "modecheck_conj.m"
  {
#line 543 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 543 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71);
#line 543 "modecheck_conj.m"
    {
#line 543 "modecheck_conj.m"
      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(check_hlds__modecheck_conj__env_ptr);
#line 543 "modecheck_conj.m"
      return;
    }
#line 543 "modecheck_conj.m"
  }
#line 543 "modecheck_conj.m"
}

#line 536 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(
#line 536 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 536 "modecheck_conj.m"
{
#line 536 "modecheck_conj.m"
  {
#line 536 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 544 "modecheck_conj.m"
    {
#line 544 "modecheck_conj.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77);
    }
#line 544 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 544 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 544 "modecheck_conj.m"
      {
#line 544 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77, (MR_Integer) 0)));
#line 536 "modecheck_conj.m"
        {
#line 545 "modecheck_conj.m"
#line 545 "modecheck_conj.m"
          switch ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72) {
#line 545 "modecheck_conj.m"
            default:
#line 545 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_FALSE;
#line 545 "modecheck_conj.m"
              break;
#line 545 "modecheck_conj.m"
            case (MR_Integer) 4:
#line 545 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 545 "modecheck_conj.m"
              break;
#line 545 "modecheck_conj.m"
            case (MR_Integer) 0:
#line 545 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 545 "modecheck_conj.m"
              break;
#line 545 "modecheck_conj.m"
          }
#line 536 "modecheck_conj.m"
          if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 536 "modecheck_conj.m"
            {
#line 548 "modecheck_conj.m"
              {
#line 548 "modecheck_conj.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106);
              }
#line 551 "modecheck_conj.m"
              {
#line 551 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
              }
#line 551 "modecheck_conj.m"
              if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 551 "modecheck_conj.m"
                {
#line 551 "modecheck_conj.m"
                  ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 551 "modecheck_conj.m"
                  return;
                }
#line 536 "modecheck_conj.m"
            }
#line 536 "modecheck_conj.m"
        }
#line 544 "modecheck_conj.m"
      }
#line 536 "modecheck_conj.m"
  }
#line 536 "modecheck_conj.m"
}

#line 500 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3(
#line 500 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 500 "modecheck_conj.m"
{
#line 500 "modecheck_conj.m"
  {
#line 500 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 514 "modecheck_conj.m"
    {
#line 514 "modecheck_conj.m"
      parse_tree__set_of_var__union_3_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
    }
#line 514 "modecheck_conj.m"
    {
#line 514 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 514 "modecheck_conj.m"
      return;
    }
#line 500 "modecheck_conj.m"
  }
#line 500 "modecheck_conj.m"
}

#line 500 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2(
#line 500 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 500 "modecheck_conj.m"
{
#line 500 "modecheck_conj.m"
  {
#line 500 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 512 "modecheck_conj.m"
    {
#line 512 "modecheck_conj.m"
      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3, check_hlds__modecheck_conj__env_ptr);
    }
#line 500 "modecheck_conj.m"
  }
#line 500 "modecheck_conj.m"
}

#line 436 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_8,
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73,
#line 436 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74,
#line 436 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75,
#line 436 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76,
#line 436 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 436 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 436 "modecheck_conj.m"
{
#line 436 "modecheck_conj.m"
  {
#line 436 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 436 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7 = check_hlds__modecheck_conj__ModeInfo_7;
#line 436 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73;
#line 436 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74;
#line 436 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75;
#line 436 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76;
#line 436 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont = check_hlds__modecheck_conj__cont;
#line 436 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 440 "modecheck_conj.m"
    while (MR_TRUE)
#line 440 "modecheck_conj.m"
      {
#line 440 "modecheck_conj.m"
        /* tailcall optimized into a loop */
#line 440 "modecheck_conj.m"
        {
#line 440 "modecheck_conj.m"
          MR_Word check_hlds__modecheck_conj__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_8, (MR_Integer) 0)));
#line 441 "modecheck_conj.m"
          MR_Word check_hlds__modecheck_conj___GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_8, (MR_Integer) 1)));

#line 463 "modecheck_conj.m"
#line 463 "modecheck_conj.m"
          switch (MR_tag((MR_Word) check_hlds__modecheck_conj__GoalExpr_11)) {
#line 463 "modecheck_conj.m"
            case (MR_Integer) 1:
#line 463 "modecheck_conj.m"
              {
#line 463 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 463 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)));
#line 444 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 444 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 444 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));

#line 463 "modecheck_conj.m"
#line 463 "modecheck_conj.m"
                switch (MR_tag((MR_Word) check_hlds__modecheck_conj__V_127_127)) {
#line 463 "modecheck_conj.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 463 "modecheck_conj.m"
                  case (MR_Integer) 0:
#line 444 "modecheck_conj.m"
                    {
#line 444 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Y_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 0)));

#line 446 "modecheck_conj.m"
                      {
#line 446 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 450 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 447 "modecheck_conj.m"
                        {
#line 447 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__TypeCtorInfo_109_109;

#line 447 "modecheck_conj.m"
                          {
#line 447 "modecheck_conj.m"
                            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__Y_18);
                          }
#line 447 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 447 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 447 "modecheck_conj.m"
                            {
#line 2444 "check_hlds.modecheck_conj.c"
                              check_hlds__modecheck_conj__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 449 "modecheck_conj.m"
                              {
#line 449 "modecheck_conj.m"
                                parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_109_109, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                              }
#line 447 "modecheck_conj.m"
                              *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 447 "modecheck_conj.m"
                              (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 447 "modecheck_conj.m"
                            }
#line 447 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 447 "modecheck_conj.m"
                            {
#line 447 "modecheck_conj.m"
                              ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 447 "modecheck_conj.m"
                              return;
                            }
#line 447 "modecheck_conj.m"
                        }
#line 450 "modecheck_conj.m"
                      else
#line 453 "modecheck_conj.m"
                        {
#line 450 "modecheck_conj.m"
                          {
#line 450 "modecheck_conj.m"
                            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__Y_18);
                          }
#line 453 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 452 "modecheck_conj.m"
                            {
#line 452 "modecheck_conj.m"
                              {
#line 452 "modecheck_conj.m"
                                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                              }
#line 452 "modecheck_conj.m"
                              *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 452 "modecheck_conj.m"
                              {
#line 452 "modecheck_conj.m"
                                ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 452 "modecheck_conj.m"
                                return;
                              }
#line 452 "modecheck_conj.m"
                            }
#line 453 "modecheck_conj.m"
                          else
#line 458 "modecheck_conj.m"
                            {
#line 456 "modecheck_conj.m"
                              {
#line 456 "modecheck_conj.m"
                                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 456 "modecheck_conj.m"
                                {
#line 456 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_112_112, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                                }
#line 457 "modecheck_conj.m"
                                {
#line 457 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_112_112, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                                }
#line 456 "modecheck_conj.m"
                                {
#line 456 "modecheck_conj.m"
                                  ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
                                }
#line 456 "modecheck_conj.m"
                              }
#line 459 "modecheck_conj.m"
                              {
#line 459 "modecheck_conj.m"
                                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 459 "modecheck_conj.m"
                                {
#line 459 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_113_113, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                                }
#line 460 "modecheck_conj.m"
                                {
#line 460 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_113_113, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                                }
#line 459 "modecheck_conj.m"
                                {
#line 459 "modecheck_conj.m"
                                  ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 459 "modecheck_conj.m"
                                  return;
                                }
#line 459 "modecheck_conj.m"
                              }
#line 458 "modecheck_conj.m"
                            }
#line 453 "modecheck_conj.m"
                        }
#line 444 "modecheck_conj.m"
                    }
#line 463 "modecheck_conj.m"
                    break;
#line 463 "modecheck_conj.m"
                  case (MR_Integer) 1:
#line 466 "modecheck_conj.m"
                    {
#line 466 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__TypeCtorInfo_115_115;
#line 466 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 2)));
#line 467 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 0)));
#line 467 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 1)));

#line 470 "modecheck_conj.m"
                      {
#line 470 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 470 "modecheck_conj.m"
                      (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 466 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 466 "modecheck_conj.m"
                        {
#line 2579 "check_hlds.modecheck_conj.c"
                          check_hlds__modecheck_conj__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 473 "modecheck_conj.m"
                          {
#line 473 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_115_115, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                          }
#line 476 "modecheck_conj.m"
                          {
#line 476 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_list_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_115_115, check_hlds__modecheck_conj__Args_24, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                          }
#line 476 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 466 "modecheck_conj.m"
                        }
#line 466 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 466 "modecheck_conj.m"
                        {
#line 466 "modecheck_conj.m"
                          ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 466 "modecheck_conj.m"
                          return;
                        }
#line 466 "modecheck_conj.m"
                    }
#line 463 "modecheck_conj.m"
                    break;
#line 463 "modecheck_conj.m"
                  case (MR_Integer) 2:
#line 480 "modecheck_conj.m"
                    {
#line 480 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__TypeCtorInfo_117_117;

#line 484 "modecheck_conj.m"
                      {
#line 484 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 484 "modecheck_conj.m"
                      (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 480 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 480 "modecheck_conj.m"
                        {
#line 2626 "check_hlds.modecheck_conj.c"
                          check_hlds__modecheck_conj__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 487 "modecheck_conj.m"
                          {
#line 487 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_117_117, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                          }
#line 480 "modecheck_conj.m"
                          *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 480 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 480 "modecheck_conj.m"
                        }
#line 480 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 480 "modecheck_conj.m"
                        {
#line 480 "modecheck_conj.m"
                          ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 480 "modecheck_conj.m"
                          return;
                        }
#line 480 "modecheck_conj.m"
                    }
#line 463 "modecheck_conj.m"
                    break;
#line 463 "modecheck_conj.m"
                }
#line 463 "modecheck_conj.m"
              }
#line 463 "modecheck_conj.m"
              break;
#line 463 "modecheck_conj.m"
            case (MR_Integer) 2:
#line 536 "modecheck_conj.m"
              {
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_123_123;
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__PredId_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)));
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Preds_67;
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__PredInfo_68;
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__ProcTable_69;
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__ProcInfos_70;
#line 536 "modecheck_conj.m"
                MR_Integer check_hlds__modecheck_conj__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_64_64;
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_65_65;
#line 536 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_66_66;
#line 540 "modecheck_conj.m"
                MR_Box check_hlds__modecheck_conj__conv0_PredInfo_68;

#line 536 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 536 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 536 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 536 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 5)));
#line 539 "modecheck_conj.m"
                {
#line 539 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_preds_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__Preds_67);
                }
#line 540 "modecheck_conj.m"
                {
#line 540 "modecheck_conj.m"
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_conj__Preds_67, ((MR_Box) (check_hlds__modecheck_conj__PredId_62)), &check_hlds__modecheck_conj__conv0_PredInfo_68);
                }
#line 540 "modecheck_conj.m"
                check_hlds__modecheck_conj__PredInfo_68 = ((MR_Word) check_hlds__modecheck_conj__conv0_PredInfo_68);
#line 541 "modecheck_conj.m"
                {
#line 541 "modecheck_conj.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_conj__PredInfo_68, &check_hlds__modecheck_conj__ProcTable_69);
                }
#line 2710 "check_hlds.modecheck_conj.c"
                check_hlds__modecheck_conj__TypeCtorInfo_123_123 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 542 "modecheck_conj.m"
                {
#line 542 "modecheck_conj.m"
                  mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__modecheck_conj__TypeCtorInfo_123_123, check_hlds__modecheck_conj__ProcTable_69, &check_hlds__modecheck_conj__ProcInfos_70);
                }
#line 543 "modecheck_conj.m"
                {
#line 543 "modecheck_conj.m"
                  mercury__list__member_2_p_1(check_hlds__modecheck_conj__TypeCtorInfo_123_123, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71, check_hlds__modecheck_conj__ProcInfos_70, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5, &check_hlds__modecheck_conj__env);
                }
#line 536 "modecheck_conj.m"
              }
#line 463 "modecheck_conj.m"
              break;
#line 463 "modecheck_conj.m"
            case (MR_Integer) 3:
#line 463 "modecheck_conj.m"
#line 463 "modecheck_conj.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)))) {
#line 463 "modecheck_conj.m"
                case (MR_Integer) 0:
#line 528 "modecheck_conj.m"
                  {
#line 528 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Details_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 528 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ArgModes_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 528 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Args_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 527 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___JunkArgRegs_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 527 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___JunkDetism_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 5)));
#line 529 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_58_58;
#line 529 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_59_59;
#line 529 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_60_60;
#line 529 "modecheck_conj.m"
                    MR_Integer check_hlds__modecheck_conj__V_61_61;

#line 529 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__Details_54)) == (MR_mktag((MR_Integer) 0)));
#line 529 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 529 "modecheck_conj.m"
                      {
#line 529 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 0)));
#line 529 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 1)));
#line 529 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 2)));
#line 529 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 3)));
#line 529 "modecheck_conj.m"
                      }
#line 529 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 528 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 530 "modecheck_conj.m"
                      {
#line 530 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__Args_104, check_hlds__modecheck_conj__ArgModes_55, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                      }
#line 528 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 528 "modecheck_conj.m"
                      {
#line 528 "modecheck_conj.m"
                        ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 528 "modecheck_conj.m"
                        return;
                      }
#line 528 "modecheck_conj.m"
                  }
#line 463 "modecheck_conj.m"
                  break;
#line 463 "modecheck_conj.m"
                case (MR_Integer) 2:
#line 521 "modecheck_conj.m"
                  {
#line 521 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Goals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 521 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___ConjType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));

#line 522 "modecheck_conj.m"
                    {
#line 522 "modecheck_conj.m"
                      check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__Goals_53, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 522 "modecheck_conj.m"
                      return;
                    }
#line 521 "modecheck_conj.m"
                  }
#line 463 "modecheck_conj.m"
                  break;
#line 463 "modecheck_conj.m"
                case (MR_Integer) 3:
#line 493 "modecheck_conj.m"
                  {
#line 493 "modecheck_conj.m"
                    *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73;
#line 493 "modecheck_conj.m"
                    *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 493 "modecheck_conj.m"
                    {
#line 493 "modecheck_conj.m"
                      ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 493 "modecheck_conj.m"
                      return;
                    }
#line 493 "modecheck_conj.m"
                  }
#line 463 "modecheck_conj.m"
                  break;
#line 463 "modecheck_conj.m"
                case (MR_Integer) 5:
#line 518 "modecheck_conj.m"
                  {
#line 518 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__SubGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 518 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));

#line 519 "modecheck_conj.m"
                    /* direct tailcall eliminated */
#line 519 "modecheck_conj.m"
                    {
#line 519 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Goal__tmp_copy_8 = check_hlds__modecheck_conj__SubGoal_51;

#line 519 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Goal_8 = check_hlds__modecheck_conj__Goal__tmp_copy_8;
#line 519 "modecheck_conj.m"
                    }
#line 519 "modecheck_conj.m"
                    continue;
#line 518 "modecheck_conj.m"
                  }
#line 463 "modecheck_conj.m"
                  break;
#line 463 "modecheck_conj.m"
                case (MR_Integer) 6:
#line 500 "modecheck_conj.m"
                  {
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__CondGoal_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ThenGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__CondGoalInfo_43;
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__NonLocals_44;
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ModuleInfo_45;
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__VarTypes_46;
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__NonSolverNonLocals_47;
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_86_86;
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___LocalVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 502 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___CondGoalExpr_42;

#line 500 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 502 "modecheck_conj.m"
                    check_hlds__modecheck_conj___CondGoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__CondGoal_39, (MR_Integer) 0)));
#line 502 "modecheck_conj.m"
                    check_hlds__modecheck_conj__CondGoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__CondGoal_39, (MR_Integer) 1)));
#line 503 "modecheck_conj.m"
                    {
#line 503 "modecheck_conj.m"
                      check_hlds__modecheck_conj__NonLocals_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_conj__CondGoalInfo_43);
                    }
#line 504 "modecheck_conj.m"
                    {
#line 504 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__ModuleInfo_45);
                    }
#line 505 "modecheck_conj.m"
                    {
#line 505 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_var_types_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__VarTypes_46);
                    }
#line 2903 "check_hlds.modecheck_conj.c"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 507 "modecheck_conj.m"
                    {
#line 507 "modecheck_conj.m"
                      check_hlds__modecheck_conj__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 507 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_5[0]));
#line 507 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 1) = ((MR_Box) (check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1));
#line 507 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 507 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModuleInfo_45));
#line 507 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 4) = ((MR_Box) (check_hlds__modecheck_conj__VarTypes_46));
#line 507 "modecheck_conj.m"
                    }
#line 506 "modecheck_conj.m"
                    {
#line 506 "modecheck_conj.m"
                      check_hlds__modecheck_conj__NonSolverNonLocals_47 = parse_tree__set_of_var__filter_2_f_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, check_hlds__modecheck_conj__V_86_86, check_hlds__modecheck_conj__NonLocals_44);
                    }
#line 508 "modecheck_conj.m"
                    {
#line 508 "modecheck_conj.m"
                      parse_tree__set_of_var__union_3_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, check_hlds__modecheck_conj__NonSolverNonLocals_47, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87);
                    }
#line 510 "modecheck_conj.m"
                    {
#line 510 "modecheck_conj.m"
                      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__ThenGoal_40, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2, &check_hlds__modecheck_conj__env);
                    }
#line 500 "modecheck_conj.m"
                  }
#line 463 "modecheck_conj.m"
                  break;
#line 463 "modecheck_conj.m"
              }
#line 463 "modecheck_conj.m"
              break;
#line 463 "modecheck_conj.m"
          }
#line 440 "modecheck_conj.m"
        }
#line 440 "modecheck_conj.m"
        break;
#line 440 "modecheck_conj.m"
      }
#line 436 "modecheck_conj.m"
  }
#line 436 "modecheck_conj.m"
}

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 433 "modecheck_conj.m"
{
#line 433 "modecheck_conj.m"
  {
#line 433 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 433 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74));
#line 433 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76));
#line 433 "modecheck_conj.m"
    {
#line 433 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr);
#line 433 "modecheck_conj.m"
      return;
    }
#line 433 "modecheck_conj.m"
  }
#line 433 "modecheck_conj.m"
}

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2(
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 433 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 433 "modecheck_conj.m"
{
#line 433 "modecheck_conj.m"
  {
#line 433 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s check_hlds__modecheck_conj__env;

#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3 = check_hlds__modecheck_conj__wrapper_arg_3;
#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5 = check_hlds__modecheck_conj__wrapper_arg_5;
#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont = check_hlds__modecheck_conj__cont;
#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 433 "modecheck_conj.m"
    {
#line 433 "modecheck_conj.m"
      MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 433 "modecheck_conj.m"
      {
#line 433 "modecheck_conj.m"
        check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_4), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1, &check_hlds__modecheck_conj__env);
      }
#line 433 "modecheck_conj.m"
    }
#line 433 "modecheck_conj.m"
  }
#line 433 "modecheck_conj.m"
}

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 433 "modecheck_conj.m"
{
#line 433 "modecheck_conj.m"
  {
#line 433 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 433 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12) = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12);
#line 433 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14) = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14);
#line 433 "modecheck_conj.m"
    {
#line 433 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr);
#line 433 "modecheck_conj.m"
      return;
    }
#line 433 "modecheck_conj.m"
  }
#line 433 "modecheck_conj.m"
}

#line 428 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0(
#line 428 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 428 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goals_8,
#line 428 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11,
#line 428 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12,
#line 428 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13,
#line 428 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14,
#line 428 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 428 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 428 "modecheck_conj.m"
{
#line 428 "modecheck_conj.m"
  {
#line 428 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 428 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12;
#line 428 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14;
#line 428 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont = check_hlds__modecheck_conj__cont;
#line 428 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 432 "modecheck_conj.m"
    {
#line 432 "modecheck_conj.m"
      MR_bool check_hlds__modecheck_conj__succeeded;
#line 432 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__TypeInfo_24_24 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1];
#line 432 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__V_15_15;

#line 433 "modecheck_conj.m"
      {
#line 433 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 433 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_4[0]));
#line 433 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 1) = ((MR_Box) (check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2));
#line 433 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 433 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeInfo_7));
#line 433 "modecheck_conj.m"
      }
#line 433 "modecheck_conj.m"
      {
#line 433 "modecheck_conj.m"
        mercury__list__foldl2_6_p_7((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__TypeInfo_24_24, check_hlds__modecheck_conj__TypeInfo_24_24, check_hlds__modecheck_conj__V_15_15, check_hlds__modecheck_conj__Goals_8, ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11)), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12, ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13)), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14, check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3, &check_hlds__modecheck_conj__env);
      }
#line 432 "modecheck_conj.m"
    }
#line 428 "modecheck_conj.m"
  }
#line 428 "modecheck_conj.m"
}

#line 395 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(
#line 395 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1)
#line 395 "modecheck_conj.m"
{
#line 398 "modecheck_conj.m"
  while (MR_TRUE)
#line 398 "modecheck_conj.m"
    {
#line 398 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 398 "modecheck_conj.m"
      {
#line 398 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;
#line 398 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__HeadVar__2_2;

#line 398 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "modecheck_conj.m"
          check_hlds__modecheck_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "modecheck_conj.m"
        else
#line 399 "modecheck_conj.m"
          {
#line 399 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Var_3;
#line 399 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Inst_4;
#line 399 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__AssocList_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 399 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));

#line 399 "modecheck_conj.m"
            check_hlds__modecheck_conj__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_7_7, (MR_Integer) 0)));
#line 399 "modecheck_conj.m"
            check_hlds__modecheck_conj__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_7_7, (MR_Integer) 1)));
#line 402 "modecheck_conj.m"
            if ((check_hlds__modecheck_conj__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 401 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 402 "modecheck_conj.m"
            else
#line 402 "modecheck_conj.m"
            if (((MR_tag((MR_Word) check_hlds__modecheck_conj__Inst_4)) == (MR_mktag((MR_Integer) 1))))
#line 402 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 402 "modecheck_conj.m"
            else
#line 402 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_FALSE;
#line 399 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 405 "modecheck_conj.m"
              {
#line 405 "modecheck_conj.m"
                /* direct tailcall eliminated */
#line 405 "modecheck_conj.m"
                {
#line 405 "modecheck_conj.m"
                  MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__AssocList_5;

#line 405 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 405 "modecheck_conj.m"
                }
#line 405 "modecheck_conj.m"
                continue;
#line 405 "modecheck_conj.m"
              }
#line 399 "modecheck_conj.m"
            else
#line 407 "modecheck_conj.m"
              {
#line 407 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_8_8;

#line 407 "modecheck_conj.m"
                {
#line 407 "modecheck_conj.m"
                  check_hlds__modecheck_conj__V_8_8 = check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(check_hlds__modecheck_conj__AssocList_5);
                }
#line 407 "modecheck_conj.m"
                {
#line 407 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "modecheck_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__modecheck_conj__Var_3));
#line 407 "modecheck_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__modecheck_conj__V_8_8));
#line 407 "modecheck_conj.m"
                }
#line 407 "modecheck_conj.m"
              }
#line 399 "modecheck_conj.m"
          }
#line 398 "modecheck_conj.m"
        return check_hlds__modecheck_conj__HeadVar__2_2;
#line 398 "modecheck_conj.m"
      }
#line 398 "modecheck_conj.m"
      break;
#line 398 "modecheck_conj.m"
    }
#line 395 "modecheck_conj.m"
}

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 433 "modecheck_conj.m"
{
#line 433 "modecheck_conj.m"
  {
#line 433 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 433 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74));
#line 433 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76));
#line 433 "modecheck_conj.m"
    {
#line 433 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr);
#line 433 "modecheck_conj.m"
      return;
    }
#line 433 "modecheck_conj.m"
  }
#line 433 "modecheck_conj.m"
}

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3(
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 433 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 433 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 433 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 433 "modecheck_conj.m"
{
#line 433 "modecheck_conj.m"
  {
#line 433 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s check_hlds__modecheck_conj__env;

#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3 = check_hlds__modecheck_conj__wrapper_arg_3;
#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5 = check_hlds__modecheck_conj__wrapper_arg_5;
#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont = check_hlds__modecheck_conj__cont;
#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 433 "modecheck_conj.m"
    {
#line 433 "modecheck_conj.m"
      MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 433 "modecheck_conj.m"
      {
#line 433 "modecheck_conj.m"
        check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_4), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2, &check_hlds__modecheck_conj__env);
      }
#line 433 "modecheck_conj.m"
    }
#line 433 "modecheck_conj.m"
  }
#line 433 "modecheck_conj.m"
}

#line 334 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_1(
#line 334 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 334 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 334 "modecheck_conj.m"
{
#line 334 "modecheck_conj.m"
  {
#line 334 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__wrapper_arg_2;
#line 334 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;
#line 334 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__conv0_Goal_5;

#line 334 "modecheck_conj.m"
    {
#line 334 "modecheck_conj.m"
      check_hlds__modecheck_conj__conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 334 "modecheck_conj.m"
    check_hlds__modecheck_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_conj__conv0_Goal_5));
#line 334 "modecheck_conj.m"
    return check_hlds__modecheck_conj__wrapper_arg_2;
#line 334 "modecheck_conj.m"
  }
#line 334 "modecheck_conj.m"
}

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 433 "modecheck_conj.m"
{
#line 433 "modecheck_conj.m"
  {
#line 433 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 433 "modecheck_conj.m"
    MR_builtin_longjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0, 1);
#line 433 "modecheck_conj.m"
  }
#line 433 "modecheck_conj.m"
}

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 433 "modecheck_conj.m"
{
#line 433 "modecheck_conj.m"
  {
#line 433 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57);
#line 433 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58);
#line 433 "modecheck_conj.m"
    {
#line 433 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(check_hlds__modecheck_conj__env_ptr);
#line 433 "modecheck_conj.m"
      return;
    }
#line 433 "modecheck_conj.m"
  }
#line 433 "modecheck_conj.m"
}

#line 433 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(
#line 433 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 433 "modecheck_conj.m"
{
#line 433 "modecheck_conj.m"
  {
#line 433 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 433 "modecheck_conj.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0) == 0)
#line 433 "modecheck_conj.m"
      {
#line 433 "modecheck_conj.m"
        {
#line 433 "modecheck_conj.m"
          mercury__list__foldl2_6_p_7((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17, ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20)), &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57, ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56)), &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5, check_hlds__modecheck_conj__env_ptr);
        }
#line 433 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_FALSE;
#line 433 "modecheck_conj.m"
      }
#line 433 "modecheck_conj.m"
    else
#line 433 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 433 "modecheck_conj.m"
  }
#line 433 "modecheck_conj.m"
}

#line 354 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(
#line 354 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 354 "modecheck_conj.m"
{
#line 354 "modecheck_conj.m"
  {
#line 354 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 354 "modecheck_conj.m"
    MR_builtin_longjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1, 1);
#line 354 "modecheck_conj.m"
  }
#line 354 "modecheck_conj.m"
}

#line 354 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8(
#line 354 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 354 "modecheck_conj.m"
{
#line 354 "modecheck_conj.m"
  {
#line 354 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 354 "modecheck_conj.m"
    {
#line 358 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__VarType_25;

#line 358 "modecheck_conj.m"
      {
#line 358 "modecheck_conj.m"
        hlds__vartypes__lookup_var_type_3_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24, &check_hlds__modecheck_conj__VarType_25);
      }
#line 359 "modecheck_conj.m"
      {
#line 359 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22, check_hlds__modecheck_conj__VarType_25);
      }
#line 356 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded);
#line 356 "modecheck_conj.m"
      if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 356 "modecheck_conj.m"
        {
#line 356 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(check_hlds__modecheck_conj__env_ptr);
#line 356 "modecheck_conj.m"
          return;
        }
#line 354 "modecheck_conj.m"
    }
#line 354 "modecheck_conj.m"
  }
#line 354 "modecheck_conj.m"
}

#line 354 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(
#line 354 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 354 "modecheck_conj.m"
{
#line 354 "modecheck_conj.m"
  {
#line 354 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 354 "modecheck_conj.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1) == 0)
#line 354 "modecheck_conj.m"
      {
#line 355 "modecheck_conj.m"
        {
#line 355 "modecheck_conj.m"
          parse_tree__set_of_var__member_2_p_1((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8, check_hlds__modecheck_conj__env_ptr);
        }
#line 354 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_FALSE;
#line 354 "modecheck_conj.m"
      }
#line 354 "modecheck_conj.m"
    else
#line 354 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 354 "modecheck_conj.m"
  }
#line 354 "modecheck_conj.m"
}

#line 314 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(
#line 314 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 314 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 314 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 314 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 314 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33,
#line 314 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34,
#line 314 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35,
#line 314 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36)
#line 314 "modecheck_conj.m"
{
#line 314 "modecheck_conj.m"
  {
#line 314 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 324 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "modecheck_conj.m"
      {
#line 325 "modecheck_conj.m"
        *check_hlds__modecheck_conj__DelayedGoals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "modecheck_conj.m"
        *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 324 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33;
#line 324 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35;
#line 324 "modecheck_conj.m"
      }
#line 324 "modecheck_conj.m"
    else
#line 384 "modecheck_conj.m"
      {
#line 334 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__InstMap_18;
#line 334 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__VarInsts_19;
#line 334 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_38_38;
#line 422 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_12_59;

#line 334 "modecheck_conj.m"
        {
#line 334 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__modecheck_conj_scalar_common_3[0], check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 338 "modecheck_conj.m"
        {
#line 338 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_conj__InstMap_18);
        }
#line 339 "modecheck_conj.m"
        {
#line 339 "modecheck_conj.m"
          hlds__instmap__instmap_to_assoc_list_2_p_0(check_hlds__modecheck_conj__InstMap_18, &check_hlds__modecheck_conj__VarInsts_19);
        }
#line 3602 "check_hlds.modecheck_conj.c"
        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 341 "modecheck_conj.m"
        {
#line 341 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_38_38 = check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(check_hlds__modecheck_conj__VarInsts_19);
        }
#line 340 "modecheck_conj.m"
        {
#line 340 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49, check_hlds__modecheck_conj__V_38_38);
        }
#line 3614 "check_hlds.modecheck_conj.c"
        check_hlds__modecheck_conj__TypeCtorInfo_12_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 423 "modecheck_conj.m"
        {
#line 423 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56 = parse_tree__set_of_var__init_0_f_0(check_hlds__modecheck_conj__TypeCtorInfo_12_59);
        }
#line 3621 "check_hlds.modecheck_conj.c"
        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1];
#line 433 "modecheck_conj.m"
        {
#line 433 "modecheck_conj.m"
          MR_Word base;
#line 433 "modecheck_conj.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 433 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68 = base;
#line 433 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_4[0]));
#line 433 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3));
#line 433 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 433 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35));
#line 433 "modecheck_conj.m"
        }
#line 433 "modecheck_conj.m"
        {
#line 433 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(&check_hlds__modecheck_conj__env);
        }
#line 422 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 422 "modecheck_conj.m"
          {
#line 426 "modecheck_conj.m"
            {
#line 426 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21 = parse_tree__set_of_var__difference_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_12_59, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57);
            }
#line 426 "modecheck_conj.m"
            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 422 "modecheck_conj.m"
          }
#line 334 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 334 "modecheck_conj.m"
          {
#line 352 "modecheck_conj.m"
            {
#line 352 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22);
            }
#line 353 "modecheck_conj.m"
            {
#line 353 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23);
            }
#line 354 "modecheck_conj.m"
            {
#line 354 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(&check_hlds__modecheck_conj__env);
            }
#line 354 "modecheck_conj.m"
            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded);
#line 334 "modecheck_conj.m"
            if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 362 "modecheck_conj.m"
              {
#line 362 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35);
              }
#line 334 "modecheck_conj.m"
          }
#line 384 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 367 "modecheck_conj.m"
          {
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__CandidateInitVarList_26;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__InitGoals_27;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals1_28;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo0_29;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo1_30;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo2_31;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo3_32;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41;
#line 367 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;

#line 366 "modecheck_conj.m"
            {
#line 366 "modecheck_conj.m"
              check_hlds__modecheck_conj__CandidateInitVarList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21);
            }
#line 368 "modecheck_conj.m"
            {
#line 368 "modecheck_conj.m"
              check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_conj__CandidateInitVarList_26, &check_hlds__modecheck_conj__InitGoals_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39);
            }
#line 370 "modecheck_conj.m"
            {
#line 370 "modecheck_conj.m"
              check_hlds__modecheck_conj__Goals1_28 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__InitGoals_27, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17);
            }
#line 372 "modecheck_conj.m"
            {
#line 372 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__DelayInfo0_29);
            }
#line 373 "modecheck_conj.m"
            {
#line 373 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_29, &check_hlds__modecheck_conj__DelayInfo1_30);
            }
#line 374 "modecheck_conj.m"
            {
#line 374 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_30, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
            }
#line 376 "modecheck_conj.m"
            {
#line 376 "modecheck_conj.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__InitGoals_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41);
            }
#line 378 "modecheck_conj.m"
            {
#line 378 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__Goals1_28, check_hlds__modecheck_conj__Goals_12, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43);
            }
#line 381 "modecheck_conj.m"
            {
#line 381 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__modecheck_conj__DelayInfo2_31);
            }
#line 382 "modecheck_conj.m"
            {
#line 382 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_31, check_hlds__modecheck_conj__DelayedGoals_11, &check_hlds__modecheck_conj__DelayInfo3_32);
            }
#line 383 "modecheck_conj.m"
            {
#line 383 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_32, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36);
#line 383 "modecheck_conj.m"
              return;
            }
#line 367 "modecheck_conj.m"
          }
#line 384 "modecheck_conj.m"
        else
#line 386 "modecheck_conj.m"
          {
#line 386 "modecheck_conj.m"
            *check_hlds__modecheck_conj__DelayedGoals_11 = check_hlds__modecheck_conj__DelayedGoals0_10;
#line 387 "modecheck_conj.m"
            *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35;
#line 386 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33;
#line 386 "modecheck_conj.m"
          }
#line 384 "modecheck_conj.m"
      }
#line 314 "modecheck_conj.m"
  }
#line 314 "modecheck_conj.m"
}

#line 139 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(
#line 139 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 139 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 139 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__3_3,
#line 139 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4,
#line 139 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5,
#line 139 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6,
#line 139 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7)
#line 139 "modecheck_conj.m"
{
#line 144 "modecheck_conj.m"
  while (MR_TRUE)
#line 144 "modecheck_conj.m"
    {
#line 144 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 144 "modecheck_conj.m"
      {
#line 144 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 144 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "modecheck_conj.m"
          {
#line 144 "modecheck_conj.m"
            *check_hlds__modecheck_conj__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 145 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6;
#line 145 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4;
#line 144 "modecheck_conj.m"
          }
#line 144 "modecheck_conj.m"
        else
#line 147 "modecheck_conj.m"
          {
#line 147 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 155 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ConjGoals_21;
#line 149 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_59_59;
#line 149 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_60_60;
#line 149 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_22_22;

#line 150 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__1_1 == (MR_Integer) 0);
#line 149 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 149 "modecheck_conj.m"
              {
#line 149 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal0_16, (MR_Integer) 0)));
#line 149 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal0_16, (MR_Integer) 1)));
#line 149 "modecheck_conj.m"
                check_hlds__modecheck_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_conj__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 149 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 149 "modecheck_conj.m"
                  {
#line 149 "modecheck_conj.m"
                    check_hlds__modecheck_conj__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_59_59, (MR_Integer) 1)));
#line 149 "modecheck_conj.m"
                    check_hlds__modecheck_conj__ConjGoals_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_59_59, (MR_Integer) 2)));
#line 149 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__V_60_60 == (MR_Integer) 0);
#line 149 "modecheck_conj.m"
                  }
#line 149 "modecheck_conj.m"
              }
#line 155 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 152 "modecheck_conj.m"
              {
#line 152 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goals1_23;

#line 152 "modecheck_conj.m"
                {
#line 152 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Goals1_23 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__ConjGoals_21, check_hlds__modecheck_conj__Goals0_17);
                }
#line 153 "modecheck_conj.m"
                /* direct tailcall eliminated */
#line 153 "modecheck_conj.m"
                {
#line 153 "modecheck_conj.m"
                  MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Goals1_23;

#line 153 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 153 "modecheck_conj.m"
                }
#line 153 "modecheck_conj.m"
                continue;
#line 152 "modecheck_conj.m"
              }
#line 155 "modecheck_conj.m"
            else
#line 161 "modecheck_conj.m"
              {
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_93_93;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Purity_24;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Impure_25;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__ScheduledSolverGoals_26;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__InstMap0_27;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo0_28;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__NonLocalVars_29;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goal_30;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Errors_31;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo1_34;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__WokenGoals_43;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo_44;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__InstMap_49;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goals2_50;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_65_65;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84;
#line 161 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goals1_91;

#line 161 "modecheck_conj.m"
                {
#line 161 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Purity_24 = hlds__hlds_goal__goal_get_purity_1_f_0(check_hlds__modecheck_conj__Goal0_16);
                }
#line 167 "modecheck_conj.m"
#line 167 "modecheck_conj.m"
                switch (check_hlds__modecheck_conj__Purity_24) {
#line 167 "modecheck_conj.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 167 "modecheck_conj.m"
                  case (MR_Integer) 2:
#line 163 "modecheck_conj.m"
                    {
#line 164 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Impure_25 = (MR_Integer) 1;
#line 165 "modecheck_conj.m"
                      {
#line 165 "modecheck_conj.m"
                        check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(check_hlds__modecheck_conj__Goal0_16, &check_hlds__modecheck_conj__ScheduledSolverGoals_26, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64);
                      }
#line 163 "modecheck_conj.m"
                    }
#line 167 "modecheck_conj.m"
                    break;
#line 167 "modecheck_conj.m"
                  case (MR_Integer) 0:
#line 167 "modecheck_conj.m"
                  case (MR_Integer) 1:
#line 170 "modecheck_conj.m"
                    {
#line 171 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Impure_25 = (MR_Integer) 0;
#line 172 "modecheck_conj.m"
                      check_hlds__modecheck_conj__ScheduledSolverGoals_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4;
#line 170 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6;
#line 170 "modecheck_conj.m"
                    }
#line 167 "modecheck_conj.m"
                    break;
#line 167 "modecheck_conj.m"
                }
#line 176 "modecheck_conj.m"
                {
#line 176 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_conj__InstMap0_27);
                }
#line 177 "modecheck_conj.m"
                {
#line 177 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_conj__DelayInfo0_28);
                }
#line 181 "modecheck_conj.m"
                {
#line 181 "modecheck_conj.m"
                  check_hlds__modecheck_conj__NonLocalVars_29 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_conj__Goal0_16);
                }
#line 182 "modecheck_conj.m"
                {
#line 182 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_conj__NonLocalVars_29, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_65_65);
                }
#line 183 "modecheck_conj.m"
                {
#line 183 "modecheck_conj.m"
                  check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_conj__Goal0_16, &check_hlds__modecheck_conj__Goal_30, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_65_65, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66);
                }
#line 188 "modecheck_conj.m"
                {
#line 188 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_conj__Errors_31);
                }
#line 211 "modecheck_conj.m"
                if ((check_hlds__modecheck_conj__Errors_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "modecheck_conj.m"
                  {
#line 213 "modecheck_conj.m"
                    {
#line 213 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_conj__DelayInfo1_34);
                    }
#line 212 "modecheck_conj.m"
                    check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63;
#line 212 "modecheck_conj.m"
                    check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66;
#line 212 "modecheck_conj.m"
                  }
#line 211 "modecheck_conj.m"
                else
#line 190 "modecheck_conj.m"
                  {
#line 190 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__FirstErrorInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Errors_31, (MR_Integer) 0)));
#line 190 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68;
#line 190 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_69_69;
#line 190 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Errors_31, (MR_Integer) 1)));

#line 191 "modecheck_conj.m"
                    {
#line 191 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68);
                    }
#line 192 "modecheck_conj.m"
                    {
#line 192 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_conj__InstMap0_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_69_69);
                    }
#line 193 "modecheck_conj.m"
                    {
#line 193 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_conj__NonLocalVars_29, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70);
                    }
#line 194 "modecheck_conj.m"
                    {
#line 194 "modecheck_conj.m"
                      check_hlds__delay_info__delay_info_delay_goal_4_p_0(check_hlds__modecheck_conj__FirstErrorInfo_32, check_hlds__modecheck_conj__Goal0_16, check_hlds__modecheck_conj__DelayInfo0_28, &check_hlds__modecheck_conj__DelayInfo1_34);
                    }
#line 208 "modecheck_conj.m"
#line 208 "modecheck_conj.m"
                    switch (check_hlds__modecheck_conj__Impure_25) {
#line 208 "modecheck_conj.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 208 "modecheck_conj.m"
                      case (MR_Integer) 0:
#line 209 "modecheck_conj.m"
                        check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63;
#line 208 "modecheck_conj.m"
                        break;
#line 208 "modecheck_conj.m"
                      case (MR_Integer) 1:
#line 198 "modecheck_conj.m"
                        {
#line 198 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__Vars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_32, (MR_Integer) 0)));
#line 198 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ImpureError_39;
#line 198 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__Context_40;
#line 198 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ModeContext_41;
#line 198 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ImpureErrorInfo_42;
#line 198 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_71_71;
#line 198 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_72_72;
#line 199 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_32, (MR_Integer) 1)));
#line 199 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_32, (MR_Integer) 2)));
#line 199 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_32, (MR_Integer) 3)));

#line 201 "modecheck_conj.m"
                          {
#line 201 "modecheck_conj.m"
                            check_hlds__modecheck_conj__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 201 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_72_72, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_35));
#line 201 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_72_72, 1) = ((MR_Box) (check_hlds__modecheck_conj__FirstErrorInfo_32));
#line 201 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_72_72, 2) = ((MR_Box) (check_hlds__modecheck_conj__Goal0_16));
#line 201 "modecheck_conj.m"
                          }
#line 201 "modecheck_conj.m"
                          {
#line 201 "modecheck_conj.m"
                            check_hlds__modecheck_conj__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_71_71, 0) = ((MR_Box) (check_hlds__modecheck_conj__V_72_72));
#line 201 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "modecheck_conj.m"
                          }
#line 200 "modecheck_conj.m"
                          {
#line 200 "modecheck_conj.m"
                            check_hlds__modecheck_conj__ImpureError_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 200 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 200 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_39, 1) = ((MR_Box) (check_hlds__modecheck_conj__V_71_71));
#line 200 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "modecheck_conj.m"
                          }
#line 203 "modecheck_conj.m"
                          {
#line 203 "modecheck_conj.m"
                            check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_conj__Context_40);
                          }
#line 204 "modecheck_conj.m"
                          {
#line 204 "modecheck_conj.m"
                            check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_conj__ModeContext_41);
                          }
#line 205 "modecheck_conj.m"
                          {
#line 205 "modecheck_conj.m"
                            check_hlds__modecheck_conj__ImpureErrorInfo_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 205 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_42, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_35));
#line 205 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_42, 1) = ((MR_Box) (check_hlds__modecheck_conj__ImpureError_39));
#line 205 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_42, 2) = ((MR_Box) (check_hlds__modecheck_conj__Context_40));
#line 205 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_42, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeContext_41));
#line 205 "modecheck_conj.m"
                          }
#line 207 "modecheck_conj.m"
                          {
#line 207 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75, 0) = ((MR_Box) (check_hlds__modecheck_conj__ImpureErrorInfo_42));
#line 207 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75, 1) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63));
#line 207 "modecheck_conj.m"
                          }
#line 198 "modecheck_conj.m"
                        }
#line 208 "modecheck_conj.m"
                        break;
#line 208 "modecheck_conj.m"
                    }
#line 190 "modecheck_conj.m"
                  }
#line 218 "modecheck_conj.m"
                {
#line 218 "modecheck_conj.m"
                  check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&check_hlds__modecheck_conj__WokenGoals_43, check_hlds__modecheck_conj__DelayInfo1_34, &check_hlds__modecheck_conj__DelayInfo_44);
                }
#line 4199 "check_hlds.modecheck_conj.c"
                check_hlds__modecheck_conj__TypeCtorInfo_93_93 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 219 "modecheck_conj.m"
                {
#line 219 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Goals1_91 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__WokenGoals_43, check_hlds__modecheck_conj__Goals0_17);
                }
#line 222 "modecheck_conj.m"
                if ((check_hlds__modecheck_conj__WokenGoals_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "modecheck_conj.m"
                  check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70;
#line 222 "modecheck_conj.m"
                else
#line 222 "modecheck_conj.m"
                  {
#line 222 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__WokenGoals_43, (MR_Integer) 1)));
#line 223 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__WokenGoals_43, (MR_Integer) 0)));

#line 222 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "modecheck_conj.m"
                      {
#line 224 "modecheck_conj.m"
                        {
#line 224 "modecheck_conj.m"
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goal", check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83);
                        }
#line 223 "modecheck_conj.m"
                      }
#line 222 "modecheck_conj.m"
                    else
#line 226 "modecheck_conj.m"
                      {
#line 227 "modecheck_conj.m"
                        {
#line 227 "modecheck_conj.m"
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goals", check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83);
                        }
#line 226 "modecheck_conj.m"
                      }
#line 222 "modecheck_conj.m"
                  }
#line 229 "modecheck_conj.m"
                {
#line 229 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo_44, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84);
                }
#line 230 "modecheck_conj.m"
                {
#line 230 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modecheck_conj__InstMap_49);
                }
#line 231 "modecheck_conj.m"
                {
#line 231 "modecheck_conj.m"
                  check_hlds__modecheck_conj__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_conj__InstMap_49);
                }
#line 237 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 235 "modecheck_conj.m"
                  {
#line 235 "modecheck_conj.m"
                    {
#line 235 "modecheck_conj.m"
                      check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_conj__Goals1_91, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7);
                    }
#line 236 "modecheck_conj.m"
                    check_hlds__modecheck_conj__Goals2_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 235 "modecheck_conj.m"
                    *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75;
#line 235 "modecheck_conj.m"
                  }
#line 237 "modecheck_conj.m"
                else
#line 239 "modecheck_conj.m"
                  {
#line 239 "modecheck_conj.m"
                    check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(check_hlds__modecheck_conj__HeadVar__1_1, check_hlds__modecheck_conj__Goals1_91, &check_hlds__modecheck_conj__Goals2_50, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7);
                  }
#line 246 "modecheck_conj.m"
                if ((check_hlds__modecheck_conj__Errors_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "modecheck_conj.m"
                  {
#line 247 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__SubGoals_53;
#line 252 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_30, (MR_Integer) 0)));
#line 252 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_94_94;
#line 252 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_30, (MR_Integer) 1)));

#line 252 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_conj__V_88_88)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_88_88, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 252 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 252 "modecheck_conj.m"
                      {
#line 252 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_88_88, (MR_Integer) 1)));
#line 252 "modecheck_conj.m"
                        check_hlds__modecheck_conj__SubGoals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_88_88, (MR_Integer) 2)));
#line 252 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__1_1 == check_hlds__modecheck_conj__V_94_94);
#line 252 "modecheck_conj.m"
                      }
#line 247 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 253 "modecheck_conj.m"
                      {
#line 253 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__V_89_89;

#line 253 "modecheck_conj.m"
                        {
#line 253 "modecheck_conj.m"
                          check_hlds__modecheck_conj__V_89_89 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__SubGoals_53, check_hlds__modecheck_conj__Goals2_50);
                        }
#line 253 "modecheck_conj.m"
                        {
#line 253 "modecheck_conj.m"
                          *check_hlds__modecheck_conj__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__ScheduledSolverGoals_26, check_hlds__modecheck_conj__V_89_89);
                        }
#line 253 "modecheck_conj.m"
                      }
#line 247 "modecheck_conj.m"
                    else
#line 255 "modecheck_conj.m"
                      {
#line 255 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__V_90_90;

#line 255 "modecheck_conj.m"
                        {
#line 255 "modecheck_conj.m"
                          check_hlds__modecheck_conj__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "modecheck_conj.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_90_90, 0) = ((MR_Box) (check_hlds__modecheck_conj__Goal_30));
#line 255 "modecheck_conj.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_90_90, 1) = ((MR_Box) (check_hlds__modecheck_conj__Goals2_50));
#line 255 "modecheck_conj.m"
                        }
#line 255 "modecheck_conj.m"
                        {
#line 255 "modecheck_conj.m"
                          *check_hlds__modecheck_conj__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__ScheduledSolverGoals_26, check_hlds__modecheck_conj__V_90_90);
                        }
#line 255 "modecheck_conj.m"
                      }
#line 247 "modecheck_conj.m"
                  }
#line 246 "modecheck_conj.m"
                else
#line 245 "modecheck_conj.m"
                  {
#line 245 "modecheck_conj.m"
                    *check_hlds__modecheck_conj__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__ScheduledSolverGoals_26, check_hlds__modecheck_conj__Goals2_50);
                  }
#line 161 "modecheck_conj.m"
              }
#line 147 "modecheck_conj.m"
          }
#line 144 "modecheck_conj.m"
      }
#line 144 "modecheck_conj.m"
      break;
#line 144 "modecheck_conj.m"
    }
#line 139 "modecheck_conj.m"
}

#line 23 "modecheck_conj.m"
void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(
#line 23 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_6,
#line 23 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goals0_7,
#line 23 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_8,
#line 23 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_37,
#line 23 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38)
#line 23 "modecheck_conj.m"
{
#line 61 "modecheck_conj.m"
  {
#line 61 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__TypeCtorInfo_57_57;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__OldErrors_10;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__OldMayInit_11;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo0_12;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo1_13;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__LiveVars1_14;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_15;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RevImpurityErrors0_16;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo2_17;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals0_18;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo3_19;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals2_20;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals_21;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RevImpurityErrors_22;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NewErrors_23;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Errors_24;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals0_69;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_70;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_71;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_72;
#line 61 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_73;

#line 62 "modecheck_conj.m"
    {
#line 62 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_conj__OldErrors_10);
    }
#line 63 "modecheck_conj.m"
    {
#line 63 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 65 "modecheck_conj.m"
    {
#line 65 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__OldMayInit_11);
    }
#line 67 "modecheck_conj.m"
    {
#line 67 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__DelayInfo0_12);
    }
#line 68 "modecheck_conj.m"
    {
#line 68 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_12, &check_hlds__modecheck_conj__DelayInfo1_13);
    }
#line 69 "modecheck_conj.m"
    {
#line 69 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_13, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41);
    }
#line 71 "modecheck_conj.m"
    {
#line 71 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__LiveVars1_14);
    }
#line 72 "modecheck_conj.m"
    {
#line 72 "modecheck_conj.m"
      check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__Goals0_7, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42);
    }
#line 76 "modecheck_conj.m"
    {
#line 76 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 1, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44);
    }
#line 78 "modecheck_conj.m"
    {
#line 78 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__Goals0_7, &check_hlds__modecheck_conj__Goals1_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_conj__RevImpurityErrors0_16, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46);
    }
#line 81 "modecheck_conj.m"
    {
#line 81 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_conj__DelayInfo2_17);
    }
#line 82 "modecheck_conj.m"
    {
#line 82 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_17, &check_hlds__modecheck_conj__DelayedGoals0_18, &check_hlds__modecheck_conj__DelayInfo3_19);
    }
#line 83 "modecheck_conj.m"
    {
#line 83 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_19, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47);
    }
#line 277 "modecheck_conj.m"
    {
#line 277 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__DelayedGoals0_18, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_71, &check_hlds__modecheck_conj__Goals0_69, check_hlds__modecheck_conj__RevImpurityErrors0_16, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_72, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_73);
    }
#line 282 "modecheck_conj.m"
    {
#line 282 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_71, &check_hlds__modecheck_conj__DelayedGoals_21, &check_hlds__modecheck_conj__Goals1_70, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_72, &check_hlds__modecheck_conj__RevImpurityErrors_22, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_73, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48);
    }
#line 284 "modecheck_conj.m"
    {
#line 284 "modecheck_conj.m"
      check_hlds__modecheck_conj__Goals2_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals0_69, check_hlds__modecheck_conj__Goals1_70);
    }
#line 91 "modecheck_conj.m"
    {
#line 91 "modecheck_conj.m"
      *check_hlds__modecheck_conj__Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals1_15, check_hlds__modecheck_conj__Goals2_20);
    }
#line 93 "modecheck_conj.m"
    {
#line 93 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_conj__NewErrors_23);
    }
#line 4542 "check_hlds.modecheck_conj.c"
    check_hlds__modecheck_conj__TypeCtorInfo_57_57 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
#line 94 "modecheck_conj.m"
    {
#line 94 "modecheck_conj.m"
      check_hlds__modecheck_conj__Errors_24 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__OldErrors_10, check_hlds__modecheck_conj__NewErrors_23);
    }
#line 95 "modecheck_conj.m"
    {
#line 95 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_conj__Errors_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49);
    }
#line 107 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 99 "modecheck_conj.m"
      {
#line 99 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ImpurityErrors_25;
#line 99 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Errors5_26;
#line 99 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Errors6_27;

#line 103 "modecheck_conj.m"
        {
#line 103 "modecheck_conj.m"
          mercury__list__reverse_2_p_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__RevImpurityErrors_22, &check_hlds__modecheck_conj__ImpurityErrors_25);
        }
#line 104 "modecheck_conj.m"
        {
#line 104 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__Errors5_26);
        }
#line 105 "modecheck_conj.m"
        {
#line 105 "modecheck_conj.m"
          check_hlds__modecheck_conj__Errors6_27 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__Errors5_26, check_hlds__modecheck_conj__ImpurityErrors_25);
        }
#line 106 "modecheck_conj.m"
        {
#line 106 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_conj__Errors6_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
        }
#line 99 "modecheck_conj.m"
      }
#line 107 "modecheck_conj.m"
    else
#line 108 "modecheck_conj.m"
      {
#line 108 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__FirstDelayedGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 0)));
#line 108 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__MoreDelayedGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 1)));
#line 108 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50;

#line 112 "modecheck_conj.m"
        {
#line 112 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__modecheck_conj__LiveVars1_14, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50);
        }
#line 117 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__MoreDelayedGoals_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "modecheck_conj.m"
          {
#line 114 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 1)));
#line 115 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___DVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 0)));
#line 115 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___DGoal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 2)));

#line 116 "modecheck_conj.m"
            {
#line 116 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_add_error_3_p_0(check_hlds__modecheck_conj__Error_31, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
            }
#line 114 "modecheck_conj.m"
          }
#line 117 "modecheck_conj.m"
        else
#line 118 "modecheck_conj.m"
          {
#line 118 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars_35;
#line 118 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModeError_36;
#line 118 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_80_80;
#line 118 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars1_83;
#line 118 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Rest_86;
#line 118 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars2_89;
#line 118 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_90_90;
#line 742 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_84_84;
#line 742 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_85_85;

#line 736 "modecheck_conj.m"
            {
#line 736 "modecheck_conj.m"
              check_hlds__modecheck_conj__V_80_80 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 742 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 0)));
#line 742 "modecheck_conj.m"
            check_hlds__modecheck_conj__Rest_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 1)));
#line 742 "modecheck_conj.m"
            check_hlds__modecheck_conj__Vars1_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_90_90, (MR_Integer) 0)));
#line 742 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_90_90, (MR_Integer) 1)));
#line 742 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_90_90, (MR_Integer) 2)));
#line 743 "modecheck_conj.m"
            {
#line 743 "modecheck_conj.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_80_80, check_hlds__modecheck_conj__Vars1_83, &check_hlds__modecheck_conj__Vars2_89);
            }
#line 744 "modecheck_conj.m"
            {
#line 744 "modecheck_conj.m"
              check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(check_hlds__modecheck_conj__Rest_86, check_hlds__modecheck_conj__Vars2_89, &check_hlds__modecheck_conj__Vars_35);
            }
#line 120 "modecheck_conj.m"
            {
#line 120 "modecheck_conj.m"
              check_hlds__modecheck_conj__ModeError_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 120 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 120 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 1) = ((MR_Box) (check_hlds__modecheck_conj__DelayedGoals_21));
#line 120 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 120 "modecheck_conj.m"
            }
#line 121 "modecheck_conj.m"
            {
#line 121 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_conj__Vars_35, check_hlds__modecheck_conj__ModeError_36, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
            }
#line 118 "modecheck_conj.m"
          }
#line 108 "modecheck_conj.m"
      }
#line 125 "modecheck_conj.m"
    {
#line 125 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(check_hlds__modecheck_conj__OldMayInit_11, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38);
#line 125 "modecheck_conj.m"
      return;
    }
#line 61 "modecheck_conj.m"
  }
#line 23 "modecheck_conj.m"
}

void mercury__check_hlds__modecheck_conj__init(void)
{
}

void mercury__check_hlds__modecheck_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_conj__check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0);
}

void mercury__check_hlds__modecheck_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.modecheck_conj. */
