/*
** Automatically generated from `mode_ordering.m'
** by the Mercury compiler,
** version rotd-2018-01-09
** configured for x86_64-pc-linux-gnu.
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


// :- module check_hlds.mode_ordering.
// :- implementation.

/*
INIT mercury__check_hlds__mode_ordering__init
ENDINIT
*/

#include "check_hlds.mode_ordering.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "solutions.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__MCInfo_16;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Constraint_21;
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont;
  void * check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Var_32;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Var_33;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Y_38;
};

struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__ProdVars_158;
  MR_Word * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__LambdaHeadVar__1_126;
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont;
  void * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarC_48;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarD_49;
};

struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s {
  MR_Box * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1;
  MR_Cont check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont;
  void * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr;
  MR_Word check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_126;
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
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0(
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
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0(
  MR_Word ProdMap_17,
  MR_Word MakeVisMap_22,
  MR_Integer LambdaHeadVar__1_70,
  MR_Word LambdaHeadVar__2_71,
  MR_Word LambdaHeadVar__3_72);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__475__1_4_f_0(
  MR_Word MakeVisMap_22,
  MR_Word Key0_27,
  MR_Word LambdaHeadVar__1_90,
  MR_Word LambdaHeadVar__2_91);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__467__1_4_f_0(
  MR_Word ProdMap_17,
  MR_Word Key0_27,
  MR_Word LambdaHeadVar__1_79,
  MR_Word LambdaHeadVar__2_80);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0(
  MR_Integer LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__2_58,
  MR_Word LambdaHeadVar__3_59);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_3_f_0(
  MR_Integer LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__1_62,
  MR_Word LambdaHeadVar__2_63);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(
  MR_Integer LambdaHeadVar__1_44,
  MR_Word LambdaHeadVar__2_45,
  MR_Word LambdaHeadVar__3_46);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__446__1_3_f_0(
  MR_Integer LambdaHeadVar__1_44,
  MR_Word LambdaHeadVar__1_49,
  MR_Word LambdaHeadVar__2_50);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__431__1_3_f_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0(
  MR_Word VarA_37,
  MR_Word InstGraph_42,
  MR_Word VarB_43,
  MR_Word ProdVars_158,
  MR_Word * LambdaHeadVar__1_126,
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
  MR_Word STATE_VARIABLE_GoalInfo_0_81,
  MR_Word * STATE_VARIABLE_GoalInfo_82,
  MR_Word STATE_VARIABLE_MOI_0_83,
  MR_Word * STATE_VARIABLE_MOI_84);

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[3])),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[6]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[0])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_disj_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[0])),
    ((MR_Box) (check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[2])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[2])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_3[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_4[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_5[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
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
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0
};

static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "mode_ordering_info",
  {     check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0 },
  {     check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0
};

static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0[2] = {
  (MR_String) "pci_mode_constraint",
  (MR_String) "pci_mci"
};

static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0 = {
  (MR_String) "pci",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0
};

static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "pred_constraint_info",
  {     check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0 },
  {     check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "pred_constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Var_33 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Y_38));
    }
    (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Var_32 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__MCInfo_16, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Var_33);
    (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Constraint_21, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Var_32);
    if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont)((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0(
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
  {
    struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0_s env;

    (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__MCInfo_16 = MCInfo_16;
    (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Constraint_21 = Constraint_21;
    (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont = cont;
    (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont_env_ptr = cont_env_ptr;
    hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(CallerInstGraph_14, CalleeInstGraph_15, Args_13, HeadVars_19, LambdaHeadVar__1_31, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Y_38, check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_1, &env);
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_92;

    conv2_LambdaHeadVar__3_92 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__475__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_92));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_81;

    conv0_LambdaHeadVar__3_81 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__467__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_81));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0(
  MR_Word ProdMap_17,
  MR_Word MakeVisMap_22,
  MR_Integer LambdaHeadVar__1_70,
  MR_Word LambdaHeadVar__2_71,
  MR_Word LambdaHeadVar__3_72)
{
  {
    MR_Word LambdaHeadVar__4_73;
    MR_Word TypeInfo_149_149;
    MR_Word TypeInfo_150_150;
    MR_Word TypeCtorInfo_154_154;
    MR_Word Key0_27;
    MR_Word STATE_VARIABLE_R_76_76;
    MR_Word STATE_VARIABLE_R_77_77;
    MR_Word Var_78;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word GI_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_71, (MR_Integer) 1)));
    MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_71, (MR_Integer) 0)));
    MR_Box conv1_STATE_VARIABLE_R_77_77;
    MR_Box conv3_LambdaHeadVar__4_73;

    mercury__digraph__add_vertex_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (LambdaHeadVar__1_70)), &Key0_27, LambdaHeadVar__3_72, &STATE_VARIABLE_R_76_76);
    TypeInfo_149_149 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[3];
    TypeInfo_150_150 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[4];
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ProdMap_17));
      MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (Key0_27));
    }
    TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    Var_87 = hlds__hlds_goal__consuming_vars_1_f_0(GI_120);
    Var_86 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_154_154, Var_87);
    conv1_STATE_VARIABLE_R_77_77 = mercury__list__foldl_3_f_0(TypeInfo_149_149, TypeInfo_150_150, Var_78, Var_86, ((MR_Box) (STATE_VARIABLE_R_76_76)));
    STATE_VARIABLE_R_77_77 = ((MR_Word) conv1_STATE_VARIABLE_R_77_77);
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_2));
      MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (MakeVisMap_22));
      MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) (Key0_27));
    }
    Var_98 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_120);
    Var_97 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_154_154, Var_98);
    conv3_LambdaHeadVar__4_73 = mercury__list__foldl_3_f_0(TypeInfo_149_149, TypeInfo_150_150, Var_89, Var_97, ((MR_Box) (STATE_VARIABLE_R_77_77)));
    LambdaHeadVar__4_73 = ((MR_Word) conv3_LambdaHeadVar__4_73);
    return LambdaHeadVar__4_73;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__475__1_4_f_0(
  MR_Word MakeVisMap_22,
  MR_Word Key0_27,
  MR_Word LambdaHeadVar__1_90,
  MR_Word LambdaHeadVar__2_91)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__3_92;
    MR_Integer Index2_32;
    MR_Box conv0_Index2_32;

    succeeded = mercury__map__search_2_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, MakeVisMap_22, ((MR_Box) (LambdaHeadVar__1_90)), &conv0_Index2_32);
    if (succeeded)
    {
      Index2_32 = ((MR_Integer) conv0_Index2_32);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_157_157 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word Key2_33;
      MR_Word STATE_VARIABLE_R2_95_95;

      mercury__digraph__add_vertex_4_p_0(TypeCtorInfo_157_157, ((MR_Box) (Index2_32)), &Key2_33, LambdaHeadVar__2_91, &STATE_VARIABLE_R2_95_95);
      mercury__digraph__add_edge_4_p_0(TypeCtorInfo_157_157, Key2_33, Key0_27, STATE_VARIABLE_R2_95_95, &LambdaHeadVar__3_92);
    }
    else
      LambdaHeadVar__3_92 = LambdaHeadVar__2_91;
    return LambdaHeadVar__3_92;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__467__1_4_f_0(
  MR_Word ProdMap_17,
  MR_Word Key0_27,
  MR_Word LambdaHeadVar__1_79,
  MR_Word LambdaHeadVar__2_80)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__3_81;
    MR_Integer Index1_29;
    MR_Box conv0_Index1_29;

    succeeded = mercury__map__search_2_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ProdMap_17, ((MR_Box) (LambdaHeadVar__1_79)), &conv0_Index1_29);
    if (succeeded)
    {
      Index1_29 = ((MR_Integer) conv0_Index1_29);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_153_153 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Word Key1_30;
      MR_Word STATE_VARIABLE_R1_84_84;

      mercury__digraph__add_vertex_4_p_0(TypeCtorInfo_153_153, ((MR_Box) (Index1_29)), &Key1_30, LambdaHeadVar__2_80, &STATE_VARIABLE_R1_84_84);
      mercury__digraph__add_edge_4_p_0(TypeCtorInfo_153_153, Key1_30, Key0_27, STATE_VARIABLE_R1_84_84, &LambdaHeadVar__3_81);
    }
    else
      LambdaHeadVar__3_81 = LambdaHeadVar__2_80;
    return LambdaHeadVar__3_81;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_64;

    conv0_LambdaHeadVar__3_64 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_64));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0(
  MR_Integer LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__2_58,
  MR_Word LambdaHeadVar__3_59)
{
  {
    MR_Word LambdaHeadVar__4_60;
    MR_Word Var_61;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_126;
    MR_Box conv1_LambdaHeadVar__4_60;

    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (LambdaHeadVar__1_57));
    }
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_58, (MR_Integer) 0)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_58, (MR_Integer) 1)));
    Var_66 = hlds__hlds_goal__make_visible_vars_1_f_0(Var_67);
    Var_65 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_66);
    conv1_LambdaHeadVar__4_60 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1], Var_61, Var_65, ((MR_Box) (LambdaHeadVar__3_59)));
    LambdaHeadVar__4_60 = ((MR_Word) conv1_LambdaHeadVar__4_60);
    return LambdaHeadVar__4_60;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_3_f_0(
  MR_Integer LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__1_62,
  MR_Word LambdaHeadVar__2_63)
{
  {
    MR_Word LambdaHeadVar__3_64;

    LambdaHeadVar__3_64 = mercury__map__set_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, LambdaHeadVar__2_63, ((MR_Box) (LambdaHeadVar__1_62)), ((MR_Box) (LambdaHeadVar__1_57)));
    return LambdaHeadVar__3_64;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_51;

    conv0_LambdaHeadVar__3_51 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__446__1_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_51));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(
  MR_Integer LambdaHeadVar__1_44,
  MR_Word LambdaHeadVar__2_45,
  MR_Word LambdaHeadVar__3_46)
{
  {
    MR_Word LambdaHeadVar__4_47;
    MR_Word Var_48;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_125;
    MR_Box conv1_LambdaHeadVar__4_47;

    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (LambdaHeadVar__1_44));
    }
    Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_45, (MR_Integer) 0)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_45, (MR_Integer) 1)));
    Var_53 = hlds__hlds_goal__producing_vars_1_f_0(Var_54);
    Var_52 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_53);
    conv1_LambdaHeadVar__4_47 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1], Var_48, Var_52, ((MR_Box) (LambdaHeadVar__3_46)));
    LambdaHeadVar__4_47 = ((MR_Word) conv1_LambdaHeadVar__4_47);
    return LambdaHeadVar__4_47;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__446__1_3_f_0(
  MR_Integer LambdaHeadVar__1_44,
  MR_Word LambdaHeadVar__1_49,
  MR_Word LambdaHeadVar__2_50)
{
  {
    MR_Word LambdaHeadVar__3_51;

    LambdaHeadVar__3_51 = mercury__map__det_insert_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, LambdaHeadVar__2_50, ((MR_Box) (LambdaHeadVar__1_49)), ((MR_Box) (LambdaHeadVar__1_44)));
    return LambdaHeadVar__3_51;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__431__1_3_f_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word LambdaHeadVar__1_36,
  MR_Word LambdaHeadVar__2_37)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__3_38;
    MR_Integer Index_10;
    MR_Word GI_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_36, (MR_Integer) 1)));
    MR_Word GoalId_13;
    MR_Word GoalPath_14;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_36, (MR_Integer) 0)));
    MR_Box conv0_GoalPath_14;
    MR_Integer Index0_16;
    MR_Word LastStep_15;

    GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GI_12);
    mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0, ForwardGoalPathMap_4, ((MR_Box) (GoalId_13)), &conv0_GoalPath_14);
    GoalPath_14 = ((MR_Word) conv0_GoalPath_14);
    succeeded = mdbcomp__goal_path__goal_path_get_last_2_p_0(GoalPath_14, &LastStep_15);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) LastStep_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        Index0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LastStep_15, (MR_Integer) 0)));
    }
    if (succeeded)
      Index_10 = Index0_16;
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "goal_path error");
    }
    LambdaHeadVar__3_38 = mercury__map__det_insert_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, LambdaHeadVar__2_37, ((MR_Box) (Index_10)), ((MR_Box) (LambdaHeadVar__1_36)));
    return LambdaHeadVar__3_38;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0_s *) env_ptr_arg;

    {
      (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__ProdVars_158, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarC_48);
      if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded)
      {
        *((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__LambdaHeadVar__1_126) = (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarD_49;
        (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded = MR_TRUE;
      }
      else
      {
        (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__ProdVars_158, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarD_49);
        if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded)
        {
          *((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__LambdaHeadVar__1_126) = (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarC_48;
          (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded = MR_TRUE;
        }
      }
      if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded)
        ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont)((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0(
  MR_Word VarA_37,
  MR_Word InstGraph_42,
  MR_Word VarB_43,
  MR_Word ProdVars_158,
  MR_Word * LambdaHeadVar__1_126,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0_s env;

    (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__ProdVars_158 = ProdVars_158;
    (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__LambdaHeadVar__1_126 = LambdaHeadVar__1_126;
    (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont = cont;
    (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont_env_ptr = cont_env_ptr;
    hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(InstGraph_42, VarA_37, VarB_43, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarC_48, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarD_49, check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_1, &env);
  }
}

void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_16;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[2], &Var_16, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[3], &Var_17, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[5], &Var_18, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            hlds__hlds_module____Compare____module_info_0_0(&Var_19, ArgX4_10, ArgY4_11);
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], &Var_20, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[5], HeadVar__1_1, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
              }
            }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[2], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[3];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[5];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[4];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[5];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * STATE_VARIABLE_GoalInfo_13)
{
  {
    MR_Word TypeCtorInfo_26_26;
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
    MR_Word Var_10;

    ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
    ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
    MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
    NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_12);
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0)));
    GI_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1)));
    TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    Var_16 = hlds__hlds_goal__producing_vars_1_f_0(GI_11);
    Var_15 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_26_26, ProdVars0_6, Var_16);
    STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_12, Var_15);
    Var_19 = hlds__hlds_goal__consuming_vars_1_f_0(GI_11);
    Var_18 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_26_26, ConsumVars0_7, Var_19);
    STATE_VARIABLE_GoalInfo_17_17 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_14_14, Var_18);
    Var_22 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_11);
    Var_21 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_26_26, MakeVisibleVars0_8, Var_22);
    STATE_VARIABLE_GoalInfo_20_20 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_17_17, Var_21);
    Var_25 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_11);
    Var_24 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_26_26, NeedVisibleVars0_9, Var_25);
    *STATE_VARIABLE_GoalInfo_13 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_20_20, Var_24);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalInfo_0_7,
  MR_Word * STATE_VARIABLE_GoalInfo_8)
{
  {
    MR_Word TypeCtorInfo_24_30;
    MR_Word GI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ProdVars0_14;
    MR_Word ConsumVars0_15;
    MR_Word MakeVisibleVars0_16;
    MR_Word NeedVisibleVars0_17;
    MR_Word STATE_VARIABLE_GoalInfo_12_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_GoalInfo_15_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_GoalInfo_18_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

    ProdVars0_14 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_7);
    ConsumVars0_15 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_7);
    MakeVisibleVars0_16 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_7);
    NeedVisibleVars0_17 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_0_7);
    TypeCtorInfo_24_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    Var_20 = hlds__hlds_goal__producing_vars_1_f_0(GI_5);
    Var_19 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_24_30, ProdVars0_14, Var_20);
    STATE_VARIABLE_GoalInfo_12_18 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_7, Var_19);
    Var_23 = hlds__hlds_goal__consuming_vars_1_f_0(GI_5);
    Var_22 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_24_30, ConsumVars0_15, Var_23);
    STATE_VARIABLE_GoalInfo_15_21 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_12_18, Var_22);
    Var_26 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_5);
    Var_25 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_24_30, MakeVisibleVars0_16, Var_26);
    STATE_VARIABLE_GoalInfo_18_24 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_15_21, Var_25);
    Var_29 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_5);
    Var_28 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_24_30, NeedVisibleVars0_17, Var_29);
    *STATE_VARIABLE_GoalInfo_8 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_18_24, Var_28);
  }
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
  {
    MR_bool succeeded;
    MR_Integer ProcId_16;

    succeeded = mercury__builtin__semidet_succeed_0_p_0();
    if (succeeded)
    {
      {
        mercury__require__sorry_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.pred_info_create_proc_info_for_mode_decl_constraint\'/4", (MR_String) "NYI");
        return;
      }
    }
    else
      ProcId_16 = hlds__hlds_pred__initial_proc_id_0_f_0();
    check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(ModuleInfo_9, PredConstraintMap_10, PredId_11, MCI_12, Constraint0_13, ProcId_16, STATE_VARIABLE_PredInfo_0_17, STATE_VARIABLE_PredInfo_18);
  }
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
  {
    MR_Word ProcInfo0_16;
    MR_Word ModeDeclConstraint_17;
    MR_Word Constraint_18;
    MR_Word InstGraphInfo_19;
    MR_Word InstGraph_20;
    MR_Word ProcInfo_21;
    MR_Word ProdVarsMap_35;
    MR_Word LambdaNesting0_36;
    MR_Word ForwardGoalPathMap_37;
    MR_Word MOI0_38;
    MR_Word Goal0_39;
    MR_Word Goal_40;
    MR_Word GoalExpr0_49;
    MR_Word GoalInfo0_50;
    MR_Word GoalExpr_51;
    MR_Word GoalInfo_52;
    MR_Word _MOI_41;

    hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_0_22, ProcId_14, &ProcInfo0_16);
    hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(ProcInfo0_16, &ModeDeclConstraint_17);
    Constraint_18 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Constraint0_13, ModeDeclConstraint_17);
    hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(STATE_VARIABLE_PredInfo_0_22, &InstGraphInfo_19);
    InstGraph_20 = hlds__inst_graph__implementation_inst_graph_1_f_0(InstGraphInfo_19);
    ProdVarsMap_35 = check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0(Constraint_18, MCI_12);
    LambdaNesting0_36 = mercury__stack__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_p_0(MCI_12, PredId_11, &ForwardGoalPathMap_37);
    {
      MOI0_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MOI0_38, 0) = ((MR_Box) (InstGraph_20));
      MR_hl_field(MR_mktag(0), MOI0_38, 1) = ((MR_Box) (ProdVarsMap_35));
      MR_hl_field(MR_mktag(0), MOI0_38, 2) = ((MR_Box) (LambdaNesting0_36));
      MR_hl_field(MR_mktag(0), MOI0_38, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), MOI0_38, 4) = ((MR_Box) (PredConstraintMap_10));
      MR_hl_field(MR_mktag(0), MOI0_38, 5) = ((MR_Box) (ForwardGoalPathMap_37));
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_16, &Goal0_39);
    GoalExpr0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_39, (MR_Integer) 0)));
    GoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_39, (MR_Integer) 1)));
    check_hlds__mode_ordering__mode_order_goal_2_6_p_0(GoalExpr0_49, &GoalExpr_51, GoalInfo0_50, &GoalInfo_52, MOI0_38, &_MOI_41);
    {
      Goal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_40, 0) = ((MR_Box) (GoalExpr_51));
      MR_hl_field(MR_mktag(0), Goal_40, 1) = ((MR_Box) (GoalInfo_52));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_40, ProcInfo0_16, &ProcInfo_21);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_14, ProcInfo_21, STATE_VARIABLE_PredInfo_0_22, STATE_VARIABLE_PredInfo_23);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s * env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s *) env_ptr_arg;

    *((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_126));
    ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont)((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s env;

    (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont = cont;
    (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), &(env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_126, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6, &env);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s * env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s *) env_ptr_arg;

    *((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3));
    ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont)((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s env;

    (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont = cont;
    (env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      hlds__inst_graph__reachable_from_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &(env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4, &env);
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Goal_6;
    MR_Word conv6_STATE_VARIABLE_MOI_13;

    check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) wrapper_arg_1), &conv7_Goal_6, ((MR_Word) wrapper_arg_3), &conv6_STATE_VARIABLE_MOI_13);
    *wrapper_arg_2 = ((MR_Box) (conv7_Goal_6));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_MOI_13));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Goal_6;
    MR_Word conv3_STATE_VARIABLE_MOI_13;

    check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) wrapper_arg_1), &conv4_Goal_6, ((MR_Word) wrapper_arg_3), &conv3_STATE_VARIABLE_MOI_13);
    *wrapper_arg_2 = ((MR_Box) (conv4_Goal_6));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_MOI_13));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_6;
    MR_Word conv0_STATE_VARIABLE_MOI_13;

    check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) wrapper_arg_1), &conv1_Goal_6, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_MOI_13);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_MOI_13));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
  MR_Word GoalExpr0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_81,
  MR_Word * STATE_VARIABLE_GoalInfo_82,
  MR_Word STATE_VARIABLE_MOI_0_83,
  MR_Word * STATE_VARIABLE_MOI_84)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_110;
          MR_Word SubGoal0_164 = (MR_Word) MR_body(((MR_Word) GoalExpr0_7), (MR_Integer) 0);
          MR_Word SubGoal_165;
          MR_Word Var_186;

          check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_164, &SubGoal_165, STATE_VARIABLE_MOI_0_83, STATE_VARIABLE_MOI_84);
          Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_165, (MR_Integer) 0)));
          Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_165, (MR_Integer) 1)));
          check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(Var_110, STATE_VARIABLE_GoalInfo_0_81, STATE_VARIABLE_GoalInfo_82);
          *GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_165);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 0)));
          MR_Word RHS0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 1)));
          MR_Word UnifyMode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 2)));
          MR_Word Unification0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 3)));
          MR_Word Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 4)));
          MR_Word InstGraph_42;
          MR_Word RHS_44;
          MR_Word Unification_45;
          MR_Word STATE_VARIABLE_GoalInfo_115_115;
          MR_Word STATE_VARIABLE_MOI_116_116;
          MR_Word STATE_VARIABLE_GoalInfo_127_127;
          MR_Word STATE_VARIABLE_GoalInfo_128_128;
          MR_Word ProdVars_158;
          MR_Word MakeVisibleVars_159;
          MR_Word ConsumingVars_160;
          MR_Word NeedVisibleVars_161;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_183;
          MR_Word Var_184;
          MR_Word Var_185;

          check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&ProdVars_158, STATE_VARIABLE_GoalInfo_0_81, &STATE_VARIABLE_GoalInfo_115_115, STATE_VARIABLE_MOI_0_83, &STATE_VARIABLE_MOI_116_116);
          InstGraph_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_116_116, (MR_Integer) 0)));
          Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_116_116, (MR_Integer) 1)));
          Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_116_116, (MR_Integer) 2)));
          Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_116_116, (MR_Integer) 3)));
          Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_116_116, (MR_Integer) 4)));
          Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_116_116, (MR_Integer) 5)));
          switch (MR_tag((MR_Word) RHS0_38)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS0_38, (MR_Integer) 0)));
                MR_Word ConsumingVarsList_46;
                MR_Word Var_125;

                RHS_44 = RHS0_38;
                succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ProdVars_158, VarA_37);
                if (succeeded)
                {
                  MR_Word TypeCtorInfo_204_204;

                  {
                    Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Unification_45, 0) = ((MR_Box) (VarA_37));
                    MR_hl_field(MR_mktag(2), Unification_45, 1) = ((MR_Box) (VarB_43));
                  }
                  TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_204_204, VarA_37);
                  NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_204_204, VarB_43);
                }
                else
                {
                  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ProdVars_158, VarB_43);
                  if (succeeded)
                  {
                    MR_Word TypeCtorInfo_206_206;

                    {
                      Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Unification_45, 0) = ((MR_Box) (VarB_43));
                      MR_hl_field(MR_mktag(2), Unification_45, 1) = ((MR_Box) (VarA_37));
                    }
                    TypeCtorInfo_206_206 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_206_206, VarB_43);
                    NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_206_206, VarA_37);
                  }
                  else
                  {
                    MR_Word TypeCtorInfo_207_207;
                    MR_Word Var_122;
                    MR_Word Var_123;

                    {
                      Unification_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Unification_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Unification_45, 1) = ((MR_Box) (VarA_37));
                      MR_hl_field(MR_mktag(3), Unification_45, 2) = ((MR_Box) (VarB_43));
                    }
                    TypeCtorInfo_207_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    MakeVisibleVars_159 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_207_207);
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (VarB_43));
                      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (VarA_37));
                      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
                    }
                    NeedVisibleVars_161 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_207_207, Var_122);
                  }
                }
                {
                  Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7));
                  MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (VarA_37));
                  MR_hl_field(MR_mktag(0), Var_125, 4) = ((MR_Box) (InstGraph_42));
                  MR_hl_field(MR_mktag(0), Var_125, 5) = ((MR_Box) (VarB_43));
                  MR_hl_field(MR_mktag(0), Var_125, 6) = ((MR_Box) (ProdVars_158));
                }
                ConsumingVarsList_46 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], Var_125);
                ConsumingVars_160 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ConsumingVarsList_46);
                *STATE_VARIABLE_MOI_84 = STATE_VARIABLE_MOI_116_116;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgVars_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_38, (MR_Integer) 2)));
                MR_Word _ConsId_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_38, (MR_Integer) 0)));
                MR_Word _IsExistConstruct_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_38, (MR_Integer) 1)));

                RHS_44 = RHS0_38;
                succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ProdVars_158, VarA_37);
                if (succeeded)
                {
                  MR_Word TypeCtorInfo_213_213;
                  MR_Word Var_121;

                  Unification_45 = Unification0_40;
                  TypeCtorInfo_213_213 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  ConsumingVars_160 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_213_213);
                  {
                    Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (VarA_37));
                    MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (ArgVars_52));
                  }
                  MakeVisibleVars_159 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_213_213, Var_121);
                  NeedVisibleVars_161 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_213_213);
                }
                else
                {
                  MR_Word TypeCtorInfo_214_214;

                  Unification_45 = Unification0_40;
                  TypeCtorInfo_214_214 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  ConsumingVars_160 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_214_214, VarA_37);
                  MakeVisibleVars_159 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_214_214, ArgVars_52);
                  NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_214_214, VarA_37);
                }
                *STATE_VARIABLE_MOI_84 = STATE_VARIABLE_MOI_116_116;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeCtorInfo_217_217;
                MR_Word A_53;
                MR_Word B_54;
                MR_Word C_55;
                MR_Word NonLocals_57;
                MR_Word LambdaVars_58;
                MR_Word H_60;
                MR_Word SubGoal0_61;
                MR_Word Modes_62;
                MR_Word SubGoal_63;
                MR_Word GoalId_64;
                MR_Word STATE_VARIABLE_MOI_117_117;
                MR_Word STATE_VARIABLE_MOI_118_118;
                MR_Word Var_120;
                MR_Word ConsumingVarsList_157;

                Unification_45 = Unification0_40;
                A_53 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_38, (MR_Integer) 0)))) & (MR_Integer) 3);
                B_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_38, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                C_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                NonLocals_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_38, (MR_Integer) 2)));
                LambdaVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_38, (MR_Integer) 3)));
                Modes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_38, (MR_Integer) 4)));
                H_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_38, (MR_Integer) 5)));
                SubGoal0_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_38, (MR_Integer) 6)));
                GoalId_64 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(STATE_VARIABLE_GoalInfo_115_115);
                check_hlds__mode_ordering__enter_lambda_goal_3_p_0(GoalId_64, STATE_VARIABLE_MOI_116_116, &STATE_VARIABLE_MOI_117_117);
                check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_61, &SubGoal_63, STATE_VARIABLE_MOI_117_117, &STATE_VARIABLE_MOI_118_118);
                {
                  RHS_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_44, 0) = ((MR_Box) ((A_53 | ((((B_54 << (MR_Integer) 2)) | ((C_55 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), RHS_44, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), RHS_44, 2) = ((MR_Box) (NonLocals_57));
                  MR_hl_field(MR_mktag(2), RHS_44, 3) = ((MR_Box) (LambdaVars_58));
                  MR_hl_field(MR_mktag(2), RHS_44, 4) = ((MR_Box) (Modes_62));
                  MR_hl_field(MR_mktag(2), RHS_44, 5) = ((MR_Box) (H_60));
                  MR_hl_field(MR_mktag(2), RHS_44, 6) = ((MR_Box) (SubGoal_63));
                }
                check_hlds__mode_ordering__leave_lambda_goal_2_p_0(STATE_VARIABLE_MOI_118_118, STATE_VARIABLE_MOI_84);
                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (InstGraph_42));
                  MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (NonLocals_57));
                }
                ConsumingVarsList_157 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], Var_120);
                TypeCtorInfo_217_217 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                ConsumingVars_160 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(TypeCtorInfo_217_217, ConsumingVarsList_157);
                MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_217_217, VarA_37);
                NeedVisibleVars_161 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_217_217, NonLocals_57);
              }
              break;
          }
          hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(ConsumingVars_160, STATE_VARIABLE_GoalInfo_115_115, &STATE_VARIABLE_GoalInfo_127_127);
          hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(MakeVisibleVars_159, STATE_VARIABLE_GoalInfo_127_127, &STATE_VARIABLE_GoalInfo_128_128);
          hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(NeedVisibleVars_161, STATE_VARIABLE_GoalInfo_128_128, STATE_VARIABLE_GoalInfo_82);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarA_37));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_44));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_39));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_45));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_41));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_202_202;
          MR_Word PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 0)));
          MR_Word Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 2)));
          MR_Word ProdVars_24;
          MR_Word MakeVisibleVars_25;
          MR_Integer ProcId_26;
          MR_Word ConsumingVars_27;
          MR_Word NeedVisibleVars_28;
          MR_Word STATE_VARIABLE_GoalInfo_136_136;
          MR_Word STATE_VARIABLE_MOI_137_137;
          MR_Word Var_138;
          MR_Word Var_140;
          MR_Word STATE_VARIABLE_GoalInfo_141_141;
          MR_Word STATE_VARIABLE_GoalInfo_142_142;
          MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 1)));
          MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 3)));
          MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 4)));
          MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 5)));
          MR_Word Var_175;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_180;
          MR_Integer Var_176;

          check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&ProdVars_24, STATE_VARIABLE_GoalInfo_0_81, &STATE_VARIABLE_GoalInfo_136_136, STATE_VARIABLE_MOI_0_83, &STATE_VARIABLE_MOI_137_137);
          TypeCtorInfo_202_202 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          Var_138 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_202_202, Args_20);
          MakeVisibleVars_25 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_202_202, Var_138, ProdVars_24);
          check_hlds__mode_ordering__find_matching_proc_7_p_0(PredId_18, Args_20, ProdVars_24, &ProcId_26, &ConsumingVars_27, STATE_VARIABLE_MOI_137_137, STATE_VARIABLE_MOI_84);
          Var_140 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_202_202, Args_20);
          NeedVisibleVars_28 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_202_202, Var_140, ConsumingVars_27);
          hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(ConsumingVars_27, STATE_VARIABLE_GoalInfo_136_136, &STATE_VARIABLE_GoalInfo_141_141);
          hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(MakeVisibleVars_25, STATE_VARIABLE_GoalInfo_141_141, &STATE_VARIABLE_GoalInfo_142_142);
          hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(NeedVisibleVars_28, STATE_VARIABLE_GoalInfo_142_142, STATE_VARIABLE_GoalInfo_82);
          Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 0)));
          Var_176 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 1)));
          Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 2)));
          Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 3)));
          Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 4)));
          Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_7, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_175));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_26));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Var_177));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Var_178));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Var_180));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "generic_call NYI");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "pragma_foreign_code NYI");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));
              MR_Word Goals_15;

              switch (ConjType_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorInfo_200_200 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    MR_Box conv2_STATE_VARIABLE_MOI_84;

                    mercury__list__map_foldl_5_p_0(TypeCtorInfo_200_200, TypeCtorInfo_200_200, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[10], Goals0_12, &Goals_15, ((MR_Box) (STATE_VARIABLE_MOI_0_83)), &conv2_STATE_VARIABLE_MOI_84);
                    *STATE_VARIABLE_MOI_84 = ((MR_Word) conv2_STATE_VARIABLE_MOI_84);
                    check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Goals_15, STATE_VARIABLE_GoalInfo_0_81, STATE_VARIABLE_GoalInfo_82);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word TypeCtorInfo_193_193 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    MR_Word TypeCtorInfo_195_195;
                    MR_Word Goals1_13;
                    MR_Word ForwardGoalPathMap_14;
                    MR_Word ConsVars_16;
                    MR_Word NeedVars_17;
                    MR_Word STATE_VARIABLE_GoalInfo_149_149;
                    MR_Word STATE_VARIABLE_GoalInfo_150_150;
                    MR_Word Var_151;
                    MR_Word Var_152;
                    MR_Word Var_154;
                    MR_Word Var_155;
                    MR_Box conv5_STATE_VARIABLE_MOI_84;
                    MR_Word Var_170;
                    MR_Word Var_171;
                    MR_Word Var_172;
                    MR_Word Var_173;
                    MR_Word Var_174;

                    mercury__list__map_foldl_5_p_0(TypeCtorInfo_193_193, TypeCtorInfo_193_193, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[11], Goals0_12, &Goals1_13, ((MR_Box) (STATE_VARIABLE_MOI_0_83)), &conv5_STATE_VARIABLE_MOI_84);
                    *STATE_VARIABLE_MOI_84 = ((MR_Word) conv5_STATE_VARIABLE_MOI_84);
                    Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_MOI_84, (MR_Integer) 0)));
                    Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_MOI_84, (MR_Integer) 1)));
                    Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_MOI_84, (MR_Integer) 2)));
                    Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_MOI_84, (MR_Integer) 3)));
                    Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_MOI_84, (MR_Integer) 4)));
                    ForwardGoalPathMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_MOI_84, (MR_Integer) 5)));
                    check_hlds__mode_ordering__mode_order_conj_3_p_0(ForwardGoalPathMap_14, Goals1_13, &Goals_15);
                    check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Goals_15, STATE_VARIABLE_GoalInfo_0_81, &STATE_VARIABLE_GoalInfo_149_149);
                    ConsVars_16 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_149_149);
                    TypeCtorInfo_195_195 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    Var_152 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_149_149);
                    Var_151 = parse_tree__set_of_var__difference_2_f_0(TypeCtorInfo_195_195, ConsVars_16, Var_152);
                    STATE_VARIABLE_GoalInfo_150_150 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_149_149, Var_151);
                    NeedVars_17 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_150_150);
                    Var_155 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_150_150);
                    Var_154 = parse_tree__set_of_var__difference_2_f_0(TypeCtorInfo_195_195, NeedVars_17, Var_155);
                    *STATE_VARIABLE_GoalInfo_82 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_150_150, Var_154);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_11));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_15));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeCtorInfo_222_222 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word Goals0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word Goals_163;
              MR_Box conv8_STATE_VARIABLE_MOI_84;

              mercury__list__map_foldl_5_p_0(TypeCtorInfo_222_222, TypeCtorInfo_222_222, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[12], Goals0_162, &Goals_163, ((MR_Box) (STATE_VARIABLE_MOI_0_83)), &conv8_STATE_VARIABLE_MOI_84);
              *STATE_VARIABLE_MOI_84 = ((MR_Word) conv8_STATE_VARIABLE_MOI_84);
              check_hlds__mode_ordering__mode_order_disj_3_p_0(Goals_163, STATE_VARIABLE_GoalInfo_0_81, STATE_VARIABLE_GoalInfo_82);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_163));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "switch");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word Var_107;
              MR_Word SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));
              MR_Word SubGoal_167;
              MR_Word Var_187;

              check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_166, &SubGoal_167, STATE_VARIABLE_MOI_0_83, STATE_VARIABLE_MOI_84);
              Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_167, (MR_Integer) 0)));
              Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_167, (MR_Integer) 1)));
              check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(Var_107, STATE_VARIABLE_GoalInfo_0_81, STATE_VARIABLE_GoalInfo_82);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_65));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_167));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeCtorInfo_224_224;
              MR_Word Locals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));
              MR_Word Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3)));
              MR_Word Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 4)));
              MR_Word Cond_70;
              MR_Word Then_71;
              MR_Word Else_72;
              MR_Word STATE_VARIABLE_MOI_91_91;
              MR_Word STATE_VARIABLE_MOI_92_92;
              MR_Word Var_94;
              MR_Word STATE_VARIABLE_GoalInfo_95_95;
              MR_Word Var_96;
              MR_Word STATE_VARIABLE_GoalInfo_98_98;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word STATE_VARIABLE_GoalInfo_101_101;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word ConsVars_168;
              MR_Word NeedVars_169;
              MR_Word Var_188;

              check_hlds__mode_ordering__mode_order_goal_4_p_0(Cond0_67, &Cond_70, STATE_VARIABLE_MOI_0_83, &STATE_VARIABLE_MOI_91_91);
              check_hlds__mode_ordering__mode_order_goal_4_p_0(Then0_68, &Then_71, STATE_VARIABLE_MOI_91_91, &STATE_VARIABLE_MOI_92_92);
              check_hlds__mode_ordering__mode_order_goal_4_p_0(Else0_69, &Else_72, STATE_VARIABLE_MOI_92_92, STATE_VARIABLE_MOI_84);
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Then_71));
                MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Cond_70));
                MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_96));
              }
              check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Var_94, STATE_VARIABLE_GoalInfo_0_81, &STATE_VARIABLE_GoalInfo_95_95);
              ConsVars_168 = hlds__hlds_goal__consuming_vars_1_f_0(STATE_VARIABLE_GoalInfo_95_95);
              TypeCtorInfo_224_224 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              Var_100 = hlds__hlds_goal__producing_vars_1_f_0(STATE_VARIABLE_GoalInfo_95_95);
              Var_99 = parse_tree__set_of_var__difference_2_f_0(TypeCtorInfo_224_224, ConsVars_168, Var_100);
              STATE_VARIABLE_GoalInfo_98_98 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_95_95, Var_99);
              NeedVars_169 = hlds__hlds_goal__need_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_98_98);
              Var_103 = hlds__hlds_goal__make_visible_vars_1_f_0(STATE_VARIABLE_GoalInfo_98_98);
              Var_102 = parse_tree__set_of_var__difference_2_f_0(TypeCtorInfo_224_224, NeedVars_169, Var_103);
              STATE_VARIABLE_GoalInfo_101_101 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_98_98, Var_102);
              Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), Else_72, (MR_Integer) 0)));
              Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Else_72, (MR_Integer) 1)));
              check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(Var_104, STATE_VARIABLE_GoalInfo_101_101, STATE_VARIABLE_GoalInfo_82);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Locals_66));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_70));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_71));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_72));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_MOI_0_12,
  MR_Word * STATE_VARIABLE_MOI_13)
{
  {
    MR_Word GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0)));
    MR_Word GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1)));
    MR_Word GoalExpr_10;
    MR_Word GoalInfo_11;

    check_hlds__mode_ordering__mode_order_goal_2_6_p_0(GoalExpr0_8, &GoalExpr_10, GoalInfo0_9, &GoalInfo_11, STATE_VARIABLE_MOI_0_12, STATE_VARIABLE_MOI_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
    }
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
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_26, (MR_Integer) 3)));
    MR_Word CallerInstGraph_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_26, (MR_Integer) 0)));
    MR_Word PredConstraintMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_26, (MR_Integer) 4)));
    MR_Word MCInfo_18;
    MR_Word PredInfo_19;
    MR_Word CalleeInstGraphInfo_20;
    MR_Word CalleeInstGraph_21;
    MR_Word ProcTable_22;
    MR_Word ProcList_23;
    MR_Word Var_55;
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_26, (MR_Integer) 1)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_26, (MR_Integer) 2)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_26, (MR_Integer) 5)));
    MR_Box conv0_Var_55;
    MR_Word Var_17;
    MR_Integer ProcId0_24;
    MR_Word ConsumingVars0_25;

    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0, PredConstraintMap_16, ((MR_Box) (PredId_8)), &conv0_Var_55);
    Var_55 = ((MR_Word) conv0_Var_55);
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0)));
    MCInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1)));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_8, &PredInfo_19);
    hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(PredInfo_19, &CalleeInstGraphInfo_20);
    CalleeInstGraph_21 = hlds__inst_graph__interface_inst_graph_1_f_0(CalleeInstGraphInfo_20);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_19, &ProcTable_22);
    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_22, &ProcList_23);
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
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.find_matching_proc\'/7", (MR_String) "infer_modes NYI");
          return;
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.find_matching_proc\'/7", (MR_String) "unexpected mode error");
          return;
        }
      }
    }
    *STATE_VARIABLE_MOI_27 = STATE_VARIABLE_MOI_0_26;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s * env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s *) env_ptr_arg;

    *((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_LambdaHeadVar__1_31));
    ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont)((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s env;

    (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont = cont;
    (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), &(env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_LambdaHeadVar__1_31, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4, &env);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
      if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
      {
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
        }
        Var_26 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, Var_27);
        (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, Var_26);
        if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
        {
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
          }
          Var_28 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, Var_29);
          (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, Var_28);
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
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
      }
      Var_34 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, Var_35);
      (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, Var_34);
      if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
      {
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
        }
        Var_36 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, Var_37);
        (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, Var_36);
        (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
        if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
        {
          TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0(TypeCtorInfo_42_42, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
          (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
        }
      }
    }
    if ((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
      check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0) == 0)
      {
        hlds__inst_graph__corresponding_nodes_from_lists_6_p_0((env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13, (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19, &(env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22, &(env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2, env_ptr);
        (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
  }
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
      MR_Word Var_25;

      // setup for model_semi tailcalls optimized into a loop
      (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      if ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
      {
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        ProcList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
        ProcInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &(env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19);
        hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(ProcInfo_10, &Constraint0_20);
        (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Constraint0_20);
        check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(&env);
        (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
        if ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
        {
          MR_Word ConsumingVarsList_24;
          MR_Word Var_30;

          *ProcId_17 = ProcId0_9;
          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5));
            MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13));
            MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14));
            MR_hl_field(MR_mktag(0), Var_30, 5) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15));
            MR_hl_field(MR_mktag(0), Var_30, 6) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16));
            MR_hl_field(MR_mktag(0), Var_30, 7) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19));
            MR_hl_field(MR_mktag(0), Var_30, 8) = ((MR_Box) ((env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21));
          }
          ConsumingVarsList_24 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], Var_30);
          parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ConsumingVarsList_24, ConsumingVars_18);
          (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = ProcList_11;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
      return (env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded;
      break;
    }
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
  {
    MR_bool succeeded;
    MR_Word LambdaNesting_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_15, (MR_Integer) 2)));
    MR_Word AtomicProdVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_15, (MR_Integer) 1)));
    MR_Word GoalId_11;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_15, (MR_Integer) 0)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_15, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_15, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_15, (MR_Integer) 5)));
    MR_Word ProdVars0_12;
    MR_Word Var_17;
    MR_Box conv0_ProdVars0_12;

    GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
    Var_17 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, LambdaNesting_9, ((MR_Box) (GoalId_11)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[5], (MR_Word) &check_hlds__mode_ordering_scalar_common_1[6], AtomicProdVars_10, ((MR_Box) (Var_17)), &conv0_ProdVars0_12);
    if (succeeded)
    {
      ProdVars0_12 = ((MR_Word) conv0_ProdVars0_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *ProdVars_6 = ProdVars0_12;
    else
    {
      *ProdVars_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    hlds__hlds_goal__goal_info_set_producing_vars_3_p_0(*ProdVars_6, STATE_VARIABLE_GoalInfo_0_13, STATE_VARIABLE_GoalInfo_14);
    *STATE_VARIABLE_MOI_16 = STATE_VARIABLE_MOI_0_15;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__4_73;

    conv6_LambdaHeadVar__4_73 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv6_LambdaHeadVar__4_73));
    return wrapper_arg_4;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__4_60;

    conv4_LambdaHeadVar__4_60 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0(((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv4_LambdaHeadVar__4_60));
    return wrapper_arg_4;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__4_47;

    conv2_LambdaHeadVar__4_47 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_47));
    return wrapper_arg_4;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_38;

    conv0_LambdaHeadVar__3_38 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__431__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_38));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word Goals0_5,
  MR_Word * Goals_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Word TypeCtorInfo_134_134;
    MR_Word TypeInfo_135_135;
    MR_Word TypeInfo_141_141;
    MR_Word GoalMap_7;
    MR_Word ProdMap_17;
    MR_Word MakeVisMap_22;
    MR_Word Graph_25;
    MR_Word Var_35;
    MR_Word Var_42;
    MR_Word Var_55;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_99;
    MR_Box conv1_GoalMap_7;
    MR_Box conv3_ProdMap_17;
    MR_Box conv5_MakeVisMap_22;
    MR_Box conv7_Graph_25;
    MR_Word TSort_34;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ForwardGoalPathMap_4));
    }
    TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_42 = mercury__map__init_0_f_0(TypeCtorInfo_134_134, TypeCtorInfo_128_128);
    conv1_GoalMap_7 = mercury__list__foldl_3_f_0(TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[0], Var_35, Goals0_5, ((MR_Box) (Var_42)));
    GoalMap_7 = ((MR_Word) conv1_GoalMap_7);
    TypeInfo_135_135 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1];
    TypeInfo_141_141 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[3];
    Var_55 = mercury__map__init_0_f_0(TypeInfo_141_141, TypeCtorInfo_134_134);
    conv3_ProdMap_17 = mercury__map__foldl_3_f_0(TypeCtorInfo_134_134, TypeCtorInfo_128_128, TypeInfo_135_135, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[8], GoalMap_7, ((MR_Box) (Var_55)));
    ProdMap_17 = ((MR_Word) conv3_ProdMap_17);
    Var_68 = mercury__map__init_0_f_0(TypeInfo_141_141, TypeCtorInfo_134_134);
    conv5_MakeVisMap_22 = mercury__map__foldl_3_f_0(TypeCtorInfo_134_134, TypeCtorInfo_128_128, TypeInfo_135_135, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[9], GoalMap_7, ((MR_Box) (Var_68)));
    MakeVisMap_22 = ((MR_Word) conv5_MakeVisMap_22);
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_4));
      MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ProdMap_17));
      MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (MakeVisMap_22));
    }
    Var_99 = mercury__digraph__init_0_f_0(TypeCtorInfo_134_134);
    conv7_Graph_25 = mercury__map__foldl_3_f_0(TypeCtorInfo_134_134, TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_ordering_scalar_common_1[4], Var_69, GoalMap_7, ((MR_Box) (Var_99)));
    Graph_25 = ((MR_Word) conv7_Graph_25);
    succeeded = mercury__digraph__tsort_2_p_0(TypeCtorInfo_134_134, Graph_25, &TSort_34);
    if (succeeded)
      *Goals_6 = mercury__map__apply_to_list_2_f_0(TypeCtorInfo_134_134, TypeCtorInfo_128_128, TSort_34, GoalMap_7);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "tsort failed");
        return;
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
  MR_Word GI_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * STATE_VARIABLE_GoalInfo_7)
{
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
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_GoalInfo_13;

    check_hlds__mode_ordering__union_mode_vars_set_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_GoalInfo_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GoalInfo_13));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
  MR_Word Goals_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * STATE_VARIABLE_GoalInfo_7)
{
  {
    MR_Box conv1_STATE_VARIABLE_GoalInfo_7;

    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[7], Goals_4, ((MR_Box) (STATE_VARIABLE_GoalInfo_0_6)), &conv1_STATE_VARIABLE_GoalInfo_7);
    *STATE_VARIABLE_GoalInfo_7 = ((MR_Word) conv1_STATE_VARIABLE_GoalInfo_7);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
  MR_Word GI_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word TypeCtorInfo_24_24;
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
    TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    Var_14 = hlds__hlds_goal__producing_vars_1_f_0(GI_4);
    Var_13 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_24_24, ProdVars0_6, Var_14);
    STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_10, Var_13);
    Var_17 = hlds__hlds_goal__consuming_vars_1_f_0(GI_4);
    Var_16 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_24_24, ConsumVars0_7, Var_17);
    STATE_VARIABLE_GoalInfo_15_15 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_12_12, Var_16);
    Var_20 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_4);
    Var_19 = parse_tree__set_of_var__intersect_2_f_0(TypeCtorInfo_24_24, MakeVisibleVars0_8, Var_20);
    STATE_VARIABLE_GoalInfo_18_18 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_15_15, Var_19);
    Var_23 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_4);
    Var_22 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_24_24, NeedVisibleVars0_9, Var_23);
    *STATE_VARIABLE_GoalInfo_11 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_18_18, Var_22);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_GoalInfo_8;

    check_hlds__mode_ordering__mode_order_disj_2_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_GoalInfo_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GoalInfo_8));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalInfo_0_2,
  MR_Word * STATE_VARIABLE_GoalInfo_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *STATE_VARIABLE_GoalInfo_3 = STATE_VARIABLE_GoalInfo_0_2;
  else
  {
    MR_Word GI_8;
    MR_Word Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word STATE_VARIABLE_GoalInfo_14_14;
    MR_Word STATE_VARIABLE_GoalInfo_8_26;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_GoalInfo_10_28;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_GoalInfo_12_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
    MR_Box conv1_STATE_VARIABLE_GoalInfo_3;

    GI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
    Var_27 = hlds__hlds_goal__producing_vars_1_f_0(GI_8);
    STATE_VARIABLE_GoalInfo_8_26 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_0_2, Var_27);
    Var_29 = hlds__hlds_goal__consuming_vars_1_f_0(GI_8);
    STATE_VARIABLE_GoalInfo_10_28 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_8_26, Var_29);
    Var_31 = hlds__hlds_goal__make_visible_vars_1_f_0(GI_8);
    STATE_VARIABLE_GoalInfo_12_30 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_10_28, Var_31);
    Var_33 = hlds__hlds_goal__need_visible_vars_1_f_0(GI_8);
    STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_GoalInfo_12_30, Var_33);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[6], Goals_9, ((MR_Box) (STATE_VARIABLE_GoalInfo_14_14)), &conv1_STATE_VARIABLE_GoalInfo_3);
    *STATE_VARIABLE_GoalInfo_3 = ((MR_Word) conv1_STATE_VARIABLE_GoalInfo_3);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
  MR_Word STATE_VARIABLE_MOI_0_7,
  MR_Word * STATE_VARIABLE_MOI_8)
{
  {
    MR_Word LambdaNesting0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
    MR_Word LambdaNesting_6;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
    MR_Word Var_5;
    MR_Box conv0_Var_5;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_17;

    mercury__stack__det_pop_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, &conv0_Var_5, LambdaNesting0_4, &LambdaNesting_6);
    Var_5 = ((MR_Word) conv0_Var_5);
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MOI_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LambdaNesting_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
  MR_Word GoalId_4,
  MR_Word STATE_VARIABLE_MOI_0_7,
  MR_Word * STATE_VARIABLE_MOI_8)
{
  {
    MR_Word LambdaNesting0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_18;

    Var_10 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, LambdaNesting0_6, ((MR_Box) (GoalId_4)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MOI_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_PredInfo_23;

    check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_PredInfo_23);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_PredInfo_23));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_PredInfo_18;

    check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_PredInfo_18);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredInfo_18));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
  MR_Word PredConstraintMap_6,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word TypeInfo_23_23 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[2];
    MR_Word RequestedProcsMap0_10;
    MR_Word PredInfo0_11;
    MR_Word ModeConstraint0_12;
    MR_Word MCI_13;
    MR_Word PredInfo_15;
    MR_Word Var_38;
    MR_Box conv0_Var_38;

    RequestedProcsMap0_10 = mercury__map__init_0_f_0(TypeCtorInfo_22_22, TypeInfo_23_23);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_17, PredId_8, &PredInfo0_11);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0, PredConstraintMap_6, ((MR_Box) (PredId_8)), &conv0_Var_38);
    Var_38 = ((MR_Word) conv0_Var_38);
    ModeConstraint0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0)));
    MCI_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1)));
    succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(PredInfo0_11);
    if (succeeded)
    {
      MR_Word RequestedProcs_14;
      MR_Box conv1_RequestedProcs_14;

      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_22_22, TypeInfo_23_23, RequestedProcsMap0_10, ((MR_Box) (PredId_8)), &conv1_RequestedProcs_14);
      if (succeeded)
      {
        RequestedProcs_14 = ((MR_Word) conv1_RequestedProcs_14);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_19;
        MR_Box conv3_PredInfo_15;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_17));
          MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (PredConstraintMap_6));
          MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (PredId_8));
          MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) (MCI_13));
          MR_hl_field(MR_mktag(0), Var_19, 7) = ((MR_Box) (ModeConstraint0_12));
        }
        mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, Var_19, RequestedProcs_14, ((MR_Box) (PredInfo0_11)), &conv3_PredInfo_15);
        PredInfo_15 = ((MR_Word) conv3_PredInfo_15);
      }
      else
        PredInfo_15 = PredInfo0_11;
    }
    else
    {
      MR_Word ProcIds_16;
      MR_Word Var_20;
      MR_Box conv5_PredInfo_15;

      ProcIds_16 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo0_11);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_17));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (PredConstraintMap_6));
        MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (PredId_8));
        MR_hl_field(MR_mktag(0), Var_20, 6) = ((MR_Box) (MCI_13));
        MR_hl_field(MR_mktag(0), Var_20, 7) = ((MR_Box) (ModeConstraint0_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, Var_20, ProcIds_16, ((MR_Box) (PredInfo0_11)), &conv5_PredInfo_15);
      PredInfo_15 = ((MR_Word) conv5_PredInfo_15);
    }
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_15, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

    check_hlds__mode_ordering__mode_ordering_pred_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
  MR_Word PredConstraintMap_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word STATE_VARIABLE_ModuleInfo_10_10;
    MR_Word Var_11;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0(SCC_6, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_10_10);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (PredConstraintMap_5));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (SCC_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_11, SCC_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_10_10)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_9);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

    check_hlds__mode_ordering__mode_ordering_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0(
  MR_Word PredConstraintMap_7,
  MR_Word SCCs_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word Var_15;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_12;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (PredConstraintMap_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_15, SCCs_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv1_STATE_VARIABLE_ModuleInfo_12);
    *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_12);
  }
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
