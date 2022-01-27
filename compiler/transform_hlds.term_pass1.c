/*
** Automatically generated from `term_pass1.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module transform_hlds.term_pass1. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_pass1__init
ENDINIT
*/

#include "transform_hlds.term_pass1.mih"


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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp.mih"
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
#include "float.mih"
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
#include "transform_hlds.term_traversal.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

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

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_55_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19);

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__442__1_6_p_0(
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_49,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_50,
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__3_51,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__4_52,
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__5_53,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__6_54);

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__427__1_2_p_0(
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_19,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_20);

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__147__1_2_p_0(
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_18,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19);

static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
  MR_Word transform_hlds__term_pass1__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
  MR_Word transform_hlds__term_pass1__PPIds_5,
  MR_Word transform_hlds__term_pass1__Soln_6,
  MR_Word transform_hlds__term_pass1__PPId_7,
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7);

static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
  MR_Word transform_hlds__term_pass1__PPId_8,
  MR_Word transform_hlds__term_pass1__VarTypes_9,
  MR_Word transform_hlds__term_pass1__Case_10,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_16);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
  MR_Word transform_hlds__term_pass1__PPId_8,
  MR_Word transform_hlds__term_pass1__VarTypes_9,
  MR_Word transform_hlds__term_pass1__Goal_10,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);

static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_5,
  MR_Word transform_hlds__term_pass1__PPId_6,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_13);

static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
  MR_Word transform_hlds__term_pass1__PassInfo_8,
  MR_Word transform_hlds__term_pass1__PPId_9,
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
  MR_Word * transform_hlds__term_pass1__Result_11,
  MR_Word * transform_hlds__term_pass1__TermErrors_12);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
  MR_Word transform_hlds__term_pass1__PassInfo_2,
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
  MR_Word transform_hlds__term_pass1__HeadVar__6_6,
  MR_Word * transform_hlds__term_pass1__Result_7,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
  MR_Word transform_hlds__term_pass1__PassInfo_8,
  MR_Word transform_hlds__term_pass1__SCC_9,
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
  MR_Word * transform_hlds__term_pass1__Result_11,
  MR_Word * transform_hlds__term_pass1__TermErrors_12);

static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);


static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_4[2][7];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_5[3][9];




static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[3]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__term_pass1__init_output_suppliers_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__term_pass1__convert_equations_2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0 = {
  (MR_String) "arg_size_ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1 = {
  (MR_String) "arg_size_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1
};

static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass1",
  (MR_String) "arg_size_result",
  {     transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0 },
  {     transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0 = {
  (MR_String) "term_pass1_ok",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1 = {
  (MR_String) "term_pass1_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1
};

static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass1____Unify____pass1_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass1____Compare____pass1_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass1",
  (MR_String) "pass1_result",
  {     transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0 },
  {     transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0
};

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;

    {
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____arg_size_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
    return transform_hlds__term_pass1__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

    {
      transform_hlds__term_pass1____Compare____arg_size_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;

    {
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____pass1_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
    return transform_hlds__term_pass1__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

    {
      transform_hlds__term_pass1____Compare____pass1_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_55_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;

    *transform_hlds__term_pass1__LambdaHeadVar__2_19 = (MR_Integer) 0;
  }
}

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__442__1_6_p_0(
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_49,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_50,
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__3_51,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__4_52,
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__5_53,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__6_54)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Word transform_hlds__term_pass1__Var_37;
    MR_Word transform_hlds__term_pass1__Var0_87;
    MR_Box transform_hlds__term_pass1__conv0_Var0_87;

    {
      transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__LambdaHeadVar__5_53, ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_49)), &transform_hlds__term_pass1__conv0_Var0_87);
    }
    if (transform_hlds__term_pass1__succeeded)
      {
        transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
        transform_hlds__term_pass1__succeeded = MR_TRUE;
      }
    if (transform_hlds__term_pass1__succeeded)
      {
        transform_hlds__term_pass1__Var_37 = transform_hlds__term_pass1__Var0_87;
        *transform_hlds__term_pass1__LambdaHeadVar__6_54 = transform_hlds__term_pass1__LambdaHeadVar__5_53;
        *transform_hlds__term_pass1__LambdaHeadVar__4_52 = transform_hlds__term_pass1__LambdaHeadVar__3_51;
      }
    else
      {
        {
          mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Var_37, transform_hlds__term_pass1__LambdaHeadVar__3_51, transform_hlds__term_pass1__LambdaHeadVar__4_52);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_49)), ((MR_Box) (transform_hlds__term_pass1__Var_37)), transform_hlds__term_pass1__LambdaHeadVar__5_53, transform_hlds__term_pass1__LambdaHeadVar__6_54);
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__term_pass1__LambdaHeadVar__2_50 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) -1.0000000000000000);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__427__1_2_p_0(
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_19,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_20)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__term_pass1__LambdaHeadVar__2_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_19));
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) 1.0000000000000000);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__147__1_2_p_0(
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_18,
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;

    {
      transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_55_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass1__LambdaHeadVar__2_19);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
  MR_Word transform_hlds__term_pass1__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Integer transform_hlds__term_pass1__CastX_22 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;
    MR_Integer transform_hlds__term_pass1__CastY_23 = (MR_Integer) transform_hlds__term_pass1__HeadVar__3_3;

    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_22 == transform_hlds__term_pass1__CastY_23);
    if (transform_hlds__term_pass1__succeeded)
      *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_pass1__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__term_pass1__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_28_28)), ((MR_Box) (transform_hlds__term_pass1__V_21_21)));
            }
          }
        else
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word transform_hlds__term_pass1__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__term_pass1__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass1__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass1__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word transform_hlds__term_pass1__V_10_10;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[6], &transform_hlds__term_pass1__V_10_10, ((MR_Box) (transform_hlds__term_pass1__V_31_31)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
            }
            transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_10_10 == (MR_Integer) 0);
            transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
            if (transform_hlds__term_pass1__succeeded)
              *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_10_10;
            else
              {
                MR_Word transform_hlds__term_pass1__V_11_11;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], &transform_hlds__term_pass1__V_11_11, ((MR_Box) (transform_hlds__term_pass1__V_30_30)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
                }
                transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_11_11 == (MR_Integer) 0);
                transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
                if (transform_hlds__term_pass1__succeeded)
                  *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_11_11;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_29_29)), ((MR_Box) (transform_hlds__term_pass1__V_9_9)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Integer transform_hlds__term_pass1__CastX_11 = (MR_Integer) transform_hlds__term_pass1__HeadVar__1_1;
    MR_Integer transform_hlds__term_pass1__CastY_12 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;

    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_11 == transform_hlds__term_pass1__CastY_12);
    if (transform_hlds__term_pass1__succeeded)
      transform_hlds__term_pass1__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_pass1__TypeInfo_13_13;
        MR_Word transform_hlds__term_pass1__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass1__V_10_10;

        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__term_pass1__succeeded)
          {
            transform_hlds__term_pass1__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
            {
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_9_9)), ((MR_Box) (transform_hlds__term_pass1__V_10_10)));
            }
          }
      }
    else
      {
        MR_Word transform_hlds__term_pass1__TypeInfo_14_14;
        MR_Word transform_hlds__term_pass1__TypeInfo_15_15;
        MR_Word transform_hlds__term_pass1__TypeInfo_16_16;
        MR_Word transform_hlds__term_pass1__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass1__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass1__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__term_pass1__V_6_6;
        MR_Word transform_hlds__term_pass1__V_7_7;
        MR_Word transform_hlds__term_pass1__V_8_8;

        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__term_pass1__succeeded)
          {
            transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
            transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 2)));
            transform_hlds__term_pass1__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[6];
            {
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
            }
            if (transform_hlds__term_pass1__succeeded)
              {
                transform_hlds__term_pass1__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
                {
                  transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
                }
                if (transform_hlds__term_pass1__succeeded)
                  {
                    transform_hlds__term_pass1__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
                    {
                      transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_pass1__V_5_5)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
                    }
                  }
              }
          }
      }
    return transform_hlds__term_pass1__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0(
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
  MR_Word transform_hlds__term_pass1__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Integer transform_hlds__term_pass1__CastX_17 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;
    MR_Integer transform_hlds__term_pass1__CastY_18 = (MR_Integer) transform_hlds__term_pass1__HeadVar__3_3;

    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_17 == transform_hlds__term_pass1__CastY_18);
    if (transform_hlds__term_pass1__succeeded)
      *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_pass1__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__term_pass1__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_22_22)), ((MR_Box) (transform_hlds__term_pass1__V_16_16)));
            }
          }
        else
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass1__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass1__V_8_8;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[5], &transform_hlds__term_pass1__V_8_8, ((MR_Box) (transform_hlds__term_pass1__V_24_24)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
            }
            transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_8_8 == (MR_Integer) 0);
            transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
            if (transform_hlds__term_pass1__succeeded)
              *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_8_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_23_23)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0(
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Integer transform_hlds__term_pass1__CastX_9 = (MR_Integer) transform_hlds__term_pass1__HeadVar__1_1;
    MR_Integer transform_hlds__term_pass1__CastY_10 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;

    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_9 == transform_hlds__term_pass1__CastY_10);
    if (transform_hlds__term_pass1__succeeded)
      transform_hlds__term_pass1__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_pass1__TypeInfo_11_11;
        MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass1__V_8_8;

        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__term_pass1__succeeded)
          {
            transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_pass1__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
            {
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_pass1__V_7_7)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
            }
          }
      }
    else
      {
        MR_Word transform_hlds__term_pass1__TypeInfo_12_12;
        MR_Word transform_hlds__term_pass1__TypeInfo_13_13;
        MR_Word transform_hlds__term_pass1__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass1__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass1__V_5_5;
        MR_Word transform_hlds__term_pass1__V_6_6;

        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__term_pass1__succeeded)
          {
            transform_hlds__term_pass1__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
            transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[5];
            {
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_5_5)));
            }
            if (transform_hlds__term_pass1__succeeded)
              {
                transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
                {
                  transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
                }
              }
          }
      }
    return transform_hlds__term_pass1__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
  MR_Word transform_hlds__term_pass1__PPIds_5,
  MR_Word transform_hlds__term_pass1__Soln_6,
  MR_Word transform_hlds__term_pass1__PPId_7,
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Word transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
    MR_Integer transform_hlds__term_pass1__ICoeff_8;
    MR_Word transform_hlds__term_pass1__Var_9;
    MR_Float transform_hlds__term_pass1__Coeff_10;
    MR_Box transform_hlds__term_pass1__conv0_Var_9;
    MR_Box transform_hlds__term_pass1__conv1_Coeff_10;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass1__TypeInfo_12_12, transform_hlds__term_pass1__PPIds_5, ((MR_Box) (transform_hlds__term_pass1__PPId_7)), &transform_hlds__term_pass1__conv0_Var_9);
    }
    transform_hlds__term_pass1__Var_9 = ((MR_Word) transform_hlds__term_pass1__conv0_Var_9);
    {
      mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeInfo_12_12, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, transform_hlds__term_pass1__Soln_6, ((MR_Box) (transform_hlds__term_pass1__Var_9)), &transform_hlds__term_pass1__conv1_Coeff_10);
    }
    transform_hlds__term_pass1__Coeff_10 = MR_unbox_float(transform_hlds__term_pass1__conv1_Coeff_10);
    {
      transform_hlds__term_pass1__ICoeff_8 = mercury__float__ceiling_to_int_1_f_0(transform_hlds__term_pass1__Coeff_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__term_pass1__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__ICoeff_8));
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv3_LambdaHeadVar__2_50;
    MR_Word transform_hlds__term_pass1__conv2_LambdaHeadVar__4_52;
    MR_Word transform_hlds__term_pass1__conv1_LambdaHeadVar__6_54;

    {
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__442__1_6_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv3_LambdaHeadVar__2_50, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3), &transform_hlds__term_pass1__conv2_LambdaHeadVar__4_52, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_5), &transform_hlds__term_pass1__conv1_LambdaHeadVar__6_54);
    }
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv3_LambdaHeadVar__2_50));
    *transform_hlds__term_pass1__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_pass1__conv2_LambdaHeadVar__4_52));
    *transform_hlds__term_pass1__wrapper_arg_6 = ((MR_Box) (transform_hlds__term_pass1__conv1_LambdaHeadVar__6_54));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass1__succeeded;

        if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6;
            *transform_hlds__term_pass1__STATE_VARIABLE_Varset_5 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
            *transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
            transform_hlds__term_pass1__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word transform_hlds__term_pass1__Path_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass1__Paths_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass1__ThisPPId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 0)));
            MR_Integer transform_hlds__term_pass1__IntGamma_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 2)));
            MR_Word transform_hlds__term_pass1__PPIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 3)));
            MR_Float transform_hlds__term_pass1__FloatGamma_27;
            MR_Word transform_hlds__term_pass1__Eqn_28;
            MR_Word transform_hlds__term_pass1__Coeffs_29;
            MR_Word transform_hlds__term_pass1__ThisVar_30;
            MR_Word transform_hlds__term_pass1__RestCoeffs_31;
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45;
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46;
            MR_Word transform_hlds__term_pass1__V_47_47;
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;
            MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 4)));
            MR_Word transform_hlds__term_pass1__Var0_87;
            MR_Box transform_hlds__term_pass1__conv0_Var0_87;
            MR_Box transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62;
            MR_Box transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63;

            {
              transform_hlds__term_pass1__FloatGamma_27 = mercury__float__float_1_f_0(transform_hlds__term_pass1__IntGamma_24);
            }
            {
              transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), &transform_hlds__term_pass1__conv0_Var0_87);
            }
            if (transform_hlds__term_pass1__succeeded)
              {
                transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
                transform_hlds__term_pass1__succeeded = MR_TRUE;
              }
            if (transform_hlds__term_pass1__succeeded)
              {
                transform_hlds__term_pass1__ThisVar_30 = transform_hlds__term_pass1__Var0_87;
                transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
                transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
              }
            else
              {
                {
                  mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__ThisVar_30, transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4, &transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45);
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), ((MR_Box) (transform_hlds__term_pass1__ThisVar_30)), transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, &transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46);
                }
              }
            {
              transform_hlds__term_pass1__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 0) = ((MR_Box) (transform_hlds__term_pass1__ThisVar_30));
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 1) = MR_box_float((MR_Float) 1.0000000000000000);
            }
            {
              mercury__list__map_foldl2_7_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1], (MR_Word) &transform_hlds__term_pass1_scalar_common_1[4], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[2], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[6], transform_hlds__term_pass1__PPIds_25, &transform_hlds__term_pass1__RestCoeffs_31, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45)), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46)), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
            }
            transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62 = ((MR_Word) transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62);
            transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63 = ((MR_Word) transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
            {
              transform_hlds__term_pass1__Coeffs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 0) = ((MR_Box) (transform_hlds__term_pass1__V_47_47));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 1) = ((MR_Box) (transform_hlds__term_pass1__RestCoeffs_31));
            }
            {
              transform_hlds__term_pass1__Eqn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 0) = ((MR_Box) (transform_hlds__term_pass1__Coeffs_29));
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 1) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 2) = MR_box_float(transform_hlds__term_pass1__FloatGamma_27);
            }
            {
              mercury__set__insert_3_p_0((MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0, ((MR_Box) (transform_hlds__term_pass1__Eqn_28)), transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6, &transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_pass1__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass1__Paths_18;
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;

              transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6;
              transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4;
              transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2;
              transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
        return transform_hlds__term_pass1__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
  MR_Word transform_hlds__term_pass1__PPId_8,
  MR_Word transform_hlds__term_pass1__VarTypes_9,
  MR_Word transform_hlds__term_pass1__Case_10,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_16)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Word transform_hlds__term_pass1__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 2)));
    MR_Word transform_hlds__term_pass1__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 0)));
    MR_Word transform_hlds__term_pass1__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 1)));

    {
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PPId_8, transform_hlds__term_pass1__VarTypes_9, transform_hlds__term_pass1__Goal_14, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15, transform_hlds__term_pass1__STATE_VARIABLE_Errors_16);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16;

    {
      transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16);
    }
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64;

    {
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64);
    }
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64;

    {
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64);
    }
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64;

    {
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64);
    }
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
  MR_Word transform_hlds__term_pass1__PPId_8,
  MR_Word transform_hlds__term_pass1__VarTypes_9,
  MR_Word transform_hlds__term_pass1__Goal_10,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_64)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass1__succeeded;
        MR_Word transform_hlds__term_pass1__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_10, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass1__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_10, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__term_pass1__SubGoal_58 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_pass1__GoalExpr_12), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__term_pass1__Goal__tmp_copy_10 = transform_hlds__term_pass1__SubGoal_58;

                transform_hlds__term_pass1__Goal_10 = transform_hlds__term_pass1__Goal__tmp_copy_10;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__term_pass1__CallPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 0)));
              MR_Integer transform_hlds__term_pass1__CallProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
              MR_Word transform_hlds__term_pass1__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
              MR_Word transform_hlds__term_pass1__CallPPId_25;
              MR_Word transform_hlds__term_pass1__ProcInfo_27;
              MR_Word transform_hlds__term_pass1__TerminationInfo_28;
              MR_Word transform_hlds__term_pass1__Context_29;
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83;
              MR_Word transform_hlds__term_pass1__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
              MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 4)));
              MR_Word transform_hlds__term_pass1__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 5)));
              MR_Word transform_hlds__term_pass1__V_26_26;

              {
                transform_hlds__term_pass1__CallPPId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_25, 0) = ((MR_Box) (transform_hlds__term_pass1__CallPredId_19));
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_25, 1) = ((MR_Box) (transform_hlds__term_pass1__CallProcId_20));
              }
              {
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__CallPPId_25, &transform_hlds__term_pass1__V_26_26, &transform_hlds__term_pass1__ProcInfo_27);
              }
              {
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_pass1__ProcInfo_27, &transform_hlds__term_pass1__TerminationInfo_28);
              }
              {
                transform_hlds__term_pass1__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_13);
              }
              if ((transform_hlds__term_pass1__TerminationInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
              else
                {
                  MR_Word transform_hlds__term_pass1__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__TerminationInfo_28, (MR_Integer) 0)));

                  if (((MR_tag((MR_Word) transform_hlds__term_pass1__V_113_113)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_Word transform_hlds__term_pass1__CanLoopErrorKind_31;
                      MR_Word transform_hlds__term_pass1__CanLoopError_32;

                      {
                        transform_hlds__term_pass1__CanLoopErrorKind_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopErrorKind_31, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopErrorKind_31, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_25));
                      }
                      {
                        transform_hlds__term_pass1__CanLoopError_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopError_32, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_29));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopError_32, 1) = ((MR_Box) (transform_hlds__term_pass1__CanLoopErrorKind_31));
                      }
                      {
                        mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__CanLoopError_32)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63, &transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83);
                      }
                    }
                  else
                    transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
                }
              {
                transform_hlds__term_pass1__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_pass1__Args_21, transform_hlds__term_pass1__VarTypes_9);
              }
              if (transform_hlds__term_pass1__succeeded)
                {
                  MR_Word transform_hlds__term_pass1__HigherOrderErrorKind_34;
                  MR_Word transform_hlds__term_pass1__HigherOrderError_35;

                  {
                    transform_hlds__term_pass1__HigherOrderErrorKind_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderErrorKind_34, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderErrorKind_34, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_25));
                  }
                  {
                    transform_hlds__term_pass1__HigherOrderError_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderError_35, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_29));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderError_35, 1) = ((MR_Box) (transform_hlds__term_pass1__HigherOrderErrorKind_34));
                  }
                  {
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__HigherOrderError_35)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83, transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);
                  }
                }
              else
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__term_pass1__Error_48;
                  MR_Word transform_hlds__term_pass1__Context_85;

                  {
                    transform_hlds__term_pass1__Context_85 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_13);
                  }
                  {
                    transform_hlds__term_pass1__Error_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_48, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_85));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  }
                  {
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__Error_48)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63, transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);
                  }
                }
                break;
              case (MR_Integer) 1:
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__term_pass1__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_pass1__V_77_77;
                  MR_Word transform_hlds__term_pass1__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
                  MR_Box transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64;

                  {
                    transform_hlds__term_pass1__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_77_77, transform_hlds__term_pass1__Goals_50, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64);
                  }
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__term_pass1__Goals_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_pass1__V_110_110;
                  MR_Box transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64;

                  {
                    transform_hlds__term_pass1__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_110_110, transform_hlds__term_pass1__Goals_109, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64);
                  }
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word transform_hlds__term_pass1__Cases_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
                  MR_Word transform_hlds__term_pass1__V_75_75;
                  MR_Word transform_hlds__term_pass1__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_pass1__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
                  MR_Box transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64;

                  {
                    transform_hlds__term_pass1__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[1]));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_75_75, transform_hlds__term_pass1__Cases_53, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64);
                  }
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__term_pass1__Reason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_pass1__SubGoal_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_pass1__FGT_61;
                  MR_Word transform_hlds__term_pass1__V_60_60;

                  transform_hlds__term_pass1__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_pass1__Reason_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (transform_hlds__term_pass1__succeeded)
                    {
                      transform_hlds__term_pass1__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 1)));
                      transform_hlds__term_pass1__FGT_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 2)));
                      switch (transform_hlds__term_pass1__FGT_61) {
                        default:
                          transform_hlds__term_pass1__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          transform_hlds__term_pass1__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          transform_hlds__term_pass1__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (transform_hlds__term_pass1__succeeded)
                    *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__term_pass1__Goal__tmp_copy_10 = transform_hlds__term_pass1__SubGoal_87;

                        transform_hlds__term_pass1__Goal_10 = transform_hlds__term_pass1__Goal__tmp_copy_10;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word transform_hlds__term_pass1__Cond_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_pass1__Then_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
                  MR_Word transform_hlds__term_pass1__Else_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 4)));
                  MR_Word transform_hlds__term_pass1__V_70_70;
                  MR_Word transform_hlds__term_pass1__V_71_71;
                  MR_Word transform_hlds__term_pass1__V_73_73;
                  MR_Word transform_hlds__term_pass1__Goals_86;
                  MR_Word transform_hlds__term_pass1__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
                  MR_Box transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64;

                  {
                    transform_hlds__term_pass1__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_71_71, 0) = ((MR_Box) (transform_hlds__term_pass1__Else_57));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__term_pass1__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_70_70, 0) = ((MR_Box) (transform_hlds__term_pass1__Then_56));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_70_70, 1) = ((MR_Box) (transform_hlds__term_pass1__V_71_71));
                  }
                  {
                    transform_hlds__term_pass1__Goals_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_86, 0) = ((MR_Box) (transform_hlds__term_pass1__Cond_55));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_86, 1) = ((MR_Box) (transform_hlds__term_pass1__V_70_70));
                  }
                  {
                    transform_hlds__term_pass1__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_73_73, transform_hlds__term_pass1__Goals_86, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64);
                  }
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64);
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.check_goal_non_term_calls\'/6", (MR_String) "shorthand");
                    return;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_5,
  MR_Word transform_hlds__term_pass1__PPId_6,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_13)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Word transform_hlds__term_pass1__ProcInfo_9;
    MR_Word transform_hlds__term_pass1__Goal_10;
    MR_Word transform_hlds__term_pass1__VarTypes_11;
    MR_Word transform_hlds__term_pass1__V_8_8;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_5, transform_hlds__term_pass1__PPId_6, &transform_hlds__term_pass1__V_8_8, &transform_hlds__term_pass1__ProcInfo_9);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_9, &transform_hlds__term_pass1__Goal_10);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_9, &transform_hlds__term_pass1__VarTypes_11);
    }
    {
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(transform_hlds__term_pass1__ModuleInfo_5, transform_hlds__term_pass1__PPId_6, transform_hlds__term_pass1__VarTypes_11, transform_hlds__term_pass1__Goal_10, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12, transform_hlds__term_pass1__STATE_VARIABLE_Errors_13);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;

    if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass1__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__term_pass1__OutputSupplier0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass1__OutputSuppliers0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass1__OutputSupplier_23;
            MR_Word transform_hlds__term_pass1__OutputSuppliers_24;

            {
              transform_hlds__term_pass1__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__HeadVar__2_2, ((MR_Box) (transform_hlds__term_pass1__V_27_27)));
            }
            if (transform_hlds__term_pass1__succeeded)
              transform_hlds__term_pass1__OutputSupplier_23 = (MR_Integer) 1;
            else
              transform_hlds__term_pass1__OutputSupplier_23 = transform_hlds__term_pass1__OutputSupplier0_21;
            {
              transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__V_26_26, transform_hlds__term_pass1__HeadVar__2_2, transform_hlds__term_pass1__OutputSuppliers0_22, &transform_hlds__term_pass1__OutputSuppliers_24);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_pass1__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplier_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_24));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
  MR_Word transform_hlds__term_pass1__PassInfo_8,
  MR_Word transform_hlds__term_pass1__PPId_9,
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
  MR_Word * transform_hlds__term_pass1__Result_11,
  MR_Word * transform_hlds__term_pass1__TermErrors_12)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_47_47;
    MR_Word transform_hlds__term_pass1__TypeInfo_48_48;
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_49_49;
    MR_Word transform_hlds__term_pass1__PredInfo_13;
    MR_Word transform_hlds__term_pass1__ProcInfo_14;
    MR_Word transform_hlds__term_pass1__Context_15;
    MR_Word transform_hlds__term_pass1__Args_16;
    MR_Word transform_hlds__term_pass1__ArgModes_17;
    MR_Word transform_hlds__term_pass1__VarTypes_18;
    MR_Word transform_hlds__term_pass1__Goal0_19;
    MR_Word transform_hlds__term_pass1__Goal_20;
    MR_Word transform_hlds__term_pass1__EmptyMap_21;
    MR_Word transform_hlds__term_pass1__FunctorInfo_22;
    MR_Integer transform_hlds__term_pass1__MaxErrors_23;
    MR_Integer transform_hlds__term_pass1__MaxPaths_24;
    MR_Word transform_hlds__term_pass1__Params_25;
    MR_Word transform_hlds__term_pass1__InVars_26;
    MR_Word transform_hlds__term_pass1__OutVars_27;
    MR_Word transform_hlds__term_pass1__Path0_28;
    MR_Word transform_hlds__term_pass1__PathSet0_29;
    MR_Word transform_hlds__term_pass1__Info0_30;
    MR_Word transform_hlds__term_pass1__Info_31;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PPId_9, &transform_hlds__term_pass1__PredInfo_13, &transform_hlds__term_pass1__ProcInfo_14);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass1__PredInfo_13, &transform_hlds__term_pass1__Context_15);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__Args_16);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__ArgModes_17);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__VarTypes_18);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__Goal0_19);
    }
    {
      transform_hlds__term_pass1__Goal_20 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass1__Goal0_19);
    }
    transform_hlds__term_pass1__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    transform_hlds__term_pass1__TypeInfo_48_48 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0];
    {
      mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, &transform_hlds__term_pass1__EmptyMap_21);
    }
    transform_hlds__term_pass1__FunctorInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 0)));
    transform_hlds__term_pass1__MaxErrors_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 1)));
    transform_hlds__term_pass1__MaxPaths_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 2)));
    {
      transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass1__FunctorInfo_22, transform_hlds__term_pass1__PPId_9, transform_hlds__term_pass1__Context_15, transform_hlds__term_pass1__VarTypes_18, transform_hlds__term_pass1__OutputSupplierMap0_10, transform_hlds__term_pass1__EmptyMap_21, transform_hlds__term_pass1__MaxErrors_23, transform_hlds__term_pass1__MaxPaths_24, &transform_hlds__term_pass1__Params_25);
    }
    {
      transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__ArgModes_17, transform_hlds__term_pass1__Args_16, &transform_hlds__term_pass1__InVars_26, &transform_hlds__term_pass1__OutVars_27);
    }
    {
      transform_hlds__term_pass1__Path0_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_9));
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 4) = ((MR_Box) (transform_hlds__term_pass1__OutVars_27));
    }
    transform_hlds__term_pass1__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
    {
      transform_hlds__term_pass1__PathSet0_29 = mercury__set__make_singleton_set_1_f_0(transform_hlds__term_pass1__TypeCtorInfo_49_49, ((MR_Box) (transform_hlds__term_pass1__Path0_28)));
    }
    {
      transform_hlds__term_pass1__Info0_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_30, 0) = ((MR_Box) (transform_hlds__term_pass1__PathSet0_29));
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__Params_25, transform_hlds__term_pass1__Goal_20, transform_hlds__term_pass1__Info0_30, &transform_hlds__term_pass1__Info_31);
    }
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Info_31)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_pass1__Errors_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_31, (MR_Integer) 0)));

        *transform_hlds__term_pass1__TermErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_31, (MR_Integer) 1)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__term_pass1__Result_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_41));
        }
      }
    else
      {
        MR_Word transform_hlds__term_pass1__Paths_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_31, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass1__PathList_33;
        MR_Word transform_hlds__term_pass1__AllActiveVars_34;
        MR_Word transform_hlds__term_pass1__OutputSuppliers0_35;
        MR_Word transform_hlds__term_pass1__OutputSuppliers_36;
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_37;
        MR_Word transform_hlds__term_pass1__SubsetErrors_38;
        MR_Box transform_hlds__term_pass1__conv0_OutputSuppliers0_35;

        *transform_hlds__term_pass1__TermErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_31, (MR_Integer) 1)));
        {
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_49_49, transform_hlds__term_pass1__Paths_32, &transform_hlds__term_pass1__PathList_33);
        }
        {
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass1__PathList_33, &transform_hlds__term_pass1__AllActiveVars_34);
        }
        {
          mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, transform_hlds__term_pass1__OutputSupplierMap0_10, ((MR_Box) (transform_hlds__term_pass1__PPId_9)), &transform_hlds__term_pass1__conv0_OutputSuppliers0_35);
        }
        transform_hlds__term_pass1__OutputSuppliers0_35 = ((MR_Word) transform_hlds__term_pass1__conv0_OutputSuppliers0_35);
        {
          transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__Args_16, transform_hlds__term_pass1__AllActiveVars_34, transform_hlds__term_pass1__OutputSuppliers0_35, &transform_hlds__term_pass1__OutputSuppliers_36);
        }
        {
          mercury__map__det_update_4_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, ((MR_Box) (transform_hlds__term_pass1__PPId_9)), ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_36)), transform_hlds__term_pass1__OutputSupplierMap0_10, &transform_hlds__term_pass1__OutputSupplierMap_37);
        }
        {
          transform_hlds__term_pass1__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__AllActiveVars_34, transform_hlds__term_pass1__InVars_26);
        }
        if (transform_hlds__term_pass1__succeeded)
          transform_hlds__term_pass1__SubsetErrors_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word transform_hlds__term_pass1__SubsetErrorKind_39;
            MR_Word transform_hlds__term_pass1__SubsetError_40;

            {
              transform_hlds__term_pass1__SubsetErrorKind_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 1) = ((MR_Box) (transform_hlds__term_pass1__PPId_9));
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 2) = ((MR_Box) (transform_hlds__term_pass1__AllActiveVars_34));
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 3) = ((MR_Box) (transform_hlds__term_pass1__InVars_26));
            }
            {
              transform_hlds__term_pass1__SubsetError_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetError_40, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_15));
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetError_40, 1) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrorKind_39));
            }
            {
              transform_hlds__term_pass1__SubsetErrors_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_38, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetError_40));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__term_pass1__Result_11 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PathList_33));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_37));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_38));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13;

    {
      transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13);
    }
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
  MR_Word transform_hlds__term_pass1__PassInfo_2,
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
  MR_Word transform_hlds__term_pass1__HeadVar__6_6,
  MR_Word * transform_hlds__term_pass1__Result_7,
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8,
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass1__succeeded;

        if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__term_pass1__Result_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__5_5));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__4_4));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__6_6));
            }
            *transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8;
          }
        else
          {
            MR_Word transform_hlds__term_pass1__TypeCtorInfo_48_48;
            MR_Word transform_hlds__term_pass1__PPId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass1__PPIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass1__Result1_28;
            MR_Word transform_hlds__term_pass1__ProcTermErrors_29;
            MR_Integer transform_hlds__term_pass1__MaxErrors_31;
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42;
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43;
            MR_Word transform_hlds__term_pass1__V_30_30;
            MR_Integer transform_hlds__term_pass1__V_32_32;

            {
              transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PassInfo_2, transform_hlds__term_pass1__PPId_21, transform_hlds__term_pass1__HeadVar__4_4, &transform_hlds__term_pass1__Result1_28, &transform_hlds__term_pass1__ProcTermErrors_29);
            }
            transform_hlds__term_pass1__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
            {
              transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8, transform_hlds__term_pass1__ProcTermErrors_29);
            }
            transform_hlds__term_pass1__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 0)));
            transform_hlds__term_pass1__MaxErrors_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 1)));
            transform_hlds__term_pass1__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 2)));
            {
              mercury__list__take_upto_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__MaxErrors_31, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42, &transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43);
            }
            if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result1_28)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word transform_hlds__term_pass1__OtherTermErrors_34;
                MR_Word transform_hlds__term_pass1__V_45_45;
                MR_Box transform_hlds__term_pass1__conv1_OtherTermErrors_34;

                *transform_hlds__term_pass1__Result_7 = transform_hlds__term_pass1__Result1_28;
                {
                  transform_hlds__term_pass1__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_1));
                }
                {
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_45_45, transform_hlds__term_pass1__PPIds_22, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_pass1__conv1_OtherTermErrors_34);
                }
                transform_hlds__term_pass1__OtherTermErrors_34 = ((MR_Word) transform_hlds__term_pass1__conv1_OtherTermErrors_34);
                {
                  mercury__list__append_3_p_1(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__OtherTermErrors_34, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9);
                }
              }
            else
              {
                MR_Word transform_hlds__term_pass1__Paths1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 0)));
                MR_Word transform_hlds__term_pass1__OutputSupplierMap1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 1)));
                MR_Word transform_hlds__term_pass1__SubsetErrors1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 2)));
                MR_Word transform_hlds__term_pass1__Paths_38;
                MR_Word transform_hlds__term_pass1__SubsetErrors_39;

                {
                  transform_hlds__term_pass1__Paths_38 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_pass1__HeadVar__5_5, transform_hlds__term_pass1__Paths1_35);
                }
                {
                  transform_hlds__term_pass1__SubsetErrors_39 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__HeadVar__6_6, transform_hlds__term_pass1__SubsetErrors1_37);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_pass1__HeadVar__3__tmp_copy_3 = transform_hlds__term_pass1__PPIds_22;
                  MR_Word transform_hlds__term_pass1__HeadVar__4__tmp_copy_4 = transform_hlds__term_pass1__OutputSupplierMap1_36;
                  MR_Word transform_hlds__term_pass1__HeadVar__5__tmp_copy_5 = transform_hlds__term_pass1__Paths_38;
                  MR_Word transform_hlds__term_pass1__HeadVar__6__tmp_copy_6 = transform_hlds__term_pass1__SubsetErrors_39;
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_8 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43;

                  transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_8;
                  transform_hlds__term_pass1__HeadVar__6_6 = transform_hlds__term_pass1__HeadVar__6__tmp_copy_6;
                  transform_hlds__term_pass1__HeadVar__5_5 = transform_hlds__term_pass1__HeadVar__5__tmp_copy_5;
                  transform_hlds__term_pass1__HeadVar__4_4 = transform_hlds__term_pass1__HeadVar__4__tmp_copy_4;
                  transform_hlds__term_pass1__HeadVar__3_3 = transform_hlds__term_pass1__HeadVar__3__tmp_copy_3;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
  MR_Word transform_hlds__term_pass1__PassInfo_8,
  MR_Word transform_hlds__term_pass1__SCC_9,
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
  MR_Word * transform_hlds__term_pass1__Result_11,
  MR_Word * transform_hlds__term_pass1__TermErrors_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass1__succeeded;
        MR_Word transform_hlds__term_pass1__Result0_13;
        MR_Word transform_hlds__term_pass1__TermErrors0_14;

        {
          transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PassInfo_8, transform_hlds__term_pass1__SCC_9, transform_hlds__term_pass1__OutputSupplierMap0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__Result0_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__TermErrors0_14);
        }
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result0_13)) == (MR_mktag((MR_Integer) 1))))
          {
            *transform_hlds__term_pass1__Result_11 = transform_hlds__term_pass1__Result0_13;
            *transform_hlds__term_pass1__TermErrors_12 = transform_hlds__term_pass1__TermErrors0_14;
          }
        else
          {
            MR_Word transform_hlds__term_pass1__OutputSupplierMap1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass1__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass1__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 2)));

            {
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap1_17)), ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap0_10)));
            }
            if (transform_hlds__term_pass1__succeeded)
              {
                *transform_hlds__term_pass1__Result_11 = transform_hlds__term_pass1__Result0_13;
                *transform_hlds__term_pass1__TermErrors_12 = transform_hlds__term_pass1__TermErrors0_14;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_10 = transform_hlds__term_pass1__OutputSupplierMap1_17;

                  transform_hlds__term_pass1__OutputSupplierMap0_10 = transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_10;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19;

    {
      transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__147__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19);
    }
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;

    if ((transform_hlds__term_pass1__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], transform_hlds__term_pass1__HeadVar__3_3);
        }
      }
    else
      {
        MR_Word transform_hlds__term_pass1__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass1__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10;
        MR_Word transform_hlds__term_pass1__ProcInfo_12;
        MR_Word transform_hlds__term_pass1__HeadVars_13;
        MR_Word transform_hlds__term_pass1__BoolList_17;
        MR_Word transform_hlds__term_pass1__V_11_11;

        {
          transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PPIds_8, &transform_hlds__term_pass1__OutputSupplierMap0_10);
        }
        {
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PPId_7, &transform_hlds__term_pass1__V_11_11, &transform_hlds__term_pass1__ProcInfo_12);
        }
        {
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_12, &transform_hlds__term_pass1__HeadVars_13);
        }
        {
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[5], transform_hlds__term_pass1__HeadVars_13, &transform_hlds__term_pass1__BoolList_17);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass1__PPId_7)), ((MR_Box) (transform_hlds__term_pass1__BoolList_17)), transform_hlds__term_pass1__OutputSupplierMap0_10, transform_hlds__term_pass1__HeadVar__3_3);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv1_HeadVar__4_4;

    {
      transform_hlds__term_pass1__lookup_coeff_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv1_HeadVar__4_4);
    }
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1(
  MR_Box transform_hlds__term_pass1__closure_arg,
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
    MR_Word transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20;

    {
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__427__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20);
    }
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20));
  }
}

void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(
  MR_Word transform_hlds__term_pass1__ModuleInfo_6,
  MR_Word transform_hlds__term_pass1__PassInfo_7,
  MR_Word transform_hlds__term_pass1__SCC_8,
  MR_Word * transform_hlds__term_pass1__ArgSize_9,
  MR_Word * transform_hlds__term_pass1__TermErrors_10)
{
  {
    MR_bool transform_hlds__term_pass1__succeeded;
    MR_Word transform_hlds__term_pass1__InitOutputSupplierMap_11;
    MR_Word transform_hlds__term_pass1__Result_12;

    {
      transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__InitOutputSupplierMap_11);
    }
    {
      transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__PassInfo_7, transform_hlds__term_pass1__SCC_8, transform_hlds__term_pass1__InitOutputSupplierMap_11, &transform_hlds__term_pass1__Result_12, transform_hlds__term_pass1__TermErrors_10);
    }
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_pass1__Errors_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Result_12, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__term_pass1__ArgSize_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_24));
        }
      }
    else
      {
        MR_Word transform_hlds__term_pass1__Paths_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass1__SubsetErrors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 2)));

        if ((transform_hlds__term_pass1__SubsetErrors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((transform_hlds__term_pass1__Paths_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word transform_hlds__term_pass1__Context_18;
              MR_Word transform_hlds__term_pass1__ArgSizeError_19;
              MR_Word transform_hlds__term_pass1__V_29_29;

              {
                transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_18);
              }
              {
                transform_hlds__term_pass1__ArgSizeError_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_19, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_18));
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              }
              {
                transform_hlds__term_pass1__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_29_29, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_19));
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__term_pass1__ArgSize_9 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_29_29));
              }
            }
          else
            {
              MR_Word transform_hlds__term_pass1__Varset_40;
              MR_Word transform_hlds__term_pass1__Equations_41;
              MR_Word transform_hlds__term_pass1__Objective_42;
              MR_Word transform_hlds__term_pass1__PPVars_43;
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_25_76;
              MR_Word transform_hlds__term_pass1__TypeInfo_26_77;
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_27_78;
              MR_Word transform_hlds__term_pass1__TypeInfo_28_79;
              MR_Word transform_hlds__term_pass1__Varset0_62;
              MR_Word transform_hlds__term_pass1__PPVars0_63;
              MR_Word transform_hlds__term_pass1__EqnSet0_64;
              MR_Word transform_hlds__term_pass1__EqnSet_65;
              MR_Word transform_hlds__term_pass1__Vars_66;
              MR_Word transform_hlds__term_pass1__Convert_67;

              {
                mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Varset0_62);
              }
              transform_hlds__term_pass1__TypeCtorInfo_25_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
              transform_hlds__term_pass1__TypeInfo_26_77 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
              {
                mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_76, transform_hlds__term_pass1__TypeInfo_26_77, &transform_hlds__term_pass1__PPVars0_63);
              }
              transform_hlds__term_pass1__TypeCtorInfo_27_78 = (MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0;
              {
                mercury__set__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_78, &transform_hlds__term_pass1__EqnSet0_64);
              }
              {
                transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1__convert_equations_2_7_p_0(transform_hlds__term_pass1__Paths_13, transform_hlds__term_pass1__PPVars0_63, &transform_hlds__term_pass1__PPVars_43, transform_hlds__term_pass1__Varset0_62, &transform_hlds__term_pass1__Varset_40, transform_hlds__term_pass1__EqnSet0_64, &transform_hlds__term_pass1__EqnSet_65);
              }
              if (transform_hlds__term_pass1__succeeded)
                {
                  {
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_78, transform_hlds__term_pass1__EqnSet_65, &transform_hlds__term_pass1__Equations_41);
                  }
                  {
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_76, transform_hlds__term_pass1__TypeInfo_26_77, transform_hlds__term_pass1__PPVars_43, &transform_hlds__term_pass1__Vars_66);
                  }
                  transform_hlds__term_pass1__Convert_67 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[4];
                  transform_hlds__term_pass1__TypeInfo_28_79 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1];
                  {
                    mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeInfo_26_77, transform_hlds__term_pass1__TypeInfo_28_79, transform_hlds__term_pass1__Convert_67, transform_hlds__term_pass1__Vars_66, &transform_hlds__term_pass1__Objective_42);
                  }
                  transform_hlds__term_pass1__succeeded = MR_TRUE;
                }
              if (transform_hlds__term_pass1__succeeded)
                {
                  MR_Word transform_hlds__term_pass1__TypeCtorInfo_19_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                  MR_Word transform_hlds__term_pass1__TypeInfo_20_53 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
                  MR_Word transform_hlds__term_pass1__AllVars0_44;
                  MR_Word transform_hlds__term_pass1__AllVars_45;
                  MR_Word transform_hlds__term_pass1__Soln_46;

                  {
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_19_52, transform_hlds__term_pass1__TypeInfo_20_53, transform_hlds__term_pass1__PPVars_43, &transform_hlds__term_pass1__AllVars0_44);
                  }
                  {
                    mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__term_pass1__TypeInfo_20_53, transform_hlds__term_pass1__AllVars0_44, &transform_hlds__term_pass1__AllVars_45);
                  }
                  {
                    libs__lp__lp_solve_6_p_0(transform_hlds__term_pass1__Equations_41, (MR_Integer) 1, transform_hlds__term_pass1__Objective_42, transform_hlds__term_pass1__Varset_40, transform_hlds__term_pass1__AllVars_45, &transform_hlds__term_pass1__Soln_46);
                  }
                  if ((transform_hlds__term_pass1__Soln_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word transform_hlds__term_pass1__V_26_26;
                      MR_Word transform_hlds__term_pass1__Context_31;
                      MR_Word transform_hlds__term_pass1__ArgSizeError_32;

                      {
                        transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_31);
                      }
                      {
                        transform_hlds__term_pass1__ArgSizeError_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_32, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_31));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                      }
                      {
                        transform_hlds__term_pass1__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_26_26, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_32));
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *transform_hlds__term_pass1__ArgSize_9 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_26_26));
                      }
                    }
                  else
                    {
                      MR_Word transform_hlds__term_pass1__Solution_23;
                      MR_Word transform_hlds__term_pass1__SolnVal_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_46, (MR_Integer) 1)));
                      MR_Word transform_hlds__term_pass1__V_51_51;
                      MR_Float transform_hlds__term_pass1___ObjVal_47 = MR_unbox_float((MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_46, (MR_Integer) 0)));

                      {
                        transform_hlds__term_pass1__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[0]));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 3) = ((MR_Box) (transform_hlds__term_pass1__PPVars_43));
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 4) = ((MR_Box) (transform_hlds__term_pass1__SolnVal_48));
                      }
                      {
                        mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_19_52, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[0], transform_hlds__term_pass1__V_51_51, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Solution_23);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *transform_hlds__term_pass1__ArgSize_9 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Solution_23));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_14));
                      }
                    }
                }
              else
                {
                  MR_Word transform_hlds__term_pass1__V_83_83;
                  MR_Word transform_hlds__term_pass1__Context_85;
                  MR_Word transform_hlds__term_pass1__ArgSizeError_86;

                  {
                    transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_85);
                  }
                  {
                    transform_hlds__term_pass1__ArgSizeError_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_86, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_85));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                  }
                  {
                    transform_hlds__term_pass1__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_86));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__term_pass1__ArgSize_9 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_83_83));
                  }
                }
            }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__term_pass1__ArgSize_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_15));
          }
      }
  }
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

/* :- end_module transform_hlds.term_pass1. */
