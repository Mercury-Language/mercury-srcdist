/*
** Automatically generated from `modecheck_conj.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "hlds.status.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 434 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s {
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7;
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73;
#line 434 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74;
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 434 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76;
#line 434 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont;
#line 434 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr;
#line 438 "modecheck_conj.m"
  MR_bool check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded;
#line 534 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71;
#line 534 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72;
#line 534 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77;
#line 534 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105;
#line 534 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106;
#line 541 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71;
#line 498 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118;
#line 498 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41;
#line 498 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48;
#line 498 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49;
#line 498 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87;
#line 498 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88;
#line 434 "modecheck_conj.m"
};

#line 431 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s {
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3;
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5;
#line 431 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont;
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr;
#line 431 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74;
#line 431 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76;
#line 431 "modecheck_conj.m"
};

#line 426 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s {
#line 426 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12;
#line 426 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14;
#line 426 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont;
#line 426 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr;
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12;
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14;
#line 426 "modecheck_conj.m"
};

#line 431 "modecheck_conj.m"
struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s {
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3;
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5;
#line 431 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont;
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr;
#line 431 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74;
#line 431 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76;
#line 431 "modecheck_conj.m"
};

#line 312 "modecheck_conj.m"
struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s {
#line 322 "modecheck_conj.m"
  MR_bool check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded;
#line 382 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17;
#line 382 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21;
#line 332 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49;
#line 332 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20;
#line 332 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22;
#line 332 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23;
#line 420 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56;
#line 420 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57;
#line 420 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58;
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77;
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68;
#line 431 "modecheck_conj.m"
  jmp_buf check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0;
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57;
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58;
#line 352 "modecheck_conj.m"
  jmp_buf check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1;
#line 352 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24;
#line 312 "modecheck_conj.m"
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

#line 631 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__631__1_2_p_0(
#line 631 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__OldMayInit_20,
#line 631 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_36);

#line 125 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
#line 125 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__1_1,
#line 125 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 125 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3);

#line 125 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
#line 125 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 125 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2);

#line 744 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
#line 744 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 744 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2,
#line 744 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3);

#line 736 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
#line 736 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 736 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 736 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Vars_3);

#line 715 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
#line 715 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVars_3,
#line 715 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2);

#line 712 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
#line 712 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 712 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 671 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
#line 671 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_7,
#line 671 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_8,
#line 671 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32,
#line 671 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33,
#line 671 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34,
#line 671 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35);

#line 657 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
#line 657 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1);

#line 631 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2(
#line 631 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg);

#line 624 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_1(
#line 624 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 624 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 607 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(
#line 607 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 607 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 607 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 607 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 607 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26,
#line 607 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27,
#line 607 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28,
#line 607 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29);

#line 565 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0(
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3,
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4,
#line 565 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5,
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6,
#line 565 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7);

#line 556 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(
#line 556 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModuleInfo_4,
#line 556 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__VarTypes_5,
#line 556 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Var_6);

#line 505 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1(
#line 505 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 505 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 541 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5(
#line 541 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 534 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(
#line 534 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 498 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3(
#line 498 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 498 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2(
#line 498 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 434 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_8,
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73,
#line 434 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74,
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75,
#line 434 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76,
#line 434 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 434 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2(
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 431 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 426 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0(
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goals_8,
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11,
#line 426 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12,
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13,
#line 426 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14,
#line 426 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 426 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 393 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(
#line 393 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1);

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3(
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 431 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 332 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_1(
#line 332 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 332 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 352 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(
#line 352 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 352 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8(
#line 352 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 352 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(
#line 352 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 312 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(
#line 312 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 312 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 312 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 312 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 312 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33,
#line 312 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34,
#line 312 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35,
#line 312 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36);

#line 137 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(
#line 137 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 137 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 137 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__3_3,
#line 137 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4,
#line 137 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5,
#line 137 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6,
#line 137 "modecheck_conj.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 789 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 797 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 805 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 814 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 822 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 830 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 838 "check_hlds.modecheck_conj.c"
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

#line 855 "check_hlds.modecheck_conj.c"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
#line 858 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 860 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2)
#line 862 "check_hlds.modecheck_conj.c"
{
#line 864 "check_hlds.modecheck_conj.c"
  {
#line 866 "check_hlds.modecheck_conj.c"
    MR_bool check_hlds__modecheck_conj__succeeded;

#line 869 "check_hlds.modecheck_conj.c"
    {
#line 871 "check_hlds.modecheck_conj.c"
      check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj____Unify____impurity_errors_0_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2));
    }
#line 874 "check_hlds.modecheck_conj.c"
    return check_hlds__modecheck_conj__succeeded;
#line 876 "check_hlds.modecheck_conj.c"
  }
#line 878 "check_hlds.modecheck_conj.c"
}

#line 881 "check_hlds.modecheck_conj.c"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
#line 884 "check_hlds.modecheck_conj.c"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_1,
#line 886 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 888 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_3)
#line 890 "check_hlds.modecheck_conj.c"
{
#line 892 "check_hlds.modecheck_conj.c"
  {
#line 894 "check_hlds.modecheck_conj.c"
    MR_Word check_hlds__modecheck_conj__conv0_HeadVar__1_1;

#line 897 "check_hlds.modecheck_conj.c"
    {
#line 899 "check_hlds.modecheck_conj.c"
      check_hlds__modecheck_conj____Compare____impurity_errors_0_0(&check_hlds__modecheck_conj__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_3));
    }
#line 902 "check_hlds.modecheck_conj.c"
    *check_hlds__modecheck_conj__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_conj__conv0_HeadVar__1_1));
#line 904 "check_hlds.modecheck_conj.c"
  }
#line 906 "check_hlds.modecheck_conj.c"
}

#line 631 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__631__1_2_p_0(
#line 631 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__OldMayInit_20,
#line 631 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_36)
#line 631 "modecheck_conj.m"
{
#line 631 "modecheck_conj.m"
  {
#line 631 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__OldMayInit_20 == check_hlds__modecheck_conj__HeadVar__2_36);

#line 631 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 631 "modecheck_conj.m"
  }
#line 631 "modecheck_conj.m"
}

#line 125 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
#line 125 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__1_1,
#line 125 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 125 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3)
#line 125 "modecheck_conj.m"
{
#line 125 "modecheck_conj.m"
  {
#line 125 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 125 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar1_4 = check_hlds__modecheck_conj__HeadVar__2_2;
#line 125 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar2_5 = check_hlds__modecheck_conj__HeadVar__3_3;

#line 125 "modecheck_conj.m"
    {
#line 125 "modecheck_conj.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[2], check_hlds__modecheck_conj__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar2_5)));
#line 125 "modecheck_conj.m"
      return;
    }
#line 125 "modecheck_conj.m"
  }
#line 125 "modecheck_conj.m"
}

#line 125 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
#line 125 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 125 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2)
#line 125 "modecheck_conj.m"
{
#line 125 "modecheck_conj.m"
  {
#line 125 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 125 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar1_3 = check_hlds__modecheck_conj__HeadVar__1_1;
#line 125 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar2_4 = check_hlds__modecheck_conj__HeadVar__2_2;

#line 125 "modecheck_conj.m"
    {
#line 125 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[2], ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar2_4)));
    }
#line 125 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 125 "modecheck_conj.m"
  }
#line 125 "modecheck_conj.m"
}

#line 744 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
#line 744 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 744 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2,
#line 744 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3)
#line 744 "modecheck_conj.m"
{
#line 747 "modecheck_conj.m"
  while (MR_TRUE)
#line 747 "modecheck_conj.m"
    {
#line 747 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 747 "modecheck_conj.m"
      {
#line 747 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 747 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "modecheck_conj.m"
          *check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2;
#line 747 "modecheck_conj.m"
        else
#line 748 "modecheck_conj.m"
          {
#line 748 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayedGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 748 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayedGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 748 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModeErrorInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 1)));
#line 748 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 2)));
#line 748 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15;
#line 749 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___WaitingVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 0)));

#line 750 "modecheck_conj.m"
            {
#line 750 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_delay_goal_4_p_0(check_hlds__modecheck_conj__ModeErrorInfo_11, check_hlds__modecheck_conj__Goal_12, check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15);
            }
#line 751 "modecheck_conj.m"
            /* direct tailcall eliminated */
#line 751 "modecheck_conj.m"
            {
#line 751 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__DelayedGoals_8;
#line 751 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0__tmp_copy_2 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15;

#line 751 "modecheck_conj.m"
              check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0__tmp_copy_2;
#line 751 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 751 "modecheck_conj.m"
            }
#line 751 "modecheck_conj.m"
            continue;
#line 748 "modecheck_conj.m"
          }
#line 747 "modecheck_conj.m"
      }
#line 747 "modecheck_conj.m"
      break;
#line 747 "modecheck_conj.m"
    }
#line 744 "modecheck_conj.m"
}

#line 736 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
#line 736 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 736 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 736 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Vars_3)
#line 736 "modecheck_conj.m"
{
#line 739 "modecheck_conj.m"
  while (MR_TRUE)
#line 739 "modecheck_conj.m"
    {
#line 739 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 739 "modecheck_conj.m"
      {
#line 739 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 739 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "modecheck_conj.m"
          *check_hlds__modecheck_conj__Vars_3 = check_hlds__modecheck_conj__HeadVar__2_2;
#line 739 "modecheck_conj.m"
        else
#line 740 "modecheck_conj.m"
          {
#line 740 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars1_5;
#line 740 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 740 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars2_11;
#line 740 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 740 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_6_6;
#line 740 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_7_7;

#line 740 "modecheck_conj.m"
            check_hlds__modecheck_conj__Vars1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 0)));
#line 740 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 1)));
#line 740 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 2)));
#line 741 "modecheck_conj.m"
            {
#line 741 "modecheck_conj.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__HeadVar__2_2, check_hlds__modecheck_conj__Vars1_5, &check_hlds__modecheck_conj__Vars2_11);
            }
#line 742 "modecheck_conj.m"
            /* direct tailcall eliminated */
#line 742 "modecheck_conj.m"
            {
#line 742 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__Rest_8;
#line 742 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Vars2_11;

#line 742 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 742 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 742 "modecheck_conj.m"
            }
#line 742 "modecheck_conj.m"
            continue;
#line 740 "modecheck_conj.m"
          }
#line 739 "modecheck_conj.m"
      }
#line 739 "modecheck_conj.m"
      break;
#line 739 "modecheck_conj.m"
    }
#line 736 "modecheck_conj.m"
}

#line 715 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
#line 715 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVars_3,
#line 715 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2)
#line 715 "modecheck_conj.m"
{
#line 718 "modecheck_conj.m"
  {
#line 718 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 718 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 2)));
#line 718 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Var_7;
#line 718 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RHS_8;
#line 718 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_6, (MR_Integer) 0)));
#line 718 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 718 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 719 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_6, (MR_Integer) 1)));
#line 719 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_9_9;
#line 719 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_10_10;
#line 719 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_11_11;

#line 719 "modecheck_conj.m"
    check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 719 "modecheck_conj.m"
    if (check_hlds__modecheck_conj__succeeded)
#line 719 "modecheck_conj.m"
      {
#line 719 "modecheck_conj.m"
        check_hlds__modecheck_conj__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 0)));
#line 719 "modecheck_conj.m"
        check_hlds__modecheck_conj__RHS_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 1)));
#line 719 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 2)));
#line 719 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 3)));
#line 719 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 4)));
#line 721 "modecheck_conj.m"
        {
#line 721 "modecheck_conj.m"
          {
#line 721 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0], ((MR_Box) (check_hlds__modecheck_conj__Var_7)), check_hlds__modecheck_conj__HeadVars_3);
          }
#line 721 "modecheck_conj.m"
        }
#line 722 "modecheck_conj.m"
        if (!(check_hlds__modecheck_conj__succeeded))
#line 723 "modecheck_conj.m"
          {
#line 723 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__TypeInfo_16_16;
#line 723 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__OtherVar_12;

#line 723 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__RHS_8)) == (MR_mktag((MR_Integer) 0)));
#line 723 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 723 "modecheck_conj.m"
              {
#line 723 "modecheck_conj.m"
                check_hlds__modecheck_conj__OtherVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__RHS_8, (MR_Integer) 0)));
#line 1226 "check_hlds.modecheck_conj.c"
                check_hlds__modecheck_conj__TypeInfo_16_16 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0];
#line 724 "modecheck_conj.m"
                {
#line 724 "modecheck_conj.m"
                  return check_hlds__modecheck_conj__succeeded = mercury__list__member_2_p_0(check_hlds__modecheck_conj__TypeInfo_16_16, ((MR_Box) (check_hlds__modecheck_conj__OtherVar_12)), check_hlds__modecheck_conj__HeadVars_3);
                }
#line 723 "modecheck_conj.m"
              }
#line 723 "modecheck_conj.m"
          }
#line 719 "modecheck_conj.m"
      }
#line 718 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 718 "modecheck_conj.m"
  }
#line 715 "modecheck_conj.m"
}

#line 712 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
#line 712 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 712 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 712 "modecheck_conj.m"
{
#line 712 "modecheck_conj.m"
  {
#line 712 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 712 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 712 "modecheck_conj.m"
    {
#line 712 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 712 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 712 "modecheck_conj.m"
  }
#line 712 "modecheck_conj.m"
}

#line 671 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
#line 671 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_7,
#line 671 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_8,
#line 671 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32,
#line 671 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33,
#line 671 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34,
#line 671 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35)
#line 671 "modecheck_conj.m"
{
#line 675 "modecheck_conj.m"
  {
#line 675 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo0_11;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals0_12;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo1_13;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__ModuleInfo_14;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__PredId_15;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__PredInfo_16;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__ClausesInfo_17;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__HeadVars_18;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__HeadVarUnificationGoals_19;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo2_22;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo3_23;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo_24;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_47_47;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals0_61;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_62;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64;
#line 675 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65;

#line 676 "modecheck_conj.m"
    {
#line 676 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modecheck_conj__DelayInfo0_11);
    }
#line 677 "modecheck_conj.m"
    {
#line 677 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo0_11, &check_hlds__modecheck_conj__DelayedGoals0_12, &check_hlds__modecheck_conj__DelayInfo1_13);
    }
#line 678 "modecheck_conj.m"
    {
#line 678 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_13, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36);
    }
#line 679 "modecheck_conj.m"
    {
#line 679 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__ModuleInfo_14);
    }
#line 680 "modecheck_conj.m"
    {
#line 680 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__PredId_15);
    }
#line 681 "modecheck_conj.m"
    {
#line 681 "modecheck_conj.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_conj__ModuleInfo_14, check_hlds__modecheck_conj__PredId_15, &check_hlds__modecheck_conj__PredInfo_16);
    }
#line 682 "modecheck_conj.m"
    {
#line 682 "modecheck_conj.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modecheck_conj__PredInfo_16, &check_hlds__modecheck_conj__ClausesInfo_17);
    }
#line 683 "modecheck_conj.m"
    {
#line 683 "modecheck_conj.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__modecheck_conj__ClausesInfo_17, &check_hlds__modecheck_conj__HeadVars_18);
    }
#line 712 "modecheck_conj.m"
    {
#line 712 "modecheck_conj.m"
      check_hlds__modecheck_conj__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 712 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[2]));
#line 712 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 1) = ((MR_Box) (check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1));
#line 712 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 712 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 3) = ((MR_Box) (check_hlds__modecheck_conj__HeadVars_18));
#line 712 "modecheck_conj.m"
    }
#line 712 "modecheck_conj.m"
    {
#line 712 "modecheck_conj.m"
      mercury__list__filter_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__modecheck_conj__V_47_47, check_hlds__modecheck_conj__DelayedGoals0_12, &check_hlds__modecheck_conj__HeadVarUnificationGoals_19, &check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20);
    }
#line 275 "modecheck_conj.m"
    {
#line 275 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0((MR_Integer) 0, check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63, &check_hlds__modecheck_conj__Goals0_61, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65);
    }
#line 280 "modecheck_conj.m"
    {
#line 280 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0((MR_Integer) 0, check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63, &check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, &check_hlds__modecheck_conj__Goals1_62, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39);
    }
#line 282 "modecheck_conj.m"
    {
#line 282 "modecheck_conj.m"
      *check_hlds__modecheck_conj__Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals0_61, check_hlds__modecheck_conj__Goals1_62);
    }
#line 689 "modecheck_conj.m"
    {
#line 689 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__DelayInfo2_22);
    }
#line 690 "modecheck_conj.m"
    {
#line 690 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo2_22, &check_hlds__modecheck_conj__DelayInfo3_23);
    }
#line 691 "modecheck_conj.m"
    {
#line 691 "modecheck_conj.m"
      check_hlds__modecheck_conj__redelay_goals_3_p_0(check_hlds__modecheck_conj__HeadVarUnificationGoals_19, check_hlds__modecheck_conj__DelayInfo3_23, &check_hlds__modecheck_conj__DelayInfo_24);
    }
#line 692 "modecheck_conj.m"
    {
#line 692 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35);
    }
#line 695 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 694 "modecheck_conj.m"
      *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38;
#line 695 "modecheck_conj.m"
    else
#line 696 "modecheck_conj.m"
      {
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars_27;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ModeError_28;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Context_29;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ModeContext_30;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ImpurityError_31;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_41_41;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_72_72;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars1_75;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Rest_78;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars2_81;
#line 696 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_82_82;
#line 740 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_76_76;
#line 740 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_77_77;

#line 734 "modecheck_conj.m"
        {
#line 734 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_72_72 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 740 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, (MR_Integer) 0)));
#line 740 "modecheck_conj.m"
        check_hlds__modecheck_conj__Rest_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, (MR_Integer) 1)));
#line 740 "modecheck_conj.m"
        check_hlds__modecheck_conj__Vars1_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 0)));
#line 740 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 1)));
#line 740 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 2)));
#line 741 "modecheck_conj.m"
        {
#line 741 "modecheck_conj.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_72_72, check_hlds__modecheck_conj__Vars1_75, &check_hlds__modecheck_conj__Vars2_81);
        }
#line 742 "modecheck_conj.m"
        {
#line 742 "modecheck_conj.m"
          check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(check_hlds__modecheck_conj__Rest_78, check_hlds__modecheck_conj__Vars2_81, &check_hlds__modecheck_conj__Vars_27);
        }
#line 699 "modecheck_conj.m"
        {
#line 699 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_41_41, 0) = ((MR_Box) (check_hlds__modecheck_conj__Goal_7));
#line 699 "modecheck_conj.m"
        }
#line 698 "modecheck_conj.m"
        {
#line 698 "modecheck_conj.m"
          check_hlds__modecheck_conj__ModeError_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 698 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 698 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 1) = ((MR_Box) (check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21));
#line 698 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 2) = ((MR_Box) (check_hlds__modecheck_conj__V_41_41));
#line 698 "modecheck_conj.m"
        }
#line 700 "modecheck_conj.m"
        {
#line 700 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_context_2_p_0(*check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35, &check_hlds__modecheck_conj__Context_29);
        }
#line 701 "modecheck_conj.m"
        {
#line 701 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_mode_context_2_p_0(*check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35, &check_hlds__modecheck_conj__ModeContext_30);
        }
#line 702 "modecheck_conj.m"
        {
#line 702 "modecheck_conj.m"
          check_hlds__modecheck_conj__ImpurityError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 702 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_27));
#line 702 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 1) = ((MR_Box) (check_hlds__modecheck_conj__ModeError_28));
#line 702 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 2) = ((MR_Box) (check_hlds__modecheck_conj__Context_29));
#line 702 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeContext_30));
#line 702 "modecheck_conj.m"
        }
#line 703 "modecheck_conj.m"
        {
#line 703 "modecheck_conj.m"
          MR_Word base;
#line 703 "modecheck_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "modecheck_conj.m"
          *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33 = base;
#line 703 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_conj__ImpurityError_31));
#line 703 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38));
#line 703 "modecheck_conj.m"
        }
#line 696 "modecheck_conj.m"
      }
#line 675 "modecheck_conj.m"
  }
#line 671 "modecheck_conj.m"
}

#line 657 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
#line 657 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1)
#line 657 "modecheck_conj.m"
{
#line 659 "modecheck_conj.m"
  {
#line 659 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 659 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 2)));
#line 659 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj___WaitingVars_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 659 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj___ModeError_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));

#line 659 "modecheck_conj.m"
    return check_hlds__modecheck_conj__Goal_5;
#line 659 "modecheck_conj.m"
  }
#line 657 "modecheck_conj.m"
}

#line 631 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2(
#line 631 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg)
#line 631 "modecheck_conj.m"
{
#line 631 "modecheck_conj.m"
  {
#line 631 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 631 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 631 "modecheck_conj.m"
    {
#line 631 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__631__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 4))));
    }
#line 631 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 631 "modecheck_conj.m"
  }
#line 631 "modecheck_conj.m"
}

#line 624 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_1(
#line 624 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 624 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 624 "modecheck_conj.m"
{
#line 624 "modecheck_conj.m"
  {
#line 624 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__wrapper_arg_2;
#line 624 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;
#line 624 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__conv0_Goal_5;

#line 624 "modecheck_conj.m"
    {
#line 624 "modecheck_conj.m"
      check_hlds__modecheck_conj__conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 624 "modecheck_conj.m"
    check_hlds__modecheck_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_conj__conv0_Goal_5));
#line 624 "modecheck_conj.m"
    return check_hlds__modecheck_conj__wrapper_arg_2;
#line 624 "modecheck_conj.m"
  }
#line 624 "modecheck_conj.m"
}

#line 607 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(
#line 607 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 607 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 607 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 607 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 607 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26,
#line 607 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27,
#line 607 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28,
#line 607 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29)
#line 607 "modecheck_conj.m"
{
#line 616 "modecheck_conj.m"
  {
#line 616 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;

#line 616 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "modecheck_conj.m"
      {
#line 617 "modecheck_conj.m"
        *check_hlds__modecheck_conj__DelayedGoals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "modecheck_conj.m"
        *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26;
#line 616 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28;
#line 616 "modecheck_conj.m"
      }
#line 616 "modecheck_conj.m"
    else
#line 622 "modecheck_conj.m"
      {
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_49_49 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Goals0_17;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo0_18;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo1_19;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__OldMayInit_20;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Goals1_21;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo2_22;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayedGoals1_23;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo3_24;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_32_32;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42;
#line 622 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;
#line 644 "modecheck_conj.m"
        MR_Integer check_hlds__modecheck_conj__V_44_44;
#line 644 "modecheck_conj.m"
        MR_Integer check_hlds__modecheck_conj__V_45_45;

#line 624 "modecheck_conj.m"
        {
#line 624 "modecheck_conj.m"
          check_hlds__modecheck_conj__Goals0_17 = mercury__list__map_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__TypeCtorInfo_49_49, (MR_Word) &check_hlds__modecheck_conj_scalar_common_3[1], check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 626 "modecheck_conj.m"
        {
#line 626 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_conj__DelayInfo0_18);
        }
#line 627 "modecheck_conj.m"
        {
#line 627 "modecheck_conj.m"
          check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_18, &check_hlds__modecheck_conj__DelayInfo1_19);
        }
#line 628 "modecheck_conj.m"
        {
#line 628 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_19, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 630 "modecheck_conj.m"
        {
#line 630 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_conj__OldMayInit_20);
        }
#line 631 "modecheck_conj.m"
        {
#line 631 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 631 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[1]));
#line 631 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 1) = ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2));
#line 631 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 631 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 3) = ((MR_Box) (check_hlds__modecheck_conj__OldMayInit_20));
#line 631 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 4) = ((MR_Box) ((MR_Integer) 1));
#line 631 "modecheck_conj.m"
        }
#line 631 "modecheck_conj.m"
        {
#line 631 "modecheck_conj.m"
          mercury__require__expect_4_p_0(check_hlds__modecheck_conj__V_32_32, (MR_String) "check_hlds.modecheck_conj", (MR_String) "predicate \140check_hlds.modecheck_conj.modecheck_delayed_goals_eager\'/8", (MR_String) "may init solver vars");
        }
#line 633 "modecheck_conj.m"
        {
#line 633 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 0, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38);
        }
#line 634 "modecheck_conj.m"
        {
#line 634 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__Goals0_17, &check_hlds__modecheck_conj__Goals1_21, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
        }
#line 636 "modecheck_conj.m"
        {
#line 636 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 1, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42);
        }
#line 639 "modecheck_conj.m"
        {
#line 639 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__DelayInfo2_22);
        }
#line 640 "modecheck_conj.m"
        {
#line 640 "modecheck_conj.m"
          check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_22, &check_hlds__modecheck_conj__DelayedGoals1_23, &check_hlds__modecheck_conj__DelayInfo3_24);
        }
#line 641 "modecheck_conj.m"
        {
#line 641 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43);
        }
#line 644 "modecheck_conj.m"
        {
#line 644 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_44_44 = mercury__list__length_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__DelayedGoals1_23);
        }
#line 644 "modecheck_conj.m"
        {
#line 644 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_45_45 = mercury__list__length_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 644 "modecheck_conj.m"
        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__V_44_44 < check_hlds__modecheck_conj__V_45_45);
#line 651 "modecheck_conj.m"
        if (check_hlds__modecheck_conj__succeeded)
#line 649 "modecheck_conj.m"
          {
#line 649 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals2_25;

#line 647 "modecheck_conj.m"
            {
#line 647 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__DelayedGoals1_23, check_hlds__modecheck_conj__DelayedGoals_11, &check_hlds__modecheck_conj__Goals2_25, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29);
            }
#line 650 "modecheck_conj.m"
            {
#line 650 "modecheck_conj.m"
              *check_hlds__modecheck_conj__Goals_12 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_49_49, check_hlds__modecheck_conj__Goals1_21, check_hlds__modecheck_conj__Goals2_25);
            }
#line 649 "modecheck_conj.m"
          }
#line 651 "modecheck_conj.m"
        else
#line 652 "modecheck_conj.m"
          {
#line 652 "modecheck_conj.m"
            *check_hlds__modecheck_conj__DelayedGoals_11 = check_hlds__modecheck_conj__DelayedGoals1_23;
#line 653 "modecheck_conj.m"
            *check_hlds__modecheck_conj__Goals_12 = check_hlds__modecheck_conj__Goals1_21;
#line 652 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;
#line 652 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39;
#line 652 "modecheck_conj.m"
          }
#line 622 "modecheck_conj.m"
      }
#line 616 "modecheck_conj.m"
  }
#line 607 "modecheck_conj.m"
}

#line 565 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0(
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3,
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4,
#line 565 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5,
#line 565 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6,
#line 565 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7)
#line 565 "modecheck_conj.m"
{
#line 570 "modecheck_conj.m"
  while (MR_TRUE)
#line 570 "modecheck_conj.m"
    {
#line 570 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 570 "modecheck_conj.m"
      {
#line 570 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 570 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "modecheck_conj.m"
          {
#line 570 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 570 "modecheck_conj.m"
              {
#line 570 "modecheck_conj.m"
                *check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6;
#line 570 "modecheck_conj.m"
                *check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 570 "modecheck_conj.m"
                check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 570 "modecheck_conj.m"
              }
#line 570 "modecheck_conj.m"
          }
#line 570 "modecheck_conj.m"
        else
#line 572 "modecheck_conj.m"
          {
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Arg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Mode_18;
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Modes_19;
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModuleInfo_22;
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__InitialInst_23;
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__FinalInst_24;
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31;
#line 572 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32;
#line 577 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_25_25;

#line 571 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 571 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 571 "modecheck_conj.m"
              {
#line 571 "modecheck_conj.m"
                check_hlds__modecheck_conj__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__3_3, (MR_Integer) 0)));
#line 571 "modecheck_conj.m"
                check_hlds__modecheck_conj__Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__3_3, (MR_Integer) 1)));
#line 573 "modecheck_conj.m"
                {
#line 573 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__HeadVar__1_1, &check_hlds__modecheck_conj__ModuleInfo_22);
                }
#line 574 "modecheck_conj.m"
                {
#line 574 "modecheck_conj.m"
                  check_hlds__modecheck_conj__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__modecheck_conj__ModuleInfo_22, check_hlds__modecheck_conj__Mode_18, &check_hlds__modecheck_conj__InitialInst_23, &check_hlds__modecheck_conj__FinalInst_24);
                }
#line 572 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 572 "modecheck_conj.m"
                  {
#line 576 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__InitialInst_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 576 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 576 "modecheck_conj.m"
                      {
#line 577 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__InitialInst_23)) == (MR_mktag((MR_Integer) 1)));
#line 577 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 577 "modecheck_conj.m"
                          check_hlds__modecheck_conj__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__InitialInst_23, (MR_Integer) 0)));
#line 577 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 576 "modecheck_conj.m"
                      }
#line 581 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 580 "modecheck_conj.m"
                      {
#line 580 "modecheck_conj.m"
                        {
#line 580 "modecheck_conj.m"
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__Arg_16, check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6, &check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31);
                        }
#line 580 "modecheck_conj.m"
                        check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 580 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 580 "modecheck_conj.m"
                      }
#line 581 "modecheck_conj.m"
                    else
#line 594 "modecheck_conj.m"
                      {
#line 584 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__V_26_26;

#line 583 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__FinalInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 583 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 583 "modecheck_conj.m"
                          {
#line 584 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__FinalInst_24)) == (MR_mktag((MR_Integer) 1)));
#line 584 "modecheck_conj.m"
                            if (check_hlds__modecheck_conj__succeeded)
#line 584 "modecheck_conj.m"
                              check_hlds__modecheck_conj__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__FinalInst_24, (MR_Integer) 0)));
#line 584 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 583 "modecheck_conj.m"
                          }
#line 594 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 590 "modecheck_conj.m"
                          {
#line 587 "modecheck_conj.m"
                            {
#line 587 "modecheck_conj.m"
                              check_hlds__modecheck_conj__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4, check_hlds__modecheck_conj__Arg_16);
                            }
#line 590 "modecheck_conj.m"
                            if (check_hlds__modecheck_conj__succeeded)
#line 589 "modecheck_conj.m"
                              check_hlds__modecheck_conj__succeeded = MR_FALSE;
#line 590 "modecheck_conj.m"
                            else
#line 592 "modecheck_conj.m"
                              {
#line 592 "modecheck_conj.m"
                                {
#line 592 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__Arg_16, check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4, &check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32);
                                }
#line 592 "modecheck_conj.m"
                                check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 592 "modecheck_conj.m"
                              }
#line 590 "modecheck_conj.m"
                          }
#line 594 "modecheck_conj.m"
                        else
#line 594 "modecheck_conj.m"
                          {
#line 594 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 594 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 594 "modecheck_conj.m"
                          }
#line 594 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 594 "modecheck_conj.m"
                          {
#line 594 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6;
#line 594 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 594 "modecheck_conj.m"
                          }
#line 594 "modecheck_conj.m"
                      }
#line 572 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 598 "modecheck_conj.m"
                      {
#line 598 "modecheck_conj.m"
                        /* direct tailcall eliminated */
#line 598 "modecheck_conj.m"
                        {
#line 598 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Args_17;
#line 598 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_conj__Modes_19;
#line 598 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0__tmp_copy_4 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32;
#line 598 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0__tmp_copy_6 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31;

#line 598 "modecheck_conj.m"
                          check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0__tmp_copy_6;
#line 598 "modecheck_conj.m"
                          check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0__tmp_copy_4;
#line 598 "modecheck_conj.m"
                          check_hlds__modecheck_conj__HeadVar__3_3 = check_hlds__modecheck_conj__HeadVar__3__tmp_copy_3;
#line 598 "modecheck_conj.m"
                          check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 598 "modecheck_conj.m"
                        }
#line 598 "modecheck_conj.m"
                        continue;
#line 598 "modecheck_conj.m"
                      }
#line 572 "modecheck_conj.m"
                  }
#line 571 "modecheck_conj.m"
              }
#line 572 "modecheck_conj.m"
          }
#line 570 "modecheck_conj.m"
        return check_hlds__modecheck_conj__succeeded;
#line 570 "modecheck_conj.m"
      }
#line 570 "modecheck_conj.m"
      break;
#line 570 "modecheck_conj.m"
    }
#line 565 "modecheck_conj.m"
}

#line 556 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(
#line 556 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModuleInfo_4,
#line 556 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__VarTypes_5,
#line 556 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Var_6)
#line 556 "modecheck_conj.m"
{
#line 559 "modecheck_conj.m"
  {
#line 559 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 559 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__VarType_7;

#line 560 "modecheck_conj.m"
    {
#line 560 "modecheck_conj.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_conj__VarTypes_5, check_hlds__modecheck_conj__Var_6, &check_hlds__modecheck_conj__VarType_7);
    }
#line 561 "modecheck_conj.m"
    {
#line 561 "modecheck_conj.m"
      check_hlds__modecheck_conj__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__modecheck_conj__ModuleInfo_4, check_hlds__modecheck_conj__VarType_7);
    }
#line 561 "modecheck_conj.m"
    check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 559 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 559 "modecheck_conj.m"
  }
#line 556 "modecheck_conj.m"
}

#line 505 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1(
#line 505 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 505 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 505 "modecheck_conj.m"
{
#line 505 "modecheck_conj.m"
  {
#line 505 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 505 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 505 "modecheck_conj.m"
    {
#line 505 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 505 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 505 "modecheck_conj.m"
  }
#line 505 "modecheck_conj.m"
}

#line 541 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5(
#line 541 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 541 "modecheck_conj.m"
{
#line 541 "modecheck_conj.m"
  {
#line 541 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 541 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71);
#line 541 "modecheck_conj.m"
    {
#line 541 "modecheck_conj.m"
      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(check_hlds__modecheck_conj__env_ptr);
#line 541 "modecheck_conj.m"
      return;
    }
#line 541 "modecheck_conj.m"
  }
#line 541 "modecheck_conj.m"
}

#line 534 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(
#line 534 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 534 "modecheck_conj.m"
{
#line 534 "modecheck_conj.m"
  {
#line 534 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 542 "modecheck_conj.m"
    {
#line 542 "modecheck_conj.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77);
    }
#line 542 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 542 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 542 "modecheck_conj.m"
      {
#line 542 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77, (MR_Integer) 0)));
#line 534 "modecheck_conj.m"
        {
#line 543 "modecheck_conj.m"
#line 543 "modecheck_conj.m"
          switch ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72) {
#line 543 "modecheck_conj.m"
            default:
#line 543 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_FALSE;
#line 543 "modecheck_conj.m"
              break;
#line 543 "modecheck_conj.m"
            case (MR_Integer) 4:
#line 543 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 543 "modecheck_conj.m"
              break;
#line 543 "modecheck_conj.m"
            case (MR_Integer) 0:
#line 543 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 543 "modecheck_conj.m"
              break;
#line 543 "modecheck_conj.m"
          }
#line 534 "modecheck_conj.m"
          if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 534 "modecheck_conj.m"
            {
#line 546 "modecheck_conj.m"
              {
#line 546 "modecheck_conj.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106);
              }
#line 549 "modecheck_conj.m"
              {
#line 549 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
              }
#line 549 "modecheck_conj.m"
              if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 549 "modecheck_conj.m"
                {
#line 549 "modecheck_conj.m"
                  ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 549 "modecheck_conj.m"
                  return;
                }
#line 534 "modecheck_conj.m"
            }
#line 534 "modecheck_conj.m"
        }
#line 542 "modecheck_conj.m"
      }
#line 534 "modecheck_conj.m"
  }
#line 534 "modecheck_conj.m"
}

#line 498 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3(
#line 498 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 498 "modecheck_conj.m"
{
#line 498 "modecheck_conj.m"
  {
#line 498 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 512 "modecheck_conj.m"
    {
#line 512 "modecheck_conj.m"
      parse_tree__set_of_var__union_3_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
    }
#line 512 "modecheck_conj.m"
    {
#line 512 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 512 "modecheck_conj.m"
      return;
    }
#line 498 "modecheck_conj.m"
  }
#line 498 "modecheck_conj.m"
}

#line 498 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2(
#line 498 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 498 "modecheck_conj.m"
{
#line 498 "modecheck_conj.m"
  {
#line 498 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 510 "modecheck_conj.m"
    {
#line 510 "modecheck_conj.m"
      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3, check_hlds__modecheck_conj__env_ptr);
    }
#line 498 "modecheck_conj.m"
  }
#line 498 "modecheck_conj.m"
}

#line 434 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_8,
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73,
#line 434 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74,
#line 434 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75,
#line 434 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76,
#line 434 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 434 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 434 "modecheck_conj.m"
{
#line 434 "modecheck_conj.m"
  {
#line 434 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 434 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7 = check_hlds__modecheck_conj__ModeInfo_7;
#line 434 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73;
#line 434 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74;
#line 434 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75;
#line 434 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76;
#line 434 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont = check_hlds__modecheck_conj__cont;
#line 434 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 438 "modecheck_conj.m"
    while (MR_TRUE)
#line 438 "modecheck_conj.m"
      {
#line 438 "modecheck_conj.m"
        /* tailcall optimized into a loop */
#line 438 "modecheck_conj.m"
        {
#line 438 "modecheck_conj.m"
          MR_Word check_hlds__modecheck_conj__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_8, (MR_Integer) 0)));
#line 439 "modecheck_conj.m"
          MR_Word check_hlds__modecheck_conj___GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_8, (MR_Integer) 1)));

#line 461 "modecheck_conj.m"
#line 461 "modecheck_conj.m"
          switch (MR_tag((MR_Word) check_hlds__modecheck_conj__GoalExpr_11)) {
#line 461 "modecheck_conj.m"
            case (MR_Integer) 1:
#line 461 "modecheck_conj.m"
              {
#line 461 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 461 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)));
#line 442 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 442 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 442 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));

#line 461 "modecheck_conj.m"
#line 461 "modecheck_conj.m"
                switch (MR_tag((MR_Word) check_hlds__modecheck_conj__V_127_127)) {
#line 461 "modecheck_conj.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 461 "modecheck_conj.m"
                  case (MR_Integer) 0:
#line 442 "modecheck_conj.m"
                    {
#line 442 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Y_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 0)));

#line 444 "modecheck_conj.m"
                      {
#line 444 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 448 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 445 "modecheck_conj.m"
                        {
#line 445 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__TypeCtorInfo_109_109;

#line 445 "modecheck_conj.m"
                          {
#line 445 "modecheck_conj.m"
                            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__Y_18);
                          }
#line 445 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 445 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 445 "modecheck_conj.m"
                            {
#line 2442 "check_hlds.modecheck_conj.c"
                              check_hlds__modecheck_conj__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 447 "modecheck_conj.m"
                              {
#line 447 "modecheck_conj.m"
                                parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_109_109, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                              }
#line 445 "modecheck_conj.m"
                              *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 445 "modecheck_conj.m"
                              (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 445 "modecheck_conj.m"
                            }
#line 445 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 445 "modecheck_conj.m"
                            {
#line 445 "modecheck_conj.m"
                              ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 445 "modecheck_conj.m"
                              return;
                            }
#line 445 "modecheck_conj.m"
                        }
#line 448 "modecheck_conj.m"
                      else
#line 451 "modecheck_conj.m"
                        {
#line 448 "modecheck_conj.m"
                          {
#line 448 "modecheck_conj.m"
                            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__Y_18);
                          }
#line 451 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 450 "modecheck_conj.m"
                            {
#line 450 "modecheck_conj.m"
                              {
#line 450 "modecheck_conj.m"
                                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                              }
#line 450 "modecheck_conj.m"
                              *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 450 "modecheck_conj.m"
                              {
#line 450 "modecheck_conj.m"
                                ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 450 "modecheck_conj.m"
                                return;
                              }
#line 450 "modecheck_conj.m"
                            }
#line 451 "modecheck_conj.m"
                          else
#line 456 "modecheck_conj.m"
                            {
#line 454 "modecheck_conj.m"
                              {
#line 454 "modecheck_conj.m"
                                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 454 "modecheck_conj.m"
                                {
#line 454 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_112_112, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                                }
#line 455 "modecheck_conj.m"
                                {
#line 455 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_112_112, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                                }
#line 454 "modecheck_conj.m"
                                {
#line 454 "modecheck_conj.m"
                                  ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
                                }
#line 454 "modecheck_conj.m"
                              }
#line 457 "modecheck_conj.m"
                              {
#line 457 "modecheck_conj.m"
                                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 457 "modecheck_conj.m"
                                {
#line 457 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_113_113, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                                }
#line 458 "modecheck_conj.m"
                                {
#line 458 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_113_113, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                                }
#line 457 "modecheck_conj.m"
                                {
#line 457 "modecheck_conj.m"
                                  ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 457 "modecheck_conj.m"
                                  return;
                                }
#line 457 "modecheck_conj.m"
                              }
#line 456 "modecheck_conj.m"
                            }
#line 451 "modecheck_conj.m"
                        }
#line 442 "modecheck_conj.m"
                    }
#line 461 "modecheck_conj.m"
                    break;
#line 461 "modecheck_conj.m"
                  case (MR_Integer) 1:
#line 464 "modecheck_conj.m"
                    {
#line 464 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__TypeCtorInfo_115_115;
#line 464 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 2)));
#line 465 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 0)));
#line 465 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 1)));

#line 468 "modecheck_conj.m"
                      {
#line 468 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 468 "modecheck_conj.m"
                      (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 464 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 464 "modecheck_conj.m"
                        {
#line 2577 "check_hlds.modecheck_conj.c"
                          check_hlds__modecheck_conj__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 471 "modecheck_conj.m"
                          {
#line 471 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_115_115, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                          }
#line 474 "modecheck_conj.m"
                          {
#line 474 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_list_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_115_115, check_hlds__modecheck_conj__Args_24, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                          }
#line 474 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 464 "modecheck_conj.m"
                        }
#line 464 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 464 "modecheck_conj.m"
                        {
#line 464 "modecheck_conj.m"
                          ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 464 "modecheck_conj.m"
                          return;
                        }
#line 464 "modecheck_conj.m"
                    }
#line 461 "modecheck_conj.m"
                    break;
#line 461 "modecheck_conj.m"
                  case (MR_Integer) 2:
#line 478 "modecheck_conj.m"
                    {
#line 478 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__TypeCtorInfo_117_117;

#line 482 "modecheck_conj.m"
                      {
#line 482 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 482 "modecheck_conj.m"
                      (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 478 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 478 "modecheck_conj.m"
                        {
#line 2624 "check_hlds.modecheck_conj.c"
                          check_hlds__modecheck_conj__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 485 "modecheck_conj.m"
                          {
#line 485 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_117_117, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                          }
#line 478 "modecheck_conj.m"
                          *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 478 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 478 "modecheck_conj.m"
                        }
#line 478 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 478 "modecheck_conj.m"
                        {
#line 478 "modecheck_conj.m"
                          ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 478 "modecheck_conj.m"
                          return;
                        }
#line 478 "modecheck_conj.m"
                    }
#line 461 "modecheck_conj.m"
                    break;
#line 461 "modecheck_conj.m"
                }
#line 461 "modecheck_conj.m"
              }
#line 461 "modecheck_conj.m"
              break;
#line 461 "modecheck_conj.m"
            case (MR_Integer) 2:
#line 534 "modecheck_conj.m"
              {
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_123_123;
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__PredId_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)));
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Preds_67;
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__PredInfo_68;
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__ProcTable_69;
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__ProcInfos_70;
#line 534 "modecheck_conj.m"
                MR_Integer check_hlds__modecheck_conj__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_64_64;
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_65_65;
#line 534 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_66_66;
#line 538 "modecheck_conj.m"
                MR_Box check_hlds__modecheck_conj__conv0_PredInfo_68;

#line 534 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 534 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 534 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 534 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 5)));
#line 537 "modecheck_conj.m"
                {
#line 537 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_preds_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__Preds_67);
                }
#line 538 "modecheck_conj.m"
                {
#line 538 "modecheck_conj.m"
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_conj__Preds_67, ((MR_Box) (check_hlds__modecheck_conj__PredId_62)), &check_hlds__modecheck_conj__conv0_PredInfo_68);
                }
#line 538 "modecheck_conj.m"
                check_hlds__modecheck_conj__PredInfo_68 = ((MR_Word) check_hlds__modecheck_conj__conv0_PredInfo_68);
#line 539 "modecheck_conj.m"
                {
#line 539 "modecheck_conj.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_conj__PredInfo_68, &check_hlds__modecheck_conj__ProcTable_69);
                }
#line 2708 "check_hlds.modecheck_conj.c"
                check_hlds__modecheck_conj__TypeCtorInfo_123_123 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 540 "modecheck_conj.m"
                {
#line 540 "modecheck_conj.m"
                  mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__modecheck_conj__TypeCtorInfo_123_123, check_hlds__modecheck_conj__ProcTable_69, &check_hlds__modecheck_conj__ProcInfos_70);
                }
#line 541 "modecheck_conj.m"
                {
#line 541 "modecheck_conj.m"
                  mercury__list__member_2_p_1(check_hlds__modecheck_conj__TypeCtorInfo_123_123, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71, check_hlds__modecheck_conj__ProcInfos_70, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5, &check_hlds__modecheck_conj__env);
                }
#line 534 "modecheck_conj.m"
              }
#line 461 "modecheck_conj.m"
              break;
#line 461 "modecheck_conj.m"
            case (MR_Integer) 3:
#line 461 "modecheck_conj.m"
#line 461 "modecheck_conj.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)))) {
#line 461 "modecheck_conj.m"
                case (MR_Integer) 0:
#line 526 "modecheck_conj.m"
                  {
#line 526 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Details_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 526 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ArgModes_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 526 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Args_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 525 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___JunkArgRegs_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 525 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___JunkDetism_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 5)));
#line 527 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_58_58;
#line 527 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_59_59;
#line 527 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_60_60;
#line 527 "modecheck_conj.m"
                    MR_Integer check_hlds__modecheck_conj__V_61_61;

#line 527 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__Details_54)) == (MR_mktag((MR_Integer) 0)));
#line 527 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 527 "modecheck_conj.m"
                      {
#line 527 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 0)));
#line 527 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 1)));
#line 527 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 2)));
#line 527 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 3)));
#line 527 "modecheck_conj.m"
                      }
#line 527 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 526 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 528 "modecheck_conj.m"
                      {
#line 528 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__Args_104, check_hlds__modecheck_conj__ArgModes_55, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                      }
#line 526 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 526 "modecheck_conj.m"
                      {
#line 526 "modecheck_conj.m"
                        ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 526 "modecheck_conj.m"
                        return;
                      }
#line 526 "modecheck_conj.m"
                  }
#line 461 "modecheck_conj.m"
                  break;
#line 461 "modecheck_conj.m"
                case (MR_Integer) 2:
#line 519 "modecheck_conj.m"
                  {
#line 519 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Goals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 519 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___ConjType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));

#line 520 "modecheck_conj.m"
                    {
#line 520 "modecheck_conj.m"
                      check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__Goals_53, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 520 "modecheck_conj.m"
                      return;
                    }
#line 519 "modecheck_conj.m"
                  }
#line 461 "modecheck_conj.m"
                  break;
#line 461 "modecheck_conj.m"
                case (MR_Integer) 3:
#line 491 "modecheck_conj.m"
                  {
#line 491 "modecheck_conj.m"
                    *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73;
#line 491 "modecheck_conj.m"
                    *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 491 "modecheck_conj.m"
                    {
#line 491 "modecheck_conj.m"
                      ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 491 "modecheck_conj.m"
                      return;
                    }
#line 491 "modecheck_conj.m"
                  }
#line 461 "modecheck_conj.m"
                  break;
#line 461 "modecheck_conj.m"
                case (MR_Integer) 5:
#line 516 "modecheck_conj.m"
                  {
#line 516 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__SubGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 516 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));

#line 517 "modecheck_conj.m"
                    /* direct tailcall eliminated */
#line 517 "modecheck_conj.m"
                    {
#line 517 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Goal__tmp_copy_8 = check_hlds__modecheck_conj__SubGoal_51;

#line 517 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Goal_8 = check_hlds__modecheck_conj__Goal__tmp_copy_8;
#line 517 "modecheck_conj.m"
                    }
#line 517 "modecheck_conj.m"
                    continue;
#line 516 "modecheck_conj.m"
                  }
#line 461 "modecheck_conj.m"
                  break;
#line 461 "modecheck_conj.m"
                case (MR_Integer) 6:
#line 498 "modecheck_conj.m"
                  {
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__CondGoal_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ThenGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__CondGoalInfo_43;
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__NonLocals_44;
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ModuleInfo_45;
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__VarTypes_46;
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__NonSolverNonLocals_47;
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_86_86;
#line 498 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___LocalVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 500 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___CondGoalExpr_42;

#line 498 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 500 "modecheck_conj.m"
                    check_hlds__modecheck_conj___CondGoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__CondGoal_39, (MR_Integer) 0)));
#line 500 "modecheck_conj.m"
                    check_hlds__modecheck_conj__CondGoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__CondGoal_39, (MR_Integer) 1)));
#line 501 "modecheck_conj.m"
                    {
#line 501 "modecheck_conj.m"
                      check_hlds__modecheck_conj__NonLocals_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_conj__CondGoalInfo_43);
                    }
#line 502 "modecheck_conj.m"
                    {
#line 502 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__ModuleInfo_45);
                    }
#line 503 "modecheck_conj.m"
                    {
#line 503 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_var_types_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__VarTypes_46);
                    }
#line 2901 "check_hlds.modecheck_conj.c"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 505 "modecheck_conj.m"
                    {
#line 505 "modecheck_conj.m"
                      check_hlds__modecheck_conj__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 505 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_5[0]));
#line 505 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 1) = ((MR_Box) (check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1));
#line 505 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 505 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModuleInfo_45));
#line 505 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 4) = ((MR_Box) (check_hlds__modecheck_conj__VarTypes_46));
#line 505 "modecheck_conj.m"
                    }
#line 504 "modecheck_conj.m"
                    {
#line 504 "modecheck_conj.m"
                      check_hlds__modecheck_conj__NonSolverNonLocals_47 = parse_tree__set_of_var__filter_2_f_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, check_hlds__modecheck_conj__V_86_86, check_hlds__modecheck_conj__NonLocals_44);
                    }
#line 506 "modecheck_conj.m"
                    {
#line 506 "modecheck_conj.m"
                      parse_tree__set_of_var__union_3_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, check_hlds__modecheck_conj__NonSolverNonLocals_47, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87);
                    }
#line 508 "modecheck_conj.m"
                    {
#line 508 "modecheck_conj.m"
                      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__ThenGoal_40, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2, &check_hlds__modecheck_conj__env);
                    }
#line 498 "modecheck_conj.m"
                  }
#line 461 "modecheck_conj.m"
                  break;
#line 461 "modecheck_conj.m"
              }
#line 461 "modecheck_conj.m"
              break;
#line 461 "modecheck_conj.m"
          }
#line 438 "modecheck_conj.m"
        }
#line 438 "modecheck_conj.m"
        break;
#line 438 "modecheck_conj.m"
      }
#line 434 "modecheck_conj.m"
  }
#line 434 "modecheck_conj.m"
}

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 431 "modecheck_conj.m"
{
#line 431 "modecheck_conj.m"
  {
#line 431 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 431 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74));
#line 431 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76));
#line 431 "modecheck_conj.m"
    {
#line 431 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr);
#line 431 "modecheck_conj.m"
      return;
    }
#line 431 "modecheck_conj.m"
  }
#line 431 "modecheck_conj.m"
}

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2(
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 431 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 431 "modecheck_conj.m"
{
#line 431 "modecheck_conj.m"
  {
#line 431 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s check_hlds__modecheck_conj__env;

#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3 = check_hlds__modecheck_conj__wrapper_arg_3;
#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5 = check_hlds__modecheck_conj__wrapper_arg_5;
#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont = check_hlds__modecheck_conj__cont;
#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 431 "modecheck_conj.m"
    {
#line 431 "modecheck_conj.m"
      MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 431 "modecheck_conj.m"
      {
#line 431 "modecheck_conj.m"
        check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_4), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1, &check_hlds__modecheck_conj__env);
      }
#line 431 "modecheck_conj.m"
    }
#line 431 "modecheck_conj.m"
  }
#line 431 "modecheck_conj.m"
}

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 431 "modecheck_conj.m"
{
#line 431 "modecheck_conj.m"
  {
#line 431 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 431 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12) = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12);
#line 431 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14) = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14);
#line 431 "modecheck_conj.m"
    {
#line 431 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr);
#line 431 "modecheck_conj.m"
      return;
    }
#line 431 "modecheck_conj.m"
  }
#line 431 "modecheck_conj.m"
}

#line 426 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0(
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goals_8,
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11,
#line 426 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12,
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13,
#line 426 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14,
#line 426 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 426 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 426 "modecheck_conj.m"
{
#line 426 "modecheck_conj.m"
  {
#line 426 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 426 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12;
#line 426 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14;
#line 426 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont = check_hlds__modecheck_conj__cont;
#line 426 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 430 "modecheck_conj.m"
    {
#line 430 "modecheck_conj.m"
      MR_bool check_hlds__modecheck_conj__succeeded;
#line 430 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__TypeInfo_24_24 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1];
#line 430 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__V_15_15;

#line 431 "modecheck_conj.m"
      {
#line 431 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 431 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_4[0]));
#line 431 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 1) = ((MR_Box) (check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2));
#line 431 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeInfo_7));
#line 431 "modecheck_conj.m"
      }
#line 431 "modecheck_conj.m"
      {
#line 431 "modecheck_conj.m"
        mercury__list__foldl2_6_p_7((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__TypeInfo_24_24, check_hlds__modecheck_conj__TypeInfo_24_24, check_hlds__modecheck_conj__V_15_15, check_hlds__modecheck_conj__Goals_8, ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11)), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12, ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13)), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14, check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3, &check_hlds__modecheck_conj__env);
      }
#line 430 "modecheck_conj.m"
    }
#line 426 "modecheck_conj.m"
  }
#line 426 "modecheck_conj.m"
}

#line 393 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(
#line 393 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1)
#line 393 "modecheck_conj.m"
{
#line 396 "modecheck_conj.m"
  while (MR_TRUE)
#line 396 "modecheck_conj.m"
    {
#line 396 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 396 "modecheck_conj.m"
      {
#line 396 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;
#line 396 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__HeadVar__2_2;

#line 396 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "modecheck_conj.m"
          check_hlds__modecheck_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "modecheck_conj.m"
        else
#line 397 "modecheck_conj.m"
          {
#line 397 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Var_3;
#line 397 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Inst_4;
#line 397 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__AssocList_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 397 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));

#line 397 "modecheck_conj.m"
            check_hlds__modecheck_conj__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_7_7, (MR_Integer) 0)));
#line 397 "modecheck_conj.m"
            check_hlds__modecheck_conj__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_7_7, (MR_Integer) 1)));
#line 400 "modecheck_conj.m"
            if ((check_hlds__modecheck_conj__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 400 "modecheck_conj.m"
            else
#line 400 "modecheck_conj.m"
            if (((MR_tag((MR_Word) check_hlds__modecheck_conj__Inst_4)) == (MR_mktag((MR_Integer) 1))))
#line 400 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 400 "modecheck_conj.m"
            else
#line 400 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_FALSE;
#line 397 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 403 "modecheck_conj.m"
              {
#line 403 "modecheck_conj.m"
                /* direct tailcall eliminated */
#line 403 "modecheck_conj.m"
                {
#line 403 "modecheck_conj.m"
                  MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__AssocList_5;

#line 403 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 403 "modecheck_conj.m"
                }
#line 403 "modecheck_conj.m"
                continue;
#line 403 "modecheck_conj.m"
              }
#line 397 "modecheck_conj.m"
            else
#line 405 "modecheck_conj.m"
              {
#line 405 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_8_8;

#line 405 "modecheck_conj.m"
                {
#line 405 "modecheck_conj.m"
                  check_hlds__modecheck_conj__V_8_8 = check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(check_hlds__modecheck_conj__AssocList_5);
                }
#line 405 "modecheck_conj.m"
                {
#line 405 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "modecheck_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__modecheck_conj__Var_3));
#line 405 "modecheck_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__modecheck_conj__V_8_8));
#line 405 "modecheck_conj.m"
                }
#line 405 "modecheck_conj.m"
              }
#line 397 "modecheck_conj.m"
          }
#line 396 "modecheck_conj.m"
        return check_hlds__modecheck_conj__HeadVar__2_2;
#line 396 "modecheck_conj.m"
      }
#line 396 "modecheck_conj.m"
      break;
#line 396 "modecheck_conj.m"
    }
#line 393 "modecheck_conj.m"
}

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 431 "modecheck_conj.m"
{
#line 431 "modecheck_conj.m"
  {
#line 431 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 431 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74));
#line 431 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76));
#line 431 "modecheck_conj.m"
    {
#line 431 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr);
#line 431 "modecheck_conj.m"
      return;
    }
#line 431 "modecheck_conj.m"
  }
#line 431 "modecheck_conj.m"
}

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3(
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 431 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 431 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 431 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 431 "modecheck_conj.m"
{
#line 431 "modecheck_conj.m"
  {
#line 431 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s check_hlds__modecheck_conj__env;

#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3 = check_hlds__modecheck_conj__wrapper_arg_3;
#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5 = check_hlds__modecheck_conj__wrapper_arg_5;
#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont = check_hlds__modecheck_conj__cont;
#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 431 "modecheck_conj.m"
    {
#line 431 "modecheck_conj.m"
      MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 431 "modecheck_conj.m"
      {
#line 431 "modecheck_conj.m"
        check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_4), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2, &check_hlds__modecheck_conj__env);
      }
#line 431 "modecheck_conj.m"
    }
#line 431 "modecheck_conj.m"
  }
#line 431 "modecheck_conj.m"
}

#line 332 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_1(
#line 332 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 332 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 332 "modecheck_conj.m"
{
#line 332 "modecheck_conj.m"
  {
#line 332 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__wrapper_arg_2;
#line 332 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;
#line 332 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__conv0_Goal_5;

#line 332 "modecheck_conj.m"
    {
#line 332 "modecheck_conj.m"
      check_hlds__modecheck_conj__conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 332 "modecheck_conj.m"
    check_hlds__modecheck_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_conj__conv0_Goal_5));
#line 332 "modecheck_conj.m"
    return check_hlds__modecheck_conj__wrapper_arg_2;
#line 332 "modecheck_conj.m"
  }
#line 332 "modecheck_conj.m"
}

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 431 "modecheck_conj.m"
{
#line 431 "modecheck_conj.m"
  {
#line 431 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 431 "modecheck_conj.m"
    MR_builtin_longjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0, 1);
#line 431 "modecheck_conj.m"
  }
#line 431 "modecheck_conj.m"
}

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 431 "modecheck_conj.m"
{
#line 431 "modecheck_conj.m"
  {
#line 431 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57);
#line 431 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58);
#line 431 "modecheck_conj.m"
    {
#line 431 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(check_hlds__modecheck_conj__env_ptr);
#line 431 "modecheck_conj.m"
      return;
    }
#line 431 "modecheck_conj.m"
  }
#line 431 "modecheck_conj.m"
}

#line 431 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(
#line 431 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 431 "modecheck_conj.m"
{
#line 431 "modecheck_conj.m"
  {
#line 431 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 431 "modecheck_conj.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0) == 0)
#line 431 "modecheck_conj.m"
      {
#line 431 "modecheck_conj.m"
        {
#line 431 "modecheck_conj.m"
          mercury__list__foldl2_6_p_7((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17, ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20)), &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57, ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56)), &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5, check_hlds__modecheck_conj__env_ptr);
        }
#line 431 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_FALSE;
#line 431 "modecheck_conj.m"
      }
#line 431 "modecheck_conj.m"
    else
#line 431 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 431 "modecheck_conj.m"
  }
#line 431 "modecheck_conj.m"
}

#line 352 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(
#line 352 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 352 "modecheck_conj.m"
{
#line 352 "modecheck_conj.m"
  {
#line 352 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 352 "modecheck_conj.m"
    MR_builtin_longjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1, 1);
#line 352 "modecheck_conj.m"
  }
#line 352 "modecheck_conj.m"
}

#line 352 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8(
#line 352 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 352 "modecheck_conj.m"
{
#line 352 "modecheck_conj.m"
  {
#line 352 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 352 "modecheck_conj.m"
    {
#line 356 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__VarType_25;

#line 356 "modecheck_conj.m"
      {
#line 356 "modecheck_conj.m"
        hlds__vartypes__lookup_var_type_3_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24, &check_hlds__modecheck_conj__VarType_25);
      }
#line 357 "modecheck_conj.m"
      {
#line 357 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22, check_hlds__modecheck_conj__VarType_25);
      }
#line 354 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded);
#line 354 "modecheck_conj.m"
      if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 354 "modecheck_conj.m"
        {
#line 354 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(check_hlds__modecheck_conj__env_ptr);
#line 354 "modecheck_conj.m"
          return;
        }
#line 352 "modecheck_conj.m"
    }
#line 352 "modecheck_conj.m"
  }
#line 352 "modecheck_conj.m"
}

#line 352 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(
#line 352 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 352 "modecheck_conj.m"
{
#line 352 "modecheck_conj.m"
  {
#line 352 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 352 "modecheck_conj.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1) == 0)
#line 352 "modecheck_conj.m"
      {
#line 353 "modecheck_conj.m"
        {
#line 353 "modecheck_conj.m"
          parse_tree__set_of_var__member_2_p_1((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8, check_hlds__modecheck_conj__env_ptr);
        }
#line 352 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_FALSE;
#line 352 "modecheck_conj.m"
      }
#line 352 "modecheck_conj.m"
    else
#line 352 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 352 "modecheck_conj.m"
  }
#line 352 "modecheck_conj.m"
}

#line 312 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(
#line 312 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 312 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 312 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 312 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 312 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33,
#line 312 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34,
#line 312 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35,
#line 312 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36)
#line 312 "modecheck_conj.m"
{
#line 312 "modecheck_conj.m"
  {
#line 312 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 322 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 322 "modecheck_conj.m"
      {
#line 323 "modecheck_conj.m"
        *check_hlds__modecheck_conj__DelayedGoals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 324 "modecheck_conj.m"
        *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33;
#line 322 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35;
#line 322 "modecheck_conj.m"
      }
#line 322 "modecheck_conj.m"
    else
#line 382 "modecheck_conj.m"
      {
#line 332 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__InstMap_18;
#line 332 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__VarInsts_19;
#line 332 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_38_38;
#line 420 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_12_59;

#line 332 "modecheck_conj.m"
        {
#line 332 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__modecheck_conj_scalar_common_3[0], check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 336 "modecheck_conj.m"
        {
#line 336 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_conj__InstMap_18);
        }
#line 337 "modecheck_conj.m"
        {
#line 337 "modecheck_conj.m"
          hlds__instmap__instmap_to_assoc_list_2_p_0(check_hlds__modecheck_conj__InstMap_18, &check_hlds__modecheck_conj__VarInsts_19);
        }
#line 3600 "check_hlds.modecheck_conj.c"
        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 339 "modecheck_conj.m"
        {
#line 339 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_38_38 = check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(check_hlds__modecheck_conj__VarInsts_19);
        }
#line 338 "modecheck_conj.m"
        {
#line 338 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49, check_hlds__modecheck_conj__V_38_38);
        }
#line 3612 "check_hlds.modecheck_conj.c"
        check_hlds__modecheck_conj__TypeCtorInfo_12_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 421 "modecheck_conj.m"
        {
#line 421 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56 = parse_tree__set_of_var__init_0_f_0(check_hlds__modecheck_conj__TypeCtorInfo_12_59);
        }
#line 3619 "check_hlds.modecheck_conj.c"
        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1];
#line 431 "modecheck_conj.m"
        {
#line 431 "modecheck_conj.m"
          MR_Word base;
#line 431 "modecheck_conj.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 431 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68 = base;
#line 431 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_4[0]));
#line 431 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3));
#line 431 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35));
#line 431 "modecheck_conj.m"
        }
#line 431 "modecheck_conj.m"
        {
#line 431 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(&check_hlds__modecheck_conj__env);
        }
#line 420 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 420 "modecheck_conj.m"
          {
#line 424 "modecheck_conj.m"
            {
#line 424 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21 = parse_tree__set_of_var__difference_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_12_59, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57);
            }
#line 424 "modecheck_conj.m"
            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 420 "modecheck_conj.m"
          }
#line 332 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 332 "modecheck_conj.m"
          {
#line 350 "modecheck_conj.m"
            {
#line 350 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22);
            }
#line 351 "modecheck_conj.m"
            {
#line 351 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23);
            }
#line 352 "modecheck_conj.m"
            {
#line 352 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(&check_hlds__modecheck_conj__env);
            }
#line 352 "modecheck_conj.m"
            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded);
#line 332 "modecheck_conj.m"
            if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 360 "modecheck_conj.m"
              {
#line 360 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35);
              }
#line 332 "modecheck_conj.m"
          }
#line 382 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 365 "modecheck_conj.m"
          {
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__CandidateInitVarList_26;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__InitGoals_27;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals1_28;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo0_29;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo1_30;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo2_31;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo3_32;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41;
#line 365 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;

#line 364 "modecheck_conj.m"
            {
#line 364 "modecheck_conj.m"
              check_hlds__modecheck_conj__CandidateInitVarList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21);
            }
#line 366 "modecheck_conj.m"
            {
#line 366 "modecheck_conj.m"
              check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_conj__CandidateInitVarList_26, &check_hlds__modecheck_conj__InitGoals_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39);
            }
#line 368 "modecheck_conj.m"
            {
#line 368 "modecheck_conj.m"
              check_hlds__modecheck_conj__Goals1_28 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__InitGoals_27, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17);
            }
#line 370 "modecheck_conj.m"
            {
#line 370 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__DelayInfo0_29);
            }
#line 371 "modecheck_conj.m"
            {
#line 371 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_29, &check_hlds__modecheck_conj__DelayInfo1_30);
            }
#line 372 "modecheck_conj.m"
            {
#line 372 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_30, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
            }
#line 374 "modecheck_conj.m"
            {
#line 374 "modecheck_conj.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__InitGoals_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41);
            }
#line 376 "modecheck_conj.m"
            {
#line 376 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__Goals1_28, check_hlds__modecheck_conj__Goals_12, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43);
            }
#line 379 "modecheck_conj.m"
            {
#line 379 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__modecheck_conj__DelayInfo2_31);
            }
#line 380 "modecheck_conj.m"
            {
#line 380 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_31, check_hlds__modecheck_conj__DelayedGoals_11, &check_hlds__modecheck_conj__DelayInfo3_32);
            }
#line 381 "modecheck_conj.m"
            {
#line 381 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_32, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36);
#line 381 "modecheck_conj.m"
              return;
            }
#line 365 "modecheck_conj.m"
          }
#line 382 "modecheck_conj.m"
        else
#line 384 "modecheck_conj.m"
          {
#line 384 "modecheck_conj.m"
            *check_hlds__modecheck_conj__DelayedGoals_11 = check_hlds__modecheck_conj__DelayedGoals0_10;
#line 385 "modecheck_conj.m"
            *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35;
#line 384 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33;
#line 384 "modecheck_conj.m"
          }
#line 382 "modecheck_conj.m"
      }
#line 312 "modecheck_conj.m"
  }
#line 312 "modecheck_conj.m"
}

#line 137 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(
#line 137 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 137 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 137 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__3_3,
#line 137 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4,
#line 137 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5,
#line 137 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6,
#line 137 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7)
#line 137 "modecheck_conj.m"
{
#line 142 "modecheck_conj.m"
  while (MR_TRUE)
#line 142 "modecheck_conj.m"
    {
#line 142 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 142 "modecheck_conj.m"
      {
#line 142 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 142 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "modecheck_conj.m"
          {
#line 142 "modecheck_conj.m"
            *check_hlds__modecheck_conj__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 143 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6;
#line 143 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4;
#line 142 "modecheck_conj.m"
          }
#line 142 "modecheck_conj.m"
        else
#line 145 "modecheck_conj.m"
          {
#line 145 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ConjGoals_21;
#line 147 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_59_59;
#line 147 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_60_60;
#line 147 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_22_22;

#line 148 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__1_1 == (MR_Integer) 0);
#line 147 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 147 "modecheck_conj.m"
              {
#line 147 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal0_16, (MR_Integer) 0)));
#line 147 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal0_16, (MR_Integer) 1)));
#line 147 "modecheck_conj.m"
                check_hlds__modecheck_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_conj__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 147 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 147 "modecheck_conj.m"
                  {
#line 147 "modecheck_conj.m"
                    check_hlds__modecheck_conj__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_59_59, (MR_Integer) 1)));
#line 147 "modecheck_conj.m"
                    check_hlds__modecheck_conj__ConjGoals_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_59_59, (MR_Integer) 2)));
#line 147 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__V_60_60 == (MR_Integer) 0);
#line 147 "modecheck_conj.m"
                  }
#line 147 "modecheck_conj.m"
              }
#line 153 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 150 "modecheck_conj.m"
              {
#line 150 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goals1_23;

#line 150 "modecheck_conj.m"
                {
#line 150 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Goals1_23 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__ConjGoals_21, check_hlds__modecheck_conj__Goals0_17);
                }
#line 151 "modecheck_conj.m"
                /* direct tailcall eliminated */
#line 151 "modecheck_conj.m"
                {
#line 151 "modecheck_conj.m"
                  MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Goals1_23;

#line 151 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 151 "modecheck_conj.m"
                }
#line 151 "modecheck_conj.m"
                continue;
#line 150 "modecheck_conj.m"
              }
#line 153 "modecheck_conj.m"
            else
#line 159 "modecheck_conj.m"
              {
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_93_93;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Purity_24;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Impure_25;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__ScheduledSolverGoals_26;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__InstMap0_27;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo0_28;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__NonLocalVars_29;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goal_30;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Errors_31;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo1_34;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__WokenGoals_43;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo_44;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__InstMap_49;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goals2_50;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_65_65;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84;
#line 159 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goals1_91;

#line 159 "modecheck_conj.m"
                {
#line 159 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Purity_24 = hlds__hlds_goal__goal_get_purity_1_f_0(check_hlds__modecheck_conj__Goal0_16);
                }
#line 165 "modecheck_conj.m"
#line 165 "modecheck_conj.m"
                switch (check_hlds__modecheck_conj__Purity_24) {
#line 165 "modecheck_conj.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 165 "modecheck_conj.m"
                  case (MR_Integer) 2:
#line 161 "modecheck_conj.m"
                    {
#line 162 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Impure_25 = (MR_Integer) 1;
#line 163 "modecheck_conj.m"
                      {
#line 163 "modecheck_conj.m"
                        check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(check_hlds__modecheck_conj__Goal0_16, &check_hlds__modecheck_conj__ScheduledSolverGoals_26, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64);
                      }
#line 161 "modecheck_conj.m"
                    }
#line 165 "modecheck_conj.m"
                    break;
#line 165 "modecheck_conj.m"
                  case (MR_Integer) 0:
#line 165 "modecheck_conj.m"
                  case (MR_Integer) 1:
#line 168 "modecheck_conj.m"
                    {
#line 169 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Impure_25 = (MR_Integer) 0;
#line 170 "modecheck_conj.m"
                      check_hlds__modecheck_conj__ScheduledSolverGoals_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 168 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_4;
#line 168 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_6;
#line 168 "modecheck_conj.m"
                    }
#line 165 "modecheck_conj.m"
                    break;
#line 165 "modecheck_conj.m"
                }
#line 174 "modecheck_conj.m"
                {
#line 174 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_conj__InstMap0_27);
                }
#line 175 "modecheck_conj.m"
                {
#line 175 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_conj__DelayInfo0_28);
                }
#line 179 "modecheck_conj.m"
                {
#line 179 "modecheck_conj.m"
                  check_hlds__modecheck_conj__NonLocalVars_29 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_conj__Goal0_16);
                }
#line 180 "modecheck_conj.m"
                {
#line 180 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_conj__NonLocalVars_29, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_65_65);
                }
#line 181 "modecheck_conj.m"
                {
#line 181 "modecheck_conj.m"
                  check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_conj__Goal0_16, &check_hlds__modecheck_conj__Goal_30, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_65_65, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66);
                }
#line 186 "modecheck_conj.m"
                {
#line 186 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_conj__Errors_31);
                }
#line 209 "modecheck_conj.m"
                if ((check_hlds__modecheck_conj__Errors_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "modecheck_conj.m"
                  {
#line 211 "modecheck_conj.m"
                    {
#line 211 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_conj__DelayInfo1_34);
                    }
#line 210 "modecheck_conj.m"
                    check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63;
#line 210 "modecheck_conj.m"
                    check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66;
#line 210 "modecheck_conj.m"
                  }
#line 209 "modecheck_conj.m"
                else
#line 188 "modecheck_conj.m"
                  {
#line 188 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__FirstErrorInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Errors_31, (MR_Integer) 0)));
#line 188 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68;
#line 188 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_69_69;
#line 188 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Errors_31, (MR_Integer) 1)));

#line 189 "modecheck_conj.m"
                    {
#line 189 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68);
                    }
#line 190 "modecheck_conj.m"
                    {
#line 190 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_conj__InstMap0_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_69_69);
                    }
#line 191 "modecheck_conj.m"
                    {
#line 191 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_conj__NonLocalVars_29, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70);
                    }
#line 192 "modecheck_conj.m"
                    {
#line 192 "modecheck_conj.m"
                      check_hlds__delay_info__delay_info_delay_goal_4_p_0(check_hlds__modecheck_conj__FirstErrorInfo_32, check_hlds__modecheck_conj__Goal0_16, check_hlds__modecheck_conj__DelayInfo0_28, &check_hlds__modecheck_conj__DelayInfo1_34);
                    }
#line 206 "modecheck_conj.m"
#line 206 "modecheck_conj.m"
                    switch (check_hlds__modecheck_conj__Impure_25) {
#line 206 "modecheck_conj.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 206 "modecheck_conj.m"
                      case (MR_Integer) 0:
#line 207 "modecheck_conj.m"
                        check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63;
#line 206 "modecheck_conj.m"
                        break;
#line 206 "modecheck_conj.m"
                      case (MR_Integer) 1:
#line 196 "modecheck_conj.m"
                        {
#line 196 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__Vars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_32, (MR_Integer) 0)));
#line 196 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ImpureError_39;
#line 196 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__Context_40;
#line 196 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ModeContext_41;
#line 196 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ImpureErrorInfo_42;
#line 196 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_71_71;
#line 196 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_72_72;
#line 197 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_32, (MR_Integer) 1)));
#line 197 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_32, (MR_Integer) 2)));
#line 197 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_32, (MR_Integer) 3)));

#line 199 "modecheck_conj.m"
                          {
#line 199 "modecheck_conj.m"
                            check_hlds__modecheck_conj__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 199 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_72_72, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_35));
#line 199 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_72_72, 1) = ((MR_Box) (check_hlds__modecheck_conj__FirstErrorInfo_32));
#line 199 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_72_72, 2) = ((MR_Box) (check_hlds__modecheck_conj__Goal0_16));
#line 199 "modecheck_conj.m"
                          }
#line 199 "modecheck_conj.m"
                          {
#line 199 "modecheck_conj.m"
                            check_hlds__modecheck_conj__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_71_71, 0) = ((MR_Box) (check_hlds__modecheck_conj__V_72_72));
#line 199 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "modecheck_conj.m"
                          }
#line 198 "modecheck_conj.m"
                          {
#line 198 "modecheck_conj.m"
                            check_hlds__modecheck_conj__ImpureError_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 198 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 198 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_39, 1) = ((MR_Box) (check_hlds__modecheck_conj__V_71_71));
#line 198 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "modecheck_conj.m"
                          }
#line 201 "modecheck_conj.m"
                          {
#line 201 "modecheck_conj.m"
                            check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_conj__Context_40);
                          }
#line 202 "modecheck_conj.m"
                          {
#line 202 "modecheck_conj.m"
                            check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_conj__ModeContext_41);
                          }
#line 203 "modecheck_conj.m"
                          {
#line 203 "modecheck_conj.m"
                            check_hlds__modecheck_conj__ImpureErrorInfo_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_42, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_35));
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_42, 1) = ((MR_Box) (check_hlds__modecheck_conj__ImpureError_39));
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_42, 2) = ((MR_Box) (check_hlds__modecheck_conj__Context_40));
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_42, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeContext_41));
#line 203 "modecheck_conj.m"
                          }
#line 205 "modecheck_conj.m"
                          {
#line 205 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75, 0) = ((MR_Box) (check_hlds__modecheck_conj__ImpureErrorInfo_42));
#line 205 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75, 1) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_63_63));
#line 205 "modecheck_conj.m"
                          }
#line 196 "modecheck_conj.m"
                        }
#line 206 "modecheck_conj.m"
                        break;
#line 206 "modecheck_conj.m"
                    }
#line 188 "modecheck_conj.m"
                  }
#line 216 "modecheck_conj.m"
                {
#line 216 "modecheck_conj.m"
                  check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&check_hlds__modecheck_conj__WokenGoals_43, check_hlds__modecheck_conj__DelayInfo1_34, &check_hlds__modecheck_conj__DelayInfo_44);
                }
#line 4197 "check_hlds.modecheck_conj.c"
                check_hlds__modecheck_conj__TypeCtorInfo_93_93 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 217 "modecheck_conj.m"
                {
#line 217 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Goals1_91 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__WokenGoals_43, check_hlds__modecheck_conj__Goals0_17);
                }
#line 220 "modecheck_conj.m"
                if ((check_hlds__modecheck_conj__WokenGoals_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "modecheck_conj.m"
                  check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70;
#line 220 "modecheck_conj.m"
                else
#line 220 "modecheck_conj.m"
                  {
#line 220 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__WokenGoals_43, (MR_Integer) 1)));
#line 221 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__WokenGoals_43, (MR_Integer) 0)));

#line 220 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "modecheck_conj.m"
                      {
#line 222 "modecheck_conj.m"
                        {
#line 222 "modecheck_conj.m"
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goal", check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83);
                        }
#line 221 "modecheck_conj.m"
                      }
#line 220 "modecheck_conj.m"
                    else
#line 224 "modecheck_conj.m"
                      {
#line 225 "modecheck_conj.m"
                        {
#line 225 "modecheck_conj.m"
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goals", check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83);
                        }
#line 224 "modecheck_conj.m"
                      }
#line 220 "modecheck_conj.m"
                  }
#line 227 "modecheck_conj.m"
                {
#line 227 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo_44, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_83_83, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84);
                }
#line 228 "modecheck_conj.m"
                {
#line 228 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modecheck_conj__InstMap_49);
                }
#line 229 "modecheck_conj.m"
                {
#line 229 "modecheck_conj.m"
                  check_hlds__modecheck_conj__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_conj__InstMap_49);
                }
#line 235 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 233 "modecheck_conj.m"
                  {
#line 233 "modecheck_conj.m"
                    {
#line 233 "modecheck_conj.m"
                      check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_conj__Goals1_91, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7);
                    }
#line 234 "modecheck_conj.m"
                    check_hlds__modecheck_conj__Goals2_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 233 "modecheck_conj.m"
                    *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75;
#line 233 "modecheck_conj.m"
                  }
#line 235 "modecheck_conj.m"
                else
#line 237 "modecheck_conj.m"
                  {
#line 237 "modecheck_conj.m"
                    check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(check_hlds__modecheck_conj__HeadVar__1_1, check_hlds__modecheck_conj__Goals1_91, &check_hlds__modecheck_conj__Goals2_50, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_75_75, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_5, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_84_84, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_7);
                  }
#line 244 "modecheck_conj.m"
                if ((check_hlds__modecheck_conj__Errors_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "modecheck_conj.m"
                  {
#line 245 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__SubGoals_53;
#line 250 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_30, (MR_Integer) 0)));
#line 250 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_94_94;
#line 250 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_30, (MR_Integer) 1)));

#line 250 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_conj__V_88_88)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_88_88, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 250 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 250 "modecheck_conj.m"
                      {
#line 250 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_88_88, (MR_Integer) 1)));
#line 250 "modecheck_conj.m"
                        check_hlds__modecheck_conj__SubGoals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_88_88, (MR_Integer) 2)));
#line 250 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__1_1 == check_hlds__modecheck_conj__V_94_94);
#line 250 "modecheck_conj.m"
                      }
#line 245 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 251 "modecheck_conj.m"
                      {
#line 251 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__V_89_89;

#line 251 "modecheck_conj.m"
                        {
#line 251 "modecheck_conj.m"
                          check_hlds__modecheck_conj__V_89_89 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__SubGoals_53, check_hlds__modecheck_conj__Goals2_50);
                        }
#line 251 "modecheck_conj.m"
                        {
#line 251 "modecheck_conj.m"
                          *check_hlds__modecheck_conj__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__ScheduledSolverGoals_26, check_hlds__modecheck_conj__V_89_89);
                        }
#line 251 "modecheck_conj.m"
                      }
#line 245 "modecheck_conj.m"
                    else
#line 253 "modecheck_conj.m"
                      {
#line 253 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__V_90_90;

#line 253 "modecheck_conj.m"
                        {
#line 253 "modecheck_conj.m"
                          check_hlds__modecheck_conj__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "modecheck_conj.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_90_90, 0) = ((MR_Box) (check_hlds__modecheck_conj__Goal_30));
#line 253 "modecheck_conj.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_90_90, 1) = ((MR_Box) (check_hlds__modecheck_conj__Goals2_50));
#line 253 "modecheck_conj.m"
                        }
#line 253 "modecheck_conj.m"
                        {
#line 253 "modecheck_conj.m"
                          *check_hlds__modecheck_conj__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__ScheduledSolverGoals_26, check_hlds__modecheck_conj__V_90_90);
                        }
#line 253 "modecheck_conj.m"
                      }
#line 245 "modecheck_conj.m"
                  }
#line 244 "modecheck_conj.m"
                else
#line 243 "modecheck_conj.m"
                  {
#line 243 "modecheck_conj.m"
                    *check_hlds__modecheck_conj__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_93_93, check_hlds__modecheck_conj__ScheduledSolverGoals_26, check_hlds__modecheck_conj__Goals2_50);
                  }
#line 159 "modecheck_conj.m"
              }
#line 145 "modecheck_conj.m"
          }
#line 142 "modecheck_conj.m"
      }
#line 142 "modecheck_conj.m"
      break;
#line 142 "modecheck_conj.m"
    }
#line 137 "modecheck_conj.m"
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
#line 59 "modecheck_conj.m"
  {
#line 59 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__TypeCtorInfo_57_57;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__OldErrors_10;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__OldMayInit_11;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo0_12;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo1_13;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__LiveVars1_14;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_15;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RevImpurityErrors0_16;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo2_17;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals0_18;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo3_19;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals2_20;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals_21;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RevImpurityErrors_22;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NewErrors_23;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Errors_24;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals0_69;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_70;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_71;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_72;
#line 59 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_73;

#line 60 "modecheck_conj.m"
    {
#line 60 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_conj__OldErrors_10);
    }
#line 61 "modecheck_conj.m"
    {
#line 61 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 63 "modecheck_conj.m"
    {
#line 63 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__OldMayInit_11);
    }
#line 65 "modecheck_conj.m"
    {
#line 65 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__DelayInfo0_12);
    }
#line 66 "modecheck_conj.m"
    {
#line 66 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_12, &check_hlds__modecheck_conj__DelayInfo1_13);
    }
#line 67 "modecheck_conj.m"
    {
#line 67 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_13, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41);
    }
#line 69 "modecheck_conj.m"
    {
#line 69 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__LiveVars1_14);
    }
#line 70 "modecheck_conj.m"
    {
#line 70 "modecheck_conj.m"
      check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__Goals0_7, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42);
    }
#line 74 "modecheck_conj.m"
    {
#line 74 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 1, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44);
    }
#line 76 "modecheck_conj.m"
    {
#line 76 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_7_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__Goals0_7, &check_hlds__modecheck_conj__Goals1_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_conj__RevImpurityErrors0_16, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46);
    }
#line 79 "modecheck_conj.m"
    {
#line 79 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_conj__DelayInfo2_17);
    }
#line 80 "modecheck_conj.m"
    {
#line 80 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_17, &check_hlds__modecheck_conj__DelayedGoals0_18, &check_hlds__modecheck_conj__DelayInfo3_19);
    }
#line 81 "modecheck_conj.m"
    {
#line 81 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_19, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47);
    }
#line 275 "modecheck_conj.m"
    {
#line 275 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__DelayedGoals0_18, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_71, &check_hlds__modecheck_conj__Goals0_69, check_hlds__modecheck_conj__RevImpurityErrors0_16, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_72, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_73);
    }
#line 280 "modecheck_conj.m"
    {
#line 280 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_71, &check_hlds__modecheck_conj__DelayedGoals_21, &check_hlds__modecheck_conj__Goals1_70, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_72, &check_hlds__modecheck_conj__RevImpurityErrors_22, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_73, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48);
    }
#line 282 "modecheck_conj.m"
    {
#line 282 "modecheck_conj.m"
      check_hlds__modecheck_conj__Goals2_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals0_69, check_hlds__modecheck_conj__Goals1_70);
    }
#line 89 "modecheck_conj.m"
    {
#line 89 "modecheck_conj.m"
      *check_hlds__modecheck_conj__Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals1_15, check_hlds__modecheck_conj__Goals2_20);
    }
#line 91 "modecheck_conj.m"
    {
#line 91 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_conj__NewErrors_23);
    }
#line 4540 "check_hlds.modecheck_conj.c"
    check_hlds__modecheck_conj__TypeCtorInfo_57_57 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
#line 92 "modecheck_conj.m"
    {
#line 92 "modecheck_conj.m"
      check_hlds__modecheck_conj__Errors_24 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__OldErrors_10, check_hlds__modecheck_conj__NewErrors_23);
    }
#line 93 "modecheck_conj.m"
    {
#line 93 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_conj__Errors_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49);
    }
#line 105 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "modecheck_conj.m"
      {
#line 97 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ImpurityErrors_25;
#line 97 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Errors5_26;
#line 97 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Errors6_27;

#line 101 "modecheck_conj.m"
        {
#line 101 "modecheck_conj.m"
          mercury__list__reverse_2_p_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__RevImpurityErrors_22, &check_hlds__modecheck_conj__ImpurityErrors_25);
        }
#line 102 "modecheck_conj.m"
        {
#line 102 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__Errors5_26);
        }
#line 103 "modecheck_conj.m"
        {
#line 103 "modecheck_conj.m"
          check_hlds__modecheck_conj__Errors6_27 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__Errors5_26, check_hlds__modecheck_conj__ImpurityErrors_25);
        }
#line 104 "modecheck_conj.m"
        {
#line 104 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_conj__Errors6_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
        }
#line 97 "modecheck_conj.m"
      }
#line 105 "modecheck_conj.m"
    else
#line 106 "modecheck_conj.m"
      {
#line 106 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__FirstDelayedGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 0)));
#line 106 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__MoreDelayedGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 1)));
#line 106 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50;

#line 110 "modecheck_conj.m"
        {
#line 110 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__modecheck_conj__LiveVars1_14, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50);
        }
#line 115 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__MoreDelayedGoals_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 112 "modecheck_conj.m"
          {
#line 112 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 1)));
#line 113 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___DVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 0)));
#line 113 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___DGoal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 2)));

#line 114 "modecheck_conj.m"
            {
#line 114 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_add_error_3_p_0(check_hlds__modecheck_conj__Error_31, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
            }
#line 112 "modecheck_conj.m"
          }
#line 115 "modecheck_conj.m"
        else
#line 116 "modecheck_conj.m"
          {
#line 116 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars_35;
#line 116 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModeError_36;
#line 116 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_80_80;
#line 116 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars1_83;
#line 116 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Rest_86;
#line 116 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars2_89;
#line 116 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_90_90;
#line 740 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_84_84;
#line 740 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_85_85;

#line 734 "modecheck_conj.m"
            {
#line 734 "modecheck_conj.m"
              check_hlds__modecheck_conj__V_80_80 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 740 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 0)));
#line 740 "modecheck_conj.m"
            check_hlds__modecheck_conj__Rest_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 1)));
#line 740 "modecheck_conj.m"
            check_hlds__modecheck_conj__Vars1_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_90_90, (MR_Integer) 0)));
#line 740 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_90_90, (MR_Integer) 1)));
#line 740 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_90_90, (MR_Integer) 2)));
#line 741 "modecheck_conj.m"
            {
#line 741 "modecheck_conj.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_80_80, check_hlds__modecheck_conj__Vars1_83, &check_hlds__modecheck_conj__Vars2_89);
            }
#line 742 "modecheck_conj.m"
            {
#line 742 "modecheck_conj.m"
              check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(check_hlds__modecheck_conj__Rest_86, check_hlds__modecheck_conj__Vars2_89, &check_hlds__modecheck_conj__Vars_35);
            }
#line 118 "modecheck_conj.m"
            {
#line 118 "modecheck_conj.m"
              check_hlds__modecheck_conj__ModeError_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 118 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 118 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 1) = ((MR_Box) (check_hlds__modecheck_conj__DelayedGoals_21));
#line 118 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 118 "modecheck_conj.m"
            }
#line 119 "modecheck_conj.m"
            {
#line 119 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_conj__Vars_35, check_hlds__modecheck_conj__ModeError_36, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
            }
#line 116 "modecheck_conj.m"
          }
#line 106 "modecheck_conj.m"
      }
#line 123 "modecheck_conj.m"
    {
#line 123 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(check_hlds__modecheck_conj__OldMayInit_11, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38);
#line 123 "modecheck_conj.m"
      return;
    }
#line 59 "modecheck_conj.m"
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
