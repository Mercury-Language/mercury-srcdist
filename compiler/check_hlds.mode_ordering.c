/*
** Automatically generated from `mode_ordering.m'
** by the Mercury compiler,
** version rotd-2023-08-18
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module check_hlds.mode_ordering.
// :- implementation.

/*
INIT mercury__check_hlds__mode_ordering__init
ENDINIT
*/

#include "check_hlds.mode_ordering.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__MCInfo_16;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Constraint_21;
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__cont;
  void * check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Var_32;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Var_33;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Y_38;
};

struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_153;
  MR_Word * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__LambdaHeadVar__1_114;
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont;
  void * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49;
};

struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s {
  MR_Box * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1;
  MR_Cont check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont;
  void * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr;
  MR_Word check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_114;
};

struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s {
  MR_Box * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1;
  MR_Cont check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont;
  void * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr;
  MR_Word check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3;
};

struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s {
  MR_Box * check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1;
  MR_Cont check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont;
  void * check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_LambdaHeadVar__1_31;
};

struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16;
  MR_bool check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21;
  jmp_buf check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22;
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23;
};


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0[6];

static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0[1];

static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0[2];

static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0[1];

static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0[1];

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0(
  MR_Word Args_13,
  MR_Word CallerInstGraph_14,
  MR_Word CalleeInstGraph_15,
  MR_Word MCInfo_16,
  MR_Word HeadVars_19,
  MR_Word Constraint_21,
  MR_Word * LambdaHeadVar__1_31,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0(
  MR_Word ProdMap_17,
  MR_Word MakeVisMap_22,
  MR_Integer LambdaHeadVar__1_69,
  MR_Word LambdaHeadVar__2_70,
  MR_Word LambdaHeadVar__3_71);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__478__1_4_f_0(
  MR_Word MakeVisMap_22,
  MR_Word Key0_27,
  MR_Word LambdaHeadVar__1_89,
  MR_Word LambdaHeadVar__2_90);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__469__1_4_f_0(
  MR_Word ProdMap_17,
  MR_Word Key0_27,
  MR_Word LambdaHeadVar__1_78,
  MR_Word LambdaHeadVar__2_79);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__454__1_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__454__1_3_f_0(
  MR_Integer LambdaHeadVar__1_56,
  MR_Word LambdaHeadVar__2_57,
  MR_Word LambdaHeadVar__3_58);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__456__1_3_f_0(
  MR_Integer LambdaHeadVar__1_56,
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(
  MR_Integer LambdaHeadVar__1_43,
  MR_Word LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__447__1_3_f_0(
  MR_Integer LambdaHeadVar__1_43,
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(
  MR_Word VarA_37,
  MR_Word InstGraph_42,
  MR_Word VarB_43,
  MR_Word ProdVars_153,
  MR_Word * LambdaHeadVar__1_114,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * STATE_VARIABLE_GoalInfo_13);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalInfo_0_7,
  MR_Word * STATE_VARIABLE_GoalInfo_8);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredConstraintMap_10,
  MR_Word PredId_11,
  MR_Word MCI_12,
  MR_Word Constraint0_13,
  MR_Word ModeDeclConstraint_14,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18);

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredConstraintMap_10,
  MR_Word PredId_11,
  MR_Word MCI_12,
  MR_Word Constraint0_13,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredConstraintMap_10,
  MR_Word PredId_11,
  MR_Word MCI_12,
  MR_Word Constraint0_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_PredInfo_0_22,
  MR_Word * STATE_VARIABLE_PredInfo_23);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
  MR_Word GoalExpr0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_80,
  MR_Word * STATE_VARIABLE_GoalInfo_81,
  MR_Word STATE_VARIABLE_MOI_0_82,
  MR_Word * STATE_VARIABLE_MOI_83);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_MOI_0_12,
  MR_Word * STATE_VARIABLE_MOI_13);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_7_p_0(
  MR_Word PredId_8,
  MR_Word Args_9,
  MR_Word ProdVars_10,
  MR_Integer * ProcId_11,
  MR_Word * ConsumingVars_12,
  MR_Word STATE_VARIABLE_MOI_0_26,
  MR_Word * STATE_VARIABLE_MOI_27);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProdVars_12,
  MR_Word Args_13,
  MR_Word CallerInstGraph_14,
  MR_Word CalleeInstGraph_15,
  MR_Word MCInfo_16,
  MR_Integer * ProcId_17,
  MR_Word * ConsumingVars_18);

static void MR_CALL 
check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(
  MR_Word * ProdVars_6,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14,
  MR_Word STATE_VARIABLE_MOI_0_15,
  MR_Word * STATE_VARIABLE_MOI_16);

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word Goals0_5,
  MR_Word * Goals_6);

static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
  MR_Word GI_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * STATE_VARIABLE_GoalInfo_7);

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
  MR_Word Goals_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * STATE_VARIABLE_GoalInfo_7);

static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
  MR_Word GI_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalInfo_0_2,
  MR_Word * STATE_VARIABLE_GoalInfo_3);

static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
  MR_Word STATE_VARIABLE_MOI_0_7,
  MR_Word * STATE_VARIABLE_MOI_8);

static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
  MR_Word GoalId_4,
  MR_Word STATE_VARIABLE_MOI_0_7,
  MR_Word * STATE_VARIABLE_MOI_8);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_pred_5_p_0(
  MR_Word PredConstraintMap_6,
  MR_Word _SCC_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
  MR_Word PredConstraintMap_6,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
  MR_Word PredConstraintMap_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_2[13][3];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_3[5][7];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_4[3][8];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_5[2][11];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_6[2][6];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_7[1][9];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_8[1][10];




static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_2[13][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[3])),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[6]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[0])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_disj_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[0])),
    ((MR_Box) (check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[2])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[2])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_3[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_4[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_5[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_8[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
};

static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0[6] = {
  (MR_String) "moi_inst_graph",
  (MR_String) "moi_prodvars_map",
  (MR_String) "moi_lambda_nesting",
  (MR_String) "moi_module_info",
  (MR_String) "moi_pred_constraint_map",
  (MR_String) "moi_goal_path_map"
};

static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0 = {
  (MR_String) "mode_ordering_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[1] = { &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0 };

static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0[1] = { &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0 };

static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "mode_ordering_info",
  { check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0 },
  { check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)
};

static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0[2] = {
  (MR_String) "pci_mode_constraint",
  (MR_String) "pci_mci"
};

static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0 = {
  (MR_String) "pci",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[1] = { &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0 };

static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0[1] = { &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0 };

static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "pred_constraint_info",
  { check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0 },
  { check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0,

};

const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "pred_constraint_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Var_33 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Y_38));
  }
  (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Var_32 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__MCInfo_16, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Var_33);
  (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Constraint_21, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Var_32);
  if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__succeeded)
    ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__cont)((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0(
  MR_Word Args_13,
  MR_Word CallerInstGraph_14,
  MR_Word CalleeInstGraph_15,
  MR_Word MCInfo_16,
  MR_Word HeadVars_19,
  MR_Word Constraint_21,
  MR_Word * LambdaHeadVar__1_31,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0_s env;

  (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__MCInfo_16 = MCInfo_16;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Constraint_21 = Constraint_21;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__cont = cont;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(CallerInstGraph_14, CalleeInstGraph_15, Args_13, HeadVars_19, LambdaHeadVar__1_31, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_env_0__Y_38, check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0_1, &env);
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_91;

  conv2_LambdaHeadVar__3_91 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__478__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_91));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_80;

  conv0_LambdaHeadVar__3_80 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__469__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_80));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0(
  MR_Word ProdMap_17,
  MR_Word MakeVisMap_22,
  MR_Integer LambdaHeadVar__1_69,
  MR_Word LambdaHeadVar__2_70,
  MR_Word LambdaHeadVar__3_71)
{
  MR_Word LambdaHeadVar__4_72;
  MR_Word Key0_27;
  MR_Word STATE_VARIABLE_R_75_75;
  MR_Word STATE_VARIABLE_R_76_76;
  MR_Word Var_77;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word GI_118 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_70, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_R_76_76;
  MR_Box conv3_LambdaHeadVar__4_72;

  mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LambdaHeadVar__1_69)), &Key0_27, LambdaHeadVar__3_71, &STATE_VARIABLE_R_75_75);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0_1));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (ProdMap_17));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (Key0_27));
  }
  Var_86 = hlds__hlds_goal__consuming_vars_1_f_0(GI_118);
  Var_85 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_86);
  conv1_STATE_VARIABLE_R_76_76 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[4]), Var_77, Var_85, ((MR_Box) (STATE_VARIABLE_R_75_75)));
  STATE_VARIABLE_R_76_76 = ((MR_Word) (conv1_STATE_VARIABLE_R_76_76));
  {
    Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_88, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
    MR_hl_field(0, Var_88, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0_2));
    MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_88, 3) = ((MR_Box) (MakeVisMap_22));
    MR_hl_field(0, Var_88, 4) = ((MR_Box) (Key0_27));
  }
  Var_97 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_118);
  Var_96 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_97);
  conv3_LambdaHeadVar__4_72 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[4]), Var_88, Var_96, ((MR_Box) (STATE_VARIABLE_R_76_76)));
  LambdaHeadVar__4_72 = ((MR_Word) (conv3_LambdaHeadVar__4_72));
  return LambdaHeadVar__4_72;
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__478__1_4_f_0(
  MR_Word MakeVisMap_22,
  MR_Word Key0_27,
  MR_Word LambdaHeadVar__1_89,
  MR_Word LambdaHeadVar__2_90)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__3_91;
  MR_Integer Index2_32;
  MR_Box conv0_Index2_32;

  succeeded = mercury__map__search_2_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MakeVisMap_22, ((MR_Box) (LambdaHeadVar__1_89)), &conv0_Index2_32);
  if (succeeded)
  {
    Index2_32 = ((MR_Integer) (conv0_Index2_32));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Key2_33;
    MR_Word STATE_VARIABLE_R2_94_94;

    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Index2_32)), &Key2_33, LambdaHeadVar__2_90, &STATE_VARIABLE_R2_94_94);
    mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Key2_33, Key0_27, STATE_VARIABLE_R2_94_94, &LambdaHeadVar__3_91);
  }
  else
    LambdaHeadVar__3_91 = LambdaHeadVar__2_90;
  return LambdaHeadVar__3_91;
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__469__1_4_f_0(
  MR_Word ProdMap_17,
  MR_Word Key0_27,
  MR_Word LambdaHeadVar__1_78,
  MR_Word LambdaHeadVar__2_79)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__3_80;
  MR_Integer Index1_29;
  MR_Box conv0_Index1_29;

  succeeded = mercury__map__search_2_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProdMap_17, ((MR_Box) (LambdaHeadVar__1_78)), &conv0_Index1_29);
  if (succeeded)
  {
    Index1_29 = ((MR_Integer) (conv0_Index1_29));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Key1_30;
    MR_Word STATE_VARIABLE_R1_83_83;

    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Index1_29)), &Key1_30, LambdaHeadVar__2_79, &STATE_VARIABLE_R1_83_83);
    mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Key1_30, Key0_27, STATE_VARIABLE_R1_83_83, &LambdaHeadVar__3_80);
  }
  else
    LambdaHeadVar__3_80 = LambdaHeadVar__2_79;
  return LambdaHeadVar__3_80;
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__454__1_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_63;

  conv0_LambdaHeadVar__3_63 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__456__1_3_f_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_63));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__454__1_3_f_0(
  MR_Integer LambdaHeadVar__1_56,
  MR_Word LambdaHeadVar__2_57,
  MR_Word LambdaHeadVar__3_58)
{
  MR_Word LambdaHeadVar__4_59;
  MR_Word Var_60;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Box conv1_LambdaHeadVar__4_59;

  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__454__1_3_f_0_1));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (LambdaHeadVar__1_56));
  }
  Var_66 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_57, (MR_Integer) 1))));
  Var_65 = hlds__hlds_goal__make_visible_vars_1_f_0(Var_66);
  Var_64 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_65);
  conv1_LambdaHeadVar__4_59 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[1]), Var_60, Var_64, ((MR_Box) (LambdaHeadVar__3_58)));
  LambdaHeadVar__4_59 = ((MR_Word) (conv1_LambdaHeadVar__4_59));
  return LambdaHeadVar__4_59;
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__456__1_3_f_0(
  MR_Integer LambdaHeadVar__1_56,
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62)
{
  MR_Word LambdaHeadVar__3_63;

  LambdaHeadVar__3_63 = mercury__map__set_3_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LambdaHeadVar__2_62, ((MR_Box) (LambdaHeadVar__1_61)), ((MR_Box) (LambdaHeadVar__1_56)));
  return LambdaHeadVar__3_63;
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_50;

  conv0_LambdaHeadVar__3_50 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__447__1_3_f_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_50));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(
  MR_Integer LambdaHeadVar__1_43,
  MR_Word LambdaHeadVar__2_44,
  MR_Word LambdaHeadVar__3_45)
{
  MR_Word LambdaHeadVar__4_46;
  MR_Word Var_47;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Box conv1_LambdaHeadVar__4_46;

  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1));
    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_47, 3) = ((MR_Box) (LambdaHeadVar__1_43));
  }
  Var_53 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_44, (MR_Integer) 1))));
  Var_52 = hlds__hlds_goal__producing_vars_1_f_0(Var_53);
  Var_51 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_52);
  conv1_LambdaHeadVar__4_46 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[1]), Var_47, Var_51, ((MR_Box) (LambdaHeadVar__3_45)));
  LambdaHeadVar__4_46 = ((MR_Word) (conv1_LambdaHeadVar__4_46));
  return LambdaHeadVar__4_46;
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__447__1_3_f_0(
  MR_Integer LambdaHeadVar__1_43,
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49)
{
  MR_Word LambdaHeadVar__3_50;

  LambdaHeadVar__3_50 = mercury__map__det_insert_3_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LambdaHeadVar__2_49, ((MR_Box) (LambdaHeadVar__1_48)), ((MR_Box) (LambdaHeadVar__1_43)));
  return LambdaHeadVar__3_50;
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__3_38;
  MR_Integer Index_10;
  MR_Word GI_12 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_36, (MR_Integer) 1))));
  MR_Word GoalId_13;
  MR_Word GoalPath_14;
  MR_Box conv0_GoalPath_14;
  MR_Integer Index0_16;
  MR_Word LastStep_15;

  GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GI_12);
  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), ForwardGoalPathMap_4, ((MR_Box) (GoalId_13)), &conv0_GoalPath_14);
  GoalPath_14 = ((MR_Word) (conv0_GoalPath_14));
  succeeded = mdbcomp__goal_path__goal_path_get_last_2_p_0(GoalPath_14, &LastStep_15);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) LastStep_15)) == (MR_Integer) 1);
    if (succeeded)
      Index0_16 = ((MR_Integer) ((MR_hl_field(1, LastStep_15, (MR_Integer) 0))));
  }
  if (succeeded)
    Index_10 = Index0_16;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "goal_path error");
  LambdaHeadVar__3_38 = mercury__map__det_insert_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LambdaHeadVar__2_37, ((MR_Box) (Index_10)), ((MR_Box) (LambdaHeadVar__1_36)));
  return LambdaHeadVar__3_38;
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_153, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48);
    if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
    {
      *((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__LambdaHeadVar__1_114) = (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49;
      (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = MR_TRUE;
    }
    else
    {
      (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_153, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49);
      if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
      {
        *((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__LambdaHeadVar__1_114) = (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48;
        (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = MR_TRUE;
      }
    }
    if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont)((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(
  MR_Word VarA_37,
  MR_Word InstGraph_42,
  MR_Word VarB_43,
  MR_Word ProdVars_153,
  MR_Word * LambdaHeadVar__1_114,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s env;

  (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_153 = ProdVars_153;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__LambdaHeadVar__1_114 = LambdaHeadVar__1_114;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont = cont;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(InstGraph_42, VarA_37, VarB_43, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49, check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1, &env);
}

void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_2[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_module____Compare____module_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_2[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * STATE_VARIABLE_GoalInfo_13)
{
  MR_Word ProdVars0_6;
  MR_Word ConsumVars0_7;
  MR_Word MakeVisibleVars0_8;
  MR_Word NeedVisibleVars0_9;
  MR_Word GI_11;
  MR_Word STATE_VARIABLE_GoalInfo_14_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word STATE_VARIABLE_GoalInfo_17_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_GoalInfo_20_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_25;

  ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
  ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
  MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
  NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
  GI_11 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
  Var_16 = hlds__hlds_goal__producing_vars_1_f_0(GI_11);
  Var_15 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars0_6, Var_16);
  STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_12, Var_15);
  Var_19 = hlds__hlds_goal__consuming_vars_1_f_0(GI_11);
  Var_18 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumVars0_7, Var_19);
  STATE_VARIABLE_GoalInfo_17_17 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_14_14, Var_18);
  Var_22 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_11);
  Var_21 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars0_8, Var_22);
  STATE_VARIABLE_GoalInfo_20_20 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_17_17, Var_21);
  Var_25 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_11);
  Var_24 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars0_9, Var_25);
  *STATE_VARIABLE_GoalInfo_13 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_20_20, Var_24);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalInfo_0_7,
  MR_Word * STATE_VARIABLE_GoalInfo_8)
{
  MR_Word GI_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word ProdVars0_9;
  MR_Word ConsumVars0_10;
  MR_Word MakeVisibleVars0_11;
  MR_Word NeedVisibleVars0_12;
  MR_Word STATE_VARIABLE_GoalInfo_12_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word STATE_VARIABLE_GoalInfo_15_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word STATE_VARIABLE_GoalInfo_18_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  ProdVars0_9 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_7);
  ConsumVars0_10 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_7);
  MakeVisibleVars0_11 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_7);
  NeedVisibleVars0_12 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_7);
  Var_15 = hlds__hlds_goal__producing_vars_1_f_0(GI_5);
  Var_14 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars0_9, Var_15);
  STATE_VARIABLE_GoalInfo_12_13 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_7, Var_14);
  Var_18 = hlds__hlds_goal__consuming_vars_1_f_0(GI_5);
  Var_17 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumVars0_10, Var_18);
  STATE_VARIABLE_GoalInfo_15_16 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_12_13, Var_17);
  Var_21 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_5);
  Var_20 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars0_11, Var_21);
  STATE_VARIABLE_GoalInfo_18_19 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_15_16, Var_20);
  Var_23 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_5);
  Var_22 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars0_12, Var_23);
  *STATE_VARIABLE_GoalInfo_8 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_18_19, Var_22);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredConstraintMap_10,
  MR_Word PredId_11,
  MR_Word MCI_12,
  MR_Word Constraint0_13,
  MR_Word ModeDeclConstraint_14,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18)
{
  check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(ModuleInfo_9, PredConstraintMap_10, PredId_11, MCI_12, Constraint0_13, STATE_VARIABLE_PredInfo_0_17, STATE_VARIABLE_PredInfo_18);
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredConstraintMap_10,
  MR_Word PredId_11,
  MR_Word MCI_12,
  MR_Word Constraint0_13,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18)
{
  MR_bool succeeded;
  MR_Integer ProcId_16;

  succeeded = mercury__builtin__semidet_succeed_0_p_0();
  if (succeeded)
    {
      mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.pred_info_create_proc_info_for_mode_decl_constraint\'/4", (MR_String) "NYI");
      return;
    }
  else
    ProcId_16 = hlds__hlds_pred__initial_proc_id_0_f_0();
  check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(ModuleInfo_9, PredConstraintMap_10, PredId_11, MCI_12, Constraint0_13, ProcId_16, STATE_VARIABLE_PredInfo_0_17, STATE_VARIABLE_PredInfo_18);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredConstraintMap_10,
  MR_Word PredId_11,
  MR_Word MCI_12,
  MR_Word Constraint0_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_PredInfo_0_22,
  MR_Word * STATE_VARIABLE_PredInfo_23)
{
  MR_Word ProcInfo0_16;
  MR_Word ModeDeclConstraint_17;
  MR_Word Constraint_18;
  MR_Word InstGraphInfo_19;
  MR_Word InstGraph_20;
  MR_Word ProcInfo_21;
  MR_Word ProdVarsMap_28;
  MR_Word LambdaNesting0_29;
  MR_Word ForwardGoalPathMap_30;
  MR_Word MOI0_31;
  MR_Word Goal0_32;
  MR_Word Goal_33;
  MR_Word GoalExpr0_36;
  MR_Word GoalInfo0_37;
  MR_Word GoalExpr_38;
  MR_Word GoalInfo_39;
  MR_Word _MOI_34;

  hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_0_22, ProcId_14, &ProcInfo0_16);
  hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(ProcInfo0_16, &ModeDeclConstraint_17);
  Constraint_18 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Constraint0_13, ModeDeclConstraint_17);
  hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(STATE_VARIABLE_PredInfo_0_22, &InstGraphInfo_19);
  InstGraph_20 = ((MR_Word) ((MR_hl_field(0, InstGraphInfo_19, (MR_Integer) 3))));
  ProdVarsMap_28 = check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0(Constraint_18, MCI_12);
  LambdaNesting0_29 = mercury__stack__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0));
  check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_p_0(MCI_12, PredId_11, &ForwardGoalPathMap_30);
  {
    MOI0_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MOI0_31, 0) = ((MR_Box) (InstGraph_20));
    MR_hl_field(0, MOI0_31, 1) = ((MR_Box) (ProdVarsMap_28));
    MR_hl_field(0, MOI0_31, 2) = ((MR_Box) (LambdaNesting0_29));
    MR_hl_field(0, MOI0_31, 3) = ((MR_Box) (ModuleInfo_9));
    MR_hl_field(0, MOI0_31, 4) = ((MR_Box) (PredConstraintMap_10));
    MR_hl_field(0, MOI0_31, 5) = ((MR_Box) (ForwardGoalPathMap_30));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_16, &Goal0_32);
  GoalExpr0_36 = ((MR_Word) ((MR_hl_field(0, Goal0_32, (MR_Integer) 0))));
  GoalInfo0_37 = ((MR_Word) ((MR_hl_field(0, Goal0_32, (MR_Integer) 1))));
  check_hlds__mode_ordering__mode_order_goal_2_6_p_0(GoalExpr0_36, &GoalExpr_38, GoalInfo0_37, &GoalInfo_39, MOI0_31, &_MOI_34);
  {
    Goal_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_33, 0) = ((MR_Box) (GoalExpr_38));
    MR_hl_field(0, Goal_33, 1) = ((MR_Box) (GoalInfo_39));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_33, ProcInfo0_16, &ProcInfo_21);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_14, ProcInfo_21, STATE_VARIABLE_PredInfo_0_22, STATE_VARIABLE_PredInfo_23);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s * env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s *) (env_ptr_arg);

  *((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_114));
  ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont)((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s env;

  (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont = cont;
  (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &(env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_114, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6, &env);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s * env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s *) (env_ptr_arg);

  *((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3));
  ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont)((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s env;

  (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont = cont;
  (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__inst_graph__reachable_from_list_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &(env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4, &env);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Goal_6;
  MR_Word conv6_STATE_VARIABLE_MOI_13;

  check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_MOI_13);
  *wrapper_arg_2 = ((MR_Box) (conv7_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_MOI_13));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Goal_6;
  MR_Word conv3_STATE_VARIABLE_MOI_13;

  check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_MOI_13);
  *wrapper_arg_2 = ((MR_Box) (conv4_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_MOI_13));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_6;
  MR_Word conv0_STATE_VARIABLE_MOI_13;

  check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_MOI_13);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_MOI_13));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
  MR_Word GoalExpr0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_80,
  MR_Word * STATE_VARIABLE_GoalInfo_81,
  MR_Word STATE_VARIABLE_MOI_0_82,
  MR_Word * STATE_VARIABLE_MOI_83)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_127;
        MR_Word SubGoal0_159 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_160;

        check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_159, &SubGoal_160, STATE_VARIABLE_MOI_0_82, STATE_VARIABLE_MOI_83);
        Var_127 = ((MR_Word) ((MR_hl_field(0, SubGoal_160, (MR_Integer) 1))));
        check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(Var_127, STATE_VARIABLE_GoalInfo_0_80, STATE_VARIABLE_GoalInfo_81);
        *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_160));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word VarA_37 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 0))));
        MR_Word RHS0_38 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 1))));
        MR_Word UnifyMode_39 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 2))));
        MR_Word Unification0_40 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 3))));
        MR_Word Context_41 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 4))));
        MR_Word InstGraph_42;
        MR_Word RHS_44;
        MR_Word Unification_45;
        MR_Word STATE_VARIABLE_GoalInfo_108_108;
        MR_Word STATE_VARIABLE_MOI_109_109;
        MR_Word STATE_VARIABLE_GoalInfo_120_120;
        MR_Word STATE_VARIABLE_GoalInfo_121_121;
        MR_Word ProdVars_153;
        MR_Word MakeVisibleVars_154;
        MR_Word ConsumingVars_155;
        MR_Word NeedVisibleVars_156;

        check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&ProdVars_153, STATE_VARIABLE_GoalInfo_0_80, &STATE_VARIABLE_GoalInfo_108_108, STATE_VARIABLE_MOI_0_82, &STATE_VARIABLE_MOI_109_109);
        InstGraph_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_109_109, (MR_Integer) 0))));
        switch (MR_tag((MR_Word) RHS0_38)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarB_43 = ((MR_Word) ((MR_hl_field(0, RHS0_38, (MR_Integer) 0))));
              MR_Word ConsumingVarsList_46;
              MR_Word Var_113;

              RHS_44 = RHS0_38;
              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars_153, VarA_37);
              if (succeeded)
              {
                {
                  Unification_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Unification_45, 0) = ((MR_Box) (VarA_37));
                  MR_hl_field(2, Unification_45, 1) = ((MR_Box) (VarB_43));
                }
                MakeVisibleVars_154 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_37);
                NeedVisibleVars_156 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarB_43);
              }
              else
              {
                succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars_153, VarB_43);
                if (succeeded)
                {
                  {
                    Unification_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Unification_45, 0) = ((MR_Box) (VarB_43));
                    MR_hl_field(2, Unification_45, 1) = ((MR_Box) (VarA_37));
                  }
                  MakeVisibleVars_154 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarB_43);
                  NeedVisibleVars_156 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_37);
                }
                else
                {
                  MR_Word Var_110;
                  MR_Word Var_111;

                  {
                    Unification_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Unification_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Unification_45, 1) = ((MR_Box) (VarA_37));
                    MR_hl_field(3, Unification_45, 2) = ((MR_Box) (VarB_43));
                  }
                  MakeVisibleVars_154 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                  {
                    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_111, 0) = ((MR_Box) (VarB_43));
                    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_110, 0) = ((MR_Box) (VarA_37));
                    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
                  }
                  NeedVisibleVars_156 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_110);
                }
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_113, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[1]));
                MR_hl_field(0, Var_113, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7));
                MR_hl_field(0, Var_113, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_113, 3) = ((MR_Box) (VarA_37));
                MR_hl_field(0, Var_113, 4) = ((MR_Box) (InstGraph_42));
                MR_hl_field(0, Var_113, 5) = ((MR_Box) (VarB_43));
                MR_hl_field(0, Var_113, 6) = ((MR_Box) (ProdVars_153));
              }
              ConsumingVarsList_46 = mercury__solutions__solutions_1_f_1((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), Var_113);
              ConsumingVars_155 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVarsList_46);
              *STATE_VARIABLE_MOI_83 = STATE_VARIABLE_MOI_109_109;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgVars_52 = ((MR_Word) ((MR_hl_field(1, RHS0_38, (MR_Integer) 2))));

              RHS_44 = RHS0_38;
              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars_153, VarA_37);
              if (succeeded)
              {
                MR_Word Var_115;

                Unification_45 = Unification0_40;
                ConsumingVars_155 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                {
                  Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_115, 0) = ((MR_Box) (VarA_37));
                  MR_hl_field(1, Var_115, 1) = ((MR_Box) (ArgVars_52));
                }
                MakeVisibleVars_154 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_115);
                NeedVisibleVars_156 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              }
              else
              {
                Unification_45 = Unification0_40;
                ConsumingVars_155 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_37);
                MakeVisibleVars_154 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_52);
                NeedVisibleVars_156 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_37);
              }
              *STATE_VARIABLE_MOI_83 = STATE_VARIABLE_MOI_109_109;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word NonLocals_57;
              MR_Word H_59;
              MR_Word SubGoal0_60;
              MR_Word ArgVarsModes_61;
              MR_Word SubGoal_62;
              MR_Word GoalId_63;
              MR_Word STATE_VARIABLE_MOI_116_116;
              MR_Word STATE_VARIABLE_MOI_117_117;
              MR_Word Var_119;
              MR_Word ConsumingVarsList_152;
              MR_Unsigned packed_word_4;

              Unification_45 = Unification0_40;
              packed_word_4 = (MR_Unsigned) ((MR_hl_field(2, RHS0_38, (MR_Integer) 0)));
              NonLocals_57 = ((MR_Word) ((MR_hl_field(2, RHS0_38, (MR_Integer) 2))));
              ArgVarsModes_61 = ((MR_Word) ((MR_hl_field(2, RHS0_38, (MR_Integer) 3))));
              H_59 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_38, (MR_Integer) 4))) & (MR_Integer) 7);
              SubGoal0_60 = ((MR_Word) ((MR_hl_field(2, RHS0_38, (MR_Integer) 5))));
              GoalId_63 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(STATE_VARIABLE_GoalInfo_108_108);
              check_hlds__mode_ordering__enter_lambda_goal_3_p_0(GoalId_63, STATE_VARIABLE_MOI_109_109, &STATE_VARIABLE_MOI_116_116);
              check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_60, &SubGoal_62, STATE_VARIABLE_MOI_116_116, &STATE_VARIABLE_MOI_117_117);
              {
                RHS_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_44, 0) = (MR_Box) (packed_word_4);
                MR_hl_field(2, RHS_44, 1) = NULL;
                MR_hl_field(2, RHS_44, 2) = ((MR_Box) (NonLocals_57));
                MR_hl_field(2, RHS_44, 3) = ((MR_Box) (ArgVarsModes_61));
                MR_hl_field(2, RHS_44, 4) = (MR_Box) ((MR_Unsigned) (H_59));
                MR_hl_field(2, RHS_44, 5) = ((MR_Box) (SubGoal_62));
              }
              check_hlds__mode_ordering__leave_lambda_goal_2_p_0(STATE_VARIABLE_MOI_117_117, STATE_VARIABLE_MOI_83);
              {
                Var_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_119, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[1]));
                MR_hl_field(0, Var_119, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5));
                MR_hl_field(0, Var_119, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_119, 3) = ((MR_Box) (InstGraph_42));
                MR_hl_field(0, Var_119, 4) = ((MR_Box) (NonLocals_57));
              }
              ConsumingVarsList_152 = mercury__solutions__solutions_1_f_1((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), Var_119);
              ConsumingVars_155 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVarsList_152);
              MakeVisibleVars_154 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_37);
              NeedVisibleVars_156 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_57);
            }
            break;
        }
        hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(ConsumingVars_155, STATE_VARIABLE_GoalInfo_108_108, &STATE_VARIABLE_GoalInfo_120_120);
        hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(MakeVisibleVars_154, STATE_VARIABLE_GoalInfo_120_120, &STATE_VARIABLE_GoalInfo_121_121);
        hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(NeedVisibleVars_156, STATE_VARIABLE_GoalInfo_121_121, STATE_VARIABLE_GoalInfo_81);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (VarA_37));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_44));
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_39));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_45));
          MR_hl_field(1, base, 4) = ((MR_Box) (Context_41));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 0))));
        MR_Word Args_20 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 2))));
        MR_Word ProdVars_24;
        MR_Word MakeVisibleVars_25;
        MR_Integer ProcId_26;
        MR_Word ConsumingVars_27;
        MR_Word NeedVisibleVars_28;
        MR_Word STATE_VARIABLE_GoalInfo_96_96;
        MR_Word STATE_VARIABLE_MOI_97_97;
        MR_Word Var_98;
        MR_Word Var_100;
        MR_Word STATE_VARIABLE_GoalInfo_101_101;
        MR_Word STATE_VARIABLE_GoalInfo_102_102;
        MR_Word Var_170;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_175;

        check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&ProdVars_24, STATE_VARIABLE_GoalInfo_0_80, &STATE_VARIABLE_GoalInfo_96_96, STATE_VARIABLE_MOI_0_82, &STATE_VARIABLE_MOI_97_97);
        Var_98 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_20);
        MakeVisibleVars_25 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_98, ProdVars_24);
        check_hlds__mode_ordering__find_matching_proc_7_p_0(PredId_18, Args_20, ProdVars_24, &ProcId_26, &ConsumingVars_27, STATE_VARIABLE_MOI_97_97, STATE_VARIABLE_MOI_83);
        Var_100 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_20);
        NeedVisibleVars_28 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_100, ConsumingVars_27);
        hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(ConsumingVars_27, STATE_VARIABLE_GoalInfo_96_96, &STATE_VARIABLE_GoalInfo_101_101);
        hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(MakeVisibleVars_25, STATE_VARIABLE_GoalInfo_101_101, &STATE_VARIABLE_GoalInfo_102_102);
        hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(NeedVisibleVars_28, STATE_VARIABLE_GoalInfo_102_102, STATE_VARIABLE_GoalInfo_81);
        Var_170 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 0))));
        Var_172 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 2))));
        Var_173 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 3))) & (MR_Integer) 1);
        Var_174 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 4))));
        Var_175 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Var_170));
          MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_26));
          MR_hl_field(2, base, 2) = ((MR_Box) (Var_172));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Var_173));
          MR_hl_field(2, base, 4) = ((MR_Box) (Var_174));
          MR_hl_field(2, base, 5) = ((MR_Box) (Var_175));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "generic_call NYI");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "pragma_foreign_code NYI");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_11 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Goals_15;

            switch (ConjType_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Box conv2_STATE_VARIABLE_MOI_83;

                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[10]), Goals0_12, &Goals_15, ((MR_Box) (STATE_VARIABLE_MOI_0_82)), &conv2_STATE_VARIABLE_MOI_83);
                  *STATE_VARIABLE_MOI_83 = ((MR_Word) (conv2_STATE_VARIABLE_MOI_83));
                  check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Goals_15, STATE_VARIABLE_GoalInfo_0_80, STATE_VARIABLE_GoalInfo_81);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Goals1_13;
                  MR_Word ForwardGoalPathMap_14;
                  MR_Word ConsVars_16;
                  MR_Word NeedVars_17;
                  MR_Word STATE_VARIABLE_GoalInfo_86_86;
                  MR_Word STATE_VARIABLE_GoalInfo_87_87;
                  MR_Word Var_88;
                  MR_Word Var_89;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Box conv5_STATE_VARIABLE_MOI_83;

                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[11]), Goals0_12, &Goals1_13, ((MR_Box) (STATE_VARIABLE_MOI_0_82)), &conv5_STATE_VARIABLE_MOI_83);
                  *STATE_VARIABLE_MOI_83 = ((MR_Word) (conv5_STATE_VARIABLE_MOI_83));
                  ForwardGoalPathMap_14 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_MOI_83, (MR_Integer) 5))));
                  check_hlds__mode_ordering__mode_order_conj_3_p_0(ForwardGoalPathMap_14, Goals1_13, &Goals_15);
                  check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Goals_15, STATE_VARIABLE_GoalInfo_0_80, &STATE_VARIABLE_GoalInfo_86_86);
                  ConsVars_16 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_86_86);
                  Var_89 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_86_86);
                  Var_88 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsVars_16, Var_89);
                  STATE_VARIABLE_GoalInfo_87_87 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_86_86, Var_88);
                  NeedVars_17 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_87_87);
                  Var_92 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_87_87);
                  Var_91 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVars_17, Var_92);
                  *STATE_VARIABLE_GoalInfo_81 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_87_87, Var_91);
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_11));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_15));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_157 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Goals_158;
            MR_Box conv8_STATE_VARIABLE_MOI_83;

            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[12]), Goals0_157, &Goals_158, ((MR_Box) (STATE_VARIABLE_MOI_0_82)), &conv8_STATE_VARIABLE_MOI_83);
            *STATE_VARIABLE_MOI_83 = ((MR_Word) (conv8_STATE_VARIABLE_MOI_83));
            check_hlds__mode_ordering__mode_order_disj_3_p_0(Goals_158, STATE_VARIABLE_GoalInfo_0_80, STATE_VARIABLE_GoalInfo_81);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_158));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "switch");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Var_130;
            MR_Word SubGoal0_161 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoal_162;

            check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_161, &SubGoal_162, STATE_VARIABLE_MOI_0_82, STATE_VARIABLE_MOI_83);
            Var_130 = ((MR_Word) ((MR_hl_field(0, SubGoal_162, (MR_Integer) 1))));
            check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(Var_130, STATE_VARIABLE_GoalInfo_0_80, STATE_VARIABLE_GoalInfo_81);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_64));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_162));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Locals_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Cond0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Then0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Else0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 4))));
            MR_Word Cond_69;
            MR_Word Then_70;
            MR_Word Else_71;
            MR_Word STATE_VARIABLE_MOI_132_132;
            MR_Word STATE_VARIABLE_MOI_133_133;
            MR_Word Var_135;
            MR_Word STATE_VARIABLE_GoalInfo_136_136;
            MR_Word Var_137;
            MR_Word STATE_VARIABLE_GoalInfo_139_139;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word STATE_VARIABLE_GoalInfo_142_142;
            MR_Word Var_143;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word ConsVars_163;
            MR_Word NeedVars_164;

            check_hlds__mode_ordering__mode_order_goal_4_p_0(Cond0_66, &Cond_69, STATE_VARIABLE_MOI_0_82, &STATE_VARIABLE_MOI_132_132);
            check_hlds__mode_ordering__mode_order_goal_4_p_0(Then0_67, &Then_70, STATE_VARIABLE_MOI_132_132, &STATE_VARIABLE_MOI_133_133);
            check_hlds__mode_ordering__mode_order_goal_4_p_0(Else0_68, &Else_71, STATE_VARIABLE_MOI_133_133, STATE_VARIABLE_MOI_83);
            {
              Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_137, 0) = ((MR_Box) (Then_70));
              MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_135, 0) = ((MR_Box) (Cond_69));
              MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_137));
            }
            check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Var_135, STATE_VARIABLE_GoalInfo_0_80, &STATE_VARIABLE_GoalInfo_136_136);
            ConsVars_163 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_136_136);
            Var_141 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_136_136);
            Var_140 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsVars_163, Var_141);
            STATE_VARIABLE_GoalInfo_139_139 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_136_136, Var_140);
            NeedVars_164 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_139_139);
            Var_144 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_139_139);
            Var_143 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVars_164, Var_144);
            STATE_VARIABLE_GoalInfo_142_142 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_139_139, Var_143);
            Var_145 = ((MR_Word) ((MR_hl_field(0, Else_71, (MR_Integer) 1))));
            check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(Var_145, STATE_VARIABLE_GoalInfo_142_142, STATE_VARIABLE_GoalInfo_81);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Locals_65));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_69));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_70));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_71));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_MOI_0_12,
  MR_Word * STATE_VARIABLE_MOI_13)
{
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word GoalExpr_10;
  MR_Word GoalInfo_11;

  check_hlds__mode_ordering__mode_order_goal_2_6_p_0(GoalExpr0_8, &GoalExpr_10, GoalInfo0_9, &GoalInfo_11, STATE_VARIABLE_MOI_0_12, STATE_VARIABLE_MOI_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_7_p_0(
  MR_Word PredId_8,
  MR_Word Args_9,
  MR_Word ProdVars_10,
  MR_Integer * ProcId_11,
  MR_Word * ConsumingVars_12,
  MR_Word STATE_VARIABLE_MOI_0_26,
  MR_Word * STATE_VARIABLE_MOI_27)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_26, (MR_Integer) 3))));
  MR_Word CallerInstGraph_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_26, (MR_Integer) 0))));
  MR_Word PredConstraintMap_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_26, (MR_Integer) 4))));
  MR_Word MCInfo_18;
  MR_Word PredInfo_19;
  MR_Word CalleeInstGraphInfo_20;
  MR_Word CalleeInstGraph_21;
  MR_Word ProcTable_22;
  MR_Word ProcList_23;
  MR_Word Var_52;
  MR_Box conv0_Var_52;
  MR_Integer ProcId0_24;
  MR_Word ConsumingVars0_25;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0), PredConstraintMap_16, ((MR_Box) (PredId_8)), &conv0_Var_52);
  Var_52 = ((MR_Word) (conv0_Var_52));
  MCInfo_18 = ((MR_Word) ((MR_hl_field(0, Var_52, (MR_Integer) 1))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_8, &PredInfo_19);
  hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(PredInfo_19, &CalleeInstGraphInfo_20);
  CalleeInstGraph_21 = ((MR_Word) ((MR_hl_field(0, CalleeInstGraphInfo_20, (MR_Integer) 0))));
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_19, &ProcTable_22);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_22, &ProcList_23);
  succeeded = check_hlds__mode_ordering__find_matching_proc_2_8_p_0(ProcList_23, ProdVars_10, Args_9, CallerInstGraph_15, CalleeInstGraph_21, MCInfo_18, &ProcId0_24, &ConsumingVars0_25);
  if (succeeded)
  {
    *ProcId_11 = ProcId0_24;
    *ConsumingVars_12 = ConsumingVars0_25;
  }
  else
  {
    succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(PredInfo_19);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.find_matching_proc\'/7", (MR_String) "infer_modes NYI");
        return;
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.find_matching_proc\'/7", (MR_String) "unexpected mode error");
        return;
      }
  }
  *STATE_VARIABLE_MOI_27 = STATE_VARIABLE_MOI_0_26;
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s * env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s *) (env_ptr_arg);

  *((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_LambdaHeadVar__1_31));
  ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont)((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s env;

  (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont = cont;
  (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__587__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &(env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_LambdaHeadVar__1_31, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4, &env);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
    if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
    {
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
      }
      Var_27 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, Var_28);
      (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, Var_27);
      if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
      {
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
        }
        Var_29 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, Var_30);
        (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, Var_29);
        (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
      }
      (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
    }
  }
  if (!((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded))
  {
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word TypeCtorInfo_42_42;

    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
    }
    Var_34 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, Var_35);
    (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, Var_34);
    if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
    {
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
      }
      Var_36 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, Var_37);
      (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, Var_36);
      (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
      if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
      {
        TypeCtorInfo_42_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0(TypeCtorInfo_42_42, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
        (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
      }
    }
  }
  if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
    check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0) == 0)
    {
      hlds__inst_graph__corresponding_nodes_from_lists_6_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19, &(env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22, &(env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2, env_ptr);
      (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProdVars_12,
  MR_Word Args_13,
  MR_Word CallerInstGraph_14,
  MR_Word CalleeInstGraph_15,
  MR_Word MCInfo_16,
  MR_Integer * ProcId_17,
  MR_Word * ConsumingVars_18)
{
  struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s env;

  (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12 = ProdVars_12;
  (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13 = Args_13;
  (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14 = CallerInstGraph_14;
  (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15 = CalleeInstGraph_15;
  (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16 = MCInfo_16;
  while (MR_TRUE)
  {
    MR_Integer ProcId0_9;
    MR_Word ProcInfo_10;
    MR_Word ProcList_11;
    MR_Word Constraint0_20;
    MR_Word Var_26;

    // setup for model_semi tailcalls optimized into a loop
    ;
    (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      ProcList_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      ProcId0_9 = ((MR_Integer) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
      ProcInfo_10 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &(env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19);
      hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(ProcInfo_10, &Constraint0_20);
      (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Constraint0_20);
      check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(&env);
      (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
      if ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
      {
        MR_Word GenPred_24;
        MR_Word ConsumingVarsList_25;

        *ProcId_17 = ProcId0_9;
        {
          GenPred_24 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GenPred_24, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_8[0]));
          MR_hl_field(0, GenPred_24, 1) = ((MR_Box) (check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5));
          MR_hl_field(0, GenPred_24, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, GenPred_24, 3) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13));
          MR_hl_field(0, GenPred_24, 4) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14));
          MR_hl_field(0, GenPred_24, 5) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15));
          MR_hl_field(0, GenPred_24, 6) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16));
          MR_hl_field(0, GenPred_24, 7) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19));
          MR_hl_field(0, GenPred_24, 8) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21));
        }
        ConsumingVarsList_25 = mercury__solutions__solutions_1_f_1((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), GenPred_24);
        parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVarsList_25, ConsumingVars_18);
        (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = ProcList_11;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(
  MR_Word * ProdVars_6,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14,
  MR_Word STATE_VARIABLE_MOI_0_15,
  MR_Word * STATE_VARIABLE_MOI_16)
{
  MR_bool succeeded;
  MR_Word LambdaNesting_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_15, (MR_Integer) 2))));
  MR_Word AtomicProdVars_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_15, (MR_Integer) 1))));
  MR_Word GoalId_11;
  MR_Word ProdVars0_12;
  MR_Word Var_17;
  MR_Box conv0_ProdVars0_12;

  GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
  Var_17 = mercury__stack__push_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), LambdaNesting_9, ((MR_Box) (GoalId_11)));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[5]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[6]), AtomicProdVars_10, ((MR_Box) (Var_17)), &conv0_ProdVars0_12);
  if (succeeded)
  {
    ProdVars0_12 = ((MR_Word) (conv0_ProdVars0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *ProdVars_6 = ProdVars0_12;
  else
    *ProdVars_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__hlds_goal__goal_info_set_producing_vars_3_p_0(*ProdVars_6, STATE_VARIABLE_GoalInfo_0_13, STATE_VARIABLE_GoalInfo_14);
  *STATE_VARIABLE_MOI_16 = STATE_VARIABLE_MOI_0_15;
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__4_72;

  conv6_LambdaHeadVar__4_72 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__463__1_5_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv6_LambdaHeadVar__4_72));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__4_59;

  conv4_LambdaHeadVar__4_59 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__454__1_3_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv4_LambdaHeadVar__4_59));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__4_46;

  conv2_LambdaHeadVar__4_46 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_46));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_38;

  conv0_LambdaHeadVar__3_38 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_38));
  return wrapper_arg_3;
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word Goals0_5,
  MR_Word * Goals_6)
{
  MR_bool succeeded;
  MR_Word GoalMap_7;
  MR_Word ProdMap_17;
  MR_Word MakeVisMap_22;
  MR_Word Graph_25;
  MR_Word Var_35;
  MR_Word Var_41;
  MR_Word Var_54;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_98;
  MR_Box conv1_GoalMap_7;
  MR_Box conv3_ProdMap_17;
  MR_Box conv5_MakeVisMap_22;
  MR_Box conv7_Graph_25;
  MR_Word TSort_34;

  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (ForwardGoalPathMap_4));
  }
  Var_41 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
  conv1_GoalMap_7 = mercury__list__foldl_3_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[0]), Var_35, Goals0_5, ((MR_Box) (Var_41)));
  GoalMap_7 = ((MR_Word) (conv1_GoalMap_7));
  Var_54 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  conv3_ProdMap_17 = mercury__map__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[1]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[8]), GoalMap_7, ((MR_Box) (Var_54)));
  ProdMap_17 = ((MR_Word) (conv3_ProdMap_17));
  Var_67 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  conv5_MakeVisMap_22 = mercury__map__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[1]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[9]), GoalMap_7, ((MR_Box) (Var_67)));
  MakeVisMap_22 = ((MR_Word) (conv5_MakeVisMap_22));
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_7[0]));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_4));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_68, 3) = ((MR_Box) (ProdMap_17));
    MR_hl_field(0, Var_68, 4) = ((MR_Box) (MakeVisMap_22));
  }
  Var_98 = mercury__digraph__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  conv7_Graph_25 = mercury__map__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[4]), Var_68, GoalMap_7, ((MR_Box) (Var_98)));
  Graph_25 = ((MR_Word) (conv7_Graph_25));
  succeeded = mercury__digraph__return_vertices_in_from_to_order_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Graph_25, &TSort_34);
  if (succeeded)
    *Goals_6 = mercury__map__apply_to_list_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TSort_34, GoalMap_7);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "tsort failed");
      return;
    }
}

static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
  MR_Word GI_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * STATE_VARIABLE_GoalInfo_7)
{
  MR_Word STATE_VARIABLE_GoalInfo_8_8;
  MR_Word Var_9;
  MR_Word STATE_VARIABLE_GoalInfo_10_10;
  MR_Word Var_11;
  MR_Word STATE_VARIABLE_GoalInfo_12_12;
  MR_Word Var_13;
  MR_Word Var_15;

  Var_9 = hlds__hlds_goal__producing_vars_1_f_0(GI_4);
  STATE_VARIABLE_GoalInfo_8_8 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_6, Var_9);
  Var_11 = hlds__hlds_goal__consuming_vars_1_f_0(GI_4);
  STATE_VARIABLE_GoalInfo_10_10 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_8_8, Var_11);
  Var_13 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_4);
  STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_10_10, Var_13);
  Var_15 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_4);
  *STATE_VARIABLE_GoalInfo_7 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_12_12, Var_15);
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_GoalInfo_13;

  check_hlds__mode_ordering__union_mode_vars_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GoalInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GoalInfo_13));
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
  MR_Word Goals_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * STATE_VARIABLE_GoalInfo_7)
{
  MR_Box conv1_STATE_VARIABLE_GoalInfo_7;

  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[7]), Goals_4, ((MR_Box) (STATE_VARIABLE_GoalInfo_0_6)), &conv1_STATE_VARIABLE_GoalInfo_7);
  *STATE_VARIABLE_GoalInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_GoalInfo_7));
}

static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
  MR_Word GI_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  MR_Word ProdVars0_6;
  MR_Word ConsumVars0_7;
  MR_Word MakeVisibleVars0_8;
  MR_Word NeedVisibleVars0_9;
  MR_Word STATE_VARIABLE_GoalInfo_12_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word STATE_VARIABLE_GoalInfo_15_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_GoalInfo_18_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;

  ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
  ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
  MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
  NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
  Var_14 = hlds__hlds_goal__producing_vars_1_f_0(GI_4);
  Var_13 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars0_6, Var_14);
  STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_10, Var_13);
  Var_17 = hlds__hlds_goal__consuming_vars_1_f_0(GI_4);
  Var_16 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumVars0_7, Var_17);
  STATE_VARIABLE_GoalInfo_15_15 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_12_12, Var_16);
  Var_20 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_4);
  Var_19 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars0_8, Var_20);
  STATE_VARIABLE_GoalInfo_18_18 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_15_15, Var_19);
  Var_23 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_4);
  Var_22 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars0_9, Var_23);
  *STATE_VARIABLE_GoalInfo_11 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_18_18, Var_22);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_GoalInfo_8;

  check_hlds__mode_ordering__mode_order_disj_2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GoalInfo_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GoalInfo_8));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalInfo_0_2,
  MR_Word * STATE_VARIABLE_GoalInfo_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_GoalInfo_3 = STATE_VARIABLE_GoalInfo_0_2;
  else
  {
    MR_Word GI_8;
    MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_GoalInfo_14_14;
    MR_Word STATE_VARIABLE_GoalInfo_8_21;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_GoalInfo_10_23;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_GoalInfo_12_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv1_STATE_VARIABLE_GoalInfo_3;

    GI_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
    Var_22 = hlds__hlds_goal__producing_vars_1_f_0(GI_8);
    STATE_VARIABLE_GoalInfo_8_21 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_2, Var_22);
    Var_24 = hlds__hlds_goal__consuming_vars_1_f_0(GI_8);
    STATE_VARIABLE_GoalInfo_10_23 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_8_21, Var_24);
    Var_26 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_8);
    STATE_VARIABLE_GoalInfo_12_25 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_10_23, Var_26);
    Var_27 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_8);
    STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_12_25, Var_27);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[6]), Goals_9, ((MR_Box) (STATE_VARIABLE_GoalInfo_14_14)), &conv1_STATE_VARIABLE_GoalInfo_3);
    *STATE_VARIABLE_GoalInfo_3 = ((MR_Word) (conv1_STATE_VARIABLE_GoalInfo_3));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
  MR_Word STATE_VARIABLE_MOI_0_7,
  MR_Word * STATE_VARIABLE_MOI_8)
{
  MR_Word LambdaNesting0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 2))));
  MR_Word LambdaNesting_6;
  MR_Box conv0_Var_5;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  mercury__stack__det_pop_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), &conv0_Var_5, LambdaNesting0_4, &LambdaNesting_6);
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 0))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 1))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 3))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 4))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MOI_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (LambdaNesting_6));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_19));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
  MR_Word GoalId_4,
  MR_Word STATE_VARIABLE_MOI_0_7,
  MR_Word * STATE_VARIABLE_MOI_8)
{
  MR_Word LambdaNesting0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 2))));
  MR_Word Var_10;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  Var_10 = mercury__stack__push_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), LambdaNesting0_6, ((MR_Box) (GoalId_4)));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 0))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 1))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 3))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 4))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_0_7, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MOI_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_pred_5_p_0(
  MR_Word PredConstraintMap_6,
  MR_Word _SCC_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(PredConstraintMap_6, PredId_8, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_PredInfo_23;

  check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_PredInfo_23);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_PredInfo_23));
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_PredInfo_18;

  check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredInfo_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredInfo_18));
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
  MR_Word PredConstraintMap_6,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_bool succeeded;
  MR_Word RequestedProcsMap0_10;
  MR_Word PredInfo0_11;
  MR_Word ModeConstraint0_12;
  MR_Word MCI_13;
  MR_Word PredInfo_15;
  MR_Word Var_33;
  MR_Box conv0_Var_33;

  RequestedProcsMap0_10 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[2]));
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_17, PredId_8, &PredInfo0_11);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0), PredConstraintMap_6, ((MR_Box) (PredId_8)), &conv0_Var_33);
  Var_33 = ((MR_Word) (conv0_Var_33));
  ModeConstraint0_12 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
  MCI_13 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
  succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(PredInfo0_11);
  if (succeeded)
  {
    MR_Word RequestedProcs_14;
    MR_Box conv1_RequestedProcs_14;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[2]), RequestedProcsMap0_10, ((MR_Box) (PredId_8)), &conv1_RequestedProcs_14);
    if (succeeded)
    {
      RequestedProcs_14 = ((MR_Word) (conv1_RequestedProcs_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_19;
      MR_Box conv3_PredInfo_15;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[0]));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1));
        MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_19, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_17));
        MR_hl_field(0, Var_19, 4) = ((MR_Box) (PredConstraintMap_6));
        MR_hl_field(0, Var_19, 5) = ((MR_Box) (PredId_8));
        MR_hl_field(0, Var_19, 6) = ((MR_Box) (MCI_13));
        MR_hl_field(0, Var_19, 7) = ((MR_Box) (ModeConstraint0_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[1]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_19, RequestedProcs_14, ((MR_Box) (PredInfo0_11)), &conv3_PredInfo_15);
      PredInfo_15 = ((MR_Word) (conv3_PredInfo_15));
    }
    else
      PredInfo_15 = PredInfo0_11;
  }
  else
  {
    MR_Word ProcIds_16;
    MR_Word Var_20;
    MR_Box conv5_PredInfo_15;

    ProcIds_16 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_11);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[1]));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2));
      MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_20, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_17));
      MR_hl_field(0, Var_20, 4) = ((MR_Box) (PredConstraintMap_6));
      MR_hl_field(0, Var_20, 5) = ((MR_Box) (PredId_8));
      MR_hl_field(0, Var_20, 6) = ((MR_Box) (MCI_13));
      MR_hl_field(0, Var_20, 7) = ((MR_Box) (ModeConstraint0_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_20, ProcIds_16, ((MR_Box) (PredInfo0_11)), &conv5_PredInfo_15);
    PredInfo_15 = ((MR_Word) (conv5_PredInfo_15));
  }
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_15, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

  check_hlds__mode_ordering__mode_ordering_pred_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
  MR_Word PredConstraintMap_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word STATE_VARIABLE_ModuleInfo_10_10;
  MR_Word Var_11;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

  check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0(SCC_6, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_10_10);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (PredConstraintMap_5));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (SCC_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_11, SCC_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_10_10)), &conv1_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

  check_hlds__mode_ordering__mode_ordering_scc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
}

void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0(
  MR_Word PredConstraintMap_7,
  MR_Word SCCs_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word Var_15;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_12;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (PredConstraintMap_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_15, SCCs_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv1_STATE_VARIABLE_ModuleInfo_12);
  *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_12));
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__mode_ordering__init(void)
{
}

void mercury__check_hlds__mode_ordering__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0);
}

void mercury__check_hlds__mode_ordering__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_ordering__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_ordering.
