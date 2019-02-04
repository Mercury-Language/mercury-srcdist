/*
** Automatically generated from `hhf.m'
** by the Mercury compiler,
** version rotd-2018-07-10
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s {
  MR_Word hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__ImplementationInstGraph_19;
  MR_Word * hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__LambdaHeadVar__1_40;
  MR_Cont hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont;
  void * hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont_env_ptr;
  MR_Word hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__V0_22;
  MR_Box hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__conv0_V0_22;
};

struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s {
  MR_Box * hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__wrapper_arg_1;
  MR_Cont hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont;
  void * hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont_env_ptr;
  MR_Word hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__conv0_LambdaHeadVar__1_40;
};


static const MR_FA_TypeInfo_Struct1 hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

static const MR_FA_TypeInfo_Struct1 hlds__hhf__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

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
  MR_Word ImplementationInstGraph_19,
  MR_Word HeadVars_45,
  MR_Word * LambdaHeadVar__1_40,
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
hlds__hhf__add_cons_id_7_p_0(
  MR_Word Var_8,
  MR_Word ModuleInfo_9,
  MR_Word BaseVars_10,
  MR_Word Arg_11,
  MR_Word * NewVar_12,
  MR_Word STATE_VARIABLE_HI_0_23,
  MR_Word * STATE_VARIABLE_HI_24);

static MR_bool MR_CALL 
hlds__hhf__find_var_with_type_6_p_0(
  MR_Word Var0_7,
  MR_Word Type_8,
  MR_Word InstGraph_9,
  MR_Word VarTypes_10,
  MR_Word BaseVars_11,
  MR_Word * Var_12);

static MR_bool MR_CALL 
hlds__hhf__same_type_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0(
  MR_Word Var_9,
  MR_Word ModuleInfo_10,
  MR_Word BaseVars_11,
  MR_Word TypeCtor_12,
  MR_Word TypeCtorModuleName_13,
  MR_Word Ctor_14,
  MR_Word STATE_VARIABLE_HI_0_28,
  MR_Word * STATE_VARIABLE_HI_29);

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word BaseVars_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_HI_0_19,
  MR_Word * STATE_VARIABLE_HI_20);

static void MR_CALL 
hlds__hhf__goal_use_own_nonlocals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_HI_0_12,
  MR_Word * STATE_VARIABLE_HI_13);

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
  MR_Word STATE_VARIABLE_HI_0_52,
  MR_Word * STATE_VARIABLE_HI_53);

static void MR_CALL 
hlds__hhf__convert_goal_to_hhf_5_p_0(
  MR_Word NonLocals_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_HI_0_13,
  MR_Word * STATE_VARIABLE_HI_14);

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
hlds__hhf__convert_pred_to_hhf_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_2(
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


static /* final */ const MR_Box hlds__hhf_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__hhf_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__hhf_scalar_common_3[3][8];

static /* final */ const MR_Box hlds__hhf_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__hhf_scalar_common_5[2][7];

static /* final */ const MR_Box hlds__hhf_scalar_common_6[1][11];

static /* final */ const MR_Box hlds__hhf_scalar_common_7[1][10];




static /* final */ const MR_Box hlds__hhf_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hhf_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hhf_scalar_common_1[0])),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hhf_scalar_common_5[1])),
    ((MR_Box) (hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_3[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hhf__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hhf__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__hhf__hlds__hhf__field_types_hhf_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0),
  (MR_PseudoTypeInfo) (&hlds__hhf__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString hlds__hhf__hlds__hhf__field_names_hhf_info_0_0[3] = {
  (MR_String) "hhfi_inst_graph",
  (MR_String) "hhfi_varset",
  (MR_String) "hhfi_vartypes"
};

static const MR_DuFunctorDesc hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0 = {
  (MR_String) "hhf_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hhf__hlds__hhf__field_types_hhf_info_0_0,
  hlds__hhf__hlds__hhf__field_names_hhf_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0[1] = {
  &hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0
};

static const MR_DuPtagLayout hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_name_ordered_hhf_info_0[1] = {
  &hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0
};

static const MR_Integer hlds__hhf__hlds__hhf__functor_number_map_hhf_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hhf____Unify____hhf_info_0_0_10001)),
  ((MR_Box) (hlds__hhf____Compare____hhf_info_0_0_10001)),
  (MR_String) "hlds.hhf",
  (MR_String) "hhf_info",
  {     hlds__hhf__hlds__hhf__du_name_ordered_hhf_info_0 },
  {     hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hhf__hlds__hhf__functor_number_map_hhf_info_0
};

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s * env_ptr = (struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__V0_22 = ((MR_Word) ((env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__conv0_V0_22));
    hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s * env_ptr = (struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s *) (env_ptr_arg);

    hlds__inst_graph__reachable_3_p_0((env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__ImplementationInstGraph_19, (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__V0_22, (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__LambdaHeadVar__1_40, (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont, (env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0(
  MR_Word ImplementationInstGraph_19,
  MR_Word HeadVars_45,
  MR_Word * LambdaHeadVar__1_40,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s env;

    (env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__ImplementationInstGraph_19 = ImplementationInstGraph_19;
    (env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__LambdaHeadVar__1_40 = LambdaHeadVar__1_40;
    (env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont = cont;
    (env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__list__member_2_p_1((MR_Word) (&hlds__hhf_scalar_common_1[0]), &(env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__conv0_V0_22, HeadVars_45, hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_2, &env);
  }
}

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hhf_scalar_common_2[0]), &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hhf_scalar_common_1[2]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word TypeCtorInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hhf_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__hhf_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_13_13 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hhf__add_cons_id_7_p_0(
  MR_Word Var_8,
  MR_Word ModuleInfo_9,
  MR_Word BaseVars_10,
  MR_Word Arg_11,
  MR_Word * NewVar_12,
  MR_Word STATE_VARIABLE_HI_0_23,
  MR_Word * STATE_VARIABLE_HI_24)
{
  {
    MR_bool succeeded;
    MR_Word ArgType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 1))));
    MR_Word InstGraph0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_0_23, (MR_Integer) 0))));
    MR_Word VarSet0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_0_23, (MR_Integer) 1))));
    MR_Word VarTypes0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_0_23, (MR_Integer) 2))));
    MR_Word NewVar0_18;

    succeeded = hlds__hhf__find_var_with_type_6_p_0(Var_8, ArgType_14, InstGraph0_15, VarTypes0_17, BaseVars_10, &NewVar0_18);
    if (succeeded)
    {
      *NewVar_12 = NewVar0_18;
      *STATE_VARIABLE_HI_24 = STATE_VARIABLE_HI_0_23;
    }
    else
    {
      MR_Word VarSet_19;
      MR_Word VarTypes_20;
      MR_Word Empty_21;
      MR_Word InstGraph_22;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_HI_27_27;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewVar_12, VarSet0_16, &VarSet_19);
      hlds__vartypes__add_var_type_4_p_0(*NewVar_12, ArgType_14, VarTypes0_17, &VarTypes_20);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), &Empty_21);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_8));
      }
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Empty_21));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Var_26));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (*NewVar_12)), ((MR_Box) (Var_25)), InstGraph0_15, &InstGraph_22);
      {
        STATE_VARIABLE_HI_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_27_27, 0) = ((MR_Box) (InstGraph_22));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_27_27, 1) = ((MR_Box) (VarSet_19));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_27_27, 2) = ((MR_Box) (VarTypes_20));
      }
      hlds__hhf__complete_inst_graph_node_5_p_0(ModuleInfo_9, BaseVars_10, *NewVar_12, STATE_VARIABLE_HI_27_27, STATE_VARIABLE_HI_24);
    }
  }
}

static MR_bool MR_CALL 
hlds__hhf__find_var_with_type_6_p_0(
  MR_Word Var0_7,
  MR_Word Type_8,
  MR_Word InstGraph_9,
  MR_Word VarTypes_10,
  MR_Word BaseVars_11,
  MR_Word * Var_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Type0_13;
    MR_Word A_22;
    MR_Word B_23;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_10, Var0_7, &Type0_13);
    if (succeeded)
    {
      A_22 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type0_13);
      B_23 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_8);
      switch (MR_tag((MR_Word) A_22)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            succeeded = ((MR_tag((MR_Word) B_23)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Name_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_22, (MR_Integer) 0))));
            MR_Word ArgsA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_22, (MR_Integer) 1))));
            MR_Word ArgsB_31;
            MR_Word Var_50;

            succeeded = ((MR_tag((MR_Word) B_23)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_23, (MR_Integer) 0))));
              ArgsB_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_23, (MR_Integer) 1))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_28, Var_50);
              if (succeeded)
                succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_29, ArgsB_31);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), A_22, (MR_Integer) 0))));
            MR_Word Var_51;

            succeeded = ((MR_tag((MR_Word) B_23)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), B_23, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_33, Var_51);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), A_22, (MR_Integer) 0)))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word ArgsA_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_22, (MR_Integer) 1))));
                MR_Word ArgsB_42;

                succeeded = ((((MR_tag((MR_Word) B_23)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 1))));
                  succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_40, ArgsB_42);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PorF_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_22, (MR_Integer) 1))));
                MR_Word ArgsA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_22, (MR_Integer) 2))));
                MR_Word HOInstInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_22, (MR_Integer) 3))));
                MR_Word Purity_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_22, (MR_Integer) 4))));
                MR_Word ArgsB_39;
                MR_Word Var_52;
                MR_Word Var_53;
                MR_Word Var_54;

                succeeded = ((((MR_tag((MR_Word) B_23)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 1))));
                  ArgsB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 2))));
                  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 3))));
                  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 4))));
                  succeeded = (PorF_34 == Var_52);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(HOInstInfo_36, Var_53);
                    if (succeeded)
                    {
                      succeeded = (Purity_37 == Var_54);
                      if (succeeded)
                      {
                        succeeded = MR_TRUE;
                        if (succeeded)
                          succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_35, ArgsB_39);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgsA_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_22, (MR_Integer) 2))));
                MR_Word ArgsB_48;

                succeeded = ((((MR_tag((MR_Word) B_23)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgsB_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_23, (MR_Integer) 2))));
                  succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_45, ArgsB_48);
                }
              }
              break;
          }
          break;
      }
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
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
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
      MR_Word A_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word As_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word B_5;
      MR_Word Bs_6;
      MR_Word A_9;
      MR_Word B_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        B_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Bs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        A_9 = parse_tree__prog_type__strip_kind_annotation_1_f_0(A_3);
        B_10 = parse_tree__prog_type__strip_kind_annotation_1_f_0(B_5);
        switch (MR_tag((MR_Word) A_9)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              succeeded = ((MR_tag((MR_Word) B_10)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Name_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_9, (MR_Integer) 0))));
              MR_Word ArgsA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_9, (MR_Integer) 1))));
              MR_Word ArgsB_18;
              MR_Word Var_37;

              succeeded = ((MR_tag((MR_Word) B_10)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_10, (MR_Integer) 0))));
                ArgsB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_10, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_15, Var_37);
                if (succeeded)
                  succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_16, ArgsB_18);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), A_9, (MR_Integer) 0))));
              MR_Word Var_38;

              succeeded = ((MR_tag((MR_Word) B_10)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), B_10, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_20, Var_38);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), A_9, (MR_Integer) 0)))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word ArgsA_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_9, (MR_Integer) 1))));
                  MR_Word ArgsB_29;

                  succeeded = ((((MR_tag((MR_Word) B_10)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 0))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgsB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 1))));
                    succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_27, ArgsB_29);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PorF_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_9, (MR_Integer) 1))));
                  MR_Word ArgsA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_9, (MR_Integer) 2))));
                  MR_Word HOInstInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_9, (MR_Integer) 3))));
                  MR_Word Purity_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_9, (MR_Integer) 4))));
                  MR_Word ArgsB_26;
                  MR_Word Var_39;
                  MR_Word Var_40;
                  MR_Word Var_41;

                  succeeded = ((((MR_tag((MR_Word) B_10)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 1))));
                    ArgsB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 2))));
                    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 3))));
                    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 4))));
                    succeeded = (PorF_21 == Var_39);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(HOInstInfo_23, Var_40);
                      if (succeeded)
                      {
                        succeeded = (Purity_24 == Var_41);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                            succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_22, ArgsB_26);
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgsA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), A_9, (MR_Integer) 2))));
                  MR_Word ArgsB_35;

                  succeeded = ((((MR_tag((MR_Word) B_10)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 0))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgsB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), B_10, (MR_Integer) 2))));
                    succeeded = hlds__hhf__same_type_list_2_p_0(ArgsA_32, ArgsB_35);
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
hlds__hhf__maybe_add_cons_id_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_NewVar_12;
    MR_Word conv1_STATE_VARIABLE_HI_24;

    hlds__hhf__add_cons_id_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_NewVar_12, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_HI_24);
    *wrapper_arg_2 = ((MR_Box) (conv2_NewVar_12));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_HI_24));
  }
}

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0(
  MR_Word Var_9,
  MR_Word ModuleInfo_10,
  MR_Word BaseVars_11,
  MR_Word TypeCtor_12,
  MR_Word TypeCtorModuleName_13,
  MR_Word Ctor_14,
  MR_Word STATE_VARIABLE_HI_0_28,
  MR_Word * STATE_VARIABLE_HI_29)
{
  {
    MR_bool succeeded;
    MR_Word Name_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 2))));
    MR_Word Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 3))));
    MR_Integer Arity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 4))));
    MR_Word SymName_22;
    MR_Word ConsId_23;
    MR_Word Functors0_24;
    MR_Word MaybeParent_25;
    MR_String Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv0_Var_32;

    Var_30 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_18);
    {
      SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_22, 0) = ((MR_Box) (TypeCtorModuleName_13));
      MR_hl_field(MR_mktag(1), SymName_22, 1) = ((MR_Box) (Var_30));
    }
    {
      ConsId_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_23, 1) = ((MR_Box) (SymName_22));
      MR_hl_field(MR_mktag(3), ConsId_23, 2) = ((MR_Box) (Arity_20));
      MR_hl_field(MR_mktag(3), ConsId_23, 3) = ((MR_Box) (TypeCtor_12));
    }
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_0_28, (MR_Integer) 0))));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), Var_31, ((MR_Box) (Var_9)), &conv0_Var_32);
    Var_32 = ((MR_Word) (conv0_Var_32));
    Functors0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
    MaybeParent_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1))));
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), Functors0_24, ((MR_Box) (ConsId_23)));
    if (succeeded)
      *STATE_VARIABLE_HI_29 = STATE_VARIABLE_HI_0_28;
    else
    {
      MR_Word NewVars_26;
      MR_Word Functors_27;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_HI_34_34;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Box conv3_STATE_VARIABLE_HI_34_34;
      MR_Word Var_44;
      MR_Word Var_45;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__hhf_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__hhf__maybe_add_cons_id_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ModuleInfo_10));
        MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (BaseVars_11));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_33, Args_19, &NewVars_26, ((MR_Box) (STATE_VARIABLE_HI_0_28)), &conv3_STATE_VARIABLE_HI_34_34);
      STATE_VARIABLE_HI_34_34 = ((MR_Word) (conv3_STATE_VARIABLE_HI_34_34));
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), ((MR_Box) (ConsId_23)), ((MR_Box) (NewVars_26)), Functors0_24, &Functors_27);
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_34_34, (MR_Integer) 0))));
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Functors_27));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (MaybeParent_25));
      }
      Var_36 = mercury__map__det_update_3_f_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), Var_37, ((MR_Box) (Var_9)), ((MR_Box) (Var_38)));
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_34_34, (MR_Integer) 1))));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_34_34, (MR_Integer) 2))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HI_29 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
      }
    }
  }
}

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_HI_29;

    hlds__hhf__maybe_add_cons_id_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_HI_29);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_HI_29));
  }
}

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word BaseVars_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_HI_0_19,
  MR_Word * STATE_VARIABLE_HI_20)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_0_19, (MR_Integer) 2))));
    MR_Word Constructors_12;
    MR_Word TypeCtor_13;
    MR_Word Type_11;

    succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes0_10, Var_8, &Type_11);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_6, Type_11, &Constructors_12);
      if (succeeded)
        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_11, &TypeCtor_13);
    }
    if (succeeded)
    {
      MR_Word TypeCtorSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
      MR_Word TypeCtorModuleName_17;
      MR_Word Var_23;
      MR_Box conv1_STATE_VARIABLE_HI_20;

      if (((MR_tag((MR_Word) TypeCtorSymName_14)) == (MR_Integer) 1))
        TypeCtorModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_14, (MR_Integer) 0))));
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.complete_inst_graph_node\'/5", (MR_String) "unqualified TypeCtorSymName");
          return;
        }
      }
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__hhf_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__hhf__complete_inst_graph_node_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (BaseVars_7));
        MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (TypeCtor_13));
        MR_hl_field(MR_mktag(0), Var_23, 7) = ((MR_Box) (TypeCtorModuleName_17));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_23, Constructors_12, ((MR_Box) (STATE_VARIABLE_HI_0_19)), &conv1_STATE_VARIABLE_HI_20);
      *STATE_VARIABLE_HI_20 = ((MR_Word) (conv1_STATE_VARIABLE_HI_20));
    }
    else
      *STATE_VARIABLE_HI_20 = STATE_VARIABLE_HI_0_19;
  }
}

static void MR_CALL 
hlds__hhf__goal_use_own_nonlocals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_HI_0_12,
  MR_Word * STATE_VARIABLE_HI_13)
{
  {
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Word NonLocals_10;
    MR_Word GoalExpr_11;

    NonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
    hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_10, GoalInfo_9, GoalExpr0_8, &GoalExpr_11, STATE_VARIABLE_HI_0_12, STATE_VARIABLE_HI_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_9));
    }
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
  {
    MR_Word Goal0_10;
    MR_Word GoalInfo0_12;
    MR_Word NonLocals_13;
    MR_Word Goal_14;
    MR_Word GoalExpr0_29;
    MR_Word GoalInfo_30;
    MR_Word GoalExpr_31;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    Goal0_10 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_7);
    GoalInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
    NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
    GoalExpr0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0))));
    GoalInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
    hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_13, GoalInfo_30, GoalExpr0_29, &GoalExpr_31, STATE_VARIABLE_HI_0_15, STATE_VARIABLE_HI_16);
    {
      Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_14, 0) = ((MR_Box) (GoalExpr_31));
      MR_hl_field(MR_mktag(0), Goal_14, 1) = ((MR_Box) (GoalInfo_30));
    }
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_7, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Clause_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Goal_6;
    MR_Word conv3_STATE_VARIABLE_HI_13;

    hlds__hhf__goal_use_own_nonlocals_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_HI_13);
    *wrapper_arg_2 = ((MR_Box) (conv4_Goal_6));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_HI_13));
  }
}

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_8;
    MR_Word conv0_STATE_VARIABLE_HI_14;

    hlds__hhf__convert_goal_to_hhf_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_HI_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_HI_14));
  }
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
        MR_Word SubGoal0_79 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_9), (MR_Integer) 0));
        MR_Word SubGoal_80;

        hlds__hhf__convert_goal_to_hhf_5_p_0(NonLocals_7, SubGoal0_79, &SubGoal_80, STATE_VARIABLE_HI_0_61, STATE_VARIABLE_HI_62);
        *GoalExpr_10 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_80)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 0))));
        MR_Word RHS_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Unif_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 3))));
        MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 4))));

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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 0)))) {
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
            MR_Word ConjType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals1_37;
            MR_Word Goals_38;
            MR_Word Var_74;
            MR_Box conv2_STATE_VARIABLE_HI_62;

            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&hlds__hhf_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (NonLocals_7));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_74, Goals0_36, &Goals1_37, ((MR_Box) (STATE_VARIABLE_HI_0_61)), &conv2_STATE_VARIABLE_HI_62);
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
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_35));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_38));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_78;
            MR_Box conv5_STATE_VARIABLE_HI_62;

            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), (MR_Word) (&hlds__hhf_scalar_common_2[1]), Goals0_77, &Goals_78, ((MR_Box) (STATE_VARIABLE_HI_0_61)), &conv5_STATE_VARIABLE_HI_62);
            *STATE_VARIABLE_HI_62 = ((MR_Word) (conv5_STATE_VARIABLE_HI_62));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_78));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.convert_goal_expr_to_hhf\'/6", (MR_String) "switch");
              return;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word SubGoal_44;

            hlds__hhf__convert_goal_to_hhf_5_p_0(NonLocals_7, SubGoal0_43, &SubGoal_44, STATE_VARIABLE_HI_0_61, STATE_VARIABLE_HI_62);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_42));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_44));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
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
            MR_Word STATE_VARIABLE_HI_65_65;
            MR_Word STATE_VARIABLE_HI_66_66;

            hlds__hhf__convert_goal_to_hhf_5_p_0(NonLocals_7, Cond0_46, &Cond_49, STATE_VARIABLE_HI_0_61, &STATE_VARIABLE_HI_65_65);
            ThenExpr0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then0_47, (MR_Integer) 0))));
            ThenInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then0_47, (MR_Integer) 1))));
            ThenNonLocals_52 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ThenInfo_51);
            hlds__hhf__convert_goal_expr_to_hhf_6_p_0(ThenNonLocals_52, ThenInfo_51, ThenExpr0_50, &ThenExpr_53, STATE_VARIABLE_HI_65_65, &STATE_VARIABLE_HI_66_66);
            {
              Then_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_54, 0) = ((MR_Box) (ThenExpr_53));
              MR_hl_field(MR_mktag(0), Then_54, 1) = ((MR_Box) (ThenInfo_51));
            }
            ElseExpr0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else0_48, (MR_Integer) 0))));
            ElseInfo_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else0_48, (MR_Integer) 1))));
            ElseNonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ElseInfo_56);
            hlds__hhf__convert_goal_expr_to_hhf_6_p_0(ElseNonLocals_57, ElseInfo_56, ElseExpr0_55, &ElseExpr_58, STATE_VARIABLE_HI_66_66, STATE_VARIABLE_HI_62);
            {
              Else_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Else_59, 0) = ((MR_Box) (ElseExpr_58));
              MR_hl_field(MR_mktag(0), Else_59, 1) = ((MR_Box) (ElseInfo_56));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vs_45));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_49));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_54));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_59));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.convert_goal_expr_to_hhf\'/6", (MR_String) "shorthand");
              return;
            }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;

    hlds__inst_graph__set_parent_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
  }
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
  MR_Word STATE_VARIABLE_HI_0_52,
  MR_Word * STATE_VARIABLE_HI_53)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS0_11));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_15));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unif_16));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_17));
          }
          *STATE_VARIABLE_HI_53 = STATE_VARIABLE_HI_0_52;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_11, (MR_Integer) 0))));
          MR_Word IsExistConstruct_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_11, (MR_Integer) 1))));
          MR_Word ArgsA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_11, (MR_Integer) 2))));
          MR_Word ConsId_36;
          MR_Word InstGraph0_37;
          MR_Word Functors0_38;
          MR_Word MaybeParent_39;
          MR_Word Unifications_41;
          MR_Word Args_42;
          MR_Word GINonlocals0_47;
          MR_Word GINonlocals_48;
          MR_Word GoalInfo_49;
          MR_Word UnifyGoalExpr_50;
          MR_Word UnifyGoal_51;
          MR_Word Var_54;
          MR_Word Var_59;
          MR_Word Var_61;
          MR_Word RHS_63;
          MR_Word Var_35;
          MR_Box conv0_Var_54;
          MR_Word ArgsB_40;
          MR_Box conv1_ArgsB_40;

          parse_tree__prog_type__qualify_cons_id_4_p_0(ArgsA_34, ConsId0_32, &Var_35, &ConsId_36);
          InstGraph0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_0_52, (MR_Integer) 0))));
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph0_37, ((MR_Box) (X_14)), &conv0_Var_54);
          Var_54 = ((MR_Word) (conv0_Var_54));
          Functors0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
          MaybeParent_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 1))));
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), Functors0_38, ((MR_Box) (ConsId_36)), &conv1_ArgsB_40);
          if (succeeded)
          {
            ArgsB_40 = ((MR_Word) (conv1_ArgsB_40));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            hlds__hhf__make_unifications_7_p_0(ArgsA_34, ArgsB_40, GoalInfo0_13, Mode_15, Unif_16, Context_17, &Unifications_41);
            Args_42 = ArgsB_40;
            *STATE_VARIABLE_HI_53 = STATE_VARIABLE_HI_0_52;
          }
          else
          {
            MR_Word InstGraph1_43;
            MR_Word Functors_44;
            MR_Word InstGraph2_45;
            MR_Word InstGraph_46;
            MR_Word STATE_VARIABLE_HI_55_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Box conv3_InstGraph_46;
            MR_Word Var_69;
            MR_Word Var_70;

            hlds__hhf__add_unifications_10_p_0(ArgsA_34, NonLocals_12, GoalInfo0_13, Mode_15, Unif_16, Context_17, &Args_42, &Unifications_41, STATE_VARIABLE_HI_0_52, &STATE_VARIABLE_HI_55_55);
            InstGraph1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_55_55, (MR_Integer) 0))));
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), ((MR_Box) (ConsId_36)), ((MR_Box) (Args_42)), Functors0_38, &Functors_44);
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Functors_44));
              MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (MaybeParent_39));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (X_14)), ((MR_Box) (Var_56)), InstGraph1_43, &InstGraph2_45);
            {
              Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&hlds__hhf_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (hlds__hhf__convert_unify_to_hhf_10_p_0_1));
              MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (X_14));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__hhf_scalar_common_2[0]), Var_57, Args_42, ((MR_Box) (InstGraph2_45)), &conv3_InstGraph_46);
            InstGraph_46 = ((MR_Word) (conv3_InstGraph_46));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_55_55, (MR_Integer) 1))));
            Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_55_55, (MR_Integer) 2))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_HI_53 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstGraph_46));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_70));
            }
          }
          GINonlocals0_47 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
          Var_59 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_42);
          GINonlocals_48 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GINonlocals0_47, Var_59);
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(GINonlocals_48, GoalInfo0_13, &GoalInfo_49);
          {
            RHS_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RHS_63, 0) = ((MR_Box) (ConsId_36));
            MR_hl_field(MR_mktag(1), RHS_63, 1) = ((MR_Box) (IsExistConstruct_33));
            MR_hl_field(MR_mktag(1), RHS_63, 2) = ((MR_Box) (Args_42));
          }
          {
            UnifyGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), UnifyGoalExpr_50, 0) = ((MR_Box) (X_14));
            MR_hl_field(MR_mktag(1), UnifyGoalExpr_50, 1) = ((MR_Box) (RHS_63));
            MR_hl_field(MR_mktag(1), UnifyGoalExpr_50, 2) = ((MR_Box) (Mode_15));
            MR_hl_field(MR_mktag(1), UnifyGoalExpr_50, 3) = ((MR_Box) (Unif_16));
            MR_hl_field(MR_mktag(1), UnifyGoalExpr_50, 4) = ((MR_Box) (Context_17));
          }
          {
            UnifyGoal_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnifyGoal_51, 0) = ((MR_Box) (UnifyGoalExpr_50));
            MR_hl_field(MR_mktag(0), UnifyGoal_51, 1) = ((MR_Box) (GoalInfo_49));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (UnifyGoal_51));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Unifications_41));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_18 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_61));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word E_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 2))));
          MR_Word F_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 3))));
          MR_Word G_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 4))));
          MR_Word H_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 5))));
          MR_Word LambdaGoal0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 6))));
          MR_Word LambdaGoal_29;
          MR_Word RHS_30;
          MR_Word GoalExpr0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal0_28, (MR_Integer) 0))));
          MR_Word GoalInfo_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal0_28, (MR_Integer) 1))));
          MR_Word GoalExpr_90;
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 0)));

          hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_12, GoalInfo_89, GoalExpr0_88, &GoalExpr_90, STATE_VARIABLE_HI_0_52, STATE_VARIABLE_HI_53);
          {
            LambdaGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LambdaGoal_29, 0) = ((MR_Box) (GoalExpr_90));
            MR_hl_field(MR_mktag(0), LambdaGoal_29, 1) = ((MR_Box) (GoalInfo_89));
          }
          {
            RHS_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), RHS_30, 0) = (MR_Box) (packed_args_0);
            MR_hl_field(MR_mktag(2), RHS_30, 1) = NULL;
            MR_hl_field(MR_mktag(2), RHS_30, 2) = ((MR_Box) (E_24));
            MR_hl_field(MR_mktag(2), RHS_30, 3) = ((MR_Box) (F_25));
            MR_hl_field(MR_mktag(2), RHS_30, 4) = ((MR_Box) (G_26));
            MR_hl_field(MR_mktag(2), RHS_30, 5) = ((MR_Box) (H_27));
            MR_hl_field(MR_mktag(2), RHS_30, 6) = ((MR_Box) (LambdaGoal_29));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_30));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_15));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unif_16));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_17));
          }
        }
        break;
    }
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
  {
    MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word GoalExpr_12;

    hlds__hhf__convert_goal_expr_to_hhf_6_p_0(NonLocals_6, GoalInfo_11, GoalExpr0_10, &GoalExpr_12, STATE_VARIABLE_HI_0_13, STATE_VARIABLE_HI_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
    }
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
      MR_Word A_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word As_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word V_26;
      MR_Word Vs_27;
      MR_Word Goals0_30;
      MR_Word InstGraph0_31;
      MR_Word STATE_VARIABLE_HI_47_47;

      hlds__hhf__add_unifications_10_p_0(As_20, NonLocals_2, GI0_3, M_4, U_5, C_6, &Vs_27, &Goals0_30, STATE_VARIABLE_HI_0_9, &STATE_VARIABLE_HI_47_47);
      InstGraph0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_47_47, (MR_Integer) 0))));
      {
        MR_Word Node_32;
        MR_Word Var_48;
        MR_Box conv0_Node_32;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph0_31, ((MR_Box) (A_19)), &conv0_Node_32);
        Node_32 = ((MR_Word) (conv0_Node_32));
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Node_32, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      if (!(succeeded))
      {
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_2, A_19);
      }
      if (succeeded)
      {
        MR_Word VarSet0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_47_47, (MR_Integer) 1))));
        MR_Word VarTypes0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HI_47_47, (MR_Integer) 2))));
        MR_Word VarSet_37;
        MR_Word Type_38;
        MR_Word VarTypes_39;
        MR_Word Empty_40;
        MR_Word InstGraph_41;
        MR_Word GINonlocals0_42;
        MR_Word GINonlocals_43;
        MR_Word GI_44;
        MR_Word Var_49;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_67;

        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &V_26, VarSet0_35, &VarSet_37);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_36, A_19, &Type_38);
        hlds__vartypes__add_var_type_4_p_0(V_26, Type_38, VarTypes0_36, &VarTypes_39);
        mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hhf_scalar_common_1[1]), &Empty_40);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Empty_40));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), ((MR_Box) (V_26)), ((MR_Box) (Var_49)), InstGraph0_31, &InstGraph_41);
        Var_67 = VarSet_37;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HI_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstGraph_41));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_39));
        }
        GINonlocals0_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GI0_3);
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), V_26, GINonlocals0_42, &GINonlocals_43);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(GINonlocals_43, GI0_3, &GI_44);
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (V_26));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (A_19));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_55, 2) = ((MR_Box) (M_4));
          MR_hl_field(MR_mktag(1), Var_55, 3) = ((MR_Box) (U_5));
          MR_hl_field(MR_mktag(1), Var_55, 4) = ((MR_Box) (C_6));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (GI_44));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals0_30));
        }
      }
      else
      {
        V_26 = A_19;
        *HeadVar__8_8 = Goals0_30;
        *STATE_VARIABLE_HI_10 = STATE_VARIABLE_HI_47_47;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs_27));
      }
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.make_unifications\'/7", (MR_String) "length mismatch (2)");
        return;
      }
    }
  else
  {
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hhf.make_unifications\'/7", (MR_String) "length mismatch (1)");
        return;
      }
    }
    else
    {
      MR_Word B_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Bs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (B_32));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 2) = ((MR_Box) (M_4));
        MR_hl_field(MR_mktag(1), Var_43, 3) = ((MR_Box) (U_5));
        MR_hl_field(MR_mktag(1), Var_43, 4) = ((MR_Box) (C_6));
      }
      GINonlocals0_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GI0_3);
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (B_32));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
      }
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_45, GINonlocals0_40, &GINonlocals_41);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(GINonlocals_41, GI0_3, &GI_38);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (GI_38));
      }
      hlds__hhf__make_unifications_7_p_0(Var_49, Bs_33, GI0_3, M_4, U_5, C_6, &Us_39);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Us_39));
      }
    }
  }
}

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s * env_ptr = (struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__conv0_LambdaHeadVar__1_40));
    ((env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont)((env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s env;

    (env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont = cont;
    (env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__conv0_LambdaHeadVar__1_40, hlds__hhf__convert_pred_to_hhf_6_p_0_1, &env);
    }
  }
}

void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0(
  MR_Word Simple_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_11;
    MR_Word PredInfo_24;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_25, PredId_8, &PredInfo0_11);
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_11);
    if (succeeded)
    {
      MR_Word ClausesInfo_12;
      MR_Word HeadVars_13;
      MR_Word VarSet_14;
      MR_Word InstGraph_16;
      MR_Word STATE_VARIABLE_IG_29_29;
      MR_Word STATE_VARIABLE_IG_30_30;
      MR_Word STATE_VARIABLE_IG_31_31;
      MR_Word STATE_VARIABLE_IG_32_32;
      MR_Word STATE_VARIABLE_IG_33_33;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_11, &ClausesInfo_12);
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_12, &HeadVars_13);
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo_12, &VarSet_14);
      hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(PredInfo0_11, &STATE_VARIABLE_IG_29_29);
      hlds__inst_graph__init_2_p_0(HeadVars_13, &InstGraph_16);
      STATE_VARIABLE_IG_30_30 = hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(STATE_VARIABLE_IG_29_29, InstGraph_16);
      STATE_VARIABLE_IG_31_31 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(STATE_VARIABLE_IG_30_30, InstGraph_16);
      STATE_VARIABLE_IG_32_32 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_IG_31_31, HeadVars_13);
      STATE_VARIABLE_IG_33_33 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(STATE_VARIABLE_IG_32_32, VarSet_14);
      hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(STATE_VARIABLE_IG_33_33, PredInfo0_11, &PredInfo_24);
    }
    else
    {
      MR_Word ClausesInfo0_18;
      MR_Word ImplementationInstGraph_19;
      MR_Word PredInfo1_20;
      MR_Word InterfaceVars_23;
      MR_Word STATE_VARIABLE_IG_36_36;
      MR_Word STATE_VARIABLE_IG_37_37;
      MR_Word STATE_VARIABLE_IG_38_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_IG_41_41;
      MR_Word STATE_VARIABLE_IG_42_42;
      MR_Word HeadVars_45;
      MR_Word VarSet_46;
      MR_Word ClausesInfo_49;

      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Calculating HHF and inst graph for ", PredId_8, STATE_VARIABLE_ModuleInfo_0_25);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_11, &ClausesInfo0_18);
      hlds__hhf__convert_clauses_info_to_hhf_5_p_0(Simple_7, STATE_VARIABLE_ModuleInfo_0_25, ClausesInfo0_18, &ClausesInfo_49, &ImplementationInstGraph_19);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_49, PredInfo0_11, &PredInfo1_20);
      hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(PredInfo1_20, &STATE_VARIABLE_IG_36_36);
      STATE_VARIABLE_IG_37_37 = hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(STATE_VARIABLE_IG_36_36, ImplementationInstGraph_19);
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_49, &HeadVars_45);
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo_49, &VarSet_46);
      STATE_VARIABLE_IG_38_38 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(STATE_VARIABLE_IG_37_37, ImplementationInstGraph_19);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (hlds__hhf__convert_pred_to_hhf_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ImplementationInstGraph_19));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (HeadVars_45));
      }
      mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hhf_scalar_common_1[0]), Var_39, &InterfaceVars_23);
      STATE_VARIABLE_IG_41_41 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(STATE_VARIABLE_IG_38_38, InterfaceVars_23);
      STATE_VARIABLE_IG_42_42 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(STATE_VARIABLE_IG_41_41, VarSet_46);
      hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(STATE_VARIABLE_IG_42_42, PredInfo1_20, &PredInfo_24);
    }
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_24, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
  }
}

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_HI_20;

    hlds__hhf__complete_inst_graph_node_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_HI_20);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_HI_20));
  }
}

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Clause_8;
    MR_Word conv0_STATE_VARIABLE_HI_16;

    hlds__hhf__convert_clause_to_hhf_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Clause_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_HI_16);
    *wrapper_arg_2 = ((MR_Box) (conv1_Clause_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_HI_16));
  }
}

void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0(
  MR_Word Simple_6,
  MR_Word ModuleInfo_7,
  MR_Word STATE_VARIABLE_ClausesInfo_0_26,
  MR_Word * STATE_VARIABLE_ClausesInfo_27,
  MR_Word * InstGraph_9)
{
  {
    MR_Word VarSet0_10;
    MR_Word VarTypes0_11;
    MR_Word Vars0_12;
    MR_Word InstGraph0_13;
    MR_Word Info0_14;
    MR_Word HeadVars_15;
    MR_Word Clauses0_16;
    MR_Word ItemNumbers_17;
    MR_Word Clauses_18;
    MR_Word Info1_19;
    MR_Word ClausesRep_20;
    MR_Word Info_21;
    MR_Word InstGraph1_22;
    MR_Word VarSet_23;
    MR_Word VarTypes_24;
    MR_Word STATE_VARIABLE_ClausesInfo_28_28;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_ClausesInfo_30_30;
    MR_Word STATE_VARIABLE_ClausesInfo_31_31;
    MR_Word InstGraph0_43;
    MR_Word Vars_44;
    MR_Word Var_45;
    MR_Box conv2_Info1_19;
    MR_Box conv4_Info_21;

    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_0_26, &VarSet0_10);
    hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_0_26, &VarTypes0_11);
    hlds__vartypes__vartypes_vars_2_p_0(VarTypes0_11, &Vars0_12);
    hlds__inst_graph__init_2_p_0(Vars0_12, &InstGraph0_13);
    {
      Info0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_14, 0) = ((MR_Box) (InstGraph0_13));
      MR_hl_field(MR_mktag(0), Info0_14, 1) = ((MR_Box) (VarSet0_10));
      MR_hl_field(MR_mktag(0), Info0_14, 2) = ((MR_Box) (VarTypes0_11));
    }
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(STATE_VARIABLE_ClausesInfo_0_26, &HeadVars_15);
    hlds__hlds_clauses__clauses_info_clauses_4_p_0(&Clauses0_16, &ItemNumbers_17, STATE_VARIABLE_ClausesInfo_0_26, &STATE_VARIABLE_ClausesInfo_28_28);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&hlds__hhf_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (HeadVars_15));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_29, Clauses0_16, &Clauses_18, ((MR_Box) (Info0_14)), &conv2_Info1_19);
    Info1_19 = ((MR_Word) (conv2_Info1_19));
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_18, &ClausesRep_20);
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_20, ItemNumbers_17, STATE_VARIABLE_ClausesInfo_28_28, &STATE_VARIABLE_ClausesInfo_30_30);
    InstGraph0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_19, (MR_Integer) 0))));
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0), InstGraph0_43, &Vars_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&hlds__hhf_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Vars_44));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hhf_scalar_common_1[0]), (MR_Word) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0), Var_45, Vars_44, ((MR_Box) (Info1_19)), &conv4_Info_21);
    Info_21 = ((MR_Word) (conv4_Info_21));
    InstGraph1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_21, (MR_Integer) 0))));
    VarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_21, (MR_Integer) 1))));
    VarTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_21, (MR_Integer) 2))));
    switch (Simple_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *InstGraph_9 = InstGraph1_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Vars_25;

          hlds__vartypes__vartypes_vars_2_p_0(VarTypes_24, &Vars_25);
          hlds__inst_graph__init_2_p_0(Vars_25, InstGraph_9);
        }
        break;
    }
    hlds__hlds_clauses__clauses_info_set_varset_3_p_0(VarSet_23, STATE_VARIABLE_ClausesInfo_30_30, &STATE_VARIABLE_ClausesInfo_31_31);
    hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(VarTypes_24, STATE_VARIABLE_ClausesInfo_31_31, STATE_VARIABLE_ClausesInfo_27);
  }
}

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hhf____Unify____hhf_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hhf____Compare____hhf_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
