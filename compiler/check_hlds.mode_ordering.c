/*
** Automatically generated from `mode_ordering.m'
** by the Mercury compiler,
** version rotd-2024-06-06
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
#include "hlds.hlds_proc_util.mih"
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
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__MCInfo_16;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Constraint_21;
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__cont;
  void * check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Var_32;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Var_33;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Y_38;
};

struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__ProdVars_46;
  MR_Word * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__LambdaHeadVar__1_112;
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__cont;
  void * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__VarC_52;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__VarD_53;
};

struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s {
  MR_Box * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1;
  MR_Cont check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont;
  void * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr;
  MR_Word check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_112;
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
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0(
  MR_Word Args_13,
  MR_Word CallerInstGraph_14,
  MR_Word CalleeInstGraph_15,
  MR_Word MCInfo_16,
  MR_Word HeadVars_19,
  MR_Word Constraint_21,
  MR_Word * LambdaHeadVar__1_31,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0(
  MR_Word ProdMap_25,
  MR_Word MakeVisMap_31,
  MR_Integer LambdaHeadVar__1_77,
  MR_Word LambdaHeadVar__2_78,
  MR_Word LambdaHeadVar__3_79,
  MR_Word * LambdaHeadVar__4_80);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__528__1_5_p_0(
  MR_Word MakeVisMap_31,
  MR_Word Key0_33,
  MR_Word LambdaHeadVar__1_97,
  MR_Word LambdaHeadVar__2_98,
  MR_Word * LambdaHeadVar__3_99);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__519__1_5_p_0(
  MR_Word ProdMap_25,
  MR_Word Key0_33,
  MR_Word LambdaHeadVar__1_87,
  MR_Word LambdaHeadVar__2_88,
  MR_Word * LambdaHeadVar__3_89);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__500__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__500__1_4_p_0(
  MR_Integer LambdaHeadVar__1_65,
  MR_Word LambdaHeadVar__2_66,
  MR_Word LambdaHeadVar__3_67,
  MR_Word * LambdaHeadVar__4_68);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__504__1_4_p_0(
  MR_Integer LambdaHeadVar__1_65,
  MR_Word LambdaHeadVar__1_72,
  MR_Word LambdaHeadVar__2_73,
  MR_Word * LambdaHeadVar__3_74);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__490__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__490__1_4_p_0(
  MR_Integer LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word LambdaHeadVar__3_55,
  MR_Word * LambdaHeadVar__4_56);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__493__1_4_p_0(
  MR_Integer LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__1_60,
  MR_Word LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__474__1_4_p_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word LambdaHeadVar__1_46,
  MR_Word LambdaHeadVar__2_47,
  MR_Word * LambdaHeadVar__3_48);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0(
  MR_Word VarA_41,
  MR_Word ProdVars_46,
  MR_Word InstGraph_47,
  MR_Word VarB_48,
  MR_Word * LambdaHeadVar__1_112,
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
  MR_Word STATE_VARIABLE_GoalInfo_0_20,
  MR_Word * STATE_VARIABLE_GoalInfo_21);

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
  MR_Word STATE_VARIABLE_GoalInfo_0_84,
  MR_Word * STATE_VARIABLE_GoalInfo_85,
  MR_Word STATE_VARIABLE_MOI_0_86,
  MR_Word * STATE_VARIABLE_MOI_87);

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

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word Goals0_5,
  MR_Word * Goals_6);

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
  MR_Word STATE_VARIABLE_GoalInfo_0_18,
  MR_Word * STATE_VARIABLE_GoalInfo_19);

static void MR_CALL 
check_hlds__mode_ordering__goal_info_set_need_visible_vars_3_p_0(
  MR_Word NeedVisibleVars_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14);

static void MR_CALL 
check_hlds__mode_ordering__goal_info_set_make_visible_vars_3_p_0(
  MR_Word MakeVisibleVars_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14);

static void MR_CALL 
check_hlds__mode_ordering__goal_info_set_consuming_vars_3_p_0(
  MR_Word ConsumingVars_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14);

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
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
  MR_Word GI_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11);

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
    ((MR_Box) (&check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Var_33 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Y_38));
  }
  (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Var_32 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__MCInfo_16, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Var_33);
  (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Constraint_21, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Var_32);
  if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__succeeded)
    ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__cont)((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0(
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
  struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0_s env;

  (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__MCInfo_16 = MCInfo_16;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Constraint_21 = Constraint_21;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__cont = cont;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(CallerInstGraph_14, CalleeInstGraph_15, Args_13, HeadVars_19, LambdaHeadVar__1_31, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_env_0__Y_38, check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0_1, &env);
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_99;

  check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__528__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_99);
  *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_99));
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_89;

  check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__519__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_89);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_89));
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0(
  MR_Word ProdMap_25,
  MR_Word MakeVisMap_31,
  MR_Integer LambdaHeadVar__1_77,
  MR_Word LambdaHeadVar__2_78,
  MR_Word LambdaHeadVar__3_79,
  MR_Word * LambdaHeadVar__4_80)
{
  MR_Word Key0_33;
  MR_Word ConsumingVars_34;
  MR_Word NeedVisVars_35;
  MR_Word STATE_VARIABLE_R_83_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word STATE_VARIABLE_R_86_86;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word GI_130 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_78, (MR_Integer) 1))));
  MR_Word MMCI_163;
  MR_Word MMCI_170;
  MR_Box conv1_STATE_VARIABLE_R_86_86;
  MR_Box conv3_LambdaHeadVar__4_80;

  mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LambdaHeadVar__1_77)), &Key0_33, LambdaHeadVar__3_79, &STATE_VARIABLE_R_83_83);
  MMCI_163 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_130);
  if ((MMCI_163 == (MR_Word) ((MR_Unsigned) 0U)))
    ConsumingVars_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_164 = ((MR_Word) ((MR_hl_field(1, MMCI_163, (MR_Integer) 0))));

    ConsumingVars_34 = ((MR_Word) ((MR_hl_field(0, MCI_164, (MR_Integer) 2))));
  }
  MMCI_170 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_130);
  if ((MMCI_170 == (MR_Word) ((MR_Unsigned) 0U)))
    NeedVisVars_35 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_171 = ((MR_Word) ((MR_hl_field(1, MMCI_170, (MR_Integer) 0))));

    NeedVisVars_35 = ((MR_Word) ((MR_hl_field(0, MCI_171, (MR_Integer) 4))));
  }
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0_1));
    MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_84, 3) = ((MR_Box) (ProdMap_25));
    MR_hl_field(0, Var_84, 4) = ((MR_Box) (Key0_33));
  }
  Var_85 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_34);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[4]), Var_84, Var_85, ((MR_Box) (STATE_VARIABLE_R_83_83)), &conv1_STATE_VARIABLE_R_86_86);
  STATE_VARIABLE_R_86_86 = ((MR_Word) (conv1_STATE_VARIABLE_R_86_86));
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0_2));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_94, 3) = ((MR_Box) (MakeVisMap_31));
    MR_hl_field(0, Var_94, 4) = ((MR_Box) (Key0_33));
  }
  Var_95 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisVars_35);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[4]), Var_94, Var_95, ((MR_Box) (STATE_VARIABLE_R_86_86)), &conv3_LambdaHeadVar__4_80);
  *LambdaHeadVar__4_80 = ((MR_Word) (conv3_LambdaHeadVar__4_80));
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__528__1_5_p_0(
  MR_Word MakeVisMap_31,
  MR_Word Key0_33,
  MR_Word LambdaHeadVar__1_97,
  MR_Word LambdaHeadVar__2_98,
  MR_Word * LambdaHeadVar__3_99)
{
  MR_bool succeeded;
  MR_Integer Index2_40;
  MR_Box conv0_Index2_40;

  succeeded = mercury__map__search_2_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MakeVisMap_31, ((MR_Box) (LambdaHeadVar__1_97)), &conv0_Index2_40);
  if (succeeded)
  {
    Index2_40 = ((MR_Integer) (conv0_Index2_40));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Key2_41;
    MR_Word STATE_VARIABLE_R2_102_102;

    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Index2_40)), &Key2_41, LambdaHeadVar__2_98, &STATE_VARIABLE_R2_102_102);
    mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Key2_41, Key0_33, STATE_VARIABLE_R2_102_102, LambdaHeadVar__3_99);
  }
  else
    *LambdaHeadVar__3_99 = LambdaHeadVar__2_98;
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__519__1_5_p_0(
  MR_Word ProdMap_25,
  MR_Word Key0_33,
  MR_Word LambdaHeadVar__1_87,
  MR_Word LambdaHeadVar__2_88,
  MR_Word * LambdaHeadVar__3_89)
{
  MR_bool succeeded;
  MR_Integer Index1_37;
  MR_Box conv0_Index1_37;

  succeeded = mercury__map__search_2_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProdMap_25, ((MR_Box) (LambdaHeadVar__1_87)), &conv0_Index1_37);
  if (succeeded)
  {
    Index1_37 = ((MR_Integer) (conv0_Index1_37));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Key1_38;
    MR_Word STATE_VARIABLE_R1_92_92;

    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Index1_37)), &Key1_38, LambdaHeadVar__2_88, &STATE_VARIABLE_R1_92_92);
    mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Key1_38, Key0_33, STATE_VARIABLE_R1_92_92, LambdaHeadVar__3_89);
  }
  else
    *LambdaHeadVar__3_89 = LambdaHeadVar__2_88;
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__500__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_74;

  check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__504__1_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_74);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_74));
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__500__1_4_p_0(
  MR_Integer LambdaHeadVar__1_65,
  MR_Word LambdaHeadVar__2_66,
  MR_Word LambdaHeadVar__3_67,
  MR_Word * LambdaHeadVar__4_68)
{
  MR_Word MakeVisVars_28;
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_66, (MR_Integer) 1))));
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word MMCI_156;
  MR_Box conv1_LambdaHeadVar__4_68;

  MMCI_156 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(Var_69);
  if ((MMCI_156 == (MR_Word) ((MR_Unsigned) 0U)))
    MakeVisVars_28 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_157 = ((MR_Word) ((MR_hl_field(1, MMCI_156, (MR_Integer) 0))));

    MakeVisVars_28 = ((MR_Word) ((MR_hl_field(0, MCI_157, (MR_Integer) 3))));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__500__1_4_p_0_1));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (LambdaHeadVar__1_65));
  }
  Var_71 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisVars_28);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[1]), Var_70, Var_71, ((MR_Box) (LambdaHeadVar__3_67)), &conv1_LambdaHeadVar__4_68);
  *LambdaHeadVar__4_68 = ((MR_Word) (conv1_LambdaHeadVar__4_68));
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__504__1_4_p_0(
  MR_Integer LambdaHeadVar__1_65,
  MR_Word LambdaHeadVar__1_72,
  MR_Word LambdaHeadVar__2_73,
  MR_Word * LambdaHeadVar__3_74)
{
  mercury__map__set_4_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LambdaHeadVar__1_72)), ((MR_Box) (LambdaHeadVar__1_65)), LambdaHeadVar__2_73, LambdaHeadVar__3_74);
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__490__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_62;

  check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__493__1_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_62);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_62));
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__490__1_4_p_0(
  MR_Integer LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54,
  MR_Word LambdaHeadVar__3_55,
  MR_Word * LambdaHeadVar__4_56)
{
  MR_Word ProducingVars_21;
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_54, (MR_Integer) 1))));
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word MMCI_149;
  MR_Box conv1_LambdaHeadVar__4_56;

  MMCI_149 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(Var_57);
  if ((MMCI_149 == (MR_Word) ((MR_Unsigned) 0U)))
    ProducingVars_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_150 = ((MR_Word) ((MR_hl_field(1, MMCI_149, (MR_Integer) 0))));

    ProducingVars_21 = ((MR_Word) ((MR_hl_field(0, MCI_150, (MR_Integer) 1))));
  }
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__490__1_4_p_0_1));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (LambdaHeadVar__1_53));
  }
  Var_59 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_21);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[1]), Var_58, Var_59, ((MR_Box) (LambdaHeadVar__3_55)), &conv1_LambdaHeadVar__4_56);
  *LambdaHeadVar__4_56 = ((MR_Word) (conv1_LambdaHeadVar__4_56));
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__493__1_4_p_0(
  MR_Integer LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__1_60,
  MR_Word LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62)
{
  mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LambdaHeadVar__1_60)), ((MR_Box) (LambdaHeadVar__1_53)), LambdaHeadVar__2_61, LambdaHeadVar__3_62);
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__474__1_4_p_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word LambdaHeadVar__1_46,
  MR_Word LambdaHeadVar__2_47,
  MR_Word * LambdaHeadVar__3_48)
{
  MR_bool succeeded;
  MR_Word GI_11 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));
  MR_Word GoalId_12;
  MR_Word GoalPath_13;
  MR_Integer Index_16;
  MR_Box conv0_GoalPath_13;
  MR_Integer Index0_15;
  MR_Word LastStep_14;

  GoalId_12 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GI_11);
  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), ForwardGoalPathMap_4, ((MR_Box) (GoalId_12)), &conv0_GoalPath_13);
  GoalPath_13 = ((MR_Word) (conv0_GoalPath_13));
  succeeded = mdbcomp__goal_path__goal_path_get_last_2_p_0(GoalPath_13, &LastStep_14);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) LastStep_14)) == (MR_Integer) 1);
    if (succeeded)
      Index0_15 = ((MR_Integer) ((MR_hl_field(1, LastStep_14, (MR_Integer) 0))));
  }
  if (succeeded)
    Index_16 = Index0_15;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "goal_path error");
      return;
    }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Index_16, ((MR_Box) (LambdaHeadVar__1_46)), LambdaHeadVar__2_47, LambdaHeadVar__3_48);
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0_s * env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__ProdVars_46, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__VarC_52);
    if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__succeeded)
    {
      *((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__LambdaHeadVar__1_112) = (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__VarD_53;
      (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__succeeded = MR_TRUE;
    }
    else
    {
      (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__ProdVars_46, (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__VarD_53);
      if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__succeeded)
      {
        *((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__LambdaHeadVar__1_112) = (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__VarC_52;
        (env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__succeeded = MR_TRUE;
      }
    }
    if ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__cont)((env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0(
  MR_Word VarA_41,
  MR_Word ProdVars_46,
  MR_Word InstGraph_47,
  MR_Word VarB_48,
  MR_Word * LambdaHeadVar__1_112,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0_s env;

  (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__ProdVars_46 = ProdVars_46;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__LambdaHeadVar__1_112 = LambdaHeadVar__1_112;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__cont = cont;
  (env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__cont_env_ptr = cont_env_ptr;
  hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(InstGraph_47, VarA_41, VarB_48, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__VarC_52, &(env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_env_0__VarD_53, check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0_1, &env);
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
  MR_Word STATE_VARIABLE_GoalInfo_0_20,
  MR_Word * STATE_VARIABLE_GoalInfo_21)
{
  MR_Word GI_7 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
  MR_Word ProducingVars0_8;
  MR_Word ConsumingVars0_9;
  MR_Word MakeVisibleVars0_10;
  MR_Word NeedVisibleVars0_11;
  MR_Word GI_ProducingVars0_12;
  MR_Word GI_ConsumingVars0_13;
  MR_Word GI_MakeVisibleVars0_14;
  MR_Word GI_NeedVisibleVars0_15;
  MR_Word ProducingVars_16;
  MR_Word ConsumingVars_17;
  MR_Word MakeVisibleVars_18;
  MR_Word NeedVisibleVars_19;
  MR_Word STATE_VARIABLE_GoalInfo_22_22;
  MR_Word STATE_VARIABLE_GoalInfo_23_23;
  MR_Word STATE_VARIABLE_GoalInfo_24_24;
  MR_Word MMCI_26;
  MR_Word MMCI_33;
  MR_Word MMCI_40;
  MR_Word MMCI_47;
  MR_Word MMCI_54;
  MR_Word MMCI_61;
  MR_Word MMCI_68;
  MR_Word MMCI_75;
  MR_Word MMCI0_82;
  MR_Word MCI_84;
  MR_Word Var_89;

  MMCI_26 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_20);
  if ((MMCI_26 == (MR_Word) ((MR_Unsigned) 0U)))
    ProducingVars0_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_27 = ((MR_Word) ((MR_hl_field(1, MMCI_26, (MR_Integer) 0))));

    ProducingVars0_8 = ((MR_Word) ((MR_hl_field(0, MCI_27, (MR_Integer) 1))));
  }
  MMCI_33 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_20);
  if ((MMCI_33 == (MR_Word) ((MR_Unsigned) 0U)))
    ConsumingVars0_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_34 = ((MR_Word) ((MR_hl_field(1, MMCI_33, (MR_Integer) 0))));

    ConsumingVars0_9 = ((MR_Word) ((MR_hl_field(0, MCI_34, (MR_Integer) 2))));
  }
  MMCI_40 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_20);
  if ((MMCI_40 == (MR_Word) ((MR_Unsigned) 0U)))
    MakeVisibleVars0_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_41 = ((MR_Word) ((MR_hl_field(1, MMCI_40, (MR_Integer) 0))));

    MakeVisibleVars0_10 = ((MR_Word) ((MR_hl_field(0, MCI_41, (MR_Integer) 3))));
  }
  MMCI_47 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_20);
  if ((MMCI_47 == (MR_Word) ((MR_Unsigned) 0U)))
    NeedVisibleVars0_11 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_48 = ((MR_Word) ((MR_hl_field(1, MMCI_47, (MR_Integer) 0))));

    NeedVisibleVars0_11 = ((MR_Word) ((MR_hl_field(0, MCI_48, (MR_Integer) 4))));
  }
  MMCI_54 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_7);
  if ((MMCI_54 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_ProducingVars0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_55 = ((MR_Word) ((MR_hl_field(1, MMCI_54, (MR_Integer) 0))));

    GI_ProducingVars0_12 = ((MR_Word) ((MR_hl_field(0, MCI_55, (MR_Integer) 1))));
  }
  MMCI_61 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_7);
  if ((MMCI_61 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_ConsumingVars0_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_62 = ((MR_Word) ((MR_hl_field(1, MMCI_61, (MR_Integer) 0))));

    GI_ConsumingVars0_13 = ((MR_Word) ((MR_hl_field(0, MCI_62, (MR_Integer) 2))));
  }
  MMCI_68 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_7);
  if ((MMCI_68 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_MakeVisibleVars0_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_69 = ((MR_Word) ((MR_hl_field(1, MMCI_68, (MR_Integer) 0))));

    GI_MakeVisibleVars0_14 = ((MR_Word) ((MR_hl_field(0, MCI_69, (MR_Integer) 3))));
  }
  MMCI_75 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_7);
  if ((MMCI_75 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_NeedVisibleVars0_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_76 = ((MR_Word) ((MR_hl_field(1, MMCI_75, (MR_Integer) 0))));

    GI_NeedVisibleVars0_15 = ((MR_Word) ((MR_hl_field(0, MCI_76, (MR_Integer) 4))));
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars0_8, GI_ProducingVars0_12, &ProducingVars_16);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars0_9, GI_ConsumingVars0_13, &ConsumingVars_17);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars0_10, GI_MakeVisibleVars0_14, &MakeVisibleVars_18);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars0_11, GI_NeedVisibleVars0_15, &NeedVisibleVars_19);
  MMCI0_82 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_20);
  if ((MMCI0_82 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_85;
    MR_Word ConsumingVars_86;
    MR_Word MakeVisibleVars_87;
    MR_Word NeedVisibleVars_88;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_85);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_86);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_87);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_88);
    {
      MCI_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_84, 0) = ((MR_Box) (OccurringVars_85));
      MR_hl_field(0, MCI_84, 1) = ((MR_Box) (ProducingVars_16));
      MR_hl_field(0, MCI_84, 2) = ((MR_Box) (ConsumingVars_86));
      MR_hl_field(0, MCI_84, 3) = ((MR_Box) (MakeVisibleVars_87));
      MR_hl_field(0, MCI_84, 4) = ((MR_Box) (NeedVisibleVars_88));
    }
  }
  else
  {
    MR_Word MCI0_83 = ((MR_Word) ((MR_hl_field(1, MMCI0_82, (MR_Integer) 0))));
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, MCI0_83, (MR_Integer) 0))));
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, MCI0_83, (MR_Integer) 2))));
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, MCI0_83, (MR_Integer) 3))));
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, MCI0_83, (MR_Integer) 4))));

    {
      MCI_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_84, 0) = ((MR_Box) (Var_90));
      MR_hl_field(0, MCI_84, 1) = ((MR_Box) (ProducingVars_16));
      MR_hl_field(0, MCI_84, 2) = ((MR_Box) (Var_92));
      MR_hl_field(0, MCI_84, 3) = ((MR_Box) (Var_93));
      MR_hl_field(0, MCI_84, 4) = ((MR_Box) (Var_94));
    }
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (MCI_84));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_89, STATE_VARIABLE_GoalInfo_0_20, &STATE_VARIABLE_GoalInfo_22_22);
  check_hlds__mode_ordering__goal_info_set_consuming_vars_3_p_0(ConsumingVars_17, STATE_VARIABLE_GoalInfo_22_22, &STATE_VARIABLE_GoalInfo_23_23);
  check_hlds__mode_ordering__goal_info_set_make_visible_vars_3_p_0(MakeVisibleVars_18, STATE_VARIABLE_GoalInfo_23_23, &STATE_VARIABLE_GoalInfo_24_24);
  check_hlds__mode_ordering__goal_info_set_need_visible_vars_3_p_0(NeedVisibleVars_19, STATE_VARIABLE_GoalInfo_24_24, STATE_VARIABLE_GoalInfo_21);
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalInfo_0_7,
  MR_Word * STATE_VARIABLE_GoalInfo_8)
{
  MR_Word GI_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(GI_5, STATE_VARIABLE_GoalInfo_0_7, STATE_VARIABLE_GoalInfo_8);
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
  hlds__hlds_proc_util__proc_info_head_modes_constraint_2_p_0(ProcInfo0_16, &ModeDeclConstraint_17);
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

  *((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_112));
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

    check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__272__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &(env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_112, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6, &env);
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
  MR_Word STATE_VARIABLE_GoalInfo_0_84,
  MR_Word * STATE_VARIABLE_GoalInfo_85,
  MR_Word STATE_VARIABLE_MOI_0_86,
  MR_Word * STATE_VARIABLE_MOI_87)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_125;
        MR_Word SubGoal0_153 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_154;

        check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_153, &SubGoal_154, STATE_VARIABLE_MOI_0_86, STATE_VARIABLE_MOI_87);
        Var_125 = ((MR_Word) ((MR_hl_field(0, SubGoal_154, (MR_Integer) 1))));
        check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(Var_125, STATE_VARIABLE_GoalInfo_0_84, STATE_VARIABLE_GoalInfo_85);
        *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_154));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word VarA_41 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 0))));
        MR_Word RHS0_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 1))));
        MR_Word UnifyMode_43 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 2))));
        MR_Word Unification0_44 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 3))));
        MR_Word Context_45 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 4))));
        MR_Word ProdVars_46;
        MR_Word InstGraph_47;
        MR_Word RHS_49;
        MR_Word Unification_50;
        MR_Word STATE_VARIABLE_GoalInfo_106_106;
        MR_Word STATE_VARIABLE_MOI_107_107;
        MR_Word STATE_VARIABLE_GoalInfo_118_118;
        MR_Word STATE_VARIABLE_GoalInfo_119_119;
        MR_Word ConsumingVars_148;
        MR_Word MakeVisibleVars_149;
        MR_Word NeedVisibleVars_150;

        check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&ProdVars_46, STATE_VARIABLE_GoalInfo_0_84, &STATE_VARIABLE_GoalInfo_106_106, STATE_VARIABLE_MOI_0_86, &STATE_VARIABLE_MOI_107_107);
        InstGraph_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MOI_107_107, (MR_Integer) 0))));
        switch (MR_tag((MR_Word) RHS0_42)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarB_48 = ((MR_Word) ((MR_hl_field(0, RHS0_42, (MR_Integer) 0))));
              MR_Word ConsumingVarsList_54;
              MR_Word Var_111;

              RHS_49 = RHS0_42;
              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars_46, VarA_41);
              if (succeeded)
              {
                {
                  Unification_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Unification_50, 0) = ((MR_Box) (VarA_41));
                  MR_hl_field(2, Unification_50, 1) = ((MR_Box) (VarB_48));
                }
                parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_41, &MakeVisibleVars_149);
                parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarB_48, &NeedVisibleVars_150);
              }
              else
              {
                succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars_46, VarB_48);
                if (succeeded)
                {
                  {
                    Unification_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Unification_50, 0) = ((MR_Box) (VarB_48));
                    MR_hl_field(2, Unification_50, 1) = ((MR_Box) (VarA_41));
                  }
                  parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_41, &MakeVisibleVars_149);
                  parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarB_48, &NeedVisibleVars_150);
                }
                else
                {
                  MR_Word Var_108;
                  MR_Word Var_109;

                  {
                    Unification_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Unification_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Unification_50, 1) = ((MR_Box) (VarA_41));
                    MR_hl_field(3, Unification_50, 2) = ((MR_Box) (VarB_48));
                  }
                  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_149);
                  {
                    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_109, 0) = ((MR_Box) (VarB_48));
                    MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_108, 0) = ((MR_Box) (VarA_41));
                    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
                  }
                  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_108, &NeedVisibleVars_150);
                }
              }
              {
                Var_111 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_111, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[1]));
                MR_hl_field(0, Var_111, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7));
                MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_111, 3) = ((MR_Box) (VarA_41));
                MR_hl_field(0, Var_111, 4) = ((MR_Box) (ProdVars_46));
                MR_hl_field(0, Var_111, 5) = ((MR_Box) (InstGraph_47));
                MR_hl_field(0, Var_111, 6) = ((MR_Box) (VarB_48));
              }
              mercury__solutions__solutions_2_p_1((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), Var_111, &ConsumingVarsList_54);
              parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVarsList_54, &ConsumingVars_148);
              *STATE_VARIABLE_MOI_87 = STATE_VARIABLE_MOI_107_107;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgVars_57 = ((MR_Word) ((MR_hl_field(1, RHS0_42, (MR_Integer) 2))));

              RHS_49 = RHS0_42;
              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProdVars_46, VarA_41);
              if (succeeded)
              {
                MR_Word Var_113;

                Unification_50 = Unification0_44;
                parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_148);
                {
                  Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_113, 0) = ((MR_Box) (VarA_41));
                  MR_hl_field(1, Var_113, 1) = ((MR_Box) (ArgVars_57));
                }
                parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_113, &MakeVisibleVars_149);
                parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_150);
              }
              else
              {
                Unification_50 = Unification0_44;
                parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_41, &ConsumingVars_148);
                parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_57, &MakeVisibleVars_149);
                parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_41, &NeedVisibleVars_150);
              }
              *STATE_VARIABLE_MOI_87 = STATE_VARIABLE_MOI_107_107;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word NonLocals_61;
              MR_Word F_63;
              MR_Word SubGoal0_64;
              MR_Word ArgVarsModes_65;
              MR_Word SubGoal_66;
              MR_Word GoalId_67;
              MR_Word STATE_VARIABLE_MOI_114_114;
              MR_Word STATE_VARIABLE_MOI_115_115;
              MR_Word Var_117;
              MR_Word ConsumingVarsList_147;
              MR_Unsigned packed_word_4;

              Unification_50 = Unification0_44;
              packed_word_4 = (MR_Unsigned) ((MR_hl_field(2, RHS0_42, (MR_Integer) 0)));
              NonLocals_61 = ((MR_Word) ((MR_hl_field(2, RHS0_42, (MR_Integer) 1))));
              ArgVarsModes_65 = ((MR_Word) ((MR_hl_field(2, RHS0_42, (MR_Integer) 2))));
              F_63 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_42, (MR_Integer) 3))) & (MR_Integer) 7);
              SubGoal0_64 = ((MR_Word) ((MR_hl_field(2, RHS0_42, (MR_Integer) 4))));
              GoalId_67 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(STATE_VARIABLE_GoalInfo_106_106);
              check_hlds__mode_ordering__enter_lambda_goal_3_p_0(GoalId_67, STATE_VARIABLE_MOI_107_107, &STATE_VARIABLE_MOI_114_114);
              check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_64, &SubGoal_66, STATE_VARIABLE_MOI_114_114, &STATE_VARIABLE_MOI_115_115);
              {
                RHS_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_49, 0) = (MR_Box) (packed_word_4);
                MR_hl_field(2, RHS_49, 1) = ((MR_Box) (NonLocals_61));
                MR_hl_field(2, RHS_49, 2) = ((MR_Box) (ArgVarsModes_65));
                MR_hl_field(2, RHS_49, 3) = (MR_Box) ((MR_Unsigned) (F_63));
                MR_hl_field(2, RHS_49, 4) = ((MR_Box) (SubGoal_66));
              }
              check_hlds__mode_ordering__leave_lambda_goal_2_p_0(STATE_VARIABLE_MOI_115_115, STATE_VARIABLE_MOI_87);
              {
                Var_117 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_117, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[1]));
                MR_hl_field(0, Var_117, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5));
                MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_117, 3) = ((MR_Box) (InstGraph_47));
                MR_hl_field(0, Var_117, 4) = ((MR_Box) (NonLocals_61));
              }
              mercury__solutions__solutions_2_p_1((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), Var_117, &ConsumingVarsList_147);
              parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVarsList_147, &ConsumingVars_148);
              parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarA_41, &MakeVisibleVars_149);
              parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_61, &NeedVisibleVars_150);
            }
            break;
        }
        check_hlds__mode_ordering__goal_info_set_consuming_vars_3_p_0(ConsumingVars_148, STATE_VARIABLE_GoalInfo_106_106, &STATE_VARIABLE_GoalInfo_118_118);
        check_hlds__mode_ordering__goal_info_set_make_visible_vars_3_p_0(MakeVisibleVars_149, STATE_VARIABLE_GoalInfo_118_118, &STATE_VARIABLE_GoalInfo_119_119);
        check_hlds__mode_ordering__goal_info_set_need_visible_vars_3_p_0(NeedVisibleVars_150, STATE_VARIABLE_GoalInfo_119_119, STATE_VARIABLE_GoalInfo_85);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (VarA_41));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_49));
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_43));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_50));
          MR_hl_field(1, base, 4) = ((MR_Box) (Context_45));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 0))));
        MR_Word Args_24 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 2))));
        MR_Word ProducingVars_28;
        MR_Integer ProcId_29;
        MR_Word ArgsSet_30;
        MR_Word MakeVisibleVars_31;
        MR_Word NeedVisibleVars_32;
        MR_Word STATE_VARIABLE_GoalInfo_96_96;
        MR_Word STATE_VARIABLE_MOI_97_97;
        MR_Word STATE_VARIABLE_GoalInfo_99_99;
        MR_Word STATE_VARIABLE_GoalInfo_100_100;
        MR_Word ConsumingVars_145;
        MR_Word Var_168;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_173;

        check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&ProducingVars_28, STATE_VARIABLE_GoalInfo_0_84, &STATE_VARIABLE_GoalInfo_96_96, STATE_VARIABLE_MOI_0_86, &STATE_VARIABLE_MOI_97_97);
        check_hlds__mode_ordering__find_matching_proc_7_p_0(PredId_22, Args_24, ProducingVars_28, &ProcId_29, &ConsumingVars_145, STATE_VARIABLE_MOI_97_97, STATE_VARIABLE_MOI_87);
        ArgsSet_30 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_24);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgsSet_30, ProducingVars_28, &MakeVisibleVars_31);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgsSet_30, ConsumingVars_145, &NeedVisibleVars_32);
        check_hlds__mode_ordering__goal_info_set_consuming_vars_3_p_0(ConsumingVars_145, STATE_VARIABLE_GoalInfo_96_96, &STATE_VARIABLE_GoalInfo_99_99);
        check_hlds__mode_ordering__goal_info_set_make_visible_vars_3_p_0(MakeVisibleVars_31, STATE_VARIABLE_GoalInfo_99_99, &STATE_VARIABLE_GoalInfo_100_100);
        check_hlds__mode_ordering__goal_info_set_need_visible_vars_3_p_0(NeedVisibleVars_32, STATE_VARIABLE_GoalInfo_100_100, STATE_VARIABLE_GoalInfo_85);
        Var_168 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 0))));
        Var_170 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 2))));
        Var_171 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 3))) & (MR_Integer) 1);
        Var_172 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 4))));
        Var_173 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Var_168));
          MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_29));
          MR_hl_field(2, base, 2) = ((MR_Box) (Var_170));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Var_171));
          MR_hl_field(2, base, 4) = ((MR_Box) (Var_172));
          MR_hl_field(2, base, 5) = ((MR_Box) (Var_173));
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
                  MR_Box conv2_STATE_VARIABLE_MOI_87;

                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[10]), Goals0_12, &Goals_15, ((MR_Box) (STATE_VARIABLE_MOI_0_86)), &conv2_STATE_VARIABLE_MOI_87);
                  *STATE_VARIABLE_MOI_87 = ((MR_Word) (conv2_STATE_VARIABLE_MOI_87));
                  check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Goals_15, STATE_VARIABLE_GoalInfo_0_84, STATE_VARIABLE_GoalInfo_85);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Goals1_13;
                  MR_Word ForwardGoalPathMap_14;
                  MR_Word ConsumingVars0_16;
                  MR_Word ProducingVars0_17;
                  MR_Word ConsumingVars_18;
                  MR_Word NeedVars0_19;
                  MR_Word MakeVars0_20;
                  MR_Word NeedVars_21;
                  MR_Word STATE_VARIABLE_GoalInfo_90_90;
                  MR_Word STATE_VARIABLE_GoalInfo_91_91;
                  MR_Box conv5_STATE_VARIABLE_MOI_87;

                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[11]), Goals0_12, &Goals1_13, ((MR_Box) (STATE_VARIABLE_MOI_0_86)), &conv5_STATE_VARIABLE_MOI_87);
                  *STATE_VARIABLE_MOI_87 = ((MR_Word) (conv5_STATE_VARIABLE_MOI_87));
                  ForwardGoalPathMap_14 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_MOI_87, (MR_Integer) 5))));
                  check_hlds__mode_ordering__mode_order_conj_3_p_0(ForwardGoalPathMap_14, Goals1_13, &Goals_15);
                  check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Goals_15, STATE_VARIABLE_GoalInfo_0_84, &STATE_VARIABLE_GoalInfo_90_90);
                  check_hlds__mode_ordering__goal_info_get_consuming_vars_2_p_0(STATE_VARIABLE_GoalInfo_90_90, &ConsumingVars0_16);
                  check_hlds__mode_ordering__goal_info_get_producing_vars_2_p_0(STATE_VARIABLE_GoalInfo_90_90, &ProducingVars0_17);
                  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars0_16, ProducingVars0_17, &ConsumingVars_18);
                  check_hlds__mode_ordering__goal_info_set_consuming_vars_3_p_0(ConsumingVars_18, STATE_VARIABLE_GoalInfo_90_90, &STATE_VARIABLE_GoalInfo_91_91);
                  check_hlds__mode_ordering__goal_info_get_need_visible_vars_2_p_0(STATE_VARIABLE_GoalInfo_91_91, &NeedVars0_19);
                  check_hlds__mode_ordering__goal_info_get_make_visible_vars_2_p_0(STATE_VARIABLE_GoalInfo_91_91, &MakeVars0_20);
                  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVars0_19, MakeVars0_20, &NeedVars_21);
                  check_hlds__mode_ordering__goal_info_set_need_visible_vars_3_p_0(NeedVars_21, STATE_VARIABLE_GoalInfo_91_91, STATE_VARIABLE_GoalInfo_85);
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
            MR_Word Goals0_151 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Goals_152;
            MR_Box conv8_STATE_VARIABLE_MOI_87;

            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[12]), Goals0_151, &Goals_152, ((MR_Box) (STATE_VARIABLE_MOI_0_86)), &conv8_STATE_VARIABLE_MOI_87);
            *STATE_VARIABLE_MOI_87 = ((MR_Word) (conv8_STATE_VARIABLE_MOI_87));
            check_hlds__mode_ordering__mode_order_disj_3_p_0(Goals_152, STATE_VARIABLE_GoalInfo_0_84, STATE_VARIABLE_GoalInfo_85);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_152));
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
            MR_Word Reason_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Var_128;
            MR_Word SubGoal0_155 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoal_156;

            check_hlds__mode_ordering__mode_order_goal_4_p_0(SubGoal0_155, &SubGoal_156, STATE_VARIABLE_MOI_0_86, STATE_VARIABLE_MOI_87);
            Var_128 = ((MR_Word) ((MR_hl_field(0, SubGoal_156, (MR_Integer) 1))));
            check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(Var_128, STATE_VARIABLE_GoalInfo_0_84, STATE_VARIABLE_GoalInfo_85);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_68));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_156));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Locals_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Cond0_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Then0_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Else0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 4))));
            MR_Word Cond_73;
            MR_Word Then_74;
            MR_Word Else_75;
            MR_Word STATE_VARIABLE_MOI_130_130;
            MR_Word STATE_VARIABLE_MOI_131_131;
            MR_Word Var_133;
            MR_Word STATE_VARIABLE_GoalInfo_134_134;
            MR_Word Var_135;
            MR_Word STATE_VARIABLE_GoalInfo_137_137;
            MR_Word STATE_VARIABLE_GoalInfo_138_138;
            MR_Word Var_139;
            MR_Word ConsumingVars0_157;
            MR_Word ProducingVars0_158;
            MR_Word ConsumingVars_159;
            MR_Word NeedVars0_160;
            MR_Word MakeVars0_161;
            MR_Word NeedVars_162;

            check_hlds__mode_ordering__mode_order_goal_4_p_0(Cond0_70, &Cond_73, STATE_VARIABLE_MOI_0_86, &STATE_VARIABLE_MOI_130_130);
            check_hlds__mode_ordering__mode_order_goal_4_p_0(Then0_71, &Then_74, STATE_VARIABLE_MOI_130_130, &STATE_VARIABLE_MOI_131_131);
            check_hlds__mode_ordering__mode_order_goal_4_p_0(Else0_72, &Else_75, STATE_VARIABLE_MOI_131_131, STATE_VARIABLE_MOI_87);
            {
              Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_135, 0) = ((MR_Box) (Then_74));
              MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (Cond_73));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_135));
            }
            check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(Var_133, STATE_VARIABLE_GoalInfo_0_84, &STATE_VARIABLE_GoalInfo_134_134);
            check_hlds__mode_ordering__goal_info_get_consuming_vars_2_p_0(STATE_VARIABLE_GoalInfo_134_134, &ConsumingVars0_157);
            check_hlds__mode_ordering__goal_info_get_producing_vars_2_p_0(STATE_VARIABLE_GoalInfo_134_134, &ProducingVars0_158);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars0_157, ProducingVars0_158, &ConsumingVars_159);
            check_hlds__mode_ordering__goal_info_set_consuming_vars_3_p_0(ConsumingVars_159, STATE_VARIABLE_GoalInfo_134_134, &STATE_VARIABLE_GoalInfo_137_137);
            check_hlds__mode_ordering__goal_info_get_need_visible_vars_2_p_0(STATE_VARIABLE_GoalInfo_137_137, &NeedVars0_160);
            check_hlds__mode_ordering__goal_info_get_make_visible_vars_2_p_0(STATE_VARIABLE_GoalInfo_137_137, &MakeVars0_161);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVars0_160, MakeVars0_161, &NeedVars_162);
            check_hlds__mode_ordering__goal_info_set_need_visible_vars_3_p_0(NeedVars_162, STATE_VARIABLE_GoalInfo_137_137, &STATE_VARIABLE_GoalInfo_138_138);
            Var_139 = ((MR_Word) ((MR_hl_field(0, Else_75, (MR_Integer) 1))));
            check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(Var_139, STATE_VARIABLE_GoalInfo_138_138, STATE_VARIABLE_GoalInfo_85);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Locals_69));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_73));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_74));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_75));
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

    check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__637__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &(env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_LambdaHeadVar__1_31, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4, &env);
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
      hlds__hlds_proc_util__proc_info_head_modes_constraint_2_p_0(ProcInfo_10, &Constraint0_20);
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
  MR_Word MMCI0_32;
  MR_Word MCI_34;
  MR_Word Var_39;
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
  MMCI0_32 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
  if ((MMCI0_32 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_35;
    MR_Word ConsumingVars_36;
    MR_Word MakeVisibleVars_37;
    MR_Word NeedVisibleVars_38;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_35);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_36);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_37);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_38);
    {
      MCI_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_34, 0) = ((MR_Box) (OccurringVars_35));
      MR_hl_field(0, MCI_34, 1) = ((MR_Box) (*ProdVars_6));
      MR_hl_field(0, MCI_34, 2) = ((MR_Box) (ConsumingVars_36));
      MR_hl_field(0, MCI_34, 3) = ((MR_Box) (MakeVisibleVars_37));
      MR_hl_field(0, MCI_34, 4) = ((MR_Box) (NeedVisibleVars_38));
    }
  }
  else
  {
    MR_Word MCI0_33 = ((MR_Word) ((MR_hl_field(1, MMCI0_32, (MR_Integer) 0))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, MCI0_33, (MR_Integer) 0))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, MCI0_33, (MR_Integer) 2))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, MCI0_33, (MR_Integer) 3))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, MCI0_33, (MR_Integer) 4))));

    {
      MCI_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_34, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, MCI_34, 1) = ((MR_Box) (*ProdVars_6));
      MR_hl_field(0, MCI_34, 2) = ((MR_Box) (Var_42));
      MR_hl_field(0, MCI_34, 3) = ((MR_Box) (Var_43));
      MR_hl_field(0, MCI_34, 4) = ((MR_Box) (Var_44));
    }
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MCI_34));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_39, STATE_VARIABLE_GoalInfo_0_13, STATE_VARIABLE_GoalInfo_14);
  *STATE_VARIABLE_MOI_16 = STATE_VARIABLE_MOI_0_15;
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__4_80;

  check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__511__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_LambdaHeadVar__4_80);
  *wrapper_arg_4 = ((MR_Box) (conv6_LambdaHeadVar__4_80));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__4_68;

  check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__500__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_LambdaHeadVar__4_68);
  *wrapper_arg_4 = ((MR_Box) (conv4_LambdaHeadVar__4_68));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__4_56;

  check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__490__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_LambdaHeadVar__4_56);
  *wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_56));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_48;

  check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_conj__474__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_48);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_48));
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
  MR_Word ForwardGoalPathMap_4,
  MR_Word Goals0_5,
  MR_Word * Goals_6)
{
  MR_bool succeeded;
  MR_Word GoalMap_17;
  MR_Word ProdMap_25;
  MR_Word MakeVisMap_31;
  MR_Word Graph_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_52;
  MR_Word Var_64;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Box conv1_GoalMap_17;
  MR_Box conv3_ProdMap_25;
  MR_Box conv5_MakeVisMap_31;
  MR_Box conv7_Graph_42;
  MR_Word TSort_43;

  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (ForwardGoalPathMap_4));
  }
  Var_45 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[0]), Var_44, Goals0_5, ((MR_Box) (Var_45)), &conv1_GoalMap_17);
  GoalMap_17 = ((MR_Word) (conv1_GoalMap_17));
  Var_52 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[1]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[8]), GoalMap_17, ((MR_Box) (Var_52)), &conv3_ProdMap_25);
  ProdMap_25 = ((MR_Word) (conv3_ProdMap_25));
  Var_64 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__mode_ordering_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[1]), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[9]), GoalMap_17, ((MR_Box) (Var_64)), &conv5_MakeVisMap_31);
  MakeVisMap_31 = ((MR_Word) (conv5_MakeVisMap_31));
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_7[0]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_4));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (ProdMap_25));
    MR_hl_field(0, Var_75, 4) = ((MR_Box) (MakeVisMap_31));
  }
  Var_76 = mercury__digraph__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_1[4]), Var_75, GoalMap_17, ((MR_Box) (Var_76)), &conv7_Graph_42);
  Graph_42 = ((MR_Word) (conv7_Graph_42));
  succeeded = mercury__digraph__return_vertices_in_from_to_order_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Graph_42, &TSort_43);
  if (succeeded)
    *Goals_6 = mercury__map__apply_to_list_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TSort_43, GoalMap_17);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "tsort failed");
      return;
    }
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_GoalInfo_21;

  check_hlds__mode_ordering__union_mode_vars_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GoalInfo_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GoalInfo_21));
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
  MR_Word STATE_VARIABLE_GoalInfo_0_18,
  MR_Word * STATE_VARIABLE_GoalInfo_19)
{
  MR_Word ProducingVars0_6;
  MR_Word ConsumingVars0_7;
  MR_Word MakeVisibleVars0_8;
  MR_Word NeedVisibleVars0_9;
  MR_Word GI_ProducingVars0_10;
  MR_Word GI_ConsumingVars0_11;
  MR_Word GI_MakeVisibleVars0_12;
  MR_Word GI_NeedVisibleVars0_13;
  MR_Word ProducingVars_14;
  MR_Word ConsumingVars_15;
  MR_Word MakeVisibleVars_16;
  MR_Word NeedVisibleVars_17;
  MR_Word STATE_VARIABLE_GoalInfo_20_20;
  MR_Word STATE_VARIABLE_GoalInfo_21_21;
  MR_Word STATE_VARIABLE_GoalInfo_22_22;
  MR_Word MMCI_24;
  MR_Word MMCI_31;
  MR_Word MMCI_38;
  MR_Word MMCI_45;
  MR_Word MMCI_52;
  MR_Word MMCI_59;
  MR_Word MMCI_66;
  MR_Word MMCI_73;
  MR_Word MMCI0_80;
  MR_Word MCI_82;
  MR_Word Var_87;

  MMCI_24 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_18);
  if ((MMCI_24 == (MR_Word) ((MR_Unsigned) 0U)))
    ProducingVars0_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_25 = ((MR_Word) ((MR_hl_field(1, MMCI_24, (MR_Integer) 0))));

    ProducingVars0_6 = ((MR_Word) ((MR_hl_field(0, MCI_25, (MR_Integer) 1))));
  }
  MMCI_31 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_18);
  if ((MMCI_31 == (MR_Word) ((MR_Unsigned) 0U)))
    ConsumingVars0_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_32 = ((MR_Word) ((MR_hl_field(1, MMCI_31, (MR_Integer) 0))));

    ConsumingVars0_7 = ((MR_Word) ((MR_hl_field(0, MCI_32, (MR_Integer) 2))));
  }
  MMCI_38 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_18);
  if ((MMCI_38 == (MR_Word) ((MR_Unsigned) 0U)))
    MakeVisibleVars0_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_39 = ((MR_Word) ((MR_hl_field(1, MMCI_38, (MR_Integer) 0))));

    MakeVisibleVars0_8 = ((MR_Word) ((MR_hl_field(0, MCI_39, (MR_Integer) 3))));
  }
  MMCI_45 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_18);
  if ((MMCI_45 == (MR_Word) ((MR_Unsigned) 0U)))
    NeedVisibleVars0_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_46 = ((MR_Word) ((MR_hl_field(1, MMCI_45, (MR_Integer) 0))));

    NeedVisibleVars0_9 = ((MR_Word) ((MR_hl_field(0, MCI_46, (MR_Integer) 4))));
  }
  MMCI_52 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_4);
  if ((MMCI_52 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_ProducingVars0_10 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_53 = ((MR_Word) ((MR_hl_field(1, MMCI_52, (MR_Integer) 0))));

    GI_ProducingVars0_10 = ((MR_Word) ((MR_hl_field(0, MCI_53, (MR_Integer) 1))));
  }
  MMCI_59 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_4);
  if ((MMCI_59 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_ConsumingVars0_11 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_60 = ((MR_Word) ((MR_hl_field(1, MMCI_59, (MR_Integer) 0))));

    GI_ConsumingVars0_11 = ((MR_Word) ((MR_hl_field(0, MCI_60, (MR_Integer) 2))));
  }
  MMCI_66 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_4);
  if ((MMCI_66 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_MakeVisibleVars0_12 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_67 = ((MR_Word) ((MR_hl_field(1, MMCI_66, (MR_Integer) 0))));

    GI_MakeVisibleVars0_12 = ((MR_Word) ((MR_hl_field(0, MCI_67, (MR_Integer) 3))));
  }
  MMCI_73 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_4);
  if ((MMCI_73 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_NeedVisibleVars0_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_74 = ((MR_Word) ((MR_hl_field(1, MMCI_73, (MR_Integer) 0))));

    GI_NeedVisibleVars0_13 = ((MR_Word) ((MR_hl_field(0, MCI_74, (MR_Integer) 4))));
  }
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars0_6, GI_ProducingVars0_10, &ProducingVars_14);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars0_7, GI_ConsumingVars0_11, &ConsumingVars_15);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars0_8, GI_MakeVisibleVars0_12, &MakeVisibleVars_16);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars0_9, GI_NeedVisibleVars0_13, &NeedVisibleVars_17);
  MMCI0_80 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_18);
  if ((MMCI0_80 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_83;
    MR_Word ConsumingVars_84;
    MR_Word MakeVisibleVars_85;
    MR_Word NeedVisibleVars_86;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_83);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_84);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_85);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_86);
    {
      MCI_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_82, 0) = ((MR_Box) (OccurringVars_83));
      MR_hl_field(0, MCI_82, 1) = ((MR_Box) (ProducingVars_14));
      MR_hl_field(0, MCI_82, 2) = ((MR_Box) (ConsumingVars_84));
      MR_hl_field(0, MCI_82, 3) = ((MR_Box) (MakeVisibleVars_85));
      MR_hl_field(0, MCI_82, 4) = ((MR_Box) (NeedVisibleVars_86));
    }
  }
  else
  {
    MR_Word MCI0_81 = ((MR_Word) ((MR_hl_field(1, MMCI0_80, (MR_Integer) 0))));
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, MCI0_81, (MR_Integer) 0))));
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, MCI0_81, (MR_Integer) 2))));
    MR_Word Var_91 = ((MR_Word) ((MR_hl_field(0, MCI0_81, (MR_Integer) 3))));
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, MCI0_81, (MR_Integer) 4))));

    {
      MCI_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_82, 0) = ((MR_Box) (Var_88));
      MR_hl_field(0, MCI_82, 1) = ((MR_Box) (ProducingVars_14));
      MR_hl_field(0, MCI_82, 2) = ((MR_Box) (Var_90));
      MR_hl_field(0, MCI_82, 3) = ((MR_Box) (Var_91));
      MR_hl_field(0, MCI_82, 4) = ((MR_Box) (Var_92));
    }
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (MCI_82));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_87, STATE_VARIABLE_GoalInfo_0_18, &STATE_VARIABLE_GoalInfo_20_20);
  check_hlds__mode_ordering__goal_info_set_consuming_vars_3_p_0(ConsumingVars_15, STATE_VARIABLE_GoalInfo_20_20, &STATE_VARIABLE_GoalInfo_21_21);
  check_hlds__mode_ordering__goal_info_set_make_visible_vars_3_p_0(MakeVisibleVars_16, STATE_VARIABLE_GoalInfo_21_21, &STATE_VARIABLE_GoalInfo_22_22);
  check_hlds__mode_ordering__goal_info_set_need_visible_vars_3_p_0(NeedVisibleVars_17, STATE_VARIABLE_GoalInfo_22_22, STATE_VARIABLE_GoalInfo_19);
}

static void MR_CALL 
check_hlds__mode_ordering__goal_info_set_need_visible_vars_3_p_0(
  MR_Word NeedVisibleVars_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14)
{
  MR_Word MMCI0_6;
  MR_Word MCI_8;
  MR_Word Var_15;

  MMCI0_6 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
  if ((MMCI0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_9;
    MR_Word ProducingVars_10;
    MR_Word ConsumingVars_11;
    MR_Word MakeVisibleVars_12;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_9);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProducingVars_10);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_11);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_12);
    {
      MCI_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_8, 0) = ((MR_Box) (OccurringVars_9));
      MR_hl_field(0, MCI_8, 1) = ((MR_Box) (ProducingVars_10));
      MR_hl_field(0, MCI_8, 2) = ((MR_Box) (ConsumingVars_11));
      MR_hl_field(0, MCI_8, 3) = ((MR_Box) (MakeVisibleVars_12));
      MR_hl_field(0, MCI_8, 4) = ((MR_Box) (NeedVisibleVars_4));
    }
  }
  else
  {
    MR_Word MCI0_7 = ((MR_Word) ((MR_hl_field(1, MMCI0_6, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 3))));

    {
      MCI_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_8, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, MCI_8, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, MCI_8, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, MCI_8, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, MCI_8, 4) = ((MR_Box) (NeedVisibleVars_4));
    }
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MCI_8));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_15, STATE_VARIABLE_GoalInfo_0_13, STATE_VARIABLE_GoalInfo_14);
}

static void MR_CALL 
check_hlds__mode_ordering__goal_info_set_make_visible_vars_3_p_0(
  MR_Word MakeVisibleVars_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14)
{
  MR_Word MMCI0_6;
  MR_Word MCI_8;
  MR_Word Var_15;

  MMCI0_6 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
  if ((MMCI0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_9;
    MR_Word ProducingVars_10;
    MR_Word ConsumingVars_11;
    MR_Word NeedVisibleVars_12;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_9);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProducingVars_10);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_11);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_12);
    {
      MCI_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_8, 0) = ((MR_Box) (OccurringVars_9));
      MR_hl_field(0, MCI_8, 1) = ((MR_Box) (ProducingVars_10));
      MR_hl_field(0, MCI_8, 2) = ((MR_Box) (ConsumingVars_11));
      MR_hl_field(0, MCI_8, 3) = ((MR_Box) (MakeVisibleVars_4));
      MR_hl_field(0, MCI_8, 4) = ((MR_Box) (NeedVisibleVars_12));
    }
  }
  else
  {
    MR_Word MCI0_7 = ((MR_Word) ((MR_hl_field(1, MMCI0_6, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 2))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 4))));

    {
      MCI_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_8, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, MCI_8, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, MCI_8, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, MCI_8, 3) = ((MR_Box) (MakeVisibleVars_4));
      MR_hl_field(0, MCI_8, 4) = ((MR_Box) (Var_20));
    }
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MCI_8));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_15, STATE_VARIABLE_GoalInfo_0_13, STATE_VARIABLE_GoalInfo_14);
}

static void MR_CALL 
check_hlds__mode_ordering__goal_info_set_consuming_vars_3_p_0(
  MR_Word ConsumingVars_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14)
{
  MR_Word MMCI0_6;
  MR_Word MCI_8;
  MR_Word Var_15;

  MMCI0_6 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
  if ((MMCI0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_9;
    MR_Word ProducingVars_10;
    MR_Word MakeVisibleVars_11;
    MR_Word NeedVisibleVars_12;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_9);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProducingVars_10);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_11);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_12);
    {
      MCI_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_8, 0) = ((MR_Box) (OccurringVars_9));
      MR_hl_field(0, MCI_8, 1) = ((MR_Box) (ProducingVars_10));
      MR_hl_field(0, MCI_8, 2) = ((MR_Box) (ConsumingVars_4));
      MR_hl_field(0, MCI_8, 3) = ((MR_Box) (MakeVisibleVars_11));
      MR_hl_field(0, MCI_8, 4) = ((MR_Box) (NeedVisibleVars_12));
    }
  }
  else
  {
    MR_Word MCI0_7 = ((MR_Word) ((MR_hl_field(1, MMCI0_6, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 4))));

    {
      MCI_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_8, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, MCI_8, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, MCI_8, 2) = ((MR_Box) (ConsumingVars_4));
      MR_hl_field(0, MCI_8, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, MCI_8, 4) = ((MR_Box) (Var_20));
    }
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MCI_8));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_15, STATE_VARIABLE_GoalInfo_0_13, STATE_VARIABLE_GoalInfo_14);
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
    MR_Box conv1_STATE_VARIABLE_GoalInfo_3;

    GI_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
    check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(GI_8, STATE_VARIABLE_GoalInfo_0_2, &STATE_VARIABLE_GoalInfo_14_14);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&check_hlds__mode_ordering_scalar_common_2[6]), Goals_9, ((MR_Box) (STATE_VARIABLE_GoalInfo_14_14)), &conv1_STATE_VARIABLE_GoalInfo_3);
    *STATE_VARIABLE_GoalInfo_3 = ((MR_Word) (conv1_STATE_VARIABLE_GoalInfo_3));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
  MR_Word GI_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * STATE_VARIABLE_GoalInfo_11)
{
  MR_Word GI_ProducingVars_6;
  MR_Word GI_ConsumingVars_7;
  MR_Word GI_MakeVisibleVars_8;
  MR_Word GI_NeedVisibleVars_9;
  MR_Word STATE_VARIABLE_GoalInfo_12_12;
  MR_Word STATE_VARIABLE_GoalInfo_13_13;
  MR_Word STATE_VARIABLE_GoalInfo_14_14;
  MR_Word MMCI_15;
  MR_Word MMCI_22;
  MR_Word MMCI_29;
  MR_Word MMCI_36;
  MR_Word MMCI0_43;
  MR_Word MCI_45;
  MR_Word Var_50;
  MR_Word MMCI0_57;
  MR_Word MCI_59;
  MR_Word Var_64;
  MR_Word MMCI0_71;
  MR_Word MCI_73;
  MR_Word Var_78;
  MR_Word MMCI0_85;
  MR_Word MCI_87;
  MR_Word Var_92;

  MMCI_15 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_4);
  if ((MMCI_15 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_ProducingVars_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_16 = ((MR_Word) ((MR_hl_field(1, MMCI_15, (MR_Integer) 0))));

    GI_ProducingVars_6 = ((MR_Word) ((MR_hl_field(0, MCI_16, (MR_Integer) 1))));
  }
  MMCI_22 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_4);
  if ((MMCI_22 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_ConsumingVars_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_23 = ((MR_Word) ((MR_hl_field(1, MMCI_22, (MR_Integer) 0))));

    GI_ConsumingVars_7 = ((MR_Word) ((MR_hl_field(0, MCI_23, (MR_Integer) 2))));
  }
  MMCI_29 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_4);
  if ((MMCI_29 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_MakeVisibleVars_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_30 = ((MR_Word) ((MR_hl_field(1, MMCI_29, (MR_Integer) 0))));

    GI_MakeVisibleVars_8 = ((MR_Word) ((MR_hl_field(0, MCI_30, (MR_Integer) 3))));
  }
  MMCI_36 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GI_4);
  if ((MMCI_36 == (MR_Word) ((MR_Unsigned) 0U)))
    GI_NeedVisibleVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_37 = ((MR_Word) ((MR_hl_field(1, MMCI_36, (MR_Integer) 0))));

    GI_NeedVisibleVars_9 = ((MR_Word) ((MR_hl_field(0, MCI_37, (MR_Integer) 4))));
  }
  MMCI0_43 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_10);
  if ((MMCI0_43 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_46;
    MR_Word ConsumingVars_47;
    MR_Word MakeVisibleVars_48;
    MR_Word NeedVisibleVars_49;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_46);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_47);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_48);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_49);
    {
      MCI_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_45, 0) = ((MR_Box) (OccurringVars_46));
      MR_hl_field(0, MCI_45, 1) = ((MR_Box) (GI_ProducingVars_6));
      MR_hl_field(0, MCI_45, 2) = ((MR_Box) (ConsumingVars_47));
      MR_hl_field(0, MCI_45, 3) = ((MR_Box) (MakeVisibleVars_48));
      MR_hl_field(0, MCI_45, 4) = ((MR_Box) (NeedVisibleVars_49));
    }
  }
  else
  {
    MR_Word MCI0_44 = ((MR_Word) ((MR_hl_field(1, MMCI0_43, (MR_Integer) 0))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, MCI0_44, (MR_Integer) 0))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, MCI0_44, (MR_Integer) 2))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, MCI0_44, (MR_Integer) 3))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, MCI0_44, (MR_Integer) 4))));

    {
      MCI_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_45, 0) = ((MR_Box) (Var_51));
      MR_hl_field(0, MCI_45, 1) = ((MR_Box) (GI_ProducingVars_6));
      MR_hl_field(0, MCI_45, 2) = ((MR_Box) (Var_53));
      MR_hl_field(0, MCI_45, 3) = ((MR_Box) (Var_54));
      MR_hl_field(0, MCI_45, 4) = ((MR_Box) (Var_55));
    }
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (MCI_45));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_50, STATE_VARIABLE_GoalInfo_0_10, &STATE_VARIABLE_GoalInfo_12_12);
  MMCI0_57 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_12_12);
  if ((MMCI0_57 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_60;
    MR_Word ProducingVars_61;
    MR_Word MakeVisibleVars_62;
    MR_Word NeedVisibleVars_63;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_60);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProducingVars_61);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_62);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_63);
    {
      MCI_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_59, 0) = ((MR_Box) (OccurringVars_60));
      MR_hl_field(0, MCI_59, 1) = ((MR_Box) (ProducingVars_61));
      MR_hl_field(0, MCI_59, 2) = ((MR_Box) (GI_ConsumingVars_7));
      MR_hl_field(0, MCI_59, 3) = ((MR_Box) (MakeVisibleVars_62));
      MR_hl_field(0, MCI_59, 4) = ((MR_Box) (NeedVisibleVars_63));
    }
  }
  else
  {
    MR_Word MCI0_58 = ((MR_Word) ((MR_hl_field(1, MMCI0_57, (MR_Integer) 0))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, MCI0_58, (MR_Integer) 0))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, MCI0_58, (MR_Integer) 1))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, MCI0_58, (MR_Integer) 3))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, MCI0_58, (MR_Integer) 4))));

    {
      MCI_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_59, 0) = ((MR_Box) (Var_65));
      MR_hl_field(0, MCI_59, 1) = ((MR_Box) (Var_66));
      MR_hl_field(0, MCI_59, 2) = ((MR_Box) (GI_ConsumingVars_7));
      MR_hl_field(0, MCI_59, 3) = ((MR_Box) (Var_68));
      MR_hl_field(0, MCI_59, 4) = ((MR_Box) (Var_69));
    }
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MCI_59));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_64, STATE_VARIABLE_GoalInfo_12_12, &STATE_VARIABLE_GoalInfo_13_13);
  MMCI0_71 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_13_13);
  if ((MMCI0_71 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_74;
    MR_Word ProducingVars_75;
    MR_Word ConsumingVars_76;
    MR_Word NeedVisibleVars_77;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_74);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProducingVars_75);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_76);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_77);
    {
      MCI_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_73, 0) = ((MR_Box) (OccurringVars_74));
      MR_hl_field(0, MCI_73, 1) = ((MR_Box) (ProducingVars_75));
      MR_hl_field(0, MCI_73, 2) = ((MR_Box) (ConsumingVars_76));
      MR_hl_field(0, MCI_73, 3) = ((MR_Box) (GI_MakeVisibleVars_8));
      MR_hl_field(0, MCI_73, 4) = ((MR_Box) (NeedVisibleVars_77));
    }
  }
  else
  {
    MR_Word MCI0_72 = ((MR_Word) ((MR_hl_field(1, MMCI0_71, (MR_Integer) 0))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, MCI0_72, (MR_Integer) 0))));
    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, MCI0_72, (MR_Integer) 1))));
    MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, MCI0_72, (MR_Integer) 2))));
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, MCI0_72, (MR_Integer) 4))));

    {
      MCI_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_73, 0) = ((MR_Box) (Var_79));
      MR_hl_field(0, MCI_73, 1) = ((MR_Box) (Var_80));
      MR_hl_field(0, MCI_73, 2) = ((MR_Box) (Var_81));
      MR_hl_field(0, MCI_73, 3) = ((MR_Box) (GI_MakeVisibleVars_8));
      MR_hl_field(0, MCI_73, 4) = ((MR_Box) (Var_83));
    }
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (MCI_73));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_78, STATE_VARIABLE_GoalInfo_13_13, &STATE_VARIABLE_GoalInfo_14_14);
  MMCI0_85 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_14_14);
  if ((MMCI0_85 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OccurringVars_88;
    MR_Word ProducingVars_89;
    MR_Word ConsumingVars_90;
    MR_Word MakeVisibleVars_91;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &OccurringVars_88);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProducingVars_89);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_90);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_91);
    {
      MCI_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_87, 0) = ((MR_Box) (OccurringVars_88));
      MR_hl_field(0, MCI_87, 1) = ((MR_Box) (ProducingVars_89));
      MR_hl_field(0, MCI_87, 2) = ((MR_Box) (ConsumingVars_90));
      MR_hl_field(0, MCI_87, 3) = ((MR_Box) (MakeVisibleVars_91));
      MR_hl_field(0, MCI_87, 4) = ((MR_Box) (GI_NeedVisibleVars_9));
    }
  }
  else
  {
    MR_Word MCI0_86 = ((MR_Word) ((MR_hl_field(1, MMCI0_85, (MR_Integer) 0))));
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, MCI0_86, (MR_Integer) 0))));
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, MCI0_86, (MR_Integer) 1))));
    MR_Word Var_95 = ((MR_Word) ((MR_hl_field(0, MCI0_86, (MR_Integer) 2))));
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, MCI0_86, (MR_Integer) 3))));

    {
      MCI_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_87, 0) = ((MR_Box) (Var_93));
      MR_hl_field(0, MCI_87, 1) = ((MR_Box) (Var_94));
      MR_hl_field(0, MCI_87, 2) = ((MR_Box) (Var_95));
      MR_hl_field(0, MCI_87, 3) = ((MR_Box) (Var_96));
      MR_hl_field(0, MCI_87, 4) = ((MR_Box) (GI_NeedVisibleVars_9));
    }
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (MCI_87));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_92, STATE_VARIABLE_GoalInfo_14_14, STATE_VARIABLE_GoalInfo_11);
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

void MR_CALL 
check_hlds__mode_ordering__goal_info_set_occurring_vars_3_p_0(
  MR_Word OccurringVars_4,
  MR_Word STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * STATE_VARIABLE_GoalInfo_14)
{
  MR_Word MMCI0_6;
  MR_Word MCI_8;
  MR_Word Var_15;

  MMCI0_6 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(STATE_VARIABLE_GoalInfo_0_13);
  if ((MMCI0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProducingVars_9;
    MR_Word ConsumingVars_10;
    MR_Word MakeVisibleVars_11;
    MR_Word NeedVisibleVars_12;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ProducingVars_9);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConsumingVars_10);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &MakeVisibleVars_11);
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NeedVisibleVars_12);
    {
      MCI_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_8, 0) = ((MR_Box) (OccurringVars_4));
      MR_hl_field(0, MCI_8, 1) = ((MR_Box) (ProducingVars_9));
      MR_hl_field(0, MCI_8, 2) = ((MR_Box) (ConsumingVars_10));
      MR_hl_field(0, MCI_8, 3) = ((MR_Box) (MakeVisibleVars_11));
      MR_hl_field(0, MCI_8, 4) = ((MR_Box) (NeedVisibleVars_12));
    }
  }
  else
  {
    MR_Word MCI0_7 = ((MR_Word) ((MR_hl_field(1, MMCI0_6, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, MCI0_7, (MR_Integer) 4))));

    {
      MCI_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MCI_8, 0) = ((MR_Box) (OccurringVars_4));
      MR_hl_field(0, MCI_8, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, MCI_8, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, MCI_8, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, MCI_8, 4) = ((MR_Box) (Var_20));
    }
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MCI_8));
  }
  hlds__hlds_goal__goal_info_set_maybe_mode_constr_3_p_0(Var_15, STATE_VARIABLE_GoalInfo_0_13, STATE_VARIABLE_GoalInfo_14);
}

void MR_CALL 
check_hlds__mode_ordering__goal_info_get_need_visible_vars_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * NeedVisibleVars_4)
{
  MR_Word MMCI_5;

  MMCI_5 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GoalInfo_3);
  if ((MMCI_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *NeedVisibleVars_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_6 = ((MR_Word) ((MR_hl_field(1, MMCI_5, (MR_Integer) 0))));

    *NeedVisibleVars_4 = ((MR_Word) ((MR_hl_field(0, MCI_6, (MR_Integer) 4))));
  }
}

void MR_CALL 
check_hlds__mode_ordering__goal_info_get_make_visible_vars_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * MakeVisibleVars_4)
{
  MR_Word MMCI_5;

  MMCI_5 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GoalInfo_3);
  if ((MMCI_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *MakeVisibleVars_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_6 = ((MR_Word) ((MR_hl_field(1, MMCI_5, (MR_Integer) 0))));

    *MakeVisibleVars_4 = ((MR_Word) ((MR_hl_field(0, MCI_6, (MR_Integer) 3))));
  }
}

void MR_CALL 
check_hlds__mode_ordering__goal_info_get_consuming_vars_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * ConsumingVars_4)
{
  MR_Word MMCI_5;

  MMCI_5 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GoalInfo_3);
  if ((MMCI_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *ConsumingVars_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_6 = ((MR_Word) ((MR_hl_field(1, MMCI_5, (MR_Integer) 0))));

    *ConsumingVars_4 = ((MR_Word) ((MR_hl_field(0, MCI_6, (MR_Integer) 2))));
  }
}

void MR_CALL 
check_hlds__mode_ordering__goal_info_get_producing_vars_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * ProducingVars_4)
{
  MR_Word MMCI_5;

  MMCI_5 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GoalInfo_3);
  if ((MMCI_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *ProducingVars_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_6 = ((MR_Word) ((MR_hl_field(1, MMCI_5, (MR_Integer) 0))));

    *ProducingVars_4 = ((MR_Word) ((MR_hl_field(0, MCI_6, (MR_Integer) 1))));
  }
}

void MR_CALL 
check_hlds__mode_ordering__goal_info_get_occurring_vars_2_p_0(
  MR_Word GoalInfo_3,
  MR_Word * OccurringVars_4)
{
  MR_Word MMCI_5;

  MMCI_5 = hlds__hlds_goal__goal_info_get_maybe_mode_constr_1_f_0(GoalInfo_3);
  if ((MMCI_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *OccurringVars_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word MCI_6 = ((MR_Word) ((MR_hl_field(1, MMCI_5, (MR_Integer) 0))));

    *OccurringVars_4 = ((MR_Word) ((MR_hl_field(0, MCI_6, (MR_Integer) 0))));
  }
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
