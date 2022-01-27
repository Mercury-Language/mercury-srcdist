/*
** Automatically generated from `hhf.m'
** by the Mercury compiler,
** version DEV
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


/* :- module hlds.hhf. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.passes_aux.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0_10001(
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2);

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0_10001(
  MR_Box * hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3);

static void MR_CALL 
hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(
  MR_Word hlds__hhf__Clause0_7,
  MR_Word * hlds__hhf__Clause_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_15,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_16);

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_2(
  void * hlds__hhf__env_ptr_arg);

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_1(
  void * hlds__hhf__env_ptr_arg);

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0(
  MR_Word hlds__hhf__ImplementationInstGraph_19,
  MR_Word hlds__hhf__HeadVars_45,
  MR_Word * hlds__hhf__LambdaHeadVar__1_40,
  MR_Cont hlds__hhf__cont,
  void * hlds__hhf__cont_env_ptr);

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0(
  MR_Word * hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2,
  MR_Word hlds__hhf__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hhf__same_type_list_2_p_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hhf__same_type_2_2_p_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hhf__find_var_with_type_6_p_0(
  MR_Word hlds__hhf__Var0_7,
  MR_Word hlds__hhf__Type_8,
  MR_Word hlds__hhf__InstGraph_9,
  MR_Word hlds__hhf__VarTypes_10,
  MR_Word hlds__hhf__BaseVars_11,
  MR_Word * hlds__hhf__Var_12);

static void MR_CALL 
hlds__hhf__add_cons_id_7_p_0(
  MR_Word hlds__hhf__Var_8,
  MR_Word hlds__hhf__ModuleInfo_9,
  MR_Word hlds__hhf__BaseVars_10,
  MR_Word hlds__hhf__Arg_11,
  MR_Word * hlds__hhf__NewVar_12,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_23,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_24);

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box * hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3,
  MR_Box * hlds__hhf__wrapper_arg_4);

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0(
  MR_Word hlds__hhf__Var_9,
  MR_Word hlds__hhf__ModuleInfo_10,
  MR_Word hlds__hhf__BaseVars_11,
  MR_Word hlds__hhf__TypeCtor_12,
  MR_Word hlds__hhf__TypeCtorModuleName_13,
  MR_Word hlds__hhf__Ctor_14,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_28,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_29);

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2,
  MR_Box * hlds__hhf__wrapper_arg_3);

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0(
  MR_Word hlds__hhf__ModuleInfo_6,
  MR_Word hlds__hhf__BaseVars_7,
  MR_Word hlds__hhf__Var_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_19,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_20);

static void MR_CALL 
hlds__hhf__add_unifications_10_p_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__NonLocals_2,
  MR_Word hlds__hhf__GI0_3,
  MR_Word hlds__hhf__M_4,
  MR_Word hlds__hhf__U_5,
  MR_Word hlds__hhf__C_6,
  MR_Word * hlds__hhf__HeadVar__7_7,
  MR_Word * hlds__hhf__HeadVar__8_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_9,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_10);

static void MR_CALL 
hlds__hhf__make_unifications_7_p_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2,
  MR_Word hlds__hhf__GI0_3,
  MR_Word hlds__hhf__M_4,
  MR_Word hlds__hhf__U_5,
  MR_Word hlds__hhf__C_6,
  MR_Word * hlds__hhf__HeadVar__7_7);

static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2,
  MR_Box * hlds__hhf__wrapper_arg_3);

static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0(
  MR_Word hlds__hhf__RHS0_11,
  MR_Word hlds__hhf__NonLocals_12,
  MR_Word hlds__hhf__GoalInfo0_13,
  MR_Word hlds__hhf__X_14,
  MR_Word hlds__hhf__Mode_15,
  MR_Word hlds__hhf__Unif_16,
  MR_Word hlds__hhf__Context_17,
  MR_Word * hlds__hhf__GoalExpr_18,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_52,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_53);

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box * hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3,
  MR_Box * hlds__hhf__wrapper_arg_4);

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box * hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3,
  MR_Box * hlds__hhf__wrapper_arg_4);

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0(
  MR_Word hlds__hhf__NonLocals_7,
  MR_Word hlds__hhf__GoalInfo_8,
  MR_Word hlds__hhf__GoalExpr0_9,
  MR_Word * hlds__hhf__GoalExpr_10,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_61,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_62);

static void MR_CALL 
hlds__hhf__goal_use_own_nonlocals_4_p_0(
  MR_Word hlds__hhf__Goal0_5,
  MR_Word * hlds__hhf__Goal_6,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_12,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_13);

static void MR_CALL 
hlds__hhf__convert_goal_to_hhf_5_p_0(
  MR_Word hlds__hhf__NonLocals_6,
  MR_Word hlds__hhf__Goal0_7,
  MR_Word * hlds__hhf__Goal_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_13,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_14);

static void MR_CALL 
hlds__hhf__convert_clause_to_hhf_5_p_0(
  MR_Word hlds__hhf___HeadVars_6,
  MR_Word hlds__hhf__Clause0_7,
  MR_Word * hlds__hhf__Clause_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_15,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_16);

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2,
  MR_Box * hlds__hhf__wrapper_arg_3);

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box * hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3,
  MR_Box * hlds__hhf__wrapper_arg_4);

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_1(
  void * hlds__hhf__env_ptr_arg);

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_2(
  MR_Box hlds__hhf__closure_arg,
  MR_Box * hlds__hhf__wrapper_arg_1,
  MR_Cont hlds__hhf__cont,
  void * hlds__hhf__cont_env_ptr);


static /* final */ const MR_Box hlds__hhf_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__hhf_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hhf_scalar_common_3[1][6];

static /* final */ const MR_Box hlds__hhf_scalar_common_4[3][8];

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

static /* final */ const MR_Box hlds__hhf_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hhf_scalar_common_1[0])),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hhf_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hhf_scalar_common_5[0])),
    ((MR_Box) (hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_3[1][6] = {
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

static /* final */ const MR_Box hlds__hhf_scalar_common_4[3][8] = {
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

static /* final */ const MR_Box hlds__hhf_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0))
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
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hhf__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo hlds__hhf__hlds__hhf__field_types_hhf_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &hlds__hhf__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hhf__hlds__hhf__field_types_hhf_info_0_0,
  hlds__hhf__hlds__hhf__field_names_hhf_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0[1] = {
  &hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0
};

static const MR_DuPtagLayout hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0_10001(
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2)
{
  {
    MR_bool hlds__hhf__succeeded;

    {
      hlds__hhf__succeeded = hlds__hhf____Unify____hhf_info_0_0(((MR_Word) hlds__hhf__wrapper_arg_1), ((MR_Word) hlds__hhf__wrapper_arg_2));
    }
    return hlds__hhf__succeeded;
  }
}

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0_10001(
  MR_Box * hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3)
{
  {
    MR_Word hlds__hhf__conv0_HeadVar__1_1;

    {
      hlds__hhf____Compare____hhf_info_0_0(&hlds__hhf__conv0_HeadVar__1_1, ((MR_Word) hlds__hhf__wrapper_arg_2), ((MR_Word) hlds__hhf__wrapper_arg_3));
    }
    *hlds__hhf__wrapper_arg_1 = ((MR_Box) (hlds__hhf__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(
  MR_Word hlds__hhf__Clause0_7,
  MR_Word * hlds__hhf__Clause_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_15,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_16)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Word hlds__hhf__Goal0_10;
    MR_Word hlds__hhf__GoalInfo0_12;
    MR_Word hlds__hhf__NonLocals_13;
    MR_Word hlds__hhf__Goal_14;
    MR_Word hlds__hhf__GoalExpr0_29;
    MR_Word hlds__hhf__GoalInfo_30;
    MR_Word hlds__hhf__GoalExpr_31;
    MR_Word hlds__hhf__V_11_11;
    MR_Word hlds__hhf__V_18_18;
    MR_Word hlds__hhf__V_20_20;
    MR_Word hlds__hhf__V_21_21;
    MR_Word hlds__hhf__V_22_22;
    MR_Word hlds__hhf__V_19_19;

    {
      hlds__hhf__Goal0_10 = hlds__hlds_clauses__clause_body_1_f_0(hlds__hhf__Clause0_7);
    }
    hlds__hhf__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_10, (MR_Integer) 0)));
    hlds__hhf__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_10, (MR_Integer) 1)));
    {
      hlds__hhf__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GoalInfo0_12);
    }
    hlds__hhf__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_10, (MR_Integer) 0)));
    hlds__hhf__GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_10, (MR_Integer) 1)));
    {
      hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__NonLocals_13, hlds__hhf__GoalInfo_30, hlds__hhf__GoalExpr0_29, &hlds__hhf__GoalExpr_31, hlds__hhf__STATE_VARIABLE_HI_0_15, hlds__hhf__STATE_VARIABLE_HI_16);
    }
    {
      hlds__hhf__Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hhf__Goal_14, 0) = ((MR_Box) (hlds__hhf__GoalExpr_31));
      MR_hl_field(MR_mktag(0), hlds__hhf__Goal_14, 1) = ((MR_Box) (hlds__hhf__GoalInfo_30));
    }
    hlds__hhf__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 0)));
    hlds__hhf__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 1)));
    hlds__hhf__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 2)));
    hlds__hhf__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 3)));
    hlds__hhf__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hhf__Clause_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__V_18_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__Goal_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hhf__V_20_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hhf__V_21_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hhf__V_22_22));
    }
  }
}

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_2(
  void * hlds__hhf__env_ptr_arg)
{
  {
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s * hlds__hhf__env_ptr = (struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s *) hlds__hhf__env_ptr_arg;

    (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__V0_22 = ((MR_Word) (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__conv0_V0_22);
    {
      hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_1(hlds__hhf__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_1(
  void * hlds__hhf__env_ptr_arg)
{
  {
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s * hlds__hhf__env_ptr = (struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s *) hlds__hhf__env_ptr_arg;

    {
      hlds__inst_graph__reachable_3_p_0((hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__ImplementationInstGraph_19, (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__V0_22, (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__LambdaHeadVar__1_40, (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont, (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0(
  MR_Word hlds__hhf__ImplementationInstGraph_19,
  MR_Word hlds__hhf__HeadVars_45,
  MR_Word * hlds__hhf__LambdaHeadVar__1_40,
  MR_Cont hlds__hhf__cont,
  void * hlds__hhf__cont_env_ptr)
{
  {
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0_s hlds__hhf__env;

    (hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__ImplementationInstGraph_19 = hlds__hhf__ImplementationInstGraph_19;
    (hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__LambdaHeadVar__1_40 = hlds__hhf__LambdaHeadVar__1_40;
    (hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont = hlds__hhf__cont;
    (hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__cont_env_ptr = hlds__hhf__cont_env_ptr;
    {
      MR_bool hlds__hhf__succeeded;

      {
        mercury__list__member_2_p_1((MR_Word) &hlds__hhf_scalar_common_1[0], &(hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_env_0__conv0_V0_22, hlds__hhf__HeadVars_45, hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0_2, &hlds__hhf__env);
      }
    }
  }
}

static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0(
  MR_Word * hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2,
  MR_Word hlds__hhf__HeadVar__3_3)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Integer hlds__hhf__CastX_12 = (MR_Integer) hlds__hhf__HeadVar__2_2;
    MR_Integer hlds__hhf__CastY_13 = (MR_Integer) hlds__hhf__HeadVar__3_3;

    hlds__hhf__succeeded = (hlds__hhf__CastX_12 == hlds__hhf__CastY_13);
    if (hlds__hhf__succeeded)
      *hlds__hhf__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__hhf__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hhf__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hhf__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hhf__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hhf__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hhf__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hhf__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hhf_scalar_common_2[0], &hlds__hhf__V_10_10, ((MR_Box) (hlds__hhf__V_4_4)), ((MR_Box) (hlds__hhf__V_7_7)));
        }
        hlds__hhf__succeeded = (hlds__hhf__V_10_10 == (MR_Integer) 0);
        hlds__hhf__succeeded = !(hlds__hhf__succeeded);
        if (hlds__hhf__succeeded)
          *hlds__hhf__HeadVar__1_1 = hlds__hhf__V_10_10;
        else
          {
            MR_Word hlds__hhf__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hhf_scalar_common_1[2], &hlds__hhf__V_11_11, ((MR_Box) (hlds__hhf__V_5_5)), ((MR_Box) (hlds__hhf__V_8_8)));
            }
            hlds__hhf__succeeded = (hlds__hhf__V_11_11 == (MR_Integer) 0);
            hlds__hhf__succeeded = !(hlds__hhf__succeeded);
            if (hlds__hhf__succeeded)
              *hlds__hhf__HeadVar__1_1 = hlds__hhf__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hhf_scalar_common_2[1], hlds__hhf__HeadVar__1_1, ((MR_Box) (hlds__hhf__V_6_6)), ((MR_Box) (hlds__hhf__V_9_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Integer hlds__hhf__CastX_9 = (MR_Integer) hlds__hhf__HeadVar__1_1;
    MR_Integer hlds__hhf__CastY_10 = (MR_Integer) hlds__hhf__HeadVar__2_2;

    hlds__hhf__succeeded = (hlds__hhf__CastX_9 == hlds__hhf__CastY_10);
    if (hlds__hhf__succeeded)
      hlds__hhf__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hhf__TypeInfo_12_12;
        MR_Word hlds__hhf__TypeInfo_13_13;
        MR_Word hlds__hhf__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hhf__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hhf__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hhf__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hhf__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hhf__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));

        {
          hlds__hhf__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hhf_scalar_common_2[0], ((MR_Box) (hlds__hhf__V_3_3)), ((MR_Box) (hlds__hhf__V_6_6)));
        }
        if (hlds__hhf__succeeded)
          {
            hlds__hhf__TypeInfo_12_12 = (MR_Word) &hlds__hhf_scalar_common_1[2];
            {
              hlds__hhf__succeeded = mercury__builtin__unify_2_p_0(hlds__hhf__TypeInfo_12_12, ((MR_Box) (hlds__hhf__V_4_4)), ((MR_Box) (hlds__hhf__V_7_7)));
            }
            if (hlds__hhf__succeeded)
              {
                hlds__hhf__TypeInfo_13_13 = (MR_Word) &hlds__hhf_scalar_common_2[1];
                {
                  hlds__hhf__succeeded = mercury__builtin__unify_2_p_0(hlds__hhf__TypeInfo_13_13, ((MR_Box) (hlds__hhf__V_5_5)), ((MR_Box) (hlds__hhf__V_8_8)));
                }
              }
          }
      }
    return hlds__hhf__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hhf__same_type_list_2_p_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hhf__succeeded;

        if ((hlds__hhf__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__hhf__succeeded = (hlds__hhf__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word hlds__hhf__A_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hhf__As_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hhf__B_5;
            MR_Word hlds__hhf__Bs_6;
            MR_Word hlds__hhf__A_9;
            MR_Word hlds__hhf__B_10;

            hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hhf__succeeded)
              {
                hlds__hhf__B_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
                hlds__hhf__Bs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
                {
                  hlds__hhf__A_9 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__A_3);
                }
                {
                  hlds__hhf__B_10 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__B_5);
                }
                {
                  hlds__hhf__succeeded = hlds__hhf__same_type_2_2_p_0(hlds__hhf__A_9, hlds__hhf__B_10);
                }
                if (hlds__hhf__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__hhf__HeadVar__1__tmp_copy_1 = hlds__hhf__As_4;
                      MR_Word hlds__hhf__HeadVar__2__tmp_copy_2 = hlds__hhf__Bs_6;

                      hlds__hhf__HeadVar__2_2 = hlds__hhf__HeadVar__2__tmp_copy_2;
                      hlds__hhf__HeadVar__1_1 = hlds__hhf__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return hlds__hhf__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__hhf__same_type_2_2_p_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2)
{
  {
    MR_bool hlds__hhf__succeeded;

    switch (MR_tag((MR_Word) hlds__hhf__HeadVar__1_1)) {
      default:
        hlds__hhf__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__hhf__V_5_5;
          MR_Word hlds__hhf__V_6_6;

          hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
          if (hlds__hhf__succeeded)
            {
              hlds__hhf__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hhf__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hhf__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__hhf__ArgsA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word hlds__hhf__ArgsB_10;
          MR_Word hlds__hhf__V_29_29;
          MR_Word hlds__hhf__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word hlds__hhf__V_11_11;

          hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__hhf__succeeded)
            {
              hlds__hhf__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hhf__ArgsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
              hlds__hhf__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
              {
                hlds__hhf__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hhf__Name_7, hlds__hhf__V_29_29);
              }
              if (hlds__hhf__succeeded)
                {
                  hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__ArgsA_8, hlds__hhf__ArgsB_10);
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hhf__BuiltinType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__hhf__V_30_30;

          hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
          if (hlds__hhf__succeeded)
            {
              hlds__hhf__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hhf__succeeded = (hlds__hhf__BuiltinType_12 == hlds__hhf__V_30_30);
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            hlds__hhf__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word hlds__hhf__ArgsA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__hhf__ArgsB_21;
              MR_Word hlds__hhf__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word hlds__hhf__V_22_22;

              hlds__hhf__succeeded = ((((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (hlds__hhf__succeeded)
                {
                  hlds__hhf__ArgsB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
                  hlds__hhf__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
                  {
                    hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__ArgsA_19, hlds__hhf__ArgsB_21);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hhf__PorF_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__hhf__ArgsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word hlds__hhf__HOInstInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word hlds__hhf__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word hlds__hhf__ArgsB_18;
              MR_Word hlds__hhf__V_31_31;
              MR_Word hlds__hhf__V_32_32;
              MR_Word hlds__hhf__V_33_33;

              hlds__hhf__succeeded = ((((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (hlds__hhf__succeeded)
                {
                  hlds__hhf__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
                  hlds__hhf__ArgsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
                  hlds__hhf__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 3)));
                  hlds__hhf__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 4)));
                  hlds__hhf__succeeded = (hlds__hhf__PorF_13 == hlds__hhf__V_31_31);
                  if (hlds__hhf__succeeded)
                    {
                      {
                        hlds__hhf__succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(hlds__hhf__HOInstInfo_15, hlds__hhf__V_32_32);
                      }
                      if (hlds__hhf__succeeded)
                        {
                          hlds__hhf__succeeded = (hlds__hhf__Purity_16 == hlds__hhf__V_33_33);
                          if (hlds__hhf__succeeded)
                            {
                              hlds__hhf__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
                              if (hlds__hhf__succeeded)
                                {
                                  hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__ArgsA_14, hlds__hhf__ArgsB_18);
                                }
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hhf__ArgsA_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word hlds__hhf__ArgsB_27;
              MR_Word hlds__hhf__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__hhf__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word hlds__hhf__V_26_26;
              MR_Word hlds__hhf__V_28_28;

              hlds__hhf__succeeded = ((((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (hlds__hhf__succeeded)
                {
                  hlds__hhf__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
                  hlds__hhf__ArgsB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
                  hlds__hhf__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 3)));
                  {
                    hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__ArgsA_24, hlds__hhf__ArgsB_27);
                  }
                }
            }
            break;
        }
        break;
    }
    return hlds__hhf__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hhf__find_var_with_type_6_p_0(
  MR_Word hlds__hhf__Var0_7,
  MR_Word hlds__hhf__Type_8,
  MR_Word hlds__hhf__InstGraph_9,
  MR_Word hlds__hhf__VarTypes_10,
  MR_Word hlds__hhf__BaseVars_11,
  MR_Word * hlds__hhf__Var_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hhf__succeeded;
        MR_Word hlds__hhf__Type0_13;
        MR_Word hlds__hhf__A_22;
        MR_Word hlds__hhf__B_23;

        {
          hlds__hhf__succeeded = hlds__vartypes__search_var_type_3_p_0(hlds__hhf__VarTypes_10, hlds__hhf__Var0_7, &hlds__hhf__Type0_13);
        }
        if (hlds__hhf__succeeded)
          {
            {
              hlds__hhf__A_22 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__Type0_13);
            }
            {
              hlds__hhf__B_23 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__Type_8);
            }
            {
              hlds__hhf__succeeded = hlds__hhf__same_type_2_2_p_0(hlds__hhf__A_22, hlds__hhf__B_23);
            }
          }
        if (hlds__hhf__succeeded)
          {
            *hlds__hhf__Var_12 = hlds__hhf__Var0_7;
            hlds__hhf__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word hlds__hhf__TypeInfo_18_18 = (MR_Word) &hlds__hhf_scalar_common_1[0];
            MR_Word hlds__hhf__Var1_15;
            MR_Word hlds__hhf__V_16_16;
            MR_Word hlds__hhf__V_17_17;
            MR_Box hlds__hhf__conv0_V_16_16;
            MR_Word hlds__hhf__V_14_14;

            {
              mercury__map__lookup_3_p_0(hlds__hhf__TypeInfo_18_18, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__hhf__InstGraph_9, ((MR_Box) (hlds__hhf__Var0_7)), &hlds__hhf__conv0_V_16_16);
            }
            hlds__hhf__V_16_16 = ((MR_Word) hlds__hhf__conv0_V_16_16);
            hlds__hhf__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_16_16, (MR_Integer) 0)));
            hlds__hhf__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_16_16, (MR_Integer) 1)));
            hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__V_17_17)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hhf__succeeded)
              {
                hlds__hhf__Var1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__V_17_17, (MR_Integer) 0)));
                {
                  hlds__hhf__succeeded = mercury__list__member_2_p_0(hlds__hhf__TypeInfo_18_18, ((MR_Box) (hlds__hhf__Var1_15)), hlds__hhf__BaseVars_11);
                }
                hlds__hhf__succeeded = !(hlds__hhf__succeeded);
                if (hlds__hhf__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__hhf__Var0__tmp_copy_7 = hlds__hhf__Var1_15;

                      hlds__hhf__Var0_7 = hlds__hhf__Var0__tmp_copy_7;
                    }
                    continue;
                  }
              }
          }
        return hlds__hhf__succeeded;
      }
      break;
    }
}

static void MR_CALL 
hlds__hhf__add_cons_id_7_p_0(
  MR_Word hlds__hhf__Var_8,
  MR_Word hlds__hhf__ModuleInfo_9,
  MR_Word hlds__hhf__BaseVars_10,
  MR_Word hlds__hhf__Arg_11,
  MR_Word * hlds__hhf__NewVar_12,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_23,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_24)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Word hlds__hhf__ArgType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Arg_11, (MR_Integer) 1)));
    MR_Word hlds__hhf__InstGraph0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_23, (MR_Integer) 0)));
    MR_Word hlds__hhf__VarSet0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_23, (MR_Integer) 1)));
    MR_Word hlds__hhf__VarTypes0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_23, (MR_Integer) 2)));
    MR_Word hlds__hhf__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Arg_11, (MR_Integer) 0)));
    MR_Word hlds__hhf__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Arg_11, (MR_Integer) 2)));
    MR_Word hlds__hhf__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Arg_11, (MR_Integer) 3)));
    MR_Word hlds__hhf__NewVar0_18;

    {
      hlds__hhf__succeeded = hlds__hhf__find_var_with_type_6_p_0(hlds__hhf__Var_8, hlds__hhf__ArgType_14, hlds__hhf__InstGraph0_15, hlds__hhf__VarTypes0_17, hlds__hhf__BaseVars_10, &hlds__hhf__NewVar0_18);
    }
    if (hlds__hhf__succeeded)
      {
        *hlds__hhf__NewVar_12 = hlds__hhf__NewVar0_18;
        *hlds__hhf__STATE_VARIABLE_HI_24 = hlds__hhf__STATE_VARIABLE_HI_0_23;
      }
    else
      {
        MR_Word hlds__hhf__VarSet_19;
        MR_Word hlds__hhf__VarTypes_20;
        MR_Word hlds__hhf__Empty_21;
        MR_Word hlds__hhf__InstGraph_22;
        MR_Word hlds__hhf__V_25_25;
        MR_Word hlds__hhf__V_26_26;
        MR_Word hlds__hhf__STATE_VARIABLE_HI_27_27;

        {
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hhf__NewVar_12, hlds__hhf__VarSet0_16, &hlds__hhf__VarSet_19);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(*hlds__hhf__NewVar_12, hlds__hhf__ArgType_14, hlds__hhf__VarTypes0_17, &hlds__hhf__VarTypes_20);
        }
        {
          mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], &hlds__hhf__Empty_21);
        }
        {
          hlds__hhf__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hhf__V_26_26, 0) = ((MR_Box) (hlds__hhf__Var_8));
        }
        {
          hlds__hhf__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hhf__V_25_25, 0) = ((MR_Box) (hlds__hhf__Empty_21));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_25_25, 1) = ((MR_Box) (hlds__hhf__V_26_26));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hhf_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (*hlds__hhf__NewVar_12)), ((MR_Box) (hlds__hhf__V_25_25)), hlds__hhf__InstGraph0_15, &hlds__hhf__InstGraph_22);
        }
        {
          hlds__hhf__STATE_VARIABLE_HI_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_27_27, 0) = ((MR_Box) (hlds__hhf__InstGraph_22));
          MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_27_27, 1) = ((MR_Box) (hlds__hhf__VarSet_19));
          MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_27_27, 2) = ((MR_Box) (hlds__hhf__VarTypes_20));
        }
        {
          hlds__hhf__complete_inst_graph_node_5_p_0(hlds__hhf__ModuleInfo_9, hlds__hhf__BaseVars_10, *hlds__hhf__NewVar_12, hlds__hhf__STATE_VARIABLE_HI_27_27, hlds__hhf__STATE_VARIABLE_HI_24);
        }
      }
  }
}

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box * hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3,
  MR_Box * hlds__hhf__wrapper_arg_4)
{
  {
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
    MR_Word hlds__hhf__conv2_NewVar_12;
    MR_Word hlds__hhf__conv1_STATE_VARIABLE_HI_24;

    {
      hlds__hhf__add_cons_id_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 5))), ((MR_Word) hlds__hhf__wrapper_arg_1), &hlds__hhf__conv2_NewVar_12, ((MR_Word) hlds__hhf__wrapper_arg_3), &hlds__hhf__conv1_STATE_VARIABLE_HI_24);
    }
    *hlds__hhf__wrapper_arg_2 = ((MR_Box) (hlds__hhf__conv2_NewVar_12));
    *hlds__hhf__wrapper_arg_4 = ((MR_Box) (hlds__hhf__conv1_STATE_VARIABLE_HI_24));
  }
}

static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0(
  MR_Word hlds__hhf__Var_9,
  MR_Word hlds__hhf__ModuleInfo_10,
  MR_Word hlds__hhf__BaseVars_11,
  MR_Word hlds__hhf__TypeCtor_12,
  MR_Word hlds__hhf__TypeCtorModuleName_13,
  MR_Word hlds__hhf__Ctor_14,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_28,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_29)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Word hlds__hhf__TypeInfo_46_46;
    MR_Word hlds__hhf__TypeCtorInfo_47_47;
    MR_Word hlds__hhf__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 2)));
    MR_Word hlds__hhf__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 3)));
    MR_Integer hlds__hhf__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 4)));
    MR_Word hlds__hhf__SymName_22;
    MR_Word hlds__hhf__ConsId_23;
    MR_Word hlds__hhf__Functors0_24;
    MR_Word hlds__hhf__MaybeParent_25;
    MR_String hlds__hhf__V_30_30;
    MR_Word hlds__hhf__V_31_31;
    MR_Word hlds__hhf__V_32_32;
    MR_Word hlds__hhf__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 0)));
    MR_Word hlds__hhf__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 1)));
    MR_Word hlds__hhf__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 5)));
    MR_Word hlds__hhf__V_39_39;
    MR_Word hlds__hhf__V_40_40;
    MR_Box hlds__hhf__conv0_V_32_32;

    {
      hlds__hhf__V_30_30 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hhf__Name_18);
    }
    {
      hlds__hhf__SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hhf__SymName_22, 0) = ((MR_Box) (hlds__hhf__TypeCtorModuleName_13));
      MR_hl_field(MR_mktag(1), hlds__hhf__SymName_22, 1) = ((MR_Box) (hlds__hhf__V_30_30));
    }
    {
      hlds__hhf__ConsId_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__hhf__ConsId_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), hlds__hhf__ConsId_23, 1) = ((MR_Box) (hlds__hhf__SymName_22));
      MR_hl_field(MR_mktag(3), hlds__hhf__ConsId_23, 2) = ((MR_Box) (hlds__hhf__Arity_20));
      MR_hl_field(MR_mktag(3), hlds__hhf__ConsId_23, 3) = ((MR_Box) (hlds__hhf__TypeCtor_12));
    }
    hlds__hhf__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_28, (MR_Integer) 0)));
    hlds__hhf__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_28, (MR_Integer) 1)));
    hlds__hhf__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_28, (MR_Integer) 2)));
    hlds__hhf__TypeInfo_46_46 = (MR_Word) &hlds__hhf_scalar_common_1[0];
    hlds__hhf__TypeCtorInfo_47_47 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
    {
      mercury__map__lookup_3_p_0(hlds__hhf__TypeInfo_46_46, hlds__hhf__TypeCtorInfo_47_47, hlds__hhf__V_31_31, ((MR_Box) (hlds__hhf__Var_9)), &hlds__hhf__conv0_V_32_32);
    }
    hlds__hhf__V_32_32 = ((MR_Word) hlds__hhf__conv0_V_32_32);
    hlds__hhf__Functors0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_32_32, (MR_Integer) 0)));
    hlds__hhf__MaybeParent_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_32_32, (MR_Integer) 1)));
    {
      hlds__hhf__succeeded = mercury__map__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], hlds__hhf__Functors0_24, ((MR_Box) (hlds__hhf__ConsId_23)));
    }
    if (hlds__hhf__succeeded)
      *hlds__hhf__STATE_VARIABLE_HI_29 = hlds__hhf__STATE_VARIABLE_HI_0_28;
    else
      {
        MR_Word hlds__hhf__NewVars_26;
        MR_Word hlds__hhf__Functors_27;
        MR_Word hlds__hhf__V_33_33;
        MR_Word hlds__hhf__STATE_VARIABLE_HI_34_34;
        MR_Word hlds__hhf__V_36_36;
        MR_Word hlds__hhf__V_37_37;
        MR_Word hlds__hhf__V_38_38;
        MR_Box hlds__hhf__conv3_STATE_VARIABLE_HI_34_34;
        MR_Word hlds__hhf__V_41_41;
        MR_Word hlds__hhf__V_42_42;
        MR_Word hlds__hhf__V_44_44;
        MR_Word hlds__hhf__V_45_45;
        MR_Word hlds__hhf__V_43_43;

        {
          hlds__hhf__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 0) = ((MR_Box) (&hlds__hhf_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 1) = ((MR_Box) (hlds__hhf__maybe_add_cons_id_8_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 3) = ((MR_Box) (hlds__hhf__Var_9));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 4) = ((MR_Box) (hlds__hhf__ModuleInfo_10));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 5) = ((MR_Box) (hlds__hhf__BaseVars_11));
        }
        {
          mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, hlds__hhf__TypeInfo_46_46, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_33_33, hlds__hhf__Args_19, &hlds__hhf__NewVars_26, ((MR_Box) (hlds__hhf__STATE_VARIABLE_HI_0_28)), &hlds__hhf__conv3_STATE_VARIABLE_HI_34_34);
        }
        hlds__hhf__STATE_VARIABLE_HI_34_34 = ((MR_Word) hlds__hhf__conv3_STATE_VARIABLE_HI_34_34);
        {
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], ((MR_Box) (hlds__hhf__ConsId_23)), ((MR_Box) (hlds__hhf__NewVars_26)), hlds__hhf__Functors0_24, &hlds__hhf__Functors_27);
        }
        hlds__hhf__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 0)));
        hlds__hhf__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 1)));
        hlds__hhf__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 2)));
        {
          hlds__hhf__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hhf__V_38_38, 0) = ((MR_Box) (hlds__hhf__Functors_27));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_38_38, 1) = ((MR_Box) (hlds__hhf__MaybeParent_25));
        }
        {
          hlds__hhf__V_36_36 = mercury__map__det_update_3_f_0(hlds__hhf__TypeInfo_46_46, hlds__hhf__TypeCtorInfo_47_47, hlds__hhf__V_37_37, ((MR_Box) (hlds__hhf__Var_9)), ((MR_Box) (hlds__hhf__V_38_38)));
        }
        hlds__hhf__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 0)));
        hlds__hhf__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 1)));
        hlds__hhf__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 2)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *hlds__hhf__STATE_VARIABLE_HI_29 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__V_36_36));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__V_44_44));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hhf__V_45_45));
        }
      }
  }
}

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2,
  MR_Box * hlds__hhf__wrapper_arg_3)
{
  {
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
    MR_Word hlds__hhf__conv0_STATE_VARIABLE_HI_29;

    {
      hlds__hhf__maybe_add_cons_id_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 7))), ((MR_Word) hlds__hhf__wrapper_arg_1), ((MR_Word) hlds__hhf__wrapper_arg_2), &hlds__hhf__conv0_STATE_VARIABLE_HI_29);
    }
    *hlds__hhf__wrapper_arg_3 = ((MR_Box) (hlds__hhf__conv0_STATE_VARIABLE_HI_29));
  }
}

static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0(
  MR_Word hlds__hhf__ModuleInfo_6,
  MR_Word hlds__hhf__BaseVars_7,
  MR_Word hlds__hhf__Var_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_19,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_20)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Word hlds__hhf__VarTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_19, (MR_Integer) 2)));
    MR_Word hlds__hhf__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_19, (MR_Integer) 0)));
    MR_Word hlds__hhf__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_19, (MR_Integer) 1)));
    MR_Word hlds__hhf__Constructors_12;
    MR_Word hlds__hhf__TypeCtor_13;
    MR_Word hlds__hhf__Type_11;

    {
      hlds__hhf__succeeded = hlds__vartypes__search_var_type_3_p_0(hlds__hhf__VarTypes0_10, hlds__hhf__Var_8, &hlds__hhf__Type_11);
    }
    if (hlds__hhf__succeeded)
      {
        {
          hlds__hhf__succeeded = check_hlds__type_util__type_constructors_3_p_0(hlds__hhf__ModuleInfo_6, hlds__hhf__Type_11, &hlds__hhf__Constructors_12);
        }
        if (hlds__hhf__succeeded)
          {
            hlds__hhf__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(hlds__hhf__Type_11, &hlds__hhf__TypeCtor_13);
          }
      }
    if (hlds__hhf__succeeded)
      {
        MR_Word hlds__hhf__TypeCtorSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__TypeCtor_13, (MR_Integer) 0)));
        MR_Word hlds__hhf__TypeCtorModuleName_17;
        MR_Word hlds__hhf__V_24_24;
        MR_Integer hlds__hhf__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hhf__TypeCtor_13, (MR_Integer) 1)));
        MR_Box hlds__hhf__conv1_STATE_VARIABLE_HI_20;

        if (((MR_tag((MR_Word) hlds__hhf__TypeCtorSymName_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String hlds__hhf__V_18_18;

            hlds__hhf__TypeCtorModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__TypeCtorSymName_14, (MR_Integer) 0)));
            hlds__hhf__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hhf__TypeCtorSymName_14, (MR_Integer) 1)));
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.complete_inst_graph_node\'/5", (MR_String) "unqualified TypeCtorSymName");
              return;
            }
          }
        {
          hlds__hhf__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 0) = ((MR_Box) (&hlds__hhf_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 1) = ((MR_Box) (hlds__hhf__complete_inst_graph_node_5_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 3) = ((MR_Box) (hlds__hhf__Var_8));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 4) = ((MR_Box) (hlds__hhf__ModuleInfo_6));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 5) = ((MR_Box) (hlds__hhf__BaseVars_7));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 6) = ((MR_Box) (hlds__hhf__TypeCtor_13));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 7) = ((MR_Box) (hlds__hhf__TypeCtorModuleName_17));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_24_24, hlds__hhf__Constructors_12, ((MR_Box) (hlds__hhf__STATE_VARIABLE_HI_0_19)), &hlds__hhf__conv1_STATE_VARIABLE_HI_20);
        }
        *hlds__hhf__STATE_VARIABLE_HI_20 = ((MR_Word) hlds__hhf__conv1_STATE_VARIABLE_HI_20);
      }
    else
      *hlds__hhf__STATE_VARIABLE_HI_20 = hlds__hhf__STATE_VARIABLE_HI_0_19;
  }
}

static void MR_CALL 
hlds__hhf__add_unifications_10_p_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__NonLocals_2,
  MR_Word hlds__hhf__GI0_3,
  MR_Word hlds__hhf__M_4,
  MR_Word hlds__hhf__U_5,
  MR_Word hlds__hhf__C_6,
  MR_Word * hlds__hhf__HeadVar__7_7,
  MR_Word * hlds__hhf__HeadVar__8_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_9,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_10)
{
  {
    MR_bool hlds__hhf__succeeded;

    if ((hlds__hhf__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__hhf__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__hhf__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__hhf__STATE_VARIABLE_HI_10 = hlds__hhf__STATE_VARIABLE_HI_0_9;
      }
    else
      {
        MR_Word hlds__hhf__A_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hhf__As_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hhf__V_26;
        MR_Word hlds__hhf__Vs_27;
        MR_Word hlds__hhf__Goals0_30;
        MR_Word hlds__hhf__InstGraph0_31;
        MR_Word hlds__hhf__STATE_VARIABLE_HI_47_47;
        MR_Word hlds__hhf__V_57_57;
        MR_Word hlds__hhf__V_58_58;

        {
          hlds__hhf__add_unifications_10_p_0(hlds__hhf__As_20, hlds__hhf__NonLocals_2, hlds__hhf__GI0_3, hlds__hhf__M_4, hlds__hhf__U_5, hlds__hhf__C_6, &hlds__hhf__Vs_27, &hlds__hhf__Goals0_30, hlds__hhf__STATE_VARIABLE_HI_0_9, &hlds__hhf__STATE_VARIABLE_HI_47_47);
        }
        hlds__hhf__InstGraph0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 0)));
        hlds__hhf__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 1)));
        hlds__hhf__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 2)));
        {
          MR_Word hlds__hhf__Node_32;
          MR_Word hlds__hhf__V_48_48;
          MR_Box hlds__hhf__conv0_Node_32;
          MR_Word hlds__hhf__V_33_33;
          MR_Word hlds__hhf__V_34_34;

          {
            mercury__map__lookup_3_p_0((MR_Word) &hlds__hhf_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__hhf__InstGraph0_31, ((MR_Box) (hlds__hhf__A_19)), &hlds__hhf__conv0_Node_32);
          }
          hlds__hhf__Node_32 = ((MR_Word) hlds__hhf__conv0_Node_32);
          hlds__hhf__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Node_32, (MR_Integer) 0)));
          hlds__hhf__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Node_32, (MR_Integer) 1)));
          hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__V_48_48)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__hhf__succeeded)
            hlds__hhf__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__V_48_48, (MR_Integer) 0)));
        }
        if (!(hlds__hhf__succeeded))
          {
            {
              hlds__hhf__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hhf__NonLocals_2, hlds__hhf__A_19);
            }
          }
        if (hlds__hhf__succeeded)
          {
            MR_Word hlds__hhf__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__hhf__VarSet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 1)));
            MR_Word hlds__hhf__VarTypes0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 2)));
            MR_Word hlds__hhf__VarSet_37;
            MR_Word hlds__hhf__Type_38;
            MR_Word hlds__hhf__VarTypes_39;
            MR_Word hlds__hhf__Empty_40;
            MR_Word hlds__hhf__InstGraph_41;
            MR_Word hlds__hhf__GINonlocals0_42;
            MR_Word hlds__hhf__GINonlocals_43;
            MR_Word hlds__hhf__GI_44;
            MR_Word hlds__hhf__V_49_49;
            MR_Word hlds__hhf__V_54_54;
            MR_Word hlds__hhf__V_55_55;
            MR_Word hlds__hhf__V_56_56;
            MR_Word hlds__hhf__V_67_67;
            MR_Word hlds__hhf__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 0)));

            {
              mercury__varset__new_var_3_p_0(hlds__hhf__TypeCtorInfo_75_75, &hlds__hhf__V_26, hlds__hhf__VarSet0_35, &hlds__hhf__VarSet_37);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(hlds__hhf__VarTypes0_36, hlds__hhf__A_19, &hlds__hhf__Type_38);
            }
            {
              hlds__vartypes__add_var_type_4_p_0(hlds__hhf__V_26, hlds__hhf__Type_38, hlds__hhf__VarTypes0_36, &hlds__hhf__VarTypes_39);
            }
            {
              mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], &hlds__hhf__Empty_40);
            }
            {
              hlds__hhf__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hhf__V_49_49, 0) = ((MR_Box) (hlds__hhf__Empty_40));
              MR_hl_field(MR_mktag(0), hlds__hhf__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__hhf_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__hhf__V_26)), ((MR_Box) (hlds__hhf__V_49_49)), hlds__hhf__InstGraph0_31, &hlds__hhf__InstGraph_41);
            }
            hlds__hhf__V_67_67 = hlds__hhf__VarSet_37;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *hlds__hhf__STATE_VARIABLE_HI_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__InstGraph_41));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__V_67_67));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hhf__VarTypes_39));
            }
            {
              hlds__hhf__GINonlocals0_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GI0_3);
            }
            {
              parse_tree__set_of_var__insert_3_p_0(hlds__hhf__TypeCtorInfo_75_75, hlds__hhf__V_26, hlds__hhf__GINonlocals0_42, &hlds__hhf__GINonlocals_43);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__hhf__GINonlocals_43, hlds__hhf__GI0_3, &hlds__hhf__GI_44);
            }
            {
              hlds__hhf__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hhf__V_56_56, 0) = ((MR_Box) (hlds__hhf__V_26));
            }
            {
              hlds__hhf__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 0) = ((MR_Box) (hlds__hhf__A_19));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 1) = ((MR_Box) (hlds__hhf__V_56_56));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 2) = ((MR_Box) (hlds__hhf__M_4));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 3) = ((MR_Box) (hlds__hhf__U_5));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 4) = ((MR_Box) (hlds__hhf__C_6));
            }
            {
              hlds__hhf__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hhf__V_54_54, 0) = ((MR_Box) (hlds__hhf__V_55_55));
              MR_hl_field(MR_mktag(0), hlds__hhf__V_54_54, 1) = ((MR_Box) (hlds__hhf__GI_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__hhf__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__V_54_54));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__Goals0_30));
            }
          }
        else
          {
            hlds__hhf__V_26 = hlds__hhf__A_19;
            *hlds__hhf__HeadVar__8_8 = hlds__hhf__Goals0_30;
            *hlds__hhf__STATE_VARIABLE_HI_10 = hlds__hhf__STATE_VARIABLE_HI_47_47;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__hhf__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__V_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__Vs_27));
        }
      }
  }
}

static void MR_CALL 
hlds__hhf__make_unifications_7_p_0(
  MR_Word hlds__hhf__HeadVar__1_1,
  MR_Word hlds__hhf__HeadVar__2_2,
  MR_Word hlds__hhf__GI0_3,
  MR_Word hlds__hhf__M_4,
  MR_Word hlds__hhf__U_5,
  MR_Word hlds__hhf__C_6,
  MR_Word * hlds__hhf__HeadVar__7_7)
{
  {
    MR_bool hlds__hhf__succeeded;

    if ((hlds__hhf__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__hhf__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__hhf__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.make_unifications\'/7", (MR_String) "length mismatch (2)");
            return;
          }
        }
    else
      {
        MR_Word hlds__hhf__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hhf__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));

        if ((hlds__hhf__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.make_unifications\'/7", (MR_String) "length mismatch (1)");
              return;
            }
          }
        else
          {
            MR_Word hlds__hhf__B_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__hhf__Bs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hhf__GI_40;
            MR_Word hlds__hhf__Us_41;
            MR_Word hlds__hhf__GINonlocals0_42;
            MR_Word hlds__hhf__GINonlocals_43;
            MR_Word hlds__hhf__V_44_44;
            MR_Word hlds__hhf__V_45_45;
            MR_Word hlds__hhf__V_46_46;
            MR_Word hlds__hhf__V_47_47;
            MR_Word hlds__hhf__V_48_48;

            {
              hlds__hhf__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hhf__V_46_46, 0) = ((MR_Box) (hlds__hhf__B_34));
            }
            {
              hlds__hhf__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 0) = ((MR_Box) (hlds__hhf__V_52_52));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 1) = ((MR_Box) (hlds__hhf__V_46_46));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 2) = ((MR_Box) (hlds__hhf__M_4));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 3) = ((MR_Box) (hlds__hhf__U_5));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 4) = ((MR_Box) (hlds__hhf__C_6));
            }
            {
              hlds__hhf__GINonlocals0_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GI0_3);
            }
            {
              hlds__hhf__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_48_48, 0) = ((MR_Box) (hlds__hhf__B_34));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__hhf__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_47_47, 0) = ((MR_Box) (hlds__hhf__V_52_52));
              MR_hl_field(MR_mktag(1), hlds__hhf__V_47_47, 1) = ((MR_Box) (hlds__hhf__V_48_48));
            }
            {
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hhf__V_47_47, hlds__hhf__GINonlocals0_42, &hlds__hhf__GINonlocals_43);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__hhf__GINonlocals_43, hlds__hhf__GI0_3, &hlds__hhf__GI_40);
            }
            {
              hlds__hhf__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hhf__V_44_44, 0) = ((MR_Box) (hlds__hhf__V_45_45));
              MR_hl_field(MR_mktag(0), hlds__hhf__V_44_44, 1) = ((MR_Box) (hlds__hhf__GI_40));
            }
            {
              hlds__hhf__make_unifications_7_p_0(hlds__hhf__V_51_51, hlds__hhf__Bs_35, hlds__hhf__GI0_3, hlds__hhf__M_4, hlds__hhf__U_5, hlds__hhf__C_6, &hlds__hhf__Us_41);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__hhf__HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__V_44_44));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__Us_41));
            }
          }
      }
  }
}

static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2,
  MR_Box * hlds__hhf__wrapper_arg_3)
{
  {
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
    MR_Word hlds__hhf__conv2_HeadVar__4_4;

    {
      hlds__inst_graph__set_parent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) hlds__hhf__wrapper_arg_1), ((MR_Word) hlds__hhf__wrapper_arg_2), &hlds__hhf__conv2_HeadVar__4_4);
    }
    *hlds__hhf__wrapper_arg_3 = ((MR_Box) (hlds__hhf__conv2_HeadVar__4_4));
  }
}

static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0(
  MR_Word hlds__hhf__RHS0_11,
  MR_Word hlds__hhf__NonLocals_12,
  MR_Word hlds__hhf__GoalInfo0_13,
  MR_Word hlds__hhf__X_14,
  MR_Word hlds__hhf__Mode_15,
  MR_Word hlds__hhf__Unif_16,
  MR_Word hlds__hhf__Context_17,
  MR_Word * hlds__hhf__GoalExpr_18,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_52,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_53)
{
  {
    MR_bool hlds__hhf__succeeded;

    switch (MR_tag((MR_Word) hlds__hhf__RHS0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *hlds__hhf__GoalExpr_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__X_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__RHS0_11));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__hhf__Mode_15));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__hhf__Unif_16));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__hhf__Context_17));
          }
          *hlds__hhf__STATE_VARIABLE_HI_53 = hlds__hhf__STATE_VARIABLE_HI_0_52;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hhf__TypeInfo_71_71;
          MR_Word hlds__hhf__TypeCtorInfo_72_72;
          MR_Word hlds__hhf__TypeCtorInfo_81_81;
          MR_Word hlds__hhf__ConsId0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__RHS0_11, (MR_Integer) 0)));
          MR_Word hlds__hhf__IsExistConstruct_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__RHS0_11, (MR_Integer) 1)));
          MR_Word hlds__hhf__ArgsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__RHS0_11, (MR_Integer) 2)));
          MR_Word hlds__hhf__ConsId_36;
          MR_Word hlds__hhf__InstGraph0_37;
          MR_Word hlds__hhf__Functors0_38;
          MR_Word hlds__hhf__MaybeParent_39;
          MR_Word hlds__hhf__Unifications_41;
          MR_Word hlds__hhf__Args_42;
          MR_Word hlds__hhf__GINonlocals0_47;
          MR_Word hlds__hhf__GINonlocals_48;
          MR_Word hlds__hhf__GoalInfo_49;
          MR_Word hlds__hhf__UnifyGoalExpr_50;
          MR_Word hlds__hhf__UnifyGoal_51;
          MR_Word hlds__hhf__V_54_54;
          MR_Word hlds__hhf__V_59_59;
          MR_Word hlds__hhf__V_61_61;
          MR_Word hlds__hhf__RHS_63;
          MR_Word hlds__hhf__V_35_35;
          MR_Word hlds__hhf__V_64_64;
          MR_Word hlds__hhf__V_65_65;
          MR_Box hlds__hhf__conv0_V_54_54;
          MR_Word hlds__hhf__ArgsB_40;
          MR_Box hlds__hhf__conv1_ArgsB_40;

          {
            parse_tree__prog_type__qualify_cons_id_4_p_0(hlds__hhf__ArgsA_34, hlds__hhf__ConsId0_32, &hlds__hhf__V_35_35, &hlds__hhf__ConsId_36);
          }
          hlds__hhf__InstGraph0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_52, (MR_Integer) 0)));
          hlds__hhf__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_52, (MR_Integer) 1)));
          hlds__hhf__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_52, (MR_Integer) 2)));
          hlds__hhf__TypeInfo_71_71 = (MR_Word) &hlds__hhf_scalar_common_1[0];
          hlds__hhf__TypeCtorInfo_72_72 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
          {
            mercury__map__lookup_3_p_0(hlds__hhf__TypeInfo_71_71, hlds__hhf__TypeCtorInfo_72_72, hlds__hhf__InstGraph0_37, ((MR_Box) (hlds__hhf__X_14)), &hlds__hhf__conv0_V_54_54);
          }
          hlds__hhf__V_54_54 = ((MR_Word) hlds__hhf__conv0_V_54_54);
          hlds__hhf__Functors0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_54_54, (MR_Integer) 0)));
          hlds__hhf__MaybeParent_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_54_54, (MR_Integer) 1)));
          {
            hlds__hhf__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], hlds__hhf__Functors0_38, ((MR_Box) (hlds__hhf__ConsId_36)), &hlds__hhf__conv1_ArgsB_40);
          }
          if (hlds__hhf__succeeded)
            {
              hlds__hhf__ArgsB_40 = ((MR_Word) hlds__hhf__conv1_ArgsB_40);
              hlds__hhf__succeeded = MR_TRUE;
            }
          if (hlds__hhf__succeeded)
            {
              {
                hlds__hhf__make_unifications_7_p_0(hlds__hhf__ArgsA_34, hlds__hhf__ArgsB_40, hlds__hhf__GoalInfo0_13, hlds__hhf__Mode_15, hlds__hhf__Unif_16, hlds__hhf__Context_17, &hlds__hhf__Unifications_41);
              }
              hlds__hhf__Args_42 = hlds__hhf__ArgsB_40;
              *hlds__hhf__STATE_VARIABLE_HI_53 = hlds__hhf__STATE_VARIABLE_HI_0_52;
            }
          else
            {
              MR_Word hlds__hhf__InstGraph1_43;
              MR_Word hlds__hhf__Functors_44;
              MR_Word hlds__hhf__InstGraph2_45;
              MR_Word hlds__hhf__InstGraph_46;
              MR_Word hlds__hhf__STATE_VARIABLE_HI_55_55;
              MR_Word hlds__hhf__V_56_56;
              MR_Word hlds__hhf__V_57_57;
              MR_Word hlds__hhf__V_66_66;
              MR_Word hlds__hhf__V_67_67;
              MR_Box hlds__hhf__conv3_InstGraph_46;
              MR_Word hlds__hhf__V_69_69;
              MR_Word hlds__hhf__V_70_70;
              MR_Word hlds__hhf__V_68_68;

              {
                hlds__hhf__add_unifications_10_p_0(hlds__hhf__ArgsA_34, hlds__hhf__NonLocals_12, hlds__hhf__GoalInfo0_13, hlds__hhf__Mode_15, hlds__hhf__Unif_16, hlds__hhf__Context_17, &hlds__hhf__Args_42, &hlds__hhf__Unifications_41, hlds__hhf__STATE_VARIABLE_HI_0_52, &hlds__hhf__STATE_VARIABLE_HI_55_55);
              }
              hlds__hhf__InstGraph1_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 0)));
              hlds__hhf__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 1)));
              hlds__hhf__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 2)));
              {
                mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], ((MR_Box) (hlds__hhf__ConsId_36)), ((MR_Box) (hlds__hhf__Args_42)), hlds__hhf__Functors0_38, &hlds__hhf__Functors_44);
              }
              {
                hlds__hhf__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hhf__V_56_56, 0) = ((MR_Box) (hlds__hhf__Functors_44));
                MR_hl_field(MR_mktag(0), hlds__hhf__V_56_56, 1) = ((MR_Box) (hlds__hhf__MaybeParent_39));
              }
              {
                mercury__map__det_update_4_p_0(hlds__hhf__TypeInfo_71_71, hlds__hhf__TypeCtorInfo_72_72, ((MR_Box) (hlds__hhf__X_14)), ((MR_Box) (hlds__hhf__V_56_56)), hlds__hhf__InstGraph1_43, &hlds__hhf__InstGraph2_45);
              }
              {
                hlds__hhf__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hhf__V_57_57, 0) = ((MR_Box) (&hlds__hhf_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), hlds__hhf__V_57_57, 1) = ((MR_Box) (hlds__hhf__convert_unify_to_hhf_10_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__hhf__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__hhf__V_57_57, 3) = ((MR_Box) (hlds__hhf__X_14));
              }
              {
                mercury__list__foldl_4_p_0(hlds__hhf__TypeInfo_71_71, (MR_Word) &hlds__hhf_scalar_common_2[0], hlds__hhf__V_57_57, hlds__hhf__Args_42, ((MR_Box) (hlds__hhf__InstGraph2_45)), &hlds__hhf__conv3_InstGraph_46);
              }
              hlds__hhf__InstGraph_46 = ((MR_Word) hlds__hhf__conv3_InstGraph_46);
              hlds__hhf__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 0)));
              hlds__hhf__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 1)));
              hlds__hhf__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 2)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *hlds__hhf__STATE_VARIABLE_HI_53 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__InstGraph_46));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__V_69_69));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hhf__V_70_70));
              }
            }
          {
            hlds__hhf__GINonlocals0_47 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GoalInfo0_13);
          }
          hlds__hhf__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            hlds__hhf__V_59_59 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hhf__TypeCtorInfo_81_81, hlds__hhf__Args_42);
          }
          {
            hlds__hhf__GINonlocals_48 = parse_tree__set_of_var__union_2_f_0(hlds__hhf__TypeCtorInfo_81_81, hlds__hhf__GINonlocals0_47, hlds__hhf__V_59_59);
          }
          {
            hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__hhf__GINonlocals_48, hlds__hhf__GoalInfo0_13, &hlds__hhf__GoalInfo_49);
          }
          {
            hlds__hhf__RHS_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hhf__RHS_63, 0) = ((MR_Box) (hlds__hhf__ConsId_36));
            MR_hl_field(MR_mktag(1), hlds__hhf__RHS_63, 1) = ((MR_Box) (hlds__hhf__IsExistConstruct_33));
            MR_hl_field(MR_mktag(1), hlds__hhf__RHS_63, 2) = ((MR_Box) (hlds__hhf__Args_42));
          }
          {
            hlds__hhf__UnifyGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 0) = ((MR_Box) (hlds__hhf__X_14));
            MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 1) = ((MR_Box) (hlds__hhf__RHS_63));
            MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 2) = ((MR_Box) (hlds__hhf__Mode_15));
            MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 3) = ((MR_Box) (hlds__hhf__Unif_16));
            MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 4) = ((MR_Box) (hlds__hhf__Context_17));
          }
          {
            hlds__hhf__UnifyGoal_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hhf__UnifyGoal_51, 0) = ((MR_Box) (hlds__hhf__UnifyGoalExpr_50));
            MR_hl_field(MR_mktag(0), hlds__hhf__UnifyGoal_51, 1) = ((MR_Box) (hlds__hhf__GoalInfo_49));
          }
          {
            hlds__hhf__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hhf__V_61_61, 0) = ((MR_Box) (hlds__hhf__UnifyGoal_51));
            MR_hl_field(MR_mktag(1), hlds__hhf__V_61_61, 1) = ((MR_Box) (hlds__hhf__Unifications_41));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *hlds__hhf__GoalExpr_18 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__hhf__V_61_61));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hhf__A_20 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word hlds__hhf__B_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word hlds__hhf__C_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word hlds__hhf__E_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 2)));
          MR_Word hlds__hhf__F_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 3)));
          MR_Word hlds__hhf__G_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 4)));
          MR_Word hlds__hhf__H_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 5)));
          MR_Word hlds__hhf__LambdaGoal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 6)));
          MR_Word hlds__hhf__LambdaGoal_29;
          MR_Word hlds__hhf__RHS_30;
          MR_Word hlds__hhf__GoalExpr0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__LambdaGoal0_28, (MR_Integer) 0)));
          MR_Word hlds__hhf__GoalInfo_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__LambdaGoal0_28, (MR_Integer) 1)));
          MR_Word hlds__hhf__GoalExpr_90;

          {
            hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__NonLocals_12, hlds__hhf__GoalInfo_89, hlds__hhf__GoalExpr0_88, &hlds__hhf__GoalExpr_90, hlds__hhf__STATE_VARIABLE_HI_0_52, hlds__hhf__STATE_VARIABLE_HI_53);
          }
          {
            hlds__hhf__LambdaGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hhf__LambdaGoal_29, 0) = ((MR_Box) (hlds__hhf__GoalExpr_90));
            MR_hl_field(MR_mktag(0), hlds__hhf__LambdaGoal_29, 1) = ((MR_Box) (hlds__hhf__GoalInfo_89));
          }
          {
            hlds__hhf__RHS_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 0) = ((MR_Box) ((hlds__hhf__A_20 | ((((hlds__hhf__B_21 << (MR_Integer) 2)) | ((hlds__hhf__C_22 << (MR_Integer) 3)))))));
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 1) = (MR_Integer) 0;
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 2) = ((MR_Box) (hlds__hhf__E_24));
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 3) = ((MR_Box) (hlds__hhf__F_25));
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 4) = ((MR_Box) (hlds__hhf__G_26));
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 5) = ((MR_Box) (hlds__hhf__H_27));
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 6) = ((MR_Box) (hlds__hhf__LambdaGoal_29));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *hlds__hhf__GoalExpr_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__X_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__RHS_30));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__hhf__Mode_15));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__hhf__Unif_16));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__hhf__Context_17));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box * hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3,
  MR_Box * hlds__hhf__wrapper_arg_4)
{
  {
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
    MR_Word hlds__hhf__conv4_Goal_6;
    MR_Word hlds__hhf__conv3_STATE_VARIABLE_HI_13;

    {
      hlds__hhf__goal_use_own_nonlocals_4_p_0(((MR_Word) hlds__hhf__wrapper_arg_1), &hlds__hhf__conv4_Goal_6, ((MR_Word) hlds__hhf__wrapper_arg_3), &hlds__hhf__conv3_STATE_VARIABLE_HI_13);
    }
    *hlds__hhf__wrapper_arg_2 = ((MR_Box) (hlds__hhf__conv4_Goal_6));
    *hlds__hhf__wrapper_arg_4 = ((MR_Box) (hlds__hhf__conv3_STATE_VARIABLE_HI_13));
  }
}

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box * hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3,
  MR_Box * hlds__hhf__wrapper_arg_4)
{
  {
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
    MR_Word hlds__hhf__conv1_Goal_8;
    MR_Word hlds__hhf__conv0_STATE_VARIABLE_HI_14;

    {
      hlds__hhf__convert_goal_to_hhf_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) hlds__hhf__wrapper_arg_1), &hlds__hhf__conv1_Goal_8, ((MR_Word) hlds__hhf__wrapper_arg_3), &hlds__hhf__conv0_STATE_VARIABLE_HI_14);
    }
    *hlds__hhf__wrapper_arg_2 = ((MR_Box) (hlds__hhf__conv1_Goal_8));
    *hlds__hhf__wrapper_arg_4 = ((MR_Box) (hlds__hhf__conv0_STATE_VARIABLE_HI_14));
  }
}

static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0(
  MR_Word hlds__hhf__NonLocals_7,
  MR_Word hlds__hhf__GoalInfo_8,
  MR_Word hlds__hhf__GoalExpr0_9,
  MR_Word * hlds__hhf__GoalExpr_10,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_61,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_62)
{
  {
    MR_bool hlds__hhf__succeeded;

    switch (MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hhf__SubGoal0_81 = (MR_Word) MR_body(((MR_Word) hlds__hhf__GoalExpr0_9), (MR_Integer) 0);
          MR_Word hlds__hhf__SubGoal_82;

          {
            hlds__hhf__convert_goal_to_hhf_5_p_0(hlds__hhf__NonLocals_7, hlds__hhf__SubGoal0_81, &hlds__hhf__SubGoal_82, hlds__hhf__STATE_VARIABLE_HI_0_61, hlds__hhf__STATE_VARIABLE_HI_62);
          }
          *hlds__hhf__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__hhf__SubGoal_82);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hhf__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)));
          MR_Word hlds__hhf__RHS_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
          MR_Word hlds__hhf__Mode_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 2)));
          MR_Word hlds__hhf__Unif_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 3)));
          MR_Word hlds__hhf__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 4)));

          {
            hlds__hhf__convert_unify_to_hhf_10_p_0(hlds__hhf__RHS_13, hlds__hhf__NonLocals_7, hlds__hhf__GoalInfo_8, hlds__hhf__Var_12, hlds__hhf__Mode_14, hlds__hhf__Unif_15, hlds__hhf__Context_16, hlds__hhf__GoalExpr_10, hlds__hhf__STATE_VARIABLE_HI_0_61, hlds__hhf__STATE_VARIABLE_HI_62);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *hlds__hhf__GoalExpr_10 = hlds__hhf__GoalExpr0_9;
          *hlds__hhf__STATE_VARIABLE_HI_62 = hlds__hhf__STATE_VARIABLE_HI_0_61;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *hlds__hhf__GoalExpr_10 = hlds__hhf__GoalExpr0_9;
              *hlds__hhf__STATE_VARIABLE_HI_62 = hlds__hhf__STATE_VARIABLE_HI_0_61;
            }
            break;
          case (MR_Integer) 1:
            {
              *hlds__hhf__GoalExpr_10 = hlds__hhf__GoalExpr0_9;
              *hlds__hhf__STATE_VARIABLE_HI_62 = hlds__hhf__STATE_VARIABLE_HI_0_61;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hhf__TypeCtorInfo_87_87;
              MR_Word hlds__hhf__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__hhf__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__hhf__Goals1_37;
              MR_Word hlds__hhf__Goals_38;
              MR_Word hlds__hhf__V_76_76;
              MR_Box hlds__hhf__conv2_STATE_VARIABLE_HI_62;

              {
                hlds__hhf__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hhf__V_76_76, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), hlds__hhf__V_76_76, 1) = ((MR_Box) (hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__hhf__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__hhf__V_76_76, 3) = ((MR_Box) (hlds__hhf__NonLocals_7));
              }
              hlds__hhf__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_foldl_5_p_0(hlds__hhf__TypeCtorInfo_87_87, hlds__hhf__TypeCtorInfo_87_87, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_76_76, hlds__hhf__Goals0_36, &hlds__hhf__Goals1_37, ((MR_Box) (hlds__hhf__STATE_VARIABLE_HI_0_61)), &hlds__hhf__conv2_STATE_VARIABLE_HI_62);
              }
              *hlds__hhf__STATE_VARIABLE_HI_62 = ((MR_Word) hlds__hhf__conv2_STATE_VARIABLE_HI_62);
              switch (hlds__hhf__ConjType_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  hlds__hhf__Goals_38 = hlds__hhf__Goals1_37;
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__goal_util__flatten_conj_2_p_0(hlds__hhf__Goals1_37, &hlds__hhf__Goals_38);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *hlds__hhf__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__hhf__ConjType_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__hhf__Goals_38));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__hhf__TypeCtorInfo_93_93 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word hlds__hhf__Goals0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__hhf__Goals_80;
              MR_Box hlds__hhf__conv5_STATE_VARIABLE_HI_62;

              {
                mercury__list__map_foldl_5_p_0(hlds__hhf__TypeCtorInfo_93_93, hlds__hhf__TypeCtorInfo_93_93, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, (MR_Word) &hlds__hhf_scalar_common_2[2], hlds__hhf__Goals0_79, &hlds__hhf__Goals_80, ((MR_Box) (hlds__hhf__STATE_VARIABLE_HI_0_61)), &hlds__hhf__conv5_STATE_VARIABLE_HI_62);
              }
              *hlds__hhf__STATE_VARIABLE_HI_62 = ((MR_Word) hlds__hhf__conv5_STATE_VARIABLE_HI_62);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__hhf__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__hhf__Goals_80));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.convert_goal_expr_to_hhf\'/6", (MR_String) "switch");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__hhf__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__hhf__SubGoal0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__hhf__SubGoal_44;

              {
                hlds__hhf__convert_goal_to_hhf_5_p_0(hlds__hhf__NonLocals_7, hlds__hhf__SubGoal0_43, &hlds__hhf__SubGoal_44, hlds__hhf__STATE_VARIABLE_HI_0_61, hlds__hhf__STATE_VARIABLE_HI_62);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *hlds__hhf__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__hhf__Reason_42));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__hhf__SubGoal_44));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__hhf__Vs_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word hlds__hhf__Cond0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word hlds__hhf__Then0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word hlds__hhf__Else0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 4)));
              MR_Word hlds__hhf__Cond_49;
              MR_Word hlds__hhf__ThenExpr0_50;
              MR_Word hlds__hhf__ThenInfo_51;
              MR_Word hlds__hhf__ThenNonLocals_52;
              MR_Word hlds__hhf__ThenExpr_53;
              MR_Word hlds__hhf__Then_54;
              MR_Word hlds__hhf__ElseExpr0_55;
              MR_Word hlds__hhf__ElseInfo_56;
              MR_Word hlds__hhf__ElseNonLocals_57;
              MR_Word hlds__hhf__ElseExpr_58;
              MR_Word hlds__hhf__Else_59;
              MR_Word hlds__hhf__STATE_VARIABLE_HI_66_66;
              MR_Word hlds__hhf__STATE_VARIABLE_HI_67_67;

              {
                hlds__hhf__convert_goal_to_hhf_5_p_0(hlds__hhf__NonLocals_7, hlds__hhf__Cond0_46, &hlds__hhf__Cond_49, hlds__hhf__STATE_VARIABLE_HI_0_61, &hlds__hhf__STATE_VARIABLE_HI_66_66);
              }
              hlds__hhf__ThenExpr0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Then0_47, (MR_Integer) 0)));
              hlds__hhf__ThenInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Then0_47, (MR_Integer) 1)));
              {
                hlds__hhf__ThenNonLocals_52 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__ThenInfo_51);
              }
              {
                hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__ThenNonLocals_52, hlds__hhf__ThenInfo_51, hlds__hhf__ThenExpr0_50, &hlds__hhf__ThenExpr_53, hlds__hhf__STATE_VARIABLE_HI_66_66, &hlds__hhf__STATE_VARIABLE_HI_67_67);
              }
              {
                hlds__hhf__Then_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hhf__Then_54, 0) = ((MR_Box) (hlds__hhf__ThenExpr_53));
                MR_hl_field(MR_mktag(0), hlds__hhf__Then_54, 1) = ((MR_Box) (hlds__hhf__ThenInfo_51));
              }
              hlds__hhf__ElseExpr0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Else0_48, (MR_Integer) 0)));
              hlds__hhf__ElseInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Else0_48, (MR_Integer) 1)));
              {
                hlds__hhf__ElseNonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__ElseInfo_56);
              }
              {
                hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__ElseNonLocals_57, hlds__hhf__ElseInfo_56, hlds__hhf__ElseExpr0_55, &hlds__hhf__ElseExpr_58, hlds__hhf__STATE_VARIABLE_HI_67_67, hlds__hhf__STATE_VARIABLE_HI_62);
              }
              {
                hlds__hhf__Else_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hhf__Else_59, 0) = ((MR_Box) (hlds__hhf__ElseExpr_58));
                MR_hl_field(MR_mktag(0), hlds__hhf__Else_59, 1) = ((MR_Box) (hlds__hhf__ElseInfo_56));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *hlds__hhf__GoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__hhf__Vs_45));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__hhf__Cond_49));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__hhf__Then_54));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__hhf__Else_59));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.convert_goal_expr_to_hhf\'/6", (MR_String) "shorthand");
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
hlds__hhf__goal_use_own_nonlocals_4_p_0(
  MR_Word hlds__hhf__Goal0_5,
  MR_Word * hlds__hhf__Goal_6,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_12,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_13)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Word hlds__hhf__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_5, (MR_Integer) 0)));
    MR_Word hlds__hhf__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_5, (MR_Integer) 1)));
    MR_Word hlds__hhf__NonLocals_10;
    MR_Word hlds__hhf__GoalExpr_11;

    {
      hlds__hhf__NonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GoalInfo_9);
    }
    {
      hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__NonLocals_10, hlds__hhf__GoalInfo_9, hlds__hhf__GoalExpr0_8, &hlds__hhf__GoalExpr_11, hlds__hhf__STATE_VARIABLE_HI_0_12, hlds__hhf__STATE_VARIABLE_HI_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hhf__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__GoalInfo_9));
    }
  }
}

static void MR_CALL 
hlds__hhf__convert_goal_to_hhf_5_p_0(
  MR_Word hlds__hhf__NonLocals_6,
  MR_Word hlds__hhf__Goal0_7,
  MR_Word * hlds__hhf__Goal_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_13,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_14)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Word hlds__hhf__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_7, (MR_Integer) 0)));
    MR_Word hlds__hhf__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_7, (MR_Integer) 1)));
    MR_Word hlds__hhf__GoalExpr_12;

    {
      hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__NonLocals_6, hlds__hhf__GoalInfo_11, hlds__hhf__GoalExpr0_10, &hlds__hhf__GoalExpr_12, hlds__hhf__STATE_VARIABLE_HI_0_13, hlds__hhf__STATE_VARIABLE_HI_14);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hhf__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__GoalExpr_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__GoalInfo_11));
    }
  }
}

static void MR_CALL 
hlds__hhf__convert_clause_to_hhf_5_p_0(
  MR_Word hlds__hhf___HeadVars_6,
  MR_Word hlds__hhf__Clause0_7,
  MR_Word * hlds__hhf__Clause_8,
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_15,
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_16)
{
  {
    MR_bool hlds__hhf__succeeded;

    {
      hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(hlds__hhf__Clause0_7, hlds__hhf__Clause_8, hlds__hhf__STATE_VARIABLE_HI_0_15, hlds__hhf__STATE_VARIABLE_HI_16);
    }
  }
}

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box hlds__hhf__wrapper_arg_2,
  MR_Box * hlds__hhf__wrapper_arg_3)
{
  {
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
    MR_Word hlds__hhf__conv3_STATE_VARIABLE_HI_20;

    {
      hlds__hhf__complete_inst_graph_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 4))), ((MR_Word) hlds__hhf__wrapper_arg_1), ((MR_Word) hlds__hhf__wrapper_arg_2), &hlds__hhf__conv3_STATE_VARIABLE_HI_20);
    }
    *hlds__hhf__wrapper_arg_3 = ((MR_Box) (hlds__hhf__conv3_STATE_VARIABLE_HI_20));
  }
}

static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1(
  MR_Box hlds__hhf__closure_arg,
  MR_Box hlds__hhf__wrapper_arg_1,
  MR_Box * hlds__hhf__wrapper_arg_2,
  MR_Box hlds__hhf__wrapper_arg_3,
  MR_Box * hlds__hhf__wrapper_arg_4)
{
  {
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
    MR_Word hlds__hhf__conv1_Clause_8;
    MR_Word hlds__hhf__conv0_STATE_VARIABLE_HI_16;

    {
      hlds__hhf__convert_clause_to_hhf_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) hlds__hhf__wrapper_arg_1), &hlds__hhf__conv1_Clause_8, ((MR_Word) hlds__hhf__wrapper_arg_3), &hlds__hhf__conv0_STATE_VARIABLE_HI_16);
    }
    *hlds__hhf__wrapper_arg_2 = ((MR_Box) (hlds__hhf__conv1_Clause_8));
    *hlds__hhf__wrapper_arg_4 = ((MR_Box) (hlds__hhf__conv0_STATE_VARIABLE_HI_16));
  }
}

void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0(
  MR_Word hlds__hhf__Simple_6,
  MR_Word hlds__hhf__ModuleInfo_7,
  MR_Word hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26,
  MR_Word * hlds__hhf__STATE_VARIABLE_ClausesInfo_27,
  MR_Word * hlds__hhf__InstGraph_9)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Word hlds__hhf__TypeCtorInfo_37_37;
    MR_Word hlds__hhf__TypeInfo_14_49;
    MR_Word hlds__hhf__VarSet0_10;
    MR_Word hlds__hhf__VarTypes0_11;
    MR_Word hlds__hhf__Vars0_12;
    MR_Word hlds__hhf__InstGraph0_13;
    MR_Word hlds__hhf__Info0_14;
    MR_Word hlds__hhf__HeadVars_15;
    MR_Word hlds__hhf__Clauses0_16;
    MR_Word hlds__hhf__ItemNumbers_17;
    MR_Word hlds__hhf__Clauses_18;
    MR_Word hlds__hhf__Info1_19;
    MR_Word hlds__hhf__ClausesRep_20;
    MR_Word hlds__hhf__Info_21;
    MR_Word hlds__hhf__InstGraph1_22;
    MR_Word hlds__hhf__VarSet_23;
    MR_Word hlds__hhf__VarTypes_24;
    MR_Word hlds__hhf__STATE_VARIABLE_ClausesInfo_28_28;
    MR_Word hlds__hhf__V_29_29;
    MR_Word hlds__hhf__STATE_VARIABLE_ClausesInfo_30_30;
    MR_Word hlds__hhf__STATE_VARIABLE_ClausesInfo_31_31;
    MR_Word hlds__hhf__InstGraph0_43;
    MR_Word hlds__hhf__Vars_44;
    MR_Word hlds__hhf__V_45_45;
    MR_Box hlds__hhf__conv2_Info1_19;
    MR_Word hlds__hhf__V_47_47;
    MR_Word hlds__hhf__V_48_48;
    MR_Box hlds__hhf__conv4_Info_21;

    {
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26, &hlds__hhf__VarSet0_10);
    }
    {
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26, &hlds__hhf__VarTypes0_11);
    }
    {
      hlds__vartypes__vartypes_vars_2_p_0(hlds__hhf__VarTypes0_11, &hlds__hhf__Vars0_12);
    }
    {
      hlds__inst_graph__init_2_p_0(hlds__hhf__Vars0_12, &hlds__hhf__InstGraph0_13);
    }
    {
      hlds__hhf__Info0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hhf__Info0_14, 0) = ((MR_Box) (hlds__hhf__InstGraph0_13));
      MR_hl_field(MR_mktag(0), hlds__hhf__Info0_14, 1) = ((MR_Box) (hlds__hhf__VarSet0_10));
      MR_hl_field(MR_mktag(0), hlds__hhf__Info0_14, 2) = ((MR_Box) (hlds__hhf__VarTypes0_11));
    }
    {
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26, &hlds__hhf__HeadVars_15);
    }
    {
      hlds__hlds_clauses__clauses_info_clauses_4_p_0(&hlds__hhf__Clauses0_16, &hlds__hhf__ItemNumbers_17, hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26, &hlds__hhf__STATE_VARIABLE_ClausesInfo_28_28);
    }
    {
      hlds__hhf__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hhf__V_29_29, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), hlds__hhf__V_29_29, 1) = ((MR_Box) (hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__hhf__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__hhf__V_29_29, 3) = ((MR_Box) (hlds__hhf__HeadVars_15));
    }
    hlds__hhf__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    {
      mercury__list__map_foldl_5_p_0(hlds__hhf__TypeCtorInfo_37_37, hlds__hhf__TypeCtorInfo_37_37, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_29_29, hlds__hhf__Clauses0_16, &hlds__hhf__Clauses_18, ((MR_Box) (hlds__hhf__Info0_14)), &hlds__hhf__conv2_Info1_19);
    }
    hlds__hhf__Info1_19 = ((MR_Word) hlds__hhf__conv2_Info1_19);
    {
      hlds__hlds_clauses__set_clause_list_2_p_0(hlds__hhf__Clauses_18, &hlds__hhf__ClausesRep_20);
    }
    {
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(hlds__hhf__ClausesRep_20, hlds__hhf__ItemNumbers_17, hlds__hhf__STATE_VARIABLE_ClausesInfo_28_28, &hlds__hhf__STATE_VARIABLE_ClausesInfo_30_30);
    }
    hlds__hhf__InstGraph0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info1_19, (MR_Integer) 0)));
    hlds__hhf__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info1_19, (MR_Integer) 1)));
    hlds__hhf__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info1_19, (MR_Integer) 2)));
    hlds__hhf__TypeInfo_14_49 = (MR_Word) &hlds__hhf_scalar_common_1[0];
    {
      mercury__map__keys_2_p_0(hlds__hhf__TypeInfo_14_49, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__hhf__InstGraph0_43, &hlds__hhf__Vars_44);
    }
    {
      hlds__hhf__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 1) = ((MR_Box) (hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 3) = ((MR_Box) (hlds__hhf__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 4) = ((MR_Box) (hlds__hhf__Vars_44));
    }
    {
      mercury__list__foldl_4_p_0(hlds__hhf__TypeInfo_14_49, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_45_45, hlds__hhf__Vars_44, ((MR_Box) (hlds__hhf__Info1_19)), &hlds__hhf__conv4_Info_21);
    }
    hlds__hhf__Info_21 = ((MR_Word) hlds__hhf__conv4_Info_21);
    hlds__hhf__InstGraph1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info_21, (MR_Integer) 0)));
    hlds__hhf__VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info_21, (MR_Integer) 1)));
    hlds__hhf__VarTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info_21, (MR_Integer) 2)));
    switch (hlds__hhf__Simple_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__hhf__InstGraph_9 = hlds__hhf__InstGraph1_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hhf__Vars_25;

          {
            hlds__vartypes__vartypes_vars_2_p_0(hlds__hhf__VarTypes_24, &hlds__hhf__Vars_25);
          }
          {
            hlds__inst_graph__init_2_p_0(hlds__hhf__Vars_25, hlds__hhf__InstGraph_9);
          }
        }
        break;
    }
    {
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(hlds__hhf__VarSet_23, hlds__hhf__STATE_VARIABLE_ClausesInfo_30_30, &hlds__hhf__STATE_VARIABLE_ClausesInfo_31_31);
    }
    {
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(hlds__hhf__VarTypes_24, hlds__hhf__STATE_VARIABLE_ClausesInfo_31_31, hlds__hhf__STATE_VARIABLE_ClausesInfo_27);
    }
  }
}

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_1(
  void * hlds__hhf__env_ptr_arg)
{
  {
    struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s * hlds__hhf__env_ptr = (struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s *) hlds__hhf__env_ptr_arg;

    *((hlds__hhf__env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__hhf__env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__conv0_LambdaHeadVar__1_40));
    {
      ((hlds__hhf__env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont)((hlds__hhf__env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_2(
  MR_Box hlds__hhf__closure_arg,
  MR_Box * hlds__hhf__wrapper_arg_1,
  MR_Cont hlds__hhf__cont,
  void * hlds__hhf__cont_env_ptr)
{
  {
    struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s hlds__hhf__env;

    (hlds__hhf__env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__wrapper_arg_1 = hlds__hhf__wrapper_arg_1;
    (hlds__hhf__env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont = hlds__hhf__cont;
    (hlds__hhf__env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont_env_ptr = hlds__hhf__cont_env_ptr;
    {
      MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;

      {
        hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__99__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 4))), &(hlds__hhf__env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__conv0_LambdaHeadVar__1_40, hlds__hhf__convert_pred_to_hhf_6_p_0_1, &hlds__hhf__env);
      }
    }
  }
}

void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0(
  MR_Word hlds__hhf__Simple_7,
  MR_Word hlds__hhf__PredId_8,
  MR_Word hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * hlds__hhf__STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_bool hlds__hhf__succeeded;
    MR_Word hlds__hhf__PredInfo0_11;
    MR_Word hlds__hhf__PredInfo_24;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25, hlds__hhf__PredId_8, &hlds__hhf__PredInfo0_11);
    }
    {
      hlds__hhf__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hhf__PredInfo0_11);
    }
    if (hlds__hhf__succeeded)
      {
        MR_Word hlds__hhf__ClausesInfo_12;
        MR_Word hlds__hhf__HeadVars_13;
        MR_Word hlds__hhf__VarSet_14;
        MR_Word hlds__hhf__InstGraph_16;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_29_29;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_30_30;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_31_31;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_32_32;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_33_33;

        {
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hhf__PredInfo0_11, &hlds__hhf__ClausesInfo_12);
        }
        {
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__hhf__ClausesInfo_12, &hlds__hhf__HeadVars_13);
        }
        {
          hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__hhf__ClausesInfo_12, &hlds__hhf__VarSet_14);
        }
        {
          hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(hlds__hhf__PredInfo0_11, &hlds__hhf__STATE_VARIABLE_IG_29_29);
        }
        {
          hlds__inst_graph__init_2_p_0(hlds__hhf__HeadVars_13, &hlds__hhf__InstGraph_16);
        }
        {
          hlds__hhf__STATE_VARIABLE_IG_30_30 = hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_29_29, hlds__hhf__InstGraph_16);
        }
        {
          hlds__hhf__STATE_VARIABLE_IG_31_31 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_30_30, hlds__hhf__InstGraph_16);
        }
        {
          hlds__hhf__STATE_VARIABLE_IG_32_32 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_31_31, hlds__hhf__HeadVars_13);
        }
        {
          hlds__hhf__STATE_VARIABLE_IG_33_33 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_32_32, hlds__hhf__VarSet_14);
        }
        {
          hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(hlds__hhf__STATE_VARIABLE_IG_33_33, hlds__hhf__PredInfo0_11, &hlds__hhf__PredInfo_24);
        }
      }
    else
      {
        MR_Word hlds__hhf__ClausesInfo0_18;
        MR_Word hlds__hhf__ImplementationInstGraph_19;
        MR_Word hlds__hhf__PredInfo1_20;
        MR_Word hlds__hhf__InterfaceVars_23;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_36_36;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_37_37;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_38_38;
        MR_Word hlds__hhf__V_39_39;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_41_41;
        MR_Word hlds__hhf__STATE_VARIABLE_IG_42_42;
        MR_Word hlds__hhf__HeadVars_45;
        MR_Word hlds__hhf__VarSet_46;
        MR_Word hlds__hhf__ClausesInfo_49;

        {
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Calculating HHF and inst graph for ", hlds__hhf__PredId_8, hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25);
        }
        {
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hhf__PredInfo0_11, &hlds__hhf__ClausesInfo0_18);
        }
        {
          hlds__hhf__convert_clauses_info_to_hhf_5_p_0(hlds__hhf__Simple_7, hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25, hlds__hhf__ClausesInfo0_18, &hlds__hhf__ClausesInfo_49, &hlds__hhf__ImplementationInstGraph_19);
        }
        {
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__hhf__ClausesInfo_49, hlds__hhf__PredInfo0_11, &hlds__hhf__PredInfo1_20);
        }
        {
          hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(hlds__hhf__PredInfo1_20, &hlds__hhf__STATE_VARIABLE_IG_36_36);
        }
        {
          hlds__hhf__STATE_VARIABLE_IG_37_37 = hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_36_36, hlds__hhf__ImplementationInstGraph_19);
        }
        {
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__hhf__ClausesInfo_49, &hlds__hhf__HeadVars_45);
        }
        {
          hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__hhf__ClausesInfo_49, &hlds__hhf__VarSet_46);
        }
        {
          hlds__hhf__STATE_VARIABLE_IG_38_38 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_37_37, hlds__hhf__ImplementationInstGraph_19);
        }
        {
          hlds__hhf__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 0) = ((MR_Box) (&hlds__hhf_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 1) = ((MR_Box) (hlds__hhf__convert_pred_to_hhf_6_p_0_2));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 3) = ((MR_Box) (hlds__hhf__ImplementationInstGraph_19));
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 4) = ((MR_Box) (hlds__hhf__HeadVars_45));
        }
        {
          mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hhf_scalar_common_1[0], hlds__hhf__V_39_39, &hlds__hhf__InterfaceVars_23);
        }
        {
          hlds__hhf__STATE_VARIABLE_IG_41_41 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_38_38, hlds__hhf__InterfaceVars_23);
        }
        {
          hlds__hhf__STATE_VARIABLE_IG_42_42 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_41_41, hlds__hhf__VarSet_46);
        }
        {
          hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(hlds__hhf__STATE_VARIABLE_IG_42_42, hlds__hhf__PredInfo1_20, &hlds__hhf__PredInfo_24);
        }
      }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__hhf__PredId_8, hlds__hhf__PredInfo_24, hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25, hlds__hhf__STATE_VARIABLE_ModuleInfo_26);
    }
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

/* :- end_module hlds.hhf. */
