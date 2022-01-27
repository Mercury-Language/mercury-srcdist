/*
** Automatically generated from `accumulator.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module transform_hlds.accumulator. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__accumulator__init
ENDINIT
*/

#include "transform_hlds.accumulator.mih"


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
#include "solutions.mih"
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
#include "check_hlds.unify_proc.mih"
#include "hlds.assertion.mih"
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
#include "hlds.quantification.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.goal_store.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1873 "accumulator.m"
struct transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0_s {
#line 1873 "accumulator.m"
  MR_Word * transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__HeadVar__2_9;
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__cont;
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__cont_env_ptr;
#line 1873 "accumulator.m"
  MR_bool transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__succeeded;
#line 1873 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__V_10_10;
#line 1875 "accumulator.m"
  MR_Box transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__conv0_HeadVar__2_9;
#line 1873 "accumulator.m"
};

#line 1399 "accumulator.m"
struct transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0_s {
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__ModuleInfo_6;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__VarTypes_7;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__Var_9;
#line 1399 "accumulator.m"
  MR_Word * transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__HeadVar__5_29;
#line 1399 "accumulator.m"
  MR_Cont transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__cont;
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__cont_env_ptr;
#line 1399 "accumulator.m"
  MR_bool transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__succeeded;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__TypeCtorInfo_50_50;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__TypeInfo_55_55;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__Goal_12;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMap0_13;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__GoalInfo_16;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMapDelta_17;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMap_18;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__ChangedVars_19;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_30_30;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_31_31;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_52_52;
#line 1401 "accumulator.m"
  MR_Box transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__conv0_HeadVar__5_29;
#line 1399 "accumulator.m"
};

#line 597 "accumulator.m"
struct transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0_s {
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__PredId_5;
#line 597 "accumulator.m"
  MR_Integer transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__ProcId_6;
#line 597 "accumulator.m"
  MR_Word * transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__HeadVar__4_19;
#line 597 "accumulator.m"
  MR_Cont transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__cont;
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__cont_env_ptr;
#line 597 "accumulator.m"
  MR_bool transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded;
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__Goal_11;
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_20_20;
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_21_21;
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22;
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_26_26;
#line 597 "accumulator.m"
  MR_Integer transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_27_27;
#line 598 "accumulator.m"
  MR_Box transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__conv0_HeadVar__4_19;
#line 597 "accumulator.m"
};

#line 1873 "accumulator.m"
struct transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0_s {
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__wrapper_arg_1;
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__cont;
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__cont_env_ptr;
#line 1873 "accumulator.m"
  MR_Word transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__conv0_HeadVar__2_9;
#line 1873 "accumulator.m"
};

#line 1873 "accumulator.m"
struct transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0_s {
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__wrapper_arg_1;
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__cont;
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__cont_env_ptr;
#line 1873 "accumulator.m"
  MR_Word transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__conv2_HeadVar__2_9;
#line 1873 "accumulator.m"
};

#line 1399 "accumulator.m"
struct transform_hlds__accumulator__accu_related_5_p_0_2_env_0_s {
#line 1399 "accumulator.m"
  MR_Box * transform_hlds__accumulator__accu_related_5_p_0_2_env_0__wrapper_arg_1;
#line 1399 "accumulator.m"
  MR_Cont transform_hlds__accumulator__accu_related_5_p_0_2_env_0__cont;
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__accu_related_5_p_0_2_env_0__cont_env_ptr;
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_related_5_p_0_2_env_0__conv0_HeadVar__5_29;
#line 1399 "accumulator.m"
};

#line 1873 "accumulator.m"
struct transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0_s {
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__wrapper_arg_1;
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__cont;
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__cont_env_ptr;
#line 1873 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__conv1_HeadVar__2_9;
#line 1873 "accumulator.m"
};

#line 953 "accumulator.m"
struct transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0_s {
#line 953 "accumulator.m"
  MR_Word transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__GoalId_6;
#line 953 "accumulator.m"
  MR_Word * transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__LessThanGoalId_7;
#line 953 "accumulator.m"
  MR_Cont transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__cont;
#line 953 "accumulator.m"
  void * transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__cont_env_ptr;
#line 956 "accumulator.m"
  MR_bool transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__succeeded;
#line 956 "accumulator.m"
  MR_Word transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__Case_9;
#line 956 "accumulator.m"
  MR_Integer transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__I_10;
#line 956 "accumulator.m"
  MR_Integer transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__J_11;
#line 956 "accumulator.m"
  MR_Word transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__V_13_13;
#line 957 "accumulator.m"
  MR_Box transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__conv0_LessThanGoalId_7;
#line 953 "accumulator.m"
};

#line 927 "accumulator.m"
struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s {
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__ModuleInfo_8;
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__VarTypes_9;
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__FullyStrict_10;
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalId_11;
#line 927 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_update_7_p_0_env_0__K_12;
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalStore_13;
#line 930 "accumulator.m"
  MR_bool transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded;
#line 930 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__TypeCtorInfo_41_41;
#line 930 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__Case_15;
#line 930 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__Before_17;
#line 930 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__LaterGoal_18;
#line 930 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__LaterInstMap_19;
#line 944 "accumulator.m"
  jmp_buf transform_hlds__accumulator__accu_update_7_p_0_env_0__commit_0;
#line 944 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__LessThanGoalId_28;
#line 944 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__EarlierGoal_29;
#line 944 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__EarlierInstMap_30;
#line 944 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__V_33_33;
#line 944 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__Case_64;
#line 944 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_update_7_p_0_env_0__I_65;
#line 944 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_update_7_p_0_env_0__J_66;
#line 944 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_update_7_p_0_env_0__V_68_68;
#line 957 "accumulator.m"
  MR_Box transform_hlds__accumulator__accu_update_7_p_0_env_0__conv1_LessThanGoalId_28;
#line 927 "accumulator.m"
};

#line 885 "accumulator.m"
struct transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0_s {
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ModuleInfo_8;
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__VarTypes_9;
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__FullyStrict_10;
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalId_11;
#line 885 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__K_12;
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalStore_13;
#line 889 "accumulator.m"
  MR_bool transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded;
#line 889 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74;
#line 889 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Case_15;
#line 889 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Before_17;
#line 889 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Assoc_18;
#line 889 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ConstructAssoc_19;
#line 889 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LaterGoal_20;
#line 889 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LaterInstMap_21;
#line 915 "accumulator.m"
  jmp_buf transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__commit_0;
#line 915 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LessThanGoalId_46;
#line 915 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__EarlierGoal_47;
#line 915 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__EarlierInstMap_48;
#line 915 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__V_54_54;
#line 885 "accumulator.m"
};

#line 851 "accumulator.m"
struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s {
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__ModuleInfo_8;
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__VarTypes_9;
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__FullyStrict_10;
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalId_11;
#line 851 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_construct_7_p_0_env_0__K_12;
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalStore_13;
#line 855 "accumulator.m"
  MR_bool transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded;
#line 855 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__TypeCtorInfo_53_53;
#line 855 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__Case_15;
#line 855 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__Before_17;
#line 855 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__Construct_18;
#line 855 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__LaterGoal_19;
#line 855 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__LaterInstMap_20;
#line 870 "accumulator.m"
  jmp_buf transform_hlds__accumulator__accu_construct_7_p_0_env_0__commit_0;
#line 870 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__LessThanGoalId_34;
#line 870 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__EarlierGoal_35;
#line 870 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__EarlierInstMap_36;
#line 870 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__V_39_39;
#line 870 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__Case_58;
#line 870 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_construct_7_p_0_env_0__I_59;
#line 870 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_construct_7_p_0_env_0__J_60;
#line 870 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_construct_7_p_0_env_0__V_62_62;
#line 957 "accumulator.m"
  MR_Box transform_hlds__accumulator__accu_construct_7_p_0_env_0__conv0_LessThanGoalId_34;
#line 851 "accumulator.m"
};

#line 824 "accumulator.m"
struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s {
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__ModuleInfo_8;
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__VarTypes_9;
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__FullyStrict_10;
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalId_11;
#line 824 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_assoc_7_p_0_env_0__K_12;
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalStore_13;
#line 827 "accumulator.m"
  MR_bool transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded;
#line 827 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__TypeCtorInfo_41_41;
#line 827 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Case_15;
#line 827 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Before_17;
#line 827 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LaterGoal_18;
#line 827 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LaterInstMap_19;
#line 841 "accumulator.m"
  jmp_buf transform_hlds__accumulator__accu_assoc_7_p_0_env_0__commit_0;
#line 841 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LessThanGoalId_28;
#line 841 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__EarlierGoal_29;
#line 841 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__EarlierInstMap_30;
#line 841 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__V_33_33;
#line 841 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Case_59;
#line 841 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_assoc_7_p_0_env_0__I_60;
#line 841 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_assoc_7_p_0_env_0__J_61;
#line 841 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_assoc_7_p_0_env_0__V_63_63;
#line 957 "accumulator.m"
  MR_Box transform_hlds__accumulator__accu_assoc_7_p_0_env_0__conv0_LessThanGoalId_28;
#line 824 "accumulator.m"
};

#line 801 "accumulator.m"
struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s {
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__ModuleInfo_8;
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__VarTypes_9;
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__FullyStrict_10;
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalId_11;
#line 801 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_before_7_p_0_env_0__K_12;
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalStore_13;
#line 804 "accumulator.m"
  MR_bool transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded;
#line 804 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__TypeCtorInfo_34_34;
#line 804 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__Case_15;
#line 804 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__Before_17;
#line 804 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__LaterGoal_18;
#line 804 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__LaterInstMap_19;
#line 814 "accumulator.m"
  jmp_buf transform_hlds__accumulator__accu_before_7_p_0_env_0__commit_0;
#line 814 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__LessThanGoalId_20;
#line 814 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__EarlierGoal_21;
#line 814 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__EarlierInstMap_22;
#line 814 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__V_24_24;
#line 814 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__Case_39;
#line 814 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_before_7_p_0_env_0__I_40;
#line 814 "accumulator.m"
  MR_Integer transform_hlds__accumulator__accu_before_7_p_0_env_0__J_41;
#line 814 "accumulator.m"
  MR_Word transform_hlds__accumulator__accu_before_7_p_0_env_0__V_43_43;
#line 957 "accumulator.m"
  MR_Box transform_hlds__accumulator__accu_before_7_p_0_env_0__conv0_LessThanGoalId_20;
#line 801 "accumulator.m"
};

#line 597 "accumulator.m"
struct transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0_s {
#line 597 "accumulator.m"
  MR_Box * transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__wrapper_arg_1;
#line 597 "accumulator.m"
  MR_Cont transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__cont;
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__cont_env_ptr;
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__conv0_HeadVar__4_19;
#line 597 "accumulator.m"
};

#line 541 "accumulator.m"
struct transform_hlds__accumulator__is_recursive_case_2_p_0_env_0_s {
#line 541 "accumulator.m"
  MR_Word transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__Goals_3;
#line 541 "accumulator.m"
  MR_Word transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__HeadVar__2_2;
#line 543 "accumulator.m"
  MR_bool transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded;
#line 543 "accumulator.m"
  jmp_buf transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__commit_0;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__PredId_4;
#line 543 "accumulator.m"
  MR_Integer transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__ProcId_5;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__RecursiveCall_7;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_14_14;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_17_17;
#line 543 "accumulator.m"
  MR_Integer transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_18_18;
#line 541 "accumulator.m"
};

#line 455 "accumulator.m"
struct transform_hlds__accumulator__identify_goal_type_9_p_0_env_0_s {
#line 455 "accumulator.m"
  MR_Word transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__PredId_10;
#line 455 "accumulator.m"
  MR_Integer transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__ProcId_11;
#line 460 "accumulator.m"
  MR_bool transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded;
#line 486 "accumulator.m"
  MR_Word transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__GoalAList_56;
#line 543 "accumulator.m"
  jmp_buf transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__commit_0;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__RecursiveCall_68;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_75_75;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76;
#line 543 "accumulator.m"
  MR_Word transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_78_78;
#line 543 "accumulator.m"
  MR_Integer transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_79_79;
#line 455 "accumulator.m"
};


#line 621 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0;

#line 624 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 627 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__accumulator__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 630 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__accumulator__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 633 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__accumulator__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 636 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__accumulator__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 639 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 642 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__accumulator__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;

#line 645 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 648 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__accumulator__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 651 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_assoc_0_0[3];

#line 654 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_assoc_0_0;

#line 657 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_assoc_0_0[1];

#line 660 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_assoc_0[1];

#line 663 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_assoc_0[1];

#line 666 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_assoc_0[1];

#line 669 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;

#line 672 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_base_0_0[3];

#line 675 "transform_hlds.accumulator.c"
static const MR_ConstString transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_base_0_0[3];

#line 678 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_base_0_0;

#line 681 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_base_0_0[1];

#line 684 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_base_0[1];

#line 687 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_base_0[1];

#line 690 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_base_0[1];

#line 693 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_accu_case_0_0;

#line 696 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_accu_case_0_1;

#line 699 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__enum_value_ordered_accu_case_0[2];

#line 702 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__enum_name_ordered_accu_case_0[2];

#line 705 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_case_0[2];

#line 708 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_goal_id_0_0[2];

#line 711 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_goal_id_0_0;

#line 714 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_goal_id_0_0[1];

#line 717 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_goal_id_0[1];

#line 720 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_goal_id_0[1];

#line 723 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_goal_id_0[1];

#line 726 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__accumulator__tree234__ti_tree234_2transform_hlds__accumulator__type_ctor_info_accu_goal_id_0transform_hlds__goal_store__type_ctor_info_stored_goal_0;

#line 729 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_sets_0_0[6];

#line 732 "transform_hlds.accumulator.c"
static const MR_ConstString transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_sets_0_0[6];

#line 735 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_sets_0_0;

#line 738 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_sets_0_0[1];

#line 741 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_sets_0[1];

#line 744 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_sets_0[1];

#line 747 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_sets_0[1];

#line 750 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__accumulator__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 753 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_substs_0_0[4];

#line 756 "transform_hlds.accumulator.c"
static const MR_ConstString transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_substs_0_0[4];

#line 759 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_substs_0_0;

#line 762 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_substs_0_0[1];

#line 765 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_substs_0[1];

#line 768 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_substs_0[1];

#line 771 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_substs_0[1];

#line 774 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_warning_0_0[4];

#line 777 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_warning_0_0;

#line 780 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_warning_0_0[1];

#line 783 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_warning_0[1];

#line 786 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_warning_0[1];

#line 789 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_warning_0[1];

#line 792 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_store_info_0_0[3];

#line 795 "transform_hlds.accumulator.c"
static const MR_ConstString transform_hlds__accumulator__transform_hlds__accumulator__field_names_store_info_0_0[3];

#line 798 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_store_info_0_0;

#line 801 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_store_info_0_0[1];

#line 804 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_store_info_0[1];

#line 807 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_store_info_0[1];

#line 810 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_store_info_0[1];

#line 813 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_0;

#line 816 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_1;

#line 819 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_2;

#line 822 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_3;

#line 825 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_4;

#line 828 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_5;

#line 831 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__enum_value_ordered_top_level_0[6];

#line 834 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__enum_name_ordered_top_level_0[6];

#line 837 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_top_level_0[6];

#line 840 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_assoc_0_0_10001(
#line 843 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 845 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 848 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_assoc_0_0_10001(
#line 851 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 853 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 855 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 858 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_base_0_0_10001(
#line 861 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 863 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 866 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_base_0_0_10001(
#line 869 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 871 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 873 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 876 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_case_0_0_10001(
#line 879 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 881 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 884 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_case_0_0_10001(
#line 887 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 889 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 891 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 894 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_goal_id_0_0_10001(
#line 897 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 899 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 902 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_goal_id_0_0_10001(
#line 905 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 907 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 909 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 912 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_goal_store_0_0_10001(
#line 915 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 917 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 920 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_goal_store_0_0_10001(
#line 923 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 925 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 927 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 930 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_sets_0_0_10001(
#line 933 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 935 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 938 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_sets_0_0_10001(
#line 941 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 943 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 945 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 948 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_subst_0_0_10001(
#line 951 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 953 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 956 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_subst_0_0_10001(
#line 959 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 961 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 963 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 966 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_substs_0_0_10001(
#line 969 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 971 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 974 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_substs_0_0_10001(
#line 977 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 979 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 981 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 984 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_warning_0_0_10001(
#line 987 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 989 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 992 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_warning_0_0_10001(
#line 995 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 997 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 999 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 1002 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____store_info_0_0_10001(
#line 1005 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1007 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 1010 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____store_info_0_0_10001(
#line 1013 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1015 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1017 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 1020 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____top_level_0_0_10001(
#line 1023 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1025 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2);

#line 1028 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____top_level_0_0_10001(
#line 1031 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1033 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1035 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3);

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1889__1_3_p_0(
#line 1889 "accumulator.m"
  MR_Word transform_hlds__accumulator__GS_5,
#line 1889 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_11,
#line 1889 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__3_12);

#line 1875 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_2(
#line 1875 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_1(
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0(
#line 1873 "accumulator.m"
  MR_Word transform_hlds__accumulator__GS_3,
#line 1873 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_9,
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(
#line 1861 "accumulator.m"
  MR_Word transform_hlds__accumulator__Subst_7,
#line 1861 "accumulator.m"
  MR_Word transform_hlds__accumulator__From_8,
#line 1861 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_18,
#line 1861 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_19,
#line 1861 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__5_20);

#line 1566 "accumulator.m"
static MR_Integer MR_CALL 
transform_hlds__accumulator__IntroducedFrom__func__acc_pred_info__1566__1_1_f_0(
#line 1566 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_42);

#line 1512 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1512__1_3_p_0(
#line 1512 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccVarSubst_25,
#line 1512 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_45,
#line 1512 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__3_46);

#line 1417 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1417__1_1_p_0(
#line 1417 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_40);

#line 1401 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_2(
#line 1401 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 1399 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_1(
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 1399 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0(
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_6,
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_7,
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_8,
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__Var_9,
#line 1399 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__5_29,
#line 1399 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 1380 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_divide_base_case__1380__1_5_p_0(
#line 1380 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_9,
#line 1380 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_10,
#line 1380 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_11,
#line 1380 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_32,
#line 1380 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__5_33);

#line 1130 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1130__1_4_p_0(
#line 1130 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_19,
#line 1130 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_66,
#line 1130 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_67,
#line 1130 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__4_68);

#line 1072 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__is_associative_construction__1072__1_4_p_0(
#line 1072 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_4,
#line 1072 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_5,
#line 1072 "accumulator.m"
  MR_Word transform_hlds__accumulator__ConsId_6,
#line 1072 "accumulator.m"
  MR_Integer transform_hlds__accumulator__HeadVar__4_15);

#line 1051 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1051__1_5_p_0(
#line 1051 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_5,
#line 1051 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_6,
#line 1051 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args_7,
#line 1051 "accumulator.m"
  MR_Integer transform_hlds__accumulator__HeadVar__4_16,
#line 1051 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__5_17);

#line 652 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__652__1_2_p_0(
#line 652 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_55,
#line 652 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_56);

#line 648 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__648__1_2_p_0(
#line 648 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_70,
#line 648 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_71);

#line 647 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__647__1_2_p_0(
#line 647 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_67,
#line 647 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_68);

#line 642 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__642__1_2_p_0(
#line 642 "accumulator.m"
  MR_Word transform_hlds__accumulator__ChangedVars_37,
#line 642 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_51);

#line 598 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_2(
#line 598 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 597 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_1(
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 597 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0(
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_5,
#line 597 "accumulator.m"
  MR_Integer transform_hlds__accumulator__ProcId_6,
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_7,
#line 597 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__4_19,
#line 597 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 206 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____top_level_0_0(
#line 206 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 206 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 206 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 206 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____top_level_0_0(
#line 206 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_1,
#line 206 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 552 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____store_info_0_0(
#line 552 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 552 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 552 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 552 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____store_info_0_0(
#line 552 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 552 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 233 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_warning_0_0(
#line 233 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 233 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 233 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 233 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_warning_0_0(
#line 233 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 233 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 1081 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_substs_0_0(
#line 1081 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 1081 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1081 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 1081 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_substs_0_0(
#line 1081 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1081 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 231 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_subst_0_0(
#line 231 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 231 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 231 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 231 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_subst_0_0(
#line 231 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 231 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 666 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_sets_0_0(
#line 666 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 666 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 666 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 666 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_sets_0_0(
#line 666 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 666 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 227 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_goal_store_0_0(
#line 227 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 227 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 227 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 227 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_goal_store_0_0(
#line 227 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 227 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 218 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_goal_id_0_0(
#line 218 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 218 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 218 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 218 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_goal_id_0_0(
#line 218 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 218 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 221 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_case_0_0(
#line 221 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 221 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 221 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 221 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_case_0_0(
#line 221 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_1,
#line 221 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 1089 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_base_0_0(
#line 1089 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 1089 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1089 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 1089 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_base_0_0(
#line 1089 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1089 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 964 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_assoc_0_0(
#line 964 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 964 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 964 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3);

#line 964 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_assoc_0_0(
#line 964 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 964 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 1926 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__chain_subst_2_4_p_0(
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__TypeInfo_for_A_16,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__TypeInfo_for_B_17,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__TypeInfo_for_C_18,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__AtoB_2,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__BtoC_3,
#line 1926 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AtoC_4);

#line 1897 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__calculate_goal_info_2_p_0(
#line 1897 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalExpr_3,
#line 1897 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_2);

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_goal_list_2_f_0_1(
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1889 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1886 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__accu_goal_list_2_f_0(
#line 1886 "accumulator.m"
  MR_Word transform_hlds__accumulator__Ids_4,
#line 1886 "accumulator.m"
  MR_Word transform_hlds__accumulator__GS_5);

#line 1747 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_top_level_8_p_0(
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__TopLevel_9,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goal_10,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigBaseGoal_11,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigRecGoal_12,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__NewBaseGoal_13,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__NewRecGoal_14,
#line 1747 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigGoal_15,
#line 1747 "accumulator.m"
  MR_Word * transform_hlds__accumulator__NewGoal_16);

#line 1729 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_unification_2_p_0(
#line 1729 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1729 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Goal_5);

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0_4(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3);

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0_3(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3);

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0_1(
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0_2(
#line 1873 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 1718 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0(
#line 1718 "accumulator.m"
  MR_Word transform_hlds__accumulator__Ids_6,
#line 1718 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_7,
#line 1718 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccVarSubst_8,
#line 1718 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_9);

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_recursive_goals_8_f_0_3(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3);

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_recursive_goals_8_f_0_2(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3);

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_recursive_goals_8_f_0_1(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3);

#line 1703 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__create_new_recursive_goals_8_f_0(
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__Assoc_10,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__Constructs_11,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__Update_12,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__AssocCallSubst_13,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccVarSubst_14,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__UpdateSubst_15,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_16,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__CS_17);

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0_2(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3);

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0_1(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3);

#line 1689 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0(
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__UpdateBase_7,
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__Update_8,
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_9,
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__UpdateSubst_10,
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_11);

#line 1678 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_acc_goal_10_p_0_2(
#line 1678 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1678 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1678 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_acc_goal_10_p_0_1(
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1889 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1642 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_acc_goal_10_p_0(
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__Call_11,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_12,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_13,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__BaseIds_14,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__BasePairs_15,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_16,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_17,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__CS_18,
#line 1642 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccBaseGoal_19,
#line 1642 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccRecGoal_20);

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0_3(
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0_4(
#line 1873 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0_2(
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1889 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0_1(
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1889 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1614 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0(
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__Call_10,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_11,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_12,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__CallToHeadSubst_13,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__BaseIds_14,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_15,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_16,
#line 1614 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigBaseGoal_17,
#line 1614 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigRecGoal_18);

#line 1580 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_create_goal_17_p_0(
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__RecCallId_18,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__Accs_19,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccPredId_20,
#line 1580 "accumulator.m"
  MR_Integer transform_hlds__accumulator__AccProcId_21,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccName_22,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_23,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_24,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__CallToHeadSubst_25,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__BaseIds_26,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__BasePairs_27,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_28,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_29,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__CS_30,
#line 1580 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigBaseGoal_31,
#line 1580 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigRecGoal_32,
#line 1580 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccBaseGoal_33,
#line 1580 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccRecGoal_34);

#line 1566 "accumulator.m"
static MR_Box MR_CALL 
transform_hlds__accumulator__acc_pred_info_7_p_0_1(
#line 1566 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1566 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1);

#line 1538 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_pred_info_7_p_0(
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__NewTypes_8,
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__OutVars_9,
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__NewProcInfo_10,
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigPredId_11,
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigPredInfo_12,
#line 1538 "accumulator.m"
  MR_Integer * transform_hlds__accumulator__NewProcId_13,
#line 1538 "accumulator.m"
  MR_Word * transform_hlds__accumulator__NewPredInfo_14);

#line 1512 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_proc_info_7_p_0_1(
#line 1512 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1512 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1512 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1491 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_proc_info_7_p_0(
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__Accs0_8,
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarSet_9,
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_10,
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_11,
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigProcInfo_12,
#line 1491 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccTypes_13,
#line 1491 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccProcInfo_14);

#line 1453 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_stage3_20_p_0(
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__RecCallId_21,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__Accs_22,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarSet_23,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_24,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_25,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__CS_26,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_27,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_28,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__CallToHeadSubst_29,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__BaseCase_30,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__BasePairs_31,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_32,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__Out_33,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__TopLevel_34,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigPredId_35,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigPredInfo_36,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_0_54,
#line 1453 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_55,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_56,
#line 1453 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_57);

#line 1432 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__lookup_call_3_p_0(
#line 1432 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_4,
#line 1432 "accumulator.m"
  MR_Word transform_hlds__accumulator__Id_5,
#line 1432 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__3_3);

#line 1417 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_related_5_p_0_3(
#line 1417 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1417 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1);

#line 1399 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_related_5_p_0_1(
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 1399 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_related_5_p_0_2(
#line 1399 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1399 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1399 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 1395 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_related_5_p_0(
#line 1395 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_6,
#line 1395 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_7,
#line 1395 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_8,
#line 1395 "accumulator.m"
  MR_Word transform_hlds__accumulator__Var_9,
#line 1395 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Related_10);

#line 1380 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0_4(
#line 1380 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1380 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1380 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0_2(
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0_3(
#line 1873 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 1372 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0_1(
#line 1372 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1372 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1372 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1363 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0(
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_9,
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_10,
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_11,
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__UpdateOut_12,
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__Out_13,
#line 1363 "accumulator.m"
  MR_Word * transform_hlds__accumulator__UpdateBase_14,
#line 1363 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AssocBase_15,
#line 1363 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OtherBase_16);

#line 1303 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_process_update_set_13_p_0(
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_4,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Substs_6,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_7,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_8,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_9,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_10,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__11_11,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__12_12,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__13_13);

#line 1289 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_heuristic_5_p_0(
#line 1289 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1289 "accumulator.m"
  MR_String transform_hlds__accumulator__HeadVar__2_2,
#line 1289 "accumulator.m"
  MR_Integer transform_hlds__accumulator__HeadVar__3_3,
#line 1289 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_4,
#line 1289 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Set_10);

#line 1282 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_has_heuristic_3_p_0(
#line 1282 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1282 "accumulator.m"
  MR_String transform_hlds__accumulator__HeadVar__2_2,
#line 1282 "accumulator.m"
  MR_Integer transform_hlds__accumulator__HeadVar__3_3);

#line 1208 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_process_assoc_set_12_p_0(
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_4,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Substs_6,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_7,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_8,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_9,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_10,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__CS_11,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__12_12);

#line 1192 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_var_7_p_0(
#line 1192 "accumulator.m"
  MR_Word transform_hlds__accumulator__OldVar_8,
#line 1192 "accumulator.m"
  MR_String transform_hlds__accumulator__Prefix_9,
#line 1192 "accumulator.m"
  MR_Word * transform_hlds__accumulator__NewVar_10,
#line 1192 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_16,
#line 1192 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_17,
#line 1192 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_18,
#line 1192 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_19);

#line 1180 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_var_subst_init_6_p_0(
#line 1180 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1180 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_2,
#line 1180 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_3,
#line 1180 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_4,
#line 1180 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_5,
#line 1180 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__6_6);

#line 1165 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_substs_init_6_p_0(
#line 1165 "accumulator.m"
  MR_Word transform_hlds__accumulator__InitAccs_7,
#line 1165 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_16,
#line 1165 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_17,
#line 1165 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_18,
#line 1165 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_19,
#line 1165 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Substs_10);

#line 1130 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_stage2_15_p_0_1(
#line 1130 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1130 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1130 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1130 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3);

#line 1111 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_stage2_15_p_0(
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_16,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__ProcInfo0_17,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_18,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_19,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_20,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__OutPrime_21,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__Out_22,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_59,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_60,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Accs_25,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__BaseCase_26,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__BasePairs_27,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Substs_61,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__CS_29,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Warnings_30);

#line 1049 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_is_update_4_p_0_1(
#line 1049 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1049 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1049 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 1043 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_is_update_4_p_0(
#line 1043 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_5,
#line 1043 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_6,
#line 1043 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args_7,
#line 1043 "accumulator.m"
  MR_Word * transform_hlds__accumulator__ResultStateVars_8);

#line 1023 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__commutativity_assertion_4_p_0(
#line 1023 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_5,
#line 1023 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1023 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args0_8,
#line 1023 "accumulator.m"
  MR_Word * transform_hlds__accumulator__PossibleStaticVars_9);

#line 1000 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__associativity_assertion_5_p_0(
#line 1000 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_6,
#line 1000 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1000 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args0_9,
#line 1000 "accumulator.m"
  MR_Word * transform_hlds__accumulator__VarAB_10,
#line 1000 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OutputVar_11);

#line 975 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_is_associative_4_p_0(
#line 975 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_5,
#line 975 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_6,
#line 975 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args_7,
#line 975 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Result_8);

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__member_lessthan_goalid_4_p_0_2(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 956 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__member_lessthan_goalid_4_p_0_1(
#line 956 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 953 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__member_lessthan_goalid_4_p_0(
#line 953 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_5,
#line 953 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_6,
#line 953 "accumulator.m"
  MR_Word * transform_hlds__accumulator__LessThanGoalId_7,
#line 953 "accumulator.m"
  MR_Word * transform_hlds__accumulator__LessThanGoal_8,
#line 953 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 953 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 1049 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_1(
#line 1049 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1049 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1049 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 944 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_2(
#line 944 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_4(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 944 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_3(
#line 944 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 944 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_5(
#line 944 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 927 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0(
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 927 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14);

#line 1070 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0_1(
#line 1070 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1070 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1);

#line 915 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0_2(
#line 915 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 915 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0_3(
#line 915 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 915 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0_4(
#line 915 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 885 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0(
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 885 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14);

#line 870 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0_1(
#line 870 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0_3(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 870 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0_2(
#line 870 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 870 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0_4(
#line 870 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 851 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0(
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 851 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14);

#line 841 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0_1(
#line 841 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0_3(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 841 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0_2(
#line 841 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 841 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0_4(
#line 841 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 824 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0(
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 824 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14);

#line 814 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0_1(
#line 814 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0_3(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 814 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0_2(
#line 814 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 814 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0_4(
#line 814 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 801 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0(
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 801 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14);

#line 785 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__set_upto_2_f_0(
#line 785 "accumulator.m"
  MR_Word transform_hlds__accumulator__Case_4,
#line 785 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_5);

#line 716 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_stage1_2_9_p_0(
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_10,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_11,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_12,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_13,
#line 716 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_14,
#line 716 "accumulator.m"
  MR_Integer transform_hlds__accumulator__M_15,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_16,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21,
#line 716 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Sets_22);

#line 652 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_4(
#line 652 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 652 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 652 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 648 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_3(
#line 648 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 648 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 648 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 647 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_2(
#line 647 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 647 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 647 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2);

#line 642 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_1(
#line 642 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 642 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1);

#line 617 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0(
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_11,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_12,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__InitialInstMap_13,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_14,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__Rec_15,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVars_16,
#line 617 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Out_17,
#line 617 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OutPrime_18,
#line 617 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadToCallSubst_19,
#line 617 "accumulator.m"
  MR_Word * transform_hlds__accumulator__CallToHeadSubst_20);

#line 597 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_recursive_calls_4_p_0_1(
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 597 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_recursive_calls_4_p_0_2(
#line 597 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 597 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 597 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr);

#line 593 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_recursive_calls_4_p_0(
#line 593 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_5,
#line 593 "accumulator.m"
  MR_Integer transform_hlds__accumulator__ProcId_6,
#line 593 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_7,
#line 593 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Ids_8);

#line 572 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_store_8_p_0(
#line 572 "accumulator.m"
  MR_Word transform_hlds__accumulator__Case_9,
#line 572 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goal_10,
#line 572 "accumulator.m"
  MR_Integer transform_hlds__accumulator__STATE_VARIABLE_N_0_18,
#line 572 "accumulator.m"
  MR_Integer * transform_hlds__accumulator__STATE_VARIABLE_N_19,
#line 572 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_InstMap_0_20,
#line 572 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_InstMap_21,
#line 572 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_GoalStore_0_22,
#line 572 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_GoalStore_23);

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__is_recursive_case_2_p_0_1(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__is_recursive_case_2_p_0_2(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__is_recursive_case_2_p_0_3(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 541 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__is_recursive_case_2_p_0(
#line 541 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goals_3,
#line 541 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2);

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_goal_type_9_p_0_1(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_goal_type_9_p_0_2(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_goal_type_9_p_0_3(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg);

#line 455 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__identify_goal_type_9_p_0(
#line 455 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_10,
#line 455 "accumulator.m"
  MR_Integer transform_hlds__accumulator__ProcId_11,
#line 455 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goal_12,
#line 455 "accumulator.m"
  MR_Word transform_hlds__accumulator__InitialInstMap_13,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Type_14,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Base_15,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__BaseInstMap_16,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Rec_17,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__RecInstMap_18);

#line 430 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_standardize_2_p_0(
#line 430 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goal0_3,
#line 430 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Goal_4);

#line 389 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__should_attempt_accu_transform_2_16_p_0(
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_46,
#line 389 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_47,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_18,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredInfo_19,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_48,
#line 389 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_49,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVars_21,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__InitialInstMap_22,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__TopLevel_23,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_24,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__DoLCO_25,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__12_12,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_28,
#line 389 "accumulator.m"
  MR_Integer transform_hlds__accumulator__M_29,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__Rec_30,
#line 389 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Warnings_31);

#line 569 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__should_attempt_accu_transform_10_p_0_2(
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 569 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3,
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_4,
#line 569 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_5,
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_6,
#line 569 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_7);

#line 567 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__should_attempt_accu_transform_10_p_0_1(
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 567 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3,
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_4,
#line 567 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_5,
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_6,
#line 567 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_7);

#line 356 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__should_attempt_accu_transform_10_p_0(
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_31,
#line 356 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_32,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_12,
#line 356 "accumulator.m"
  MR_Integer transform_hlds__accumulator__ProcId_13,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredInfo_14,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_33,
#line 356 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_34,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_16,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__DoLCO_17,
#line 356 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Warnings_18);

#line 324 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__generate_warnings_4_p_0(
#line 324 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_1,
#line 324 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarSet_2,
#line 324 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3,
#line 324 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__4_4);


static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_1[68][2];

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_3[4][4];

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_4[1][1];

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_5[1][11];

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_6[3][7];

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_7[6][5];

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_8[5][8];

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_9[2][6];




static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_1[68][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_goal_store_1)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "performance problems."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument rearrangement does not introduce"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Please ensure that this"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument rearrangements do not introduce"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[9])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Please ensure that these"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--inhibit-accumulator-warnings"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "These warnings can be suppressed by"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to turn off the warnings."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to turn the optimization off, or "))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--no-accumulator-introduction"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the call to the predicate, use"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "changes the performance characteristics"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "will issue this warning. If this reordering"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "tail recursive. In such situations, the compiler"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "if by so doing it makes the containing predicate"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the arguments in calls to that predicate,"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the compiler will rearrange the order of"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "via a"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "associative"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "If a predicate has been declared"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "swapped to allow accumulator introduction."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[5])))
  },
  /* row 57 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_1[2]))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 59 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_4[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[54])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__accumulator_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: the call to"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has had the location of the variables"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__accumulator__accu_related_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[4])),
    ((MR_Box) (transform_hlds__accumulator__acc_pred_info_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[5])),
    ((MR_Box) (transform_hlds__accumulator__create_acc_goal_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_3[4][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__accumulator__should_attempt_accu_transform_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__accumulator_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__accumulator__should_attempt_accu_transform_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[23])))
  },
};

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_6[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0)),
    ((MR_Box) (&transform_hlds__accumulator__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_7[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__accumulator__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__accumulator__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__accumulator__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__accumulator__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__accumulator__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_8[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__accumulator__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__accumulator__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0)),
    ((MR_Box) (&transform_hlds__accumulator__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__accumulator_scalar_common_9[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__accumulator__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 3483 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__accumulator__tree234__pti_tree234_2__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0
  }
};

#line 3492 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3500 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__accumulator__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3508 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__accumulator__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3517 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__accumulator__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3525 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__accumulator__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3533 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 3542 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__accumulator__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0
  }
};

#line 3550 "transform_hlds.accumulator.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__accumulator__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3559 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__accumulator__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3567 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_assoc_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 3574 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_assoc_0_0 = {
  (MR_String) "accu_assoc",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_assoc_0_0,
  NULL,
  NULL,
  NULL
};

#line 3589 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_assoc_0_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_assoc_0_0
};

#line 3594 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_assoc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_assoc_0_0
  }
};

#line 3603 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_assoc_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_assoc_0_0
};

#line 3608 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_assoc_0[1] = {
  (MR_Integer) 0
};

#line 3613 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_assoc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_assoc_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_assoc_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_assoc",
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_assoc_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_assoc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_assoc_0
};

#line 3630 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0
  }
};

#line 3638 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_base_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0
};

#line 3645 "transform_hlds.accumulator.c"
static const MR_ConstString transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_base_0_0[3] = {
  (MR_String) "init_update",
  (MR_String) "init_assoc",
  (MR_String) "other"
};

#line 3652 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_base_0_0 = {
  (MR_String) "accu_base",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_base_0_0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_base_0_0,
  NULL,
  NULL
};

#line 3667 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_base_0_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_base_0_0
};

#line 3672 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_base_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_base_0_0
  }
};

#line 3681 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_base_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_base_0_0
};

#line 3686 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_base_0[1] = {
  (MR_Integer) 0
};

#line 3691 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_base_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_base_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_base_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_base",
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_base_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_base_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_base_0
};

#line 3708 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_accu_case_0_0 = {
  (MR_String) "accu_base",
  (MR_Integer) 0
};

#line 3714 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_accu_case_0_1 = {
  (MR_String) "accu_rec",
  (MR_Integer) 1
};

#line 3720 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__enum_value_ordered_accu_case_0[2] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_accu_case_0_0,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_accu_case_0_1
};

#line 3726 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__enum_name_ordered_accu_case_0[2] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_accu_case_0_0,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_accu_case_0_1
};

#line 3732 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_case_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3738 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_case_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_case_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_case_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_case",
  {     transform_hlds__accumulator__transform_hlds__accumulator__enum_name_ordered_accu_case_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__enum_value_ordered_accu_case_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_case_0
};

#line 3755 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_goal_id_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_case_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3761 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_goal_id_0_0 = {
  (MR_String) "accu_goal_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_goal_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 3776 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_goal_id_0_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_goal_id_0_0
};

#line 3781 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_goal_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_goal_id_0_0
  }
};

#line 3790 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_goal_id_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_goal_id_0_0
};

#line 3795 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_goal_id_0[1] = {
  (MR_Integer) 0
};

#line 3800 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_goal_id_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_goal_id_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_goal_id",
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_goal_id_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_goal_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_goal_id_0
};

#line 3817 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__accumulator__tree234__ti_tree234_2transform_hlds__accumulator__type_ctor_info_accu_goal_id_0transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
    (MR_TypeInfo) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0
  }
};

#line 3826 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_store_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_goal_store_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_goal_store_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_goal_store",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__accumulator__tree234__ti_tree234_2transform_hlds__accumulator__type_ctor_info_accu_goal_id_0transform_hlds__goal_store__type_ctor_info_stored_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3843 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_sets_0_0[6] = {
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0
};

#line 3853 "transform_hlds.accumulator.c"
static const MR_ConstString transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_sets_0_0[6] = {
  (MR_String) "as_before",
  (MR_String) "as_assoc",
  (MR_String) "as_construct_assoc",
  (MR_String) "as_construct",
  (MR_String) "as_update",
  (MR_String) "as_reject"
};

#line 3863 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_sets_0_0 = {
  (MR_String) "accu_sets",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_sets_0_0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_sets_0_0,
  NULL,
  NULL
};

#line 3878 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_sets_0_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_sets_0_0
};

#line 3883 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_sets_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_sets_0_0
  }
};

#line 3892 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_sets_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_sets_0_0
};

#line 3897 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_sets_0[1] = {
  (MR_Integer) 0
};

#line 3902 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_sets_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_sets_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_sets_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_sets",
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_sets_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_sets_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_sets_0
};

#line 3919 "transform_hlds.accumulator.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__accumulator__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3928 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_subst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_subst_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_subst_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_subst",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__accumulator__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3945 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_substs_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 3953 "transform_hlds.accumulator.c"
static const MR_ConstString transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_substs_0_0[4] = {
  (MR_String) "acc_var_subst",
  (MR_String) "rec_call_subst",
  (MR_String) "assoc_call_subst",
  (MR_String) "update_subst"
};

#line 3961 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_substs_0_0 = {
  (MR_String) "accu_substs",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_substs_0_0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_names_accu_substs_0_0,
  NULL,
  NULL
};

#line 3976 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_substs_0_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_substs_0_0
};

#line 3981 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_substs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_substs_0_0
  }
};

#line 3990 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_substs_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_substs_0_0
};

#line 3995 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_substs_0[1] = {
  (MR_Integer) 0
};

#line 4000 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_substs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_substs_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_substs_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_substs",
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_substs_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_substs_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_substs_0
};

#line 4017 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_warning_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 4025 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_warning_0_0 = {
  (MR_String) "accu_warn",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_types_accu_warning_0_0,
  NULL,
  NULL,
  NULL
};

#line 4040 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_warning_0_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_warning_0_0
};

#line 4045 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_warning_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_accu_warning_0_0
  }
};

#line 4054 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_warning_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_accu_warning_0_0
};

#line 4059 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_warning_0[1] = {
  (MR_Integer) 0
};

#line 4064 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__accumulator____Unify____accu_warning_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____accu_warning_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "accu_warning",
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_accu_warning_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_accu_warning_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_accu_warning_0
};

#line 4081 "transform_hlds.accumulator.c"
static const MR_PseudoTypeInfo transform_hlds__accumulator__transform_hlds__accumulator__field_types_store_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &transform_hlds__accumulator__tree234__ti_tree234_2transform_hlds__accumulator__type_ctor_info_accu_goal_id_0transform_hlds__goal_store__type_ctor_info_stored_goal_0
};

#line 4088 "transform_hlds.accumulator.c"
static const MR_ConstString transform_hlds__accumulator__transform_hlds__accumulator__field_names_store_info_0_0[3] = {
  (MR_String) "store_loc",
  (MR_String) "store_instmap",
  (MR_String) "store_goals"
};

#line 4095 "transform_hlds.accumulator.c"
static const MR_DuFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_store_info_0_0 = {
  (MR_String) "store_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_types_store_info_0_0,
  transform_hlds__accumulator__transform_hlds__accumulator__field_names_store_info_0_0,
  NULL,
  NULL
};

#line 4110 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_store_info_0_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_store_info_0_0
};

#line 4115 "transform_hlds.accumulator.c"
static const MR_DuPtagLayout transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_store_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__accumulator__transform_hlds__accumulator__du_stag_ordered_store_info_0_0
  }
};

#line 4124 "transform_hlds.accumulator.c"
static const MR_DuFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_store_info_0[1] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__du_functor_desc_store_info_0_0
};

#line 4129 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_store_info_0[1] = {
  (MR_Integer) 0
};

#line 4134 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_store_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__accumulator____Unify____store_info_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____store_info_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "store_info",
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_name_ordered_store_info_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__du_ptag_ordered_store_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_store_info_0
};

#line 4151 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_0 = {
  (MR_String) "switch_base_rec",
  (MR_Integer) 0
};

#line 4157 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_1 = {
  (MR_String) "switch_rec_base",
  (MR_Integer) 1
};

#line 4163 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_2 = {
  (MR_String) "disj_base_rec",
  (MR_Integer) 2
};

#line 4169 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_3 = {
  (MR_String) "disj_rec_base",
  (MR_Integer) 3
};

#line 4175 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_4 = {
  (MR_String) "ite_base_rec",
  (MR_Integer) 4
};

#line 4181 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDesc transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_5 = {
  (MR_String) "ite_rec_base",
  (MR_Integer) 5
};

#line 4187 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__enum_value_ordered_top_level_0[6] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_0,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_1,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_2,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_3,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_4,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_5
};

#line 4197 "transform_hlds.accumulator.c"
static const MR_EnumFunctorDescPtr transform_hlds__accumulator__transform_hlds__accumulator__enum_name_ordered_top_level_0[6] = {
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_2,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_3,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_4,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_5,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_0,
  &transform_hlds__accumulator__transform_hlds__accumulator__enum_functor_desc_top_level_0_1
};

#line 4207 "transform_hlds.accumulator.c"
static const MR_Integer transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_top_level_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 4217 "transform_hlds.accumulator.c"
const MR_TypeCtorInfo_Struct transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_top_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__accumulator____Unify____top_level_0_0_10001)),
  ((MR_Box) (transform_hlds__accumulator____Compare____top_level_0_0_10001)),
  (MR_String) "transform_hlds.accumulator",
  (MR_String) "top_level",
  {     transform_hlds__accumulator__transform_hlds__accumulator__enum_name_ordered_top_level_0 },
  {     transform_hlds__accumulator__transform_hlds__accumulator__enum_value_ordered_top_level_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  transform_hlds__accumulator__transform_hlds__accumulator__functor_number_map_top_level_0
};

#line 4234 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_assoc_0_0_10001(
#line 4237 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4239 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4241 "transform_hlds.accumulator.c"
{
#line 4243 "transform_hlds.accumulator.c"
  {
#line 4245 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4248 "transform_hlds.accumulator.c"
    {
#line 4250 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_assoc_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4253 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4255 "transform_hlds.accumulator.c"
  }
#line 4257 "transform_hlds.accumulator.c"
}

#line 4260 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_assoc_0_0_10001(
#line 4263 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4265 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4267 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4269 "transform_hlds.accumulator.c"
{
#line 4271 "transform_hlds.accumulator.c"
  {
#line 4273 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4276 "transform_hlds.accumulator.c"
    {
#line 4278 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_assoc_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4281 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4283 "transform_hlds.accumulator.c"
  }
#line 4285 "transform_hlds.accumulator.c"
}

#line 4288 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_base_0_0_10001(
#line 4291 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4293 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4295 "transform_hlds.accumulator.c"
{
#line 4297 "transform_hlds.accumulator.c"
  {
#line 4299 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4302 "transform_hlds.accumulator.c"
    {
#line 4304 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_base_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4307 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4309 "transform_hlds.accumulator.c"
  }
#line 4311 "transform_hlds.accumulator.c"
}

#line 4314 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_base_0_0_10001(
#line 4317 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4319 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4321 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4323 "transform_hlds.accumulator.c"
{
#line 4325 "transform_hlds.accumulator.c"
  {
#line 4327 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4330 "transform_hlds.accumulator.c"
    {
#line 4332 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_base_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4335 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4337 "transform_hlds.accumulator.c"
  }
#line 4339 "transform_hlds.accumulator.c"
}

#line 4342 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_case_0_0_10001(
#line 4345 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4347 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4349 "transform_hlds.accumulator.c"
{
#line 4351 "transform_hlds.accumulator.c"
  {
#line 4353 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4356 "transform_hlds.accumulator.c"
    {
#line 4358 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_case_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4361 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4363 "transform_hlds.accumulator.c"
  }
#line 4365 "transform_hlds.accumulator.c"
}

#line 4368 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_case_0_0_10001(
#line 4371 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4373 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4375 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4377 "transform_hlds.accumulator.c"
{
#line 4379 "transform_hlds.accumulator.c"
  {
#line 4381 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4384 "transform_hlds.accumulator.c"
    {
#line 4386 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_case_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4389 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4391 "transform_hlds.accumulator.c"
  }
#line 4393 "transform_hlds.accumulator.c"
}

#line 4396 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_goal_id_0_0_10001(
#line 4399 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4401 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4403 "transform_hlds.accumulator.c"
{
#line 4405 "transform_hlds.accumulator.c"
  {
#line 4407 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4410 "transform_hlds.accumulator.c"
    {
#line 4412 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_goal_id_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4415 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4417 "transform_hlds.accumulator.c"
  }
#line 4419 "transform_hlds.accumulator.c"
}

#line 4422 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_goal_id_0_0_10001(
#line 4425 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4427 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4429 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4431 "transform_hlds.accumulator.c"
{
#line 4433 "transform_hlds.accumulator.c"
  {
#line 4435 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4438 "transform_hlds.accumulator.c"
    {
#line 4440 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_goal_id_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4443 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4445 "transform_hlds.accumulator.c"
  }
#line 4447 "transform_hlds.accumulator.c"
}

#line 4450 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_goal_store_0_0_10001(
#line 4453 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4455 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4457 "transform_hlds.accumulator.c"
{
#line 4459 "transform_hlds.accumulator.c"
  {
#line 4461 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4464 "transform_hlds.accumulator.c"
    {
#line 4466 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_goal_store_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4469 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4471 "transform_hlds.accumulator.c"
  }
#line 4473 "transform_hlds.accumulator.c"
}

#line 4476 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_goal_store_0_0_10001(
#line 4479 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4481 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4483 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4485 "transform_hlds.accumulator.c"
{
#line 4487 "transform_hlds.accumulator.c"
  {
#line 4489 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4492 "transform_hlds.accumulator.c"
    {
#line 4494 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_goal_store_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4497 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4499 "transform_hlds.accumulator.c"
  }
#line 4501 "transform_hlds.accumulator.c"
}

#line 4504 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_sets_0_0_10001(
#line 4507 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4509 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4511 "transform_hlds.accumulator.c"
{
#line 4513 "transform_hlds.accumulator.c"
  {
#line 4515 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4518 "transform_hlds.accumulator.c"
    {
#line 4520 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_sets_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4523 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4525 "transform_hlds.accumulator.c"
  }
#line 4527 "transform_hlds.accumulator.c"
}

#line 4530 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_sets_0_0_10001(
#line 4533 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4535 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4537 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4539 "transform_hlds.accumulator.c"
{
#line 4541 "transform_hlds.accumulator.c"
  {
#line 4543 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4546 "transform_hlds.accumulator.c"
    {
#line 4548 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_sets_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4551 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4553 "transform_hlds.accumulator.c"
  }
#line 4555 "transform_hlds.accumulator.c"
}

#line 4558 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_subst_0_0_10001(
#line 4561 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4563 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4565 "transform_hlds.accumulator.c"
{
#line 4567 "transform_hlds.accumulator.c"
  {
#line 4569 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4572 "transform_hlds.accumulator.c"
    {
#line 4574 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_subst_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4577 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4579 "transform_hlds.accumulator.c"
  }
#line 4581 "transform_hlds.accumulator.c"
}

#line 4584 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_subst_0_0_10001(
#line 4587 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4589 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4591 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4593 "transform_hlds.accumulator.c"
{
#line 4595 "transform_hlds.accumulator.c"
  {
#line 4597 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4600 "transform_hlds.accumulator.c"
    {
#line 4602 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_subst_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4605 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4607 "transform_hlds.accumulator.c"
  }
#line 4609 "transform_hlds.accumulator.c"
}

#line 4612 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_substs_0_0_10001(
#line 4615 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4617 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4619 "transform_hlds.accumulator.c"
{
#line 4621 "transform_hlds.accumulator.c"
  {
#line 4623 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4626 "transform_hlds.accumulator.c"
    {
#line 4628 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_substs_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4631 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4633 "transform_hlds.accumulator.c"
  }
#line 4635 "transform_hlds.accumulator.c"
}

#line 4638 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_substs_0_0_10001(
#line 4641 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4643 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4645 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4647 "transform_hlds.accumulator.c"
{
#line 4649 "transform_hlds.accumulator.c"
  {
#line 4651 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4654 "transform_hlds.accumulator.c"
    {
#line 4656 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_substs_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4659 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4661 "transform_hlds.accumulator.c"
  }
#line 4663 "transform_hlds.accumulator.c"
}

#line 4666 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_warning_0_0_10001(
#line 4669 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4671 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4673 "transform_hlds.accumulator.c"
{
#line 4675 "transform_hlds.accumulator.c"
  {
#line 4677 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4680 "transform_hlds.accumulator.c"
    {
#line 4682 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____accu_warning_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4685 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4687 "transform_hlds.accumulator.c"
  }
#line 4689 "transform_hlds.accumulator.c"
}

#line 4692 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_warning_0_0_10001(
#line 4695 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4697 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4699 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4701 "transform_hlds.accumulator.c"
{
#line 4703 "transform_hlds.accumulator.c"
  {
#line 4705 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4708 "transform_hlds.accumulator.c"
    {
#line 4710 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____accu_warning_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4713 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4715 "transform_hlds.accumulator.c"
  }
#line 4717 "transform_hlds.accumulator.c"
}

#line 4720 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____store_info_0_0_10001(
#line 4723 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4725 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4727 "transform_hlds.accumulator.c"
{
#line 4729 "transform_hlds.accumulator.c"
  {
#line 4731 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4734 "transform_hlds.accumulator.c"
    {
#line 4736 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____store_info_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4739 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4741 "transform_hlds.accumulator.c"
  }
#line 4743 "transform_hlds.accumulator.c"
}

#line 4746 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____store_info_0_0_10001(
#line 4749 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4751 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4753 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4755 "transform_hlds.accumulator.c"
{
#line 4757 "transform_hlds.accumulator.c"
  {
#line 4759 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4762 "transform_hlds.accumulator.c"
    {
#line 4764 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____store_info_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4767 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4769 "transform_hlds.accumulator.c"
  }
#line 4771 "transform_hlds.accumulator.c"
}

#line 4774 "transform_hlds.accumulator.c"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____top_level_0_0_10001(
#line 4777 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 4779 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2)
#line 4781 "transform_hlds.accumulator.c"
{
#line 4783 "transform_hlds.accumulator.c"
  {
#line 4785 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded;

#line 4788 "transform_hlds.accumulator.c"
    {
#line 4790 "transform_hlds.accumulator.c"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator____Unify____top_level_0_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2));
    }
#line 4793 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 4795 "transform_hlds.accumulator.c"
  }
#line 4797 "transform_hlds.accumulator.c"
}

#line 4800 "transform_hlds.accumulator.c"
static void MR_CALL 
transform_hlds__accumulator____Compare____top_level_0_0_10001(
#line 4803 "transform_hlds.accumulator.c"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 4805 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 4807 "transform_hlds.accumulator.c"
  MR_Box transform_hlds__accumulator__wrapper_arg_3)
#line 4809 "transform_hlds.accumulator.c"
{
#line 4811 "transform_hlds.accumulator.c"
  {
#line 4813 "transform_hlds.accumulator.c"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__1_1;

#line 4816 "transform_hlds.accumulator.c"
    {
#line 4818 "transform_hlds.accumulator.c"
      transform_hlds__accumulator____Compare____top_level_0_0(&transform_hlds__accumulator__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), ((MR_Word) transform_hlds__accumulator__wrapper_arg_3));
    }
#line 4821 "transform_hlds.accumulator.c"
    *transform_hlds__accumulator__wrapper_arg_1 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__1_1));
#line 4823 "transform_hlds.accumulator.c"
  }
#line 4825 "transform_hlds.accumulator.c"
}

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1889__1_3_p_0(
#line 1889 "accumulator.m"
  MR_Word transform_hlds__accumulator__GS_5,
#line 1889 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_11,
#line 1889 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__3_12)
#line 1889 "accumulator.m"
{
#line 1889 "accumulator.m"
  {
#line 1889 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1889 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_13_13;
#line 1891 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_9_9;

#line 1891 "accumulator.m"
    {
#line 1891 "accumulator.m"
      transform_hlds__goal_store__goal_store_lookup_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__GS_5, ((MR_Box) (transform_hlds__accumulator__HeadVar__2_11)), &transform_hlds__accumulator__V_13_13);
    }
#line 1891 "accumulator.m"
    *transform_hlds__accumulator__HeadVar__3_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_13_13, (MR_Integer) 0)));
#line 1891 "accumulator.m"
    transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_13_13, (MR_Integer) 1)));
#line 1889 "accumulator.m"
  }
#line 1889 "accumulator.m"
}

#line 1875 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_2(
#line 1875 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 1875 "accumulator.m"
{
#line 1875 "accumulator.m"
  {
#line 1875 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 1875 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__HeadVar__2_9) = ((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__conv0_HeadVar__2_9);
#line 1875 "accumulator.m"
    {
#line 1875 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_1(transform_hlds__accumulator__env_ptr);
#line 1875 "accumulator.m"
      return;
    }
#line 1875 "accumulator.m"
  }
#line 1875 "accumulator.m"
}

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_1(
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 1873 "accumulator.m"
{
#line 1873 "accumulator.m"
  {
#line 1873 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 1873 "accumulator.m"
    {
#line 1876 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_7_7;

#line 1876 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__HeadVar__2_9), (MR_Integer) 0)));
#line 1876 "accumulator.m"
      transform_hlds__accumulator__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__HeadVar__2_9), (MR_Integer) 1)));
#line 1876 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__V_10_10 == (MR_Integer) 0);
#line 1876 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__succeeded)
#line 1876 "accumulator.m"
        {
#line 1876 "accumulator.m"
          ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__cont_env_ptr);
#line 1876 "accumulator.m"
          return;
        }
#line 1873 "accumulator.m"
    }
#line 1873 "accumulator.m"
  }
#line 1873 "accumulator.m"
}

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0(
#line 1873 "accumulator.m"
  MR_Word transform_hlds__accumulator__GS_3,
#line 1873 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_9,
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 1873 "accumulator.m"
{
#line 1873 "accumulator.m"
  {
#line 1873 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0_s transform_hlds__accumulator__env;

#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__HeadVar__2_9 = transform_hlds__accumulator__HeadVar__2_9;
#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__cont = transform_hlds__accumulator__cont;
#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 1873 "accumulator.m"
    {
#line 1875 "accumulator.m"
      MR_Word transform_hlds__accumulator___Goal_6;

#line 1875 "accumulator.m"
      {
#line 1875 "accumulator.m"
        transform_hlds__goal_store__goal_store_member_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__GS_3, &(transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_env_0__conv0_HeadVar__2_9, &transform_hlds__accumulator___Goal_6, transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0_2, &transform_hlds__accumulator__env);
      }
#line 1873 "accumulator.m"
    }
#line 1873 "accumulator.m"
  }
#line 1873 "accumulator.m"
}

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(
#line 1861 "accumulator.m"
  MR_Word transform_hlds__accumulator__Subst_7,
#line 1861 "accumulator.m"
  MR_Word transform_hlds__accumulator__From_8,
#line 1861 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_18,
#line 1861 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_19,
#line 1861 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__5_20)
#line 1861 "accumulator.m"
{
#line 1861 "accumulator.m"
  {
#line 1861 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goal0_14;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__InstMap_15;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goal_16;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_21_21;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_22_22;

#line 1863 "accumulator.m"
    {
#line 1863 "accumulator.m"
      transform_hlds__goal_store__goal_store_lookup_3_p_0(transform_hlds__accumulator__TypeCtorInfo_26_26, transform_hlds__accumulator__From_8, ((MR_Box) (transform_hlds__accumulator__HeadVar__3_18)), &transform_hlds__accumulator__V_21_21);
    }
#line 1863 "accumulator.m"
    transform_hlds__accumulator__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_21_21, (MR_Integer) 0)));
#line 1863 "accumulator.m"
    transform_hlds__accumulator__InstMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_21_21, (MR_Integer) 1)));
#line 1864 "accumulator.m"
    {
#line 1864 "accumulator.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__accumulator__Subst_7, transform_hlds__accumulator__Goal0_14, &transform_hlds__accumulator__Goal_16);
    }
#line 1865 "accumulator.m"
    {
#line 1865 "accumulator.m"
      transform_hlds__accumulator__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1865 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_22_22, 0) = ((MR_Box) (transform_hlds__accumulator__Goal_16));
#line 1865 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_22_22, 1) = ((MR_Box) (transform_hlds__accumulator__InstMap_15));
#line 1865 "accumulator.m"
    }
#line 1865 "accumulator.m"
    {
#line 1865 "accumulator.m"
      transform_hlds__goal_store__goal_store_det_insert_4_p_0(transform_hlds__accumulator__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__accumulator__HeadVar__3_18)), transform_hlds__accumulator__V_22_22, transform_hlds__accumulator__HeadVar__4_19, transform_hlds__accumulator__HeadVar__5_20);
#line 1865 "accumulator.m"
      return;
    }
#line 1861 "accumulator.m"
  }
#line 1861 "accumulator.m"
}

#line 1566 "accumulator.m"
static MR_Integer MR_CALL 
transform_hlds__accumulator__IntroducedFrom__func__acc_pred_info__1566__1_1_f_0(
#line 1566 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_42)
#line 1566 "accumulator.m"
{
#line 1566 "accumulator.m"
  {
#line 1566 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1566 "accumulator.m"
    MR_Integer transform_hlds__accumulator__HeadVar__2_43;

#line 1566 "accumulator.m"
    {
#line 1566 "accumulator.m"
      return transform_hlds__accumulator__HeadVar__2_43 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__accumulator__HeadVar__1_42);
    }
#line 1566 "accumulator.m"
    return transform_hlds__accumulator__HeadVar__2_43;
#line 1566 "accumulator.m"
  }
#line 1566 "accumulator.m"
}

#line 1512 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1512__1_3_p_0(
#line 1512 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccVarSubst_25,
#line 1512 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_45,
#line 1512 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__3_46)
#line 1512 "accumulator.m"
{
#line 1512 "accumulator.m"
  {
#line 1512 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1512 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_47_47 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1512 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv0_HeadVar__3_46;

#line 1512 "accumulator.m"
    {
#line 1512 "accumulator.m"
      mercury__map__lookup_3_p_0(transform_hlds__accumulator__TypeInfo_47_47, transform_hlds__accumulator__TypeInfo_47_47, transform_hlds__accumulator__AccVarSubst_25, ((MR_Box) (transform_hlds__accumulator__HeadVar__2_45)), &transform_hlds__accumulator__conv0_HeadVar__3_46);
    }
#line 1512 "accumulator.m"
    *transform_hlds__accumulator__HeadVar__3_46 = ((MR_Word) transform_hlds__accumulator__conv0_HeadVar__3_46);
#line 1512 "accumulator.m"
  }
#line 1512 "accumulator.m"
}

#line 1417 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1417__1_1_p_0(
#line 1417 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_40)
#line 1417 "accumulator.m"
{
#line 1417 "accumulator.m"
  {
#line 1417 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1417 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_40, (MR_Integer) 0)));
#line 1417 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_40, (MR_Integer) 1)));

#line 1417 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_41_41 == (MR_Integer) 0);
#line 1417 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1417 "accumulator.m"
  }
#line 1417 "accumulator.m"
}

#line 1401 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_2(
#line 1401 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 1401 "accumulator.m"
{
#line 1401 "accumulator.m"
  {
#line 1401 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 1401 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__HeadVar__5_29) = ((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__conv0_HeadVar__5_29);
#line 1401 "accumulator.m"
    {
#line 1401 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_1(transform_hlds__accumulator__env_ptr);
#line 1401 "accumulator.m"
      return;
    }
#line 1401 "accumulator.m"
  }
#line 1401 "accumulator.m"
}

#line 1399 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_1(
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 1399 "accumulator.m"
{
#line 1399 "accumulator.m"
  {
#line 1399 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 1399 "accumulator.m"
    {
#line 1402 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_14_14;
#line 1403 "accumulator.m"
      MR_Word transform_hlds__accumulator___GoalExpr_15;

#line 1401 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_30_30, (MR_Integer) 0)));
#line 1401 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_30_30, (MR_Integer) 1)));
#line 1402 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__HeadVar__5_29), (MR_Integer) 0)));
#line 1402 "accumulator.m"
      transform_hlds__accumulator__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__HeadVar__5_29), (MR_Integer) 1)));
#line 1402 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_31_31 == (MR_Integer) 0);
#line 1399 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__succeeded)
#line 1399 "accumulator.m"
        {
#line 1403 "accumulator.m"
          transform_hlds__accumulator___GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__Goal_12, (MR_Integer) 0)));
#line 1403 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__Goal_12, (MR_Integer) 1)));
#line 1404 "accumulator.m"
          {
#line 1404 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__GoalInfo_16);
          }
#line 1405 "accumulator.m"
          {
#line 1405 "accumulator.m"
            hlds__instmap__apply_instmap_delta_3_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMap0_13, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMapDelta_17, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMap_18);
          }
#line 1406 "accumulator.m"
          {
#line 1406 "accumulator.m"
            hlds__instmap__instmap_changed_vars_5_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMap0_13, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__InstMap_18, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__VarTypes_7, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__ModuleInfo_6, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__ChangedVars_19);
          }
#line 5197 "transform_hlds.accumulator.c"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1408 "accumulator.m"
          {
#line 1408 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__is_singleton_2_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__TypeCtorInfo_50_50, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__ChangedVars_19, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_52_52);
          }
#line 1399 "accumulator.m"
          if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__succeeded)
#line 1399 "accumulator.m"
            {
#line 5208 "transform_hlds.accumulator.c"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__TypeInfo_55_55 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1408 "accumulator.m"
              {
#line 1408 "accumulator.m"
                (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__TypeInfo_55_55, ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__Var_9)), ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_52_52)));
              }
#line 1408 "accumulator.m"
              if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__succeeded)
#line 1408 "accumulator.m"
                {
#line 1408 "accumulator.m"
                  ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__cont_env_ptr);
#line 1408 "accumulator.m"
                  return;
                }
#line 1399 "accumulator.m"
            }
#line 1399 "accumulator.m"
        }
#line 1399 "accumulator.m"
    }
#line 1399 "accumulator.m"
  }
#line 1399 "accumulator.m"
}

#line 1399 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0(
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_6,
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_7,
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_8,
#line 1399 "accumulator.m"
  MR_Word transform_hlds__accumulator__Var_9,
#line 1399 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__5_29,
#line 1399 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 1399 "accumulator.m"
{
#line 1399 "accumulator.m"
  {
#line 1399 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0_s transform_hlds__accumulator__env;

#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__ModuleInfo_6 = transform_hlds__accumulator__ModuleInfo_6;
#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__VarTypes_7 = transform_hlds__accumulator__VarTypes_7;
#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__Var_9 = transform_hlds__accumulator__Var_9;
#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__HeadVar__5_29 = transform_hlds__accumulator__HeadVar__5_29;
#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__cont = transform_hlds__accumulator__cont;
#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 1401 "accumulator.m"
    {
#line 1401 "accumulator.m"
      transform_hlds__goal_store__goal_store_member_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__GoalStore_8, &(transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__conv0_HeadVar__5_29, &(transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_env_0__V_30_30, transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0_2, &transform_hlds__accumulator__env);
    }
#line 1399 "accumulator.m"
  }
#line 1399 "accumulator.m"
}

#line 1380 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_divide_base_case__1380__1_5_p_0(
#line 1380 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_9,
#line 1380 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_10,
#line 1380 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_11,
#line 1380 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_32,
#line 1380 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__5_33)
#line 1380 "accumulator.m"
{
#line 1380 "accumulator.m"
  {
#line 1380 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 1382 "accumulator.m"
    {
#line 1382 "accumulator.m"
      transform_hlds__goal_store__goal_store_all_ancestors_6_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__C_11, ((MR_Box) (transform_hlds__accumulator__HeadVar__4_32)), transform_hlds__accumulator__VarTypes_10, transform_hlds__accumulator__ModuleInfo_9, (MR_Integer) 0, transform_hlds__accumulator__HeadVar__5_33);
#line 1382 "accumulator.m"
      return;
    }
#line 1380 "accumulator.m"
  }
#line 1380 "accumulator.m"
}

#line 1130 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1130__1_4_p_0(
#line 1130 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_19,
#line 1130 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_66,
#line 1130 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_67,
#line 1130 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__4_68)
#line 1130 "accumulator.m"
{
#line 1130 "accumulator.m"
  {
#line 1130 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1130 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goal_45;
#line 1130 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalInfo_48;
#line 1130 "accumulator.m"
    MR_Word transform_hlds__accumulator__NonLocals_49;
#line 1130 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_69_69;
#line 1131 "accumulator.m"
    MR_Word transform_hlds__accumulator___InstMap_46;
#line 1132 "accumulator.m"
    MR_Word transform_hlds__accumulator___GoalExpr_47;

#line 1131 "accumulator.m"
    {
#line 1131 "accumulator.m"
      transform_hlds__goal_store__goal_store_lookup_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__GoalStore_19, ((MR_Box) (transform_hlds__accumulator__HeadVar__2_66)), &transform_hlds__accumulator__V_69_69);
    }
#line 1131 "accumulator.m"
    transform_hlds__accumulator__Goal_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_69_69, (MR_Integer) 0)));
#line 1131 "accumulator.m"
    transform_hlds__accumulator___InstMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_69_69, (MR_Integer) 1)));
#line 1132 "accumulator.m"
    transform_hlds__accumulator___GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_45, (MR_Integer) 0)));
#line 1132 "accumulator.m"
    transform_hlds__accumulator__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_45, (MR_Integer) 1)));
#line 1133 "accumulator.m"
    {
#line 1133 "accumulator.m"
      transform_hlds__accumulator__NonLocals_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__accumulator__GoalInfo_48);
    }
#line 1134 "accumulator.m"
    {
#line 1134 "accumulator.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__accumulator__NonLocals_49, transform_hlds__accumulator__HeadVar__3_67, transform_hlds__accumulator__HeadVar__4_68);
#line 1134 "accumulator.m"
      return;
    }
#line 1130 "accumulator.m"
  }
#line 1130 "accumulator.m"
}

#line 1072 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__is_associative_construction__1072__1_4_p_0(
#line 1072 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_4,
#line 1072 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_5,
#line 1072 "accumulator.m"
  MR_Word transform_hlds__accumulator__ConsId_6,
#line 1072 "accumulator.m"
  MR_Integer transform_hlds__accumulator__HeadVar__4_15)
#line 1072 "accumulator.m"
{
#line 1072 "accumulator.m"
  {
#line 1072 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 1072 "accumulator.m"
    {
#line 1072 "accumulator.m"
      return transform_hlds__accumulator__succeeded = hlds__assertion__is_construction_equivalence_assertion_4_p_0(transform_hlds__accumulator__ModuleInfo_4, transform_hlds__accumulator__HeadVar__4_15, transform_hlds__accumulator__ConsId_6, transform_hlds__accumulator__PredId_5);
    }
#line 1072 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1072 "accumulator.m"
  }
#line 1072 "accumulator.m"
}

#line 1051 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1051__1_5_p_0(
#line 1051 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_5,
#line 1051 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_6,
#line 1051 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args_7,
#line 1051 "accumulator.m"
  MR_Integer transform_hlds__accumulator__HeadVar__4_16,
#line 1051 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__5_17)
#line 1051 "accumulator.m"
{
#line 1051 "accumulator.m"
  {
#line 1051 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 1051 "accumulator.m"
    {
#line 1051 "accumulator.m"
      return transform_hlds__accumulator__succeeded = hlds__assertion__is_update_assertion_5_p_0(transform_hlds__accumulator__ModuleInfo_5, transform_hlds__accumulator__HeadVar__4_16, transform_hlds__accumulator__PredId_6, transform_hlds__accumulator__Args_7, transform_hlds__accumulator__HeadVar__5_17);
    }
#line 1051 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1051 "accumulator.m"
  }
#line 1051 "accumulator.m"
}

#line 652 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__652__1_2_p_0(
#line 652 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_55,
#line 652 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_56)
#line 652 "accumulator.m"
{
#line 652 "accumulator.m"
  {
#line 652 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 652 "accumulator.m"
    MR_Word transform_hlds__accumulator__X_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_55, (MR_Integer) 0)));
#line 652 "accumulator.m"
    MR_Word transform_hlds__accumulator__Y_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_55, (MR_Integer) 1)));

#line 652 "accumulator.m"
    {
#line 652 "accumulator.m"
      MR_Word base;
#line 652 "accumulator.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "accumulator.m"
      *transform_hlds__accumulator__HeadVar__2_56 = base;
#line 652 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__Y_62));
#line 652 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__X_61));
#line 652 "accumulator.m"
    }
#line 652 "accumulator.m"
  }
#line 652 "accumulator.m"
}

#line 648 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__648__1_2_p_0(
#line 648 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_70,
#line 648 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_71)
#line 648 "accumulator.m"
{
#line 648 "accumulator.m"
  {
#line 648 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 648 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_72_72 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 648 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv0_HeadVar__2_71;

#line 648 "accumulator.m"
    {
#line 648 "accumulator.m"
      mercury__pair__snd_2_p_0(transform_hlds__accumulator__TypeInfo_72_72, transform_hlds__accumulator__TypeInfo_72_72, transform_hlds__accumulator__HeadVar__1_70, &transform_hlds__accumulator__conv0_HeadVar__2_71);
    }
#line 648 "accumulator.m"
    *transform_hlds__accumulator__HeadVar__2_71 = ((MR_Word) transform_hlds__accumulator__conv0_HeadVar__2_71);
#line 648 "accumulator.m"
  }
#line 648 "accumulator.m"
}

#line 647 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__647__1_2_p_0(
#line 647 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_67,
#line 647 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_68)
#line 647 "accumulator.m"
{
#line 647 "accumulator.m"
  {
#line 647 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 647 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_69_69 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 647 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv0_HeadVar__2_68;

#line 647 "accumulator.m"
    {
#line 647 "accumulator.m"
      mercury__pair__fst_2_p_0(transform_hlds__accumulator__TypeInfo_69_69, transform_hlds__accumulator__TypeInfo_69_69, transform_hlds__accumulator__HeadVar__1_67, &transform_hlds__accumulator__conv0_HeadVar__2_68);
    }
#line 647 "accumulator.m"
    *transform_hlds__accumulator__HeadVar__2_68 = ((MR_Word) transform_hlds__accumulator__conv0_HeadVar__2_68);
#line 647 "accumulator.m"
  }
#line 647 "accumulator.m"
}

#line 642 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__642__1_2_p_0(
#line 642 "accumulator.m"
  MR_Word transform_hlds__accumulator__ChangedVars_37,
#line 642 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_51)
#line 642 "accumulator.m"
{
#line 642 "accumulator.m"
  {
#line 642 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 642 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadVar_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_51, (MR_Integer) 0)));
#line 643 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_51, (MR_Integer) 1)));

#line 644 "accumulator.m"
    {
#line 644 "accumulator.m"
      return transform_hlds__accumulator__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__accumulator__ChangedVars_37, transform_hlds__accumulator__HeadVar_41);
    }
#line 642 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 642 "accumulator.m"
  }
#line 642 "accumulator.m"
}

#line 598 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_2(
#line 598 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 598 "accumulator.m"
{
#line 598 "accumulator.m"
  {
#line 598 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 598 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__HeadVar__4_19) = ((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__conv0_HeadVar__4_19);
#line 598 "accumulator.m"
    {
#line 598 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_1(transform_hlds__accumulator__env_ptr);
#line 598 "accumulator.m"
      return;
    }
#line 598 "accumulator.m"
  }
#line 598 "accumulator.m"
}

#line 597 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_1(
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 597 "accumulator.m"
{
#line 597 "accumulator.m"
  {
#line 597 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 597 "accumulator.m"
    {
#line 598 "accumulator.m"
      MR_Word transform_hlds__accumulator___InstMap_12;
#line 599 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_13_13;
#line 600 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_18_18;
#line 600 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_14_14;
#line 600 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_15_15;
#line 600 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_16_16;
#line 600 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_17_17;

#line 598 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 598 "accumulator.m"
      transform_hlds__accumulator___InstMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 599 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__HeadVar__4_19), (MR_Integer) 0)));
#line 599 "accumulator.m"
      transform_hlds__accumulator__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__HeadVar__4_19), (MR_Integer) 1)));
#line 599 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_21_21 == (MR_Integer) 1);
#line 597 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded)
#line 597 "accumulator.m"
        {
#line 600 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__Goal_11, (MR_Integer) 0)));
#line 600 "accumulator.m"
          transform_hlds__accumulator__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__Goal_11, (MR_Integer) 1)));
#line 600 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22)) == (MR_mktag((MR_Integer) 2)));
#line 600 "accumulator.m"
          if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded)
#line 600 "accumulator.m"
            {
#line 600 "accumulator.m"
              {
#line 600 "accumulator.m"
                (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22, (MR_Integer) 0)));
#line 600 "accumulator.m"
                (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22, (MR_Integer) 1)));
#line 600 "accumulator.m"
                transform_hlds__accumulator__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22, (MR_Integer) 2)));
#line 600 "accumulator.m"
                transform_hlds__accumulator__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22, (MR_Integer) 3)));
#line 600 "accumulator.m"
                transform_hlds__accumulator__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22, (MR_Integer) 4)));
#line 600 "accumulator.m"
                transform_hlds__accumulator__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_22_22, (MR_Integer) 5)));
#line 600 "accumulator.m"
              }
#line 597 "accumulator.m"
              {
#line 600 "accumulator.m"
                {
#line 600 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__PredId_5, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_26_26);
                }
#line 597 "accumulator.m"
                if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded)
#line 597 "accumulator.m"
                  {
#line 600 "accumulator.m"
                    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__ProcId_6 == (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_27_27);
#line 600 "accumulator.m"
                    if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__succeeded)
#line 600 "accumulator.m"
                      {
#line 600 "accumulator.m"
                        ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__cont_env_ptr);
#line 600 "accumulator.m"
                        return;
                      }
#line 597 "accumulator.m"
                  }
#line 597 "accumulator.m"
              }
#line 600 "accumulator.m"
            }
#line 597 "accumulator.m"
        }
#line 597 "accumulator.m"
    }
#line 597 "accumulator.m"
  }
#line 597 "accumulator.m"
}

#line 597 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0(
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_5,
#line 597 "accumulator.m"
  MR_Integer transform_hlds__accumulator__ProcId_6,
#line 597 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_7,
#line 597 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__4_19,
#line 597 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 597 "accumulator.m"
{
#line 597 "accumulator.m"
  {
#line 597 "accumulator.m"
    struct transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0_s transform_hlds__accumulator__env;

#line 597 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__PredId_5 = transform_hlds__accumulator__PredId_5;
#line 597 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__ProcId_6 = transform_hlds__accumulator__ProcId_6;
#line 597 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__HeadVar__4_19 = transform_hlds__accumulator__HeadVar__4_19;
#line 597 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__cont = transform_hlds__accumulator__cont;
#line 597 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 598 "accumulator.m"
    {
#line 598 "accumulator.m"
      transform_hlds__goal_store__goal_store_member_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__GoalStore_7, &(transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__conv0_HeadVar__4_19, &(transform_hlds__accumulator__env).transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_env_0__V_20_20, transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0_2, &transform_hlds__accumulator__env);
    }
#line 597 "accumulator.m"
  }
#line 597 "accumulator.m"
}

#line 206 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____top_level_0_0(
#line 206 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 206 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 206 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 206 "accumulator.m"
{
#line 206 "accumulator.m"
  {
#line 206 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 206 "accumulator.m"
    MR_Integer transform_hlds__accumulator__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 206 "accumulator.m"
    MR_Integer transform_hlds__accumulator__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 206 "accumulator.m"
    {
#line 206 "accumulator.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__Cast_HeadVar1_4, transform_hlds__accumulator__Cast_HeadVar2_5);
#line 206 "accumulator.m"
      return;
    }
#line 206 "accumulator.m"
  }
#line 206 "accumulator.m"
}

#line 206 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____top_level_0_0(
#line 206 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_1,
#line 206 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 206 "accumulator.m"
{
#line 5777 "transform_hlds.accumulator.c"
  {
#line 5779 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__HeadVar__2_1 == transform_hlds__accumulator__HeadVar__2_2);

#line 5782 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 5784 "transform_hlds.accumulator.c"
  }
#line 206 "accumulator.m"
}

#line 552 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____store_info_0_0(
#line 552 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 552 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 552 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 552 "accumulator.m"
{
#line 552 "accumulator.m"
  {
#line 552 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 552 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_12 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 552 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_13 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 552 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_12 == transform_hlds__accumulator__CastY_13);
#line 552 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 5813 "transform_hlds.accumulator.c"
      *transform_hlds__accumulator__HeadVar__1_1 = (MR_Integer) 0;
#line 552 "accumulator.m"
    else
#line 552 "accumulator.m"
      {
#line 552 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 552 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 2)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10;

#line 552 "accumulator.m"
        {
#line 552 "accumulator.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__accumulator__V_10_10, transform_hlds__accumulator__V_4_4, transform_hlds__accumulator__V_7_7);
        }
#line 5839 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_10_10 == (MR_Integer) 0);
#line 552 "accumulator.m"
        transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 552 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 552 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_10_10;
#line 552 "accumulator.m"
        else
#line 552 "accumulator.m"
          {
#line 552 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_11_11;

#line 552 "accumulator.m"
            {
#line 552 "accumulator.m"
              hlds__instmap____Compare____instmap_0_0(&transform_hlds__accumulator__V_11_11, transform_hlds__accumulator__V_5_5, transform_hlds__accumulator__V_8_8);
            }
#line 5859 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_11_11 == (MR_Integer) 0);
#line 552 "accumulator.m"
            transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 552 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 552 "accumulator.m"
              *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_11_11;
#line 552 "accumulator.m"
            else
#line 552 "accumulator.m"
              {
#line 552 "accumulator.m"
                {
#line 552 "accumulator.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__HeadVar__1_1, ((MR_Box) (transform_hlds__accumulator__V_6_6)), ((MR_Box) (transform_hlds__accumulator__V_9_9)));
#line 552 "accumulator.m"
                  return;
                }
#line 552 "accumulator.m"
              }
#line 552 "accumulator.m"
          }
#line 552 "accumulator.m"
      }
#line 552 "accumulator.m"
  }
#line 552 "accumulator.m"
}

#line 552 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____store_info_0_0(
#line 552 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 552 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 552 "accumulator.m"
{
#line 552 "accumulator.m"
  {
#line 552 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 552 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_9 = (MR_Integer) transform_hlds__accumulator__HeadVar__1_1;
#line 552 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_10 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;

#line 552 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_9 == transform_hlds__accumulator__CastY_10);
#line 552 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 552 "accumulator.m"
      transform_hlds__accumulator__succeeded = MR_TRUE;
#line 552 "accumulator.m"
    else
#line 552 "accumulator.m"
      {
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_12_12;
#line 552 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 2)));
#line 552 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 552 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));

#line 5932 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_3_3 == transform_hlds__accumulator__V_6_6);
#line 552 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 552 "accumulator.m"
          {
#line 5938 "transform_hlds.accumulator.c"
            {
#line 5940 "transform_hlds.accumulator.c"
              transform_hlds__accumulator__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__accumulator__V_4_4, transform_hlds__accumulator__V_7_7);
            }
#line 552 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 552 "accumulator.m"
              {
#line 5947 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__TypeInfo_12_12 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[1];
#line 5949 "transform_hlds.accumulator.c"
                {
#line 5951 "transform_hlds.accumulator.c"
                  return transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_12_12, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_8_8)));
                }
#line 552 "accumulator.m"
              }
#line 552 "accumulator.m"
          }
#line 552 "accumulator.m"
      }
#line 552 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 552 "accumulator.m"
  }
#line 552 "accumulator.m"
}

#line 233 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_warning_0_0(
#line 233 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 233 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 233 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 233 "accumulator.m"
{
#line 233 "accumulator.m"
  {
#line 233 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 233 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_15 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 233 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_16 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 233 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_15 == transform_hlds__accumulator__CastY_16);
#line 233 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 5991 "transform_hlds.accumulator.c"
      *transform_hlds__accumulator__HeadVar__1_1 = (MR_Integer) 0;
#line 233 "accumulator.m"
    else
#line 233 "accumulator.m"
      {
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 3)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 2)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 3)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_12_12;

#line 233 "accumulator.m"
        {
#line 233 "accumulator.m"
          mercury__term____Compare____context_0_0(&transform_hlds__accumulator__V_12_12, transform_hlds__accumulator__V_4_4, transform_hlds__accumulator__V_8_8);
        }
#line 6021 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_12_12 == (MR_Integer) 0);
#line 233 "accumulator.m"
        transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 233 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 233 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_12_12;
#line 233 "accumulator.m"
        else
#line 233 "accumulator.m"
          {
#line 233 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_13_13;

#line 233 "accumulator.m"
            {
#line 233 "accumulator.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__accumulator__V_13_13, transform_hlds__accumulator__V_5_5, transform_hlds__accumulator__V_9_9);
            }
#line 6041 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_13_13 == (MR_Integer) 0);
#line 233 "accumulator.m"
            transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 233 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 233 "accumulator.m"
              *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_13_13;
#line 233 "accumulator.m"
            else
#line 233 "accumulator.m"
              {
#line 233 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_14_14;

#line 233 "accumulator.m"
                {
#line 233 "accumulator.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[2], &transform_hlds__accumulator__V_14_14, ((MR_Box) (transform_hlds__accumulator__V_6_6)), ((MR_Box) (transform_hlds__accumulator__V_10_10)));
                }
#line 6061 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_14_14 == (MR_Integer) 0);
#line 233 "accumulator.m"
                transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 233 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 233 "accumulator.m"
                  *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_14_14;
#line 233 "accumulator.m"
                else
#line 233 "accumulator.m"
                  {
#line 233 "accumulator.m"
                    {
#line 233 "accumulator.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[2], transform_hlds__accumulator__HeadVar__1_1, ((MR_Box) (transform_hlds__accumulator__V_7_7)), ((MR_Box) (transform_hlds__accumulator__V_11_11)));
#line 233 "accumulator.m"
                      return;
                    }
#line 233 "accumulator.m"
                  }
#line 233 "accumulator.m"
              }
#line 233 "accumulator.m"
          }
#line 233 "accumulator.m"
      }
#line 233 "accumulator.m"
  }
#line 233 "accumulator.m"
}

#line 233 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_warning_0_0(
#line 233 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 233 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 233 "accumulator.m"
{
#line 233 "accumulator.m"
  {
#line 233 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 233 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_11 = (MR_Integer) transform_hlds__accumulator__HeadVar__1_1;
#line 233 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_12 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;

#line 233 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_11 == transform_hlds__accumulator__CastY_12);
#line 233 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 233 "accumulator.m"
      transform_hlds__accumulator__succeeded = MR_TRUE;
#line 233 "accumulator.m"
    else
#line 233 "accumulator.m"
      {
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_15_15;
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_16_16;
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 2)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 3)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 233 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 3)));

#line 6142 "transform_hlds.accumulator.c"
        {
#line 6144 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__succeeded = mercury__term____Unify____context_0_0(transform_hlds__accumulator__V_3_3, transform_hlds__accumulator__V_7_7);
        }
#line 233 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 233 "accumulator.m"
          {
#line 6151 "transform_hlds.accumulator.c"
            {
#line 6153 "transform_hlds.accumulator.c"
              transform_hlds__accumulator__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__accumulator__V_4_4, transform_hlds__accumulator__V_8_8);
            }
#line 233 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 233 "accumulator.m"
              {
#line 6160 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__TypeInfo_15_15 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 6162 "transform_hlds.accumulator.c"
                {
#line 6164 "transform_hlds.accumulator.c"
                  transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_15_15, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_9_9)));
                }
#line 233 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 233 "accumulator.m"
                  {
#line 6171 "transform_hlds.accumulator.c"
                    transform_hlds__accumulator__TypeInfo_16_16 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 6173 "transform_hlds.accumulator.c"
                    {
#line 6175 "transform_hlds.accumulator.c"
                      return transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_16_16, ((MR_Box) (transform_hlds__accumulator__V_6_6)), ((MR_Box) (transform_hlds__accumulator__V_10_10)));
                    }
#line 233 "accumulator.m"
                  }
#line 233 "accumulator.m"
              }
#line 233 "accumulator.m"
          }
#line 233 "accumulator.m"
      }
#line 233 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 233 "accumulator.m"
  }
#line 233 "accumulator.m"
}

#line 1081 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_substs_0_0(
#line 1081 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 1081 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1081 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 1081 "accumulator.m"
{
#line 1081 "accumulator.m"
  {
#line 1081 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1081 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_15 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 1081 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_16 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 1081 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_15 == transform_hlds__accumulator__CastY_16);
#line 1081 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 6217 "transform_hlds.accumulator.c"
      *transform_hlds__accumulator__HeadVar__1_1 = (MR_Integer) 0;
#line 1081 "accumulator.m"
    else
#line 1081 "accumulator.m"
      {
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 3)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 2)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 3)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_12_12;

#line 1081 "accumulator.m"
        {
#line 1081 "accumulator.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_2[1], &transform_hlds__accumulator__V_12_12, ((MR_Box) (transform_hlds__accumulator__V_4_4)), ((MR_Box) (transform_hlds__accumulator__V_8_8)));
        }
#line 6247 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_12_12 == (MR_Integer) 0);
#line 1081 "accumulator.m"
        transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 1081 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1081 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_12_12;
#line 1081 "accumulator.m"
        else
#line 1081 "accumulator.m"
          {
#line 1081 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_13_13;

#line 1081 "accumulator.m"
            {
#line 1081 "accumulator.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_2[1], &transform_hlds__accumulator__V_13_13, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_9_9)));
            }
#line 6267 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_13_13 == (MR_Integer) 0);
#line 1081 "accumulator.m"
            transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 1081 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1081 "accumulator.m"
              *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_13_13;
#line 1081 "accumulator.m"
            else
#line 1081 "accumulator.m"
              {
#line 1081 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_14_14;

#line 1081 "accumulator.m"
                {
#line 1081 "accumulator.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_2[1], &transform_hlds__accumulator__V_14_14, ((MR_Box) (transform_hlds__accumulator__V_6_6)), ((MR_Box) (transform_hlds__accumulator__V_10_10)));
                }
#line 6287 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_14_14 == (MR_Integer) 0);
#line 1081 "accumulator.m"
                transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 1081 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 1081 "accumulator.m"
                  *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_14_14;
#line 1081 "accumulator.m"
                else
#line 1081 "accumulator.m"
                  {
#line 1081 "accumulator.m"
                    {
#line 1081 "accumulator.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_2[1], transform_hlds__accumulator__HeadVar__1_1, ((MR_Box) (transform_hlds__accumulator__V_7_7)), ((MR_Box) (transform_hlds__accumulator__V_11_11)));
#line 1081 "accumulator.m"
                      return;
                    }
#line 1081 "accumulator.m"
                  }
#line 1081 "accumulator.m"
              }
#line 1081 "accumulator.m"
          }
#line 1081 "accumulator.m"
      }
#line 1081 "accumulator.m"
  }
#line 1081 "accumulator.m"
}

#line 1081 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_substs_0_0(
#line 1081 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1081 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 1081 "accumulator.m"
{
#line 1081 "accumulator.m"
  {
#line 1081 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1081 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_11 = (MR_Integer) transform_hlds__accumulator__HeadVar__1_1;
#line 1081 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_12 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;

#line 1081 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_11 == transform_hlds__accumulator__CastY_12);
#line 1081 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1081 "accumulator.m"
      transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1081 "accumulator.m"
    else
#line 1081 "accumulator.m"
      {
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_14_14;
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_15_15;
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_16_16;
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 2)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 3)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 1081 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 3)));

#line 6370 "transform_hlds.accumulator.c"
        {
#line 6372 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_2[1], ((MR_Box) (transform_hlds__accumulator__V_3_3)), ((MR_Box) (transform_hlds__accumulator__V_7_7)));
        }
#line 1081 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1081 "accumulator.m"
          {
#line 6379 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeInfo_14_14 = (MR_Word) &transform_hlds__accumulator_scalar_common_2[1];
#line 6381 "transform_hlds.accumulator.c"
            {
#line 6383 "transform_hlds.accumulator.c"
              transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_14_14, ((MR_Box) (transform_hlds__accumulator__V_4_4)), ((MR_Box) (transform_hlds__accumulator__V_8_8)));
            }
#line 1081 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1081 "accumulator.m"
              {
#line 6390 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__TypeInfo_15_15 = (MR_Word) &transform_hlds__accumulator_scalar_common_2[1];
#line 6392 "transform_hlds.accumulator.c"
                {
#line 6394 "transform_hlds.accumulator.c"
                  transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_15_15, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_9_9)));
                }
#line 1081 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 1081 "accumulator.m"
                  {
#line 6401 "transform_hlds.accumulator.c"
                    transform_hlds__accumulator__TypeInfo_16_16 = (MR_Word) &transform_hlds__accumulator_scalar_common_2[1];
#line 6403 "transform_hlds.accumulator.c"
                    {
#line 6405 "transform_hlds.accumulator.c"
                      return transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_16_16, ((MR_Box) (transform_hlds__accumulator__V_6_6)), ((MR_Box) (transform_hlds__accumulator__V_10_10)));
                    }
#line 1081 "accumulator.m"
                  }
#line 1081 "accumulator.m"
              }
#line 1081 "accumulator.m"
          }
#line 1081 "accumulator.m"
      }
#line 1081 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1081 "accumulator.m"
  }
#line 1081 "accumulator.m"
}

#line 231 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_subst_0_0(
#line 231 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 231 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 231 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 231 "accumulator.m"
{
#line 231 "accumulator.m"
  {
#line 231 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 231 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cast_HeadVar1_4 = transform_hlds__accumulator__HeadVar__2_2;
#line 231 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cast_HeadVar2_5 = transform_hlds__accumulator__HeadVar__3_3;

#line 231 "accumulator.m"
    {
#line 231 "accumulator.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_2[1], transform_hlds__accumulator__HeadVar__1_1, ((MR_Box) (transform_hlds__accumulator__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__accumulator__Cast_HeadVar2_5)));
#line 231 "accumulator.m"
      return;
    }
#line 231 "accumulator.m"
  }
#line 231 "accumulator.m"
}

#line 231 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_subst_0_0(
#line 231 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 231 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 231 "accumulator.m"
{
#line 231 "accumulator.m"
  {
#line 231 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 231 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cast_HeadVar1_3 = transform_hlds__accumulator__HeadVar__1_1;
#line 231 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cast_HeadVar2_4 = transform_hlds__accumulator__HeadVar__2_2;

#line 231 "accumulator.m"
    {
#line 231 "accumulator.m"
      return transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_2[1], ((MR_Box) (transform_hlds__accumulator__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__accumulator__Cast_HeadVar2_4)));
    }
#line 231 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 231 "accumulator.m"
  }
#line 231 "accumulator.m"
}

#line 666 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_sets_0_0(
#line 666 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 666 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 666 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 666 "accumulator.m"
{
#line 666 "accumulator.m"
  {
#line 666 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 666 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_21 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 666 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_22 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 666 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_21 == transform_hlds__accumulator__CastY_22);
#line 666 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 6509 "transform_hlds.accumulator.c"
      *transform_hlds__accumulator__HeadVar__1_1 = (MR_Integer) 0;
#line 666 "accumulator.m"
    else
#line 666 "accumulator.m"
      {
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 3)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 4)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 5)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 2)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 3)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 4)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 5)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_16_16;

#line 666 "accumulator.m"
        {
#line 666 "accumulator.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], &transform_hlds__accumulator__V_16_16, ((MR_Box) (transform_hlds__accumulator__V_4_4)), ((MR_Box) (transform_hlds__accumulator__V_10_10)));
        }
#line 6547 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_16_16 == (MR_Integer) 0);
#line 666 "accumulator.m"
        transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 666 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_16_16;
#line 666 "accumulator.m"
        else
#line 666 "accumulator.m"
          {
#line 666 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_17_17;

#line 666 "accumulator.m"
            {
#line 666 "accumulator.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], &transform_hlds__accumulator__V_17_17, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_11_11)));
            }
#line 6567 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_17_17 == (MR_Integer) 0);
#line 666 "accumulator.m"
            transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 666 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
              *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_17_17;
#line 666 "accumulator.m"
            else
#line 666 "accumulator.m"
              {
#line 666 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_18_18;

#line 666 "accumulator.m"
                {
#line 666 "accumulator.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], &transform_hlds__accumulator__V_18_18, ((MR_Box) (transform_hlds__accumulator__V_6_6)), ((MR_Box) (transform_hlds__accumulator__V_12_12)));
                }
#line 6587 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_18_18 == (MR_Integer) 0);
#line 666 "accumulator.m"
                transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 666 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
                  *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_18_18;
#line 666 "accumulator.m"
                else
#line 666 "accumulator.m"
                  {
#line 666 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_19_19;

#line 666 "accumulator.m"
                    {
#line 666 "accumulator.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], &transform_hlds__accumulator__V_19_19, ((MR_Box) (transform_hlds__accumulator__V_7_7)), ((MR_Box) (transform_hlds__accumulator__V_13_13)));
                    }
#line 6607 "transform_hlds.accumulator.c"
                    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_19_19 == (MR_Integer) 0);
#line 666 "accumulator.m"
                    transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 666 "accumulator.m"
                    if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
                      *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_19_19;
#line 666 "accumulator.m"
                    else
#line 666 "accumulator.m"
                      {
#line 666 "accumulator.m"
                        MR_Word transform_hlds__accumulator__V_20_20;

#line 666 "accumulator.m"
                        {
#line 666 "accumulator.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], &transform_hlds__accumulator__V_20_20, ((MR_Box) (transform_hlds__accumulator__V_8_8)), ((MR_Box) (transform_hlds__accumulator__V_14_14)));
                        }
#line 6627 "transform_hlds.accumulator.c"
                        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_20_20 == (MR_Integer) 0);
#line 666 "accumulator.m"
                        transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 666 "accumulator.m"
                        if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
                          *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_20_20;
#line 666 "accumulator.m"
                        else
#line 666 "accumulator.m"
                          {
#line 666 "accumulator.m"
                            {
#line 666 "accumulator.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], transform_hlds__accumulator__HeadVar__1_1, ((MR_Box) (transform_hlds__accumulator__V_9_9)), ((MR_Box) (transform_hlds__accumulator__V_15_15)));
#line 666 "accumulator.m"
                              return;
                            }
#line 666 "accumulator.m"
                          }
#line 666 "accumulator.m"
                      }
#line 666 "accumulator.m"
                  }
#line 666 "accumulator.m"
              }
#line 666 "accumulator.m"
          }
#line 666 "accumulator.m"
      }
#line 666 "accumulator.m"
  }
#line 666 "accumulator.m"
}

#line 666 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_sets_0_0(
#line 666 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 666 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 666 "accumulator.m"
{
#line 666 "accumulator.m"
  {
#line 666 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 666 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_15 = (MR_Integer) transform_hlds__accumulator__HeadVar__1_1;
#line 666 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_16 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;

#line 666 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_15 == transform_hlds__accumulator__CastY_16);
#line 666 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
      transform_hlds__accumulator__succeeded = MR_TRUE;
#line 666 "accumulator.m"
    else
#line 666 "accumulator.m"
      {
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_18_18;
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_19_19;
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_20_20;
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_21_21;
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_22_22;
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 2)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 3)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 4)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 5)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 3)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 4)));
#line 666 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 5)));

#line 6726 "transform_hlds.accumulator.c"
        {
#line 6728 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], ((MR_Box) (transform_hlds__accumulator__V_3_3)), ((MR_Box) (transform_hlds__accumulator__V_9_9)));
        }
#line 666 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
          {
#line 6735 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeInfo_18_18 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[4];
#line 6737 "transform_hlds.accumulator.c"
            {
#line 6739 "transform_hlds.accumulator.c"
              transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_18_18, ((MR_Box) (transform_hlds__accumulator__V_4_4)), ((MR_Box) (transform_hlds__accumulator__V_10_10)));
            }
#line 666 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
              {
#line 6746 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__TypeInfo_19_19 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[4];
#line 6748 "transform_hlds.accumulator.c"
                {
#line 6750 "transform_hlds.accumulator.c"
                  transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_19_19, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_11_11)));
                }
#line 666 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
                  {
#line 6757 "transform_hlds.accumulator.c"
                    transform_hlds__accumulator__TypeInfo_20_20 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[4];
#line 6759 "transform_hlds.accumulator.c"
                    {
#line 6761 "transform_hlds.accumulator.c"
                      transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_20_20, ((MR_Box) (transform_hlds__accumulator__V_6_6)), ((MR_Box) (transform_hlds__accumulator__V_12_12)));
                    }
#line 666 "accumulator.m"
                    if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
                      {
#line 6768 "transform_hlds.accumulator.c"
                        transform_hlds__accumulator__TypeInfo_21_21 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[4];
#line 6770 "transform_hlds.accumulator.c"
                        {
#line 6772 "transform_hlds.accumulator.c"
                          transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_21_21, ((MR_Box) (transform_hlds__accumulator__V_7_7)), ((MR_Box) (transform_hlds__accumulator__V_13_13)));
                        }
#line 666 "accumulator.m"
                        if (transform_hlds__accumulator__succeeded)
#line 666 "accumulator.m"
                          {
#line 6779 "transform_hlds.accumulator.c"
                            transform_hlds__accumulator__TypeInfo_22_22 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[4];
#line 6781 "transform_hlds.accumulator.c"
                            {
#line 6783 "transform_hlds.accumulator.c"
                              return transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_22_22, ((MR_Box) (transform_hlds__accumulator__V_8_8)), ((MR_Box) (transform_hlds__accumulator__V_14_14)));
                            }
#line 666 "accumulator.m"
                          }
#line 666 "accumulator.m"
                      }
#line 666 "accumulator.m"
                  }
#line 666 "accumulator.m"
              }
#line 666 "accumulator.m"
          }
#line 666 "accumulator.m"
      }
#line 666 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 666 "accumulator.m"
  }
#line 666 "accumulator.m"
}

#line 227 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_goal_store_0_0(
#line 227 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 227 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 227 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 227 "accumulator.m"
{
#line 227 "accumulator.m"
  {
#line 227 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 227 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cast_HeadVar1_4 = transform_hlds__accumulator__HeadVar__2_2;
#line 227 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cast_HeadVar2_5 = transform_hlds__accumulator__HeadVar__3_3;

#line 227 "accumulator.m"
    {
#line 227 "accumulator.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__HeadVar__1_1, ((MR_Box) (transform_hlds__accumulator__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__accumulator__Cast_HeadVar2_5)));
#line 227 "accumulator.m"
      return;
    }
#line 227 "accumulator.m"
  }
#line 227 "accumulator.m"
}

#line 227 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_goal_store_0_0(
#line 227 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 227 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 227 "accumulator.m"
{
#line 227 "accumulator.m"
  {
#line 227 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 227 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cast_HeadVar1_3 = transform_hlds__accumulator__HeadVar__1_1;
#line 227 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cast_HeadVar2_4 = transform_hlds__accumulator__HeadVar__2_2;

#line 227 "accumulator.m"
    {
#line 227 "accumulator.m"
      return transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[1], ((MR_Box) (transform_hlds__accumulator__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__accumulator__Cast_HeadVar2_4)));
    }
#line 227 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 227 "accumulator.m"
  }
#line 227 "accumulator.m"
}

#line 218 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_goal_id_0_0(
#line 218 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 218 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 218 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 218 "accumulator.m"
{
#line 218 "accumulator.m"
  {
#line 218 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 218 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_9 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 218 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_10 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 218 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_9 == transform_hlds__accumulator__CastY_10);
#line 218 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 6891 "transform_hlds.accumulator.c"
      *transform_hlds__accumulator__HeadVar__1_1 = (MR_Integer) 0;
#line 218 "accumulator.m"
    else
#line 218 "accumulator.m"
      {
#line 218 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8;
#line 218 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_13_13 = (MR_Integer) transform_hlds__accumulator__V_4_4;
#line 218 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_14_14 = (MR_Integer) transform_hlds__accumulator__V_6_6;

#line 218 "accumulator.m"
        {
#line 218 "accumulator.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__accumulator__V_8_8, transform_hlds__accumulator__V_13_13, transform_hlds__accumulator__V_14_14);
        }
#line 6917 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_8_8 == (MR_Integer) 0);
#line 218 "accumulator.m"
        transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 218 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 218 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_8_8;
#line 218 "accumulator.m"
        else
#line 218 "accumulator.m"
          {
#line 218 "accumulator.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__V_5_5, transform_hlds__accumulator__V_7_7);
#line 218 "accumulator.m"
            return;
          }
#line 218 "accumulator.m"
      }
#line 218 "accumulator.m"
  }
#line 218 "accumulator.m"
}

#line 218 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_goal_id_0_0(
#line 218 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 218 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 218 "accumulator.m"
{
#line 218 "accumulator.m"
  {
#line 218 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 218 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_7 = (MR_Integer) transform_hlds__accumulator__HeadVar__1_1;
#line 218 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_8 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;

#line 218 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_7 == transform_hlds__accumulator__CastY_8);
#line 218 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 218 "accumulator.m"
      transform_hlds__accumulator__succeeded = MR_TRUE;
#line 218 "accumulator.m"
    else
#line 218 "accumulator.m"
      {
#line 218 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 218 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));

#line 6978 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_3_3 == transform_hlds__accumulator__V_5_5);
#line 218 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 6982 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_4_4 == transform_hlds__accumulator__V_6_6);
#line 218 "accumulator.m"
      }
#line 218 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 218 "accumulator.m"
  }
#line 218 "accumulator.m"
}

#line 221 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_case_0_0(
#line 221 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 221 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 221 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 221 "accumulator.m"
{
#line 221 "accumulator.m"
  {
#line 221 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 221 "accumulator.m"
    MR_Integer transform_hlds__accumulator__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 221 "accumulator.m"
    MR_Integer transform_hlds__accumulator__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 221 "accumulator.m"
    {
#line 221 "accumulator.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__Cast_HeadVar1_4, transform_hlds__accumulator__Cast_HeadVar2_5);
#line 221 "accumulator.m"
      return;
    }
#line 221 "accumulator.m"
  }
#line 221 "accumulator.m"
}

#line 221 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_case_0_0(
#line 221 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_1,
#line 221 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 221 "accumulator.m"
{
#line 7034 "transform_hlds.accumulator.c"
  {
#line 7036 "transform_hlds.accumulator.c"
    MR_bool transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__HeadVar__2_1 == transform_hlds__accumulator__HeadVar__2_2);

#line 7039 "transform_hlds.accumulator.c"
    return transform_hlds__accumulator__succeeded;
#line 7041 "transform_hlds.accumulator.c"
  }
#line 221 "accumulator.m"
}

#line 1089 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_base_0_0(
#line 1089 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 1089 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1089 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 1089 "accumulator.m"
{
#line 1089 "accumulator.m"
  {
#line 1089 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1089 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_12 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 1089 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_13 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 1089 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_12 == transform_hlds__accumulator__CastY_13);
#line 1089 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 7070 "transform_hlds.accumulator.c"
      *transform_hlds__accumulator__HeadVar__1_1 = (MR_Integer) 0;
#line 1089 "accumulator.m"
    else
#line 1089 "accumulator.m"
      {
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 2)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10;

#line 1089 "accumulator.m"
        {
#line 1089 "accumulator.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], &transform_hlds__accumulator__V_10_10, ((MR_Box) (transform_hlds__accumulator__V_4_4)), ((MR_Box) (transform_hlds__accumulator__V_7_7)));
        }
#line 7096 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_10_10 == (MR_Integer) 0);
#line 1089 "accumulator.m"
        transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 1089 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1089 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_10_10;
#line 1089 "accumulator.m"
        else
#line 1089 "accumulator.m"
          {
#line 1089 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_11_11;

#line 1089 "accumulator.m"
            {
#line 1089 "accumulator.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], &transform_hlds__accumulator__V_11_11, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_8_8)));
            }
#line 7116 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_11_11 == (MR_Integer) 0);
#line 1089 "accumulator.m"
            transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 1089 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1089 "accumulator.m"
              *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_11_11;
#line 1089 "accumulator.m"
            else
#line 1089 "accumulator.m"
              {
#line 1089 "accumulator.m"
                {
#line 1089 "accumulator.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], transform_hlds__accumulator__HeadVar__1_1, ((MR_Box) (transform_hlds__accumulator__V_6_6)), ((MR_Box) (transform_hlds__accumulator__V_9_9)));
#line 1089 "accumulator.m"
                  return;
                }
#line 1089 "accumulator.m"
              }
#line 1089 "accumulator.m"
          }
#line 1089 "accumulator.m"
      }
#line 1089 "accumulator.m"
  }
#line 1089 "accumulator.m"
}

#line 1089 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_base_0_0(
#line 1089 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1089 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 1089 "accumulator.m"
{
#line 1089 "accumulator.m"
  {
#line 1089 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1089 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_9 = (MR_Integer) transform_hlds__accumulator__HeadVar__1_1;
#line 1089 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_10 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;

#line 1089 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_9 == transform_hlds__accumulator__CastY_10);
#line 1089 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1089 "accumulator.m"
      transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1089 "accumulator.m"
    else
#line 1089 "accumulator.m"
      {
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_12_12;
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_13_13;
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 2)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 1089 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));

#line 7191 "transform_hlds.accumulator.c"
        {
#line 7193 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[4], ((MR_Box) (transform_hlds__accumulator__V_3_3)), ((MR_Box) (transform_hlds__accumulator__V_6_6)));
        }
#line 1089 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1089 "accumulator.m"
          {
#line 7200 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeInfo_12_12 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[4];
#line 7202 "transform_hlds.accumulator.c"
            {
#line 7204 "transform_hlds.accumulator.c"
              transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_12_12, ((MR_Box) (transform_hlds__accumulator__V_4_4)), ((MR_Box) (transform_hlds__accumulator__V_7_7)));
            }
#line 1089 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1089 "accumulator.m"
              {
#line 7211 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__TypeInfo_13_13 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[4];
#line 7213 "transform_hlds.accumulator.c"
                {
#line 7215 "transform_hlds.accumulator.c"
                  return transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_13_13, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_8_8)));
                }
#line 1089 "accumulator.m"
              }
#line 1089 "accumulator.m"
          }
#line 1089 "accumulator.m"
      }
#line 1089 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1089 "accumulator.m"
  }
#line 1089 "accumulator.m"
}

#line 964 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator____Compare____accu_assoc_0_0(
#line 964 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__1_1,
#line 964 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 964 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3)
#line 964 "accumulator.m"
{
#line 964 "accumulator.m"
  {
#line 964 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 964 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_12 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;
#line 964 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_13 = (MR_Integer) transform_hlds__accumulator__HeadVar__3_3;

#line 964 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_12 == transform_hlds__accumulator__CastY_13);
#line 964 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 7255 "transform_hlds.accumulator.c"
      *transform_hlds__accumulator__HeadVar__1_1 = (MR_Integer) 0;
#line 964 "accumulator.m"
    else
#line 964 "accumulator.m"
      {
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 2)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_10_10;

#line 964 "accumulator.m"
        {
#line 964 "accumulator.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[3], &transform_hlds__accumulator__V_10_10, ((MR_Box) (transform_hlds__accumulator__V_4_4)), ((MR_Box) (transform_hlds__accumulator__V_7_7)));
        }
#line 7281 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_10_10 == (MR_Integer) 0);
#line 964 "accumulator.m"
        transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 964 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 964 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_10_10;
#line 964 "accumulator.m"
        else
#line 964 "accumulator.m"
          {
#line 964 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_11_11;

#line 964 "accumulator.m"
            {
#line 964 "accumulator.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[2], &transform_hlds__accumulator__V_11_11, ((MR_Box) (transform_hlds__accumulator__V_5_5)), ((MR_Box) (transform_hlds__accumulator__V_8_8)));
            }
#line 7301 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_11_11 == (MR_Integer) 0);
#line 964 "accumulator.m"
            transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 964 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 964 "accumulator.m"
              *transform_hlds__accumulator__HeadVar__1_1 = transform_hlds__accumulator__V_11_11;
#line 964 "accumulator.m"
            else
#line 964 "accumulator.m"
              {
#line 964 "accumulator.m"
                MR_Integer transform_hlds__accumulator__V_17_17 = (MR_Integer) transform_hlds__accumulator__V_6_6;
#line 964 "accumulator.m"
                MR_Integer transform_hlds__accumulator__V_18_18 = (MR_Integer) transform_hlds__accumulator__V_9_9;

#line 964 "accumulator.m"
                {
#line 964 "accumulator.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__V_17_17, transform_hlds__accumulator__V_18_18);
#line 964 "accumulator.m"
                  return;
                }
#line 964 "accumulator.m"
              }
#line 964 "accumulator.m"
          }
#line 964 "accumulator.m"
      }
#line 964 "accumulator.m"
  }
#line 964 "accumulator.m"
}

#line 964 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator____Unify____accu_assoc_0_0(
#line 964 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 964 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 964 "accumulator.m"
{
#line 964 "accumulator.m"
  {
#line 964 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 964 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastX_9 = (MR_Integer) transform_hlds__accumulator__HeadVar__1_1;
#line 964 "accumulator.m"
    MR_Integer transform_hlds__accumulator__CastY_10 = (MR_Integer) transform_hlds__accumulator__HeadVar__2_2;

#line 964 "accumulator.m"
    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__CastX_9 == transform_hlds__accumulator__CastY_10);
#line 964 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 964 "accumulator.m"
      transform_hlds__accumulator__succeeded = MR_TRUE;
#line 964 "accumulator.m"
    else
#line 964 "accumulator.m"
      {
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_12_12;
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 2)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 964 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 2)));

#line 7379 "transform_hlds.accumulator.c"
        {
#line 7381 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[3], ((MR_Box) (transform_hlds__accumulator__V_3_3)), ((MR_Box) (transform_hlds__accumulator__V_6_6)));
        }
#line 964 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 964 "accumulator.m"
          {
#line 7388 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeInfo_12_12 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 7390 "transform_hlds.accumulator.c"
            {
#line 7392 "transform_hlds.accumulator.c"
              transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_12_12, ((MR_Box) (transform_hlds__accumulator__V_4_4)), ((MR_Box) (transform_hlds__accumulator__V_7_7)));
            }
#line 964 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 7397 "transform_hlds.accumulator.c"
              transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_5_5 == transform_hlds__accumulator__V_8_8);
#line 964 "accumulator.m"
          }
#line 964 "accumulator.m"
      }
#line 964 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 964 "accumulator.m"
  }
#line 964 "accumulator.m"
}

#line 1926 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__chain_subst_2_4_p_0(
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__TypeInfo_for_A_16,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__TypeInfo_for_B_17,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__TypeInfo_for_C_18,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__AtoB_2,
#line 1926 "accumulator.m"
  MR_Word transform_hlds__accumulator__BtoC_3,
#line 1926 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AtoC_4)
#line 1926 "accumulator.m"
{
#line 1929 "accumulator.m"
  {
#line 1929 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 1929 "accumulator.m"
    if ((transform_hlds__accumulator__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1930 "accumulator.m"
      {
#line 1930 "accumulator.m"
        mercury__map__init_1_p_0(transform_hlds__accumulator__TypeInfo_for_A_16, transform_hlds__accumulator__TypeInfo_for_C_18, transform_hlds__accumulator__AtoC_4);
#line 1930 "accumulator.m"
        return;
      }
#line 1929 "accumulator.m"
    else
#line 1931 "accumulator.m"
      {
#line 1931 "accumulator.m"
        MR_Box transform_hlds__accumulator__A_8 = (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0));
#line 1931 "accumulator.m"
        MR_Word transform_hlds__accumulator__As_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 1931 "accumulator.m"
        MR_Word transform_hlds__accumulator__AtoC0_13;
#line 1931 "accumulator.m"
        MR_Box transform_hlds__accumulator__B_14;
#line 1936 "accumulator.m"
        MR_Box transform_hlds__accumulator__C_15;

#line 1932 "accumulator.m"
        {
#line 1932 "accumulator.m"
          transform_hlds__accumulator__chain_subst_2_4_p_0(transform_hlds__accumulator__TypeInfo_for_A_16, transform_hlds__accumulator__TypeInfo_for_B_17, transform_hlds__accumulator__TypeInfo_for_C_18, transform_hlds__accumulator__As_9, transform_hlds__accumulator__AtoB_2, transform_hlds__accumulator__BtoC_3, &transform_hlds__accumulator__AtoC0_13);
        }
#line 1933 "accumulator.m"
        {
#line 1933 "accumulator.m"
          mercury__map__lookup_3_p_0(transform_hlds__accumulator__TypeInfo_for_A_16, transform_hlds__accumulator__TypeInfo_for_B_17, transform_hlds__accumulator__AtoB_2, transform_hlds__accumulator__A_8, &transform_hlds__accumulator__B_14);
        }
#line 1934 "accumulator.m"
        {
#line 1934 "accumulator.m"
          transform_hlds__accumulator__succeeded = mercury__map__search_3_p_0(transform_hlds__accumulator__TypeInfo_for_B_17, transform_hlds__accumulator__TypeInfo_for_C_18, transform_hlds__accumulator__BtoC_3, transform_hlds__accumulator__B_14, &transform_hlds__accumulator__C_15);
        }
#line 1936 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1935 "accumulator.m"
          {
#line 1935 "accumulator.m"
            mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_for_A_16, transform_hlds__accumulator__TypeInfo_for_C_18, transform_hlds__accumulator__A_8, transform_hlds__accumulator__C_15, transform_hlds__accumulator__AtoC0_13, transform_hlds__accumulator__AtoC_4);
#line 1935 "accumulator.m"
            return;
          }
#line 1936 "accumulator.m"
        else
#line 1937 "accumulator.m"
          *transform_hlds__accumulator__AtoC_4 = transform_hlds__accumulator__AtoC0_13;
#line 1931 "accumulator.m"
      }
#line 1929 "accumulator.m"
  }
#line 1926 "accumulator.m"
}

#line 1897 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__calculate_goal_info_2_p_0(
#line 1897 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalExpr_3,
#line 1897 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__2_2)
#line 1897 "accumulator.m"
{
#line 1899 "accumulator.m"
  {
#line 1899 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded = ((((MR_tag((MR_Word) transform_hlds__accumulator__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1899 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalInfo_4;
#line 1906 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalList_5;
#line 1900 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_9_9;

#line 1900 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1900 "accumulator.m"
      {
#line 1900 "accumulator.m"
        transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_3, (MR_Integer) 1)));
#line 1900 "accumulator.m"
        transform_hlds__accumulator__GoalList_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_3, (MR_Integer) 2)));
#line 1900 "accumulator.m"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_9_9 == (MR_Integer) 0);
#line 1900 "accumulator.m"
      }
#line 1906 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1901 "accumulator.m"
      {
#line 1901 "accumulator.m"
        MR_Word transform_hlds__accumulator__NonLocals_6;
#line 1901 "accumulator.m"
        MR_Word transform_hlds__accumulator__InstMapDelta_7;
#line 1901 "accumulator.m"
        MR_Word transform_hlds__accumulator__Detism_8;

#line 1901 "accumulator.m"
        {
#line 1901 "accumulator.m"
          hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__accumulator__GoalList_5, &transform_hlds__accumulator__NonLocals_6);
        }
#line 1902 "accumulator.m"
        {
#line 1902 "accumulator.m"
          hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__accumulator__GoalList_5, &transform_hlds__accumulator__InstMapDelta_7);
        }
#line 1903 "accumulator.m"
        {
#line 1903 "accumulator.m"
          hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__accumulator__GoalList_5, &transform_hlds__accumulator__Detism_8);
        }
#line 1905 "accumulator.m"
        {
#line 1905 "accumulator.m"
          hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__accumulator__NonLocals_6, transform_hlds__accumulator__InstMapDelta_7, transform_hlds__accumulator__Detism_8, (MR_Integer) 0, &transform_hlds__accumulator__GoalInfo_4);
        }
#line 1901 "accumulator.m"
      }
#line 1906 "accumulator.m"
    else
#line 1907 "accumulator.m"
      {
#line 1907 "accumulator.m"
        {
#line 1907 "accumulator.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.calculate_goal_info\'/2", (MR_String) "not a conj");
#line 1907 "accumulator.m"
          return;
        }
#line 1907 "accumulator.m"
      }
#line 1899 "accumulator.m"
    {
#line 1899 "accumulator.m"
      MR_Word base;
#line 1899 "accumulator.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1899 "accumulator.m"
      *transform_hlds__accumulator__HeadVar__2_2 = base;
#line 1899 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__GoalExpr_3));
#line 1899 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_4));
#line 1899 "accumulator.m"
    }
#line 1899 "accumulator.m"
  }
#line 1897 "accumulator.m"
}

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_goal_list_2_f_0_1(
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1889 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1889 "accumulator.m"
{
#line 1889 "accumulator.m"
  {
#line 1889 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1889 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__3_12;

#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1889__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv0_HeadVar__3_12);
    }
#line 1889 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__3_12));
#line 1889 "accumulator.m"
  }
#line 1889 "accumulator.m"
}

#line 1886 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__accu_goal_list_2_f_0(
#line 1886 "accumulator.m"
  MR_Word transform_hlds__accumulator__Ids_4,
#line 1886 "accumulator.m"
  MR_Word transform_hlds__accumulator__GS_5)
#line 1886 "accumulator.m"
{
#line 1888 "accumulator.m"
  {
#line 1888 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1888 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goals_6;
#line 1888 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_10_10;

#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      transform_hlds__accumulator__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_10_10, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_9[1]));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_10_10, 1) = ((MR_Box) (transform_hlds__accumulator__accu_goal_list_2_f_0_1));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_10_10, 3) = ((MR_Box) (transform_hlds__accumulator__GS_5));
#line 1889 "accumulator.m"
    }
#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__accumulator__V_10_10, transform_hlds__accumulator__Ids_4, &transform_hlds__accumulator__Goals_6);
    }
#line 1888 "accumulator.m"
    return transform_hlds__accumulator__Goals_6;
#line 1888 "accumulator.m"
  }
#line 1886 "accumulator.m"
}

#line 1747 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_top_level_8_p_0(
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__TopLevel_9,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goal_10,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigBaseGoal_11,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigRecGoal_12,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__NewBaseGoal_13,
#line 1747 "accumulator.m"
  MR_Word transform_hlds__accumulator__NewRecGoal_14,
#line 1747 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigGoal_15,
#line 1747 "accumulator.m"
  MR_Word * transform_hlds__accumulator__NewGoal_16)
#line 1747 "accumulator.m"
{
#line 1754 "accumulator.m"
  {
#line 1754 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 1754 "accumulator.m"
#line 1754 "accumulator.m"
    switch (transform_hlds__accumulator__TopLevel_9) {
#line 1754 "accumulator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1754 "accumulator.m"
      case (MR_Integer) 2:
#line 1794 "accumulator.m"
        {
#line 1794 "accumulator.m"
          MR_Word transform_hlds__accumulator__GoalInfo_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 1)));
#line 1786 "accumulator.m"
          MR_Word transform_hlds__accumulator__Goals_29;
#line 1786 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 0)));
#line 1786 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_67_67;
#line 1786 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_68_68;
#line 1787 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_30_30;
#line 1787 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_31_31;

#line 1786 "accumulator.m"
          transform_hlds__accumulator__succeeded = ((((MR_tag((MR_Word) transform_hlds__accumulator__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1786 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1786 "accumulator.m"
            {
#line 1786 "accumulator.m"
              transform_hlds__accumulator__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_66_66, (MR_Integer) 1)));
#line 1787 "accumulator.m"
              transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Goals_29)) == (MR_mktag((MR_Integer) 1)));
#line 1787 "accumulator.m"
              if (transform_hlds__accumulator__succeeded)
#line 1787 "accumulator.m"
                {
#line 1787 "accumulator.m"
                  transform_hlds__accumulator__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Goals_29, (MR_Integer) 0)));
#line 1787 "accumulator.m"
                  transform_hlds__accumulator__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Goals_29, (MR_Integer) 1)));
#line 1787 "accumulator.m"
                  transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 1787 "accumulator.m"
                  if (transform_hlds__accumulator__succeeded)
#line 1787 "accumulator.m"
                    {
#line 1787 "accumulator.m"
                      transform_hlds__accumulator__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_67_67, (MR_Integer) 0)));
#line 1787 "accumulator.m"
                      transform_hlds__accumulator__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_67_67, (MR_Integer) 1)));
#line 1787 "accumulator.m"
                      transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1787 "accumulator.m"
                    }
#line 1787 "accumulator.m"
                }
#line 1786 "accumulator.m"
            }
#line 1794 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1789 "accumulator.m"
            {
#line 1789 "accumulator.m"
              MR_Word transform_hlds__accumulator__OrigGoals_32;
#line 1789 "accumulator.m"
              MR_Word transform_hlds__accumulator__NewGoals_33;
#line 1789 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_69_69;
#line 1789 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_71_71;
#line 1789 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_72_72;
#line 1789 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_74_74;

#line 1789 "accumulator.m"
              {
#line 1789 "accumulator.m"
                transform_hlds__accumulator__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1789 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_69_69, 0) = ((MR_Box) (transform_hlds__accumulator__OrigRecGoal_12));
#line 1789 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1789 "accumulator.m"
              }
#line 1789 "accumulator.m"
              {
#line 1789 "accumulator.m"
                transform_hlds__accumulator__OrigGoals_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1789 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__OrigGoals_32, 0) = ((MR_Box) (transform_hlds__accumulator__OrigBaseGoal_11));
#line 1789 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__OrigGoals_32, 1) = ((MR_Box) (transform_hlds__accumulator__V_69_69));
#line 1789 "accumulator.m"
              }
#line 1790 "accumulator.m"
              {
#line 1790 "accumulator.m"
                transform_hlds__accumulator__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1790 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1790 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_71_71, 1) = ((MR_Box) (transform_hlds__accumulator__OrigGoals_32));
#line 1790 "accumulator.m"
              }
#line 1790 "accumulator.m"
              {
#line 1790 "accumulator.m"
                MR_Word base;
#line 1790 "accumulator.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1790 "accumulator.m"
                *transform_hlds__accumulator__OrigGoal_15 = base;
#line 1790 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_71_71));
#line 1790 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_145));
#line 1790 "accumulator.m"
              }
#line 1792 "accumulator.m"
              {
#line 1792 "accumulator.m"
                transform_hlds__accumulator__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1792 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_72_72, 0) = ((MR_Box) (transform_hlds__accumulator__NewRecGoal_14));
#line 1792 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1792 "accumulator.m"
              }
#line 1792 "accumulator.m"
              {
#line 1792 "accumulator.m"
                transform_hlds__accumulator__NewGoals_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1792 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__NewGoals_33, 0) = ((MR_Box) (transform_hlds__accumulator__NewBaseGoal_13));
#line 1792 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__NewGoals_33, 1) = ((MR_Box) (transform_hlds__accumulator__V_72_72));
#line 1792 "accumulator.m"
              }
#line 1793 "accumulator.m"
              {
#line 1793 "accumulator.m"
                transform_hlds__accumulator__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1793 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1793 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_74_74, 1) = ((MR_Box) (transform_hlds__accumulator__NewGoals_33));
#line 1793 "accumulator.m"
              }
#line 1793 "accumulator.m"
              {
#line 1793 "accumulator.m"
                MR_Word base;
#line 1793 "accumulator.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1793 "accumulator.m"
                *transform_hlds__accumulator__NewGoal_16 = base;
#line 1793 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_74_74));
#line 1793 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_145));
#line 1793 "accumulator.m"
              }
#line 1789 "accumulator.m"
            }
#line 1794 "accumulator.m"
          else
#line 1795 "accumulator.m"
            {
#line 1795 "accumulator.m"
              {
#line 1795 "accumulator.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.accu_top_level\'/8", (MR_String) "not the correct top level");
#line 1795 "accumulator.m"
                return;
              }
#line 1795 "accumulator.m"
            }
#line 1794 "accumulator.m"
        }
#line 1754 "accumulator.m"
        break;
#line 1754 "accumulator.m"
      case (MR_Integer) 3:
#line 1808 "accumulator.m"
        {
#line 1808 "accumulator.m"
          MR_Word transform_hlds__accumulator__GoalInfo_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 1)));
#line 1800 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 0)));
#line 1800 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_55_55;
#line 1800 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_56_56;
#line 1800 "accumulator.m"
          MR_Word transform_hlds__accumulator__Goals_147;
#line 1801 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_34_34;
#line 1801 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_35_35;

#line 1800 "accumulator.m"
          transform_hlds__accumulator__succeeded = ((((MR_tag((MR_Word) transform_hlds__accumulator__V_54_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_54_54, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1800 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1800 "accumulator.m"
            {
#line 1800 "accumulator.m"
              transform_hlds__accumulator__Goals_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_54_54, (MR_Integer) 1)));
#line 1801 "accumulator.m"
              transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Goals_147)) == (MR_mktag((MR_Integer) 1)));
#line 1801 "accumulator.m"
              if (transform_hlds__accumulator__succeeded)
#line 1801 "accumulator.m"
                {
#line 1801 "accumulator.m"
                  transform_hlds__accumulator__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Goals_147, (MR_Integer) 0)));
#line 1801 "accumulator.m"
                  transform_hlds__accumulator__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Goals_147, (MR_Integer) 1)));
#line 1801 "accumulator.m"
                  transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 1801 "accumulator.m"
                  if (transform_hlds__accumulator__succeeded)
#line 1801 "accumulator.m"
                    {
#line 1801 "accumulator.m"
                      transform_hlds__accumulator__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_55_55, (MR_Integer) 0)));
#line 1801 "accumulator.m"
                      transform_hlds__accumulator__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_55_55, (MR_Integer) 1)));
#line 1801 "accumulator.m"
                      transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1801 "accumulator.m"
                    }
#line 1801 "accumulator.m"
                }
#line 1800 "accumulator.m"
            }
#line 1808 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1803 "accumulator.m"
            {
#line 1803 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_57_57;
#line 1803 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_59_59;
#line 1803 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_60_60;
#line 1803 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_62_62;
#line 1803 "accumulator.m"
              MR_Word transform_hlds__accumulator__OrigGoals_148;
#line 1803 "accumulator.m"
              MR_Word transform_hlds__accumulator__NewGoals_149;

#line 1803 "accumulator.m"
              {
#line 1803 "accumulator.m"
                transform_hlds__accumulator__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_57_57, 0) = ((MR_Box) (transform_hlds__accumulator__OrigBaseGoal_11));
#line 1803 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1803 "accumulator.m"
              }
#line 1803 "accumulator.m"
              {
#line 1803 "accumulator.m"
                transform_hlds__accumulator__OrigGoals_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__OrigGoals_148, 0) = ((MR_Box) (transform_hlds__accumulator__OrigRecGoal_12));
#line 1803 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__OrigGoals_148, 1) = ((MR_Box) (transform_hlds__accumulator__V_57_57));
#line 1803 "accumulator.m"
              }
#line 1804 "accumulator.m"
              {
#line 1804 "accumulator.m"
                transform_hlds__accumulator__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1804 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_59_59, 1) = ((MR_Box) (transform_hlds__accumulator__OrigGoals_148));
#line 1804 "accumulator.m"
              }
#line 1804 "accumulator.m"
              {
#line 1804 "accumulator.m"
                MR_Word base;
#line 1804 "accumulator.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1804 "accumulator.m"
                *transform_hlds__accumulator__OrigGoal_15 = base;
#line 1804 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_59_59));
#line 1804 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_150));
#line 1804 "accumulator.m"
              }
#line 1806 "accumulator.m"
              {
#line 1806 "accumulator.m"
                transform_hlds__accumulator__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1806 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_60_60, 0) = ((MR_Box) (transform_hlds__accumulator__NewBaseGoal_13));
#line 1806 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1806 "accumulator.m"
              }
#line 1806 "accumulator.m"
              {
#line 1806 "accumulator.m"
                transform_hlds__accumulator__NewGoals_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1806 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__NewGoals_149, 0) = ((MR_Box) (transform_hlds__accumulator__NewRecGoal_14));
#line 1806 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__NewGoals_149, 1) = ((MR_Box) (transform_hlds__accumulator__V_60_60));
#line 1806 "accumulator.m"
              }
#line 1807 "accumulator.m"
              {
#line 1807 "accumulator.m"
                transform_hlds__accumulator__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1807 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_62_62, 1) = ((MR_Box) (transform_hlds__accumulator__NewGoals_149));
#line 1807 "accumulator.m"
              }
#line 1807 "accumulator.m"
              {
#line 1807 "accumulator.m"
                MR_Word base;
#line 1807 "accumulator.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1807 "accumulator.m"
                *transform_hlds__accumulator__NewGoal_16 = base;
#line 1807 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_62_62));
#line 1807 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_150));
#line 1807 "accumulator.m"
              }
#line 1803 "accumulator.m"
            }
#line 1808 "accumulator.m"
          else
#line 1809 "accumulator.m"
            {
#line 1809 "accumulator.m"
              {
#line 1809 "accumulator.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.accu_top_level\'/8", (MR_String) "not the correct top level");
#line 1809 "accumulator.m"
                return;
              }
#line 1809 "accumulator.m"
            }
#line 1808 "accumulator.m"
        }
#line 1754 "accumulator.m"
        break;
#line 1754 "accumulator.m"
      case (MR_Integer) 4:
#line 1818 "accumulator.m"
        {
#line 1818 "accumulator.m"
          MR_Word transform_hlds__accumulator__Vars_36;
#line 1818 "accumulator.m"
          MR_Word transform_hlds__accumulator__Cond_37;
#line 1818 "accumulator.m"
          MR_Word transform_hlds__accumulator__GoalInfo_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 1)));
#line 1813 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 0)));
#line 1813 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_38_38;
#line 1813 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_39_39;

#line 1813 "accumulator.m"
          transform_hlds__accumulator__succeeded = ((((MR_tag((MR_Word) transform_hlds__accumulator__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1813 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1813 "accumulator.m"
            {
#line 1813 "accumulator.m"
              transform_hlds__accumulator__Vars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_48_48, (MR_Integer) 1)));
#line 1813 "accumulator.m"
              transform_hlds__accumulator__Cond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_48_48, (MR_Integer) 2)));
#line 1813 "accumulator.m"
              transform_hlds__accumulator__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_48_48, (MR_Integer) 3)));
#line 1813 "accumulator.m"
              transform_hlds__accumulator__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_48_48, (MR_Integer) 4)));
#line 1815 "accumulator.m"
              {
#line 1815 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_49_49;
#line 1815 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_50_50;

#line 1814 "accumulator.m"
                {
#line 1814 "accumulator.m"
                  transform_hlds__accumulator__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1814 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1814 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_49_49, 1) = ((MR_Box) (transform_hlds__accumulator__Vars_36));
#line 1814 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_49_49, 2) = ((MR_Box) (transform_hlds__accumulator__Cond_37));
#line 1814 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_49_49, 3) = ((MR_Box) (transform_hlds__accumulator__OrigBaseGoal_11));
#line 1814 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_49_49, 4) = ((MR_Box) (transform_hlds__accumulator__OrigRecGoal_12));
#line 1814 "accumulator.m"
                }
#line 1814 "accumulator.m"
                {
#line 1814 "accumulator.m"
                  MR_Word base;
#line 1814 "accumulator.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1814 "accumulator.m"
                  *transform_hlds__accumulator__OrigGoal_15 = base;
#line 1814 "accumulator.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_49_49));
#line 1814 "accumulator.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_158));
#line 1814 "accumulator.m"
                }
#line 1816 "accumulator.m"
                {
#line 1816 "accumulator.m"
                  transform_hlds__accumulator__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1816 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_50_50, 1) = ((MR_Box) (transform_hlds__accumulator__Vars_36));
#line 1816 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_50_50, 2) = ((MR_Box) (transform_hlds__accumulator__Cond_37));
#line 1816 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_50_50, 3) = ((MR_Box) (transform_hlds__accumulator__NewBaseGoal_13));
#line 1816 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_50_50, 4) = ((MR_Box) (transform_hlds__accumulator__NewRecGoal_14));
#line 1816 "accumulator.m"
                }
#line 1816 "accumulator.m"
                {
#line 1816 "accumulator.m"
                  MR_Word base;
#line 1816 "accumulator.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1816 "accumulator.m"
                  *transform_hlds__accumulator__NewGoal_16 = base;
#line 1816 "accumulator.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_50_50));
#line 1816 "accumulator.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_158));
#line 1816 "accumulator.m"
                }
#line 1815 "accumulator.m"
              }
#line 1813 "accumulator.m"
            }
#line 1813 "accumulator.m"
          else
#line 1819 "accumulator.m"
            {
#line 1819 "accumulator.m"
              {
#line 1819 "accumulator.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.accu_top_level\'/8", (MR_String) "not the correct top level");
#line 1819 "accumulator.m"
                return;
              }
#line 1819 "accumulator.m"
            }
#line 1818 "accumulator.m"
        }
#line 1754 "accumulator.m"
        break;
#line 1754 "accumulator.m"
      case (MR_Integer) 5:
#line 1828 "accumulator.m"
        {
#line 1828 "accumulator.m"
          MR_Word transform_hlds__accumulator__GoalInfo_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 1)));
#line 1828 "accumulator.m"
          MR_Word transform_hlds__accumulator__Vars_161;
#line 1828 "accumulator.m"
          MR_Word transform_hlds__accumulator__Cond_162;
#line 1823 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 0)));
#line 1823 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_40_40;
#line 1823 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_41_41;

#line 1823 "accumulator.m"
          transform_hlds__accumulator__succeeded = ((((MR_tag((MR_Word) transform_hlds__accumulator__V_42_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_42_42, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1823 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1823 "accumulator.m"
            {
#line 1823 "accumulator.m"
              transform_hlds__accumulator__Vars_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_42_42, (MR_Integer) 1)));
#line 1823 "accumulator.m"
              transform_hlds__accumulator__Cond_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_42_42, (MR_Integer) 2)));
#line 1823 "accumulator.m"
              transform_hlds__accumulator__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_42_42, (MR_Integer) 3)));
#line 1823 "accumulator.m"
              transform_hlds__accumulator__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_42_42, (MR_Integer) 4)));
#line 1825 "accumulator.m"
              {
#line 1825 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_43_43;
#line 1825 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_44_44;

#line 1824 "accumulator.m"
                {
#line 1824 "accumulator.m"
                  transform_hlds__accumulator__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1824 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_43_43, 1) = ((MR_Box) (transform_hlds__accumulator__Vars_161));
#line 1824 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_43_43, 2) = ((MR_Box) (transform_hlds__accumulator__Cond_162));
#line 1824 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_43_43, 3) = ((MR_Box) (transform_hlds__accumulator__OrigRecGoal_12));
#line 1824 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_43_43, 4) = ((MR_Box) (transform_hlds__accumulator__OrigBaseGoal_11));
#line 1824 "accumulator.m"
                }
#line 1824 "accumulator.m"
                {
#line 1824 "accumulator.m"
                  MR_Word base;
#line 1824 "accumulator.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1824 "accumulator.m"
                  *transform_hlds__accumulator__OrigGoal_15 = base;
#line 1824 "accumulator.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_43_43));
#line 1824 "accumulator.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_160));
#line 1824 "accumulator.m"
                }
#line 1826 "accumulator.m"
                {
#line 1826 "accumulator.m"
                  transform_hlds__accumulator__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1826 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_44_44, 1) = ((MR_Box) (transform_hlds__accumulator__Vars_161));
#line 1826 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_44_44, 2) = ((MR_Box) (transform_hlds__accumulator__Cond_162));
#line 1826 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_44_44, 3) = ((MR_Box) (transform_hlds__accumulator__NewRecGoal_14));
#line 1826 "accumulator.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_44_44, 4) = ((MR_Box) (transform_hlds__accumulator__NewBaseGoal_13));
#line 1826 "accumulator.m"
                }
#line 1826 "accumulator.m"
                {
#line 1826 "accumulator.m"
                  MR_Word base;
#line 1826 "accumulator.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1826 "accumulator.m"
                  *transform_hlds__accumulator__NewGoal_16 = base;
#line 1826 "accumulator.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_44_44));
#line 1826 "accumulator.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_160));
#line 1826 "accumulator.m"
                }
#line 1825 "accumulator.m"
              }
#line 1823 "accumulator.m"
            }
#line 1823 "accumulator.m"
          else
#line 1829 "accumulator.m"
            {
#line 1829 "accumulator.m"
              {
#line 1829 "accumulator.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.accu_top_level\'/8", (MR_String) "not the correct top level");
#line 1829 "accumulator.m"
                return;
              }
#line 1829 "accumulator.m"
            }
#line 1828 "accumulator.m"
        }
#line 1754 "accumulator.m"
        break;
#line 1754 "accumulator.m"
      case (MR_Integer) 0:
#line 1765 "accumulator.m"
        {
#line 1765 "accumulator.m"
          MR_Word transform_hlds__accumulator__Var_17;
#line 1765 "accumulator.m"
          MR_Word transform_hlds__accumulator__CanFail_18;
#line 1765 "accumulator.m"
          MR_Word transform_hlds__accumulator__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 1)));
#line 1765 "accumulator.m"
          MR_Word transform_hlds__accumulator__IdA_21;
#line 1765 "accumulator.m"
          MR_Word transform_hlds__accumulator__IdB_23;
#line 1756 "accumulator.m"
          MR_Word transform_hlds__accumulator__Cases0_19;
#line 1756 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 0)));
#line 1756 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_103_103;
#line 1756 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_104_104;
#line 1756 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_105_105;
#line 1756 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_106_106;
#line 1756 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_107_107;
#line 1756 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_108_108;
#line 1757 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_22_22;
#line 1757 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_24_24;

#line 1756 "accumulator.m"
          transform_hlds__accumulator__succeeded = ((((MR_tag((MR_Word) transform_hlds__accumulator__V_102_102)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_102_102, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1756 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1756 "accumulator.m"
            {
#line 1756 "accumulator.m"
              transform_hlds__accumulator__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_102_102, (MR_Integer) 1)));
#line 1756 "accumulator.m"
              transform_hlds__accumulator__CanFail_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_102_102, (MR_Integer) 2)));
#line 1756 "accumulator.m"
              transform_hlds__accumulator__Cases0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_102_102, (MR_Integer) 3)));
#line 1757 "accumulator.m"
              transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Cases0_19)) == (MR_mktag((MR_Integer) 1)));
#line 1757 "accumulator.m"
              if (transform_hlds__accumulator__succeeded)
#line 1757 "accumulator.m"
                {
#line 1757 "accumulator.m"
                  transform_hlds__accumulator__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Cases0_19, (MR_Integer) 0)));
#line 1757 "accumulator.m"
                  transform_hlds__accumulator__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Cases0_19, (MR_Integer) 1)));
#line 1757 "accumulator.m"
                  transform_hlds__accumulator__IdA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_103_103, (MR_Integer) 0)));
#line 1757 "accumulator.m"
                  transform_hlds__accumulator__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_103_103, (MR_Integer) 1)));
#line 1757 "accumulator.m"
                  transform_hlds__accumulator__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_103_103, (MR_Integer) 2)));
#line 1757 "accumulator.m"
                  transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_104_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1756 "accumulator.m"
                  if (transform_hlds__accumulator__succeeded)
#line 1756 "accumulator.m"
                    {
#line 1757 "accumulator.m"
                      transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_105_105)) == (MR_mktag((MR_Integer) 1)));
#line 1757 "accumulator.m"
                      if (transform_hlds__accumulator__succeeded)
#line 1757 "accumulator.m"
                        {
#line 1757 "accumulator.m"
                          transform_hlds__accumulator__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_105_105, (MR_Integer) 0)));
#line 1757 "accumulator.m"
                          transform_hlds__accumulator__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_105_105, (MR_Integer) 1)));
#line 1757 "accumulator.m"
                          transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1756 "accumulator.m"
                          if (transform_hlds__accumulator__succeeded)
#line 1756 "accumulator.m"
                            {
#line 1757 "accumulator.m"
                              transform_hlds__accumulator__IdB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_106_106, (MR_Integer) 0)));
#line 1757 "accumulator.m"
                              transform_hlds__accumulator__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_106_106, (MR_Integer) 1)));
#line 1757 "accumulator.m"
                              transform_hlds__accumulator__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_106_106, (MR_Integer) 2)));
#line 1757 "accumulator.m"
                              transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_107_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1756 "accumulator.m"
                            }
#line 1757 "accumulator.m"
                        }
#line 1756 "accumulator.m"
                    }
#line 1757 "accumulator.m"
                }
#line 1756 "accumulator.m"
            }
#line 1765 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1760 "accumulator.m"
            {
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__OrigCases_25;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__NewCases_26;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_109_109;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_111_111;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_112_112;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_115_115;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_116_116;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_118_118;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_119_119;
#line 1760 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_122_122;

#line 1759 "accumulator.m"
              {
#line 1759 "accumulator.m"
                transform_hlds__accumulator__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1759 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_109_109, 0) = ((MR_Box) (transform_hlds__accumulator__IdA_21));
#line 1759 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1759 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_109_109, 2) = ((MR_Box) (transform_hlds__accumulator__OrigBaseGoal_11));
#line 1759 "accumulator.m"
              }
#line 1760 "accumulator.m"
              {
#line 1760 "accumulator.m"
                transform_hlds__accumulator__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1760 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_112_112, 0) = ((MR_Box) (transform_hlds__accumulator__IdB_23));
#line 1760 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1760 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_112_112, 2) = ((MR_Box) (transform_hlds__accumulator__OrigRecGoal_12));
#line 1760 "accumulator.m"
              }
#line 1760 "accumulator.m"
              {
#line 1760 "accumulator.m"
                transform_hlds__accumulator__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1760 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_111_111, 0) = ((MR_Box) (transform_hlds__accumulator__V_112_112));
#line 1760 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1760 "accumulator.m"
              }
#line 1759 "accumulator.m"
              {
#line 1759 "accumulator.m"
                transform_hlds__accumulator__OrigCases_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1759 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__OrigCases_25, 0) = ((MR_Box) (transform_hlds__accumulator__V_109_109));
#line 1759 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__OrigCases_25, 1) = ((MR_Box) (transform_hlds__accumulator__V_111_111));
#line 1759 "accumulator.m"
              }
#line 1761 "accumulator.m"
              {
#line 1761 "accumulator.m"
                transform_hlds__accumulator__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1761 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1761 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_115_115, 1) = ((MR_Box) (transform_hlds__accumulator__Var_17));
#line 1761 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_115_115, 2) = ((MR_Box) (transform_hlds__accumulator__CanFail_18));
#line 1761 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_115_115, 3) = ((MR_Box) (transform_hlds__accumulator__OrigCases_25));
#line 1761 "accumulator.m"
              }
#line 1761 "accumulator.m"
              {
#line 1761 "accumulator.m"
                MR_Word base;
#line 1761 "accumulator.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1761 "accumulator.m"
                *transform_hlds__accumulator__OrigGoal_15 = base;
#line 1761 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_115_115));
#line 1761 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_20));
#line 1761 "accumulator.m"
              }
#line 1763 "accumulator.m"
              {
#line 1763 "accumulator.m"
                transform_hlds__accumulator__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_116_116, 0) = ((MR_Box) (transform_hlds__accumulator__IdA_21));
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_116_116, 2) = ((MR_Box) (transform_hlds__accumulator__NewBaseGoal_13));
#line 1763 "accumulator.m"
              }
#line 1763 "accumulator.m"
              {
#line 1763 "accumulator.m"
                transform_hlds__accumulator__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_119_119, 0) = ((MR_Box) (transform_hlds__accumulator__IdB_23));
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_119_119, 2) = ((MR_Box) (transform_hlds__accumulator__NewRecGoal_14));
#line 1763 "accumulator.m"
              }
#line 1763 "accumulator.m"
              {
#line 1763 "accumulator.m"
                transform_hlds__accumulator__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_118_118, 0) = ((MR_Box) (transform_hlds__accumulator__V_119_119));
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1763 "accumulator.m"
              }
#line 1763 "accumulator.m"
              {
#line 1763 "accumulator.m"
                transform_hlds__accumulator__NewCases_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__NewCases_26, 0) = ((MR_Box) (transform_hlds__accumulator__V_116_116));
#line 1763 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__NewCases_26, 1) = ((MR_Box) (transform_hlds__accumulator__V_118_118));
#line 1763 "accumulator.m"
              }
#line 1764 "accumulator.m"
              {
#line 1764 "accumulator.m"
                transform_hlds__accumulator__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1764 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1764 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_122_122, 1) = ((MR_Box) (transform_hlds__accumulator__Var_17));
#line 1764 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_122_122, 2) = ((MR_Box) (transform_hlds__accumulator__CanFail_18));
#line 1764 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_122_122, 3) = ((MR_Box) (transform_hlds__accumulator__NewCases_26));
#line 1764 "accumulator.m"
              }
#line 1764 "accumulator.m"
              {
#line 1764 "accumulator.m"
                MR_Word base;
#line 1764 "accumulator.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1764 "accumulator.m"
                *transform_hlds__accumulator__NewGoal_16 = base;
#line 1764 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_122_122));
#line 1764 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_20));
#line 1764 "accumulator.m"
              }
#line 1760 "accumulator.m"
            }
#line 1765 "accumulator.m"
          else
#line 1766 "accumulator.m"
            {
#line 1766 "accumulator.m"
              {
#line 1766 "accumulator.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.accu_top_level\'/8", (MR_String) "not the correct top level");
#line 1766 "accumulator.m"
                return;
              }
#line 1766 "accumulator.m"
            }
#line 1765 "accumulator.m"
        }
#line 1754 "accumulator.m"
        break;
#line 1754 "accumulator.m"
      case (MR_Integer) 1:
#line 1780 "accumulator.m"
        {
#line 1780 "accumulator.m"
          MR_Word transform_hlds__accumulator__Var_129;
#line 1780 "accumulator.m"
          MR_Word transform_hlds__accumulator__CanFail_130;
#line 1780 "accumulator.m"
          MR_Word transform_hlds__accumulator__GoalInfo_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 1)));
#line 1780 "accumulator.m"
          MR_Word transform_hlds__accumulator__IdA_133;
#line 1780 "accumulator.m"
          MR_Word transform_hlds__accumulator__IdB_134;
#line 1771 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 0)));
#line 1771 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_79_79;
#line 1771 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_80_80;
#line 1771 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_81_81;
#line 1771 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_82_82;
#line 1771 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_83_83;
#line 1771 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_84_84;
#line 1771 "accumulator.m"
          MR_Word transform_hlds__accumulator__Cases0_126;
#line 1772 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_27_27;
#line 1772 "accumulator.m"
          MR_Word transform_hlds__accumulator__V_28_28;

#line 1771 "accumulator.m"
          transform_hlds__accumulator__succeeded = ((((MR_tag((MR_Word) transform_hlds__accumulator__V_78_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_78_78, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1771 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1771 "accumulator.m"
            {
#line 1771 "accumulator.m"
              transform_hlds__accumulator__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_78_78, (MR_Integer) 1)));
#line 1771 "accumulator.m"
              transform_hlds__accumulator__CanFail_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_78_78, (MR_Integer) 2)));
#line 1771 "accumulator.m"
              transform_hlds__accumulator__Cases0_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_78_78, (MR_Integer) 3)));
#line 1772 "accumulator.m"
              transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Cases0_126)) == (MR_mktag((MR_Integer) 1)));
#line 1772 "accumulator.m"
              if (transform_hlds__accumulator__succeeded)
#line 1772 "accumulator.m"
                {
#line 1772 "accumulator.m"
                  transform_hlds__accumulator__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Cases0_126, (MR_Integer) 0)));
#line 1772 "accumulator.m"
                  transform_hlds__accumulator__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Cases0_126, (MR_Integer) 1)));
#line 1772 "accumulator.m"
                  transform_hlds__accumulator__IdA_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_79_79, (MR_Integer) 0)));
#line 1772 "accumulator.m"
                  transform_hlds__accumulator__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_79_79, (MR_Integer) 1)));
#line 1772 "accumulator.m"
                  transform_hlds__accumulator__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_79_79, (MR_Integer) 2)));
#line 1772 "accumulator.m"
                  transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1771 "accumulator.m"
                  if (transform_hlds__accumulator__succeeded)
#line 1771 "accumulator.m"
                    {
#line 1772 "accumulator.m"
                      transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 1772 "accumulator.m"
                      if (transform_hlds__accumulator__succeeded)
#line 1772 "accumulator.m"
                        {
#line 1772 "accumulator.m"
                          transform_hlds__accumulator__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_81_81, (MR_Integer) 0)));
#line 1772 "accumulator.m"
                          transform_hlds__accumulator__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_81_81, (MR_Integer) 1)));
#line 1772 "accumulator.m"
                          transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1771 "accumulator.m"
                          if (transform_hlds__accumulator__succeeded)
#line 1771 "accumulator.m"
                            {
#line 1772 "accumulator.m"
                              transform_hlds__accumulator__IdB_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, (MR_Integer) 0)));
#line 1772 "accumulator.m"
                              transform_hlds__accumulator__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, (MR_Integer) 1)));
#line 1772 "accumulator.m"
                              transform_hlds__accumulator__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, (MR_Integer) 2)));
#line 1772 "accumulator.m"
                              transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1771 "accumulator.m"
                            }
#line 1772 "accumulator.m"
                        }
#line 1771 "accumulator.m"
                    }
#line 1772 "accumulator.m"
                }
#line 1771 "accumulator.m"
            }
#line 1780 "accumulator.m"
          if (transform_hlds__accumulator__succeeded)
#line 1775 "accumulator.m"
            {
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_85_85;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_87_87;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_88_88;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_91_91;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_92_92;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_94_94;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_95_95;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__V_98_98;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__OrigCases_127;
#line 1775 "accumulator.m"
              MR_Word transform_hlds__accumulator__NewCases_128;

#line 1774 "accumulator.m"
              {
#line 1774 "accumulator.m"
                transform_hlds__accumulator__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1774 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_85_85, 0) = ((MR_Box) (transform_hlds__accumulator__IdA_133));
#line 1774 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1774 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_85_85, 2) = ((MR_Box) (transform_hlds__accumulator__OrigRecGoal_12));
#line 1774 "accumulator.m"
              }
#line 1775 "accumulator.m"
              {
#line 1775 "accumulator.m"
                transform_hlds__accumulator__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1775 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_88_88, 0) = ((MR_Box) (transform_hlds__accumulator__IdB_134));
#line 1775 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1775 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_88_88, 2) = ((MR_Box) (transform_hlds__accumulator__OrigBaseGoal_11));
#line 1775 "accumulator.m"
              }
#line 1775 "accumulator.m"
              {
#line 1775 "accumulator.m"
                transform_hlds__accumulator__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1775 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_87_87, 0) = ((MR_Box) (transform_hlds__accumulator__V_88_88));
#line 1775 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1775 "accumulator.m"
              }
#line 1774 "accumulator.m"
              {
#line 1774 "accumulator.m"
                transform_hlds__accumulator__OrigCases_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1774 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__OrigCases_127, 0) = ((MR_Box) (transform_hlds__accumulator__V_85_85));
#line 1774 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__OrigCases_127, 1) = ((MR_Box) (transform_hlds__accumulator__V_87_87));
#line 1774 "accumulator.m"
              }
#line 1776 "accumulator.m"
              {
#line 1776 "accumulator.m"
                transform_hlds__accumulator__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1776 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_91_91, 1) = ((MR_Box) (transform_hlds__accumulator__Var_129));
#line 1776 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_91_91, 2) = ((MR_Box) (transform_hlds__accumulator__CanFail_130));
#line 1776 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_91_91, 3) = ((MR_Box) (transform_hlds__accumulator__OrigCases_127));
#line 1776 "accumulator.m"
              }
#line 1776 "accumulator.m"
              {
#line 1776 "accumulator.m"
                MR_Word base;
#line 1776 "accumulator.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1776 "accumulator.m"
                *transform_hlds__accumulator__OrigGoal_15 = base;
#line 1776 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_91_91));
#line 1776 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_132));
#line 1776 "accumulator.m"
              }
#line 1778 "accumulator.m"
              {
#line 1778 "accumulator.m"
                transform_hlds__accumulator__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_92_92, 0) = ((MR_Box) (transform_hlds__accumulator__IdA_133));
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_92_92, 2) = ((MR_Box) (transform_hlds__accumulator__NewRecGoal_14));
#line 1778 "accumulator.m"
              }
#line 1778 "accumulator.m"
              {
#line 1778 "accumulator.m"
                transform_hlds__accumulator__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_95_95, 0) = ((MR_Box) (transform_hlds__accumulator__IdB_134));
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_95_95, 2) = ((MR_Box) (transform_hlds__accumulator__NewBaseGoal_13));
#line 1778 "accumulator.m"
              }
#line 1778 "accumulator.m"
              {
#line 1778 "accumulator.m"
                transform_hlds__accumulator__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_94_94, 0) = ((MR_Box) (transform_hlds__accumulator__V_95_95));
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1778 "accumulator.m"
              }
#line 1778 "accumulator.m"
              {
#line 1778 "accumulator.m"
                transform_hlds__accumulator__NewCases_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__NewCases_128, 0) = ((MR_Box) (transform_hlds__accumulator__V_92_92));
#line 1778 "accumulator.m"
                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__NewCases_128, 1) = ((MR_Box) (transform_hlds__accumulator__V_94_94));
#line 1778 "accumulator.m"
              }
#line 1779 "accumulator.m"
              {
#line 1779 "accumulator.m"
                transform_hlds__accumulator__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1779 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1779 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_98_98, 1) = ((MR_Box) (transform_hlds__accumulator__Var_129));
#line 1779 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_98_98, 2) = ((MR_Box) (transform_hlds__accumulator__CanFail_130));
#line 1779 "accumulator.m"
                MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_98_98, 3) = ((MR_Box) (transform_hlds__accumulator__NewCases_128));
#line 1779 "accumulator.m"
              }
#line 1779 "accumulator.m"
              {
#line 1779 "accumulator.m"
                MR_Word base;
#line 1779 "accumulator.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1779 "accumulator.m"
                *transform_hlds__accumulator__NewGoal_16 = base;
#line 1779 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_98_98));
#line 1779 "accumulator.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_132));
#line 1779 "accumulator.m"
              }
#line 1775 "accumulator.m"
            }
#line 1780 "accumulator.m"
          else
#line 1781 "accumulator.m"
            {
#line 1781 "accumulator.m"
              {
#line 1781 "accumulator.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.accu_top_level\'/8", (MR_String) "not the correct top level");
#line 1781 "accumulator.m"
                return;
              }
#line 1781 "accumulator.m"
            }
#line 1780 "accumulator.m"
        }
#line 1754 "accumulator.m"
        break;
#line 1754 "accumulator.m"
    }
#line 1754 "accumulator.m"
  }
#line 1747 "accumulator.m"
}

#line 1729 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_unification_2_p_0(
#line 1729 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1729 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Goal_5)
#line 1729 "accumulator.m"
{
#line 1731 "accumulator.m"
  {
#line 1731 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__Out_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__Acc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__LHSMode_6;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__RHSMode_7;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__UniMode_8;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__Expr_10;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__NonLocalVars_11;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__InstMapDelta_12;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__Info_13;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_16_16;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_17_17;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_18_18;
#line 1731 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_19_19;

#line 1732 "accumulator.m"
    {
#line 1732 "accumulator.m"
      parse_tree__prog_mode__out_mode_1_p_0(&transform_hlds__accumulator__LHSMode_6);
    }
#line 1733 "accumulator.m"
    {
#line 1733 "accumulator.m"
      parse_tree__prog_mode__in_mode_1_p_0(&transform_hlds__accumulator__RHSMode_7);
    }
#line 1734 "accumulator.m"
    {
#line 1734 "accumulator.m"
      transform_hlds__accumulator__UniMode_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1734 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__UniMode_8, 0) = ((MR_Box) (transform_hlds__accumulator__LHSMode_6));
#line 1734 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__UniMode_8, 1) = ((MR_Box) (transform_hlds__accumulator__RHSMode_7));
#line 1734 "accumulator.m"
    }
#line 1736 "accumulator.m"
    {
#line 1736 "accumulator.m"
      transform_hlds__accumulator__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1736 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_16_16, 0) = ((MR_Box) (transform_hlds__accumulator__Acc_4));
#line 1736 "accumulator.m"
    }
#line 1736 "accumulator.m"
    {
#line 1736 "accumulator.m"
      transform_hlds__accumulator__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1736 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_17_17, 0) = ((MR_Box) (transform_hlds__accumulator__Out_3));
#line 1736 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_17_17, 1) = ((MR_Box) (transform_hlds__accumulator__Acc_4));
#line 1736 "accumulator.m"
    }
#line 1736 "accumulator.m"
    {
#line 1736 "accumulator.m"
      transform_hlds__accumulator__Expr_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1736 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Expr_10, 0) = ((MR_Box) (transform_hlds__accumulator__Out_3));
#line 1736 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Expr_10, 1) = ((MR_Box) (transform_hlds__accumulator__V_16_16));
#line 1736 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Expr_10, 2) = ((MR_Box) (transform_hlds__accumulator__UniMode_8));
#line 1736 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Expr_10, 3) = ((MR_Box) (transform_hlds__accumulator__V_17_17));
#line 1736 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Expr_10, 4) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_1[67]));
#line 1736 "accumulator.m"
    }
#line 1737 "accumulator.m"
    {
#line 1737 "accumulator.m"
      transform_hlds__accumulator__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_19_19, 0) = ((MR_Box) (transform_hlds__accumulator__Acc_4));
#line 1737 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1737 "accumulator.m"
    }
#line 1737 "accumulator.m"
    {
#line 1737 "accumulator.m"
      transform_hlds__accumulator__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_18_18, 0) = ((MR_Box) (transform_hlds__accumulator__Out_3));
#line 1737 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_18_18, 1) = ((MR_Box) (transform_hlds__accumulator__V_19_19));
#line 1737 "accumulator.m"
    }
#line 1737 "accumulator.m"
    {
#line 1737 "accumulator.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__accumulator__V_18_18, &transform_hlds__accumulator__NonLocalVars_11);
    }
#line 1738 "accumulator.m"
    {
#line 1738 "accumulator.m"
      transform_hlds__accumulator__InstMapDelta_12 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__accumulator__Out_3);
    }
#line 1739 "accumulator.m"
    {
#line 1739 "accumulator.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__accumulator__NonLocalVars_11, transform_hlds__accumulator__InstMapDelta_12, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__accumulator__Info_13);
    }
#line 1740 "accumulator.m"
    {
#line 1740 "accumulator.m"
      MR_Word base;
#line 1740 "accumulator.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1740 "accumulator.m"
      *transform_hlds__accumulator__Goal_5 = base;
#line 1740 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__Expr_10));
#line 1740 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__Info_13));
#line 1740 "accumulator.m"
    }
#line 1731 "accumulator.m"
  }
#line 1729 "accumulator.m"
}

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0_4(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3)
#line 1861 "accumulator.m"
{
#line 1861 "accumulator.m"
  {
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv3_HeadVar__5_20;

#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv3_HeadVar__5_20);
    }
#line 1861 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv3_HeadVar__5_20));
#line 1861 "accumulator.m"
  }
#line 1861 "accumulator.m"
}

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0_3(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3)
#line 1861 "accumulator.m"
{
#line 1861 "accumulator.m"
  {
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv1_HeadVar__5_20;

#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv1_HeadVar__5_20);
    }
#line 1861 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv1_HeadVar__5_20));
#line 1861 "accumulator.m"
  }
#line 1861 "accumulator.m"
}

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0_1(
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 1873 "accumulator.m"
{
#line 1873 "accumulator.m"
  {
#line 1873 "accumulator.m"
    struct transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 1873 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__conv0_HeadVar__2_9));
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__cont_env_ptr);
#line 1873 "accumulator.m"
      return;
    }
#line 1873 "accumulator.m"
  }
#line 1873 "accumulator.m"
}

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0_2(
#line 1873 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 1873 "accumulator.m"
{
#line 1873 "accumulator.m"
  {
#line 1873 "accumulator.m"
    struct transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0_s transform_hlds__accumulator__env;

#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__wrapper_arg_1 = transform_hlds__accumulator__wrapper_arg_1;
#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__cont = transform_hlds__accumulator__cont;
#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;

#line 1873 "accumulator.m"
      {
#line 1873 "accumulator.m"
        transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), &(transform_hlds__accumulator__env).transform_hlds__accumulator__create_new_base_goals_5_f_0_2_env_0__conv0_HeadVar__2_9, transform_hlds__accumulator__create_new_base_goals_4_f_0_1, &transform_hlds__accumulator__env);
      }
#line 1873 "accumulator.m"
    }
#line 1873 "accumulator.m"
  }
#line 1873 "accumulator.m"
}

#line 1718 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__create_new_base_goals_4_f_0(
#line 1718 "accumulator.m"
  MR_Word transform_hlds__accumulator__Ids_6,
#line 1718 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_7,
#line 1718 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccVarSubst_8,
#line 1718 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_9)
#line 1718 "accumulator.m"
{
#line 1722 "accumulator.m"
  {
#line 1722 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadVar__5_5;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_14_14 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__Bbase_10;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_11_11;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_12_12;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_13_13;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_20_20;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_37_37;
#line 1722 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_60_60;
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv2_Bbase_10;
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv4_HeadVar__5_5;

#line 1722 "accumulator.m"
    {
#line 1722 "accumulator.m"
      transform_hlds__accumulator__V_11_11 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_14_14, transform_hlds__accumulator__Ids_6);
    }
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      transform_hlds__accumulator__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_20_20, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[3]));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_20_20, 1) = ((MR_Box) (transform_hlds__accumulator__create_new_base_goals_4_f_0_2));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_20_20, 3) = ((MR_Box) (transform_hlds__accumulator__C_7));
#line 1873 "accumulator.m"
    }
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_20_20, &transform_hlds__accumulator__V_12_12);
    }
#line 1723 "accumulator.m"
    {
#line 1723 "accumulator.m"
      transform_hlds__accumulator__V_13_13 = transform_hlds__goal_store__goal_store_init_0_f_0(transform_hlds__accumulator__TypeCtorInfo_14_14);
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_37_37, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[4]));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_37_37, 1) = ((MR_Box) (transform_hlds__accumulator__create_new_base_goals_4_f_0_3));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_37_37, 3) = ((MR_Box) (transform_hlds__accumulator__HeadToCallSubst_9));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_37_37, 4) = ((MR_Box) (transform_hlds__accumulator__C_7));
#line 1861 "accumulator.m"
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__V_37_37, transform_hlds__accumulator__V_12_12, ((MR_Box) (transform_hlds__accumulator__V_13_13)), &transform_hlds__accumulator__conv2_Bbase_10);
    }
#line 1861 "accumulator.m"
    transform_hlds__accumulator__Bbase_10 = ((MR_Word) transform_hlds__accumulator__conv2_Bbase_10);
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_60_60, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[4]));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_60_60, 1) = ((MR_Box) (transform_hlds__accumulator__create_new_base_goals_4_f_0_4));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_60_60, 3) = ((MR_Box) (transform_hlds__accumulator__AccVarSubst_8));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_60_60, 4) = ((MR_Box) (transform_hlds__accumulator__C_7));
#line 1861 "accumulator.m"
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__V_60_60, transform_hlds__accumulator__V_11_11, ((MR_Box) (transform_hlds__accumulator__Bbase_10)), &transform_hlds__accumulator__conv4_HeadVar__5_5);
    }
#line 1861 "accumulator.m"
    transform_hlds__accumulator__HeadVar__5_5 = ((MR_Word) transform_hlds__accumulator__conv4_HeadVar__5_5);
#line 1722 "accumulator.m"
    return transform_hlds__accumulator__HeadVar__5_5;
#line 1722 "accumulator.m"
  }
#line 1718 "accumulator.m"
}

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_recursive_goals_8_f_0_3(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3)
#line 1861 "accumulator.m"
{
#line 1861 "accumulator.m"
  {
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv4_HeadVar__5_20;

#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv4_HeadVar__5_20);
    }
#line 1861 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv4_HeadVar__5_20));
#line 1861 "accumulator.m"
  }
#line 1861 "accumulator.m"
}

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_recursive_goals_8_f_0_2(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3)
#line 1861 "accumulator.m"
{
#line 1861 "accumulator.m"
  {
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv2_HeadVar__5_20;

#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv2_HeadVar__5_20);
    }
#line 1861 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv2_HeadVar__5_20));
#line 1861 "accumulator.m"
  }
#line 1861 "accumulator.m"
}

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_recursive_goals_8_f_0_1(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3)
#line 1861 "accumulator.m"
{
#line 1861 "accumulator.m"
  {
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__5_20;

#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv0_HeadVar__5_20);
    }
#line 1861 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__5_20));
#line 1861 "accumulator.m"
  }
#line 1861 "accumulator.m"
}

#line 1703 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__create_new_recursive_goals_8_f_0(
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__Assoc_10,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__Constructs_11,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__Update_12,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__AssocCallSubst_13,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccVarSubst_14,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__UpdateSubst_15,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_16,
#line 1703 "accumulator.m"
  MR_Word transform_hlds__accumulator__CS_17)
#line 1703 "accumulator.m"
{
#line 1709 "accumulator.m"
  {
#line 1709 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadVar__9_9;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_24_24 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__RBase_18;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__RBase0_19;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_20_20;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_21_21;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_22_22;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_23_23;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_36_36;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_59_59;
#line 1709 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_82_82;
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv1_RBase0_19;
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv3_RBase_18;
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv5_HeadVar__9_9;

#line 1709 "accumulator.m"
    {
#line 1709 "accumulator.m"
      transform_hlds__accumulator__V_20_20 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_24_24, transform_hlds__accumulator__Constructs_11);
    }
#line 1710 "accumulator.m"
    {
#line 1710 "accumulator.m"
      transform_hlds__accumulator__V_21_21 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_24_24, transform_hlds__accumulator__Assoc_10);
    }
#line 1711 "accumulator.m"
    {
#line 1711 "accumulator.m"
      transform_hlds__accumulator__V_22_22 = transform_hlds__goal_store__goal_store_init_0_f_0(transform_hlds__accumulator__TypeCtorInfo_24_24);
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_36_36, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[4]));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_36_36, 1) = ((MR_Box) (transform_hlds__accumulator__create_new_recursive_goals_8_f_0_1));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_36_36, 3) = ((MR_Box) (transform_hlds__accumulator__AssocCallSubst_13));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_36_36, 4) = ((MR_Box) (transform_hlds__accumulator__CS_17));
#line 1861 "accumulator.m"
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__V_36_36, transform_hlds__accumulator__V_21_21, ((MR_Box) (transform_hlds__accumulator__V_22_22)), &transform_hlds__accumulator__conv1_RBase0_19);
    }
#line 1861 "accumulator.m"
    transform_hlds__accumulator__RBase0_19 = ((MR_Word) transform_hlds__accumulator__conv1_RBase0_19);
#line 1712 "accumulator.m"
    {
#line 1712 "accumulator.m"
      transform_hlds__accumulator__V_23_23 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_24_24, transform_hlds__accumulator__Update_12);
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_59_59, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[4]));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_59_59, 1) = ((MR_Box) (transform_hlds__accumulator__create_new_recursive_goals_8_f_0_2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_59_59, 3) = ((MR_Box) (transform_hlds__accumulator__UpdateSubst_15));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_59_59, 4) = ((MR_Box) (transform_hlds__accumulator__C_16));
#line 1861 "accumulator.m"
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__V_59_59, transform_hlds__accumulator__V_23_23, ((MR_Box) (transform_hlds__accumulator__RBase0_19)), &transform_hlds__accumulator__conv3_RBase_18);
    }
#line 1861 "accumulator.m"
    transform_hlds__accumulator__RBase_18 = ((MR_Word) transform_hlds__accumulator__conv3_RBase_18);
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[4]));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, 1) = ((MR_Box) (transform_hlds__accumulator__create_new_recursive_goals_8_f_0_3));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, 3) = ((MR_Box) (transform_hlds__accumulator__AccVarSubst_14));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, 4) = ((MR_Box) (transform_hlds__accumulator__C_16));
#line 1861 "accumulator.m"
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__V_82_82, transform_hlds__accumulator__V_20_20, ((MR_Box) (transform_hlds__accumulator__RBase_18)), &transform_hlds__accumulator__conv5_HeadVar__9_9);
    }
#line 1861 "accumulator.m"
    transform_hlds__accumulator__HeadVar__9_9 = ((MR_Word) transform_hlds__accumulator__conv5_HeadVar__9_9);
#line 1709 "accumulator.m"
    return transform_hlds__accumulator__HeadVar__9_9;
#line 1709 "accumulator.m"
  }
#line 1703 "accumulator.m"
}

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0_2(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3)
#line 1861 "accumulator.m"
{
#line 1861 "accumulator.m"
  {
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv2_HeadVar__5_20;

#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv2_HeadVar__5_20);
    }
#line 1861 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv2_HeadVar__5_20));
#line 1861 "accumulator.m"
  }
#line 1861 "accumulator.m"
}

#line 1861 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0_1(
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1861 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1861 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3)
#line 1861 "accumulator.m"
{
#line 1861 "accumulator.m"
  {
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1861 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__5_20;

#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1861__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv0_HeadVar__5_20);
    }
#line 1861 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__5_20));
#line 1861 "accumulator.m"
  }
#line 1861 "accumulator.m"
}

#line 1689 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0(
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__UpdateBase_7,
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__Update_8,
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_9,
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__UpdateSubst_10,
#line 1689 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_11)
#line 1689 "accumulator.m"
{
#line 1694 "accumulator.m"
  {
#line 1694 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadVar__6_6;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_8_22;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__Ubase_12;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_13_13;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_14_14;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_15_15;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_16_16;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__Keys_21;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_34_34;
#line 1694 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_57_57;
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv1_Ubase_12;
#line 1861 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv3_HeadVar__6_6;

#line 1694 "accumulator.m"
    {
#line 1694 "accumulator.m"
      transform_hlds__accumulator__V_13_13 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_17_17, transform_hlds__accumulator__Update_8);
    }
#line 1695 "accumulator.m"
    {
#line 1695 "accumulator.m"
      transform_hlds__accumulator__V_14_14 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_17_17, transform_hlds__accumulator__UpdateBase_7);
    }
#line 9647 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeInfo_8_22 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1923 "accumulator.m"
    {
#line 1923 "accumulator.m"
      mercury__map__keys_2_p_0(transform_hlds__accumulator__TypeInfo_8_22, transform_hlds__accumulator__TypeInfo_8_22, transform_hlds__accumulator__HeadToCallSubst_9, &transform_hlds__accumulator__Keys_21);
    }
#line 1924 "accumulator.m"
    {
#line 1924 "accumulator.m"
      transform_hlds__accumulator__chain_subst_2_4_p_0(transform_hlds__accumulator__TypeInfo_8_22, transform_hlds__accumulator__TypeInfo_8_22, transform_hlds__accumulator__TypeInfo_8_22, transform_hlds__accumulator__Keys_21, transform_hlds__accumulator__HeadToCallSubst_9, transform_hlds__accumulator__UpdateSubst_10, &transform_hlds__accumulator__V_15_15);
    }
#line 1696 "accumulator.m"
    {
#line 1696 "accumulator.m"
      transform_hlds__accumulator__V_16_16 = transform_hlds__goal_store__goal_store_init_0_f_0(transform_hlds__accumulator__TypeCtorInfo_17_17);
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_34_34, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[4]));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_34_34, 1) = ((MR_Box) (transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0_1));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_34_34, 3) = ((MR_Box) (transform_hlds__accumulator__V_15_15));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_34_34, 4) = ((MR_Box) (transform_hlds__accumulator__C_11));
#line 1861 "accumulator.m"
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__V_34_34, transform_hlds__accumulator__V_14_14, ((MR_Box) (transform_hlds__accumulator__V_16_16)), &transform_hlds__accumulator__conv1_Ubase_12);
    }
#line 1861 "accumulator.m"
    transform_hlds__accumulator__Ubase_12 = ((MR_Word) transform_hlds__accumulator__conv1_Ubase_12);
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      transform_hlds__accumulator__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_57_57, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[4]));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_57_57, 1) = ((MR_Box) (transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0_2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_57_57, 3) = ((MR_Box) (transform_hlds__accumulator__UpdateSubst_10));
#line 1861 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_57_57, 4) = ((MR_Box) (transform_hlds__accumulator__C_11));
#line 1861 "accumulator.m"
    }
#line 1861 "accumulator.m"
    {
#line 1861 "accumulator.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &transform_hlds__accumulator_scalar_common_1[1], transform_hlds__accumulator__V_57_57, transform_hlds__accumulator__V_13_13, ((MR_Box) (transform_hlds__accumulator__Ubase_12)), &transform_hlds__accumulator__conv3_HeadVar__6_6);
    }
#line 1861 "accumulator.m"
    transform_hlds__accumulator__HeadVar__6_6 = ((MR_Word) transform_hlds__accumulator__conv3_HeadVar__6_6);
#line 1694 "accumulator.m"
    return transform_hlds__accumulator__HeadVar__6_6;
#line 1694 "accumulator.m"
  }
#line 1689 "accumulator.m"
}

#line 1678 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_acc_goal_10_p_0_2(
#line 1678 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1678 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1678 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1678 "accumulator.m"
{
#line 1678 "accumulator.m"
  {
#line 1678 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1678 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv1_Goal_5;

#line 1678 "accumulator.m"
    {
#line 1678 "accumulator.m"
      transform_hlds__accumulator__acc_unification_2_p_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv1_Goal_5);
    }
#line 1678 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv1_Goal_5));
#line 1678 "accumulator.m"
  }
#line 1678 "accumulator.m"
}

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_acc_goal_10_p_0_1(
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1889 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1889 "accumulator.m"
{
#line 1889 "accumulator.m"
  {
#line 1889 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1889 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__3_12;

#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1889__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv0_HeadVar__3_12);
    }
#line 1889 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__3_12));
#line 1889 "accumulator.m"
  }
#line 1889 "accumulator.m"
}

#line 1642 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_acc_goal_10_p_0(
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__Call_11,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_12,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_13,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__BaseIds_14,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__BasePairs_15,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_16,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_17,
#line 1642 "accumulator.m"
  MR_Word transform_hlds__accumulator__CS_18,
#line 1642 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccBaseGoal_19,
#line 1642 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccRecGoal_20)
#line 1642 "accumulator.m"
{
#line 1648 "accumulator.m"
  {
#line 1648 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_69_69;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_73_73;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccVarSubst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_12, (MR_Integer) 0)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__RecCallSubst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_12, (MR_Integer) 1)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__AssocCallSubst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_12, (MR_Integer) 2)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateSubst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_12, (MR_Integer) 3)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__AssocBase_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__BaseIds_14, (MR_Integer) 1)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__OtherBase_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__BaseIds_14, (MR_Integer) 2)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Before_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_16, (MR_Integer) 0)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Assoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_16, (MR_Integer) 1)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__ConstructAssoc_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_16, (MR_Integer) 2)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Construct_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_16, (MR_Integer) 3)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Update_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_16, (MR_Integer) 4)));
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__RecCall_34;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cbefore_35;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__R_36;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Rassoc_37;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Rupdate_38;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Rconstruct_39;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__B_40;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__Bafter_41;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__BaseCase_42;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateBase_43;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_44_44;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_45_45;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_46_46;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_47_47;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_48_48;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_49_49;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_50_50;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_51_51;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_52_52;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_53_53;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_54_54;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_55_55;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_56_56;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_58_58;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_60_60;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_61_61;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_62_62;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_63_63;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_64_64;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_66_66;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_68_68;
#line 1648 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_80_80;
#line 1652 "accumulator.m"
    MR_Word transform_hlds__accumulator___UpdateBase_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__BaseIds_14, (MR_Integer) 0)));
#line 1653 "accumulator.m"
    MR_Word transform_hlds__accumulator___Reject_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_16, (MR_Integer) 5)));

#line 1656 "accumulator.m"
    {
#line 1656 "accumulator.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__accumulator__RecCallSubst_22, transform_hlds__accumulator__Call_11, &transform_hlds__accumulator__RecCall_34);
    }
#line 9906 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_69_69 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1658 "accumulator.m"
    {
#line 1658 "accumulator.m"
      transform_hlds__accumulator__V_44_44 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__Before_28);
    }
#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      transform_hlds__accumulator__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_80_80, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_9[1]));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_80_80, 1) = ((MR_Box) (transform_hlds__accumulator__create_acc_goal_10_p_0_1));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_80_80, 3) = ((MR_Box) (transform_hlds__accumulator__C_17));
#line 1889 "accumulator.m"
    }
#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__accumulator__V_80_80, transform_hlds__accumulator__V_44_44, &transform_hlds__accumulator__Cbefore_35);
    }
#line 1661 "accumulator.m"
    {
#line 1661 "accumulator.m"
      transform_hlds__accumulator__V_45_45 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__Construct_31, transform_hlds__accumulator__ConstructAssoc_30);
    }
#line 1661 "accumulator.m"
    {
#line 1661 "accumulator.m"
      transform_hlds__accumulator__R_36 = transform_hlds__accumulator__create_new_recursive_goals_8_f_0(transform_hlds__accumulator__Assoc_29, transform_hlds__accumulator__V_45_45, transform_hlds__accumulator__Update_32, transform_hlds__accumulator__AssocCallSubst_23, transform_hlds__accumulator__AccVarSubst_21, transform_hlds__accumulator__UpdateSubst_24, transform_hlds__accumulator__C_17, transform_hlds__accumulator__CS_18);
    }
#line 1664 "accumulator.m"
    {
#line 1664 "accumulator.m"
      transform_hlds__accumulator__V_46_46 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__Assoc_29);
    }
#line 1664 "accumulator.m"
    {
#line 1664 "accumulator.m"
      transform_hlds__accumulator__Rassoc_37 = transform_hlds__accumulator__accu_goal_list_2_f_0(transform_hlds__accumulator__V_46_46, transform_hlds__accumulator__R_36);
    }
#line 1665 "accumulator.m"
    {
#line 1665 "accumulator.m"
      transform_hlds__accumulator__V_47_47 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__Update_32);
    }
#line 1665 "accumulator.m"
    {
#line 1665 "accumulator.m"
      transform_hlds__accumulator__Rupdate_38 = transform_hlds__accumulator__accu_goal_list_2_f_0(transform_hlds__accumulator__V_47_47, transform_hlds__accumulator__R_36);
    }
#line 1666 "accumulator.m"
    {
#line 1666 "accumulator.m"
      transform_hlds__accumulator__V_49_49 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__Construct_31, transform_hlds__accumulator__ConstructAssoc_30);
    }
#line 1666 "accumulator.m"
    {
#line 1666 "accumulator.m"
      transform_hlds__accumulator__V_48_48 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__V_49_49);
    }
#line 1666 "accumulator.m"
    {
#line 1666 "accumulator.m"
      transform_hlds__accumulator__Rconstruct_39 = transform_hlds__accumulator__accu_goal_list_2_f_0(transform_hlds__accumulator__V_48_48, transform_hlds__accumulator__R_36);
    }
#line 1670 "accumulator.m"
    {
#line 1670 "accumulator.m"
      transform_hlds__accumulator__V_51_51 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__Assoc_29, transform_hlds__accumulator__Construct_31);
    }
#line 1670 "accumulator.m"
    {
#line 1670 "accumulator.m"
      transform_hlds__accumulator__V_50_50 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__V_51_51, transform_hlds__accumulator__ConstructAssoc_30);
    }
#line 1670 "accumulator.m"
    {
#line 1670 "accumulator.m"
      transform_hlds__accumulator__B_40 = transform_hlds__accumulator__create_new_base_goals_4_f_0(transform_hlds__accumulator__V_50_50, transform_hlds__accumulator__C_17, transform_hlds__accumulator__AccVarSubst_21, transform_hlds__accumulator__HeadToCallSubst_13);
    }
#line 1672 "accumulator.m"
    {
#line 1672 "accumulator.m"
      transform_hlds__accumulator__V_53_53 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__Assoc_29, transform_hlds__accumulator__Construct_31);
    }
#line 1673 "accumulator.m"
    {
#line 1673 "accumulator.m"
      transform_hlds__accumulator__V_52_52 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__V_53_53, transform_hlds__accumulator__ConstructAssoc_30);
    }
#line 1672 "accumulator.m"
    {
#line 1672 "accumulator.m"
      transform_hlds__accumulator__Bafter_41 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__V_52_52);
    }
#line 1675 "accumulator.m"
    {
#line 1675 "accumulator.m"
      transform_hlds__accumulator__V_56_56 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__AssocBase_26, transform_hlds__accumulator__OtherBase_27);
    }
#line 1675 "accumulator.m"
    {
#line 1675 "accumulator.m"
      transform_hlds__accumulator__V_55_55 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__V_56_56);
    }
#line 1676 "accumulator.m"
    {
#line 1676 "accumulator.m"
      transform_hlds__accumulator__V_54_54 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_69_69, transform_hlds__accumulator__V_55_55, transform_hlds__accumulator__Bafter_41);
    }
#line 1675 "accumulator.m"
    {
#line 1675 "accumulator.m"
      transform_hlds__accumulator__BaseCase_42 = transform_hlds__accumulator__accu_goal_list_2_f_0(transform_hlds__accumulator__V_54_54, transform_hlds__accumulator__B_40);
    }
#line 10027 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1678 "accumulator.m"
    {
#line 1678 "accumulator.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__accumulator_scalar_common_2[0], transform_hlds__accumulator__TypeCtorInfo_73_73, (MR_Word) &transform_hlds__accumulator_scalar_common_2[8], transform_hlds__accumulator__BasePairs_15, &transform_hlds__accumulator__UpdateBase_43);
    }
#line 1681 "accumulator.m"
    {
#line 1681 "accumulator.m"
      transform_hlds__accumulator__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_64_64, 0) = ((MR_Box) (transform_hlds__accumulator__RecCall_34));
#line 1681 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1681 "accumulator.m"
    }
#line 1681 "accumulator.m"
    {
#line 1681 "accumulator.m"
      transform_hlds__accumulator__V_63_63 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_73_73, transform_hlds__accumulator__V_64_64, transform_hlds__accumulator__Rconstruct_39);
    }
#line 1681 "accumulator.m"
    {
#line 1681 "accumulator.m"
      transform_hlds__accumulator__V_62_62 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_73_73, transform_hlds__accumulator__Rupdate_38, transform_hlds__accumulator__V_63_63);
    }
#line 1680 "accumulator.m"
    {
#line 1680 "accumulator.m"
      transform_hlds__accumulator__V_61_61 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_73_73, transform_hlds__accumulator__Rassoc_37, transform_hlds__accumulator__V_62_62);
    }
#line 1680 "accumulator.m"
    {
#line 1680 "accumulator.m"
      transform_hlds__accumulator__V_60_60 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_73_73, transform_hlds__accumulator__Cbefore_35, transform_hlds__accumulator__V_61_61);
    }
#line 1680 "accumulator.m"
    {
#line 1680 "accumulator.m"
      transform_hlds__accumulator__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1680 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1680 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_58_58, 2) = ((MR_Box) (transform_hlds__accumulator__V_60_60));
#line 1680 "accumulator.m"
    }
#line 1680 "accumulator.m"
    {
#line 1680 "accumulator.m"
      transform_hlds__accumulator__calculate_goal_info_2_p_0(transform_hlds__accumulator__V_58_58, transform_hlds__accumulator__AccRecGoal_20);
    }
#line 1682 "accumulator.m"
    {
#line 1682 "accumulator.m"
      transform_hlds__accumulator__V_68_68 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_73_73, transform_hlds__accumulator__UpdateBase_43, transform_hlds__accumulator__BaseCase_42);
    }
#line 1682 "accumulator.m"
    {
#line 1682 "accumulator.m"
      transform_hlds__accumulator__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1682 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1682 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_66_66, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1682 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_66_66, 2) = ((MR_Box) (transform_hlds__accumulator__V_68_68));
#line 1682 "accumulator.m"
    }
#line 1682 "accumulator.m"
    {
#line 1682 "accumulator.m"
      transform_hlds__accumulator__calculate_goal_info_2_p_0(transform_hlds__accumulator__V_66_66, transform_hlds__accumulator__AccBaseGoal_19);
#line 1682 "accumulator.m"
      return;
    }
#line 1648 "accumulator.m"
  }
#line 1642 "accumulator.m"
}

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0_3(
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 1873 "accumulator.m"
{
#line 1873 "accumulator.m"
  {
#line 1873 "accumulator.m"
    struct transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 1873 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__conv2_HeadVar__2_9));
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__cont_env_ptr);
#line 1873 "accumulator.m"
      return;
    }
#line 1873 "accumulator.m"
  }
#line 1873 "accumulator.m"
}

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0_4(
#line 1873 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 1873 "accumulator.m"
{
#line 1873 "accumulator.m"
  {
#line 1873 "accumulator.m"
    struct transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0_s transform_hlds__accumulator__env;

#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__wrapper_arg_1 = transform_hlds__accumulator__wrapper_arg_1;
#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__cont = transform_hlds__accumulator__cont;
#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;

#line 1873 "accumulator.m"
      {
#line 1873 "accumulator.m"
        transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), &(transform_hlds__accumulator__env).transform_hlds__accumulator__create_orig_goal_9_p_0_4_env_0__conv2_HeadVar__2_9, transform_hlds__accumulator__create_orig_goal_9_p_0_3, &transform_hlds__accumulator__env);
      }
#line 1873 "accumulator.m"
    }
#line 1873 "accumulator.m"
  }
#line 1873 "accumulator.m"
}

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0_2(
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1889 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1889 "accumulator.m"
{
#line 1889 "accumulator.m"
  {
#line 1889 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1889 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv1_HeadVar__3_12;

#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1889__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv1_HeadVar__3_12);
    }
#line 1889 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv1_HeadVar__3_12));
#line 1889 "accumulator.m"
  }
#line 1889 "accumulator.m"
}

#line 1889 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0_1(
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1889 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1889 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1889 "accumulator.m"
{
#line 1889 "accumulator.m"
  {
#line 1889 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1889 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__3_12;

#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1889__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv0_HeadVar__3_12);
    }
#line 1889 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__3_12));
#line 1889 "accumulator.m"
  }
#line 1889 "accumulator.m"
}

#line 1614 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_orig_goal_9_p_0(
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__Call_10,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_11,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_12,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__CallToHeadSubst_13,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__BaseIds_14,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_15,
#line 1614 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_16,
#line 1614 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigBaseGoal_17,
#line 1614 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigRecGoal_18)
#line 1614 "accumulator.m"
{
#line 1619 "accumulator.m"
  {
#line 1619 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_56_56;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_57_57;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateSubst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_11, (MR_Integer) 3)));
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateBase_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__BaseIds_14, (MR_Integer) 0)));
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__Before_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_15, (MR_Integer) 0)));
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__Update_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_15, (MR_Integer) 4)));
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__U_28;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__BaseCall_29;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cbefore_30;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__Uupdate_31;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__Cbase_32;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_33_33;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_34_34;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_35_35;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_36_36;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_37_37;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_38_38;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_40_40;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_41_41;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_42_42;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_44_44;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_64_64;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_79_79;
#line 1619 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_93_93;
#line 1620 "accumulator.m"
    MR_Word transform_hlds__accumulator___AccVarSubst_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_11, (MR_Integer) 0)));
#line 1620 "accumulator.m"
    MR_Word transform_hlds__accumulator___RecCallSubst_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_11, (MR_Integer) 1)));
#line 1620 "accumulator.m"
    MR_Word transform_hlds__accumulator___AssocCallSubst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_11, (MR_Integer) 2)));
#line 1623 "accumulator.m"
    MR_Word transform_hlds__accumulator___AssocBase_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__BaseIds_14, (MR_Integer) 1)));
#line 1623 "accumulator.m"
    MR_Word transform_hlds__accumulator___OtherBase_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__BaseIds_14, (MR_Integer) 2)));
#line 1624 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_15, (MR_Integer) 1)));
#line 1624 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_15, (MR_Integer) 2)));
#line 1624 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_15, (MR_Integer) 3)));
#line 1624 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_15, (MR_Integer) 5)));

#line 1627 "accumulator.m"
    {
#line 1627 "accumulator.m"
      transform_hlds__accumulator__U_28 = transform_hlds__accumulator__create_new_orig_recursive_goals_5_f_0(transform_hlds__accumulator__UpdateBase_23, transform_hlds__accumulator__Update_27, transform_hlds__accumulator__HeadToCallSubst_12, transform_hlds__accumulator__UpdateSubst_22, transform_hlds__accumulator__C_16);
    }
#line 1630 "accumulator.m"
    {
#line 1630 "accumulator.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__accumulator__CallToHeadSubst_13, transform_hlds__accumulator__Call_10, &transform_hlds__accumulator__BaseCall_29);
    }
#line 10341 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_56_56 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1631 "accumulator.m"
    {
#line 1631 "accumulator.m"
      transform_hlds__accumulator__V_33_33 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_56_56, transform_hlds__accumulator__Before_26);
    }
#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      transform_hlds__accumulator__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_64_64, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_9[1]));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_64_64, 1) = ((MR_Box) (transform_hlds__accumulator__create_orig_goal_9_p_0_1));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_64_64, 3) = ((MR_Box) (transform_hlds__accumulator__C_16));
#line 1889 "accumulator.m"
    }
#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__accumulator__V_64_64, transform_hlds__accumulator__V_33_33, &transform_hlds__accumulator__Cbefore_30);
    }
#line 1632 "accumulator.m"
    {
#line 1632 "accumulator.m"
      transform_hlds__accumulator__V_35_35 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_56_56, transform_hlds__accumulator__UpdateBase_23);
    }
#line 1633 "accumulator.m"
    {
#line 1633 "accumulator.m"
      transform_hlds__accumulator__V_36_36 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_56_56, transform_hlds__accumulator__Update_27);
    }
#line 1632 "accumulator.m"
    {
#line 1632 "accumulator.m"
      transform_hlds__accumulator__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_56_56, transform_hlds__accumulator__V_35_35, transform_hlds__accumulator__V_36_36);
    }
#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      transform_hlds__accumulator__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_79_79, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_9[1]));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_79_79, 1) = ((MR_Box) (transform_hlds__accumulator__create_orig_goal_9_p_0_2));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1889 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_79_79, 3) = ((MR_Box) (transform_hlds__accumulator__U_28));
#line 1889 "accumulator.m"
    }
#line 1889 "accumulator.m"
    {
#line 1889 "accumulator.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__accumulator__V_79_79, transform_hlds__accumulator__V_34_34, &transform_hlds__accumulator__Uupdate_31);
    }
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      transform_hlds__accumulator__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_93_93, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[3]));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_93_93, 1) = ((MR_Box) (transform_hlds__accumulator__create_orig_goal_9_p_0_4));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_93_93, 3) = ((MR_Box) (transform_hlds__accumulator__C_16));
#line 1873 "accumulator.m"
    }
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_93_93, &transform_hlds__accumulator__V_37_37);
    }
#line 1634 "accumulator.m"
    {
#line 1634 "accumulator.m"
      transform_hlds__accumulator__Cbase_32 = transform_hlds__accumulator__accu_goal_list_2_f_0(transform_hlds__accumulator__V_37_37, transform_hlds__accumulator__C_16);
    }
#line 10425 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1635 "accumulator.m"
    {
#line 1635 "accumulator.m"
      transform_hlds__accumulator__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1635 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_42_42, 0) = ((MR_Box) (transform_hlds__accumulator__BaseCall_29));
#line 1635 "accumulator.m"
      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1635 "accumulator.m"
    }
#line 1635 "accumulator.m"
    {
#line 1635 "accumulator.m"
      transform_hlds__accumulator__V_41_41 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_57_57, transform_hlds__accumulator__Uupdate_31, transform_hlds__accumulator__V_42_42);
    }
#line 1635 "accumulator.m"
    {
#line 1635 "accumulator.m"
      transform_hlds__accumulator__V_40_40 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_57_57, transform_hlds__accumulator__Cbefore_30, transform_hlds__accumulator__V_41_41);
    }
#line 1635 "accumulator.m"
    {
#line 1635 "accumulator.m"
      transform_hlds__accumulator__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1635 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1635 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_38_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1635 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_38_38, 2) = ((MR_Box) (transform_hlds__accumulator__V_40_40));
#line 1635 "accumulator.m"
    }
#line 1635 "accumulator.m"
    {
#line 1635 "accumulator.m"
      transform_hlds__accumulator__calculate_goal_info_2_p_0(transform_hlds__accumulator__V_38_38, transform_hlds__accumulator__OrigRecGoal_18);
    }
#line 1637 "accumulator.m"
    {
#line 1637 "accumulator.m"
      transform_hlds__accumulator__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1637 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1637 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1637 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_44_44, 2) = ((MR_Box) (transform_hlds__accumulator__Cbase_32));
#line 1637 "accumulator.m"
    }
#line 1637 "accumulator.m"
    {
#line 1637 "accumulator.m"
      transform_hlds__accumulator__calculate_goal_info_2_p_0(transform_hlds__accumulator__V_44_44, transform_hlds__accumulator__OrigBaseGoal_17);
#line 1637 "accumulator.m"
      return;
    }
#line 1619 "accumulator.m"
  }
#line 1614 "accumulator.m"
}

#line 1580 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_create_goal_17_p_0(
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__RecCallId_18,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__Accs_19,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccPredId_20,
#line 1580 "accumulator.m"
  MR_Integer transform_hlds__accumulator__AccProcId_21,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__AccName_22,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_23,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_24,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__CallToHeadSubst_25,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__BaseIds_26,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__BasePairs_27,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_28,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_29,
#line 1580 "accumulator.m"
  MR_Word transform_hlds__accumulator__CS_30,
#line 1580 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigBaseGoal_31,
#line 1580 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OrigRecGoal_32,
#line 1580 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccBaseGoal_33,
#line 1580 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccRecGoal_34)
#line 1580 "accumulator.m"
{
#line 1589 "accumulator.m"
  {
#line 1589 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__OrigCall_35;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__Call_37;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goal_43;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_52_52;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__OrigCallExpr_63;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalInfo_64;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__Args_67;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__Builtin_68;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__Context_69;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__CallExpr_71;
#line 1589 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_72_72;
#line 1436 "accumulator.m"
    MR_Word transform_hlds__accumulator___InstMap_36;
#line 1438 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalExpr_44;
#line 1438 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalInfo_45;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_46_46;
#line 1439 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_47_47;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_48_48;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_49_49;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_50_50;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_51_51;
#line 1607 "accumulator.m"
    MR_Word transform_hlds__accumulator___PredId_65;
#line 1607 "accumulator.m"
    MR_Integer transform_hlds__accumulator___ProcId_66;
#line 1607 "accumulator.m"
    MR_Word transform_hlds__accumulator___Name_70;

#line 1436 "accumulator.m"
    {
#line 1436 "accumulator.m"
      transform_hlds__goal_store__goal_store_lookup_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__C_29, ((MR_Box) (transform_hlds__accumulator__RecCallId_18)), &transform_hlds__accumulator__V_52_52);
    }
#line 1436 "accumulator.m"
    transform_hlds__accumulator__Goal_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_52_52, (MR_Integer) 0)));
#line 1436 "accumulator.m"
    transform_hlds__accumulator___InstMap_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_52_52, (MR_Integer) 1)));
#line 1438 "accumulator.m"
    transform_hlds__accumulator__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_43, (MR_Integer) 0)));
#line 1438 "accumulator.m"
    transform_hlds__accumulator__GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_43, (MR_Integer) 1)));
#line 1439 "accumulator.m"
    transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__GoalExpr_44)) == (MR_mktag((MR_Integer) 2)));
#line 1439 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1439 "accumulator.m"
      {
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_44, (MR_Integer) 0)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_44, (MR_Integer) 1)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_44, (MR_Integer) 2)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_44, (MR_Integer) 3)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_44, (MR_Integer) 4)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_44, (MR_Integer) 5)));
#line 1441 "accumulator.m"
        transform_hlds__accumulator__OrigCall_35 = transform_hlds__accumulator__Goal_43;
#line 1439 "accumulator.m"
      }
#line 1439 "accumulator.m"
    else
#line 1443 "accumulator.m"
      {
#line 1443 "accumulator.m"
        {
#line 1443 "accumulator.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.lookup_call\'/3", (MR_String) "not a call");
#line 1443 "accumulator.m"
          return;
        }
#line 1443 "accumulator.m"
      }
#line 1606 "accumulator.m"
    transform_hlds__accumulator__OrigCallExpr_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__OrigCall_35, (MR_Integer) 0)));
#line 1606 "accumulator.m"
    transform_hlds__accumulator__GoalInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__OrigCall_35, (MR_Integer) 1)));
#line 1607 "accumulator.m"
    transform_hlds__accumulator___PredId_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__OrigCallExpr_63, (MR_Integer) 0)));
#line 1607 "accumulator.m"
    transform_hlds__accumulator___ProcId_66 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__OrigCallExpr_63, (MR_Integer) 1)));
#line 1607 "accumulator.m"
    transform_hlds__accumulator__Args_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__OrigCallExpr_63, (MR_Integer) 2)));
#line 1607 "accumulator.m"
    transform_hlds__accumulator__Builtin_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__OrigCallExpr_63, (MR_Integer) 3)));
#line 1607 "accumulator.m"
    transform_hlds__accumulator__Context_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__OrigCallExpr_63, (MR_Integer) 4)));
#line 1607 "accumulator.m"
    transform_hlds__accumulator___Name_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__OrigCallExpr_63, (MR_Integer) 5)));
#line 1608 "accumulator.m"
    {
#line 1608 "accumulator.m"
      transform_hlds__accumulator__V_72_72 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[2], transform_hlds__accumulator__Accs_19, transform_hlds__accumulator__Args_67);
    }
#line 1608 "accumulator.m"
    {
#line 1608 "accumulator.m"
      transform_hlds__accumulator__CallExpr_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__CallExpr_71, 0) = ((MR_Box) (transform_hlds__accumulator__AccPredId_20));
#line 1608 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__CallExpr_71, 1) = ((MR_Box) (transform_hlds__accumulator__AccProcId_21));
#line 1608 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__CallExpr_71, 2) = ((MR_Box) (transform_hlds__accumulator__V_72_72));
#line 1608 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__CallExpr_71, 3) = ((MR_Box) (transform_hlds__accumulator__Builtin_68));
#line 1608 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__CallExpr_71, 4) = ((MR_Box) (transform_hlds__accumulator__Context_69));
#line 1608 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__CallExpr_71, 5) = ((MR_Box) (transform_hlds__accumulator__AccName_22));
#line 1608 "accumulator.m"
    }
#line 1610 "accumulator.m"
    {
#line 1610 "accumulator.m"
      transform_hlds__accumulator__Call_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1610 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Call_37, 0) = ((MR_Box) (transform_hlds__accumulator__CallExpr_71));
#line 1610 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Call_37, 1) = ((MR_Box) (transform_hlds__accumulator__GoalInfo_64));
#line 1610 "accumulator.m"
    }
#line 1592 "accumulator.m"
    {
#line 1592 "accumulator.m"
      transform_hlds__accumulator__create_orig_goal_9_p_0(transform_hlds__accumulator__Call_37, transform_hlds__accumulator__Substs_23, transform_hlds__accumulator__HeadToCallSubst_24, transform_hlds__accumulator__CallToHeadSubst_25, transform_hlds__accumulator__BaseIds_26, transform_hlds__accumulator__Sets_28, transform_hlds__accumulator__C_29, transform_hlds__accumulator__OrigBaseGoal_31, transform_hlds__accumulator__OrigRecGoal_32);
    }
#line 1594 "accumulator.m"
    {
#line 1594 "accumulator.m"
      transform_hlds__accumulator__create_acc_goal_10_p_0(transform_hlds__accumulator__Call_37, transform_hlds__accumulator__Substs_23, transform_hlds__accumulator__HeadToCallSubst_24, transform_hlds__accumulator__BaseIds_26, transform_hlds__accumulator__BasePairs_27, transform_hlds__accumulator__Sets_28, transform_hlds__accumulator__C_29, transform_hlds__accumulator__CS_30, transform_hlds__accumulator__AccBaseGoal_33, transform_hlds__accumulator__AccRecGoal_34);
#line 1594 "accumulator.m"
      return;
    }
#line 1589 "accumulator.m"
  }
#line 1580 "accumulator.m"
}

#line 1566 "accumulator.m"
static MR_Box MR_CALL 
transform_hlds__accumulator__acc_pred_info_7_p_0_1(
#line 1566 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1566 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1)
#line 1566 "accumulator.m"
{
#line 1566 "accumulator.m"
  {
#line 1566 "accumulator.m"
    MR_Box transform_hlds__accumulator__wrapper_arg_2;
#line 1566 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1566 "accumulator.m"
    MR_Integer transform_hlds__accumulator__conv0_HeadVar__2_43;

#line 1566 "accumulator.m"
    {
#line 1566 "accumulator.m"
      transform_hlds__accumulator__conv0_HeadVar__2_43 = transform_hlds__accumulator__IntroducedFrom__func__acc_pred_info__1566__1_1_f_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1));
    }
#line 1566 "accumulator.m"
    transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__2_43));
#line 1566 "accumulator.m"
    return transform_hlds__accumulator__wrapper_arg_2;
#line 1566 "accumulator.m"
  }
#line 1566 "accumulator.m"
}

#line 1538 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_pred_info_7_p_0(
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__NewTypes_8,
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__OutVars_9,
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__NewProcInfo_10,
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigPredId_11,
#line 1538 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigPredInfo_12,
#line 1538 "accumulator.m"
  MR_Integer * transform_hlds__accumulator__NewProcId_13,
#line 1538 "accumulator.m"
  MR_Word * transform_hlds__accumulator__NewPredInfo_14)
#line 1538 "accumulator.m"
{
#line 1542 "accumulator.m"
  {
#line 1542 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeVarSet_15;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__ExistQVars_16;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__Types0_17;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__ModuleName_18;
#line 1542 "accumulator.m"
    MR_String transform_hlds__accumulator__Name_19;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__PredOrFunc_20;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__PredContext_21;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__Markers_22;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__ClassContext_23;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__OldOrigin_24;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__VarNameRemap_25;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__Assertions_26;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__Context_27;
#line 1542 "accumulator.m"
    MR_Integer transform_hlds__accumulator__Line_28;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__Types_30;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__SymName_31;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__OutVarNums_32;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__Origin_33;
#line 1542 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_36_36;

#line 1544 "accumulator.m"
    {
#line 1544 "accumulator.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__accumulator__OrigPredInfo_12, &transform_hlds__accumulator__TypeVarSet_15, &transform_hlds__accumulator__ExistQVars_16, &transform_hlds__accumulator__Types0_17);
    }
#line 1546 "accumulator.m"
    {
#line 1546 "accumulator.m"
      transform_hlds__accumulator__ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__accumulator__OrigPredInfo_12);
    }
#line 1547 "accumulator.m"
    {
#line 1547 "accumulator.m"
      transform_hlds__accumulator__Name_19 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__accumulator__OrigPredInfo_12);
    }
#line 1548 "accumulator.m"
    {
#line 1548 "accumulator.m"
      transform_hlds__accumulator__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__accumulator__OrigPredInfo_12);
    }
#line 1549 "accumulator.m"
    {
#line 1549 "accumulator.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__accumulator__OrigPredInfo_12, &transform_hlds__accumulator__PredContext_21);
    }
#line 1550 "accumulator.m"
    {
#line 1550 "accumulator.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__accumulator__OrigPredInfo_12, &transform_hlds__accumulator__Markers_22);
    }
#line 1551 "accumulator.m"
    {
#line 1551 "accumulator.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__accumulator__OrigPredInfo_12, &transform_hlds__accumulator__ClassContext_23);
    }
#line 1552 "accumulator.m"
    {
#line 1552 "accumulator.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__accumulator__OrigPredInfo_12, &transform_hlds__accumulator__OldOrigin_24);
    }
#line 1553 "accumulator.m"
    {
#line 1553 "accumulator.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__accumulator__OrigPredInfo_12, &transform_hlds__accumulator__VarNameRemap_25);
    }
#line 1555 "accumulator.m"
    {
#line 1555 "accumulator.m"
      mercury__set__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0, &transform_hlds__accumulator__Assertions_26);
    }
#line 1557 "accumulator.m"
    {
#line 1557 "accumulator.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__accumulator__NewProcInfo_10, &transform_hlds__accumulator__Context_27);
    }
#line 1558 "accumulator.m"
    {
#line 1558 "accumulator.m"
      mercury__term__context_line_2_p_0(transform_hlds__accumulator__Context_27, &transform_hlds__accumulator__Line_28);
    }
#line 1561 "accumulator.m"
    {
#line 1561 "accumulator.m"
      transform_hlds__accumulator__Types_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__accumulator__NewTypes_8, transform_hlds__accumulator__Types0_17);
    }
#line 1563 "accumulator.m"
    {
#line 1563 "accumulator.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__accumulator__ModuleName_18, (MR_String) "AccFrom", transform_hlds__accumulator__PredOrFunc_20, transform_hlds__accumulator__Name_19, transform_hlds__accumulator__Line_28, (MR_Integer) 0, &transform_hlds__accumulator__SymName_31);
    }
#line 1566 "accumulator.m"
    {
#line 1566 "accumulator.m"
      transform_hlds__accumulator__OutVarNums_32 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__accumulator_scalar_common_1[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__accumulator_scalar_common_2[7], transform_hlds__accumulator__OutVars_9);
    }
#line 1567 "accumulator.m"
    {
#line 1567 "accumulator.m"
      transform_hlds__accumulator__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1567 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1567 "accumulator.m"
      MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_36_36, 1) = ((MR_Box) (transform_hlds__accumulator__OutVarNums_32));
#line 1567 "accumulator.m"
    }
#line 1567 "accumulator.m"
    {
#line 1567 "accumulator.m"
      transform_hlds__accumulator__Origin_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1567 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__Origin_33, 0) = ((MR_Box) (transform_hlds__accumulator__V_36_36));
#line 1567 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__Origin_33, 1) = ((MR_Box) (transform_hlds__accumulator__OldOrigin_24));
#line 1567 "accumulator.m"
      MR_hl_field(MR_mktag(2), transform_hlds__accumulator__Origin_33, 2) = ((MR_Box) (transform_hlds__accumulator__OrigPredId_11));
#line 1567 "accumulator.m"
    }
#line 1569 "accumulator.m"
    {
#line 1569 "accumulator.m"
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__accumulator__ModuleName_18, transform_hlds__accumulator__SymName_31, transform_hlds__accumulator__PredOrFunc_20, transform_hlds__accumulator__PredContext_21, transform_hlds__accumulator__Origin_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__accumulator__Markers_22, transform_hlds__accumulator__Types_30, transform_hlds__accumulator__TypeVarSet_15, transform_hlds__accumulator__ExistQVars_16, transform_hlds__accumulator__ClassContext_23, transform_hlds__accumulator__Assertions_26, transform_hlds__accumulator__VarNameRemap_25, transform_hlds__accumulator__NewProcInfo_10, transform_hlds__accumulator__NewProcId_13, transform_hlds__accumulator__NewPredInfo_14);
#line 1569 "accumulator.m"
      return;
    }
#line 1542 "accumulator.m"
  }
#line 1538 "accumulator.m"
}

#line 1512 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_proc_info_7_p_0_1(
#line 1512 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1512 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1512 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1512 "accumulator.m"
{
#line 1512 "accumulator.m"
  {
#line 1512 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1512 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__3_46;

#line 1512 "accumulator.m"
    {
#line 1512 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1512__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv0_HeadVar__3_46);
    }
#line 1512 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__3_46));
#line 1512 "accumulator.m"
  }
#line 1512 "accumulator.m"
}

#line 1491 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_proc_info_7_p_0(
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__Accs0_8,
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarSet_9,
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_10,
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_11,
#line 1491 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigProcInfo_12,
#line 1491 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccTypes_13,
#line 1491 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AccProcInfo_14)
#line 1491 "accumulator.m"
{
#line 1496 "accumulator.m"
  {
#line 1496 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_48_48;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_49_49;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadVars0_15;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadModes0_16;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__InstVarSet_17;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__Detism_18;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goal_19;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__Context_20;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__RttiVarMaps_21;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__IsAddressTaken_22;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__HasParallelConj_23;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__VarNameRemap_24;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccVarSubst_25;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__Accs_29;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadVars_30;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__Mode_32;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccModes_33;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadModes_34;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_35_35;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_38_38;
#line 1496 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_42_42;
#line 1496 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_43_43;
#line 1510 "accumulator.m"
    MR_Word transform_hlds__accumulator___RecCallSubst_26;
#line 1510 "accumulator.m"
    MR_Word transform_hlds__accumulator___AssocCallSubst_27;
#line 1510 "accumulator.m"
    MR_Word transform_hlds__accumulator___UpdateSubst_28;
#line 1525 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv1_V_43_43;

#line 1498 "accumulator.m"
    {
#line 1498 "accumulator.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__HeadVars0_15);
    }
#line 1499 "accumulator.m"
    {
#line 1499 "accumulator.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__HeadModes0_16);
    }
#line 1501 "accumulator.m"
    {
#line 1501 "accumulator.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__InstVarSet_17);
    }
#line 1502 "accumulator.m"
    {
#line 1502 "accumulator.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__Detism_18);
    }
#line 1503 "accumulator.m"
    {
#line 1503 "accumulator.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__Goal_19);
    }
#line 1504 "accumulator.m"
    {
#line 1504 "accumulator.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__Context_20);
    }
#line 1505 "accumulator.m"
    {
#line 1505 "accumulator.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__RttiVarMaps_21);
    }
#line 1506 "accumulator.m"
    {
#line 1506 "accumulator.m"
      hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__IsAddressTaken_22);
    }
#line 1507 "accumulator.m"
    {
#line 1507 "accumulator.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__HasParallelConj_23);
    }
#line 1508 "accumulator.m"
    {
#line 1508 "accumulator.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(transform_hlds__accumulator__OrigProcInfo_12, &transform_hlds__accumulator__VarNameRemap_24);
    }
#line 1510 "accumulator.m"
    transform_hlds__accumulator__AccVarSubst_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_11, (MR_Integer) 0)));
#line 1510 "accumulator.m"
    transform_hlds__accumulator___RecCallSubst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_11, (MR_Integer) 1)));
#line 1510 "accumulator.m"
    transform_hlds__accumulator___AssocCallSubst_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_11, (MR_Integer) 2)));
#line 1510 "accumulator.m"
    transform_hlds__accumulator___UpdateSubst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Substs_11, (MR_Integer) 3)));
#line 1512 "accumulator.m"
    {
#line 1512 "accumulator.m"
      transform_hlds__accumulator__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_35_35, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_9[0]));
#line 1512 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_35_35, 1) = ((MR_Box) (transform_hlds__accumulator__acc_proc_info_7_p_0_1));
#line 1512 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1512 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_35_35, 3) = ((MR_Box) (transform_hlds__accumulator__AccVarSubst_25));
#line 1512 "accumulator.m"
    }
#line 11073 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeInfo_48_48 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1512 "accumulator.m"
    {
#line 1512 "accumulator.m"
      mercury__list__map_3_p_0(transform_hlds__accumulator__TypeInfo_48_48, transform_hlds__accumulator__TypeInfo_48_48, transform_hlds__accumulator__V_35_35, transform_hlds__accumulator__Accs0_8, &transform_hlds__accumulator__Accs_29);
    }
#line 1517 "accumulator.m"
    {
#line 1517 "accumulator.m"
      transform_hlds__accumulator__HeadVars_30 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeInfo_48_48, transform_hlds__accumulator__Accs_29, transform_hlds__accumulator__HeadVars0_15);
    }
#line 1524 "accumulator.m"
    transform_hlds__accumulator__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[66]);
#line 1524 "accumulator.m"
    {
#line 1524 "accumulator.m"
      parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(transform_hlds__accumulator__V_38_38, transform_hlds__accumulator__V_38_38, &transform_hlds__accumulator__Mode_32);
    }
#line 1525 "accumulator.m"
    {
#line 1525 "accumulator.m"
      transform_hlds__accumulator__V_42_42 = mercury__list__length_1_f_0(transform_hlds__accumulator__TypeInfo_48_48, transform_hlds__accumulator__Accs_29);
    }
#line 11097 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1525 "accumulator.m"
    {
#line 1525 "accumulator.m"
      transform_hlds__accumulator__conv1_V_43_43 = mercury__list__det_head_1_f_0(transform_hlds__accumulator__TypeCtorInfo_49_49, transform_hlds__accumulator__Mode_32);
    }
#line 1525 "accumulator.m"
    transform_hlds__accumulator__V_43_43 = ((MR_Word) transform_hlds__accumulator__conv1_V_43_43);
#line 1525 "accumulator.m"
    {
#line 1525 "accumulator.m"
      mercury__list__duplicate_3_p_0(transform_hlds__accumulator__TypeCtorInfo_49_49, transform_hlds__accumulator__V_42_42, ((MR_Box) (transform_hlds__accumulator__V_43_43)), &transform_hlds__accumulator__AccModes_33);
    }
#line 1526 "accumulator.m"
    {
#line 1526 "accumulator.m"
      transform_hlds__accumulator__HeadModes_34 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_49_49, transform_hlds__accumulator__AccModes_33, transform_hlds__accumulator__HeadModes0_16);
    }
#line 1528 "accumulator.m"
    {
#line 1528 "accumulator.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__accumulator__VarTypes_10, transform_hlds__accumulator__Accs_29, transform_hlds__accumulator__AccTypes_13);
    }
#line 1530 "accumulator.m"
    {
#line 1530 "accumulator.m"
      hlds__hlds_pred__proc_info_create_14_p_0(transform_hlds__accumulator__Context_20, transform_hlds__accumulator__VarSet_9, transform_hlds__accumulator__VarTypes_10, transform_hlds__accumulator__HeadVars_30, transform_hlds__accumulator__InstVarSet_17, transform_hlds__accumulator__HeadModes_34, (MR_Integer) 2, transform_hlds__accumulator__Detism_18, transform_hlds__accumulator__Goal_19, transform_hlds__accumulator__RttiVarMaps_21, transform_hlds__accumulator__IsAddressTaken_22, transform_hlds__accumulator__HasParallelConj_23, transform_hlds__accumulator__VarNameRemap_24, transform_hlds__accumulator__AccProcInfo_14);
#line 1530 "accumulator.m"
      return;
    }
#line 1496 "accumulator.m"
  }
#line 1491 "accumulator.m"
}

#line 1453 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_stage3_20_p_0(
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__RecCallId_21,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__Accs_22,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarSet_23,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_24,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_25,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__CS_26,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__Substs_27,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadToCallSubst_28,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__CallToHeadSubst_29,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__BaseCase_30,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__BasePairs_31,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_32,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__Out_33,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__TopLevel_34,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigPredId_35,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__OrigPredInfo_36,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_0_54,
#line 1453 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_55,
#line 1453 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_56,
#line 1453 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_57)
#line 1453 "accumulator.m"
{
#line 1462 "accumulator.m"
  {
#line 1462 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccTypes_39;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccProcInfo_40;
#line 1462 "accumulator.m"
    MR_Integer transform_hlds__accumulator__AccProcId_41;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccPredInfo_42;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccName_43;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__PredTable0_44;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccPredId_45;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__PredTable_46;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__OrigBaseGoal_47;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__OrigRecGoal_48;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccBaseGoal_49;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccRecGoal_50;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__OrigGoal0_51;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__OrigGoal_52;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccGoal_53;
#line 1462 "accumulator.m"
    MR_String transform_hlds__accumulator__V_58_58;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_59_59;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_60_60;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_61_61;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_62_62;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__PredInfo_72;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__ProcInfo0_73;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__ProcInfo1_74;
#line 1462 "accumulator.m"
    MR_Word transform_hlds__accumulator__ProcInfo_75;

#line 1463 "accumulator.m"
    {
#line 1463 "accumulator.m"
      transform_hlds__accumulator__acc_proc_info_7_p_0(transform_hlds__accumulator__Accs_22, transform_hlds__accumulator__VarSet_23, transform_hlds__accumulator__VarTypes_24, transform_hlds__accumulator__Substs_27, transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_0_54, &transform_hlds__accumulator__AccTypes_39, &transform_hlds__accumulator__AccProcInfo_40);
    }
#line 1465 "accumulator.m"
    {
#line 1465 "accumulator.m"
      transform_hlds__accumulator__acc_pred_info_7_p_0(transform_hlds__accumulator__AccTypes_39, transform_hlds__accumulator__Out_33, transform_hlds__accumulator__AccProcInfo_40, transform_hlds__accumulator__OrigPredId_35, transform_hlds__accumulator__OrigPredInfo_36, &transform_hlds__accumulator__AccProcId_41, &transform_hlds__accumulator__AccPredInfo_42);
    }
#line 1467 "accumulator.m"
    {
#line 1467 "accumulator.m"
      transform_hlds__accumulator__V_58_58 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__accumulator__AccPredInfo_42);
    }
#line 1467 "accumulator.m"
    {
#line 1467 "accumulator.m"
      transform_hlds__accumulator__AccName_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__AccName_43, 0) = ((MR_Box) (transform_hlds__accumulator__V_58_58));
#line 1467 "accumulator.m"
    }
#line 1469 "accumulator.m"
    {
#line 1469 "accumulator.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_56, &transform_hlds__accumulator__PredTable0_44);
    }
#line 1470 "accumulator.m"
    {
#line 1470 "accumulator.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__accumulator__AccPredInfo_42, &transform_hlds__accumulator__AccPredId_45, transform_hlds__accumulator__PredTable0_44, &transform_hlds__accumulator__PredTable_46);
    }
#line 1471 "accumulator.m"
    {
#line 1471 "accumulator.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__accumulator__PredTable_46, transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_56, &transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_59_59);
    }
#line 1472 "accumulator.m"
    {
#line 1472 "accumulator.m"
      transform_hlds__accumulator__accu_create_goal_17_p_0(transform_hlds__accumulator__RecCallId_21, transform_hlds__accumulator__Accs_22, transform_hlds__accumulator__AccPredId_45, transform_hlds__accumulator__AccProcId_41, transform_hlds__accumulator__AccName_43, transform_hlds__accumulator__Substs_27, transform_hlds__accumulator__HeadToCallSubst_28, transform_hlds__accumulator__CallToHeadSubst_29, transform_hlds__accumulator__BaseCase_30, transform_hlds__accumulator__BasePairs_31, transform_hlds__accumulator__Sets_32, transform_hlds__accumulator__C_25, transform_hlds__accumulator__CS_26, &transform_hlds__accumulator__OrigBaseGoal_47, &transform_hlds__accumulator__OrigRecGoal_48, &transform_hlds__accumulator__AccBaseGoal_49, &transform_hlds__accumulator__AccRecGoal_50);
    }
#line 1476 "accumulator.m"
    {
#line 1476 "accumulator.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_0_54, &transform_hlds__accumulator__OrigGoal0_51);
    }
#line 1477 "accumulator.m"
    {
#line 1477 "accumulator.m"
      transform_hlds__accumulator__accu_top_level_8_p_0(transform_hlds__accumulator__TopLevel_34, transform_hlds__accumulator__OrigGoal0_51, transform_hlds__accumulator__OrigBaseGoal_47, transform_hlds__accumulator__OrigRecGoal_48, transform_hlds__accumulator__AccBaseGoal_49, transform_hlds__accumulator__AccRecGoal_50, &transform_hlds__accumulator__OrigGoal_52, &transform_hlds__accumulator__AccGoal_53);
    }
#line 1480 "accumulator.m"
    {
#line 1480 "accumulator.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__accumulator__OrigGoal_52, transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_0_54, &transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_60_60);
    }
#line 1481 "accumulator.m"
    {
#line 1481 "accumulator.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__accumulator__VarSet_23, transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_60_60, &transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_61_61);
    }
#line 1482 "accumulator.m"
    {
#line 1482 "accumulator.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__accumulator__VarTypes_24, transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_61_61, &transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_62_62);
    }
#line 1484 "accumulator.m"
    {
#line 1484 "accumulator.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_62_62, transform_hlds__accumulator__STATE_VARIABLE_OrigProcInfo_55);
    }
#line 1841 "accumulator.m"
    {
#line 1841 "accumulator.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_59_59, transform_hlds__accumulator__AccPredId_45, transform_hlds__accumulator__AccProcId_41, &transform_hlds__accumulator__PredInfo_72, &transform_hlds__accumulator__ProcInfo0_73);
    }
#line 1843 "accumulator.m"
    {
#line 1843 "accumulator.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__accumulator__AccGoal_53, transform_hlds__accumulator__ProcInfo0_73, &transform_hlds__accumulator__ProcInfo1_74);
    }
#line 1844 "accumulator.m"
    {
#line 1844 "accumulator.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__accumulator__ProcInfo1_74, &transform_hlds__accumulator__ProcInfo_75);
    }
#line 1845 "accumulator.m"
    {
#line 1845 "accumulator.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__accumulator__AccPredId_45, transform_hlds__accumulator__AccProcId_41, transform_hlds__accumulator__PredInfo_72, transform_hlds__accumulator__ProcInfo_75, transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_59_59, transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_57);
#line 1845 "accumulator.m"
      return;
    }
#line 1462 "accumulator.m"
  }
#line 1453 "accumulator.m"
}

#line 1432 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__lookup_call_3_p_0(
#line 1432 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_4,
#line 1432 "accumulator.m"
  MR_Word transform_hlds__accumulator__Id_5,
#line 1432 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__3_3)
#line 1432 "accumulator.m"
{
#line 1435 "accumulator.m"
  {
#line 1435 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1435 "accumulator.m"
    MR_Word transform_hlds__accumulator__Call_6;
#line 1435 "accumulator.m"
    MR_Word transform_hlds__accumulator__InstMap_7;
#line 1435 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goal_8;
#line 1435 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_17_17;
#line 1438 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalExpr_9;
#line 1438 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalInfo_10;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_11_11;
#line 1439 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_12_12;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_13_13;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_14_14;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_15_15;
#line 1439 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_16_16;

#line 1436 "accumulator.m"
    {
#line 1436 "accumulator.m"
      transform_hlds__goal_store__goal_store_lookup_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__GoalStore_4, ((MR_Box) (transform_hlds__accumulator__Id_5)), &transform_hlds__accumulator__V_17_17);
    }
#line 1436 "accumulator.m"
    transform_hlds__accumulator__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_17_17, (MR_Integer) 0)));
#line 1436 "accumulator.m"
    transform_hlds__accumulator__InstMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_17_17, (MR_Integer) 1)));
#line 1438 "accumulator.m"
    transform_hlds__accumulator__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_8, (MR_Integer) 0)));
#line 1438 "accumulator.m"
    transform_hlds__accumulator__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_8, (MR_Integer) 1)));
#line 1439 "accumulator.m"
    transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__GoalExpr_9)) == (MR_mktag((MR_Integer) 2)));
#line 1439 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1439 "accumulator.m"
      {
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_9, (MR_Integer) 0)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_9, (MR_Integer) 1)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_9, (MR_Integer) 2)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_9, (MR_Integer) 3)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_9, (MR_Integer) 4)));
#line 1439 "accumulator.m"
        transform_hlds__accumulator__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__GoalExpr_9, (MR_Integer) 5)));
#line 1441 "accumulator.m"
        transform_hlds__accumulator__Call_6 = transform_hlds__accumulator__Goal_8;
#line 1439 "accumulator.m"
      }
#line 1439 "accumulator.m"
    else
#line 1443 "accumulator.m"
      {
#line 1443 "accumulator.m"
        {
#line 1443 "accumulator.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.lookup_call\'/3", (MR_String) "not a call");
#line 1443 "accumulator.m"
          return;
        }
#line 1443 "accumulator.m"
      }
#line 1435 "accumulator.m"
    {
#line 1435 "accumulator.m"
      MR_Word base;
#line 1435 "accumulator.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1435 "accumulator.m"
      *transform_hlds__accumulator__HeadVar__3_3 = base;
#line 1435 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__Call_6));
#line 1435 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__InstMap_7));
#line 1435 "accumulator.m"
    }
#line 1435 "accumulator.m"
  }
#line 1432 "accumulator.m"
}

#line 1417 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_related_5_p_0_3(
#line 1417 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1417 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1)
#line 1417 "accumulator.m"
{
#line 1417 "accumulator.m"
  {
#line 1417 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1417 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;

#line 1417 "accumulator.m"
    {
#line 1417 "accumulator.m"
      return transform_hlds__accumulator__succeeded = transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1417__1_1_p_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1));
    }
#line 1417 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1417 "accumulator.m"
  }
#line 1417 "accumulator.m"
}

#line 1399 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_related_5_p_0_1(
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 1399 "accumulator.m"
{
#line 1399 "accumulator.m"
  {
#line 1399 "accumulator.m"
    struct transform_hlds__accumulator__accu_related_5_p_0_2_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_related_5_p_0_2_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 1399 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_related_5_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_related_5_p_0_2_env_0__conv0_HeadVar__5_29));
#line 1399 "accumulator.m"
    {
#line 1399 "accumulator.m"
      ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_related_5_p_0_2_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_related_5_p_0_2_env_0__cont_env_ptr);
#line 1399 "accumulator.m"
      return;
    }
#line 1399 "accumulator.m"
  }
#line 1399 "accumulator.m"
}

#line 1399 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_related_5_p_0_2(
#line 1399 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1399 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1399 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1399 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 1399 "accumulator.m"
{
#line 1399 "accumulator.m"
  {
#line 1399 "accumulator.m"
    struct transform_hlds__accumulator__accu_related_5_p_0_2_env_0_s transform_hlds__accumulator__env;

#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_related_5_p_0_2_env_0__wrapper_arg_1 = transform_hlds__accumulator__wrapper_arg_1;
#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_related_5_p_0_2_env_0__cont = transform_hlds__accumulator__cont;
#line 1399 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_related_5_p_0_2_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 1399 "accumulator.m"
    {
#line 1399 "accumulator.m"
      MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;

#line 1399 "accumulator.m"
      {
#line 1399 "accumulator.m"
        transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1399__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 6))), &(transform_hlds__accumulator__env).transform_hlds__accumulator__accu_related_5_p_0_2_env_0__conv0_HeadVar__5_29, transform_hlds__accumulator__accu_related_5_p_0_1, &transform_hlds__accumulator__env);
      }
#line 1399 "accumulator.m"
    }
#line 1399 "accumulator.m"
  }
#line 1399 "accumulator.m"
}

#line 1395 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_related_5_p_0(
#line 1395 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_6,
#line 1395 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_7,
#line 1395 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_8,
#line 1395 "accumulator.m"
  MR_Word transform_hlds__accumulator__Var_9,
#line 1395 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Related_10)
#line 1395 "accumulator.m"
{
#line 1398 "accumulator.m"
  {
#line 1398 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1398 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_51_51;
#line 1398 "accumulator.m"
    MR_Word transform_hlds__accumulator__Ids_20;
#line 1398 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_28_28;

#line 1399 "accumulator.m"
    {
#line 1399 "accumulator.m"
      transform_hlds__accumulator__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1399 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_28_28, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[3]));
#line 1399 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_28_28, 1) = ((MR_Box) (transform_hlds__accumulator__accu_related_5_p_0_2));
#line 1399 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1399 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_28_28, 3) = ((MR_Box) (transform_hlds__accumulator__ModuleInfo_6));
#line 1399 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_28_28, 4) = ((MR_Box) (transform_hlds__accumulator__VarTypes_7));
#line 1399 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_28_28, 5) = ((MR_Box) (transform_hlds__accumulator__GoalStore_8));
#line 1399 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_28_28, 6) = ((MR_Box) (transform_hlds__accumulator__Var_9));
#line 1399 "accumulator.m"
    }
#line 11579 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1399 "accumulator.m"
    {
#line 1399 "accumulator.m"
      mercury__solutions__solutions_2_p_1(transform_hlds__accumulator__TypeCtorInfo_51_51, transform_hlds__accumulator__V_28_28, &transform_hlds__accumulator__Ids_20);
    }
#line 1413 "accumulator.m"
    if ((transform_hlds__accumulator__Ids_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1411 "accumulator.m"
      {
#line 1412 "accumulator.m"
        {
#line 1412 "accumulator.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.accu_related\'/5", (MR_String) "no Id");
#line 1412 "accumulator.m"
          return;
        }
#line 1411 "accumulator.m"
      }
#line 1413 "accumulator.m"
    else
#line 1413 "accumulator.m"
      {
#line 1413 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Ids_20, (MR_Integer) 1)));
#line 1413 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Ids_20, (MR_Integer) 0)));

#line 1413 "accumulator.m"
        if ((transform_hlds__accumulator__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1414 "accumulator.m"
          {
#line 1414 "accumulator.m"
            MR_Word transform_hlds__accumulator__Ancestors_22;
#line 1414 "accumulator.m"
            MR_Word transform_hlds__accumulator__RelatedList_24;
#line 1414 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_39_39;
#line 1414 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_42_42;

#line 1415 "accumulator.m"
            {
#line 1415 "accumulator.m"
              transform_hlds__goal_store__goal_store_all_ancestors_6_p_0(transform_hlds__accumulator__TypeCtorInfo_51_51, transform_hlds__accumulator__GoalStore_8, ((MR_Box) (transform_hlds__accumulator__V_54_54)), transform_hlds__accumulator__VarTypes_7, transform_hlds__accumulator__ModuleInfo_6, (MR_Integer) 0, &transform_hlds__accumulator__Ancestors_22);
            }
#line 1418 "accumulator.m"
            {
#line 1418 "accumulator.m"
              transform_hlds__accumulator__V_42_42 = mercury__set__insert_2_f_0(transform_hlds__accumulator__TypeCtorInfo_51_51, transform_hlds__accumulator__Ancestors_22, ((MR_Box) (transform_hlds__accumulator__V_54_54)));
            }
#line 1418 "accumulator.m"
            {
#line 1418 "accumulator.m"
              transform_hlds__accumulator__V_39_39 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_51_51, transform_hlds__accumulator__V_42_42);
            }
#line 1417 "accumulator.m"
            {
#line 1417 "accumulator.m"
              mercury__list__filter_3_p_0(transform_hlds__accumulator__TypeCtorInfo_51_51, (MR_Word) &transform_hlds__accumulator_scalar_common_2[5], transform_hlds__accumulator__V_39_39, &transform_hlds__accumulator__RelatedList_24);
            }
#line 1419 "accumulator.m"
            {
#line 1419 "accumulator.m"
              *transform_hlds__accumulator__Related_10 = mercury__set__list_to_set_1_f_0(transform_hlds__accumulator__TypeCtorInfo_51_51, transform_hlds__accumulator__RelatedList_24);
            }
#line 1414 "accumulator.m"
          }
#line 1413 "accumulator.m"
        else
#line 1421 "accumulator.m"
          {
#line 1422 "accumulator.m"
            {
#line 1422 "accumulator.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.accu_related\'/5", (MR_String) "more than one Id");
#line 1422 "accumulator.m"
              return;
            }
#line 1421 "accumulator.m"
          }
#line 1413 "accumulator.m"
      }
#line 1398 "accumulator.m"
  }
#line 1395 "accumulator.m"
}

#line 1380 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0_4(
#line 1380 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1380 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1380 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1380 "accumulator.m"
{
#line 1380 "accumulator.m"
  {
#line 1380 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1380 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv2_HeadVar__5_33;

#line 1380 "accumulator.m"
    {
#line 1380 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_divide_base_case__1380__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv2_HeadVar__5_33);
    }
#line 1380 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv2_HeadVar__5_33));
#line 1380 "accumulator.m"
  }
#line 1380 "accumulator.m"
}

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0_2(
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 1873 "accumulator.m"
{
#line 1873 "accumulator.m"
  {
#line 1873 "accumulator.m"
    struct transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 1873 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__conv1_HeadVar__2_9));
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__cont_env_ptr);
#line 1873 "accumulator.m"
      return;
    }
#line 1873 "accumulator.m"
  }
#line 1873 "accumulator.m"
}

#line 1873 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0_3(
#line 1873 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1873 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 1873 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 1873 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 1873 "accumulator.m"
{
#line 1873 "accumulator.m"
  {
#line 1873 "accumulator.m"
    struct transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0_s transform_hlds__accumulator__env;

#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__wrapper_arg_1 = transform_hlds__accumulator__wrapper_arg_1;
#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__cont = transform_hlds__accumulator__cont;
#line 1873 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;

#line 1873 "accumulator.m"
      {
#line 1873 "accumulator.m"
        transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1873__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), &(transform_hlds__accumulator__env).transform_hlds__accumulator__accu_divide_base_case_8_p_0_3_env_0__conv1_HeadVar__2_9, transform_hlds__accumulator__accu_divide_base_case_8_p_0_2, &transform_hlds__accumulator__env);
      }
#line 1873 "accumulator.m"
    }
#line 1873 "accumulator.m"
  }
#line 1873 "accumulator.m"
}

#line 1372 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0_1(
#line 1372 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1372 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1372 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1372 "accumulator.m"
{
#line 1372 "accumulator.m"
  {
#line 1372 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1372 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_Related_10;

#line 1372 "accumulator.m"
    {
#line 1372 "accumulator.m"
      transform_hlds__accumulator__accu_related_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv0_Related_10);
    }
#line 1372 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_Related_10));
#line 1372 "accumulator.m"
  }
#line 1372 "accumulator.m"
}

#line 1363 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_divide_base_case_8_p_0(
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_9,
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_10,
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_11,
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__UpdateOut_12,
#line 1363 "accumulator.m"
  MR_Word transform_hlds__accumulator__Out_13,
#line 1363 "accumulator.m"
  MR_Word * transform_hlds__accumulator__UpdateBase_14,
#line 1363 "accumulator.m"
  MR_Word * transform_hlds__accumulator__AssocBase_15,
#line 1363 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OtherBase_16)
#line 1363 "accumulator.m"
{
#line 1369 "accumulator.m"
  {
#line 1369 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_42_42 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_45_45;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_48_48;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__AssocOut_17;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateBaseList_18;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__AssocBaseList_19;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__Set_20;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__List_21;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__OtherBaseList_24;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_25_25;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_27_27;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_28_28;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_29_29;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_30_30;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_31_31;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_35_35;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_36_36;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_37_37;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_38_38;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_39_39;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_51_51;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_58_58;
#line 1369 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_65_65;

#line 1370 "accumulator.m"
    {
#line 1370 "accumulator.m"
      mercury__list__delete_elems_3_p_0(transform_hlds__accumulator__TypeInfo_42_42, transform_hlds__accumulator__Out_13, transform_hlds__accumulator__UpdateOut_12, &transform_hlds__accumulator__AssocOut_17);
    }
#line 1372 "accumulator.m"
    {
#line 1372 "accumulator.m"
      transform_hlds__accumulator__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_25_25, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[1]));
#line 1372 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_25_25, 1) = ((MR_Box) (transform_hlds__accumulator__accu_divide_base_case_8_p_0_1));
#line 1372 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1372 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_25_25, 3) = ((MR_Box) (transform_hlds__accumulator__ModuleInfo_9));
#line 1372 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_25_25, 4) = ((MR_Box) (transform_hlds__accumulator__VarTypes_10));
#line 1372 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_25_25, 5) = ((MR_Box) (transform_hlds__accumulator__C_11));
#line 1372 "accumulator.m"
    }
#line 11890 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeInfo_45_45 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[4];
#line 1372 "accumulator.m"
    {
#line 1372 "accumulator.m"
      mercury__list__map_3_p_0(transform_hlds__accumulator__TypeInfo_42_42, transform_hlds__accumulator__TypeInfo_45_45, transform_hlds__accumulator__V_25_25, transform_hlds__accumulator__UpdateOut_12, &transform_hlds__accumulator__UpdateBaseList_18);
    }
#line 1373 "accumulator.m"
    {
#line 1373 "accumulator.m"
      mercury__list__map_3_p_0(transform_hlds__accumulator__TypeInfo_42_42, transform_hlds__accumulator__TypeInfo_45_45, transform_hlds__accumulator__V_25_25, transform_hlds__accumulator__AssocOut_17, &transform_hlds__accumulator__AssocBaseList_19);
    }
#line 11902 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1374 "accumulator.m"
    {
#line 1374 "accumulator.m"
      transform_hlds__accumulator__V_27_27 = mercury__set__list_to_set_1_f_0(transform_hlds__accumulator__TypeInfo_45_45, transform_hlds__accumulator__UpdateBaseList_18);
    }
#line 1374 "accumulator.m"
    {
#line 1374 "accumulator.m"
      *transform_hlds__accumulator__UpdateBase_14 = mercury__set__power_union_1_f_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__V_27_27);
    }
#line 1375 "accumulator.m"
    {
#line 1375 "accumulator.m"
      transform_hlds__accumulator__V_28_28 = mercury__set__list_to_set_1_f_0(transform_hlds__accumulator__TypeInfo_45_45, transform_hlds__accumulator__AssocBaseList_19);
    }
#line 1375 "accumulator.m"
    {
#line 1375 "accumulator.m"
      *transform_hlds__accumulator__AssocBase_15 = mercury__set__power_union_1_f_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__V_28_28);
    }
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      transform_hlds__accumulator__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_58_58, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[3]));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_58_58, 1) = ((MR_Box) (transform_hlds__accumulator__accu_divide_base_case_8_p_0_3));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1873 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_58_58, 3) = ((MR_Box) (transform_hlds__accumulator__C_11));
#line 1873 "accumulator.m"
    }
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_58_58, &transform_hlds__accumulator__V_51_51);
    }
#line 1881 "accumulator.m"
    {
#line 1881 "accumulator.m"
      transform_hlds__accumulator__V_29_29 = mercury__set__list_to_set_1_f_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_51_51);
    }
#line 1377 "accumulator.m"
    {
#line 1377 "accumulator.m"
      transform_hlds__accumulator__V_30_30 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_48_48, *transform_hlds__accumulator__UpdateBase_14, *transform_hlds__accumulator__AssocBase_15);
    }
#line 1377 "accumulator.m"
    {
#line 1377 "accumulator.m"
      transform_hlds__accumulator__Set_20 = mercury__set__difference_2_f_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__V_29_29, transform_hlds__accumulator__V_30_30);
    }
#line 1378 "accumulator.m"
    {
#line 1378 "accumulator.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__Set_20, &transform_hlds__accumulator__List_21);
    }
#line 1380 "accumulator.m"
    {
#line 1380 "accumulator.m"
      transform_hlds__accumulator__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[2]));
#line 1380 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, 1) = ((MR_Box) (transform_hlds__accumulator__accu_divide_base_case_8_p_0_4));
#line 1380 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1380 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, 3) = ((MR_Box) (transform_hlds__accumulator__ModuleInfo_9));
#line 1380 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, 4) = ((MR_Box) (transform_hlds__accumulator__VarTypes_10));
#line 1380 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, 5) = ((MR_Box) (transform_hlds__accumulator__C_11));
#line 1380 "accumulator.m"
    }
#line 1380 "accumulator.m"
    {
#line 1380 "accumulator.m"
      mercury__list__map_3_p_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__TypeInfo_45_45, transform_hlds__accumulator__V_31_31, transform_hlds__accumulator__List_21, &transform_hlds__accumulator__OtherBaseList_24);
    }
#line 1386 "accumulator.m"
    {
#line 1386 "accumulator.m"
      transform_hlds__accumulator__V_35_35 = mercury__set__list_to_set_1_f_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__List_21);
    }
#line 1873 "accumulator.m"
    {
#line 1873 "accumulator.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_58_58, &transform_hlds__accumulator__V_65_65);
    }
#line 1881 "accumulator.m"
    {
#line 1881 "accumulator.m"
      transform_hlds__accumulator__V_37_37 = mercury__set__list_to_set_1_f_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_65_65);
    }
#line 1388 "accumulator.m"
    {
#line 1388 "accumulator.m"
      transform_hlds__accumulator__V_39_39 = mercury__set__list_to_set_1_f_0(transform_hlds__accumulator__TypeInfo_45_45, transform_hlds__accumulator__OtherBaseList_24);
    }
#line 1388 "accumulator.m"
    {
#line 1388 "accumulator.m"
      transform_hlds__accumulator__V_38_38 = mercury__set__power_union_1_f_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__V_39_39);
    }
#line 1387 "accumulator.m"
    {
#line 1387 "accumulator.m"
      transform_hlds__accumulator__V_36_36 = mercury__set__intersect_2_f_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__V_37_37, transform_hlds__accumulator__V_38_38);
    }
#line 1386 "accumulator.m"
    {
#line 1386 "accumulator.m"
      *transform_hlds__accumulator__OtherBase_16 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_48_48, transform_hlds__accumulator__V_35_35, transform_hlds__accumulator__V_36_36);
    }
#line 1369 "accumulator.m"
  }
#line 1363 "accumulator.m"
}

#line 1303 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_process_update_set_13_p_0(
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_4,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Substs_6,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_7,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_8,
#line 1303 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_9,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_10,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__11_11,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__12_12,
#line 1303 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__13_13)
#line 1303 "accumulator.m"
{
#line 1309 "accumulator.m"
  {
#line 1309 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 1309 "accumulator.m"
    if ((transform_hlds__accumulator__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1309 "accumulator.m"
      {
#line 1310 "accumulator.m"
        *transform_hlds__accumulator__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1310 "accumulator.m"
        *transform_hlds__accumulator__HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1310 "accumulator.m"
        *transform_hlds__accumulator__HeadVar__13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1310 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_VarTypes_10 = transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_9;
#line 1310 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_VarSet_8 = transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_7;
#line 1309 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_Substs_6 = transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5;
#line 1309 "accumulator.m"
        transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1309 "accumulator.m"
      }
#line 1309 "accumulator.m"
    else
#line 1312 "accumulator.m"
      {
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_90_90;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_91_91;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__Id_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__Ids_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__AccVarSubst0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5, (MR_Integer) 0)));
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__RecCallSubst0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5, (MR_Integer) 1)));
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__AssocCallSubst_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5, (MR_Integer) 2)));
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__UpdateSubst0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5, (MR_Integer) 3)));
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__Goal_41;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__PredId_43;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__Args_45;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__StateVarA_50;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__StateVarB_51;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__StateInputVar_52;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__StateOutputVar_53;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__Acc0_54;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__Acc_55;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__UpdateSubst1_56;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__UpdateSubst_57;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__RecCallSubst_58;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__AccVarSubst_59;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__StateOutputVars0_60;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__Accs0_61;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__BasePairs0_62;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_69_69;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_70_70;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_71_71;
#line 1312 "accumulator.m"
        MR_String transform_hlds__accumulator__V_72_72;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_73_73;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_74_74;
#line 1312 "accumulator.m"
        MR_String transform_hlds__accumulator__V_75_75;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_76_76;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_77_77;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_Substs_78_78;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_82_82;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_83_83;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_84_84;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_85_85;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_86_86;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_87_87;
#line 1312 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_88_88;
#line 1315 "accumulator.m"
        MR_Word transform_hlds__accumulator___InstMap_42;
#line 1317 "accumulator.m"
        MR_Word transform_hlds__accumulator___GoalInfo_49;
#line 1317 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_44_44;
#line 1317 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_46_46;
#line 1317 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_47_47;
#line 1317 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_48_48;
#line 1320 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_89_89;

#line 1315 "accumulator.m"
        {
#line 1315 "accumulator.m"
          transform_hlds__accumulator__lookup_call_3_p_0(transform_hlds__accumulator__HeadVar__2_2, transform_hlds__accumulator__Id_28, &transform_hlds__accumulator__V_69_69);
        }
#line 1315 "accumulator.m"
        transform_hlds__accumulator__Goal_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_69_69, (MR_Integer) 0)));
#line 1315 "accumulator.m"
        transform_hlds__accumulator___InstMap_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_69_69, (MR_Integer) 1)));
#line 1317 "accumulator.m"
        transform_hlds__accumulator__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_41, (MR_Integer) 0)));
#line 1317 "accumulator.m"
        transform_hlds__accumulator___GoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_41, (MR_Integer) 1)));
#line 1317 "accumulator.m"
        transform_hlds__accumulator__PredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_70_70, (MR_Integer) 0)));
#line 1317 "accumulator.m"
        transform_hlds__accumulator__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_70_70, (MR_Integer) 1)));
#line 1317 "accumulator.m"
        transform_hlds__accumulator__Args_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_70_70, (MR_Integer) 2)));
#line 1317 "accumulator.m"
        transform_hlds__accumulator__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_70_70, (MR_Integer) 3)));
#line 1317 "accumulator.m"
        transform_hlds__accumulator__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_70_70, (MR_Integer) 4)));
#line 1317 "accumulator.m"
        transform_hlds__accumulator__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_70_70, (MR_Integer) 5)));
#line 1318 "accumulator.m"
        {
#line 1318 "accumulator.m"
          transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_is_update_4_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__PredId_43, transform_hlds__accumulator__Args_45, &transform_hlds__accumulator__V_71_71);
        }
#line 1312 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1312 "accumulator.m"
          {
#line 1318 "accumulator.m"
            transform_hlds__accumulator__StateVarA_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_71_71, (MR_Integer) 0)));
#line 1318 "accumulator.m"
            transform_hlds__accumulator__StateVarB_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_71_71, (MR_Integer) 1)));
#line 12221 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1320 "accumulator.m"
            {
#line 1320 "accumulator.m"
              transform_hlds__accumulator__succeeded = parse_tree__set_of_var__member_2_p_0(transform_hlds__accumulator__TypeCtorInfo_89_89, transform_hlds__accumulator__HeadVar__4_4, transform_hlds__accumulator__StateVarA_50);
            }
#line 1323 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1321 "accumulator.m"
              {
#line 1321 "accumulator.m"
                transform_hlds__accumulator__StateInputVar_52 = transform_hlds__accumulator__StateVarA_50;
#line 1322 "accumulator.m"
                transform_hlds__accumulator__StateOutputVar_53 = transform_hlds__accumulator__StateVarB_51;
#line 1321 "accumulator.m"
              }
#line 1323 "accumulator.m"
            else
#line 1324 "accumulator.m"
              {
#line 1324 "accumulator.m"
                transform_hlds__accumulator__StateInputVar_52 = transform_hlds__accumulator__StateVarB_51;
#line 1325 "accumulator.m"
                transform_hlds__accumulator__StateOutputVar_53 = transform_hlds__accumulator__StateVarA_50;
#line 1324 "accumulator.m"
              }
#line 1328 "accumulator.m"
            transform_hlds__accumulator__V_72_72 = (MR_String) "Acc_";
#line 1328 "accumulator.m"
            {
#line 1328 "accumulator.m"
              transform_hlds__accumulator__create_new_var_7_p_0(transform_hlds__accumulator__StateInputVar_52, transform_hlds__accumulator__V_72_72, &transform_hlds__accumulator__Acc0_54, transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_7, &transform_hlds__accumulator__STATE_VARIABLE_VarSet_73_73, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_9, &transform_hlds__accumulator__STATE_VARIABLE_VarTypes_74_74);
            }
#line 1329 "accumulator.m"
            transform_hlds__accumulator__V_75_75 = (MR_String) "Acc_";
#line 1329 "accumulator.m"
            {
#line 1329 "accumulator.m"
              transform_hlds__accumulator__create_new_var_7_p_0(transform_hlds__accumulator__StateOutputVar_53, transform_hlds__accumulator__V_75_75, &transform_hlds__accumulator__Acc_55, transform_hlds__accumulator__STATE_VARIABLE_VarSet_73_73, &transform_hlds__accumulator__STATE_VARIABLE_VarSet_76_76, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_74_74, &transform_hlds__accumulator__STATE_VARIABLE_VarTypes_77_77);
            }
#line 12262 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeInfo_90_90 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1331 "accumulator.m"
            {
#line 1331 "accumulator.m"
              mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_90_90, transform_hlds__accumulator__TypeInfo_90_90, ((MR_Box) (transform_hlds__accumulator__StateInputVar_52)), ((MR_Box) (transform_hlds__accumulator__Acc0_54)), transform_hlds__accumulator__UpdateSubst0_40, &transform_hlds__accumulator__UpdateSubst1_56);
            }
#line 1332 "accumulator.m"
            {
#line 1332 "accumulator.m"
              mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_90_90, transform_hlds__accumulator__TypeInfo_90_90, ((MR_Box) (transform_hlds__accumulator__StateOutputVar_53)), ((MR_Box) (transform_hlds__accumulator__Acc_55)), transform_hlds__accumulator__UpdateSubst1_56, &transform_hlds__accumulator__UpdateSubst_57);
            }
#line 1333 "accumulator.m"
            {
#line 1333 "accumulator.m"
              mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_90_90, transform_hlds__accumulator__TypeInfo_90_90, ((MR_Box) (transform_hlds__accumulator__StateInputVar_52)), ((MR_Box) (transform_hlds__accumulator__StateOutputVar_53)), transform_hlds__accumulator__RecCallSubst0_38, &transform_hlds__accumulator__RecCallSubst_58);
            }
#line 1334 "accumulator.m"
            {
#line 1334 "accumulator.m"
              mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_90_90, transform_hlds__accumulator__TypeInfo_90_90, ((MR_Box) (transform_hlds__accumulator__Acc_55)), ((MR_Box) (transform_hlds__accumulator__Acc0_54)), transform_hlds__accumulator__AccVarSubst0_37, &transform_hlds__accumulator__AccVarSubst_59);
            }
#line 1335 "accumulator.m"
            {
#line 1335 "accumulator.m"
              transform_hlds__accumulator__STATE_VARIABLE_Substs_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1335 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_78_78, 0) = ((MR_Box) (transform_hlds__accumulator__AccVarSubst_59));
#line 1335 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_78_78, 1) = ((MR_Box) (transform_hlds__accumulator__RecCallSubst_58));
#line 1335 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_78_78, 2) = ((MR_Box) (transform_hlds__accumulator__AssocCallSubst_39));
#line 1335 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_78_78, 3) = ((MR_Box) (transform_hlds__accumulator__UpdateSubst_57));
#line 1335 "accumulator.m"
            }
#line 1338 "accumulator.m"
            {
#line 1338 "accumulator.m"
              transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_process_update_set_13_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__HeadVar__2_2, transform_hlds__accumulator__Ids_29, transform_hlds__accumulator__HeadVar__4_4, transform_hlds__accumulator__STATE_VARIABLE_Substs_78_78, transform_hlds__accumulator__STATE_VARIABLE_Substs_6, transform_hlds__accumulator__STATE_VARIABLE_VarSet_76_76, transform_hlds__accumulator__STATE_VARIABLE_VarSet_8, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_77_77, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_10, &transform_hlds__accumulator__StateOutputVars0_60, &transform_hlds__accumulator__Accs0_61, &transform_hlds__accumulator__BasePairs0_62);
            }
#line 1312 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1312 "accumulator.m"
              {
#line 1347 "accumulator.m"
                transform_hlds__accumulator__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1347 "accumulator.m"
                {
#line 1347 "accumulator.m"
                  transform_hlds__accumulator__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "accumulator.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_82_82, 0) = ((MR_Box) (transform_hlds__accumulator__StateOutputVar_53));
#line 1347 "accumulator.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_82_82, 1) = ((MR_Box) (transform_hlds__accumulator__V_83_83));
#line 1347 "accumulator.m"
                }
#line 1347 "accumulator.m"
                {
#line 1347 "accumulator.m"
                  *transform_hlds__accumulator__HeadVar__11_11 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeInfo_90_90, transform_hlds__accumulator__StateOutputVars0_60, transform_hlds__accumulator__V_82_82);
                }
#line 1348 "accumulator.m"
                transform_hlds__accumulator__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "accumulator.m"
                {
#line 1348 "accumulator.m"
                  transform_hlds__accumulator__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "accumulator.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_84_84, 0) = ((MR_Box) (transform_hlds__accumulator__Acc_55));
#line 1348 "accumulator.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_84_84, 1) = ((MR_Box) (transform_hlds__accumulator__V_85_85));
#line 1348 "accumulator.m"
                }
#line 1348 "accumulator.m"
                {
#line 1348 "accumulator.m"
                  *transform_hlds__accumulator__HeadVar__12_12 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeInfo_90_90, transform_hlds__accumulator__Accs0_61, transform_hlds__accumulator__V_84_84);
                }
#line 12341 "transform_hlds.accumulator.c"
                transform_hlds__accumulator__TypeInfo_91_91 = (MR_Word) &transform_hlds__accumulator_scalar_common_2[0];
#line 1349 "accumulator.m"
                transform_hlds__accumulator__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1349 "accumulator.m"
                {
#line 1349 "accumulator.m"
                  transform_hlds__accumulator__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1349 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_87_87, 0) = ((MR_Box) (transform_hlds__accumulator__StateOutputVar_53));
#line 1349 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_87_87, 1) = ((MR_Box) (transform_hlds__accumulator__Acc0_54));
#line 1349 "accumulator.m"
                }
#line 1349 "accumulator.m"
                {
#line 1349 "accumulator.m"
                  transform_hlds__accumulator__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "accumulator.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_86_86, 0) = ((MR_Box) (transform_hlds__accumulator__V_87_87));
#line 1349 "accumulator.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_86_86, 1) = ((MR_Box) (transform_hlds__accumulator__V_88_88));
#line 1349 "accumulator.m"
                }
#line 1349 "accumulator.m"
                {
#line 1349 "accumulator.m"
                  *transform_hlds__accumulator__HeadVar__13_13 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeInfo_91_91, transform_hlds__accumulator__BasePairs0_62, transform_hlds__accumulator__V_86_86);
                }
#line 1349 "accumulator.m"
                transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1312 "accumulator.m"
              }
#line 1312 "accumulator.m"
          }
#line 1312 "accumulator.m"
      }
#line 1309 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1309 "accumulator.m"
  }
#line 1303 "accumulator.m"
}

#line 1289 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_heuristic_5_p_0(
#line 1289 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1289 "accumulator.m"
  MR_String transform_hlds__accumulator__HeadVar__2_2,
#line 1289 "accumulator.m"
  MR_Integer transform_hlds__accumulator__HeadVar__3_3,
#line 1289 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_4,
#line 1289 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Set_10)
#line 1289 "accumulator.m"
{
#line 1293 "accumulator.m"
  {
#line 1293 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded = (strcmp(transform_hlds__accumulator__HeadVar__2_2, (MR_String) "append") == 0);
#line 1293 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_16_16;
#line 1293 "accumulator.m"
    MR_Word transform_hlds__accumulator__A_7;
#line 1293 "accumulator.m"
    MR_String transform_hlds__accumulator__V_11_11;
#line 1293 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_12_12;
#line 1293 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_13_13;
#line 1293 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_14_14;
#line 1293 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_15_15;
#line 1292 "accumulator.m"
    MR_Word transform_hlds__accumulator___Typeinfo_6;
#line 1292 "accumulator.m"
    MR_Word transform_hlds__accumulator___B_8;
#line 1292 "accumulator.m"
    MR_Word transform_hlds__accumulator___C_9;

#line 1293 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1293 "accumulator.m"
      {
#line 1292 "accumulator.m"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__HeadVar__3_3 == (MR_Integer) 3);
#line 1293 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1293 "accumulator.m"
          {
#line 1292 "accumulator.m"
            transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1292 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1292 "accumulator.m"
              {
#line 1292 "accumulator.m"
                transform_hlds__accumulator__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 1292 "accumulator.m"
                transform_hlds__accumulator__succeeded = (strcmp(transform_hlds__accumulator__V_11_11, (MR_String) "list") == 0);
#line 1293 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 1293 "accumulator.m"
                  {
#line 1292 "accumulator.m"
                    transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1292 "accumulator.m"
                    if (transform_hlds__accumulator__succeeded)
#line 1292 "accumulator.m"
                      {
#line 1292 "accumulator.m"
                        transform_hlds__accumulator___Typeinfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__4_4, (MR_Integer) 0)));
#line 1292 "accumulator.m"
                        transform_hlds__accumulator__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__4_4, (MR_Integer) 1)));
#line 1292 "accumulator.m"
                        transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1292 "accumulator.m"
                        if (transform_hlds__accumulator__succeeded)
#line 1292 "accumulator.m"
                          {
#line 1292 "accumulator.m"
                            transform_hlds__accumulator__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_12_12, (MR_Integer) 0)));
#line 1292 "accumulator.m"
                            transform_hlds__accumulator__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_12_12, (MR_Integer) 1)));
#line 1292 "accumulator.m"
                            transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 1292 "accumulator.m"
                            if (transform_hlds__accumulator__succeeded)
#line 1292 "accumulator.m"
                              {
#line 1292 "accumulator.m"
                                transform_hlds__accumulator___B_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_13_13, (MR_Integer) 0)));
#line 1292 "accumulator.m"
                                transform_hlds__accumulator__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_13_13, (MR_Integer) 1)));
#line 1292 "accumulator.m"
                                transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1292 "accumulator.m"
                                if (transform_hlds__accumulator__succeeded)
#line 1292 "accumulator.m"
                                  {
#line 1292 "accumulator.m"
                                    transform_hlds__accumulator___C_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_14_14, (MR_Integer) 0)));
#line 1292 "accumulator.m"
                                    transform_hlds__accumulator__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_14_14, (MR_Integer) 1)));
#line 1292 "accumulator.m"
                                    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1293 "accumulator.m"
                                    if (transform_hlds__accumulator__succeeded)
#line 1293 "accumulator.m"
                                      {
#line 12495 "transform_hlds.accumulator.c"
                                        transform_hlds__accumulator__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1294 "accumulator.m"
                                        {
#line 1294 "accumulator.m"
                                          parse_tree__set_of_var__make_singleton_2_p_0(transform_hlds__accumulator__TypeCtorInfo_16_16, transform_hlds__accumulator__A_7, transform_hlds__accumulator__Set_10);
                                        }
#line 1294 "accumulator.m"
                                        transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1293 "accumulator.m"
                                      }
#line 1292 "accumulator.m"
                                  }
#line 1292 "accumulator.m"
                              }
#line 1292 "accumulator.m"
                          }
#line 1292 "accumulator.m"
                      }
#line 1293 "accumulator.m"
                  }
#line 1292 "accumulator.m"
              }
#line 1293 "accumulator.m"
          }
#line 1293 "accumulator.m"
      }
#line 1293 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1293 "accumulator.m"
  }
#line 1289 "accumulator.m"
}

#line 1282 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_has_heuristic_3_p_0(
#line 1282 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1282 "accumulator.m"
  MR_String transform_hlds__accumulator__HeadVar__2_2,
#line 1282 "accumulator.m"
  MR_Integer transform_hlds__accumulator__HeadVar__3_3)
#line 1282 "accumulator.m"
{
#line 1284 "accumulator.m"
  {
#line 1284 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1284 "accumulator.m"
    MR_String transform_hlds__accumulator__V_4_4;

#line 1284 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1284 "accumulator.m"
      {
#line 1284 "accumulator.m"
        transform_hlds__accumulator__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 1284 "accumulator.m"
        transform_hlds__accumulator__succeeded = (strcmp(transform_hlds__accumulator__V_4_4, (MR_String) "list") == 0);
#line 1284 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1284 "accumulator.m"
          {
#line 1284 "accumulator.m"
            transform_hlds__accumulator__succeeded = (strcmp(transform_hlds__accumulator__HeadVar__2_2, (MR_String) "append") == 0);
#line 1284 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1284 "accumulator.m"
              transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__HeadVar__3_3 == (MR_Integer) 3);
#line 1284 "accumulator.m"
          }
#line 1284 "accumulator.m"
      }
#line 1284 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1284 "accumulator.m"
  }
#line 1282 "accumulator.m"
}

#line 1208 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_process_assoc_set_12_p_0(
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__4_4,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Substs_6,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_7,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_8,
#line 1208 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_9,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_10,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__CS_11,
#line 1208 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__12_12)
#line 1208 "accumulator.m"
{
#line 1215 "accumulator.m"
  {
#line 1215 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 1215 "accumulator.m"
    if ((transform_hlds__accumulator__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1215 "accumulator.m"
      {
#line 1215 "accumulator.m"
        *transform_hlds__accumulator__HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1216 "accumulator.m"
        {
#line 1216 "accumulator.m"
          transform_hlds__goal_store__goal_store_init_1_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__CS_11);
        }
#line 1215 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_VarTypes_10 = transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_9;
#line 1215 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_VarSet_8 = transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_7;
#line 1214 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_Substs_6 = transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5;
#line 1215 "accumulator.m"
        transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1215 "accumulator.m"
      }
#line 1215 "accumulator.m"
    else
#line 1218 "accumulator.m"
      {
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_103_103;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_104_104;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_105_105;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_106_106;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__Id_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__Ids_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__AccVarSubst_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5, (MR_Integer) 0)));
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__RecCallSubst0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5, (MR_Integer) 1)));
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__AssocCallSubst0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5, (MR_Integer) 2)));
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__UpdateSubst_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_0_5, (MR_Integer) 3)));
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__Goal_40;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__InstMap_41;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__PredId_42;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__Args_44;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__GoalInfo_48;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__AssocInfo_49;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__Vars_50;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__AssocOutput_51;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__IsCommutative_52;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__OutPrimeVars_53;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__DuringAssocVar_54;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__BeforeAssocVar_55;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__AccVar_56;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__NewAcc_57;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__AssocCallSubst1_58;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__AssocCallSubst_59;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__RecCallSubst1_60;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__RecCallSubst_61;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__CSGoal_62;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__CurWarnings_63;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__CS0_74;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__Warnings0_75;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_82_82;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_83_83;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_84_84;
#line 1218 "accumulator.m"
        MR_String transform_hlds__accumulator__V_85_85;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_86_86;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_87_87;
#line 1218 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_Substs_88_88;
#line 1224 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_43_43;
#line 1224 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_45_45;
#line 1224 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_46_46;
#line 1224 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_47_47;
#line 1232 "accumulator.m"
        MR_Box transform_hlds__accumulator__conv0_AccVar_56;

#line 1222 "accumulator.m"
        {
#line 1222 "accumulator.m"
          transform_hlds__accumulator__lookup_call_3_p_0(transform_hlds__accumulator__HeadVar__2_2, transform_hlds__accumulator__Id_28, &transform_hlds__accumulator__V_82_82);
        }
#line 1222 "accumulator.m"
        transform_hlds__accumulator__Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, (MR_Integer) 0)));
#line 1222 "accumulator.m"
        transform_hlds__accumulator__InstMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_82_82, (MR_Integer) 1)));
#line 1224 "accumulator.m"
        transform_hlds__accumulator__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_40, (MR_Integer) 0)));
#line 1224 "accumulator.m"
        transform_hlds__accumulator__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_40, (MR_Integer) 1)));
#line 1224 "accumulator.m"
        transform_hlds__accumulator__PredId_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_83_83, (MR_Integer) 0)));
#line 1224 "accumulator.m"
        transform_hlds__accumulator__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_83_83, (MR_Integer) 1)));
#line 1224 "accumulator.m"
        transform_hlds__accumulator__Args_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_83_83, (MR_Integer) 2)));
#line 1224 "accumulator.m"
        transform_hlds__accumulator__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_83_83, (MR_Integer) 3)));
#line 1224 "accumulator.m"
        transform_hlds__accumulator__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_83_83, (MR_Integer) 4)));
#line 1224 "accumulator.m"
        transform_hlds__accumulator__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_83_83, (MR_Integer) 5)));
#line 1225 "accumulator.m"
        {
#line 1225 "accumulator.m"
          transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_is_associative_4_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__PredId_42, transform_hlds__accumulator__Args_44, &transform_hlds__accumulator__AssocInfo_49);
        }
#line 1218 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1218 "accumulator.m"
          {
#line 1226 "accumulator.m"
            transform_hlds__accumulator__Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__AssocInfo_49, (MR_Integer) 0)));
#line 1226 "accumulator.m"
            transform_hlds__accumulator__AssocOutput_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__AssocInfo_49, (MR_Integer) 1)));
#line 1226 "accumulator.m"
            transform_hlds__accumulator__IsCommutative_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__AssocInfo_49, (MR_Integer) 2)));
#line 12764 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeCtorInfo_103_103 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1227 "accumulator.m"
            {
#line 1227 "accumulator.m"
              transform_hlds__accumulator__OutPrimeVars_53 = parse_tree__set_of_var__intersect_2_f_0(transform_hlds__accumulator__TypeCtorInfo_103_103, transform_hlds__accumulator__Vars_50, transform_hlds__accumulator__HeadVar__4_4);
            }
#line 1228 "accumulator.m"
            {
#line 1228 "accumulator.m"
              transform_hlds__accumulator__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(transform_hlds__accumulator__TypeCtorInfo_103_103, transform_hlds__accumulator__OutPrimeVars_53, &transform_hlds__accumulator__DuringAssocVar_54);
            }
#line 1218 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1218 "accumulator.m"
              {
#line 1229 "accumulator.m"
                {
#line 1229 "accumulator.m"
                  transform_hlds__accumulator__V_84_84 = parse_tree__set_of_var__difference_2_f_0(transform_hlds__accumulator__TypeCtorInfo_103_103, transform_hlds__accumulator__Vars_50, transform_hlds__accumulator__OutPrimeVars_53);
                }
#line 1229 "accumulator.m"
                {
#line 1229 "accumulator.m"
                  transform_hlds__accumulator__succeeded = parse_tree__set_of_var__is_singleton_2_p_0(transform_hlds__accumulator__TypeCtorInfo_103_103, transform_hlds__accumulator__V_84_84, &transform_hlds__accumulator__BeforeAssocVar_55);
                }
#line 1218 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 1218 "accumulator.m"
                  {
#line 12794 "transform_hlds.accumulator.c"
                    transform_hlds__accumulator__TypeInfo_104_104 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1232 "accumulator.m"
                    {
#line 1232 "accumulator.m"
                      mercury__map__lookup_3_p_0(transform_hlds__accumulator__TypeInfo_104_104, transform_hlds__accumulator__TypeInfo_104_104, transform_hlds__accumulator__AccVarSubst_36, ((MR_Box) (transform_hlds__accumulator__BeforeAssocVar_55)), &transform_hlds__accumulator__conv0_AccVar_56);
                    }
#line 1232 "accumulator.m"
                    transform_hlds__accumulator__AccVar_56 = ((MR_Word) transform_hlds__accumulator__conv0_AccVar_56);
#line 1233 "accumulator.m"
                    transform_hlds__accumulator__V_85_85 = (MR_String) "NewAcc_";
#line 1233 "accumulator.m"
                    {
#line 1233 "accumulator.m"
                      transform_hlds__accumulator__create_new_var_7_p_0(transform_hlds__accumulator__BeforeAssocVar_55, transform_hlds__accumulator__V_85_85, &transform_hlds__accumulator__NewAcc_57, transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_7, &transform_hlds__accumulator__STATE_VARIABLE_VarSet_86_86, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_9, &transform_hlds__accumulator__STATE_VARIABLE_VarTypes_87_87);
                    }
#line 1235 "accumulator.m"
                    {
#line 1235 "accumulator.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_104_104, transform_hlds__accumulator__TypeInfo_104_104, ((MR_Box) (transform_hlds__accumulator__DuringAssocVar_54)), ((MR_Box) (transform_hlds__accumulator__AccVar_56)), transform_hlds__accumulator__AssocCallSubst0_38, &transform_hlds__accumulator__AssocCallSubst1_58);
                    }
#line 1236 "accumulator.m"
                    {
#line 1236 "accumulator.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_104_104, transform_hlds__accumulator__TypeInfo_104_104, ((MR_Box) (transform_hlds__accumulator__AssocOutput_51)), ((MR_Box) (transform_hlds__accumulator__NewAcc_57)), transform_hlds__accumulator__AssocCallSubst1_58, &transform_hlds__accumulator__AssocCallSubst_59);
                    }
#line 1237 "accumulator.m"
                    {
#line 1237 "accumulator.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_104_104, transform_hlds__accumulator__TypeInfo_104_104, ((MR_Box) (transform_hlds__accumulator__DuringAssocVar_54)), ((MR_Box) (transform_hlds__accumulator__AssocOutput_51)), transform_hlds__accumulator__RecCallSubst0_37, &transform_hlds__accumulator__RecCallSubst1_60);
                    }
#line 1238 "accumulator.m"
                    {
#line 1238 "accumulator.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_104_104, transform_hlds__accumulator__TypeInfo_104_104, ((MR_Box) (transform_hlds__accumulator__BeforeAssocVar_55)), ((MR_Box) (transform_hlds__accumulator__NewAcc_57)), transform_hlds__accumulator__RecCallSubst1_60, &transform_hlds__accumulator__RecCallSubst_61);
                    }
#line 1240 "accumulator.m"
                    {
#line 1240 "accumulator.m"
                      transform_hlds__accumulator__STATE_VARIABLE_Substs_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_88_88, 0) = ((MR_Box) (transform_hlds__accumulator__AccVarSubst_36));
#line 1240 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_88_88, 1) = ((MR_Box) (transform_hlds__accumulator__RecCallSubst_61));
#line 1240 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_88_88, 2) = ((MR_Box) (transform_hlds__accumulator__AssocCallSubst_59));
#line 1240 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Substs_88_88, 3) = ((MR_Box) (transform_hlds__accumulator__UpdateSubst_39));
#line 1240 "accumulator.m"
                    }
#line 1249 "accumulator.m"
#line 1249 "accumulator.m"
                    switch (transform_hlds__accumulator__IsCommutative_52) {
#line 1249 "accumulator.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1249 "accumulator.m"
                      case (MR_Integer) 0:
#line 1250 "accumulator.m"
                        {
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__TypeInfo_108_108;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__PredInfo_64;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__ModuleName_65;
#line 1250 "accumulator.m"
                          MR_String transform_hlds__accumulator__PredName_66;
#line 1250 "accumulator.m"
                          MR_Integer transform_hlds__accumulator__Arity_67;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__A_70;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__B_71;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__Subst_72;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__SwappedGoal_73;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_91_91;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_92_92;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_93_93;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_94_94;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_95_95;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_96_96;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_97_97;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_98_98;
#line 1250 "accumulator.m"
                          MR_Word transform_hlds__accumulator__V_107_107;

#line 1253 "accumulator.m"
                          {
#line 1253 "accumulator.m"
                            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__PredId_42, &transform_hlds__accumulator__PredInfo_64);
                          }
#line 1254 "accumulator.m"
                          {
#line 1254 "accumulator.m"
                            transform_hlds__accumulator__ModuleName_65 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__accumulator__PredInfo_64);
                          }
#line 1255 "accumulator.m"
                          {
#line 1255 "accumulator.m"
                            transform_hlds__accumulator__PredName_66 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__accumulator__PredInfo_64);
                          }
#line 1256 "accumulator.m"
                          {
#line 1256 "accumulator.m"
                            transform_hlds__accumulator__Arity_67 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__accumulator__PredInfo_64);
                          }
#line 1257 "accumulator.m"
                          {
#line 1257 "accumulator.m"
                            transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_has_heuristic_3_p_0(transform_hlds__accumulator__ModuleName_65, transform_hlds__accumulator__PredName_66, transform_hlds__accumulator__Arity_67);
                          }
#line 1265 "accumulator.m"
                          if (transform_hlds__accumulator__succeeded)
#line 1262 "accumulator.m"
                            {
#line 1262 "accumulator.m"
                              MR_Word transform_hlds__accumulator__PossibleDuringAssocVars_68;

#line 1261 "accumulator.m"
                              {
#line 1261 "accumulator.m"
                                transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_heuristic_5_p_0(transform_hlds__accumulator__ModuleName_65, transform_hlds__accumulator__PredName_66, transform_hlds__accumulator__Arity_67, transform_hlds__accumulator__Args_44, &transform_hlds__accumulator__PossibleDuringAssocVars_68);
                              }
#line 1262 "accumulator.m"
                              if (transform_hlds__accumulator__succeeded)
#line 1262 "accumulator.m"
                                {
#line 1263 "accumulator.m"
                                  {
#line 1263 "accumulator.m"
                                    transform_hlds__accumulator__succeeded = parse_tree__set_of_var__member_2_p_0(transform_hlds__accumulator__TypeCtorInfo_103_103, transform_hlds__accumulator__PossibleDuringAssocVars_68, transform_hlds__accumulator__DuringAssocVar_54);
                                  }
#line 1262 "accumulator.m"
                                  if (transform_hlds__accumulator__succeeded)
#line 1262 "accumulator.m"
                                    {
#line 1264 "accumulator.m"
                                      transform_hlds__accumulator__CurWarnings_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1264 "accumulator.m"
                                      transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1262 "accumulator.m"
                                    }
#line 1262 "accumulator.m"
                                }
#line 1262 "accumulator.m"
                            }
#line 1265 "accumulator.m"
                          else
#line 1266 "accumulator.m"
                            {
#line 1266 "accumulator.m"
                              MR_Word transform_hlds__accumulator__ProgContext_69;
#line 1266 "accumulator.m"
                              MR_Word transform_hlds__accumulator__V_89_89;

#line 1266 "accumulator.m"
                              {
#line 1266 "accumulator.m"
                                transform_hlds__accumulator__ProgContext_69 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__accumulator__GoalInfo_48);
                              }
#line 1267 "accumulator.m"
                              {
#line 1267 "accumulator.m"
                                transform_hlds__accumulator__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "accumulator.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_89_89, 0) = ((MR_Box) (transform_hlds__accumulator__ProgContext_69));
#line 1267 "accumulator.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_89_89, 1) = ((MR_Box) (transform_hlds__accumulator__PredId_42));
#line 1267 "accumulator.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_89_89, 2) = ((MR_Box) (transform_hlds__accumulator__BeforeAssocVar_55));
#line 1267 "accumulator.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_89_89, 3) = ((MR_Box) (transform_hlds__accumulator__DuringAssocVar_54));
#line 1267 "accumulator.m"
                              }
#line 1268 "accumulator.m"
                              {
#line 1268 "accumulator.m"
                                transform_hlds__accumulator__CurWarnings_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "accumulator.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__CurWarnings_63, 0) = ((MR_Box) (transform_hlds__accumulator__V_89_89));
#line 1268 "accumulator.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__accumulator__CurWarnings_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1268 "accumulator.m"
                              }
#line 1266 "accumulator.m"
                              transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1266 "accumulator.m"
                            }
#line 1250 "accumulator.m"
                          if (transform_hlds__accumulator__succeeded)
#line 1250 "accumulator.m"
                            {
#line 1271 "accumulator.m"
                              transform_hlds__accumulator__V_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1271 "accumulator.m"
                              {
#line 1271 "accumulator.m"
                                transform_hlds__accumulator__V_91_91 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_103_103, transform_hlds__accumulator__Vars_50);
                              }
#line 1271 "accumulator.m"
                              transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_91_91)) == (MR_mktag((MR_Integer) 1)));
#line 1271 "accumulator.m"
                              if (transform_hlds__accumulator__succeeded)
#line 1271 "accumulator.m"
                                {
#line 1271 "accumulator.m"
                                  transform_hlds__accumulator__A_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_91_91, (MR_Integer) 0)));
#line 1271 "accumulator.m"
                                  transform_hlds__accumulator__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_91_91, (MR_Integer) 1)));
#line 1271 "accumulator.m"
                                  transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 1271 "accumulator.m"
                                  if (transform_hlds__accumulator__succeeded)
#line 1271 "accumulator.m"
                                    {
#line 1271 "accumulator.m"
                                      transform_hlds__accumulator__B_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_92_92, (MR_Integer) 0)));
#line 1271 "accumulator.m"
                                      transform_hlds__accumulator__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_92_92, (MR_Integer) 1)));
#line 13023 "transform_hlds.accumulator.c"
                                      transform_hlds__accumulator__TypeInfo_108_108 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[57];
#line 1271 "accumulator.m"
                                      {
#line 1271 "accumulator.m"
                                        transform_hlds__accumulator__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__accumulator__TypeInfo_108_108, ((MR_Box) (transform_hlds__accumulator__V_93_93)), ((MR_Box) (transform_hlds__accumulator__V_107_107)));
                                      }
#line 1250 "accumulator.m"
                                      if (transform_hlds__accumulator__succeeded)
#line 1250 "accumulator.m"
                                        {
#line 1272 "accumulator.m"
                                          transform_hlds__accumulator__V_98_98 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1272 "accumulator.m"
                                          {
#line 1272 "accumulator.m"
                                            transform_hlds__accumulator__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "accumulator.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_95_95, 0) = ((MR_Box) (transform_hlds__accumulator__A_70));
#line 1272 "accumulator.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_95_95, 1) = ((MR_Box) (transform_hlds__accumulator__B_71));
#line 1272 "accumulator.m"
                                          }
#line 1272 "accumulator.m"
                                          {
#line 1272 "accumulator.m"
                                            transform_hlds__accumulator__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "accumulator.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_97_97, 0) = ((MR_Box) (transform_hlds__accumulator__B_71));
#line 1272 "accumulator.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_97_97, 1) = ((MR_Box) (transform_hlds__accumulator__A_70));
#line 1272 "accumulator.m"
                                          }
#line 1272 "accumulator.m"
                                          {
#line 1272 "accumulator.m"
                                            transform_hlds__accumulator__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "accumulator.m"
                                            MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_96_96, 0) = ((MR_Box) (transform_hlds__accumulator__V_97_97));
#line 1272 "accumulator.m"
                                            MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_96_96, 1) = ((MR_Box) (transform_hlds__accumulator__V_98_98));
#line 1272 "accumulator.m"
                                          }
#line 1272 "accumulator.m"
                                          {
#line 1272 "accumulator.m"
                                            transform_hlds__accumulator__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "accumulator.m"
                                            MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_94_94, 0) = ((MR_Box) (transform_hlds__accumulator__V_95_95));
#line 1272 "accumulator.m"
                                            MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_94_94, 1) = ((MR_Box) (transform_hlds__accumulator__V_96_96));
#line 1272 "accumulator.m"
                                          }
#line 1272 "accumulator.m"
                                          {
#line 1272 "accumulator.m"
                                            mercury__map__from_assoc_list_2_p_0(transform_hlds__accumulator__TypeInfo_104_104, transform_hlds__accumulator__TypeInfo_104_104, transform_hlds__accumulator__V_94_94, &transform_hlds__accumulator__Subst_72);
                                          }
#line 1273 "accumulator.m"
                                          {
#line 1273 "accumulator.m"
                                            hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__accumulator__Subst_72, transform_hlds__accumulator__Goal_40, &transform_hlds__accumulator__SwappedGoal_73);
                                          }
#line 1274 "accumulator.m"
                                          {
#line 1274 "accumulator.m"
                                            transform_hlds__accumulator__CSGoal_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "accumulator.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__CSGoal_62, 0) = ((MR_Box) (transform_hlds__accumulator__SwappedGoal_73));
#line 1274 "accumulator.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__CSGoal_62, 1) = ((MR_Box) (transform_hlds__accumulator__InstMap_41));
#line 1274 "accumulator.m"
                                          }
#line 1274 "accumulator.m"
                                          transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1250 "accumulator.m"
                                        }
#line 1271 "accumulator.m"
                                    }
#line 1271 "accumulator.m"
                                }
#line 1250 "accumulator.m"
                            }
#line 1250 "accumulator.m"
                        }
#line 1249 "accumulator.m"
                        break;
#line 1249 "accumulator.m"
                      case (MR_Integer) 1:
#line 1246 "accumulator.m"
                        {
#line 1247 "accumulator.m"
                          transform_hlds__accumulator__CSGoal_62 = transform_hlds__accumulator__V_82_82;
#line 1248 "accumulator.m"
                          transform_hlds__accumulator__CurWarnings_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1246 "accumulator.m"
                          transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1246 "accumulator.m"
                        }
#line 1249 "accumulator.m"
                        break;
#line 1249 "accumulator.m"
                    }
#line 1218 "accumulator.m"
                    if (transform_hlds__accumulator__succeeded)
#line 1218 "accumulator.m"
                      {
#line 1277 "accumulator.m"
                        {
#line 1277 "accumulator.m"
                          transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_process_assoc_set_12_p_0(transform_hlds__accumulator__HeadVar__1_1, transform_hlds__accumulator__HeadVar__2_2, transform_hlds__accumulator__Ids_29, transform_hlds__accumulator__HeadVar__4_4, transform_hlds__accumulator__STATE_VARIABLE_Substs_88_88, transform_hlds__accumulator__STATE_VARIABLE_Substs_6, transform_hlds__accumulator__STATE_VARIABLE_VarSet_86_86, transform_hlds__accumulator__STATE_VARIABLE_VarSet_8, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_87_87, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_10, &transform_hlds__accumulator__CS0_74, &transform_hlds__accumulator__Warnings0_75);
                        }
#line 1218 "accumulator.m"
                        if (transform_hlds__accumulator__succeeded)
#line 1218 "accumulator.m"
                          {
#line 13139 "transform_hlds.accumulator.c"
                            transform_hlds__accumulator__TypeCtorInfo_105_105 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1279 "accumulator.m"
                            {
#line 1279 "accumulator.m"
                              transform_hlds__goal_store__goal_store_det_insert_4_p_0(transform_hlds__accumulator__TypeCtorInfo_105_105, ((MR_Box) (transform_hlds__accumulator__Id_28)), transform_hlds__accumulator__CSGoal_62, transform_hlds__accumulator__CS0_74, transform_hlds__accumulator__CS_11);
                            }
#line 13146 "transform_hlds.accumulator.c"
                            transform_hlds__accumulator__TypeCtorInfo_106_106 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_warning_0;
#line 1280 "accumulator.m"
                            {
#line 1280 "accumulator.m"
                              *transform_hlds__accumulator__HeadVar__12_12 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_106_106, transform_hlds__accumulator__Warnings0_75, transform_hlds__accumulator__CurWarnings_63);
                            }
#line 1280 "accumulator.m"
                            transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1218 "accumulator.m"
                          }
#line 1218 "accumulator.m"
                      }
#line 1218 "accumulator.m"
                  }
#line 1218 "accumulator.m"
              }
#line 1218 "accumulator.m"
          }
#line 1218 "accumulator.m"
      }
#line 1215 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1215 "accumulator.m"
  }
#line 1208 "accumulator.m"
}

#line 1192 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__create_new_var_7_p_0(
#line 1192 "accumulator.m"
  MR_Word transform_hlds__accumulator__OldVar_8,
#line 1192 "accumulator.m"
  MR_String transform_hlds__accumulator__Prefix_9,
#line 1192 "accumulator.m"
  MR_Word * transform_hlds__accumulator__NewVar_10,
#line 1192 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_16,
#line 1192 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_17,
#line 1192 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_18,
#line 1192 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_19)
#line 1192 "accumulator.m"
{
#line 1195 "accumulator.m"
  {
#line 1195 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1195 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1195 "accumulator.m"
    MR_String transform_hlds__accumulator__OldName_13;
#line 1195 "accumulator.m"
    MR_String transform_hlds__accumulator__NewName_14;
#line 1195 "accumulator.m"
    MR_Word transform_hlds__accumulator__Type_15;

#line 1196 "accumulator.m"
    {
#line 1196 "accumulator.m"
      mercury__varset__lookup_name_3_p_0(transform_hlds__accumulator__TypeCtorInfo_22_22, transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_16, transform_hlds__accumulator__OldVar_8, &transform_hlds__accumulator__OldName_13);
    }
#line 1197 "accumulator.m"
    {
#line 1197 "accumulator.m"
      mercury__string__append_3_p_2(transform_hlds__accumulator__Prefix_9, transform_hlds__accumulator__OldName_13, &transform_hlds__accumulator__NewName_14);
    }
#line 1198 "accumulator.m"
    {
#line 1198 "accumulator.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__accumulator__TypeCtorInfo_22_22, transform_hlds__accumulator__NewName_14, transform_hlds__accumulator__NewVar_10, transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_16, transform_hlds__accumulator__STATE_VARIABLE_VarSet_17);
    }
#line 1199 "accumulator.m"
    {
#line 1199 "accumulator.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_18, transform_hlds__accumulator__OldVar_8, &transform_hlds__accumulator__Type_15);
    }
#line 1200 "accumulator.m"
    {
#line 1200 "accumulator.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__accumulator__NewVar_10, transform_hlds__accumulator__Type_15, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_18, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_19);
#line 1200 "accumulator.m"
      return;
    }
#line 1195 "accumulator.m"
  }
#line 1192 "accumulator.m"
}

#line 1180 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__acc_var_subst_init_6_p_0(
#line 1180 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 1180 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_2,
#line 1180 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_3,
#line 1180 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_4,
#line 1180 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_5,
#line 1180 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__6_6)
#line 1180 "accumulator.m"
{
#line 1183 "accumulator.m"
  {
#line 1183 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 1183 "accumulator.m"
    if ((transform_hlds__accumulator__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "accumulator.m"
      {
#line 1183 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_29_29 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];

#line 1183 "accumulator.m"
        {
#line 1183 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__6_6 = mercury__map__init_0_f_0(transform_hlds__accumulator__TypeInfo_29_29, transform_hlds__accumulator__TypeInfo_29_29);
        }
#line 1183 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_VarTypes_5 = transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_4;
#line 1183 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_VarSet_3 = transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_2;
#line 1183 "accumulator.m"
      }
#line 1183 "accumulator.m"
    else
#line 1184 "accumulator.m"
      {
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_30_30;
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_22_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__AccVar_18;
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__Subst0_19;
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_25_25;
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_26_26;
#line 1184 "accumulator.m"
        MR_String transform_hlds__accumulator__OldName_40;
#line 1184 "accumulator.m"
        MR_String transform_hlds__accumulator__NewName_41;
#line 1184 "accumulator.m"
        MR_Word transform_hlds__accumulator__Type_42;

#line 1196 "accumulator.m"
        {
#line 1196 "accumulator.m"
          mercury__varset__lookup_name_3_p_0(transform_hlds__accumulator__TypeCtorInfo_22_45, transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_2, transform_hlds__accumulator__Var_13, &transform_hlds__accumulator__OldName_40);
        }
#line 1197 "accumulator.m"
        {
#line 1197 "accumulator.m"
          mercury__string__append_3_p_2((MR_String) "A_", transform_hlds__accumulator__OldName_40, &transform_hlds__accumulator__NewName_41);
        }
#line 1198 "accumulator.m"
        {
#line 1198 "accumulator.m"
          mercury__varset__new_named_var_4_p_0(transform_hlds__accumulator__TypeCtorInfo_22_45, transform_hlds__accumulator__NewName_41, &transform_hlds__accumulator__AccVar_18, transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_2, &transform_hlds__accumulator__STATE_VARIABLE_VarSet_25_25);
        }
#line 1199 "accumulator.m"
        {
#line 1199 "accumulator.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_4, transform_hlds__accumulator__Var_13, &transform_hlds__accumulator__Type_42);
        }
#line 1200 "accumulator.m"
        {
#line 1200 "accumulator.m"
          parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__accumulator__AccVar_18, transform_hlds__accumulator__Type_42, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_4, &transform_hlds__accumulator__STATE_VARIABLE_VarTypes_26_26);
        }
#line 1186 "accumulator.m"
        {
#line 1186 "accumulator.m"
          transform_hlds__accumulator__acc_var_subst_init_6_p_0(transform_hlds__accumulator__Vars_14, transform_hlds__accumulator__STATE_VARIABLE_VarSet_25_25, transform_hlds__accumulator__STATE_VARIABLE_VarSet_3, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_26_26, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_5, &transform_hlds__accumulator__Subst0_19);
        }
#line 13335 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeInfo_30_30 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1187 "accumulator.m"
        {
#line 1187 "accumulator.m"
          mercury__map__det_insert_4_p_0(transform_hlds__accumulator__TypeInfo_30_30, transform_hlds__accumulator__TypeInfo_30_30, ((MR_Box) (transform_hlds__accumulator__Var_13)), ((MR_Box) (transform_hlds__accumulator__AccVar_18)), transform_hlds__accumulator__Subst0_19, transform_hlds__accumulator__HeadVar__6_6);
#line 1187 "accumulator.m"
          return;
        }
#line 1184 "accumulator.m"
      }
#line 1183 "accumulator.m"
  }
#line 1180 "accumulator.m"
}

#line 1165 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_substs_init_6_p_0(
#line 1165 "accumulator.m"
  MR_Word transform_hlds__accumulator__InitAccs_7,
#line 1165 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_16,
#line 1165 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_17,
#line 1165 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_18,
#line 1165 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_19,
#line 1165 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Substs_10)
#line 1165 "accumulator.m"
{
#line 1168 "accumulator.m"
  {
#line 1168 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1168 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_22_22 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1168 "accumulator.m"
    MR_Word transform_hlds__accumulator__AccVarSubst_12;
#line 1168 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateSubst_15;

#line 1169 "accumulator.m"
    {
#line 1169 "accumulator.m"
      mercury__map__init_1_p_0(transform_hlds__accumulator__TypeInfo_22_22, transform_hlds__accumulator__TypeInfo_22_22, &transform_hlds__accumulator__UpdateSubst_15);
    }
#line 1170 "accumulator.m"
    {
#line 1170 "accumulator.m"
      transform_hlds__accumulator__acc_var_subst_init_6_p_0(transform_hlds__accumulator__InitAccs_7, transform_hlds__accumulator__STATE_VARIABLE_VarSet_0_16, transform_hlds__accumulator__STATE_VARIABLE_VarSet_17, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_0_18, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_19, &transform_hlds__accumulator__AccVarSubst_12);
    }
#line 1174 "accumulator.m"
    {
#line 1174 "accumulator.m"
      MR_Word base;
#line 1174 "accumulator.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "accumulator.m"
      *transform_hlds__accumulator__Substs_10 = base;
#line 1174 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__AccVarSubst_12));
#line 1174 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__UpdateSubst_15));
#line 1174 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__accumulator__UpdateSubst_15));
#line 1174 "accumulator.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__accumulator__UpdateSubst_15));
#line 1174 "accumulator.m"
    }
#line 1168 "accumulator.m"
  }
#line 1165 "accumulator.m"
}

#line 1130 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_stage2_15_p_0_1(
#line 1130 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1130 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1130 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 1130 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3)
#line 1130 "accumulator.m"
{
#line 1130 "accumulator.m"
  {
#line 1130 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1130 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__4_68;

#line 1130 "accumulator.m"
    {
#line 1130 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1130__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Word) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv0_HeadVar__4_68);
    }
#line 1130 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__4_68));
#line 1130 "accumulator.m"
  }
#line 1130 "accumulator.m"
}

#line 1111 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_stage2_15_p_0(
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_16,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__ProcInfo0_17,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_18,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_19,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_20,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__OutPrime_21,
#line 1111 "accumulator.m"
  MR_Word transform_hlds__accumulator__Out_22,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarSet_59,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_VarTypes_60,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Accs_25,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__BaseCase_26,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__BasePairs_27,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Substs_61,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__CS_29,
#line 1111 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Warnings_30)
#line 1111 "accumulator.m"
{
#line 1120 "accumulator.m"
  {
#line 1120 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_92_92 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_95_95;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_96_96;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_97_97;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__Before0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_20, (MR_Integer) 0)));
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__Assoc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_20, (MR_Integer) 1)));
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__ConstructAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_20, (MR_Integer) 2)));
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__Construct_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_20, (MR_Integer) 3)));
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__Update_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_20, (MR_Integer) 4)));
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__Case_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__GoalId_18, (MR_Integer) 0)));
#line 1120 "accumulator.m"
    MR_Integer transform_hlds__accumulator__K_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__GoalId_18, (MR_Integer) 1)));
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__Before_39;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__After_40;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__P_41;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__BeforeNonLocals_50;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__AfterNonLocals_51;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__InitAccs_52;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__OutPrimeSet_53;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateOut_54;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateAccOut_55;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__UpdateBase_56;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__AssocBase_57;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__OtherBase_58;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_62_62;
#line 1120 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_63_63 = (transform_hlds__accumulator__K_38 - (MR_Integer) 1);
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_65_65;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_70_70;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_71_71;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_72_72;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_73_73;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_74_74;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_75_75;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_76_76;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_77_77;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_78_78;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_Substs_79_79;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_80_80;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_Substs_81_81;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarSet_82_82;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_VarTypes_83_83;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_84_84;
#line 1120 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_88_88;
#line 1121 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_20, (MR_Integer) 5)));
#line 1136 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv1_BeforeNonLocals_50;
#line 1138 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv2_AfterNonLocals_51;

#line 1123 "accumulator.m"
    {
#line 1123 "accumulator.m"
      transform_hlds__accumulator__V_62_62 = transform_hlds__accumulator__set_upto_2_f_0(transform_hlds__accumulator__Case_37, transform_hlds__accumulator__V_63_63);
    }
#line 1123 "accumulator.m"
    {
#line 1123 "accumulator.m"
      transform_hlds__accumulator__Before_39 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__Before0_31, transform_hlds__accumulator__V_62_62);
    }
#line 1128 "accumulator.m"
    {
#line 1128 "accumulator.m"
      transform_hlds__accumulator__V_65_65 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__Assoc_32, transform_hlds__accumulator__ConstructAssoc_33);
    }
#line 1128 "accumulator.m"
    {
#line 1128 "accumulator.m"
      transform_hlds__accumulator__After_40 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__V_65_65, transform_hlds__accumulator__Construct_34);
    }
#line 1130 "accumulator.m"
    {
#line 1130 "accumulator.m"
      transform_hlds__accumulator__P_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_41, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_6[2]));
#line 1130 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_41, 1) = ((MR_Box) (transform_hlds__accumulator__accu_stage2_15_p_0_1));
#line 1130 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1130 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_41, 3) = ((MR_Box) (transform_hlds__accumulator__GoalStore_19));
#line 1130 "accumulator.m"
    }
#line 1136 "accumulator.m"
    {
#line 1136 "accumulator.m"
      transform_hlds__accumulator__V_70_70 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__Before_39);
    }
#line 13613 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1137 "accumulator.m"
    {
#line 1137 "accumulator.m"
      transform_hlds__accumulator__V_71_71 = parse_tree__set_of_var__init_0_f_0(transform_hlds__accumulator__TypeCtorInfo_95_95);
    }
#line 13620 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeInfo_96_96 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[3];
#line 1136 "accumulator.m"
    {
#line 1136 "accumulator.m"
      mercury__list__foldl_4_p_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__TypeInfo_96_96, transform_hlds__accumulator__P_41, transform_hlds__accumulator__V_70_70, ((MR_Box) (transform_hlds__accumulator__V_71_71)), &transform_hlds__accumulator__conv1_BeforeNonLocals_50);
    }
#line 1136 "accumulator.m"
    transform_hlds__accumulator__BeforeNonLocals_50 = ((MR_Word) transform_hlds__accumulator__conv1_BeforeNonLocals_50);
#line 1138 "accumulator.m"
    {
#line 1138 "accumulator.m"
      transform_hlds__accumulator__V_72_72 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__After_40);
    }
#line 1139 "accumulator.m"
    {
#line 1139 "accumulator.m"
      transform_hlds__accumulator__V_73_73 = parse_tree__set_of_var__init_0_f_0(transform_hlds__accumulator__TypeCtorInfo_95_95);
    }
#line 1138 "accumulator.m"
    {
#line 1138 "accumulator.m"
      mercury__list__foldl_4_p_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__TypeInfo_96_96, transform_hlds__accumulator__P_41, transform_hlds__accumulator__V_72_72, ((MR_Box) (transform_hlds__accumulator__V_73_73)), &transform_hlds__accumulator__conv2_AfterNonLocals_51);
    }
#line 1138 "accumulator.m"
    transform_hlds__accumulator__AfterNonLocals_51 = ((MR_Word) transform_hlds__accumulator__conv2_AfterNonLocals_51);
#line 1140 "accumulator.m"
    {
#line 1140 "accumulator.m"
      transform_hlds__accumulator__InitAccs_52 = parse_tree__set_of_var__intersect_2_f_0(transform_hlds__accumulator__TypeCtorInfo_95_95, transform_hlds__accumulator__BeforeNonLocals_50, transform_hlds__accumulator__AfterNonLocals_51);
    }
#line 1142 "accumulator.m"
    {
#line 1142 "accumulator.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__accumulator__ProcInfo0_17, &transform_hlds__accumulator__STATE_VARIABLE_VarSet_74_74);
    }
#line 1143 "accumulator.m"
    {
#line 1143 "accumulator.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__accumulator__ProcInfo0_17, &transform_hlds__accumulator__STATE_VARIABLE_VarTypes_75_75);
    }
#line 1145 "accumulator.m"
    {
#line 1145 "accumulator.m"
      transform_hlds__accumulator__V_76_76 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_95_95, transform_hlds__accumulator__InitAccs_52);
    }
#line 1145 "accumulator.m"
    {
#line 1145 "accumulator.m"
      transform_hlds__accumulator__accu_substs_init_6_p_0(transform_hlds__accumulator__V_76_76, transform_hlds__accumulator__STATE_VARIABLE_VarSet_74_74, &transform_hlds__accumulator__STATE_VARIABLE_VarSet_77_77, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_75_75, &transform_hlds__accumulator__STATE_VARIABLE_VarTypes_78_78, &transform_hlds__accumulator__STATE_VARIABLE_Substs_79_79);
    }
#line 1148 "accumulator.m"
    {
#line 1148 "accumulator.m"
      parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__accumulator__TypeCtorInfo_95_95, transform_hlds__accumulator__OutPrime_21, &transform_hlds__accumulator__OutPrimeSet_53);
    }
#line 1149 "accumulator.m"
    {
#line 1149 "accumulator.m"
      transform_hlds__accumulator__V_80_80 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__Assoc_32);
    }
#line 1149 "accumulator.m"
    {
#line 1149 "accumulator.m"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_process_assoc_set_12_p_0(transform_hlds__accumulator__ModuleInfo_16, transform_hlds__accumulator__GoalStore_19, transform_hlds__accumulator__V_80_80, transform_hlds__accumulator__OutPrimeSet_53, transform_hlds__accumulator__STATE_VARIABLE_Substs_79_79, &transform_hlds__accumulator__STATE_VARIABLE_Substs_81_81, transform_hlds__accumulator__STATE_VARIABLE_VarSet_77_77, &transform_hlds__accumulator__STATE_VARIABLE_VarSet_82_82, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_78_78, &transform_hlds__accumulator__STATE_VARIABLE_VarTypes_83_83, transform_hlds__accumulator__CS_29, transform_hlds__accumulator__Warnings_30);
    }
#line 1120 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1120 "accumulator.m"
      {
#line 1152 "accumulator.m"
        {
#line 1152 "accumulator.m"
          transform_hlds__accumulator__V_84_84 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_92_92, transform_hlds__accumulator__Update_35);
        }
#line 1152 "accumulator.m"
        {
#line 1152 "accumulator.m"
          transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_process_update_set_13_p_0(transform_hlds__accumulator__ModuleInfo_16, transform_hlds__accumulator__GoalStore_19, transform_hlds__accumulator__V_84_84, transform_hlds__accumulator__OutPrimeSet_53, transform_hlds__accumulator__STATE_VARIABLE_Substs_81_81, transform_hlds__accumulator__STATE_VARIABLE_Substs_61, transform_hlds__accumulator__STATE_VARIABLE_VarSet_82_82, transform_hlds__accumulator__STATE_VARIABLE_VarSet_59, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_83_83, transform_hlds__accumulator__STATE_VARIABLE_VarTypes_60, &transform_hlds__accumulator__UpdateOut_54, &transform_hlds__accumulator__UpdateAccOut_55, transform_hlds__accumulator__BasePairs_27);
        }
#line 1120 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1120 "accumulator.m"
          {
#line 13704 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeInfo_97_97 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 1156 "accumulator.m"
            {
#line 1156 "accumulator.m"
              transform_hlds__accumulator__V_88_88 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_95_95, transform_hlds__accumulator__InitAccs_52);
            }
#line 1156 "accumulator.m"
            {
#line 1156 "accumulator.m"
              *transform_hlds__accumulator__Accs_25 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeInfo_97_97, transform_hlds__accumulator__V_88_88, transform_hlds__accumulator__UpdateAccOut_55);
            }
#line 1158 "accumulator.m"
            {
#line 1158 "accumulator.m"
              transform_hlds__accumulator__accu_divide_base_case_8_p_0(transform_hlds__accumulator__ModuleInfo_16, *transform_hlds__accumulator__STATE_VARIABLE_VarTypes_60, transform_hlds__accumulator__GoalStore_19, transform_hlds__accumulator__UpdateOut_54, transform_hlds__accumulator__Out_22, &transform_hlds__accumulator__UpdateBase_56, &transform_hlds__accumulator__AssocBase_57, &transform_hlds__accumulator__OtherBase_58);
            }
#line 1161 "accumulator.m"
            {
#line 1161 "accumulator.m"
              MR_Word base;
#line 1161 "accumulator.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1161 "accumulator.m"
              *transform_hlds__accumulator__BaseCase_26 = base;
#line 1161 "accumulator.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__UpdateBase_56));
#line 1161 "accumulator.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__AssocBase_57));
#line 1161 "accumulator.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__accumulator__OtherBase_58));
#line 1161 "accumulator.m"
            }
#line 1161 "accumulator.m"
            transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1120 "accumulator.m"
          }
#line 1120 "accumulator.m"
      }
#line 1120 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1120 "accumulator.m"
  }
#line 1111 "accumulator.m"
}

#line 1049 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_is_update_4_p_0_1(
#line 1049 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1049 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1049 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1049 "accumulator.m"
{
#line 1049 "accumulator.m"
  {
#line 1049 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1049 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1049 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__5_17;

#line 1049 "accumulator.m"
    {
#line 1049 "accumulator.m"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1051__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv0_HeadVar__5_17);
    }
#line 1049 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1049 "accumulator.m"
      {
#line 1049 "accumulator.m"
        *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__5_17));
#line 1049 "accumulator.m"
        transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1049 "accumulator.m"
      }
#line 1049 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1049 "accumulator.m"
  }
#line 1049 "accumulator.m"
}

#line 1043 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_is_update_4_p_0(
#line 1043 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_5,
#line 1043 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_6,
#line 1043 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args_7,
#line 1043 "accumulator.m"
  MR_Word * transform_hlds__accumulator__ResultStateVars_8)
#line 1043 "accumulator.m"
{
#line 1046 "accumulator.m"
  {
#line 1046 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1046 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_21_21;
#line 1046 "accumulator.m"
    MR_Word transform_hlds__accumulator__PredInfo_9;
#line 1046 "accumulator.m"
    MR_Word transform_hlds__accumulator__Assertions_10;
#line 1046 "accumulator.m"
    MR_Word transform_hlds__accumulator__Result_13;
#line 1046 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_14_14;
#line 1046 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_15_15;
#line 1046 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_18_18;

#line 1047 "accumulator.m"
    {
#line 1047 "accumulator.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__accumulator__ModuleInfo_5, transform_hlds__accumulator__PredId_6, &transform_hlds__accumulator__PredInfo_9);
    }
#line 1048 "accumulator.m"
    {
#line 1048 "accumulator.m"
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__accumulator__PredInfo_9, &transform_hlds__accumulator__Assertions_10);
    }
#line 13834 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0;
#line 1049 "accumulator.m"
    {
#line 1049 "accumulator.m"
      transform_hlds__accumulator__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_14_14, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[0]));
#line 1049 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_14_14, 1) = ((MR_Box) (transform_hlds__accumulator__accu_is_update_4_p_0_1));
#line 1049 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1049 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_14_14, 3) = ((MR_Box) (transform_hlds__accumulator__ModuleInfo_5));
#line 1049 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_14_14, 4) = ((MR_Box) (transform_hlds__accumulator__PredId_6));
#line 1049 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_14_14, 5) = ((MR_Box) (transform_hlds__accumulator__Args_7));
#line 1049 "accumulator.m"
    }
#line 1054 "accumulator.m"
    {
#line 1054 "accumulator.m"
      transform_hlds__accumulator__V_15_15 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_21_21, transform_hlds__accumulator__Assertions_10);
    }
#line 1049 "accumulator.m"
    {
#line 1049 "accumulator.m"
      mercury__list__filter_map_3_p_0(transform_hlds__accumulator__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__accumulator_scalar_common_2[0], transform_hlds__accumulator__V_14_14, transform_hlds__accumulator__V_15_15, &transform_hlds__accumulator__Result_13);
    }
#line 1057 "accumulator.m"
    transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Result_13)) == (MR_mktag((MR_Integer) 1)));
#line 1057 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1057 "accumulator.m"
      {
#line 1057 "accumulator.m"
        *transform_hlds__accumulator__ResultStateVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Result_13, (MR_Integer) 0)));
#line 1057 "accumulator.m"
        transform_hlds__accumulator__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Result_13, (MR_Integer) 1)));
#line 1057 "accumulator.m"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "accumulator.m"
      }
#line 1046 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1046 "accumulator.m"
  }
#line 1043 "accumulator.m"
}

#line 1023 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__commutativity_assertion_4_p_0(
#line 1023 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_5,
#line 1023 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1023 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args0_8,
#line 1023 "accumulator.m"
  MR_Word * transform_hlds__accumulator__PossibleStaticVars_9)
#line 1023 "accumulator.m"
{
#line 1027 "accumulator.m"
  while (MR_TRUE)
#line 1027 "accumulator.m"
    {
#line 1027 "accumulator.m"
      /* tailcall optimized into a loop */
#line 1027 "accumulator.m"
      {
#line 1027 "accumulator.m"
        MR_bool transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1027 "accumulator.m"
        MR_Integer transform_hlds__accumulator__AssertId_6;
#line 1027 "accumulator.m"
        MR_Word transform_hlds__accumulator__AssertIds_7;
#line 1034 "accumulator.m"
        MR_Word transform_hlds__accumulator__StaticVarA_10;
#line 1034 "accumulator.m"
        MR_Word transform_hlds__accumulator__StaticVarB_11;
#line 1029 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_13_13;

#line 1026 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1026 "accumulator.m"
          {
#line 1026 "accumulator.m"
            transform_hlds__accumulator__AssertId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 1026 "accumulator.m"
            transform_hlds__accumulator__AssertIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 1029 "accumulator.m"
            {
#line 1029 "accumulator.m"
              transform_hlds__accumulator__succeeded = hlds__assertion__is_commutativity_assertion_4_p_0(transform_hlds__accumulator__ModuleInfo_5, transform_hlds__accumulator__AssertId_6, transform_hlds__accumulator__Args0_8, &transform_hlds__accumulator__V_13_13);
            }
#line 1029 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1029 "accumulator.m"
              {
#line 1030 "accumulator.m"
                transform_hlds__accumulator__StaticVarA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_13_13, (MR_Integer) 0)));
#line 1030 "accumulator.m"
                transform_hlds__accumulator__StaticVarB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_13_13, (MR_Integer) 1)));
#line 1030 "accumulator.m"
                transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1029 "accumulator.m"
              }
#line 1034 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1032 "accumulator.m"
              {
#line 1032 "accumulator.m"
                MR_Word transform_hlds__accumulator__TypeCtorInfo_17_17;
#line 1032 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_14_14;
#line 1032 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_15_15;
#line 1032 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_16_16;
#line 1032 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_12_12;

#line 1032 "accumulator.m"
                {
#line 1032 "accumulator.m"
                  transform_hlds__accumulator__succeeded = transform_hlds__accumulator__commutativity_assertion_4_p_0(transform_hlds__accumulator__ModuleInfo_5, transform_hlds__accumulator__AssertIds_7, transform_hlds__accumulator__Args0_8, &transform_hlds__accumulator__V_12_12);
                }
#line 1032 "accumulator.m"
                transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 1032 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 1032 "accumulator.m"
                  {
#line 13970 "transform_hlds.accumulator.c"
                    transform_hlds__accumulator__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1033 "accumulator.m"
                    transform_hlds__accumulator__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1033 "accumulator.m"
                    {
#line 1033 "accumulator.m"
                      transform_hlds__accumulator__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "accumulator.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_15_15, 0) = ((MR_Box) (transform_hlds__accumulator__StaticVarB_11));
#line 1033 "accumulator.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_15_15, 1) = ((MR_Box) (transform_hlds__accumulator__V_16_16));
#line 1033 "accumulator.m"
                    }
#line 1033 "accumulator.m"
                    {
#line 1033 "accumulator.m"
                      transform_hlds__accumulator__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "accumulator.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_14_14, 0) = ((MR_Box) (transform_hlds__accumulator__StaticVarA_10));
#line 1033 "accumulator.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_14_14, 1) = ((MR_Box) (transform_hlds__accumulator__V_15_15));
#line 1033 "accumulator.m"
                    }
#line 1033 "accumulator.m"
                    {
#line 1033 "accumulator.m"
                      *transform_hlds__accumulator__PossibleStaticVars_9 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__accumulator__TypeCtorInfo_17_17, transform_hlds__accumulator__V_14_14);
                    }
#line 1033 "accumulator.m"
                    transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1032 "accumulator.m"
                  }
#line 1032 "accumulator.m"
              }
#line 1034 "accumulator.m"
            else
#line 1035 "accumulator.m"
              {
#line 1035 "accumulator.m"
                /* direct tailcall eliminated */
#line 1035 "accumulator.m"
                {
#line 1035 "accumulator.m"
                  MR_Word transform_hlds__accumulator__HeadVar__2__tmp_copy_2 = transform_hlds__accumulator__AssertIds_7;

#line 1035 "accumulator.m"
                  transform_hlds__accumulator__HeadVar__2_2 = transform_hlds__accumulator__HeadVar__2__tmp_copy_2;
#line 1035 "accumulator.m"
                }
#line 1035 "accumulator.m"
                continue;
#line 1035 "accumulator.m"
              }
#line 1026 "accumulator.m"
          }
#line 1027 "accumulator.m"
        return transform_hlds__accumulator__succeeded;
#line 1027 "accumulator.m"
      }
#line 1027 "accumulator.m"
      break;
#line 1027 "accumulator.m"
    }
#line 1023 "accumulator.m"
}

#line 1000 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__associativity_assertion_5_p_0(
#line 1000 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_6,
#line 1000 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2,
#line 1000 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args0_9,
#line 1000 "accumulator.m"
  MR_Word * transform_hlds__accumulator__VarAB_10,
#line 1000 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OutputVar_11)
#line 1000 "accumulator.m"
{
#line 1004 "accumulator.m"
  while (MR_TRUE)
#line 1004 "accumulator.m"
    {
#line 1004 "accumulator.m"
      /* tailcall optimized into a loop */
#line 1004 "accumulator.m"
      {
#line 1004 "accumulator.m"
        MR_bool transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1004 "accumulator.m"
        MR_Integer transform_hlds__accumulator__AssertId_7;
#line 1004 "accumulator.m"
        MR_Word transform_hlds__accumulator__AssertIds_8;
#line 1012 "accumulator.m"
        MR_Word transform_hlds__accumulator__VarA_12;
#line 1012 "accumulator.m"
        MR_Word transform_hlds__accumulator__VarB_13;
#line 1012 "accumulator.m"
        MR_Word transform_hlds__accumulator__OutputVar0_14;
#line 1006 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_17_17;

#line 1003 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 1003 "accumulator.m"
          {
#line 1003 "accumulator.m"
            transform_hlds__accumulator__AssertId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 0)));
#line 1003 "accumulator.m"
            transform_hlds__accumulator__AssertIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__2_2, (MR_Integer) 1)));
#line 1006 "accumulator.m"
            {
#line 1006 "accumulator.m"
              transform_hlds__accumulator__succeeded = hlds__assertion__is_associativity_assertion_5_p_0(transform_hlds__accumulator__ModuleInfo_6, transform_hlds__accumulator__AssertId_7, transform_hlds__accumulator__Args0_9, &transform_hlds__accumulator__V_17_17, &transform_hlds__accumulator__OutputVar0_14);
            }
#line 1006 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1006 "accumulator.m"
              {
#line 1007 "accumulator.m"
                transform_hlds__accumulator__VarA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_17_17, (MR_Integer) 0)));
#line 1007 "accumulator.m"
                transform_hlds__accumulator__VarB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_17_17, (MR_Integer) 1)));
#line 1007 "accumulator.m"
                transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1006 "accumulator.m"
              }
#line 1012 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 1009 "accumulator.m"
              {
#line 1009 "accumulator.m"
                MR_Word transform_hlds__accumulator__TypeCtorInfo_21_21;
#line 1009 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_18_18;
#line 1009 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_19_19;
#line 1009 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_20_20;
#line 1009 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_15_15;
#line 1009 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_16_16;

#line 1009 "accumulator.m"
                {
#line 1009 "accumulator.m"
                  transform_hlds__accumulator__succeeded = transform_hlds__accumulator__associativity_assertion_5_p_0(transform_hlds__accumulator__ModuleInfo_6, transform_hlds__accumulator__AssertIds_8, transform_hlds__accumulator__Args0_9, &transform_hlds__accumulator__V_15_15, &transform_hlds__accumulator__V_16_16);
                }
#line 1009 "accumulator.m"
                transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 1009 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 1009 "accumulator.m"
                  {
#line 14128 "transform_hlds.accumulator.c"
                    transform_hlds__accumulator__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1010 "accumulator.m"
                    transform_hlds__accumulator__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1010 "accumulator.m"
                    {
#line 1010 "accumulator.m"
                      transform_hlds__accumulator__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "accumulator.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_19_19, 0) = ((MR_Box) (transform_hlds__accumulator__VarB_13));
#line 1010 "accumulator.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_19_19, 1) = ((MR_Box) (transform_hlds__accumulator__V_20_20));
#line 1010 "accumulator.m"
                    }
#line 1010 "accumulator.m"
                    {
#line 1010 "accumulator.m"
                      transform_hlds__accumulator__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "accumulator.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_18_18, 0) = ((MR_Box) (transform_hlds__accumulator__VarA_12));
#line 1010 "accumulator.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_18_18, 1) = ((MR_Box) (transform_hlds__accumulator__V_19_19));
#line 1010 "accumulator.m"
                    }
#line 1010 "accumulator.m"
                    {
#line 1010 "accumulator.m"
                      *transform_hlds__accumulator__VarAB_10 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__accumulator__TypeCtorInfo_21_21, transform_hlds__accumulator__V_18_18);
                    }
#line 1011 "accumulator.m"
                    *transform_hlds__accumulator__OutputVar_11 = transform_hlds__accumulator__OutputVar0_14;
#line 1011 "accumulator.m"
                    transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1009 "accumulator.m"
                  }
#line 1009 "accumulator.m"
              }
#line 1012 "accumulator.m"
            else
#line 1013 "accumulator.m"
              {
#line 1013 "accumulator.m"
                /* direct tailcall eliminated */
#line 1013 "accumulator.m"
                {
#line 1013 "accumulator.m"
                  MR_Word transform_hlds__accumulator__HeadVar__2__tmp_copy_2 = transform_hlds__accumulator__AssertIds_8;

#line 1013 "accumulator.m"
                  transform_hlds__accumulator__HeadVar__2_2 = transform_hlds__accumulator__HeadVar__2__tmp_copy_2;
#line 1013 "accumulator.m"
                }
#line 1013 "accumulator.m"
                continue;
#line 1013 "accumulator.m"
              }
#line 1003 "accumulator.m"
          }
#line 1004 "accumulator.m"
        return transform_hlds__accumulator__succeeded;
#line 1004 "accumulator.m"
      }
#line 1004 "accumulator.m"
      break;
#line 1004 "accumulator.m"
    }
#line 1000 "accumulator.m"
}

#line 975 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_is_associative_4_p_0(
#line 975 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_5,
#line 975 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_6,
#line 975 "accumulator.m"
  MR_Word transform_hlds__accumulator__Args_7,
#line 975 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Result_8)
#line 975 "accumulator.m"
{
#line 978 "accumulator.m"
  {
#line 978 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 978 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_17_17;
#line 978 "accumulator.m"
    MR_Word transform_hlds__accumulator__PredInfo_9;
#line 978 "accumulator.m"
    MR_Word transform_hlds__accumulator__Assertions_10;
#line 978 "accumulator.m"
    MR_Word transform_hlds__accumulator__AssociativeVars_11;
#line 978 "accumulator.m"
    MR_Word transform_hlds__accumulator__OutputVar_12;
#line 978 "accumulator.m"
    MR_Word transform_hlds__accumulator__IsCommutative_14;
#line 978 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_15_15;
#line 984 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_16_16;
#line 984 "accumulator.m"
    MR_Word transform_hlds__accumulator___CommutativeVars_13;

#line 979 "accumulator.m"
    {
#line 979 "accumulator.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__accumulator__ModuleInfo_5, transform_hlds__accumulator__PredId_6, &transform_hlds__accumulator__PredInfo_9);
    }
#line 980 "accumulator.m"
    {
#line 980 "accumulator.m"
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__accumulator__PredInfo_9, &transform_hlds__accumulator__Assertions_10);
    }
#line 14243 "transform_hlds.accumulator.c"
    transform_hlds__accumulator__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0;
#line 981 "accumulator.m"
    {
#line 981 "accumulator.m"
      transform_hlds__accumulator__V_15_15 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_17_17, transform_hlds__accumulator__Assertions_10);
    }
#line 981 "accumulator.m"
    {
#line 981 "accumulator.m"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator__associativity_assertion_5_p_0(transform_hlds__accumulator__ModuleInfo_5, transform_hlds__accumulator__V_15_15, transform_hlds__accumulator__Args_7, &transform_hlds__accumulator__AssociativeVars_11, &transform_hlds__accumulator__OutputVar_12);
    }
#line 978 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 978 "accumulator.m"
      {
#line 984 "accumulator.m"
        {
#line 984 "accumulator.m"
          transform_hlds__accumulator__V_16_16 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_17_17, transform_hlds__accumulator__Assertions_10);
        }
#line 984 "accumulator.m"
        {
#line 984 "accumulator.m"
          transform_hlds__accumulator__succeeded = transform_hlds__accumulator__commutativity_assertion_4_p_0(transform_hlds__accumulator__ModuleInfo_5, transform_hlds__accumulator__V_16_16, transform_hlds__accumulator__Args_7, &transform_hlds__accumulator___CommutativeVars_13);
        }
#line 988 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 987 "accumulator.m"
          transform_hlds__accumulator__IsCommutative_14 = (MR_Integer) 1;
#line 988 "accumulator.m"
        else
#line 989 "accumulator.m"
          transform_hlds__accumulator__IsCommutative_14 = (MR_Integer) 0;
#line 991 "accumulator.m"
        {
#line 991 "accumulator.m"
          MR_Word base;
#line 991 "accumulator.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 991 "accumulator.m"
          *transform_hlds__accumulator__Result_8 = base;
#line 991 "accumulator.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__AssociativeVars_11));
#line 991 "accumulator.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__OutputVar_12));
#line 991 "accumulator.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__accumulator__IsCommutative_14));
#line 991 "accumulator.m"
        }
#line 991 "accumulator.m"
        transform_hlds__accumulator__succeeded = MR_TRUE;
#line 978 "accumulator.m"
      }
#line 978 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 978 "accumulator.m"
  }
#line 975 "accumulator.m"
}

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__member_lessthan_goalid_4_p_0_2(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 957 "accumulator.m"
{
#line 957 "accumulator.m"
  {
#line 957 "accumulator.m"
    struct transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 957 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__LessThanGoalId_7) = ((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__conv0_LessThanGoalId_7);
#line 957 "accumulator.m"
    {
#line 957 "accumulator.m"
      transform_hlds__accumulator__member_lessthan_goalid_4_p_0_1(transform_hlds__accumulator__env_ptr);
#line 957 "accumulator.m"
      return;
    }
#line 957 "accumulator.m"
  }
#line 957 "accumulator.m"
}

#line 956 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__member_lessthan_goalid_4_p_0_1(
#line 956 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 956 "accumulator.m"
{
#line 956 "accumulator.m"
  {
#line 956 "accumulator.m"
    struct transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 958 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__GoalId_6, (MR_Integer) 0)));
#line 958 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__I_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__GoalId_6, (MR_Integer) 1)));
#line 959 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__LessThanGoalId_7), (MR_Integer) 0)));
#line 959 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__J_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__LessThanGoalId_7), (MR_Integer) 1)));
#line 959 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__Case_9 == (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__V_13_13);
#line 956 "accumulator.m"
    if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__succeeded)
#line 956 "accumulator.m"
      {
#line 960 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__J_11 < (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__I_10);
#line 960 "accumulator.m"
        if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__succeeded)
#line 960 "accumulator.m"
          {
#line 960 "accumulator.m"
            ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__cont_env_ptr);
#line 960 "accumulator.m"
            return;
          }
#line 956 "accumulator.m"
      }
#line 956 "accumulator.m"
  }
#line 956 "accumulator.m"
}

#line 953 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__member_lessthan_goalid_4_p_0(
#line 953 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_5,
#line 953 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_6,
#line 953 "accumulator.m"
  MR_Word * transform_hlds__accumulator__LessThanGoalId_7,
#line 953 "accumulator.m"
  MR_Word * transform_hlds__accumulator__LessThanGoal_8,
#line 953 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 953 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 953 "accumulator.m"
{
#line 953 "accumulator.m"
  {
#line 953 "accumulator.m"
    struct transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0_s transform_hlds__accumulator__env;

#line 953 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__GoalId_6 = transform_hlds__accumulator__GoalId_6;
#line 953 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__LessThanGoalId_7 = transform_hlds__accumulator__LessThanGoalId_7;
#line 953 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__cont = transform_hlds__accumulator__cont;
#line 953 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 957 "accumulator.m"
    {
#line 957 "accumulator.m"
      transform_hlds__goal_store__goal_store_member_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__GoalStore_5, &(transform_hlds__accumulator__env).transform_hlds__accumulator__member_lessthan_goalid_4_p_0_env_0__conv0_LessThanGoalId_7, transform_hlds__accumulator__LessThanGoal_8, transform_hlds__accumulator__member_lessthan_goalid_4_p_0_2, &transform_hlds__accumulator__env);
    }
#line 953 "accumulator.m"
  }
#line 953 "accumulator.m"
}

#line 1049 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_1(
#line 1049 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1049 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 1049 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 1049 "accumulator.m"
{
#line 1049 "accumulator.m"
  {
#line 1049 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1049 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 1049 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__5_17;

#line 1049 "accumulator.m"
    {
#line 1049 "accumulator.m"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1051__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv0_HeadVar__5_17);
    }
#line 1049 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 1049 "accumulator.m"
      {
#line 1049 "accumulator.m"
        *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__5_17));
#line 1049 "accumulator.m"
        transform_hlds__accumulator__succeeded = MR_TRUE;
#line 1049 "accumulator.m"
      }
#line 1049 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1049 "accumulator.m"
  }
#line 1049 "accumulator.m"
}

#line 944 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_2(
#line 944 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 944 "accumulator.m"
{
#line 944 "accumulator.m"
  {
#line 944 "accumulator.m"
    struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 944 "accumulator.m"
    MR_builtin_longjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__commit_0, 1);
#line 944 "accumulator.m"
  }
#line 944 "accumulator.m"
}

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_4(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 957 "accumulator.m"
{
#line 957 "accumulator.m"
  {
#line 957 "accumulator.m"
    struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 957 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__LessThanGoalId_28 = ((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__conv1_LessThanGoalId_28);
#line 957 "accumulator.m"
    {
#line 957 "accumulator.m"
      transform_hlds__accumulator__accu_update_7_p_0_3(transform_hlds__accumulator__env_ptr);
#line 957 "accumulator.m"
      return;
    }
#line 957 "accumulator.m"
  }
#line 957 "accumulator.m"
}

#line 944 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_3(
#line 944 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 944 "accumulator.m"
{
#line 944 "accumulator.m"
  {
#line 944 "accumulator.m"
    struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 944 "accumulator.m"
    {
#line 946 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_34_34;
#line 946 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_35_35;

#line 958 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__Case_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 958 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__I_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__LessThanGoalId_28, (MR_Integer) 0)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__J_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__LessThanGoalId_28, (MR_Integer) 1)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__Case_64 == (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__V_68_68);
#line 944 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded)
#line 944 "accumulator.m"
        {
#line 960 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__J_66 < (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__I_65);
#line 944 "accumulator.m"
          if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded)
#line 944 "accumulator.m"
            {
#line 940 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__EarlierGoal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__V_33_33, (MR_Integer) 0)));
#line 940 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__EarlierInstMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__V_33_33, (MR_Integer) 1)));
#line 941 "accumulator.m"
              {
#line 941 "accumulator.m"
                (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = hlds__goal_util__can_reorder_goals_old_7_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__ModuleInfo_8, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__VarTypes_9, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__FullyStrict_10, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__EarlierInstMap_30, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__EarlierGoal_29, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__LaterInstMap_19, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__LaterGoal_18);
              }
#line 941 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded);
#line 944 "accumulator.m"
              if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded)
#line 944 "accumulator.m"
                {
#line 946 "accumulator.m"
                  {
#line 946 "accumulator.m"
                    transform_hlds__accumulator__V_35_35 = transform_hlds__accumulator__set_upto_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__Case_15, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__K_12);
                  }
#line 946 "accumulator.m"
                  {
#line 946 "accumulator.m"
                    transform_hlds__accumulator__V_34_34 = mercury__set__union_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__TypeCtorInfo_41_41, transform_hlds__accumulator__V_35_35, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__Before_17);
                  }
#line 946 "accumulator.m"
                  {
#line 946 "accumulator.m"
                    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = mercury__set__member_2_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__TypeCtorInfo_41_41, ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__LessThanGoalId_28)), transform_hlds__accumulator__V_34_34);
                  }
#line 944 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded);
#line 944 "accumulator.m"
                  if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded)
#line 944 "accumulator.m"
                    {
#line 944 "accumulator.m"
                      transform_hlds__accumulator__accu_update_7_p_0_2(transform_hlds__accumulator__env_ptr);
#line 944 "accumulator.m"
                      return;
                    }
#line 944 "accumulator.m"
                }
#line 944 "accumulator.m"
            }
#line 944 "accumulator.m"
        }
#line 944 "accumulator.m"
    }
#line 944 "accumulator.m"
  }
#line 944 "accumulator.m"
}

#line 944 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0_5(
#line 944 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 944 "accumulator.m"
{
#line 944 "accumulator.m"
  {
#line 944 "accumulator.m"
    struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 944 "accumulator.m"
    if (MR_builtin_setjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__commit_0) == 0)
#line 944 "accumulator.m"
      {
#line 944 "accumulator.m"
        {
#line 957 "accumulator.m"
          {
#line 957 "accumulator.m"
            transform_hlds__goal_store__goal_store_member_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalStore_13, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__conv1_LessThanGoalId_28, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__V_33_33, transform_hlds__accumulator__accu_update_7_p_0_4, transform_hlds__accumulator__env_ptr);
          }
#line 944 "accumulator.m"
        }
#line 944 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = MR_FALSE;
#line 944 "accumulator.m"
      }
#line 944 "accumulator.m"
    else
#line 944 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = MR_TRUE;
#line 944 "accumulator.m"
  }
#line 944 "accumulator.m"
}

#line 927 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_update_7_p_0(
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 927 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 927 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14)
#line 927 "accumulator.m"
{
#line 927 "accumulator.m"
  {
#line 927 "accumulator.m"
    struct transform_hlds__accumulator__accu_update_7_p_0_env_0_s transform_hlds__accumulator__env;

#line 927 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__ModuleInfo_8 = transform_hlds__accumulator__ModuleInfo_8;
#line 927 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__VarTypes_9 = transform_hlds__accumulator__VarTypes_9;
#line 927 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__FullyStrict_10 = transform_hlds__accumulator__FullyStrict_10;
#line 927 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalId_11 = transform_hlds__accumulator__GoalId_11;
#line 927 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__K_12 = transform_hlds__accumulator__K_12;
#line 927 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalStore_13 = transform_hlds__accumulator__GoalStore_13;
#line 930 "accumulator.m"
    {
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__TypeCtorInfo_21_58;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__TypeInfo_22_59;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__PredId_20;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__Args_22;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_31_31;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_32_32;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__PredInfo_46;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__Assertions_47;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__Result_50;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_51_51;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_52_52;
#line 930 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_55_55;
#line 931 "accumulator.m"
      MR_Integer transform_hlds__accumulator___I_16;
#line 932 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_36_36;
#line 932 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_37_37;
#line 932 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_38_38;
#line 932 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_39_39;
#line 932 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_40_40;
#line 934 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_26_26;
#line 934 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_21_21;
#line 934 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_23_23;
#line 934 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_24_24;
#line 934 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_25_25;
#line 1057 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_27_27;

#line 931 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 931 "accumulator.m"
      transform_hlds__accumulator___I_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 932 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__Before_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 0)));
#line 932 "accumulator.m"
      transform_hlds__accumulator__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 1)));
#line 932 "accumulator.m"
      transform_hlds__accumulator__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 2)));
#line 932 "accumulator.m"
      transform_hlds__accumulator__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 3)));
#line 932 "accumulator.m"
      transform_hlds__accumulator__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 4)));
#line 932 "accumulator.m"
      transform_hlds__accumulator__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 5)));
#line 14735 "transform_hlds.accumulator.c"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 933 "accumulator.m"
      {
#line 933 "accumulator.m"
        transform_hlds__goal_store__goal_store_lookup_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__TypeCtorInfo_41_41, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalStore_13, ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__GoalId_11)), &transform_hlds__accumulator__V_31_31);
      }
#line 933 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, (MR_Integer) 0)));
#line 933 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__LaterInstMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, (MR_Integer) 1)));
#line 934 "accumulator.m"
      transform_hlds__accumulator__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__LaterGoal_18, (MR_Integer) 0)));
#line 934 "accumulator.m"
      transform_hlds__accumulator__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__LaterGoal_18, (MR_Integer) 1)));
#line 934 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_32_32)) == (MR_mktag((MR_Integer) 2)));
#line 934 "accumulator.m"
      if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded)
#line 934 "accumulator.m"
        {
#line 934 "accumulator.m"
          transform_hlds__accumulator__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 0)));
#line 934 "accumulator.m"
          transform_hlds__accumulator__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 1)));
#line 934 "accumulator.m"
          transform_hlds__accumulator__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 2)));
#line 934 "accumulator.m"
          transform_hlds__accumulator__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 3)));
#line 934 "accumulator.m"
          transform_hlds__accumulator__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 4)));
#line 934 "accumulator.m"
          transform_hlds__accumulator__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 5)));
#line 1047 "accumulator.m"
          {
#line 1047 "accumulator.m"
            hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__ModuleInfo_8, transform_hlds__accumulator__PredId_20, &transform_hlds__accumulator__PredInfo_46);
          }
#line 1048 "accumulator.m"
          {
#line 1048 "accumulator.m"
            hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__accumulator__PredInfo_46, &transform_hlds__accumulator__Assertions_47);
          }
#line 14778 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__TypeCtorInfo_21_58 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0;
#line 1049 "accumulator.m"
          {
#line 1049 "accumulator.m"
            transform_hlds__accumulator__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "accumulator.m"
            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_51_51, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_8[0]));
#line 1049 "accumulator.m"
            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_51_51, 1) = ((MR_Box) (transform_hlds__accumulator__accu_update_7_p_0_1));
#line 1049 "accumulator.m"
            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1049 "accumulator.m"
            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_51_51, 3) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__ModuleInfo_8));
#line 1049 "accumulator.m"
            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_51_51, 4) = ((MR_Box) (transform_hlds__accumulator__PredId_20));
#line 1049 "accumulator.m"
            MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_51_51, 5) = ((MR_Box) (transform_hlds__accumulator__Args_22));
#line 1049 "accumulator.m"
          }
#line 1054 "accumulator.m"
          {
#line 1054 "accumulator.m"
            transform_hlds__accumulator__V_52_52 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_21_58, transform_hlds__accumulator__Assertions_47);
          }
#line 14803 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__TypeInfo_22_59 = (MR_Word) &transform_hlds__accumulator_scalar_common_2[0];
#line 1049 "accumulator.m"
          {
#line 1049 "accumulator.m"
            mercury__list__filter_map_3_p_0(transform_hlds__accumulator__TypeCtorInfo_21_58, transform_hlds__accumulator__TypeInfo_22_59, transform_hlds__accumulator__V_51_51, transform_hlds__accumulator__V_52_52, &transform_hlds__accumulator__Result_50);
          }
#line 1057 "accumulator.m"
          (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Result_50)) == (MR_mktag((MR_Integer) 1)));
#line 1057 "accumulator.m"
          if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded)
#line 1057 "accumulator.m"
            {
#line 1057 "accumulator.m"
              transform_hlds__accumulator__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Result_50, (MR_Integer) 0)));
#line 1057 "accumulator.m"
              transform_hlds__accumulator__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Result_50, (MR_Integer) 1)));
#line 1057 "accumulator.m"
              (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = (transform_hlds__accumulator__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 930 "accumulator.m"
              if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded)
#line 930 "accumulator.m"
                {
#line 944 "accumulator.m"
                  {
#line 944 "accumulator.m"
                    transform_hlds__accumulator__accu_update_7_p_0_5(&transform_hlds__accumulator__env);
                  }
#line 944 "accumulator.m"
                  (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded);
#line 930 "accumulator.m"
                }
#line 1057 "accumulator.m"
            }
#line 934 "accumulator.m"
        }
#line 930 "accumulator.m"
      return (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_update_7_p_0_env_0__succeeded;
#line 930 "accumulator.m"
    }
#line 927 "accumulator.m"
  }
#line 927 "accumulator.m"
}

#line 1070 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0_1(
#line 1070 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 1070 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1)
#line 1070 "accumulator.m"
{
#line 1070 "accumulator.m"
  {
#line 1070 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 1070 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;

#line 1070 "accumulator.m"
    {
#line 1070 "accumulator.m"
      return transform_hlds__accumulator__succeeded = transform_hlds__accumulator__IntroducedFrom__pred__is_associative_construction__1072__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 5))), ((MR_Integer) transform_hlds__accumulator__wrapper_arg_1));
    }
#line 1070 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 1070 "accumulator.m"
  }
#line 1070 "accumulator.m"
}

#line 915 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0_2(
#line 915 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 915 "accumulator.m"
{
#line 915 "accumulator.m"
  {
#line 915 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 915 "accumulator.m"
    MR_builtin_longjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__commit_0, 1);
#line 915 "accumulator.m"
  }
#line 915 "accumulator.m"
}

#line 915 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0_3(
#line 915 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 915 "accumulator.m"
{
#line 915 "accumulator.m"
  {
#line 915 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 915 "accumulator.m"
    {
#line 917 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_55_55;
#line 917 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_56_56;
#line 917 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_57_57;
#line 917 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_58_58;

#line 911 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__EarlierGoal_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__V_54_54, (MR_Integer) 0)));
#line 911 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__EarlierInstMap_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__V_54_54, (MR_Integer) 1)));
#line 912 "accumulator.m"
      {
#line 912 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = hlds__goal_util__can_reorder_goals_old_7_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ModuleInfo_8, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__VarTypes_9, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__FullyStrict_10, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__EarlierInstMap_48, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__EarlierGoal_47, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LaterInstMap_21, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LaterGoal_20);
      }
#line 912 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded);
#line 915 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded)
#line 915 "accumulator.m"
        {
#line 918 "accumulator.m"
          {
#line 918 "accumulator.m"
            transform_hlds__accumulator__V_58_58 = transform_hlds__accumulator__set_upto_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Case_15, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__K_12);
          }
#line 918 "accumulator.m"
          {
#line 918 "accumulator.m"
            transform_hlds__accumulator__V_57_57 = mercury__set__union_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, transform_hlds__accumulator__V_58_58, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Before_17);
          }
#line 918 "accumulator.m"
          {
#line 918 "accumulator.m"
            transform_hlds__accumulator__V_56_56 = mercury__set__union_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, transform_hlds__accumulator__V_57_57, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Assoc_18);
          }
#line 919 "accumulator.m"
          {
#line 919 "accumulator.m"
            transform_hlds__accumulator__V_55_55 = mercury__set__union_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, transform_hlds__accumulator__V_56_56, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ConstructAssoc_19);
          }
#line 917 "accumulator.m"
          {
#line 917 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = mercury__set__member_2_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LessThanGoalId_46)), transform_hlds__accumulator__V_55_55);
          }
#line 915 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded);
#line 915 "accumulator.m"
          if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded)
#line 915 "accumulator.m"
            {
#line 915 "accumulator.m"
              transform_hlds__accumulator__accu_construct_assoc_7_p_0_2(transform_hlds__accumulator__env_ptr);
#line 915 "accumulator.m"
              return;
            }
#line 915 "accumulator.m"
        }
#line 915 "accumulator.m"
    }
#line 915 "accumulator.m"
  }
#line 915 "accumulator.m"
}

#line 915 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0_4(
#line 915 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 915 "accumulator.m"
{
#line 915 "accumulator.m"
  {
#line 915 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 915 "accumulator.m"
    if (MR_builtin_setjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__commit_0) == 0)
#line 915 "accumulator.m"
      {
#line 910 "accumulator.m"
        {
#line 910 "accumulator.m"
          transform_hlds__accumulator__member_lessthan_goalid_4_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalStore_13, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalId_11, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LessThanGoalId_46, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__V_54_54, transform_hlds__accumulator__accu_construct_assoc_7_p_0_3, transform_hlds__accumulator__env_ptr);
        }
#line 915 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = MR_FALSE;
#line 915 "accumulator.m"
      }
#line 915 "accumulator.m"
    else
#line 915 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = MR_TRUE;
#line 915 "accumulator.m"
  }
#line 915 "accumulator.m"
}

#line 885 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_construct_assoc_7_p_0(
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 885 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 885 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14)
#line 885 "accumulator.m"
{
#line 885 "accumulator.m"
  {
#line 885 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0_s transform_hlds__accumulator__env;

#line 885 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ModuleInfo_8 = transform_hlds__accumulator__ModuleInfo_8;
#line 885 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__VarTypes_9 = transform_hlds__accumulator__VarTypes_9;
#line 885 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__FullyStrict_10 = transform_hlds__accumulator__FullyStrict_10;
#line 885 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalId_11 = transform_hlds__accumulator__GoalId_11;
#line 885 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__K_12 = transform_hlds__accumulator__K_12;
#line 885 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalStore_13 = transform_hlds__accumulator__GoalStore_13;
#line 889 "accumulator.m"
    {
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__TypeCtorInfo_17_88;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__Unify_25;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__ConsId_29;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__Ancestors_35;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__AssocId_36;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__AssocGoal_37;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__PredId_39;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_49_49;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_50_50;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_51_51;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_52_52;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_53_53;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__PredInfo_78;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__Assertions_79;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__Result_81;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_84_84;
#line 889 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_85_85;
#line 890 "accumulator.m"
      MR_Integer transform_hlds__accumulator___I_16;
#line 891 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_61_61;
#line 891 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_62_62;
#line 891 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_63_63;
#line 895 "accumulator.m"
      MR_Word transform_hlds__accumulator___GoalInfo_27;
#line 895 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_22_22;
#line 895 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_23_23;
#line 895 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_24_24;
#line 895 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_26_26;
#line 896 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_28_28;
#line 896 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_30_30;
#line 896 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_31_31;
#line 896 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_32_32;
#line 896 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_33_33;
#line 896 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_34_34;
#line 901 "accumulator.m"
      MR_Box transform_hlds__accumulator__conv0_AssocId_36;
#line 903 "accumulator.m"
      MR_Word transform_hlds__accumulator___AssocInstMap_38;
#line 904 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_45_45;
#line 904 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_40_40;
#line 904 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_41_41;
#line 904 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_42_42;
#line 904 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_43_43;
#line 904 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_44_44;
#line 1076 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_82_82;
#line 1076 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_83_83;

#line 890 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 890 "accumulator.m"
      transform_hlds__accumulator___I_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 891 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Before_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 0)));
#line 891 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Assoc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 1)));
#line 891 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ConstructAssoc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 2)));
#line 891 "accumulator.m"
      transform_hlds__accumulator__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 3)));
#line 891 "accumulator.m"
      transform_hlds__accumulator__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 4)));
#line 891 "accumulator.m"
      transform_hlds__accumulator__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 5)));
#line 15151 "transform_hlds.accumulator.c"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 894 "accumulator.m"
      {
#line 894 "accumulator.m"
        transform_hlds__goal_store__goal_store_lookup_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalStore_13, ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalId_11)), &transform_hlds__accumulator__V_49_49);
      }
#line 894 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LaterGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_49_49, (MR_Integer) 0)));
#line 894 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LaterInstMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_49_49, (MR_Integer) 1)));
#line 895 "accumulator.m"
      transform_hlds__accumulator__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LaterGoal_20, (MR_Integer) 0)));
#line 895 "accumulator.m"
      transform_hlds__accumulator___GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__LaterGoal_20, (MR_Integer) 1)));
#line 895 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 895 "accumulator.m"
      if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded)
#line 895 "accumulator.m"
        {
#line 895 "accumulator.m"
          transform_hlds__accumulator__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_50_50, (MR_Integer) 0)));
#line 895 "accumulator.m"
          transform_hlds__accumulator__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_50_50, (MR_Integer) 1)));
#line 895 "accumulator.m"
          transform_hlds__accumulator__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_50_50, (MR_Integer) 2)));
#line 895 "accumulator.m"
          transform_hlds__accumulator__Unify_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_50_50, (MR_Integer) 3)));
#line 895 "accumulator.m"
          transform_hlds__accumulator__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_50_50, (MR_Integer) 4)));
#line 896 "accumulator.m"
          (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Unify_25)) == (MR_mktag((MR_Integer) 0)));
#line 896 "accumulator.m"
          if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded)
#line 896 "accumulator.m"
            {
#line 896 "accumulator.m"
              transform_hlds__accumulator__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_25, (MR_Integer) 0)));
#line 896 "accumulator.m"
              transform_hlds__accumulator__ConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_25, (MR_Integer) 1)));
#line 896 "accumulator.m"
              transform_hlds__accumulator__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_25, (MR_Integer) 2)));
#line 896 "accumulator.m"
              transform_hlds__accumulator__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_25, (MR_Integer) 3)));
#line 896 "accumulator.m"
              transform_hlds__accumulator__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_25, (MR_Integer) 4)));
#line 896 "accumulator.m"
              transform_hlds__accumulator__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_25, (MR_Integer) 5)));
#line 896 "accumulator.m"
              transform_hlds__accumulator__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_25, (MR_Integer) 6)));
#line 898 "accumulator.m"
              {
#line 898 "accumulator.m"
                transform_hlds__goal_store__goal_store_all_ancestors_6_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalStore_13, ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalId_11)), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__VarTypes_9, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ModuleInfo_8, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__FullyStrict_10, &transform_hlds__accumulator__Ancestors_35);
              }
#line 901 "accumulator.m"
              {
#line 901 "accumulator.m"
                transform_hlds__accumulator__V_51_51 = mercury__set__intersect_2_f_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__Assoc_18, transform_hlds__accumulator__Ancestors_35);
              }
#line 901 "accumulator.m"
              {
#line 901 "accumulator.m"
                (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = mercury__set__is_singleton_2_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, transform_hlds__accumulator__V_51_51, &transform_hlds__accumulator__conv0_AssocId_36);
              }
#line 901 "accumulator.m"
              if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded)
#line 901 "accumulator.m"
                {
#line 901 "accumulator.m"
                  transform_hlds__accumulator__AssocId_36 = ((MR_Word) transform_hlds__accumulator__conv0_AssocId_36);
#line 901 "accumulator.m"
                  (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = MR_TRUE;
#line 901 "accumulator.m"
                }
#line 889 "accumulator.m"
              if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded)
#line 889 "accumulator.m"
                {
#line 902 "accumulator.m"
                  {
#line 902 "accumulator.m"
                    transform_hlds__goal_store__goal_store_lookup_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__TypeCtorInfo_74_74, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__GoalStore_13, ((MR_Box) (transform_hlds__accumulator__AssocId_36)), &transform_hlds__accumulator__V_52_52);
                  }
#line 903 "accumulator.m"
                  transform_hlds__accumulator__AssocGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_52_52, (MR_Integer) 0)));
#line 903 "accumulator.m"
                  transform_hlds__accumulator___AssocInstMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_52_52, (MR_Integer) 1)));
#line 904 "accumulator.m"
                  transform_hlds__accumulator__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__AssocGoal_37, (MR_Integer) 0)));
#line 904 "accumulator.m"
                  transform_hlds__accumulator__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__AssocGoal_37, (MR_Integer) 1)));
#line 904 "accumulator.m"
                  (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_53_53)) == (MR_mktag((MR_Integer) 2)));
#line 904 "accumulator.m"
                  if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded)
#line 904 "accumulator.m"
                    {
#line 904 "accumulator.m"
                      transform_hlds__accumulator__PredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_53_53, (MR_Integer) 0)));
#line 904 "accumulator.m"
                      transform_hlds__accumulator__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_53_53, (MR_Integer) 1)));
#line 904 "accumulator.m"
                      transform_hlds__accumulator__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_53_53, (MR_Integer) 2)));
#line 904 "accumulator.m"
                      transform_hlds__accumulator__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_53_53, (MR_Integer) 3)));
#line 904 "accumulator.m"
                      transform_hlds__accumulator__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_53_53, (MR_Integer) 4)));
#line 904 "accumulator.m"
                      transform_hlds__accumulator__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_53_53, (MR_Integer) 5)));
#line 1068 "accumulator.m"
                      {
#line 1068 "accumulator.m"
                        hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ModuleInfo_8, transform_hlds__accumulator__PredId_39, &transform_hlds__accumulator__PredInfo_78);
                      }
#line 1069 "accumulator.m"
                      {
#line 1069 "accumulator.m"
                        hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__accumulator__PredInfo_78, &transform_hlds__accumulator__Assertions_79);
                      }
#line 15272 "transform_hlds.accumulator.c"
                      transform_hlds__accumulator__TypeCtorInfo_17_88 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0;
#line 1070 "accumulator.m"
                      {
#line 1070 "accumulator.m"
                        transform_hlds__accumulator__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "accumulator.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_84_84, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_6[1]));
#line 1070 "accumulator.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_84_84, 1) = ((MR_Box) (transform_hlds__accumulator__accu_construct_assoc_7_p_0_1));
#line 1070 "accumulator.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1070 "accumulator.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_84_84, 3) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__ModuleInfo_8));
#line 1070 "accumulator.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_84_84, 4) = ((MR_Box) (transform_hlds__accumulator__PredId_39));
#line 1070 "accumulator.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_84_84, 5) = ((MR_Box) (transform_hlds__accumulator__ConsId_29));
#line 1070 "accumulator.m"
                      }
#line 1075 "accumulator.m"
                      {
#line 1075 "accumulator.m"
                        transform_hlds__accumulator__V_85_85 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_17_88, transform_hlds__accumulator__Assertions_79);
                      }
#line 1070 "accumulator.m"
                      {
#line 1070 "accumulator.m"
                        mercury__list__filter_3_p_0(transform_hlds__accumulator__TypeCtorInfo_17_88, transform_hlds__accumulator__V_84_84, transform_hlds__accumulator__V_85_85, &transform_hlds__accumulator__Result_81);
                      }
#line 1076 "accumulator.m"
                      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Result_81)) == (MR_mktag((MR_Integer) 1)));
#line 1076 "accumulator.m"
                      if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded)
#line 1076 "accumulator.m"
                        {
#line 1076 "accumulator.m"
                          transform_hlds__accumulator__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Result_81, (MR_Integer) 0)));
#line 1076 "accumulator.m"
                          transform_hlds__accumulator__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Result_81, (MR_Integer) 1)));
#line 915 "accumulator.m"
                          {
#line 915 "accumulator.m"
                            transform_hlds__accumulator__accu_construct_assoc_7_p_0_4(&transform_hlds__accumulator__env);
                          }
#line 915 "accumulator.m"
                          (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded);
#line 1076 "accumulator.m"
                        }
#line 904 "accumulator.m"
                    }
#line 889 "accumulator.m"
                }
#line 896 "accumulator.m"
            }
#line 895 "accumulator.m"
        }
#line 889 "accumulator.m"
      return (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_assoc_7_p_0_env_0__succeeded;
#line 889 "accumulator.m"
    }
#line 885 "accumulator.m"
  }
#line 885 "accumulator.m"
}

#line 870 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0_1(
#line 870 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 870 "accumulator.m"
{
#line 870 "accumulator.m"
  {
#line 870 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 870 "accumulator.m"
    MR_builtin_longjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__commit_0, 1);
#line 870 "accumulator.m"
  }
#line 870 "accumulator.m"
}

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0_3(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 957 "accumulator.m"
{
#line 957 "accumulator.m"
  {
#line 957 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 957 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__LessThanGoalId_34 = ((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__conv0_LessThanGoalId_34);
#line 957 "accumulator.m"
    {
#line 957 "accumulator.m"
      transform_hlds__accumulator__accu_construct_7_p_0_2(transform_hlds__accumulator__env_ptr);
#line 957 "accumulator.m"
      return;
    }
#line 957 "accumulator.m"
  }
#line 957 "accumulator.m"
}

#line 870 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0_2(
#line 870 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 870 "accumulator.m"
{
#line 870 "accumulator.m"
  {
#line 870 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 870 "accumulator.m"
    {
#line 872 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_40_40;
#line 872 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_41_41;
#line 872 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_42_42;

#line 958 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__Case_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 958 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__I_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__LessThanGoalId_34, (MR_Integer) 0)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__J_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__LessThanGoalId_34, (MR_Integer) 1)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__Case_58 == (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__V_62_62);
#line 870 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded)
#line 870 "accumulator.m"
        {
#line 960 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__J_60 < (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__I_59);
#line 870 "accumulator.m"
          if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded)
#line 870 "accumulator.m"
            {
#line 866 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__EarlierGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__V_39_39, (MR_Integer) 0)));
#line 866 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__EarlierInstMap_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__V_39_39, (MR_Integer) 1)));
#line 867 "accumulator.m"
              {
#line 867 "accumulator.m"
                (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = hlds__goal_util__can_reorder_goals_old_7_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__ModuleInfo_8, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__VarTypes_9, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__FullyStrict_10, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__EarlierInstMap_36, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__EarlierGoal_35, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__LaterInstMap_20, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__LaterGoal_19);
              }
#line 867 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded);
#line 870 "accumulator.m"
              if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded)
#line 870 "accumulator.m"
                {
#line 873 "accumulator.m"
                  {
#line 873 "accumulator.m"
                    transform_hlds__accumulator__V_42_42 = transform_hlds__accumulator__set_upto_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__Case_15, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__K_12);
                  }
#line 873 "accumulator.m"
                  {
#line 873 "accumulator.m"
                    transform_hlds__accumulator__V_41_41 = mercury__set__union_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__TypeCtorInfo_53_53, transform_hlds__accumulator__V_42_42, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__Before_17);
                  }
#line 873 "accumulator.m"
                  {
#line 873 "accumulator.m"
                    transform_hlds__accumulator__V_40_40 = mercury__set__union_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__TypeCtorInfo_53_53, transform_hlds__accumulator__V_41_41, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__Construct_18);
                  }
#line 872 "accumulator.m"
                  {
#line 872 "accumulator.m"
                    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = mercury__set__member_2_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__TypeCtorInfo_53_53, ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__LessThanGoalId_34)), transform_hlds__accumulator__V_40_40);
                  }
#line 870 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded);
#line 870 "accumulator.m"
                  if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded)
#line 870 "accumulator.m"
                    {
#line 870 "accumulator.m"
                      transform_hlds__accumulator__accu_construct_7_p_0_1(transform_hlds__accumulator__env_ptr);
#line 870 "accumulator.m"
                      return;
                    }
#line 870 "accumulator.m"
                }
#line 870 "accumulator.m"
            }
#line 870 "accumulator.m"
        }
#line 870 "accumulator.m"
    }
#line 870 "accumulator.m"
  }
#line 870 "accumulator.m"
}

#line 870 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0_4(
#line 870 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 870 "accumulator.m"
{
#line 870 "accumulator.m"
  {
#line 870 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 870 "accumulator.m"
    if (MR_builtin_setjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__commit_0) == 0)
#line 870 "accumulator.m"
      {
#line 870 "accumulator.m"
        {
#line 957 "accumulator.m"
          {
#line 957 "accumulator.m"
            transform_hlds__goal_store__goal_store_member_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalStore_13, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__conv0_LessThanGoalId_34, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__V_39_39, transform_hlds__accumulator__accu_construct_7_p_0_3, transform_hlds__accumulator__env_ptr);
          }
#line 870 "accumulator.m"
        }
#line 870 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = MR_FALSE;
#line 870 "accumulator.m"
      }
#line 870 "accumulator.m"
    else
#line 870 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = MR_TRUE;
#line 870 "accumulator.m"
  }
#line 870 "accumulator.m"
}

#line 851 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_construct_7_p_0(
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 851 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 851 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14)
#line 851 "accumulator.m"
{
#line 851 "accumulator.m"
  {
#line 851 "accumulator.m"
    struct transform_hlds__accumulator__accu_construct_7_p_0_env_0_s transform_hlds__accumulator__env;

#line 851 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__ModuleInfo_8 = transform_hlds__accumulator__ModuleInfo_8;
#line 851 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__VarTypes_9 = transform_hlds__accumulator__VarTypes_9;
#line 851 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__FullyStrict_10 = transform_hlds__accumulator__FullyStrict_10;
#line 851 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalId_11 = transform_hlds__accumulator__GoalId_11;
#line 851 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__K_12 = transform_hlds__accumulator__K_12;
#line 851 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalStore_13 = transform_hlds__accumulator__GoalStore_13;
#line 855 "accumulator.m"
    {
#line 855 "accumulator.m"
      MR_Word transform_hlds__accumulator__Unify_24;
#line 855 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_37_37;
#line 855 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_38_38;
#line 856 "accumulator.m"
      MR_Integer transform_hlds__accumulator___I_16;
#line 857 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_43_43;
#line 857 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_44_44;
#line 857 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_46_46;
#line 857 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_47_47;
#line 860 "accumulator.m"
      MR_Word transform_hlds__accumulator___GoalInfo_26;
#line 860 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_21_21;
#line 860 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_22_22;
#line 860 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_23_23;
#line 860 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_25_25;
#line 861 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_27_27;
#line 861 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_28_28;
#line 861 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_29_29;
#line 861 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_30_30;
#line 861 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_31_31;
#line 861 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_32_32;
#line 861 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_33_33;

#line 856 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 856 "accumulator.m"
      transform_hlds__accumulator___I_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 857 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__Before_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 0)));
#line 857 "accumulator.m"
      transform_hlds__accumulator__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 1)));
#line 857 "accumulator.m"
      transform_hlds__accumulator__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 2)));
#line 857 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__Construct_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 3)));
#line 857 "accumulator.m"
      transform_hlds__accumulator__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 4)));
#line 857 "accumulator.m"
      transform_hlds__accumulator__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 5)));
#line 15616 "transform_hlds.accumulator.c"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__TypeCtorInfo_53_53 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 859 "accumulator.m"
      {
#line 859 "accumulator.m"
        transform_hlds__goal_store__goal_store_lookup_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__TypeCtorInfo_53_53, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalStore_13, ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__GoalId_11)), &transform_hlds__accumulator__V_37_37);
      }
#line 859 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__LaterGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_37_37, (MR_Integer) 0)));
#line 859 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__LaterInstMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_37_37, (MR_Integer) 1)));
#line 860 "accumulator.m"
      transform_hlds__accumulator__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__LaterGoal_19, (MR_Integer) 0)));
#line 860 "accumulator.m"
      transform_hlds__accumulator___GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__LaterGoal_19, (MR_Integer) 1)));
#line 860 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 860 "accumulator.m"
      if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded)
#line 860 "accumulator.m"
        {
#line 860 "accumulator.m"
          transform_hlds__accumulator__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_38_38, (MR_Integer) 0)));
#line 860 "accumulator.m"
          transform_hlds__accumulator__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_38_38, (MR_Integer) 1)));
#line 860 "accumulator.m"
          transform_hlds__accumulator__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_38_38, (MR_Integer) 2)));
#line 860 "accumulator.m"
          transform_hlds__accumulator__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_38_38, (MR_Integer) 3)));
#line 860 "accumulator.m"
          transform_hlds__accumulator__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_38_38, (MR_Integer) 4)));
#line 861 "accumulator.m"
          (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Unify_24)) == (MR_mktag((MR_Integer) 0)));
#line 861 "accumulator.m"
          if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded)
#line 861 "accumulator.m"
            {
#line 861 "accumulator.m"
              transform_hlds__accumulator__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_24, (MR_Integer) 0)));
#line 861 "accumulator.m"
              transform_hlds__accumulator__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_24, (MR_Integer) 1)));
#line 861 "accumulator.m"
              transform_hlds__accumulator__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_24, (MR_Integer) 2)));
#line 861 "accumulator.m"
              transform_hlds__accumulator__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_24, (MR_Integer) 3)));
#line 861 "accumulator.m"
              transform_hlds__accumulator__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_24, (MR_Integer) 4)));
#line 861 "accumulator.m"
              transform_hlds__accumulator__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_24, (MR_Integer) 5)));
#line 861 "accumulator.m"
              transform_hlds__accumulator__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Unify_24, (MR_Integer) 6)));
#line 870 "accumulator.m"
              {
#line 870 "accumulator.m"
                transform_hlds__accumulator__accu_construct_7_p_0_4(&transform_hlds__accumulator__env);
              }
#line 870 "accumulator.m"
              (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded);
#line 861 "accumulator.m"
            }
#line 860 "accumulator.m"
        }
#line 855 "accumulator.m"
      return (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_construct_7_p_0_env_0__succeeded;
#line 855 "accumulator.m"
    }
#line 851 "accumulator.m"
  }
#line 851 "accumulator.m"
}

#line 841 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0_1(
#line 841 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 841 "accumulator.m"
{
#line 841 "accumulator.m"
  {
#line 841 "accumulator.m"
    struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 841 "accumulator.m"
    MR_builtin_longjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__commit_0, 1);
#line 841 "accumulator.m"
  }
#line 841 "accumulator.m"
}

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0_3(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 957 "accumulator.m"
{
#line 957 "accumulator.m"
  {
#line 957 "accumulator.m"
    struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 957 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LessThanGoalId_28 = ((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__conv0_LessThanGoalId_28);
#line 957 "accumulator.m"
    {
#line 957 "accumulator.m"
      transform_hlds__accumulator__accu_assoc_7_p_0_2(transform_hlds__accumulator__env_ptr);
#line 957 "accumulator.m"
      return;
    }
#line 957 "accumulator.m"
  }
#line 957 "accumulator.m"
}

#line 841 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0_2(
#line 841 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 841 "accumulator.m"
{
#line 841 "accumulator.m"
  {
#line 841 "accumulator.m"
    struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 841 "accumulator.m"
    {
#line 843 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_34_34;
#line 843 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_35_35;

#line 958 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Case_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 958 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__I_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LessThanGoalId_28, (MR_Integer) 0)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__J_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LessThanGoalId_28, (MR_Integer) 1)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Case_59 == (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__V_63_63);
#line 841 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded)
#line 841 "accumulator.m"
        {
#line 960 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__J_61 < (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__I_60);
#line 841 "accumulator.m"
          if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded)
#line 841 "accumulator.m"
            {
#line 837 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__EarlierGoal_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__V_33_33, (MR_Integer) 0)));
#line 837 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__EarlierInstMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__V_33_33, (MR_Integer) 1)));
#line 838 "accumulator.m"
              {
#line 838 "accumulator.m"
                (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = hlds__goal_util__can_reorder_goals_old_7_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__ModuleInfo_8, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__VarTypes_9, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__FullyStrict_10, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__EarlierInstMap_30, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__EarlierGoal_29, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LaterInstMap_19, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LaterGoal_18);
              }
#line 838 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded);
#line 841 "accumulator.m"
              if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded)
#line 841 "accumulator.m"
                {
#line 843 "accumulator.m"
                  {
#line 843 "accumulator.m"
                    transform_hlds__accumulator__V_35_35 = transform_hlds__accumulator__set_upto_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Case_15, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__K_12);
                  }
#line 843 "accumulator.m"
                  {
#line 843 "accumulator.m"
                    transform_hlds__accumulator__V_34_34 = mercury__set__union_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__TypeCtorInfo_41_41, transform_hlds__accumulator__V_35_35, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Before_17);
                  }
#line 843 "accumulator.m"
                  {
#line 843 "accumulator.m"
                    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = mercury__set__member_2_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__TypeCtorInfo_41_41, ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LessThanGoalId_28)), transform_hlds__accumulator__V_34_34);
                  }
#line 841 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded);
#line 841 "accumulator.m"
                  if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded)
#line 841 "accumulator.m"
                    {
#line 841 "accumulator.m"
                      transform_hlds__accumulator__accu_assoc_7_p_0_1(transform_hlds__accumulator__env_ptr);
#line 841 "accumulator.m"
                      return;
                    }
#line 841 "accumulator.m"
                }
#line 841 "accumulator.m"
            }
#line 841 "accumulator.m"
        }
#line 841 "accumulator.m"
    }
#line 841 "accumulator.m"
  }
#line 841 "accumulator.m"
}

#line 841 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0_4(
#line 841 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 841 "accumulator.m"
{
#line 841 "accumulator.m"
  {
#line 841 "accumulator.m"
    struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 841 "accumulator.m"
    if (MR_builtin_setjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__commit_0) == 0)
#line 841 "accumulator.m"
      {
#line 841 "accumulator.m"
        {
#line 957 "accumulator.m"
          {
#line 957 "accumulator.m"
            transform_hlds__goal_store__goal_store_member_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalStore_13, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__conv0_LessThanGoalId_28, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__V_33_33, transform_hlds__accumulator__accu_assoc_7_p_0_3, transform_hlds__accumulator__env_ptr);
          }
#line 841 "accumulator.m"
        }
#line 841 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = MR_FALSE;
#line 841 "accumulator.m"
      }
#line 841 "accumulator.m"
    else
#line 841 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = MR_TRUE;
#line 841 "accumulator.m"
  }
#line 841 "accumulator.m"
}

#line 824 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_assoc_7_p_0(
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 824 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 824 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14)
#line 824 "accumulator.m"
{
#line 824 "accumulator.m"
  {
#line 824 "accumulator.m"
    struct transform_hlds__accumulator__accu_assoc_7_p_0_env_0_s transform_hlds__accumulator__env;

#line 824 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__ModuleInfo_8 = transform_hlds__accumulator__ModuleInfo_8;
#line 824 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__VarTypes_9 = transform_hlds__accumulator__VarTypes_9;
#line 824 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__FullyStrict_10 = transform_hlds__accumulator__FullyStrict_10;
#line 824 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalId_11 = transform_hlds__accumulator__GoalId_11;
#line 824 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__K_12 = transform_hlds__accumulator__K_12;
#line 824 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalStore_13 = transform_hlds__accumulator__GoalStore_13;
#line 827 "accumulator.m"
    {
#line 827 "accumulator.m"
      MR_Word transform_hlds__accumulator__TypeCtorInfo_17_54;
#line 827 "accumulator.m"
      MR_Word transform_hlds__accumulator__PredId_20;
#line 827 "accumulator.m"
      MR_Word transform_hlds__accumulator__Args_22;
#line 827 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_31_31;
#line 827 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_32_32;
#line 827 "accumulator.m"
      MR_Word transform_hlds__accumulator__PredInfo_46;
#line 827 "accumulator.m"
      MR_Word transform_hlds__accumulator__Assertions_47;
#line 827 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_52_52;
#line 828 "accumulator.m"
      MR_Integer transform_hlds__accumulator___I_16;
#line 829 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_36_36;
#line 829 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_37_37;
#line 829 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_38_38;
#line 829 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_39_39;
#line 829 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_40_40;
#line 831 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_26_26;
#line 831 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_21_21;
#line 831 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_23_23;
#line 831 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_24_24;
#line 831 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_25_25;
#line 981 "accumulator.m"
      MR_Word transform_hlds__accumulator__AssociativeVars_48;
#line 981 "accumulator.m"
      MR_Word transform_hlds__accumulator__OutputVar_49;
#line 984 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_53_53;
#line 984 "accumulator.m"
      MR_Word transform_hlds__accumulator___CommutativeVars_50;

#line 828 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 828 "accumulator.m"
      transform_hlds__accumulator___I_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 829 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__Before_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 0)));
#line 829 "accumulator.m"
      transform_hlds__accumulator__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 1)));
#line 829 "accumulator.m"
      transform_hlds__accumulator__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 2)));
#line 829 "accumulator.m"
      transform_hlds__accumulator__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 3)));
#line 829 "accumulator.m"
      transform_hlds__accumulator__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 4)));
#line 829 "accumulator.m"
      transform_hlds__accumulator__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 5)));
#line 15964 "transform_hlds.accumulator.c"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 830 "accumulator.m"
      {
#line 830 "accumulator.m"
        transform_hlds__goal_store__goal_store_lookup_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__TypeCtorInfo_41_41, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalStore_13, ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__GoalId_11)), &transform_hlds__accumulator__V_31_31);
      }
#line 830 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, (MR_Integer) 0)));
#line 830 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LaterInstMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_31_31, (MR_Integer) 1)));
#line 831 "accumulator.m"
      transform_hlds__accumulator__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LaterGoal_18, (MR_Integer) 0)));
#line 831 "accumulator.m"
      transform_hlds__accumulator__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__LaterGoal_18, (MR_Integer) 1)));
#line 831 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_32_32)) == (MR_mktag((MR_Integer) 2)));
#line 831 "accumulator.m"
      if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded)
#line 831 "accumulator.m"
        {
#line 831 "accumulator.m"
          transform_hlds__accumulator__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 0)));
#line 831 "accumulator.m"
          transform_hlds__accumulator__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 1)));
#line 831 "accumulator.m"
          transform_hlds__accumulator__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 2)));
#line 831 "accumulator.m"
          transform_hlds__accumulator__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 3)));
#line 831 "accumulator.m"
          transform_hlds__accumulator__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 4)));
#line 831 "accumulator.m"
          transform_hlds__accumulator__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_32_32, (MR_Integer) 5)));
#line 979 "accumulator.m"
          {
#line 979 "accumulator.m"
            hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__ModuleInfo_8, transform_hlds__accumulator__PredId_20, &transform_hlds__accumulator__PredInfo_46);
          }
#line 980 "accumulator.m"
          {
#line 980 "accumulator.m"
            hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__accumulator__PredInfo_46, &transform_hlds__accumulator__Assertions_47);
          }
#line 16007 "transform_hlds.accumulator.c"
          transform_hlds__accumulator__TypeCtorInfo_17_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0;
#line 981 "accumulator.m"
          {
#line 981 "accumulator.m"
            transform_hlds__accumulator__V_52_52 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_17_54, transform_hlds__accumulator__Assertions_47);
          }
#line 981 "accumulator.m"
          {
#line 981 "accumulator.m"
            (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = transform_hlds__accumulator__associativity_assertion_5_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__ModuleInfo_8, transform_hlds__accumulator__V_52_52, transform_hlds__accumulator__Args_22, &transform_hlds__accumulator__AssociativeVars_48, &transform_hlds__accumulator__OutputVar_49);
          }
#line 827 "accumulator.m"
          if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded)
#line 827 "accumulator.m"
            {
#line 984 "accumulator.m"
              {
#line 984 "accumulator.m"
                transform_hlds__accumulator__V_53_53 = mercury__set__to_sorted_list_1_f_0(transform_hlds__accumulator__TypeCtorInfo_17_54, transform_hlds__accumulator__Assertions_47);
              }
#line 984 "accumulator.m"
              {
#line 984 "accumulator.m"
                (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = transform_hlds__accumulator__commutativity_assertion_4_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__ModuleInfo_8, transform_hlds__accumulator__V_53_53, transform_hlds__accumulator__Args_22, &transform_hlds__accumulator___CommutativeVars_50);
              }
#line 988 "accumulator.m"
              if ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded)
#line 987 "accumulator.m"
                {
#line 987 "accumulator.m"
                }
#line 988 "accumulator.m"
              else
#line 989 "accumulator.m"
                {
#line 989 "accumulator.m"
                }
#line 841 "accumulator.m"
              {
#line 841 "accumulator.m"
                transform_hlds__accumulator__accu_assoc_7_p_0_4(&transform_hlds__accumulator__env);
              }
#line 841 "accumulator.m"
              (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded);
#line 827 "accumulator.m"
            }
#line 831 "accumulator.m"
        }
#line 827 "accumulator.m"
      return (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_assoc_7_p_0_env_0__succeeded;
#line 827 "accumulator.m"
    }
#line 824 "accumulator.m"
  }
#line 824 "accumulator.m"
}

#line 814 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0_1(
#line 814 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 814 "accumulator.m"
{
#line 814 "accumulator.m"
  {
#line 814 "accumulator.m"
    struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 814 "accumulator.m"
    MR_builtin_longjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__commit_0, 1);
#line 814 "accumulator.m"
  }
#line 814 "accumulator.m"
}

#line 957 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0_3(
#line 957 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 957 "accumulator.m"
{
#line 957 "accumulator.m"
  {
#line 957 "accumulator.m"
    struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 957 "accumulator.m"
    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__LessThanGoalId_20 = ((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__conv0_LessThanGoalId_20);
#line 957 "accumulator.m"
    {
#line 957 "accumulator.m"
      transform_hlds__accumulator__accu_before_7_p_0_2(transform_hlds__accumulator__env_ptr);
#line 957 "accumulator.m"
      return;
    }
#line 957 "accumulator.m"
  }
#line 957 "accumulator.m"
}

#line 814 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0_2(
#line 814 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 814 "accumulator.m"
{
#line 814 "accumulator.m"
  {
#line 814 "accumulator.m"
    struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 814 "accumulator.m"
    {
#line 816 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_25_25;
#line 816 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_26_26;
#line 816 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_27_27;
#line 816 "accumulator.m"
      MR_Integer transform_hlds__accumulator__V_28_28;

#line 958 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__Case_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 958 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__I_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__LessThanGoalId_20, (MR_Integer) 0)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__J_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__LessThanGoalId_20, (MR_Integer) 1)));
#line 959 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__Case_39 == (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__V_43_43);
#line 814 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded)
#line 814 "accumulator.m"
        {
#line 960 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__J_41 < (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__I_40);
#line 814 "accumulator.m"
          if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded)
#line 814 "accumulator.m"
            {
#line 810 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__EarlierGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__V_24_24, (MR_Integer) 0)));
#line 810 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__EarlierInstMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__V_24_24, (MR_Integer) 1)));
#line 811 "accumulator.m"
              {
#line 811 "accumulator.m"
                (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = hlds__goal_util__can_reorder_goals_old_7_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__ModuleInfo_8, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__VarTypes_9, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__FullyStrict_10, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__EarlierInstMap_22, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__EarlierGoal_21, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__LaterInstMap_19, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__LaterGoal_18);
              }
#line 811 "accumulator.m"
              (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded);
#line 814 "accumulator.m"
              if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded)
#line 814 "accumulator.m"
                {
#line 816 "accumulator.m"
                  transform_hlds__accumulator__V_28_28 = (MR_Integer) 1;
#line 816 "accumulator.m"
                  transform_hlds__accumulator__V_27_27 = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__K_12 - transform_hlds__accumulator__V_28_28);
#line 816 "accumulator.m"
                  {
#line 816 "accumulator.m"
                    transform_hlds__accumulator__V_26_26 = transform_hlds__accumulator__set_upto_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__Case_15, transform_hlds__accumulator__V_27_27);
                  }
#line 816 "accumulator.m"
                  {
#line 816 "accumulator.m"
                    transform_hlds__accumulator__V_25_25 = mercury__set__union_2_f_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__TypeCtorInfo_34_34, transform_hlds__accumulator__V_26_26, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__Before_17);
                  }
#line 816 "accumulator.m"
                  {
#line 816 "accumulator.m"
                    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = mercury__set__member_2_p_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__TypeCtorInfo_34_34, ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__LessThanGoalId_20)), transform_hlds__accumulator__V_25_25);
                  }
#line 814 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded);
#line 814 "accumulator.m"
                  if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded)
#line 814 "accumulator.m"
                    {
#line 814 "accumulator.m"
                      transform_hlds__accumulator__accu_before_7_p_0_1(transform_hlds__accumulator__env_ptr);
#line 814 "accumulator.m"
                      return;
                    }
#line 814 "accumulator.m"
                }
#line 814 "accumulator.m"
            }
#line 814 "accumulator.m"
        }
#line 814 "accumulator.m"
    }
#line 814 "accumulator.m"
  }
#line 814 "accumulator.m"
}

#line 814 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0_4(
#line 814 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 814 "accumulator.m"
{
#line 814 "accumulator.m"
  {
#line 814 "accumulator.m"
    struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 814 "accumulator.m"
    if (MR_builtin_setjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__commit_0) == 0)
#line 814 "accumulator.m"
      {
#line 814 "accumulator.m"
        {
#line 957 "accumulator.m"
          {
#line 957 "accumulator.m"
            transform_hlds__goal_store__goal_store_member_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalStore_13, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__conv0_LessThanGoalId_20, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__V_24_24, transform_hlds__accumulator__accu_before_7_p_0_3, transform_hlds__accumulator__env_ptr);
          }
#line 814 "accumulator.m"
        }
#line 814 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = MR_FALSE;
#line 814 "accumulator.m"
      }
#line 814 "accumulator.m"
    else
#line 814 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = MR_TRUE;
#line 814 "accumulator.m"
  }
#line 814 "accumulator.m"
}

#line 801 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__accu_before_7_p_0(
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_8,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_9,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_10,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_11,
#line 801 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_12,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_13,
#line 801 "accumulator.m"
  MR_Word transform_hlds__accumulator__Sets_14)
#line 801 "accumulator.m"
{
#line 801 "accumulator.m"
  {
#line 801 "accumulator.m"
    struct transform_hlds__accumulator__accu_before_7_p_0_env_0_s transform_hlds__accumulator__env;

#line 801 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__ModuleInfo_8 = transform_hlds__accumulator__ModuleInfo_8;
#line 801 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__VarTypes_9 = transform_hlds__accumulator__VarTypes_9;
#line 801 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__FullyStrict_10 = transform_hlds__accumulator__FullyStrict_10;
#line 801 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalId_11 = transform_hlds__accumulator__GoalId_11;
#line 801 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__K_12 = transform_hlds__accumulator__K_12;
#line 801 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalStore_13 = transform_hlds__accumulator__GoalStore_13;
#line 804 "accumulator.m"
    {
#line 804 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_23_23;
#line 805 "accumulator.m"
      MR_Integer transform_hlds__accumulator___I_16;
#line 806 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_29_29;
#line 806 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_30_30;
#line 806 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_31_31;
#line 806 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_32_32;
#line 806 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_33_33;

#line 805 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalId_11, (MR_Integer) 0)));
#line 805 "accumulator.m"
      transform_hlds__accumulator___I_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalId_11, (MR_Integer) 1)));
#line 806 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__Before_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 0)));
#line 806 "accumulator.m"
      transform_hlds__accumulator__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 1)));
#line 806 "accumulator.m"
      transform_hlds__accumulator__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 2)));
#line 806 "accumulator.m"
      transform_hlds__accumulator__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 3)));
#line 806 "accumulator.m"
      transform_hlds__accumulator__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 4)));
#line 806 "accumulator.m"
      transform_hlds__accumulator__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_14, (MR_Integer) 5)));
#line 16318 "transform_hlds.accumulator.c"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__TypeCtorInfo_34_34 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 807 "accumulator.m"
      {
#line 807 "accumulator.m"
        transform_hlds__goal_store__goal_store_lookup_3_p_0((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__TypeCtorInfo_34_34, (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalStore_13, ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__GoalId_11)), &transform_hlds__accumulator__V_23_23);
      }
#line 807 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_23_23, (MR_Integer) 0)));
#line 807 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__LaterInstMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_23_23, (MR_Integer) 1)));
#line 814 "accumulator.m"
      {
#line 814 "accumulator.m"
        transform_hlds__accumulator__accu_before_7_p_0_4(&transform_hlds__accumulator__env);
      }
#line 814 "accumulator.m"
      (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded = !((transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded);
#line 804 "accumulator.m"
      return (transform_hlds__accumulator__env).transform_hlds__accumulator__accu_before_7_p_0_env_0__succeeded;
#line 804 "accumulator.m"
    }
#line 801 "accumulator.m"
  }
#line 801 "accumulator.m"
}

#line 785 "accumulator.m"
static MR_Word MR_CALL 
transform_hlds__accumulator__set_upto_2_f_0(
#line 785 "accumulator.m"
  MR_Word transform_hlds__accumulator__Case_4,
#line 785 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_5)
#line 785 "accumulator.m"
{
#line 790 "accumulator.m"
  {
#line 790 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__K_5 <= (MR_Integer) 0);
#line 790 "accumulator.m"
    MR_Word transform_hlds__accumulator__Set_6;

#line 790 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 789 "accumulator.m"
      {
#line 789 "accumulator.m"
        {
#line 789 "accumulator.m"
          mercury__set__init_1_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, &transform_hlds__accumulator__Set_6);
        }
#line 789 "accumulator.m"
      }
#line 790 "accumulator.m"
    else
#line 791 "accumulator.m"
      {
#line 791 "accumulator.m"
        MR_Word transform_hlds__accumulator__Set0_7;
#line 791 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_9_9 = (transform_hlds__accumulator__K_5 - (MR_Integer) 1);
#line 791 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_11_11;

#line 791 "accumulator.m"
        {
#line 791 "accumulator.m"
          transform_hlds__accumulator__Set0_7 = transform_hlds__accumulator__set_upto_2_f_0(transform_hlds__accumulator__Case_4, transform_hlds__accumulator__V_9_9);
        }
#line 792 "accumulator.m"
        {
#line 792 "accumulator.m"
          transform_hlds__accumulator__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_11_11, 0) = ((MR_Box) (transform_hlds__accumulator__Case_4));
#line 792 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_11_11, 1) = ((MR_Box) (transform_hlds__accumulator__K_5));
#line 792 "accumulator.m"
        }
#line 792 "accumulator.m"
        {
#line 792 "accumulator.m"
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, ((MR_Box) (transform_hlds__accumulator__V_11_11)), transform_hlds__accumulator__Set0_7, &transform_hlds__accumulator__Set_6);
        }
#line 791 "accumulator.m"
      }
#line 790 "accumulator.m"
    return transform_hlds__accumulator__Set_6;
#line 790 "accumulator.m"
  }
#line 785 "accumulator.m"
}

#line 716 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_stage1_2_9_p_0(
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_10,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_11,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_12,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_13,
#line 716 "accumulator.m"
  MR_Integer transform_hlds__accumulator__K_14,
#line 716 "accumulator.m"
  MR_Integer transform_hlds__accumulator__M_15,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_16,
#line 716 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21,
#line 716 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Sets_22)
#line 716 "accumulator.m"
{
#line 721 "accumulator.m"
  while (MR_TRUE)
#line 721 "accumulator.m"
    {
#line 721 "accumulator.m"
      /* tailcall optimized into a loop */
#line 721 "accumulator.m"
      {
#line 721 "accumulator.m"
        MR_bool transform_hlds__accumulator__succeeded;
#line 721 "accumulator.m"
        MR_Word transform_hlds__accumulator__Case_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__GoalId_13, (MR_Integer) 0)));
#line 721 "accumulator.m"
        MR_Integer transform_hlds__accumulator__I_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__GoalId_13, (MR_Integer) 1)));
#line 721 "accumulator.m"
        MR_Word transform_hlds__accumulator__NextGoalId_20;
#line 721 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_23_23 = (transform_hlds__accumulator__I_19 + (MR_Integer) 1);

#line 723 "accumulator.m"
        {
#line 723 "accumulator.m"
          transform_hlds__accumulator__NextGoalId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 723 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__NextGoalId_20, 0) = ((MR_Box) (transform_hlds__accumulator__Case_18));
#line 723 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__NextGoalId_20, 1) = ((MR_Box) (transform_hlds__accumulator__V_23_23));
#line 723 "accumulator.m"
        }
#line 724 "accumulator.m"
        transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__I_19 > transform_hlds__accumulator__M_15);
#line 726 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 726 "accumulator.m"
          *transform_hlds__accumulator__STATE_VARIABLE_Sets_22 = transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21;
#line 726 "accumulator.m"
        else
#line 734 "accumulator.m"
          {
#line 734 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 5)));
#line 734 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 4)));
#line 734 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 3)));
#line 734 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 2)));
#line 734 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 1)));
#line 734 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 0)));

#line 728 "accumulator.m"
            {
#line 728 "accumulator.m"
              transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_before_7_p_0(transform_hlds__accumulator__ModuleInfo_10, transform_hlds__accumulator__VarTypes_11, transform_hlds__accumulator__FullyStrict_12, transform_hlds__accumulator__GoalId_13, transform_hlds__accumulator__K_14, transform_hlds__accumulator__GoalStore_16, transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21);
            }
#line 734 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 731 "accumulator.m"
              {
#line 731 "accumulator.m"
                MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25;
#line 731 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_26_26;
#line 731 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_54_54;
#line 731 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_55_55;
#line 731 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_56_56;
#line 731 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_57_57;
#line 731 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_58_58;
#line 731 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_53_53;

#line 731 "accumulator.m"
                {
#line 731 "accumulator.m"
                  transform_hlds__accumulator__V_26_26 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_149_149, ((MR_Box) (transform_hlds__accumulator__GoalId_13)));
                }
#line 731 "accumulator.m"
                transform_hlds__accumulator__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 0)));
#line 731 "accumulator.m"
                transform_hlds__accumulator__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 1)));
#line 731 "accumulator.m"
                transform_hlds__accumulator__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 2)));
#line 731 "accumulator.m"
                transform_hlds__accumulator__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 3)));
#line 731 "accumulator.m"
                transform_hlds__accumulator__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 4)));
#line 731 "accumulator.m"
                transform_hlds__accumulator__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 5)));
#line 731 "accumulator.m"
                {
#line 731 "accumulator.m"
                  transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 731 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25, 0) = ((MR_Box) (transform_hlds__accumulator__V_26_26));
#line 731 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25, 1) = ((MR_Box) (transform_hlds__accumulator__V_54_54));
#line 731 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25, 2) = ((MR_Box) (transform_hlds__accumulator__V_55_55));
#line 731 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25, 3) = ((MR_Box) (transform_hlds__accumulator__V_56_56));
#line 731 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25, 4) = ((MR_Box) (transform_hlds__accumulator__V_57_57));
#line 731 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25, 5) = ((MR_Box) (transform_hlds__accumulator__V_58_58));
#line 731 "accumulator.m"
                }
#line 732 "accumulator.m"
                /* direct tailcall eliminated */
#line 732 "accumulator.m"
                {
#line 732 "accumulator.m"
                  MR_Word transform_hlds__accumulator__GoalId__tmp_copy_13 = transform_hlds__accumulator__NextGoalId_20;
#line 732 "accumulator.m"
                  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_25_25;

#line 732 "accumulator.m"
                  transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21;
#line 732 "accumulator.m"
                  transform_hlds__accumulator__GoalId_13 = transform_hlds__accumulator__GoalId__tmp_copy_13;
#line 732 "accumulator.m"
                }
#line 732 "accumulator.m"
                continue;
#line 731 "accumulator.m"
              }
#line 734 "accumulator.m"
            else
#line 741 "accumulator.m"
              {
#line 735 "accumulator.m"
                {
#line 735 "accumulator.m"
                  transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_assoc_7_p_0(transform_hlds__accumulator__ModuleInfo_10, transform_hlds__accumulator__VarTypes_11, transform_hlds__accumulator__FullyStrict_12, transform_hlds__accumulator__GoalId_13, transform_hlds__accumulator__K_14, transform_hlds__accumulator__GoalStore_16, transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21);
                }
#line 741 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 738 "accumulator.m"
                  {
#line 738 "accumulator.m"
                    MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29;
#line 738 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_30_30;
#line 738 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_64_64;
#line 738 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_66_66;
#line 738 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_67_67;
#line 738 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_68_68;
#line 738 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_69_69;
#line 738 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_65_65;

#line 738 "accumulator.m"
                    {
#line 738 "accumulator.m"
                      transform_hlds__accumulator__V_30_30 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_148_148, ((MR_Box) (transform_hlds__accumulator__GoalId_13)));
                    }
#line 738 "accumulator.m"
                    transform_hlds__accumulator__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 0)));
#line 738 "accumulator.m"
                    transform_hlds__accumulator__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 1)));
#line 738 "accumulator.m"
                    transform_hlds__accumulator__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 2)));
#line 738 "accumulator.m"
                    transform_hlds__accumulator__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 3)));
#line 738 "accumulator.m"
                    transform_hlds__accumulator__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 4)));
#line 738 "accumulator.m"
                    transform_hlds__accumulator__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 5)));
#line 738 "accumulator.m"
                    {
#line 738 "accumulator.m"
                      transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 738 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29, 0) = ((MR_Box) (transform_hlds__accumulator__V_64_64));
#line 738 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29, 1) = ((MR_Box) (transform_hlds__accumulator__V_30_30));
#line 738 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29, 2) = ((MR_Box) (transform_hlds__accumulator__V_66_66));
#line 738 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29, 3) = ((MR_Box) (transform_hlds__accumulator__V_67_67));
#line 738 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29, 4) = ((MR_Box) (transform_hlds__accumulator__V_68_68));
#line 738 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29, 5) = ((MR_Box) (transform_hlds__accumulator__V_69_69));
#line 738 "accumulator.m"
                    }
#line 739 "accumulator.m"
                    /* direct tailcall eliminated */
#line 739 "accumulator.m"
                    {
#line 739 "accumulator.m"
                      MR_Word transform_hlds__accumulator__GoalId__tmp_copy_13 = transform_hlds__accumulator__NextGoalId_20;
#line 739 "accumulator.m"
                      MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_29_29;

#line 739 "accumulator.m"
                      transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21;
#line 739 "accumulator.m"
                      transform_hlds__accumulator__GoalId_13 = transform_hlds__accumulator__GoalId__tmp_copy_13;
#line 739 "accumulator.m"
                    }
#line 739 "accumulator.m"
                    continue;
#line 738 "accumulator.m"
                  }
#line 741 "accumulator.m"
                else
#line 748 "accumulator.m"
                  {
#line 742 "accumulator.m"
                    {
#line 742 "accumulator.m"
                      transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_construct_7_p_0(transform_hlds__accumulator__ModuleInfo_10, transform_hlds__accumulator__VarTypes_11, transform_hlds__accumulator__FullyStrict_12, transform_hlds__accumulator__GoalId_13, transform_hlds__accumulator__K_14, transform_hlds__accumulator__GoalStore_16, transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21);
                    }
#line 748 "accumulator.m"
                    if (transform_hlds__accumulator__succeeded)
#line 745 "accumulator.m"
                      {
#line 745 "accumulator.m"
                        MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33;
#line 745 "accumulator.m"
                        MR_Word transform_hlds__accumulator__V_34_34;
#line 745 "accumulator.m"
                        MR_Word transform_hlds__accumulator__V_75_75;
#line 745 "accumulator.m"
                        MR_Word transform_hlds__accumulator__V_76_76;
#line 745 "accumulator.m"
                        MR_Word transform_hlds__accumulator__V_77_77;
#line 745 "accumulator.m"
                        MR_Word transform_hlds__accumulator__V_79_79;
#line 745 "accumulator.m"
                        MR_Word transform_hlds__accumulator__V_80_80;
#line 745 "accumulator.m"
                        MR_Word transform_hlds__accumulator__V_78_78;

#line 745 "accumulator.m"
                        {
#line 745 "accumulator.m"
                          transform_hlds__accumulator__V_34_34 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_146_146, ((MR_Box) (transform_hlds__accumulator__GoalId_13)));
                        }
#line 745 "accumulator.m"
                        transform_hlds__accumulator__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 0)));
#line 745 "accumulator.m"
                        transform_hlds__accumulator__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 1)));
#line 745 "accumulator.m"
                        transform_hlds__accumulator__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 2)));
#line 745 "accumulator.m"
                        transform_hlds__accumulator__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 3)));
#line 745 "accumulator.m"
                        transform_hlds__accumulator__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 4)));
#line 745 "accumulator.m"
                        transform_hlds__accumulator__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 5)));
#line 745 "accumulator.m"
                        {
#line 745 "accumulator.m"
                          transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 745 "accumulator.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33, 0) = ((MR_Box) (transform_hlds__accumulator__V_75_75));
#line 745 "accumulator.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33, 1) = ((MR_Box) (transform_hlds__accumulator__V_76_76));
#line 745 "accumulator.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33, 2) = ((MR_Box) (transform_hlds__accumulator__V_77_77));
#line 745 "accumulator.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33, 3) = ((MR_Box) (transform_hlds__accumulator__V_34_34));
#line 745 "accumulator.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33, 4) = ((MR_Box) (transform_hlds__accumulator__V_79_79));
#line 745 "accumulator.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33, 5) = ((MR_Box) (transform_hlds__accumulator__V_80_80));
#line 745 "accumulator.m"
                        }
#line 746 "accumulator.m"
                        /* direct tailcall eliminated */
#line 746 "accumulator.m"
                        {
#line 746 "accumulator.m"
                          MR_Word transform_hlds__accumulator__GoalId__tmp_copy_13 = transform_hlds__accumulator__NextGoalId_20;
#line 746 "accumulator.m"
                          MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_33_33;

#line 746 "accumulator.m"
                          transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21;
#line 746 "accumulator.m"
                          transform_hlds__accumulator__GoalId_13 = transform_hlds__accumulator__GoalId__tmp_copy_13;
#line 746 "accumulator.m"
                        }
#line 746 "accumulator.m"
                        continue;
#line 745 "accumulator.m"
                      }
#line 748 "accumulator.m"
                    else
#line 756 "accumulator.m"
                      {
#line 749 "accumulator.m"
                        {
#line 749 "accumulator.m"
                          transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_construct_assoc_7_p_0(transform_hlds__accumulator__ModuleInfo_10, transform_hlds__accumulator__VarTypes_11, transform_hlds__accumulator__FullyStrict_12, transform_hlds__accumulator__GoalId_13, transform_hlds__accumulator__K_14, transform_hlds__accumulator__GoalStore_16, transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21);
                        }
#line 756 "accumulator.m"
                        if (transform_hlds__accumulator__succeeded)
#line 753 "accumulator.m"
                          {
#line 753 "accumulator.m"
                            MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37;
#line 753 "accumulator.m"
                            MR_Word transform_hlds__accumulator__V_38_38;
#line 752 "accumulator.m"
                            MR_Word transform_hlds__accumulator__V_86_86;
#line 752 "accumulator.m"
                            MR_Word transform_hlds__accumulator__V_87_87;
#line 752 "accumulator.m"
                            MR_Word transform_hlds__accumulator__V_89_89;
#line 752 "accumulator.m"
                            MR_Word transform_hlds__accumulator__V_90_90;
#line 752 "accumulator.m"
                            MR_Word transform_hlds__accumulator__V_91_91;
#line 752 "accumulator.m"
                            MR_Word transform_hlds__accumulator__V_88_88;

#line 753 "accumulator.m"
                            {
#line 753 "accumulator.m"
                              transform_hlds__accumulator__V_38_38 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_147_147, ((MR_Box) (transform_hlds__accumulator__GoalId_13)));
                            }
#line 752 "accumulator.m"
                            transform_hlds__accumulator__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 0)));
#line 752 "accumulator.m"
                            transform_hlds__accumulator__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 1)));
#line 752 "accumulator.m"
                            transform_hlds__accumulator__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 2)));
#line 752 "accumulator.m"
                            transform_hlds__accumulator__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 3)));
#line 752 "accumulator.m"
                            transform_hlds__accumulator__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 4)));
#line 752 "accumulator.m"
                            transform_hlds__accumulator__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 5)));
#line 752 "accumulator.m"
                            {
#line 752 "accumulator.m"
                              transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 752 "accumulator.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37, 0) = ((MR_Box) (transform_hlds__accumulator__V_86_86));
#line 752 "accumulator.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37, 1) = ((MR_Box) (transform_hlds__accumulator__V_87_87));
#line 752 "accumulator.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37, 2) = ((MR_Box) (transform_hlds__accumulator__V_38_38));
#line 752 "accumulator.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37, 3) = ((MR_Box) (transform_hlds__accumulator__V_89_89));
#line 752 "accumulator.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37, 4) = ((MR_Box) (transform_hlds__accumulator__V_90_90));
#line 752 "accumulator.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37, 5) = ((MR_Box) (transform_hlds__accumulator__V_91_91));
#line 752 "accumulator.m"
                            }
#line 754 "accumulator.m"
                            /* direct tailcall eliminated */
#line 754 "accumulator.m"
                            {
#line 754 "accumulator.m"
                              MR_Word transform_hlds__accumulator__GoalId__tmp_copy_13 = transform_hlds__accumulator__NextGoalId_20;
#line 754 "accumulator.m"
                              MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_37_37;

#line 754 "accumulator.m"
                              transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21;
#line 754 "accumulator.m"
                              transform_hlds__accumulator__GoalId_13 = transform_hlds__accumulator__GoalId__tmp_copy_13;
#line 754 "accumulator.m"
                            }
#line 754 "accumulator.m"
                            continue;
#line 753 "accumulator.m"
                          }
#line 756 "accumulator.m"
                        else
#line 763 "accumulator.m"
                          {
#line 757 "accumulator.m"
                            {
#line 757 "accumulator.m"
                              transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_update_7_p_0(transform_hlds__accumulator__ModuleInfo_10, transform_hlds__accumulator__VarTypes_11, transform_hlds__accumulator__FullyStrict_12, transform_hlds__accumulator__GoalId_13, transform_hlds__accumulator__K_14, transform_hlds__accumulator__GoalStore_16, transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21);
                            }
#line 763 "accumulator.m"
                            if (transform_hlds__accumulator__succeeded)
#line 760 "accumulator.m"
                              {
#line 760 "accumulator.m"
                                MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41;
#line 760 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_42_42;
#line 760 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_97_97;
#line 760 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_98_98;
#line 760 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_99_99;
#line 760 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_100_100;
#line 760 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_102_102;
#line 760 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_101_101;

#line 760 "accumulator.m"
                                {
#line 760 "accumulator.m"
                                  transform_hlds__accumulator__V_42_42 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_145_145, ((MR_Box) (transform_hlds__accumulator__GoalId_13)));
                                }
#line 760 "accumulator.m"
                                transform_hlds__accumulator__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 0)));
#line 760 "accumulator.m"
                                transform_hlds__accumulator__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 1)));
#line 760 "accumulator.m"
                                transform_hlds__accumulator__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 2)));
#line 760 "accumulator.m"
                                transform_hlds__accumulator__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 3)));
#line 760 "accumulator.m"
                                transform_hlds__accumulator__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 4)));
#line 760 "accumulator.m"
                                transform_hlds__accumulator__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 5)));
#line 760 "accumulator.m"
                                {
#line 760 "accumulator.m"
                                  transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 760 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41, 0) = ((MR_Box) (transform_hlds__accumulator__V_97_97));
#line 760 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41, 1) = ((MR_Box) (transform_hlds__accumulator__V_98_98));
#line 760 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41, 2) = ((MR_Box) (transform_hlds__accumulator__V_99_99));
#line 760 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41, 3) = ((MR_Box) (transform_hlds__accumulator__V_100_100));
#line 760 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41, 4) = ((MR_Box) (transform_hlds__accumulator__V_42_42));
#line 760 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41, 5) = ((MR_Box) (transform_hlds__accumulator__V_102_102));
#line 760 "accumulator.m"
                                }
#line 761 "accumulator.m"
                                /* direct tailcall eliminated */
#line 761 "accumulator.m"
                                {
#line 761 "accumulator.m"
                                  MR_Word transform_hlds__accumulator__GoalId__tmp_copy_13 = transform_hlds__accumulator__NextGoalId_20;
#line 761 "accumulator.m"
                                  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_41_41;

#line 761 "accumulator.m"
                                  transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21 = transform_hlds__accumulator__STATE_VARIABLE_Sets_0__tmp_copy_21;
#line 761 "accumulator.m"
                                  transform_hlds__accumulator__GoalId_13 = transform_hlds__accumulator__GoalId__tmp_copy_13;
#line 761 "accumulator.m"
                                }
#line 761 "accumulator.m"
                                continue;
#line 760 "accumulator.m"
                              }
#line 763 "accumulator.m"
                            else
#line 764 "accumulator.m"
                              {
#line 764 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_46_46;
#line 764 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_108_108;
#line 764 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_109_109;
#line 764 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_110_110;
#line 764 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_111_111;
#line 764 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_112_112;
#line 764 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_113_113;

#line 764 "accumulator.m"
                                {
#line 764 "accumulator.m"
                                  transform_hlds__accumulator__V_46_46 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__V_144_144, ((MR_Box) (transform_hlds__accumulator__GoalId_13)));
                                }
#line 764 "accumulator.m"
                                transform_hlds__accumulator__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 0)));
#line 764 "accumulator.m"
                                transform_hlds__accumulator__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 1)));
#line 764 "accumulator.m"
                                transform_hlds__accumulator__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 2)));
#line 764 "accumulator.m"
                                transform_hlds__accumulator__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 3)));
#line 764 "accumulator.m"
                                transform_hlds__accumulator__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 4)));
#line 764 "accumulator.m"
                                transform_hlds__accumulator__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__STATE_VARIABLE_Sets_0_21, (MR_Integer) 5)));
#line 764 "accumulator.m"
                                {
#line 764 "accumulator.m"
                                  MR_Word base;
#line 764 "accumulator.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 764 "accumulator.m"
                                  *transform_hlds__accumulator__STATE_VARIABLE_Sets_22 = base;
#line 764 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__accumulator__V_108_108));
#line 764 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__accumulator__V_109_109));
#line 764 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__accumulator__V_110_110));
#line 764 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__accumulator__V_111_111));
#line 764 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__accumulator__V_112_112));
#line 764 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__accumulator__V_46_46));
#line 764 "accumulator.m"
                                }
#line 764 "accumulator.m"
                              }
#line 763 "accumulator.m"
                          }
#line 756 "accumulator.m"
                      }
#line 748 "accumulator.m"
                  }
#line 741 "accumulator.m"
              }
#line 734 "accumulator.m"
          }
#line 721 "accumulator.m"
      }
#line 721 "accumulator.m"
      break;
#line 721 "accumulator.m"
    }
#line 716 "accumulator.m"
}

#line 652 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_4(
#line 652 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 652 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 652 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 652 "accumulator.m"
{
#line 652 "accumulator.m"
  {
#line 652 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 652 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv2_HeadVar__2_56;

#line 652 "accumulator.m"
    {
#line 652 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__652__1_2_p_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv2_HeadVar__2_56);
    }
#line 652 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv2_HeadVar__2_56));
#line 652 "accumulator.m"
  }
#line 652 "accumulator.m"
}

#line 648 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_3(
#line 648 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 648 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 648 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 648 "accumulator.m"
{
#line 648 "accumulator.m"
  {
#line 648 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 648 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv1_HeadVar__2_71;

#line 648 "accumulator.m"
    {
#line 648 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__648__1_2_p_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv1_HeadVar__2_71);
    }
#line 648 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv1_HeadVar__2_71));
#line 648 "accumulator.m"
  }
#line 648 "accumulator.m"
}

#line 647 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_2(
#line 647 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 647 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 647 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_2)
#line 647 "accumulator.m"
{
#line 647 "accumulator.m"
  {
#line 647 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 647 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_HeadVar__2_68;

#line 647 "accumulator.m"
    {
#line 647 "accumulator.m"
      transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__647__1_2_p_0(((MR_Word) transform_hlds__accumulator__wrapper_arg_1), &transform_hlds__accumulator__conv0_HeadVar__2_68);
    }
#line 647 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_2 = ((MR_Box) (transform_hlds__accumulator__conv0_HeadVar__2_68));
#line 647 "accumulator.m"
  }
#line 647 "accumulator.m"
}

#line 642 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_1(
#line 642 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 642 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1)
#line 642 "accumulator.m"
{
#line 642 "accumulator.m"
  {
#line 642 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 642 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;

#line 642 "accumulator.m"
    {
#line 642 "accumulator.m"
      return transform_hlds__accumulator__succeeded = transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__642__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1));
    }
#line 642 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 642 "accumulator.m"
  }
#line 642 "accumulator.m"
}

#line 617 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_out_and_out_prime_10_p_0(
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_11,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarTypes_12,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__InitialInstMap_13,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalId_14,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__Rec_15,
#line 617 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVars_16,
#line 617 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Out_17,
#line 617 "accumulator.m"
  MR_Word * transform_hlds__accumulator__OutPrime_18,
#line 617 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadToCallSubst_19,
#line 617 "accumulator.m"
  MR_Word * transform_hlds__accumulator__CallToHeadSubst_20)
#line 617 "accumulator.m"
{
#line 622 "accumulator.m"
  {
#line 622 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 622 "accumulator.m"
    MR_Integer transform_hlds__accumulator__K_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__GoalId_14, (MR_Integer) 1)));
#line 623 "accumulator.m"
    MR_Word transform_hlds__accumulator___Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__GoalId_14, (MR_Integer) 0)));
#line 654 "accumulator.m"
    MR_Word transform_hlds__accumulator__InitialGoals_23;
#line 654 "accumulator.m"
    MR_Word transform_hlds__accumulator__Args_27;
#line 654 "accumulator.m"
    MR_Word transform_hlds__accumulator__Rest_32;
#line 625 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 625 "accumulator.m"
    MR_Word transform_hlds__accumulator__FinalGoals_24;
#line 625 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_47_47;
#line 625 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_48_48;
#line 625 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_49_49;
#line 625 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_50_50;
#line 627 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_31_31;
#line 627 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_25_25;
#line 627 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_26_26;
#line 627 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_28_28;
#line 627 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_29_29;
#line 627 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_30_30;

#line 625 "accumulator.m"
    {
#line 625 "accumulator.m"
      transform_hlds__accumulator__succeeded = mercury__list__take_3_p_0(transform_hlds__accumulator__TypeCtorInfo_63_63, transform_hlds__accumulator__K_22, transform_hlds__accumulator__Rec_15, &transform_hlds__accumulator__InitialGoals_23);
    }
#line 625 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 625 "accumulator.m"
      {
#line 626 "accumulator.m"
        transform_hlds__accumulator__V_48_48 = (MR_Integer) 1;
#line 626 "accumulator.m"
        transform_hlds__accumulator__V_47_47 = (transform_hlds__accumulator__K_22 - transform_hlds__accumulator__V_48_48);
#line 626 "accumulator.m"
        {
#line 626 "accumulator.m"
          transform_hlds__accumulator__succeeded = mercury__list__drop_3_p_0(transform_hlds__accumulator__TypeCtorInfo_63_63, transform_hlds__accumulator__V_47_47, transform_hlds__accumulator__Rec_15, &transform_hlds__accumulator__FinalGoals_24);
        }
#line 625 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 625 "accumulator.m"
          {
#line 627 "accumulator.m"
            transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__FinalGoals_24)) == (MR_mktag((MR_Integer) 1)));
#line 627 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 627 "accumulator.m"
              {
#line 627 "accumulator.m"
                transform_hlds__accumulator__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__FinalGoals_24, (MR_Integer) 0)));
#line 627 "accumulator.m"
                transform_hlds__accumulator__Rest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__FinalGoals_24, (MR_Integer) 1)));
#line 627 "accumulator.m"
                transform_hlds__accumulator__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_49_49, (MR_Integer) 0)));
#line 627 "accumulator.m"
                transform_hlds__accumulator__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_49_49, (MR_Integer) 1)));
#line 627 "accumulator.m"
                transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_50_50)) == (MR_mktag((MR_Integer) 2)));
#line 627 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 627 "accumulator.m"
                  {
#line 627 "accumulator.m"
                    transform_hlds__accumulator__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_50_50, (MR_Integer) 0)));
#line 627 "accumulator.m"
                    transform_hlds__accumulator__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_50_50, (MR_Integer) 1)));
#line 627 "accumulator.m"
                    transform_hlds__accumulator__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_50_50, (MR_Integer) 2)));
#line 627 "accumulator.m"
                    transform_hlds__accumulator__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_50_50, (MR_Integer) 3)));
#line 627 "accumulator.m"
                    transform_hlds__accumulator__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_50_50, (MR_Integer) 4)));
#line 627 "accumulator.m"
                    transform_hlds__accumulator__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__accumulator__V_50_50, (MR_Integer) 5)));
#line 627 "accumulator.m"
                  }
#line 627 "accumulator.m"
              }
#line 625 "accumulator.m"
          }
#line 625 "accumulator.m"
      }
#line 654 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 629 "accumulator.m"
      {
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_64_64;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeInfo_66_66;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__InitInstMapDelta_33;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__InstMapBeforeRest_34;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__InstMapDelta_35;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__InstMapAfterRest_36;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__ChangedVars_37;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__HeadArg0_38;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__Member_39;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__HeadArg_43;
#line 629 "accumulator.m"
        MR_Word transform_hlds__accumulator__ArgHead_46;

#line 629 "accumulator.m"
        {
#line 629 "accumulator.m"
          hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__accumulator__InitialGoals_23, &transform_hlds__accumulator__InitInstMapDelta_33);
        }
#line 630 "accumulator.m"
        {
#line 630 "accumulator.m"
          hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__accumulator__InitialInstMap_13, transform_hlds__accumulator__InitInstMapDelta_33, &transform_hlds__accumulator__InstMapBeforeRest_34);
        }
#line 633 "accumulator.m"
        {
#line 633 "accumulator.m"
          hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__accumulator__Rest_32, &transform_hlds__accumulator__InstMapDelta_35);
        }
#line 634 "accumulator.m"
        {
#line 634 "accumulator.m"
          hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__accumulator__InstMapBeforeRest_34, transform_hlds__accumulator__InstMapDelta_35, &transform_hlds__accumulator__InstMapAfterRest_36);
        }
#line 637 "accumulator.m"
        {
#line 637 "accumulator.m"
          hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__accumulator__InstMapBeforeRest_34, transform_hlds__accumulator__InstMapAfterRest_36, transform_hlds__accumulator__VarTypes_12, transform_hlds__accumulator__ModuleInfo_11, &transform_hlds__accumulator__ChangedVars_37);
        }
#line 17278 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeInfo_64_64 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[2];
#line 640 "accumulator.m"
        {
#line 640 "accumulator.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__accumulator__TypeInfo_64_64, transform_hlds__accumulator__TypeInfo_64_64, transform_hlds__accumulator__HeadVars_16, transform_hlds__accumulator__Args_27, &transform_hlds__accumulator__HeadArg0_38);
        }
#line 642 "accumulator.m"
        {
#line 642 "accumulator.m"
          transform_hlds__accumulator__Member_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 642 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Member_39, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_7[0]));
#line 642 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Member_39, 1) = ((MR_Box) (transform_hlds__accumulator__identify_out_and_out_prime_10_p_0_1));
#line 642 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Member_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 642 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Member_39, 3) = ((MR_Box) (transform_hlds__accumulator__ChangedVars_37));
#line 642 "accumulator.m"
        }
#line 17299 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeInfo_66_66 = (MR_Word) &transform_hlds__accumulator_scalar_common_2[0];
#line 646 "accumulator.m"
        {
#line 646 "accumulator.m"
          mercury__list__filter_3_p_0(transform_hlds__accumulator__TypeInfo_66_66, transform_hlds__accumulator__Member_39, transform_hlds__accumulator__HeadArg0_38, &transform_hlds__accumulator__HeadArg_43);
        }
#line 647 "accumulator.m"
        {
#line 647 "accumulator.m"
          mercury__list__map_3_p_0(transform_hlds__accumulator__TypeInfo_66_66, transform_hlds__accumulator__TypeInfo_64_64, (MR_Word) &transform_hlds__accumulator_scalar_common_2[2], transform_hlds__accumulator__HeadArg_43, transform_hlds__accumulator__Out_17);
        }
#line 648 "accumulator.m"
        {
#line 648 "accumulator.m"
          mercury__list__map_3_p_0(transform_hlds__accumulator__TypeInfo_66_66, transform_hlds__accumulator__TypeInfo_64_64, (MR_Word) &transform_hlds__accumulator_scalar_common_2[3], transform_hlds__accumulator__HeadArg_43, transform_hlds__accumulator__OutPrime_18);
        }
#line 650 "accumulator.m"
        {
#line 650 "accumulator.m"
          mercury__map__from_assoc_list_2_p_0(transform_hlds__accumulator__TypeInfo_64_64, transform_hlds__accumulator__TypeInfo_64_64, transform_hlds__accumulator__HeadArg_43, transform_hlds__accumulator__HeadToCallSubst_19);
        }
#line 652 "accumulator.m"
        {
#line 652 "accumulator.m"
          mercury__list__map_3_p_0(transform_hlds__accumulator__TypeInfo_66_66, transform_hlds__accumulator__TypeInfo_66_66, (MR_Word) &transform_hlds__accumulator_scalar_common_2[4], transform_hlds__accumulator__HeadArg_43, &transform_hlds__accumulator__ArgHead_46);
        }
#line 653 "accumulator.m"
        {
#line 653 "accumulator.m"
          mercury__map__from_assoc_list_2_p_0(transform_hlds__accumulator__TypeInfo_64_64, transform_hlds__accumulator__TypeInfo_64_64, transform_hlds__accumulator__ArgHead_46, transform_hlds__accumulator__CallToHeadSubst_20);
#line 653 "accumulator.m"
          return;
        }
#line 629 "accumulator.m"
      }
#line 654 "accumulator.m"
    else
#line 655 "accumulator.m"
      {
#line 655 "accumulator.m"
        {
#line 655 "accumulator.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.accumulator", (MR_String) "predicate \140transform_hlds.accumulator.identify_out_and_out_prime\'/10", (MR_String) "test failed");
#line 655 "accumulator.m"
          return;
        }
#line 655 "accumulator.m"
      }
#line 622 "accumulator.m"
  }
#line 617 "accumulator.m"
}

#line 597 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_recursive_calls_4_p_0_1(
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 597 "accumulator.m"
{
#line 597 "accumulator.m"
  {
#line 597 "accumulator.m"
    struct transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 597 "accumulator.m"
    *((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__conv0_HeadVar__4_19));
#line 597 "accumulator.m"
    {
#line 597 "accumulator.m"
      ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__cont)((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__cont_env_ptr);
#line 597 "accumulator.m"
      return;
    }
#line 597 "accumulator.m"
  }
#line 597 "accumulator.m"
}

#line 597 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_recursive_calls_4_p_0_2(
#line 597 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 597 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_1,
#line 597 "accumulator.m"
  MR_Cont transform_hlds__accumulator__cont,
#line 597 "accumulator.m"
  void * transform_hlds__accumulator__cont_env_ptr)
#line 597 "accumulator.m"
{
#line 597 "accumulator.m"
  {
#line 597 "accumulator.m"
    struct transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0_s transform_hlds__accumulator__env;

#line 597 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__wrapper_arg_1 = transform_hlds__accumulator__wrapper_arg_1;
#line 597 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__cont = transform_hlds__accumulator__cont;
#line 597 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__cont_env_ptr = transform_hlds__accumulator__cont_env_ptr;
#line 597 "accumulator.m"
    {
#line 597 "accumulator.m"
      MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;

#line 597 "accumulator.m"
      {
#line 597 "accumulator.m"
        transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__597__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 5))), &(transform_hlds__accumulator__env).transform_hlds__accumulator__identify_recursive_calls_4_p_0_2_env_0__conv0_HeadVar__4_19, transform_hlds__accumulator__identify_recursive_calls_4_p_0_1, &transform_hlds__accumulator__env);
      }
#line 597 "accumulator.m"
    }
#line 597 "accumulator.m"
  }
#line 597 "accumulator.m"
}

#line 593 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_recursive_calls_4_p_0(
#line 593 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_5,
#line 593 "accumulator.m"
  MR_Integer transform_hlds__accumulator__ProcId_6,
#line 593 "accumulator.m"
  MR_Word transform_hlds__accumulator__GoalStore_7,
#line 593 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Ids_8)
#line 593 "accumulator.m"
{
#line 596 "accumulator.m"
  {
#line 596 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 596 "accumulator.m"
    MR_Word transform_hlds__accumulator__P_9;

#line 597 "accumulator.m"
    {
#line 597 "accumulator.m"
      transform_hlds__accumulator__P_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 597 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_9, 0) = ((MR_Box) (&transform_hlds__accumulator_scalar_common_6[0]));
#line 597 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_9, 1) = ((MR_Box) (transform_hlds__accumulator__identify_recursive_calls_4_p_0_2));
#line 597 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 597 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_9, 3) = ((MR_Box) (transform_hlds__accumulator__PredId_5));
#line 597 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_9, 4) = ((MR_Box) (transform_hlds__accumulator__ProcId_6));
#line 597 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__P_9, 5) = ((MR_Box) (transform_hlds__accumulator__GoalStore_7));
#line 597 "accumulator.m"
    }
#line 602 "accumulator.m"
    {
#line 602 "accumulator.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, transform_hlds__accumulator__P_9, transform_hlds__accumulator__Ids_8);
#line 602 "accumulator.m"
      return;
    }
#line 596 "accumulator.m"
  }
#line 593 "accumulator.m"
}

#line 572 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_store_8_p_0(
#line 572 "accumulator.m"
  MR_Word transform_hlds__accumulator__Case_9,
#line 572 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goal_10,
#line 572 "accumulator.m"
  MR_Integer transform_hlds__accumulator__STATE_VARIABLE_N_0_18,
#line 572 "accumulator.m"
  MR_Integer * transform_hlds__accumulator__STATE_VARIABLE_N_19,
#line 572 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_InstMap_0_20,
#line 572 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_InstMap_21,
#line 572 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_GoalStore_0_22,
#line 572 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_GoalStore_23)
#line 572 "accumulator.m"
{
#line 576 "accumulator.m"
  {
#line 576 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 576 "accumulator.m"
    MR_Word transform_hlds__accumulator__Id_14;
#line 576 "accumulator.m"
    MR_Word transform_hlds__accumulator__GoalInfo_16;
#line 576 "accumulator.m"
    MR_Word transform_hlds__accumulator__InstMapDelta_17;
#line 576 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_24_24;
#line 581 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_15_15;

#line 577 "accumulator.m"
    {
#line 577 "accumulator.m"
      transform_hlds__accumulator__Id_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Id_14, 0) = ((MR_Box) (transform_hlds__accumulator__Case_9));
#line 577 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Id_14, 1) = ((MR_Box) (transform_hlds__accumulator__STATE_VARIABLE_N_0_18));
#line 577 "accumulator.m"
    }
#line 578 "accumulator.m"
    {
#line 578 "accumulator.m"
      transform_hlds__accumulator__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_24_24, 0) = ((MR_Box) (transform_hlds__accumulator__Goal_10));
#line 578 "accumulator.m"
      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_24_24, 1) = ((MR_Box) (transform_hlds__accumulator__STATE_VARIABLE_InstMap_0_20));
#line 578 "accumulator.m"
    }
#line 578 "accumulator.m"
    {
#line 578 "accumulator.m"
      transform_hlds__goal_store__goal_store_det_insert_4_p_0((MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0, ((MR_Box) (transform_hlds__accumulator__Id_14)), transform_hlds__accumulator__V_24_24, transform_hlds__accumulator__STATE_VARIABLE_GoalStore_0_22, transform_hlds__accumulator__STATE_VARIABLE_GoalStore_23);
    }
#line 580 "accumulator.m"
    *transform_hlds__accumulator__STATE_VARIABLE_N_19 = (transform_hlds__accumulator__STATE_VARIABLE_N_0_18 + (MR_Integer) 1);
#line 581 "accumulator.m"
    transform_hlds__accumulator__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 0)));
#line 581 "accumulator.m"
    transform_hlds__accumulator__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_10, (MR_Integer) 1)));
#line 582 "accumulator.m"
    {
#line 582 "accumulator.m"
      transform_hlds__accumulator__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__accumulator__GoalInfo_16);
    }
#line 583 "accumulator.m"
    {
#line 583 "accumulator.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__accumulator__STATE_VARIABLE_InstMap_0_20, transform_hlds__accumulator__InstMapDelta_17, transform_hlds__accumulator__STATE_VARIABLE_InstMap_21);
#line 583 "accumulator.m"
      return;
    }
#line 576 "accumulator.m"
  }
#line 572 "accumulator.m"
}

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__is_recursive_case_2_p_0_1(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 543 "accumulator.m"
{
#line 543 "accumulator.m"
  {
#line 543 "accumulator.m"
    struct transform_hlds__accumulator__is_recursive_case_2_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__is_recursive_case_2_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 543 "accumulator.m"
    MR_builtin_longjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__commit_0, 1);
#line 543 "accumulator.m"
  }
#line 543 "accumulator.m"
}

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__is_recursive_case_2_p_0_2(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 543 "accumulator.m"
{
#line 543 "accumulator.m"
  {
#line 543 "accumulator.m"
    struct transform_hlds__accumulator__is_recursive_case_2_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__is_recursive_case_2_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 543 "accumulator.m"
    {
#line 544 "accumulator.m"
      MR_Word transform_hlds__accumulator___Final_8;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_13_13;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_9_9;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_10_10;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_11_11;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_12_12;

#line 544 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 544 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded)
#line 544 "accumulator.m"
        {
#line 544 "accumulator.m"
          {
#line 544 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__RecursiveCall_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_14_14, (MR_Integer) 0)));
#line 544 "accumulator.m"
            transform_hlds__accumulator___Final_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_14_14, (MR_Integer) 1)));
#line 544 "accumulator.m"
          }
#line 543 "accumulator.m"
          {
#line 545 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__RecursiveCall_7, (MR_Integer) 0)));
#line 545 "accumulator.m"
            transform_hlds__accumulator__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__RecursiveCall_7, (MR_Integer) 1)));
#line 545 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15)) == (MR_mktag((MR_Integer) 2)));
#line 545 "accumulator.m"
            if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded)
#line 545 "accumulator.m"
              {
#line 545 "accumulator.m"
                {
#line 545 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15, (MR_Integer) 0)));
#line 545 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15, (MR_Integer) 1)));
#line 545 "accumulator.m"
                  transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15, (MR_Integer) 2)));
#line 545 "accumulator.m"
                  transform_hlds__accumulator__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15, (MR_Integer) 3)));
#line 545 "accumulator.m"
                  transform_hlds__accumulator__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15, (MR_Integer) 4)));
#line 545 "accumulator.m"
                  transform_hlds__accumulator__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_15_15, (MR_Integer) 5)));
#line 545 "accumulator.m"
                }
#line 543 "accumulator.m"
                {
#line 545 "accumulator.m"
                  {
#line 545 "accumulator.m"
                    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__PredId_4, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_17_17);
                  }
#line 543 "accumulator.m"
                  if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded)
#line 543 "accumulator.m"
                    {
#line 545 "accumulator.m"
                      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__ProcId_5 == (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_18_18);
#line 545 "accumulator.m"
                      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded)
#line 545 "accumulator.m"
                        {
#line 545 "accumulator.m"
                          transform_hlds__accumulator__is_recursive_case_2_p_0_1(transform_hlds__accumulator__env_ptr);
#line 545 "accumulator.m"
                          return;
                        }
#line 543 "accumulator.m"
                    }
#line 543 "accumulator.m"
                }
#line 545 "accumulator.m"
              }
#line 543 "accumulator.m"
          }
#line 544 "accumulator.m"
        }
#line 543 "accumulator.m"
    }
#line 543 "accumulator.m"
  }
#line 543 "accumulator.m"
}

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__is_recursive_case_2_p_0_3(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 543 "accumulator.m"
{
#line 543 "accumulator.m"
  {
#line 543 "accumulator.m"
    struct transform_hlds__accumulator__is_recursive_case_2_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__is_recursive_case_2_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 543 "accumulator.m"
    if (MR_builtin_setjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__commit_0) == 0)
#line 543 "accumulator.m"
      {
#line 543 "accumulator.m"
        {
#line 544 "accumulator.m"
          MR_Word transform_hlds__accumulator___Initial_6;

#line 543 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__HeadVar__2_2, (MR_Integer) 0)));
#line 543 "accumulator.m"
          (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__HeadVar__2_2, (MR_Integer) 1)));
#line 544 "accumulator.m"
          {
#line 544 "accumulator.m"
            mercury__list__append_3_p_4((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &transform_hlds__accumulator___Initial_6, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__V_14_14, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__Goals_3, transform_hlds__accumulator__is_recursive_case_2_p_0_2, transform_hlds__accumulator__env_ptr);
          }
#line 543 "accumulator.m"
        }
#line 543 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded = MR_FALSE;
#line 543 "accumulator.m"
      }
#line 543 "accumulator.m"
    else
#line 543 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded = MR_TRUE;
#line 543 "accumulator.m"
  }
#line 543 "accumulator.m"
}

#line 541 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__is_recursive_case_2_p_0(
#line 541 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goals_3,
#line 541 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__2_2)
#line 541 "accumulator.m"
{
#line 541 "accumulator.m"
  {
#line 541 "accumulator.m"
    struct transform_hlds__accumulator__is_recursive_case_2_p_0_env_0_s transform_hlds__accumulator__env;

#line 541 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__Goals_3 = transform_hlds__accumulator__Goals_3;
#line 541 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__HeadVar__2_2 = transform_hlds__accumulator__HeadVar__2_2;
#line 543 "accumulator.m"
    {
#line 543 "accumulator.m"
      transform_hlds__accumulator__is_recursive_case_2_p_0_3(&transform_hlds__accumulator__env);
    }
#line 543 "accumulator.m"
    return (transform_hlds__accumulator__env).transform_hlds__accumulator__is_recursive_case_2_p_0_env_0__succeeded;
#line 541 "accumulator.m"
  }
#line 541 "accumulator.m"
}

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_goal_type_9_p_0_1(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 543 "accumulator.m"
{
#line 543 "accumulator.m"
  {
#line 543 "accumulator.m"
    struct transform_hlds__accumulator__identify_goal_type_9_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__identify_goal_type_9_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 543 "accumulator.m"
    MR_builtin_longjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__commit_0, 1);
#line 543 "accumulator.m"
  }
#line 543 "accumulator.m"
}

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_goal_type_9_p_0_2(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 543 "accumulator.m"
{
#line 543 "accumulator.m"
  {
#line 543 "accumulator.m"
    struct transform_hlds__accumulator__identify_goal_type_9_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__identify_goal_type_9_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 543 "accumulator.m"
    {
#line 544 "accumulator.m"
      MR_Word transform_hlds__accumulator___Final_69;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_74_74;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_70_70;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_71_71;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_72_72;
#line 545 "accumulator.m"
      MR_Word transform_hlds__accumulator__V_73_73;

#line 544 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 544 "accumulator.m"
      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 544 "accumulator.m"
        {
#line 544 "accumulator.m"
          {
#line 544 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__RecursiveCall_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_75_75, (MR_Integer) 0)));
#line 544 "accumulator.m"
            transform_hlds__accumulator___Final_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_75_75, (MR_Integer) 1)));
#line 544 "accumulator.m"
          }
#line 543 "accumulator.m"
          {
#line 545 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__RecursiveCall_68, (MR_Integer) 0)));
#line 545 "accumulator.m"
            transform_hlds__accumulator__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__RecursiveCall_68, (MR_Integer) 1)));
#line 545 "accumulator.m"
            (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76)) == (MR_mktag((MR_Integer) 2)));
#line 545 "accumulator.m"
            if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 545 "accumulator.m"
              {
#line 545 "accumulator.m"
                {
#line 545 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76, (MR_Integer) 0)));
#line 545 "accumulator.m"
                  (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76, (MR_Integer) 1)));
#line 545 "accumulator.m"
                  transform_hlds__accumulator__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76, (MR_Integer) 2)));
#line 545 "accumulator.m"
                  transform_hlds__accumulator__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76, (MR_Integer) 3)));
#line 545 "accumulator.m"
                  transform_hlds__accumulator__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76, (MR_Integer) 4)));
#line 545 "accumulator.m"
                  transform_hlds__accumulator__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_76_76, (MR_Integer) 5)));
#line 545 "accumulator.m"
                }
#line 543 "accumulator.m"
                {
#line 545 "accumulator.m"
                  {
#line 545 "accumulator.m"
                    (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__PredId_10, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_78_78);
                  }
#line 543 "accumulator.m"
                  if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 543 "accumulator.m"
                    {
#line 545 "accumulator.m"
                      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__ProcId_11 == (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_79_79);
#line 545 "accumulator.m"
                      if ((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 545 "accumulator.m"
                        {
#line 545 "accumulator.m"
                          transform_hlds__accumulator__identify_goal_type_9_p_0_1(transform_hlds__accumulator__env_ptr);
#line 545 "accumulator.m"
                          return;
                        }
#line 543 "accumulator.m"
                    }
#line 543 "accumulator.m"
                }
#line 545 "accumulator.m"
              }
#line 543 "accumulator.m"
          }
#line 544 "accumulator.m"
        }
#line 543 "accumulator.m"
    }
#line 543 "accumulator.m"
  }
#line 543 "accumulator.m"
}

#line 543 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__identify_goal_type_9_p_0_3(
#line 543 "accumulator.m"
  void * transform_hlds__accumulator__env_ptr_arg)
#line 543 "accumulator.m"
{
#line 543 "accumulator.m"
  {
#line 543 "accumulator.m"
    struct transform_hlds__accumulator__identify_goal_type_9_p_0_env_0_s * transform_hlds__accumulator__env_ptr = (struct transform_hlds__accumulator__identify_goal_type_9_p_0_env_0_s *) transform_hlds__accumulator__env_ptr_arg;

#line 543 "accumulator.m"
    if (MR_builtin_setjmp((transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__commit_0) == 0)
#line 543 "accumulator.m"
      {
#line 543 "accumulator.m"
        {
#line 544 "accumulator.m"
          MR_Word transform_hlds__accumulator___Initial_67;

#line 544 "accumulator.m"
          {
#line 544 "accumulator.m"
            mercury__list__append_3_p_4((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &transform_hlds__accumulator___Initial_67, &(transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__V_75_75, (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__GoalAList_56, transform_hlds__accumulator__identify_goal_type_9_p_0_2, transform_hlds__accumulator__env_ptr);
          }
#line 543 "accumulator.m"
        }
#line 543 "accumulator.m"
        (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_FALSE;
#line 543 "accumulator.m"
      }
#line 543 "accumulator.m"
    else
#line 543 "accumulator.m"
      (transform_hlds__accumulator__env_ptr)->transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 543 "accumulator.m"
  }
#line 543 "accumulator.m"
}

#line 455 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__identify_goal_type_9_p_0(
#line 455 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_10,
#line 455 "accumulator.m"
  MR_Integer transform_hlds__accumulator__ProcId_11,
#line 455 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goal_12,
#line 455 "accumulator.m"
  MR_Word transform_hlds__accumulator__InitialInstMap_13,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Type_14,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Base_15,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__BaseInstMap_16,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Rec_17,
#line 455 "accumulator.m"
  MR_Word * transform_hlds__accumulator__RecInstMap_18)
#line 455 "accumulator.m"
{
#line 455 "accumulator.m"
  {
#line 455 "accumulator.m"
    struct transform_hlds__accumulator__identify_goal_type_9_p_0_env_0_s transform_hlds__accumulator__env;

#line 455 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__PredId_10 = transform_hlds__accumulator__PredId_10;
#line 455 "accumulator.m"
    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__ProcId_11 = transform_hlds__accumulator__ProcId_11;
#line 460 "accumulator.m"
    {
#line 460 "accumulator.m"
      MR_Word transform_hlds__accumulator__GoalExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_12, (MR_Integer) 0)));
#line 461 "accumulator.m"
      MR_Word transform_hlds__accumulator___GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal_12, (MR_Integer) 1)));

#line 485 "accumulator.m"
#line 485 "accumulator.m"
      switch (MR_tag((MR_Word) transform_hlds__accumulator__GoalExpr_19)) {
#line 485 "accumulator.m"
        default:
#line 485 "accumulator.m"
          (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_FALSE;
#line 485 "accumulator.m"
          break;
#line 485 "accumulator.m"
        case (MR_Integer) 3:
#line 485 "accumulator.m"
#line 485 "accumulator.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 0)))) {
#line 485 "accumulator.m"
            default:
#line 485 "accumulator.m"
              (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_FALSE;
#line 485 "accumulator.m"
              break;
#line 485 "accumulator.m"
            case (MR_Integer) 3:
#line 486 "accumulator.m"
              {
#line 486 "accumulator.m"
                MR_Word transform_hlds__accumulator__Goals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 1)));
#line 486 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_40_40;
#line 486 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_41_41;
#line 486 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalA_52;
#line 486 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalB_53;
#line 486 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalBList_57;

#line 488 "accumulator.m"
                (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Goals_30)) == (MR_mktag((MR_Integer) 1)));
#line 488 "accumulator.m"
                if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 488 "accumulator.m"
                  {
#line 488 "accumulator.m"
                    transform_hlds__accumulator__GoalA_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Goals_30, (MR_Integer) 0)));
#line 488 "accumulator.m"
                    transform_hlds__accumulator__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Goals_30, (MR_Integer) 1)));
#line 488 "accumulator.m"
                    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 488 "accumulator.m"
                    if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 488 "accumulator.m"
                      {
#line 488 "accumulator.m"
                        transform_hlds__accumulator__GoalB_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_40_40, (MR_Integer) 0)));
#line 488 "accumulator.m"
                        transform_hlds__accumulator__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_40_40, (MR_Integer) 1)));
#line 488 "accumulator.m"
                        (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = (transform_hlds__accumulator__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "accumulator.m"
                        if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 486 "accumulator.m"
                          {
#line 489 "accumulator.m"
                            {
#line 489 "accumulator.m"
                              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__accumulator__GoalA_52, &(transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__GoalAList_56);
                            }
#line 490 "accumulator.m"
                            {
#line 490 "accumulator.m"
                              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__accumulator__GoalB_53, &transform_hlds__accumulator__GoalBList_57);
                            }
#line 543 "accumulator.m"
                            {
#line 543 "accumulator.m"
                              transform_hlds__accumulator__identify_goal_type_9_p_0_3(&transform_hlds__accumulator__env);
                            }
#line 496 "accumulator.m"
                            if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 493 "accumulator.m"
                              {
#line 493 "accumulator.m"
                                *transform_hlds__accumulator__Type_14 = (MR_Integer) 3;
#line 494 "accumulator.m"
                                *transform_hlds__accumulator__Base_15 = transform_hlds__accumulator__GoalBList_57;
#line 495 "accumulator.m"
                                *transform_hlds__accumulator__Rec_17 = (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__GoalAList_56;
#line 493 "accumulator.m"
                                (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 493 "accumulator.m"
                              }
#line 496 "accumulator.m"
                            else
#line 500 "accumulator.m"
                              {
#line 500 "accumulator.m"
                                MR_Word transform_hlds__accumulator__V_43_43;

#line 496 "accumulator.m"
                                {
#line 496 "accumulator.m"
                                  transform_hlds__accumulator__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_43_43, 0) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__PredId_10));
#line 496 "accumulator.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_43_43, 1) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__ProcId_11));
#line 496 "accumulator.m"
                                }
#line 496 "accumulator.m"
                                {
#line 496 "accumulator.m"
                                  (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = transform_hlds__accumulator__is_recursive_case_2_p_0(transform_hlds__accumulator__GoalBList_57, transform_hlds__accumulator__V_43_43);
                                }
#line 500 "accumulator.m"
                                if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 500 "accumulator.m"
                                  {
#line 497 "accumulator.m"
                                    *transform_hlds__accumulator__Type_14 = (MR_Integer) 2;
#line 498 "accumulator.m"
                                    *transform_hlds__accumulator__Base_15 = (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__GoalAList_56;
#line 499 "accumulator.m"
                                    *transform_hlds__accumulator__Rec_17 = transform_hlds__accumulator__GoalBList_57;
#line 499 "accumulator.m"
                                    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 500 "accumulator.m"
                                  }
#line 500 "accumulator.m"
                              }
#line 486 "accumulator.m"
                            if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 486 "accumulator.m"
                              {
#line 503 "accumulator.m"
                                *transform_hlds__accumulator__BaseInstMap_16 = transform_hlds__accumulator__InitialInstMap_13;
#line 504 "accumulator.m"
                                *transform_hlds__accumulator__RecInstMap_18 = transform_hlds__accumulator__InitialInstMap_13;
#line 504 "accumulator.m"
                                (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 486 "accumulator.m"
                              }
#line 486 "accumulator.m"
                          }
#line 488 "accumulator.m"
                      }
#line 488 "accumulator.m"
                  }
#line 486 "accumulator.m"
              }
#line 485 "accumulator.m"
              break;
#line 485 "accumulator.m"
            case (MR_Integer) 4:
#line 463 "accumulator.m"
              {
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 3)));
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalA_25;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalB_27;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalAList_28;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalBList_29;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_44_44;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_45_45;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_46_46;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_47_47;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_48_48;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_49_49;
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator___Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 1)));
#line 463 "accumulator.m"
                MR_Word transform_hlds__accumulator___CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 2)));
#line 465 "accumulator.m"
                MR_Word transform_hlds__accumulator___IdA_24;
#line 465 "accumulator.m"
                MR_Word transform_hlds__accumulator___IdB_26;
#line 469 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_50_50;

#line 465 "accumulator.m"
                (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__Cases_23)) == (MR_mktag((MR_Integer) 1)));
#line 465 "accumulator.m"
                if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 465 "accumulator.m"
                  {
#line 465 "accumulator.m"
                    transform_hlds__accumulator__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Cases_23, (MR_Integer) 0)));
#line 465 "accumulator.m"
                    transform_hlds__accumulator__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Cases_23, (MR_Integer) 1)));
#line 465 "accumulator.m"
                    transform_hlds__accumulator___IdA_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_44_44, (MR_Integer) 0)));
#line 465 "accumulator.m"
                    transform_hlds__accumulator__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_44_44, (MR_Integer) 1)));
#line 465 "accumulator.m"
                    transform_hlds__accumulator__GoalA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_44_44, (MR_Integer) 2)));
#line 465 "accumulator.m"
                    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = (transform_hlds__accumulator__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "accumulator.m"
                    if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 463 "accumulator.m"
                      {
#line 465 "accumulator.m"
                        (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 465 "accumulator.m"
                        if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 465 "accumulator.m"
                          {
#line 465 "accumulator.m"
                            transform_hlds__accumulator__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_46_46, (MR_Integer) 0)));
#line 465 "accumulator.m"
                            transform_hlds__accumulator__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_46_46, (MR_Integer) 1)));
#line 465 "accumulator.m"
                            (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = (transform_hlds__accumulator__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "accumulator.m"
                            if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 463 "accumulator.m"
                              {
#line 465 "accumulator.m"
                                transform_hlds__accumulator___IdB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_47_47, (MR_Integer) 0)));
#line 465 "accumulator.m"
                                transform_hlds__accumulator__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_47_47, (MR_Integer) 1)));
#line 465 "accumulator.m"
                                transform_hlds__accumulator__GoalB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_47_47, (MR_Integer) 2)));
#line 465 "accumulator.m"
                                (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = (transform_hlds__accumulator__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "accumulator.m"
                                if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 463 "accumulator.m"
                                  {
#line 466 "accumulator.m"
                                    {
#line 466 "accumulator.m"
                                      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__accumulator__GoalA_25, &transform_hlds__accumulator__GoalAList_28);
                                    }
#line 467 "accumulator.m"
                                    {
#line 467 "accumulator.m"
                                      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__accumulator__GoalB_27, &transform_hlds__accumulator__GoalBList_29);
                                    }
#line 469 "accumulator.m"
                                    {
#line 469 "accumulator.m"
                                      transform_hlds__accumulator__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "accumulator.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_50_50, 0) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__PredId_10));
#line 469 "accumulator.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_50_50, 1) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__ProcId_11));
#line 469 "accumulator.m"
                                    }
#line 469 "accumulator.m"
                                    {
#line 469 "accumulator.m"
                                      (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = transform_hlds__accumulator__is_recursive_case_2_p_0(transform_hlds__accumulator__GoalAList_28, transform_hlds__accumulator__V_50_50);
                                    }
#line 473 "accumulator.m"
                                    if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 470 "accumulator.m"
                                      {
#line 470 "accumulator.m"
                                        *transform_hlds__accumulator__Type_14 = (MR_Integer) 1;
#line 471 "accumulator.m"
                                        *transform_hlds__accumulator__Base_15 = transform_hlds__accumulator__GoalBList_29;
#line 472 "accumulator.m"
                                        *transform_hlds__accumulator__Rec_17 = transform_hlds__accumulator__GoalAList_28;
#line 470 "accumulator.m"
                                        (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 470 "accumulator.m"
                                      }
#line 473 "accumulator.m"
                                    else
#line 477 "accumulator.m"
                                      {
#line 477 "accumulator.m"
                                        MR_Word transform_hlds__accumulator__V_51_51;

#line 473 "accumulator.m"
                                        {
#line 473 "accumulator.m"
                                          transform_hlds__accumulator__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 473 "accumulator.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_51_51, 0) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__PredId_10));
#line 473 "accumulator.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_51_51, 1) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__ProcId_11));
#line 473 "accumulator.m"
                                        }
#line 473 "accumulator.m"
                                        {
#line 473 "accumulator.m"
                                          (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = transform_hlds__accumulator__is_recursive_case_2_p_0(transform_hlds__accumulator__GoalBList_29, transform_hlds__accumulator__V_51_51);
                                        }
#line 477 "accumulator.m"
                                        if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 477 "accumulator.m"
                                          {
#line 474 "accumulator.m"
                                            *transform_hlds__accumulator__Type_14 = (MR_Integer) 0;
#line 475 "accumulator.m"
                                            *transform_hlds__accumulator__Base_15 = transform_hlds__accumulator__GoalAList_28;
#line 476 "accumulator.m"
                                            *transform_hlds__accumulator__Rec_17 = transform_hlds__accumulator__GoalBList_29;
#line 476 "accumulator.m"
                                            (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 477 "accumulator.m"
                                          }
#line 477 "accumulator.m"
                                      }
#line 463 "accumulator.m"
                                    if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 463 "accumulator.m"
                                      {
#line 480 "accumulator.m"
                                        *transform_hlds__accumulator__BaseInstMap_16 = transform_hlds__accumulator__InitialInstMap_13;
#line 481 "accumulator.m"
                                        *transform_hlds__accumulator__RecInstMap_18 = transform_hlds__accumulator__InitialInstMap_13;
#line 481 "accumulator.m"
                                        (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 463 "accumulator.m"
                                      }
#line 463 "accumulator.m"
                                  }
#line 463 "accumulator.m"
                              }
#line 465 "accumulator.m"
                          }
#line 463 "accumulator.m"
                      }
#line 465 "accumulator.m"
                  }
#line 463 "accumulator.m"
              }
#line 485 "accumulator.m"
              break;
#line 485 "accumulator.m"
            case (MR_Integer) 6:
#line 509 "accumulator.m"
              {
#line 509 "accumulator.m"
                MR_Word transform_hlds__accumulator__Cond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 2)));
#line 509 "accumulator.m"
                MR_Word transform_hlds__accumulator__Then_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 3)));
#line 509 "accumulator.m"
                MR_Word transform_hlds__accumulator__Else_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 4)));
#line 509 "accumulator.m"
                MR_Word transform_hlds__accumulator__CondGoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Cond_32, (MR_Integer) 1)));
#line 509 "accumulator.m"
                MR_Word transform_hlds__accumulator__CondInstMapDelta_37;
#line 509 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalAList_62;
#line 509 "accumulator.m"
                MR_Word transform_hlds__accumulator__GoalBList_63;
#line 509 "accumulator.m"
                MR_Word transform_hlds__accumulator___Vars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr_19, (MR_Integer) 1)));
#line 510 "accumulator.m"
                MR_Word transform_hlds__accumulator___CondGoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Cond_32, (MR_Integer) 0)));
#line 515 "accumulator.m"
                MR_Word transform_hlds__accumulator__V_38_38;

#line 511 "accumulator.m"
                {
#line 511 "accumulator.m"
                  transform_hlds__accumulator__CondInstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__accumulator__CondGoalInfo_36);
                }
#line 513 "accumulator.m"
                {
#line 513 "accumulator.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__accumulator__Then_33, &transform_hlds__accumulator__GoalAList_62);
                }
#line 514 "accumulator.m"
                {
#line 514 "accumulator.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__accumulator__Else_34, &transform_hlds__accumulator__GoalBList_63);
                }
#line 515 "accumulator.m"
                {
#line 515 "accumulator.m"
                  transform_hlds__accumulator__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_38_38, 0) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__PredId_10));
#line 515 "accumulator.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_38_38, 1) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__ProcId_11));
#line 515 "accumulator.m"
                }
#line 515 "accumulator.m"
                {
#line 515 "accumulator.m"
                  (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = transform_hlds__accumulator__is_recursive_case_2_p_0(transform_hlds__accumulator__GoalAList_62, transform_hlds__accumulator__V_38_38);
                }
#line 523 "accumulator.m"
                if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 516 "accumulator.m"
                  {
#line 516 "accumulator.m"
                    *transform_hlds__accumulator__Type_14 = (MR_Integer) 5;
#line 517 "accumulator.m"
                    *transform_hlds__accumulator__Base_15 = transform_hlds__accumulator__GoalBList_63;
#line 518 "accumulator.m"
                    *transform_hlds__accumulator__Rec_17 = transform_hlds__accumulator__GoalAList_62;
#line 520 "accumulator.m"
                    *transform_hlds__accumulator__BaseInstMap_16 = transform_hlds__accumulator__InitialInstMap_13;
#line 521 "accumulator.m"
                    {
#line 521 "accumulator.m"
                      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__accumulator__InitialInstMap_13, transform_hlds__accumulator__CondInstMapDelta_37, transform_hlds__accumulator__RecInstMap_18);
                    }
#line 516 "accumulator.m"
                    (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 516 "accumulator.m"
                  }
#line 523 "accumulator.m"
                else
#line 531 "accumulator.m"
                  {
#line 531 "accumulator.m"
                    MR_Word transform_hlds__accumulator__V_39_39;

#line 523 "accumulator.m"
                    {
#line 523 "accumulator.m"
                      transform_hlds__accumulator__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_39_39, 0) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__PredId_10));
#line 523 "accumulator.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_39_39, 1) = ((MR_Box) ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__ProcId_11));
#line 523 "accumulator.m"
                    }
#line 523 "accumulator.m"
                    {
#line 523 "accumulator.m"
                      (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = transform_hlds__accumulator__is_recursive_case_2_p_0(transform_hlds__accumulator__GoalBList_63, transform_hlds__accumulator__V_39_39);
                    }
#line 531 "accumulator.m"
                    if ((transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded)
#line 531 "accumulator.m"
                      {
#line 524 "accumulator.m"
                        *transform_hlds__accumulator__Type_14 = (MR_Integer) 4;
#line 525 "accumulator.m"
                        *transform_hlds__accumulator__Base_15 = transform_hlds__accumulator__GoalAList_62;
#line 526 "accumulator.m"
                        *transform_hlds__accumulator__Rec_17 = transform_hlds__accumulator__GoalBList_63;
#line 528 "accumulator.m"
                        *transform_hlds__accumulator__RecInstMap_18 = transform_hlds__accumulator__InitialInstMap_13;
#line 529 "accumulator.m"
                        {
#line 529 "accumulator.m"
                          hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__accumulator__InitialInstMap_13, transform_hlds__accumulator__CondInstMapDelta_37, transform_hlds__accumulator__BaseInstMap_16);
                        }
#line 529 "accumulator.m"
                        (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded = MR_TRUE;
#line 531 "accumulator.m"
                      }
#line 531 "accumulator.m"
                  }
#line 509 "accumulator.m"
              }
#line 485 "accumulator.m"
              break;
#line 485 "accumulator.m"
          }
#line 485 "accumulator.m"
          break;
#line 485 "accumulator.m"
      }
#line 460 "accumulator.m"
      return (transform_hlds__accumulator__env).transform_hlds__accumulator__identify_goal_type_9_p_0_env_0__succeeded;
#line 460 "accumulator.m"
    }
#line 455 "accumulator.m"
  }
#line 455 "accumulator.m"
}

#line 430 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__accu_standardize_2_p_0(
#line 430 "accumulator.m"
  MR_Word transform_hlds__accumulator__Goal0_3,
#line 430 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Goal_4)
#line 430 "accumulator.m"
{
#line 442 "accumulator.m"
  while (MR_TRUE)
#line 442 "accumulator.m"
    {
#line 442 "accumulator.m"
      /* tailcall optimized into a loop */
#line 442 "accumulator.m"
      {
#line 442 "accumulator.m"
        MR_bool transform_hlds__accumulator__succeeded;
#line 442 "accumulator.m"
        MR_Word transform_hlds__accumulator__Goal1_7;
#line 434 "accumulator.m"
        MR_Word transform_hlds__accumulator__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal0_3, (MR_Integer) 0)));
#line 434 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Goal0_3, (MR_Integer) 1)));

#line 437 "accumulator.m"
        if (((((MR_tag((MR_Word) transform_hlds__accumulator__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 436 "accumulator.m"
          {
#line 436 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr0_5, (MR_Integer) 1)));
#line 436 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr0_5, (MR_Integer) 2)));
#line 436 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_12_12;

#line 436 "accumulator.m"
            transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_10_10 == (MR_Integer) 0);
#line 436 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 436 "accumulator.m"
              {
#line 436 "accumulator.m"
                transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 436 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 436 "accumulator.m"
                  {
#line 436 "accumulator.m"
                    transform_hlds__accumulator__Goal1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_11_11, (MR_Integer) 0)));
#line 436 "accumulator.m"
                    transform_hlds__accumulator__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_11_11, (MR_Integer) 1)));
#line 436 "accumulator.m"
                    transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "accumulator.m"
                  }
#line 436 "accumulator.m"
              }
#line 436 "accumulator.m"
          }
#line 437 "accumulator.m"
        else
#line 437 "accumulator.m"
        if (((((MR_tag((MR_Word) transform_hlds__accumulator__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 438 "accumulator.m"
          {
#line 438 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__accumulator__GoalExpr0_5, (MR_Integer) 1)));
#line 438 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_9_9;

#line 438 "accumulator.m"
            transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 438 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 438 "accumulator.m"
              {
#line 438 "accumulator.m"
                transform_hlds__accumulator__Goal1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_8_8, (MR_Integer) 0)));
#line 438 "accumulator.m"
                transform_hlds__accumulator__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_8_8, (MR_Integer) 1)));
#line 438 "accumulator.m"
                transform_hlds__accumulator__succeeded = (transform_hlds__accumulator__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "accumulator.m"
              }
#line 438 "accumulator.m"
          }
#line 437 "accumulator.m"
        else
#line 437 "accumulator.m"
          transform_hlds__accumulator__succeeded = MR_FALSE;
#line 442 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 441 "accumulator.m"
          {
#line 441 "accumulator.m"
            /* direct tailcall eliminated */
#line 441 "accumulator.m"
            {
#line 441 "accumulator.m"
              MR_Word transform_hlds__accumulator__Goal0__tmp_copy_3 = transform_hlds__accumulator__Goal1_7;

#line 441 "accumulator.m"
              transform_hlds__accumulator__Goal0_3 = transform_hlds__accumulator__Goal0__tmp_copy_3;
#line 441 "accumulator.m"
            }
#line 441 "accumulator.m"
            continue;
#line 441 "accumulator.m"
          }
#line 442 "accumulator.m"
        else
#line 443 "accumulator.m"
          *transform_hlds__accumulator__Goal_4 = transform_hlds__accumulator__Goal0_3;
#line 442 "accumulator.m"
      }
#line 442 "accumulator.m"
      break;
#line 442 "accumulator.m"
    }
#line 430 "accumulator.m"
}

#line 389 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__should_attempt_accu_transform_2_16_p_0(
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_46,
#line 389 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_47,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_18,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredInfo_19,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_48,
#line 389 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_49,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVars_21,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__InitialInstMap_22,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__TopLevel_23,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_24,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__DoLCO_25,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__12_12,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__C_28,
#line 389 "accumulator.m"
  MR_Integer transform_hlds__accumulator__M_29,
#line 389 "accumulator.m"
  MR_Word transform_hlds__accumulator__Rec_30,
#line 389 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Warnings_31)
#line 389 "accumulator.m"
{
#line 397 "accumulator.m"
  while (MR_TRUE)
#line 397 "accumulator.m"
    {
#line 397 "accumulator.m"
      /* tailcall optimized into a loop */
#line 397 "accumulator.m"
      {
#line 397 "accumulator.m"
        MR_bool transform_hlds__accumulator__succeeded = ((MR_tag((MR_Word) transform_hlds__accumulator__HeadVar__12_12)) == (MR_mktag((MR_Integer) 1)));
#line 397 "accumulator.m"
        MR_Word transform_hlds__accumulator__Id_26;
#line 397 "accumulator.m"
        MR_Word transform_hlds__accumulator__Ids_27;
#line 397 "accumulator.m"
        MR_Word transform_hlds__accumulator__VarTypes0_32;
#line 397 "accumulator.m"
        MR_Word transform_hlds__accumulator__Out_33;
#line 397 "accumulator.m"
        MR_Word transform_hlds__accumulator__OutPrime_34;
#line 397 "accumulator.m"
        MR_Word transform_hlds__accumulator__HeadToCallSubst_35;
#line 397 "accumulator.m"
        MR_Word transform_hlds__accumulator__CallToHeadSubst_36;
#line 412 "accumulator.m"
        MR_Word transform_hlds__accumulator__WarningsPrime_45;
#line 412 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_50_50;
#line 412 "accumulator.m"
        MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_51_51;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_34_79;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_10_88;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Sets_37;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__VarSet_38;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__VarTypes_39;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Accs_40;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__BaseCase_41;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__BasePairs_42;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Substs_43;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__CS_44;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Case_62;
#line 403 "accumulator.m"
        MR_Integer transform_hlds__accumulator__K_63;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__NextGoalId_64;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Sets0_65;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Sets1_66;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Before_67;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Assoc_68;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__ConstructAssoc_69;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Construct_70;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Update_71;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Reject_72;
#line 403 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_73_73;
#line 403 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_74_74;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_75_75;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_76_76;
#line 403 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_77_77;
#line 403 "accumulator.m"
        MR_Integer transform_hlds__accumulator__V_78_78;
#line 403 "accumulator.m"
        MR_Word transform_hlds__accumulator__Reject_87;

#line 397 "accumulator.m"
        if (transform_hlds__accumulator__succeeded)
#line 397 "accumulator.m"
          {
#line 397 "accumulator.m"
            transform_hlds__accumulator__Id_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__12_12, (MR_Integer) 0)));
#line 397 "accumulator.m"
            transform_hlds__accumulator__Ids_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__12_12, (MR_Integer) 1)));
#line 398 "accumulator.m"
            {
#line 398 "accumulator.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_48, &transform_hlds__accumulator__VarTypes0_32);
            }
#line 399 "accumulator.m"
            {
#line 399 "accumulator.m"
              transform_hlds__accumulator__identify_out_and_out_prime_10_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__accumulator__VarTypes0_32, transform_hlds__accumulator__InitialInstMap_22, transform_hlds__accumulator__Id_26, transform_hlds__accumulator__Rec_30, transform_hlds__accumulator__HeadVars_21, &transform_hlds__accumulator__Out_33, &transform_hlds__accumulator__OutPrime_34, &transform_hlds__accumulator__HeadToCallSubst_35, &transform_hlds__accumulator__CallToHeadSubst_36);
            }
#line 684 "accumulator.m"
            transform_hlds__accumulator__Case_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Id_26, (MR_Integer) 0)));
#line 684 "accumulator.m"
            transform_hlds__accumulator__K_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Id_26, (MR_Integer) 1)));
#line 685 "accumulator.m"
            transform_hlds__accumulator__V_74_74 = (MR_Integer) 1;
#line 685 "accumulator.m"
            transform_hlds__accumulator__V_73_73 = (transform_hlds__accumulator__K_63 + transform_hlds__accumulator__V_74_74);
#line 18719 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeCtorInfo_10_88 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 685 "accumulator.m"
            {
#line 685 "accumulator.m"
              transform_hlds__accumulator__NextGoalId_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 685 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__NextGoalId_64, 0) = ((MR_Box) (transform_hlds__accumulator__Case_62));
#line 685 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__NextGoalId_64, 1) = ((MR_Box) (transform_hlds__accumulator__V_73_73));
#line 685 "accumulator.m"
            }
#line 773 "accumulator.m"
            {
#line 773 "accumulator.m"
              mercury__set__init_1_p_0(transform_hlds__accumulator__TypeCtorInfo_10_88, &transform_hlds__accumulator__Reject_87);
            }
#line 780 "accumulator.m"
            {
#line 780 "accumulator.m"
              transform_hlds__accumulator__Sets0_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 780 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets0_65, 0) = ((MR_Box) (transform_hlds__accumulator__Reject_87));
#line 780 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets0_65, 1) = ((MR_Box) (transform_hlds__accumulator__Reject_87));
#line 780 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets0_65, 2) = ((MR_Box) (transform_hlds__accumulator__Reject_87));
#line 780 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets0_65, 3) = ((MR_Box) (transform_hlds__accumulator__Reject_87));
#line 780 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets0_65, 4) = ((MR_Box) (transform_hlds__accumulator__Reject_87));
#line 780 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets0_65, 5) = ((MR_Box) (transform_hlds__accumulator__Reject_87));
#line 780 "accumulator.m"
            }
#line 687 "accumulator.m"
            {
#line 687 "accumulator.m"
              transform_hlds__accumulator__accu_stage1_2_9_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__accumulator__VarTypes0_32, transform_hlds__accumulator__FullyStrict_24, transform_hlds__accumulator__NextGoalId_64, transform_hlds__accumulator__K_63, transform_hlds__accumulator__M_29, transform_hlds__accumulator__C_28, transform_hlds__accumulator__Sets0_65, &transform_hlds__accumulator__Sets1_66);
            }
#line 689 "accumulator.m"
            transform_hlds__accumulator__Before_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets1_66, (MR_Integer) 0)));
#line 689 "accumulator.m"
            transform_hlds__accumulator__Assoc_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets1_66, (MR_Integer) 1)));
#line 689 "accumulator.m"
            transform_hlds__accumulator__ConstructAssoc_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets1_66, (MR_Integer) 2)));
#line 689 "accumulator.m"
            transform_hlds__accumulator__Construct_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets1_66, (MR_Integer) 3)));
#line 689 "accumulator.m"
            transform_hlds__accumulator__Update_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets1_66, (MR_Integer) 4)));
#line 689 "accumulator.m"
            transform_hlds__accumulator__Reject_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets1_66, (MR_Integer) 5)));
#line 18771 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeCtorInfo_34_79 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 691 "accumulator.m"
            transform_hlds__accumulator__V_78_78 = (MR_Integer) 1;
#line 691 "accumulator.m"
            transform_hlds__accumulator__V_77_77 = (transform_hlds__accumulator__K_63 - transform_hlds__accumulator__V_78_78);
#line 691 "accumulator.m"
            {
#line 691 "accumulator.m"
              transform_hlds__accumulator__V_76_76 = transform_hlds__accumulator__set_upto_2_f_0(transform_hlds__accumulator__Case_62, transform_hlds__accumulator__V_77_77);
            }
#line 691 "accumulator.m"
            {
#line 691 "accumulator.m"
              transform_hlds__accumulator__V_75_75 = mercury__set__union_2_f_0(transform_hlds__accumulator__TypeCtorInfo_34_79, transform_hlds__accumulator__Before_67, transform_hlds__accumulator__V_76_76);
            }
#line 691 "accumulator.m"
            {
#line 691 "accumulator.m"
              transform_hlds__accumulator__Sets_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 691 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_37, 0) = ((MR_Box) (transform_hlds__accumulator__V_75_75));
#line 691 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_37, 1) = ((MR_Box) (transform_hlds__accumulator__Assoc_68));
#line 691 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_37, 2) = ((MR_Box) (transform_hlds__accumulator__ConstructAssoc_69));
#line 691 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_37, 3) = ((MR_Box) (transform_hlds__accumulator__Construct_70));
#line 691 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_37, 4) = ((MR_Box) (transform_hlds__accumulator__Update_71));
#line 691 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Sets_37, 5) = ((MR_Box) (transform_hlds__accumulator__Reject_72));
#line 691 "accumulator.m"
            }
#line 697 "accumulator.m"
            {
#line 697 "accumulator.m"
              transform_hlds__accumulator__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__accumulator__TypeCtorInfo_34_79, transform_hlds__accumulator__Reject_72);
            }
#line 403 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 403 "accumulator.m"
              {
#line 699 "accumulator.m"
                {
#line 699 "accumulator.m"
                  transform_hlds__accumulator__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__accumulator__TypeCtorInfo_34_79, transform_hlds__accumulator__Assoc_68);
                }
#line 699 "accumulator.m"
                transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 700 "accumulator.m"
                if (!(transform_hlds__accumulator__succeeded))
#line 701 "accumulator.m"
                  {
#line 701 "accumulator.m"
                    {
#line 701 "accumulator.m"
                      transform_hlds__accumulator__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__accumulator__TypeCtorInfo_34_79, transform_hlds__accumulator__Update_71);
                    }
#line 701 "accumulator.m"
                    transform_hlds__accumulator__succeeded = !(transform_hlds__accumulator__succeeded);
#line 701 "accumulator.m"
                  }
#line 403 "accumulator.m"
                if (transform_hlds__accumulator__succeeded)
#line 403 "accumulator.m"
                  {
#line 709 "accumulator.m"
#line 709 "accumulator.m"
                    switch (transform_hlds__accumulator__DoLCO_25) {
#line 709 "accumulator.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 709 "accumulator.m"
                      case (MR_Integer) 0:
#line 704 "accumulator.m"
                        {
#line 707 "accumulator.m"
                          {
#line 707 "accumulator.m"
                            transform_hlds__accumulator__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__accumulator__TypeCtorInfo_34_79, transform_hlds__accumulator__Construct_70);
                          }
#line 704 "accumulator.m"
                          if (transform_hlds__accumulator__succeeded)
#line 708 "accumulator.m"
                            {
#line 708 "accumulator.m"
                              transform_hlds__accumulator__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__accumulator__TypeCtorInfo_34_79, transform_hlds__accumulator__ConstructAssoc_69);
                            }
#line 704 "accumulator.m"
                        }
#line 709 "accumulator.m"
                        break;
#line 709 "accumulator.m"
                      case (MR_Integer) 1:
#line 710 "accumulator.m"
                        transform_hlds__accumulator__succeeded = MR_TRUE;
#line 709 "accumulator.m"
                        break;
#line 709 "accumulator.m"
                    }
#line 403 "accumulator.m"
                    if (transform_hlds__accumulator__succeeded)
#line 403 "accumulator.m"
                      {
#line 404 "accumulator.m"
                        {
#line 404 "accumulator.m"
                          transform_hlds__accumulator__succeeded = transform_hlds__accumulator__accu_stage2_15_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_48, transform_hlds__accumulator__Id_26, transform_hlds__accumulator__C_28, transform_hlds__accumulator__Sets_37, transform_hlds__accumulator__OutPrime_34, transform_hlds__accumulator__Out_33, &transform_hlds__accumulator__VarSet_38, &transform_hlds__accumulator__VarTypes_39, &transform_hlds__accumulator__Accs_40, &transform_hlds__accumulator__BaseCase_41, &transform_hlds__accumulator__BasePairs_42, &transform_hlds__accumulator__Substs_43, &transform_hlds__accumulator__CS_44, &transform_hlds__accumulator__WarningsPrime_45);
                        }
#line 403 "accumulator.m"
                        if (transform_hlds__accumulator__succeeded)
#line 403 "accumulator.m"
                          {
#line 407 "accumulator.m"
                            {
#line 407 "accumulator.m"
                              transform_hlds__accumulator__accu_stage3_20_p_0(transform_hlds__accumulator__Id_26, transform_hlds__accumulator__Accs_40, transform_hlds__accumulator__VarSet_38, transform_hlds__accumulator__VarTypes_39, transform_hlds__accumulator__C_28, transform_hlds__accumulator__CS_44, transform_hlds__accumulator__Substs_43, transform_hlds__accumulator__HeadToCallSubst_35, transform_hlds__accumulator__CallToHeadSubst_36, transform_hlds__accumulator__BaseCase_41, transform_hlds__accumulator__BasePairs_42, transform_hlds__accumulator__Sets_37, transform_hlds__accumulator__Out_33, transform_hlds__accumulator__TopLevel_23, transform_hlds__accumulator__PredId_18, transform_hlds__accumulator__PredInfo_19, transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_48, &transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_46, &transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_51_51);
                            }
#line 407 "accumulator.m"
                            transform_hlds__accumulator__succeeded = MR_TRUE;
#line 403 "accumulator.m"
                          }
#line 403 "accumulator.m"
                      }
#line 403 "accumulator.m"
                  }
#line 403 "accumulator.m"
              }
#line 412 "accumulator.m"
            if (transform_hlds__accumulator__succeeded)
#line 411 "accumulator.m"
              {
#line 411 "accumulator.m"
                *transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_49 = transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_50_50;
#line 411 "accumulator.m"
                *transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_47 = transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_51_51;
#line 411 "accumulator.m"
                *transform_hlds__accumulator__Warnings_31 = transform_hlds__accumulator__WarningsPrime_45;
#line 411 "accumulator.m"
                transform_hlds__accumulator__succeeded = MR_TRUE;
#line 411 "accumulator.m"
              }
#line 412 "accumulator.m"
            else
#line 413 "accumulator.m"
              {
#line 413 "accumulator.m"
                /* direct tailcall eliminated */
#line 413 "accumulator.m"
                {
#line 413 "accumulator.m"
                  MR_Word transform_hlds__accumulator__HeadVar__12__tmp_copy_12 = transform_hlds__accumulator__Ids_27;

#line 413 "accumulator.m"
                  transform_hlds__accumulator__HeadVar__12_12 = transform_hlds__accumulator__HeadVar__12__tmp_copy_12;
#line 413 "accumulator.m"
                }
#line 413 "accumulator.m"
                continue;
#line 413 "accumulator.m"
              }
#line 397 "accumulator.m"
          }
#line 397 "accumulator.m"
        return transform_hlds__accumulator__succeeded;
#line 397 "accumulator.m"
      }
#line 397 "accumulator.m"
      break;
#line 397 "accumulator.m"
    }
#line 389 "accumulator.m"
}

#line 569 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__should_attempt_accu_transform_10_p_0_2(
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 569 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3,
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_4,
#line 569 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_5,
#line 569 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_6,
#line 569 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_7)
#line 569 "accumulator.m"
{
#line 569 "accumulator.m"
  {
#line 569 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 569 "accumulator.m"
    MR_Integer transform_hlds__accumulator__conv8_STATE_VARIABLE_N_19;
#line 569 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv7_STATE_VARIABLE_InstMap_21;
#line 569 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv6_STATE_VARIABLE_GoalStore_23;

#line 569 "accumulator.m"
    {
#line 569 "accumulator.m"
      transform_hlds__accumulator__accu_store_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Integer) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv8_STATE_VARIABLE_N_19, ((MR_Word) transform_hlds__accumulator__wrapper_arg_4), &transform_hlds__accumulator__conv7_STATE_VARIABLE_InstMap_21, ((MR_Word) transform_hlds__accumulator__wrapper_arg_6), &transform_hlds__accumulator__conv6_STATE_VARIABLE_GoalStore_23);
    }
#line 569 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv8_STATE_VARIABLE_N_19));
#line 569 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_5 = ((MR_Box) (transform_hlds__accumulator__conv7_STATE_VARIABLE_InstMap_21));
#line 569 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_7 = ((MR_Box) (transform_hlds__accumulator__conv6_STATE_VARIABLE_GoalStore_23));
#line 569 "accumulator.m"
  }
#line 569 "accumulator.m"
}

#line 567 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__should_attempt_accu_transform_10_p_0_1(
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__closure_arg,
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_1,
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_2,
#line 567 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_3,
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_4,
#line 567 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_5,
#line 567 "accumulator.m"
  MR_Box transform_hlds__accumulator__wrapper_arg_6,
#line 567 "accumulator.m"
  MR_Box * transform_hlds__accumulator__wrapper_arg_7)
#line 567 "accumulator.m"
{
#line 567 "accumulator.m"
  {
#line 567 "accumulator.m"
    MR_Box transform_hlds__accumulator__closure = transform_hlds__accumulator__closure_arg;
#line 567 "accumulator.m"
    MR_Integer transform_hlds__accumulator__conv2_STATE_VARIABLE_N_19;
#line 567 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv1_STATE_VARIABLE_InstMap_21;
#line 567 "accumulator.m"
    MR_Word transform_hlds__accumulator__conv0_STATE_VARIABLE_GoalStore_23;

#line 567 "accumulator.m"
    {
#line 567 "accumulator.m"
      transform_hlds__accumulator__accu_store_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__accumulator__wrapper_arg_1), ((MR_Integer) transform_hlds__accumulator__wrapper_arg_2), &transform_hlds__accumulator__conv2_STATE_VARIABLE_N_19, ((MR_Word) transform_hlds__accumulator__wrapper_arg_4), &transform_hlds__accumulator__conv1_STATE_VARIABLE_InstMap_21, ((MR_Word) transform_hlds__accumulator__wrapper_arg_6), &transform_hlds__accumulator__conv0_STATE_VARIABLE_GoalStore_23);
    }
#line 567 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_3 = ((MR_Box) (transform_hlds__accumulator__conv2_STATE_VARIABLE_N_19));
#line 567 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_5 = ((MR_Box) (transform_hlds__accumulator__conv1_STATE_VARIABLE_InstMap_21));
#line 567 "accumulator.m"
    *transform_hlds__accumulator__wrapper_arg_7 = ((MR_Box) (transform_hlds__accumulator__conv0_STATE_VARIABLE_GoalStore_23));
#line 567 "accumulator.m"
  }
#line 567 "accumulator.m"
}

#line 356 "accumulator.m"
static MR_bool MR_CALL 
transform_hlds__accumulator__should_attempt_accu_transform_10_p_0(
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_31,
#line 356 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_32,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredId_12,
#line 356 "accumulator.m"
  MR_Integer transform_hlds__accumulator__ProcId_13,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredInfo_14,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_33,
#line 356 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_34,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__FullyStrict_16,
#line 356 "accumulator.m"
  MR_Word transform_hlds__accumulator__DoLCO_17,
#line 356 "accumulator.m"
  MR_Word * transform_hlds__accumulator__Warnings_18)
#line 356 "accumulator.m"
{
#line 361 "accumulator.m"
  {
#line 361 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_37_37;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_23_55;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_31_63;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_32_64;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeCtorInfo_33_65;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__TypeInfo_34_66;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goal0_19;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__HeadVars_20;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__InitialInstMap_21;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__Goal_22;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__TopLevel_23;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__Base_24;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__BaseInstMap_25;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__Rec_26;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__RecInstMap_27;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__C_28;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__RecCallIds_29;
#line 361 "accumulator.m"
    MR_Integer transform_hlds__accumulator__M_30;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__C0_43;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__C1_46;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_49_49;
#line 361 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_50_50;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_51_51;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_52_52;
#line 361 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_53_53;
#line 361 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_54_54;
#line 567 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_44_44;
#line 567 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_45_45;
#line 567 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv5_V_44_44;
#line 567 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv4_V_45_45;
#line 567 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv3_C1_46;
#line 569 "accumulator.m"
    MR_Integer transform_hlds__accumulator__V_47_47;
#line 569 "accumulator.m"
    MR_Word transform_hlds__accumulator__V_48_48;
#line 569 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv11_V_47_47;
#line 569 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv10_V_48_48;
#line 569 "accumulator.m"
    MR_Box transform_hlds__accumulator__conv9_C_28;

#line 362 "accumulator.m"
    {
#line 362 "accumulator.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__accumulator__Goal0_19);
    }
#line 363 "accumulator.m"
    {
#line 363 "accumulator.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__accumulator__HeadVars_20);
    }
#line 364 "accumulator.m"
    {
#line 364 "accumulator.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_33, transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__accumulator__InitialInstMap_21);
    }
#line 366 "accumulator.m"
    {
#line 366 "accumulator.m"
      transform_hlds__accumulator__accu_standardize_2_p_0(transform_hlds__accumulator__Goal0_19, &transform_hlds__accumulator__Goal_22);
    }
#line 367 "accumulator.m"
    {
#line 367 "accumulator.m"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator__identify_goal_type_9_p_0(transform_hlds__accumulator__PredId_12, transform_hlds__accumulator__ProcId_13, transform_hlds__accumulator__Goal_22, transform_hlds__accumulator__InitialInstMap_21, &transform_hlds__accumulator__TopLevel_23, &transform_hlds__accumulator__Base_24, &transform_hlds__accumulator__BaseInstMap_25, &transform_hlds__accumulator__Rec_26, &transform_hlds__accumulator__RecInstMap_27);
    }
#line 361 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 361 "accumulator.m"
      {
#line 19172 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeCtorInfo_23_55 = (MR_Word) &transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
#line 566 "accumulator.m"
        {
#line 566 "accumulator.m"
          transform_hlds__goal_store__goal_store_init_1_p_0(transform_hlds__accumulator__TypeCtorInfo_23_55, &transform_hlds__accumulator__C0_43);
        }
#line 567 "accumulator.m"
        transform_hlds__accumulator__V_51_51 = (MR_Integer) 1;
#line 568 "accumulator.m"
        transform_hlds__accumulator__V_50_50 = (MR_Integer) 1;
#line 19183 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeCtorInfo_31_63 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 19185 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeCtorInfo_32_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 19187 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeCtorInfo_33_65 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
#line 19189 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeInfo_34_66 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[1];
#line 567 "accumulator.m"
        transform_hlds__accumulator__V_49_49 = (MR_Word) &transform_hlds__accumulator_scalar_common_3[1];
#line 567 "accumulator.m"
        {
#line 567 "accumulator.m"
          mercury__list__foldl3_8_p_0(transform_hlds__accumulator__TypeCtorInfo_31_63, transform_hlds__accumulator__TypeCtorInfo_32_64, transform_hlds__accumulator__TypeCtorInfo_33_65, transform_hlds__accumulator__TypeInfo_34_66, transform_hlds__accumulator__V_49_49, transform_hlds__accumulator__Rec_26, ((MR_Box) (transform_hlds__accumulator__V_50_50)), &transform_hlds__accumulator__conv5_V_44_44, ((MR_Box) (transform_hlds__accumulator__RecInstMap_27)), &transform_hlds__accumulator__conv4_V_45_45, ((MR_Box) (transform_hlds__accumulator__C0_43)), &transform_hlds__accumulator__conv3_C1_46);
        }
#line 567 "accumulator.m"
        transform_hlds__accumulator__V_44_44 = ((MR_Integer) transform_hlds__accumulator__conv5_V_44_44);
#line 567 "accumulator.m"
        transform_hlds__accumulator__V_45_45 = ((MR_Word) transform_hlds__accumulator__conv4_V_45_45);
#line 567 "accumulator.m"
        transform_hlds__accumulator__C1_46 = ((MR_Word) transform_hlds__accumulator__conv3_C1_46);
#line 569 "accumulator.m"
        transform_hlds__accumulator__V_54_54 = (MR_Integer) 0;
#line 570 "accumulator.m"
        transform_hlds__accumulator__V_53_53 = (MR_Integer) 1;
#line 569 "accumulator.m"
        transform_hlds__accumulator__V_52_52 = (MR_Word) &transform_hlds__accumulator_scalar_common_3[2];
#line 569 "accumulator.m"
        {
#line 569 "accumulator.m"
          mercury__list__foldl3_8_p_0(transform_hlds__accumulator__TypeCtorInfo_31_63, transform_hlds__accumulator__TypeCtorInfo_32_64, transform_hlds__accumulator__TypeCtorInfo_33_65, transform_hlds__accumulator__TypeInfo_34_66, transform_hlds__accumulator__V_52_52, transform_hlds__accumulator__Base_24, ((MR_Box) (transform_hlds__accumulator__V_53_53)), &transform_hlds__accumulator__conv11_V_47_47, ((MR_Box) (transform_hlds__accumulator__BaseInstMap_25)), &transform_hlds__accumulator__conv10_V_48_48, ((MR_Box) (transform_hlds__accumulator__C1_46)), &transform_hlds__accumulator__conv9_C_28);
        }
#line 569 "accumulator.m"
        transform_hlds__accumulator__V_47_47 = ((MR_Integer) transform_hlds__accumulator__conv11_V_47_47);
#line 569 "accumulator.m"
        transform_hlds__accumulator__V_48_48 = ((MR_Word) transform_hlds__accumulator__conv10_V_48_48);
#line 569 "accumulator.m"
        transform_hlds__accumulator__C_28 = ((MR_Word) transform_hlds__accumulator__conv9_C_28);
#line 371 "accumulator.m"
        {
#line 371 "accumulator.m"
          transform_hlds__accumulator__identify_recursive_calls_4_p_0(transform_hlds__accumulator__PredId_12, transform_hlds__accumulator__ProcId_13, transform_hlds__accumulator__C_28, &transform_hlds__accumulator__RecCallIds_29);
        }
#line 19226 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 372 "accumulator.m"
        {
#line 372 "accumulator.m"
          transform_hlds__accumulator__M_30 = mercury__list__length_1_f_0(transform_hlds__accumulator__TypeCtorInfo_37_37, transform_hlds__accumulator__Rec_26);
        }
#line 374 "accumulator.m"
        {
#line 374 "accumulator.m"
          return transform_hlds__accumulator__succeeded = transform_hlds__accumulator__should_attempt_accu_transform_2_16_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_31, transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_32, transform_hlds__accumulator__PredId_12, transform_hlds__accumulator__PredInfo_14, transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_33, transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_34, transform_hlds__accumulator__HeadVars_20, transform_hlds__accumulator__InitialInstMap_21, transform_hlds__accumulator__TopLevel_23, transform_hlds__accumulator__FullyStrict_16, transform_hlds__accumulator__DoLCO_17, transform_hlds__accumulator__RecCallIds_29, transform_hlds__accumulator__C_28, transform_hlds__accumulator__M_30, transform_hlds__accumulator__Rec_26, transform_hlds__accumulator__Warnings_18);
        }
#line 361 "accumulator.m"
      }
#line 361 "accumulator.m"
    return transform_hlds__accumulator__succeeded;
#line 361 "accumulator.m"
  }
#line 356 "accumulator.m"
}

#line 324 "accumulator.m"
static void MR_CALL 
transform_hlds__accumulator__generate_warnings_4_p_0(
#line 324 "accumulator.m"
  MR_Word transform_hlds__accumulator__ModuleInfo_1,
#line 324 "accumulator.m"
  MR_Word transform_hlds__accumulator__VarSet_2,
#line 324 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__3_3,
#line 324 "accumulator.m"
  MR_Word * transform_hlds__accumulator__HeadVar__4_4)
#line 324 "accumulator.m"
{
#line 327 "accumulator.m"
  {
#line 327 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;

#line 327 "accumulator.m"
    if ((transform_hlds__accumulator__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "accumulator.m"
      *transform_hlds__accumulator__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "accumulator.m"
    else
#line 328 "accumulator.m"
      {
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_42_50;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__TypeCtorInfo_43_51;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__Warning_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 0)));
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__Warnings_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__HeadVar__3_3, (MR_Integer) 1)));
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__Msg_11;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__Msgs_12;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Warning_9, (MR_Integer) 0)));
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Warning_9, (MR_Integer) 1)));
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__VarA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Warning_9, (MR_Integer) 2)));
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__VarB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Warning_9, (MR_Integer) 3)));
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__PredPieces_21;
#line 328 "accumulator.m"
        MR_String transform_hlds__accumulator__VarAName_22;
#line 328 "accumulator.m"
        MR_String transform_hlds__accumulator__VarBName_23;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__Pieces_24;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_30_30;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_31_31;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_34_34;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_35_35;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_36_36;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_39_39;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_40_40;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_47_47;
#line 328 "accumulator.m"
        MR_Word transform_hlds__accumulator__V_48_48;

#line 337 "accumulator.m"
        {
#line 337 "accumulator.m"
          transform_hlds__accumulator__PredPieces_21 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(transform_hlds__accumulator__ModuleInfo_1, (MR_Integer) 0, transform_hlds__accumulator__PredId_18);
        }
#line 19325 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeCtorInfo_42_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 340 "accumulator.m"
        {
#line 340 "accumulator.m"
          mercury__varset__lookup_name_3_p_0(transform_hlds__accumulator__TypeCtorInfo_42_50, transform_hlds__accumulator__VarSet_2, transform_hlds__accumulator__VarA_19, &transform_hlds__accumulator__VarAName_22);
        }
#line 341 "accumulator.m"
        {
#line 341 "accumulator.m"
          mercury__varset__lookup_name_3_p_0(transform_hlds__accumulator__TypeCtorInfo_42_50, transform_hlds__accumulator__VarSet_2, transform_hlds__accumulator__VarB_20, &transform_hlds__accumulator__VarBName_23);
        }
#line 19337 "transform_hlds.accumulator.c"
        transform_hlds__accumulator__TypeCtorInfo_43_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 345 "accumulator.m"
        {
#line 345 "accumulator.m"
          transform_hlds__accumulator__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_35_35, 1) = ((MR_Box) (transform_hlds__accumulator__VarAName_22));
#line 345 "accumulator.m"
        }
#line 345 "accumulator.m"
        {
#line 345 "accumulator.m"
          transform_hlds__accumulator__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(3), transform_hlds__accumulator__V_40_40, 1) = ((MR_Box) (transform_hlds__accumulator__VarBName_23));
#line 345 "accumulator.m"
        }
#line 345 "accumulator.m"
        {
#line 345 "accumulator.m"
          transform_hlds__accumulator__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_39_39, 0) = ((MR_Box) (transform_hlds__accumulator__V_40_40));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[56])));
#line 345 "accumulator.m"
        }
#line 345 "accumulator.m"
        {
#line 345 "accumulator.m"
          transform_hlds__accumulator__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[65])));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_36_36, 1) = ((MR_Box) (transform_hlds__accumulator__V_39_39));
#line 345 "accumulator.m"
        }
#line 345 "accumulator.m"
        {
#line 345 "accumulator.m"
          transform_hlds__accumulator__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_34_34, 0) = ((MR_Box) (transform_hlds__accumulator__V_35_35));
#line 345 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_34_34, 1) = ((MR_Box) (transform_hlds__accumulator__V_36_36));
#line 345 "accumulator.m"
        }
#line 344 "accumulator.m"
        {
#line 344 "accumulator.m"
          transform_hlds__accumulator__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[64])));
#line 344 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_31_31, 1) = ((MR_Box) (transform_hlds__accumulator__V_34_34));
#line 344 "accumulator.m"
        }
#line 343 "accumulator.m"
        {
#line 343 "accumulator.m"
          transform_hlds__accumulator__V_30_30 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_43_51, transform_hlds__accumulator__PredPieces_21, transform_hlds__accumulator__V_31_31);
        }
#line 343 "accumulator.m"
        {
#line 343 "accumulator.m"
          transform_hlds__accumulator__Pieces_24 = mercury__list__f_43_43_2_f_0(transform_hlds__accumulator__TypeCtorInfo_43_51, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[63]), transform_hlds__accumulator__V_30_30);
        }
#line 347 "accumulator.m"
        {
#line 347 "accumulator.m"
          transform_hlds__accumulator__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_48_48, 0) = ((MR_Box) (transform_hlds__accumulator__Pieces_24));
#line 347 "accumulator.m"
        }
#line 347 "accumulator.m"
        {
#line 347 "accumulator.m"
          transform_hlds__accumulator__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_47_47, 0) = ((MR_Box) (transform_hlds__accumulator__V_48_48));
#line 347 "accumulator.m"
          MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "accumulator.m"
        }
#line 347 "accumulator.m"
        {
#line 347 "accumulator.m"
          transform_hlds__accumulator__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 347 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Msg_11, 0) = ((MR_Box) (transform_hlds__accumulator__Context_17));
#line 347 "accumulator.m"
          MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Msg_11, 1) = ((MR_Box) (transform_hlds__accumulator__V_47_47));
#line 347 "accumulator.m"
        }
#line 330 "accumulator.m"
        {
#line 330 "accumulator.m"
          transform_hlds__accumulator__generate_warnings_4_p_0(transform_hlds__accumulator__ModuleInfo_1, transform_hlds__accumulator__VarSet_2, transform_hlds__accumulator__Warnings_10, &transform_hlds__accumulator__Msgs_12);
        }
#line 328 "accumulator.m"
        {
#line 328 "accumulator.m"
          MR_Word base;
#line 328 "accumulator.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "accumulator.m"
          *transform_hlds__accumulator__HeadVar__4_4 = base;
#line 328 "accumulator.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__accumulator__Msg_11));
#line 328 "accumulator.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__accumulator__Msgs_12));
#line 328 "accumulator.m"
        }
#line 328 "accumulator.m"
      }
#line 327 "accumulator.m"
  }
#line 324 "accumulator.m"
}

#line 157 "accumulator.m"
void MR_CALL 
transform_hlds__accumulator__accu_transform_proc_8_p_0(
#line 157 "accumulator.m"
  MR_Word transform_hlds__accumulator__HeadVar__1_1,
#line 157 "accumulator.m"
  MR_Word transform_hlds__accumulator__PredInfo_11,
#line 157 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_42,
#line 157 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_43,
#line 157 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_44,
#line 157 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_45,
#line 157 "accumulator.m"
  MR_Word transform_hlds__accumulator__STATE_VARIABLE_Cookie_0_46,
#line 157 "accumulator.m"
  MR_Word * transform_hlds__accumulator__STATE_VARIABLE_Cookie_47)
#line 157 "accumulator.m"
{
#line 241 "accumulator.m"
  {
#line 241 "accumulator.m"
    MR_bool transform_hlds__accumulator__succeeded;
#line 241 "accumulator.m"
    MR_Word transform_hlds__accumulator__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 0)));
#line 241 "accumulator.m"
    MR_Integer transform_hlds__accumulator__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__accumulator__HeadVar__1_1, (MR_Integer) 1)));
#line 241 "accumulator.m"
    MR_Word transform_hlds__accumulator__Globals_15;
#line 241 "accumulator.m"
    MR_Word transform_hlds__accumulator__DoLCO_16;
#line 241 "accumulator.m"
    MR_Word transform_hlds__accumulator__FullyStrict_17;
#line 317 "accumulator.m"
    MR_Word transform_hlds__accumulator__Warnings_18;
#line 317 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_50_50;
#line 317 "accumulator.m"
    MR_Word transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_51_51;

#line 242 "accumulator.m"
    {
#line 242 "accumulator.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__accumulator__Globals_15);
    }
#line 243 "accumulator.m"
    {
#line 243 "accumulator.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__accumulator__Globals_15, (MR_Integer) 365, &transform_hlds__accumulator__DoLCO_16);
    }
#line 245 "accumulator.m"
    {
#line 245 "accumulator.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__accumulator__Globals_15, (MR_Integer) 166, &transform_hlds__accumulator__FullyStrict_17);
    }
#line 247 "accumulator.m"
    {
#line 247 "accumulator.m"
      transform_hlds__accumulator__succeeded = transform_hlds__accumulator__should_attempt_accu_transform_10_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_44, &transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_50_50, transform_hlds__accumulator__PredId_9, transform_hlds__accumulator__ProcId_10, transform_hlds__accumulator__PredInfo_11, transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_51_51, transform_hlds__accumulator__FullyStrict_17, transform_hlds__accumulator__DoLCO_16, &transform_hlds__accumulator__Warnings_18);
    }
#line 317 "accumulator.m"
    if (transform_hlds__accumulator__succeeded)
#line 250 "accumulator.m"
      {
#line 250 "accumulator.m"
        MR_Word transform_hlds__accumulator__VeryVerbose_19;

#line 250 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_45 = transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_50_50;
#line 250 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_43 = transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_51_51;
#line 250 "accumulator.m"
        {
#line 250 "accumulator.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__accumulator__Globals_15, (MR_Integer) 46, &transform_hlds__accumulator__VeryVerbose_19);
        }
#line 258 "accumulator.m"
#line 258 "accumulator.m"
        switch (transform_hlds__accumulator__VeryVerbose_19) {
#line 258 "accumulator.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 258 "accumulator.m"
          case (MR_Integer) 0:
#line 259 "accumulator.m"
            {
#line 259 "accumulator.m"
            }
#line 258 "accumulator.m"
            break;
#line 258 "accumulator.m"
          case (MR_Integer) 1:
#line 252 "accumulator.m"
            {
#line 254 "accumulator.m"
              {
#line 254 "accumulator.m"
                mercury__io__write_string_3_p_0((MR_String) "% Accumulators introduced into ");
              }
#line 255 "accumulator.m"
              {
#line 255 "accumulator.m"
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_50_50, transform_hlds__accumulator__PredId_9);
              }
#line 256 "accumulator.m"
              {
#line 256 "accumulator.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 252 "accumulator.m"
            }
#line 258 "accumulator.m"
            break;
#line 258 "accumulator.m"
        }
#line 264 "accumulator.m"
        if ((transform_hlds__accumulator__Warnings_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "accumulator.m"
          *transform_hlds__accumulator__STATE_VARIABLE_Cookie_47 = transform_hlds__accumulator__STATE_VARIABLE_Cookie_0_46;
#line 264 "accumulator.m"
        else
#line 265 "accumulator.m"
          {
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__TypeInfo_180_180;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__Context_23;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__PredPieces_24;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__InPieces_25;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__InMsg_26;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__VarSet_27;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__WarnMsgs_28;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__EnsurePieces_30;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__EnsureSuppressMsg_36;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__Msgs_38;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__Spec_39;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__Specs0_40;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__Specs_41;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_60_60;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_69_69;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_70_70;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_73_73;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_74_74;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_154_154;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_155_155;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_158_158;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_159_159;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_171_171;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_172_172;
#line 265 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_181_181;
#line 277 "accumulator.m"
            MR_Word transform_hlds__accumulator__V_182_182;
#line 313 "accumulator.m"
            MR_Box transform_hlds__accumulator__conv0_Specs0_40;

#line 266 "accumulator.m"
            {
#line 266 "accumulator.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__accumulator__PredInfo_11, &transform_hlds__accumulator__Context_23);
            }
#line 267 "accumulator.m"
            {
#line 267 "accumulator.m"
              transform_hlds__accumulator__PredPieces_24 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_50_50, (MR_Integer) 0, transform_hlds__accumulator__PredId_9);
            }
#line 269 "accumulator.m"
            {
#line 269 "accumulator.m"
              transform_hlds__accumulator__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__accumulator_scalar_common_1[58])));
#line 269 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_60_60, 1) = ((MR_Box) (transform_hlds__accumulator__PredPieces_24));
#line 269 "accumulator.m"
            }
#line 269 "accumulator.m"
            {
#line 269 "accumulator.m"
              transform_hlds__accumulator__InPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__accumulator__V_60_60, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[7]));
            }
#line 272 "accumulator.m"
            {
#line 272 "accumulator.m"
              transform_hlds__accumulator__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 272 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_74_74, 0) = ((MR_Box) (transform_hlds__accumulator__InPieces_25));
#line 272 "accumulator.m"
            }
#line 272 "accumulator.m"
            {
#line 272 "accumulator.m"
              transform_hlds__accumulator__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_73_73, 0) = ((MR_Box) (transform_hlds__accumulator__V_74_74));
#line 272 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "accumulator.m"
            }
#line 271 "accumulator.m"
            {
#line 271 "accumulator.m"
              transform_hlds__accumulator__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_70_70, 0) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 0 << (MR_Integer) 10)))));
#line 271 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_70_70, 1) = ((MR_Box) (transform_hlds__accumulator__V_73_73));
#line 271 "accumulator.m"
            }
#line 272 "accumulator.m"
            {
#line 272 "accumulator.m"
              transform_hlds__accumulator__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_69_69, 0) = ((MR_Box) (transform_hlds__accumulator__V_70_70));
#line 272 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "accumulator.m"
            }
#line 270 "accumulator.m"
            {
#line 270 "accumulator.m"
              transform_hlds__accumulator__InMsg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 270 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__InMsg_26, 0) = ((MR_Box) (transform_hlds__accumulator__Context_23));
#line 270 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__InMsg_26, 1) = ((MR_Box) (transform_hlds__accumulator__V_69_69));
#line 270 "accumulator.m"
            }
#line 274 "accumulator.m"
            {
#line 274 "accumulator.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_51_51, &transform_hlds__accumulator__VarSet_27);
            }
#line 275 "accumulator.m"
            {
#line 275 "accumulator.m"
              transform_hlds__accumulator__generate_warnings_4_p_0(transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_50_50, transform_hlds__accumulator__VarSet_27, transform_hlds__accumulator__Warnings_18, &transform_hlds__accumulator__WarnMsgs_28);
            }
#line 277 "accumulator.m"
            transform_hlds__accumulator__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Warnings_18, (MR_Integer) 0)));
#line 277 "accumulator.m"
            transform_hlds__accumulator__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Warnings_18, (MR_Integer) 1)));
#line 281 "accumulator.m"
            if ((transform_hlds__accumulator__V_181_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "accumulator.m"
              transform_hlds__accumulator__EnsurePieces_30 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[13]);
#line 281 "accumulator.m"
            else
#line 283 "accumulator.m"
              transform_hlds__accumulator__EnsurePieces_30 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[17]);
#line 306 "accumulator.m"
            {
#line 306 "accumulator.m"
              transform_hlds__accumulator__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 306 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__V_159_159, 0) = ((MR_Box) (transform_hlds__accumulator__EnsurePieces_30));
#line 306 "accumulator.m"
            }
#line 306 "accumulator.m"
            {
#line 306 "accumulator.m"
              transform_hlds__accumulator__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_158_158, 0) = ((MR_Box) (transform_hlds__accumulator__V_159_159));
#line 306 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[59])));
#line 306 "accumulator.m"
            }
#line 305 "accumulator.m"
            {
#line 305 "accumulator.m"
              transform_hlds__accumulator__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_155_155, 0) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 0 << (MR_Integer) 10)))));
#line 305 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_155_155, 1) = ((MR_Box) (transform_hlds__accumulator__V_158_158));
#line 305 "accumulator.m"
            }
#line 306 "accumulator.m"
            {
#line 306 "accumulator.m"
              transform_hlds__accumulator__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_154_154, 0) = ((MR_Box) (transform_hlds__accumulator__V_155_155));
#line 306 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_1[61])));
#line 306 "accumulator.m"
            }
#line 304 "accumulator.m"
            {
#line 304 "accumulator.m"
              transform_hlds__accumulator__EnsureSuppressMsg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__EnsureSuppressMsg_36, 0) = ((MR_Box) (transform_hlds__accumulator__Context_23));
#line 304 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__EnsureSuppressMsg_36, 1) = ((MR_Box) (transform_hlds__accumulator__V_154_154));
#line 304 "accumulator.m"
            }
#line 310 "accumulator.m"
            {
#line 310 "accumulator.m"
              transform_hlds__accumulator__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_171_171, 0) = ((MR_Box) (transform_hlds__accumulator__InMsg_26));
#line 310 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_171_171, 1) = ((MR_Box) (transform_hlds__accumulator__WarnMsgs_28));
#line 310 "accumulator.m"
            }
#line 310 "accumulator.m"
            {
#line 310 "accumulator.m"
              transform_hlds__accumulator__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_172_172, 0) = ((MR_Box) (transform_hlds__accumulator__EnsureSuppressMsg_36));
#line 310 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "accumulator.m"
            }
#line 310 "accumulator.m"
            {
#line 310 "accumulator.m"
              transform_hlds__accumulator__Msgs_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__accumulator__V_171_171, transform_hlds__accumulator__V_172_172);
            }
#line 311 "accumulator.m"
            {
#line 311 "accumulator.m"
              transform_hlds__accumulator__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 311 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__accumulator_scalar_common_3[0])));
#line 311 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 311 "accumulator.m"
              MR_hl_field(MR_mktag(0), transform_hlds__accumulator__Spec_39, 2) = ((MR_Box) (transform_hlds__accumulator__Msgs_38));
#line 311 "accumulator.m"
            }
#line 19822 "transform_hlds.accumulator.c"
            transform_hlds__accumulator__TypeInfo_180_180 = (MR_Word) &transform_hlds__accumulator_scalar_common_1[0];
#line 313 "accumulator.m"
            {
#line 313 "accumulator.m"
              mercury__univ__det_univ_to_type_2_p_0(transform_hlds__accumulator__TypeInfo_180_180, transform_hlds__accumulator__STATE_VARIABLE_Cookie_0_46, &transform_hlds__accumulator__conv0_Specs0_40);
            }
#line 313 "accumulator.m"
            transform_hlds__accumulator__Specs0_40 = ((MR_Word) transform_hlds__accumulator__conv0_Specs0_40);
#line 314 "accumulator.m"
            {
#line 314 "accumulator.m"
              transform_hlds__accumulator__Specs_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Specs_41, 0) = ((MR_Box) (transform_hlds__accumulator__Spec_39));
#line 314 "accumulator.m"
              MR_hl_field(MR_mktag(1), transform_hlds__accumulator__Specs_41, 1) = ((MR_Box) (transform_hlds__accumulator__Specs0_40));
#line 314 "accumulator.m"
            }
#line 315 "accumulator.m"
            {
#line 315 "accumulator.m"
              mercury__univ__type_to_univ_2_p_1(transform_hlds__accumulator__TypeInfo_180_180, ((MR_Box) (transform_hlds__accumulator__Specs_41)), transform_hlds__accumulator__STATE_VARIABLE_Cookie_47);
#line 315 "accumulator.m"
              return;
            }
#line 265 "accumulator.m"
          }
#line 250 "accumulator.m"
      }
#line 317 "accumulator.m"
    else
#line 318 "accumulator.m"
      {
#line 318 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_Cookie_47 = transform_hlds__accumulator__STATE_VARIABLE_Cookie_0_46;
#line 318 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_45 = transform_hlds__accumulator__STATE_VARIABLE_ModuleInfo_0_44;
#line 318 "accumulator.m"
        *transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_43 = transform_hlds__accumulator__STATE_VARIABLE_ProcInfo_0_42;
#line 318 "accumulator.m"
      }
#line 241 "accumulator.m"
  }
#line 157 "accumulator.m"
}

void mercury__transform_hlds__accumulator__init(void)
{
}

void mercury__transform_hlds__accumulator__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_assoc_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_base_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_case_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_id_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_goal_store_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_sets_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_subst_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_substs_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_accu_warning_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_store_info_0);
	MR_register_type_ctor_info(&transform_hlds__accumulator__transform_hlds__accumulator__type_ctor_info_top_level_0);
}

void mercury__transform_hlds__accumulator__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.accumulator. */
