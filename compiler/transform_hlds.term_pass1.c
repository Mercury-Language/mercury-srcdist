/*
** Automatically generated from `term_pass1.m'
** by the Mercury compiler,
** version rotd-2022-03-14
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


// :- module transform_hlds.term_pass1.
// :- implementation.

/*
INIT mercury__transform_hlds__term_pass1__init
ENDINIT
*/

#include "transform_hlds.term_pass1.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_traversal.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1];

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2];

static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3];

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0;

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1];

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2];

static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2];

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__442__1_6_p_0(
  MR_Word LambdaHeadVar__1_49,
  MR_Word * LambdaHeadVar__2_50,
  MR_Word LambdaHeadVar__3_51,
  MR_Word * LambdaHeadVar__4_52,
  MR_Word LambdaHeadVar__5_53,
  MR_Word * LambdaHeadVar__6_54);

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__427__1_2_p_0(
  MR_Word LambdaHeadVar__1_19,
  MR_Word * LambdaHeadVar__2_20);

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__147__1_2_p_0(
  MR_Word LambdaHeadVar__1_18,
  MR_Word * LambdaHeadVar__2_19);

static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_55_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * LambdaHeadVar__2_19);

static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
  MR_Word PPIds_5,
  MR_Word Soln_6,
  MR_Word PPId_7,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PPId_8,
  MR_Word VarTypes_9,
  MR_Word Case_10,
  MR_Word STATE_VARIABLE_Errors_0_15,
  MR_Word * STATE_VARIABLE_Errors_16);

static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_Errors_0_12,
  MR_Word * STATE_VARIABLE_Errors_13);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PPId_8,
  MR_Word VarTypes_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_Errors_0_63,
  MR_Word * STATE_VARIABLE_Errors_64);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PPVars_0_2,
  MR_Word * STATE_VARIABLE_PPVars_3,
  MR_Word STATE_VARIABLE_Varset_0_4,
  MR_Word * STATE_VARIABLE_Varset_5,
  MR_Word STATE_VARIABLE_Eqns_0_6,
  MR_Word * STATE_VARIABLE_Eqns_7);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PassInfo_8,
  MR_Word SCC_9,
  MR_Word OutputSupplierMap0_10,
  MR_Word * Result_11,
  MR_Word * TermErrors_12);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PassInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Result_7,
  MR_Word STATE_VARIABLE_TermErrors_0_8,
  MR_Word * STATE_VARIABLE_TermErrors_9);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PassInfo_8,
  MR_Word PPId_9,
  MR_Word OutputSupplierMap0_10,
  MR_Word * Result_11,
  MR_Word * TermErrors_12);

static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_4[2][7];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_5[3][9];




static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_2[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_pass1__init_output_suppliers_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_pass1__convert_equations_2_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_5[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0)
};

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0 = {
  (MR_String) "arg_size_ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
};

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1 = {
  (MR_String) "arg_size_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1
};

static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_arg_size_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass1",
  (MR_String) "arg_size_result",
  { transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0 },
  { transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
};

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0 = {
  (MR_String) "term_pass1_ok",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
};

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1 = {
  (MR_String) "term_pass1_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1
};

static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_pass1_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass1____Unify____pass1_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass1____Compare____pass1_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass1",
  (MR_String) "pass1_result",
  { transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0 },
  { transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0,

};

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__442__1_6_p_0(
  MR_Word LambdaHeadVar__1_49,
  MR_Word * LambdaHeadVar__2_50,
  MR_Word LambdaHeadVar__3_51,
  MR_Word * LambdaHeadVar__4_52,
  MR_Word LambdaHeadVar__5_53,
  MR_Word * LambdaHeadVar__6_54)
{
  MR_bool succeeded;
  MR_Word Var_37;
  MR_Word Var0_87;
  MR_Box conv0_Var0_87;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), LambdaHeadVar__5_53, ((MR_Box) (LambdaHeadVar__1_49)), &conv0_Var0_87);
  if (succeeded)
  {
    Var0_87 = ((MR_Word) (conv0_Var0_87));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_37 = Var0_87;
    *LambdaHeadVar__6_54 = LambdaHeadVar__5_53;
    *LambdaHeadVar__4_52 = LambdaHeadVar__3_51;
  }
  else
  {
    mercury__varset__new_var_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &Var_37, LambdaHeadVar__3_51, LambdaHeadVar__4_52);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), ((MR_Box) (LambdaHeadVar__1_49)), ((MR_Box) (Var_37)), LambdaHeadVar__5_53, LambdaHeadVar__6_54);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_50 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) -1.0000000000000000);
  }
}

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__427__1_2_p_0(
  MR_Word LambdaHeadVar__1_19,
  MR_Word * LambdaHeadVar__2_20)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_20 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LambdaHeadVar__1_19));
    MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) 1.0000000000000000);
  }
}

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__147__1_2_p_0(
  MR_Word LambdaHeadVar__1_18,
  MR_Word * LambdaHeadVar__2_19)
{
  transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_55_95_95_49_95_95_91_49_93_95_48_2_p_0(LambdaHeadVar__2_19);
}

static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_55_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * LambdaHeadVar__2_19)
{
  *LambdaHeadVar__2_19 = (MR_Integer) 0;
}

static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY1_21)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_13_13 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
    }
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_16)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[5]), &SubResult1_6, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_11_11 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
    }
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_12_12 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
  MR_Word PPIds_5,
  MR_Word Soln_6,
  MR_Word PPId_7,
  MR_Word * HeadVar__4_4)
{
  MR_Integer ICoeff_8;
  MR_Word Var_9;
  MR_Float Coeff_10;
  MR_Box conv0_Var_9;
  MR_Box conv1_Coeff_10;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), PPIds_5, ((MR_Box) (PPId_7)), &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Soln_6, ((MR_Box) (Var_9)), &conv1_Coeff_10);
  Coeff_10 = MR_unbox_float(conv1_Coeff_10);
  ICoeff_8 = mercury__float__ceiling_to_int_1_f_0(Coeff_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PPId_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ICoeff_8));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PPId_8,
  MR_Word VarTypes_9,
  MR_Word Case_10,
  MR_Word STATE_VARIABLE_Errors_0_15,
  MR_Word * STATE_VARIABLE_Errors_16)
{
  MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_10, (MR_Integer) 2))));

  transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(ModuleInfo_7, PPId_8, VarTypes_9, Goal_14, STATE_VARIABLE_Errors_0_15, STATE_VARIABLE_Errors_16);
}

static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_Errors_0_12,
  MR_Word * STATE_VARIABLE_Errors_13)
{
  MR_Word ProcInfo_9;
  MR_Word Goal_10;
  MR_Word VarTypes_11;
  MR_Word Var_8;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, PPId_6, &Var_8, &ProcInfo_9);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_9, &Goal_10);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_9, &VarTypes_11);
  transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(ModuleInfo_5, PPId_6, VarTypes_11, Goal_10, STATE_VARIABLE_Errors_0_12, STATE_VARIABLE_Errors_13);
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Errors_16;

  transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Errors_16);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Errors_16));
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Errors_64;

  transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Errors_64);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Errors_64));
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Errors_64;

  transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Errors_64);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Errors_64));
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Errors_64;

  transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Errors_64);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_64));
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PPId_8,
  MR_Word VarTypes_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_Errors_0_63,
  MR_Word * STATE_VARIABLE_Errors_64)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
    MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_58 = (MR_Word) ((MR_Word) (GoalExpr_12));
          MR_Word next_value_of_Goal_10 = SubGoal_58;

          // direct tailcall eliminated
          ;
          Goal_10 = next_value_of_Goal_10;
          continue;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Errors_64 = STATE_VARIABLE_Errors_0_63;
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 0))));
          MR_Integer CallProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 1))));
          MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 2))));
          MR_Word CallPPId_25;
          MR_Word ProcInfo_27;
          MR_Word TerminationInfo_28;
          MR_Word Context_29;
          MR_Word STATE_VARIABLE_Errors_82_82;
          MR_Word Var_26;

          {
            CallPPId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallPPId_25, 0) = ((MR_Box) (CallPredId_19));
            MR_hl_field(MR_mktag(0), CallPPId_25, 1) = ((MR_Box) (CallProcId_20));
          }
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, CallPPId_25, &Var_26, &ProcInfo_27);
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_27, &TerminationInfo_28);
          Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
          if ((TerminationInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Errors_82_82 = STATE_VARIABLE_Errors_0_63;
          else
          {
            MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TerminationInfo_28, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) Var_112)) == (MR_Integer) 1))
            {
              MR_Word CanLoopErrorKind_31;
              MR_Word CanLoopError_32;

              {
                CanLoopErrorKind_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CanLoopErrorKind_31, 0) = ((MR_Box) (PPId_8));
                MR_hl_field(MR_mktag(1), CanLoopErrorKind_31, 1) = ((MR_Box) (CallPPId_25));
              }
              {
                CanLoopError_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CanLoopError_32, 0) = ((MR_Box) (Context_29));
                MR_hl_field(MR_mktag(0), CanLoopError_32, 1) = ((MR_Box) (CanLoopErrorKind_31));
              }
              mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), ((MR_Box) (CanLoopError_32)), STATE_VARIABLE_Errors_0_63, &STATE_VARIABLE_Errors_82_82);
            }
            else
              STATE_VARIABLE_Errors_82_82 = STATE_VARIABLE_Errors_0_63;
          }
          succeeded = transform_hlds__term_util__some_var_is_higher_order_2_p_0(VarTypes_9, Args_21);
          if (succeeded)
          {
            MR_Word HigherOrderErrorKind_34;
            MR_Word HigherOrderError_35;

            {
              HigherOrderErrorKind_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HigherOrderErrorKind_34, 0) = ((MR_Box) (PPId_8));
              MR_hl_field(MR_mktag(2), HigherOrderErrorKind_34, 1) = ((MR_Box) (CallPPId_25));
            }
            {
              HigherOrderError_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HigherOrderError_35, 0) = ((MR_Box) (Context_29));
              MR_hl_field(MR_mktag(0), HigherOrderError_35, 1) = ((MR_Box) (HigherOrderErrorKind_34));
            }
            mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), ((MR_Box) (HigherOrderError_35)), STATE_VARIABLE_Errors_82_82, STATE_VARIABLE_Errors_64);
          }
          else
            *STATE_VARIABLE_Errors_64 = STATE_VARIABLE_Errors_82_82;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Error_48;
              MR_Word Context_84;

              Context_84 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
              {
                Error_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_48, 0) = ((MR_Box) (Context_84));
                MR_hl_field(MR_mktag(0), Error_48, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), ((MR_Box) (Error_48)), STATE_VARIABLE_Errors_0_63, STATE_VARIABLE_Errors_64);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Errors_64 = STATE_VARIABLE_Errors_0_63;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
              MR_Word Var_76;
              MR_Box conv1_STATE_VARIABLE_Errors_64;

              {
                Var_76 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (ModuleInfo_7));
                MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (PPId_8));
                MR_hl_field(MR_mktag(0), Var_76, 5) = ((MR_Box) (VarTypes_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]), Var_76, Goals_50, ((MR_Box) (STATE_VARIABLE_Errors_0_63)), &conv1_STATE_VARIABLE_Errors_64);
              *STATE_VARIABLE_Errors_64 = ((MR_Word) (conv1_STATE_VARIABLE_Errors_64));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));
              MR_Word Var_109;
              MR_Box conv3_STATE_VARIABLE_Errors_64;

              {
                Var_109 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_109, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_109, 3) = ((MR_Box) (ModuleInfo_7));
                MR_hl_field(MR_mktag(0), Var_109, 4) = ((MR_Box) (PPId_8));
                MR_hl_field(MR_mktag(0), Var_109, 5) = ((MR_Box) (VarTypes_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]), Var_109, Goals_108, ((MR_Box) (STATE_VARIABLE_Errors_0_63)), &conv3_STATE_VARIABLE_Errors_64);
              *STATE_VARIABLE_Errors_64 = ((MR_Word) (conv3_STATE_VARIABLE_Errors_64));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3))));
              MR_Word Var_74;
              MR_Box conv7_STATE_VARIABLE_Errors_64;

              {
                Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (ModuleInfo_7));
                MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (PPId_8));
                MR_hl_field(MR_mktag(0), Var_74, 5) = ((MR_Box) (VarTypes_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]), Var_74, Cases_53, ((MR_Box) (STATE_VARIABLE_Errors_0_63)), &conv7_STATE_VARIABLE_Errors_64);
              *STATE_VARIABLE_Errors_64 = ((MR_Word) (conv7_STATE_VARIABLE_Errors_64));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));
              MR_Word SubGoal_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
              MR_Word FGT_61;

              succeeded = ((((MR_tag((MR_Word) Reason_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_59, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_59, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_61) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *STATE_VARIABLE_Errors_64 = STATE_VARIABLE_Errors_0_63;
              else
              {
                MR_Word next_value_of_Goal_10 = SubGoal_86;

                // direct tailcall eliminated
                ;
                Goal_10 = next_value_of_Goal_10;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
              MR_Word Then_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3))));
              MR_Word Else_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4))));
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_72;
              MR_Word Goals_85;
              MR_Box conv5_STATE_VARIABLE_Errors_64;

              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Else_57));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Then_56));
                MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
              }
              {
                Goals_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Goals_85, 0) = ((MR_Box) (Cond_55));
                MR_hl_field(MR_mktag(1), Goals_85, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3));
                MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ModuleInfo_7));
                MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (PPId_8));
                MR_hl_field(MR_mktag(0), Var_72, 5) = ((MR_Box) (VarTypes_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]), Var_72, Goals_85, ((MR_Box) (STATE_VARIABLE_Errors_0_63)), &conv5_STATE_VARIABLE_Errors_64);
              *STATE_VARIABLE_Errors_64 = ((MR_Word) (conv5_STATE_VARIABLE_Errors_64));
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_pass1.check_goal_non_term_calls\'/6", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  transform_hlds__term_pass1__lookup_coeff_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_20;

  transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__427__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_20);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
}

void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PassInfo_7,
  MR_Word SCC_8,
  MR_Word * ArgSize_9,
  MR_Word * TermErrors_10)
{
  MR_bool succeeded;
  MR_Word SCCProcs_11;
  MR_Word InitOutputSupplierMap_12;
  MR_Word Result_13;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_8, &SCCProcs_11);
  transform_hlds__term_pass1__init_output_suppliers_3_p_0(ModuleInfo_6, SCCProcs_11, &InitOutputSupplierMap_12);
  transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(ModuleInfo_6, PassInfo_7, SCCProcs_11, InitOutputSupplierMap_12, &Result_13, TermErrors_10);
  if (((MR_tag((MR_Word) Result_13)) == (MR_Integer) 1))
  {
    MR_Word Errors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_13, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ArgSize_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Errors_25));
    }
  }
  else
  {
    MR_Word Paths_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_13, (MR_Integer) 0))));
    MR_Word OutputSupplierMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_13, (MR_Integer) 1))));
    MR_Word SubsetErrors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_13, (MR_Integer) 2))));

    if ((SubsetErrors_16 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((Paths_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Context_19;
        MR_Word ArgSizeError_20;
        MR_Word Var_30;

        transform_hlds__term_util__get_context_from_scc_3_p_0(ModuleInfo_6, SCC_8, &Context_19);
        {
          ArgSizeError_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgSizeError_20, 0) = ((MR_Box) (Context_19));
          MR_hl_field(MR_mktag(0), ArgSizeError_20, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (ArgSizeError_20));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ArgSize_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
        }
      }
      else
      {
        MR_Word Varset_42;
        MR_Word Equations_43;
        MR_Word Objective_44;
        MR_Word PPVars_45;
        MR_Word TypeInfo_28_81;
        MR_Word Varset0_64;
        MR_Word PPVars0_65;
        MR_Word EqnSet0_66;
        MR_Word EqnSet_67;
        MR_Word Vars_68;
        MR_Word Convert_69;

        mercury__varset__init_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &Varset0_64);
        mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), &PPVars0_65);
        mercury__set__init_1_p_0((MR_Word) (&libs__lp__libs__lp__type_ctor_info_equation_0), &EqnSet0_66);
        succeeded = transform_hlds__term_pass1__convert_equations_2_7_p_0(Paths_14, PPVars0_65, &PPVars_45, Varset0_64, &Varset_42, EqnSet0_66, &EqnSet_67);
        if (succeeded)
        {
          mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__lp__libs__lp__type_ctor_info_equation_0), EqnSet_67, &Equations_43);
          mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), PPVars_45, &Vars_68);
          Convert_69 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[6]);
          TypeInfo_28_81 = (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[1]);
          mercury__list__map_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), TypeInfo_28_81, Convert_69, Vars_68, &Objective_44);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word AllVars0_46;
          MR_Word AllVars_47;
          MR_Word Soln_48;

          mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), PPVars_45, &AllVars0_46);
          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), AllVars0_46, &AllVars_47);
          libs__lp__lp_solve_6_p_0(Equations_43, (MR_Integer) 1, Objective_44, Varset_42, AllVars_47, &Soln_48);
          if ((Soln_48 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_27;
            MR_Word Context_32;
            MR_Word ArgSizeError_33;

            transform_hlds__term_util__get_context_from_scc_3_p_0(ModuleInfo_6, SCC_8, &Context_32);
            {
              ArgSizeError_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ArgSizeError_33, 0) = ((MR_Box) (Context_32));
              MR_hl_field(MR_mktag(0), ArgSizeError_33, 1) = ((MR_Box) ((MR_Unsigned) 24U));
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ArgSizeError_33));
              MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ArgSize_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
            }
          }
          else
          {
            MR_Word Solution_24;
            MR_Word SolnVal_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Soln_48, (MR_Integer) 1))));
            MR_Word Var_53;

            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2));
              MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (PPVars_45));
              MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (SolnVal_50));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[0]), Var_53, SCCProcs_11, &Solution_24);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *ArgSize_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Solution_24));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutputSupplierMap_15));
            }
          }
        }
        else
        {
          MR_Word Var_85;
          MR_Word Context_87;
          MR_Word ArgSizeError_88;

          transform_hlds__term_util__get_context_from_scc_3_p_0(ModuleInfo_6, SCC_8, &Context_87);
          {
            ArgSizeError_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgSizeError_88, 0) = ((MR_Box) (Context_87));
            MR_hl_field(MR_mktag(0), ArgSizeError_88, 1) = ((MR_Box) ((MR_Unsigned) 24U));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (ArgSizeError_88));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *ArgSize_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_85));
          }
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ArgSize_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SubsetErrors_16));
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_50;
  MR_Word conv2_LambdaHeadVar__4_52;
  MR_Word conv1_LambdaHeadVar__6_54;

  transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__442__1_6_p_0(((MR_Word) (wrapper_arg_1)), &conv3_LambdaHeadVar__2_50, ((MR_Word) (wrapper_arg_3)), &conv2_LambdaHeadVar__4_52, ((MR_Word) (wrapper_arg_5)), &conv1_LambdaHeadVar__6_54);
  *wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_50));
  *wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_52));
  *wrapper_arg_6 = ((MR_Box) (conv1_LambdaHeadVar__6_54));
}

static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PPVars_0_2,
  MR_Word * STATE_VARIABLE_PPVars_3,
  MR_Word STATE_VARIABLE_Varset_0_4,
  MR_Word * STATE_VARIABLE_Varset_5,
  MR_Word STATE_VARIABLE_Eqns_0_6,
  MR_Word * STATE_VARIABLE_Eqns_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Eqns_7 = STATE_VARIABLE_Eqns_0_6;
      *STATE_VARIABLE_Varset_5 = STATE_VARIABLE_Varset_0_4;
      *STATE_VARIABLE_PPVars_3 = STATE_VARIABLE_PPVars_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Path_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Paths_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ThisPPId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_17, (MR_Integer) 0))));
      MR_Integer IntGamma_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Path_17, (MR_Integer) 2))));
      MR_Word PPIds_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_17, (MR_Integer) 3))));
      MR_Float FloatGamma_27;
      MR_Word Eqn_28;
      MR_Word Coeffs_29;
      MR_Word ThisVar_30;
      MR_Word RestCoeffs_31;
      MR_Word STATE_VARIABLE_Varset_45_45;
      MR_Word STATE_VARIABLE_PPVars_46_46;
      MR_Word Var_47;
      MR_Word STATE_VARIABLE_Varset_62_62;
      MR_Word STATE_VARIABLE_PPVars_63_63;
      MR_Word STATE_VARIABLE_Eqns_64_64;
      MR_Word Var0_87;
      MR_Box conv0_Var0_87;
      MR_Box conv5_STATE_VARIABLE_Varset_62_62;
      MR_Box conv4_STATE_VARIABLE_PPVars_63_63;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PPVars_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Varset_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Eqns_0_6;

      FloatGamma_27 = mercury__float__float_1_f_0(IntGamma_24);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), STATE_VARIABLE_PPVars_0_2, ((MR_Box) (ThisPPId_22)), &conv0_Var0_87);
      if (succeeded)
      {
        Var0_87 = ((MR_Word) (conv0_Var0_87));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ThisVar_30 = Var0_87;
        STATE_VARIABLE_PPVars_46_46 = STATE_VARIABLE_PPVars_0_2;
        STATE_VARIABLE_Varset_45_45 = STATE_VARIABLE_Varset_0_4;
      }
      else
      {
        mercury__varset__new_var_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &ThisVar_30, STATE_VARIABLE_Varset_0_4, &STATE_VARIABLE_Varset_45_45);
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[3]), ((MR_Box) (ThisPPId_22)), ((MR_Box) (ThisVar_30)), STATE_VARIABLE_PPVars_0_2, &STATE_VARIABLE_PPVars_46_46);
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ThisVar_30));
        MR_hl_field(MR_mktag(0), Var_47, 1) = MR_box_float((MR_Float) 1.0000000000000000);
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[1]), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[4]), (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[2]), (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[5]), PPIds_25, &RestCoeffs_31, ((MR_Box) (STATE_VARIABLE_Varset_45_45)), &conv5_STATE_VARIABLE_Varset_62_62, ((MR_Box) (STATE_VARIABLE_PPVars_46_46)), &conv4_STATE_VARIABLE_PPVars_63_63);
      STATE_VARIABLE_Varset_62_62 = ((MR_Word) (conv5_STATE_VARIABLE_Varset_62_62));
      STATE_VARIABLE_PPVars_63_63 = ((MR_Word) (conv4_STATE_VARIABLE_PPVars_63_63));
      {
        Coeffs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Coeffs_29, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Coeffs_29, 1) = ((MR_Box) (RestCoeffs_31));
      }
      {
        Eqn_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Eqn_28, 0) = ((MR_Box) (Coeffs_29));
        MR_hl_field(MR_mktag(0), Eqn_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Eqn_28, 2) = MR_box_float(FloatGamma_27);
      }
      mercury__set__insert_3_p_0((MR_Word) (&libs__lp__libs__lp__type_ctor_info_equation_0), ((MR_Box) (Eqn_28)), STATE_VARIABLE_Eqns_0_6, &STATE_VARIABLE_Eqns_64_64);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Paths_18;
      next_value_of_STATE_VARIABLE_PPVars_0_2 = STATE_VARIABLE_PPVars_63_63;
      next_value_of_STATE_VARIABLE_Varset_0_4 = STATE_VARIABLE_Varset_62_62;
      next_value_of_STATE_VARIABLE_Eqns_0_6 = STATE_VARIABLE_Eqns_64_64;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PPVars_0_2 = next_value_of_STATE_VARIABLE_PPVars_0_2;
      STATE_VARIABLE_Varset_0_4 = next_value_of_STATE_VARIABLE_Varset_0_4;
      STATE_VARIABLE_Eqns_0_6 = next_value_of_STATE_VARIABLE_Eqns_0_6;
      continue;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PassInfo_8,
  MR_Word SCC_9,
  MR_Word OutputSupplierMap0_10,
  MR_Word * Result_11,
  MR_Word * TermErrors_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result0_13;
    MR_Word TermErrors0_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(ModuleInfo_7, PassInfo_8, SCC_9, OutputSupplierMap0_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Result0_13, (MR_Word) ((MR_Unsigned) 0U), &TermErrors0_14);
    if (((MR_tag((MR_Word) Result0_13)) == (MR_Integer) 1))
    {
      *Result_11 = Result0_13;
      *TermErrors_12 = TermErrors0_14;
    }
    else
    {
      MR_Word OutputSupplierMap1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_13, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_2[3]), ((MR_Box) (OutputSupplierMap1_17)), ((MR_Box) (OutputSupplierMap0_10)));
      if (succeeded)
      {
        *Result_11 = Result0_13;
        *TermErrors_12 = TermErrors0_14;
      }
      else
      {
        MR_Word next_value_of_OutputSupplierMap0_10 = OutputSupplierMap1_17;

        // direct tailcall eliminated
        ;
        OutputSupplierMap0_10 = next_value_of_OutputSupplierMap0_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Errors_13;

  transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Errors_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Errors_13));
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PassInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Result_7,
  MR_Word STATE_VARIABLE_TermErrors_0_8,
  MR_Word * STATE_VARIABLE_TermErrors_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Result_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadVar__5_5));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HeadVar__6_6));
      }
      *STATE_VARIABLE_TermErrors_9 = STATE_VARIABLE_TermErrors_0_8;
    }
    else
    {
      MR_Word PPId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PPIds_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Result1_28;
      MR_Word ProcTermErrors_29;
      MR_Integer MaxErrors_31;
      MR_Word STATE_VARIABLE_TermErrors_42_42;
      MR_Word STATE_VARIABLE_TermErrors_43_43;

      transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(ModuleInfo_1, PassInfo_2, PPId_21, HeadVar__4_4, &Result1_28, &ProcTermErrors_29);
      STATE_VARIABLE_TermErrors_42_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), STATE_VARIABLE_TermErrors_0_8, ProcTermErrors_29);
      MaxErrors_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_2, (MR_Integer) 1))));
      mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_31, STATE_VARIABLE_TermErrors_42_42, &STATE_VARIABLE_TermErrors_43_43);
      if (((MR_tag((MR_Word) Result1_28)) == (MR_Integer) 1))
      {
        MR_Word OtherTermErrors_34;
        MR_Word Var_45;
        MR_Box conv1_OtherTermErrors_34;

        *Result_7 = Result1_28;
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ModuleInfo_1));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[2]), Var_45, PPIds_22, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_OtherTermErrors_34);
        OtherTermErrors_34 = ((MR_Word) (conv1_OtherTermErrors_34));
        mercury__list__append_3_p_1((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), OtherTermErrors_34, STATE_VARIABLE_TermErrors_43_43, STATE_VARIABLE_TermErrors_9);
      }
      else
      {
        MR_Word Paths1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result1_28, (MR_Integer) 0))));
        MR_Word OutputSupplierMap1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result1_28, (MR_Integer) 1))));
        MR_Word SubsetErrors1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result1_28, (MR_Integer) 2))));
        MR_Word Paths_38;
        MR_Word SubsetErrors_39;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_STATE_VARIABLE_TermErrors_0_8;

        Paths_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), HeadVar__5_5, Paths1_35);
        SubsetErrors_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), HeadVar__6_6, SubsetErrors1_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = PPIds_22;
        next_value_of_HeadVar__4_4 = OutputSupplierMap1_36;
        next_value_of_HeadVar__5_5 = Paths_38;
        next_value_of_HeadVar__6_6 = SubsetErrors_39;
        next_value_of_STATE_VARIABLE_TermErrors_0_8 = STATE_VARIABLE_TermErrors_43_43;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        STATE_VARIABLE_TermErrors_0_8 = next_value_of_STATE_VARIABLE_TermErrors_0_8;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PassInfo_8,
  MR_Word PPId_9,
  MR_Word OutputSupplierMap0_10,
  MR_Word * Result_11,
  MR_Word * TermErrors_12)
{
  MR_bool succeeded;
  MR_Word PredInfo_13;
  MR_Word ProcInfo_14;
  MR_Word Context_15;
  MR_Word Args_16;
  MR_Word ArgModes_17;
  MR_Word VarTypes_18;
  MR_Word Goal0_19;
  MR_Word Goal_20;
  MR_Word EmptyMap_21;
  MR_Word FunctorInfo_22;
  MR_Integer MaxErrors_23;
  MR_Integer MaxPaths_24;
  MR_Word Params_25;
  MR_Word InVars_26;
  MR_Word OutVars_27;
  MR_Word Path0_28;
  MR_Word PathSet0_29;
  MR_Word Info0_30;
  MR_Word Info_31;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PPId_9, &PredInfo_13, &ProcInfo_14);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_13, &Context_15);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_14, &Args_16);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_14, &ArgModes_17);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_14, &VarTypes_18);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_14, &Goal0_19);
  Goal_20 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(Goal0_19);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[0]), &EmptyMap_21);
  FunctorInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PassInfo_8, (MR_Integer) 0))));
  MaxErrors_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_8, (MR_Integer) 1))));
  MaxPaths_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_8, (MR_Integer) 2))));
  transform_hlds__term_traversal__init_term_traversal_params_9_p_0(FunctorInfo_22, PPId_9, Context_15, VarTypes_18, OutputSupplierMap0_10, EmptyMap_21, MaxErrors_23, MaxPaths_24, &Params_25);
  transform_hlds__term_util__partition_call_args_5_p_0(ModuleInfo_7, ArgModes_17, Args_16, &InVars_26, &OutVars_27);
  {
    Path0_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Path0_28, 0) = ((MR_Box) (PPId_9));
    MR_hl_field(MR_mktag(0), Path0_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Path0_28, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), Path0_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Path0_28, 4) = ((MR_Box) (OutVars_27));
  }
  PathSet0_29 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), ((MR_Box) (Path0_28)));
  {
    Info0_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Info0_30, 0) = ((MR_Box) (PathSet0_29));
    MR_hl_field(MR_mktag(0), Info0_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_7, Params_25, Goal_20, Info0_30, &Info_31);
  if (((MR_tag((MR_Word) Info_31)) == (MR_Integer) 1))
  {
    MR_Word Errors_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Info_31, (MR_Integer) 0))));

    *TermErrors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Info_31, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Errors_41));
    }
  }
  else
  {
    MR_Word Paths_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_31, (MR_Integer) 0))));
    MR_Word PathList_33;
    MR_Word AllActiveVars_34;
    MR_Word OutputSuppliers0_35;
    MR_Word OutputSuppliers_36;
    MR_Word OutputSupplierMap_37;
    MR_Word SubsetErrors_38;
    MR_Box conv0_OutputSuppliers0_35;

    *TermErrors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_31, (MR_Integer) 1))));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), Paths_32, &PathList_33);
    transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(PathList_33, &AllActiveVars_34);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[0]), OutputSupplierMap0_10, ((MR_Box) (PPId_9)), &conv0_OutputSuppliers0_35);
    OutputSuppliers0_35 = ((MR_Word) (conv0_OutputSuppliers0_35));
    transform_hlds__term_pass1__update_output_suppliers_4_p_0(Args_16, AllActiveVars_34, OutputSuppliers0_35, &OutputSuppliers_36);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[0]), ((MR_Box) (PPId_9)), ((MR_Box) (OutputSuppliers_36)), OutputSupplierMap0_10, &OutputSupplierMap_37);
    succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[1]), AllActiveVars_34, InVars_26);
    if (succeeded)
      SubsetErrors_38 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SubsetErrorKind_39;
      MR_Word SubsetError_40;

      {
        SubsetErrorKind_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SubsetErrorKind_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), SubsetErrorKind_39, 1) = ((MR_Box) (PPId_9));
        MR_hl_field(MR_mktag(3), SubsetErrorKind_39, 2) = ((MR_Box) (AllActiveVars_34));
        MR_hl_field(MR_mktag(3), SubsetErrorKind_39, 3) = ((MR_Box) (InVars_26));
      }
      {
        SubsetError_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SubsetError_40, 0) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), SubsetError_40, 1) = ((MR_Box) (SubsetErrorKind_39));
      }
      {
        SubsetErrors_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubsetErrors_38, 0) = ((MR_Box) (SubsetError_40));
        MR_hl_field(MR_mktag(1), SubsetErrors_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Result_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PathList_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutputSupplierMap_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SubsetErrors_38));
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
        return;
      }
    }
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
        return;
      }
    }
    else
    {
      MR_Word OutputSupplier0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word OutputSuppliers0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word OutputSupplier_21;
      MR_Word OutputSuppliers_22;

      succeeded = mercury__bag__contains_2_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[1]), HeadVar__2_2, ((MR_Box) (Var_25)));
      if (succeeded)
        OutputSupplier_21 = (MR_Integer) 1;
      else
        OutputSupplier_21 = OutputSupplier0_19;
      transform_hlds__term_pass1__update_output_suppliers_4_p_0(Var_24, HeadVar__2_2, OutputSuppliers0_20, &OutputSuppliers_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OutputSupplier_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputSuppliers_22));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_19;

  transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__147__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_19);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
}

static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[0]), HeadVar__3_3);
  else
  {
    MR_Word PPId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PPIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word OutputSupplierMap0_10;
    MR_Word ProcInfo_12;
    MR_Word HeadVars_13;
    MR_Word BoolList_17;
    MR_Word Var_11;

    transform_hlds__term_pass1__init_output_suppliers_3_p_0(ModuleInfo_1, PPIds_8, &OutputSupplierMap0_10);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_1, PPId_7, &Var_11, &ProcInfo_12);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &HeadVars_13);
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__term_pass1_scalar_common_1[1]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_2[4]), HeadVars_13, &BoolList_17);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass1_scalar_common_1[0]), ((MR_Box) (PPId_7)), ((MR_Box) (BoolList_17)), OutputSupplierMap0_10, HeadVar__3_3);
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_pass1____Unify____arg_size_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_pass1____Compare____arg_size_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_pass1____Unify____pass1_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_pass1____Compare____pass1_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__term_pass1__init(void)
{
}

void mercury__transform_hlds__term_pass1__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_arg_size_result_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_pass1_result_0);
}

void mercury__transform_hlds__term_pass1__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_pass1__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_pass1.
