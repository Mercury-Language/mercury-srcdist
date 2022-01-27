/*
** Automatically generated from `mode_ordering.m'
** by the Mercury compiler,
** version 2016-10-30
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


/* :- module check_hlds.mode_ordering. */
/* :- implementation. */

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
#include "libs.compiler_util.mih"
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



struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__MCInfo_16;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Constraint_21;
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont;
  void * check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_32_32;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_33_33;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Y_38;
};

struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s {
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_158;
  MR_Word * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__LambdaHeadVar__1_126;
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont;
  void * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48;
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49;
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


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

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

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
  MR_Word check_hlds__mode_ordering__PredId_11,
  MR_Word check_hlds__mode_ordering__MCI_12,
  MR_Word check_hlds__mode_ordering__Constraint0_13,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
  MR_Word check_hlds__mode_ordering__PredId_8,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_1(
  void * check_hlds__mode_ordering__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0(
  MR_Word check_hlds__mode_ordering__Args_13,
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
  MR_Word check_hlds__mode_ordering__MCInfo_16,
  MR_Word check_hlds__mode_ordering__HeadVars_19,
  MR_Word check_hlds__mode_ordering__Constraint_21,
  MR_Word * check_hlds__mode_ordering__LambdaHeadVar__1_31,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_2(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0(
  MR_Word check_hlds__mode_ordering__ProdMap_17,
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_70,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_71,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_72);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__473__1_4_f_0(
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
  MR_Word check_hlds__mode_ordering__Key0_27,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_90,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_91);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__465__1_4_f_0(
  MR_Word check_hlds__mode_ordering__ProdMap_17,
  MR_Word check_hlds__mode_ordering__Key0_27,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_79,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_80);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0(
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_57,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_58,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_59);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__451__1_3_f_0(
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_57,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_62,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_63);

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0(
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_44,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_45,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_46);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__444__1_3_f_0(
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_44,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_49,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_50);

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_36,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_37);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1(
  void * check_hlds__mode_ordering__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(
  MR_Word check_hlds__mode_ordering__VarA_37,
  MR_Word check_hlds__mode_ordering__InstGraph_42,
  MR_Word check_hlds__mode_ordering__VarB_43,
  MR_Word check_hlds__mode_ordering__ProdVars_158,
  MR_Word * check_hlds__mode_ordering__LambdaHeadVar__1_126,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
  MR_Word check_hlds__mode_ordering__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
  void * check_hlds__mode_ordering__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
  void * check_hlds__mode_ordering__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
  void * check_hlds__mode_ordering__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
  void * check_hlds__mode_ordering__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__ProdVars_12,
  MR_Word check_hlds__mode_ordering__Args_13,
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
  MR_Word check_hlds__mode_ordering__MCInfo_16,
  MR_Integer * check_hlds__mode_ordering__ProcId_17,
  MR_Word * check_hlds__mode_ordering__ConsumingVars_18);

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_7_p_0(
  MR_Word check_hlds__mode_ordering__PredId_8,
  MR_Word check_hlds__mode_ordering__Args_9,
  MR_Word check_hlds__mode_ordering__ProdVars_10,
  MR_Integer * check_hlds__mode_ordering__ProcId_11,
  MR_Word * check_hlds__mode_ordering__ConsumingVars_12,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_27);

static void MR_CALL 
check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(
  MR_Word * check_hlds__mode_ordering__ProdVars_6,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_16);

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
  MR_Word check_hlds__mode_ordering__Goals0_5,
  MR_Word * check_hlds__mode_ordering__Goals_6);

static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
  MR_Word check_hlds__mode_ordering__GI_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7);

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
  MR_Word check_hlds__mode_ordering__Goal_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13);

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
  MR_Word check_hlds__mode_ordering__Goals_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7);

static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
  MR_Word check_hlds__mode_ordering__GI_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
  void * check_hlds__mode_ordering__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
  void * check_hlds__mode_ordering__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
  MR_Word check_hlds__mode_ordering__GoalExpr0_7,
  MR_Word * check_hlds__mode_ordering__GoalExpr_8,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_4_p_0(
  MR_Word check_hlds__mode_ordering__Goal0_5,
  MR_Word * check_hlds__mode_ordering__Goal_6,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_13);

static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8);

static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
  MR_Word check_hlds__mode_ordering__GoalId_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
  MR_Word check_hlds__mode_ordering__PredId_11,
  MR_Word check_hlds__mode_ordering__MCI_12,
  MR_Word check_hlds__mode_ordering__Constraint0_13,
  MR_Integer check_hlds__mode_ordering__ProcId_14,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
  MR_Word check_hlds__mode_ordering__PredId_11,
  MR_Word check_hlds__mode_ordering__MCI_12,
  MR_Word check_hlds__mode_ordering__Constraint0_13,
  MR_Word check_hlds__mode_ordering__ModeDeclConstraint_14,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_pred_5_p_0(
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
  MR_Word check_hlds__mode_ordering___SCC_7,
  MR_Word check_hlds__mode_ordering__PredId_8,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
  MR_Word check_hlds__mode_ordering__PredConstraintMap_5,
  MR_Word check_hlds__mode_ordering__SCC_6,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_2[13][3];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_3[5][7];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_4[3][8];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_5[2][6];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_6[1][9];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_7[1][10];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_8[2][11];




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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[3]))
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
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_disj_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_3)),
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
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

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_6[1][9] = {
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

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_7[1][10] = {
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

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_8[2][11] = {
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

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;

    {
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
    return check_hlds__mode_ordering__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

    {
      check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;

    {
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
    return check_hlds__mode_ordering__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

    {
      check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;

    {
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
    return check_hlds__mode_ordering__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

    {
      check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
  MR_Word check_hlds__mode_ordering__PredId_11,
  MR_Word check_hlds__mode_ordering__MCI_12,
  MR_Word check_hlds__mode_ordering__Constraint0_13,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Integer check_hlds__mode_ordering__ProcId_16;

    {
      check_hlds__mode_ordering__succeeded = mercury__builtin__semidet_succeed_0_p_0();
    }
    if (check_hlds__mode_ordering__succeeded)
      {
        {
          mercury__require__sorry_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.pred_info_create_proc_info_for_mode_decl_constraint\'/4", (MR_String) "NYI");
          return;
        }
      }
    else
      {
        check_hlds__mode_ordering__ProcId_16 = hlds__hlds_pred__initial_proc_id_0_f_0();
      }
    {
      check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(check_hlds__mode_ordering__ModuleInfo_9, check_hlds__mode_ordering__PredConstraintMap_10, check_hlds__mode_ordering__PredId_11, check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__ProcId_16, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23;

    {
      check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23);
    }
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18;

    {
      check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18);
    }
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
  MR_Word check_hlds__mode_ordering__PredId_8,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word check_hlds__mode_ordering__TypeInfo_23_23 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[2];
    MR_Word check_hlds__mode_ordering__RequestedProcsMap0_10;
    MR_Word check_hlds__mode_ordering__PredInfo0_11;
    MR_Word check_hlds__mode_ordering__ModeConstraint0_12;
    MR_Word check_hlds__mode_ordering__MCI_13;
    MR_Word check_hlds__mode_ordering__PredInfo_15;
    MR_Word check_hlds__mode_ordering__V_38_38;
    MR_Box check_hlds__mode_ordering__conv0_V_38_38;

    {
      check_hlds__mode_ordering__RequestedProcsMap0_10 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_22_22, check_hlds__mode_ordering__TypeInfo_23_23);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__PredId_8, &check_hlds__mode_ordering__PredInfo0_11);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0, check_hlds__mode_ordering__PredConstraintMap_6, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv0_V_38_38);
    }
    check_hlds__mode_ordering__V_38_38 = ((MR_Word) check_hlds__mode_ordering__conv0_V_38_38);
    check_hlds__mode_ordering__ModeConstraint0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_38_38, (MR_Integer) 0)));
    check_hlds__mode_ordering__MCI_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_38_38, (MR_Integer) 1)));
    {
      check_hlds__mode_ordering__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__mode_ordering__PredInfo0_11);
    }
    if (check_hlds__mode_ordering__succeeded)
      {
        MR_Word check_hlds__mode_ordering__RequestedProcs_14;
        MR_Box check_hlds__mode_ordering__conv1_RequestedProcs_14;

        {
          check_hlds__mode_ordering__succeeded = mercury__map__search_3_p_0(check_hlds__mode_ordering__TypeCtorInfo_22_22, check_hlds__mode_ordering__TypeInfo_23_23, check_hlds__mode_ordering__RequestedProcsMap0_10, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv1_RequestedProcs_14);
        }
        if (check_hlds__mode_ordering__succeeded)
          {
            check_hlds__mode_ordering__RequestedProcs_14 = ((MR_Word) check_hlds__mode_ordering__conv1_RequestedProcs_14);
            check_hlds__mode_ordering__succeeded = MR_TRUE;
          }
        if (check_hlds__mode_ordering__succeeded)
          {
            MR_Word check_hlds__mode_ordering__V_19_19;
            MR_Box check_hlds__mode_ordering__conv3_PredInfo_15;

            {
              check_hlds__mode_ordering__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 3) = ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17));
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_6));
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 5) = ((MR_Box) (check_hlds__mode_ordering__PredId_8));
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 6) = ((MR_Box) (check_hlds__mode_ordering__MCI_13));
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 7) = ((MR_Box) (check_hlds__mode_ordering__ModeConstraint0_12));
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__mode_ordering__V_19_19, check_hlds__mode_ordering__RequestedProcs_14, ((MR_Box) (check_hlds__mode_ordering__PredInfo0_11)), &check_hlds__mode_ordering__conv3_PredInfo_15);
            }
            check_hlds__mode_ordering__PredInfo_15 = ((MR_Word) check_hlds__mode_ordering__conv3_PredInfo_15);
          }
        else
          check_hlds__mode_ordering__PredInfo_15 = check_hlds__mode_ordering__PredInfo0_11;
      }
    else
      {
        MR_Word check_hlds__mode_ordering__ProcIds_16;
        MR_Word check_hlds__mode_ordering__V_20_20;
        MR_Box check_hlds__mode_ordering__conv5_PredInfo_15;

        {
          check_hlds__mode_ordering__ProcIds_16 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__mode_ordering__PredInfo0_11);
        }
        {
          check_hlds__mode_ordering__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_8[1]));
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 3) = ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17));
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_6));
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 5) = ((MR_Box) (check_hlds__mode_ordering__PredId_8));
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 6) = ((MR_Box) (check_hlds__mode_ordering__MCI_13));
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 7) = ((MR_Box) (check_hlds__mode_ordering__ModeConstraint0_12));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__mode_ordering__V_20_20, check_hlds__mode_ordering__ProcIds_16, ((MR_Box) (check_hlds__mode_ordering__PredInfo0_11)), &check_hlds__mode_ordering__conv5_PredInfo_15);
        }
        check_hlds__mode_ordering__PredInfo_15 = ((MR_Word) check_hlds__mode_ordering__conv5_PredInfo_15);
      }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__mode_ordering__PredId_8, check_hlds__mode_ordering__PredInfo_15, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_1(
  void * check_hlds__mode_ordering__env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_33_33 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Y_38));
    }
    {
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_32_32 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__MCInfo_16, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_33_33);
    }
    {
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Constraint_21, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_32_32);
    }
    if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__succeeded)
      {
        ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont_env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0(
  MR_Word check_hlds__mode_ordering__Args_13,
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
  MR_Word check_hlds__mode_ordering__MCInfo_16,
  MR_Word check_hlds__mode_ordering__HeadVars_19,
  MR_Word check_hlds__mode_ordering__Constraint_21,
  MR_Word * check_hlds__mode_ordering__LambdaHeadVar__1_31,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0_s check_hlds__mode_ordering__env;

    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__MCInfo_16 = check_hlds__mode_ordering__MCInfo_16;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Constraint_21 = check_hlds__mode_ordering__Constraint_21;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont = check_hlds__mode_ordering__cont;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
    {
      hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(check_hlds__mode_ordering__CallerInstGraph_14, check_hlds__mode_ordering__CalleeInstGraph_15, check_hlds__mode_ordering__Args_13, check_hlds__mode_ordering__HeadVars_19, check_hlds__mode_ordering__LambdaHeadVar__1_31, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Y_38, check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_1, &check_hlds__mode_ordering__env);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_2(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv2_LambdaHeadVar__3_92;

    {
      check_hlds__mode_ordering__conv2_LambdaHeadVar__3_92 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__473__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv2_LambdaHeadVar__3_92));
    return check_hlds__mode_ordering__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv0_LambdaHeadVar__3_81;

    {
      check_hlds__mode_ordering__conv0_LambdaHeadVar__3_81 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__465__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_LambdaHeadVar__3_81));
    return check_hlds__mode_ordering__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0(
  MR_Word check_hlds__mode_ordering__ProdMap_17,
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_70,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_71,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_72)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaHeadVar__4_73;
    MR_Word check_hlds__mode_ordering__TypeInfo_149_149;
    MR_Word check_hlds__mode_ordering__TypeInfo_150_150;
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_154_154;
    MR_Word check_hlds__mode_ordering__Key0_27;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R_76_76;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R_77_77;
    MR_Word check_hlds__mode_ordering__V_78_78;
    MR_Word check_hlds__mode_ordering__V_86_86;
    MR_Word check_hlds__mode_ordering__V_87_87;
    MR_Word check_hlds__mode_ordering__V_89_89;
    MR_Word check_hlds__mode_ordering__V_97_97;
    MR_Word check_hlds__mode_ordering__V_98_98;
    MR_Word check_hlds__mode_ordering__GI_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__LambdaHeadVar__2_71, (MR_Integer) 1)));
    MR_Word check_hlds__mode_ordering__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__LambdaHeadVar__2_71, (MR_Integer) 0)));
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77;
    MR_Box check_hlds__mode_ordering__conv3_LambdaHeadVar__4_73;

    {
      mercury__digraph__add_vertex_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_70)), &check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__LambdaHeadVar__3_72, &check_hlds__mode_ordering__STATE_VARIABLE_R_76_76);
    }
    check_hlds__mode_ordering__TypeInfo_149_149 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[3];
    check_hlds__mode_ordering__TypeInfo_150_150 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[4];
    {
      check_hlds__mode_ordering__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 3) = ((MR_Box) (check_hlds__mode_ordering__ProdMap_17));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 4) = ((MR_Box) (check_hlds__mode_ordering__Key0_27));
    }
    check_hlds__mode_ordering__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      check_hlds__mode_ordering__V_87_87 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_120);
    }
    {
      check_hlds__mode_ordering__V_86_86 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_154_154, check_hlds__mode_ordering__V_87_87);
    }
    {
      check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeInfo_149_149, check_hlds__mode_ordering__TypeInfo_150_150, check_hlds__mode_ordering__V_78_78, check_hlds__mode_ordering__V_86_86, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_R_76_76)));
    }
    check_hlds__mode_ordering__STATE_VARIABLE_R_77_77 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77);
    {
      check_hlds__mode_ordering__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 3) = ((MR_Box) (check_hlds__mode_ordering__MakeVisMap_22));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 4) = ((MR_Box) (check_hlds__mode_ordering__Key0_27));
    }
    {
      check_hlds__mode_ordering__V_98_98 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_120);
    }
    {
      check_hlds__mode_ordering__V_97_97 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_154_154, check_hlds__mode_ordering__V_98_98);
    }
    {
      check_hlds__mode_ordering__conv3_LambdaHeadVar__4_73 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeInfo_149_149, check_hlds__mode_ordering__TypeInfo_150_150, check_hlds__mode_ordering__V_89_89, check_hlds__mode_ordering__V_97_97, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_R_77_77)));
    }
    check_hlds__mode_ordering__LambdaHeadVar__4_73 = ((MR_Word) check_hlds__mode_ordering__conv3_LambdaHeadVar__4_73);
    return check_hlds__mode_ordering__LambdaHeadVar__4_73;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__473__1_4_f_0(
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
  MR_Word check_hlds__mode_ordering__Key0_27,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_90,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_91)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_92;
    MR_Integer check_hlds__mode_ordering__Index2_32;
    MR_Box check_hlds__mode_ordering__conv0_Index2_32;

    {
      check_hlds__mode_ordering__succeeded = mercury__map__search_2_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__MakeVisMap_22, ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_90)), &check_hlds__mode_ordering__conv0_Index2_32);
    }
    if (check_hlds__mode_ordering__succeeded)
      {
        check_hlds__mode_ordering__Index2_32 = ((MR_Integer) check_hlds__mode_ordering__conv0_Index2_32);
        check_hlds__mode_ordering__succeeded = MR_TRUE;
      }
    if (check_hlds__mode_ordering__succeeded)
      {
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_157_157 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word check_hlds__mode_ordering__Key2_33;
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95;

        {
          mercury__digraph__add_vertex_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_157_157, ((MR_Box) (check_hlds__mode_ordering__Index2_32)), &check_hlds__mode_ordering__Key2_33, check_hlds__mode_ordering__LambdaHeadVar__2_91, &check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95);
        }
        {
          mercury__digraph__add_edge_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_157_157, check_hlds__mode_ordering__Key2_33, check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95, &check_hlds__mode_ordering__LambdaHeadVar__3_92);
        }
      }
    else
      check_hlds__mode_ordering__LambdaHeadVar__3_92 = check_hlds__mode_ordering__LambdaHeadVar__2_91;
    return check_hlds__mode_ordering__LambdaHeadVar__3_92;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__465__1_4_f_0(
  MR_Word check_hlds__mode_ordering__ProdMap_17,
  MR_Word check_hlds__mode_ordering__Key0_27,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_79,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_80)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_81;
    MR_Integer check_hlds__mode_ordering__Index1_29;
    MR_Box check_hlds__mode_ordering__conv0_Index1_29;

    {
      check_hlds__mode_ordering__succeeded = mercury__map__search_2_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__ProdMap_17, ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_79)), &check_hlds__mode_ordering__conv0_Index1_29);
    }
    if (check_hlds__mode_ordering__succeeded)
      {
        check_hlds__mode_ordering__Index1_29 = ((MR_Integer) check_hlds__mode_ordering__conv0_Index1_29);
        check_hlds__mode_ordering__succeeded = MR_TRUE;
      }
    if (check_hlds__mode_ordering__succeeded)
      {
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_153_153 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word check_hlds__mode_ordering__Key1_30;
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84;

        {
          mercury__digraph__add_vertex_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_153_153, ((MR_Box) (check_hlds__mode_ordering__Index1_29)), &check_hlds__mode_ordering__Key1_30, check_hlds__mode_ordering__LambdaHeadVar__2_80, &check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84);
        }
        {
          mercury__digraph__add_edge_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_153_153, check_hlds__mode_ordering__Key1_30, check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84, &check_hlds__mode_ordering__LambdaHeadVar__3_81);
        }
      }
    else
      check_hlds__mode_ordering__LambdaHeadVar__3_81 = check_hlds__mode_ordering__LambdaHeadVar__2_80;
    return check_hlds__mode_ordering__LambdaHeadVar__3_81;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv0_LambdaHeadVar__3_64;

    {
      check_hlds__mode_ordering__conv0_LambdaHeadVar__3_64 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__451__1_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_LambdaHeadVar__3_64));
    return check_hlds__mode_ordering__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0(
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_57,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_58,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_59)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaHeadVar__4_60;
    MR_Word check_hlds__mode_ordering__V_61_61;
    MR_Word check_hlds__mode_ordering__V_65_65;
    MR_Word check_hlds__mode_ordering__V_66_66;
    MR_Word check_hlds__mode_ordering__V_67_67;
    MR_Word check_hlds__mode_ordering__V_126_126;
    MR_Box check_hlds__mode_ordering__conv1_LambdaHeadVar__4_60;

    {
      check_hlds__mode_ordering__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 3) = ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_57));
    }
    check_hlds__mode_ordering__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__LambdaHeadVar__2_58, (MR_Integer) 0)));
    check_hlds__mode_ordering__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__LambdaHeadVar__2_58, (MR_Integer) 1)));
    {
      check_hlds__mode_ordering__V_66_66 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__V_67_67);
    }
    {
      check_hlds__mode_ordering__V_65_65 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__V_66_66);
    }
    {
      check_hlds__mode_ordering__conv1_LambdaHeadVar__4_60 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1], check_hlds__mode_ordering__V_61_61, check_hlds__mode_ordering__V_65_65, ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__3_59)));
    }
    check_hlds__mode_ordering__LambdaHeadVar__4_60 = ((MR_Word) check_hlds__mode_ordering__conv1_LambdaHeadVar__4_60);
    return check_hlds__mode_ordering__LambdaHeadVar__4_60;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__451__1_3_f_0(
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_57,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_62,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_63)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_64;

    {
      check_hlds__mode_ordering__LambdaHeadVar__3_64 = mercury__map__set_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__LambdaHeadVar__2_63, ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_62)), ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_57)));
    }
    return check_hlds__mode_ordering__LambdaHeadVar__3_64;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv0_LambdaHeadVar__3_51;

    {
      check_hlds__mode_ordering__conv0_LambdaHeadVar__3_51 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__444__1_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_LambdaHeadVar__3_51));
    return check_hlds__mode_ordering__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0(
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_44,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_45,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_46)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaHeadVar__4_47;
    MR_Word check_hlds__mode_ordering__V_48_48;
    MR_Word check_hlds__mode_ordering__V_52_52;
    MR_Word check_hlds__mode_ordering__V_53_53;
    MR_Word check_hlds__mode_ordering__V_54_54;
    MR_Word check_hlds__mode_ordering__V_125_125;
    MR_Box check_hlds__mode_ordering__conv1_LambdaHeadVar__4_47;

    {
      check_hlds__mode_ordering__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 3) = ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_44));
    }
    check_hlds__mode_ordering__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__LambdaHeadVar__2_45, (MR_Integer) 0)));
    check_hlds__mode_ordering__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__LambdaHeadVar__2_45, (MR_Integer) 1)));
    {
      check_hlds__mode_ordering__V_53_53 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__V_54_54);
    }
    {
      check_hlds__mode_ordering__V_52_52 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__V_53_53);
    }
    {
      check_hlds__mode_ordering__conv1_LambdaHeadVar__4_47 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1], check_hlds__mode_ordering__V_48_48, check_hlds__mode_ordering__V_52_52, ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__3_46)));
    }
    check_hlds__mode_ordering__LambdaHeadVar__4_47 = ((MR_Word) check_hlds__mode_ordering__conv1_LambdaHeadVar__4_47);
    return check_hlds__mode_ordering__LambdaHeadVar__4_47;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__444__1_3_f_0(
  MR_Integer check_hlds__mode_ordering__LambdaHeadVar__1_44,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_49,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_50)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_51;

    {
      check_hlds__mode_ordering__LambdaHeadVar__3_51 = mercury__map__det_insert_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__LambdaHeadVar__2_50, ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_49)), ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_44)));
    }
    return check_hlds__mode_ordering__LambdaHeadVar__3_51;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__1_36,
  MR_Word check_hlds__mode_ordering__LambdaHeadVar__2_37)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaHeadVar__3_38;
    MR_Integer check_hlds__mode_ordering__Index_10;
    MR_Word check_hlds__mode_ordering__GI_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__LambdaHeadVar__1_36, (MR_Integer) 1)));
    MR_Word check_hlds__mode_ordering__GoalId_13;
    MR_Word check_hlds__mode_ordering__GoalPath_14;
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__LambdaHeadVar__1_36, (MR_Integer) 0)));
    MR_Box check_hlds__mode_ordering__conv0_GoalPath_14;
    MR_Integer check_hlds__mode_ordering__Index0_16;
    MR_Word check_hlds__mode_ordering__LastStep_15;

    {
      check_hlds__mode_ordering__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__GI_12);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0, check_hlds__mode_ordering__ForwardGoalPathMap_4, ((MR_Box) (check_hlds__mode_ordering__GoalId_13)), &check_hlds__mode_ordering__conv0_GoalPath_14);
    }
    check_hlds__mode_ordering__GoalPath_14 = ((MR_Word) check_hlds__mode_ordering__conv0_GoalPath_14);
    {
      check_hlds__mode_ordering__succeeded = mdbcomp__goal_path__goal_path_get_last_2_p_0(check_hlds__mode_ordering__GoalPath_14, &check_hlds__mode_ordering__LastStep_15);
    }
    if (check_hlds__mode_ordering__succeeded)
      {
        check_hlds__mode_ordering__succeeded = ((MR_tag((MR_Word) check_hlds__mode_ordering__LastStep_15)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__mode_ordering__succeeded)
          check_hlds__mode_ordering__Index0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__LastStep_15, (MR_Integer) 0)));
      }
    if (check_hlds__mode_ordering__succeeded)
      check_hlds__mode_ordering__Index_10 = check_hlds__mode_ordering__Index0_16;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "goal_path error");
        }
      }
    {
      check_hlds__mode_ordering__LambdaHeadVar__3_38 = mercury__map__det_insert_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__mode_ordering__LambdaHeadVar__2_37, ((MR_Box) (check_hlds__mode_ordering__Index_10)), ((MR_Box) (check_hlds__mode_ordering__LambdaHeadVar__1_36)));
    }
    return check_hlds__mode_ordering__LambdaHeadVar__3_38;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1(
  void * check_hlds__mode_ordering__env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

    {
      {
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_158, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48);
      }
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
        {
          *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__LambdaHeadVar__1_126) = (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49;
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = MR_TRUE;
        }
      else
        {
          {
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_158, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49);
          }
          if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
            {
              *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__LambdaHeadVar__1_126) = (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48;
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = MR_TRUE;
            }
        }
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
        {
          ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(
  MR_Word check_hlds__mode_ordering__VarA_37,
  MR_Word check_hlds__mode_ordering__InstGraph_42,
  MR_Word check_hlds__mode_ordering__VarB_43,
  MR_Word check_hlds__mode_ordering__ProdVars_158,
  MR_Word * check_hlds__mode_ordering__LambdaHeadVar__1_126,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s check_hlds__mode_ordering__env;

    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_158 = check_hlds__mode_ordering__ProdVars_158;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__LambdaHeadVar__1_126 = check_hlds__mode_ordering__LambdaHeadVar__1_126;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont = check_hlds__mode_ordering__cont;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
    {
      hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(check_hlds__mode_ordering__InstGraph_42, check_hlds__mode_ordering__VarA_37, check_hlds__mode_ordering__VarB_43, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49, check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1, &check_hlds__mode_ordering__env);
    }
  }
}

void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
  MR_Word check_hlds__mode_ordering__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__Cast_HeadVar1_4 = check_hlds__mode_ordering__HeadVar__2_2;
    MR_Word check_hlds__mode_ordering__Cast_HeadVar2_5 = check_hlds__mode_ordering__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], check_hlds__mode_ordering__HeadVar__1_1, ((MR_Box) (check_hlds__mode_ordering__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_ordering__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__Cast_HeadVar1_3 = check_hlds__mode_ordering__HeadVar__1_1;
    MR_Word check_hlds__mode_ordering__Cast_HeadVar2_4 = check_hlds__mode_ordering__HeadVar__2_2;

    {
      check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], ((MR_Box) (check_hlds__mode_ordering__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_ordering__Cast_HeadVar2_4)));
    }
    return check_hlds__mode_ordering__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
  MR_Word check_hlds__mode_ordering__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Integer check_hlds__mode_ordering__CastX_9 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;
    MR_Integer check_hlds__mode_ordering__CastY_10 = (MR_Integer) check_hlds__mode_ordering__HeadVar__3_3;

    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_9 == check_hlds__mode_ordering__CastY_10);
    if (check_hlds__mode_ordering__succeeded)
      *check_hlds__mode_ordering__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_ordering__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], &check_hlds__mode_ordering__V_8_8, ((MR_Box) (check_hlds__mode_ordering__V_4_4)), ((MR_Box) (check_hlds__mode_ordering__V_6_6)));
        }
        check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_8_8 == (MR_Integer) 0);
        check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
        if (check_hlds__mode_ordering__succeeded)
          *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_8_8;
        else
          {
            check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(check_hlds__mode_ordering__HeadVar__1_1, check_hlds__mode_ordering__V_5_5, check_hlds__mode_ordering__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Integer check_hlds__mode_ordering__CastX_7 = (MR_Integer) check_hlds__mode_ordering__HeadVar__1_1;
    MR_Integer check_hlds__mode_ordering__CastY_8 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;

    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_7 == check_hlds__mode_ordering__CastY_8);
    if (check_hlds__mode_ordering__succeeded)
      check_hlds__mode_ordering__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mode_ordering__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], ((MR_Box) (check_hlds__mode_ordering__V_3_3)), ((MR_Box) (check_hlds__mode_ordering__V_5_5)));
        }
        if (check_hlds__mode_ordering__succeeded)
          {
            check_hlds__mode_ordering__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(check_hlds__mode_ordering__V_4_4, check_hlds__mode_ordering__V_6_6);
          }
      }
    return check_hlds__mode_ordering__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
  MR_Word check_hlds__mode_ordering__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Integer check_hlds__mode_ordering__CastX_21 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;
    MR_Integer check_hlds__mode_ordering__CastY_22 = (MR_Integer) check_hlds__mode_ordering__HeadVar__3_3;

    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_21 == check_hlds__mode_ordering__CastY_22);
    if (check_hlds__mode_ordering__succeeded)
      *check_hlds__mode_ordering__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__mode_ordering__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__mode_ordering__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__mode_ordering__V_16_16;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[2], &check_hlds__mode_ordering__V_16_16, ((MR_Box) (check_hlds__mode_ordering__V_4_4)), ((MR_Box) (check_hlds__mode_ordering__V_10_10)));
        }
        check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_16_16 == (MR_Integer) 0);
        check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
        if (check_hlds__mode_ordering__succeeded)
          *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_16_16;
        else
          {
            MR_Word check_hlds__mode_ordering__V_17_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[3], &check_hlds__mode_ordering__V_17_17, ((MR_Box) (check_hlds__mode_ordering__V_5_5)), ((MR_Box) (check_hlds__mode_ordering__V_11_11)));
            }
            check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_17_17 == (MR_Integer) 0);
            check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
            if (check_hlds__mode_ordering__succeeded)
              *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_17_17;
            else
              {
                MR_Word check_hlds__mode_ordering__V_18_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[5], &check_hlds__mode_ordering__V_18_18, ((MR_Box) (check_hlds__mode_ordering__V_6_6)), ((MR_Box) (check_hlds__mode_ordering__V_12_12)));
                }
                check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_18_18 == (MR_Integer) 0);
                check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
                if (check_hlds__mode_ordering__succeeded)
                  *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_18_18;
                else
                  {
                    MR_Word check_hlds__mode_ordering__V_19_19;

                    {
                      hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_ordering__V_19_19, check_hlds__mode_ordering__V_7_7, check_hlds__mode_ordering__V_13_13);
                    }
                    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_19_19 == (MR_Integer) 0);
                    check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
                    if (check_hlds__mode_ordering__succeeded)
                      *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_19_19;
                    else
                      {
                        MR_Word check_hlds__mode_ordering__V_20_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], &check_hlds__mode_ordering__V_20_20, ((MR_Box) (check_hlds__mode_ordering__V_8_8)), ((MR_Box) (check_hlds__mode_ordering__V_14_14)));
                        }
                        check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_20_20 == (MR_Integer) 0);
                        check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
                        if (check_hlds__mode_ordering__succeeded)
                          *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_20_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[5], check_hlds__mode_ordering__HeadVar__1_1, ((MR_Box) (check_hlds__mode_ordering__V_9_9)), ((MR_Box) (check_hlds__mode_ordering__V_15_15)));
                            }
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
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Integer check_hlds__mode_ordering__CastX_15 = (MR_Integer) check_hlds__mode_ordering__HeadVar__1_1;
    MR_Integer check_hlds__mode_ordering__CastY_16 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;

    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_15 == check_hlds__mode_ordering__CastY_16);
    if (check_hlds__mode_ordering__succeeded)
      check_hlds__mode_ordering__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mode_ordering__TypeInfo_18_18;
        MR_Word check_hlds__mode_ordering__TypeInfo_19_19;
        MR_Word check_hlds__mode_ordering__TypeInfo_21_21;
        MR_Word check_hlds__mode_ordering__TypeInfo_22_22;
        MR_Word check_hlds__mode_ordering__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__mode_ordering__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__mode_ordering__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 5)));

        {
          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[2], ((MR_Box) (check_hlds__mode_ordering__V_3_3)), ((MR_Box) (check_hlds__mode_ordering__V_9_9)));
        }
        if (check_hlds__mode_ordering__succeeded)
          {
            check_hlds__mode_ordering__TypeInfo_18_18 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[3];
            {
              check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_18_18, ((MR_Box) (check_hlds__mode_ordering__V_4_4)), ((MR_Box) (check_hlds__mode_ordering__V_10_10)));
            }
            if (check_hlds__mode_ordering__succeeded)
              {
                check_hlds__mode_ordering__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[5];
                {
                  check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_19_19, ((MR_Box) (check_hlds__mode_ordering__V_5_5)), ((MR_Box) (check_hlds__mode_ordering__V_11_11)));
                }
                if (check_hlds__mode_ordering__succeeded)
                  {
                    {
                      check_hlds__mode_ordering__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_ordering__V_6_6, check_hlds__mode_ordering__V_12_12);
                    }
                    if (check_hlds__mode_ordering__succeeded)
                      {
                        check_hlds__mode_ordering__TypeInfo_21_21 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[4];
                        {
                          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_21_21, ((MR_Box) (check_hlds__mode_ordering__V_7_7)), ((MR_Box) (check_hlds__mode_ordering__V_13_13)));
                        }
                        if (check_hlds__mode_ordering__succeeded)
                          {
                            check_hlds__mode_ordering__TypeInfo_22_22 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[5];
                            {
                              check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_22_22, ((MR_Box) (check_hlds__mode_ordering__V_8_8)), ((MR_Box) (check_hlds__mode_ordering__V_14_14)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__mode_ordering__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
  void * check_hlds__mode_ordering__env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_LambdaHeadVar__1_31));
    {
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s check_hlds__mode_ordering__env;

    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont = check_hlds__mode_ordering__cont;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
    {
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

      {
        check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 8))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_LambdaHeadVar__1_31, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4, &check_hlds__mode_ordering__env);
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
  void * check_hlds__mode_ordering__env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
  void * check_hlds__mode_ordering__env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

    {
      MR_Word check_hlds__mode_ordering__V_26_26;
      MR_Word check_hlds__mode_ordering__V_27_27;
      MR_Word check_hlds__mode_ordering__V_28_28;
      MR_Word check_hlds__mode_ordering__V_29_29;

      {
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
      }
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
        {
          {
            check_hlds__mode_ordering__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_27_27, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
          }
          {
            check_hlds__mode_ordering__V_26_26 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_27_27);
          }
          {
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_26_26);
          }
          if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
            {
              {
                check_hlds__mode_ordering__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_29_29, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
              }
              {
                check_hlds__mode_ordering__V_28_28 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_29_29);
              }
              {
                (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_28_28);
              }
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
            }
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
        }
    }
    if (!((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded))
      {
        MR_Word check_hlds__mode_ordering__V_34_34;
        MR_Word check_hlds__mode_ordering__V_35_35;
        MR_Word check_hlds__mode_ordering__V_36_36;
        MR_Word check_hlds__mode_ordering__V_37_37;
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_42_42;

        {
          check_hlds__mode_ordering__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_35_35, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
        }
        {
          check_hlds__mode_ordering__V_34_34 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_35_35);
        }
        {
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_34_34);
        }
        if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
          {
            {
              check_hlds__mode_ordering__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_37_37, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
            }
            {
              check_hlds__mode_ordering__V_36_36 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_37_37);
            }
            {
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_36_36);
            }
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
            if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
              {
                check_hlds__mode_ordering__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0(check_hlds__mode_ordering__TypeCtorInfo_42_42, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
                }
                (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
              }
          }
      }
    if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
      {
        check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(check_hlds__mode_ordering__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
  void * check_hlds__mode_ordering__env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0) == 0)
      {
        {
          hlds__inst_graph__corresponding_nodes_from_lists_6_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19, &(check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22, &(check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2, check_hlds__mode_ordering__env_ptr);
        }
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__ProdVars_12,
  MR_Word check_hlds__mode_ordering__Args_13,
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
  MR_Word check_hlds__mode_ordering__MCInfo_16,
  MR_Integer * check_hlds__mode_ordering__ProcId_17,
  MR_Word * check_hlds__mode_ordering__ConsumingVars_18)
{
  {
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s check_hlds__mode_ordering__env;

    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12 = check_hlds__mode_ordering__ProdVars_12;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13 = check_hlds__mode_ordering__Args_13;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14 = check_hlds__mode_ordering__CallerInstGraph_14;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15 = check_hlds__mode_ordering__CalleeInstGraph_15;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16 = check_hlds__mode_ordering__MCInfo_16;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        {
          MR_Integer check_hlds__mode_ordering__ProcId0_9;
          MR_Word check_hlds__mode_ordering__ProcInfo_10;
          MR_Word check_hlds__mode_ordering__ProcList_11;
          MR_Word check_hlds__mode_ordering__Constraint0_20;
          MR_Word check_hlds__mode_ordering__V_25_25;

          (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__mode_ordering__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
          if ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
            {
              check_hlds__mode_ordering__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
              check_hlds__mode_ordering__ProcList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
              check_hlds__mode_ordering__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_25_25, (MR_Integer) 0)));
              check_hlds__mode_ordering__ProcInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_25_25, (MR_Integer) 1)));
              {
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__mode_ordering__ProcInfo_10, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19);
              }
              {
                hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(check_hlds__mode_ordering__ProcInfo_10, &check_hlds__mode_ordering__Constraint0_20);
              }
              {
                (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_ordering__Constraint0_20);
              }
              {
                check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(&check_hlds__mode_ordering__env);
              }
              (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
              if ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
                {
                  MR_Word check_hlds__mode_ordering__ConsumingVarsList_24;
                  MR_Word check_hlds__mode_ordering__V_30_30;

                  *check_hlds__mode_ordering__ProcId_17 = check_hlds__mode_ordering__ProcId0_9;
                  {
                    check_hlds__mode_ordering__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_7[0]));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 1) = ((MR_Box) (check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 3) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 4) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 5) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 6) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 7) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19));
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 8) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21));
                  }
                  {
                    check_hlds__mode_ordering__ConsumingVarsList_24 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_30_30);
                  }
                  {
                    parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ConsumingVarsList_24, check_hlds__mode_ordering__ConsumingVars_18);
                  }
                  (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
                }
              else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__mode_ordering__HeadVar__1__tmp_copy_1 = check_hlds__mode_ordering__ProcList_11;

                    check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
            }
          return (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded;
        }
        break;
      }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_7_p_0(
  MR_Word check_hlds__mode_ordering__PredId_8,
  MR_Word check_hlds__mode_ordering__Args_9,
  MR_Word check_hlds__mode_ordering__ProdVars_10,
  MR_Integer * check_hlds__mode_ordering__ProcId_11,
  MR_Word * check_hlds__mode_ordering__ConsumingVars_12,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_27)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 3)));
    MR_Word check_hlds__mode_ordering__CallerInstGraph_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 0)));
    MR_Word check_hlds__mode_ordering__PredConstraintMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 4)));
    MR_Word check_hlds__mode_ordering__MCInfo_18;
    MR_Word check_hlds__mode_ordering__PredInfo_19;
    MR_Word check_hlds__mode_ordering__CalleeInstGraphInfo_20;
    MR_Word check_hlds__mode_ordering__CalleeInstGraph_21;
    MR_Word check_hlds__mode_ordering__ProcTable_22;
    MR_Word check_hlds__mode_ordering__ProcList_23;
    MR_Word check_hlds__mode_ordering__V_55_55;
    MR_Word check_hlds__mode_ordering__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 1)));
    MR_Word check_hlds__mode_ordering__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 2)));
    MR_Word check_hlds__mode_ordering__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 5)));
    MR_Box check_hlds__mode_ordering__conv0_V_55_55;
    MR_Word check_hlds__mode_ordering__V_17_17;
    MR_Integer check_hlds__mode_ordering__ProcId0_24;
    MR_Word check_hlds__mode_ordering__ConsumingVars0_25;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0, check_hlds__mode_ordering__PredConstraintMap_16, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv0_V_55_55);
    }
    check_hlds__mode_ordering__V_55_55 = ((MR_Word) check_hlds__mode_ordering__conv0_V_55_55);
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_55_55, (MR_Integer) 0)));
    check_hlds__mode_ordering__MCInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_55_55, (MR_Integer) 1)));
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_ordering__ModuleInfo_14, check_hlds__mode_ordering__PredId_8, &check_hlds__mode_ordering__PredInfo_19);
    }
    {
      hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(check_hlds__mode_ordering__PredInfo_19, &check_hlds__mode_ordering__CalleeInstGraphInfo_20);
    }
    {
      check_hlds__mode_ordering__CalleeInstGraph_21 = hlds__inst_graph__interface_inst_graph_1_f_0(check_hlds__mode_ordering__CalleeInstGraphInfo_20);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__mode_ordering__PredInfo_19, &check_hlds__mode_ordering__ProcTable_22);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__mode_ordering__ProcTable_22, &check_hlds__mode_ordering__ProcList_23);
    }
    {
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering__find_matching_proc_2_8_p_0(check_hlds__mode_ordering__ProcList_23, check_hlds__mode_ordering__ProdVars_10, check_hlds__mode_ordering__Args_9, check_hlds__mode_ordering__CallerInstGraph_15, check_hlds__mode_ordering__CalleeInstGraph_21, check_hlds__mode_ordering__MCInfo_18, &check_hlds__mode_ordering__ProcId0_24, &check_hlds__mode_ordering__ConsumingVars0_25);
    }
    if (check_hlds__mode_ordering__succeeded)
      {
        *check_hlds__mode_ordering__ProcId_11 = check_hlds__mode_ordering__ProcId0_24;
        *check_hlds__mode_ordering__ConsumingVars_12 = check_hlds__mode_ordering__ConsumingVars0_25;
      }
    else
      {
        {
          check_hlds__mode_ordering__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__mode_ordering__PredInfo_19);
        }
        if (check_hlds__mode_ordering__succeeded)
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
    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_27 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(
  MR_Word * check_hlds__mode_ordering__ProdVars_6,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_16)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaNesting_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 2)));
    MR_Word check_hlds__mode_ordering__AtomicProdVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 1)));
    MR_Word check_hlds__mode_ordering__GoalId_11;
    MR_Word check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 0)));
    MR_Word check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 3)));
    MR_Word check_hlds__mode_ordering__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 4)));
    MR_Word check_hlds__mode_ordering__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 5)));
    MR_Word check_hlds__mode_ordering__ProdVars0_12;
    MR_Word check_hlds__mode_ordering__V_17_17;
    MR_Box check_hlds__mode_ordering__conv0_ProdVars0_12;

    {
      check_hlds__mode_ordering__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13);
    }
    {
      check_hlds__mode_ordering__V_17_17 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_ordering__LambdaNesting_9, ((MR_Box) (check_hlds__mode_ordering__GoalId_11)));
    }
    {
      check_hlds__mode_ordering__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[5], (MR_Word) &check_hlds__mode_ordering_scalar_common_1[6], check_hlds__mode_ordering__AtomicProdVars_10, ((MR_Box) (check_hlds__mode_ordering__V_17_17)), &check_hlds__mode_ordering__conv0_ProdVars0_12);
    }
    if (check_hlds__mode_ordering__succeeded)
      {
        check_hlds__mode_ordering__ProdVars0_12 = ((MR_Word) check_hlds__mode_ordering__conv0_ProdVars0_12);
        check_hlds__mode_ordering__succeeded = MR_TRUE;
      }
    if (check_hlds__mode_ordering__succeeded)
      *check_hlds__mode_ordering__ProdVars_6 = check_hlds__mode_ordering__ProdVars0_12;
    else
      {
        {
          *check_hlds__mode_ordering__ProdVars_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
      }
    {
      hlds__hlds_goal__goal_info_set_producing_vars_3_p_0(*check_hlds__mode_ordering__ProdVars_6, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14);
    }
    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_16 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv6_LambdaHeadVar__4_73;

    {
      check_hlds__mode_ordering__conv6_LambdaHeadVar__4_73 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv6_LambdaHeadVar__4_73));
    return check_hlds__mode_ordering__wrapper_arg_4;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv4_LambdaHeadVar__4_60;

    {
      check_hlds__mode_ordering__conv4_LambdaHeadVar__4_60 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0(((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv4_LambdaHeadVar__4_60));
    return check_hlds__mode_ordering__wrapper_arg_4;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv2_LambdaHeadVar__4_47;

    {
      check_hlds__mode_ordering__conv2_LambdaHeadVar__4_47 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0(((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv2_LambdaHeadVar__4_47));
    return check_hlds__mode_ordering__wrapper_arg_4;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv0_LambdaHeadVar__3_38;

    {
      check_hlds__mode_ordering__conv0_LambdaHeadVar__3_38 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_LambdaHeadVar__3_38));
    return check_hlds__mode_ordering__wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
  MR_Word check_hlds__mode_ordering__Goals0_5,
  MR_Word * check_hlds__mode_ordering__Goals_6)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_134_134;
    MR_Word check_hlds__mode_ordering__TypeInfo_135_135;
    MR_Word check_hlds__mode_ordering__TypeInfo_141_141;
    MR_Word check_hlds__mode_ordering__GoalMap_7;
    MR_Word check_hlds__mode_ordering__ProdMap_17;
    MR_Word check_hlds__mode_ordering__MakeVisMap_22;
    MR_Word check_hlds__mode_ordering__Graph_25;
    MR_Word check_hlds__mode_ordering__V_35_35;
    MR_Word check_hlds__mode_ordering__V_42_42;
    MR_Word check_hlds__mode_ordering__V_55_55;
    MR_Word check_hlds__mode_ordering__V_68_68;
    MR_Word check_hlds__mode_ordering__V_69_69;
    MR_Word check_hlds__mode_ordering__V_99_99;
    MR_Box check_hlds__mode_ordering__conv1_GoalMap_7;
    MR_Box check_hlds__mode_ordering__conv3_ProdMap_17;
    MR_Box check_hlds__mode_ordering__conv5_MakeVisMap_22;
    MR_Box check_hlds__mode_ordering__conv7_Graph_25;
    MR_Word check_hlds__mode_ordering__TSort_34;

    {
      check_hlds__mode_ordering__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 3) = ((MR_Box) (check_hlds__mode_ordering__ForwardGoalPathMap_4));
    }
    check_hlds__mode_ordering__TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      check_hlds__mode_ordering__V_42_42 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128);
    }
    {
      check_hlds__mode_ordering__conv1_GoalMap_7 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[0], check_hlds__mode_ordering__V_35_35, check_hlds__mode_ordering__Goals0_5, ((MR_Box) (check_hlds__mode_ordering__V_42_42)));
    }
    check_hlds__mode_ordering__GoalMap_7 = ((MR_Word) check_hlds__mode_ordering__conv1_GoalMap_7);
    check_hlds__mode_ordering__TypeInfo_135_135 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1];
    check_hlds__mode_ordering__TypeInfo_141_141 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[3];
    {
      check_hlds__mode_ordering__V_55_55 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeInfo_141_141, check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
    {
      check_hlds__mode_ordering__conv3_ProdMap_17 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TypeInfo_135_135, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[11], check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_55_55)));
    }
    check_hlds__mode_ordering__ProdMap_17 = ((MR_Word) check_hlds__mode_ordering__conv3_ProdMap_17);
    {
      check_hlds__mode_ordering__V_68_68 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeInfo_141_141, check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
    {
      check_hlds__mode_ordering__conv5_MakeVisMap_22 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TypeInfo_135_135, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[12], check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_68_68)));
    }
    check_hlds__mode_ordering__MakeVisMap_22 = ((MR_Word) check_hlds__mode_ordering__conv5_MakeVisMap_22);
    {
      check_hlds__mode_ordering__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_4));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 3) = ((MR_Box) (check_hlds__mode_ordering__ProdMap_17));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 4) = ((MR_Box) (check_hlds__mode_ordering__MakeVisMap_22));
    }
    {
      check_hlds__mode_ordering__V_99_99 = mercury__digraph__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
    {
      check_hlds__mode_ordering__conv7_Graph_25 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_ordering_scalar_common_1[4], check_hlds__mode_ordering__V_69_69, check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_99_99)));
    }
    check_hlds__mode_ordering__Graph_25 = ((MR_Word) check_hlds__mode_ordering__conv7_Graph_25);
    {
      check_hlds__mode_ordering__succeeded = mercury__digraph__tsort_2_p_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__Graph_25, &check_hlds__mode_ordering__TSort_34);
    }
    if (check_hlds__mode_ordering__succeeded)
      {
        *check_hlds__mode_ordering__Goals_6 = mercury__map__apply_to_list_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TSort_34, check_hlds__mode_ordering__GoalMap_7);
      }
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
  MR_Word check_hlds__mode_ordering__GI_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8;
    MR_Word check_hlds__mode_ordering__V_9_9;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10;
    MR_Word check_hlds__mode_ordering__V_11_11;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12;
    MR_Word check_hlds__mode_ordering__V_13_13;
    MR_Word check_hlds__mode_ordering__V_15_15;

    {
      check_hlds__mode_ordering__V_9_9 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6, check_hlds__mode_ordering__V_9_9);
    }
    {
      check_hlds__mode_ordering__V_11_11 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8, check_hlds__mode_ordering__V_11_11);
    }
    {
      check_hlds__mode_ordering__V_13_13 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10, check_hlds__mode_ordering__V_13_13);
    }
    {
      check_hlds__mode_ordering__V_15_15 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
    {
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12, check_hlds__mode_ordering__V_15_15);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
  MR_Word check_hlds__mode_ordering__Goal_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_26_26;
    MR_Word check_hlds__mode_ordering__ProdVars0_6;
    MR_Word check_hlds__mode_ordering__ConsumVars0_7;
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_8;
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_9;
    MR_Word check_hlds__mode_ordering__GI_11;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14;
    MR_Word check_hlds__mode_ordering__V_15_15;
    MR_Word check_hlds__mode_ordering__V_16_16;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17;
    MR_Word check_hlds__mode_ordering__V_18_18;
    MR_Word check_hlds__mode_ordering__V_19_19;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20;
    MR_Word check_hlds__mode_ordering__V_21_21;
    MR_Word check_hlds__mode_ordering__V_22_22;
    MR_Word check_hlds__mode_ordering__V_24_24;
    MR_Word check_hlds__mode_ordering__V_25_25;
    MR_Word check_hlds__mode_ordering__V_10_10;

    {
      check_hlds__mode_ordering__ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
    {
      check_hlds__mode_ordering__ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
    {
      check_hlds__mode_ordering__MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
    {
      check_hlds__mode_ordering__NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
    check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_4, (MR_Integer) 0)));
    check_hlds__mode_ordering__GI_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_4, (MR_Integer) 1)));
    check_hlds__mode_ordering__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      check_hlds__mode_ordering__V_16_16 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
    {
      check_hlds__mode_ordering__V_15_15 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__ProdVars0_6, check_hlds__mode_ordering__V_16_16);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12, check_hlds__mode_ordering__V_15_15);
    }
    {
      check_hlds__mode_ordering__V_19_19 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
    {
      check_hlds__mode_ordering__V_18_18 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__ConsumVars0_7, check_hlds__mode_ordering__V_19_19);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14, check_hlds__mode_ordering__V_18_18);
    }
    {
      check_hlds__mode_ordering__V_22_22 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
    {
      check_hlds__mode_ordering__V_21_21 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__MakeVisibleVars0_8, check_hlds__mode_ordering__V_22_22);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17, check_hlds__mode_ordering__V_21_21);
    }
    {
      check_hlds__mode_ordering__V_25_25 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
    {
      check_hlds__mode_ordering__V_24_24 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__NeedVisibleVars0_9, check_hlds__mode_ordering__V_25_25);
    }
    {
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20, check_hlds__mode_ordering__V_24_24);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13;

    {
      check_hlds__mode_ordering__union_mode_vars_set_3_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13);
    }
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
  MR_Word check_hlds__mode_ordering__Goals_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7;

    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[10], check_hlds__mode_ordering__Goals_4, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7);
    }
    *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
  MR_Word check_hlds__mode_ordering__GI_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_24_24;
    MR_Word check_hlds__mode_ordering__ProdVars0_6;
    MR_Word check_hlds__mode_ordering__ConsumVars0_7;
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_8;
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_9;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12;
    MR_Word check_hlds__mode_ordering__V_13_13;
    MR_Word check_hlds__mode_ordering__V_14_14;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15;
    MR_Word check_hlds__mode_ordering__V_16_16;
    MR_Word check_hlds__mode_ordering__V_17_17;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18;
    MR_Word check_hlds__mode_ordering__V_19_19;
    MR_Word check_hlds__mode_ordering__V_20_20;
    MR_Word check_hlds__mode_ordering__V_22_22;
    MR_Word check_hlds__mode_ordering__V_23_23;

    {
      check_hlds__mode_ordering__ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
    {
      check_hlds__mode_ordering__ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
    {
      check_hlds__mode_ordering__MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
    {
      check_hlds__mode_ordering__NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
    check_hlds__mode_ordering__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      check_hlds__mode_ordering__V_14_14 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
    {
      check_hlds__mode_ordering__V_13_13 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__ProdVars0_6, check_hlds__mode_ordering__V_14_14);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10, check_hlds__mode_ordering__V_13_13);
    }
    {
      check_hlds__mode_ordering__V_17_17 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
    {
      check_hlds__mode_ordering__V_16_16 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__ConsumVars0_7, check_hlds__mode_ordering__V_17_17);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12, check_hlds__mode_ordering__V_16_16);
    }
    {
      check_hlds__mode_ordering__V_20_20 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
    {
      check_hlds__mode_ordering__V_19_19 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__MakeVisibleVars0_8, check_hlds__mode_ordering__V_20_20);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15, check_hlds__mode_ordering__V_19_19);
    }
    {
      check_hlds__mode_ordering__V_23_23 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
    {
      check_hlds__mode_ordering__V_22_22 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__NeedVisibleVars0_9, check_hlds__mode_ordering__V_23_23);
    }
    {
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18, check_hlds__mode_ordering__V_22_22);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_24_30;
    MR_Word check_hlds__mode_ordering__GI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__mode_ordering__ProdVars0_14;
    MR_Word check_hlds__mode_ordering__ConsumVars0_15;
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_16;
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_17;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18;
    MR_Word check_hlds__mode_ordering__V_19_19;
    MR_Word check_hlds__mode_ordering__V_20_20;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21;
    MR_Word check_hlds__mode_ordering__V_22_22;
    MR_Word check_hlds__mode_ordering__V_23_23;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24;
    MR_Word check_hlds__mode_ordering__V_25_25;
    MR_Word check_hlds__mode_ordering__V_26_26;
    MR_Word check_hlds__mode_ordering__V_28_28;
    MR_Word check_hlds__mode_ordering__V_29_29;
    MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));

    {
      check_hlds__mode_ordering__ProdVars0_14 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
    {
      check_hlds__mode_ordering__ConsumVars0_15 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
    {
      check_hlds__mode_ordering__MakeVisibleVars0_16 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
    {
      check_hlds__mode_ordering__NeedVisibleVars0_17 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
    check_hlds__mode_ordering__TypeCtorInfo_24_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      check_hlds__mode_ordering__V_20_20 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
    {
      check_hlds__mode_ordering__V_19_19 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__ProdVars0_14, check_hlds__mode_ordering__V_20_20);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7, check_hlds__mode_ordering__V_19_19);
    }
    {
      check_hlds__mode_ordering__V_23_23 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
    {
      check_hlds__mode_ordering__V_22_22 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__ConsumVars0_15, check_hlds__mode_ordering__V_23_23);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18, check_hlds__mode_ordering__V_22_22);
    }
    {
      check_hlds__mode_ordering__V_26_26 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
    {
      check_hlds__mode_ordering__V_25_25 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__MakeVisibleVars0_16, check_hlds__mode_ordering__V_26_26);
    }
    {
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21, check_hlds__mode_ordering__V_25_25);
    }
    {
      check_hlds__mode_ordering__V_29_29 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
    {
      check_hlds__mode_ordering__V_28_28 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__NeedVisibleVars0_17, check_hlds__mode_ordering__V_29_29);
    }
    {
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24, check_hlds__mode_ordering__V_28_28);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8;

    {
      check_hlds__mode_ordering__mode_order_disj_2_3_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8);
    }
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;

    if ((check_hlds__mode_ordering__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3 = check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2;
    else
      {
        MR_Word check_hlds__mode_ordering__GI_8;
        MR_Word check_hlds__mode_ordering__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14;
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26;
        MR_Word check_hlds__mode_ordering__V_27_27;
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28;
        MR_Word check_hlds__mode_ordering__V_29_29;
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30;
        MR_Word check_hlds__mode_ordering__V_31_31;
        MR_Word check_hlds__mode_ordering__V_33_33;
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_13_13, (MR_Integer) 0)));
        MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3;

        check_hlds__mode_ordering__GI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_13_13, (MR_Integer) 1)));
        {
          check_hlds__mode_ordering__V_27_27 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
        {
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2, check_hlds__mode_ordering__V_27_27);
        }
        {
          check_hlds__mode_ordering__V_29_29 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
        {
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26, check_hlds__mode_ordering__V_29_29);
        }
        {
          check_hlds__mode_ordering__V_31_31 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
        {
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28, check_hlds__mode_ordering__V_31_31);
        }
        {
          check_hlds__mode_ordering__V_33_33 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
        {
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30, check_hlds__mode_ordering__V_33_33);
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[9], check_hlds__mode_ordering__Goals_9, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3);
        }
        *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3);
      }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
  void * check_hlds__mode_ordering__env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_126));
    {
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s check_hlds__mode_ordering__env;

    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont = check_hlds__mode_ordering__cont;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
    {
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

      {
        check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_LambdaHeadVar__1_126, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6, &check_hlds__mode_ordering__env);
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
  void * check_hlds__mode_ordering__env_ptr_arg)
{
  {
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3));
    {
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
  MR_Cont check_hlds__mode_ordering__cont,
  void * check_hlds__mode_ordering__cont_env_ptr)
{
  {
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s check_hlds__mode_ordering__env;

    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont = check_hlds__mode_ordering__cont;
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
    {
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

      {
        hlds__inst_graph__reachable_from_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4, &check_hlds__mode_ordering__env);
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv7_Goal_6;
    MR_Word check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13;

    {
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv7_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13);
    }
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv7_Goal_6));
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv4_Goal_6;
    MR_Word check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13;

    {
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv4_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13);
    }
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv4_Goal_6));
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv1_Goal_6;
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13;

    {
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv1_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13);
    }
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv1_Goal_6));
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
  MR_Word check_hlds__mode_ordering__GoalExpr0_7,
  MR_Word * check_hlds__mode_ordering__GoalExpr_8,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_84)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;

    switch (MR_tag((MR_Word) check_hlds__mode_ordering__GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mode_ordering__V_110_110;
          MR_Word check_hlds__mode_ordering__SubGoal0_164 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_ordering__GoalExpr0_7), (MR_Integer) 0);
          MR_Word check_hlds__mode_ordering__SubGoal_165;
          MR_Word check_hlds__mode_ordering__V_186_186;

          {
            check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_164, &check_hlds__mode_ordering__SubGoal_165, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
          }
          check_hlds__mode_ordering__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_165, (MR_Integer) 0)));
          check_hlds__mode_ordering__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_165, (MR_Integer) 1)));
          {
            check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(check_hlds__mode_ordering__V_110_110, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
          *check_hlds__mode_ordering__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__mode_ordering__SubGoal_165);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mode_ordering__VarA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
          MR_Word check_hlds__mode_ordering__RHS0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
          MR_Word check_hlds__mode_ordering__UnifyMode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
          MR_Word check_hlds__mode_ordering__Unification0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
          MR_Word check_hlds__mode_ordering__Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
          MR_Word check_hlds__mode_ordering__InstGraph_42;
          MR_Word check_hlds__mode_ordering__RHS_44;
          MR_Word check_hlds__mode_ordering__Unification_45;
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115;
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127;
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128;
          MR_Word check_hlds__mode_ordering__ProdVars_158;
          MR_Word check_hlds__mode_ordering__MakeVisibleVars_159;
          MR_Word check_hlds__mode_ordering__ConsumingVars_160;
          MR_Word check_hlds__mode_ordering__NeedVisibleVars_161;
          MR_Word check_hlds__mode_ordering__V_181_181;
          MR_Word check_hlds__mode_ordering__V_182_182;
          MR_Word check_hlds__mode_ordering__V_183_183;
          MR_Word check_hlds__mode_ordering__V_184_184;
          MR_Word check_hlds__mode_ordering__V_185_185;

          {
            check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116);
          }
          check_hlds__mode_ordering__InstGraph_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 0)));
          check_hlds__mode_ordering__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 1)));
          check_hlds__mode_ordering__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 2)));
          check_hlds__mode_ordering__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 3)));
          check_hlds__mode_ordering__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 4)));
          check_hlds__mode_ordering__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 5)));
          switch (MR_tag((MR_Word) check_hlds__mode_ordering__RHS0_38)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__mode_ordering__VarB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)));
                MR_Word check_hlds__mode_ordering__ConsumingVarsList_46;
                MR_Word check_hlds__mode_ordering__V_125_125;

                check_hlds__mode_ordering__RHS_44 = check_hlds__mode_ordering__RHS0_38;
                {
                  check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarA_37);
                }
                if (check_hlds__mode_ordering__succeeded)
                  {
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_204_204;

                    {
                      check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
                      MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
                    }
                    check_hlds__mode_ordering__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_204_204, check_hlds__mode_ordering__VarA_37);
                    }
                    {
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_204_204, check_hlds__mode_ordering__VarB_43);
                    }
                  }
                else
                  {
                    {
                      check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarB_43);
                    }
                    if (check_hlds__mode_ordering__succeeded)
                      {
                        MR_Word check_hlds__mode_ordering__TypeCtorInfo_206_206;

                        {
                          check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
                          MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
                        }
                        check_hlds__mode_ordering__TypeCtorInfo_206_206 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_206_206, check_hlds__mode_ordering__VarB_43);
                        }
                        {
                          check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_206_206, check_hlds__mode_ordering__VarA_37);
                        }
                      }
                    else
                      {
                        MR_Word check_hlds__mode_ordering__TypeCtorInfo_207_207;
                        MR_Word check_hlds__mode_ordering__V_122_122;
                        MR_Word check_hlds__mode_ordering__V_123_123;

                        {
                          check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 2) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
                        }
                        check_hlds__mode_ordering__TypeCtorInfo_207_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_207_207);
                        }
                        {
                          check_hlds__mode_ordering__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_123_123, 0) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__mode_ordering__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_122_122, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_122_122, 1) = ((MR_Box) (check_hlds__mode_ordering__V_123_123));
                        }
                        {
                          check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_207_207, check_hlds__mode_ordering__V_122_122);
                        }
                      }
                  }
                {
                  check_hlds__mode_ordering__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 3) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 4) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_42));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 5) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 6) = ((MR_Box) (check_hlds__mode_ordering__ProdVars_158));
                }
                {
                  check_hlds__mode_ordering__ConsumingVarsList_46 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_125_125);
                }
                {
                  check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ConsumingVarsList_46);
                }
                *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__mode_ordering__ArgVars_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 2)));
                MR_Word check_hlds__mode_ordering___ConsId_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)));
                MR_Word check_hlds__mode_ordering___IsExistConstruct_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 1)));

                check_hlds__mode_ordering__RHS_44 = check_hlds__mode_ordering__RHS0_38;
                {
                  check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarA_37);
                }
                if (check_hlds__mode_ordering__succeeded)
                  {
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_213_213;
                    MR_Word check_hlds__mode_ordering__V_121_121;

                    check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
                    check_hlds__mode_ordering__TypeCtorInfo_213_213 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213);
                    }
                    {
                      check_hlds__mode_ordering__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_121_121, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
                      MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_121_121, 1) = ((MR_Box) (check_hlds__mode_ordering__ArgVars_52));
                    }
                    {
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213, check_hlds__mode_ordering__V_121_121);
                    }
                    {
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213);
                    }
                  }
                else
                  {
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_214_214;

                    check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
                    check_hlds__mode_ordering__TypeCtorInfo_214_214 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__VarA_37);
                    }
                    {
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__ArgVars_52);
                    }
                    {
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__VarA_37);
                    }
                  }
                *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__mode_ordering__TypeCtorInfo_217_217;
                MR_Word check_hlds__mode_ordering__A_53;
                MR_Word check_hlds__mode_ordering__B_54;
                MR_Word check_hlds__mode_ordering__C_55;
                MR_Word check_hlds__mode_ordering__NonLocals_57;
                MR_Word check_hlds__mode_ordering__LambdaVars_58;
                MR_Word check_hlds__mode_ordering__H_60;
                MR_Word check_hlds__mode_ordering__SubGoal0_61;
                MR_Word check_hlds__mode_ordering__Modes_62;
                MR_Word check_hlds__mode_ordering__SubGoal_63;
                MR_Word check_hlds__mode_ordering__GoalId_64;
                MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117;
                MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118;
                MR_Word check_hlds__mode_ordering__V_120_120;
                MR_Word check_hlds__mode_ordering__ConsumingVarsList_157;

                check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
                check_hlds__mode_ordering__A_53 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) & (MR_Integer) 3);
                check_hlds__mode_ordering__B_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                check_hlds__mode_ordering__C_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                check_hlds__mode_ordering__NonLocals_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 2)));
                check_hlds__mode_ordering__LambdaVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 3)));
                check_hlds__mode_ordering__Modes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 4)));
                check_hlds__mode_ordering__H_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 5)));
                check_hlds__mode_ordering__SubGoal0_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 6)));
                {
                  check_hlds__mode_ordering__GoalId_64 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115);
                }
                {
                  check_hlds__mode_ordering__enter_lambda_goal_3_p_0(check_hlds__mode_ordering__GoalId_64, check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117);
                }
                {
                  check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_61, &check_hlds__mode_ordering__SubGoal_63, check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118);
                }
                {
                  check_hlds__mode_ordering__RHS_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 0) = ((MR_Box) ((check_hlds__mode_ordering__A_53 | ((((check_hlds__mode_ordering__B_54 << (MR_Integer) 2)) | ((check_hlds__mode_ordering__C_55 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 2) = ((MR_Box) (check_hlds__mode_ordering__NonLocals_57));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 3) = ((MR_Box) (check_hlds__mode_ordering__LambdaVars_58));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 4) = ((MR_Box) (check_hlds__mode_ordering__Modes_62));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 5) = ((MR_Box) (check_hlds__mode_ordering__H_60));
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 6) = ((MR_Box) (check_hlds__mode_ordering__SubGoal_63));
                }
                {
                  check_hlds__mode_ordering__leave_lambda_goal_2_p_0(check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
                }
                {
                  check_hlds__mode_ordering__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 3) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_42));
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 4) = ((MR_Box) (check_hlds__mode_ordering__NonLocals_57));
                }
                {
                  check_hlds__mode_ordering__ConsumingVarsList_157 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_120_120);
                }
                check_hlds__mode_ordering__TypeCtorInfo_217_217 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__ConsumingVarsList_157);
                }
                {
                  check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__VarA_37);
                }
                {
                  check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__NonLocals_57);
                }
              }
              break;
          }
          {
            hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(check_hlds__mode_ordering__ConsumingVars_160, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127);
          }
          {
            hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(check_hlds__mode_ordering__MakeVisibleVars_159, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128);
          }
          {
            hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(check_hlds__mode_ordering__NeedVisibleVars_161, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__mode_ordering__GoalExpr_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_ordering__RHS_44));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__mode_ordering__UnifyMode_39));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__mode_ordering__Unification_45));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__mode_ordering__Context_41));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__mode_ordering__TypeCtorInfo_202_202;
          MR_Word check_hlds__mode_ordering__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
          MR_Word check_hlds__mode_ordering__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
          MR_Word check_hlds__mode_ordering__ProdVars_24;
          MR_Word check_hlds__mode_ordering__MakeVisibleVars_25;
          MR_Integer check_hlds__mode_ordering__ProcId_26;
          MR_Word check_hlds__mode_ordering__ConsumingVars_27;
          MR_Word check_hlds__mode_ordering__NeedVisibleVars_28;
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136;
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137;
          MR_Word check_hlds__mode_ordering__V_138_138;
          MR_Word check_hlds__mode_ordering__V_140_140;
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141;
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142;
          MR_Integer check_hlds__mode_ordering__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
          MR_Word check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
          MR_Word check_hlds__mode_ordering__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
          MR_Word check_hlds__mode_ordering__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 5)));
          MR_Word check_hlds__mode_ordering__V_175_175;
          MR_Word check_hlds__mode_ordering__V_177_177;
          MR_Word check_hlds__mode_ordering__V_178_178;
          MR_Word check_hlds__mode_ordering__V_179_179;
          MR_Word check_hlds__mode_ordering__V_180_180;
          MR_Integer check_hlds__mode_ordering__V_176_176;

          {
            check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&check_hlds__mode_ordering__ProdVars_24, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137);
          }
          check_hlds__mode_ordering__TypeCtorInfo_202_202 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            check_hlds__mode_ordering__V_138_138 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__Args_20);
          }
          {
            check_hlds__mode_ordering__MakeVisibleVars_25 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__V_138_138, check_hlds__mode_ordering__ProdVars_24);
          }
          {
            check_hlds__mode_ordering__find_matching_proc_7_p_0(check_hlds__mode_ordering__PredId_18, check_hlds__mode_ordering__Args_20, check_hlds__mode_ordering__ProdVars_24, &check_hlds__mode_ordering__ProcId_26, &check_hlds__mode_ordering__ConsumingVars_27, check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
          }
          {
            check_hlds__mode_ordering__V_140_140 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__Args_20);
          }
          {
            check_hlds__mode_ordering__NeedVisibleVars_28 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__V_140_140, check_hlds__mode_ordering__ConsumingVars_27);
          }
          {
            hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(check_hlds__mode_ordering__ConsumingVars_27, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141);
          }
          {
            hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(check_hlds__mode_ordering__MakeVisibleVars_25, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142);
          }
          {
            hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(check_hlds__mode_ordering__NeedVisibleVars_28, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
          check_hlds__mode_ordering__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
          check_hlds__mode_ordering__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
          check_hlds__mode_ordering__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
          check_hlds__mode_ordering__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
          check_hlds__mode_ordering__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
          check_hlds__mode_ordering__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__mode_ordering__GoalExpr_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_175_175));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_ordering__ProcId_26));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__mode_ordering__V_177_177));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_178_178));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_179_179));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_180_180));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)))) {
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
              MR_Word check_hlds__mode_ordering__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__mode_ordering__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__mode_ordering__Goals_15;

              switch (check_hlds__mode_ordering__ConjType_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_200_200 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    MR_Box check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84;

                    {
                      mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_200_200, check_hlds__mode_ordering__TypeCtorInfo_200_200, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[6], check_hlds__mode_ordering__Goals0_12, &check_hlds__mode_ordering__Goals_15, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84);
                    }
                    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84);
                    {
                      check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__Goals_15, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_193_193 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_195_195;
                    MR_Word check_hlds__mode_ordering__Goals1_13;
                    MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_14;
                    MR_Word check_hlds__mode_ordering__ConsVars_16;
                    MR_Word check_hlds__mode_ordering__NeedVars_17;
                    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149;
                    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150;
                    MR_Word check_hlds__mode_ordering__V_151_151;
                    MR_Word check_hlds__mode_ordering__V_152_152;
                    MR_Word check_hlds__mode_ordering__V_154_154;
                    MR_Word check_hlds__mode_ordering__V_155_155;
                    MR_Box check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84;
                    MR_Word check_hlds__mode_ordering__V_170_170;
                    MR_Word check_hlds__mode_ordering__V_171_171;
                    MR_Word check_hlds__mode_ordering__V_172_172;
                    MR_Word check_hlds__mode_ordering__V_173_173;
                    MR_Word check_hlds__mode_ordering__V_174_174;

                    {
                      mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_193_193, check_hlds__mode_ordering__TypeCtorInfo_193_193, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[7], check_hlds__mode_ordering__Goals0_12, &check_hlds__mode_ordering__Goals1_13, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84);
                    }
                    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84);
                    check_hlds__mode_ordering__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 0)));
                    check_hlds__mode_ordering__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 1)));
                    check_hlds__mode_ordering__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 2)));
                    check_hlds__mode_ordering__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 3)));
                    check_hlds__mode_ordering__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 4)));
                    check_hlds__mode_ordering__ForwardGoalPathMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 5)));
                    {
                      check_hlds__mode_ordering__mode_order_conj_3_p_0(check_hlds__mode_ordering__ForwardGoalPathMap_14, check_hlds__mode_ordering__Goals1_13, &check_hlds__mode_ordering__Goals_15);
                    }
                    {
                      check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__Goals_15, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
                    {
                      check_hlds__mode_ordering__ConsVars_16 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
                    check_hlds__mode_ordering__TypeCtorInfo_195_195 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__mode_ordering__V_152_152 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
                    {
                      check_hlds__mode_ordering__V_151_151 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_195_195, check_hlds__mode_ordering__ConsVars_16, check_hlds__mode_ordering__V_152_152);
                    }
                    {
                      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149, check_hlds__mode_ordering__V_151_151);
                    }
                    {
                      check_hlds__mode_ordering__NeedVars_17 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150);
                    }
                    {
                      check_hlds__mode_ordering__V_155_155 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150);
                    }
                    {
                      check_hlds__mode_ordering__V_154_154 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_195_195, check_hlds__mode_ordering__NeedVars_17, check_hlds__mode_ordering__V_155_155);
                    }
                    {
                      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150, check_hlds__mode_ordering__V_154_154);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_ordering__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__ConjType_11));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__Goals_15));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__mode_ordering__TypeCtorInfo_222_222 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word check_hlds__mode_ordering__Goals0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__mode_ordering__Goals_163;
              MR_Box check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84;

              {
                mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_222_222, check_hlds__mode_ordering__TypeCtorInfo_222_222, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[8], check_hlds__mode_ordering__Goals0_162, &check_hlds__mode_ordering__Goals_163, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84);
              }
              *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84);
              {
                check_hlds__mode_ordering__mode_order_disj_3_p_0(check_hlds__mode_ordering__Goals_163, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_ordering__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Goals_163));
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
              MR_Word check_hlds__mode_ordering__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__mode_ordering__V_107_107;
              MR_Word check_hlds__mode_ordering__SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__mode_ordering__SubGoal_167;
              MR_Word check_hlds__mode_ordering__V_187_187;

              {
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_166, &check_hlds__mode_ordering__SubGoal_167, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
              }
              check_hlds__mode_ordering__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_167, (MR_Integer) 0)));
              check_hlds__mode_ordering__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_167, (MR_Integer) 1)));
              {
                check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(check_hlds__mode_ordering__V_107_107, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_ordering__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Reason_65));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__SubGoal_167));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__mode_ordering__TypeCtorInfo_224_224;
              MR_Word check_hlds__mode_ordering__Locals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word check_hlds__mode_ordering__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word check_hlds__mode_ordering__Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word check_hlds__mode_ordering__Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
              MR_Word check_hlds__mode_ordering__Cond_70;
              MR_Word check_hlds__mode_ordering__Then_71;
              MR_Word check_hlds__mode_ordering__Else_72;
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91;
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92;
              MR_Word check_hlds__mode_ordering__V_94_94;
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95;
              MR_Word check_hlds__mode_ordering__V_96_96;
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98;
              MR_Word check_hlds__mode_ordering__V_99_99;
              MR_Word check_hlds__mode_ordering__V_100_100;
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101;
              MR_Word check_hlds__mode_ordering__V_102_102;
              MR_Word check_hlds__mode_ordering__V_103_103;
              MR_Word check_hlds__mode_ordering__V_104_104;
              MR_Word check_hlds__mode_ordering__ConsVars_168;
              MR_Word check_hlds__mode_ordering__NeedVars_169;
              MR_Word check_hlds__mode_ordering__V_188_188;

              {
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Cond0_67, &check_hlds__mode_ordering__Cond_70, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91);
              }
              {
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Then0_68, &check_hlds__mode_ordering__Then_71, check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92);
              }
              {
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Else0_69, &check_hlds__mode_ordering__Else_72, check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
              }
              {
                check_hlds__mode_ordering__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_96_96, 0) = ((MR_Box) (check_hlds__mode_ordering__Then_71));
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__mode_ordering__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_94_94, 0) = ((MR_Box) (check_hlds__mode_ordering__Cond_70));
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_94_94, 1) = ((MR_Box) (check_hlds__mode_ordering__V_96_96));
              }
              {
                check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__V_94_94, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
              {
                check_hlds__mode_ordering__ConsVars_168 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
              check_hlds__mode_ordering__TypeCtorInfo_224_224 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                check_hlds__mode_ordering__V_100_100 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
              {
                check_hlds__mode_ordering__V_99_99 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_224_224, check_hlds__mode_ordering__ConsVars_168, check_hlds__mode_ordering__V_100_100);
              }
              {
                check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95, check_hlds__mode_ordering__V_99_99);
              }
              {
                check_hlds__mode_ordering__NeedVars_169 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98);
              }
              {
                check_hlds__mode_ordering__V_103_103 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98);
              }
              {
                check_hlds__mode_ordering__V_102_102 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_224_224, check_hlds__mode_ordering__NeedVars_169, check_hlds__mode_ordering__V_103_103);
              }
              {
                check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98, check_hlds__mode_ordering__V_102_102);
              }
              check_hlds__mode_ordering__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Else_72, (MR_Integer) 0)));
              check_hlds__mode_ordering__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Else_72, (MR_Integer) 1)));
              {
                check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(check_hlds__mode_ordering__V_104_104, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__mode_ordering__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Locals_66));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__Cond_70));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_ordering__Then_71));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__mode_ordering__Else_72));
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
  MR_Word check_hlds__mode_ordering__Goal0_5,
  MR_Word * check_hlds__mode_ordering__Goal_6,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_13)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_5, (MR_Integer) 0)));
    MR_Word check_hlds__mode_ordering__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_5, (MR_Integer) 1)));
    MR_Word check_hlds__mode_ordering__GoalExpr_10;
    MR_Word check_hlds__mode_ordering__GoalInfo_11;

    {
      check_hlds__mode_ordering__mode_order_goal_2_6_p_0(check_hlds__mode_ordering__GoalExpr0_8, &check_hlds__mode_ordering__GoalExpr_10, check_hlds__mode_ordering__GoalInfo0_9, &check_hlds__mode_ordering__GoalInfo_11, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12, check_hlds__mode_ordering__STATE_VARIABLE_MOI_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_ordering__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__GoalExpr_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__GoalInfo_11));
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaNesting0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
    MR_Word check_hlds__mode_ordering__LambdaNesting_6;
    MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
    MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
    MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
    MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
    MR_Word check_hlds__mode_ordering__V_5_5;
    MR_Box check_hlds__mode_ordering__conv0_V_5_5;
    MR_Word check_hlds__mode_ordering__V_15_15;
    MR_Word check_hlds__mode_ordering__V_16_16;
    MR_Word check_hlds__mode_ordering__V_18_18;
    MR_Word check_hlds__mode_ordering__V_19_19;
    MR_Word check_hlds__mode_ordering__V_20_20;
    MR_Word check_hlds__mode_ordering__V_17_17;

    {
      mercury__stack__det_pop_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, &check_hlds__mode_ordering__conv0_V_5_5, check_hlds__mode_ordering__LambdaNesting0_4, &check_hlds__mode_ordering__LambdaNesting_6);
    }
    check_hlds__mode_ordering__V_5_5 = ((MR_Word) check_hlds__mode_ordering__conv0_V_5_5);
    check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
    check_hlds__mode_ordering__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
    check_hlds__mode_ordering__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
    check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
    check_hlds__mode_ordering__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_ordering__STATE_VARIABLE_MOI_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_ordering__LambdaNesting_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_19_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_20_20));
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
  MR_Word check_hlds__mode_ordering__GoalId_4,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__LambdaNesting0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
    MR_Word check_hlds__mode_ordering__V_10_10;
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
    MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
    MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
    MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
    MR_Word check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
    MR_Word check_hlds__mode_ordering__V_16_16;
    MR_Word check_hlds__mode_ordering__V_17_17;
    MR_Word check_hlds__mode_ordering__V_19_19;
    MR_Word check_hlds__mode_ordering__V_20_20;
    MR_Word check_hlds__mode_ordering__V_21_21;
    MR_Word check_hlds__mode_ordering__V_18_18;

    {
      check_hlds__mode_ordering__V_10_10 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_ordering__LambdaNesting0_6, ((MR_Box) (check_hlds__mode_ordering__GoalId_4)));
    }
    check_hlds__mode_ordering__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
    check_hlds__mode_ordering__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
    check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
    check_hlds__mode_ordering__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
    check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_ordering__STATE_VARIABLE_MOI_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_16_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__V_17_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_ordering__V_10_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_19_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_20_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_21_21));
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
  MR_Word check_hlds__mode_ordering__PredId_11,
  MR_Word check_hlds__mode_ordering__MCI_12,
  MR_Word check_hlds__mode_ordering__Constraint0_13,
  MR_Integer check_hlds__mode_ordering__ProcId_14,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__ProcInfo0_16;
    MR_Word check_hlds__mode_ordering__ModeDeclConstraint_17;
    MR_Word check_hlds__mode_ordering__Constraint_18;
    MR_Word check_hlds__mode_ordering__InstGraphInfo_19;
    MR_Word check_hlds__mode_ordering__InstGraph_20;
    MR_Word check_hlds__mode_ordering__ProcInfo_21;
    MR_Word check_hlds__mode_ordering__ProdVarsMap_35;
    MR_Word check_hlds__mode_ordering__LambdaNesting0_36;
    MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_37;
    MR_Word check_hlds__mode_ordering__MOI0_38;
    MR_Word check_hlds__mode_ordering__Goal0_39;
    MR_Word check_hlds__mode_ordering__Goal_40;
    MR_Word check_hlds__mode_ordering__GoalExpr0_49;
    MR_Word check_hlds__mode_ordering__GoalInfo0_50;
    MR_Word check_hlds__mode_ordering__GoalExpr_51;
    MR_Word check_hlds__mode_ordering__GoalInfo_52;
    MR_Word check_hlds__mode_ordering___MOI_41;

    {
      hlds__hlds_pred__pred_info_proc_info_3_p_0(check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, check_hlds__mode_ordering__ProcId_14, &check_hlds__mode_ordering__ProcInfo0_16);
    }
    {
      hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__ModeDeclConstraint_17);
    }
    {
      check_hlds__mode_ordering__Constraint_18 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__ModeDeclConstraint_17);
    }
    {
      hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, &check_hlds__mode_ordering__InstGraphInfo_19);
    }
    {
      check_hlds__mode_ordering__InstGraph_20 = hlds__inst_graph__implementation_inst_graph_1_f_0(check_hlds__mode_ordering__InstGraphInfo_19);
    }
    {
      check_hlds__mode_ordering__ProdVarsMap_35 = check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0(check_hlds__mode_ordering__Constraint_18, check_hlds__mode_ordering__MCI_12);
    }
    {
      check_hlds__mode_ordering__LambdaNesting0_36 = mercury__stack__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    }
    {
      check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_p_0(check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__PredId_11, &check_hlds__mode_ordering__ForwardGoalPathMap_37);
    }
    {
      check_hlds__mode_ordering__MOI0_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 0) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_20));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 1) = ((MR_Box) (check_hlds__mode_ordering__ProdVarsMap_35));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 2) = ((MR_Box) (check_hlds__mode_ordering__LambdaNesting0_36));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 3) = ((MR_Box) (check_hlds__mode_ordering__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_10));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 5) = ((MR_Box) (check_hlds__mode_ordering__ForwardGoalPathMap_37));
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__Goal0_39);
    }
    check_hlds__mode_ordering__GoalExpr0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_39, (MR_Integer) 0)));
    check_hlds__mode_ordering__GoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_39, (MR_Integer) 1)));
    {
      check_hlds__mode_ordering__mode_order_goal_2_6_p_0(check_hlds__mode_ordering__GoalExpr0_49, &check_hlds__mode_ordering__GoalExpr_51, check_hlds__mode_ordering__GoalInfo0_50, &check_hlds__mode_ordering__GoalInfo_52, check_hlds__mode_ordering__MOI0_38, &check_hlds__mode_ordering___MOI_41);
    }
    {
      check_hlds__mode_ordering__Goal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_40, 0) = ((MR_Box) (check_hlds__mode_ordering__GoalExpr_51));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_40, 1) = ((MR_Box) (check_hlds__mode_ordering__GoalInfo_52));
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__mode_ordering__Goal_40, check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__ProcInfo_21);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(check_hlds__mode_ordering__ProcId_14, check_hlds__mode_ordering__ProcInfo_21, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
  MR_Word check_hlds__mode_ordering__PredId_11,
  MR_Word check_hlds__mode_ordering__MCI_12,
  MR_Word check_hlds__mode_ordering__Constraint0_13,
  MR_Word check_hlds__mode_ordering__ModeDeclConstraint_14,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;

    {
      check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(check_hlds__mode_ordering__ModuleInfo_9, check_hlds__mode_ordering__PredConstraintMap_10, check_hlds__mode_ordering__PredId_11, check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_pred_5_p_0(
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
  MR_Word check_hlds__mode_ordering___SCC_7,
  MR_Word check_hlds__mode_ordering__PredId_8,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;

    {
      check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(check_hlds__mode_ordering__PredConstraintMap_6, check_hlds__mode_ordering__PredId_8, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);
    }
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18;

    {
      check_hlds__mode_ordering__mode_ordering_pred_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18));
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
  MR_Word check_hlds__mode_ordering__PredConstraintMap_5,
  MR_Word check_hlds__mode_ordering__SCC_6,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10;
    MR_Word check_hlds__mode_ordering__V_11_11;
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9;

    {
      check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__mode_ordering__SCC_6, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10);
    }
    {
      check_hlds__mode_ordering__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 3) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_5));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 4) = ((MR_Box) (check_hlds__mode_ordering__SCC_6));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, check_hlds__mode_ordering__V_11_11, check_hlds__mode_ordering__SCC_6, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
    *check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9);
  }
}

static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
  MR_Box check_hlds__mode_ordering__closure_arg,
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9;

    {
      check_hlds__mode_ordering__mode_ordering_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0(
  MR_Word check_hlds__mode_ordering__PredConstraintMap_7,
  MR_Word check_hlds__mode_ordering__SCCs_8,
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_bool check_hlds__mode_ordering__succeeded;
    MR_Word check_hlds__mode_ordering__V_15_15;
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12;

    {
      check_hlds__mode_ordering__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 3) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_7));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, check_hlds__mode_ordering__V_15_15, check_hlds__mode_ordering__SCCs_8, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_11)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12);
    }
    *check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12);
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

/* :- end_module check_hlds.mode_ordering. */
