/*
** Automatically generated from `term_pass2.m'
** by the Mercury compiler,
** version rotd-2020-06-13
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


// :- module transform_hlds.term_pass2.
// :- implementation.

/*
INIT mercury__transform_hlds__term_pass2__init
ENDINIT
*/

#include "transform_hlds.term_pass2.mih"


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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
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
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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



struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s {
  MR_bool transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_14;
  jmp_buf transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_16;
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Var_21;
  MR_Box transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_16;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0[1];

static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0;

static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[2];

static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0;

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1];

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0[2];

static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0[2];

static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__391__1_2_p_0(
  MR_Word CanLoop_39,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__408__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word CanLoop_59);

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__283__1_2_p_0(
  MR_Word HeadVar__1_22,
  MR_Word * HeadVar__2_23);

static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_51_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * HeadVar__2_23);

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__252__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Word * HeadVar__2_20);

static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_50_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * HeadVar__2_20);

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__141__1_3_p_0(
  MR_Word InArgs_15,
  MR_Word LambdaHeadVar__1_21,
  MR_Word * LambdaHeadVar__2_22);

static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PassInfo_8,
  MR_Word TrialPPId_9,
  MR_Word RestSCC_10,
  MR_Integer ArgNum0_11,
  MR_Word * Terminates_12);

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word CallWeights_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LookforPPId_2,
  MR_Word Context_3,
  MR_Integer WeightSoFar_4,
  MR_Word VisitedCalls_5,
  MR_Word CallWeights_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PassInfo_8,
  MR_Word FixDir_9,
  MR_Word SCC_10,
  MR_Word RecSupplierMap0_11,
  MR_Word * Result_12);

static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PassInfo_2,
  MR_Word FixDir_3,
  MR_Word HeadVar__4_4,
  MR_Word RecSupplierMap_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CallInfo_0_3,
  MR_Word * STATE_VARIABLE_CallInfo_4);

static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ActiveVars_2,
  MR_Word FixDir_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_RecBag_0_6,
  MR_Word * STATE_VARIABLE_RecBag_7);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RecSupplierMap_0_3,
  MR_Word * STATE_VARIABLE_RecSupplierMap_4);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_8,
  MR_Word * BoolList_9);

static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word BestSofarPPId_3,
  MR_Integer BestSofarArity_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_4[3][5];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_5[1][1];




static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_1[3][2] = {
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
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_dst_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0 = {
  (MR_String) "call_weight_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_info",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0
};

static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0 = {
  (MR_String) "up",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1 = {
  (MR_String) "down",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0
};

static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "fixpoint_dir",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0)
};

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0 = {
  (MR_String) "term_pass2_ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
};

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1 = {
  (MR_String) "term_pass2_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1
};

static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_term_pass2_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "term_pass2_result",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0
};

static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__391__1_2_p_0(
  MR_Word CanLoop_39,
  MR_Word HeadVar__2_58)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[2]), ((MR_Box) (CanLoop_39)), ((MR_Box) (HeadVar__2_58)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__408__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word CanLoop_59)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[2]), ((MR_Box) (CanLoop_59)), ((MR_Box) (HeadVar__1_54)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__283__1_2_p_0(
  MR_Word HeadVar__1_22,
  MR_Word * HeadVar__2_23)
{
  transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_51_95_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__2_23);
}

static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_51_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * HeadVar__2_23)
{
  *HeadVar__2_23 = (MR_Integer) 0;
}

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__252__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Word * HeadVar__2_20)
{
  transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_50_95_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__2_20);
}

static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_50_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * HeadVar__2_20)
{
  *HeadVar__2_20 = (MR_Integer) 0;
}

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__141__1_3_p_0(
  MR_Word InArgs_15,
  MR_Word LambdaHeadVar__1_21,
  MR_Word * LambdaHeadVar__2_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bag__contains_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), InArgs_15, ((MR_Box) (LambdaHeadVar__1_21)));
    if (succeeded)
      *LambdaHeadVar__2_22 = (MR_Integer) 1;
    else
      *LambdaHeadVar__2_22 = (MR_Integer) 0;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_16)));
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

        transform_hlds__term_pass2____Compare____call_weight_info_0_0(&SubResult1_6, Var_24, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_11_11 = (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
      }
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_16 = ((MR_Word) ((env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_16));
    transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_16, (MR_Integer) 0))));

      (env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_16, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Var_21 == (MR_Word) ((MR_Unsigned) 4U));
      if ((env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
        transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), &(env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_16, (env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_14, transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PassInfo_7,
  MR_Word SCC_8,
  MR_Integer SingleArgs_9,
  MR_Word * Termination_10)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s env;

    {
      MR_Word SCCProcs_11;
      MR_Word InitRecSuppliers_12;
      MR_Word Termination0_13;
      MR_Word Result_31;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_8, &SCCProcs_11);
      transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(SCCProcs_11, ModuleInfo_6, &InitRecSuppliers_12);
      transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(ModuleInfo_6, PassInfo_7, (MR_Integer) 1, SCCProcs_11, InitRecSuppliers_12, &Result_31);
      if (((MR_tag((MR_Word) Result_31)) == (MR_Integer) 1))
      {
        MR_Word Errors_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_31, (MR_Integer) 0))));

        {
          Termination0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Termination0_13, 0) = ((MR_Box) (Errors_48));
        }
      }
      else
      {
        MR_Word CallInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_31, (MR_Integer) 0))));
        MR_Word InfCalls_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallInfo_32, (MR_Integer) 0))));
        MR_Word CallWeights_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallInfo_32, (MR_Integer) 1))));
        MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_31, (MR_Integer) 1))));

        if ((InfCalls_34 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Cycles_42;
          MR_Word PPIds_58;
          MR_Word Var_43;
          MR_Word Var_44;

          mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), CallWeights_35, &PPIds_58);
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(ModuleInfo_6, CallWeights_35, PPIds_58, &Cycles_42);
          (env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = (Cycles_42 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
          {
            Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cycles_42, (MR_Integer) 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cycles_42, (MR_Integer) 1))));
            {
              MR_Word ReportedCycles_47;
              MR_Integer MaxErrors_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_7, (MR_Integer) 1))));
              MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PassInfo_7, (MR_Integer) 0))));
              MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_7, (MR_Integer) 2))));

              mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_50, Cycles_42, &ReportedCycles_47);
              {
                Termination0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Termination0_13, 0) = ((MR_Box) (ReportedCycles_47));
              }
            }
          }
          else
            Termination0_13 = (MR_Word) (&transform_hlds__term_pass2_scalar_common_5[0]);
        }
        else
        {
          MR_Integer MaxErrors_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_7, (MR_Integer) 1))));
          MR_Word ReportedInfCalls_41;
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PassInfo_7, (MR_Integer) 0))));
          MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_7, (MR_Integer) 2))));

          mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_39, InfCalls_34, &ReportedInfCalls_41);
          {
            Termination0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Termination0_13, 0) = ((MR_Box) (ReportedInfCalls_41));
          }
        }
      }
      if (((MR_tag((MR_Word) Termination0_13)) == (MR_Integer) 1))
      {
        MR_Integer ProcCount_15;

        (env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Termination0_13, (MR_Integer) 0))));
        mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCCProcs_11, &ProcCount_15);
        (env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = (ProcCount_15 <= SingleArgs_9);
        if ((env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
        {
          transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(&env);
          (env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = !((env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded);
        }
        if ((env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
        {
          MR_Word SingleArgTerminates_18;

          if ((SCCProcs_11 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_single_arg\'/4", (MR_String) "empty SCC");
              return;
            }
          else
          {
            MR_Word FirstPPId_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SCCProcs_11, (MR_Integer) 0))));
            MR_Word LaterPPIds_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SCCProcs_11, (MR_Integer) 1))));
            MR_Integer FirstArity_67;
            MR_Word TrialPPId_68;
            MR_Word RestSCC_69;
            MR_Word ProcInfo_77;
            MR_Word HeadVars_78;
            MR_Word Var_76;

            hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_6, FirstPPId_65, &Var_76, &ProcInfo_77);
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_77, &HeadVars_78);
            mercury__list__length_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), HeadVars_78, &FirstArity_67);
            transform_hlds__term_pass2__find_min_arity_proc_6_p_0(ModuleInfo_6, LaterPPIds_66, FirstPPId_65, FirstArity_67, &TrialPPId_68, &RestSCC_69);
            transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(ModuleInfo_6, PassInfo_7, TrialPPId_68, RestSCC_69, (MR_Integer) 1, &SingleArgTerminates_18);
          }
          switch (SingleArgTerminates_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Termination_10 = Termination0_13;
              break;
            case (MR_Integer) 1:
              *Termination_10 = (MR_Word) (&transform_hlds__term_pass2_scalar_common_5[0]);
              break;
          }
        }
        else
          *Termination_10 = Termination0_13;
      }
      else
        *Termination_10 = Termination0_13;
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PassInfo_8,
  MR_Word TrialPPId_9,
  MR_Word RestSCC_10,
  MR_Integer ArgNum0_11,
  MR_Word * Terminates_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word InitRecSuppliers_13;
    MR_Word TypeCtorInfo_16_31;
    MR_Word TypeInfo_17_32;
    MR_Word ProcInfo_27;
    MR_Word ArgModes_28;
    MR_Word TrialPPIdRecSuppliers_29;
    MR_Word RecSupplierMap0_30;
    MR_Word Var_26;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, TrialPPId_9, &Var_26, &ProcInfo_27);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_27, &ArgModes_28);
    succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(ModuleInfo_7, ArgModes_28, ArgNum0_11, &TrialPPIdRecSuppliers_29);
    if (succeeded)
    {
      TypeCtorInfo_16_31 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
      TypeInfo_17_32 = (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[0]);
      RecSupplierMap0_30 = mercury__map__singleton_2_f_0(TypeCtorInfo_16_31, TypeInfo_17_32, ((MR_Box) (TrialPPId_9)), ((MR_Box) (TrialPPIdRecSuppliers_29)));
      transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(ModuleInfo_7, RestSCC_10, RecSupplierMap0_30, &InitRecSuppliers_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_18;
      MR_Word Result_39;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (TrialPPId_9));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (RestSCC_10));
      }
      transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(ModuleInfo_7, PassInfo_8, (MR_Integer) 0, Var_18, InitRecSuppliers_13, &Result_39);
      if (((MR_tag((MR_Word) Result_39)) == (MR_Integer) 1))
      {
        MR_Integer ArgNum1_16 = (MR_Integer) ((MR_Unsigned) ArgNum0_11 + (MR_Unsigned) 1);
        MR_Integer next_value_of_ArgNum0_11 = ArgNum1_16;

        // direct tailcall eliminated
        ;
        ArgNum0_11 = next_value_of_ArgNum0_11;
        continue;
      }
      else
      {
        MR_Word CallInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_39, (MR_Integer) 0))));
        MR_Word InfCalls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallInfo_40, (MR_Integer) 0))));
        MR_Word CallWeights_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallInfo_40, (MR_Integer) 1))));

        if ((InfCalls_42 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Cycles_50;
          MR_Word PPIds_66;

          mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), CallWeights_43, &PPIds_66);
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(ModuleInfo_7, CallWeights_43, PPIds_66, &Cycles_50);
          succeeded = (Cycles_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Integer MaxErrors_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_8, (MR_Integer) 1))));
            MR_Integer ArgNum1_69;
            MR_Word ReportedCycles_55;
            MR_Integer next_value_of_ArgNum0_11;

            mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_58, Cycles_50, &ReportedCycles_55);
            ArgNum1_69 = (MR_Integer) ((MR_Unsigned) ArgNum0_11 + (MR_Unsigned) 1);
            // direct tailcall eliminated
            ;
            next_value_of_ArgNum0_11 = ArgNum1_69;
            ArgNum0_11 = next_value_of_ArgNum0_11;
            continue;
          }
          else
            *Terminates_12 = (MR_Integer) 1;
        }
        else
        {
          MR_Integer MaxErrors_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_8, (MR_Integer) 1))));
          MR_Integer ArgNum1_77;
          MR_Word ReportedInfCalls_49;
          MR_Integer next_value_of_ArgNum0_11;

          mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_47, InfCalls_42, &ReportedInfCalls_49);
          ArgNum1_77 = (MR_Integer) ((MR_Unsigned) ArgNum0_11 + (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_ArgNum0_11 = ArgNum1_77;
          ArgNum0_11 = next_value_of_ArgNum0_11;
          continue;
        }
      }
    }
    else
      *Terminates_12 = (MR_Integer) 0;
    break;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word CallWeights_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PPId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word PPIds_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Cycles1_12;
    MR_Word Cycles2_13;
    MR_Word NeighboursMap_19;
    MR_Word NeighboursList_20;
    MR_Word PredId_21;
    MR_Word PredInfo_23;
    MR_Word Context_24;
    MR_Box conv0_NeighboursMap_19;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), CallWeights_2, ((MR_Box) (PPId_9)), &conv0_NeighboursMap_19);
    NeighboursMap_19 = ((MR_Word) (conv0_NeighboursMap_19));
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[0]), NeighboursMap_19, &NeighboursList_20);
    PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_9, (MR_Integer) 0))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_21, &PredInfo_23);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_23, &Context_24);
    transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(NeighboursList_20, PPId_9, Context_24, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), CallWeights_2, &Cycles1_12);
    transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(ModuleInfo_1, CallWeights_2, PPIds_10, &Cycles2_13);
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), Cycles1_12, Cycles2_13);
  }
}

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LookforPPId_2,
  MR_Word Context_3,
  MR_Integer WeightSoFar_4,
  MR_Word VisitedCalls_5,
  MR_Word CallWeights_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Neighbour_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Neighbours_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Cycles1_21;
      MR_Word Cycles2_22;
      MR_Word CurPPId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Neighbour_13, (MR_Integer) 0))));
      MR_Word Context_31;
      MR_Integer EdgeWeight_32;
      MR_Integer WeightSoFar1_33;
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Neighbour_13, (MR_Integer) 1))));

      Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
      EdgeWeight_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));
      WeightSoFar1_33 = (MR_Integer) ((MR_Unsigned) WeightSoFar_4 + (MR_Unsigned) EdgeWeight_32);
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CurPPId_30, LookforPPId_2);
      if (succeeded)
      {
        succeeded = (WeightSoFar1_33 >= (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word FinalVisitedCalls_34;
          MR_Word RevFinalVisitedCalls_35;
          MR_Word CycleError_36;
          MR_Word CycleErrorContext_37;
          MR_Word Var_44;

          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (CurPPId_30));
            MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (Context_31));
          }
          {
            FinalVisitedCalls_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FinalVisitedCalls_34, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), FinalVisitedCalls_34, 1) = ((MR_Box) (VisitedCalls_5));
          }
          mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_2[2]), FinalVisitedCalls_34, &RevFinalVisitedCalls_35);
          {
            CycleError_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CycleError_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), CycleError_36, 1) = ((MR_Box) (LookforPPId_2));
            MR_hl_field(MR_mktag(3), CycleError_36, 2) = ((MR_Box) (RevFinalVisitedCalls_35));
          }
          {
            CycleErrorContext_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CycleErrorContext_37, 0) = ((MR_Box) (Context_3));
            MR_hl_field(MR_mktag(0), CycleErrorContext_37, 1) = ((MR_Box) (CycleError_36));
          }
          {
            Cycles1_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Cycles1_21, 0) = ((MR_Box) (CycleErrorContext_37));
            MR_hl_field(MR_mktag(1), Cycles1_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
          Cycles1_21 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word VisitedPPIds_38;

        mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), VisitedCalls_5, &VisitedPPIds_38);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CurPPId_30)), VisitedPPIds_38);
        if (succeeded)
          Cycles1_21 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word NewVisitedCalls_39;
          MR_Word NeighboursMap_40;
          MR_Word NeighboursList_41;
          MR_Word Var_46;
          MR_Box conv0_NeighboursMap_40;

          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (CurPPId_30));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (Context_31));
          }
          {
            NewVisitedCalls_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NewVisitedCalls_39, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), NewVisitedCalls_39, 1) = ((MR_Box) (VisitedCalls_5));
          }
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), CallWeights_6, ((MR_Box) (CurPPId_30)), &conv0_NeighboursMap_40);
          NeighboursMap_40 = ((MR_Word) (conv0_NeighboursMap_40));
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[0]), NeighboursMap_40, &NeighboursList_41);
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(NeighboursList_41, LookforPPId_2, Context_3, WeightSoFar1_33, NewVisitedCalls_39, CallWeights_6, &Cycles1_21);
        }
      }
      transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(Neighbours_14, LookforPPId_2, Context_3, WeightSoFar_4, VisitedCalls_5, CallWeights_6, &Cycles2_22);
      mercury__list__append_3_p_1((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), Cycles1_21, Cycles2_22, HeadVar__7_7);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PassInfo_8,
  MR_Word FixDir_9,
  MR_Word SCC_10,
  MR_Word RecSupplierMap0_11,
  MR_Word * Result_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word NewRecSupplierMap0_13;
    MR_Word CallWeightGraph0_14;
    MR_Word CallInfo0_15;
    MR_Word Result1_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[0]), &NewRecSupplierMap0_13);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), &CallWeightGraph0_14);
    {
      CallInfo0_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallInfo0_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), CallInfo0_15, 1) = ((MR_Box) (CallWeightGraph0_14));
    }
    transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(ModuleInfo_7, PassInfo_8, FixDir_9, SCC_10, RecSupplierMap0_11, NewRecSupplierMap0_13, CallInfo0_15, &Result1_16);
    if (((MR_tag((MR_Word) Result1_16)) == (MR_Integer) 1))
      *Result_12 = Result1_16;
    else
    {
      MR_Word RecSupplierMap1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result1_16, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_2[4]), ((MR_Box) (RecSupplierMap1_18)), ((MR_Box) (RecSupplierMap0_11)));
      if (succeeded)
        *Result_12 = Result1_16;
      else
      {
        MR_Word next_value_of_RecSupplierMap0_11 = RecSupplierMap1_18;

        // direct tailcall eliminated
        ;
        RecSupplierMap0_11 = next_value_of_RecSupplierMap0_11;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__391__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__408__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PassInfo_2,
  MR_Word FixDir_3,
  MR_Word HeadVar__4_4,
  MR_Word RecSupplierMap_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadVar__7_7));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (HeadVar__6_6));
      }
    else
    {
      MR_Word PPId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word PPIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word PredInfo_24;
      MR_Word ProcInfo_25;
      MR_Word Context_26;
      MR_Word Goal0_27;
      MR_Word Goal_28;
      MR_Word VarTypes_29;
      MR_Word EmptyMap_30;
      MR_Word FunctorInfo_31;
      MR_Integer MaxErrors_32;
      MR_Integer MaxPaths_33;
      MR_Word Params_34;
      MR_Word PathSet0_35;
      MR_Word Info0_36;
      MR_Word Info_37;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_1, PPId_18, &PredInfo_24, &ProcInfo_25);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_24, &Context_26);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_25, &Goal0_27);
      Goal_28 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(Goal0_27);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_25, &VarTypes_29);
      mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[0]), &EmptyMap_30);
      FunctorInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PassInfo_2, (MR_Integer) 0))));
      MaxErrors_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_2, (MR_Integer) 1))));
      MaxPaths_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PassInfo_2, (MR_Integer) 2))));
      transform_hlds__term_traversal__init_term_traversal_params_9_p_0(FunctorInfo_31, PPId_18, Context_26, VarTypes_29, EmptyMap_30, RecSupplierMap_5, MaxErrors_32, MaxPaths_33, &Params_34);
      mercury__set__init_1_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), &PathSet0_35);
      {
        Info0_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Info0_36, 0) = ((MR_Box) (PathSet0_35));
        MR_hl_field(MR_mktag(0), Info0_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_1, Params_34, Goal_28, Info0_36, &Info_37);
      if (((MR_tag((MR_Word) Info_37)) == (MR_Integer) 1))
      {
        MR_Word Errors_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Info_37, (MR_Integer) 0))));
        MR_Word Var_51;
        MR_Word CanLoop_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Info_37, (MR_Integer) 1))));

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (CanLoop_59));
        }
        mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/8", (MR_String) "can_loop detected in pass2 but not pass1");
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Errors_49));
        }
      }
      else
      {
        MR_Word Paths_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_37, (MR_Integer) 0))));
        MR_Word CanLoop_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_37, (MR_Integer) 1))));
        MR_Word PathList_40;
        MR_Word ActiveVars_41;
        MR_Word RecSuppliers0_42;
        MR_Word Args_43;
        MR_Word EmptyBag_44;
        MR_Word RecSuppliers_45;
        MR_Word RecSuppliers0Bag_46;
        MR_Word NewRecSupplierMap1_47;
        MR_Word CallInfo1_48;
        MR_Word Var_55;
        MR_Box conv0_RecSuppliers0_42;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_HeadVar__7_7;

        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2));
          MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (CanLoop_39));
          MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/8", (MR_String) "can_loop detected in pass2 but not pass1");
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), Paths_38, &PathList_40);
        transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(PathList_40, &ActiveVars_41);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[0]), RecSupplierMap_5, ((MR_Box) (PPId_18)), &conv0_RecSuppliers0_42);
        RecSuppliers0_42 = ((MR_Word) (conv0_RecSuppliers0_42));
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_25, &Args_43);
        mercury__bag__init_1_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), &EmptyBag_44);
        transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(Args_43, ActiveVars_41, FixDir_3, RecSuppliers0_42, &RecSuppliers_45, EmptyBag_44, &RecSuppliers0Bag_46);
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[0]), ((MR_Box) (PPId_18)), ((MR_Box) (RecSuppliers_45)), HeadVar__6_6, &NewRecSupplierMap1_47);
        transform_hlds__term_pass2__add_call_arcs_4_p_0(PathList_40, RecSuppliers0Bag_46, HeadVar__7_7, &CallInfo1_48);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = PPIds_19;
        next_value_of_HeadVar__6_6 = NewRecSupplierMap1_47;
        next_value_of_HeadVar__7_7 = CallInfo1_48;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CallInfo_0_3,
  MR_Word * STATE_VARIABLE_CallInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CallInfo_4 = STATE_VARIABLE_CallInfo_0_3;
    else
    {
      MR_Word Path_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Paths_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PPId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_9, (MR_Integer) 0))));
      MR_Word CallSite_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_9, (MR_Integer) 1))));
      MR_Integer GammaConst_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Path_9, (MR_Integer) 2))));
      MR_Word GammaVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_9, (MR_Integer) 3))));
      MR_Word ActiveVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Path_9, (MR_Integer) 4))));
      MR_Word CallPPId_20;
      MR_Word Context_21;
      MR_Word InfCalls0_24;
      MR_Word CallWeights0_25;
      MR_Word STATE_VARIABLE_CallInfo_44_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CallInfo_0_3;

      if ((CallSite_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "no call site in path in stage 2");
          return;
        }
      else
      {
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallSite_14, (MR_Integer) 0))));

        CallPPId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
        Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
      }
      if (!((GammaVars_16 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "gamma variables in path in stage 2");
          return;
        }
      InfCalls0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 0))));
      CallWeights0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 1))));
      succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), ActiveVars_17, HeadVar__2_2);
      if (succeeded)
      {
        MR_Word CallWeights1_32;
        MR_Word NeighbourMap0_26;
        MR_Box conv0_NeighbourMap0_26;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), CallWeights0_25, ((MR_Box) (PPId_13)), &conv0_NeighbourMap0_26);
        if (succeeded)
        {
          NeighbourMap0_26 = ((MR_Word) (conv0_NeighbourMap0_26));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word NeighbourMap_31;
          MR_Word OldEdgeInfo_27;
          MR_Box conv1_OldEdgeInfo_27;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[0]), NeighbourMap0_26, ((MR_Box) (CallPPId_20)), &conv1_OldEdgeInfo_27);
          if (succeeded)
          {
            OldEdgeInfo_27 = ((MR_Word) (conv1_OldEdgeInfo_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Integer OldWeight_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldEdgeInfo_27, (MR_Integer) 1))));
            MR_Word EdgeInfo_30;

            succeeded = (OldWeight_29 >= GammaConst_15);
            if (succeeded)
              EdgeInfo_30 = OldEdgeInfo_27;
            else
              {
                EdgeInfo_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), EdgeInfo_30, 0) = ((MR_Box) (Context_21));
                MR_hl_field(MR_mktag(0), EdgeInfo_30, 1) = ((MR_Box) (GammaConst_15));
              }
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[0]), ((MR_Box) (CallPPId_20)), ((MR_Box) (EdgeInfo_30)), NeighbourMap0_26, &NeighbourMap_31);
          }
          else
          {
            MR_Word Var_42;

            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Context_21));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (GammaConst_15));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[0]), ((MR_Box) (CallPPId_20)), ((MR_Box) (Var_42)), NeighbourMap0_26, &NeighbourMap_31);
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), ((MR_Box) (PPId_13)), ((MR_Box) (NeighbourMap_31)), CallWeights0_25, &CallWeights1_32);
        }
        else
        {
          MR_Word Var_43;
          MR_Word NeighbourMap_48;

          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Context_21));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (GammaConst_15));
          }
          NeighbourMap_48 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[0]), ((MR_Box) (CallPPId_20)), ((MR_Box) (Var_43)));
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[1]), ((MR_Box) (PPId_13)), ((MR_Box) (NeighbourMap_48)), CallWeights0_25, &CallWeights1_32);
        }
        {
          STATE_VARIABLE_CallInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallInfo_44_44, 0) = ((MR_Box) (InfCalls0_24));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallInfo_44_44, 1) = ((MR_Box) (CallWeights1_32));
        }
      }
      else
      {
        MR_Word InfCall_33;
        MR_Word InfCalls1_34;
        MR_Word Var_45;

        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (PPId_13));
          MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (CallPPId_20));
        }
        {
          InfCall_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), InfCall_33, 0) = ((MR_Box) (Context_21));
          MR_hl_field(MR_mktag(0), InfCall_33, 1) = ((MR_Box) (Var_45));
        }
        {
          InfCalls1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), InfCalls1_34, 0) = ((MR_Box) (InfCall_33));
          MR_hl_field(MR_mktag(1), InfCalls1_34, 1) = ((MR_Box) (InfCalls0_24));
        }
        {
          STATE_VARIABLE_CallInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallInfo_44_44, 0) = ((MR_Box) (InfCalls1_34));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CallInfo_44_44, 1) = ((MR_Box) (CallWeights0_25));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Paths_10;
      next_value_of_STATE_VARIABLE_CallInfo_0_3 = STATE_VARIABLE_CallInfo_44_44;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CallInfo_0_3 = next_value_of_STATE_VARIABLE_CallInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ActiveVars_2,
  MR_Word FixDir_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_RecBag_0_6,
  MR_Word * STATE_VARIABLE_RecBag_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecBag_7 = STATE_VARIABLE_RecBag_0_6;
      }
      else
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
          return;
        }
      }
    else
    {
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
          return;
        }
      }
      else
      {
        MR_Word RecInputSupplier0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word RecInputSuppliers0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word RecInputSupplier_35;
        MR_Word RecInputSuppliers_36;
        MR_Word STATE_VARIABLE_RecBag_40_40;

        switch (RecInputSupplier0_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_RecBag_40_40 = STATE_VARIABLE_RecBag_0_6;
            break;
          case (MR_Integer) 1:
            mercury__bag__insert_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), ((MR_Box) (Var_46)), STATE_VARIABLE_RecBag_0_6, &STATE_VARIABLE_RecBag_40_40);
            break;
        }
        switch (FixDir_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              succeeded = mercury__bag__contains_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), ActiveVars_2, ((MR_Box) (Var_46)));
              if (succeeded)
                RecInputSupplier_35 = RecInputSupplier0_33;
              else
                RecInputSupplier_35 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 0:
            {
              succeeded = mercury__bag__contains_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), ActiveVars_2, ((MR_Box) (Var_46)));
              if (succeeded)
                RecInputSupplier_35 = (MR_Integer) 1;
              else
                RecInputSupplier_35 = RecInputSupplier0_33;
            }
            break;
        }
        transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(Var_45, ActiveVars_2, FixDir_3, RecInputSuppliers0_34, &RecInputSuppliers_36, STATE_VARIABLE_RecBag_40_40, STATE_VARIABLE_RecBag_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RecInputSupplier_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RecInputSuppliers_36));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_23;

    transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__283__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_23);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_23));
  }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RecSupplierMap_0_3,
  MR_Word * STATE_VARIABLE_RecSupplierMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RecSupplierMap_4 = STATE_VARIABLE_RecSupplierMap_0_3;
    else
    {
      MR_Word PPId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PPIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ProcInfo_14;
      MR_Word HeadVars_15;
      MR_Word BoolList_16;
      MR_Word STATE_VARIABLE_RecSupplierMap_20_20;
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RecSupplierMap_0_3;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_1, PPId_10, &Var_13, &ProcInfo_14);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_14, &HeadVars_15);
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[6]), HeadVars_15, &BoolList_16);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[0]), ((MR_Box) (PPId_10)), ((MR_Box) (BoolList_16)), STATE_VARIABLE_RecSupplierMap_0_3, &STATE_VARIABLE_RecSupplierMap_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PPIds_11;
      next_value_of_STATE_VARIABLE_RecSupplierMap_0_3 = STATE_VARIABLE_RecSupplierMap_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RecSupplierMap_0_3 = next_value_of_STATE_VARIABLE_RecSupplierMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_20;

    transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__252__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_20);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_20));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_8,
  MR_Word * BoolList_9)
{
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Mode_6;
    MR_Word Modes_7;

    if (succeeded)
    {
      Mode_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Modes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ModuleInfo_5, Mode_6);
      if (succeeded)
        succeeded = (ArgNum_8 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word BoolListTail_10;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_2[5]), Modes_7, &BoolListTail_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *BoolList_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoolListTail_10));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer NextArgNum_11;
        MR_Word Var_16;
        MR_Word BoolListTail_17;

        succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ModuleInfo_5, Mode_6);
        if (succeeded)
        {
          NextArgNum_11 = ArgNum_8;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer Var_14;
          MR_Integer Var_15;

          succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ModuleInfo_5, Mode_6);
          if (succeeded)
          {
            Var_14 = (MR_Integer) 1;
            succeeded = (ArgNum_8 > Var_14);
            if (succeeded)
            {
              Var_15 = (MR_Integer) 1;
              NextArgNum_11 = (MR_Integer) ((MR_Unsigned) ArgNum_8 - (MR_Unsigned) Var_15);
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(ModuleInfo_5, Modes_7, NextArgNum_11, &BoolListTail_17);
          if (succeeded)
          {
            Var_16 = (MR_Integer) 0;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *BoolList_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoolListTail_17));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word BestSofarPPId_3,
  MR_Integer BestSofarArity_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = BestSofarPPId_3;
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word PPId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PPIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Arity_17;
      MR_Word ProcInfo_24;
      MR_Word HeadVars_25;
      MR_Word Var_23;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_1, PPId_11, &Var_23, &ProcInfo_24);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_24, &HeadVars_25);
      mercury__list__length_2_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), HeadVars_25, &Arity_17);
      succeeded = (Arity_17 < BestSofarArity_4);
      if (succeeded)
      {
        MR_Word RestSCC0_18;

        transform_hlds__term_pass2__find_min_arity_proc_6_p_0(ModuleInfo_1, PPIds_12, PPId_11, Arity_17, HeadVar__5_5, &RestSCC0_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BestSofarPPId_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RestSCC0_18));
        }
      }
      else
      {
        MR_Word RestSCC0_19;

        transform_hlds__term_pass2__find_min_arity_proc_6_p_0(ModuleInfo_1, PPIds_12, BestSofarPPId_3, BestSofarArity_4, HeadVar__5_5, &RestSCC0_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PPId_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RestSCC0_19));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_22;

    transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__141__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_22);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
  }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[0]), HeadVar__3_3);
  else
  {
    MR_Word PPId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word PPIds_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RecSupplierMap0_10;
    MR_Word ProcInfo_12;
    MR_Word HeadVars_13;
    MR_Word ArgModes_14;
    MR_Word InArgs_15;
    MR_Word MapIsInput_17;
    MR_Word BoolList_20;
    MR_Word Var_11;
    MR_Word _OutVars_16;

    transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(PPIds_7, ModuleInfo_2, &RecSupplierMap0_10);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_2, PPId_6, &Var_11, &ProcInfo_12);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &HeadVars_13);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_12, &ArgModes_14);
    transform_hlds__term_util__partition_call_args_5_p_0(ModuleInfo_2, ArgModes_14, HeadVars_13, &InArgs_15, &_OutVars_16);
    {
      MapIsInput_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MapIsInput_17, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), MapIsInput_17, 1) = ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1));
      MR_hl_field(MR_mktag(0), MapIsInput_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), MapIsInput_17, 3) = ((MR_Box) (InArgs_15));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__term_pass2_scalar_common_1[1]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), MapIsInput_17, HeadVars_13, &BoolList_20);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_pass2_scalar_common_1[0]), ((MR_Box) (PPId_6)), ((MR_Box) (BoolList_20)), RecSupplierMap0_10, HeadVar__3_3);
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_pass2____Unify____call_weight_graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_pass2____Compare____call_weight_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_pass2____Compare____call_weight_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_pass2____Unify____term_pass2_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_pass2____Compare____term_pass2_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__term_pass2__init(void)
{
}

void mercury__transform_hlds__term_pass2__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_term_pass2_result_0);
}

void mercury__transform_hlds__term_pass2__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_pass2__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_pass2.
