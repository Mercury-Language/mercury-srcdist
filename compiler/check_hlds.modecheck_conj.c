/*
** Automatically generated from `modecheck_conj.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
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



#line 430 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s {
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7;
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73;
#line 430 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74;
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 430 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76;
#line 430 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont;
#line 430 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr;
#line 434 "modecheck_conj.m"
  MR_bool check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded;
#line 530 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71;
#line 530 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72;
#line 530 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77;
#line 530 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105;
#line 530 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106;
#line 537 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71;
#line 494 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118;
#line 494 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41;
#line 494 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48;
#line 494 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49;
#line 494 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87;
#line 494 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88;
#line 430 "modecheck_conj.m"
};

#line 427 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s {
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3;
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5;
#line 427 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont;
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr;
#line 427 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74;
#line 427 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76;
#line 427 "modecheck_conj.m"
};

#line 422 "modecheck_conj.m"
struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s {
#line 422 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12;
#line 422 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14;
#line 422 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont;
#line 422 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr;
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12;
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14;
#line 422 "modecheck_conj.m"
};

#line 427 "modecheck_conj.m"
struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s {
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3;
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5;
#line 427 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont;
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr;
#line 427 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74;
#line 427 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76;
#line 427 "modecheck_conj.m"
};

#line 308 "modecheck_conj.m"
struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s {
#line 318 "modecheck_conj.m"
  MR_bool check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded;
#line 378 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17;
#line 378 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21;
#line 328 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49;
#line 328 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20;
#line 328 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22;
#line 328 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23;
#line 416 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56;
#line 416 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57;
#line 416 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58;
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77;
#line 426 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68;
#line 427 "modecheck_conj.m"
  jmp_buf check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0;
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57;
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58;
#line 348 "modecheck_conj.m"
  jmp_buf check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1;
#line 348 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24;
#line 308 "modecheck_conj.m"
};


#line 280 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 283 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 286 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 289 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 292 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 295 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

#line 298 "check_hlds.modecheck_conj.c"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
#line 301 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 303 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2);

#line 306 "check_hlds.modecheck_conj.c"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
#line 309 "check_hlds.modecheck_conj.c"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_1,
#line 311 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 313 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_3);

#line 627 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__627__1_2_p_0(
#line 627 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__OldMayInit_20,
#line 627 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_36);

#line 126 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
#line 126 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__1_1,
#line 126 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 126 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3);

#line 126 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
#line 126 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 126 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2);

#line 740 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
#line 740 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 740 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2,
#line 740 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3);

#line 732 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
#line 732 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 732 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 732 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Vars_3);

#line 711 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
#line 711 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVars_3,
#line 711 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2);

#line 708 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
#line 708 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 708 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 667 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
#line 667 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_7,
#line 667 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_8,
#line 667 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32,
#line 667 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33,
#line 667 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34,
#line 667 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35);

#line 653 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
#line 653 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1);

#line 627 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2(
#line 627 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg);

#line 620 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_1(
#line 620 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 620 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 603 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(
#line 603 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 603 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 603 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 603 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 603 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26,
#line 603 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27,
#line 603 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28,
#line 603 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29);

#line 561 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0(
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3,
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4,
#line 561 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5,
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6,
#line 561 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7);

#line 552 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(
#line 552 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModuleInfo_4,
#line 552 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__VarTypes_5,
#line 552 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Var_6);

#line 501 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1(
#line 501 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 501 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 537 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5(
#line 537 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 530 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(
#line 530 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 494 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3(
#line 494 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 494 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2(
#line 494 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 430 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_8,
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73,
#line 430 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74,
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75,
#line 430 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76,
#line 430 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 430 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2(
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 427 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 422 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0(
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goals_8,
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11,
#line 422 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12,
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13,
#line 422 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14,
#line 422 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 422 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 389 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(
#line 389 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1);

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3(
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 427 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr);

#line 328 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_1(
#line 328 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 328 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 348 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(
#line 348 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 348 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8(
#line 348 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 348 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(
#line 348 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg);

#line 308 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(
#line 308 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 308 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 308 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 308 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 308 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33,
#line 308 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34,
#line 308 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35,
#line 308 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36);

#line 141 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3,
#line 141 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_Goals_4,
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5,
#line 141 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_6,
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7,
#line 141 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_8);


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



#line 792 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 800 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 808 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 817 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 825 "check_hlds.modecheck_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 833 "check_hlds.modecheck_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 841 "check_hlds.modecheck_conj.c"
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

#line 858 "check_hlds.modecheck_conj.c"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
#line 861 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 863 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2)
#line 865 "check_hlds.modecheck_conj.c"
{
#line 867 "check_hlds.modecheck_conj.c"
  {
#line 869 "check_hlds.modecheck_conj.c"
    MR_bool check_hlds__modecheck_conj__succeeded;

#line 872 "check_hlds.modecheck_conj.c"
    {
#line 874 "check_hlds.modecheck_conj.c"
      check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj____Unify____impurity_errors_0_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2));
    }
#line 877 "check_hlds.modecheck_conj.c"
    return check_hlds__modecheck_conj__succeeded;
#line 879 "check_hlds.modecheck_conj.c"
  }
#line 881 "check_hlds.modecheck_conj.c"
}

#line 884 "check_hlds.modecheck_conj.c"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
#line 887 "check_hlds.modecheck_conj.c"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_1,
#line 889 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 891 "check_hlds.modecheck_conj.c"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_3)
#line 893 "check_hlds.modecheck_conj.c"
{
#line 895 "check_hlds.modecheck_conj.c"
  {
#line 897 "check_hlds.modecheck_conj.c"
    MR_Word check_hlds__modecheck_conj__conv0_HeadVar__1_1;

#line 900 "check_hlds.modecheck_conj.c"
    {
#line 902 "check_hlds.modecheck_conj.c"
      check_hlds__modecheck_conj____Compare____impurity_errors_0_0(&check_hlds__modecheck_conj__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_3));
    }
#line 905 "check_hlds.modecheck_conj.c"
    *check_hlds__modecheck_conj__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_conj__conv0_HeadVar__1_1));
#line 907 "check_hlds.modecheck_conj.c"
  }
#line 909 "check_hlds.modecheck_conj.c"
}

#line 627 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__627__1_2_p_0(
#line 627 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__OldMayInit_20,
#line 627 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_36)
#line 627 "modecheck_conj.m"
{
#line 627 "modecheck_conj.m"
  {
#line 627 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__OldMayInit_20 == check_hlds__modecheck_conj__HeadVar__2_36);

#line 627 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 627 "modecheck_conj.m"
  }
#line 627 "modecheck_conj.m"
}

#line 126 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
#line 126 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__HeadVar__1_1,
#line 126 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 126 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3)
#line 126 "modecheck_conj.m"
{
#line 126 "modecheck_conj.m"
  {
#line 126 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 126 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar1_4 = check_hlds__modecheck_conj__HeadVar__2_2;
#line 126 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar2_5 = check_hlds__modecheck_conj__HeadVar__3_3;

#line 126 "modecheck_conj.m"
    {
#line 126 "modecheck_conj.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[2], check_hlds__modecheck_conj__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar2_5)));
#line 126 "modecheck_conj.m"
      return;
    }
#line 126 "modecheck_conj.m"
  }
#line 126 "modecheck_conj.m"
}

#line 126 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
#line 126 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 126 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2)
#line 126 "modecheck_conj.m"
{
#line 126 "modecheck_conj.m"
  {
#line 126 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 126 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar1_3 = check_hlds__modecheck_conj__HeadVar__1_1;
#line 126 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar2_4 = check_hlds__modecheck_conj__HeadVar__2_2;

#line 126 "modecheck_conj.m"
    {
#line 126 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[2], ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar2_4)));
    }
#line 126 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 126 "modecheck_conj.m"
  }
#line 126 "modecheck_conj.m"
}

#line 740 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
#line 740 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 740 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2,
#line 740 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3)
#line 740 "modecheck_conj.m"
{
#line 743 "modecheck_conj.m"
  while (MR_TRUE)
#line 743 "modecheck_conj.m"
    {
#line 743 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 743 "modecheck_conj.m"
      {
#line 743 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 743 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 743 "modecheck_conj.m"
          *check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2;
#line 743 "modecheck_conj.m"
        else
#line 744 "modecheck_conj.m"
          {
#line 744 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayedGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 744 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayedGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 744 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModeErrorInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 1)));
#line 744 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 2)));
#line 744 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15;
#line 745 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___WaitingVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 0)));

#line 746 "modecheck_conj.m"
            {
#line 746 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_delay_goal_4_p_0(check_hlds__modecheck_conj__ModeErrorInfo_11, check_hlds__modecheck_conj__Goal_12, check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15);
            }
#line 747 "modecheck_conj.m"
            /* direct tailcall eliminated */
#line 747 "modecheck_conj.m"
            {
#line 747 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__DelayedGoals_8;
#line 747 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0__tmp_copy_2 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15;

#line 747 "modecheck_conj.m"
              check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0__tmp_copy_2;
#line 747 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 747 "modecheck_conj.m"
            }
#line 747 "modecheck_conj.m"
            continue;
#line 744 "modecheck_conj.m"
          }
#line 743 "modecheck_conj.m"
      }
#line 743 "modecheck_conj.m"
      break;
#line 743 "modecheck_conj.m"
    }
#line 740 "modecheck_conj.m"
}

#line 732 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
#line 732 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 732 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 732 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Vars_3)
#line 732 "modecheck_conj.m"
{
#line 735 "modecheck_conj.m"
  while (MR_TRUE)
#line 735 "modecheck_conj.m"
    {
#line 735 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 735 "modecheck_conj.m"
      {
#line 735 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 735 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 735 "modecheck_conj.m"
          *check_hlds__modecheck_conj__Vars_3 = check_hlds__modecheck_conj__HeadVar__2_2;
#line 735 "modecheck_conj.m"
        else
#line 736 "modecheck_conj.m"
          {
#line 736 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars1_5;
#line 736 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 736 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars2_11;
#line 736 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 736 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_6_6;
#line 736 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_7_7;

#line 736 "modecheck_conj.m"
            check_hlds__modecheck_conj__Vars1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 0)));
#line 736 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 1)));
#line 736 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_12_12, (MR_Integer) 2)));
#line 737 "modecheck_conj.m"
            {
#line 737 "modecheck_conj.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__HeadVar__2_2, check_hlds__modecheck_conj__Vars1_5, &check_hlds__modecheck_conj__Vars2_11);
            }
#line 738 "modecheck_conj.m"
            /* direct tailcall eliminated */
#line 738 "modecheck_conj.m"
            {
#line 738 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__Rest_8;
#line 738 "modecheck_conj.m"
              MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Vars2_11;

#line 738 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 738 "modecheck_conj.m"
              check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 738 "modecheck_conj.m"
            }
#line 738 "modecheck_conj.m"
            continue;
#line 736 "modecheck_conj.m"
          }
#line 735 "modecheck_conj.m"
      }
#line 735 "modecheck_conj.m"
      break;
#line 735 "modecheck_conj.m"
    }
#line 732 "modecheck_conj.m"
}

#line 711 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
#line 711 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVars_3,
#line 711 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2)
#line 711 "modecheck_conj.m"
{
#line 714 "modecheck_conj.m"
  {
#line 714 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 714 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 2)));
#line 714 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Var_7;
#line 714 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RHS_8;
#line 714 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_6, (MR_Integer) 0)));
#line 714 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 714 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 715 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_6, (MR_Integer) 1)));
#line 715 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_9_9;
#line 715 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_10_10;
#line 715 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_11_11;

#line 715 "modecheck_conj.m"
    check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 715 "modecheck_conj.m"
    if (check_hlds__modecheck_conj__succeeded)
#line 715 "modecheck_conj.m"
      {
#line 715 "modecheck_conj.m"
        check_hlds__modecheck_conj__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 0)));
#line 715 "modecheck_conj.m"
        check_hlds__modecheck_conj__RHS_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 1)));
#line 715 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 2)));
#line 715 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 3)));
#line 715 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_13_13, (MR_Integer) 4)));
#line 717 "modecheck_conj.m"
        {
#line 717 "modecheck_conj.m"
          {
#line 717 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0], ((MR_Box) (check_hlds__modecheck_conj__Var_7)), check_hlds__modecheck_conj__HeadVars_3);
          }
#line 717 "modecheck_conj.m"
        }
#line 718 "modecheck_conj.m"
        if (!(check_hlds__modecheck_conj__succeeded))
#line 719 "modecheck_conj.m"
          {
#line 719 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__TypeInfo_16_16;
#line 719 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__OtherVar_12;

#line 719 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__RHS_8)) == (MR_mktag((MR_Integer) 0)));
#line 719 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 719 "modecheck_conj.m"
              {
#line 719 "modecheck_conj.m"
                check_hlds__modecheck_conj__OtherVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__RHS_8, (MR_Integer) 0)));
#line 1229 "check_hlds.modecheck_conj.c"
                check_hlds__modecheck_conj__TypeInfo_16_16 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0];
#line 720 "modecheck_conj.m"
                {
#line 720 "modecheck_conj.m"
                  return check_hlds__modecheck_conj__succeeded = mercury__list__member_2_p_0(check_hlds__modecheck_conj__TypeInfo_16_16, ((MR_Box) (check_hlds__modecheck_conj__OtherVar_12)), check_hlds__modecheck_conj__HeadVars_3);
                }
#line 719 "modecheck_conj.m"
              }
#line 719 "modecheck_conj.m"
          }
#line 715 "modecheck_conj.m"
      }
#line 714 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 714 "modecheck_conj.m"
  }
#line 711 "modecheck_conj.m"
}

#line 708 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
#line 708 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 708 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 708 "modecheck_conj.m"
{
#line 708 "modecheck_conj.m"
  {
#line 708 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 708 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 708 "modecheck_conj.m"
    {
#line 708 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 708 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 708 "modecheck_conj.m"
  }
#line 708 "modecheck_conj.m"
}

#line 667 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
#line 667 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_7,
#line 667 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_8,
#line 667 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32,
#line 667 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33,
#line 667 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34,
#line 667 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35)
#line 667 "modecheck_conj.m"
{
#line 671 "modecheck_conj.m"
  {
#line 671 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo0_11;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals0_12;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo1_13;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__ModuleInfo_14;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__PredId_15;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__PredInfo_16;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__ClausesInfo_17;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__HeadVars_18;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__HeadVarUnificationGoals_19;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo2_22;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo3_23;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo_24;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_47_47;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals0_61;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_62;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64;
#line 671 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65;

#line 672 "modecheck_conj.m"
    {
#line 672 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modecheck_conj__DelayInfo0_11);
    }
#line 673 "modecheck_conj.m"
    {
#line 673 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo0_11, &check_hlds__modecheck_conj__DelayedGoals0_12, &check_hlds__modecheck_conj__DelayInfo1_13);
    }
#line 674 "modecheck_conj.m"
    {
#line 674 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_13, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36);
    }
#line 675 "modecheck_conj.m"
    {
#line 675 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__ModuleInfo_14);
    }
#line 676 "modecheck_conj.m"
    {
#line 676 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__PredId_15);
    }
#line 677 "modecheck_conj.m"
    {
#line 677 "modecheck_conj.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_conj__ModuleInfo_14, check_hlds__modecheck_conj__PredId_15, &check_hlds__modecheck_conj__PredInfo_16);
    }
#line 678 "modecheck_conj.m"
    {
#line 678 "modecheck_conj.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modecheck_conj__PredInfo_16, &check_hlds__modecheck_conj__ClausesInfo_17);
    }
#line 679 "modecheck_conj.m"
    {
#line 679 "modecheck_conj.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__modecheck_conj__ClausesInfo_17, &check_hlds__modecheck_conj__HeadVars_18);
    }
#line 708 "modecheck_conj.m"
    {
#line 708 "modecheck_conj.m"
      check_hlds__modecheck_conj__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 708 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[2]));
#line 708 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 1) = ((MR_Box) (check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1));
#line 708 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "modecheck_conj.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_47_47, 3) = ((MR_Box) (check_hlds__modecheck_conj__HeadVars_18));
#line 708 "modecheck_conj.m"
    }
#line 708 "modecheck_conj.m"
    {
#line 708 "modecheck_conj.m"
      mercury__list__filter_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__modecheck_conj__V_47_47, check_hlds__modecheck_conj__DelayedGoals0_12, &check_hlds__modecheck_conj__HeadVarUnificationGoals_19, &check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20);
    }
#line 271 "modecheck_conj.m"
    {
#line 271 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0((MR_Integer) 0, check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63, &check_hlds__modecheck_conj__Goals0_61, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65);
    }
#line 276 "modecheck_conj.m"
    {
#line 276 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0((MR_Integer) 0, check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_63, &check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, &check_hlds__modecheck_conj__Goals1_62, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_64, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_65, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39);
    }
#line 278 "modecheck_conj.m"
    {
#line 278 "modecheck_conj.m"
      *check_hlds__modecheck_conj__Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals0_61, check_hlds__modecheck_conj__Goals1_62);
    }
#line 685 "modecheck_conj.m"
    {
#line 685 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__DelayInfo2_22);
    }
#line 686 "modecheck_conj.m"
    {
#line 686 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo2_22, &check_hlds__modecheck_conj__DelayInfo3_23);
    }
#line 687 "modecheck_conj.m"
    {
#line 687 "modecheck_conj.m"
      check_hlds__modecheck_conj__redelay_goals_3_p_0(check_hlds__modecheck_conj__HeadVarUnificationGoals_19, check_hlds__modecheck_conj__DelayInfo3_23, &check_hlds__modecheck_conj__DelayInfo_24);
    }
#line 688 "modecheck_conj.m"
    {
#line 688 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35);
    }
#line 691 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 690 "modecheck_conj.m"
      *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38;
#line 691 "modecheck_conj.m"
    else
#line 692 "modecheck_conj.m"
      {
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars_27;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ModeError_28;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Context_29;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ModeContext_30;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ImpurityError_31;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_41_41;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_72_72;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars1_75;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Rest_78;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Vars2_81;
#line 692 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_82_82;
#line 736 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_76_76;
#line 736 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_77_77;

#line 730 "modecheck_conj.m"
        {
#line 730 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_72_72 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 736 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, (MR_Integer) 0)));
#line 736 "modecheck_conj.m"
        check_hlds__modecheck_conj__Rest_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, (MR_Integer) 1)));
#line 736 "modecheck_conj.m"
        check_hlds__modecheck_conj__Vars1_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 0)));
#line 736 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 1)));
#line 736 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, (MR_Integer) 2)));
#line 737 "modecheck_conj.m"
        {
#line 737 "modecheck_conj.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_72_72, check_hlds__modecheck_conj__Vars1_75, &check_hlds__modecheck_conj__Vars2_81);
        }
#line 738 "modecheck_conj.m"
        {
#line 738 "modecheck_conj.m"
          check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(check_hlds__modecheck_conj__Rest_78, check_hlds__modecheck_conj__Vars2_81, &check_hlds__modecheck_conj__Vars_27);
        }
#line 695 "modecheck_conj.m"
        {
#line 695 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 695 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_41_41, 0) = ((MR_Box) (check_hlds__modecheck_conj__Goal_7));
#line 695 "modecheck_conj.m"
        }
#line 694 "modecheck_conj.m"
        {
#line 694 "modecheck_conj.m"
          check_hlds__modecheck_conj__ModeError_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 694 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 694 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 1) = ((MR_Box) (check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21));
#line 694 "modecheck_conj.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 2) = ((MR_Box) (check_hlds__modecheck_conj__V_41_41));
#line 694 "modecheck_conj.m"
        }
#line 696 "modecheck_conj.m"
        {
#line 696 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_context_2_p_0(*check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35, &check_hlds__modecheck_conj__Context_29);
        }
#line 697 "modecheck_conj.m"
        {
#line 697 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_mode_context_2_p_0(*check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35, &check_hlds__modecheck_conj__ModeContext_30);
        }
#line 698 "modecheck_conj.m"
        {
#line 698 "modecheck_conj.m"
          check_hlds__modecheck_conj__ImpurityError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 698 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_27));
#line 698 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 1) = ((MR_Box) (check_hlds__modecheck_conj__ModeError_28));
#line 698 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 2) = ((MR_Box) (check_hlds__modecheck_conj__Context_29));
#line 698 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeContext_30));
#line 698 "modecheck_conj.m"
        }
#line 699 "modecheck_conj.m"
        {
#line 699 "modecheck_conj.m"
          MR_Word base;
#line 699 "modecheck_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "modecheck_conj.m"
          *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33 = base;
#line 699 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_conj__ImpurityError_31));
#line 699 "modecheck_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38));
#line 699 "modecheck_conj.m"
        }
#line 692 "modecheck_conj.m"
      }
#line 671 "modecheck_conj.m"
  }
#line 667 "modecheck_conj.m"
}

#line 653 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
#line 653 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1)
#line 653 "modecheck_conj.m"
{
#line 655 "modecheck_conj.m"
  {
#line 655 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 655 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 2)));
#line 655 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj___WaitingVars_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 655 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj___ModeError_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));

#line 655 "modecheck_conj.m"
    return check_hlds__modecheck_conj__Goal_5;
#line 655 "modecheck_conj.m"
  }
#line 653 "modecheck_conj.m"
}

#line 627 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2(
#line 627 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg)
#line 627 "modecheck_conj.m"
{
#line 627 "modecheck_conj.m"
  {
#line 627 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 627 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 627 "modecheck_conj.m"
    {
#line 627 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__IntroducedFrom__pred__modecheck_delayed_goals_eager__627__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 4))));
    }
#line 627 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 627 "modecheck_conj.m"
  }
#line 627 "modecheck_conj.m"
}

#line 620 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_1(
#line 620 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 620 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 620 "modecheck_conj.m"
{
#line 620 "modecheck_conj.m"
  {
#line 620 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__wrapper_arg_2;
#line 620 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;
#line 620 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__conv0_Goal_5;

#line 620 "modecheck_conj.m"
    {
#line 620 "modecheck_conj.m"
      check_hlds__modecheck_conj__conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 620 "modecheck_conj.m"
    check_hlds__modecheck_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_conj__conv0_Goal_5));
#line 620 "modecheck_conj.m"
    return check_hlds__modecheck_conj__wrapper_arg_2;
#line 620 "modecheck_conj.m"
  }
#line 620 "modecheck_conj.m"
}

#line 603 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(
#line 603 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 603 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 603 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 603 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 603 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26,
#line 603 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27,
#line 603 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28,
#line 603 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29)
#line 603 "modecheck_conj.m"
{
#line 612 "modecheck_conj.m"
  {
#line 612 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;

#line 612 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "modecheck_conj.m"
      {
#line 613 "modecheck_conj.m"
        *check_hlds__modecheck_conj__DelayedGoals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "modecheck_conj.m"
        *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26;
#line 612 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28;
#line 612 "modecheck_conj.m"
      }
#line 612 "modecheck_conj.m"
    else
#line 618 "modecheck_conj.m"
      {
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_49_49 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_21_66;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Goals0_17;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo0_18;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo1_19;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__OldMayInit_20;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Goals1_21;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo2_22;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayedGoals1_23;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__DelayInfo3_24;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_32_32;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__GoalsCord_62;
#line 618 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_63_63;
#line 640 "modecheck_conj.m"
        MR_Integer check_hlds__modecheck_conj__V_44_44;
#line 640 "modecheck_conj.m"
        MR_Integer check_hlds__modecheck_conj__V_45_45;

#line 620 "modecheck_conj.m"
        {
#line 620 "modecheck_conj.m"
          check_hlds__modecheck_conj__Goals0_17 = mercury__list__map_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__TypeCtorInfo_49_49, (MR_Word) &check_hlds__modecheck_conj_scalar_common_3[1], check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 622 "modecheck_conj.m"
        {
#line 622 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_conj__DelayInfo0_18);
        }
#line 623 "modecheck_conj.m"
        {
#line 623 "modecheck_conj.m"
          check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_18, &check_hlds__modecheck_conj__DelayInfo1_19);
        }
#line 624 "modecheck_conj.m"
        {
#line 624 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_19, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 626 "modecheck_conj.m"
        {
#line 626 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_conj__OldMayInit_20);
        }
#line 627 "modecheck_conj.m"
        {
#line 627 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 627 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[1]));
#line 627 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 1) = ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0_2));
#line 627 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 627 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 3) = ((MR_Box) (check_hlds__modecheck_conj__OldMayInit_20));
#line 627 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_32_32, 4) = ((MR_Box) ((MR_Integer) 1));
#line 627 "modecheck_conj.m"
        }
#line 627 "modecheck_conj.m"
        {
#line 627 "modecheck_conj.m"
          mercury__require__expect_4_p_0(check_hlds__modecheck_conj__V_32_32, (MR_String) "check_hlds.modecheck_conj", (MR_String) "predicate \140check_hlds.modecheck_conj.modecheck_delayed_goals_eager\'/8", (MR_String) "may init solver vars");
        }
#line 629 "modecheck_conj.m"
        {
#line 629 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 0, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38);
        }
#line 1787 "check_hlds.modecheck_conj.c"
        check_hlds__modecheck_conj__TypeCtorInfo_21_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 138 "modecheck_conj.m"
        {
#line 138 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_63_63 = mercury__cord__init_0_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_66);
        }
#line 137 "modecheck_conj.m"
        {
#line 137 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__Goals0_17, check_hlds__modecheck_conj__V_63_63, &check_hlds__modecheck_conj__GoalsCord_62, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_26, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
        }
#line 139 "modecheck_conj.m"
        {
#line 139 "modecheck_conj.m"
          check_hlds__modecheck_conj__Goals1_21 = mercury__cord__list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_66, check_hlds__modecheck_conj__GoalsCord_62);
        }
#line 632 "modecheck_conj.m"
        {
#line 632 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 1, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42);
        }
#line 635 "modecheck_conj.m"
        {
#line 635 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__DelayInfo2_22);
        }
#line 636 "modecheck_conj.m"
        {
#line 636 "modecheck_conj.m"
          check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_22, &check_hlds__modecheck_conj__DelayedGoals1_23, &check_hlds__modecheck_conj__DelayInfo3_24);
        }
#line 637 "modecheck_conj.m"
        {
#line 637 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43);
        }
#line 640 "modecheck_conj.m"
        {
#line 640 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_44_44 = mercury__list__length_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__DelayedGoals1_23);
        }
#line 640 "modecheck_conj.m"
        {
#line 640 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_45_45 = mercury__list__length_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_48_48, check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 640 "modecheck_conj.m"
        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__V_44_44 < check_hlds__modecheck_conj__V_45_45);
#line 647 "modecheck_conj.m"
        if (check_hlds__modecheck_conj__succeeded)
#line 645 "modecheck_conj.m"
          {
#line 645 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals2_25;

#line 643 "modecheck_conj.m"
            {
#line 643 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__DelayedGoals1_23, check_hlds__modecheck_conj__DelayedGoals_11, &check_hlds__modecheck_conj__Goals2_25, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29);
            }
#line 646 "modecheck_conj.m"
            {
#line 646 "modecheck_conj.m"
              *check_hlds__modecheck_conj__Goals_12 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_49_49, check_hlds__modecheck_conj__Goals1_21, check_hlds__modecheck_conj__Goals2_25);
            }
#line 645 "modecheck_conj.m"
          }
#line 647 "modecheck_conj.m"
        else
#line 648 "modecheck_conj.m"
          {
#line 648 "modecheck_conj.m"
            *check_hlds__modecheck_conj__DelayedGoals_11 = check_hlds__modecheck_conj__DelayedGoals1_23;
#line 649 "modecheck_conj.m"
            *check_hlds__modecheck_conj__Goals_12 = check_hlds__modecheck_conj__Goals1_21;
#line 648 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_29 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;
#line 648 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_27 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_39_39;
#line 648 "modecheck_conj.m"
          }
#line 618 "modecheck_conj.m"
      }
#line 612 "modecheck_conj.m"
  }
#line 603 "modecheck_conj.m"
}

#line 561 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0(
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3,
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4,
#line 561 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5,
#line 561 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6,
#line 561 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7)
#line 561 "modecheck_conj.m"
{
#line 566 "modecheck_conj.m"
  while (MR_TRUE)
#line 566 "modecheck_conj.m"
    {
#line 566 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 566 "modecheck_conj.m"
      {
#line 566 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 566 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "modecheck_conj.m"
          {
#line 566 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 566 "modecheck_conj.m"
              {
#line 566 "modecheck_conj.m"
                *check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_7 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6;
#line 566 "modecheck_conj.m"
                *check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_5 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 566 "modecheck_conj.m"
                check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 566 "modecheck_conj.m"
              }
#line 566 "modecheck_conj.m"
          }
#line 566 "modecheck_conj.m"
        else
#line 568 "modecheck_conj.m"
          {
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Arg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Mode_18;
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Modes_19;
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModuleInfo_22;
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__InitialInst_23;
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__FinalInst_24;
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31;
#line 568 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32;
#line 573 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_25_25;

#line 567 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 567 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 567 "modecheck_conj.m"
              {
#line 567 "modecheck_conj.m"
                check_hlds__modecheck_conj__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__3_3, (MR_Integer) 0)));
#line 567 "modecheck_conj.m"
                check_hlds__modecheck_conj__Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__3_3, (MR_Integer) 1)));
#line 569 "modecheck_conj.m"
                {
#line 569 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__HeadVar__1_1, &check_hlds__modecheck_conj__ModuleInfo_22);
                }
#line 570 "modecheck_conj.m"
                {
#line 570 "modecheck_conj.m"
                  check_hlds__modecheck_conj__succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(check_hlds__modecheck_conj__ModuleInfo_22, check_hlds__modecheck_conj__Mode_18, &check_hlds__modecheck_conj__InitialInst_23, &check_hlds__modecheck_conj__FinalInst_24);
                }
#line 568 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 568 "modecheck_conj.m"
                  {
#line 572 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__InitialInst_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 572 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 572 "modecheck_conj.m"
                      {
#line 573 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__InitialInst_23)) == (MR_mktag((MR_Integer) 1)));
#line 573 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 573 "modecheck_conj.m"
                          check_hlds__modecheck_conj__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__InitialInst_23, (MR_Integer) 0)));
#line 573 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 572 "modecheck_conj.m"
                      }
#line 577 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 576 "modecheck_conj.m"
                      {
#line 576 "modecheck_conj.m"
                        {
#line 576 "modecheck_conj.m"
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__Arg_16, check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6, &check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31);
                        }
#line 576 "modecheck_conj.m"
                        check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 576 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 576 "modecheck_conj.m"
                      }
#line 577 "modecheck_conj.m"
                    else
#line 590 "modecheck_conj.m"
                      {
#line 580 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__V_26_26;

#line 579 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__FinalInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 579 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 579 "modecheck_conj.m"
                          {
#line 580 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__FinalInst_24)) == (MR_mktag((MR_Integer) 1)));
#line 580 "modecheck_conj.m"
                            if (check_hlds__modecheck_conj__succeeded)
#line 580 "modecheck_conj.m"
                              check_hlds__modecheck_conj__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__FinalInst_24, (MR_Integer) 0)));
#line 580 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 579 "modecheck_conj.m"
                          }
#line 590 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 586 "modecheck_conj.m"
                          {
#line 583 "modecheck_conj.m"
                            {
#line 583 "modecheck_conj.m"
                              check_hlds__modecheck_conj__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4, check_hlds__modecheck_conj__Arg_16);
                            }
#line 586 "modecheck_conj.m"
                            if (check_hlds__modecheck_conj__succeeded)
#line 585 "modecheck_conj.m"
                              check_hlds__modecheck_conj__succeeded = MR_FALSE;
#line 586 "modecheck_conj.m"
                            else
#line 588 "modecheck_conj.m"
                              {
#line 588 "modecheck_conj.m"
                                {
#line 588 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__Arg_16, check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4, &check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32);
                                }
#line 588 "modecheck_conj.m"
                                check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 588 "modecheck_conj.m"
                              }
#line 586 "modecheck_conj.m"
                          }
#line 590 "modecheck_conj.m"
                        else
#line 590 "modecheck_conj.m"
                          {
#line 590 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4;
#line 590 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 590 "modecheck_conj.m"
                          }
#line 590 "modecheck_conj.m"
                        if (check_hlds__modecheck_conj__succeeded)
#line 590 "modecheck_conj.m"
                          {
#line 590 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6;
#line 590 "modecheck_conj.m"
                            check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 590 "modecheck_conj.m"
                          }
#line 590 "modecheck_conj.m"
                      }
#line 568 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 594 "modecheck_conj.m"
                      {
#line 594 "modecheck_conj.m"
                        /* direct tailcall eliminated */
#line 594 "modecheck_conj.m"
                        {
#line 594 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Args_17;
#line 594 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_conj__Modes_19;
#line 594 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0__tmp_copy_4 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_32_32;
#line 594 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0__tmp_copy_6 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_31_31;

#line 594 "modecheck_conj.m"
                          check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_6 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0__tmp_copy_6;
#line 594 "modecheck_conj.m"
                          check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_4 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0__tmp_copy_4;
#line 594 "modecheck_conj.m"
                          check_hlds__modecheck_conj__HeadVar__3_3 = check_hlds__modecheck_conj__HeadVar__3__tmp_copy_3;
#line 594 "modecheck_conj.m"
                          check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 594 "modecheck_conj.m"
                        }
#line 594 "modecheck_conj.m"
                        continue;
#line 594 "modecheck_conj.m"
                      }
#line 568 "modecheck_conj.m"
                  }
#line 567 "modecheck_conj.m"
              }
#line 568 "modecheck_conj.m"
          }
#line 566 "modecheck_conj.m"
        return check_hlds__modecheck_conj__succeeded;
#line 566 "modecheck_conj.m"
      }
#line 566 "modecheck_conj.m"
      break;
#line 566 "modecheck_conj.m"
    }
#line 561 "modecheck_conj.m"
}

#line 552 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(
#line 552 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModuleInfo_4,
#line 552 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__VarTypes_5,
#line 552 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Var_6)
#line 552 "modecheck_conj.m"
{
#line 555 "modecheck_conj.m"
  {
#line 555 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 555 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__VarType_7;

#line 556 "modecheck_conj.m"
    {
#line 556 "modecheck_conj.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_conj__VarTypes_5, check_hlds__modecheck_conj__Var_6, &check_hlds__modecheck_conj__VarType_7);
    }
#line 557 "modecheck_conj.m"
    {
#line 557 "modecheck_conj.m"
      check_hlds__modecheck_conj__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__modecheck_conj__ModuleInfo_4, check_hlds__modecheck_conj__VarType_7);
    }
#line 557 "modecheck_conj.m"
    check_hlds__modecheck_conj__succeeded = !(check_hlds__modecheck_conj__succeeded);
#line 555 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 555 "modecheck_conj.m"
  }
#line 552 "modecheck_conj.m"
}

#line 501 "modecheck_conj.m"
static MR_bool MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1(
#line 501 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 501 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 501 "modecheck_conj.m"
{
#line 501 "modecheck_conj.m"
  {
#line 501 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 501 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 501 "modecheck_conj.m"
    {
#line 501 "modecheck_conj.m"
      return check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__does_not_contain_solver_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 501 "modecheck_conj.m"
    return check_hlds__modecheck_conj__succeeded;
#line 501 "modecheck_conj.m"
  }
#line 501 "modecheck_conj.m"
}

#line 537 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5(
#line 537 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 537 "modecheck_conj.m"
{
#line 537 "modecheck_conj.m"
  {
#line 537 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 537 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71);
#line 537 "modecheck_conj.m"
    {
#line 537 "modecheck_conj.m"
      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(check_hlds__modecheck_conj__env_ptr);
#line 537 "modecheck_conj.m"
      return;
    }
#line 537 "modecheck_conj.m"
  }
#line 537 "modecheck_conj.m"
}

#line 530 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_4(
#line 530 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 530 "modecheck_conj.m"
{
#line 530 "modecheck_conj.m"
  {
#line 530 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 538 "modecheck_conj.m"
    {
#line 538 "modecheck_conj.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77);
    }
#line 538 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 538 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 538 "modecheck_conj.m"
      {
#line 538 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__V_77_77, (MR_Integer) 0)));
#line 530 "modecheck_conj.m"
        {
#line 539 "modecheck_conj.m"
#line 539 "modecheck_conj.m"
          switch ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__DeclaredDetism_72) {
#line 539 "modecheck_conj.m"
            default:
#line 539 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_FALSE;
#line 539 "modecheck_conj.m"
              break;
#line 539 "modecheck_conj.m"
            case (MR_Integer) 4:
#line 539 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 539 "modecheck_conj.m"
              break;
#line 539 "modecheck_conj.m"
            case (MR_Integer) 0:
#line 539 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 539 "modecheck_conj.m"
              break;
#line 539 "modecheck_conj.m"
          }
#line 530 "modecheck_conj.m"
          if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 530 "modecheck_conj.m"
            {
#line 542 "modecheck_conj.m"
              {
#line 542 "modecheck_conj.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ProcInfo_71, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106);
              }
#line 545 "modecheck_conj.m"
              {
#line 545 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ArgModes_106, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
              }
#line 545 "modecheck_conj.m"
              if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 545 "modecheck_conj.m"
                {
#line 545 "modecheck_conj.m"
                  ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 545 "modecheck_conj.m"
                  return;
                }
#line 530 "modecheck_conj.m"
            }
#line 530 "modecheck_conj.m"
        }
#line 538 "modecheck_conj.m"
      }
#line 530 "modecheck_conj.m"
  }
#line 530 "modecheck_conj.m"
}

#line 494 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3(
#line 494 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 494 "modecheck_conj.m"
{
#line 494 "modecheck_conj.m"
  {
#line 494 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 508 "modecheck_conj.m"
    {
#line 508 "modecheck_conj.m"
      parse_tree__set_of_var__union_3_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
    }
#line 508 "modecheck_conj.m"
    {
#line 508 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 508 "modecheck_conj.m"
      return;
    }
#line 494 "modecheck_conj.m"
  }
#line 494 "modecheck_conj.m"
}

#line 494 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2(
#line 494 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 494 "modecheck_conj.m"
{
#line 494 "modecheck_conj.m"
  {
#line 494 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 506 "modecheck_conj.m"
    {
#line 506 "modecheck_conj.m"
      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeElse_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_3, check_hlds__modecheck_conj__env_ptr);
    }
#line 494 "modecheck_conj.m"
  }
#line 494 "modecheck_conj.m"
}

#line 430 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goal_8,
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73,
#line 430 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74,
#line 430 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75,
#line 430 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76,
#line 430 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 430 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 430 "modecheck_conj.m"
{
#line 430 "modecheck_conj.m"
  {
#line 430 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 430 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7 = check_hlds__modecheck_conj__ModeInfo_7;
#line 430 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_73;
#line 430 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_74;
#line 430 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_75;
#line 430 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_76;
#line 430 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont = check_hlds__modecheck_conj__cont;
#line 430 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 434 "modecheck_conj.m"
    while (MR_TRUE)
#line 434 "modecheck_conj.m"
      {
#line 434 "modecheck_conj.m"
        /* tailcall optimized into a loop */
#line 434 "modecheck_conj.m"
        {
#line 434 "modecheck_conj.m"
          MR_Word check_hlds__modecheck_conj__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_8, (MR_Integer) 0)));
#line 435 "modecheck_conj.m"
          MR_Word check_hlds__modecheck_conj___GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_8, (MR_Integer) 1)));

#line 457 "modecheck_conj.m"
#line 457 "modecheck_conj.m"
          switch (MR_tag((MR_Word) check_hlds__modecheck_conj__GoalExpr_11)) {
#line 457 "modecheck_conj.m"
            case (MR_Integer) 1:
#line 457 "modecheck_conj.m"
              {
#line 457 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 457 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)));
#line 438 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 438 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 438 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));

#line 457 "modecheck_conj.m"
#line 457 "modecheck_conj.m"
                switch (MR_tag((MR_Word) check_hlds__modecheck_conj__V_127_127)) {
#line 457 "modecheck_conj.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 457 "modecheck_conj.m"
                  case (MR_Integer) 0:
#line 438 "modecheck_conj.m"
                    {
#line 438 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Y_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 0)));

#line 440 "modecheck_conj.m"
                      {
#line 440 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 444 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 441 "modecheck_conj.m"
                        {
#line 441 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__TypeCtorInfo_109_109;

#line 441 "modecheck_conj.m"
                          {
#line 441 "modecheck_conj.m"
                            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__Y_18);
                          }
#line 441 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 441 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 441 "modecheck_conj.m"
                            {
#line 2463 "check_hlds.modecheck_conj.c"
                              check_hlds__modecheck_conj__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 443 "modecheck_conj.m"
                              {
#line 443 "modecheck_conj.m"
                                parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_109_109, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                              }
#line 441 "modecheck_conj.m"
                              *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 441 "modecheck_conj.m"
                              (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 441 "modecheck_conj.m"
                            }
#line 441 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 441 "modecheck_conj.m"
                            {
#line 441 "modecheck_conj.m"
                              ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 441 "modecheck_conj.m"
                              return;
                            }
#line 441 "modecheck_conj.m"
                        }
#line 444 "modecheck_conj.m"
                      else
#line 447 "modecheck_conj.m"
                        {
#line 444 "modecheck_conj.m"
                          {
#line 444 "modecheck_conj.m"
                            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__Y_18);
                          }
#line 447 "modecheck_conj.m"
                          if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 446 "modecheck_conj.m"
                            {
#line 446 "modecheck_conj.m"
                              {
#line 446 "modecheck_conj.m"
                                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                              }
#line 446 "modecheck_conj.m"
                              *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 446 "modecheck_conj.m"
                              {
#line 446 "modecheck_conj.m"
                                ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 446 "modecheck_conj.m"
                                return;
                              }
#line 446 "modecheck_conj.m"
                            }
#line 447 "modecheck_conj.m"
                          else
#line 452 "modecheck_conj.m"
                            {
#line 450 "modecheck_conj.m"
                              {
#line 450 "modecheck_conj.m"
                                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 450 "modecheck_conj.m"
                                {
#line 450 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_112_112, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                                }
#line 451 "modecheck_conj.m"
                                {
#line 451 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_112_112, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                                }
#line 450 "modecheck_conj.m"
                                {
#line 450 "modecheck_conj.m"
                                  ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
                                }
#line 450 "modecheck_conj.m"
                              }
#line 453 "modecheck_conj.m"
                              {
#line 453 "modecheck_conj.m"
                                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 453 "modecheck_conj.m"
                                {
#line 453 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_113_113, check_hlds__modecheck_conj__Y_18, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                                }
#line 454 "modecheck_conj.m"
                                {
#line 454 "modecheck_conj.m"
                                  parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_113_113, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                                }
#line 453 "modecheck_conj.m"
                                {
#line 453 "modecheck_conj.m"
                                  ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 453 "modecheck_conj.m"
                                  return;
                                }
#line 453 "modecheck_conj.m"
                              }
#line 452 "modecheck_conj.m"
                            }
#line 447 "modecheck_conj.m"
                        }
#line 438 "modecheck_conj.m"
                    }
#line 457 "modecheck_conj.m"
                    break;
#line 457 "modecheck_conj.m"
                  case (MR_Integer) 1:
#line 460 "modecheck_conj.m"
                    {
#line 460 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__TypeCtorInfo_115_115;
#line 460 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 2)));
#line 461 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 0)));
#line 461 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_127_127, (MR_Integer) 1)));

#line 464 "modecheck_conj.m"
                      {
#line 464 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 464 "modecheck_conj.m"
                      (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 460 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 460 "modecheck_conj.m"
                        {
#line 2598 "check_hlds.modecheck_conj.c"
                          check_hlds__modecheck_conj__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 467 "modecheck_conj.m"
                          {
#line 467 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_115_115, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                          }
#line 470 "modecheck_conj.m"
                          {
#line 470 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_list_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_115_115, check_hlds__modecheck_conj__Args_24, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                          }
#line 470 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 460 "modecheck_conj.m"
                        }
#line 460 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 460 "modecheck_conj.m"
                        {
#line 460 "modecheck_conj.m"
                          ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 460 "modecheck_conj.m"
                          return;
                        }
#line 460 "modecheck_conj.m"
                    }
#line 457 "modecheck_conj.m"
                    break;
#line 457 "modecheck_conj.m"
                  case (MR_Integer) 2:
#line 474 "modecheck_conj.m"
                    {
#line 474 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__TypeCtorInfo_117_117;

#line 478 "modecheck_conj.m"
                      {
#line 478 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, check_hlds__modecheck_conj__V_128_128);
                      }
#line 478 "modecheck_conj.m"
                      (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 474 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 474 "modecheck_conj.m"
                        {
#line 2645 "check_hlds.modecheck_conj.c"
                          check_hlds__modecheck_conj__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 481 "modecheck_conj.m"
                          {
#line 481 "modecheck_conj.m"
                            parse_tree__set_of_var__insert_3_p_0(check_hlds__modecheck_conj__TypeCtorInfo_117_117, check_hlds__modecheck_conj__V_128_128, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74);
                          }
#line 474 "modecheck_conj.m"
                          *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 474 "modecheck_conj.m"
                          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = MR_TRUE;
#line 474 "modecheck_conj.m"
                        }
#line 474 "modecheck_conj.m"
                      if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 474 "modecheck_conj.m"
                        {
#line 474 "modecheck_conj.m"
                          ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 474 "modecheck_conj.m"
                          return;
                        }
#line 474 "modecheck_conj.m"
                    }
#line 457 "modecheck_conj.m"
                    break;
#line 457 "modecheck_conj.m"
                }
#line 457 "modecheck_conj.m"
              }
#line 457 "modecheck_conj.m"
              break;
#line 457 "modecheck_conj.m"
            case (MR_Integer) 2:
#line 530 "modecheck_conj.m"
              {
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__TypeCtorInfo_123_123;
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__PredId_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)));
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Preds_67;
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__PredInfo_68;
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__ProcTable_69;
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__ProcInfos_70;
#line 530 "modecheck_conj.m"
                MR_Integer check_hlds__modecheck_conj__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_64_64;
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_65_65;
#line 530 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_66_66;
#line 534 "modecheck_conj.m"
                MR_Box check_hlds__modecheck_conj__conv0_PredInfo_68;

#line 530 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__Args_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 530 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 530 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 530 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 5)));
#line 533 "modecheck_conj.m"
                {
#line 533 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_preds_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__Preds_67);
                }
#line 534 "modecheck_conj.m"
                {
#line 534 "modecheck_conj.m"
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_conj__Preds_67, ((MR_Box) (check_hlds__modecheck_conj__PredId_62)), &check_hlds__modecheck_conj__conv0_PredInfo_68);
                }
#line 534 "modecheck_conj.m"
                check_hlds__modecheck_conj__PredInfo_68 = ((MR_Word) check_hlds__modecheck_conj__conv0_PredInfo_68);
#line 535 "modecheck_conj.m"
                {
#line 535 "modecheck_conj.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_conj__PredInfo_68, &check_hlds__modecheck_conj__ProcTable_69);
                }
#line 2729 "check_hlds.modecheck_conj.c"
                check_hlds__modecheck_conj__TypeCtorInfo_123_123 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 536 "modecheck_conj.m"
                {
#line 536 "modecheck_conj.m"
                  mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__modecheck_conj__TypeCtorInfo_123_123, check_hlds__modecheck_conj__ProcTable_69, &check_hlds__modecheck_conj__ProcInfos_70);
                }
#line 537 "modecheck_conj.m"
                {
#line 537 "modecheck_conj.m"
                  mercury__list__member_2_p_1(check_hlds__modecheck_conj__TypeCtorInfo_123_123, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__conv1_ProcInfo_71, check_hlds__modecheck_conj__ProcInfos_70, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_5, &check_hlds__modecheck_conj__env);
                }
#line 530 "modecheck_conj.m"
              }
#line 457 "modecheck_conj.m"
              break;
#line 457 "modecheck_conj.m"
            case (MR_Integer) 3:
#line 457 "modecheck_conj.m"
#line 457 "modecheck_conj.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 0)))) {
#line 457 "modecheck_conj.m"
                case (MR_Integer) 0:
#line 522 "modecheck_conj.m"
                  {
#line 522 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Details_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 522 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ArgModes_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 522 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Args_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 521 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___JunkArgRegs_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 521 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___JunkDetism_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 5)));
#line 523 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_58_58;
#line 523 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_59_59;
#line 523 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_60_60;
#line 523 "modecheck_conj.m"
                    MR_Integer check_hlds__modecheck_conj__V_61_61;

#line 523 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__Details_54)) == (MR_mktag((MR_Integer) 0)));
#line 523 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 523 "modecheck_conj.m"
                      {
#line 523 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 0)));
#line 523 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 1)));
#line 523 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 2)));
#line 523 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Details_54, (MR_Integer) 3)));
#line 523 "modecheck_conj.m"
                      }
#line 523 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded);
#line 522 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 524 "modecheck_conj.m"
                      {
#line 524 "modecheck_conj.m"
                        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded = check_hlds__modecheck_conj__candidate_init_vars_call_7_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__Args_104, check_hlds__modecheck_conj__ArgModes_55, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76);
                      }
#line 522 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__succeeded)
#line 522 "modecheck_conj.m"
                      {
#line 522 "modecheck_conj.m"
                        ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 522 "modecheck_conj.m"
                        return;
                      }
#line 522 "modecheck_conj.m"
                  }
#line 457 "modecheck_conj.m"
                  break;
#line 457 "modecheck_conj.m"
                case (MR_Integer) 2:
#line 515 "modecheck_conj.m"
                  {
#line 515 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__Goals_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 515 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___ConjType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));

#line 516 "modecheck_conj.m"
                    {
#line 516 "modecheck_conj.m"
                      check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__Goals_53, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 516 "modecheck_conj.m"
                      return;
                    }
#line 515 "modecheck_conj.m"
                  }
#line 457 "modecheck_conj.m"
                  break;
#line 457 "modecheck_conj.m"
                case (MR_Integer) 3:
#line 487 "modecheck_conj.m"
                  {
#line 487 "modecheck_conj.m"
                    *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_74) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73;
#line 487 "modecheck_conj.m"
                    *((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_76) = (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75;
#line 487 "modecheck_conj.m"
                    {
#line 487 "modecheck_conj.m"
                      ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__cont_env_ptr);
#line 487 "modecheck_conj.m"
                      return;
                    }
#line 487 "modecheck_conj.m"
                  }
#line 457 "modecheck_conj.m"
                  break;
#line 457 "modecheck_conj.m"
                case (MR_Integer) 5:
#line 512 "modecheck_conj.m"
                  {
#line 512 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__SubGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 512 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));

#line 513 "modecheck_conj.m"
                    /* direct tailcall eliminated */
#line 513 "modecheck_conj.m"
                    {
#line 513 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__Goal__tmp_copy_8 = check_hlds__modecheck_conj__SubGoal_51;

#line 513 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Goal_8 = check_hlds__modecheck_conj__Goal__tmp_copy_8;
#line 513 "modecheck_conj.m"
                    }
#line 513 "modecheck_conj.m"
                    continue;
#line 512 "modecheck_conj.m"
                  }
#line 457 "modecheck_conj.m"
                  break;
#line 457 "modecheck_conj.m"
                case (MR_Integer) 6:
#line 494 "modecheck_conj.m"
                  {
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__CondGoal_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 2)));
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ThenGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 3)));
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__CondGoalInfo_43;
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__NonLocals_44;
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__ModuleInfo_45;
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__VarTypes_46;
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__NonSolverNonLocals_47;
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_86_86;
#line 494 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___LocalVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 1)));
#line 496 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj___CondGoalExpr_42;

#line 494 "modecheck_conj.m"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ElseGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__GoalExpr_11, (MR_Integer) 4)));
#line 496 "modecheck_conj.m"
                    check_hlds__modecheck_conj___CondGoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__CondGoal_39, (MR_Integer) 0)));
#line 496 "modecheck_conj.m"
                    check_hlds__modecheck_conj__CondGoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__CondGoal_39, (MR_Integer) 1)));
#line 497 "modecheck_conj.m"
                    {
#line 497 "modecheck_conj.m"
                      check_hlds__modecheck_conj__NonLocals_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_conj__CondGoalInfo_43);
                    }
#line 498 "modecheck_conj.m"
                    {
#line 498 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__ModuleInfo_45);
                    }
#line 499 "modecheck_conj.m"
                    {
#line 499 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_var_types_2_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, &check_hlds__modecheck_conj__VarTypes_46);
                    }
#line 2922 "check_hlds.modecheck_conj.c"
                    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 501 "modecheck_conj.m"
                    {
#line 501 "modecheck_conj.m"
                      check_hlds__modecheck_conj__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 501 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_5[0]));
#line 501 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 1) = ((MR_Box) (check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_1));
#line 501 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 501 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModuleInfo_45));
#line 501 "modecheck_conj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_86_86, 4) = ((MR_Box) (check_hlds__modecheck_conj__VarTypes_46));
#line 501 "modecheck_conj.m"
                    }
#line 500 "modecheck_conj.m"
                    {
#line 500 "modecheck_conj.m"
                      check_hlds__modecheck_conj__NonSolverNonLocals_47 = parse_tree__set_of_var__filter_2_f_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, check_hlds__modecheck_conj__V_86_86, check_hlds__modecheck_conj__NonLocals_44);
                    }
#line 502 "modecheck_conj.m"
                    {
#line 502 "modecheck_conj.m"
                      parse_tree__set_of_var__union_3_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__TypeCtorInfo_118_118, check_hlds__modecheck_conj__NonSolverNonLocals_47, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_0_73, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87);
                    }
#line 504 "modecheck_conj.m"
                    {
#line 504 "modecheck_conj.m"
                      check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__ModeInfo_7, check_hlds__modecheck_conj__ThenGoal_40, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_NonFree_87_87, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__NonFreeThen_48, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_0_75, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_env_0__STATE_VARIABLE_CandidateVars_88_88, check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0_2, &check_hlds__modecheck_conj__env);
                    }
#line 494 "modecheck_conj.m"
                  }
#line 457 "modecheck_conj.m"
                  break;
#line 457 "modecheck_conj.m"
              }
#line 457 "modecheck_conj.m"
              break;
#line 457 "modecheck_conj.m"
          }
#line 434 "modecheck_conj.m"
        }
#line 434 "modecheck_conj.m"
        break;
#line 434 "modecheck_conj.m"
      }
#line 430 "modecheck_conj.m"
  }
#line 430 "modecheck_conj.m"
}

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 427 "modecheck_conj.m"
{
#line 427 "modecheck_conj.m"
  {
#line 427 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 427 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74));
#line 427 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76));
#line 427 "modecheck_conj.m"
    {
#line 427 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr);
#line 427 "modecheck_conj.m"
      return;
    }
#line 427 "modecheck_conj.m"
  }
#line 427 "modecheck_conj.m"
}

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2(
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 427 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 427 "modecheck_conj.m"
{
#line 427 "modecheck_conj.m"
  {
#line 427 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0_s check_hlds__modecheck_conj__env;

#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_3 = check_hlds__modecheck_conj__wrapper_arg_3;
#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__wrapper_arg_5 = check_hlds__modecheck_conj__wrapper_arg_5;
#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont = check_hlds__modecheck_conj__cont;
#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 427 "modecheck_conj.m"
    {
#line 427 "modecheck_conj.m"
      MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 427 "modecheck_conj.m"
      {
#line 427 "modecheck_conj.m"
        check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv1_STATE_VARIABLE_NonFree_74, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_4), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2_env_0__conv0_STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_1, &check_hlds__modecheck_conj__env);
      }
#line 427 "modecheck_conj.m"
    }
#line 427 "modecheck_conj.m"
  }
#line 427 "modecheck_conj.m"
}

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 427 "modecheck_conj.m"
{
#line 427 "modecheck_conj.m"
  {
#line 427 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 427 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12) = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12);
#line 427 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14) = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14);
#line 427 "modecheck_conj.m"
    {
#line 427 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr);
#line 427 "modecheck_conj.m"
      return;
    }
#line 427 "modecheck_conj.m"
  }
#line 427 "modecheck_conj.m"
}

#line 422 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0(
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ModeInfo_7,
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__Goals_8,
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11,
#line 422 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12,
#line 422 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13,
#line 422 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14,
#line 422 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 422 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 422 "modecheck_conj.m"
{
#line 422 "modecheck_conj.m"
  {
#line 422 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 422 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_NonFree_12 = check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_12;
#line 422 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__STATE_VARIABLE_CandidateVars_14 = check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_14;
#line 422 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont = check_hlds__modecheck_conj__cont;
#line 422 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 426 "modecheck_conj.m"
    {
#line 426 "modecheck_conj.m"
      MR_bool check_hlds__modecheck_conj__succeeded;
#line 426 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__TypeInfo_24_24 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1];
#line 426 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__V_15_15;

#line 427 "modecheck_conj.m"
      {
#line 427 "modecheck_conj.m"
        check_hlds__modecheck_conj__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 427 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_4[0]));
#line 427 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 1) = ((MR_Box) (check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_2));
#line 427 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 427 "modecheck_conj.m"
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_15_15, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeInfo_7));
#line 427 "modecheck_conj.m"
      }
#line 427 "modecheck_conj.m"
      {
#line 427 "modecheck_conj.m"
        mercury__list__foldl2_6_p_7((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__TypeInfo_24_24, check_hlds__modecheck_conj__TypeInfo_24_24, check_hlds__modecheck_conj__V_15_15, check_hlds__modecheck_conj__Goals_8, ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_NonFree_0_11)), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv3_STATE_VARIABLE_NonFree_12, ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_CandidateVars_0_13)), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_env_0__conv2_STATE_VARIABLE_CandidateVars_14, check_hlds__modecheck_conj__candidate_init_vars_2_6_p_0_3, &check_hlds__modecheck_conj__env);
      }
#line 426 "modecheck_conj.m"
    }
#line 422 "modecheck_conj.m"
  }
#line 422 "modecheck_conj.m"
}

#line 389 "modecheck_conj.m"
static MR_Word MR_CALL 
check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(
#line 389 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1)
#line 389 "modecheck_conj.m"
{
#line 392 "modecheck_conj.m"
  while (MR_TRUE)
#line 392 "modecheck_conj.m"
    {
#line 392 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 392 "modecheck_conj.m"
      {
#line 392 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;
#line 392 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__HeadVar__2_2;

#line 392 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "modecheck_conj.m"
          check_hlds__modecheck_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "modecheck_conj.m"
        else
#line 393 "modecheck_conj.m"
          {
#line 393 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Var_3;
#line 393 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Inst_4;
#line 393 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__AssocList_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 393 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));

#line 393 "modecheck_conj.m"
            check_hlds__modecheck_conj__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_7_7, (MR_Integer) 0)));
#line 393 "modecheck_conj.m"
            check_hlds__modecheck_conj__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_7_7, (MR_Integer) 1)));
#line 396 "modecheck_conj.m"
            if ((check_hlds__modecheck_conj__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 396 "modecheck_conj.m"
            else
#line 396 "modecheck_conj.m"
            if (((MR_tag((MR_Word) check_hlds__modecheck_conj__Inst_4)) == (MR_mktag((MR_Integer) 1))))
#line 396 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_TRUE;
#line 396 "modecheck_conj.m"
            else
#line 396 "modecheck_conj.m"
              check_hlds__modecheck_conj__succeeded = MR_FALSE;
#line 393 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 399 "modecheck_conj.m"
              {
#line 399 "modecheck_conj.m"
                /* direct tailcall eliminated */
#line 399 "modecheck_conj.m"
                {
#line 399 "modecheck_conj.m"
                  MR_Word check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_conj__AssocList_5;

#line 399 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__HeadVar__1__tmp_copy_1;
#line 399 "modecheck_conj.m"
                }
#line 399 "modecheck_conj.m"
                continue;
#line 399 "modecheck_conj.m"
              }
#line 393 "modecheck_conj.m"
            else
#line 401 "modecheck_conj.m"
              {
#line 401 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__V_8_8;

#line 401 "modecheck_conj.m"
                {
#line 401 "modecheck_conj.m"
                  check_hlds__modecheck_conj__V_8_8 = check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(check_hlds__modecheck_conj__AssocList_5);
                }
#line 401 "modecheck_conj.m"
                {
#line 401 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "modecheck_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__modecheck_conj__Var_3));
#line 401 "modecheck_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__modecheck_conj__V_8_8));
#line 401 "modecheck_conj.m"
                }
#line 401 "modecheck_conj.m"
              }
#line 393 "modecheck_conj.m"
          }
#line 392 "modecheck_conj.m"
        return check_hlds__modecheck_conj__HeadVar__2_2;
#line 392 "modecheck_conj.m"
      }
#line 392 "modecheck_conj.m"
      break;
#line 392 "modecheck_conj.m"
    }
#line 389 "modecheck_conj.m"
}

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 427 "modecheck_conj.m"
{
#line 427 "modecheck_conj.m"
  {
#line 427 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 427 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74));
#line 427 "modecheck_conj.m"
    *((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5) = ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76));
#line 427 "modecheck_conj.m"
    {
#line 427 "modecheck_conj.m"
      ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont)((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr);
#line 427 "modecheck_conj.m"
      return;
    }
#line 427 "modecheck_conj.m"
  }
#line 427 "modecheck_conj.m"
}

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3(
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_3,
#line 427 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_4,
#line 427 "modecheck_conj.m"
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_5,
#line 427 "modecheck_conj.m"
  MR_Cont check_hlds__modecheck_conj__cont,
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__cont_env_ptr)
#line 427 "modecheck_conj.m"
{
#line 427 "modecheck_conj.m"
  {
#line 427 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0_s check_hlds__modecheck_conj__env;

#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_3 = check_hlds__modecheck_conj__wrapper_arg_3;
#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__wrapper_arg_5 = check_hlds__modecheck_conj__wrapper_arg_5;
#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont = check_hlds__modecheck_conj__cont;
#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__cont_env_ptr = check_hlds__modecheck_conj__cont_env_ptr;
#line 427 "modecheck_conj.m"
    {
#line 427 "modecheck_conj.m"
      MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

#line 427 "modecheck_conj.m"
      {
#line 427 "modecheck_conj.m"
        check_hlds__modecheck_conj__candidate_init_vars_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv2_STATE_VARIABLE_NonFree_74, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_4), &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3_env_0__conv1_STATE_VARIABLE_CandidateVars_76, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_2, &check_hlds__modecheck_conj__env);
      }
#line 427 "modecheck_conj.m"
    }
#line 427 "modecheck_conj.m"
  }
#line 427 "modecheck_conj.m"
}

#line 328 "modecheck_conj.m"
static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_1(
#line 328 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__closure_arg,
#line 328 "modecheck_conj.m"
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
#line 328 "modecheck_conj.m"
{
#line 328 "modecheck_conj.m"
  {
#line 328 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__wrapper_arg_2;
#line 328 "modecheck_conj.m"
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;
#line 328 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__conv0_Goal_5;

#line 328 "modecheck_conj.m"
    {
#line 328 "modecheck_conj.m"
      check_hlds__modecheck_conj__conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
#line 328 "modecheck_conj.m"
    check_hlds__modecheck_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_conj__conv0_Goal_5));
#line 328 "modecheck_conj.m"
    return check_hlds__modecheck_conj__wrapper_arg_2;
#line 328 "modecheck_conj.m"
  }
#line 328 "modecheck_conj.m"
}

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 427 "modecheck_conj.m"
{
#line 427 "modecheck_conj.m"
  {
#line 427 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 427 "modecheck_conj.m"
    MR_builtin_longjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0, 1);
#line 427 "modecheck_conj.m"
  }
#line 427 "modecheck_conj.m"
}

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 427 "modecheck_conj.m"
{
#line 427 "modecheck_conj.m"
  {
#line 427 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57);
#line 427 "modecheck_conj.m"
    (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58 = ((MR_Word) (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58);
#line 427 "modecheck_conj.m"
    {
#line 427 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_4(check_hlds__modecheck_conj__env_ptr);
#line 427 "modecheck_conj.m"
      return;
    }
#line 427 "modecheck_conj.m"
  }
#line 427 "modecheck_conj.m"
}

#line 427 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(
#line 427 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 427 "modecheck_conj.m"
{
#line 427 "modecheck_conj.m"
  {
#line 427 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 427 "modecheck_conj.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_0) == 0)
#line 427 "modecheck_conj.m"
      {
#line 427 "modecheck_conj.m"
        {
#line 427 "modecheck_conj.m"
          mercury__list__foldl2_6_p_7((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17, ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20)), &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv4_NonFreeVars1_57, ((MR_Box) ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56)), &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__conv3_CandidateVars1_58, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_5, check_hlds__modecheck_conj__env_ptr);
        }
#line 427 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_FALSE;
#line 427 "modecheck_conj.m"
      }
#line 427 "modecheck_conj.m"
    else
#line 427 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 427 "modecheck_conj.m"
  }
#line 427 "modecheck_conj.m"
}

#line 348 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(
#line 348 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 348 "modecheck_conj.m"
{
#line 348 "modecheck_conj.m"
  {
#line 348 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 348 "modecheck_conj.m"
    MR_builtin_longjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1, 1);
#line 348 "modecheck_conj.m"
  }
#line 348 "modecheck_conj.m"
}

#line 348 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8(
#line 348 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 348 "modecheck_conj.m"
{
#line 348 "modecheck_conj.m"
  {
#line 348 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 348 "modecheck_conj.m"
    {
#line 352 "modecheck_conj.m"
      MR_Word check_hlds__modecheck_conj__VarType_25;

#line 352 "modecheck_conj.m"
      {
#line 352 "modecheck_conj.m"
        hlds__vartypes__lookup_var_type_3_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24, &check_hlds__modecheck_conj__VarType_25);
      }
#line 353 "modecheck_conj.m"
      {
#line 353 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22, check_hlds__modecheck_conj__VarType_25);
      }
#line 350 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded);
#line 350 "modecheck_conj.m"
      if ((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 350 "modecheck_conj.m"
        {
#line 350 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_7(check_hlds__modecheck_conj__env_ptr);
#line 350 "modecheck_conj.m"
          return;
        }
#line 348 "modecheck_conj.m"
    }
#line 348 "modecheck_conj.m"
  }
#line 348 "modecheck_conj.m"
}

#line 348 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(
#line 348 "modecheck_conj.m"
  void * check_hlds__modecheck_conj__env_ptr_arg)
#line 348 "modecheck_conj.m"
{
#line 348 "modecheck_conj.m"
  {
#line 348 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s * check_hlds__modecheck_conj__env_ptr = (struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s *) check_hlds__modecheck_conj__env_ptr_arg;

#line 348 "modecheck_conj.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__commit_1) == 0)
#line 348 "modecheck_conj.m"
      {
#line 349 "modecheck_conj.m"
        {
#line 349 "modecheck_conj.m"
          parse_tree__set_of_var__member_2_p_1((check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49, (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21, &(check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Var_24, check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_8, check_hlds__modecheck_conj__env_ptr);
        }
#line 348 "modecheck_conj.m"
        (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_FALSE;
#line 348 "modecheck_conj.m"
      }
#line 348 "modecheck_conj.m"
    else
#line 348 "modecheck_conj.m"
      (check_hlds__modecheck_conj__env_ptr)->check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 348 "modecheck_conj.m"
  }
#line 348 "modecheck_conj.m"
}

#line 308 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(
#line 308 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__ConjType_9,
#line 308 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
#line 308 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
#line 308 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__Goals_12,
#line 308 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33,
#line 308 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34,
#line 308 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35,
#line 308 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36)
#line 308 "modecheck_conj.m"
{
#line 308 "modecheck_conj.m"
  {
#line 308 "modecheck_conj.m"
    struct check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0_s check_hlds__modecheck_conj__env;

#line 318 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "modecheck_conj.m"
      {
#line 319 "modecheck_conj.m"
        *check_hlds__modecheck_conj__DelayedGoals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 320 "modecheck_conj.m"
        *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 318 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33;
#line 318 "modecheck_conj.m"
        *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35;
#line 318 "modecheck_conj.m"
      }
#line 318 "modecheck_conj.m"
    else
#line 378 "modecheck_conj.m"
      {
#line 328 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__InstMap_18;
#line 328 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__VarInsts_19;
#line 328 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__V_38_38;
#line 416 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_12_59;

#line 328 "modecheck_conj.m"
        {
#line 328 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__modecheck_conj_scalar_common_3[0], check_hlds__modecheck_conj__DelayedGoals0_10);
        }
#line 332 "modecheck_conj.m"
        {
#line 332 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_conj__InstMap_18);
        }
#line 333 "modecheck_conj.m"
        {
#line 333 "modecheck_conj.m"
          hlds__instmap__instmap_to_assoc_list_2_p_0(check_hlds__modecheck_conj__InstMap_18, &check_hlds__modecheck_conj__VarInsts_19);
        }
#line 3621 "check_hlds.modecheck_conj.c"
        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 335 "modecheck_conj.m"
        {
#line 335 "modecheck_conj.m"
          check_hlds__modecheck_conj__V_38_38 = check_hlds__modecheck_conj__non_free_vars_in_assoc_list_1_f_0(check_hlds__modecheck_conj__VarInsts_19);
        }
#line 334 "modecheck_conj.m"
        {
#line 334 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars0_20 = parse_tree__set_of_var__list_to_set_1_f_0((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeCtorInfo_49_49, check_hlds__modecheck_conj__V_38_38);
        }
#line 3633 "check_hlds.modecheck_conj.c"
        check_hlds__modecheck_conj__TypeCtorInfo_12_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 417 "modecheck_conj.m"
        {
#line 417 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars0_56 = parse_tree__set_of_var__init_0_f_0(check_hlds__modecheck_conj__TypeCtorInfo_12_59);
        }
#line 3640 "check_hlds.modecheck_conj.c"
        (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__TypeInfo_24_77 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1];
#line 427 "modecheck_conj.m"
        {
#line 427 "modecheck_conj.m"
          MR_Word base;
#line 427 "modecheck_conj.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 427 "modecheck_conj.m"
          (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__V_68_68 = base;
#line 427 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_4[0]));
#line 427 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_3));
#line 427 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 427 "modecheck_conj.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35));
#line 427 "modecheck_conj.m"
        }
#line 427 "modecheck_conj.m"
        {
#line 427 "modecheck_conj.m"
          check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_6(&check_hlds__modecheck_conj__env);
        }
#line 416 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 416 "modecheck_conj.m"
          {
#line 420 "modecheck_conj.m"
            {
#line 420 "modecheck_conj.m"
              (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21 = parse_tree__set_of_var__difference_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_12_59, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateVars1_58, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__NonFreeVars1_57);
            }
#line 420 "modecheck_conj.m"
            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = MR_TRUE;
#line 416 "modecheck_conj.m"
          }
#line 328 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 328 "modecheck_conj.m"
          {
#line 346 "modecheck_conj.m"
            {
#line 346 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__ModuleInfo_22);
            }
#line 347 "modecheck_conj.m"
            {
#line 347 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &(check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__VarTypes_23);
            }
#line 348 "modecheck_conj.m"
            {
#line 348 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_9(&check_hlds__modecheck_conj__env);
            }
#line 348 "modecheck_conj.m"
            (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = !((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded);
#line 328 "modecheck_conj.m"
            if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 356 "modecheck_conj.m"
              {
#line 356 "modecheck_conj.m"
                (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35);
              }
#line 328 "modecheck_conj.m"
          }
#line 378 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__succeeded)
#line 361 "modecheck_conj.m"
          {
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__TypeCtorInfo_21_91;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__CandidateInitVarList_26;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__InitGoals_27;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals1_28;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo0_29;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo1_30;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo2_31;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__DelayInfo3_32;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__GoalsCord_87;
#line 361 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_88_88;

#line 360 "modecheck_conj.m"
            {
#line 360 "modecheck_conj.m"
              check_hlds__modecheck_conj__CandidateInitVarList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__CandidateInitVars_21);
            }
#line 362 "modecheck_conj.m"
            {
#line 362 "modecheck_conj.m"
              check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_conj__CandidateInitVarList_26, &check_hlds__modecheck_conj__InitGoals_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39);
            }
#line 364 "modecheck_conj.m"
            {
#line 364 "modecheck_conj.m"
              check_hlds__modecheck_conj__Goals1_28 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__InitGoals_27, (check_hlds__modecheck_conj__env).check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0_env_0__Goals0_17);
            }
#line 366 "modecheck_conj.m"
            {
#line 366 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__DelayInfo0_29);
            }
#line 367 "modecheck_conj.m"
            {
#line 367 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_29, &check_hlds__modecheck_conj__DelayInfo1_30);
            }
#line 368 "modecheck_conj.m"
            {
#line 368 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_30, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
            }
#line 370 "modecheck_conj.m"
            {
#line 370 "modecheck_conj.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__InitGoals_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41);
            }
#line 3776 "check_hlds.modecheck_conj.c"
            check_hlds__modecheck_conj__TypeCtorInfo_21_91 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 138 "modecheck_conj.m"
            {
#line 138 "modecheck_conj.m"
              check_hlds__modecheck_conj__V_88_88 = mercury__cord__init_0_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_91);
            }
#line 137 "modecheck_conj.m"
            {
#line 137 "modecheck_conj.m"
              check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__Goals1_28, check_hlds__modecheck_conj__V_88_88, &check_hlds__modecheck_conj__GoalsCord_87, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43);
            }
#line 139 "modecheck_conj.m"
            {
#line 139 "modecheck_conj.m"
              *check_hlds__modecheck_conj__Goals_12 = mercury__cord__list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_91, check_hlds__modecheck_conj__GoalsCord_87);
            }
#line 375 "modecheck_conj.m"
            {
#line 375 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__modecheck_conj__DelayInfo2_31);
            }
#line 376 "modecheck_conj.m"
            {
#line 376 "modecheck_conj.m"
              check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_31, check_hlds__modecheck_conj__DelayedGoals_11, &check_hlds__modecheck_conj__DelayInfo3_32);
            }
#line 377 "modecheck_conj.m"
            {
#line 377 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_32, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36);
#line 377 "modecheck_conj.m"
              return;
            }
#line 361 "modecheck_conj.m"
          }
#line 378 "modecheck_conj.m"
        else
#line 380 "modecheck_conj.m"
          {
#line 380 "modecheck_conj.m"
            *check_hlds__modecheck_conj__DelayedGoals_11 = check_hlds__modecheck_conj__DelayedGoals0_10;
#line 381 "modecheck_conj.m"
            *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 380 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_35;
#line 380 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_34 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_33;
#line 380 "modecheck_conj.m"
          }
#line 378 "modecheck_conj.m"
      }
#line 308 "modecheck_conj.m"
  }
#line 308 "modecheck_conj.m"
}

#line 141 "modecheck_conj.m"
static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3,
#line 141 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_Goals_4,
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5,
#line 141 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_6,
#line 141 "modecheck_conj.m"
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7,
#line 141 "modecheck_conj.m"
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_8)
#line 141 "modecheck_conj.m"
{
#line 146 "modecheck_conj.m"
  while (MR_TRUE)
#line 146 "modecheck_conj.m"
    {
#line 146 "modecheck_conj.m"
      /* tailcall optimized into a loop */
#line 146 "modecheck_conj.m"
      {
#line 146 "modecheck_conj.m"
        MR_bool check_hlds__modecheck_conj__succeeded;

#line 146 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 146 "modecheck_conj.m"
          {
#line 147 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_8 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7;
#line 147 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_6 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5;
#line 146 "modecheck_conj.m"
            *check_hlds__modecheck_conj__STATE_VARIABLE_Goals_4 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3;
#line 146 "modecheck_conj.m"
          }
#line 146 "modecheck_conj.m"
        else
#line 149 "modecheck_conj.m"
          {
#line 149 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 149 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ConjGoals_25;
#line 151 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_62_62;
#line 151 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_63_63;
#line 151 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_26_26;

#line 152 "modecheck_conj.m"
            check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__1_1 == (MR_Integer) 0);
#line 151 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 151 "modecheck_conj.m"
              {
#line 151 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal0_20, (MR_Integer) 0)));
#line 151 "modecheck_conj.m"
                check_hlds__modecheck_conj__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal0_20, (MR_Integer) 1)));
#line 151 "modecheck_conj.m"
                check_hlds__modecheck_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_conj__V_62_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_62_62, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 151 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 151 "modecheck_conj.m"
                  {
#line 151 "modecheck_conj.m"
                    check_hlds__modecheck_conj__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_62_62, (MR_Integer) 1)));
#line 151 "modecheck_conj.m"
                    check_hlds__modecheck_conj__ConjGoals_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_62_62, (MR_Integer) 2)));
#line 151 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__V_63_63 == (MR_Integer) 0);
#line 151 "modecheck_conj.m"
                  }
#line 151 "modecheck_conj.m"
              }
#line 157 "modecheck_conj.m"
            if (check_hlds__modecheck_conj__succeeded)
#line 154 "modecheck_conj.m"
              {
#line 154 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goals1_27;

#line 154 "modecheck_conj.m"
                {
#line 154 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Goals1_27 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__ConjGoals_25, check_hlds__modecheck_conj__Goals0_21);
                }
#line 155 "modecheck_conj.m"
                /* direct tailcall eliminated */
#line 155 "modecheck_conj.m"
                {
#line 155 "modecheck_conj.m"
                  MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Goals1_27;

#line 155 "modecheck_conj.m"
                  check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 155 "modecheck_conj.m"
                }
#line 155 "modecheck_conj.m"
                continue;
#line 154 "modecheck_conj.m"
              }
#line 157 "modecheck_conj.m"
            else
#line 163 "modecheck_conj.m"
              {
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Purity_28;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Impure_29;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__InstMap0_31;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo0_32;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__NonLocalVars_33;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goal_34;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Errors_35;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo1_38;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__WokenGoals_49;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__DelayInfo_50;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__InstMap_55;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_71_71;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94;
#line 163 "modecheck_conj.m"
                MR_Word check_hlds__modecheck_conj__Goals1_99;

#line 163 "modecheck_conj.m"
                {
#line 163 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Purity_28 = hlds__hlds_goal__goal_get_purity_1_f_0(check_hlds__modecheck_conj__Goal0_20);
                }
#line 170 "modecheck_conj.m"
#line 170 "modecheck_conj.m"
                switch (check_hlds__modecheck_conj__Purity_28) {
#line 170 "modecheck_conj.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 170 "modecheck_conj.m"
                  case (MR_Integer) 2:
#line 165 "modecheck_conj.m"
                    {
#line 165 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__TypeCtorInfo_101_101;
#line 165 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__ScheduledSolverGoals_30;
#line 165 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__V_70_70;

#line 166 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Impure_29 = (MR_Integer) 1;
#line 167 "modecheck_conj.m"
                      {
#line 167 "modecheck_conj.m"
                        check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(check_hlds__modecheck_conj__Goal0_20, &check_hlds__modecheck_conj__ScheduledSolverGoals_30, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68);
                      }
#line 4024 "check_hlds.modecheck_conj.c"
                      check_hlds__modecheck_conj__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 169 "modecheck_conj.m"
                      {
#line 169 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_70_70 = mercury__cord__from_list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_101_101, check_hlds__modecheck_conj__ScheduledSolverGoals_30);
                      }
#line 169 "modecheck_conj.m"
                      {
#line 169 "modecheck_conj.m"
                        check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69 = mercury__cord__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_101_101, check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3, check_hlds__modecheck_conj__V_70_70);
                      }
#line 165 "modecheck_conj.m"
                    }
#line 170 "modecheck_conj.m"
                    break;
#line 170 "modecheck_conj.m"
                  case (MR_Integer) 0:
#line 170 "modecheck_conj.m"
                  case (MR_Integer) 1:
#line 173 "modecheck_conj.m"
                    {
#line 174 "modecheck_conj.m"
                      check_hlds__modecheck_conj__Impure_29 = (MR_Integer) 0;
#line 173 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3;
#line 173 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5;
#line 173 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7;
#line 173 "modecheck_conj.m"
                    }
#line 170 "modecheck_conj.m"
                    break;
#line 170 "modecheck_conj.m"
                }
#line 178 "modecheck_conj.m"
                {
#line 178 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_conj__InstMap0_31);
                }
#line 179 "modecheck_conj.m"
                {
#line 179 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_conj__DelayInfo0_32);
                }
#line 183 "modecheck_conj.m"
                {
#line 183 "modecheck_conj.m"
                  check_hlds__modecheck_conj__NonLocalVars_33 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_conj__Goal0_20);
                }
#line 184 "modecheck_conj.m"
                {
#line 184 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_conj__NonLocalVars_33, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_71_71);
                }
#line 185 "modecheck_conj.m"
                {
#line 185 "modecheck_conj.m"
                  check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_conj__Goal0_20, &check_hlds__modecheck_conj__Goal_34, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_71_71, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72);
                }
#line 190 "modecheck_conj.m"
                {
#line 190 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_conj__Errors_35);
                }
#line 213 "modecheck_conj.m"
                if ((check_hlds__modecheck_conj__Errors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 214 "modecheck_conj.m"
                  {
#line 222 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__SubGoals_47;
#line 220 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_73_73;
#line 220 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_105_105;
#line 220 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_48_48;

#line 215 "modecheck_conj.m"
                    {
#line 215 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_conj__DelayInfo1_38);
                    }
#line 220 "modecheck_conj.m"
                    check_hlds__modecheck_conj__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_34, (MR_Integer) 0)));
#line 220 "modecheck_conj.m"
                    check_hlds__modecheck_conj__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_34, (MR_Integer) 1)));
#line 220 "modecheck_conj.m"
                    check_hlds__modecheck_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_conj__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 220 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 220 "modecheck_conj.m"
                      {
#line 220 "modecheck_conj.m"
                        check_hlds__modecheck_conj__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_73_73, (MR_Integer) 1)));
#line 220 "modecheck_conj.m"
                        check_hlds__modecheck_conj__SubGoals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__V_73_73, (MR_Integer) 2)));
#line 220 "modecheck_conj.m"
                        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__1_1 == check_hlds__modecheck_conj__V_105_105);
#line 220 "modecheck_conj.m"
                      }
#line 222 "modecheck_conj.m"
                    if (check_hlds__modecheck_conj__succeeded)
#line 221 "modecheck_conj.m"
                      {
#line 221 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 221 "modecheck_conj.m"
                        MR_Word check_hlds__modecheck_conj__V_75_75;

#line 221 "modecheck_conj.m"
                        {
#line 221 "modecheck_conj.m"
                          check_hlds__modecheck_conj__V_75_75 = mercury__cord__from_list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_102_102, check_hlds__modecheck_conj__SubGoals_47);
                        }
#line 221 "modecheck_conj.m"
                        {
#line 221 "modecheck_conj.m"
                          check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74 = mercury__cord__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_102_102, check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69, check_hlds__modecheck_conj__V_75_75);
                        }
#line 221 "modecheck_conj.m"
                      }
#line 222 "modecheck_conj.m"
                    else
#line 223 "modecheck_conj.m"
                      {
#line 223 "modecheck_conj.m"
                        {
#line 223 "modecheck_conj.m"
                          check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69, ((MR_Box) (check_hlds__modecheck_conj__Goal_34)));
                        }
#line 223 "modecheck_conj.m"
                      }
#line 214 "modecheck_conj.m"
                    check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67;
#line 214 "modecheck_conj.m"
                    check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72;
#line 214 "modecheck_conj.m"
                  }
#line 213 "modecheck_conj.m"
                else
#line 192 "modecheck_conj.m"
                  {
#line 192 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__FirstErrorInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Errors_35, (MR_Integer) 0)));
#line 192 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_78_78;
#line 192 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_79_79;
#line 192 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Errors_35, (MR_Integer) 1)));

#line 193 "modecheck_conj.m"
                    {
#line 193 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_78_78);
                    }
#line 194 "modecheck_conj.m"
                    {
#line 194 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_conj__InstMap0_31, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_78_78, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_79_79);
                    }
#line 195 "modecheck_conj.m"
                    {
#line 195 "modecheck_conj.m"
                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_conj__NonLocalVars_33, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80);
                    }
#line 196 "modecheck_conj.m"
                    {
#line 196 "modecheck_conj.m"
                      check_hlds__delay_info__delay_info_delay_goal_4_p_0(check_hlds__modecheck_conj__FirstErrorInfo_36, check_hlds__modecheck_conj__Goal0_20, check_hlds__modecheck_conj__DelayInfo0_32, &check_hlds__modecheck_conj__DelayInfo1_38);
                    }
#line 210 "modecheck_conj.m"
#line 210 "modecheck_conj.m"
                    switch (check_hlds__modecheck_conj__Impure_29) {
#line 210 "modecheck_conj.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 210 "modecheck_conj.m"
                      case (MR_Integer) 0:
#line 211 "modecheck_conj.m"
                        check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67;
#line 210 "modecheck_conj.m"
                        break;
#line 210 "modecheck_conj.m"
                      case (MR_Integer) 1:
#line 200 "modecheck_conj.m"
                        {
#line 200 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_36, (MR_Integer) 0)));
#line 200 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ImpureError_43;
#line 200 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__Context_44;
#line 200 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ModeContext_45;
#line 200 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__ImpureErrorInfo_46;
#line 200 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_81_81;
#line 200 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_82_82;
#line 201 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_36, (MR_Integer) 1)));
#line 201 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_36, (MR_Integer) 2)));
#line 201 "modecheck_conj.m"
                          MR_Word check_hlds__modecheck_conj__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_36, (MR_Integer) 3)));

#line 203 "modecheck_conj.m"
                          {
#line 203 "modecheck_conj.m"
                            check_hlds__modecheck_conj__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_39));
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, 1) = ((MR_Box) (check_hlds__modecheck_conj__FirstErrorInfo_36));
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_82_82, 2) = ((MR_Box) (check_hlds__modecheck_conj__Goal0_20));
#line 203 "modecheck_conj.m"
                          }
#line 203 "modecheck_conj.m"
                          {
#line 203 "modecheck_conj.m"
                            check_hlds__modecheck_conj__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_81_81, 0) = ((MR_Box) (check_hlds__modecheck_conj__V_82_82));
#line 203 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "modecheck_conj.m"
                          }
#line 202 "modecheck_conj.m"
                          {
#line 202 "modecheck_conj.m"
                            check_hlds__modecheck_conj__ImpureError_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 202 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 202 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_43, 1) = ((MR_Box) (check_hlds__modecheck_conj__V_81_81));
#line 202 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "modecheck_conj.m"
                          }
#line 205 "modecheck_conj.m"
                          {
#line 205 "modecheck_conj.m"
                            check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_conj__Context_44);
                          }
#line 206 "modecheck_conj.m"
                          {
#line 206 "modecheck_conj.m"
                            check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_conj__ModeContext_45);
                          }
#line 207 "modecheck_conj.m"
                          {
#line 207 "modecheck_conj.m"
                            check_hlds__modecheck_conj__ImpureErrorInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 207 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_46, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_39));
#line 207 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_46, 1) = ((MR_Box) (check_hlds__modecheck_conj__ImpureError_43));
#line 207 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_46, 2) = ((MR_Box) (check_hlds__modecheck_conj__Context_44));
#line 207 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_46, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeContext_45));
#line 207 "modecheck_conj.m"
                          }
#line 209 "modecheck_conj.m"
                          {
#line 209 "modecheck_conj.m"
                            check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85, 0) = ((MR_Box) (check_hlds__modecheck_conj__ImpureErrorInfo_46));
#line 209 "modecheck_conj.m"
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85, 1) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67));
#line 209 "modecheck_conj.m"
                          }
#line 200 "modecheck_conj.m"
                        }
#line 210 "modecheck_conj.m"
                        break;
#line 210 "modecheck_conj.m"
                    }
#line 192 "modecheck_conj.m"
                    check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69;
#line 192 "modecheck_conj.m"
                  }
#line 229 "modecheck_conj.m"
                {
#line 229 "modecheck_conj.m"
                  check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&check_hlds__modecheck_conj__WokenGoals_49, check_hlds__modecheck_conj__DelayInfo1_38, &check_hlds__modecheck_conj__DelayInfo_50);
                }
#line 230 "modecheck_conj.m"
                {
#line 230 "modecheck_conj.m"
                  check_hlds__modecheck_conj__Goals1_99 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__WokenGoals_49, check_hlds__modecheck_conj__Goals0_21);
                }
#line 233 "modecheck_conj.m"
                if ((check_hlds__modecheck_conj__WokenGoals_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "modecheck_conj.m"
                  check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80;
#line 233 "modecheck_conj.m"
                else
#line 233 "modecheck_conj.m"
                  {
#line 233 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__WokenGoals_49, (MR_Integer) 1)));
#line 234 "modecheck_conj.m"
                    MR_Word check_hlds__modecheck_conj__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__WokenGoals_49, (MR_Integer) 0)));

#line 233 "modecheck_conj.m"
                    if ((check_hlds__modecheck_conj__V_106_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "modecheck_conj.m"
                      {
#line 235 "modecheck_conj.m"
                        {
#line 235 "modecheck_conj.m"
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goal", check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93);
                        }
#line 234 "modecheck_conj.m"
                      }
#line 233 "modecheck_conj.m"
                    else
#line 237 "modecheck_conj.m"
                      {
#line 238 "modecheck_conj.m"
                        {
#line 238 "modecheck_conj.m"
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goals", check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93);
                        }
#line 237 "modecheck_conj.m"
                      }
#line 233 "modecheck_conj.m"
                  }
#line 240 "modecheck_conj.m"
                {
#line 240 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo_50, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94);
                }
#line 241 "modecheck_conj.m"
                {
#line 241 "modecheck_conj.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94, &check_hlds__modecheck_conj__InstMap_55);
                }
#line 242 "modecheck_conj.m"
                {
#line 242 "modecheck_conj.m"
                  check_hlds__modecheck_conj__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_conj__InstMap_55);
                }
#line 247 "modecheck_conj.m"
                if (check_hlds__modecheck_conj__succeeded)
#line 246 "modecheck_conj.m"
                  {
#line 246 "modecheck_conj.m"
                    {
#line 246 "modecheck_conj.m"
                      check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_conj__Goals1_99, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_8);
                    }
#line 246 "modecheck_conj.m"
                    *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_6 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85;
#line 246 "modecheck_conj.m"
                    *check_hlds__modecheck_conj__STATE_VARIABLE_Goals_4 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74;
#line 246 "modecheck_conj.m"
                  }
#line 247 "modecheck_conj.m"
                else
#line 249 "modecheck_conj.m"
                  {
#line 249 "modecheck_conj.m"
                    /* direct tailcall eliminated */
#line 249 "modecheck_conj.m"
                    {
#line 249 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_conj__Goals1_99;
#line 249 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0__tmp_copy_3 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74;
#line 249 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0__tmp_copy_5 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85;
#line 249 "modecheck_conj.m"
                      MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0__tmp_copy_7 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94;

#line 249 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0__tmp_copy_7;
#line 249 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0__tmp_copy_5;
#line 249 "modecheck_conj.m"
                      check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0__tmp_copy_3;
#line 249 "modecheck_conj.m"
                      check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__HeadVar__2__tmp_copy_2;
#line 249 "modecheck_conj.m"
                    }
#line 249 "modecheck_conj.m"
                    continue;
#line 249 "modecheck_conj.m"
                  }
#line 163 "modecheck_conj.m"
              }
#line 149 "modecheck_conj.m"
          }
#line 146 "modecheck_conj.m"
      }
#line 146 "modecheck_conj.m"
      break;
#line 146 "modecheck_conj.m"
    }
#line 141 "modecheck_conj.m"
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
#line 60 "modecheck_conj.m"
  {
#line 60 "modecheck_conj.m"
    MR_bool check_hlds__modecheck_conj__succeeded;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__TypeCtorInfo_57_57;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__TypeCtorInfo_21_71;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__OldErrors_10;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__OldMayInit_11;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo0_12;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo1_13;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__LiveVars1_14;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_15;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RevImpurityErrors0_16;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo2_17;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals0_18;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayInfo3_19;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals2_20;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__DelayedGoals_21;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__RevImpurityErrors_22;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__NewErrors_23;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Errors_24;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__GoalsCord_67;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__V_68_68;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals0_83;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__Goals1_84;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_85;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_86;
#line 60 "modecheck_conj.m"
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_87;

#line 61 "modecheck_conj.m"
    {
#line 61 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_conj__OldErrors_10);
    }
#line 62 "modecheck_conj.m"
    {
#line 62 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
    }
#line 64 "modecheck_conj.m"
    {
#line 64 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__OldMayInit_11);
    }
#line 66 "modecheck_conj.m"
    {
#line 66 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__DelayInfo0_12);
    }
#line 67 "modecheck_conj.m"
    {
#line 67 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_12, &check_hlds__modecheck_conj__DelayInfo1_13);
    }
#line 68 "modecheck_conj.m"
    {
#line 68 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_13, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41);
    }
#line 70 "modecheck_conj.m"
    {
#line 70 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__LiveVars1_14);
    }
#line 71 "modecheck_conj.m"
    {
#line 71 "modecheck_conj.m"
      check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__Goals0_7, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42);
    }
#line 75 "modecheck_conj.m"
    {
#line 75 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 1, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44);
    }
#line 4563 "check_hlds.modecheck_conj.c"
    check_hlds__modecheck_conj__TypeCtorInfo_21_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 138 "modecheck_conj.m"
    {
#line 138 "modecheck_conj.m"
      check_hlds__modecheck_conj__V_68_68 = mercury__cord__init_0_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_71);
    }
#line 137 "modecheck_conj.m"
    {
#line 137 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__Goals0_7, check_hlds__modecheck_conj__V_68_68, &check_hlds__modecheck_conj__GoalsCord_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_conj__RevImpurityErrors0_16, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46);
    }
#line 139 "modecheck_conj.m"
    {
#line 139 "modecheck_conj.m"
      check_hlds__modecheck_conj__Goals1_15 = mercury__cord__list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_71, check_hlds__modecheck_conj__GoalsCord_67);
    }
#line 80 "modecheck_conj.m"
    {
#line 80 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_conj__DelayInfo2_17);
    }
#line 81 "modecheck_conj.m"
    {
#line 81 "modecheck_conj.m"
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_17, &check_hlds__modecheck_conj__DelayedGoals0_18, &check_hlds__modecheck_conj__DelayInfo3_19);
    }
#line 82 "modecheck_conj.m"
    {
#line 82 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_19, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47);
    }
#line 271 "modecheck_conj.m"
    {
#line 271 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_try_det_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__DelayedGoals0_18, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_85, &check_hlds__modecheck_conj__Goals0_83, check_hlds__modecheck_conj__RevImpurityErrors0_16, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_86, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_87);
    }
#line 276 "modecheck_conj.m"
    {
#line 276 "modecheck_conj.m"
      check_hlds__modecheck_conj__modecheck_delayed_goals_eager_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__STATE_VARIABLE_DelayedGoals_22_85, &check_hlds__modecheck_conj__DelayedGoals_21, &check_hlds__modecheck_conj__Goals1_84, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_23_86, &check_hlds__modecheck_conj__RevImpurityErrors_22, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_24_87, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48);
    }
#line 278 "modecheck_conj.m"
    {
#line 278 "modecheck_conj.m"
      check_hlds__modecheck_conj__Goals2_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals0_83, check_hlds__modecheck_conj__Goals1_84);
    }
#line 90 "modecheck_conj.m"
    {
#line 90 "modecheck_conj.m"
      *check_hlds__modecheck_conj__Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals1_15, check_hlds__modecheck_conj__Goals2_20);
    }
#line 92 "modecheck_conj.m"
    {
#line 92 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_conj__NewErrors_23);
    }
#line 4620 "check_hlds.modecheck_conj.c"
    check_hlds__modecheck_conj__TypeCtorInfo_57_57 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
#line 93 "modecheck_conj.m"
    {
#line 93 "modecheck_conj.m"
      check_hlds__modecheck_conj__Errors_24 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__OldErrors_10, check_hlds__modecheck_conj__NewErrors_23);
    }
#line 94 "modecheck_conj.m"
    {
#line 94 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_conj__Errors_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49);
    }
#line 106 "modecheck_conj.m"
    if ((check_hlds__modecheck_conj__DelayedGoals_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "modecheck_conj.m"
      {
#line 98 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__ImpurityErrors_25;
#line 98 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Errors5_26;
#line 98 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__Errors6_27;

#line 102 "modecheck_conj.m"
        {
#line 102 "modecheck_conj.m"
          mercury__list__reverse_2_p_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__RevImpurityErrors_22, &check_hlds__modecheck_conj__ImpurityErrors_25);
        }
#line 103 "modecheck_conj.m"
        {
#line 103 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__Errors5_26);
        }
#line 104 "modecheck_conj.m"
        {
#line 104 "modecheck_conj.m"
          check_hlds__modecheck_conj__Errors6_27 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_57_57, check_hlds__modecheck_conj__Errors5_26, check_hlds__modecheck_conj__ImpurityErrors_25);
        }
#line 105 "modecheck_conj.m"
        {
#line 105 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_conj__Errors6_27, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
        }
#line 98 "modecheck_conj.m"
      }
#line 106 "modecheck_conj.m"
    else
#line 107 "modecheck_conj.m"
      {
#line 107 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__FirstDelayedGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 0)));
#line 107 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__MoreDelayedGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 1)));
#line 107 "modecheck_conj.m"
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50;

#line 111 "modecheck_conj.m"
        {
#line 111 "modecheck_conj.m"
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__modecheck_conj__LiveVars1_14, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50);
        }
#line 116 "modecheck_conj.m"
        if ((check_hlds__modecheck_conj__MoreDelayedGoals_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 113 "modecheck_conj.m"
          {
#line 113 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 1)));
#line 114 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___DVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 0)));
#line 114 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj___DGoal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_28, (MR_Integer) 2)));

#line 115 "modecheck_conj.m"
            {
#line 115 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_add_error_3_p_0(check_hlds__modecheck_conj__Error_31, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
            }
#line 113 "modecheck_conj.m"
          }
#line 116 "modecheck_conj.m"
        else
#line 117 "modecheck_conj.m"
          {
#line 117 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars_35;
#line 117 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__ModeError_36;
#line 117 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_94_94;
#line 117 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars1_97;
#line 117 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Rest_100;
#line 117 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__Vars2_103;
#line 117 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_104_104;
#line 736 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_98_98;
#line 736 "modecheck_conj.m"
            MR_Word check_hlds__modecheck_conj__V_99_99;

#line 730 "modecheck_conj.m"
            {
#line 730 "modecheck_conj.m"
              check_hlds__modecheck_conj__V_94_94 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 736 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 0)));
#line 736 "modecheck_conj.m"
            check_hlds__modecheck_conj__Rest_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_21, (MR_Integer) 1)));
#line 736 "modecheck_conj.m"
            check_hlds__modecheck_conj__Vars1_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_104_104, (MR_Integer) 0)));
#line 736 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_104_104, (MR_Integer) 1)));
#line 736 "modecheck_conj.m"
            check_hlds__modecheck_conj__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__V_104_104, (MR_Integer) 2)));
#line 737 "modecheck_conj.m"
            {
#line 737 "modecheck_conj.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__V_94_94, check_hlds__modecheck_conj__Vars1_97, &check_hlds__modecheck_conj__Vars2_103);
            }
#line 738 "modecheck_conj.m"
            {
#line 738 "modecheck_conj.m"
              check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(check_hlds__modecheck_conj__Rest_100, check_hlds__modecheck_conj__Vars2_103, &check_hlds__modecheck_conj__Vars_35);
            }
#line 119 "modecheck_conj.m"
            {
#line 119 "modecheck_conj.m"
              check_hlds__modecheck_conj__ModeError_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 119 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 119 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 1) = ((MR_Box) (check_hlds__modecheck_conj__DelayedGoals_21));
#line 119 "modecheck_conj.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 119 "modecheck_conj.m"
            }
#line 120 "modecheck_conj.m"
            {
#line 120 "modecheck_conj.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_conj__Vars_35, check_hlds__modecheck_conj__ModeError_36, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_50_50, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54);
            }
#line 117 "modecheck_conj.m"
          }
#line 107 "modecheck_conj.m"
      }
#line 124 "modecheck_conj.m"
    {
#line 124 "modecheck_conj.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(check_hlds__modecheck_conj__OldMayInit_11, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_54_54, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_38);
#line 124 "modecheck_conj.m"
      return;
    }
#line 60 "modecheck_conj.m"
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
