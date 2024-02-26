/*
** Automatically generated from `hhf.m'
** by the Mercury compiler,
** version rotd-2024-02-26
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


// :- module hlds.hhf.
// :- implementation.

/*
INIT mercury__hlds__hhf__init
ENDINIT
*/

#include "hlds.hhf.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
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
#include "hlds.passes_aux.mih"
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
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s {
  MR_Word hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__ImplementationInstGraph_21;
  MR_Word * hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__LambdaHeadVar__1_42;
  MR_Cont hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont;
  void * hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont_env_ptr;
  MR_Word hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__V0_24;
  MR_Box hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__conv0_V0_24;
};

struct hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0_s {
  MR_Box * hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__cont;
  void * hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__cont_env_ptr;
  MR_Word hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__conv0_LambdaHeadVar__1_42;
};


static const MR_FA_TypeInfo_Struct1 hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

static const MR_PseudoTypeInfo hlds__hhf__hlds__hhf__field_types_hhf_info_0_0[3];

static const MR_ConstString hlds__hhf__hlds__hhf__field_names_hhf_info_0_0[3];

static const MR_DuFunctorDesc hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0;

static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0[1];

static const MR_DuPtagLayout hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0[1];

static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_name_ordered_hhf_info_0[1];

static const MR_Integer hlds__hhf__hlds__hhf__functor_number_map_hhf_info_0[1];

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0(
  MR_Word ImplementationInstGraph_21,
  MR_Word HeadVars_47,
  MR_Word * LambdaHeadVar__1_42,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hhf__add_cons_id_6_p_0(
  MR_Word Var_7,
  MR_Word BaseVars_8,
  MR_Word Arg_9,
  MR_Word * NewVar_10,
  MR_Word STATE_VARIABLE_HI_0_22,
  MR_Word * STATE_VARIABLE_HI_23);

static MR_bool MR_CALL 
hlds__hhf__find_var_with_type_6_p_0(
  MR_Word Var0_7,
  MR_Word Type_8,
  MR_Word InstGraph_9,
  MR_Word VarTable_10,
  MR_Word BaseVars_11,
  MR_Word * Var_12);

static MR_bool MR_CALL 
hlds__hhf__same_type_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_7_p_0(
  MR_Word Var_8,
  MR_Word BaseVars_9,
  MR_Word TypeCtor_10,
  MR_Word TypeCtorModuleName_11,
  MR_Word Ctor_12,
  MR_Word STATE_VARIABLE_HI_0_26,
  MR_Word * STATE_VARIABLE_HI_27);

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_4_p_0(
  MR_Word BaseVars_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_HI_0_18,
  MR_Word * STATE_VARIABLE_HI_19);

static void MR_CALL 
hlds__hhf__goal_use_own_nonlocals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_HI_0_12,
  MR_Word * STATE_VARIABLE_HI_13);

static void MR_CALL 
hlds__hhf__convert_goal_to_hhf_5_p_0(
  MR_Word NonLocals_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_HI_0_13,
  MR_Word * STATE_VARIABLE_HI_14);

static void MR_CALL 
hlds__hhf__convert_clause_to_hhf_5_p_0(
  MR_Word _HeadVars_6,
  MR_Word Clause0_7,
  MR_Word * Clause_8,
  MR_Word STATE_VARIABLE_HI_0_15,
  MR_Word * STATE_VARIABLE_HI_16);

static void MR_CALL 
hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(
  MR_Word Clause0_7,
  MR_Word * Clause_8,
  MR_Word STATE_VARIABLE_HI_0_15,
  MR_Word * STATE_VARIABLE_HI_16);

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0(
  MR_Word NonLocals_7,
  MR_Word GoalInfo_8,
  MR_Word GoalExpr0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_HI_0_61,
  MR_Word * STATE_VARIABLE_HI_62);

static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0(
  MR_Word RHS0_11,
  MR_Word NonLocals_12,
  MR_Word GoalInfo0_13,
  MR_Word X_14,
  MR_Word Mode_15,
  MR_Word Unif_16,
  MR_Word Context_17,
  MR_Word * GoalExpr_18,
  MR_Word STATE_VARIABLE_HI_0_51,
  MR_Word * STATE_VARIABLE_HI_52);

static void MR_CALL 
hlds__hhf__add_unifications_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NonLocals_2,
  MR_Word GI0_3,
  MR_Word M_4,
  MR_Word U_5,
  MR_Word C_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_HI_0_9,
  MR_Word * STATE_VARIABLE_HI_10);

static void MR_CALL 
hlds__hhf__make_unifications_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word GI0_3,
  MR_Word M_4,
  MR_Word U_5,
  MR_Word C_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_7_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hhf_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__hhf_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__hhf_scalar_common_3[2][8];

static /* final */ const MR_Box hlds__hhf_scalar_common_4[3][7];

static /* final */ const MR_Box hlds__hhf_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__hhf_scalar_common_6[1][10];

static /* final */ const MR_Box hlds__hhf_scalar_common_7[1][9];




static /* final */ const MR_Box hlds__hhf_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hhf_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hhf_scalar_common_1[0])),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hhf_scalar_common_4[2])),
    ((MR_Box) (hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_3[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hhf__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_4[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)
  }
};

static const MR_PseudoTypeInfo hlds__hhf__hlds__hhf__field_types_hhf_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString hlds__hhf__hlds__hhf__field_names_hhf_info_0_0[3] = {
  (MR_String) "hhfi_module_info",
  (MR_String) "hhfi_inst_graph",
  (MR_String) "hhfi_var_table"
};

static const MR_DuFunctorDesc hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0 = {
  (MR_String) "hhf_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hhf__hlds__hhf__field_types_hhf_info_0_0,
  hlds__hhf__hlds__hhf__field_names_hhf_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0[1] = { &hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0 };

static const MR_DuPtagLayout hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_name_ordered_hhf_info_0[1] = { &hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0 };

static const MR_Integer hlds__hhf__hlds__hhf__functor_number_map_hhf_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hhf____Unify____hhf_info_0_0_10001)),
  ((MR_Box) (hlds__hhf____Compare____hhf_info_0_0_10001)),
  (MR_String) "hlds.hhf",
  (MR_String) "hhf_info",
  { hlds__hhf__hlds__hhf__du_name_ordered_hhf_info_0 },
  { hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hhf__hlds__hhf__functor_number_map_hhf_info_0,

};

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s * env_ptr = (struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__V0_24 = ((MR_Word) ((env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__conv0_V0_24));
  hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s * env_ptr = (struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s *) (env_ptr_arg);

  hlds__inst_graph__reachable_3_p_0((env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__ImplementationInstGraph_21, (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__V0_24, (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__LambdaHeadVar__1_42, (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont, (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0(
  MR_Word ImplementationInstGraph_21,
  MR_Word HeadVars_47,
  MR_Word * LambdaHeadVar__1_42,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s env;

  (env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__ImplementationInstGraph_21 = ImplementationInstGraph_21;
  (env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__LambdaHeadVar__1_42 = LambdaHeadVar__1_42;
  (env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont = cont;
  (env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__list__member_2_p_1((MR_Word) (&hlds__hhf_scalar_common_1[0]), &(env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__conv0_V0_24, HeadVars_47, hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_2, &env);
}

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
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
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hhf_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__hhf_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__hhf__add_cons_id_6_p_0(
  MR_Word Var_7,
  MR_Word BaseVars_8,
  MR_Word Arg_9,
  MR_Word * NewVar_10,
  MR_Word STATE_VARIABLE_HI_0_22,
  MR_Word * STATE_VARIABLE_HI_23)
{
  MR_bool succeeded;
  MR_Word ArgType_12 = ((MR_Word) ((MR_hl_field(0, Arg_9, (MR_Integer) 1))));
  MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_0_22, (MR_Integer) 0))));
  MR_Word InstGraph0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_0_22, (MR_Integer) 1))));
  MR_Word VarTable0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_0_22, (MR_Integer) 2))));
  MR_Word NewVar0_16;

  succeeded = hlds__hhf__find_var_with_type_6_p_0(Var_7, ArgType_12, InstGraph0_14, VarTable0_15, BaseVars_8, &NewVar0_16);
  if (succeeded)
  {
    *NewVar_10 = NewVar0_16;
    *STATE_VARIABLE_HI_23 = STATE_VARIABLE_HI_0_22;
  }
  else
  {
    MR_Word IsDummy_17;
    MR_Word NewVarEntry_18;
    MR_Word VarTable_19;
    MR_Word Empty_20;
    MR_Word InstGraph_21;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_HI_27_27;

    IsDummy_17 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_13, ArgType_12);
    {
      NewVarEntry_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewVarEntry_18, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, NewVarEntry_18, 1) = ((MR_Box) (ArgType_12));
      MR_hl_field(0, NewVarEntry_18, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_17));
    }
    parse_tree__var_table__add_var_entry_4_p_0(NewVarEntry_18, NewVar_10, VarTable0_15, &VarTable_19);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), &Empty_20);
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_7));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (Empty_20));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (Var_26));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (*NewVar_10)), ((MR_Box) (Var_25)), InstGraph0_14, &InstGraph_21);
    {
      STATE_VARIABLE_HI_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_HI_27_27, 0) = ((MR_Box) (ModuleInfo_13));
      MR_hl_field(0, STATE_VARIABLE_HI_27_27, 1) = ((MR_Box) (InstGraph_21));
      MR_hl_field(0, STATE_VARIABLE_HI_27_27, 2) = ((MR_Box) (VarTable_19));
    }
    hlds__hhf__complete_inst_graph_node_4_p_0(BaseVars_8, *NewVar_10, STATE_VARIABLE_HI_27_27, STATE_VARIABLE_HI_23);
  }
}

static MR_bool MR_CALL 
hlds__hhf__find_var_with_type_6_p_0(
  MR_Word Var0_7,
  MR_Word Type_8,
  MR_Word InstGraph_9,
  MR_Word VarTable_10,
  MR_Word BaseVars_11,
  MR_Word * Var_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Type0_13;
    MR_Word A_20;
    MR_Word B_21;

    // setup for model_semi tailcalls optimized into a loop
    ;
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_10, Var0_7, &Type0_13);
    A_20 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type0_13);
    B_21 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_8);
    switch (MR_tag((MR_Word) A_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = ((MR_tag((MR_Word) B_21)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_26 = ((MR_Word) ((MR_hl_field(1, A_20, (MR_Integer) 0))));
          MR_Word ArgsA_27 = ((MR_Word) ((MR_hl_field(1, A_20, (MR_Integer) 1))));
          MR_Word ArgsB_29;
          MR_Word Var_48;

          succeeded = ((MR_tag((MR_Word) B_21)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_48 = ((MR_Word) ((MR_hl_field(1, B_21, (MR_Integer) 0))));
            ArgsB_29 = ((MR_Word) ((MR_hl_field(1, B_21, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_26, Var_48);
            if (succeeded)
              succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_27, ArgsB_29);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_31 = ((MR_Word) ((MR_hl_field(2, A_20, (MR_Integer) 0))));
          MR_Word Var_49;

          succeeded = ((MR_tag((MR_Word) B_21)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_49 = ((MR_Word) ((MR_hl_field(2, B_21, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_31, Var_49);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, A_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgsA_38 = ((MR_Word) ((MR_hl_field(3, A_20, (MR_Integer) 1))));
              MR_Word ArgsB_40;

              succeeded = ((((MR_tag((MR_Word) B_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgsB_40 = ((MR_Word) ((MR_hl_field(3, B_21, (MR_Integer) 1))));
                succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_38, ArgsB_40);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_32 = ((MR_Unsigned) ((MR_hl_field(3, A_20, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgsA_33 = ((MR_Word) ((MR_hl_field(3, A_20, (MR_Integer) 2))));
              MR_Word HOInstInfo_34 = ((MR_Word) ((MR_hl_field(3, A_20, (MR_Integer) 3))));
              MR_Word Purity_35 = ((MR_Unsigned) ((MR_hl_field(3, A_20, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word ArgsB_37;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;

              succeeded = ((((MR_tag((MR_Word) B_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_50 = ((MR_Unsigned) ((MR_hl_field(3, B_21, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgsB_37 = ((MR_Word) ((MR_hl_field(3, B_21, (MR_Integer) 2))));
                Var_51 = ((MR_Word) ((MR_hl_field(3, B_21, (MR_Integer) 3))));
                Var_52 = ((MR_Unsigned) ((MR_hl_field(3, B_21, (MR_Integer) 4))) & (MR_Integer) 3);
                succeeded = (PorF_32 == Var_50);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(HOInstInfo_34, Var_51);
                  if (succeeded)
                  {
                    succeeded = (Purity_35 == Var_52);
                    if (succeeded)
                    {
                      succeeded = MR_TRUE;
                      if (succeeded)
                        succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_33, ArgsB_37);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgsA_43 = ((MR_Word) ((MR_hl_field(3, A_20, (MR_Integer) 2))));
              MR_Word ArgsB_46;

              succeeded = ((((MR_tag((MR_Word) B_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgsB_46 = ((MR_Word) ((MR_hl_field(3, B_21, (MR_Integer) 2))));
                succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_43, ArgsB_46);
              }
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      *Var_12 = Var0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var1_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Box conv0_Var_16;
      MR_Word next_value_of_Var0_7;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph_9, ((MR_Box) (Var0_7)), &conv0_Var_16);
      Var_16 = ((MR_Word) (conv0_Var_16));
      Var_17 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
      succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var1_15 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
        succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), ((MR_Box) (Var1_15)), BaseVars_11);
        succeeded = !(succeeded);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_Var0_7 = Var1_15;
          Var0_7 = next_value_of_Var0_7;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hhf__same_type_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word A_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word As_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word B_5;
      MR_Word Bs_6;
      MR_Word A_7;
      MR_Word B_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        Bs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        A_7 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(A_3);
        B_8 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(B_5);
        switch (MR_tag((MR_Word) A_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = ((MR_tag((MR_Word) B_8)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Name_13 = ((MR_Word) ((MR_hl_field(1, A_7, (MR_Integer) 0))));
              MR_Word ArgsA_14 = ((MR_Word) ((MR_hl_field(1, A_7, (MR_Integer) 1))));
              MR_Word ArgsB_16;
              MR_Word Var_35;

              succeeded = ((MR_tag((MR_Word) B_8)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_35 = ((MR_Word) ((MR_hl_field(1, B_8, (MR_Integer) 0))));
                ArgsB_16 = ((MR_Word) ((MR_hl_field(1, B_8, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_13, Var_35);
                if (succeeded)
                  succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_14, ArgsB_16);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_18 = ((MR_Word) ((MR_hl_field(2, A_7, (MR_Integer) 0))));
              MR_Word Var_36;

              succeeded = ((MR_tag((MR_Word) B_8)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(2, B_8, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_18, Var_36);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, A_7, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgsA_25 = ((MR_Word) ((MR_hl_field(3, A_7, (MR_Integer) 1))));
                  MR_Word ArgsB_27;

                  succeeded = ((((MR_tag((MR_Word) B_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgsB_27 = ((MR_Word) ((MR_hl_field(3, B_8, (MR_Integer) 1))));
                    succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_25, ArgsB_27);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PorF_19 = ((MR_Unsigned) ((MR_hl_field(3, A_7, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgsA_20 = ((MR_Word) ((MR_hl_field(3, A_7, (MR_Integer) 2))));
                  MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(3, A_7, (MR_Integer) 3))));
                  MR_Word Purity_22 = ((MR_Unsigned) ((MR_hl_field(3, A_7, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word ArgsB_24;
                  MR_Word Var_37;
                  MR_Word Var_38;
                  MR_Word Var_39;

                  succeeded = ((((MR_tag((MR_Word) B_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_37 = ((MR_Unsigned) ((MR_hl_field(3, B_8, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgsB_24 = ((MR_Word) ((MR_hl_field(3, B_8, (MR_Integer) 2))));
                    Var_38 = ((MR_Word) ((MR_hl_field(3, B_8, (MR_Integer) 3))));
                    Var_39 = ((MR_Unsigned) ((MR_hl_field(3, B_8, (MR_Integer) 4))) & (MR_Integer) 3);
                    succeeded = (PorF_19 == Var_37);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(HOInstInfo_21, Var_38);
                      if (succeeded)
                      {
                        succeeded = (Purity_22 == Var_39);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                            succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_20, ArgsB_24);
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgsA_30 = ((MR_Word) ((MR_hl_field(3, A_7, (MR_Integer) 2))));
                  MR_Word ArgsB_33;

                  succeeded = ((((MR_tag((MR_Word) B_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgsB_33 = ((MR_Word) ((MR_hl_field(3, B_8, (MR_Integer) 2))));
                    succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_30, ArgsB_33);
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = As_4;
          next_value_of_HeadVar__2_2 = Bs_6;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_NewVar_10;
  MR_Word conv1_STATE_VARIABLE_HI_23;

  hlds__hhf__add_cons_id_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_NewVar_10, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_HI_23);
  *wrapper_arg_2 = ((MR_Box) (conv2_NewVar_10));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_HI_23));
}

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_7_p_0(
  MR_Word Var_8,
  MR_Word BaseVars_9,
  MR_Word TypeCtor_10,
  MR_Word TypeCtorModuleName_11,
  MR_Word Ctor_12,
  MR_Word STATE_VARIABLE_HI_0_26,
  MR_Word * STATE_VARIABLE_HI_27)
{
  MR_bool succeeded;
  MR_Word Name_16 = ((MR_Word) ((MR_hl_field(0, Ctor_12, (MR_Integer) 2))));
  MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Ctor_12, (MR_Integer) 3))));
  MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(0, Ctor_12, (MR_Integer) 4))));
  MR_Word SymName_20;
  MR_Word ConsId_21;
  MR_Word Functors0_22;
  MR_Word MaybeParent_23;
  MR_String Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Box conv0_Var_30;

  Var_28 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_16);
  {
    SymName_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_20, 0) = ((MR_Box) (TypeCtorModuleName_11));
    MR_hl_field(1, SymName_20, 1) = ((MR_Box) (Var_28));
  }
  {
    ConsId_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConsId_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ConsId_21, 1) = ((MR_Box) (SymName_20));
    MR_hl_field(3, ConsId_21, 2) = ((MR_Box) (Arity_18));
    MR_hl_field(3, ConsId_21, 3) = ((MR_Box) (TypeCtor_10));
  }
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_0_26, (MR_Integer) 1))));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), Var_29, ((MR_Box) (Var_8)), &conv0_Var_30);
  Var_30 = ((MR_Word) (conv0_Var_30));
  Functors0_22 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
  MaybeParent_23 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
  succeeded = mercury__map__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), Functors0_22, ((MR_Box) (ConsId_21)));
  if (succeeded)
    *STATE_VARIABLE_HI_27 = STATE_VARIABLE_HI_0_26;
  else
  {
    MR_Word NewVars_24;
    MR_Word Functors_25;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_HI_32_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Box conv3_STATE_VARIABLE_HI_32_32;
    MR_Word Var_41;
    MR_Word Var_43;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&hlds__hhf_scalar_common_7[0]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (hlds__hhf__maybe_add_cons_id_7_p_0_1));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (Var_8));
      MR_hl_field(0, Var_31, 4) = ((MR_Box) (BaseVars_9));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_31, Args_17, &NewVars_24, ((MR_Box) (STATE_VARIABLE_HI_0_26)), &conv3_STATE_VARIABLE_HI_32_32);
    STATE_VARIABLE_HI_32_32 = ((MR_Word) (conv3_STATE_VARIABLE_HI_32_32));
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), ((MR_Box) (ConsId_21)), ((MR_Box) (NewVars_24)), Functors0_22, &Functors_25);
    Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_32_32, (MR_Integer) 1))));
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (Functors_25));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (MaybeParent_23));
    }
    Var_34 = mercury__map__det_update_3_f_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), Var_35, ((MR_Box) (Var_8)), ((MR_Box) (Var_36)));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_32_32, (MR_Integer) 0))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_32_32, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HI_27 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_43));
    }
  }
}

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_HI_27;

  hlds__hhf__maybe_add_cons_id_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_HI_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_HI_27));
}

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_4_p_0(
  MR_Word BaseVars_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_HI_0_18,
  MR_Word * STATE_VARIABLE_HI_19)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_0_18, (MR_Integer) 0))));
  MR_Word VarTable0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_0_18, (MR_Integer) 2))));
  MR_Word Type_10;
  MR_Word Constructors_11;
  MR_Word TypeCtor_12;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_9, Var_6, &Type_10);
  succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_8, Type_10, &Constructors_11);
  if (succeeded)
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_10, &TypeCtor_12);
  if (succeeded)
  {
    MR_Word TypeCtorSymName_13 = ((MR_Word) ((MR_hl_field(0, TypeCtor_12, (MR_Integer) 0))));
    MR_Word TypeCtorModuleName_16;
    MR_Word Var_22;
    MR_Box conv1_STATE_VARIABLE_HI_19;

    if (((MR_tag((MR_Word) TypeCtorSymName_13)) == (MR_Integer) 1))
      TypeCtorModuleName_16 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_13, (MR_Integer) 0))));
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.complete_inst_graph_node\'/4", (MR_String) "unqualified TypeCtorSymName");
        return;
      }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__hhf_scalar_common_6[0]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__hhf__complete_inst_graph_node_4_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (Var_6));
      MR_hl_field(0, Var_22, 4) = ((MR_Box) (BaseVars_5));
      MR_hl_field(0, Var_22, 5) = ((MR_Box) (TypeCtor_12));
      MR_hl_field(0, Var_22, 6) = ((MR_Box) (TypeCtorModuleName_16));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_22, Constructors_11, ((MR_Box) (STATE_VARIABLE_HI_0_18)), &conv1_STATE_VARIABLE_HI_19);
    *STATE_VARIABLE_HI_19 = ((MR_Word) (conv1_STATE_VARIABLE_HI_19));
  }
  else
    *STATE_VARIABLE_HI_19 = STATE_VARIABLE_HI_0_18;
}

static void MR_CALL 
hlds__hhf__goal_use_own_nonlocals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_HI_0_12,
  MR_Word * STATE_VARIABLE_HI_13)
{
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word NonLocals_10;
  MR_Word GoalExpr_11;

  NonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
  hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_10, GoalInfo_9, GoalExpr0_8, &GoalExpr_11, STATE_VARIABLE_HI_0_12, STATE_VARIABLE_HI_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_9));
  }
}

static void MR_CALL 
hlds__hhf__convert_goal_to_hhf_5_p_0(
  MR_Word NonLocals_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_HI_0_13,
  MR_Word * STATE_VARIABLE_HI_14)
{
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word GoalExpr_12;

  hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_6, GoalInfo_11, GoalExpr0_10, &GoalExpr_12, STATE_VARIABLE_HI_0_13, STATE_VARIABLE_HI_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
  }
}

static void MR_CALL 
hlds__hhf__convert_clause_to_hhf_5_p_0(
  MR_Word _HeadVars_6,
  MR_Word Clause0_7,
  MR_Word * Clause_8,
  MR_Word STATE_VARIABLE_HI_0_15,
  MR_Word * STATE_VARIABLE_HI_16)
{
  hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(Clause0_7, Clause_8, STATE_VARIABLE_HI_0_15, STATE_VARIABLE_HI_16);
}

static void MR_CALL 
hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(
  MR_Word Clause0_7,
  MR_Word * Clause_8,
  MR_Word STATE_VARIABLE_HI_0_15,
  MR_Word * STATE_VARIABLE_HI_16)
{
  MR_Word Goal0_10;
  MR_Word GoalInfo0_12;
  MR_Word NonLocals_13;
  MR_Word Goal_14;
  MR_Word GoalExpr0_22;
  MR_Word GoalInfo_23;
  MR_Word GoalExpr_24;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  Goal0_10 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_7);
  GoalInfo0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 1))));
  NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
  GoalExpr0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 0))));
  GoalInfo_23 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 1))));
  hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_13, GoalInfo_23, GoalExpr0_22, &GoalExpr_24, STATE_VARIABLE_HI_0_15, STATE_VARIABLE_HI_16);
  {
    Goal_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_14, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, Goal_14, 1) = ((MR_Box) (GoalInfo_23));
  }
  Var_17 = ((MR_Word) ((MR_hl_field(0, Clause0_7, (MR_Integer) 0))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, Clause0_7, (MR_Integer) 2))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, Clause0_7, (MR_Integer) 3))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, Clause0_7, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Clause_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Goal_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
  }
}

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Goal_6;
  MR_Word conv3_STATE_VARIABLE_HI_13;

  hlds__hhf__goal_use_own_nonlocals_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_HI_13);
  *wrapper_arg_2 = ((MR_Box) (conv4_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_HI_13));
}

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_8;
  MR_Word conv0_STATE_VARIABLE_HI_14;

  hlds__hhf__convert_goal_to_hhf_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_HI_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_HI_14));
}

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0(
  MR_Word NonLocals_7,
  MR_Word GoalInfo_8,
  MR_Word GoalExpr0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_HI_0_61,
  MR_Word * STATE_VARIABLE_HI_62)
{
  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_79 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_80;
        MR_Word GoalExpr0_96 = ((MR_Word) ((MR_hl_field(0, SubGoal0_79, (MR_Integer) 0))));
        MR_Word GoalInfo_97 = ((MR_Word) ((MR_hl_field(0, SubGoal0_79, (MR_Integer) 1))));
        MR_Word GoalExpr_98;

        hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_7, GoalInfo_97, GoalExpr0_96, &GoalExpr_98, STATE_VARIABLE_HI_0_61, STATE_VARIABLE_HI_62);
        {
          SubGoal_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubGoal_80, 0) = ((MR_Box) (GoalExpr_98));
          MR_hl_field(0, SubGoal_80, 1) = ((MR_Box) (GoalInfo_97));
        }
        *GoalExpr_10 = (MR_Word) ((MR_Word) (SubGoal_80));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 0))));
        MR_Word RHS_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Unif_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 3))));
        MR_Word Context_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 4))));

        hlds__hhf__convert_unify_to_hhf_10_p_0(RHS_13, NonLocals_7, GoalInfo_8, Var_12, Mode_14, Unif_15, Context_16, GoalExpr_10, STATE_VARIABLE_HI_0_61, STATE_VARIABLE_HI_62);
      }
      break;
    case (MR_Integer) 2:
      {
        *GoalExpr_10 = GoalExpr0_9;
        *STATE_VARIABLE_HI_62 = STATE_VARIABLE_HI_0_61;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *GoalExpr_10 = GoalExpr0_9;
            *STATE_VARIABLE_HI_62 = STATE_VARIABLE_HI_0_61;
          }
          break;
        case (MR_Integer) 1:
          {
            *GoalExpr_10 = GoalExpr0_9;
            *STATE_VARIABLE_HI_62 = STATE_VARIABLE_HI_0_61;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_35 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals1_37;
            MR_Word Goals_38;
            MR_Word Var_64;
            MR_Box conv2_STATE_VARIABLE_HI_62;

            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_64, 0) = ((MR_Box) (&hlds__hhf_scalar_common_3[1]));
              MR_hl_field(0, Var_64, 1) = ((MR_Box) (hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1));
              MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_64, 3) = ((MR_Box) (NonLocals_7));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_64, Goals0_36, &Goals1_37, ((MR_Box) (STATE_VARIABLE_HI_0_61)), &conv2_STATE_VARIABLE_HI_62);
            *STATE_VARIABLE_HI_62 = ((MR_Word) (conv2_STATE_VARIABLE_HI_62));
            switch (ConjType_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Goals_38 = Goals1_37;
                break;
              case (MR_Integer) 0:
                hlds__goal_util__flatten_conj_2_p_0(Goals1_37, &Goals_38);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_35));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_38));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_78;
            MR_Box conv5_STATE_VARIABLE_HI_62;

            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), (MR_Word) (&hlds__hhf_scalar_common_2[1]), Goals0_77, &Goals_78, ((MR_Box) (STATE_VARIABLE_HI_0_61)), &conv5_STATE_VARIABLE_HI_62);
            *STATE_VARIABLE_HI_62 = ((MR_Word) (conv5_STATE_VARIABLE_HI_62));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_78));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.convert_goal_expr_to_hhf\'/6", (MR_String) "switch");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word SubGoal_44;
            MR_Word GoalExpr0_99 = ((MR_Word) ((MR_hl_field(0, SubGoal0_43, (MR_Integer) 0))));
            MR_Word GoalInfo_100 = ((MR_Word) ((MR_hl_field(0, SubGoal0_43, (MR_Integer) 1))));
            MR_Word GoalExpr_101;

            hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_7, GoalInfo_100, GoalExpr0_99, &GoalExpr_101, STATE_VARIABLE_HI_0_61, STATE_VARIABLE_HI_62);
            {
              SubGoal_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubGoal_44, 0) = ((MR_Box) (GoalExpr_101));
              MR_hl_field(0, SubGoal_44, 1) = ((MR_Box) (GoalInfo_100));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_42));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_44));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vs_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word Cond_49;
            MR_Word ThenExpr0_50;
            MR_Word ThenInfo_51;
            MR_Word ThenNonLocals_52;
            MR_Word ThenExpr_53;
            MR_Word Then_54;
            MR_Word ElseExpr0_55;
            MR_Word ElseInfo_56;
            MR_Word ElseNonLocals_57;
            MR_Word ElseExpr_58;
            MR_Word Else_59;
            MR_Word STATE_VARIABLE_HI_72_72;
            MR_Word STATE_VARIABLE_HI_73_73;
            MR_Word GoalExpr0_93 = ((MR_Word) ((MR_hl_field(0, Cond0_46, (MR_Integer) 0))));
            MR_Word GoalInfo_94 = ((MR_Word) ((MR_hl_field(0, Cond0_46, (MR_Integer) 1))));
            MR_Word GoalExpr_95;

            hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_7, GoalInfo_94, GoalExpr0_93, &GoalExpr_95, STATE_VARIABLE_HI_0_61, &STATE_VARIABLE_HI_72_72);
            {
              Cond_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Cond_49, 0) = ((MR_Box) (GoalExpr_95));
              MR_hl_field(0, Cond_49, 1) = ((MR_Box) (GoalInfo_94));
            }
            ThenExpr0_50 = ((MR_Word) ((MR_hl_field(0, Then0_47, (MR_Integer) 0))));
            ThenInfo_51 = ((MR_Word) ((MR_hl_field(0, Then0_47, (MR_Integer) 1))));
            ThenNonLocals_52 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ThenInfo_51);
            hlds__hhf__convert_goal_expr_to_hhf_6_p_0(ThenNonLocals_52, ThenInfo_51, ThenExpr0_50, &ThenExpr_53, STATE_VARIABLE_HI_72_72, &STATE_VARIABLE_HI_73_73);
            {
              Then_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Then_54, 0) = ((MR_Box) (ThenExpr_53));
              MR_hl_field(0, Then_54, 1) = ((MR_Box) (ThenInfo_51));
            }
            ElseExpr0_55 = ((MR_Word) ((MR_hl_field(0, Else0_48, (MR_Integer) 0))));
            ElseInfo_56 = ((MR_Word) ((MR_hl_field(0, Else0_48, (MR_Integer) 1))));
            ElseNonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ElseInfo_56);
            hlds__hhf__convert_goal_expr_to_hhf_6_p_0(ElseNonLocals_57, ElseInfo_56, ElseExpr0_55, &ElseExpr_58, STATE_VARIABLE_HI_73_73, STATE_VARIABLE_HI_62);
            {
              Else_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Else_59, 0) = ((MR_Box) (ElseExpr_58));
              MR_hl_field(0, Else_59, 1) = ((MR_Box) (ElseInfo_56));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vs_45));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_49));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_59));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.convert_goal_expr_to_hhf\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_4;

  hlds__inst_graph__set_parent_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
}

static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0(
  MR_Word RHS0_11,
  MR_Word NonLocals_12,
  MR_Word GoalInfo0_13,
  MR_Word X_14,
  MR_Word Mode_15,
  MR_Word Unif_16,
  MR_Word Context_17,
  MR_Word * GoalExpr_18,
  MR_Word STATE_VARIABLE_HI_0_51,
  MR_Word * STATE_VARIABLE_HI_52)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (X_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS0_11));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_15));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unif_16));
          MR_hl_field(1, base, 4) = ((MR_Box) (Context_17));
        }
        *STATE_VARIABLE_HI_52 = STATE_VARIABLE_HI_0_51;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId0_31 = ((MR_Word) ((MR_hl_field(1, RHS0_11, (MR_Integer) 0))));
        MR_Word IsExistConstruct_32 = ((MR_Unsigned) ((MR_hl_field(1, RHS0_11, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ArgsA_33 = ((MR_Word) ((MR_hl_field(1, RHS0_11, (MR_Integer) 2))));
        MR_Word ConsId_35;
        MR_Word InstGraph0_36;
        MR_Word Functors0_37;
        MR_Word MaybeParent_38;
        MR_Word Unifications_40;
        MR_Word Args_41;
        MR_Word GINonlocals0_46;
        MR_Word GINonlocals_47;
        MR_Word GoalInfo_48;
        MR_Word UnifyGoalExpr_49;
        MR_Word UnifyGoal_50;
        MR_Word Var_54;
        MR_Word Var_59;
        MR_Word Var_61;
        MR_Word RHS_62;
        MR_Word Var_34;
        MR_Box conv0_Var_54;
        MR_Word ArgsB_39;
        MR_Box conv1_ArgsB_39;

        parse_tree__prog_type__qualify_cons_id_4_p_0(ArgsA_33, ConsId0_31, &Var_34, &ConsId_35);
        InstGraph0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_0_51, (MR_Integer) 1))));
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph0_36, ((MR_Box) (X_14)), &conv0_Var_54);
        Var_54 = ((MR_Word) (conv0_Var_54));
        Functors0_37 = ((MR_Word) ((MR_hl_field(0, Var_54, (MR_Integer) 0))));
        MaybeParent_38 = ((MR_Word) ((MR_hl_field(0, Var_54, (MR_Integer) 1))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), Functors0_37, ((MR_Box) (ConsId_35)), &conv1_ArgsB_39);
        if (succeeded)
        {
          ArgsB_39 = ((MR_Word) (conv1_ArgsB_39));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          hlds__hhf__make_unifications_7_p_0(ArgsA_33, ArgsB_39, GoalInfo0_13, Mode_15, Unif_16, Context_17, &Unifications_40);
          Args_41 = ArgsB_39;
          *STATE_VARIABLE_HI_52 = STATE_VARIABLE_HI_0_51;
        }
        else
        {
          MR_Word InstGraph1_42;
          MR_Word Functors_43;
          MR_Word InstGraph2_44;
          MR_Word InstGraph_45;
          MR_Word STATE_VARIABLE_HI_55_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Box conv3_InstGraph_45;
          MR_Word Var_67;
          MR_Word Var_69;

          hlds__hhf__add_unifications_10_p_0(ArgsA_33, NonLocals_12, GoalInfo0_13, Mode_15, Unif_16, Context_17, &Args_41, &Unifications_40, STATE_VARIABLE_HI_0_51, &STATE_VARIABLE_HI_55_55);
          InstGraph1_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_55_55, (MR_Integer) 1))));
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), ((MR_Box) (ConsId_35)), ((MR_Box) (Args_41)), Functors0_37, &Functors_43);
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_56, 0) = ((MR_Box) (Functors_43));
            MR_hl_field(0, Var_56, 1) = ((MR_Box) (MaybeParent_38));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (X_14)), ((MR_Box) (Var_56)), InstGraph1_42, &InstGraph2_44);
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_57, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[1]));
            MR_hl_field(0, Var_57, 1) = ((MR_Box) (hlds__hhf__convert_unify_to_hhf_10_p_0_1));
            MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_57, 3) = ((MR_Box) (X_14));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__hhf_scalar_common_2[0]), Var_57, Args_41, ((MR_Box) (InstGraph2_44)), &conv3_InstGraph_45);
          InstGraph_45 = ((MR_Word) (conv3_InstGraph_45));
          Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_55_55, (MR_Integer) 0))));
          Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_55_55, (MR_Integer) 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_HI_52 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
            MR_hl_field(0, base, 1) = ((MR_Box) (InstGraph_45));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_69));
          }
        }
        GINonlocals0_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
        Var_59 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_41);
        GINonlocals_47 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GINonlocals0_46, Var_59);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(GINonlocals_47, GoalInfo0_13, &GoalInfo_48);
        {
          RHS_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RHS_62, 0) = ((MR_Box) (ConsId_35));
          MR_hl_field(1, RHS_62, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstruct_32));
          MR_hl_field(1, RHS_62, 2) = ((MR_Box) (Args_41));
        }
        {
          UnifyGoalExpr_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, UnifyGoalExpr_49, 0) = ((MR_Box) (X_14));
          MR_hl_field(1, UnifyGoalExpr_49, 1) = ((MR_Box) (RHS_62));
          MR_hl_field(1, UnifyGoalExpr_49, 2) = ((MR_Box) (Mode_15));
          MR_hl_field(1, UnifyGoalExpr_49, 3) = ((MR_Box) (Unif_16));
          MR_hl_field(1, UnifyGoalExpr_49, 4) = ((MR_Box) (Context_17));
        }
        {
          UnifyGoal_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnifyGoal_50, 0) = ((MR_Box) (UnifyGoalExpr_49));
          MR_hl_field(0, UnifyGoal_50, 1) = ((MR_Box) (GoalInfo_48));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (UnifyGoal_50));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) (Unifications_40));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_18 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_61));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word E_24 = ((MR_Word) ((MR_hl_field(2, RHS0_11, (MR_Integer) 2))));
        MR_Word F_25 = ((MR_Word) ((MR_hl_field(2, RHS0_11, (MR_Integer) 3))));
        MR_Word G_26 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_11, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_27 = ((MR_Word) ((MR_hl_field(2, RHS0_11, (MR_Integer) 5))));
        MR_Word LambdaGoal_28;
        MR_Word RHS_29;
        MR_Word GoalExpr0_81 = ((MR_Word) ((MR_hl_field(0, LambdaGoal0_27, (MR_Integer) 0))));
        MR_Word GoalInfo_82 = ((MR_Word) ((MR_hl_field(0, LambdaGoal0_27, (MR_Integer) 1))));
        MR_Word GoalExpr_83;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, RHS0_11, (MR_Integer) 0)));

        hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_12, GoalInfo_82, GoalExpr0_81, &GoalExpr_83, STATE_VARIABLE_HI_0_51, STATE_VARIABLE_HI_52);
        {
          LambdaGoal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LambdaGoal_28, 0) = ((MR_Box) (GoalExpr_83));
          MR_hl_field(0, LambdaGoal_28, 1) = ((MR_Box) (GoalInfo_82));
        }
        {
          RHS_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RHS_29, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(2, RHS_29, 1) = NULL;
          MR_hl_field(2, RHS_29, 2) = ((MR_Box) (E_24));
          MR_hl_field(2, RHS_29, 3) = ((MR_Box) (F_25));
          MR_hl_field(2, RHS_29, 4) = (MR_Box) ((MR_Unsigned) (G_26));
          MR_hl_field(2, RHS_29, 5) = ((MR_Box) (LambdaGoal_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (X_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_29));
          MR_hl_field(1, base, 2) = ((MR_Box) (Mode_15));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unif_16));
          MR_hl_field(1, base, 4) = ((MR_Box) (Context_17));
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__hhf__add_unifications_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NonLocals_2,
  MR_Word GI0_3,
  MR_Word M_4,
  MR_Word U_5,
  MR_Word C_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_HI_0_9,
  MR_Word * STATE_VARIABLE_HI_10)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HI_10 = STATE_VARIABLE_HI_0_9;
  }
  else
  {
    MR_Word A_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word As_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word V_26;
    MR_Word Vs_27;
    MR_Word Goals0_30;
    MR_Word InstGraph0_31;
    MR_Word STATE_VARIABLE_HI_46_46;

    hlds__hhf__add_unifications_10_p_0(As_20, NonLocals_2, GI0_3, M_4, U_5, C_6, &Vs_27, &Goals0_30, STATE_VARIABLE_HI_0_9, &STATE_VARIABLE_HI_46_46);
    InstGraph0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_46_46, (MR_Integer) 1))));
    {
      MR_Word Node_32;
      MR_Word Var_47;
      MR_Box conv0_Node_32;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph0_31, ((MR_Box) (A_19)), &conv0_Node_32);
      Node_32 = ((MR_Word) (conv0_Node_32));
      Var_47 = ((MR_Word) ((MR_hl_field(0, Node_32, (MR_Integer) 1))));
      succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (!(succeeded))
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_2, A_19);
    if (succeeded)
    {
      MR_Word VarTable0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_46_46, (MR_Integer) 2))));
      MR_Word EntryA_36;
      MR_Word EntryV_37;
      MR_Word VarTable_38;
      MR_Word Empty_39;
      MR_Word InstGraph_40;
      MR_Word GINonlocals0_41;
      MR_Word GINonlocals_42;
      MR_Word GI_43;
      MR_Word Var_49;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_63;
      MR_Word Var_61;
      MR_Word Var_62;

      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_35, A_19, &EntryA_36);
      Var_61 = ((MR_Word) ((MR_hl_field(0, EntryA_36, (MR_Integer) 1))));
      Var_62 = ((MR_Unsigned) ((MR_hl_field(0, EntryA_36, (MR_Integer) 2))) & (MR_Integer) 1);
      {
        EntryV_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, EntryV_37, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(0, EntryV_37, 1) = ((MR_Box) (Var_61));
        MR_hl_field(0, EntryV_37, 2) = (MR_Box) ((MR_Unsigned) (Var_62));
      }
      parse_tree__var_table__add_var_entry_4_p_0(EntryV_37, &V_26, VarTable0_35, &VarTable_38);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), &Empty_39);
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (Empty_39));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (V_26)), ((MR_Box) (Var_49)), InstGraph0_31, &InstGraph_40);
      Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HI_46_46, (MR_Integer) 0))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HI_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
        MR_hl_field(0, base, 1) = ((MR_Box) (InstGraph_40));
        MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_38));
      }
      GINonlocals0_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GI0_3);
      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), V_26, GINonlocals0_41, &GINonlocals_42);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(GINonlocals_42, GI0_3, &GI_43);
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (V_26));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (A_19));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
        MR_hl_field(1, Var_54, 2) = ((MR_Box) (M_4));
        MR_hl_field(1, Var_54, 3) = ((MR_Box) (U_5));
        MR_hl_field(1, Var_54, 4) = ((MR_Box) (C_6));
      }
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (GI_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals0_30));
      }
    }
    else
    {
      V_26 = A_19;
      *HeadVar__8_8 = Goals0_30;
      *STATE_VARIABLE_HI_10 = STATE_VARIABLE_HI_46_46;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (V_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vs_27));
    }
  }
}

static void MR_CALL 
hlds__hhf__make_unifications_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word GI0_3,
  MR_Word M_4,
  MR_Word U_5,
  MR_Word C_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.make_unifications\'/7", (MR_String) "length mismatch (2)");
        return;
      }
  else
  {
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.make_unifications\'/7", (MR_String) "length mismatch (1)");
        return;
      }
    else
    {
      MR_Word B_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Bs_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GI_38;
      MR_Word Us_39;
      MR_Word GINonlocals0_40;
      MR_Word GINonlocals_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;

      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (B_32));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 2) = ((MR_Box) (M_4));
        MR_hl_field(1, Var_43, 3) = ((MR_Box) (U_5));
        MR_hl_field(1, Var_43, 4) = ((MR_Box) (C_6));
      }
      GINonlocals0_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GI0_3);
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (B_32));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
      }
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_45, GINonlocals0_40, &GINonlocals_41);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(GINonlocals_41, GI0_3, &GI_38);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(0, Var_42, 1) = ((MR_Box) (GI_38));
      }
      hlds__hhf__make_unifications_7_p_0(Var_49, Bs_33, GI0_3, M_4, U_5, C_6, &Us_39);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (Us_39));
      }
    }
  }
}

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_7_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0_s * env_ptr = (struct hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__conv0_LambdaHeadVar__1_42));
  ((env_ptr)->hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__cont)((env_ptr)->hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_7_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0_s env;

  (env).hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__cont = cont;
  (env).hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &(env).hlds__hhf__convert_pred_to_hhf_7_p_0_2_env_0__conv0_LambdaHeadVar__1_42, hlds__hhf__convert_pred_to_hhf_7_p_0_1, &env);
  }
}

void MR_CALL 
hlds__hhf__convert_pred_to_hhf_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Simple_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28)
{
  MR_bool succeeded;
  MR_Word PredInfo0_13;
  MR_Word PredInfo_26;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_27, PredId_10, &PredInfo0_13);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_13);
  if (succeeded)
  {
    MR_Word ClausesInfo_14;
    MR_Word HeadVars_15;
    MR_Word VarTable_16;
    MR_Word InstGraph_18;
    MR_Word STATE_VARIABLE_IG_35_35;
    MR_Word STATE_VARIABLE_IG_31_31;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_13, &ClausesInfo_14);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_14, &HeadVars_15);
    hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_14, &VarTable_16);
    hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(PredInfo0_13, &STATE_VARIABLE_IG_31_31);
    hlds__inst_graph__init_2_p_0(HeadVars_15, &InstGraph_18);
    {
      STATE_VARIABLE_IG_35_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_IG_35_35, 0) = ((MR_Box) (InstGraph_18));
      MR_hl_field(0, STATE_VARIABLE_IG_35_35, 1) = ((MR_Box) (HeadVars_15));
      MR_hl_field(0, STATE_VARIABLE_IG_35_35, 2) = ((MR_Box) (VarTable_16));
      MR_hl_field(0, STATE_VARIABLE_IG_35_35, 3) = ((MR_Box) (InstGraph_18));
    }
    hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(STATE_VARIABLE_IG_35_35, PredInfo0_13, &PredInfo_26);
  }
  else
  {
    MR_Word ClausesInfo0_20;
    MR_Word ImplementationInstGraph_21;
    MR_Word PredInfo1_22;
    MR_Word InterfaceVars_25;
    MR_Word STATE_VARIABLE_IG_38_38;
    MR_Word STATE_VARIABLE_IG_39_39;
    MR_Word STATE_VARIABLE_IG_40_40;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_IG_44_44;
    MR_Word HeadVars_47;
    MR_Word VarTable_48;
    MR_Word ClausesInfo_51;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;

    hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_8, STATE_VARIABLE_ModuleInfo_0_27, (MR_String) "Calculating HHF and inst graph for", PredId_10);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_13, &ClausesInfo0_20);
    hlds__hhf__convert_clauses_info_to_hhf_5_p_0(Simple_9, STATE_VARIABLE_ModuleInfo_0_27, ClausesInfo0_20, &ClausesInfo_51, &ImplementationInstGraph_21);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_51, PredInfo0_13, &PredInfo1_22);
    hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(PredInfo1_22, &STATE_VARIABLE_IG_38_38);
    Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IG_38_38, (MR_Integer) 0))));
    Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IG_38_38, (MR_Integer) 1))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IG_38_38, (MR_Integer) 2))));
    {
      STATE_VARIABLE_IG_39_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_IG_39_39, 0) = ((MR_Box) (Var_68));
      MR_hl_field(0, STATE_VARIABLE_IG_39_39, 1) = ((MR_Box) (Var_69));
      MR_hl_field(0, STATE_VARIABLE_IG_39_39, 2) = ((MR_Box) (Var_70));
      MR_hl_field(0, STATE_VARIABLE_IG_39_39, 3) = ((MR_Box) (ImplementationInstGraph_21));
    }
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_51, &HeadVars_47);
    hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_51, &VarTable_48);
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IG_39_39, (MR_Integer) 1))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IG_39_39, (MR_Integer) 2))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IG_39_39, (MR_Integer) 3))));
    {
      STATE_VARIABLE_IG_40_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_IG_40_40, 0) = ((MR_Box) (ImplementationInstGraph_21));
      MR_hl_field(0, STATE_VARIABLE_IG_40_40, 1) = ((MR_Box) (Var_73));
      MR_hl_field(0, STATE_VARIABLE_IG_40_40, 2) = ((MR_Box) (Var_74));
      MR_hl_field(0, STATE_VARIABLE_IG_40_40, 3) = ((MR_Box) (Var_75));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&hlds__hhf_scalar_common_5[0]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (hlds__hhf__convert_pred_to_hhf_7_p_0_2));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (ImplementationInstGraph_21));
      MR_hl_field(0, Var_41, 4) = ((MR_Box) (HeadVars_47));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hhf_scalar_common_1[0]), Var_41, &InterfaceVars_25);
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IG_40_40, (MR_Integer) 0))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IG_40_40, (MR_Integer) 3))));
    {
      STATE_VARIABLE_IG_44_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_IG_44_44, 0) = ((MR_Box) (Var_76));
      MR_hl_field(0, STATE_VARIABLE_IG_44_44, 1) = ((MR_Box) (InterfaceVars_25));
      MR_hl_field(0, STATE_VARIABLE_IG_44_44, 2) = ((MR_Box) (VarTable_48));
      MR_hl_field(0, STATE_VARIABLE_IG_44_44, 3) = ((MR_Box) (Var_79));
    }
    hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(STATE_VARIABLE_IG_44_44, PredInfo1_22, &PredInfo_26);
  }
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_10, PredInfo_26, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
}

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_HI_19;

  hlds__hhf__complete_inst_graph_node_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_HI_19);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_HI_19));
}

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Clause_8;
  MR_Word conv0_STATE_VARIABLE_HI_16;

  hlds__hhf__convert_clause_to_hhf_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Clause_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_HI_16);
  *wrapper_arg_2 = ((MR_Box) (conv1_Clause_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_HI_16));
}

void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0(
  MR_Word Simple_6,
  MR_Word ModuleInfo_7,
  MR_Word STATE_VARIABLE_ClausesInfo_0_25,
  MR_Word * STATE_VARIABLE_ClausesInfo_26,
  MR_Word * InstGraph_9)
{
  MR_Word VarTable0_10;
  MR_Word Vars0_11;
  MR_Word InstGraph0_12;
  MR_Word Info0_13;
  MR_Word HeadVars_14;
  MR_Word Clauses0_15;
  MR_Word ItemNumbers_16;
  MR_Word Clauses_17;
  MR_Word Info1_18;
  MR_Word ClausesRep_19;
  MR_Word Info_20;
  MR_Word InstGraph1_22;
  MR_Word VarTable_23;
  MR_Word STATE_VARIABLE_ClausesInfo_27_27;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_ClausesInfo_29_29;
  MR_Word InstGraph0_36;
  MR_Word Vars_37;
  MR_Word Var_38;
  MR_Box conv2_Info1_18;
  MR_Box conv4_Info_20;

  hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(STATE_VARIABLE_ClausesInfo_0_25, &VarTable0_10);
  parse_tree__var_table__var_table_vars_2_p_0(VarTable0_10, &Vars0_11);
  hlds__inst_graph__init_2_p_0(Vars0_11, &InstGraph0_12);
  {
    Info0_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_13, 0) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, Info0_13, 1) = ((MR_Box) (InstGraph0_12));
    MR_hl_field(0, Info0_13, 2) = ((MR_Box) (VarTable0_10));
  }
  hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(STATE_VARIABLE_ClausesInfo_0_25, &HeadVars_14);
  hlds__hlds_clauses__clauses_info_clauses_4_p_0(&Clauses0_15, &ItemNumbers_16, STATE_VARIABLE_ClausesInfo_0_25, &STATE_VARIABLE_ClausesInfo_27_27);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&hlds__hhf_scalar_common_3[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (HeadVars_14));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_28, Clauses0_15, &Clauses_17, ((MR_Box) (Info0_13)), &conv2_Info1_18);
  Info1_18 = ((MR_Word) (conv2_Info1_18));
  hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_17, &ClausesRep_19);
  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_19, ItemNumbers_16, STATE_VARIABLE_ClausesInfo_27_27, &STATE_VARIABLE_ClausesInfo_29_29);
  InstGraph0_36 = ((MR_Word) ((MR_hl_field(0, Info1_18, (MR_Integer) 1))));
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph0_36, &Vars_37);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[0]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Vars_37));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_38, Vars_37, ((MR_Box) (Info1_18)), &conv4_Info_20);
  Info_20 = ((MR_Word) (conv4_Info_20));
  InstGraph1_22 = ((MR_Word) ((MR_hl_field(0, Info_20, (MR_Integer) 1))));
  VarTable_23 = ((MR_Word) ((MR_hl_field(0, Info_20, (MR_Integer) 2))));
  switch (Simple_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *InstGraph_9 = InstGraph1_22;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Vars_24;

        parse_tree__var_table__var_table_vars_2_p_0(VarTable_23, &Vars_24);
        hlds__inst_graph__init_2_p_0(Vars_24, InstGraph_9);
      }
      break;
  }
  hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_23, STATE_VARIABLE_ClausesInfo_29_29, STATE_VARIABLE_ClausesInfo_26);
}

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hhf____Unify____hhf_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hhf____Compare____hhf_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hhf__init(void)
{
}

void mercury__hlds__hhf__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0);
}

void mercury__hlds__hhf__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hhf__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hhf.
