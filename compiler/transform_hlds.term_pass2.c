/*
** Automatically generated from `term_pass2.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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


/* :- module transform_hlds.term_pass2. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_pass2__init
ENDINIT
*/

#include "transform_hlds.term_pass2.mih"


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
#include "check_hlds.mode_util.mih"
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
#include "int.mih"
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



struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s {
  MR_bool transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13;
  jmp_buf transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15;
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20;
  MR_Box transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15;
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
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_50_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23);

static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_49_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20);

static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__390__1_2_p_0(
  MR_Word transform_hlds__term_pass2__CanLoop_39,
  MR_Word transform_hlds__term_pass2__HeadVar__2_60);

static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__407__1_2_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_55,
  MR_Word transform_hlds__term_pass2__CanLoop_61);

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__282__1_2_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_22,
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23);

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__251__1_2_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_19,
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20);

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__140__1_3_p_0(
  MR_Word transform_hlds__term_pass2__InArgs_15,
  MR_Word transform_hlds__term_pass2__LambdaHeadVar__1_21,
  MR_Word * transform_hlds__term_pass2__LambdaHeadVar__2_22);

static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__2_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__LookforPPId_11,
  MR_Word transform_hlds__term_pass2__ProcContext_12,
  MR_Integer transform_hlds__term_pass2__WeightSoFar0_13,
  MR_Word transform_hlds__term_pass2__VisitedCalls_14,
  MR_Word transform_hlds__term_pass2__CallWeights_15,
  MR_Word * transform_hlds__term_pass2__Cycles_16);

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__LookforPPId_2,
  MR_Word transform_hlds__term_pass2__Context_3,
  MR_Integer transform_hlds__term_pass2__WeightSoFar_4,
  MR_Word transform_hlds__term_pass2__VisitedCalls_5,
  MR_Word transform_hlds__term_pass2__CallWeights_6,
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7);

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_pass2__CallWeights_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3,
  MR_Word * transform_hlds__term_pass2__HeadVar__4_4);

static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3,
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4);

static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__ActiveVars_2,
  MR_Word transform_hlds__term_pass2__FixDir_3,
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6,
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7);

static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2(
  MR_Box transform_hlds__term_pass2__closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1(
  MR_Box transform_hlds__term_pass2__closure_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_pass2__PassInfo_2,
  MR_Word transform_hlds__term_pass2__FixDir_3,
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
  MR_Word transform_hlds__term_pass2__RecSupplierMap_5,
  MR_Word transform_hlds__term_pass2__HeadVar__6_6,
  MR_Word transform_hlds__term_pass2__HeadVar__7_7,
  MR_Word * transform_hlds__term_pass2__HeadVar__8_8);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
  MR_Word transform_hlds__term_pass2__PassInfo_8,
  MR_Word transform_hlds__term_pass2__FixDir_9,
  MR_Word transform_hlds__term_pass2__SCC_10,
  MR_Word transform_hlds__term_pass2__RecSupplierMap0_11,
  MR_Word * transform_hlds__term_pass2__Result_12);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
  MR_Box transform_hlds__term_pass2__closure_arg,
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3,
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
  MR_Box transform_hlds__term_pass2__closure_arg,
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_5,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Integer transform_hlds__term_pass2__ArgNum_8,
  MR_Word * transform_hlds__term_pass2__BoolList_9);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
  MR_Word transform_hlds__term_pass2__PassInfo_8,
  MR_Word transform_hlds__term_pass2__TrialPPId_9,
  MR_Word transform_hlds__term_pass2__RestSCC_10,
  MR_Integer transform_hlds__term_pass2__ArgNum0_11,
  MR_Word * transform_hlds__term_pass2__Terminates_12);

static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__BestSofarPPId_3,
  MR_Integer transform_hlds__term_pass2__BestSofarArity_4,
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
  MR_Word * transform_hlds__term_pass2__HeadVar__6_6);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1(
  MR_Box transform_hlds__term_pass2__closure_arg,
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__ModuleInfo_2,
  MR_Word * transform_hlds__term_pass2__HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(
  void * transform_hlds__term_pass2__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3(
  void * transform_hlds__term_pass2__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(
  void * transform_hlds__term_pass2__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(
  void * transform_hlds__term_pass2__env_ptr_arg);


static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_4[1][6];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_5[3][5];




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
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_dst_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0 = {
  (MR_String) "call_weight_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_info",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0
};

static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0 = {
  (MR_String) "up",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1 = {
  (MR_String) "down",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "fixpoint_dir",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0 = {
  (MR_String) "term_pass2_ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1 = {
  (MR_String) "term_pass2_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1
};

static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "term_pass2_result",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0
};

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

    {
      transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_graph_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

    {
      transform_hlds__term_pass2____Compare____call_weight_graph_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

    {
      transform_hlds__term_pass2____Compare____call_weight_info_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

    {
      transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____term_pass2_result_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

    {
      transform_hlds__term_pass2____Compare____term_pass2_result_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_50_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    *transform_hlds__term_pass2__HeadVar__2_23 = (MR_Integer) 0;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_49_95_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    *transform_hlds__term_pass2__HeadVar__2_20 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__390__1_2_p_0(
  MR_Word transform_hlds__term_pass2__CanLoop_39,
  MR_Word transform_hlds__term_pass2__HeadVar__2_60)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__CanLoop_39)), ((MR_Box) (transform_hlds__term_pass2__HeadVar__2_60)));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__407__1_2_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_55,
  MR_Word transform_hlds__term_pass2__CanLoop_61)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__CanLoop_61)), ((MR_Box) (transform_hlds__term_pass2__HeadVar__1_55)));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__282__1_2_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_22,
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_50_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass2__HeadVar__2_23);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__251__1_2_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_19,
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_49_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass2__HeadVar__2_20);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__140__1_3_p_0(
  MR_Word transform_hlds__term_pass2__InArgs_15,
  MR_Word transform_hlds__term_pass2__LambdaHeadVar__1_21,
  MR_Word * transform_hlds__term_pass2__LambdaHeadVar__2_22)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    {
      transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__InArgs_15, ((MR_Box) (transform_hlds__term_pass2__LambdaHeadVar__1_21)));
    }
    if (transform_hlds__term_pass2__succeeded)
      *transform_hlds__term_pass2__LambdaHeadVar__2_22 = (MR_Integer) 1;
    else
      *transform_hlds__term_pass2__LambdaHeadVar__2_22 = (MR_Integer) 0;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Integer transform_hlds__term_pass2__CastX_17 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
    MR_Integer transform_hlds__term_pass2__CastY_18 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_17 == transform_hlds__term_pass2__CastY_18);
    if (transform_hlds__term_pass2__succeeded)
      *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__term_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_22_22)), ((MR_Box) (transform_hlds__term_pass2__V_16_16)));
            }
          }
        else
          *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word transform_hlds__term_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass2__V_8_8;

            {
              transform_hlds__term_pass2____Compare____call_weight_info_0_0(&transform_hlds__term_pass2__V_8_8, transform_hlds__term_pass2__V_24_24, transform_hlds__term_pass2__V_6_6);
            }
            transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__V_8_8 == (MR_Integer) 0);
            transform_hlds__term_pass2__succeeded = !(transform_hlds__term_pass2__succeeded);
            if (transform_hlds__term_pass2__succeeded)
              *transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__V_8_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[4], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_23_23)), ((MR_Box) (transform_hlds__term_pass2__V_7_7)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Integer transform_hlds__term_pass2__CastX_9 = (MR_Integer) transform_hlds__term_pass2__HeadVar__1_1;
    MR_Integer transform_hlds__term_pass2__CastY_10 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;

    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_9 == transform_hlds__term_pass2__CastY_10);
    if (transform_hlds__term_pass2__succeeded)
      transform_hlds__term_pass2__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_pass2__TypeInfo_11_11;
        MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__V_8_8;

        transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__term_pass2__succeeded)
          {
            transform_hlds__term_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_pass2__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[2];
            {
              transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_pass2__V_8_8)));
            }
          }
      }
    else
      {
        MR_Word transform_hlds__term_pass2__TypeInfo_12_12;
        MR_Word transform_hlds__term_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__V_5_5;
        MR_Word transform_hlds__term_pass2__V_6_6;

        transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__term_pass2__succeeded)
          {
            transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
            {
              transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(transform_hlds__term_pass2__V_3_3, transform_hlds__term_pass2__V_5_5);
            }
            if (transform_hlds__term_pass2__succeeded)
              {
                transform_hlds__term_pass2__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass2_scalar_common_2[4];
                {
                  transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
                }
              }
          }
      }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Integer transform_hlds__term_pass2__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
    MR_Integer transform_hlds__term_pass2__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_pass2__HeadVar__1_1, transform_hlds__term_pass2__Cast_HeadVar1_4, transform_hlds__term_pass2__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__2_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__HeadVar__2_1 == transform_hlds__term_pass2__HeadVar__2_2);

    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Integer transform_hlds__term_pass2__CastX_9 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
    MR_Integer transform_hlds__term_pass2__CastY_10 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_9 == transform_hlds__term_pass2__CastY_10);
    if (transform_hlds__term_pass2__succeeded)
      *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], &transform_hlds__term_pass2__V_8_8, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
        }
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__V_8_8 == (MR_Integer) 0);
        transform_hlds__term_pass2__succeeded = !(transform_hlds__term_pass2__succeeded);
        if (transform_hlds__term_pass2__succeeded)
          *transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_pass2__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Integer transform_hlds__term_pass2__CastX_7 = (MR_Integer) transform_hlds__term_pass2__HeadVar__1_1;
    MR_Integer transform_hlds__term_pass2__CastY_8 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;

    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_7 == transform_hlds__term_pass2__CastY_8);
    if (transform_hlds__term_pass2__succeeded)
      transform_hlds__term_pass2__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_pass2__TypeInfo_10_10;
        MR_Word transform_hlds__term_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));

        {
          transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__V_3_3)), ((MR_Box) (transform_hlds__term_pass2__V_5_5)));
        }
        if (transform_hlds__term_pass2__succeeded)
          {
            transform_hlds__term_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_pass2_scalar_common_2[3];
            {
              transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
            }
          }
      }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_4 = transform_hlds__term_pass2__HeadVar__2_2;
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_5 = transform_hlds__term_pass2__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_3 = transform_hlds__term_pass2__HeadVar__1_1;
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_4 = transform_hlds__term_pass2__HeadVar__2_2;

    {
      transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_4 = transform_hlds__term_pass2__HeadVar__2_2;
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_5 = transform_hlds__term_pass2__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_3 = transform_hlds__term_pass2__HeadVar__1_1;
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_4 = transform_hlds__term_pass2__HeadVar__2_2;

    {
      transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__LookforPPId_11,
  MR_Word transform_hlds__term_pass2__ProcContext_12,
  MR_Integer transform_hlds__term_pass2__WeightSoFar0_13,
  MR_Word transform_hlds__term_pass2__VisitedCalls_14,
  MR_Word transform_hlds__term_pass2__CallWeights_15,
  MR_Word * transform_hlds__term_pass2__Cycles_16)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Word transform_hlds__term_pass2__CurPPId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__term_pass2__Context_9;
    MR_Integer transform_hlds__term_pass2__EdgeWeight_10;
    MR_Integer transform_hlds__term_pass2__WeightSoFar1_17;
    MR_Word transform_hlds__term_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));

    transform_hlds__term_pass2__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_26_26, (MR_Integer) 0)));
    transform_hlds__term_pass2__EdgeWeight_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_26_26, (MR_Integer) 1)));
    transform_hlds__term_pass2__WeightSoFar1_17 = (transform_hlds__term_pass2__WeightSoFar0_13 + transform_hlds__term_pass2__EdgeWeight_10);
    {
      transform_hlds__term_pass2__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_pass2__CurPPId_8, transform_hlds__term_pass2__LookforPPId_11);
    }
    if (transform_hlds__term_pass2__succeeded)
      {
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__WeightSoFar1_17 >= (MR_Integer) 0);
        if (transform_hlds__term_pass2__succeeded)
          {
            MR_Word transform_hlds__term_pass2__FinalVisitedCalls_18;
            MR_Word transform_hlds__term_pass2__RevFinalVisitedCalls_19;
            MR_Word transform_hlds__term_pass2__CycleError_20;
            MR_Word transform_hlds__term_pass2__CycleErrorContext_21;
            MR_Word transform_hlds__term_pass2__V_28_28;

            {
              transform_hlds__term_pass2__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_28_28, 0) = ((MR_Box) (transform_hlds__term_pass2__CurPPId_8));
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_28_28, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_9));
            }
            {
              transform_hlds__term_pass2__FinalVisitedCalls_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__FinalVisitedCalls_18, 0) = ((MR_Box) (transform_hlds__term_pass2__V_28_28));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__FinalVisitedCalls_18, 1) = ((MR_Box) (transform_hlds__term_pass2__VisitedCalls_14));
            }
            {
              mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[2], transform_hlds__term_pass2__FinalVisitedCalls_18, &transform_hlds__term_pass2__RevFinalVisitedCalls_19);
            }
            {
              transform_hlds__term_pass2__CycleError_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 1) = ((MR_Box) (transform_hlds__term_pass2__LookforPPId_11));
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 2) = ((MR_Box) (transform_hlds__term_pass2__RevFinalVisitedCalls_19));
            }
            {
              transform_hlds__term_pass2__CycleErrorContext_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CycleErrorContext_21, 0) = ((MR_Box) (transform_hlds__term_pass2__ProcContext_12));
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CycleErrorContext_21, 1) = ((MR_Box) (transform_hlds__term_pass2__CycleError_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_pass2__Cycles_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__CycleErrorContext_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          *transform_hlds__term_pass2__Cycles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        MR_Word transform_hlds__term_pass2__VisitedPPIds_22;

        {
          mercury__assoc_list__keys_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_32_32, (MR_Word) &mercury__term__term__type_ctor_info_context_0, transform_hlds__term_pass2__VisitedCalls_14, &transform_hlds__term_pass2__VisitedPPIds_22);
        }
        {
          transform_hlds__term_pass2__succeeded = mercury__list__member_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_32_32, ((MR_Box) (transform_hlds__term_pass2__CurPPId_8)), transform_hlds__term_pass2__VisitedPPIds_22);
        }
        if (transform_hlds__term_pass2__succeeded)
          *transform_hlds__term_pass2__Cycles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_34_34;
            MR_Word transform_hlds__term_pass2__NewVisitedCalls_23;
            MR_Word transform_hlds__term_pass2__NeighboursMap_24;
            MR_Word transform_hlds__term_pass2__NeighboursList_25;
            MR_Word transform_hlds__term_pass2__V_30_30;
            MR_Box transform_hlds__term_pass2__conv0_NeighboursMap_24;

            {
              transform_hlds__term_pass2__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_30_30, 0) = ((MR_Box) (transform_hlds__term_pass2__CurPPId_8));
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_30_30, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_9));
            }
            {
              transform_hlds__term_pass2__NewVisitedCalls_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__NewVisitedCalls_23, 0) = ((MR_Box) (transform_hlds__term_pass2__V_30_30));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__NewVisitedCalls_23, 1) = ((MR_Box) (transform_hlds__term_pass2__VisitedCalls_14));
            }
            transform_hlds__term_pass2__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_15, ((MR_Box) (transform_hlds__term_pass2__CurPPId_8)), &transform_hlds__term_pass2__conv0_NeighboursMap_24);
            }
            transform_hlds__term_pass2__NeighboursMap_24 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighboursMap_24);
            {
              mercury__map__to_assoc_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighboursMap_24, &transform_hlds__term_pass2__NeighboursList_25);
            }
            {
              transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__NeighboursList_25, transform_hlds__term_pass2__LookforPPId_11, transform_hlds__term_pass2__ProcContext_12, transform_hlds__term_pass2__WeightSoFar1_17, transform_hlds__term_pass2__NewVisitedCalls_23, transform_hlds__term_pass2__CallWeights_15, transform_hlds__term_pass2__Cycles_16);
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__LookforPPId_2,
  MR_Word transform_hlds__term_pass2__Context_3,
  MR_Integer transform_hlds__term_pass2__WeightSoFar_4,
  MR_Word transform_hlds__term_pass2__VisitedCalls_5,
  MR_Word transform_hlds__term_pass2__CallWeights_6,
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__term_pass2__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__term_pass2__Neighbour_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__Neighbours_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__Cycles1_21;
        MR_Word transform_hlds__term_pass2__Cycles2_22;

        {
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(transform_hlds__term_pass2__Neighbour_13, transform_hlds__term_pass2__LookforPPId_2, transform_hlds__term_pass2__Context_3, transform_hlds__term_pass2__WeightSoFar_4, transform_hlds__term_pass2__VisitedCalls_5, transform_hlds__term_pass2__CallWeights_6, &transform_hlds__term_pass2__Cycles1_21);
        }
        {
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__Neighbours_14, transform_hlds__term_pass2__LookforPPId_2, transform_hlds__term_pass2__Context_3, transform_hlds__term_pass2__WeightSoFar_4, transform_hlds__term_pass2__VisitedCalls_5, transform_hlds__term_pass2__CallWeights_6, &transform_hlds__term_pass2__Cycles2_22);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__Cycles1_21, transform_hlds__term_pass2__Cycles2_22, transform_hlds__term_pass2__HeadVar__7_7);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_pass2__CallWeights_2,
  MR_Word transform_hlds__term_pass2__HeadVar__3_3,
  MR_Word * transform_hlds__term_pass2__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    if ((transform_hlds__term_pass2__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__term_pass2__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_17_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        MR_Word transform_hlds__term_pass2__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__Cycles1_12;
        MR_Word transform_hlds__term_pass2__Cycles2_13;
        MR_Word transform_hlds__term_pass2__NeighboursMap_19;
        MR_Word transform_hlds__term_pass2__NeighboursList_20;
        MR_Word transform_hlds__term_pass2__PredId_21;
        MR_Word transform_hlds__term_pass2__PredInfo_23;
        MR_Word transform_hlds__term_pass2__Context_24;
        MR_Box transform_hlds__term_pass2__conv0_NeighboursMap_19;
        MR_Integer transform_hlds__term_pass2___ProcId_22;

        {
          mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_17_27, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_2, ((MR_Box) (transform_hlds__term_pass2__PPId_9)), &transform_hlds__term_pass2__conv0_NeighboursMap_19);
        }
        transform_hlds__term_pass2__NeighboursMap_19 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighboursMap_19);
        {
          mercury__map__to_assoc_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_17_27, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighboursMap_19, &transform_hlds__term_pass2__NeighboursList_20);
        }
        transform_hlds__term_pass2__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PPId_9, (MR_Integer) 0)));
        transform_hlds__term_pass2___ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PPId_9, (MR_Integer) 1)));
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PredId_21, &transform_hlds__term_pass2__PredInfo_23);
        }
        {
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass2__PredInfo_23, &transform_hlds__term_pass2__Context_24);
        }
        {
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__NeighboursList_20, transform_hlds__term_pass2__PPId_9, transform_hlds__term_pass2__Context_24, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_pass2__CallWeights_2, &transform_hlds__term_pass2__Cycles1_12);
        }
        {
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__CallWeights_2, transform_hlds__term_pass2__PPIds_10, &transform_hlds__term_pass2__Cycles2_13);
        }
        {
          *transform_hlds__term_pass2__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__Cycles1_12, transform_hlds__term_pass2__Cycles2_13);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3,
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass2__succeeded;

        if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3;
        else
          {
            MR_Word transform_hlds__term_pass2__Path_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass2__Paths_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass2__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass2__CallSite_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_pass2__GammaConst_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 2)));
            MR_Word transform_hlds__term_pass2__GammaVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 3)));
            MR_Word transform_hlds__term_pass2__ActiveVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 4)));
            MR_Word transform_hlds__term_pass2__CallPPId_20;
            MR_Word transform_hlds__term_pass2__Context_21;
            MR_Word transform_hlds__term_pass2__InfCalls0_24;
            MR_Word transform_hlds__term_pass2__CallWeights0_25;
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46;

            if ((transform_hlds__term_pass2__CallSite_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "no call site in path in stage 2");
                  return;
                }
              }
            else
              {
                MR_Word transform_hlds__term_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__CallSite_14, (MR_Integer) 0)));

                transform_hlds__term_pass2__CallPPId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_40_40, (MR_Integer) 0)));
                transform_hlds__term_pass2__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_40_40, (MR_Integer) 1)));
              }
            if ((transform_hlds__term_pass2__GammaVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "gamma variables in path in stage 2");
                  return;
                }
              }
            transform_hlds__term_pass2__InfCalls0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 0)));
            transform_hlds__term_pass2__CallWeights0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 1)));
            {
              transform_hlds__term_pass2__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_17, transform_hlds__term_pass2__HeadVar__2_2);
            }
            if (transform_hlds__term_pass2__succeeded)
              {
                MR_Word transform_hlds__term_pass2__CallWeights1_32;
                MR_Word transform_hlds__term_pass2__NeighbourMap0_26;
                MR_Box transform_hlds__term_pass2__conv0_NeighbourMap0_26;

                {
                  transform_hlds__term_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights0_25, ((MR_Box) (transform_hlds__term_pass2__PPId_13)), &transform_hlds__term_pass2__conv0_NeighbourMap0_26);
                }
                if (transform_hlds__term_pass2__succeeded)
                  {
                    transform_hlds__term_pass2__NeighbourMap0_26 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighbourMap0_26);
                    transform_hlds__term_pass2__succeeded = MR_TRUE;
                  }
                if (transform_hlds__term_pass2__succeeded)
                  {
                    MR_Word transform_hlds__term_pass2__NeighbourMap_31;
                    MR_Word transform_hlds__term_pass2__OldEdgeInfo_27;
                    MR_Box transform_hlds__term_pass2__conv1_OldEdgeInfo_27;

                    {
                      transform_hlds__term_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighbourMap0_26, ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), &transform_hlds__term_pass2__conv1_OldEdgeInfo_27);
                    }
                    if (transform_hlds__term_pass2__succeeded)
                      {
                        transform_hlds__term_pass2__OldEdgeInfo_27 = ((MR_Word) transform_hlds__term_pass2__conv1_OldEdgeInfo_27);
                        transform_hlds__term_pass2__succeeded = MR_TRUE;
                      }
                    if (transform_hlds__term_pass2__succeeded)
                      {
                        MR_Integer transform_hlds__term_pass2__OldWeight_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__OldEdgeInfo_27, (MR_Integer) 1)));
                        MR_Word transform_hlds__term_pass2__EdgeInfo_30;
                        MR_Word transform_hlds__term_pass2___OldContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__OldEdgeInfo_27, (MR_Integer) 0)));

                        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__OldWeight_29 >= transform_hlds__term_pass2__GammaConst_15);
                        if (transform_hlds__term_pass2__succeeded)
                          transform_hlds__term_pass2__EdgeInfo_30 = transform_hlds__term_pass2__OldEdgeInfo_27;
                        else
                          {
                            transform_hlds__term_pass2__EdgeInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__EdgeInfo_30, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__EdgeInfo_30, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
                          }
                        {
                          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__EdgeInfo_30)), transform_hlds__term_pass2__NeighbourMap0_26, &transform_hlds__term_pass2__NeighbourMap_31);
                        }
                      }
                    else
                      {
                        MR_Word transform_hlds__term_pass2__V_44_44;

                        {
                          transform_hlds__term_pass2__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_44_44, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_44_44, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
                        }
                        {
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__V_44_44)), transform_hlds__term_pass2__NeighbourMap0_26, &transform_hlds__term_pass2__NeighbourMap_31);
                        }
                      }
                    {
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__PPId_13)), ((MR_Box) (transform_hlds__term_pass2__NeighbourMap_31)), transform_hlds__term_pass2__CallWeights0_25, &transform_hlds__term_pass2__CallWeights1_32);
                    }
                  }
                else
                  {
                    MR_Word transform_hlds__term_pass2__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                    MR_Word transform_hlds__term_pass2__V_45_45;
                    MR_Word transform_hlds__term_pass2__NeighbourMap_50;

                    {
                      transform_hlds__term_pass2__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_45_45, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_45_45, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
                    }
                    {
                      transform_hlds__term_pass2__NeighbourMap_50 = mercury__map__singleton_2_f_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__V_45_45)));
                    }
                    {
                      mercury__map__det_insert_4_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__PPId_13)), ((MR_Box) (transform_hlds__term_pass2__NeighbourMap_50)), transform_hlds__term_pass2__CallWeights0_25, &transform_hlds__term_pass2__CallWeights1_32);
                    }
                  }
                {
                  transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCalls0_24));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeights1_32));
                }
              }
            else
              {
                MR_Word transform_hlds__term_pass2__InfCall_33;
                MR_Word transform_hlds__term_pass2__InfCalls1_34;
                MR_Word transform_hlds__term_pass2__V_47_47;

                {
                  transform_hlds__term_pass2__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 1) = ((MR_Box) (transform_hlds__term_pass2__PPId_13));
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 2) = ((MR_Box) (transform_hlds__term_pass2__CallPPId_20));
                }
                {
                  transform_hlds__term_pass2__InfCall_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__InfCall_33, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__InfCall_33, 1) = ((MR_Box) (transform_hlds__term_pass2__V_47_47));
                }
                {
                  transform_hlds__term_pass2__InfCalls1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__InfCalls1_34, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCall_33));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__InfCalls1_34, 1) = ((MR_Box) (transform_hlds__term_pass2__InfCalls0_24));
                }
                {
                  transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCalls1_34));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeights0_25));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass2__Paths_10;
              MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0__tmp_copy_3 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46;

              transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0__tmp_copy_3;
              transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__ActiveVars_2,
  MR_Word transform_hlds__term_pass2__FixDir_3,
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6,
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7 = transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6;
        }
      else
        {
          *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__term_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__term_pass2__RecInputSupplier0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass2__RecInputSuppliers0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass2__RecInputSupplier_37;
            MR_Word transform_hlds__term_pass2__RecInputSuppliers_38;
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42;

            switch (transform_hlds__term_pass2__RecInputSupplier0_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42 = transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6;
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], ((MR_Box) (transform_hlds__term_pass2__V_48_48)), transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6, &transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42);
                  }
                }
                break;
            }
            switch (transform_hlds__term_pass2__FixDir_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_2, ((MR_Box) (transform_hlds__term_pass2__V_48_48)));
                  }
                  if (transform_hlds__term_pass2__succeeded)
                    transform_hlds__term_pass2__RecInputSupplier_37 = transform_hlds__term_pass2__RecInputSupplier0_35;
                  else
                    transform_hlds__term_pass2__RecInputSupplier_37 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_2, ((MR_Box) (transform_hlds__term_pass2__V_48_48)));
                  }
                  if (transform_hlds__term_pass2__succeeded)
                    transform_hlds__term_pass2__RecInputSupplier_37 = (MR_Integer) 1;
                  else
                    transform_hlds__term_pass2__RecInputSupplier_37 = transform_hlds__term_pass2__RecInputSupplier0_35;
                }
                break;
            }
            {
              transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(transform_hlds__term_pass2__V_47_47, transform_hlds__term_pass2__ActiveVars_2, transform_hlds__term_pass2__FixDir_3, transform_hlds__term_pass2__RecInputSuppliers0_36, &transform_hlds__term_pass2__RecInputSuppliers_38, transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42, transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_pass2__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__RecInputSupplier_37));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RecInputSuppliers_38));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2(
  MR_Box transform_hlds__term_pass2__closure_arg)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;

    {
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__390__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 4))));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1(
  MR_Box transform_hlds__term_pass2__closure_arg)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;

    {
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__407__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 4))));
    }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_pass2__PassInfo_2,
  MR_Word transform_hlds__term_pass2__FixDir_3,
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
  MR_Word transform_hlds__term_pass2__RecSupplierMap_5,
  MR_Word transform_hlds__term_pass2__HeadVar__6_6,
  MR_Word transform_hlds__term_pass2__HeadVar__7_7,
  MR_Word * transform_hlds__term_pass2__HeadVar__8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass2__succeeded;

        if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__term_pass2__HeadVar__8_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass2__HeadVar__7_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass2__HeadVar__6_6));
          }
        else
          {
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_62_62;
            MR_Word transform_hlds__term_pass2__TypeInfo_63_63;
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_64_64;
            MR_Word transform_hlds__term_pass2__PPId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass2__PPIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass2__PredInfo_24;
            MR_Word transform_hlds__term_pass2__ProcInfo_25;
            MR_Word transform_hlds__term_pass2__Context_26;
            MR_Word transform_hlds__term_pass2__Goal0_27;
            MR_Word transform_hlds__term_pass2__Goal_28;
            MR_Word transform_hlds__term_pass2__VarTypes_29;
            MR_Word transform_hlds__term_pass2__EmptyMap_30;
            MR_Word transform_hlds__term_pass2__FunctorInfo_31;
            MR_Integer transform_hlds__term_pass2__MaxErrors_32;
            MR_Integer transform_hlds__term_pass2__MaxPaths_33;
            MR_Word transform_hlds__term_pass2__Params_34;
            MR_Word transform_hlds__term_pass2__PathSet0_35;
            MR_Word transform_hlds__term_pass2__Info0_36;
            MR_Word transform_hlds__term_pass2__Info_37;

            {
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_18, &transform_hlds__term_pass2__PredInfo_24, &transform_hlds__term_pass2__ProcInfo_25);
            }
            {
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass2__PredInfo_24, &transform_hlds__term_pass2__Context_26);
            }
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__Goal0_27);
            }
            {
              transform_hlds__term_pass2__Goal_28 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass2__Goal0_27);
            }
            {
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__VarTypes_29);
            }
            transform_hlds__term_pass2__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            transform_hlds__term_pass2__TypeInfo_63_63 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0];
            {
              mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, &transform_hlds__term_pass2__EmptyMap_30);
            }
            transform_hlds__term_pass2__FunctorInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 0)));
            transform_hlds__term_pass2__MaxErrors_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 1)));
            transform_hlds__term_pass2__MaxPaths_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 2)));
            {
              transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass2__FunctorInfo_31, transform_hlds__term_pass2__PPId_18, transform_hlds__term_pass2__Context_26, transform_hlds__term_pass2__VarTypes_29, transform_hlds__term_pass2__EmptyMap_30, transform_hlds__term_pass2__RecSupplierMap_5, transform_hlds__term_pass2__MaxErrors_32, transform_hlds__term_pass2__MaxPaths_33, &transform_hlds__term_pass2__Params_34);
            }
            transform_hlds__term_pass2__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
            {
              mercury__set__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_64_64, &transform_hlds__term_pass2__PathSet0_35);
            }
            {
              transform_hlds__term_pass2__Info0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info0_36, 0) = ((MR_Box) (transform_hlds__term_pass2__PathSet0_35));
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info0_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__Params_34, transform_hlds__term_pass2__Goal_28, transform_hlds__term_pass2__Info0_36, &transform_hlds__term_pass2__Info_37);
            }
            if (((MR_tag((MR_Word) transform_hlds__term_pass2__Info_37)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word transform_hlds__term_pass2__Errors_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Info_37, (MR_Integer) 0)));
                MR_Word transform_hlds__term_pass2__V_51_51;
                MR_Word transform_hlds__term_pass2__CanLoop_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Info_37, (MR_Integer) 1)));

                {
                  transform_hlds__term_pass2__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 4) = ((MR_Box) (transform_hlds__term_pass2__CanLoop_61));
                }
                {
                  mercury__require__expect_4_p_0(transform_hlds__term_pass2__V_51_51, (MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/8", (MR_String) "can_loop detected in pass2 but not pass1");
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__term_pass2__HeadVar__8_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__Errors_49));
                }
              }
            else
              {
                MR_Word transform_hlds__term_pass2__Paths_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info_37, (MR_Integer) 0)));
                MR_Word transform_hlds__term_pass2__CanLoop_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info_37, (MR_Integer) 1)));
                MR_Word transform_hlds__term_pass2__PathList_40;
                MR_Word transform_hlds__term_pass2__ActiveVars_41;
                MR_Word transform_hlds__term_pass2__RecSuppliers0_42;
                MR_Word transform_hlds__term_pass2__Args_43;
                MR_Word transform_hlds__term_pass2__EmptyBag_44;
                MR_Word transform_hlds__term_pass2__RecSuppliers_45;
                MR_Word transform_hlds__term_pass2__RecSuppliers0Bag_46;
                MR_Word transform_hlds__term_pass2__NewRecSupplierMap1_47;
                MR_Word transform_hlds__term_pass2__CallInfo1_48;
                MR_Word transform_hlds__term_pass2__V_56_56;
                MR_Box transform_hlds__term_pass2__conv0_RecSuppliers0_42;

                {
                  transform_hlds__term_pass2__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[2]));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 3) = ((MR_Box) (transform_hlds__term_pass2__CanLoop_39));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mercury__require__expect_4_p_0(transform_hlds__term_pass2__V_56_56, (MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/8", (MR_String) "can_loop detected in pass2 but not pass1");
                }
                {
                  mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_64_64, transform_hlds__term_pass2__Paths_38, &transform_hlds__term_pass2__PathList_40);
                }
                {
                  transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass2__PathList_40, &transform_hlds__term_pass2__ActiveVars_41);
                }
                {
                  mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, transform_hlds__term_pass2__RecSupplierMap_5, ((MR_Box) (transform_hlds__term_pass2__PPId_18)), &transform_hlds__term_pass2__conv0_RecSuppliers0_42);
                }
                transform_hlds__term_pass2__RecSuppliers0_42 = ((MR_Word) transform_hlds__term_pass2__conv0_RecSuppliers0_42);
                {
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__Args_43);
                }
                {
                  mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], &transform_hlds__term_pass2__EmptyBag_44);
                }
                {
                  transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(transform_hlds__term_pass2__Args_43, transform_hlds__term_pass2__ActiveVars_41, transform_hlds__term_pass2__FixDir_3, transform_hlds__term_pass2__RecSuppliers0_42, &transform_hlds__term_pass2__RecSuppliers_45, transform_hlds__term_pass2__EmptyBag_44, &transform_hlds__term_pass2__RecSuppliers0Bag_46);
                }
                {
                  mercury__map__det_insert_4_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, ((MR_Box) (transform_hlds__term_pass2__PPId_18)), ((MR_Box) (transform_hlds__term_pass2__RecSuppliers_45)), transform_hlds__term_pass2__HeadVar__6_6, &transform_hlds__term_pass2__NewRecSupplierMap1_47);
                }
                {
                  transform_hlds__term_pass2__add_call_arcs_4_p_0(transform_hlds__term_pass2__PathList_40, transform_hlds__term_pass2__RecSuppliers0Bag_46, transform_hlds__term_pass2__HeadVar__7_7, &transform_hlds__term_pass2__CallInfo1_48);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_pass2__HeadVar__4__tmp_copy_4 = transform_hlds__term_pass2__PPIds_19;
                  MR_Word transform_hlds__term_pass2__HeadVar__6__tmp_copy_6 = transform_hlds__term_pass2__NewRecSupplierMap1_47;
                  MR_Word transform_hlds__term_pass2__HeadVar__7__tmp_copy_7 = transform_hlds__term_pass2__CallInfo1_48;

                  transform_hlds__term_pass2__HeadVar__7_7 = transform_hlds__term_pass2__HeadVar__7__tmp_copy_7;
                  transform_hlds__term_pass2__HeadVar__6_6 = transform_hlds__term_pass2__HeadVar__6__tmp_copy_6;
                  transform_hlds__term_pass2__HeadVar__4_4 = transform_hlds__term_pass2__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
  MR_Word transform_hlds__term_pass2__PassInfo_8,
  MR_Word transform_hlds__term_pass2__FixDir_9,
  MR_Word transform_hlds__term_pass2__SCC_10,
  MR_Word transform_hlds__term_pass2__RecSupplierMap0_11,
  MR_Word * transform_hlds__term_pass2__Result_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass2__succeeded;
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        MR_Word transform_hlds__term_pass2__NewRecSupplierMap0_13;
        MR_Word transform_hlds__term_pass2__CallWeightGraph0_14;
        MR_Word transform_hlds__term_pass2__CallInfo0_15;
        MR_Word transform_hlds__term_pass2__Result1_16;

        {
          mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], &transform_hlds__term_pass2__NewRecSupplierMap0_13);
        }
        {
          mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], &transform_hlds__term_pass2__CallWeightGraph0_14);
        }
        {
          transform_hlds__term_pass2__CallInfo0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo0_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo0_15, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeightGraph0_14));
        }
        {
          transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__PassInfo_8, transform_hlds__term_pass2__FixDir_9, transform_hlds__term_pass2__SCC_10, transform_hlds__term_pass2__RecSupplierMap0_11, transform_hlds__term_pass2__NewRecSupplierMap0_13, transform_hlds__term_pass2__CallInfo0_15, &transform_hlds__term_pass2__Result1_16);
        }
        if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result1_16)) == (MR_mktag((MR_Integer) 1))))
          *transform_hlds__term_pass2__Result_12 = transform_hlds__term_pass2__Result1_16;
        else
          {
            MR_Word transform_hlds__term_pass2__RecSupplierMap1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result1_16, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result1_16, (MR_Integer) 0)));

            {
              transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[4], ((MR_Box) (transform_hlds__term_pass2__RecSupplierMap1_18)), ((MR_Box) (transform_hlds__term_pass2__RecSupplierMap0_11)));
            }
            if (transform_hlds__term_pass2__succeeded)
              *transform_hlds__term_pass2__Result_12 = transform_hlds__term_pass2__Result1_16;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_pass2__RecSupplierMap0__tmp_copy_11 = transform_hlds__term_pass2__RecSupplierMap1_18;

                  transform_hlds__term_pass2__RecSupplierMap0_11 = transform_hlds__term_pass2__RecSupplierMap0__tmp_copy_11;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
  MR_Box transform_hlds__term_pass2__closure_arg,
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__2_23;

    {
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__282__1_2_p_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__2_23);
    }
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__2_23));
  }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3,
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass2__succeeded;

        if ((transform_hlds__term_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3;
        else
          {
            MR_Word transform_hlds__term_pass2__PPId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__term_pass2__PPIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_pass2__ProcInfo_14;
            MR_Word transform_hlds__term_pass2__HeadVars_15;
            MR_Word transform_hlds__term_pass2__BoolList_16;
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20;
            MR_Word transform_hlds__term_pass2__V_13_13;

            {
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_10, &transform_hlds__term_pass2__V_13_13, &transform_hlds__term_pass2__ProcInfo_14);
            }
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_14, &transform_hlds__term_pass2__HeadVars_15);
            }
            {
              mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[6], transform_hlds__term_pass2__HeadVars_15, &transform_hlds__term_pass2__BoolList_16);
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass2__PPId_10)), ((MR_Box) (transform_hlds__term_pass2__BoolList_16)), transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3, &transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_pass2__HeadVar__2__tmp_copy_2 = transform_hlds__term_pass2__PPIds_11;
              MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0__tmp_copy_3 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20;

              transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0__tmp_copy_3;
              transform_hlds__term_pass2__HeadVar__2_2 = transform_hlds__term_pass2__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
  MR_Box transform_hlds__term_pass2__closure_arg,
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__2_20;

    {
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__251__1_2_p_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__2_20);
    }
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__2_20));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_5,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Integer transform_hlds__term_pass2__ArgNum_8,
  MR_Word * transform_hlds__term_pass2__BoolList_9)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word transform_hlds__term_pass2__Mode_6;
    MR_Word transform_hlds__term_pass2__Modes_7;

    if (transform_hlds__term_pass2__succeeded)
      {
        transform_hlds__term_pass2__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
        transform_hlds__term_pass2__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
        {
          transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
        }
        if (transform_hlds__term_pass2__succeeded)
          transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__ArgNum_8 == (MR_Integer) 1);
        if (transform_hlds__term_pass2__succeeded)
          {
            MR_Word transform_hlds__term_pass2__BoolListTail_10;

            {
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[5], transform_hlds__term_pass2__Modes_7, &transform_hlds__term_pass2__BoolListTail_10);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_pass2__BoolList_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__BoolListTail_10));
            }
            transform_hlds__term_pass2__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer transform_hlds__term_pass2__NextArgNum_11;
            MR_Word transform_hlds__term_pass2__V_16_16;
            MR_Word transform_hlds__term_pass2__BoolListTail_17;

            {
              transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
            }
            if (transform_hlds__term_pass2__succeeded)
              {
                transform_hlds__term_pass2__NextArgNum_11 = transform_hlds__term_pass2__ArgNum_8;
                transform_hlds__term_pass2__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer transform_hlds__term_pass2__V_14_14;
                MR_Integer transform_hlds__term_pass2__V_15_15;

                {
                  transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
                }
                if (transform_hlds__term_pass2__succeeded)
                  {
                    transform_hlds__term_pass2__V_14_14 = (MR_Integer) 1;
                    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__ArgNum_8 > transform_hlds__term_pass2__V_14_14);
                    if (transform_hlds__term_pass2__succeeded)
                      {
                        transform_hlds__term_pass2__V_15_15 = (MR_Integer) 1;
                        transform_hlds__term_pass2__NextArgNum_11 = (transform_hlds__term_pass2__ArgNum_8 - transform_hlds__term_pass2__V_15_15);
                        transform_hlds__term_pass2__succeeded = MR_TRUE;
                      }
                  }
              }
            if (transform_hlds__term_pass2__succeeded)
              {
                {
                  transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Modes_7, transform_hlds__term_pass2__NextArgNum_11, &transform_hlds__term_pass2__BoolListTail_17);
                }
                if (transform_hlds__term_pass2__succeeded)
                  {
                    transform_hlds__term_pass2__V_16_16 = (MR_Integer) 0;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__term_pass2__BoolList_9 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__V_16_16));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__BoolListTail_17));
                    }
                    transform_hlds__term_pass2__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return transform_hlds__term_pass2__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
  MR_Word transform_hlds__term_pass2__PassInfo_8,
  MR_Word transform_hlds__term_pass2__TrialPPId_9,
  MR_Word transform_hlds__term_pass2__RestSCC_10,
  MR_Integer transform_hlds__term_pass2__ArgNum0_11,
  MR_Word * transform_hlds__term_pass2__Terminates_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_pass2__succeeded;
        MR_Word transform_hlds__term_pass2__InitRecSuppliers_13;
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_16_31;
        MR_Word transform_hlds__term_pass2__TypeInfo_17_32;
        MR_Word transform_hlds__term_pass2__ProcInfo_27;
        MR_Word transform_hlds__term_pass2__ArgModes_28;
        MR_Word transform_hlds__term_pass2__TrialPPIdRecSuppliers_29;
        MR_Word transform_hlds__term_pass2__RecSupplierMap0_30;
        MR_Word transform_hlds__term_pass2__V_26_26;

        {
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__TrialPPId_9, &transform_hlds__term_pass2__V_26_26, &transform_hlds__term_pass2__ProcInfo_27);
        }
        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass2__ProcInfo_27, &transform_hlds__term_pass2__ArgModes_28);
        }
        {
          transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__ArgModes_28, transform_hlds__term_pass2__ArgNum0_11, &transform_hlds__term_pass2__TrialPPIdRecSuppliers_29);
        }
        if (transform_hlds__term_pass2__succeeded)
          {
            transform_hlds__term_pass2__TypeCtorInfo_16_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            transform_hlds__term_pass2__TypeInfo_17_32 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0];
            {
              transform_hlds__term_pass2__RecSupplierMap0_30 = mercury__map__singleton_2_f_0(transform_hlds__term_pass2__TypeCtorInfo_16_31, transform_hlds__term_pass2__TypeInfo_17_32, ((MR_Box) (transform_hlds__term_pass2__TrialPPId_9)), ((MR_Box) (transform_hlds__term_pass2__TrialPPIdRecSuppliers_29)));
            }
            {
              transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__RestSCC_10, transform_hlds__term_pass2__RecSupplierMap0_30, &transform_hlds__term_pass2__InitRecSuppliers_13);
            }
            transform_hlds__term_pass2__succeeded = MR_TRUE;
          }
        if (transform_hlds__term_pass2__succeeded)
          {
            MR_Word transform_hlds__term_pass2__V_18_18;
            MR_Word transform_hlds__term_pass2__Result_39;

            {
              transform_hlds__term_pass2__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__V_18_18, 0) = ((MR_Box) (transform_hlds__term_pass2__TrialPPId_9));
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__V_18_18, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC_10));
            }
            {
              transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0, transform_hlds__term_pass2__V_18_18, transform_hlds__term_pass2__InitRecSuppliers_13, &transform_hlds__term_pass2__Result_39);
            }
            if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result_39)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Integer transform_hlds__term_pass2__ArgNum1_16 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_16;

                  transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
                }
                continue;
              }
            else
              {
                MR_Word transform_hlds__term_pass2__CallInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_39, (MR_Integer) 0)));
                MR_Word transform_hlds__term_pass2__InfCalls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_40, (MR_Integer) 0)));
                MR_Word transform_hlds__term_pass2__CallWeights_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_40, (MR_Integer) 1)));
                MR_Word transform_hlds__term_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_39, (MR_Integer) 1)));

                if ((transform_hlds__term_pass2__InfCalls_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word transform_hlds__term_pass2__Cycles_50;
                    MR_Word transform_hlds__term_pass2__PPIds_66;
                    MR_Word transform_hlds__term_pass2__V_51_51;
                    MR_Word transform_hlds__term_pass2__V_52_52;

                    {
                      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_43, &transform_hlds__term_pass2__PPIds_66);
                    }
                    {
                      transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__CallWeights_43, transform_hlds__term_pass2__PPIds_66, &transform_hlds__term_pass2__Cycles_50);
                    }
                    transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__Cycles_50)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__term_pass2__succeeded)
                      {
                        transform_hlds__term_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_50, (MR_Integer) 0)));
                        transform_hlds__term_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_50, (MR_Integer) 1)));
                        {
                          MR_Integer transform_hlds__term_pass2__MaxErrors_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 1)));
                          MR_Integer transform_hlds__term_pass2__ArgNum1_69;
                          MR_Word transform_hlds__term_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0)));
                          MR_Integer transform_hlds__term_pass2__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 2)));
                          MR_Word transform_hlds__term_pass2__ReportedCycles_55;

                          {
                            mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_58, transform_hlds__term_pass2__Cycles_50, &transform_hlds__term_pass2__ReportedCycles_55);
                          }
                          transform_hlds__term_pass2__ArgNum1_69 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);
                          /* direct tailcall eliminated */
                          {
                            MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_69;

                            transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
                          }
                          continue;
                        }
                      }
                    else
                      *transform_hlds__term_pass2__Terminates_12 = (MR_Integer) 1;
                  }
                else
                  {
                    MR_Integer transform_hlds__term_pass2__MaxErrors_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 1)));
                    MR_Integer transform_hlds__term_pass2__ArgNum1_77;
                    MR_Word transform_hlds__term_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0)));
                    MR_Integer transform_hlds__term_pass2__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 2)));
                    MR_Word transform_hlds__term_pass2__ReportedInfCalls_49;

                    {
                      mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_47, transform_hlds__term_pass2__InfCalls_42, &transform_hlds__term_pass2__ReportedInfCalls_49);
                    }
                    transform_hlds__term_pass2__ArgNum1_77 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);
                    /* direct tailcall eliminated */
                    {
                      MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_77;

                      transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
                    }
                    continue;
                  }
              }
          }
        else
          *transform_hlds__term_pass2__Terminates_12 = (MR_Integer) 0;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
  MR_Word transform_hlds__term_pass2__BestSofarPPId_3,
  MR_Integer transform_hlds__term_pass2__BestSofarArity_4,
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
  MR_Word * transform_hlds__term_pass2__HeadVar__6_6)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    if ((transform_hlds__term_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__term_pass2__HeadVar__5_5 = transform_hlds__term_pass2__BestSofarPPId_3;
        *transform_hlds__term_pass2__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word transform_hlds__term_pass2__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__PPIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_pass2__Arity_17;
        MR_Word transform_hlds__term_pass2__ProcInfo_24;
        MR_Word transform_hlds__term_pass2__HeadVars_25;
        MR_Word transform_hlds__term_pass2__V_23_23;

        {
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_11, &transform_hlds__term_pass2__V_23_23, &transform_hlds__term_pass2__ProcInfo_24);
        }
        {
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_24, &transform_hlds__term_pass2__HeadVars_25);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__HeadVars_25, &transform_hlds__term_pass2__Arity_17);
        }
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__Arity_17 < transform_hlds__term_pass2__BestSofarArity_4);
        if (transform_hlds__term_pass2__succeeded)
          {
            MR_Word transform_hlds__term_pass2__RestSCC0_18;

            {
              transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPIds_12, transform_hlds__term_pass2__PPId_11, transform_hlds__term_pass2__Arity_17, transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__RestSCC0_18);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_pass2__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__BestSofarPPId_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC0_18));
            }
          }
        else
          {
            MR_Word transform_hlds__term_pass2__RestSCC0_19;

            {
              transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPIds_12, transform_hlds__term_pass2__BestSofarPPId_3, transform_hlds__term_pass2__BestSofarArity_4, transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__RestSCC0_19);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_pass2__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__PPId_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC0_19));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1(
  MR_Box transform_hlds__term_pass2__closure_arg,
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
    MR_Word transform_hlds__term_pass2__conv0_LambdaHeadVar__2_22;

    {
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__140__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_LambdaHeadVar__2_22);
    }
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_LambdaHeadVar__2_22));
  }
}

static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
  MR_Word transform_hlds__term_pass2__ModuleInfo_2,
  MR_Word * transform_hlds__term_pass2__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_pass2__succeeded;

    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], transform_hlds__term_pass2__HeadVar__3_3);
        }
      }
    else
      {
        MR_Word transform_hlds__term_pass2__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_pass2__PPIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_pass2__RecSupplierMap0_10;
        MR_Word transform_hlds__term_pass2__ProcInfo_12;
        MR_Word transform_hlds__term_pass2__HeadVars_13;
        MR_Word transform_hlds__term_pass2__ArgModes_14;
        MR_Word transform_hlds__term_pass2__InArgs_15;
        MR_Word transform_hlds__term_pass2__MapIsInput_17;
        MR_Word transform_hlds__term_pass2__BoolList_20;
        MR_Word transform_hlds__term_pass2__V_11_11;
        MR_Word transform_hlds__term_pass2___OutVars_16;

        {
          transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(transform_hlds__term_pass2__PPIds_7, transform_hlds__term_pass2__ModuleInfo_2, &transform_hlds__term_pass2__RecSupplierMap0_10);
        }
        {
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_2, transform_hlds__term_pass2__PPId_6, &transform_hlds__term_pass2__V_11_11, &transform_hlds__term_pass2__ProcInfo_12);
        }
        {
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_12, &transform_hlds__term_pass2__HeadVars_13);
        }
        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass2__ProcInfo_12, &transform_hlds__term_pass2__ArgModes_14);
        }
        {
          transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_pass2__ModuleInfo_2, transform_hlds__term_pass2__ArgModes_14, transform_hlds__term_pass2__HeadVars_13, &transform_hlds__term_pass2__InArgs_15, &transform_hlds__term_pass2___OutVars_16);
        }
        {
          transform_hlds__term_pass2__MapIsInput_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 1) = ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 3) = ((MR_Box) (transform_hlds__term_pass2__InArgs_15));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_pass2__MapIsInput_17, transform_hlds__term_pass2__HeadVars_13, &transform_hlds__term_pass2__BoolList_20);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass2__PPId_6)), ((MR_Box) (transform_hlds__term_pass2__BoolList_20)), transform_hlds__term_pass2__RecSupplierMap0_10, transform_hlds__term_pass2__HeadVar__3_3);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(
  void * transform_hlds__term_pass2__env_ptr_arg)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3(
  void * transform_hlds__term_pass2__env_ptr_arg)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

    (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15 = ((MR_Word) (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15);
    {
      transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(transform_hlds__term_pass2__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(
  void * transform_hlds__term_pass2__env_ptr_arg)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

    {
      MR_Word transform_hlds__term_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15, (MR_Integer) 0)));

      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15, (MR_Integer) 1)));
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = ((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      if ((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
        {
          transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(transform_hlds__term_pass2__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(
  void * transform_hlds__term_pass2__env_ptr_arg)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, &(transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15, (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13, transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3, transform_hlds__term_pass2__env_ptr);
          }
        }
        (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(
  MR_Word transform_hlds__term_pass2__ModuleInfo_6,
  MR_Word transform_hlds__term_pass2__PassInfo_7,
  MR_Word transform_hlds__term_pass2__SCC_8,
  MR_Integer transform_hlds__term_pass2__SingleArgs_9,
  MR_Word * transform_hlds__term_pass2__Termination_10)
{
  {
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s transform_hlds__term_pass2__env;

    {
      MR_Word transform_hlds__term_pass2__InitRecSuppliers_11;
      MR_Word transform_hlds__term_pass2__Termination0_12;
      MR_Word transform_hlds__term_pass2__Result_30;

      {
        transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(transform_hlds__term_pass2__SCC_8, transform_hlds__term_pass2__ModuleInfo_6, &transform_hlds__term_pass2__InitRecSuppliers_11);
      }
      {
        transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1, transform_hlds__term_pass2__SCC_8, transform_hlds__term_pass2__InitRecSuppliers_11, &transform_hlds__term_pass2__Result_30);
      }
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result_30)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word transform_hlds__term_pass2__Errors_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Result_30, (MR_Integer) 0)));

          {
            transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__Errors_47));
          }
        }
      else
        {
          MR_Word transform_hlds__term_pass2__CallInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_30, (MR_Integer) 0)));
          MR_Word transform_hlds__term_pass2__InfCalls_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_31, (MR_Integer) 0)));
          MR_Word transform_hlds__term_pass2__CallWeights_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_31, (MR_Integer) 1)));
          MR_Word transform_hlds__term_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_30, (MR_Integer) 1)));

          if ((transform_hlds__term_pass2__InfCalls_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word transform_hlds__term_pass2__Cycles_41;
              MR_Word transform_hlds__term_pass2__PPIds_57;
              MR_Word transform_hlds__term_pass2__V_42_42;
              MR_Word transform_hlds__term_pass2__V_43_43;

              {
                mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_34, &transform_hlds__term_pass2__PPIds_57);
              }
              {
                transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__CallWeights_34, transform_hlds__term_pass2__PPIds_57, &transform_hlds__term_pass2__Cycles_41);
              }
              (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__Cycles_41)) == (MR_mktag((MR_Integer) 1)));
              if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
                {
                  transform_hlds__term_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_41, (MR_Integer) 0)));
                  transform_hlds__term_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_41, (MR_Integer) 1)));
                  {
                    MR_Word transform_hlds__term_pass2__ReportedCycles_46;
                    MR_Integer transform_hlds__term_pass2__MaxErrors_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 0)));
                    MR_Integer transform_hlds__term_pass2__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 2)));

                    {
                      mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_49, transform_hlds__term_pass2__Cycles_41, &transform_hlds__term_pass2__ReportedCycles_46);
                    }
                    {
                      transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__ReportedCycles_46));
                    }
                  }
                }
              else
                {
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
                  transform_hlds__term_pass2__Termination0_12 = (MR_Word) &transform_hlds__term_pass2_scalar_common_3[0];
                }
            }
          else
            {
              MR_Integer transform_hlds__term_pass2__MaxErrors_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1)));
              MR_Word transform_hlds__term_pass2__ReportedInfCalls_40;
              MR_Word transform_hlds__term_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 0)));
              MR_Integer transform_hlds__term_pass2__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 2)));

              {
                mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_38, transform_hlds__term_pass2__InfCalls_33, &transform_hlds__term_pass2__ReportedInfCalls_40);
              }
              {
                transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__ReportedInfCalls_40));
              }
            }
        }
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__Termination0_12)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Integer transform_hlds__term_pass2__ProcCount_14;

          (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, (MR_Integer) 0)));
          {
            mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass2__SCC_8, &transform_hlds__term_pass2__ProcCount_14);
          }
          (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = (transform_hlds__term_pass2__ProcCount_14 <= transform_hlds__term_pass2__SingleArgs_9);
          if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
            {
              {
                transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(&transform_hlds__term_pass2__env);
              }
              (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = !((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded);
            }
          if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
            {
              MR_Word transform_hlds__term_pass2__SingleArgTerminates_17;

              if ((transform_hlds__term_pass2__SCC_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_single_arg\'/4", (MR_String) "empty SCC");
                    return;
                  }
                }
              else
                {
                  MR_Word transform_hlds__term_pass2__FirstPPId_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__SCC_8, (MR_Integer) 0)));
                  MR_Word transform_hlds__term_pass2__LaterPPIds_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__SCC_8, (MR_Integer) 1)));
                  MR_Integer transform_hlds__term_pass2__FirstArity_66;
                  MR_Word transform_hlds__term_pass2__TrialPPId_67;
                  MR_Word transform_hlds__term_pass2__RestSCC_68;
                  MR_Word transform_hlds__term_pass2__ProcInfo_77;
                  MR_Word transform_hlds__term_pass2__HeadVars_78;
                  MR_Word transform_hlds__term_pass2__V_76_76;

                  {
                    hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__FirstPPId_64, &transform_hlds__term_pass2__V_76_76, &transform_hlds__term_pass2__ProcInfo_77);
                  }
                  {
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_77, &transform_hlds__term_pass2__HeadVars_78);
                  }
                  {
                    mercury__list__length_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__HeadVars_78, &transform_hlds__term_pass2__FirstArity_66);
                  }
                  {
                    transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__LaterPPIds_65, transform_hlds__term_pass2__FirstPPId_64, transform_hlds__term_pass2__FirstArity_66, &transform_hlds__term_pass2__TrialPPId_67, &transform_hlds__term_pass2__RestSCC_68);
                  }
                  {
                    transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__PassInfo_7, transform_hlds__term_pass2__TrialPPId_67, transform_hlds__term_pass2__RestSCC_68, (MR_Integer) 1, &transform_hlds__term_pass2__SingleArgTerminates_17);
                  }
                }
              switch (transform_hlds__term_pass2__SingleArgTerminates_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
                    *transform_hlds__term_pass2__Termination_10 = (MR_Word) &transform_hlds__term_pass2_scalar_common_3[0];
                  }
                  break;
              }
            }
          else
            *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
        }
      else
        *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_pass2. */
